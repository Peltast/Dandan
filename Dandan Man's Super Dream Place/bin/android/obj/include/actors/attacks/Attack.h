#ifndef INCLUDED_actors_attacks_Attack
#define INCLUDED_actors_attacks_Attack

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS1(actors,ObjectMover)
HX_DECLARE_CLASS2(actors,attacks,Attack)
HX_DECLARE_CLASS2(actors,attacks,Hitbox)
HX_DECLARE_CLASS2(openfl,display,DisplayObject)
HX_DECLARE_CLASS2(openfl,display,DisplayObjectContainer)
HX_DECLARE_CLASS2(openfl,display,IBitmapDrawable)
HX_DECLARE_CLASS2(openfl,display,InteractiveObject)
HX_DECLARE_CLASS2(openfl,display,Sprite)
HX_DECLARE_CLASS2(openfl,events,EventDispatcher)
HX_DECLARE_CLASS2(openfl,events,IEventDispatcher)
HX_DECLARE_CLASS2(openfl,geom,Rectangle)
namespace actors{
namespace attacks{


class HXCPP_CLASS_ATTRIBUTES  Attack_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef Attack_obj OBJ_;
		Attack_obj();
		Void __construct(::actors::ObjectMover attackMovement,Array< ::Dynamic > hits,int duration,int damage,int stunDuration,::String __o_animation,::String __o_stunAnimation,hx::Null< bool >  __o_unstoppable);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="actors.attacks.Attack")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< Attack_obj > __new(::actors::ObjectMover attackMovement,Array< ::Dynamic > hits,int duration,int damage,int stunDuration,::String __o_animation,::String __o_stunAnimation,hx::Null< bool >  __o_unstoppable);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Attack_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("Attack","\xe8","\x6f","\xa4","\x14"); }

		bool active;
		::actors::ObjectMover attackMovement;
		::actors::attacks::Hitbox attackHitbox;
		::String attackAnimation;
		::String stunAnimation;
		int duration;
		int counter;
		int damage;
		int stunDuration;
		bool unstoppable;
		virtual Void startAttack( );
		Dynamic startAttack_dyn();

		virtual Void endAttack( );
		Dynamic endAttack_dyn();

		virtual bool updateAttack( ::actors::ObjectMover mover);
		Dynamic updateAttack_dyn();

		virtual bool isActive( );
		Dynamic isActive_dyn();

		virtual ::actors::ObjectMover getMovement( );
		Dynamic getMovement_dyn();

		virtual ::actors::attacks::Hitbox getHits( );
		Dynamic getHits_dyn();

		virtual int getDamage( );
		Dynamic getDamage_dyn();

		virtual int getStunDuration( );
		Dynamic getStunDuration_dyn();

		virtual int getDuration( );
		Dynamic getDuration_dyn();

		virtual bool hasAnimation( );
		Dynamic hasAnimation_dyn();

		virtual ::String getAnimation( );
		Dynamic getAnimation_dyn();

		virtual bool hasStunAnimation( );
		Dynamic hasStunAnimation_dyn();

		virtual ::String getStunAnimation( );
		Dynamic getStunAnimation_dyn();

		virtual bool grantsUnstoppable( );
		Dynamic grantsUnstoppable_dyn();

};

} // end namespace actors
} // end namespace attacks

#endif /* INCLUDED_actors_attacks_Attack */ 
