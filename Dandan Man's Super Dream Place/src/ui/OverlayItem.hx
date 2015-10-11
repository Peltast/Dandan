package ui;
import openfl.display.Sprite;
import openfl.errors.Error;

/**
 * ...
 * @author Peltast
 */
class OverlayItem extends Sprite
{
	private var parentOverlay:Overlay;
	
	private var active:Bool;
	private var selected:Bool;
	private var exclusiveActivity:Bool;

	public function new(overlayItem:OverlayItem, exclusiveActivity:Bool) 
	{
		super();
		if (this != overlayItem) throw new Error("OverlayItem is meant to be used as an abstract class.");
		active = false;
		selected = false;
		this.exclusiveActivity = exclusiveActivity;
	}
	
	public function itemHitTest(x:Float, y:Float):Bool {
		return hitTestPoint(x, y);
	}
	
	public function setOverlay(parent:Overlay):Void {
		parentOverlay = parent;
	}
	
	public function resetOverlayItem():Void { }
	public function activateOverlayItem():Void {
		active = true;
		
		if (exclusiveActivity && parentOverlay != null) parentOverlay.resetItems(this);
	}
	public function updateOverlayItem():Void {
		
	}
	public function deactivateOverlayItem():Void { 
		active = false;
		selected = false;
	}
	
	public function isActive():Bool { return active; }
	public function isSelected():Bool { return selected; }
	public function requiresExclusiveActivity():Bool { return exclusiveActivity; }
}