#ifndef INCLUDED_actors_attacks_Projectile
#define INCLUDED_actors_attacks_Projectile

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_actors_Actor
#include <actors/Actor.h>
#endif
HX_DECLARE_CLASS1(actors,Actor)
HX_DECLARE_CLASS1(actors,ObjectMover)
HX_DECLARE_CLASS2(actors,attacks,Projectile)
HX_DECLARE_CLASS2(maps,mapobjects,MapObject)
HX_DECLARE_CLASS2(openfl,display,Bitmap)
HX_DECLARE_CLASS2(openfl,display,DisplayObject)
HX_DECLARE_CLASS2(openfl,display,DisplayObjectContainer)
HX_DECLARE_CLASS2(openfl,display,IBitmapDrawable)
HX_DECLARE_CLASS2(openfl,display,InteractiveObject)
HX_DECLARE_CLASS2(openfl,display,Sprite)
HX_DECLARE_CLASS2(openfl,events,EventDispatcher)
HX_DECLARE_CLASS2(openfl,events,IEventDispatcher)
namespace actors{
namespace attacks{


class HXCPP_CLASS_ATTRIBUTES  Projectile_obj : public ::actors::Actor_obj{
	public:
		typedef ::actors::Actor_obj super;
		typedef Projectile_obj OBJ_;
		Projectile_obj();
		Void __construct(::actors::attacks::Projectile implementation,::openfl::display::Bitmap bitmap,::actors::ObjectMover mover,int duration,int damage);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="actors.attacks.Projectile")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< Projectile_obj > __new(::actors::attacks::Projectile implementation,::openfl::display::Bitmap bitmap,::actors::ObjectMover mover,int duration,int damage);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Projectile_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("Projectile","\x09","\x8a","\x3c","\xbb"); }

		::actors::ObjectMover projectileMover;
		int duration;
		int damage;
		bool expired;
		virtual bool updateProjectile( );
		Dynamic updateProjectile_dyn();

		virtual Void flipProjectile( bool horizontal);
		Dynamic flipProjectile_dyn();

		virtual Void invertXMovement( );
		Dynamic invertXMovement_dyn();

		virtual Void invertYMovement( );
		Dynamic invertYMovement_dyn();

		virtual Void flipProjectileBmp( bool horizontal);
		Dynamic flipProjectileBmp_dyn();

		virtual Void moveXAxis( );

		virtual Void moveYAxis( );

		virtual int getProjectileDamage( );
		Dynamic getProjectileDamage_dyn();

		virtual ::actors::attacks::Projectile createClone( );
		Dynamic createClone_dyn();

};

} // end namespace actors
} // end namespace attacks

#endif /* INCLUDED_actors_attacks_Projectile */ 
