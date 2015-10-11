#ifndef INCLUDED_lime_ui_Window
#define INCLUDED_lime_ui_Window

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS3(lime,_backend,native,NativeWindow)
HX_DECLARE_CLASS2(lime,app,Application)
HX_DECLARE_CLASS2(lime,app,Event)
HX_DECLARE_CLASS2(lime,app,IModule)
HX_DECLARE_CLASS2(lime,app,Module)
HX_DECLARE_CLASS2(lime,graphics,Image)
HX_DECLARE_CLASS2(lime,graphics,Renderer)
HX_DECLARE_CLASS2(lime,_system,Display)
HX_DECLARE_CLASS2(lime,ui,Window)
HX_DECLARE_CLASS2(openfl,display,DisplayObject)
HX_DECLARE_CLASS2(openfl,display,DisplayObjectContainer)
HX_DECLARE_CLASS2(openfl,display,IBitmapDrawable)
HX_DECLARE_CLASS2(openfl,display,InteractiveObject)
HX_DECLARE_CLASS2(openfl,display,Stage)
HX_DECLARE_CLASS2(openfl,events,EventDispatcher)
HX_DECLARE_CLASS2(openfl,events,IEventDispatcher)
namespace lime{
namespace ui{


class HXCPP_CLASS_ATTRIBUTES  Window_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef Window_obj OBJ_;
		Window_obj();
		Void __construct(Dynamic config);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="lime.ui.Window")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< Window_obj > __new(Dynamic config);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Window_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("Window","\x10","\x08","\x21","\x87"); }

		::lime::app::Application application;
		Dynamic config;
		::lime::_system::Display display;
		int id;
		::lime::app::Event onActivate;
		::lime::app::Event onClose;
		::lime::app::Event onCreate;
		::lime::app::Event onDeactivate;
		::lime::app::Event onEnter;
		::lime::app::Event onFocusIn;
		::lime::app::Event onFocusOut;
		::lime::app::Event onFullscreen;
		::lime::app::Event onKeyDown;
		::lime::app::Event onKeyUp;
		::lime::app::Event onLeave;
		::lime::app::Event onMinimize;
		::lime::app::Event onMouseDown;
		::lime::app::Event onMouseMove;
		::lime::app::Event onMouseMoveRelative;
		::lime::app::Event onMouseUp;
		::lime::app::Event onMouseWheel;
		::lime::app::Event onMove;
		::lime::app::Event onResize;
		::lime::app::Event onRestore;
		::lime::app::Event onTextEdit;
		::lime::app::Event onTextInput;
		::lime::graphics::Renderer renderer;
		::openfl::display::Stage stage;
		::lime::_backend::native::NativeWindow backend;
		bool __fullscreen;
		int __height;
		bool __minimized;
		::String __title;
		int __width;
		int __x;
		int __y;
		virtual Void close( );
		Dynamic close_dyn();

		virtual Void create( ::lime::app::Application application);
		Dynamic create_dyn();

		virtual Void move( int x,int y);
		Dynamic move_dyn();

		virtual Void resize( int width,int height);
		Dynamic resize_dyn();

		virtual Void setIcon( ::lime::graphics::Image image);
		Dynamic setIcon_dyn();

		virtual ::String toString( );
		Dynamic toString_dyn();

		virtual ::lime::_system::Display get_display( );
		Dynamic get_display_dyn();

		virtual bool get_enableTextEvents( );
		Dynamic get_enableTextEvents_dyn();

		virtual bool set_enableTextEvents( bool value);
		Dynamic set_enableTextEvents_dyn();

		virtual bool get_fullscreen( );
		Dynamic get_fullscreen_dyn();

		virtual bool set_fullscreen( bool value);
		Dynamic set_fullscreen_dyn();

		virtual int get_height( );
		Dynamic get_height_dyn();

		virtual int set_height( int value);
		Dynamic set_height_dyn();

		virtual bool get_minimized( );
		Dynamic get_minimized_dyn();

		virtual bool set_minimized( bool value);
		Dynamic set_minimized_dyn();

		virtual ::String get_title( );
		Dynamic get_title_dyn();

		virtual ::String set_title( ::String value);
		Dynamic set_title_dyn();

		virtual int get_width( );
		Dynamic get_width_dyn();

		virtual int set_width( int value);
		Dynamic set_width_dyn();

		virtual int get_x( );
		Dynamic get_x_dyn();

		virtual int set_x( int value);
		Dynamic set_x_dyn();

		virtual int get_y( );
		Dynamic get_y_dyn();

		virtual int set_y( int value);
		Dynamic set_y_dyn();

};

} // end namespace lime
} // end namespace ui

#endif /* INCLUDED_lime_ui_Window */ 
