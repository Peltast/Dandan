package core;

import openfl.events.Event;
import openfl.errors.Error;
import openfl.display.Sprite;

/**
 * ...
 * @author Peltast
 */
class Game extends Sprite
{
	
	private static var stateStack:Stack;
	private static var singleton:Game;
	private static var tileSize:Int;
	
	public static function getSingleton():Game {
		if (singleton == null)
			singleton = new Game();
		return singleton;
	}
	
	public function new() 
	{
		super();
		
		stateStack = new Stack();			
		this.addEventListener(Event.ENTER_FRAME, playGame);
		tileSize = 16;
	}
	
	public function playGame(event:Event):Void {
		
		if (!stateStack.isEmpty()) {
				
			if(Std.is(stateStack.peek(), State)){
				
				var currentState:State = cast stateStack.peek();
				currentState.drawState();
				
			}
			else {
				
				throw new Error("A non-state object was pushed into the game's state stack.");
				
			}
			
		}
		
	}
	
	public static function popState():Void {
		if (stateStack.isEmpty()) return;
		
		singleton.removeChild(cast stateStack.peek());
		stateStack.peek().deactivateState();
		stateStack.pop();
		if (!stateStack.isEmpty()) {
			singleton.addChild(cast stateStack.peek());
			stateStack.peek().activateState();
		}
	}
	public static function pushState(state:State):Void {
		if (!stateStack.isEmpty()) {
			var topState:State = cast stateStack.peek();
			topState.deactivateState();
			singleton.removeChild(cast stateStack.peek());
		}
		singleton.addChild(state);
		stateStack.push(state);
		state.activateState();
		var j:Int = 0;
	}
	public static function clearAllStates():Void {
		while (!stateStack.isEmpty())
			popState();
	}
	public static function getState():State {
		return cast stateStack.peek();
	}
	
	
	public static function getTileSize():Int {
		return tileSize;
	}
	
	
	public function replaceGeneralTerm(term:String):String {
		if (Std.is(stateStack.peek(), GameState)) {
			return stateStack.peek().findGeneralTerm(term);
		}
		else return "";
	}
	
}