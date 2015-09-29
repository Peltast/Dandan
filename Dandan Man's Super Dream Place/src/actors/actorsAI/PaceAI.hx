package actors.actorsAI;
import actors.Actor;
import actors.ObjectMover;
import maps.mapobjects.MapObject;

/**
 * ...
 * @author Peltast
 */
class PaceAI extends EnemyAI
{

	private var alignmentLeft:Bool;
	
	public function new() 
	{
		super(this);
		
		if (Math.random() >= .5) alignmentLeft = false;
		else alignmentLeft = true;
	}
	
	
	public override function updateAI(actor:Actor, mover:ObjectMover):Void {
		super.updateAI(actor, mover);
		
		if(mover.getIsGrounded() && Math.abs(mover.getXVel()) < .1)
			switchDirections(actor);
		
		var aiCollisions:Array<MapObject> = actor.getCurrentMap().checkCollisions(actor, true);
		if (aiCollisions.length > 0)
			if(headingToWall(aiCollisions[0], actor))
				switchDirections(actor);
		
	}
	
	override public function handleCollision(collider:MapObject, host:Actor, horizontal:Bool):Void 
	{
		if (horizontal)
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