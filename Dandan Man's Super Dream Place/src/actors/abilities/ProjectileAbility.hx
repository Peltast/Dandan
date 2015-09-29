package actors.abilities;
import actors.attacks.PlayerProjectile;
import actors.ObjectMover;
import actors.Actor;
import actors.attacks.Attack;
import actors.attacks.ProjectileAttack;

/**
 * ...
 * @author Peltast
 */
class ProjectileAbility extends Ability
{

	private var projectileAttack:ProjectileAttack;
	
	public function new() 
	{
		super(this);
		
		
		this.standingAttack = projectileAttack;
		this.jumpAttack = projectileAttack;
	}
	
	override public function getAbilityAttack(actor:Actor, mover:ObjectMover):Attack 
	{
		
		projectileAttack = new ProjectileAttack
			(actor, new PlayerProjectile(Main.getBitmapAsset("assets/Projectile2.png"), 
			new ObjectMover(.5, .1, 10, 0, 0, 0, 10, 0, 0, 0, false), 30, 1), 0, "Projectile", "");
		this.standingAttack = projectileAttack;
		this.jumpAttack = projectileAttack;
		
		return super.getAbilityAttack(actor, mover);
	}
	
}