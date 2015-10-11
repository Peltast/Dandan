#ifndef INCLUDED_actors_actorsAI_EnemyAI
#define INCLUDED_actors_actorsAI_EnemyAI

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS1(actors,Actor)
HX_DECLARE_CLASS1(actors,ObjectMover)
HX_DECLARE_CLASS2(actors,actorsAI,EnemyAI)
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


class HXCPP_CLASS_ATTRIBUTES  EnemyAI_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef EnemyAI_obj OBJ_;
		EnemyAI_obj();
		Void __construct(::actors::actorsAI::EnemyAI implementation);

	public:
		inline void *operator new( size_t inSize, bool inContainer=false,const char *inName="actors.actorsAI.EnemyAI")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< EnemyAI_obj > __new(::actors::actorsAI::EnemyAI implementation);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~EnemyAI_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		static void __register();
		::String __ToString() const { return HX_HCSTRING("EnemyAI","\x10","\x95","\x6b","\xa0"); }

		virtual Void updateAI( ::actors::Actor actor,::actors::ObjectMover mover);
		Dynamic updateAI_dyn();

		virtual Void handleCollision( ::maps::mapobjects::MapObject collider,::actors::Actor host,bool horizontal);
		Dynamic handleCollision_dyn();

};

} // end namespace actors
} // end namespace actorsAI

#endif /* INCLUDED_actors_actorsAI_EnemyAI */ 
