#ifndef INCLUDED_actors_Player
#define INCLUDED_actors_Player

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_actors_Actor
#include <actors/Actor.h>
#endif
HX_DECLARE_CLASS1(actors,Actor)
HX_DECLARE_CLASS1(actors,Player)
HX_DECLARE_CLASS2(actors,abilities,Ability)
HX_DECLARE_CLASS2(actors,attacks,Attack)
HX_DECLARE_CLASS2(actors,attacks,Projectile)
HX_DECLARE_CLASS2(actors,enemies,Enemy)
HX_DECLARE_CLASS2(maps,mapobjects,MapObject)
HX_DECLARE_CLASS2(openfl,display,DisplayObject)
HX_DECLARE_CLASS2(openfl,display,DisplayObjectContainer)
HX_DECLARE_CLASS2(openfl,display,IBitmapDrawable)
HX_DECLARE_CLASS2(openfl,display,InteractiveObject)
HX_DECLARE_CLASS2(openfl,display,Sprite)
HX_DECLARE_CLASS2(openfl,events,Event)
HX_DECLARE_CLASS2(openfl,events,EventDispatcher)
HX_DECLARE_CLASS2(openfl,events,IEventDispatcher)
HX_DECLARE_CLASS2(openfl,events,KeyboardEvent)
namespace actors{


class HXCPP_CLASS_ATTRIBUTES  Player_obj : public ::actors::Actor_obj{
	public:
		typedef ::actors::Actor_obj super;
		typedef Player_obj OBJ_;
		Player_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="actors.Player")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< Player_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Player_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("Player","\x81","\x5f","\x4d","\x6c"); }

		::actors::attacks::Attack jumpAttack;
		::actors::attacks::Attack standAttack;
		::actors::abilities::Ability ability;
		virtual Void updatePlayer( );
		Dynamic updatePlayer_dyn();

		virtual bool isStunned( );
		Dynamic isStunned_dyn();

		virtual Void handleAnimation( );
		Dynamic handleAnimation_dyn();

		virtual Void centerScreen( );
		Dynamic centerScreen_dyn();

		virtual Void setGrounded( );

		virtual Void initiateAttack( );

		virtual bool isAttacking( );
		Dynamic isAttacking_dyn();

		virtual Void endAttack( );

		virtual Void resetAttackAnimation( );
		Dynamic resetAttackAnimation_dyn();

		virtual Void beginAbilityAttack( );
		Dynamic beginAbilityAttack_dyn();

		virtual Void endAbilityAttack( );
		Dynamic endAbilityAttack_dyn();

		virtual Void calculateDamage( ::maps::mapobjects::MapObject source);

		virtual bool takeProjectileDamage( ::actors::attacks::Projectile projectile);

		virtual Void kill( );

		virtual Void handleDeath( );

		virtual Void absorbAbility( ::actors::enemies::Enemy enemy);
		Dynamic absorbAbility_dyn();

		virtual Void removeAbility( );
		Dynamic removeAbility_dyn();

		virtual Void checkKeysDown( ::openfl::events::KeyboardEvent key);
		Dynamic checkKeysDown_dyn();

		virtual Void checkKeysUp( ::openfl::events::KeyboardEvent key);
		Dynamic checkKeysUp_dyn();

		virtual Void stopHoldAttack( );
		Dynamic stopHoldAttack_dyn();

		virtual Void goLeft( );

		virtual Void goRight( );

		virtual Void stopLeft( );

		virtual Void stopRight( );

		virtual Void jump( );

		virtual Void setAnimation( ::String action);

};

} // end namespace actors

#endif /* INCLUDED_actors_Player */ 
