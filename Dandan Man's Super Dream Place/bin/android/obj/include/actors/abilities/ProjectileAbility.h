#ifndef INCLUDED_actors_abilities_ProjectileAbility
#define INCLUDED_actors_abilities_ProjectileAbility

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_actors_abilities_Ability
#include <actors/abilities/Ability.h>
#endif
HX_DECLARE_CLASS1(actors,Actor)
HX_DECLARE_CLASS1(actors,ObjectMover)
HX_DECLARE_CLASS2(actors,abilities,Ability)
HX_DECLARE_CLASS2(actors,abilities,ProjectileAbility)
HX_DECLARE_CLASS2(actors,attacks,Attack)
HX_DECLARE_CLASS2(actors,attacks,ProjectileAttack)
HX_DECLARE_CLASS2(maps,mapobjects,MapObject)
HX_DECLARE_CLASS2(openfl,display,DisplayObject)
HX_DECLARE_CLASS2(openfl,display,DisplayObjectContainer)
HX_DECLARE_CLASS2(openfl,display,IBitmapDrawable)
HX_DECLARE_CLASS2(openfl,display,InteractiveObject)
HX_DECLARE_CLASS2(openfl,display,Sprite)
HX_DECLARE_CLASS2(openfl,events,EventDispatcher)
HX_DECLARE_CLASS2(openfl,events,IEventDispatcher)
namespace actors{
namespace abilities{


class HXCPP_CLASS_ATTRIBUTES  ProjectileAbility_obj : public ::actors::abilities::Ability_obj{
	public:
		typedef ::actors::abilities::Ability_obj super;
		typedef ProjectileAbility_obj OBJ_;
		ProjectileAbility_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="actors.abilities.ProjectileAbility")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< ProjectileAbility_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~ProjectileAbility_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("ProjectileAbility","\xa1","\x42","\x41","\x13"); }

		::actors::attacks::ProjectileAttack projectileAttack;
		virtual ::actors::attacks::Attack getAbilityAttack( ::actors::Actor actor,::actors::ObjectMover mover);

};

} // end namespace actors
} // end namespace abilities

#endif /* INCLUDED_actors_abilities_ProjectileAbility */ 
