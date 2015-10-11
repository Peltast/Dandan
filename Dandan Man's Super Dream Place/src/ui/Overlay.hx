package ui;
import openfl.display.Shape;
import openfl.display.Sprite;

/**
 * ...
 * @author Peltast
 */
class Overlay extends Sprite
{
	private var background:Shape;
	private var bgAlpha:Float;
	private var overlaySprite:Sprite;
	private var active:Bool;
	
	public function new(bgAlpha:Float = 0) 
	{
		super();
		overlaySprite = new Sprite();
		this.bgAlpha = bgAlpha;
		
		if (bgAlpha > 0) {
			background = new Shape();
			background.graphics.beginFill(0, bgAlpha);
			background.graphics.drawRect
				(0, 0, 540, 360);
			background.graphics.endFill();
			this.addChild(background);
		}
	}
	public function redrawOverlay():Void {
		
		if (background != null) {
			this.removeChild(background);
			background = new Shape();
			background.graphics.beginFill(0, bgAlpha);
			background.graphics.drawRect
				(0, 0, 540, 360);
			background.graphics.endFill();
			this.addChild(background);
		}
	}
	
	public function isActive():Bool { return active; }
	
	public function addToOverlay(overlayItem:OverlayItem):Void {
		overlayItem.setOverlay(this);
		overlaySprite.addChild(overlayItem);
	}
	public function removeFromOverlay(overlayItem:OverlayItem):Void {
		if (overlaySprite.contains(overlayItem)) 
			overlaySprite.removeChild(overlayItem);
	}
	
	public function addOverlayToClient(client:Sprite):Void {
		client.addChild(this);
		client.addChild(overlaySprite);
	}
	public function removeOverlayFromClient(client:Sprite):Void {
		if (client.contains(this))
			client.removeChild(this);
		if (client.contains(overlaySprite))
		client.removeChild(overlaySprite);
	}
	
	public function activateOverlay():Void {
		for (i in 0...overlaySprite.numChildren) {
			var overlayItem:OverlayItem = cast overlaySprite.getChildAt(i);
			overlayItem.activateOverlayItem();
		}
		active = true;
	}
	public function updateOverlay():Void {
		for (i in 0...overlaySprite.numChildren) {
			var overlayItem:OverlayItem = cast overlaySprite.getChildAt(i);
			overlayItem.updateOverlayItem();
		}
	}
	public function deactivateOverlay():Void {
		for (i in 0...overlaySprite.numChildren) {
			var overlayItem:OverlayItem = cast overlaySprite.getChildAt(i);
			overlayItem.deactivateOverlayItem();
		}
		active = false;
	}
	
	public function resetItems(item:OverlayItem):Void {
			for (i in 0...overlaySprite.numChildren) {
			var overlayItem:OverlayItem = cast overlaySprite.getChildAt(i);
			if (item != overlayItem) overlayItem.resetOverlayItem();
		}
	}
	
	
	public function getX():Int { return Math.round(overlaySprite.x); }
	public function getY():Int { return Math.round(overlaySprite.y); }
	
	
}