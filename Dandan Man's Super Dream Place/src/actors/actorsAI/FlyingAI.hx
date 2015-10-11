package actors.actorsAI;
import actors.enemies.FlyingEnemy;
import maps.mapobjects.MapObject;

/**
 * ...
 * @author Peltast
 */
class FlyingAI extends EnemyAI
{
	private var horizontal:Bool;
	private var alignmentLeft:Bool;
	
	public function new(horizontal:Bool) 
	{
		super(this);
		
		this.horizontal = horizontal;
		alignmentLeft = true;
		
	}
	
	public override function updateAI(actor:Actor, mover:ObjectMover):Void {
		super.updateAI(actor, mover);
		
		var flyingEnemy:FlyingEnemy = cast actor;
		
		if (horizontal && Math.abs(mover.getXVel()) < .1)
			switchDirections(flyingEnemy);
		else if (!horizontal && Math.abs(mover.getYVel()) < .1)
			switchDirections(flyingEnemy);
		
		var aiCollisions:Array<MapObject> = actor.getCurrentMap().checkCollisions(actor, true);
		if (aiCollisions.length > 0)
			if(headingToWall(aiCollisions[0], actor))
				switchDirections(flyingEnemy);
		
	}
	private function headingToWall(object:MapObject, host:Actor):Bool {
		var objCenter:Float;
		var hostCenter:Float;
		
		if(horizontal){
			objCenter = object.x + object.width / 2;
			hostCenter = host.x + host.width / 2;
		}
		else {
			objCenter = object.y + object.height / 2;
			hostCenter = host.y + host.height / 2;
		}
		
		if (objCenter >= hostCenter && !alignmentLeft) 
			return true;
		else if (objCenter < hostCenter && alignmentLeft)
			return true;
		return false;
	}
	
	override public function handleCollision(collider:MapObject, host:Actor, horizontal:Bool):Void 
	{
		var flyingEnemy:FlyingEnemy = cast host;
		
		if (this.horizontal && horizontal)
			switchDirections(flyingEnemy);
		else if (!this.horizontal && !horizontal)
			switchDirections(flyingEnemy);
	}
	
	private function switchDirections(host:FlyingEnemy):Void {
		
		if (horizontal) {
			if (alignmentLeft) {	
				host.stopLeft();
				host.goRight();
				alignmentLeft = !alignmentLeft;
			}
		
			else {
				host.stopRight();
				host.goLeft();
				alignmentLeft = !alignmentLeft;
			}
		}
		else {
			if (alignmentLeft) {
				host.stopUp();
				host.goDown();
				alignmentLeft = !alignmentLeft;
			}
			
			else {
				host.stopDown();
				host.goUp();
				alignmentLeft = !alignmentLeft;
			}
		}
	}
	
}