package maps;
import actors.Player;
import maps.mapobjects.Portal;
import openfl.Assets;
import openfl.display.Sprite;
import openfl.geom.Point;

/**
 * ...
 * @author Peltast
 */
class Level extends Sprite
{

	private var mapList:Map<String, AreaMap>;
	private var startMap:String;
	private var currentMap:AreaMap;
	
	public function new(level:Int, stages:Array<Int>, startMap:String)
	{
		super();
		
		this.mapList = loadMaps(level, stages);
		this.startMap = startMap;
		if (mapList[startMap] != null)
			currentMap = mapList[startMap];
		
	}
	
	private function loadMaps(level:Int, stages:Array<Int>):Map<String, AreaMap> {
		
		var loadedMapList:Map<String, AreaMap> = new Map<String, AreaMap>();
		
		for (i in 0...stages.length) {
			var mapString:String = "assets/Stage" + level + "-" + stages[i] + ".tmx";
			var loadedMap:AreaMap = new AreaMap(Assets.getBytes(mapString), this);
			if (loadedMap == null)
				continue;
			else
				loadedMapList["Stage" + level + "-" + stages[i]] = loadedMap;
		}
		
		return loadedMapList;
	}
	
	
	public function resetLevel():Void {
		currentMap = mapList[startMap];
	}
	
	public function getMap(name:String):AreaMap {
		return mapList[name];
	}
	public function getMapLabel(map:AreaMap):String {
		for (key in mapList.keys()) {
			if (mapList[key] == map)
				return key;
		}
		return "";
	}
	public function getCurrentMap():AreaMap {
		return currentMap;
	}
	
	public function setMap(newMap:AreaMap, player:Player, origin:Portal = null):Void {
		if (currentMap != null) if (this.contains(currentMap)) {
			currentMap.resetMap();
			this.removeChild(currentMap);
		}
		
		currentMap = newMap;
		this.addChild(currentMap);
		currentMap.resetMap();
		currentMap.addPlayer(player, origin);
	}
	public function initiateLevel(player:Player):Void {
		
		setMap(currentMap, player);
	}
	
}