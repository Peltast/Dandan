package actors.attacks;
import actors.Actor;

/**
 * ...
 * @author Peltast
 */
class ProjectileAttack extends Attack
{
	
	private var prototypeProjectile:Projectile;
	private var host:Actor;
	
	public function new(host:Actor, prototypeProjectile:Projectile, stun:Int, fireAnimation:String = "", stunAnimation:String = "")
	{
		super(null, [], 20, 0, stun, fireAnimation, stunAnimation);
		
		this.prototypeProjectile = prototypeProjectile;
		this.host = host;
	}
	
	override public function startAttack():Void 
	{
		super.startAttack();
		
		var newProjectile:Projectile = prototypeProjectile.createClone();
		newProjectile.x = host.x + (host.width / 2 - newProjectile.width / 2);
		newProjectile.y = host.y + (host.height / 2 - newProjectile.height / 2);
		
		host.getCurrentMap().addProjectile(newProjectile);
		
		if (host.isFacingLeft())
			newProjectile.flipProjectile(true);
	}
	
}