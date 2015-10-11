#ifndef INCLUDED_actors_attacks_PlayerProjectile
#define INCLUDED_actors_attacks_PlayerProjectile

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_actors_attacks_Projectile
#include <actors/attacks/Projectile.h>
#endif
HX_DECLARE_CLASS1(actors,Actor)
HX_DECLARE_CLASS1(actors,ObjectMover)
HX_DECLARE_CLASS2(actors,attacks,PlayerProjectile)
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


class HXCPP_CLASS_ATTRIBUTES  PlayerProjectile_obj : public ::actors::attacks::Projectile_obj{
	public:
		typedef ::actors::attacks::Projectile_obj super;
		typedef PlayerProjectile_obj OBJ_;
		PlayerProjectile_obj();
		Void __construct(::openfl::display::Bitmap bitmap,::actors::ObjectMover mover,int duration,int damage);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="actors.attacks.PlayerProjectile")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< PlayerProjectile_obj > __new(::openfl::display::Bitmap bitmap,::actors::ObjectMover mover,int duration,int damage);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~PlayerProjectile_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		static void __register();
		::String __ToString() const { return HX_HCSTRING("PlayerProjectile","\xca","\xb4","\xaa","\xe3"); }

		virtual ::actors::attacks::Projectile createClone( );

};

} // end namespace actors
} // end namespace attacks

#endif /* INCLUDED_actors_attacks_PlayerProjectile */ 
