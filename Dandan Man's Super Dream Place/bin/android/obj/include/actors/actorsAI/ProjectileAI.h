#ifndef INCLUDED_actors_actorsAI_ProjectileAI
#define INCLUDED_actors_actorsAI_ProjectileAI

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_actors_actorsAI_EnemyAI
#include <actors/actorsAI/EnemyAI.h>
#endif
HX_DECLARE_CLASS1(actors,Actor)
HX_DECLARE_CLASS1(actors,ObjectMover)
HX_DECLARE_CLASS2(actors,actorsAI,EnemyAI)
HX_DECLARE_CLASS2(actors,actorsAI,ProjectileAI)
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


class HXCPP_CLASS_ATTRIBUTES  ProjectileAI_obj : public ::actors::actorsAI::EnemyAI_obj{
	public:
		typedef ::actors::actorsAI::EnemyAI_obj super;
		typedef ProjectileAI_obj OBJ_;
		ProjectileAI_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=false,const char *inName="actors.actorsAI.ProjectileAI")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< ProjectileAI_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~ProjectileAI_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		::String __ToString() const { return HX_HCSTRING("ProjectileAI","\x31","\x17","\xfa","\x6a"); }

		bool alignmentLeft;
		int attackCooldown;
		int visionConeHeight;
		int shortVisionConeWidth;
		int visionConeWidth;
		int projectileCooldown;
		virtual Void updateAI( ::actors::Actor actor,::actors::ObjectMover mover);

};

} // end namespace actors
} // end namespace actorsAI

#endif /* INCLUDED_actors_actorsAI_ProjectileAI */ 
