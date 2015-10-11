#ifndef INCLUDED_maps_mapobjects_SpawnPoint
#define INCLUDED_maps_mapobjects_SpawnPoint

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_maps_mapobjects_MapObject
#include <maps/mapobjects/MapObject.h>
#endif
HX_DECLARE_CLASS1(actors,Actor)
HX_DECLARE_CLASS2(actors,enemies,Enemy)
HX_DECLARE_CLASS2(maps,mapobjects,MapObject)
HX_DECLARE_CLASS2(maps,mapobjects,SpawnPoint)
HX_DECLARE_CLASS2(openfl,display,Bitmap)
HX_DECLARE_CLASS2(openfl,display,DisplayObject)
HX_DECLARE_CLASS2(openfl,display,DisplayObjectContainer)
HX_DECLARE_CLASS2(openfl,display,IBitmapDrawable)
HX_DECLARE_CLASS2(openfl,display,InteractiveObject)
HX_DECLARE_CLASS2(openfl,display,Sprite)
HX_DECLARE_CLASS2(openfl,events,EventDispatcher)
HX_DECLARE_CLASS2(openfl,events,IEventDispatcher)
namespace maps{
namespace mapobjects{


class HXCPP_CLASS_ATTRIBUTES  SpawnPoint_obj : public ::maps::mapobjects::MapObject_obj{
	public:
		typedef ::maps::mapobjects::MapObject_obj super;
		typedef SpawnPoint_obj OBJ_;
		SpawnPoint_obj();
		Void __construct(::openfl::display::Bitmap defaultBmp,::actors::enemies::Enemy enemyPrototype,hx::Null< int >  __o_maxEnemies,hx::Null< int >  __o_frequency,hx::Null< int >  __o_startCount,hx::Null< int >  __o_enemiesPerInstance);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="maps.mapobjects.SpawnPoint")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< SpawnPoint_obj > __new(::openfl::display::Bitmap defaultBmp,::actors::enemies::Enemy enemyPrototype,hx::Null< int >  __o_maxEnemies,hx::Null< int >  __o_frequency,hx::Null< int >  __o_startCount,hx::Null< int >  __o_enemiesPerInstance);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~SpawnPoint_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("SpawnPoint","\x35","\x14","\x59","\xf7"); }

		::actors::enemies::Enemy enemyPrototype;
		int frequency;
		int startCount;
		int counter;
		int enemyCount;
		int maxEnemies;
		int enemiesPerInstance;
		int totalEnemiesSpawned;
		virtual bool updateSpawn( );
		Dynamic updateSpawn_dyn();

		virtual Void resetSpawn( );
		Dynamic resetSpawn_dyn();

		virtual ::actors::enemies::Enemy getEnemyType( );
		Dynamic getEnemyType_dyn();

		virtual Void enemyDead( ::actors::enemies::Enemy enemy);
		Dynamic enemyDead_dyn();

};

} // end namespace maps
} // end namespace mapobjects

#endif /* INCLUDED_maps_mapobjects_SpawnPoint */ 
