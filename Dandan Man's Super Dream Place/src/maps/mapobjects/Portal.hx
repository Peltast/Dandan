package maps.mapobjects;

import maps.mapobjects.MapObject;
import openfl.display.Bitmap;

/**
 * ...
 * @author Peltast
 */
class Portal extends MapObject
{

	public function new(defaultBmp:Bitmap) 
	{
		super(this, defaultBmp, true);
		
		this.defaultBitmap.x = 4;
		this.defaultBitmap.y = -8;
	}
	
}