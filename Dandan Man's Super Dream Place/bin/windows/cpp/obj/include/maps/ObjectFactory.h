#ifndef INCLUDED_maps_ObjectFactory
#define INCLUDED_maps_ObjectFactory

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS1(actors,Actor)
HX_DECLARE_CLASS1(haxe,IMap)
HX_DECLARE_CLASS2(haxe,ds,IntMap)
HX_DECLARE_CLASS1(maps,ObjectFactory)
HX_DECLARE_CLASS2(maps,mapobjects,AIPathWall)
HX_DECLARE_CLASS2(maps,mapobjects,Checkpoint)
HX_DECLARE_CLASS2(maps,mapobjects,MapObject)
HX_DECLARE_CLASS2(maps,mapobjects,Portal)
HX_DECLARE_CLASS2(maps,mapobjects,SpawnPoint)
HX_DECLARE_CLASS2(maps,mapobjects,Tile)
HX_DECLARE_CLASS2(openfl,display,Bitmap)
HX_DECLARE_CLASS2(openfl,display,DisplayObject)
HX_DECLARE_CLASS2(openfl,display,DisplayObjectContainer)
HX_DECLARE_CLASS2(openfl,display,IBitmapDrawable)
HX_DECLARE_CLASS2(openfl,display,InteractiveObject)
HX_DECLARE_CLASS2(openfl,display,Sprite)
HX_DECLARE_CLASS2(openfl,events,EventDispatcher)
HX_DECLARE_CLASS2(openfl,events,IEventDispatcher)
namespace maps{


class HXCPP_CLASS_ATTRIBUTES  ObjectFactory_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef ObjectFactory_obj OBJ_;
		ObjectFactory_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="maps.ObjectFactory")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< ObjectFactory_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~ObjectFactory_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("ObjectFactory","\xab","\xfb","\x88","\xde"); }

		static void __boot();
		int tileSize;
		int tileSheetWidth;
		::openfl::display::Bitmap tileSheet;
		::haxe::ds::IntMap tileIndexTypes;
		virtual Void assignTileIndexTypes( );
		Dynamic assignTileIndexTypes_dyn();

		virtual int getIndexType( hx::Null< int >  tileIndex);
		Dynamic getIndexType_dyn();

		virtual Void changeTileSheet( ::openfl::display::Bitmap newSet);
		Dynamic changeTileSheet_dyn();

		virtual bool isObjectTile( int index);
		Dynamic isObjectTile_dyn();

		virtual bool isObjectCheckpoint( int index);
		Dynamic isObjectCheckpoint_dyn();

		virtual bool isMapStart( int index);
		Dynamic isMapStart_dyn();

		virtual bool isMapEnd( int index);
		Dynamic isMapEnd_dyn();

		virtual bool isObjectSpawnPoint( int index);
		Dynamic isObjectSpawnPoint_dyn();

		virtual bool isObjectAIPathWall( int index);
		Dynamic isObjectAIPathWall_dyn();

		virtual ::maps::mapobjects::Checkpoint createCheckpoint( int index);
		Dynamic createCheckpoint_dyn();

		virtual ::maps::mapobjects::Portal createPortal( int index,::String endMap);
		Dynamic createPortal_dyn();

		virtual ::maps::mapobjects::SpawnPoint createSpawnPoint( int index);
		Dynamic createSpawnPoint_dyn();

		virtual ::maps::mapobjects::AIPathWall createAIPathWall( int index);
		Dynamic createAIPathWall_dyn();

		virtual ::maps::mapobjects::Tile createTile( int tileIndex);
		Dynamic createTile_dyn();

		virtual ::maps::mapobjects::Tile createPlatformTile( int tileIndex,int indexType);
		Dynamic createPlatformTile_dyn();

		virtual ::maps::mapobjects::Tile createSpikeTile( int tileIndex,int indexType);
		Dynamic createSpikeTile_dyn();

		virtual ::maps::mapobjects::Tile createBGTile( int tileIndex,int indexType);
		Dynamic createBGTile_dyn();

		virtual ::openfl::display::Bitmap getTileBitmap( int index);
		Dynamic getTileBitmap_dyn();

		virtual ::openfl::display::Bitmap getBitmap( int index,::openfl::display::Bitmap sheet,int sheetWidth);
		Dynamic getBitmap_dyn();

		static ::maps::ObjectFactory singleton;
		static ::maps::ObjectFactory getSingleton( );
		static Dynamic getSingleton_dyn();

		static int TILE_STARTPOINT;
		static int TILE_ENDPOINT;
		static int TILE_CHECKPOINT;
		static int TILE_AIPATHWALL;
		static int TILE_SPAWNPOINT_WALKING;
		static int TILE_SPAWNPOINT_DASH;
		static int TILE_SPAWNPOINT_LAUNCH;
		static int TILE_SPAWNPOINT_PROJECTILE;
		static int TILE_SPAWNPOINT_FLYING_HOR;
		static int TILE_SPAWNPOINT_FLYING_VER;
		static int TILE_SPAWNPOINT_RUNNING;
		static int TILE_BACKGROUND;
		static int TILE_PLATFORM;
		static int TILE_FATAL_UP;
		static int TILE_FATAL_DOWN;
		static int TILE_FATAL_LEFT;
		static int TILE_FATAL_RIGHT;
		static int TILE_FATAL_LR;
		static int TILE_FATAL_UD;
		static int TILE_FATAL_ALL;
		static Array< int > tileTypes;
		static Array< int > fatalTypes;
		static Array< int > spawnTypes;
};

} // end namespace maps

#endif /* INCLUDED_maps_ObjectFactory */ 
