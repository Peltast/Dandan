package actors;

import openfl.geom.Rectangle;
import openfl.geom.Point;
import openfl.errors.Error;

/**
 * ...
 * @author Peltast
 */
class Animation
{

	private var frames:Array<Rectangle>; // Array of rectangles describing the masks for each pose in the animation.
	private var name:String;
	private var animStart:Point;
	private var animWidth:Int;
	private var animHeight:Int;
	private var animFrames:Array<Point>;
	private var intervalPause:Int;
	private var intervalCount:Int;
	private var tickCount:Int;	// Timer for animation
	private var speed:Int; // Number of ticks before animation progresses
	private var currentFrame:Rectangle;
	
	public function new(name:String, speed:Int, animStart:Point, animWidth:Int, animHeight:Int, animFrames:Array<Point>, intervalPause:Int = 0) 
	{
		this.name = name;
		this.speed = speed;
		this.animStart = animStart;
		this.animWidth = animWidth;
		this.animHeight = animHeight;
		this.animFrames = animFrames;
		this.intervalPause = intervalPause;
		tickCount = 0;
		intervalCount = 0;
		
		frames = [];
		for (i in 0...animFrames.length) {
			var tempRectangle:Rectangle =  new Rectangle(animStart.x + (animFrames[i].x * animWidth), 
												animStart.y + (animFrames[i].y * animHeight), animWidth, animHeight);
			frames.push(tempRectangle);
		}
		currentFrame = frames[0];
	}
	
	public function resetAnimation():Void {
		tickCount = 0;
		intervalCount = 0;
		currentFrame = frames[0];
	}
	
	public function updateAnimation():Rectangle {
		if (currentFrame == null) {
			currentFrame = frames[0];
			return currentFrame;
		}
		if (speed < 0) return currentFrame;
		
		if (intervalCount > 0) {
			intervalCount -= 1;
			return currentFrame;
		}
		
		tickCount++;
		if (tickCount > speed) {
			tickCount = 0;
			for (i in 0...frames.length) {
				if (currentFrame == frames[i]) {
					// If this is the last frame in the array, go back to the beginning.
					if (frames.length - 1 == i) {
						
						currentFrame = frames[0];
						
						// If there's an interval pause, the animation stops for a bit at the end before looping.
						intervalCount = intervalPause;
							
					}
					// Otherwise, move to the next.
					else currentFrame = frames[i + 1];
					return currentFrame;
				}
			}
			
			throw new Error("Somehow, the animation's current frame isn't contained in its array of frames.");
		}
		
		return currentFrame;
	}
	
	public function getFrameIndex():Int {
		for (i in 0...frames.length) {
			if (currentFrame == frames[i])
				return i;
		}
		return -1;
	}
	public function getRectangle():Rectangle { return currentFrame; }
	public function getWidth():Int { return cast currentFrame.width; }
	public function getHeight():Int { return cast currentFrame.height; }
	public function getName():String { return name; }
	public function getAnimStart():Point { return animStart; }
	
	public function getClone(newSpeed:Int = -1):Animation {
		if (newSpeed == -1) newSpeed = this.speed;
		return new Animation(this.name, newSpeed, this.animStart, this.animWidth, this.animHeight, this.animFrames);
	}
	
}