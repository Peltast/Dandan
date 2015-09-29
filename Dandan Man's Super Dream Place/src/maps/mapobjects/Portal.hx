package maps.mapobjects;

import maps.AreaMap;
import maps.mapobjects.MapObject;
import openfl.display.Bitmap;

/**
 * ...
 * @author Peltast
 */
class Portal extends MapObject
{

	private var endMap:String;
	
	public function new(defaultBmp:Bitmap, endMap:String) 
	{
		super(this, defaultBmp, true);
		
		this.endMap = endMap;
		this.defaultBitmap.x = 4;
		this.defaultBitmap.y = -8;
	}
	
	public function getEndMap():String {
		return endMap;
	}
	
}