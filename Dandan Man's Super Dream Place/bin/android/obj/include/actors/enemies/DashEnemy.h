#ifndef INCLUDED_actors_enemies_DashEnemy
#define INCLUDED_actors_enemies_DashEnemy

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_actors_enemies_Enemy
#include <actors/enemies/Enemy.h>
#endif
HX_DECLARE_CLASS1(actors,Actor)
HX_DECLARE_CLASS2(actors,attacks,Attack)
HX_DECLARE_CLASS2(actors,enemies,DashEnemy)
HX_DECLARE_CLASS2(actors,enemies,Enemy)
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


class HXCPP_CLASS_ATTRIBUTES  DashEnemy_obj : public ::actors::enemies::Enemy_obj{
	public:
		typedef ::actors::enemies::Enemy_obj super;
		typedef DashEnemy_obj OBJ_;
		DashEnemy_obj();
		Void __construct(::maps::mapobjects::SpawnPoint homespawn);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="actors.enemies.DashEnemy")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< DashEnemy_obj > __new(::maps::mapobjects::SpawnPoint homespawn);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~DashEnemy_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("DashEnemy","\x76","\x83","\x27","\xfb"); }

		::actors::attacks::Attack leftDash;
		::actors::attacks::Attack rightDash;
		virtual Void handleAnimation( );

		virtual Void dashLeft( );
		Dynamic dashLeft_dyn();

		virtual Void dashRight( );
		Dynamic dashRight_dyn();

		virtual ::actors::enemies::Enemy createClone( ::maps::mapobjects::SpawnPoint spawnPoint);

};

} // end namespace actors
} // end namespace enemies

#endif /* INCLUDED_actors_enemies_DashEnemy */ 
