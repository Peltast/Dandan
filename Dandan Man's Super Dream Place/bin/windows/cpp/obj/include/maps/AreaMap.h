#ifndef INCLUDED_maps_AreaMap
#define INCLUDED_maps_AreaMap

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_openfl_display_Sprite
#include <openfl/display/Sprite.h>
#endif
HX_DECLARE_CLASS1(actors,Actor)
HX_DECLARE_CLASS1(actors,Player)
HX_DECLARE_CLASS2(actors,attacks,Projectile)
HX_DECLARE_CLASS1(haxe,IMap)
HX_DECLARE_CLASS2(haxe,ds,StringMap)
HX_DECLARE_CLASS2(haxe,io,Bytes)
HX_DECLARE_CLASS2(lime,utils,ByteArray)
HX_DECLARE_CLASS2(lime,utils,IDataInput)
HX_DECLARE_CLASS2(lime,utils,IMemoryRange)
HX_DECLARE_CLASS1(maps,AreaMap)
HX_DECLARE_CLASS1(maps,Level)
HX_DECLARE_CLASS2(maps,mapobjects,AIPathWall)
HX_DECLARE_CLASS2(maps,mapobjects,Checkpoint)
HX_DECLARE_CLASS2(maps,mapobjects,MapObject)
HX_DECLARE_CLASS2(maps,mapobjects,Portal)
HX_DECLARE_CLASS2(maps,mapobjects,SpawnPoint)
HX_DECLARE_CLASS2(openfl,display,Bitmap)
HX_DECLARE_CLASS2(openfl,display,DisplayObject)
HX_DECLARE_CLASS2(openfl,display,DisplayObjectContainer)
HX_DECLARE_CLASS2(openfl,display,IBitmapDrawable)
HX_DECLARE_CLASS2(openfl,display,InteractiveObject)
HX_DECLARE_CLASS2(openfl,display,Shape)
HX_DECLARE_CLASS2(openfl,display,Sprite)
HX_DECLARE_CLASS2(openfl,events,EventDispatcher)
HX_DECLARE_CLASS2(openfl,events,IEventDispatcher)
HX_DECLARE_CLASS2(openfl,geom,Point)
namespace maps{


class HXCPP_CLASS_ATTRIBUTES  AreaMap_obj : public ::openfl::display::Sprite_obj{
	public:
		typedef ::openfl::display::Sprite_obj super;
		typedef AreaMap_obj OBJ_;
		AreaMap_obj();
		Void __construct(::lime::utils::ByteArray mapFile,::maps::Level hostLevel);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="maps.AreaMap")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< AreaMap_obj > __new(::lime::utils::ByteArray mapFile,::maps::Level hostLevel);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~AreaMap_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("AreaMap","\xef","\x54","\x73","\x8b"); }

		::maps::Level hostLevel;
		::openfl::display::Bitmap tileSheet;
		Array< ::Dynamic > objectList;
		Array< ::Dynamic > actorList;
		Array< ::Dynamic > projectileList;
		::actors::Player player;
		::maps::mapobjects::Checkpoint startPoint;
		::maps::mapobjects::MapObject currentCheckpoint;
		Array< ::Dynamic > checkPoints;
		Array< ::Dynamic > spawnPoints;
		Array< ::Dynamic > pathWalls;
		Array< ::Dynamic > endPoints;
		::openfl::display::Shape background;
		int mapWidth;
		int mapHeight;
		int tileSize;
		virtual Void parseMapTileSheet( Array< ::String > fileArray);
		Dynamic parseMapTileSheet_dyn();

		virtual Void parseMapDimensions( Array< ::String > fileArray);
		Dynamic parseMapDimensions_dyn();

		virtual Void addMapBG( int color);
		Dynamic addMapBG_dyn();

		virtual Void initiateObjectList( int width,int height);
		Dynamic initiateObjectList_dyn();

		virtual Void readTiles( Array< ::String > fileArray);
		Dynamic readTiles_dyn();

		virtual Void createObject( int index,int x,int y);
		Dynamic createObject_dyn();

		virtual Void createTile( int index,int x,int y);
		Dynamic createTile_dyn();

		virtual Void createCheckpoint( int index,int x,int y);
		Dynamic createCheckpoint_dyn();

		virtual Void createStartpoint( int index,int x,int y);
		Dynamic createStartpoint_dyn();

		virtual Void createEndpoint( int index,::String endMap,int x,int y);
		Dynamic createEndpoint_dyn();

		virtual Void createSpawnPoint( int index,int x,int y);
		Dynamic createSpawnPoint_dyn();

		virtual Void createAIPathWall( int index,int x,int y);
		Dynamic createAIPathWall_dyn();

		virtual Void readDynamicObjects( Array< ::String > fileArray);
		Dynamic readDynamicObjects_dyn();

		virtual Void parseDynamicObject( Array< ::String > fileArray,int startIndex);
		Dynamic parseDynamicObject_dyn();

		virtual int parseObjectID( ::String idLine);
		Dynamic parseObjectID_dyn();

		virtual ::openfl::geom::Point parseObjectLocation( ::String idLine);
		Dynamic parseObjectLocation_dyn();

		virtual ::haxe::ds::StringMap addObjectProperty( ::String propertyLine,::haxe::ds::StringMap propertyMap);
		Dynamic addObjectProperty_dyn();

		virtual Void resetMap( );
		Dynamic resetMap_dyn();

		virtual Void resetSpawnPoints( );
		Dynamic resetSpawnPoints_dyn();

		virtual Void updateMap( );
		Dynamic updateMap_dyn();

		virtual Void updateActors( );
		Dynamic updateActors_dyn();

		virtual Void updateSpawnPoints( );
		Dynamic updateSpawnPoints_dyn();

		virtual Void updateProjectiles( );
		Dynamic updateProjectiles_dyn();

		virtual Void addPlayer( ::actors::Player player,::maps::mapobjects::Portal origin);
		Dynamic addPlayer_dyn();

		virtual Void addActor( ::actors::Actor actor);
		Dynamic addActor_dyn();

		virtual Void removeActor( ::actors::Actor actor);
		Dynamic removeActor_dyn();

		virtual Void addProjectile( ::actors::attacks::Projectile projectile);
		Dynamic addProjectile_dyn();

		virtual Void removeProjectile( ::actors::attacks::Projectile projectile);
		Dynamic removeProjectile_dyn();

		virtual Array< ::Dynamic > checkCollisions( ::maps::mapobjects::MapObject object,hx::Null< bool >  AIcheck);
		Dynamic checkCollisions_dyn();

		virtual ::openfl::geom::Point checkDistFromPlayer( ::actors::Actor actor);
		Dynamic checkDistFromPlayer_dyn();

		virtual Array< ::Dynamic > checkActorCollisions( ::actors::Actor actor);
		Dynamic checkActorCollisions_dyn();

		virtual Array< ::Dynamic > checkActorHitBoxes( ::actors::Actor actor);
		Dynamic checkActorHitBoxes_dyn();

		virtual Array< ::Dynamic > checkProjectileBounds( ::actors::Actor actor);
		Dynamic checkProjectileBounds_dyn();

		virtual Void updateCheckpoints( ::actors::Player player);
		Dynamic updateCheckpoints_dyn();

		virtual Void updateEndPortal( ::actors::Player player);
		Dynamic updateEndPortal_dyn();

		virtual ::maps::mapobjects::Portal findDoorFrom( ::String map);
		Dynamic findDoorFrom_dyn();

		virtual bool checkAICollision( ::maps::mapobjects::MapObject object,int y,int x);
		Dynamic checkAICollision_dyn();

		virtual bool checkObjectCollision( ::maps::mapobjects::MapObject object,int y,int x);
		Dynamic checkObjectCollision_dyn();

		virtual ::maps::mapobjects::MapObject getCurrentCheckpoint( );
		Dynamic getCurrentCheckpoint_dyn();

		virtual ::maps::mapobjects::Checkpoint getStartPoint( );
		Dynamic getStartPoint_dyn();

		virtual Void changeCheckpoint( ::maps::mapobjects::MapObject newCheckpoint);
		Dynamic changeCheckpoint_dyn();

		virtual int getMapWidth( );
		Dynamic getMapWidth_dyn();

		virtual int getMapHeight( );
		Dynamic getMapHeight_dyn();

};

} // end namespace maps

#endif /* INCLUDED_maps_AreaMap */ 
