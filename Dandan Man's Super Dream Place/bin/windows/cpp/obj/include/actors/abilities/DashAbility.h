#ifndef INCLUDED_actors_abilities_DashAbility
#define INCLUDED_actors_abilities_DashAbility

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_actors_abilities_Ability
#include <actors/abilities/Ability.h>
#endif
HX_DECLARE_CLASS1(actors,Actor)
HX_DECLARE_CLASS1(actors,ObjectMover)
HX_DECLARE_CLASS2(actors,abilities,Ability)
HX_DECLARE_CLASS2(actors,abilities,DashAbility)
HX_DECLARE_CLASS2(actors,attacks,Attack)
HX_DECLARE_CLASS2(maps,mapobjects,MapObject)
HX_DECLARE_CLASS2(openfl,display,DisplayObject)
HX_DECLARE_CLASS2(openfl,display,DisplayObjectContainer)
HX_DECLARE_CLASS2(openfl,display,IBitmapDrawable)
HX_DECLARE_CLASS2(openfl,display,InteractiveObject)
HX_DECLARE_CLASS2(openfl,display,Sprite)
HX_DECLARE_CLASS2(openfl,events,EventDispatcher)
HX_DECLARE_CLASS2(openfl,events,IEventDispatcher)
HX_DECLARE_CLASS2(openfl,geom,Rectangle)
namespace actors{
namespace abilities{


class HXCPP_CLASS_ATTRIBUTES  DashAbility_obj : public ::actors::abilities::Ability_obj{
	public:
		typedef ::actors::abilities::Ability_obj super;
		typedef DashAbility_obj OBJ_;
		DashAbility_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="actors.abilities.DashAbility")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< DashAbility_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~DashAbility_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("DashAbility","\x58","\xfa","\xee","\x90"); }

		Array< ::Dynamic > hitBoxes;
		::actors::attacks::Attack leftDash;
		::actors::attacks::Attack rightDash;
		virtual ::actors::attacks::Attack getAbilityAttack( ::actors::Actor actor,::actors::ObjectMover mover);

		virtual Void changeDashDirection( ::actors::Actor actor);
		Dynamic changeDashDirection_dyn();

};

} // end namespace actors
} // end namespace abilities

#endif /* INCLUDED_actors_abilities_DashAbility */ 
