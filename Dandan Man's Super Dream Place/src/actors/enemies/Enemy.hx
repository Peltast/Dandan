package actors.enemies;
import actors.attacks.PlayerProjectile;
import actors.attacks.Projectile;
import actors.ObjectMover;
import actors.actorsAI.EnemyAI;
import actors.actorsAI.PaceAI;
import actors.attacks.AbsorbAttack;
import actors.attacks.Attack;
import maps.mapobjects.MapObject;
import maps.mapobjects.SpawnPoint;
import openfl.display.Bitmap;
import openfl.errors.Error;
import openfl.geom.Point;
import openfl.geom.Rectangle;
import openfl.system.ScreenMode;

/**
 * ...
 * @author Peltast
 */
class Enemy extends Actor
{
	private var homeSpawn:SpawnPoint;
	private var enemyAI:EnemyAI;
	private var touchDamage:Int;
	
	public function new(implementation:Enemy, defaultBmp:Bitmap, mover:ObjectMover, enemyWidth:Int, enemyHeight:Int, homeSpawn:SpawnPoint, enemyAI:EnemyAI) 
	{
		if (this != implementation) throw new Error("Enemy is meant to be used as an abstract class.");
		
		super(this, defaultBmp, true, animations, mover, enemyWidth, enemyHeight);
		
		this.homeSpawn = homeSpawn;
		this.enemyAI = enemyAI;
	}
	
	override public function updateActor():Void 
	{
		if (homeSpawn == null) return;
		
		enemyAI.updateAI(this, currentMover);
		handleAnimation();
		
		super.updateActor();
	}
	
	private function handleAnimation():Void {
		return;
	}
	
	private override function takeActorDamage(actor:Actor, attack:Attack):Bool {
		
		if (Std.is(actor, Enemy)) return true;
		
		if (super.takeDamage(actor.getAttackDamage(), actor)) {
			
			if (health <= 0)
				beAbsorbed(actor, attack);
			
			return true;
		}
		else return false;
	}
	override function takeProjectileDamage(projectile:Projectile):Bool 
	{
		if (Std.is(projectile, PlayerProjectile)) {
			damageReaction(projectile);
			return super.takeProjectileDamage(projectile);
		}
		return false;
	}
	
	private function beAbsorbed(actor, attack):Void {
		
		if (Std.is(actor, Player) && Std.is(attack, AbsorbAttack)) {
			var player:Player = cast(actor, Player);
			player.absorbAbility(this);
		}
	}
	private override function calculateDamage(source:MapObject):Void {
		
		if (health <= 0) {	
			kill();
		}
		else {
			this.alpha = .7;
			invulnerable = true;
			damageReaction(source);
		}
	}
	
	override function kill():Void 
	{
		super.kill();
		this.collisionBounds = new Rectangle(0, 0, 0, 0);
	}
	override function handleDeath():Void 
	{
		super.handleDeath();
		currentMap.removeActor(this);
		homeSpawn.enemyDead(this);
	}
	private function damageReaction(source:MapObject):Void {
		return;
	}
	override public function getAttackDamage():Int 
	{
		if (attackBehavior != null)
			return attackBehavior.getDamage();
		return touchDamage;
	}
	
	
	private override function moveXAxis():Void {
		
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
		
		if (collisions.length > 0)
			enemyAI.handleCollision(collisions[0], this, true);
	}
	private override function moveYAxis():Void {
		
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
		
		if (collisions.length > 0)
			enemyAI.handleCollision(collisions[0], this, false);
	}
	
	
	
	public override function goLeft():Void {
		super.goLeft();		
		if (currentAnimation.getName() != "LeftWalk" && currentMover.getIsGrounded())
			currentAnimation = getAnimation("LeftWalk");
	}
	public override function goRight():Void {
		super.goRight();
		if (currentAnimation.getName() != "RightWalk" && currentMover.getIsGrounded())
			currentAnimation = getAnimation("RightWalk");
	}
	public override function stopLeft():Void {
		super.stopLeft();
		
		if (currentMover.getIsGrounded() && currentMover.getTargetXVel() == 0)
			currentAnimation = getAnimation("Idle");
	}
	public override function stopRight():Void {
		super.stopRight();
		
		if (currentMover.getIsGrounded() && currentMover.getTargetXVel() == 0)
			currentAnimation = getAnimation("Idle");
	}
	
	
	public function createClone(spawnPoint:SpawnPoint):Enemy {
		return null;
	}
	
}