package actors.attacks;
import openfl.geom.Rectangle;

/**
 * ...
 * @author Peltast
 */
class Attack
{
	private var active:Bool;
	private var attackMovement:ObjectMover;
	private var attackHitbox:Hitbox;
	private var attackAnimation:String;
	private var stunAnimation:String;
	
	private var duration:Int;
	private var hitDuration:Int;
	private var counter:Int;
	private var damage:Int;
	private var stunDuration:Int;
	private var unstoppable:Bool;
	
	public function new(attackMovement:ObjectMover, hits:Array<Rectangle>, duration:Int, damage:Int,
						stunDuration:Int, animation:String = "", stunAnimation:String = "", unstoppable:Bool = false, hitDuration:Int = -1) 
	{
		this.attackMovement = attackMovement;
		this.duration = duration;
		if (hitDuration == -1)
			this.hitDuration = duration;
		else
			this.hitDuration = hitDuration;
		this.attackHitbox = new Hitbox(hits, this.hitDuration);
		this.damage = damage;
		this.stunDuration = stunDuration;
		this.attackAnimation = animation;
		this.stunAnimation = stunAnimation;
		this.unstoppable = unstoppable;
		
		counter = 0;
		
		active = false;
	}
	
	public function startAttack():Void {
		active = true;
	}
	private function endAttack():Void {
		active = false;
		counter = 0;
	}
	public function updateAttack(mover:ObjectMover):Bool {
		if (!active || duration < 0) return false;
		
		counter += 1;
		
		if (counter >= duration) {
			endAttack();
			return true;
		}
		return false;
	}
	
	public function isActive():Bool {
		return active;
	}
	public function getMovement():ObjectMover {
		if (attackMovement == null) return null;
		return attackMovement.copyMover();
	}
	public function getHits():Hitbox {
		return attackHitbox;
	}
	public function getDamage():Int {
		return damage;
	}
	public function getStunDuration():Int {
		return stunDuration;
	}
	public function getDuration():Int {
		return duration;
	}
	public function hasAnimation():Bool {
		if (attackAnimation == "") return false;
		return true;
	}
	public function getAnimation():String {
		return attackAnimation;
	}
	public function hasStunAnimation():Bool {
		if (stunAnimation == "") return false;
		return true;
	}
	public function getStunAnimation():String {
		return stunAnimation;
	}
	
	public function grantsUnstoppable():Bool {
		return unstoppable;
	}
	
}