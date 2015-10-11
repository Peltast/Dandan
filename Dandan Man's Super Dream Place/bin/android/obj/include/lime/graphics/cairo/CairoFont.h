#ifndef INCLUDED_lime_graphics_cairo_CairoFont
#define INCLUDED_lime_graphics_cairo_CairoFont

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS3(lime,graphics,cairo,CairoFont)
HX_DECLARE_CLASS2(lime,text,Font)
namespace lime{
namespace graphics{
namespace cairo{


class HXCPP_CLASS_ATTRIBUTES  CairoFont_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef CairoFont_obj OBJ_;
		CairoFont_obj();
		Void __construct(::lime::text::Font font,hx::Null< int >  __o_flags);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="lime.graphics.cairo.CairoFont")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< CairoFont_obj > __new(::lime::text::Font font,hx::Null< int >  __o_flags);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~CairoFont_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("CairoFont","\x57","\x7e","\x5c","\x9c"); }

		static void __boot();
		::lime::text::Font font;
		Dynamic handle;
		virtual Void destroy( );
		Dynamic destroy_dyn();

		static int FT_LOAD_FORCE_AUTOHINT;
		static Dynamic lime_cairo_ft_font_face_create_for_ft_face;
		static Dynamic &lime_cairo_ft_font_face_create_for_ft_face_dyn() { return lime_cairo_ft_font_face_create_for_ft_face;}
		static Dynamic lime_cairo_font_face_destroy;
		static Dynamic &lime_cairo_font_face_destroy_dyn() { return lime_cairo_font_face_destroy;}
};

} // end namespace lime
} // end namespace graphics
} // end namespace cairo

#endif /* INCLUDED_lime_graphics_cairo_CairoFont */ 
