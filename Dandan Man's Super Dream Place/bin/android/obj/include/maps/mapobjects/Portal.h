#ifndef INCLUDED_maps_mapobjects_Portal
#define INCLUDED_maps_mapobjects_Portal

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_maps_mapobjects_MapObject
#include <maps/mapobjects/MapObject.h>
#endif
HX_DECLARE_CLASS2(maps,mapobjects,MapObject)
HX_DECLARE_CLASS2(maps,mapobjects,Portal)
HX_DECLARE_CLASS2(openfl,display,Bitmap)
HX_DECLARE_CLASS2(openfl,display,DisplayObject)
HX_DECLARE_CLASS2(openfl,display,DisplayObjectContainer)
HX_DECLARE_CLASS2(openfl,display,IBitmapDrawable)
HX_DECLARE_CLASS2(openfl,display,InteractiveObject)
HX_DECLARE_CLASS2(openfl,display,Sprite)
HX_DECLARE_CLASS2(openfl,events,EventDispatcher)
HX_DECLARE_CLASS2(openfl,events,IEventDispatcher)
namespace maps{
namespace mapobjects{


class HXCPP_CLASS_ATTRIBUTES  Portal_obj : public ::maps::mapobjects::MapObject_obj{
	public:
		typedef ::maps::mapobjects::MapObject_obj super;
		typedef Portal_obj OBJ_;
		Portal_obj();
		Void __construct(::openfl::display::Bitmap defaultBmp,::String endMap);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="maps.mapobjects.Portal")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< Portal_obj > __new(::openfl::display::Bitmap defaultBmp,::String endMap);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Portal_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("Portal","\xcc","\xee","\xb9","\x31"); }

		::String endMap;
		virtual ::String getEndMap( );
		Dynamic getEndMap_dyn();

};

} // end namespace maps
} // end namespace mapobjects

#endif /* INCLUDED_maps_mapobjects_Portal */ 
