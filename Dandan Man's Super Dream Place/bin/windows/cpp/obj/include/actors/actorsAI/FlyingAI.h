#ifndef INCLUDED_actors_actorsAI_FlyingAI
#define INCLUDED_actors_actorsAI_FlyingAI

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_actors_actorsAI_EnemyAI
#include <actors/actorsAI/EnemyAI.h>
#endif
HX_DECLARE_CLASS1(actors,Actor)
HX_DECLARE_CLASS1(actors,ObjectMover)
HX_DECLARE_CLASS2(actors,actorsAI,EnemyAI)
HX_DECLARE_CLASS2(actors,actorsAI,FlyingAI)
HX_DECLARE_CLASS2(actors,enemies,Enemy)
HX_DECLARE_CLASS2(actors,enemies,FlyingEnemy)
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


class HXCPP_CLASS_ATTRIBUTES  FlyingAI_obj : public ::actors::actorsAI::EnemyAI_obj{
	public:
		typedef ::actors::actorsAI::EnemyAI_obj super;
		typedef FlyingAI_obj OBJ_;
		FlyingAI_obj();
		Void __construct(bool horizontal);

	public:
		inline void *operator new( size_t inSize, bool inContainer=false,const char *inName="actors.actorsAI.FlyingAI")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< FlyingAI_obj > __new(bool horizontal);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~FlyingAI_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		::String __ToString() const { return HX_HCSTRING("FlyingAI","\x17","\xb9","\x1e","\x4e"); }

		bool horizontal;
		bool alignmentLeft;
		virtual Void updateAI( ::actors::Actor actor,::actors::ObjectMover mover);

		virtual bool headingToWall( ::maps::mapobjects::MapObject object,::actors::Actor host);
		Dynamic headingToWall_dyn();

		virtual Void handleCollision( ::maps::mapobjects::MapObject collider,::actors::Actor host,bool horizontal);

		virtual Void switchDirections( ::actors::enemies::FlyingEnemy host);
		Dynamic switchDirections_dyn();

};

} // end namespace actors
} // end namespace actorsAI

#endif /* INCLUDED_actors_actorsAI_FlyingAI */ 
