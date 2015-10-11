#ifndef INCLUDED_maps_mapobjects_Tile
#define INCLUDED_maps_mapobjects_Tile

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_maps_mapobjects_MapObject
#include <maps/mapobjects/MapObject.h>
#endif
HX_DECLARE_CLASS1(actors,Actor)
HX_DECLARE_CLASS2(maps,mapobjects,MapObject)
HX_DECLARE_CLASS2(maps,mapobjects,Tile)
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


class HXCPP_CLASS_ATTRIBUTES  Tile_obj : public ::maps::mapobjects::MapObject_obj{
	public:
		typedef ::maps::mapobjects::MapObject_obj super;
		typedef Tile_obj OBJ_;
		Tile_obj();
		Void __construct(::openfl::display::Bitmap defaultBmp,bool collidable,Array< int > fatalDirections);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="maps.mapobjects.Tile")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< Tile_obj > __new(::openfl::display::Bitmap defaultBmp,bool collidable,Array< int > fatalDirections);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Tile_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("Tile","\x4e","\xf7","\xd5","\x37"); }

		bool tileCollidable;
		Array< int > tileFatalDirections;
		virtual bool checkCollision( ::maps::mapobjects::MapObject otherObject,hx::Null< bool >  checkPassable);

		virtual bool checkFatal( ::actors::Actor actor,bool xAxis);
		Dynamic checkFatal_dyn();

		virtual int getLeftDistance( ::maps::mapobjects::MapObject otherObject);
		Dynamic getLeftDistance_dyn();

		virtual int getRightDistance( ::maps::mapobjects::MapObject otherObject);
		Dynamic getRightDistance_dyn();

		virtual int getUpDistance( ::maps::mapobjects::MapObject otherObject);
		Dynamic getUpDistance_dyn();

		virtual int getDownDistance( ::maps::mapobjects::MapObject otherObject);
		Dynamic getDownDistance_dyn();

};

} // end namespace maps
} // end namespace mapobjects

#endif /* INCLUDED_maps_mapobjects_Tile */ 
