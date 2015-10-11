#ifndef INCLUDED_actors_enemies_RunningEnemy
#define INCLUDED_actors_enemies_RunningEnemy

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_actors_enemies_Enemy
#include <actors/enemies/Enemy.h>
#endif
HX_DECLARE_CLASS1(actors,Actor)
HX_DECLARE_CLASS2(actors,enemies,Enemy)
HX_DECLARE_CLASS2(actors,enemies,RunningEnemy)
HX_DECLARE_CLASS2(maps,mapobjects,MapObject)
HX_DECLARE_CLASS2(maps,mapobjects,SpawnPoint)
HX_DECLARE_CLASS2(openfl,display,DisplayObject)
HX_DECLARE_CLASS2(openfl,display,DisplayObjectContainer)
HX_DECLARE_CLASS2(openfl,display,IBitmapDrawable)
HX_DECLARE_CLASS2(openfl,display,InteractiveObject)
HX_DECLARE_CLASS2(openfl,display,Sprite)
HX_DECLARE_CLASS2(openfl,events,EventDispatcher)
HX_DECLARE_CLASS2(openfl,events,IEventDispatcher)
namespace actors{
namespace enemies{


class HXCPP_CLASS_ATTRIBUTES  RunningEnemy_obj : public ::actors::enemies::Enemy_obj{
	public:
		typedef ::actors::enemies::Enemy_obj super;
		typedef RunningEnemy_obj OBJ_;
		RunningEnemy_obj();
		Void __construct(::maps::mapobjects::SpawnPoint homeSpawn);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="actors.enemies.RunningEnemy")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< RunningEnemy_obj > __new(::maps::mapobjects::SpawnPoint homeSpawn);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~RunningEnemy_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		static void __register();
		::String __ToString() const { return HX_HCSTRING("RunningEnemy","\xe9","\x43","\x07","\xbf"); }

		virtual Void handleAnimation( );

		virtual Void damageReaction( ::maps::mapobjects::MapObject source);

		virtual Void setAnimation( ::String action);

		virtual ::actors::enemies::Enemy createClone( ::maps::mapobjects::SpawnPoint spawnPoint);

};

} // end namespace actors
} // end namespace enemies

#endif /* INCLUDED_actors_enemies_RunningEnemy */ 
