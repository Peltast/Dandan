package ui;
import core.Stack;
import core.StackNode;
import openfl.display.Sprite;

/**
 * ...
 * @author Peltast
 */
class OverlayStack extends Sprite
{

	private var overlayStack:Stack;
	
	public function new() 
	{
		super();
		overlayStack = new Stack();
	}
	
	public function deactivateStack():Void {
		if (getTopOverlay() != null)
			getTopOverlay().deactivateOverlay();
	}
	public function activateStack():Void {
		if (getTopOverlay() != null)
			getTopOverlay().activateOverlay();
	}
	public function redrawStack():Void {
		var tempNode:StackNode = overlayStack.first;
		
		while (tempNode != null) {
			var tempOverlay:Overlay = cast tempNode.content;
			tempOverlay.redrawOverlay();
			tempNode = tempNode.nextNode;
		}
	}
	
	public function isEmpty():Bool { return overlayStack.isEmpty(); }
	
	public function pushOverlay(overlay:Overlay):Void {
		if (getTopOverlay() != null)
			getTopOverlay().deactivateOverlay();
		
		overlayStack.push(overlay);
		overlay.addOverlayToClient(this);
		
		getTopOverlay().activateOverlay();
	}
	public function peekStack():Overlay {
		return cast overlayStack.peek();
	}
	public function popStack():Overlay {
		var topOverlay:Overlay = getTopOverlay();
		if (topOverlay == null) return null;
		
		topOverlay.deactivateOverlay();
		topOverlay.removeOverlayFromClient(this);
		overlayStack.pop();
		
		if (getTopOverlay() != null)
			getTopOverlay().activateOverlay();
			
		Main.getSingleton().stage.focus = this;
		return topOverlay;
	}
	public function numOfOverlays():Int {
		return overlayStack.getLength();
	}
	public function emptyStack():Void {
		while (!isEmpty()) 
			popStack();
	}
	
	private function getTopOverlay():Overlay {
		if (overlayStack.first == null) return null;
		return cast overlayStack.peek();
	}
}