package actors.abilities;
import actors.ObjectMover;
import actors.attacks.Attack;
import openfl.errors.Error;

/**
 * ...
 * @author Peltast
 */
class Ability
{

	private var standingAttack:Attack;
	private var jumpAttack:Attack;
	private var abilityWidth:Int;
	private var abilityHeight:Int;
	
	public function new(ability:Ability) 
	{
		
		if (ability != this)
			throw new Error("This class is meant to be treated as Abstract.");
		
		abilityWidth = -1;
		abilityHeight = -1;
	}
	
	public function getAbilityAttack(actor:Actor, mover:ObjectMover):Attack { 
		if (mover.getIsGrounded())
			return jumpAttack;
		else
			return standingAttack;
	}
	
	public function getAbilityWidth():Int { return abilityWidth; }
	public function getAbilityHeight():Int { return abilityHeight; }
	
}