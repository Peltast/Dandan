#ifndef INCLUDED_maps_Checkpoint
#define INCLUDED_maps_Checkpoint

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_maps_MapObject
#include <maps/MapObject.h>
#endif
HX_DECLARE_CLASS1(actors,Animation)
HX_DECLARE_CLASS1(haxe,IMap)
HX_DECLARE_CLASS2(haxe,ds,StringMap)
HX_DECLARE_CLASS1(maps,Checkpoint)
HX_DECLARE_CLASS1(maps,MapObject)
HX_DECLARE_CLASS2(openfl,display,Bitmap)
HX_DECLARE_CLASS2(openfl,display,DisplayObject)
HX_DECLARE_CLASS2(openfl,display,DisplayObjectContainer)
HX_DECLARE_CLASS2(openfl,display,IBitmapDrawable)
HX_DECLARE_CLASS2(openfl,display,InteractiveObject)
HX_DECLARE_CLASS2(openfl,display,Sprite)
HX_DECLARE_CLASS2(openfl,events,EventDispatcher)
HX_DECLARE_CLASS2(openfl,events,IEventDispatcher)
namespace maps{


class HXCPP_CLASS_ATTRIBUTES  Checkpoint_obj : public ::maps::MapObject_obj{
	public:
		typedef ::maps::MapObject_obj super;
		typedef Checkpoint_obj OBJ_;
		Checkpoint_obj();
		Void __construct(bool active,::openfl::display::Bitmap defaultBitmap);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="maps.Checkpoint")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< Checkpoint_obj > __new(bool active,::openfl::display::Bitmap defaultBitmap);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Checkpoint_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("Checkpoint","\xa8","\x4a","\x03","\x3a"); }

		bool activated;
		::haxe::ds::StringMap animations;
		::actors::Animation currentAnimation;
		::openfl::display::Bitmap checkpointBmp;
		virtual Void removeBmp( );
		Dynamic removeBmp_dyn();

		virtual Void addAnimationBmp( ::actors::Animation animation);
		Dynamic addAnimationBmp_dyn();

		virtual ::openfl::display::Bitmap getAnimationBmp( ::actors::Animation animation,::openfl::display::Bitmap bitmap);
		Dynamic getAnimationBmp_dyn();

		virtual Void setActive( );
		Dynamic setActive_dyn();

		virtual Void setInactive( );
		Dynamic setInactive_dyn();

		virtual bool getActive( );
		Dynamic getActive_dyn();

		virtual ::actors::Animation getAnimation( ::String title);
		Dynamic getAnimation_dyn();

};

} // end namespace maps

#endif /* INCLUDED_maps_Checkpoint */ 
