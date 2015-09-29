package actors.attacks;
import actors.Animation;
import actors.ObjectMover;
import maps.mapobjects.MapObject;
import openfl.display.Bitmap;
import openfl.display.BitmapData;
import openfl.display.Sprite;
import openfl.errors.Error;
import openfl.geom.Matrix;
import openfl.geom.Point;

/**
 * ...
 * @author Peltast
 */
class Projectile extends Actor
{
	
	private var projectileMover:ObjectMover;
	private var duration:Int;
	private var damage:Int;
	
	public function new(implementation:Projectile, bitmap:Bitmap, mover:ObjectMover, duration:Int, damage:Int)
	{
		
		if (this != implementation) throw new Error("Projectile is meant to be used as an abstract class.");
		
		var leftMove:Animation = new Animation("Left", 1, new Point(), 24, 24, [new Point(), new Point(1), new Point(2)]);
		var rightMove:Animation = new Animation("Right", 1, new Point(0, 24), 24, 24, [new Point(), new Point(1), new Point(2)]);
		animations = new Map<String, Animation>();
		animations[leftMove.getName()] = leftMove;
		animations[rightMove.getName()] = rightMove;
		currentAnimation = rightMove;
		
		this.projectileMover = mover;
		this.duration = duration;
		this.damage = damage;
		
		super(this, bitmap, true, animations, mover, 24, 24);
	}
	
	
	public function updateProjectile():Bool {
		
		duration -= 1;
		if (duration <= 0) 
			return true;
		
		projectileMover.updateMovement();
		moveXAxis();
		moveYAxis();
		updateActorAnimation();
		
		return false;
	}
	
	public function flipProjectile(horizontal:Bool):Void {
		
		if (horizontal) {
			invertXMovement();
			if (projectileMover.getTargetXVel() > 0)
				currentAnimation = animations["Right"];
			else
				currentAnimation = animations["Left"];
			//flipProjectileBmp(horizontal);
		}
		else {
			invertYMovement();
			
			//flipProjectileBmp(horizontal);
		}
		
	}
	private function invertXMovement():Void {
		projectileMover.invertTargetXVel();
	}
	private function invertYMovement():Void {
		projectileMover.invertTargetYVel();
	}
	private function flipProjectileBmp(horizontal:Bool):Void {
		var matrix:Matrix;
		var newBmpData:BitmapData = new BitmapData(cast defaultBitmap.width, cast defaultBitmap.height, true, 0x000000);
		
		if (horizontal)
			matrix = new Matrix( -1, 0, 0, 1, defaultBitmap.width, 0);
		else
			matrix = new Matrix( 1, 0, 0, -1, 0, defaultBitmap.height);
		
		newBmpData.draw(defaultBitmap.bitmapData, matrix);
		defaultBitmap.bitmapData = newBmpData;
	}
	
	private override function moveXAxis():Void {
		
		this.x += Math.round(projectileMover.getXVel());
		
		//var collisions:Array<MapObject> = currentMap.checkCollisions(this);
		//var largestDistance:Int = getCollisionLargestDistance(collisions, true);
		
		//if (largestDistance != 0)
		//	duration = 0;
	}
	private override function moveYAxis():Void {
		
		this.y += Math.round(projectileMover.getYVel());
		
		//var collisions:Array<MapObject> = currentMap.checkCollisions(this);
		//var largestDistance:Int = getCollisionLargestDistance(collisions, false);
		
		//if (largestDistance > 0)
		//	duration = 0;
	}
	
	public function getProjectileDamage():Int { return damage; }
	
	public function createClone():Projectile {
		return null;
	}
}