package actors.actorsAI;
import actors.ObjectMover;
import actors.Actor;
import maps.mapobjects.MapObject;

/**
 * ...
 * @author Peltast
 */
class RunningAI extends EnemyAI
{
	var alignmentLeft:Bool;
	var isRunning:Bool;
	
	var startPosition:Int;
	var runDistance:Int;
	
	var runInterval:Int;
	var runTimer:Int;
	
	public function new() 
	{
		super(this);
		
		alignmentLeft = true;
		runDistance = 96;
		runInterval = 30;
		runTimer = 0;
	}
	
	override public function updateAI(actor:Actor, mover:ObjectMover):Void 
	{
		super.updateAI(actor, mover);
		
		if (isRunning) {	
			updateRun(actor);
			return;
		}
		
		runTimer += 1;
		if (runTimer >= runInterval) {
			startRun(actor);
		}
		
	}
	
	private function updateRun(actor:Actor):Void {
		if (Math.abs(startPosition - actor.x) > runDistance) {
			stopRun(actor);
		}
		
		var aiCollisions:Array<MapObject> = actor.getCurrentMap().checkCollisions(actor, true);
		if (aiCollisions.length > 0)
			if(headingToWall(aiCollisions[0], actor))
				stopRun(actor);
	}
	
	override public function handleCollision(collider:MapObject, host:Actor, horizontal:Bool):Void 
	{
		if (horizontal) {
			stopRun(host);
		}
	}
	
	
	private function startRun(actor:Actor):Void {
		startPosition = Math.round(actor.x);
		isRunning = true;
		runTimer = 0;
		
		if (alignmentLeft)
			actor.goLeft();
		else
			actor.goRight();
	}
	private function stopRun(actor:Actor):Void {
		isRunning = false;
		actor.stopLeft();
		actor.stopRight();
		runTimer = 0;
		alignmentLeft = !alignmentLeft;
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
	
}
