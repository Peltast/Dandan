package actors.actorsAI;
import actors.enemies.ProjectileEnemy;
import actors.ObjectMover;
import actors.Actor;
import openfl.geom.Point;

/**
 * ...
 * @author Peltast
 */
class ProjectileAI extends EnemyAI
{

	private var alignmentLeft:Bool;
	private var attackCooldown:Int;
	private var visionConeHeight:Int;
	private var shortVisionConeWidth:Int;
	private var visionConeWidth:Int;
	private var projectileCooldown:Int;
	
	public function new() 
	{
		super(this);
		
		alignmentLeft = true;
		attackCooldown = 50;
		visionConeHeight = 30;
		visionConeWidth = 320;
		shortVisionConeWidth = 220;
		projectileCooldown = 0;
	}
	
	override public function updateAI(actor:Actor, mover:ObjectMover):Void 
	{
		super.updateAI(actor, mover);
		
		if (projectileCooldown > 0)
			projectileCooldown -= 1;
		
		var distFromPlayer:Point = actor.getCurrentMap().checkDistFromPlayer(actor);
		
		if (Math.abs(distFromPlayer.y) < visionConeHeight && Math.abs(distFromPlayer.x) < visionConeWidth) {			
			var projectileEnemy:ProjectileEnemy = cast actor;
			
			if (distFromPlayer.x > 0)
				projectileEnemy.faceLeft();
			else
				projectileEnemy.faceRight();
				
			if (Math.abs(distFromPlayer.x) < shortVisionConeWidth) {
				
				if (projectileCooldown > 0)
					return;
				
				projectileCooldown = 45;
				projectileEnemy.fireProjectile();
			}
		}
		
	}
	
}