package maps.mapobjects;
import actors.enemies.Enemy;
import actors.enemies.WalkingEnemy;
import maps.mapobjects.MapObject;
import openfl.display.Bitmap;

/**
 * ...
 * @author Peltast
 */
class SpawnPoint extends MapObject
{

	private var enemyPrototype:Enemy;

	private var frequency:Int;
	private var startCount:Int;
	private var counter:Int;
	private var enemyCount:Int;
	private var maxEnemies:Int;
	private var enemiesPerInstance:Int;
	private var totalEnemiesSpawned:Int;
	
	public function new(defaultBmp:Bitmap, enemyPrototype:Enemy, maxEnemies:Int = 3,
						frequency:Int = 60, startCount:Int = 50, enemiesPerInstance:Int = -1) 
	{
		super(this, defaultBmp, false);
		
		this.frequency = frequency;
		this.startCount = startCount;
		counter = startCount;
		enemyCount = 0;
		totalEnemiesSpawned = 0;
		this.maxEnemies = maxEnemies;
		this.enemiesPerInstance = enemiesPerInstance;
		this.enemyPrototype = enemyPrototype;
	}
	
	public function updateSpawn():Bool {
		
		if (enemiesPerInstance != -1 && totalEnemiesSpawned >= enemiesPerInstance)
			return false;
		if (enemyCount >= maxEnemies) 
			return false;
		
		counter += 1;
		
		if (counter >= frequency) {
			counter = 0;
			enemyCount += 1;
			totalEnemiesSpawned += 1;
			return true;
		}
		return false;
	}
	
	public function resetSpawn():Void {
		totalEnemiesSpawned = 0;
		enemyCount = 0;
		counter = startCount;
	}
	
	public function getEnemyType():Enemy {
		
		var newEnemy:Enemy = enemyPrototype.createClone(this);
		newEnemy.x = this.x;
		newEnemy.y = this.y;
		return newEnemy;
	}
	
	public function enemyDead(enemy:Enemy):Void {
		enemyCount -= 1;
	}
	
}