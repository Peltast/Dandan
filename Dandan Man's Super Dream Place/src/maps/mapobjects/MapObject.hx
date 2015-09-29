package maps.mapobjects;

import openfl.display.Sprite;
import openfl.geom.Rectangle;
import openfl.geom.Point;
import openfl.display.Bitmap;
import openfl.errors.Error;

/**
 * ...
 * @author Peltast
 */
class MapObject extends Sprite
{
	private var collisionBounds:Rectangle;
	
	private var tempObjectBounds:Rectangle;
	private var tempCollideBounds:Rectangle;
	private var thisCenter:Point;
	private var otherCenter:Point;
	
	private var passable:Bool;
	
	private var defaultBitmap:Bitmap;
	
	public function new(implementation:MapObject, defaultBmp:Bitmap, passable:Bool = true) 
	{
		super();
		
		if (this != implementation) throw new Error("MapObject is meant to be used as an abstract class.");
		
		this.defaultBitmap = defaultBmp;
		this.passable = passable;
		
		this.addChild(defaultBitmap);
		this.collisionBounds = new Rectangle(this.x, this.y, this.width, this.height);
	}
	
	public function getPassable():Bool {
		return passable;
	}
	
	public function checkCollision(otherObject:MapObject, checkPassable:Bool = true):Bool {
		if (!this.passable && checkPassable) return false;
		
		tempObjectBounds = getCollisionBounds();
		tempCollideBounds = otherObject.getCollisionBounds();
		
		if (tempObjectBounds.intersects(tempCollideBounds))
			return true;
		else
			return false;
	}
	
	public function getCollisionBounds():Rectangle {
		return new Rectangle(this.x + collisionBounds.x, this.y + collisionBounds.y, collisionBounds.width, collisionBounds.height);
	}
	
	private function getCollisionDistance(otherObject:MapObject, xAxis:Bool):Int {
		
		tempObjectBounds = getCollisionBounds();
		tempCollideBounds = otherObject.getCollisionBounds();
		thisCenter = new Point(tempObjectBounds.x + tempObjectBounds.width / 2, tempObjectBounds.y + tempObjectBounds.height / 2);
		otherCenter = new Point(tempCollideBounds.x + tempCollideBounds.width / 2, tempCollideBounds.y + tempCollideBounds.height / 2);
		
		var distance:Float = 0;
		
		if (xAxis) {
			if (thisCenter.x - otherCenter.x >= 0)		// Find distance from left edge
				distance = tempObjectBounds.x - (tempCollideBounds.x + tempCollideBounds.width); 
			else if (thisCenter.x - otherCenter.x < 0)	// Find distance from right edge
				distance = (tempObjectBounds.x + tempObjectBounds.width) - tempCollideBounds.x;
		}
		else {
			if (thisCenter.y - otherCenter.y >= 0)		// Find distance from top edge
				distance = tempObjectBounds.y - (tempCollideBounds.y + tempCollideBounds.height); 
			else if (thisCenter.y - otherCenter.y < 0)	// Find distance from bottom edge
				distance = (tempObjectBounds.y + tempObjectBounds.height) - tempCollideBounds.y;
		}
		
		return Math.round(distance);
	}
	
}