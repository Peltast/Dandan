package actors.abilities;
import actors.ObjectMover;
import actors.attacks.Attack;
import openfl.geom.Rectangle;

/**
 * ...
 * @author Peltast
 */
class DashAbility extends Ability
{
	private var hitBoxes:Array<Rectangle>;
	private var leftDash:Attack;
	private var rightDash:Attack;
	
	public function new() 
	{
		super(this);
		
		
		var hitBoxes:Array<Rectangle> = [];
		hitBoxes.push(new Rectangle(-4, -2, 20, 40));
		
		leftDash = new Attack
			(new ObjectMover(.5, .1, -15, 0, 0, 0, 60, 60, 0, 0, false), hitBoxes,
			15, 3, 20, "Dash", "DashRest", true);
		
		
		hitBoxes = [];
		hitBoxes.push(new Rectangle(16, -2, 20, 40));
		
		rightDash = new Attack
			(new ObjectMover(.5, .1, 15, 0, 0, 0, 60, 60, 0, 0, false), hitBoxes,
			15, 3, 20, "Dash", "DashRest", true);
		
		jumpAttack = leftDash;
		standingAttack = leftDash;
	}
	
	override public function getAbilityAttack(actor:Actor, mover:ObjectMover):Attack 
	{
		changeDashDirection(actor);
		
		return super.getAbilityAttack(actor, mover);
	}
	
	private function changeDashDirection(actor:Actor):Void {
		
		if (actor.getAnimationName().indexOf("Left") >= 0) {
			
			jumpAttack = leftDash;
			standingAttack = leftDash;
		}
		else {
			
				
			jumpAttack = rightDash;
			standingAttack = rightDash;
		}
	}
	
}