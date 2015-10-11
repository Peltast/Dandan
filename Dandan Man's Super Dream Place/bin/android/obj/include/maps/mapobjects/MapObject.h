#ifndef INCLUDED_maps_mapobjects_MapObject
#define INCLUDED_maps_mapobjects_MapObject

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_openfl_display_Sprite
#include <openfl/display/Sprite.h>
#endif
HX_DECLARE_CLASS2(maps,mapobjects,MapObject)
HX_DECLARE_CLASS2(openfl,display,Bitmap)
HX_DECLARE_CLASS2(openfl,display,DisplayObject)
HX_DECLARE_CLASS2(openfl,display,DisplayObjectContainer)
HX_DECLARE_CLASS2(openfl,display,IBitmapDrawable)
HX_DECLARE_CLASS2(openfl,display,InteractiveObject)
HX_DECLARE_CLASS2(openfl,display,Sprite)
HX_DECLARE_CLASS2(openfl,events,EventDispatcher)
HX_DECLARE_CLASS2(openfl,events,IEventDispatcher)
HX_DECLARE_CLASS2(openfl,geom,Point)
HX_DECLARE_CLASS2(openfl,geom,Rectangle)
namespace maps{
namespace mapobjects{


class HXCPP_CLASS_ATTRIBUTES  MapObject_obj : public ::openfl::display::Sprite_obj{
	public:
		typedef ::openfl::display::Sprite_obj super;
		typedef MapObject_obj OBJ_;
		MapObject_obj();
		Void __construct(::maps::mapobjects::MapObject implementation,::openfl::display::Bitmap defaultBmp,hx::Null< bool >  __o_passable);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="maps.mapobjects.MapObject")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< MapObject_obj > __new(::maps::mapobjects::MapObject implementation,::openfl::display::Bitmap defaultBmp,hx::Null< bool >  __o_passable);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~MapObject_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("MapObject","\x5b","\xba","\xf1","\x99"); }

		::openfl::geom::Rectangle collisionBounds;
		::openfl::geom::Rectangle tempObjectBounds;
		::openfl::geom::Rectangle tempCollideBounds;
		::openfl::geom::Point thisCenter;
		::openfl::geom::Point otherCenter;
		bool passable;
		::openfl::display::Bitmap defaultBitmap;
		virtual bool getPassable( );
		Dynamic getPassable_dyn();

		virtual bool checkCollision( ::maps::mapobjects::MapObject otherObject,hx::Null< bool >  checkPassable);
		Dynamic checkCollision_dyn();

		virtual ::openfl::geom::Rectangle getCollisionBounds( );
		Dynamic getCollisionBounds_dyn();

		virtual int getCollisionDistance( ::maps::mapobjects::MapObject otherObject,bool xAxis);
		Dynamic getCollisionDistance_dyn();

};

} // end namespace maps
} // end namespace mapobjects

#endif /* INCLUDED_maps_mapobjects_MapObject */ 