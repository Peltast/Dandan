#ifndef INCLUDED_ui_OverlayStack
#define INCLUDED_ui_OverlayStack

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_openfl_display_Sprite
#include <openfl/display/Sprite.h>
#endif
HX_DECLARE_CLASS1(core,Stack)
HX_DECLARE_CLASS2(openfl,display,DisplayObject)
HX_DECLARE_CLASS2(openfl,display,DisplayObjectContainer)
HX_DECLARE_CLASS2(openfl,display,IBitmapDrawable)
HX_DECLARE_CLASS2(openfl,display,InteractiveObject)
HX_DECLARE_CLASS2(openfl,display,Sprite)
HX_DECLARE_CLASS2(openfl,events,EventDispatcher)
HX_DECLARE_CLASS2(openfl,events,IEventDispatcher)
HX_DECLARE_CLASS1(ui,Overlay)
HX_DECLARE_CLASS1(ui,OverlayStack)
namespace ui{


class HXCPP_CLASS_ATTRIBUTES  OverlayStack_obj : public ::openfl::display::Sprite_obj{
	public:
		typedef ::openfl::display::Sprite_obj super;
		typedef OverlayStack_obj OBJ_;
		OverlayStack_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="ui.OverlayStack")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< OverlayStack_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~OverlayStack_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("OverlayStack","\xb8","\xf5","\xcb","\xd8"); }

		::core::Stack overlayStack;
		virtual Void deactivateStack( );
		Dynamic deactivateStack_dyn();

		virtual Void activateStack( );
		Dynamic activateStack_dyn();

		virtual Void redrawStack( );
		Dynamic redrawStack_dyn();

		virtual bool isEmpty( );
		Dynamic isEmpty_dyn();

		virtual Void pushOverlay( ::ui::Overlay overlay);
		Dynamic pushOverlay_dyn();

		virtual ::ui::Overlay peekStack( );
		Dynamic peekStack_dyn();

		virtual ::ui::Overlay popStack( );
		Dynamic popStack_dyn();

		virtual int numOfOverlays( );
		Dynamic numOfOverlays_dyn();

		virtual Void emptyStack( );
		Dynamic emptyStack_dyn();

		virtual ::ui::Overlay getTopOverlay( );
		Dynamic getTopOverlay_dyn();

};

} // end namespace ui

#endif /* INCLUDED_ui_OverlayStack */ 
