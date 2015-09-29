package actors.actorsAI;
import actors.Actor;
import actors.enemies.LaunchEnemy;
import maps.mapobjects.MapObject;
import openfl.geom.Point;

/**
 * ...
 * @author Peltast
 */
class LaunchAI extends EnemyAI
{

	private var alignmentLeft:Bool;
	private var windupCooldown:Int;
	private var attackCooldown:Int;
	private var visionConeHeight:Int;
	private var visionConeWidth:Int;
	
	public function new() 
	{
		super(this);
		
		if (Math.random() >= .5) alignmentLeft = false;
		else alignmentLeft = true;
		
		visionConeHeight = 96;
		visionConeWidth = 42;
	}
	
	public override function updateAI(actor:Actor, mover:ObjectMover):Void {
		
		super.updateAI(actor, mover);
		
		handleAttack(cast actor);
		if (windupCooldown > 0 || attackCooldown > 0) return;
		
		if(mover.getIsGrounded() && Math.abs(mover.getXVel()) < .1)
			switchDirections(actor);
		
		var aiCollisions:Array<MapObject> = actor.getCurrentMap().checkCollisions(actor, true);
		if (aiCollisions.length > 0)
			if(headingToWall(aiCollisions[0], actor))
				switchDirections(actor);	
		
	}
	
	private function handleAttack(enemy:LaunchEnemy):Void {
		if (attackCooldown > 0) {
			attackCooldown -= 1;
			if (attackCooldown == 0)
				enemy.endLaunchAttack();
			return;
		}
		else if (windupCooldown > 0) {
			windupCooldown -= 1;
			if (windupCooldown == 0) {
				enemy.launchAttack();
				attackCooldown = 50;
			}
			return;
		}
		
		var distFromPlayer:Point = enemy.getCurrentMap().checkDistFromPlayer(enemy);
		
		if (Math.abs(distFromPlayer.y) < visionConeHeight && Math.abs(distFromPlayer.x) < visionConeWidth) {
			
			windupCooldown = 20;
			enemy.windup();
		}
	}
	
	override public function handleCollision(collider:MapObject, host:Actor, horizontal:Bool):Void 
	{
		if (horizontal && headingToWall(collider, host))
			switchDirections(host);
	}
	
	private function headingToWall(object:MapObject, host:Actor):Bool {
		var objXCenter:Float = object.x + object.width / 2;
		var hostXCenter:Float = host.x + host.width / 2;
		
		if (objXCenter >= hostXCenter && !alignmentLeft) 
			return true;
		else if (objXCenter < hostXCenter && alignmentLeft)
			return true;
		return false;
	}
	
	private function switchDirections(actor:Actor):Void {
		
		if (alignmentLeft) {
			actor.stopLeft();
			actor.goRight();
			alignmentLeft = !alignmentLeft;
		}
		else {
			actor.stopRight();
			actor.goLeft();
			alignmentLeft = !alignmentLeft;
		}
	}
	
}