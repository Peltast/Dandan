#ifndef INCLUDED_ui_Overlay
#define INCLUDED_ui_Overlay

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_openfl_display_Sprite
#include <openfl/display/Sprite.h>
#endif
HX_DECLARE_CLASS2(openfl,display,DisplayObject)
HX_DECLARE_CLASS2(openfl,display,DisplayObjectContainer)
HX_DECLARE_CLASS2(openfl,display,IBitmapDrawable)
HX_DECLARE_CLASS2(openfl,display,InteractiveObject)
HX_DECLARE_CLASS2(openfl,display,Shape)
HX_DECLARE_CLASS2(openfl,display,Sprite)
HX_DECLARE_CLASS2(openfl,events,EventDispatcher)
HX_DECLARE_CLASS2(openfl,events,IEventDispatcher)
HX_DECLARE_CLASS1(ui,Overlay)
HX_DECLARE_CLASS1(ui,OverlayItem)
namespace ui{


class HXCPP_CLASS_ATTRIBUTES  Overlay_obj : public ::openfl::display::Sprite_obj{
	public:
		typedef ::openfl::display::Sprite_obj super;
		typedef Overlay_obj OBJ_;
		Overlay_obj();
		Void __construct(hx::Null< Float >  __o_bgAlpha);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="ui.Overlay")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< Overlay_obj > __new(hx::Null< Float >  __o_bgAlpha);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Overlay_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("Overlay","\x70","\x6b","\x61","\x76"); }

		::openfl::display::Shape background;
		Float bgAlpha;
		::openfl::display::Sprite overlaySprite;
		bool active;
		virtual Void redrawOverlay( );
		Dynamic redrawOverlay_dyn();

		virtual bool isActive( );
		Dynamic isActive_dyn();

		virtual Void addToOverlay( ::ui::OverlayItem overlayItem);
		Dynamic addToOverlay_dyn();

		virtual Void removeFromOverlay( ::ui::OverlayItem overlayItem);
		Dynamic removeFromOverlay_dyn();

		virtual Void addOverlayToClient( ::openfl::display::Sprite client);
		Dynamic addOverlayToClient_dyn();

		virtual Void removeOverlayFromClient( ::openfl::display::Sprite client);
		Dynamic removeOverlayFromClient_dyn();

		virtual Void activateOverlay( );
		Dynamic activateOverlay_dyn();

		virtual Void updateOverlay( );
		Dynamic updateOverlay_dyn();

		virtual Void deactivateOverlay( );
		Dynamic deactivateOverlay_dyn();

		virtual Void resetItems( ::ui::OverlayItem item);
		Dynamic resetItems_dyn();

		virtual int getX( );
		Dynamic getX_dyn();

		virtual int getY( );
		Dynamic getY_dyn();

};

} // end namespace ui

#endif /* INCLUDED_ui_Overlay */ 
