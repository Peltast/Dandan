package maps;
import actors.Player;
import openfl.display.Sprite;

/**
 * ...
 * @author Peltast
 */
class Level extends Sprite
{

	private var mapList:Array<AreaMap>;
	private var currentMap:AreaMap;
	
	public function new(mapList:Array<AreaMap>)
	{
		super();
		
		this.mapList = mapList;
		if (mapList.length > 0) {	
			currentMap = mapList[0];
		}
	}
	
	public function resetLevel():Void {
		currentMap = mapList[0];
	}
	
	public function getNextMap(map:AreaMap):AreaMap {
		var index:Int = mapList.indexOf(map);
		if (index < 0 || index > mapList.length + 1) 
			return null;
		else
			return getMapAt(index + 1);
	}
	public function getMapAt(index:Int):AreaMap {
		if (index < mapList.length)
			return mapList[index];
		return null;
	}
	public function getCurrentMap():AreaMap {
		return currentMap;
	}
	
	public function setMap(newMap:AreaMap, player:Player):Void {
		if (currentMap != null) if (this.contains(currentMap)) {
			currentMap.resetMap();
			this.removeChild(currentMap);
		}
		
		currentMap = newMap;
		this.addChild(currentMap);
		currentMap.resetMap();
		currentMap.addPlayer(player);
	}
	public function initiateLevel(player:Player):Void {
		
		setMap(currentMap, player);
	}
	
}