#ifndef INCLUDED_actors_enemies_FlyingEnemy
#define INCLUDED_actors_enemies_FlyingEnemy

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_actors_enemies_Enemy
#include <actors/enemies/Enemy.h>
#endif
HX_DECLARE_CLASS1(actors,Actor)
HX_DECLARE_CLASS2(actors,enemies,Enemy)
HX_DECLARE_CLASS2(actors,enemies,FlyingEnemy)
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


class HXCPP_CLASS_ATTRIBUTES  FlyingEnemy_obj : public ::actors::enemies::Enemy_obj{
	public:
		typedef ::actors::enemies::Enemy_obj super;
		typedef FlyingEnemy_obj OBJ_;
		FlyingEnemy_obj();
		Void __construct(::maps::mapobjects::SpawnPoint homeSpawn,bool horizontal);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="actors.enemies.FlyingEnemy")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< FlyingEnemy_obj > __new(::maps::mapobjects::SpawnPoint homeSpawn,bool horizontal);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~FlyingEnemy_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		::String __ToString() const { return HX_HCSTRING("FlyingEnemy","\x59","\x09","\xab","\x96"); }

		bool horizontal;
		virtual Void handleAnimation( );

		virtual Void damageReaction( ::maps::mapobjects::MapObject source);

		virtual Void goUp( );
		Dynamic goUp_dyn();

		virtual Void goDown( );
		Dynamic goDown_dyn();

		virtual Void stopUp( );
		Dynamic stopUp_dyn();

		virtual Void stopDown( );
		Dynamic stopDown_dyn();

		virtual Void setAnimation( ::String action);

		virtual ::actors::enemies::Enemy createClone( ::maps::mapobjects::SpawnPoint spawnPoint);

};

} // end namespace actors
} // end namespace enemies

#endif /* INCLUDED_actors_enemies_FlyingEnemy */ 
