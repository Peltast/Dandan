#ifndef INCLUDED_actors_attacks_AbsorbAttack
#define INCLUDED_actors_attacks_AbsorbAttack

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_actors_attacks_Attack
#include <actors/attacks/Attack.h>
#endif
HX_DECLARE_CLASS1(actors,ObjectMover)
HX_DECLARE_CLASS2(actors,attacks,AbsorbAttack)
HX_DECLARE_CLASS2(actors,attacks,Attack)
HX_DECLARE_CLASS2(openfl,geom,Rectangle)
namespace actors{
namespace attacks{


class HXCPP_CLASS_ATTRIBUTES  AbsorbAttack_obj : public ::actors::attacks::Attack_obj{
	public:
		typedef ::actors::attacks::Attack_obj super;
		typedef AbsorbAttack_obj OBJ_;
		AbsorbAttack_obj();
		Void __construct(::actors::ObjectMover attackMovement,Array< ::Dynamic > hits,int duration,int damage);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="actors.attacks.AbsorbAttack")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< AbsorbAttack_obj > __new(::actors::ObjectMover attackMovement,Array< ::Dynamic > hits,int duration,int damage);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~AbsorbAttack_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		static void __register();
		::String __ToString() const { return HX_HCSTRING("AbsorbAttack","\x75","\xfc","\x32","\x57"); }

		virtual bool updateAttack( ::actors::ObjectMover mover);

};

} // end namespace actors
} // end namespace attacks

#endif /* INCLUDED_actors_attacks_AbsorbAttack */ 
