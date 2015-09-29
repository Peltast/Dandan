#ifndef INCLUDED_maps_Portal
#define INCLUDED_maps_Portal

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_maps_MapObject
#include <maps/MapObject.h>
#endif
HX_DECLARE_CLASS1(maps,MapObject)
HX_DECLARE_CLASS1(maps,Portal)
HX_DECLARE_CLASS2(openfl,display,Bitmap)
HX_DECLARE_CLASS2(openfl,display,DisplayObject)
HX_DECLARE_CLASS2(openfl,display,DisplayObjectContainer)
HX_DECLARE_CLASS2(openfl,display,IBitmapDrawable)
HX_DECLARE_CLASS2(openfl,display,InteractiveObject)
HX_DECLARE_CLASS2(openfl,display,Sprite)
HX_DECLARE_CLASS2(openfl,events,EventDispatcher)
HX_DECLARE_CLASS2(openfl,events,IEventDispatcher)
namespace maps{


class HXCPP_CLASS_ATTRIBUTES  Portal_obj : public ::maps::MapObject_obj{
	public:
		typedef ::maps::MapObject_obj super;
		typedef Portal_obj OBJ_;
		Portal_obj();
		Void __construct(::openfl::display::Bitmap defaultBmp);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="maps.Portal")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< Portal_obj > __new(::openfl::display::Bitmap defaultBmp);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Portal_obj();

		HX_DO_RTTI_ALL;
		static void __register();
		::String __ToString() const { return HX_HCSTRING("Portal","\xcc","\xee","\xb9","\x31"); }

};

} // end namespace maps

#endif /* INCLUDED_maps_Portal */ 
