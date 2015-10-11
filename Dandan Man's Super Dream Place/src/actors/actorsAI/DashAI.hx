package actors.actorsAI;
import actors.ObjectMover;
import actors.Actor;
import actors.enemies.DashEnemy;
import openfl.geom.Point;

/**
 * ...
 * @author Peltast
 */
class DashAI extends EnemyAI
{
	
	private var dashCooldown:Int;
	private var visionConeHeight:Int;
	private var visionConeWidth:Int;
	
	public function new() 
	{
		super(this);
		
		dashCooldown = 0;
		
		visionConeHeight = 32;
		visionConeWidth = 112;
	}
	
	override public function updateAI(actor:Actor, mover:ObjectMover):Void 
	{
		super.updateAI(actor, mover);
		dashCooldown -= 1;
		if (dashCooldown >= 0) return;
		if (!mover.getIsGrounded()) return;
		
		var distFromPlayer:Point = actor.getCurrentMap().checkDistFromPlayer(actor);
		
		if (Math.abs(distFromPlayer.y) < visionConeHeight && Math.abs(distFromPlayer.x) < visionConeWidth) {
			
			var dashEnemy:DashEnemy = cast actor;
			if (distFromPlayer.x > 0)
				dashEnemy.dashLeft();
			else
				dashEnemy.dashRight();
			
			dashCooldown = 30;
		}
	}
	
}