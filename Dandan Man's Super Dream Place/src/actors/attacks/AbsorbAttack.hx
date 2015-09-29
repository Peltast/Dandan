package actors.attacks;

import actors.ObjectMover;
import openfl.geom.Point;
import openfl.geom.Rectangle;

/**
 * ...
 * @author Peltast
 */
class AbsorbAttack extends Attack
{

	public function new(attackMovement:ObjectMover, hits:Array<Rectangle>, duration:Int, damage:Int) 
	{
		super(attackMovement, hits, duration, damage, 10);
	}
	
	override public function updateAttack(mover:ObjectMover):Bool 
	{
		if (mover.getIsGrounded()) {
			mover.applyForce(new Point(0, 10), 50);
			counter = duration;
		}
		
		return super.updateAttack(mover);
		
	}
	
}