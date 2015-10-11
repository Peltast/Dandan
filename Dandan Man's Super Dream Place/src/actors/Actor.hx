package actors;

import actors.attacks.Attack;
import actors.attacks.Hitbox;
import actors.attacks.Projectile;
import maps.AreaMap;
import maps.mapobjects.Tile;
import openfl.display.BitmapData;
import openfl.errors.Error;
import maps.mapobjects.MapObject;
import openfl.display.Bitmap;
import openfl.display.Sprite;
import openfl.geom.Point;
import openfl.geom.Rectangle;

/**
 * ...
 * @author Peltast
 */
class Actor extends MapObject
{
	
	private var animations:Map<String, Animation>;
	private var deathAnimation:Animation;
	private var defaultMover:ObjectMover;
	private var currentMover:ObjectMover;
	private var attackBehavior:Attack;
	private var hitBox:Hitbox;
	private var currentMap:AreaMap;
	
	private var alignmentLeft:Bool;
	private var currentAnimation:Animation;
	private var baseBmp:Bitmap;
	private var actorBmp:Bitmap;
	private var actorWidth:Int;
	private var actorHeight:Int;
	private var originalActorWidth:Int;
	private var originalActorHeight:Int;
	
	private var originalBounds:Rectangle;
	private var maxHealth:Int;
	private var health:Int;
	private var stunCount:Int;
	private var invulnerable:Bool;
	private var invulDuration:Int;
	private var invulCount:Int;
	private var unstoppable:Bool;
	
	
	public function new(implementation:Actor, defaultBmp:Bitmap, passable:Bool, animations:Map<String, Animation>, mover:ObjectMover, actorWidth:Int, actorHeight:Int = -1) 
	{
		if (this != implementation) throw new Error("Actor is meant to be used as an abstract class.");
		
		this.actorWidth = actorWidth;
		if (actorHeight == -1)
			actorHeight = actorWidth;
		this.actorHeight = actorHeight;
		this.originalActorHeight = this.actorHeight;
		this.originalActorWidth = this.actorWidth;
		
		this.animations = animations;
		this.baseBmp = defaultBmp;
		this.actorBmp = getAnimationBmp(currentAnimation, defaultBmp);
		
		super(this, actorBmp, passable);
		
		this.defaultMover = mover;
		this.currentMover = defaultMover;
		this.collisionBounds = new Rectangle(0, 0, actorWidth, actorHeight);
		this.originalBounds = collisionBounds;
		
		this.maxHealth = 1;
		this.health = maxHealth;
		unstoppable = false;
		invulnerable = false;
		invulDuration = 30;
		invulCount = 0;
		stunCount = 0;
	}
	
	public function updateActor():Void {
		
		updateStun();
		updateAttack();
		updateHitbox();
		updateActorAnimation();
		currentMover.updateMovement();
		
		if (currentAnimation.getName() == "Death") {	
			checkDeathAnimation();
			return;
		}
		
		moveXAxis();
		moveYAxis();
		
		checkInvulnerable();
		checkDamage();
	}
	
	private function updateStun():Void {
		if (stunCount > 0) stunCount -= 1;
	}
	private function stunLock(duration:Int):Void {
		
		stunCount = duration;
		if (duration > 0)
			currentMover.freeze();
	}
	
	private function updateAttack():Void {
		if (attackBehavior == null) return;
		
		if (attackBehavior.updateAttack(currentMover))
			endAttack();
	}
	private function updateHitbox():Void {
		if (hitBox == null) return;
		
		if (hitBox.updateHitbox())
			removeHitbox();
	}
	private function removeHitbox():Void {
		if (hitBox == null) return;
		
		hitBox.resetHitbox();
		if (this.contains(hitBox))
			removeChild(hitBox);
		hitBox = null;
	}
	private function addHitbox(hitBox:Hitbox):Void {
		if (this.hitBox != null)
			removeHitbox();
		this.addChild(hitBox);
		this.hitBox = hitBox;
	}
	public function isHitting(actor:Actor):Bool {
		if (hitBox == null) return false;
		
		return hitBox.isHitting(this, actor);
	}
	public function getAttackDamage():Int {
		if (attackBehavior == null) return 0;
		return attackBehavior.getDamage();
	}
	public function getAttackBehavior():Attack {
		return attackBehavior;
	}
	
	
	private function updateActorAnimation():Void {
		
		currentAnimation.updateAnimation();
		removeBmp();
		addAnimationBmp(currentAnimation);	
	}
	
	
	private function removeBmp():Void {
		if (this.contains(actorBmp))
			removeChild(actorBmp);
	}
	private function addAnimationBmp(animation:Animation):Void {
		
		actorBmp = getAnimationBmp(currentAnimation,  baseBmp);
		this.addChild(actorBmp);
	}
	
	private function getAnimationBmp(animation:Animation, bitmap:Bitmap):Bitmap {
		
		var frame:Rectangle = animation.getRectangle();
		var animationBmp:Bitmap = new Bitmap(new BitmapData(actorWidth, actorHeight));
		animationBmp.bitmapData.copyPixels(bitmap.bitmapData, frame, new Point());
		
		return animationBmp;
	}
	
	private function getAnimation(title:String):Animation {
		return animations[title];
	}
	public function getAnimationName():String {
		if (currentAnimation == null)
			return "";
		return currentAnimation.getName();
	}
	
	private function checkDamage():Void {
		
		var hitboxCollisions:Array<Actor> = currentMap.checkActorHitBoxes(this);
		if (hitboxCollisions.length > 0)
			takeActorDamage(hitboxCollisions[0], hitboxCollisions[0].getAttackBehavior());
		
		var projectileCollisions:Array<Projectile> = currentMap.checkProjectileBounds(this);
		if (projectileCollisions.length > 0) {
			if (takeProjectileDamage(projectileCollisions[0]))
				currentMap.removeProjectile(projectileCollisions[0]);
		}
	}
	private function checkInvulnerable():Void {
		if (invulnerable) {
			invulCount += 1;
			if (invulCount >= invulDuration) {
				invulnerable = false;
				this.alpha = 1;
				invulCount = 0;
			}
		}
	}
	
	private function takeActorDamage(actor:Actor, attack:Attack):Bool {
		return takeDamage(actor.getAttackDamage(), actor);
	}
	private function takeProjectileDamage(projectile:Projectile):Bool {
		return takeDamage(projectile.getProjectileDamage(), projectile);
	}
	private function takeDamage(damage:Int, source:MapObject):Bool {
		if (invulnerable) return false;
		else if (unstoppable) return false;
		
		health -= damage;
		
		calculateDamage(source);
		
		return true;
	}
	private function calculateDamage(source:MapObject):Void {
		
		if (health <= 0) {	
			kill();
		}
		else {
			this.alpha = .7;
			invulnerable = true;
		}
	}
	
	private function kill():Void {
		endAttack();
		currentMover.freeze();
		
		if (deathAnimation != null)
			setAnimation("Death");
		else
			handleDeath();
	}
	private function checkDeathAnimation():Void {
		if (currentAnimation == deathAnimation && currentAnimation.isFinished()) {
			deathAnimation.resetAnimation();
			handleDeath();
		}
	}
	private function handleDeath():Void {
		return;
	}
	
	private function setGrounded():Void {
		currentMover.setGrounded();
	}
	private function initiateAttack():Void {
		if (attackBehavior == null) return;
		
		attackBehavior.startAttack();
		
		if (attackBehavior.grantsUnstoppable())
			unstoppable = true;
		if (attackBehavior.getMovement() != null)
			currentMover = attackBehavior.getMovement();
		if (attackBehavior.getHits() != null) {
			addHitbox(attackBehavior.getHits());
		}
	}
	private function endAttack():Void {
		if (attackBehavior == null) return;
		
		revertAttackProperties();
		endAttackStun();
		
		removeHitbox();
		attackBehavior = null;
	}
	private function revertAttackProperties():Void {
		
		if (attackBehavior.grantsUnstoppable())
			unstoppable = false;
		if (attackBehavior.getMovement() != null)
			currentMover = defaultMover;
	}
	private function endAttackStun():Void {
		
		stunLock(attackBehavior.getStunDuration());
		if (attackBehavior.hasStunAnimation())
			setAnimation(attackBehavior.getStunAnimation());
	}
	
	private function damageKnockback(source:MapObject):Void {
		var hitAngle:Point = new Point((this.x + this.actorWidth / 2) - (source.x + source.width / 2),
										(this.y + this.actorHeight / 2) - (source.y + source.height / 2));
		currentMover.applyForce(hitAngle, 60);
	}
	
	public function goLeft():Void {
		alignmentLeft = true;
		currentMover.goLeft();
		if (defaultMover != currentMover)
			defaultMover.goLeft();
	}
	public function goRight():Void {
		alignmentLeft = false;
		currentMover.goRight();
		if (defaultMover != currentMover)
			defaultMover.goRight();
	}
	public function stopLeft():Void {
		currentMover.stopLeft();
		if (defaultMover != currentMover)
			defaultMover.stopLeft();
	}
	public function stopRight():Void {
		currentMover.stopRight();
		if (defaultMover != currentMover)
			defaultMover.stopRight();
	}
	public function jump():Void {
		currentMover.jump();
	}
	
	private function moveXAxis():Void {
		
		this.x += Math.round(currentMover.getXVel());
		
		var collisions:Array<MapObject> = currentMap.checkCollisions(this);
		var actorCollisions:Array<Actor> = currentMap.checkActorCollisions(this);
		if (checkFatalTiles(collisions, true)) {
			kill();
			return;
		}
		else if (checkActorCollision(actorCollisions, true)) {
			collisions.push(actorCollisions[0]);
		}
		
		var largestDistance:Int = getCollisionLargestDistance(collisions, true);
		
		if (largestDistance != 0)
			this.x -= largestDistance;
	}
	private function moveYAxis():Void {
		
		this.y += Math.round(currentMover.getYVel());
		
		var collisions:Array<MapObject> = currentMap.checkCollisions(this);
		var actorCollisions:Array<Actor> = currentMap.checkActorCollisions(this);
		if (checkFatalTiles(collisions, false)) {
			kill();
			return;
		}
		else if (checkActorCollision(actorCollisions, false)) {
			collisions.push(actorCollisions[0]);
		}
		
		var largestDistance:Int = getCollisionLargestDistance(collisions, false);
		
		if (largestDistance != 0)
			this.y -= largestDistance;
		if (largestDistance > 0)
			setGrounded();
	}
	
	private function checkFatalTiles(collisionList:Array<MapObject>, xAxis:Bool):Bool {
		
		for (i in 0...collisionList.length) {
			if (Std.is(collisionList[i], Tile)) {
				
				var tempTile:Tile = cast collisionList[i];
				if (tempTile.checkFatal(this, xAxis))
					return true;
			}
		}
		return false;
	}
	private function checkActorCollision(collisionList:Array<Actor>, xAxis:Bool):Bool {
		
		for (i in 0...collisionList.length) {
			if (Std.is(collisionList[i], Actor) && collisionList[i] != this) {
				return true;
			}
		}
		return false;
	}
	
	private function getCollisionLargestDistance(collisionList:Array<MapObject>, xAxis:Bool):Int {
		var largestDistance:Int = 0;
		var largestIndex:Int = -1;
		var tempDistance:Int;
		
		for (i in 0...collisionList.length) {
			if (!collisionList[i].getPassable()) continue;
			
			tempDistance = getCollisionDistance(collisionList[i], xAxis);
			if (Math.abs(tempDistance) > Math.abs(largestDistance)) {
				largestDistance = tempDistance;
				largestIndex = i;
			}
		}
		
		return largestDistance;
	}
	
	private function setAnimation(animation:String):Void {
		currentAnimation = animations[animation];
	}
	
	public function isFacingLeft():Bool { return alignmentLeft; }
	public function getCurrentMap():maps.AreaMap { return currentMap; }
	public function setCurrentMap(map:maps.AreaMap):Void { currentMap = map; }
	
}