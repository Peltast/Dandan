package actors.abilities;
import actors.Actor;
import actors.ObjectMover;
import actors.attacks.Attack;
import openfl.geom.Rectangle;

/**
 * ...
 * @author Peltast
 */
class LaunchAbility extends Ability
{

	private var aoeAttack:Attack;
	private var aoeHitBox:Array<Rectangle>;
	
	public function new() 
	{
		super(this);
		
		
		aoeHitBox = [];
		aoeHitBox.push(new Rectangle( 0, 0, 40, 40));
		aoeAttack = new Attack(new ObjectMover(.1, .1, 0, 0, 0, 0, 3, 3, 0, 1, false), aoeHitBox, -1, 1, 0, "Launch", "LaunchRest", true);
		
		jumpAttack = aoeAttack;
		standingAttack = aoeAttack;
		
		abilityHeight = 40;
		abilityWidth = 40;
	}
	
	override public function getAbilityAttack(actor:Actor, mover:ObjectMover):Attack 
	{
		retainVelocity(mover);
		
		return super.getAbilityAttack(actor, mover);
	}
	
	private function retainVelocity(mover:ObjectMover):Void {
		
		var floatMovement:ObjectMover = new ObjectMover
			(.1, .1, mover.getTargetXVel(), mover.getTargetYVel(), mover.getXVel(), mover.getYVel(), 2, 5, 0, 1, false);
		aoeAttack = new Attack(floatMovement, aoeHitBox, -1, 1, 40, "Launch", "LaunchRest", true);
		
		jumpAttack = aoeAttack;
		standingAttack = aoeAttack;
	}
	
}