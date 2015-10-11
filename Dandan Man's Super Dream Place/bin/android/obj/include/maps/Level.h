#ifndef INCLUDED_maps_Level
#define INCLUDED_maps_Level

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_openfl_display_Sprite
#include <openfl/display/Sprite.h>
#endif
HX_DECLARE_CLASS1(actors,Actor)
HX_DECLARE_CLASS1(actors,Player)
HX_DECLARE_CLASS1(haxe,IMap)
HX_DECLARE_CLASS2(haxe,ds,StringMap)
HX_DECLARE_CLASS1(maps,AreaMap)
HX_DECLARE_CLASS1(maps,Level)
HX_DECLARE_CLASS2(maps,mapobjects,MapObject)
HX_DECLARE_CLASS2(maps,mapobjects,Portal)
HX_DECLARE_CLASS2(openfl,display,DisplayObject)
HX_DECLARE_CLASS2(openfl,display,DisplayObjectContainer)
HX_DECLARE_CLASS2(openfl,display,IBitmapDrawable)
HX_DECLARE_CLASS2(openfl,display,InteractiveObject)
HX_DECLARE_CLASS2(openfl,display,Sprite)
HX_DECLARE_CLASS2(openfl,events,EventDispatcher)
HX_DECLARE_CLASS2(openfl,events,IEventDispatcher)
namespace maps{


class HXCPP_CLASS_ATTRIBUTES  Level_obj : public ::openfl::display::Sprite_obj{
	public:
		typedef ::openfl::display::Sprite_obj super;
		typedef Level_obj OBJ_;
		Level_obj();
		Void __construct(int level,Array< int > stages,::String startMap);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="maps.Level")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< Level_obj > __new(int level,Array< int > stages,::String startMap);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Level_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("Level","\x64","\x85","\x90","\x05"); }

		::haxe::ds::StringMap mapList;
		::String startMap;
		::maps::AreaMap currentMap;
		virtual ::haxe::ds::StringMap loadMaps( int level,Array< int > stages);
		Dynamic loadMaps_dyn();

		virtual Void resetLevel( );
		Dynamic resetLevel_dyn();

		virtual ::maps::AreaMap getMap( ::String name);
		Dynamic getMap_dyn();

		virtual ::String getMapLabel( ::maps::AreaMap map);
		Dynamic getMapLabel_dyn();

		virtual ::maps::AreaMap getCurrentMap( );
		Dynamic getCurrentMap_dyn();

		virtual Void setMap( ::maps::AreaMap newMap,::actors::Player player,::maps::mapobjects::Portal origin);
		Dynamic setMap_dyn();

		virtual Void initiateLevel( ::actors::Player player);
		Dynamic initiateLevel_dyn();

};

} // end namespace maps

#endif /* INCLUDED_maps_Level */ 
