#ifndef INCLUDED_actors_enemies_LaunchEnemy
#define INCLUDED_actors_enemies_LaunchEnemy

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_actors_enemies_Enemy
#include <actors/enemies/Enemy.h>
#endif
HX_DECLARE_CLASS1(actors,Actor)
HX_DECLARE_CLASS2(actors,attacks,Attack)
HX_DECLARE_CLASS2(actors,enemies,Enemy)
HX_DECLARE_CLASS2(actors,enemies,LaunchEnemy)
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


class HXCPP_CLASS_ATTRIBUTES  LaunchEnemy_obj : public ::actors::enemies::Enemy_obj{
	public:
		typedef ::actors::enemies::Enemy_obj super;
		typedef LaunchEnemy_obj OBJ_;
		LaunchEnemy_obj();
		Void __construct(::maps::mapobjects::SpawnPoint homeSpawn);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="actors.enemies.LaunchEnemy")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< LaunchEnemy_obj > __new(::maps::mapobjects::SpawnPoint homeSpawn);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~LaunchEnemy_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("LaunchEnemy","\xf5","\x3e","\xd4","\xc7"); }

		::actors::attacks::Attack aoeAttack;
		int originalWidth;
		int originalHeight;
		int aoeWidth;
		int aoeHeight;
		virtual Void handleAnimation( );

		virtual Void stopLeft( );

		virtual Void stopRight( );

		virtual Void goLeft( );

		virtual Void goRight( );

		virtual Void setAnimation( ::String action);

		virtual Void windup( );
		Dynamic windup_dyn();

		virtual Void launchAttack( );
		Dynamic launchAttack_dyn();

		virtual Void endLaunchAttack( );
		Dynamic endLaunchAttack_dyn();

		virtual ::actors::enemies::Enemy createClone( ::maps::mapobjects::SpawnPoint spawnPoint);

};

} // end namespace actors
} // end namespace enemies

#endif /* INCLUDED_actors_enemies_LaunchEnemy */ 
