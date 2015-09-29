package core;

/**
 * ...
 * @author Peltast
 */
class Stack
{
	
	public var first:StackNode;
	private var length:Int;
	
	public function new()	{
		length = 0;
	}
	
	public function isEmpty():Bool {
		return first == null;
	}
	
	public function push(newObject:Dynamic):Void {
		var second:StackNode = first;
		first = new StackNode();
		first.nextNode = second;
		first.content = newObject;
		length++;
	}
	
	public function pop():Dynamic {
		if (!isEmpty()) {
			length--;
			var second:StackNode = first.nextNode;
			var poppedObject:Dynamic = first.content;
			first = second;
			return poppedObject;
		}
		else {
			trace("Error: Stack empty when pop was called.");
			return null;
		}
	}
	
	public function peek():Dynamic {
		if(!isEmpty())
			return first.content;
		else {
			return null;
		}
	}
	
	public function getLength():Int
	{
		return length;
	}
}