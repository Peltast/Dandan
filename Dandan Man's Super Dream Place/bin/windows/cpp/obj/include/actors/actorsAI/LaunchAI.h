#ifndef INCLUDED_actors_actorsAI_LaunchAI
#define INCLUDED_actors_actorsAI_LaunchAI

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_actors_actorsAI_EnemyAI
#include <actors/actorsAI/EnemyAI.h>
#endif
HX_DECLARE_CLASS1(actors,Actor)
HX_DECLARE_CLASS1(actors,ObjectMover)
HX_DECLARE_CLASS2(actors,actorsAI,EnemyAI)
HX_DECLARE_CLASS2(actors,actorsAI,LaunchAI)
HX_DECLARE_CLASS2(actors,enemies,Enemy)
HX_DECLARE_CLASS2(actors,enemies,LaunchEnemy)
HX_DECLARE_CLASS2(maps,mapobjects,MapObject)
HX_DECLARE_CLASS2(openfl,display,DisplayObject)
HX_DECLARE_CLASS2(openfl,display,DisplayObjectContainer)
HX_DECLARE_CLASS2(openfl,display,IBitmapDrawable)
HX_DECLARE_CLASS2(openfl,display,InteractiveObject)
HX_DECLARE_CLASS2(openfl,display,Sprite)
HX_DECLARE_CLASS2(openfl,events,EventDispatcher)
HX_DECLARE_CLASS2(openfl,events,IEventDispatcher)
namespace actors{
namespace actorsAI{


class HXCPP_CLASS_ATTRIBUTES  LaunchAI_obj : public ::actors::actorsAI::EnemyAI_obj{
	public:
		typedef ::actors::actorsAI::EnemyAI_obj super;
		typedef LaunchAI_obj OBJ_;
		LaunchAI_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=false,const char *inName="actors.actorsAI.LaunchAI")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< LaunchAI_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~LaunchAI_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		::String __ToString() const { return HX_HCSTRING("LaunchAI","\xfb","\x29","\x30","\x1c"); }

		bool alignmentLeft;
		int windupCooldown;
		int attackCooldown;
		int visionConeHeight;
		int visionConeWidth;
		virtual Void updateAI( ::actors::Actor actor,::actors::ObjectMover mover);

		virtual Void handleAttack( ::actors::enemies::LaunchEnemy enemy);
		Dynamic handleAttack_dyn();

		virtual Void handleCollision( ::maps::mapobjects::MapObject collider,::actors::Actor host,bool horizontal);

		virtual bool headingToWall( ::maps::mapobjects::MapObject object,::actors::Actor host);
		Dynamic headingToWall_dyn();

		virtual Void switchDirections( ::actors::Actor actor);
		Dynamic switchDirections_dyn();

};

} // end namespace actors
} // end namespace actorsAI

#endif /* INCLUDED_actors_actorsAI_LaunchAI */ 
