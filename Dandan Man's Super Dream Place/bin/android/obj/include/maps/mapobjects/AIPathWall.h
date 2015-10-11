#ifndef INCLUDED_maps_mapobjects_AIPathWall
#define INCLUDED_maps_mapobjects_AIPathWall

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_maps_mapobjects_MapObject
#include <maps/mapobjects/MapObject.h>
#endif
HX_DECLARE_CLASS2(maps,mapobjects,AIPathWall)
HX_DECLARE_CLASS2(maps,mapobjects,MapObject)
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


class HXCPP_CLASS_ATTRIBUTES  AIPathWall_obj : public ::maps::mapobjects::MapObject_obj{
	public:
		typedef ::maps::mapobjects::MapObject_obj super;
		typedef AIPathWall_obj OBJ_;
		AIPathWall_obj();
		Void __construct(::openfl::display::Bitmap defaultBmp);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="maps.mapobjects.AIPathWall")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< AIPathWall_obj > __new(::openfl::display::Bitmap defaultBmp);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~AIPathWall_obj();

		HX_DO_RTTI_ALL;
		static void __register();
		::String __ToString() const { return HX_HCSTRING("AIPathWall","\x57","\xc2","\x02","\x18"); }

};

} // end namespace maps
} // end namespace mapobjects

#endif /* INCLUDED_maps_mapobjects_AIPathWall */ 
