package maps;

import actors.attacks.Projectile;
import actors.enemies.Enemy;
import actors.attacks.Hitbox;
import maps.mapobjects.Checkpoint;
import actors.Player;
import actors.Actor;
import flash.display.Shape;
import flash.display.Sprite;
import flash.geom.Point;
import flash.geom.Rectangle;
import flash.utils.ByteArray;
import maps.mapobjects.AIPathWall;
import maps.mapobjects.MapObject;
import maps.mapobjects.Portal;
import maps.mapobjects.SpawnPoint;
import maps.mapobjects.Tile;
import openfl.Vector;
/**
 * ...
 * @author Peltast
 */
class AreaMap extends Sprite
{
	private var hostLevel:Level;
	
	private var objectList:Array<Array<MapObject>>;
	private var actorList:Array<Actor>;
	private var projectileList:Array<Projectile>;
	private var player:Player;
	
	private var startPoint:Checkpoint;
	private var currentCheckpoint:MapObject;
	private var checkPoints:Array<Checkpoint>;
	private var spawnPoints:Array<SpawnPoint>;
	private var pathWalls:Array<AIPathWall>;
	private var endPoints:Array<Portal>;
	
	private var background:Shape;
	
	private var mapWidth:Int;
	private var mapHeight:Int;
	private var tileSize:Int;
	
	public function new(mapFile:ByteArray, hostLevel:Level) 
	{
		super();
		this.hostLevel = hostLevel;
		
		checkPoints = new Array<Checkpoint>();
		spawnPoints = new Array<SpawnPoint>();
		pathWalls = new Array<AIPathWall>();
		endPoints = new Array<Portal>();
		
		mapWidth = 0;
		mapHeight = 0;
		tileSize = 32;
		var fileBytes:ByteArray = mapFile;
		var fileInfo:String = fileBytes.toString();
		var fileArray:Array<String> = fileInfo.split("\n");
		
		parseMapDimensions(fileArray);
		addMapBG(0x000000);
		
		actorList = new Array<Actor>();
		projectileList = new Array<Projectile>();
		initiateObjectList(mapWidth, mapHeight);
		
		readTiles(fileArray);
		readDynamicObjects(fileArray);
	}
	private function parseMapDimensions(fileArray:Array<String>):Void {
		
		// Parse height and width information out of file
		var fcount:Int = 0;
		for (f in 0...fileArray.length) {
			if (fileArray[f].indexOf("layer name") >= 0)
				break;
			fcount += 1;
		}
		
		var sizeLine:Array<String> = fileArray[fcount].split(' ');
		for (i in 0...sizeLine.length) {
			if(sizeLine[i].indexOf("width") >= 0){
				var parsedWidth:Array<String> = sizeLine[i].split('"');
				mapWidth = Std.parseInt(parsedWidth[1]);
			}
				else if (sizeLine[i].indexOf("height") >= 0){
				var parsedHeight:Array<String> = sizeLine[i].split('"');
				mapHeight = Std.parseInt(parsedHeight[1]);
			}
		}
	}
	private function addMapBG(color:Int):Void {
		
		background = new Shape();
		background.graphics.beginFill(color);
		background.graphics.drawRect(0, 0, mapWidth * tileSize, mapHeight * tileSize);
		background.graphics.endFill();
		this.addChildAt(background, 0);
	}
	private function initiateObjectList(width:Int, height:Int):Void {
		
		objectList = [];
		for (y in 0...height) {
			var row:Array<MapObject> = [];
			for (x in 0...width) {
				row.push(null);
			}
			objectList.push(row);
		}
	}
	private function readTiles(fileArray:Array<String>):Void {
		// Iterate through all of the tile information
		var yCounter:Int = 0;
		var xCounter:Int = 0;
		
		for (j in 7...fileArray.length) {
			if (fileArray[j].indexOf("layer name") >= 0) {
				xCounter = 0;
				yCounter = 0;
				continue;
			}
			else if (fileArray[j].indexOf('tile gid="') < 0) 
				continue;
				
			var parsedTileLine:Array<String> = fileArray[j].split('"');
			var index:Int = cast parsedTileLine[1];
			
			createObject(index, xCounter, yCounter);
			
			xCounter += 1;
			if (xCounter >= mapWidth) {
				xCounter = 0;
				yCounter += 1;
			}
		}
	}
	private function createObject(index:Int, x:Int, y:Int):Void {
		if (index == 0) return;
		
		if (ObjectFactory.getSingleton().isObjectTile(index))
			createTile(index, x, y);
		else if (ObjectFactory.getSingleton().isObjectCheckpoint(index))
			createCheckpoint(index, x, y);
		else if (ObjectFactory.getSingleton().isMapStart(index))
			createStartpoint(index, x, y);
		//else if (ObjectFactory.getSingleton().isMapEnd(index))
		//	createEndpoint(index, x, y);
		else if (ObjectFactory.getSingleton().isObjectSpawnPoint(index))
			createSpawnPoint(index, x, y);
		else if (ObjectFactory.getSingleton().isObjectAIPathWall(index))
			createAIPathWall(index, x, y);
	}
	private function createTile(index:Int, x:Int, y:Int):Void {
		var newTile:Tile = ObjectFactory.getSingleton().createTile(index);
		if (newTile == null)
			return;
		
		this.addChild(newTile);
		newTile.x = x * tileSize;
		newTile.y = y * tileSize;
		objectList[y][x] = newTile;
	}
	private function createCheckpoint(index:Int, x:Int, y:Int):Void {
		var newCheckpoint:Checkpoint = ObjectFactory.getSingleton().createCheckpoint(index);
		
		this.addChild(newCheckpoint);
		newCheckpoint.x = x * tileSize;
		newCheckpoint.y = y * tileSize;
		objectList[y][x] = newCheckpoint;
		
		checkPoints.push(newCheckpoint);
	}
	private function createStartpoint(index:Int, x:Int, y:Int):Void {
		var startPoint:Checkpoint = ObjectFactory.getSingleton().createCheckpoint(index);
		startPoint.x = x * tileSize;
		startPoint.y = y * tileSize;
		this.startPoint = startPoint;
	}
	private function createEndpoint(index:Int, endMap:String, x:Int, y:Int):Void {
		var endPoint:Portal = ObjectFactory.getSingleton().createPortal(index, endMap);
		endPoint.x = x * tileSize;
		endPoint.y = y * tileSize;
		this.endPoints.push(endPoint);
		this.addChild(endPoint);
	}
	private function createSpawnPoint(index:Int, x:Int, y:Int):Void {
		var spawnPoint:SpawnPoint = ObjectFactory.getSingleton().createSpawnPoint(index);
		spawnPoint.x = x * tileSize;
		spawnPoint.y = y * tileSize;
		
		spawnPoints.push(spawnPoint);
	}
	private function createAIPathWall(index:Int, x:Int, y:Int):Void {
		var pathWall:AIPathWall = ObjectFactory.getSingleton().createAIPathWall(index);
		pathWall.x = x * tileSize;
		pathWall.y = y * tileSize;
		objectList[y][x] = pathWall;
		
		pathWalls.push(pathWall);
	}
	
	private function readDynamicObjects(fileArray:Array<String>):Void {
		
		for (i in 0...fileArray.length) {
			if (fileArray[i].indexOf("object id") >= 0)
				parseDynamicObject(fileArray, i);
		}
		
	}
	private function parseDynamicObject(fileArray:Array<String>, startIndex:Int):Void {
		
		var objectProperties:Map<String, String> = new Map<String,String>();
		var objectID:Int = parseObjectID(fileArray[startIndex]);
		var objectLocation:Point = parseObjectLocation(fileArray[startIndex]);
		
		for (j in startIndex...fileArray.length) {
			if (fileArray[j].indexOf("/properties") >= 0) break;
			
			if (fileArray[j].indexOf("property name") >= 0)
				objectProperties = addObjectProperty(fileArray[j], objectProperties);
		}
		
		if (objectProperties["type"] == "portal")
			createEndpoint(objectID, objectProperties["map"], cast objectLocation.x / tileSize, cast objectLocation.y / tileSize);
	}
	private function parseObjectID(idLine:String):Int {
		var parsedLine:Array<String> = idLine.split(" ");
		var objectID:Int = 0;
		for (i in 0...parsedLine.length) {
			if (parsedLine[i].indexOf("gid") >= 0)
				objectID = cast parsedLine[i].split('"')[1];
		}
		return objectID;
	}
	private function parseObjectLocation(idLine:String):Point {
		var parsedLine:Array<String> = idLine.split(" ");
		var objectX:Int = 0;
		var objectY:Int  = 0;
		for (i in 0...parsedLine.length) {
			if (parsedLine[i].indexOf("x") >= 0)
				objectX = cast parsedLine[i].split('"')[1];
			if (parsedLine[i].indexOf("y") >= 0)
				objectY = cast parsedLine[i].split('"')[1];
		}
		return new Point(objectX, objectY - 1);
	}
	private function addObjectProperty(propertyLine:String, propertyMap:Map<String, String>):Map<String, String> {
		var parsedLine:Array<String> = propertyLine.split(" ");
		var name:String = "";
		var value:String = "";
		for (i in 0...parsedLine.length) {
			if (parsedLine[i].indexOf("name") >= 0)
				name = parsedLine[i].split('"')[1];
			if (parsedLine[i].indexOf("value") >= 0)
				value = parsedLine[i].split('"')[1];
		}
		propertyMap[name] = value;
		return propertyMap;
	}
	
	public function resetMap():Void {
		currentCheckpoint = null;
		for (i in 0...checkPoints.length) {
			checkPoints[i].setInactive();
		}
		resetSpawnPoints();
	}
	private function resetSpawnPoints():Void {
		for (i in 0...spawnPoints.length) {
			spawnPoints[i].resetSpawn();
		}
	}
	
	
	public function updateMap():Void {
		
		player.updatePlayer();
		updateActors();
		updateProjectiles();
		updateSpawnPoints();
	}
	private function updateActors():Void {
		
		for (i in 0...actorList.length) {
			if (i >= actorList.length) return;
			actorList[i].updateActor();
		}
	}
	private function updateSpawnPoints():Void {
		
		for (i in 0...spawnPoints.length) {
			if (spawnPoints[i].updateSpawn())
				this.addActor(spawnPoints[i].getEnemyType());
		}
	}
	
	private function updateProjectiles():Void {
		var expiredProjectiles:Array<Projectile> = [];
		
		for(i in 0...projectileList.length) {
			if (projectileList[i].updateProjectile())
				expiredProjectiles.push(projectileList[i]);
		}
		for (j in 0...expiredProjectiles.length) {
			removeProjectile(expiredProjectiles[j]);
		}
	}
	
	public function addPlayer(player:Player, origin:Portal = null):Void {
		this.player = player;
		addActor(player);
		
		if (origin != null) {
			player.x = origin.x + 6;
			player.y = origin.y - 4;
			currentCheckpoint = origin;
		}
		else if (startPoint != null) {
			player.x = startPoint.x;
			player.y = startPoint.y;
			currentCheckpoint = startPoint;
		}
		else {
			player.x = 32;
			player.y = 32;
		}
	}
	private function addActor(actor:Actor):Void {
		
		actorList.push(actor);
		actor.setCurrentMap(this);
		this.addChild(actor);
	}
	public function removeActor(actor:Actor):Void {
		if (this.contains(actor))
			this.removeChild(actor);
		for (i in 0...actorList.length) {
			if (actorList[i] == actor)
				actorList.splice(i, 1);
		}
	}
	
	public function addProjectile(projectile:Projectile):Void {
		projectileList.push(projectile);
		this.addChild(projectile);
	}
	public function removeProjectile(projectile:Projectile):Void {
		projectileList.splice(projectileList.indexOf(projectile), 1);
		if (this.contains(projectile))
			this.removeChild(projectile);
	}
	
	public function checkCollisions(object:MapObject, AIcheck:Bool = false):Array<MapObject> {
		
		var objectBounds:Rectangle = object.getCollisionBounds();
		var objectCenter:Point = new Point(objectBounds.x + objectBounds.width / 2, objectBounds.y + objectBounds.height / 2);
		objectCenter = new Point(Math.floor(objectCenter.x / tileSize), Math.floor(objectCenter.y / tileSize));
		var collisionList:Array<MapObject> = new Array<MapObject>();
		
		var objectY:Int = cast objectCenter.y;
		var objectX:Int = cast objectCenter.x;
		
		for (y in objectY - 1...objectY + 2) {
			for (x in objectX - 1...objectX + 2) {
				
				if (y >= objectList.length || y < 0) continue;
				else if (x >= objectList[y].length || x < 0) continue;
				
				if (objectList[y][x] != null) {
					
					if(!AIcheck){
						if (checkObjectCollision(object, y, x))
							collisionList.push(objectList[y][x]);
					}
					else
						if (checkAICollision(object, y, x))
							collisionList.push(objectList[y][x]);
				}
			}
		}
		
		return collisionList;
	}
	
	public function checkDistFromPlayer(actor:Actor):Point {
		if (Std.is(actor, player)) return new Point( -1, -1);
		
		return new Point(actor.x - player.x, actor.y - player.y);
	}
	
	public function checkActorCollisions(actor:Actor):Array<Actor> {
		
		var actorBounds:Rectangle = actor.getCollisionBounds();
		var collisionList:Array<Actor> = new Array<Actor>();
		
		for (i in 0...actorList.length) {
			if (actorList[i] == actor) continue;
			var otherBounds:Rectangle = actorList[i].getCollisionBounds();
			
			if (otherBounds.intersects(actorBounds))
				collisionList.push(actorList[i]);
		}
		
		return collisionList;
	}
	
	public function checkActorHitBoxes(actor:Actor):Array<Actor> {
		
		var collisionList:Array<Actor> = new Array<Actor>();
		
		for (i in 0...actorList.length) {
			if (actorList[i].isHitting(actor) && actor != actorList[i])
				collisionList.push(actorList[i]);
		}
		
		return collisionList;
	}
	public function checkProjectileBounds(actor:Actor):Array<Projectile> {
		var collisionList:Array<Projectile> = new Array<Projectile>();
		
		for (i in 0...projectileList.length) {
			if (projectileList[i].checkCollision(actor))
				collisionList.push(projectileList[i]);
		}
		
		return collisionList;
	}
	
	public function updateCheckpoints(player:Player):Void {
		for (i in 0...checkPoints.length) {
			
			var checkpoint:Checkpoint = checkPoints[i];
			if (player.checkCollision(checkpoint) && !checkpoint.getActive()) {
				changeCheckpoint(checkpoint);
				return;
			}
		}
	}
	public function updateEndPortal(player:Player):Void {
		if (endPoints == null) return;
		
		for (i in 0...endPoints.length) {
			
			var endPoint:Portal = endPoints[i];
			if (player.checkCollision(endPoint)) {
				
				var endMap:AreaMap = hostLevel.getMap(endPoint.getEndMap());
				var origin:Portal = endMap.findDoorFrom(hostLevel.getMapLabel(this));
				
				LevelManager.getSingleton().getCurrentLevel().setMap(endMap, player, origin);
				removeActor(player);
			}
		}
	}
	private function findDoorFrom(map:String):Portal {
		for (i in 0...endPoints.length) {
			if (endPoints[i].getEndMap() == map)
				return endPoints[i];
		}
		return null;
	}
	
	private function checkAICollision(object:MapObject, y:Int, x:Int):Bool {
		if (objectList[y][x] == null) return false;
		
		if (Std.is(objectList[y][x], AIPathWall)) {
			var collidingPath:AIPathWall = cast objectList[y][x];
			if (collidingPath.checkCollision(object, false))
				return true;
		}
		else if (Std.is(objectList[y][x], Enemy)) {
			var collidingEnemy:Enemy = cast objectList[y][x];
			if (collidingEnemy.checkCollision(object))
				return true;
		}
		return false;
	}
	
	private function checkObjectCollision(object:MapObject, y:Int, x:Int):Bool {
		if (objectList[y][x] == null) return false;
		
		if (Std.is(objectList[y][x], Tile)) {
			var collidingTile:Tile = cast objectList[y][x];
			if (collidingTile.checkCollision(object))
				return true;
		}
		else {
			var collidingObject:MapObject = cast objectList[y][x];
			if (collidingObject.checkCollision(object))
				return true;
		}
		return false;
	}
	
	public function getCurrentCheckpoint():MapObject {
		return currentCheckpoint;
	}
	private function changeCheckpoint(newCheckpoint:MapObject):Void {
		
		currentCheckpoint = newCheckpoint;
	}
	
	public function getMapWidth():Int {
		return mapWidth * tileSize;
	}
	public function getMapHeight():Int {
		return mapHeight * tileSize;
	}
	
}
