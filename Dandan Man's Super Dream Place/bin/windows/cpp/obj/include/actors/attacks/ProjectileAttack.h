#ifndef INCLUDED_actors_attacks_ProjectileAttack
#define INCLUDED_actors_attacks_ProjectileAttack

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_actors_attacks_Attack
#include <actors/attacks/Attack.h>
#endif
HX_DECLARE_CLASS1(actors,Actor)
HX_DECLARE_CLASS2(actors,attacks,Attack)
HX_DECLARE_CLASS2(actors,attacks,Projectile)
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
namespace attacks{


class HXCPP_CLASS_ATTRIBUTES  ProjectileAttack_obj : public ::actors::attacks::Attack_obj{
	public:
		typedef ::actors::attacks::Attack_obj super;
		typedef ProjectileAttack_obj OBJ_;
		ProjectileAttack_obj();
		Void __construct(::actors::Actor host,::actors::attacks::Projectile prototypeProjectile,int stun,::String __o_fireAnimation,::String __o_stunAnimation);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="actors.attacks.ProjectileAttack")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< ProjectileAttack_obj > __new(::actors::Actor host,::actors::attacks::Projectile prototypeProjectile,int stun,::String __o_fireAnimation,::String __o_stunAnimation);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~ProjectileAttack_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("ProjectileAttack","\xb1","\xa6","\x25","\xed"); }

		::actors::attacks::Projectile prototypeProjectile;
		::actors::Actor host;
		virtual Void startAttack( );

};

} // end namespace actors
} // end namespace attacks

#endif /* INCLUDED_actors_attacks_ProjectileAttack */ 
