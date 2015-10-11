#ifndef INCLUDED_actors_Animation
#define INCLUDED_actors_Animation

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS1(actors,Animation)
HX_DECLARE_CLASS2(openfl,geom,Point)
HX_DECLARE_CLASS2(openfl,geom,Rectangle)
namespace actors{


class HXCPP_CLASS_ATTRIBUTES  Animation_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef Animation_obj OBJ_;
		Animation_obj();
		Void __construct(::String name,int speed,::openfl::geom::Point animStart,int animWidth,int animHeight,Array< ::Dynamic > animFrames,hx::Null< int >  __o_intervalPause);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="actors.Animation")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< Animation_obj > __new(::String name,int speed,::openfl::geom::Point animStart,int animWidth,int animHeight,Array< ::Dynamic > animFrames,hx::Null< int >  __o_intervalPause);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Animation_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("Animation","\xe4","\xce","\x07","\xed"); }

		Array< ::Dynamic > frames;
		::String name;
		::openfl::geom::Point animStart;
		int animWidth;
		int animHeight;
		Array< ::Dynamic > animFrames;
		int intervalPause;
		int intervalCount;
		int tickCount;
		int speed;
		::openfl::geom::Rectangle currentFrame;
		virtual Void resetAnimation( );
		Dynamic resetAnimation_dyn();

		virtual ::openfl::geom::Rectangle updateAnimation( );
		Dynamic updateAnimation_dyn();

		virtual int getFrameIndex( );
		Dynamic getFrameIndex_dyn();

		virtual ::openfl::geom::Rectangle getRectangle( );
		Dynamic getRectangle_dyn();

		virtual int getWidth( );
		Dynamic getWidth_dyn();

		virtual int getHeight( );
		Dynamic getHeight_dyn();

		virtual ::String getName( );
		Dynamic getName_dyn();

		virtual ::openfl::geom::Point getAnimStart( );
		Dynamic getAnimStart_dyn();

		virtual ::actors::Animation getClone( hx::Null< int >  newSpeed);
		Dynamic getClone_dyn();

};

} // end namespace actors

#endif /* INCLUDED_actors_Animation */ 
