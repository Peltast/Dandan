package actors.enemies;
import actors.actorsAI.FlyingAI;
import actors.Animation;
import actors.attacks.Attack;
import actors.enemies.Enemy;
import actors.ObjectMover;
import maps.mapobjects.MapObject;
import maps.mapobjects.SpawnPoint;
import openfl.geom.Point;
import openfl.geom.Rectangle;

/**
 * ...
 * @author Peltast
 */
class FlyingEnemy extends Enemy
{

	private var horizontal:Bool;
	
	public function new(homeSpawn:SpawnPoint, horizontal:Bool) 
	{
		this.horizontal = horizontal;
		
		var enemySize:Int = 32;
		
		var leftIdle:Animation = new Animation
			("LeftIdle", 4, new Point(), enemySize, enemySize, [new Point(), new Point(1)]);
		var rightIdle:Animation = new Animation
			("RightIdle", 4, new Point(0, enemySize), enemySize, enemySize, [new Point(), new Point(1)]);
		
		var leftHurt:Animation = new Animation
			("LeftHurt", 4, new Point(0, enemySize * 2), enemySize, enemySize, [new Point(), new Point(1)]);
		var rightHurt:Animation = new Animation
			("RightHurt", 4, new Point(0, enemySize * 3), enemySize, enemySize, [new Point(), new Point(1)]);
		
		animations = new Map<String,Animation>();
		animations[leftIdle.getName()] = leftIdle;
		animations[rightIdle.getName()] = rightIdle;
		animations[leftHurt.getName()] = leftHurt;
		animations[rightHurt.getName()] = rightHurt;
		
		currentAnimation = leftIdle;
		var mover:ObjectMover = new ObjectMover(.1, .1, 0, 0, 0, 0, 2, 2, 0, 0, true, false);
		
		super(this, Main.getBitmapAsset("assets/FlyingEnemy.png"), mover, enemySize, enemySize, homeSpawn, new FlyingAI(horizontal));
		
		var hits:Array<Rectangle> = new Array<Rectangle>();
		hits.push(new Rectangle(-1, -1, actorWidth + 2, actorHeight));
		attackBehavior = new Attack(null, hits, -1, 1, 0);
		initiateAttack();
		
		health = 1;
		invulDuration = 15;
		this.collisionBounds = new Rectangle(4, 10, 28, 18);
	}
	
	override function handleAnimation():Void 
	{
		super.handleAnimation();
		
		if (invulnerable)
			setAnimation("Hurt");
		else 
			setAnimation("Idle");
	}
	
	override function damageReaction(source:MapObject):Void 
	{
		super.damageReaction(source);
		
		setAnimation("Hurt");
	}
	
	public function goUp():Void {
		alignmentLeft = true;
		currentMover.goUp();
		if (defaultMover != currentMover)
			defaultMover.goUp();
	}
	public function goDown():Void {
		alignmentLeft = false;
		currentMover.goDown();
		if (defaultMover != currentMover)
			defaultMover.goDown();
	}
	
	public function stopUp():Void {
		currentMover.stopUp();
		if (defaultMover != currentMover)
			defaultMover.stopUp();  
	}
	public function stopDown():Void {
		currentMover.stopDown();
		if (defaultMover != currentMover)
			defaultMover.stopDown();
	}
	
	private override function setAnimation(action:String):Void {
		
		if (alignmentLeft)
			currentAnimation = getAnimation("Left" + action);
		else
			currentAnimation = getAnimation("Right" + action);
	}
	
	
	override public function createClone(spawnPoint:SpawnPoint):Enemy 
	{
		return new FlyingEnemy(spawnPoint, horizontal);
	}
	
}