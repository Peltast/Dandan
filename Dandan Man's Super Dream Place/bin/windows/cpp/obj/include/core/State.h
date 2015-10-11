#ifndef INCLUDED_core_State
#define INCLUDED_core_State

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_openfl_display_Sprite
#include <openfl/display/Sprite.h>
#endif
HX_DECLARE_CLASS1(core,State)
HX_DECLARE_CLASS2(openfl,display,DisplayObject)
HX_DECLARE_CLASS2(openfl,display,DisplayObjectContainer)
HX_DECLARE_CLASS2(openfl,display,IBitmapDrawable)
HX_DECLARE_CLASS2(openfl,display,InteractiveObject)
HX_DECLARE_CLASS2(openfl,display,Sprite)
HX_DECLARE_CLASS2(openfl,events,EventDispatcher)
HX_DECLARE_CLASS2(openfl,events,IEventDispatcher)
HX_DECLARE_CLASS1(ui,OverlayStack)
namespace core{


class HXCPP_CLASS_ATTRIBUTES  State_obj : public ::openfl::display::Sprite_obj{
	public:
		typedef ::openfl::display::Sprite_obj super;
		typedef State_obj OBJ_;
		State_obj();
		Void __construct(::core::State state);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="core.State")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< State_obj > __new(::core::State state);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~State_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("State","\xf1","\xe5","\x38","\x17"); }

		::String stateName;
		::ui::OverlayStack overlayStack;
		virtual Void redrawState( );
		Dynamic redrawState_dyn();

		virtual Void deactivateState( );
		Dynamic deactivateState_dyn();

		virtual Void activateState( );
		Dynamic activateState_dyn();

		virtual Void drawState( );
		Dynamic drawState_dyn();

};

} // end namespace core

#endif /* INCLUDED_core_State */ 
