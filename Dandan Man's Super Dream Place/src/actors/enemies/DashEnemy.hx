package actors.enemies;
import actors.ObjectMover;
import actors.actorsAI.DashAI;
import actors.Animation;
import actors.attacks.Attack;
import actors.enemies.Enemy;
import maps.mapobjects.SpawnPoint;
import openfl.geom.Point;
import openfl.geom.Rectangle;

/**
 * ...
 * @author Peltast
 */
class DashEnemy extends Enemy
{
	private var leftDash:Attack;
	private var rightDash:Attack;
	
	public function new(homespawn:SpawnPoint) 
	{
		
		var enemySize = 32;
		
		var restIdle:Animation = new Animation
			("Idle", 20, new Point(), enemySize, enemySize, [new Point(), new Point(1)]);
		var dashLeft:Animation = new Animation
			("DashLeft", 1, new Point(0, enemySize), enemySize, enemySize, [new Point(), new Point(1)]);
		var dashRight:Animation = new Animation
			("DashRight", 1, new Point(enemySize * 2, enemySize), enemySize, enemySize, [new Point(), new Point(1)]);
		
		animations = new Map<String, Animation>();
		animations[restIdle.getName()] = restIdle;
		animations[dashLeft.getName()] = dashLeft;
		animations[dashRight.getName()] = dashRight;
		
		currentAnimation = restIdle;
		var mover:ObjectMover = new ObjectMover(.1, .1, 0, 0, 0, 0, 2, 60, 2);
		
		super(this, Main.getBitmapAsset("assets/DashEnemy.png"), mover, enemySize, enemySize - 2, homespawn, new DashAI()); 
		
		health = 2;
		invulDuration = 15;
		this.collisionBounds = new Rectangle(2, 4, 28, 26);
		
		var hits:Array<Rectangle> = new Array<Rectangle>();
		hits.push(new Rectangle(-7, -2, 23, 40));
		
		leftDash = new Attack
			(new ObjectMover(.5, .1, -15, 0, 0, 0, 60, 60, 0, 0, false), hits,
			15, 3, 20, "DashLeft");
		
		hits = [];
		hits.push(new Rectangle(16, -2, 23, 40));
		
		rightDash = new Attack
			(new ObjectMover(.5, .1, 15, 0, 0, 0, 60, 60, 0, 0, false), hits,
			15, 3, 20, "DashRight");
		
	}
	
	override function handleAnimation():Void 
	{
		super.handleAnimation();
		
		if (attackBehavior != null) {
			
			if (attackBehavior.hasAnimation()) {	
				currentAnimation = animations[attackBehavior.getAnimation()];
				return;
			}
		}
		currentAnimation = animations["Idle"];
	}
	
	public function dashLeft():Void {
		attackBehavior = leftDash;
		initiateAttack();
	}
	public function dashRight():Void {
		attackBehavior = rightDash;
		initiateAttack();
	}
	
	override public function createClone(spawnPoint:SpawnPoint):Enemy 
	{
		return new DashEnemy(spawnPoint);
	}
}