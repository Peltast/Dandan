#ifndef INCLUDED_lime__backend_native_NativeApplication
#define INCLUDED_lime__backend_native_NativeApplication

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS0(List)
HX_DECLARE_CLASS1(haxe,IMap)
HX_DECLARE_CLASS2(haxe,ds,IntMap)
HX_DECLARE_CLASS3(lime,_backend,native,NativeApplication)
HX_DECLARE_CLASS4(lime,_backend,native,_NativeApplication,ApplicationEventInfo)
HX_DECLARE_CLASS4(lime,_backend,native,_NativeApplication,GamepadEventInfo)
HX_DECLARE_CLASS4(lime,_backend,native,_NativeApplication,KeyEventInfo)
HX_DECLARE_CLASS4(lime,_backend,native,_NativeApplication,MouseEventInfo)
HX_DECLARE_CLASS4(lime,_backend,native,_NativeApplication,RenderEventInfo)
HX_DECLARE_CLASS4(lime,_backend,native,_NativeApplication,TextEventInfo)
HX_DECLARE_CLASS4(lime,_backend,native,_NativeApplication,TouchEventInfo)
HX_DECLARE_CLASS4(lime,_backend,native,_NativeApplication,WindowEventInfo)
HX_DECLARE_CLASS2(lime,app,Application)
HX_DECLARE_CLASS2(lime,app,IModule)
HX_DECLARE_CLASS2(lime,app,Module)
namespace lime{
namespace _backend{
namespace native{


class HXCPP_CLASS_ATTRIBUTES  NativeApplication_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef NativeApplication_obj OBJ_;
		NativeApplication_obj();
		Void __construct(::lime::app::Application parent);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="lime._backend.native.NativeApplication")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< NativeApplication_obj > __new(::lime::app::Application parent);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~NativeApplication_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("NativeApplication","\xd9","\x82","\x56","\xe0"); }

		static void __boot();
		::lime::_backend::native::_NativeApplication::ApplicationEventInfo applicationEventInfo;
		::haxe::ds::IntMap currentTouches;
		::lime::_backend::native::_NativeApplication::GamepadEventInfo gamepadEventInfo;
		::lime::_backend::native::_NativeApplication::KeyEventInfo keyEventInfo;
		::lime::_backend::native::_NativeApplication::MouseEventInfo mouseEventInfo;
		::lime::_backend::native::_NativeApplication::RenderEventInfo renderEventInfo;
		::lime::_backend::native::_NativeApplication::TextEventInfo textEventInfo;
		::lime::_backend::native::_NativeApplication::TouchEventInfo touchEventInfo;
		::List unusedTouchesPool;
		::lime::_backend::native::_NativeApplication::WindowEventInfo windowEventInfo;
		Dynamic handle;
		Float frameRate;
		::lime::app::Application parent;
		virtual Void create( Dynamic config);
		Dynamic create_dyn();

		virtual int exec( );
		Dynamic exec_dyn();

		virtual Void exit( );
		Dynamic exit_dyn();

		virtual Float getFrameRate( );
		Dynamic getFrameRate_dyn();

		virtual Void handleApplicationEvent( );
		Dynamic handleApplicationEvent_dyn();

		virtual Void handleGamepadEvent( );
		Dynamic handleGamepadEvent_dyn();

		virtual Void handleKeyEvent( );
		Dynamic handleKeyEvent_dyn();

		virtual Void handleMouseEvent( );
		Dynamic handleMouseEvent_dyn();

		virtual Void handleRenderEvent( );
		Dynamic handleRenderEvent_dyn();

		virtual Void handleTextEvent( );
		Dynamic handleTextEvent_dyn();

		virtual Void handleTouchEvent( );
		Dynamic handleTouchEvent_dyn();

		virtual Void handleWindowEvent( );
		Dynamic handleWindowEvent_dyn();

		virtual Float setFrameRate( Float value);
		Dynamic setFrameRate_dyn();

		virtual Void updateTimer( );
		Dynamic updateTimer_dyn();

		static Dynamic lime_application_create;
		static Dynamic &lime_application_create_dyn() { return lime_application_create;}
		static Dynamic lime_application_event_manager_register;
		static Dynamic &lime_application_event_manager_register_dyn() { return lime_application_event_manager_register;}
		static Dynamic lime_application_exec;
		static Dynamic &lime_application_exec_dyn() { return lime_application_exec;}
		static Dynamic lime_application_init;
		static Dynamic lime_application_set_frame_rate;
		static Dynamic &lime_application_set_frame_rate_dyn() { return lime_application_set_frame_rate;}
		static Dynamic lime_application_update;
		static Dynamic lime_application_quit;
		static Dynamic lime_gamepad_event_manager_register;
		static Dynamic &lime_gamepad_event_manager_register_dyn() { return lime_gamepad_event_manager_register;}
		static Dynamic lime_key_event_manager_register;
		static Dynamic &lime_key_event_manager_register_dyn() { return lime_key_event_manager_register;}
		static Dynamic lime_mouse_event_manager_register;
		static Dynamic &lime_mouse_event_manager_register_dyn() { return lime_mouse_event_manager_register;}
		static Dynamic lime_render_event_manager_register;
		static Dynamic &lime_render_event_manager_register_dyn() { return lime_render_event_manager_register;}
		static Dynamic lime_text_event_manager_register;
		static Dynamic &lime_text_event_manager_register_dyn() { return lime_text_event_manager_register;}
		static Dynamic lime_touch_event_manager_register;
		static Dynamic &lime_touch_event_manager_register_dyn() { return lime_touch_event_manager_register;}
		static Dynamic lime_window_event_manager_register;
		static Dynamic &lime_window_event_manager_register_dyn() { return lime_window_event_manager_register;}
};

} // end namespace lime
} // end namespace _backend
} // end namespace native

#endif /* INCLUDED_lime__backend_native_NativeApplication */ 
