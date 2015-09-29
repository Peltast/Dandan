package actors.attacks;
import openfl.display.Bitmap;

/**
 * ...
 * @author Peltast
 */
class EnemyProjectile extends Projectile
{

	public function new(bitmap:Bitmap, mover:ObjectMover, duration:Int, damage:Int) 
	{
		super(this, bitmap, mover, duration, damage);
	}
	
	public override function createClone():EnemyProjectile {
		return new EnemyProjectile(new Bitmap(baseBmp.bitmapData), projectileMover.copyMover(), duration, damage);
	}
}