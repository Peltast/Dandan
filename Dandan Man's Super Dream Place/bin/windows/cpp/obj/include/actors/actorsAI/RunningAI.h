#ifndef INCLUDED_actors_actorsAI_RunningAI
#define INCLUDED_actors_actorsAI_RunningAI

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_actors_actorsAI_EnemyAI
#include <actors/actorsAI/EnemyAI.h>
#endif
HX_DECLARE_CLASS1(actors,Actor)
HX_DECLARE_CLASS1(actors,ObjectMover)
HX_DECLARE_CLASS2(actors,actorsAI,EnemyAI)
HX_DECLARE_CLASS2(actors,actorsAI,RunningAI)
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


class HXCPP_CLASS_ATTRIBUTES  RunningAI_obj : public ::actors::actorsAI::EnemyAI_obj{
	public:
		typedef ::actors::actorsAI::EnemyAI_obj super;
		typedef RunningAI_obj OBJ_;
		RunningAI_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=false,const char *inName="actors.actorsAI.RunningAI")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< RunningAI_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~RunningAI_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		::String __ToString() const { return HX_HCSTRING("RunningAI","\x87","\x44","\xf3","\x4c"); }

		bool alignmentLeft;
		bool isRunning;
		int startPosition;
		int runDistance;
		int runInterval;
		int runTimer;
		virtual Void updateAI( ::actors::Actor actor,::actors::ObjectMover mover);

		virtual Void updateRun( ::actors::Actor actor);
		Dynamic updateRun_dyn();

		virtual Void handleCollision( ::maps::mapobjects::MapObject collider,::actors::Actor host,bool horizontal);

		virtual Void startRun( ::actors::Actor actor);
		Dynamic startRun_dyn();

		virtual Void stopRun( ::actors::Actor actor);
		Dynamic stopRun_dyn();

		virtual bool headingToWall( ::maps::mapobjects::MapObject object,::actors::Actor host);
		Dynamic headingToWall_dyn();

};

} // end namespace actors
} // end namespace actorsAI

#endif /* INCLUDED_actors_actorsAI_RunningAI */ 
