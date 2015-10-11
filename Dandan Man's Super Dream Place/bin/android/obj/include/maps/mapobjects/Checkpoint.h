#ifndef INCLUDED_maps_mapobjects_Checkpoint
#define INCLUDED_maps_mapobjects_Checkpoint

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_actors_Actor
#include <actors/Actor.h>
#endif
HX_DECLARE_CLASS1(actors,Actor)
HX_DECLARE_CLASS2(maps,mapobjects,Checkpoint)
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


class HXCPP_CLASS_ATTRIBUTES  Checkpoint_obj : public ::actors::Actor_obj{
	public:
		typedef ::actors::Actor_obj super;
		typedef Checkpoint_obj OBJ_;
		Checkpoint_obj();
		Void __construct(bool active,::openfl::display::Bitmap defaultBitmap);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="maps.mapobjects.Checkpoint")
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
		::String __ToString() const { return HX_HCSTRING("Checkpoint","\xa8","\x4a","\x03","\x3a"); }

		bool activated;
		virtual Void setActive( );
		Dynamic setActive_dyn();

		virtual Void setInactive( );
		Dynamic setInactive_dyn();

		virtual bool getActive( );
		Dynamic getActive_dyn();

};

} // end namespace maps
} // end namespace mapobjects

#endif /* INCLUDED_maps_mapobjects_Checkpoint */ 
