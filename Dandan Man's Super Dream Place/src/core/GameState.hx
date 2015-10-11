package core;

import maps.LevelManager;
import actors.Player;
import ui.GameScreen;
import ui.Overlay;

/**
 * ...
 * @author Peltast
 */
class GameState extends State
{
	
	private var gameOverlay:Overlay;
	private var pauseOverlay:Overlay;
	
	private var gameScreen:GameScreen;
	private var levelManager:LevelManager;
	
	public function new() 
	{
		super(this);
		
		gameScreen = new GameScreen();
		
		var player:Player = new Player();
		levelManager = LevelManager.getSingleton();
		levelManager.setLevel(1, player);
		
		gameScreen.initiateGameScreen(this, player, levelManager);
		gameOverlay = new Overlay();
		gameOverlay.addToOverlay(gameScreen);
		
		pauseOverlay = new Overlay();
		
		overlayStack.pushOverlay(gameOverlay);
	}
	
	override public function drawState():Void 
	{
		super.drawState();
		//levelManager.getCurrentLevel().getCurrentMap().updateMap();
	}
		
}