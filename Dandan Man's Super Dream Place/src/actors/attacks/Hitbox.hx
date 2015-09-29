package actors.attacks;
import openfl.display.Shape;
import openfl.display.Sprite;
import openfl.geom.Rectangle;

/**
 * ...
 * @author Peltast
 */
class Hitbox extends Sprite
{
	private var hitAreas:Array<Rectangle>;
	private var duration:Int;
	private var counter:Int;
	
	public function new(hitAreas:Array<Rectangle>, duration:Int) 
	{
		super();
		
		this.hitAreas = hitAreas;
		this.duration = duration;
		this.counter = 0;
		
		drawBoxes();
	}
	
	public function updateHitbox():Bool {
		if (duration < 0)
			return false;
		
		counter += 1;
		
		if (counter >= duration) {
			counter = 0;
			return true;
		}
		return false;
	}
	public function resetHitbox():Void {
		counter = 0;
	}
	
	public function isHitting(host:Actor, actor:Actor):Bool {
		
		var hitBound:Rectangle;
		for (i in 0...hitAreas.length) {
			
			hitBound = new Rectangle(hitAreas[i].x + host.x, hitAreas[i].y + host.y, hitAreas[i].width, hitAreas[i].height);
			if (hitBound.intersects(actor.getCollisionBounds()))
				return true;
		}
		return false;
	}
	
	private function drawBoxes():Void {
		
		for (i in 0...hitAreas.length) {
			var box:Shape = new Shape();
			box.graphics.beginFill(0x555555, .5);
			box.graphics.drawRect(hitAreas[i].x, hitAreas[i].y, hitAreas[i].width, hitAreas[i].height);
			box.graphics.endFill();
			this.addChild(box);
		}
	}
	
}