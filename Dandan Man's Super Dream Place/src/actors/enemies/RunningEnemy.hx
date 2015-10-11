package actors.enemies;
import actors.actorsAI.RunningAI;
import actors.Animation;
import actors.attacks.Attack;
import actors.ObjectMover;
import maps.mapobjects.MapObject;
import maps.mapobjects.SpawnPoint;
import openfl.geom.Point;
import openfl.geom.Rectangle;

/**
 * ...
 * @author Peltast
 */
class RunningEnemy extends Enemy
{

	public function new(homeSpawn:SpawnPoint) 
	{
		
		var enemyWidth:Int = 32;
		var enemyHeight:Int = 40;
		
		var leftIdle:Animation = new Animation
			("LeftIdle", 3, new Point(), enemyWidth, enemyHeight, [new Point(), new Point(1)]);
		var rightIdle:Animation = new Animation
			("RightIdle", 3, new Point(enemyWidth * 2), enemyWidth, enemyHeight, [new Point(), new Point(1)]);
		
		var leftRun:Animation = new Animation
			("LeftRun", 1, new Point(0, enemyHeight), enemyWidth, enemyHeight, [new Point(), new Point(1)]);
		var rightRun:Animation = new Animation
			("RightRun", 1, new Point(enemyWidth * 2, enemyHeight), enemyWidth, enemyHeight, [new Point(), new Point(1)]);
		
		var leftHurt:Animation = new Animation
			("LeftHurt", 1, new Point(0, enemyHeight * 2), enemyWidth, enemyHeight, [new Point(), new Point(1)]);
		var rightHurt:Animation = new Animation
			("RightHurt", 1, new Point(enemyWidth * 2, enemyHeight * 2), enemyWidth, enemyHeight, [new Point(), new Point(1)]);
		
		animations = new Map<String,Animation>();
		animations[leftIdle.getName()] = leftIdle;
		animations[rightIdle.getName()] = rightIdle;
		animations[leftRun.getName()] = leftRun;
		animations[rightRun.getName()] = rightRun;
		animations[leftHurt.getName()] = leftHurt;
		animations[rightHurt.getName()] = rightHurt;
		
		currentAnimation = leftIdle;
		var mover:ObjectMover = new ObjectMover(1, 1, 0, 0, 0, 0, 10, 60, 0);
		
		super(this, Main.getBitmapAsset("assets/RunningEnemy.png"), mover, enemyWidth, enemyHeight, homeSpawn, new RunningAI());
		
		var hits:Array<Rectangle> = new Array<Rectangle>();
		hits.push(new Rectangle(1, -1, enemyWidth - 2, enemyHeight + 2));
		attackBehavior = new Attack(null, hits, -1, 1, 0);
		initiateAttack();
		
		health = 2;
		invulDuration = 15;
		this.collisionBounds = new Rectangle(4, 5, 24, 35);
	}
	
	
	override function handleAnimation():Void 
	{
		super.handleAnimation();
		
		if (invulnerable)
			setAnimation("Hurt");
		else if (Math.abs(currentMover.getXVel()) < .1)
			setAnimation("Idle");
		else
			setAnimation("Run");
	}
	
	override function damageReaction(source:MapObject):Void 
	{
		super.damageReaction(source);
		
		setAnimation("Hurt");
	}
	
	
	private override function setAnimation(action:String):Void {
		
		if (alignmentLeft)
			currentAnimation = getAnimation("Left" + action);
		else
			currentAnimation = getAnimation("Right" + action);
	}
	
	
	override public function createClone(spawnPoint:SpawnPoint):Enemy 
	{
		return new RunningEnemy(spawnPoint);
	}
	
}