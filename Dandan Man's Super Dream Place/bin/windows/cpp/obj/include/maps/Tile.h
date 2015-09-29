#ifndef INCLUDED_maps_Tile
#define INCLUDED_maps_Tile

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_maps_MapObject
#include <maps/MapObject.h>
#endif
HX_DECLARE_CLASS1(actors,Player)
HX_DECLARE_CLASS1(maps,MapObject)
HX_DECLARE_CLASS1(maps,Tile)
HX_DECLARE_CLASS2(openfl,display,Bitmap)
HX_DECLARE_CLASS2(openfl,display,DisplayObject)
HX_DECLARE_CLASS2(openfl,display,DisplayObjectContainer)
HX_DECLARE_CLASS2(openfl,display,IBitmapDrawable)
HX_DECLARE_CLASS2(openfl,display,InteractiveObject)
HX_DECLARE_CLASS2(openfl,display,Sprite)
HX_DECLARE_CLASS2(openfl,events,EventDispatcher)
HX_DECLARE_CLASS2(openfl,events,IEventDispatcher)
namespace maps{


class HXCPP_CLASS_ATTRIBUTES  Tile_obj : public ::maps::MapObject_obj{
	public:
		typedef ::maps::MapObject_obj super;
		typedef Tile_obj OBJ_;
		Tile_obj();
		Void __construct(::openfl::display::Bitmap defaultBmp,bool collidable,Array< int > fatalDirections);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="maps.Tile")
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
		virtual bool checkCollision( ::maps::MapObject otherObject);

		virtual bool checkFatal( ::actors::Player player,bool xAxis);
		Dynamic checkFatal_dyn();

		virtual int getLeftDistance( ::maps::MapObject otherObject);
		Dynamic getLeftDistance_dyn();

		virtual int getRightDistance( ::maps::MapObject otherObject);
		Dynamic getRightDistance_dyn();

		virtual int getUpDistance( ::maps::MapObject otherObject);
		Dynamic getUpDistance_dyn();

		virtual int getDownDistance( ::maps::MapObject otherObject);
		Dynamic getDownDistance_dyn();

};

} // end namespace maps

#endif /* INCLUDED_maps_Tile */ 
