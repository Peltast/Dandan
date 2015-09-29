package maps.mapobjects;

import actors.Actor;
import maps.mapobjects.MapObject;
import openfl.display.Bitmap;
import openfl.geom.Rectangle;
import openfl.geom.Point;

/**
 * ...
 * @author Peltast
 */
class Tile extends MapObject
{

	private var tileCollidable:Bool;
	private var tileFatalDirections:Array<Int>;
	
	public function new(defaultBmp:Bitmap, collidable:Bool, fatalDirections:Array<Int>) 
	{
		super(this, defaultBmp);
		
		tileCollidable = collidable;
		tileFatalDirections = fatalDirections;
	}
	
	public override function checkCollision(otherObject:MapObject, checkPassable:Bool = true):Bool {
		
		if (!tileCollidable) return false;
		
		tempObjectBounds = getCollisionBounds();
		tempCollideBounds = otherObject.getCollisionBounds();
		
		if (tempObjectBounds.intersects(tempCollideBounds))
			return true;
		else
			return false;
	}
	
	public function checkFatal(actor:Actor, xAxis:Bool):Bool {
		if (tileFatalDirections.indexOf(1) < 0) return false;
		
		thisCenter = new Point(this.x + this.width / 2, this.y + this.height / 2);
		otherCenter = new Point(actor.x + actor.width / 2, actor.y + actor.height / 2);
		
		if (xAxis) {
			
			if (thisCenter.x - otherCenter.x >= 0 && tileFatalDirections[0] == 1)
				return true;
			else if (thisCenter.x - otherCenter.x < 0 && tileFatalDirections[1] == 1)
				return true;
		}
		else {
			if (thisCenter.y - otherCenter.y >= 0 && Math.abs(this.thisCenter.x - otherCenter.x) < 16 && tileFatalDirections[2] == 1)
				return true;
			else if (thisCenter.y - otherCenter.y < 0 && tileFatalDirections[3] == 1)
				return true;
		}
		
		return false;
	}
	
	private function getLeftDistance(otherObject:MapObject):Int {
		return Math.round(this.x - (otherObject.x + otherObject.width)); 
	}
	private function getRightDistance(otherObject:MapObject):Int {
		return Math.round((this.x + this.width) - otherObject.x);
	}
	private function getUpDistance(otherObject:MapObject):Int {
		return Math.round(this.y - (otherObject.y + otherObject.height));
	}
	private function getDownDistance(otherObject:MapObject):Int {
		return Math.round((this.y + this.height) - otherObject.y);
	}
	
	
}