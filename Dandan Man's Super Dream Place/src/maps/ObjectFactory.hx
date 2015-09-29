package maps;

import actors.abilities.LaunchAbility;
import actors.abilities.ProjectileAbility;
import actors.enemies.DashEnemy;
import actors.enemies.LaunchEnemy;
import actors.enemies.ProjectileEnemy;
import actors.enemies.WalkingEnemy;
import maps.mapobjects.AIPathWall;
import maps.mapobjects.Checkpoint;
import maps.mapobjects.Portal;
import maps.mapobjects.SpawnPoint;
import maps.mapobjects.Tile;
import openfl.display.Bitmap;
import openfl.display.BitmapData;
import openfl.geom.Point;
import openfl.geom.Rectangle;

/**
 * ...
 * @author Peltast
 */
class ObjectFactory
{

	private static var singleton:ObjectFactory;
	
	public static function getSingleton():ObjectFactory {
		
		if (singleton == null)
			singleton = new ObjectFactory();
		return singleton;
	}
	
	private static var TILE_STARTPOINT:Int = 41;
	private static var TILE_ENDPOINT:Int = 42;
	private static var TILE_CHECKPOINT:Int = 20;
	private static var TILE_AIPATHWALL:Int = 43;
	
	private static var TILE_SPAWNPOINT_WALKING:Int = 44;
	private static var TILE_SPAWNPOINT_DASH:Int = 45;
	private static var TILE_SPAWNPOINT_LAUNCH:Int = 46;
	private static var TILE_SPAWNPOINT_PROJECTILE:Int = 47;
	
	private static var TILE_BACKGROUND:Int = 11;
	private static var TILE_PLATFORM:Int = 12;
	private static var TILE_FATAL_UP:Int = 13;
	private static var TILE_FATAL_DOWN:Int = 14;
	private static var TILE_FATAL_LEFT:Int = 15;
	private static var TILE_FATAL_RIGHT:Int = 16;
	private static var TILE_FATAL_LR:Int = 17;
	private static var TILE_FATAL_UD:Int = 18;
	private static var TILE_FATAL_ALL:Int = 19;
	
	
	private static var tileTypes:Array<Int> = [TILE_FATAL_ALL, TILE_FATAL_DOWN, TILE_FATAL_LEFT, TILE_FATAL_RIGHT, TILE_FATAL_UP,
						TILE_FATAL_LR, TILE_FATAL_UD, TILE_BACKGROUND, TILE_PLATFORM];
	
	private static var fatalTypes:Array<Int> = [TILE_FATAL_ALL, TILE_FATAL_DOWN, TILE_FATAL_LEFT, TILE_FATAL_RIGHT, TILE_FATAL_UP,
						TILE_FATAL_LR, TILE_FATAL_UD];
	
	private static var spawnTypes:Array<Int> = [TILE_SPAWNPOINT_WALKING, TILE_SPAWNPOINT_DASH, TILE_SPAWNPOINT_LAUNCH,
						TILE_SPAWNPOINT_PROJECTILE];
	
	private var tileSize:Int;
	private var tileSheetWidth:Int;
	private var tileSheet:Bitmap;
	private var tileIndexTypes:Map<Int, Int>;
	
	
	public function new() 
	{
		tileSize = 32;
		tileSheetWidth = 480;
		
		tileSheet = Main.getBitmapAsset("assets/World1Tiles.png");
		
		tileIndexTypes = new Map();
		
		assignTileIndexTypes();
	}
	private function assignTileIndexTypes():Void {
		
		tileIndexTypes[0] = TILE_CHECKPOINT;
		tileIndexTypes[1] = TILE_ENDPOINT;
		tileIndexTypes[2] = TILE_BACKGROUND;
		tileIndexTypes[3] = TILE_AIPATHWALL;
		tileIndexTypes[16] = TILE_STARTPOINT;
		
		tileIndexTypes[15] = TILE_SPAWNPOINT_WALKING;
		tileIndexTypes[30] = TILE_SPAWNPOINT_DASH;
		tileIndexTypes[45] = TILE_SPAWNPOINT_LAUNCH;
		tileIndexTypes[60] = TILE_SPAWNPOINT_PROJECTILE;
		
		tileIndexTypes[31] = TILE_PLATFORM;
		tileIndexTypes[32] = TILE_PLATFORM;
		tileIndexTypes[33] = TILE_PLATFORM;
		tileIndexTypes[46] = TILE_PLATFORM;
		tileIndexTypes[47] = TILE_PLATFORM;
		tileIndexTypes[48] = TILE_PLATFORM;
		tileIndexTypes[61] = TILE_PLATFORM;
		tileIndexTypes[62] = TILE_PLATFORM;
		tileIndexTypes[63] = TILE_PLATFORM;
		
		tileIndexTypes[36] = TILE_PLATFORM;
		tileIndexTypes[51] = TILE_PLATFORM;
		
		tileIndexTypes[24] = TILE_FATAL_DOWN;
		tileIndexTypes[25] = TILE_FATAL_DOWN;
		tileIndexTypes[26] = TILE_FATAL_DOWN;
		tileIndexTypes[54] = TILE_FATAL_UP;
		tileIndexTypes[55] = TILE_FATAL_UP;
		tileIndexTypes[56] = TILE_FATAL_UP;
	}
	private function getIndexType(tileIndex:Int = 0):Int {
		
		tileIndex -= 1;
		
		if (tileIndexTypes.exists(tileIndex)) 
			return tileIndexTypes[tileIndex];
		else
			return -1;
	}
	
	public function isObjectTile(index:Int):Bool
	{
		var indexType:Int = getIndexType(index);
		
		if (tileTypes.indexOf(indexType) >= 0)
			return true;
		return false;
	}
	public function isObjectCheckpoint(index:Int):Bool {
		var indexType:Int = getIndexType(index);
		
		if (indexType == TILE_CHECKPOINT)
			return true;
		return false;
	}
	public function isMapStart(index:Int):Bool {
		var indexType:Int = getIndexType(index);
		
		if (indexType == TILE_STARTPOINT)
			return true;
		return false;
	}
	public function isMapEnd(index:Int):Bool {
		var indexType:Int = getIndexType(index);
		
		if (indexType == TILE_ENDPOINT)
			return true;
		return false;
	}
	public function isObjectSpawnPoint(index:Int):Bool {
		var indexType:Int = getIndexType(index);
		
		if (spawnTypes.indexOf(indexType) >= 0)
			return true;
		return false;
	}
	public function isObjectAIPathWall(index:Int):Bool {
		var indexType:Int = getIndexType(index);
		
		if (indexType == TILE_AIPATHWALL)
			return true;
		return false;
	}
	
	public function createCheckpoint(index:Int):Checkpoint {
		var indexType:Int = getIndexType(index);
		
		var checkpointBmp:Bitmap = Main.getBitmapAsset("assets/checkpoint.png");
		return new Checkpoint(false, checkpointBmp);
	}
	public function createPortal(index:Int):Portal {
		var portalBmp:Bitmap = Main.getBitmapAsset("assets/Door.png");
			
		return new Portal(portalBmp); 
	}
	public function createSpawnPoint(index:Int):SpawnPoint {
		var indexType:Int = getIndexType(index);
		var spawnBmp:Bitmap = Main.getBitmapAsset("assets/portal.png");
		
		if (indexType == TILE_SPAWNPOINT_WALKING)
			return new SpawnPoint(spawnBmp, new WalkingEnemy(null), 1, 60, 60, 1);
		else if (indexType == TILE_SPAWNPOINT_DASH)
			return new SpawnPoint(spawnBmp, new DashEnemy(null), 1, 60, 60, 1);
		else if (indexType == TILE_SPAWNPOINT_LAUNCH)
			return new SpawnPoint(spawnBmp, new LaunchEnemy(null), 1, 60, 60, 1);
		else if (indexType == TILE_SPAWNPOINT_PROJECTILE)
			return new SpawnPoint(spawnBmp, new ProjectileEnemy(null), 1, 60, 60, 1);
			
		else 
			return new SpawnPoint(spawnBmp, new WalkingEnemy(null));
	}
	public function createAIPathWall(index:Int):AIPathWall {
		var pathBmp:Bitmap = Main.getBitmapAsset("assets/portal.png");
		return new AIPathWall(pathBmp);
	}
	public function createTile(tileIndex:Int):Tile {
		
		var indexType:Int = getIndexType(tileIndex);
		
		if (indexType == TILE_PLATFORM)
			return createPlatformTile(tileIndex, indexType);
		
		else if (fatalTypes.indexOf(indexType) >= 0)
			return createSpikeTile(tileIndex, indexType);
		
		else if (indexType == TILE_BACKGROUND)
			return createBGTile(tileIndex, indexType);
		
		return null;
	}
	
	private function createPlatformTile(tileIndex:Int, indexType:Int):Tile {
		
		return new Tile(getTileBitmap(tileIndex), true, [0, 0, 0, 0]);
	}
	private function createSpikeTile(tileIndex:Int, indexType:Int):Tile {
		
		var fatalDirections:Array<Int> = [0, 0, 0, 0];
		if (indexType == TILE_FATAL_LEFT) fatalDirections[0] = 1;
		else if (indexType == TILE_FATAL_RIGHT) fatalDirections[1] = 1;
		else if (indexType == TILE_FATAL_UP) fatalDirections[2] = 1;
		else if (indexType == TILE_FATAL_DOWN) fatalDirections[3] = 1;
		else if (indexType == TILE_FATAL_LR) fatalDirections = [1, 1, 0, 0];
		else if (indexType == TILE_FATAL_UD) fatalDirections = [0, 0, 1, 1];
		else if (indexType == TILE_FATAL_ALL) fatalDirections = [1, 1, 1, 1];
		
		return new Tile(getTileBitmap(tileIndex), true, fatalDirections);
	}
	private function createBGTile(tileIndex:Int, indexType:Int):Tile {
		
		return new Tile(getTileBitmap(tileIndex), false, [0, 0, 0, 0]);
	}
	
	private function getTileBitmap(index:Int):Bitmap {
		return getBitmap(index, tileSheet, tileSheetWidth);
	}
	
	private function getBitmap(index:Int, sheet:Bitmap, sheetWidth:Int):Bitmap {
		
		var temp:Int = index * tileSize;
		var y:Int = Math.floor( temp / sheetWidth);
		var x:Int = Math.floor((( temp % sheetWidth) / tileSize) - 1);
		
		var frame:Rectangle = new Rectangle(x * tileSize, y * tileSize, tileSize, tileSize);
		var bitmap:Bitmap = new Bitmap(new BitmapData(tileSize, tileSize));
		bitmap.bitmapData.copyPixels(sheet.bitmapData, frame, new Point());
		
		return bitmap;
	}
	
}