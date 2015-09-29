package actors.enemies;
import actors.actorsAI.LaunchAI;
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
class LaunchEnemy extends Enemy
{
	
	private var aoeAttack:Attack;
	private var originalWidth:Int;
	private var originalHeight:Int;
	private var aoeWidth:Int;
	private var aoeHeight:Int;
	
	public function new(homeSpawn:SpawnPoint) 
	{
		
		var enemyWidth:Int = 40;
		var enemyHeight:Int = 32;
		aoeWidth = 64;
		aoeHeight = 40;
		originalWidth = enemyWidth;
		originalHeight = enemyHeight;
		
		var leftIdle:Animation = new Animation
			("LeftIdle", 0, new Point(), enemyWidth, enemyHeight, [new Point()]);
		var rightIdle:Animation = new Animation
			("RightIdle", 0, new Point(0, enemyHeight), enemyWidth, enemyHeight, [new Point()]);
		
		var leftWalk:Animation = new Animation
			("LeftWalk", 3, new Point(), enemyWidth, enemyHeight, [new Point(), new Point(), new Point(1), new Point(2)]);
		var rightWalk:Animation = new Animation
			("RightWalk", 3, new Point(0, enemyHeight), enemyWidth, enemyHeight, [new Point(), new Point(), new Point(1), new Point(2)]);
		
		var leftWindup:Animation = new Animation
			("LeftWindup", 1, new Point(0, enemyHeight * 2), enemyWidth, enemyHeight, [new Point(), new Point(1), new Point(2), new Point(1),]);
		var rightWindup:Animation = new Animation
			("RightWindup", 1, new Point(0, enemyHeight * 3), enemyWidth, enemyHeight, [new Point(), new Point(1), new Point(2), new Point(1), ]);
		
		var leftAttack:Animation = new Animation
			("LeftAttack", 1, new Point(0, enemyHeight * 4), aoeWidth, aoeHeight, [new Point(), new Point(0, 1)]);
		var rightAttack:Animation = new Animation
			("RightAttack", 1, new Point(0, enemyHeight * 4 + aoeHeight * 2), aoeWidth, aoeHeight, [new Point(), new Point(0, 1)]);
		
		animations = new Map<String,Animation>();
		animations["Idle"] = leftIdle;
		animations[leftIdle.getName()] = leftIdle;
		animations[rightIdle.getName()] = rightIdle;
		animations[leftWalk.getName()] = leftWalk;
		animations[rightWalk.getName()] = rightWalk;
		animations[leftWindup.getName()] = leftWindup;
		animations[rightWindup.getName()] = rightWindup;
		animations[leftAttack.getName()] = leftAttack;
		animations[rightAttack.getName()] = rightAttack;
		
		currentAnimation = leftIdle;
		alignmentLeft = true;
		var mover:ObjectMover = new ObjectMover(.1, .1, 0, 0, 0, 0, 2, 60, 2);
		
		super(this, Main.getBitmapAsset("assets/LaunchEnemy.png"), mover, enemyWidth, enemyHeight, homeSpawn, new LaunchAI());
		
		health = 2;
		invulDuration = 15;
		this.collisionBounds = new Rectangle(4, 10, 28, 18);
		
		var hitBoxes:Array<Rectangle> = [];
		hitBoxes.push(new Rectangle( -5, -5, aoeWidth + 10, aoeHeight + 10));
		aoeAttack = new Attack(new ObjectMover(.1, .1, 0, 0, 0, 0, 0, 0, 0, 5, false), hitBoxes, -1, 1, 0, "Attack", "", true);
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
		else if (currentAnimation.getName().indexOf("Windup") >= 0) 
			return;
		else if (Math.abs(currentMover.getXVel()) < .1)
			setAnimation("Idle");
		else if (Math.abs(currentMover.getXVel()) > .1)
			setAnimation("Walk");
	}
	
	override public function stopLeft():Void 
	{
		currentMover.stopLeft();
		if (defaultMover != currentMover)
			defaultMover.stopLeft();
		if (currentMover.getIsGrounded() && currentMover.getTargetXVel() == 0)
			setAnimation("Idle");
	}
	override public function stopRight():Void 
	{	
		currentMover.stopRight();
		if (defaultMover != currentMover)
			defaultMover.stopRight();
		if (currentMover.getIsGrounded() && currentMover.getTargetXVel() == 0)
			setAnimation("Idle");
	}
	override public function goLeft():Void 
	{
		super.goLeft();
		alignmentLeft = true;
	}
	override public function goRight():Void 
	{
		super.goRight();
		alignmentLeft = false;
	}
	
	private override function setAnimation(action:String):Void {
		
		if (alignmentLeft)
			currentAnimation = getAnimation("Left" + action);
		else
			currentAnimation = getAnimation("Right" + action);
	}
	
	public function windup():Void {
		stopLeft();
		stopRight();
		currentMover.freeze();
		setAnimation("Windup");
	}
	public function launchAttack():Void {
		attackBehavior = aoeAttack;
		initiateAttack();
		actorWidth = aoeWidth;
		actorHeight = aoeHeight;
		this.x -= (aoeWidth - originalWidth) / 2 + 4;
		this.y -= (aoeHeight - originalHeight) / 2 + 4;
	}
	public function endLaunchAttack():Void {
		endAttack();
		actorWidth = originalWidth;
		actorHeight = originalHeight;
		this.x += (aoeWidth - originalWidth) / 2 + 4;
		this.y += (aoeHeight - originalHeight) / 2 + 4;
	}
	
	override public function createClone(spawnPoint:SpawnPoint):Enemy 
	{
		return new LaunchEnemy(spawnPoint);
	}
}