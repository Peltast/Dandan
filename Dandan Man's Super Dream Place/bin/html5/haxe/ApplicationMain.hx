#if !macro


@:access(lime.app.Application)
@:access(lime.Assets)
@:access(openfl.display.Stage)


class ApplicationMain {
	
	
	public static var config:lime.app.Config;
	public static var preloader:openfl.display.Preloader;
	
	
	public static function create ():Void {
		
		var app = new openfl.display.Application ();
		app.create (config);
		
		var display = new NMEPreloader ();
		
		preloader = new openfl.display.Preloader (display);
		app.setPreloader (preloader);
		preloader.onComplete.add (init);
		preloader.create (config);
		
		#if (js && html5)
		var urls = [];
		var types = [];
		
		
		urls.push ("assets/checkpoint.png");
		types.push (lime.Assets.AssetType.IMAGE);
		
		
		urls.push ("assets/DashEnemy.png");
		types.push (lime.Assets.AssetType.IMAGE);
		
		
		urls.push ("assets/Door.png");
		types.push (lime.Assets.AssetType.IMAGE);
		
		
		urls.push ("assets/Enemy.png");
		types.push (lime.Assets.AssetType.IMAGE);
		
		
		urls.push ("assets/LaunchEnemy.png");
		types.push (lime.Assets.AssetType.IMAGE);
		
		
		urls.push ("assets/oldplayer.png");
		types.push (lime.Assets.AssetType.IMAGE);
		
		
		urls.push ("assets/openfl.svg");
		types.push (lime.Assets.AssetType.TEXT);
		
		
		urls.push ("assets/Player.png");
		types.push (lime.Assets.AssetType.IMAGE);
		
		
		urls.push ("assets/Player2.png");
		types.push (lime.Assets.AssetType.IMAGE);
		
		
		urls.push ("assets/PlayerDash.png");
		types.push (lime.Assets.AssetType.IMAGE);
		
		
		urls.push ("assets/PlayerLaunch.png");
		types.push (lime.Assets.AssetType.IMAGE);
		
		
		urls.push ("assets/PlayerProjectile.png");
		types.push (lime.Assets.AssetType.IMAGE);
		
		
		urls.push ("assets/portal.png");
		types.push (lime.Assets.AssetType.IMAGE);
		
		
		urls.push ("assets/Projectile.png");
		types.push (lime.Assets.AssetType.IMAGE);
		
		
		urls.push ("assets/Projectile2.png");
		types.push (lime.Assets.AssetType.IMAGE);
		
		
		urls.push ("assets/ProjectileEnemy.png");
		types.push (lime.Assets.AssetType.IMAGE);
		
		
		urls.push ("assets/Stage1-1.tmx");
		types.push (lime.Assets.AssetType.TEXT);
		
		
		urls.push ("assets/Stage1-100.tmx");
		types.push (lime.Assets.AssetType.TEXT);
		
		
		urls.push ("assets/Stage1-2.tmx");
		types.push (lime.Assets.AssetType.TEXT);
		
		
		urls.push ("assets/Stage1-3.tmx");
		types.push (lime.Assets.AssetType.TEXT);
		
		
		urls.push ("assets/Stage1-4.tmx");
		types.push (lime.Assets.AssetType.TEXT);
		
		
		urls.push ("assets/Stage1-420.tmx");
		types.push (lime.Assets.AssetType.TEXT);
		
		
		urls.push ("assets/Stage1-421.tmx");
		types.push (lime.Assets.AssetType.TEXT);
		
		
		urls.push ("assets/Stage1-97.tmx");
		types.push (lime.Assets.AssetType.TEXT);
		
		
		urls.push ("assets/Stage1-98.tmx");
		types.push (lime.Assets.AssetType.TEXT);
		
		
		urls.push ("assets/Stage1-99.tmx");
		types.push (lime.Assets.AssetType.TEXT);
		
		
		urls.push ("assets/Stage3-1.tmx");
		types.push (lime.Assets.AssetType.TEXT);
		
		
		urls.push ("assets/Stage3-2.tmx");
		types.push (lime.Assets.AssetType.TEXT);
		
		
		urls.push ("assets/Stranger.png");
		types.push (lime.Assets.AssetType.IMAGE);
		
		
		urls.push ("assets/TestMap.tmx");
		types.push (lime.Assets.AssetType.TEXT);
		
		
		urls.push ("assets/TestMap.txt");
		types.push (lime.Assets.AssetType.TEXT);
		
		
		urls.push ("assets/TestMap2.tmx");
		types.push (lime.Assets.AssetType.TEXT);
		
		
		urls.push ("assets/tilesheet.png");
		types.push (lime.Assets.AssetType.IMAGE);
		
		
		urls.push ("assets/Tilset.pdn");
		types.push (lime.Assets.AssetType.TEXT);
		
		
		urls.push ("assets/Untitled.png");
		types.push (lime.Assets.AssetType.IMAGE);
		
		
		urls.push ("assets/WalkingEnemy.png");
		types.push (lime.Assets.AssetType.IMAGE);
		
		
		urls.push ("assets/World1Tiles.png");
		types.push (lime.Assets.AssetType.IMAGE);
		
		
		
		if (config.assetsPrefix != null) {
			
			for (i in 0...urls.length) {
				
				if (types[i] != lime.Assets.AssetType.FONT) {
					
					urls[i] = config.assetsPrefix + urls[i];
					
				}
				
			}
			
		}
		
		preloader.load (urls, types);
		#end
		
		var result = app.exec ();
		
		#if (sys && !nodejs && !emscripten)
		Sys.exit (result);
		#end
		
	}
	
	
	public static function init ():Void {
		
		var loaded = 0;
		var total = 0;
		var library_onLoad = function (__) {
			
			loaded++;
			
			if (loaded == total) {
				
				start ();
				
			}
			
		}
		
		preloader = null;
		
		
		
		if (total == 0) {
			
			start ();
			
		}
		
	}
	
	
	public static function main () {
		
		config = {
			
			build: "1496",
			company: "Peltast",
			file: "LolosSuperDreamPlace",
			fps: 30,
			name: "Lolo's Super Dream Place",
			orientation: "",
			packageName: "LolosSuperDreamPlace",
			version: "1.0.0",
			windows: [
				
				{
					antialiasing: 0,
					background: 0,
					borderless: false,
					depthBuffer: false,
					display: 0,
					fullscreen: false,
					hardware: true,
					height: 360,
					parameters: "{}",
					resizable: true,
					stencilBuffer: true,
					title: "Lolo's Super Dream Place",
					vsync: false,
					width: 540,
					x: null,
					y: null
				},
			]
			
		};
		
		#if hxtelemetry
		var telemetry = new hxtelemetry.HxTelemetry.Config ();
		telemetry.allocations = true;
		telemetry.host = "localhost";
		telemetry.app_name = config.title;
		Reflect.setField (config, "telemetry", telemetry);
		#end
		
		#if (js && html5)
		#if (munit || utest)
		openfl.Lib.embed (null, 540, 360, "000000");
		#end
		#else
		create ();
		#end
		
	}
	
	
	public static function start ():Void {
		
		var hasMain = false;
		var entryPoint = Type.resolveClass ("Main");
		
		for (methodName in Type.getClassFields (entryPoint)) {
			
			if (methodName == "main") {
				
				hasMain = true;
				break;
				
			}
			
		}
		
		lime.Assets.initialize ();
		
		if (hasMain) {
			
			Reflect.callMethod (entryPoint, Reflect.field (entryPoint, "main"), []);
			
		} else {
			
			var instance:DocumentClass = Type.createInstance (DocumentClass, []);
			
			/*if (Std.is (instance, openfl.display.DisplayObject)) {
				
				openfl.Lib.current.addChild (cast instance);
				
			}*/
			
		}
		
		openfl.Lib.current.stage.dispatchEvent (new openfl.events.Event (openfl.events.Event.RESIZE, false, false));
		
	}
	
	
	#if neko
	@:noCompletion public static function __init__ () {
		
		var loader = new neko.vm.Loader (untyped $loader);
		loader.addPath (haxe.io.Path.directory (Sys.executablePath ()));
		loader.addPath ("./");
		loader.addPath ("@executable_path/");
		
	}
	#end
	
	
}


@:build(DocumentClass.build())
@:keep class DocumentClass extends Main {}


#else


import haxe.macro.Context;
import haxe.macro.Expr;


class DocumentClass {
	
	
	macro public static function build ():Array<Field> {
		
		var classType = Context.getLocalClass ().get ();
		var searchTypes = classType;
		
		while (searchTypes.superClass != null) {
			
			if (searchTypes.pack.length == 2 && searchTypes.pack[1] == "display" && searchTypes.name == "DisplayObject") {
				
				var fields = Context.getBuildFields ();
				
				var method = macro {
					
					openfl.Lib.current.addChild (this);
					super ();
					dispatchEvent (new openfl.events.Event (openfl.events.Event.ADDED_TO_STAGE, false, false));
					
				}
				
				fields.push ({ name: "new", access: [ APublic ], kind: FFun({ args: [], expr: method, params: [], ret: macro :Void }), pos: Context.currentPos () });
				
				return fields;
				
			}
			
			searchTypes = searchTypes.superClass.t.get ();
			
		}
		
		return null;
		
	}
	
	
}


#end
