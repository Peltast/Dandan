#ifndef INCLUDED_maps_AreaMap
#define INCLUDED_maps_AreaMap

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_openfl_display_Sprite
#include <openfl/display/Sprite.h>
#endif
HX_DECLARE_CLASS1(actors,Player)
HX_DECLARE_CLASS2(haxe,io,Bytes)
HX_DECLARE_CLASS2(lime,utils,ByteArray)
HX_DECLARE_CLASS2(lime,utils,IDataInput)
HX_DECLARE_CLASS2(lime,utils,IMemoryRange)
HX_DECLARE_CLASS1(maps,AreaMap)
HX_DECLARE_CLASS1(maps,Checkpoint)
HX_DECLARE_CLASS1(maps,MapObject)
HX_DECLARE_CLASS1(maps,Portal)
HX_DECLARE_CLASS2(openfl,display,DisplayObject)
HX_DECLARE_CLASS2(openfl,display,DisplayObjectContainer)
HX_DECLARE_CLASS2(openfl,display,IBitmapDrawable)
HX_DECLARE_CLASS2(openfl,display,InteractiveObject)
HX_DECLARE_CLASS2(openfl,display,Shape)
HX_DECLARE_CLASS2(openfl,display,Sprite)
HX_DECLARE_CLASS2(openfl,events,EventDispatcher)
HX_DECLARE_CLASS2(openfl,events,IEventDispatcher)
namespace maps{


class HXCPP_CLASS_ATTRIBUTES  AreaMap_obj : public ::openfl::display::Sprite_obj{
	public:
		typedef ::openfl::display::Sprite_obj super;
		typedef AreaMap_obj OBJ_;
		AreaMap_obj();
		Void __construct(::lime::utils::ByteArray mapFile);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="maps.AreaMap")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< AreaMap_obj > __new(::lime::utils::ByteArray mapFile);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~AreaMap_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("AreaMap","\xef","\x54","\x73","\x8b"); }

		Array< ::Dynamic > objectList;
		::actors::Player player;
		::maps::Checkpoint startPoint;
		::maps::Checkpoint currentCheckpoint;
		Array< ::Dynamic > checkPoints;
		::maps::Portal endPoint;
		::maps::AreaMap nextMap;
		::openfl::display::Shape background;
		int mapWidth;
		int mapHeight;
		int tileSize;
		virtual Void parseMapDimensions( Array< ::String > fileArray);
		Dynamic parseMapDimensions_dyn();

		virtual Void addMapBG( int color);
		Dynamic addMapBG_dyn();

		virtual Void initiateObjectList( int width,int height);
		Dynamic initiateObjectList_dyn();

		virtual Void readTiles( Array< ::String > fileArray);
		Dynamic readTiles_dyn();

		virtual Void createObject( int index,int x,int y);
		Dynamic createObject_dyn();

		virtual Void createTile( int index,int x,int y);
		Dynamic createTile_dyn();

		virtual Void createCheckpoint( int index,int x,int y);
		Dynamic createCheckpoint_dyn();

		virtual Void createStartpoint( int index,int x,int y);
		Dynamic createStartpoint_dyn();

		virtual Void createEndpoint( int index,int x,int y);
		Dynamic createEndpoint_dyn();

		virtual Void setNextMap( ::maps::AreaMap map);
		Dynamic setNextMap_dyn();

		virtual Void resetMap( );
		Dynamic resetMap_dyn();

		virtual Void updateMap( );
		Dynamic updateMap_dyn();

		virtual Void addPlayer( ::actors::Player player);
		Dynamic addPlayer_dyn();

		virtual Array< ::Dynamic > checkCollisions( ::maps::MapObject object);
		Dynamic checkCollisions_dyn();

		virtual Void updateCheckpoints( ::actors::Player player);
		Dynamic updateCheckpoints_dyn();

		virtual Void updateEndPortal( ::actors::Player player);
		Dynamic updateEndPortal_dyn();

		virtual bool checkObjectCollision( ::maps::MapObject object,int y,int x);
		Dynamic checkObjectCollision_dyn();

		virtual ::maps::Checkpoint getCurrentCheckpoint( );
		Dynamic getCurrentCheckpoint_dyn();

		virtual Void changeCheckpoint( ::maps::Checkpoint newCheckpoint);
		Dynamic changeCheckpoint_dyn();

};

} // end namespace maps

#endif /* INCLUDED_maps_AreaMap */ 
