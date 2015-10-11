#ifndef INCLUDED_lime_graphics_cairo_CairoFontOptions
#define INCLUDED_lime_graphics_cairo_CairoFontOptions

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS3(lime,graphics,cairo,CairoFontOptions)
namespace lime{
namespace graphics{
namespace cairo{


class HXCPP_CLASS_ATTRIBUTES  CairoFontOptions_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef CairoFontOptions_obj OBJ_;
		CairoFontOptions_obj();
		Void __construct(Dynamic handle);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="lime.graphics.cairo.CairoFontOptions")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< CairoFontOptions_obj > __new(Dynamic handle);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~CairoFontOptions_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("CairoFontOptions","\xc7","\x65","\xc3","\xd8"); }

		static void __boot();
		Dynamic handle;
		virtual int get_antialias( );
		Dynamic get_antialias_dyn();

		virtual int set_antialias( int value);
		Dynamic set_antialias_dyn();

		virtual int get_hintMetrics( );
		Dynamic get_hintMetrics_dyn();

		virtual int set_hintMetrics( int value);
		Dynamic set_hintMetrics_dyn();

		virtual int get_hintStyle( );
		Dynamic get_hintStyle_dyn();

		virtual int set_hintStyle( int value);
		Dynamic set_hintStyle_dyn();

		virtual int get_subpixelOrder( );
		Dynamic get_subpixelOrder_dyn();

		virtual int set_subpixelOrder( int value);
		Dynamic set_subpixelOrder_dyn();

		static Dynamic lime_cairo_font_options_create;
		static Dynamic &lime_cairo_font_options_create_dyn() { return lime_cairo_font_options_create;}
		static Dynamic lime_cairo_font_options_get_antialias;
		static Dynamic &lime_cairo_font_options_get_antialias_dyn() { return lime_cairo_font_options_get_antialias;}
		static Dynamic lime_cairo_font_options_get_hint_metrics;
		static Dynamic &lime_cairo_font_options_get_hint_metrics_dyn() { return lime_cairo_font_options_get_hint_metrics;}
		static Dynamic lime_cairo_font_options_get_hint_style;
		static Dynamic &lime_cairo_font_options_get_hint_style_dyn() { return lime_cairo_font_options_get_hint_style;}
		static Dynamic lime_cairo_font_options_get_subpixel_order;
		static Dynamic &lime_cairo_font_options_get_subpixel_order_dyn() { return lime_cairo_font_options_get_subpixel_order;}
		static Dynamic lime_cairo_font_options_set_antialias;
		static Dynamic &lime_cairo_font_options_set_antialias_dyn() { return lime_cairo_font_options_set_antialias;}
		static Dynamic lime_cairo_font_options_set_hint_metrics;
		static Dynamic &lime_cairo_font_options_set_hint_metrics_dyn() { return lime_cairo_font_options_set_hint_metrics;}
		static Dynamic lime_cairo_font_options_set_hint_style;
		static Dynamic &lime_cairo_font_options_set_hint_style_dyn() { return lime_cairo_font_options_set_hint_style;}
		static Dynamic lime_cairo_font_options_set_subpixel_order;
		static Dynamic &lime_cairo_font_options_set_subpixel_order_dyn() { return lime_cairo_font_options_set_subpixel_order;}
};

} // end namespace lime
} // end namespace graphics
} // end namespace cairo

#endif /* INCLUDED_lime_graphics_cairo_CairoFontOptions */ 
