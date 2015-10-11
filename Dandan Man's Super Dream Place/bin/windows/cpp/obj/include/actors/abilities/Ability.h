#ifndef INCLUDED_actors_abilities_Ability
#define INCLUDED_actors_abilities_Ability

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS1(actors,Actor)
HX_DECLARE_CLASS1(actors,ObjectMover)
HX_DECLARE_CLASS2(actors,abilities,Ability)
HX_DECLARE_CLASS2(actors,attacks,Attack)
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


class HXCPP_CLASS_ATTRIBUTES  Ability_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef Ability_obj OBJ_;
		Ability_obj();
		Void __construct(::actors::abilities::Ability ability);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="actors.abilities.Ability")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< Ability_obj > __new(::actors::abilities::Ability ability);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Ability_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("Ability","\x8a","\x89","\xb2","\x7a"); }

		::actors::attacks::Attack standingAttack;
		::actors::attacks::Attack jumpAttack;
		int abilityWidth;
		int abilityHeight;
		virtual ::actors::attacks::Attack getAbilityAttack( ::actors::Actor actor,::actors::ObjectMover mover);
		Dynamic getAbilityAttack_dyn();

		virtual int getAbilityWidth( );
		Dynamic getAbilityWidth_dyn();

		virtual int getAbilityHeight( );
		Dynamic getAbilityHeight_dyn();

};

} // end namespace actors
} // end namespace abilities

#endif /* INCLUDED_actors_abilities_Ability */ 
