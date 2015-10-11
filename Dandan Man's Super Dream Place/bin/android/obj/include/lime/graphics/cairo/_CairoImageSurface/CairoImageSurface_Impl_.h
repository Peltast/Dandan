#ifndef INCLUDED_lime_graphics_cairo__CairoImageSurface_CairoImageSurface_Impl_
#define INCLUDED_lime_graphics_cairo__CairoImageSurface_CairoImageSurface_Impl_

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(haxe,io,Bytes)
HX_DECLARE_CLASS2(lime,graphics,Image)
HX_DECLARE_CLASS4(lime,graphics,cairo,_CairoImageSurface,CairoImageSurface_Impl_)
namespace lime{
namespace graphics{
namespace cairo{
namespace _CairoImageSurface{


class HXCPP_CLASS_ATTRIBUTES  CairoImageSurface_Impl__obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef CairoImageSurface_Impl__obj OBJ_;
		CairoImageSurface_Impl__obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=false,const char *inName="lime.graphics.cairo._CairoImageSurface.CairoImageSurface_Impl_")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< CairoImageSurface_Impl__obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~CairoImageSurface_Impl__obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		static void __register();
		::String __ToString() const { return HX_HCSTRING("CairoImageSurface_Impl_","\xba","\x74","\x06","\x3c"); }

		static void __boot();
		static Dynamic _new( int format,int width,int height);
		static Dynamic _new_dyn();

		static Dynamic create( Dynamic data,int format,int width,int height,int stride);
		static Dynamic create_dyn();

		static Dynamic fromImage( ::lime::graphics::Image image);
		static Dynamic fromImage_dyn();

		static Dynamic get_data( Dynamic this1);
		static Dynamic get_data_dyn();

		static int get_format( Dynamic this1);
		static Dynamic get_format_dyn();

		static int get_height( Dynamic this1);
		static Dynamic get_height_dyn();

		static int get_stride( Dynamic this1);
		static Dynamic get_stride_dyn();

		static int get_width( Dynamic this1);
		static Dynamic get_width_dyn();

		static Dynamic lime_bytes_get_data_pointer;
		static Dynamic &lime_bytes_get_data_pointer_dyn() { return lime_bytes_get_data_pointer;}
		static Dynamic lime_cairo_image_surface_create;
		static Dynamic &lime_cairo_image_surface_create_dyn() { return lime_cairo_image_surface_create;}
		static Dynamic lime_cairo_image_surface_create_for_data;
		static Dynamic &lime_cairo_image_surface_create_for_data_dyn() { return lime_cairo_image_surface_create_for_data;}
		static Dynamic lime_cairo_image_surface_get_data;
		static Dynamic &lime_cairo_image_surface_get_data_dyn() { return lime_cairo_image_surface_get_data;}
		static Dynamic lime_cairo_image_surface_get_format;
		static Dynamic &lime_cairo_image_surface_get_format_dyn() { return lime_cairo_image_surface_get_format;}
		static Dynamic lime_cairo_image_surface_get_height;
		static Dynamic &lime_cairo_image_surface_get_height_dyn() { return lime_cairo_image_surface_get_height;}
		static Dynamic lime_cairo_image_surface_get_stride;
		static Dynamic &lime_cairo_image_surface_get_stride_dyn() { return lime_cairo_image_surface_get_stride;}
		static Dynamic lime_cairo_image_surface_get_width;
		static Dynamic &lime_cairo_image_surface_get_width_dyn() { return lime_cairo_image_surface_get_width;}
};

} // end namespace lime
} // end namespace graphics
} // end namespace cairo
} // end namespace _CairoImageSurface

#endif /* INCLUDED_lime_graphics_cairo__CairoImageSurface_CairoImageSurface_Impl_ */ 
