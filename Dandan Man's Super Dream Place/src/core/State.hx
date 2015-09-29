package core;

import openfl.display.Sprite;
import openfl.errors.Error;

/**
 * ...
 * @author Peltast
 */
class State extends Sprite
{
	private var stateName:String;
		
		public function new(state:State) 
		{
			super();
			
			if (state != this)
				throw new Error("This class is meant to be treated as Abstract.");
		}
		
		public function redrawState():Void {
		}
		
		public function deactivateState():Void {
		}
		public function activateState():Void {
		}
		
		public function drawState():Void {
			
		}
	
}