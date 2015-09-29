package core;

import maps.LevelManager;
import actors.Player;

/**
 * ...
 * @author Peltast
 */
class GameState extends State
{
	
	private var gameScreen:GameScreen;
	private var levelManager:LevelManager;
	
	public function new() 
	{
		super(this);
		
		gameScreen = new GameScreen();
		
		var player:Player = new Player();
		levelManager = LevelManager.getSingleton();
		levelManager.setLevel(1, player);
		
		this.addChild(levelManager);	
	}
	
	override public function drawState():Void 
	{
		
		levelManager.getCurrentLevel().getCurrentMap().updateMap();
	}
		
}