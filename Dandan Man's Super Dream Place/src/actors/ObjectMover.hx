package actors;
import openfl.geom.Point;

/**
 * ...
 * @author Peltast
 */
class ObjectMover
{

	private var xAcc:Float;
	private var yAcc:Float;
	private var targetXVel:Int;
	private var targetYVel:Int;
	private var maxSpeedX:Int;
	private var maxSpeedY:Int;
	private var grounded:Bool;
	private var maxJumpCharges:Int;
	private var jumpCharges:Int;
	private var gravity:Int;
	
	private var xVel:Float;
	private var yVel:Float;
	
	private var takesInput:Bool;
	
	public function new(xAcc:Float, yAcc:Float, targetXVel:Int, targetYVel:Int, xVel:Float, yVel:Float,
						maxSpeedX:Int, maxSpeedY:Int, jumpCharges:Int, gravity:Int = 10, takesInput:Bool = true) 
	{
		this.xAcc = xAcc;
		this.yAcc = yAcc;
		this.targetXVel = targetXVel;
		this.targetYVel = targetYVel;
		this.xVel = xVel;
		this.yVel = yVel;
		this.maxSpeedX = maxSpeedX;
		this.maxSpeedY = maxSpeedY;
		this.maxJumpCharges = jumpCharges;
		this.jumpCharges = jumpCharges;
		this.gravity = gravity;
		this.takesInput = takesInput;
	}
	
	public function updateMovement():Void {
		
		updateVelocity();
	}
	private function updateVelocity():Void {
		
		xVel = targetXVel * xAcc + (1 - xAcc) * xVel;
		if (xVel > maxSpeedX)
			xVel = maxSpeedX;
		else if (xVel < -maxSpeedX)
			xVel = -maxSpeedX;
		
		yVel = targetYVel * yAcc + (1 - yAcc) * yVel;
		if (yVel > maxSpeedY)
			yVel = maxSpeedY;
		else if (yVel < -maxSpeedY)
			yVel = -maxSpeedY;
		
		targetYVel = gravity;
	}
	
	public function setGrounded():Void {
		jumpCharges = maxJumpCharges;
		grounded = true;	
	}
	
	public function applyForce(direction:Point, intensity:Int):Void {
		
		var hypotenuse:Float = Math.sqrt((direction.x * direction.x) + (direction.y * direction.y));
		
		xVel = Math.round((direction.x / hypotenuse) * intensity * xAcc);
		yVel = Math.round((direction.y / hypotenuse) * intensity * yAcc);
	}
	
	public function goLeft():Void {
		if (!takesInput) return;
		
		targetXVel = -5;
	}
	public function goRight():Void {
		if (!takesInput) return;
		
		targetXVel = 5;
	}
	public function stopLeft():Void {
		if (!takesInput) return;
		
		if (targetXVel < 0)
			targetXVel = 0;
	}
	public function stopRight():Void {
		if (!takesInput) return;
		
		if (targetXVel > 0)
			targetXVel = 0;
	}
	public function jump():Void {
		if (!takesInput) return;
		if (jumpCharges == 0) return;
		
		jumpCharges -= 1;
		grounded = false;
		yVel = -15;
	}
	
	public function getXVel():Float {
		return xVel;
	}
	public function getYVel():Float {
		return yVel;
	}
	public function invertTargetXVel():Void {
		targetXVel = -targetXVel;
	}
	public function invertTargetYVel():Void {
		targetYVel = -targetYVel;
	}
	public function getTargetXVel():Int {
		return targetXVel;
	}
	public function getTargetYVel():Int {
		return targetYVel;
	}
	public function getIsGrounded():Bool {
		return grounded;	
	}
	
	public function freeze():Void {
		xVel = 0;
		yVel = 0;
		targetXVel = 0;
		targetYVel = 0;
	}
	
	public function copyMover():ObjectMover {
		return new ObjectMover(xAcc, yAcc, targetXVel, targetYVel, xVel, yVel, maxSpeedX, maxSpeedY, jumpCharges, gravity, takesInput);
	}
	
}