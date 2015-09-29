package actors.actorsAI;
import actors.ObjectMover;
import maps.mapobjects.MapObject;
import openfl.errors.Error;

/**
 * ...
 * @author Peltast
 */
class EnemyAI
{

	public function new(implementation:EnemyAI) 
	{
		if (this != implementation) throw new Error("Actor is meant to be used as an abstract class.");
		
		
	}
	
	public function updateAI(actor:Actor, mover:ObjectMover):Void {
		
	}
	
	public function handleCollision(collider:MapObject, host:Actor, horizontal:Bool):Void {
		
	}
	
}