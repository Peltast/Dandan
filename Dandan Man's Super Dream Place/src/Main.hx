package;

import core.Game;
import core.GameState;
import openfl.display.Sprite;
import openfl.Lib;
import openfl.Assets;
import openfl.display.Bitmap;
import openfl.display.BitmapData;
import src.core.*;

/**
 * ...
 * @author Peltast
 */
class Main extends Sprite 
{

	private static var singleton:Main;
	public static function getSingleton():Main {
		
		return singleton;
	}
	
	public function new() 
	{
		super();
		
		singleton = this;
		
		this.addChild(Game.getSingleton());
		Game.pushState(new GameState());
	}
	
	public static function getBitmapAsset(path:String):Bitmap {
		
		var bitmapData:BitmapData = Assets.getBitmapData(path);
		var bitmap:Bitmap = new Bitmap(bitmapData);
		return bitmap;
	}
	
}
