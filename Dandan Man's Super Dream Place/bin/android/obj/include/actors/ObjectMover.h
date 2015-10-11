#ifndef INCLUDED_actors_ObjectMover
#define INCLUDED_actors_ObjectMover

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS1(actors,ObjectMover)
HX_DECLARE_CLASS2(openfl,geom,Point)
namespace actors{


class HXCPP_CLASS_ATTRIBUTES  ObjectMover_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef ObjectMover_obj OBJ_;
		ObjectMover_obj();
		Void __construct(Float xAcc,Float yAcc,int targetXVel,int targetYVel,Float xVel,Float yVel,int maxSpeedX,int maxSpeedY,int jumpCharges,hx::Null< int >  __o_gravity,hx::Null< bool >  __o_takesInput);

	public:
		inline void *operator new( size_t inSize, bool inContainer=false,const char *inName="actors.ObjectMover")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< ObjectMover_obj > __new(Float xAcc,Float yAcc,int targetXVel,int targetYVel,Float xVel,Float yVel,int maxSpeedX,int maxSpeedY,int jumpCharges,hx::Null< int >  __o_gravity,hx::Null< bool >  __o_takesInput);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~ObjectMover_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		::String __ToString() const { return HX_HCSTRING("ObjectMover","\xe2","\x80","\xc7","\x5f"); }

		Float xAcc;
		Float yAcc;
		int targetXVel;
		int targetYVel;
		int maxSpeedX;
		int maxSpeedY;
		bool grounded;
		int maxJumpCharges;
		int jumpCharges;
		int gravity;
		Float xVel;
		Float yVel;
		bool takesInput;
		virtual Void updateMovement( );
		Dynamic updateMovement_dyn();

		virtual Void updateVelocity( );
		Dynamic updateVelocity_dyn();

		virtual Void setGrounded( );
		Dynamic setGrounded_dyn();

		virtual Void applyForce( ::openfl::geom::Point direction,int intensity);
		Dynamic applyForce_dyn();

		virtual Void goLeft( );
		Dynamic goLeft_dyn();

		virtual Void goRight( );
		Dynamic goRight_dyn();

		virtual Void stopLeft( );
		Dynamic stopLeft_dyn();

		virtual Void stopRight( );
		Dynamic stopRight_dyn();

		virtual Void jump( );
		Dynamic jump_dyn();

		virtual Float getXVel( );
		Dynamic getXVel_dyn();

		virtual Float getYVel( );
		Dynamic getYVel_dyn();

		virtual Void invertTargetXVel( );
		Dynamic invertTargetXVel_dyn();

		virtual Void invertTargetYVel( );
		Dynamic invertTargetYVel_dyn();

		virtual int getTargetXVel( );
		Dynamic getTargetXVel_dyn();

		virtual int getTargetYVel( );
		Dynamic getTargetYVel_dyn();

		virtual bool getIsGrounded( );
		Dynamic getIsGrounded_dyn();

		virtual Void freeze( );
		Dynamic freeze_dyn();

		virtual ::actors::ObjectMover copyMover( );
		Dynamic copyMover_dyn();

};

} // end namespace actors

#endif /* INCLUDED_actors_ObjectMover */ 
