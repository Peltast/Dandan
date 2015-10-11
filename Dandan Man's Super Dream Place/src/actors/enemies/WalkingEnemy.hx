package actors.enemies;
import actors.Actor;
import actors.Animation;
import actors.ObjectMover;
import actors.actorsAI.PaceAI;
import actors.attacks.Attack;
import actors.enemies.Enemy;
import maps.mapobjects.MapObject;
import maps.mapobjects.SpawnPoint;
import openfl.geom.Point;
import openfl.geom.Rectangle;

/**
 * ...
 * @author Peltast
 */
class WalkingEnemy extends Enemy
{

	public function new(homeSpawn:SpawnPoint) 
	{
		
		var enemySize:Int = 32;
		
		var normalIdle:Animation = new Animation
			("Idle", 0, new Point(0, 0), enemySize, enemySize, [new Point(0, 0)]);
		var leftWalk:Animation = new Animation
			("LeftWalk", 5, new Point(0, enemySize), enemySize, enemySize,
			[new Point(), new Point(1, 0), new Point(2, 0), new Point(3, 0)]);
		var rightWalk:Animation = new Animation
			("RightWalk", 5, new Point(0, enemySize * 2), enemySize, enemySize,
			[new Point(), new Point(1, 0), new Point(2, 0), new Point(3, 0)]);
		var jump:Animation = new Animation
			("Jump", 0, new Point(enemySize * 2, 0), enemySize, enemySize, [new Point()]);
		var hurt:Animation = new Animation
			("Hurt", 1, new Point(enemySize, 0), enemySize, enemySize, [new Point(), new Point(1)]);
		deathAnimation = new Animation
			("Death", 1, new Point(0, enemySize * 3), enemySize, enemySize, [new Point(), new Point(1), new Point(2), new Point(3)], 0, false);
		
		animations = new Map<String, Animation>();
		animations[normalIdle.getName()] = normalIdle;
		animations[leftWalk.getName()] = leftWalk;
		animations[rightWalk.getName()] = rightWalk;
		animations[jump.getName()] = jump;
		animations[hurt.getName()] = hurt;
		animations[deathAnimation.getName()] = deathAnimation;
		
		currentAnimation = normalIdle;
		var mover:ObjectMover = new ObjectMover(.1, .1, 0, 0, 0, 0, 2, 60, 2);
		
		super(this, Main.getBitmapAsset("assets/WalkingEnemy.png"), mover, enemySize, enemySize - 2, homeSpawn, new PaceAI());
		
		health = 2;
		touchDamage = 1;
		invulDuration = 15;
		
		var hits:Array<Rectangle> = new Array<Rectangle>();
		hits.push(new Rectangle(-1, -1, actorWidth + 2, actorHeight));
		attackBehavior = new Attack(mover, hits, -1, 1, 0);
		initiateAttack();
		
	}
	
	override function handleAnimation():Void 
	{
		super.handleAnimation();
		
		if (currentAnimation == deathAnimation)
			return;
		if (invulnerable)
			return;
		if (!currentMover.getIsGrounded())
			currentAnimation = getAnimation("Jump");
		else if (Math.abs(currentMover.getXVel()) < .1)
			currentAnimation = getAnimation("Idle");
		else if (currentMover.getXVel() > .1)
			currentAnimation = getAnimation("RightWalk");
		else if (currentMover.getXVel() < -.1)
			currentAnimation = getAnimation("LeftWalk");	
	}
	
	override function damageReaction(source:MapObject):Void 
	{
		super.damageReaction(source);
		
		damageKnockback(source);
		currentAnimation = getAnimation("Hurt");
	}
	
	override public function createClone(spawnPoint:SpawnPoint):Enemy 
	{
		return new WalkingEnemy(spawnPoint);
	}
	
}