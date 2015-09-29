package maps.mapobjects;

import actors.Actor;
import actors.ObjectMover;
import openfl.display.Bitmap;
import openfl.display.BitmapData;
import openfl.utils.Dictionary;
import openfl.geom.Point;
import openfl.geom.Rectangle;
import actors.Animation;

/**
 * ...
 * @author Peltast
 */
class Checkpoint extends Actor
{
	private var activated:Bool;
	
	public function new(active:Bool, defaultBitmap:Bitmap)
	{
		activated = active;
		
		var spriteSize:Int = 16;
		var inactive:Animation = new Animation("Inactive", 0, new Point(0, 0), 16, 16, [new Point()]);
		var active:Animation = new Animation("Active", 0, new Point(spriteSize, 0), 16, 16, [new Point()]);
		
		animations = new Map<String, Animation>();
		animations[inactive.getName()] = inactive;
		animations[active.getName()] = active;
		currentAnimation = getAnimation("Inactive");
		
		var mover:ObjectMover = new ObjectMover(0, 0, 0, 0, 0, 0, 0, 0, 0);
		
		super(this, Main.getBitmapAsset("assets/checkpoint.png"), false, animations, mover, spriteSize);
	}
	
	
	public function setActive():Void {
		activated = true;
		
		currentAnimation = getAnimation("Active");
		removeBmp();
		addAnimationBmp(currentAnimation);
	}
	public function setInactive():Void {
		activated = false;
		
		currentAnimation = getAnimation("Inactive");
		removeBmp();
		addAnimationBmp(currentAnimation);
	}
	public function getActive():Bool {
		return activated;
	}
	
	
}