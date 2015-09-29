package maps;

import actors.abilities.Ability;
import openfl.display.Sprite;
import openfl.utils.Dictionary;
import openfl.Assets;
import actors.Player;

/**
 * ...
 * @author Peltast
 */

 class LevelManager extends Sprite
	{	
		
		private static var singleton:LevelManager;
		
		public static function getSingleton():LevelManager {
			
			if (singleton == null)
				singleton = new LevelManager();
			return singleton;
		}
		
		private var levelList:Array<Level>;
		private var currentLevel:Level;
		
		public function new() 
		{
			super();
			
			levelList = new Array<Level>();
			
			var levelOne:Level = new Level(1, [1, 2, 3, 4, 420], "Stage1-1");
			//var levelTwo:Level = new Level(loadMaps(2, [1, 2]));
			
			levelList.push(levelOne);
			//levelList.push(levelTwo);
			
		}
		
		
		public function getCurrentLevel():Level {
			return currentLevel;
		}
		
		
		public function setLevel(newLevel:Int, player:Player):Void {
			if (newLevel > levelList.length + 1) return;
			
			if (currentLevel != null) if (this.contains(currentLevel)) {
				currentLevel.resetLevel();
				this.removeChild(currentLevel);
			}
			
			currentLevel = levelList[newLevel - 1];
			this.addChild(currentLevel);
			currentLevel.initiateLevel(player);
		}
		
	}
