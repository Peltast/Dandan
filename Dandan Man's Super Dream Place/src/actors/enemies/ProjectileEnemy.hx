package actors.enemies;
import actors.Actor;
import actors.actorsAI.ProjectileAI;
import actors.Animation;
import actors.attacks.EnemyProjectile;
import actors.attacks.ProjectileAttack;
import actors.enemies.Enemy;
import actors.ObjectMover;
import maps.mapobjects.SpawnPoint;
import openfl.geom.Point;
import openfl.geom.Rectangle;

/**
 * ...
 * @author Peltast
 */
class ProjectileEnemy extends Enemy
{
	
	private var projectileAttack:ProjectileAttack;
	
	public function new(spawnPoint:SpawnPoint) 
	{
		var enemySize:Int = 32;
		
		var leftIdle:Animation = new Animation
			("LeftIdle", 4, new Point(), enemySize, enemySize, [new Point(), new Point(1)]);
		var rightIdle:Animation = new Animation
			("RightIdle", 4, new Point(enemySize * 2, 0), enemySize, enemySize, [new Point(), new Point(1)]);
		
		var leftFire:Animation = new Animation
			("LeftFire", 2, new Point(0, enemySize), enemySize, enemySize, [new Point(), new Point(1), new Point(2), new Point(3)]);
		var rightFire:Animation = new Animation
			("RightFire", 2, new Point(0, enemySize * 2), enemySize, enemySize, [new Point(), new Point(1), new Point(2), new Point(3)]);
		
		animations = new Map<String, Animation>();
		animations[leftIdle.getName()] = leftIdle;
		animations[rightIdle.getName()] = rightIdle;
		animations[leftFire.getName()] = leftFire;
		animations[rightFire.getName()] = rightFire;
		
		currentAnimation = leftIdle;
		var mover:ObjectMover = new ObjectMover(.1, .1, 0, 0, 0, 0, 2, 60, 2);
		
		super(this, Main.getBitmapAsset("assets/ProjectileEnemy.png"), 
			mover, 32, 30, spawnPoint, new ProjectileAI());
		
		health = 3;
		invulDuration = 15;
		this.collisionBounds = new Rectangle(0, 4, 32, 26);
		
		projectileAttack = new ProjectileAttack
			(this, new EnemyProjectile(Main.getBitmapAsset("assets/Projectile.png"), 
			new ObjectMover(.5, .1, 10, 0, 0, 0, 10, 0, 0, 0, false), 30, 1), 0, "Fire", "");
		
	}
	
	override function handleAnimation():Void 
	{
		super.handleAnimation();
		
		if (attackBehavior != null) {
			
			if (attackBehavior.hasAnimation()) {	
				setAnimation(attackBehavior.getAnimation());
				return;
			}
		}
		setAnimation("Idle");
	}
	
	public function faceLeft():Void {
		alignmentLeft = true;
	}
	public function faceRight():Void {
		alignmentLeft = false;
	}
	public function fireProjectile():Void {
		attackBehavior = projectileAttack;
		initiateAttack();
	}
	
	private override function setAnimation(action:String):Void {
		
		if (alignmentLeft)
			currentAnimation = getAnimation("Left" + action);
		else
			currentAnimation = getAnimation("Right" + action);
	}
	
	
	override public function createClone(spawnPoint:SpawnPoint):Enemy 
	{
		return new ProjectileEnemy(spawnPoint);
	}
	
}