package actors;

import actors.abilities.Ability;
import actors.abilities.DashAbility;
import actors.abilities.LaunchAbility;
import actors.abilities.ProjectileAbility;
import actors.attacks.AbsorbAttack;
import actors.attacks.Attack;
import actors.attacks.EnemyProjectile;
import actors.attacks.PlayerProjectile;
import actors.attacks.Projectile;
import actors.attacks.ProjectileAttack;
import actors.enemies.DashEnemy;
import actors.enemies.Enemy;
import actors.enemies.LaunchEnemy;
import actors.enemies.ProjectileEnemy;
import maps.AreaMap;
import maps.mapobjects.MapObject;
import maps.mapobjects.Portal;
import openfl.events.KeyboardEvent;
import openfl.ui.Keyboard;
import openfl.utils.Dictionary;
import openfl.display.Bitmap;
import openfl.display.BitmapData;
import openfl.geom.Point;
import openfl.geom.Rectangle;
import openfl.Vector;
import maps.mapobjects.Tile;
import maps.mapobjects.Checkpoint;

/**
 * ...
 * @author Peltast
 */
class Player extends Actor
{
	
	private var jumpAttack:Attack;
	private var standAttack:Attack;
	private var ability:Ability;
	
	public function new() 
	{
		Main.getSingleton().stage.addEventListener(KeyboardEvent.KEY_UP, checkKeysUp);
		Main.getSingleton().stage.addEventListener(KeyboardEvent.KEY_DOWN, checkKeysDown);
		
		var mover:ObjectMover = new ObjectMover(.5, .1, 0, 0, 0, 0, 60, 60, 2);
		var playerWidth:Int = 32;
		var playerHeight:Int = 36;
		
		var rightIdle:Animation = new Animation
			("RightIdle", 3, new Point(0, 0), playerWidth, playerHeight, [new Point(), new Point(1), new Point(2)]);
		var leftIdle:Animation = new Animation
			("LeftIdle", 3, new Point(0, playerHeight), playerWidth, playerHeight, [new Point(), new Point(1), new Point(2)]);
		
		var rightWalk:Animation = new Animation
			("RightWalk", 3, new Point(0, playerHeight * 2), playerWidth, playerHeight,
			[new Point(), new Point(1, 0), new Point(2, 0), new Point(3, 0)]);
		var leftWalk:Animation = new Animation
			("LeftWalk", 3, new Point(0, playerHeight * 3), playerWidth, playerHeight,
			[new Point(), new Point(1, 0), new Point(2, 0), new Point(3, 0)]);
		
		var rightJump:Animation = new Animation
			("RightJump", 0, new Point(0, playerHeight * 4), playerWidth, playerHeight, [new Point()]);
		var leftJump:Animation = new Animation
			("LeftJump", 0, new Point(playerWidth * 2, playerHeight * 4), playerWidth, playerHeight, [new Point()]);
		
		var rightFall:Animation = new Animation
			("RightFall", 0, new Point(playerWidth, playerHeight * 4), playerWidth, playerHeight, [new Point()]);
		var leftFall:Animation = new Animation
			("LeftFall", 0, new Point(playerWidth * 3, playerHeight * 4), playerWidth, playerHeight, [new Point()]);
		
		var rightHurt:Animation = new Animation
			("RightHurt", 1, new Point(0, playerHeight * 5), playerWidth, playerHeight, [new Point(), new Point(1)]);
		var leftHurt:Animation = new Animation
			("LeftHurt", 1, new Point(playerWidth * 2, playerHeight * 5), playerWidth, playerHeight, [new Point(), new Point(1)]);
		
		var dashLeft:Animation = new Animation
			("LeftDash", 1, new Point(0, playerHeight * 6), playerWidth, playerHeight, [new Point(), new Point(1)]);
		var dashRight:Animation = new Animation
			("RightDash", 1, new Point(playerWidth * 2, playerHeight * 6), playerWidth, playerHeight, [new Point(), new Point(1)]);
		var dashRestLeft:Animation = new Animation
			("LeftDashRest", 5, new Point(0, playerHeight * 7), playerWidth, playerHeight, [new Point(), new Point(1)]);
		var dashRestRight:Animation = new Animation
			("RightDashRest", 5, new Point(playerWidth * 2, playerHeight * 7), playerWidth, playerHeight, [new Point(), new Point(1)]);
		
		var leftLaunch:Animation = new Animation
			("LeftLaunch", 1, new Point(0, playerHeight * 6), 40, 40, [new Point(), new Point(1)]);
		var rightLaunch:Animation = new Animation
			("RightLaunch", 1, new Point(0, playerHeight * 6), 40, 40, [new Point(), new Point(1)]);
		var leftLaunchRest:Animation = new Animation
			("LeftLaunchRest", 10, new Point(0, playerHeight * 6 + 40), playerWidth, playerHeight, [new Point(), new Point(1)]);
		var rightLaunchRest:Animation = new Animation
			("RightLaunchRest", 10, new Point(0, playerHeight * 6 + 40), playerWidth, playerHeight, [new Point(), new Point(1)]);
		
		var rightProjectile:Animation = new Animation
			("RightProjectile", 1, new Point(0, playerHeight * 6), playerWidth, playerHeight, [new Point(), new Point(1), new Point(2), new Point(3)], 10);
		var leftProjectile:Animation = new Animation
			("LeftProjectile", 1, new Point(0, playerHeight * 7), playerWidth, playerHeight, [new Point(), new Point(1), new Point(2), new Point(3)], 10); 
		
		
		animations = new Map<String, Animation>();
		animations[rightIdle.getName()] = rightIdle;
		animations[leftIdle.getName()] = leftIdle;
		animations[leftWalk.getName()] = leftWalk;
		animations[rightWalk.getName()] = rightWalk;
		animations[rightJump.getName()] = rightJump;
		animations[rightFall.getName()] = rightFall;
		animations[leftJump.getName()] = leftJump;
		animations[leftFall.getName()] = leftFall;
		animations[rightHurt.getName()] = rightHurt;
		animations[leftHurt.getName()] = leftHurt;
		
		animations[dashLeft.getName()] = dashLeft;
		animations[dashRight.getName()] = dashRight;
		animations[dashRestLeft.getName()] = dashRestLeft;
		animations[dashRestRight.getName()] = dashRestRight;
		
		animations[leftLaunch.getName()] = leftLaunch;
		animations[rightLaunch.getName()] = rightLaunch;
		animations[leftLaunchRest.getName()] = leftLaunchRest;
		animations[rightLaunchRest.getName()] = rightLaunchRest;
		
		animations[leftProjectile.getName()] = leftProjectile;
		animations[rightProjectile.getName()] = rightProjectile;
		
		currentAnimation = rightIdle;
		
		
		var hits:Array<Rectangle> = new Array<Rectangle>();
		hits.push(new Rectangle( -2, playerHeight, playerWidth + 4, 14));
		jumpAttack = new AbsorbAttack(new ObjectMover(.5, .1, 0, 60, 0, 10, 0, 60, 0), hits, 60, 3);
		
		hits = [];
		hits.push(new Rectangle( -2 - 10, 0, 10, playerWidth));
		hits.push(new Rectangle(playerWidth + 2, 0, 10, playerWidth));
		standAttack = new Attack(new ObjectMover(.5, .1, 0, 0, 0, 0, 0, 60, 0), hits, 15, 1, 0);
		
		super(this, Main.getBitmapAsset("assets/Player.png"), true, animations, mover, playerWidth, playerHeight);
		
		maxHealth = 20;
		health = 20;
		
		this.collisionBounds = new Rectangle(4, 6, 24, 30);
		this.originalBounds = this.collisionBounds;
	}
	
	public function updatePlayer():Void {
		
		//currentMap.updateCheckpoints(this);
		
		centerScreen();
		handleAnimation();
		
		if (y > currentMap.getMapHeight())
			kill();
	}
	
	
	private function isStunned():Bool {
		if (stunCount <= 0) return false;
		return true;
	}
	
	private function handleAnimation():Void {
		
		if (stunCount > 0 && invulnerable)
			return;
		if (attackBehavior != null) {
			
			if (attackBehavior.hasAnimation()) {	
				setAnimation(attackBehavior.getAnimation());
				return;
			}
		}
		if (stunCount > 0 && currentAnimation.getName().indexOf("Rest") >= 0)
			return;
		else if (!currentMover.getIsGrounded() && currentMover.getYVel() > 0)
			setAnimation("Fall");
		else if (!currentMover.getIsGrounded() && currentMover.getYVel() < 0)
			setAnimation("Jump");
		else if (Math.abs(currentMover.getXVel()) < .1)
			setAnimation("Idle");
		else if (Math.abs(currentMover.getXVel()) > .1)
			setAnimation("Walk");
	}
	
	private function centerScreen():Void {
		
			var screenHeight:Float = 360;
			var screenWidth:Float = 540;
			var scale:Int = 1;
			screenHeight = screenHeight / scale;
			screenWidth = screenWidth / scale;
			
			var mapWidth:Int = currentMap.getMapWidth();
			var mapHeight:Int = currentMap.getMapHeight();
			mapWidth = mapWidth * scale;
			mapHeight = mapHeight * scale;
			
			// If the map is narrower than the screen, just center X-axis around the map.
			if (mapWidth < screenWidth * scale)
				currentMap.x = ((screenWidth * scale) / 2 - (mapWidth) / 2) / scale;
			
			else {
				// Otherwise, center it around the player.
				currentMap.x = screenWidth / 2 - this.x;
				
				if (currentMap.x > 0)	// Don't go beyond the map's left border.
					currentMap.x = 0;
				else if (this.x + screenWidth / 2 > mapWidth)  // And don't go beyond the map's right border.
					currentMap.x = screenWidth - mapWidth;
			}
			
			// If the map is shorter than the screen, just center Y-axis around the map.
			if (mapHeight < screenHeight * scale)
				currentMap.y = ((screenHeight * scale) / 2 - mapHeight / 2) / scale;
			
			else {
				// Otherwise, center it around the player.
				currentMap.y = screenHeight / 2 - this.y;
				
				if (currentMap.y > 0)	// Don't go beyond the map's top border.
					currentMap.y = 0;
				else if (this.y + screenHeight / 2 > mapHeight)	// And don't go beyond the map's lower border.
					currentMap.y = screenHeight - mapHeight;
				
			}
			
	}
	
	
	private override function setGrounded():Void {
		super.setGrounded();
		
		if (currentMover.getIsGrounded() && currentAnimation.getName().indexOf("Fall") >= 0) {
			if (Math.abs(currentMover.getXVel()) < 0.1)
				setAnimation("Idle");
			else
				setAnimation("Walk");
		}
	}
	
	private override function initiateAttack():Void {
		if (this.isAttacking() || isStunned()) return;
		
		if (ability != null) {
			beginAbilityAttack();
			attackBehavior = ability.getAbilityAttack(this, currentMover);
		}
		
		else if (currentMover.getIsGrounded())
			attackBehavior = standAttack;
		else 
			attackBehavior = jumpAttack;
		
		super.initiateAttack();
	}
	private function isAttacking():Bool {
		if (attackBehavior == null) return false;
		else return (attackBehavior.isActive());
	}
	private override function endAttack():Void {
		
		resetAttackAnimation();
		
		if (ability != null)
			endAbilityAttack();
		super.endAttack();
	}
	private function resetAttackAnimation():Void {
		if (attackBehavior == null) return;
		
		if (attackBehavior.hasAnimation())
			currentAnimation.resetAnimation();
	}
	
	private function beginAbilityAttack():Void {
		if (ability.getAbilityHeight() != -1)
			actorHeight = ability.getAbilityHeight();
		if (ability.getAbilityWidth() != -1)
			actorWidth = ability.getAbilityWidth();
	}
	private function endAbilityAttack():Void {
		actorHeight = originalActorHeight;
		actorWidth = originalActorWidth;
	}
	
	private override function takeDamage(damage:Int, source:MapObject):Bool {
		
		if (super.takeDamage(damage, source)) {
			
			stunLock(Math.round(invulDuration / 4));
			damageKnockback(source);
			setAnimation("Hurt");
			
			return true;
		}
		else return false;
	}
	
	override function takeProjectileDamage(projectile:Projectile):Bool 
	{
		if (Std.is(projectile, EnemyProjectile))
			return super.takeProjectileDamage(projectile);
		return false;
	}
	
	private function damageKnockback(source:MapObject):Void {
		var hitAngle:Point = new Point((this.x + this.actorWidth / 2) - (source.x + source.width / 2),
										(this.y + this.actorHeight / 2) - (source.y + source.height / 2));
		currentMover.applyForce(hitAngle, 60);
	}
	
	private override function kill():Void {
		super.kill();
		
		var checkpoint:MapObject = currentMap.getCurrentCheckpoint();
		if (checkpoint == null) return;
		
		this.health = maxHealth;
		this.x = checkpoint.x + 6;
		this.y = checkpoint.y - 4;
	}
	
	public function absorbAbility(enemy:Enemy):Void {
		
		if (Std.is(enemy, DashEnemy)) {	
			ability = new DashAbility();
			this.baseBmp = Main.getBitmapAsset("assets/PlayerDash.png");
		}
		else if (Std.is(enemy, LaunchEnemy)) {
			ability = new LaunchAbility();
			this.baseBmp = Main.getBitmapAsset("assets/PlayerLaunch.png");
		}
		else if (Std.is(enemy, ProjectileEnemy)) {
			ability = new ProjectileAbility();
			this.baseBmp = Main.getBitmapAsset("assets/PlayerProjectile.png");
		}
	}
	private function removeAbility():Void {
		ability = null;
		this.baseBmp = Main.getBitmapAsset("assets/Player.png");
	}
	
	
	private function checkKeysDown(key:KeyboardEvent):Void {
		if (isStunned()) return;
		
		if (key.keyCode == 65 || key.keyCode == 37)
			goLeft();
		else if (key.keyCode == 68 || key.keyCode == 39)
			goRight();
		else if (key.keyCode == 74)
			initiateAttack();
		
		if (key.keyCode == 32) 
			jump();
		
		if (key.keyCode == Keyboard.K)
			removeAbility();
		
		if (key.keyCode == Keyboard.UP || key.keyCode == Keyboard.W)
			currentMap.updateEndPortal(this);
	}
	private function checkKeysUp(key:KeyboardEvent):Void {
		
		if (key.keyCode == 65 || key.keyCode == 37)
			stopLeft();
		else if(key.keyCode == 68 || key.keyCode == 39)
			stopRight();
		else if (key.keyCode == 74)
			stopHoldAttack();
	}
	private function stopHoldAttack():Void {
		if (attackBehavior == null || !attackBehavior.isActive()) return;
		
		if (attackBehavior.getDuration() < 0)
			endAttack();
	}
	
	public override function goLeft():Void {
		super.goLeft();
	}
	public override function goRight():Void {
		super.goRight();
	}
	public override function stopLeft():Void {
		super.stopLeft();
		
	}
	public override function stopRight():Void {
		super.stopRight();
		
	}
	public override function jump():Void {
		super.jump();
		
		if (!currentMover.getIsGrounded())
			setAnimation("Jump");
	}
	
	private override function setAnimation(action:String):Void {
		if (alignmentLeft)
			currentAnimation = getAnimation("Left" + action);
		else
			currentAnimation = getAnimation("Right" + action);
	}

	
}