#ifndef INCLUDED_ui_OverlayItem
#define INCLUDED_ui_OverlayItem

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
HX_DECLARE_CLASS2(openfl,display,Sprite)
HX_DECLARE_CLASS2(openfl,events,EventDispatcher)
HX_DECLARE_CLASS2(openfl,events,IEventDispatcher)
HX_DECLARE_CLASS1(ui,Overlay)
HX_DECLARE_CLASS1(ui,OverlayItem)
namespace ui{


class HXCPP_CLASS_ATTRIBUTES  OverlayItem_obj : public ::openfl::display::Sprite_obj{
	public:
		typedef ::openfl::display::Sprite_obj super;
		typedef OverlayItem_obj OBJ_;
		OverlayItem_obj();
		Void __construct(::ui::OverlayItem overlayItem,bool exclusiveActivity);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="ui.OverlayItem")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< OverlayItem_obj > __new(::ui::OverlayItem overlayItem,bool exclusiveActivity);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~OverlayItem_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("OverlayItem","\xa3","\xd4","\x6c","\x48"); }

		::ui::Overlay parentOverlay;
		bool active;
		bool selected;
		bool exclusiveActivity;
		virtual bool itemHitTest( Float x,Float y);
		Dynamic itemHitTest_dyn();

		virtual Void setOverlay( ::ui::Overlay parent);
		Dynamic setOverlay_dyn();

		virtual Void resetOverlayItem( );
		Dynamic resetOverlayItem_dyn();

		virtual Void activateOverlayItem( );
		Dynamic activateOverlayItem_dyn();

		virtual Void updateOverlayItem( );
		Dynamic updateOverlayItem_dyn();

		virtual Void deactivateOverlayItem( );
		Dynamic deactivateOverlayItem_dyn();

		virtual bool isActive( );
		Dynamic isActive_dyn();

		virtual bool isSelected( );
		Dynamic isSelected_dyn();

		virtual bool requiresExclusiveActivity( );
		Dynamic requiresExclusiveActivity_dyn();

};

} // end namespace ui

#endif /* INCLUDED_ui_OverlayItem */ 
