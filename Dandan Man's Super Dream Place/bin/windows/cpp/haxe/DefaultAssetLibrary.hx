package;


import haxe.Timer;
import haxe.Unserializer;
import lime.app.Preloader;
import lime.audio.AudioSource;
import lime.audio.openal.AL;
import lime.audio.AudioBuffer;
import lime.graphics.Image;
import lime.system.ThreadPool;
import lime.text.Font;
import lime.utils.ByteArray;
import lime.utils.UInt8Array;
import lime.Assets;

#if sys
import sys.FileSystem;
#end

#if (js && html5)
import lime.net.URLLoader;
import lime.net.URLRequest;
#elseif flash
import flash.display.Bitmap;
import flash.display.BitmapData;
import flash.display.Loader;
import flash.events.Event;
import flash.media.Sound;
import flash.net.URLLoader;
import flash.net.URLRequest;
#end


class DefaultAssetLibrary extends AssetLibrary {
	
	
	public var className (default, null) = new Map <String, Dynamic> ();
	public var path (default, null) = new Map <String, String> ();
	public var type (default, null) = new Map <String, AssetType> ();
	
	private var lastModified:Float;
	private var threadPool:ThreadPool;
	private var timer:Timer;
	
	
	public function new () {
		
		super ();
		
		#if (openfl && !flash)
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		#end
		
		#if flash
		
		path.set ("assets/checkpoint.png", "assets/checkpoint.png");
		type.set ("assets/checkpoint.png", AssetType.IMAGE);
		path.set ("assets/DashEnemy.png", "assets/DashEnemy.png");
		type.set ("assets/DashEnemy.png", AssetType.IMAGE);
		path.set ("assets/Door.png", "assets/Door.png");
		type.set ("assets/Door.png", AssetType.IMAGE);
		path.set ("assets/FlyingEnemy.png", "assets/FlyingEnemy.png");
		type.set ("assets/FlyingEnemy.png", AssetType.IMAGE);
		path.set ("assets/LaunchEnemy.png", "assets/LaunchEnemy.png");
		type.set ("assets/LaunchEnemy.png", AssetType.IMAGE);
		path.set ("assets/oldplayer.png", "assets/oldplayer.png");
		type.set ("assets/oldplayer.png", AssetType.IMAGE);
		path.set ("assets/openfl.svg", "assets/openfl.svg");
		type.set ("assets/openfl.svg", AssetType.TEXT);
		path.set ("assets/Player.png", "assets/Player.png");
		type.set ("assets/Player.png", AssetType.IMAGE);
		path.set ("assets/Player2.png", "assets/Player2.png");
		type.set ("assets/Player2.png", AssetType.IMAGE);
		path.set ("assets/PlayerDash.png", "assets/PlayerDash.png");
		type.set ("assets/PlayerDash.png", AssetType.IMAGE);
		path.set ("assets/PlayerLaunch.png", "assets/PlayerLaunch.png");
		type.set ("assets/PlayerLaunch.png", AssetType.IMAGE);
		path.set ("assets/PlayerProjectile.png", "assets/PlayerProjectile.png");
		type.set ("assets/PlayerProjectile.png", AssetType.IMAGE);
		path.set ("assets/portal.png", "assets/portal.png");
		type.set ("assets/portal.png", AssetType.IMAGE);
		path.set ("assets/Projectile.png", "assets/Projectile.png");
		type.set ("assets/Projectile.png", AssetType.IMAGE);
		path.set ("assets/Projectile2.png", "assets/Projectile2.png");
		type.set ("assets/Projectile2.png", AssetType.IMAGE);
		path.set ("assets/ProjectileEnemy.png", "assets/ProjectileEnemy.png");
		type.set ("assets/ProjectileEnemy.png", AssetType.IMAGE);
		path.set ("assets/RunningEnemy.png", "assets/RunningEnemy.png");
		type.set ("assets/RunningEnemy.png", AssetType.IMAGE);
		path.set ("assets/Stage1-1.tmx", "assets/Stage1-1.tmx");
		type.set ("assets/Stage1-1.tmx", AssetType.TEXT);
		path.set ("assets/Stage1-10.tmx", "assets/Stage1-10.tmx");
		type.set ("assets/Stage1-10.tmx", AssetType.TEXT);
		path.set ("assets/Stage1-100.tmx", "assets/Stage1-100.tmx");
		type.set ("assets/Stage1-100.tmx", AssetType.TEXT);
		path.set ("assets/Stage1-11.tmx", "assets/Stage1-11.tmx");
		type.set ("assets/Stage1-11.tmx", AssetType.TEXT);
		path.set ("assets/Stage1-12.tmx", "assets/Stage1-12.tmx");
		type.set ("assets/Stage1-12.tmx", AssetType.TEXT);
		path.set ("assets/Stage1-13.tmx", "assets/Stage1-13.tmx");
		type.set ("assets/Stage1-13.tmx", AssetType.TEXT);
		path.set ("assets/Stage1-14.tmx", "assets/Stage1-14.tmx");
		type.set ("assets/Stage1-14.tmx", AssetType.TEXT);
		path.set ("assets/Stage1-2.tmx", "assets/Stage1-2.tmx");
		type.set ("assets/Stage1-2.tmx", AssetType.TEXT);
		path.set ("assets/Stage1-20.tmx", "assets/Stage1-20.tmx");
		type.set ("assets/Stage1-20.tmx", AssetType.TEXT);
		path.set ("assets/Stage1-21.tmx", "assets/Stage1-21.tmx");
		type.set ("assets/Stage1-21.tmx", AssetType.TEXT);
		path.set ("assets/Stage1-22.tmx", "assets/Stage1-22.tmx");
		type.set ("assets/Stage1-22.tmx", AssetType.TEXT);
		path.set ("assets/Stage1-23.tmx", "assets/Stage1-23.tmx");
		type.set ("assets/Stage1-23.tmx", AssetType.TEXT);
		path.set ("assets/Stage1-24.tmx", "assets/Stage1-24.tmx");
		type.set ("assets/Stage1-24.tmx", AssetType.TEXT);
		path.set ("assets/Stage1-25.tmx", "assets/Stage1-25.tmx");
		type.set ("assets/Stage1-25.tmx", AssetType.TEXT);
		path.set ("assets/Stage1-26.tmx", "assets/Stage1-26.tmx");
		type.set ("assets/Stage1-26.tmx", AssetType.TEXT);
		path.set ("assets/Stage1-3.tmx", "assets/Stage1-3.tmx");
		type.set ("assets/Stage1-3.tmx", AssetType.TEXT);
		path.set ("assets/Stage1-30.tmx", "assets/Stage1-30.tmx");
		type.set ("assets/Stage1-30.tmx", AssetType.TEXT);
		path.set ("assets/Stage1-31.tmx", "assets/Stage1-31.tmx");
		type.set ("assets/Stage1-31.tmx", AssetType.TEXT);
		path.set ("assets/Stage1-32.tmx", "assets/Stage1-32.tmx");
		type.set ("assets/Stage1-32.tmx", AssetType.TEXT);
		path.set ("assets/Stage1-33.tmx", "assets/Stage1-33.tmx");
		type.set ("assets/Stage1-33.tmx", AssetType.TEXT);
		path.set ("assets/Stage1-34.tmx", "assets/Stage1-34.tmx");
		type.set ("assets/Stage1-34.tmx", AssetType.TEXT);
		path.set ("assets/Stage1-4.tmx", "assets/Stage1-4.tmx");
		type.set ("assets/Stage1-4.tmx", AssetType.TEXT);
		path.set ("assets/Stage1-420.tmx", "assets/Stage1-420.tmx");
		type.set ("assets/Stage1-420.tmx", AssetType.TEXT);
		path.set ("assets/Stage1-421.tmx", "assets/Stage1-421.tmx");
		type.set ("assets/Stage1-421.tmx", AssetType.TEXT);
		path.set ("assets/Stage1-5.tmx", "assets/Stage1-5.tmx");
		type.set ("assets/Stage1-5.tmx", AssetType.TEXT);
		path.set ("assets/Stage1-6.tmx", "assets/Stage1-6.tmx");
		type.set ("assets/Stage1-6.tmx", AssetType.TEXT);
		path.set ("assets/Stage1-97.tmx", "assets/Stage1-97.tmx");
		type.set ("assets/Stage1-97.tmx", AssetType.TEXT);
		path.set ("assets/Stage1-98.tmx", "assets/Stage1-98.tmx");
		type.set ("assets/Stage1-98.tmx", AssetType.TEXT);
		path.set ("assets/Stage1-99.tmx", "assets/Stage1-99.tmx");
		type.set ("assets/Stage1-99.tmx", AssetType.TEXT);
		path.set ("assets/Stage3-1.tmx", "assets/Stage3-1.tmx");
		type.set ("assets/Stage3-1.tmx", AssetType.TEXT);
		path.set ("assets/Stage3-2.tmx", "assets/Stage3-2.tmx");
		type.set ("assets/Stage3-2.tmx", AssetType.TEXT);
		path.set ("assets/Stranger.png", "assets/Stranger.png");
		type.set ("assets/Stranger.png", AssetType.IMAGE);
		path.set ("assets/TestMap.tmx", "assets/TestMap.tmx");
		type.set ("assets/TestMap.tmx", AssetType.TEXT);
		path.set ("assets/TestMap.txt", "assets/TestMap.txt");
		type.set ("assets/TestMap.txt", AssetType.TEXT);
		path.set ("assets/TestMap2.tmx", "assets/TestMap2.tmx");
		type.set ("assets/TestMap2.tmx", AssetType.TEXT);
		path.set ("assets/tilesheet.png", "assets/tilesheet.png");
		type.set ("assets/tilesheet.png", AssetType.IMAGE);
		path.set ("assets/Tilset.pdn", "assets/Tilset.pdn");
		type.set ("assets/Tilset.pdn", AssetType.TEXT);
		path.set ("assets/Untitled.png", "assets/Untitled.png");
		type.set ("assets/Untitled.png", AssetType.IMAGE);
		path.set ("assets/WalkingEnemy.png", "assets/WalkingEnemy.png");
		type.set ("assets/WalkingEnemy.png", AssetType.IMAGE);
		path.set ("assets/World1Tiles.png", "assets/World1Tiles.png");
		type.set ("assets/World1Tiles.png", AssetType.IMAGE);
		path.set ("assets/World2Tiles.png", "assets/World2Tiles.png");
		type.set ("assets/World2Tiles.png", AssetType.IMAGE);
		
		
		#elseif html5
		
		var id;
		id = "assets/checkpoint.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/DashEnemy.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/Door.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/FlyingEnemy.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/LaunchEnemy.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/oldplayer.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/openfl.svg";
		path.set (id, id);
		type.set (id, AssetType.TEXT);
		id = "assets/Player.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/Player2.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/PlayerDash.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/PlayerLaunch.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/PlayerProjectile.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/portal.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/Projectile.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/Projectile2.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/ProjectileEnemy.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/RunningEnemy.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/Stage1-1.tmx";
		path.set (id, id);
		type.set (id, AssetType.TEXT);
		id = "assets/Stage1-10.tmx";
		path.set (id, id);
		type.set (id, AssetType.TEXT);
		id = "assets/Stage1-100.tmx";
		path.set (id, id);
		type.set (id, AssetType.TEXT);
		id = "assets/Stage1-11.tmx";
		path.set (id, id);
		type.set (id, AssetType.TEXT);
		id = "assets/Stage1-12.tmx";
		path.set (id, id);
		type.set (id, AssetType.TEXT);
		id = "assets/Stage1-13.tmx";
		path.set (id, id);
		type.set (id, AssetType.TEXT);
		id = "assets/Stage1-14.tmx";
		path.set (id, id);
		type.set (id, AssetType.TEXT);
		id = "assets/Stage1-2.tmx";
		path.set (id, id);
		type.set (id, AssetType.TEXT);
		id = "assets/Stage1-20.tmx";
		path.set (id, id);
		type.set (id, AssetType.TEXT);
		id = "assets/Stage1-21.tmx";
		path.set (id, id);
		type.set (id, AssetType.TEXT);
		id = "assets/Stage1-22.tmx";
		path.set (id, id);
		type.set (id, AssetType.TEXT);
		id = "assets/Stage1-23.tmx";
		path.set (id, id);
		type.set (id, AssetType.TEXT);
		id = "assets/Stage1-24.tmx";
		path.set (id, id);
		type.set (id, AssetType.TEXT);
		id = "assets/Stage1-25.tmx";
		path.set (id, id);
		type.set (id, AssetType.TEXT);
		id = "assets/Stage1-26.tmx";
		path.set (id, id);
		type.set (id, AssetType.TEXT);
		id = "assets/Stage1-3.tmx";
		path.set (id, id);
		type.set (id, AssetType.TEXT);
		id = "assets/Stage1-30.tmx";
		path.set (id, id);
		type.set (id, AssetType.TEXT);
		id = "assets/Stage1-31.tmx";
		path.set (id, id);
		type.set (id, AssetType.TEXT);
		id = "assets/Stage1-32.tmx";
		path.set (id, id);
		type.set (id, AssetType.TEXT);
		id = "assets/Stage1-33.tmx";
		path.set (id, id);
		type.set (id, AssetType.TEXT);
		id = "assets/Stage1-34.tmx";
		path.set (id, id);
		type.set (id, AssetType.TEXT);
		id = "assets/Stage1-4.tmx";
		path.set (id, id);
		type.set (id, AssetType.TEXT);
		id = "assets/Stage1-420.tmx";
		path.set (id, id);
		type.set (id, AssetType.TEXT);
		id = "assets/Stage1-421.tmx";
		path.set (id, id);
		type.set (id, AssetType.TEXT);
		id = "assets/Stage1-5.tmx";
		path.set (id, id);
		type.set (id, AssetType.TEXT);
		id = "assets/Stage1-6.tmx";
		path.set (id, id);
		type.set (id, AssetType.TEXT);
		id = "assets/Stage1-97.tmx";
		path.set (id, id);
		type.set (id, AssetType.TEXT);
		id = "assets/Stage1-98.tmx";
		path.set (id, id);
		type.set (id, AssetType.TEXT);
		id = "assets/Stage1-99.tmx";
		path.set (id, id);
		type.set (id, AssetType.TEXT);
		id = "assets/Stage3-1.tmx";
		path.set (id, id);
		type.set (id, AssetType.TEXT);
		id = "assets/Stage3-2.tmx";
		path.set (id, id);
		type.set (id, AssetType.TEXT);
		id = "assets/Stranger.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/TestMap.tmx";
		path.set (id, id);
		type.set (id, AssetType.TEXT);
		id = "assets/TestMap.txt";
		path.set (id, id);
		type.set (id, AssetType.TEXT);
		id = "assets/TestMap2.tmx";
		path.set (id, id);
		type.set (id, AssetType.TEXT);
		id = "assets/tilesheet.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/Tilset.pdn";
		path.set (id, id);
		type.set (id, AssetType.TEXT);
		id = "assets/Untitled.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/WalkingEnemy.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/World1Tiles.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/World2Tiles.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		
		
		var assetsPrefix = ApplicationMain.config.assetsPrefix;
		if (assetsPrefix != null) {
			for (k in path.keys()) {
				path.set(k, assetsPrefix + path[k]);
			}
		}
		
		#else
		
		#if (windows || mac || linux)
		
		var useManifest = false;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		
		
		if (useManifest) {
			
			loadManifest ();
			
			if (Sys.args ().indexOf ("-livereload") > -1) {
				
				var path = FileSystem.fullPath ("manifest");
				lastModified = FileSystem.stat (path).mtime.getTime ();
				
				timer = new Timer (2000);
				timer.run = function () {
					
					var modified = FileSystem.stat (path).mtime.getTime ();
					
					if (modified > lastModified) {
						
						lastModified = modified;
						loadManifest ();
						
						if (eventCallback != null) {
							
							eventCallback (this, "change");
							
						}
						
					}
					
				}
				
			}
			
		}
		
		#else
		
		loadManifest ();
		
		#end
		#end
		
	}
	
	
	private function createThreadPool ():Void {
		
		threadPool = new ThreadPool (0, 2);
		threadPool.doWork.add (function (id, data) {
			
			data.result = data.getMethod (id);
			threadPool.sendComplete (data.handler, data);
			
		});
		threadPool.onComplete.add (function (id, data) {
			
			data.handler (data.result);
			
		});
		
	}
	
	
	public override function exists (id:String, type:String):Bool {
		
		var requestedType = type != null ? cast (type, AssetType) : null;
		var assetType = this.type.get (id);
		
		if (assetType != null) {
			
			if (assetType == requestedType || ((requestedType == SOUND || requestedType == MUSIC) && (assetType == MUSIC || assetType == SOUND))) {
				
				return true;
				
			}
			
			#if flash
			
			if (requestedType == BINARY && (assetType == BINARY || assetType == TEXT || assetType == IMAGE)) {
				
				return true;
				
			} else if (requestedType == null || path.exists (id)) {
				
				return true;
				
			}
			
			#else
			
			if (requestedType == BINARY || requestedType == null || (assetType == BINARY && requestedType == TEXT)) {
				
				return true;
				
			}
			
			#end
			
		}
		
		return false;
		
	}
	
	
	public override function getAudioBuffer (id:String):AudioBuffer {
		
		#if flash
		
		var buffer = new AudioBuffer ();
		buffer.src = cast (Type.createInstance (className.get (id), []), Sound);
		return buffer;
		
		#elseif html5
		
		return null;
		//return new Sound (new URLRequest (path.get (id)));
		
		#else
		
		if (className.exists(id)) return AudioBuffer.fromBytes (cast (Type.createInstance (className.get (id), []), ByteArray));
		else return AudioBuffer.fromFile (path.get (id));
		
		#end
		
	}
	
	
	public override function getBytes (id:String):ByteArray {
		
		#if flash
		
		switch (type.get (id)) {
			
			case TEXT, BINARY:
				
				return cast (Type.createInstance (className.get (id), []), ByteArray);
			
			case IMAGE:
				
				var bitmapData = cast (Type.createInstance (className.get (id), []), BitmapData);
				return bitmapData.getPixels (bitmapData.rect);
			
			default:
				
				return null;
			
		}
		
		return cast (Type.createInstance (className.get (id), []), ByteArray);
		
		#elseif html5
		
		var bytes:ByteArray = null;
		var loader = Preloader.loaders.get (path.get (id));
		
		if (loader == null) {
			
			return null;
			
		}
		
		var data = loader.data;
		
		if (Std.is (data, String)) {
			
			bytes = new ByteArray ();
			bytes.writeUTFBytes (data);
			
		} else if (Std.is (data, ByteArray)) {
			
			bytes = cast data;
			
		} else {
			
			bytes = null;
			
		}
		
		if (bytes != null) {
			
			bytes.position = 0;
			return bytes;
			
		} else {
			
			return null;
		}
		
		#else
		
		if (className.exists(id)) return cast (Type.createInstance (className.get (id), []), ByteArray);
		else return ByteArray.readFile (path.get (id));
		
		#end
		
	}
	
	
	public override function getFont (id:String):Font {
		
		#if flash
		
		var src = Type.createInstance (className.get (id), []);
		
		var font = new Font (src.fontName);
		font.src = src;
		return font;
		
		#elseif html5
		
		return cast (Type.createInstance (className.get (id), []), Font);
		
		#else
		
		if (className.exists (id)) {
			
			var fontClass = className.get (id);
			return cast (Type.createInstance (fontClass, []), Font);
			
		} else {
			
			return Font.fromFile (path.get (id));
			
		}
		
		#end
		
	}
	
	
	public override function getImage (id:String):Image {
		
		#if flash
		
		return Image.fromBitmapData (cast (Type.createInstance (className.get (id), []), BitmapData));
		
		#elseif html5
		
		return Image.fromImageElement (Preloader.images.get (path.get (id)));
		
		#else
		
		if (className.exists (id)) {
			
			var fontClass = className.get (id);
			return cast (Type.createInstance (fontClass, []), Image);
			
		} else {
			
			return Image.fromFile (path.get (id));
			
		}
		
		#end
		
	}
	
	
	/*public override function getMusic (id:String):Dynamic {
		
		#if flash
		
		return cast (Type.createInstance (className.get (id), []), Sound);
		
		#elseif openfl_html5
		
		//var sound = new Sound ();
		//sound.__buffer = true;
		//sound.load (new URLRequest (path.get (id)));
		//return sound;
		return null;
		
		#elseif html5
		
		return null;
		//return new Sound (new URLRequest (path.get (id)));
		
		#else
		
		return null;
		//if (className.exists(id)) return cast (Type.createInstance (className.get (id), []), Sound);
		//else return new Sound (new URLRequest (path.get (id)), null, true);
		
		#end
		
	}*/
	
	
	public override function getPath (id:String):String {
		
		//#if ios
		
		//return SystemPath.applicationDirectory + "/assets/" + path.get (id);
		
		//#else
		
		return path.get (id);
		
		//#end
		
	}
	
	
	public override function getText (id:String):String {
		
		#if html5
		
		var bytes:ByteArray = null;
		var loader = Preloader.loaders.get (path.get (id));
		
		if (loader == null) {
			
			return null;
			
		}
		
		var data = loader.data;
		
		if (Std.is (data, String)) {
			
			return cast data;
			
		} else if (Std.is (data, ByteArray)) {
			
			bytes = cast data;
			
		} else {
			
			bytes = null;
			
		}
		
		if (bytes != null) {
			
			bytes.position = 0;
			return bytes.readUTFBytes (bytes.length);
			
		} else {
			
			return null;
		}
		
		#else
		
		var bytes = getBytes (id);
		
		if (bytes == null) {
			
			return null;
			
		} else {
			
			return bytes.readUTFBytes (bytes.length);
			
		}
		
		#end
		
	}
	
	
	public override function isLocal (id:String, type:String):Bool {
		
		var requestedType = type != null ? cast (type, AssetType) : null;
		
		#if flash
		
		//if (requestedType != AssetType.MUSIC && requestedType != AssetType.SOUND) {
			
			return className.exists (id);
			
		//}
		
		#end
		
		return true;
		
	}
	
	
	public override function list (type:String):Array<String> {
		
		var requestedType = type != null ? cast (type, AssetType) : null;
		var items = [];
		
		for (id in this.type.keys ()) {
			
			if (requestedType == null || exists (id, type)) {
				
				items.push (id);
				
			}
			
		}
		
		return items;
		
	}
	
	
	public override function loadAudioBuffer (id:String, handler:AudioBuffer -> Void):Void {
		
		#if (flash)
		
		if (path.exists (id)) {
			
			var soundLoader = new Sound ();
			soundLoader.addEventListener (Event.COMPLETE, function (event) {
				
				var audioBuffer:AudioBuffer = new AudioBuffer();
				audioBuffer.src = event.currentTarget;
				handler (audioBuffer);
				
			});
			
			soundLoader.load (new URLRequest (path.get (id)));
			
		} else {
			
			handler (getAudioBuffer (id));
			
		}
		
		#else
		
		handler (getAudioBuffer (id));
		
		#end
		
	}
	
	
	public override function loadBytes (id:String, handler:ByteArray -> Void):Void {
		
		#if flash
		
		if (path.exists (id)) {
			
			var loader = new URLLoader ();
			loader.addEventListener (Event.COMPLETE, function (event:Event) {
				
				var bytes = new ByteArray ();
				bytes.writeUTFBytes (event.currentTarget.data);
				bytes.position = 0;
				
				handler (bytes);
				
			});
			loader.load (new URLRequest (path.get (id)));
			
		} else {
			
			handler (getBytes (id));
			
		}
		
		#elseif html5
		
		if (path.exists (id)) {
			
			var loader = new URLLoader ();
			loader.dataFormat = BINARY;
			loader.onComplete.add (function (_):Void {
				
				handler (loader.data);
				
			});
			
			loader.load (new URLRequest (path.get (id)));
			
		} else {
			
			handler (getBytes (id));
			
		}
		
		#else
		
		if (threadPool == null) {
			
			createThreadPool ();
			
		}
		
		threadPool.queue (id, { handler: handler, getMethod: getBytes });
		
		#end
		
	}
	
	
	public override function loadImage (id:String, handler:Image -> Void):Void {
		
		#if flash
		
		if (path.exists (id)) {
			
			var loader = new Loader ();
			loader.contentLoaderInfo.addEventListener (Event.COMPLETE, function (event:Event) {
				
				var bitmapData = cast (event.currentTarget.content, Bitmap).bitmapData;
				handler (Image.fromBitmapData (bitmapData));
				
			});
			loader.load (new URLRequest (path.get (id)));
			
		} else {
			
			handler (getImage (id));
			
		}
		
		#elseif html5
		
		if (path.exists (id)) {
			
			var image = new js.html.Image ();
			image.onload = function (_):Void {
				
				handler (Image.fromImageElement (image));
				
			}
			image.src = path.get (id);
			
		} else {
			
			handler (getImage (id));
			
		}
		
		#else
		
		if (threadPool == null) {
			
			createThreadPool ();
			
		}
		
		threadPool.queue (id, { handler: handler, getMethod: getImage });
		
		#end
		
	}
	
	
	#if (!flash && !html5)
	private function loadManifest ():Void {
		
		try {
			
			#if blackberry
			var bytes = ByteArray.readFile ("app/native/manifest");
			#elseif tizen
			var bytes = ByteArray.readFile ("../res/manifest");
			#elseif emscripten
			var bytes = ByteArray.readFile ("assets/manifest");
			#elseif (mac && java)
			var bytes = ByteArray.readFile ("../Resources/manifest");
			#elseif ios
			var bytes = ByteArray.readFile ("assets/manifest");
			#else
			var bytes = ByteArray.readFile ("manifest");
			#end
			
			if (bytes != null) {
				
				bytes.position = 0;
				
				if (bytes.length > 0) {
					
					var data = bytes.readUTFBytes (bytes.length);
					
					if (data != null && data.length > 0) {
						
						var manifest:Array<Dynamic> = Unserializer.run (data);
						
						for (asset in manifest) {
							
							if (!className.exists (asset.id)) {
								
								#if ios
								path.set (asset.id, "assets/" + asset.path);
								#else
								path.set (asset.id, asset.path);
								#end
								type.set (asset.id, cast (asset.type, AssetType));
								
							}
							
						}
						
					}
					
				}
				
			} else {
				
				trace ("Warning: Could not load asset manifest (bytes was null)");
				
			}
		
		} catch (e:Dynamic) {
			
			trace ('Warning: Could not load asset manifest (${e})');
			
		}
		
	}
	#end
	
	
	/*public override function loadMusic (id:String, handler:Dynamic -> Void):Void {
		
		#if (flash || html5)
		
		//if (path.exists (id)) {
			
		//	var loader = new Loader ();
		//	loader.contentLoaderInfo.addEventListener (Event.COMPLETE, function (event) {
				
		//		handler (cast (event.currentTarget.content, Bitmap).bitmapData);
				
		//	});
		//	loader.load (new URLRequest (path.get (id)));
			
		//} else {
			
			handler (getMusic (id));
			
		//}
		
		#else
		
		handler (getMusic (id));
		
		#end
		
	}*/
	
	
	public override function loadText (id:String, handler:String -> Void):Void {
		
		#if html5
		
		if (path.exists (id)) {
			
			var loader = new URLLoader ();
			loader.onComplete.add (function (_):Void {
				
				handler (loader.data);
				
			});
			
			loader.load (new URLRequest (path.get (id)));
			
		} else {
			
			handler (getText (id));
			
		}
		
		#else
		
		var callback = function (bytes:ByteArray):Void {
			
			if (bytes == null) {
				
				handler (null);
				
			} else {
				
				handler (bytes.readUTFBytes (bytes.length));
				
			}
			
		}
		
		loadBytes (id, callback);
		
		#end
		
	}
	
	
}


#if !display
#if flash





























































#elseif html5





























































#else



#if (windows || mac || linux || cpp)





#end
#end

#if (openfl && !flash)

#end

#end