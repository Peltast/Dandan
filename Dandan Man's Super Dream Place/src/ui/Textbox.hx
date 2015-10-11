package ui;
import openfl.display.Shape;
import openfl.text.TextField;
import openfl.text.TextFormat;

/**
 * ...
 * @author Peltast
 */
class Textbox extends OverlayItem
{
	private var text:String;
	private var borders:Bool;
	private var scroll:Bool;
	
	private var bgBox:Shape;
	private var textField:TextField;
	
	public function new(text:String, borders:Bool, scroll:Bool = true) 
	{
		this.text = text;
		this.borders = borders;
		this.scroll = scroll;
	}
	
	private var drawTextBox():Void {
		
		bgBox = new Shape();
		bgBox.graphics.beginFill(0x000000, .2);
		bgBox.graphics.drawRect(0, 0, 240, 100);
		bgBox.graphics.endFill();
		
		this.addChild(bgBox);
	}
	private var initiateText():Void {
		
		textField = new TextField();
		textField.setTextFormat(new TextFormat(null, 12, 0xffffff));
		this.addChild(textField);
	}
	
	override public function updateOverlayItem():Void 
	{
		super.updateOverlayItem();
		
		updateText();
	}
	
	private var updateText():Void {
		
		if (textField.text == text) return;
	}
	
}