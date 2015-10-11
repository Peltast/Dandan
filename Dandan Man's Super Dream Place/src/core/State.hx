package core;

import openfl.display.Sprite;
import openfl.errors.Error;
import ui.OverlayStack;

/**
 * ...
 * @author Peltast
 */
class State extends Sprite
{
	private var stateName:String;
	private var overlayStack:OverlayStack;
	
	public function new(state:State) 
	{
		super();
		overlayStack = new OverlayStack();
		this.addChild(overlayStack);
		
		if (state != this)
			throw new Error("This class is meant to be treated as Abstract.");
	}
	
	public function redrawState():Void {
		overlayStack.redrawStack();
	}
	
	public function deactivateState():Void {
		overlayStack.deactivateStack();
	}
	public function activateState():Void {
		overlayStack.activateStack();
	}
	
	public function drawState():Void {
		
		overlayStack.peekStack().updateOverlay();
	}
	
}