package ui;
import actors.Player;
import core.GameState;
import maps.LevelManager;

/**
 * ...
 * @author Peltast
 */
class GameScreen extends OverlayItem
{

	private var gameState:GameState;
	private var player:Player;
	private var mapManager:LevelManager;
	
	public function new() 
	{
		super(this, true);
	}
	
	public function initiateGameScreen(gameState:GameState, player:Player, mapManager:LevelManager):Void {
		
		this.gameState = gameState;
		this.player = player;
		this.mapManager = mapManager;
		this.addChild(mapManager);
	}
	
	override public function activateOverlayItem():Void 
	{
		super.activateOverlayItem();
		
		//this.repaintGUI();
		//guiManager.resumeDialogue();
		//player.addPlayerListeners();
		//SoundManager.getSingleton().resumeAllSounds();
	}
	
	override public function updateOverlayItem():Void 
	{
		super.updateOverlayItem();
		
		mapManager.getCurrentLevel().getCurrentMap().updateMap();
	}
	
	override public function deactivateOverlayItem():Void 
	{
		super.deactivateOverlayItem();
		/*
		this.hideGUI();
		
		// Stop player movement and input
		player.removePlayerListeners();
		player.getHost().setDown(false);
		player.getHost().setUp(false);
		player.getHost().setLeft(false);
		player.getHost().setRight(false);
		
		// pause any music/sound that's playing
		SoundManager.getSingleton().pauseAllSounds();
		*/
	}
}