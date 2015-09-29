package core;
import actors.Player;
import maps.LevelManager;
import openfl.display.Sprite;

/**
 * ...
 * @author Peltast
 */
class GameScreen extends Sprite
{

	private var gameState:GameState;
	private var player:Player;
	private var mapManager:LevelManager;
	
	public function new() 
	{
		super();
	}
	
	public function initiateGameScreen(gameState:GameState, player:Player, mapManager:LevelManager):Void {
		this.gameState = gameState;
		this.player = player;
		this.mapManager = mapManager;
	}
}