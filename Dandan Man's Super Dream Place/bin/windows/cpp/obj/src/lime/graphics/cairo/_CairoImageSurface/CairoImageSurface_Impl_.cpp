#include <hxcpp.h>

#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
#endif
#ifndef INCLUDED_lime_graphics_Image
#include <lime/graphics/Image.h>
#endif
#ifndef INCLUDED_lime_graphics_ImageBuffer
#include <lime/graphics/ImageBuffer.h>
#endif
#ifndef INCLUDED_lime_graphics_cairo__CairoImageSurface_CairoImageSurface_Impl_
#include <lime/graphics/cairo/_CairoImageSurface/CairoImageSurface_Impl_.h>
#endif
#ifndef INCLUDED_lime_system_System
#include <lime/system/System.h>
#endif
#ifndef INCLUDED_lime_utils_ArrayBufferView
#include <lime/utils/ArrayBufferView.h>
#endif
namespace lime{
namespace graphics{
namespace cairo{
namespace _CairoImageSurface{

Void CairoImageSurface_Impl__obj::__construct()
{
	return null();
}

//CairoImageSurface_Impl__obj::~CairoImageSurface_Impl__obj() { }

Dynamic CairoImageSurface_Impl__obj::__CreateEmpty() { return  new CairoImageSurface_Impl__obj; }
hx::ObjectPtr< CairoImageSurface_Impl__obj > CairoImageSurface_Impl__obj::__new()
{  hx::ObjectPtr< CairoImageSurface_Impl__obj > _result_ = new CairoImageSurface_Impl__obj();
	_result_->__construct();
	return _result_;}

Dynamic CairoImageSurface_Impl__obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< CairoImageSurface_Impl__obj > _result_ = new CairoImageSurface_Impl__obj();
	_result_->__construct();
	return _result_;}

Dynamic CairoImageSurface_Impl__obj::_new( int format,int width,int height){
	HX_STACK_FRAME("lime.graphics.cairo._CairoImageSurface.CairoImageSurface_Impl_","_new",0x1720eff8,"lime.graphics.cairo._CairoImageSurface.CairoImageSurface_Impl_._new","lime/graphics/cairo/CairoImageSurface.hx",17,0x38340d55)
	HX_STACK_ARG(format,"format")
	HX_STACK_ARG(width,"width")
	HX_STACK_ARG(height,"height")
	HX_STACK_LINE(17)
	Dynamic this1;		HX_STACK_VAR(this1,"this1");
	HX_STACK_LINE(20)
	int tmp = format;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(20)
	int tmp1 = width;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(20)
	int tmp2 = height;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(20)
	Dynamic tmp3 = ::lime::graphics::cairo::_CairoImageSurface::CairoImageSurface_Impl__obj::lime_cairo_image_surface_create(tmp,tmp1,tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(20)
	this1 = tmp3;
	HX_STACK_LINE(17)
	Dynamic tmp4 = this1;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(17)
	return tmp4;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(CairoImageSurface_Impl__obj,_new,return )

Dynamic CairoImageSurface_Impl__obj::create( Dynamic data,int format,int width,int height,int stride){
	HX_STACK_FRAME("lime.graphics.cairo._CairoImageSurface.CairoImageSurface_Impl_","create",0xbc2e5553,"lime.graphics.cairo._CairoImageSurface.CairoImageSurface_Impl_.create","lime/graphics/cairo/CairoImageSurface.hx",28,0x38340d55)
	HX_STACK_ARG(data,"data")
	HX_STACK_ARG(format,"format")
	HX_STACK_ARG(width,"width")
	HX_STACK_ARG(height,"height")
	HX_STACK_ARG(stride,"stride")
	HX_STACK_LINE(31)
	Dynamic tmp = data;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(31)
	int tmp1 = format;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(31)
	int tmp2 = width;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(31)
	int tmp3 = height;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(31)
	int tmp4 = stride;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(31)
	Dynamic tmp5 = ::lime::graphics::cairo::_CairoImageSurface::CairoImageSurface_Impl__obj::lime_cairo_image_surface_create_for_data(tmp,tmp1,tmp2,tmp3,tmp4);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(31)
	return tmp5;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC5(CairoImageSurface_Impl__obj,create,return )

Dynamic CairoImageSurface_Impl__obj::fromImage( ::lime::graphics::Image image){
	HX_STACK_FRAME("lime.graphics.cairo._CairoImageSurface.CairoImageSurface_Impl_","fromImage",0x22dd6b9a,"lime.graphics.cairo._CairoImageSurface.CairoImageSurface_Impl_.fromImage","lime/graphics/cairo/CairoImageSurface.hx",39,0x38340d55)
	HX_STACK_ARG(image,"image")
	HX_STACK_LINE(42)
	::lime::utils::ArrayBufferView tmp = image->get_data();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(42)
	::haxe::io::Bytes tmp1 = tmp->buffer;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(42)
	Dynamic tmp2 = ::lime::graphics::cairo::_CairoImageSurface::CairoImageSurface_Impl__obj::lime_bytes_get_data_pointer(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(42)
	int tmp3 = image->width;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(42)
	int tmp4 = image->height;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(42)
	int tmp5 = image->buffer->get_stride();		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(42)
	Dynamic tmp6 = ::lime::graphics::cairo::_CairoImageSurface::CairoImageSurface_Impl__obj::create(tmp2,(int)0,tmp3,tmp4,tmp5);		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(42)
	return tmp6;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(CairoImageSurface_Impl__obj,fromImage,return )

Dynamic CairoImageSurface_Impl__obj::get_data( Dynamic this1){
	HX_STACK_FRAME("lime.graphics.cairo._CairoImageSurface.CairoImageSurface_Impl_","get_data",0x7a9683ca,"lime.graphics.cairo._CairoImageSurface.CairoImageSurface_Impl_.get_data","lime/graphics/cairo/CairoImageSurface.hx",57,0x38340d55)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(60)
	Dynamic tmp = this1;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(60)
	Dynamic tmp1 = ::lime::graphics::cairo::_CairoImageSurface::CairoImageSurface_Impl__obj::lime_cairo_image_surface_get_data(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(60)
	return tmp1;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(CairoImageSurface_Impl__obj,get_data,return )

int CairoImageSurface_Impl__obj::get_format( Dynamic this1){
	HX_STACK_FRAME("lime.graphics.cairo._CairoImageSurface.CairoImageSurface_Impl_","get_format",0x0b2064d7,"lime.graphics.cairo._CairoImageSurface.CairoImageSurface_Impl_.get_format","lime/graphics/cairo/CairoImageSurface.hx",68,0x38340d55)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(71)
	Dynamic tmp = this1;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(71)
	int tmp1 = ::lime::graphics::cairo::_CairoImageSurface::CairoImageSurface_Impl__obj::lime_cairo_image_surface_get_format(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(71)
	return tmp1;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(CairoImageSurface_Impl__obj,get_format,return )

int CairoImageSurface_Impl__obj::get_height( Dynamic this1){
	HX_STACK_FRAME("lime.graphics.cairo._CairoImageSurface.CairoImageSurface_Impl_","get_height",0x0fdddd87,"lime.graphics.cairo._CairoImageSurface.CairoImageSurface_Impl_.get_height","lime/graphics/cairo/CairoImageSurface.hx",79,0x38340d55)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(82)
	Dynamic tmp = this1;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(82)
	int tmp1 = ::lime::graphics::cairo::_CairoImageSurface::CairoImageSurface_Impl__obj::lime_cairo_image_surface_get_height(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(82)
	return tmp1;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(CairoImageSurface_Impl__obj,get_height,return )

int CairoImageSurface_Impl__obj::get_stride( Dynamic this1){
	HX_STACK_FRAME("lime.graphics.cairo._CairoImageSurface.CairoImageSurface_Impl_","get_stride",0x1ec1f5b9,"lime.graphics.cairo._CairoImageSurface.CairoImageSurface_Impl_.get_stride","lime/graphics/cairo/CairoImageSurface.hx",90,0x38340d55)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(93)
	Dynamic tmp = this1;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(93)
	int tmp1 = ::lime::graphics::cairo::_CairoImageSurface::CairoImageSurface_Impl__obj::lime_cairo_image_surface_get_stride(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(93)
	return tmp1;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(CairoImageSurface_Impl__obj,get_stride,return )

int CairoImageSurface_Impl__obj::get_width( Dynamic this1){
	HX_STACK_FRAME("lime.graphics.cairo._CairoImageSurface.CairoImageSurface_Impl_","get_width",0xbef77466,"lime.graphics.cairo._CairoImageSurface.CairoImageSurface_Impl_.get_width","lime/graphics/cairo/CairoImageSurface.hx",101,0x38340d55)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(104)
	Dynamic tmp = this1;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(104)
	int tmp1 = ::lime::graphics::cairo::_CairoImageSurface::CairoImageSurface_Impl__obj::lime_cairo_image_surface_get_width(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(104)
	return tmp1;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(CairoImageSurface_Impl__obj,get_width,return )

Dynamic CairoImageSurface_Impl__obj::lime_bytes_get_data_pointer;

Dynamic CairoImageSurface_Impl__obj::lime_cairo_image_surface_create;

Dynamic CairoImageSurface_Impl__obj::lime_cairo_image_surface_create_for_data;

Dynamic CairoImageSurface_Impl__obj::lime_cairo_image_surface_get_data;

Dynamic CairoImageSurface_Impl__obj::lime_cairo_image_surface_get_format;

Dynamic CairoImageSurface_Impl__obj::lime_cairo_image_surface_get_height;

Dynamic CairoImageSurface_Impl__obj::lime_cairo_image_surface_get_stride;

Dynamic CairoImageSurface_Impl__obj::lime_cairo_image_surface_get_width;


CairoImageSurface_Impl__obj::CairoImageSurface_Impl__obj()
{
}

bool CairoImageSurface_Impl__obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"_new") ) { outValue = _new_dyn(); return true;  }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"create") ) { outValue = create_dyn(); return true;  }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"get_data") ) { outValue = get_data_dyn(); return true;  }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"fromImage") ) { outValue = fromImage_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"get_width") ) { outValue = get_width_dyn(); return true;  }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"get_format") ) { outValue = get_format_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"get_height") ) { outValue = get_height_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"get_stride") ) { outValue = get_stride_dyn(); return true;  }
	}
	return false;
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
static hx::StaticInfo sStaticStorageInfo[] = {
	{hx::fsObject /*Dynamic*/ ,(void *) &CairoImageSurface_Impl__obj::lime_bytes_get_data_pointer,HX_HCSTRING("lime_bytes_get_data_pointer","\xaf","\xff","\x82","\x7b")},
	{hx::fsObject /*Dynamic*/ ,(void *) &CairoImageSurface_Impl__obj::lime_cairo_image_surface_create,HX_HCSTRING("lime_cairo_image_surface_create","\x33","\x6e","\xfc","\xce")},
	{hx::fsObject /*Dynamic*/ ,(void *) &CairoImageSurface_Impl__obj::lime_cairo_image_surface_create_for_data,HX_HCSTRING("lime_cairo_image_surface_create_for_data","\x2c","\x35","\x7d","\x63")},
	{hx::fsObject /*Dynamic*/ ,(void *) &CairoImageSurface_Impl__obj::lime_cairo_image_surface_get_data,HX_HCSTRING("lime_cairo_image_surface_get_data","\xaa","\x94","\xc4","\x6f")},
	{hx::fsObject /*Dynamic*/ ,(void *) &CairoImageSurface_Impl__obj::lime_cairo_image_surface_get_format,HX_HCSTRING("lime_cairo_image_surface_get_format","\xb7","\x6d","\x9c","\x34")},
	{hx::fsObject /*Dynamic*/ ,(void *) &CairoImageSurface_Impl__obj::lime_cairo_image_surface_get_height,HX_HCSTRING("lime_cairo_image_surface_get_height","\x67","\xe6","\x59","\x39")},
	{hx::fsObject /*Dynamic*/ ,(void *) &CairoImageSurface_Impl__obj::lime_cairo_image_surface_get_stride,HX_HCSTRING("lime_cairo_image_surface_get_stride","\x99","\xfe","\x3d","\x48")},
	{hx::fsObject /*Dynamic*/ ,(void *) &CairoImageSurface_Impl__obj::lime_cairo_image_surface_get_width,HX_HCSTRING("lime_cairo_image_surface_get_width","\x86","\x27","\x18","\x52")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(CairoImageSurface_Impl__obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(CairoImageSurface_Impl__obj::lime_bytes_get_data_pointer,"lime_bytes_get_data_pointer");
	HX_MARK_MEMBER_NAME(CairoImageSurface_Impl__obj::lime_cairo_image_surface_create,"lime_cairo_image_surface_create");
	HX_MARK_MEMBER_NAME(CairoImageSurface_Impl__obj::lime_cairo_image_surface_create_for_data,"lime_cairo_image_surface_create_for_data");
	HX_MARK_MEMBER_NAME(CairoImageSurface_Impl__obj::lime_cairo_image_surface_get_data,"lime_cairo_image_surface_get_data");
	HX_MARK_MEMBER_NAME(CairoImageSurface_Impl__obj::lime_cairo_image_surface_get_format,"lime_cairo_image_surface_get_format");
	HX_MARK_MEMBER_NAME(CairoImageSurface_Impl__obj::lime_cairo_image_surface_get_height,"lime_cairo_image_surface_get_height");
	HX_MARK_MEMBER_NAME(CairoImageSurface_Impl__obj::lime_cairo_image_surface_get_stride,"lime_cairo_image_surface_get_stride");
	HX_MARK_MEMBER_NAME(CairoImageSurface_Impl__obj::lime_cairo_image_surface_get_width,"lime_cairo_image_surface_get_width");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(CairoImageSurface_Impl__obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(CairoImageSurface_Impl__obj::lime_bytes_get_data_pointer,"lime_bytes_get_data_pointer");
	HX_VISIT_MEMBER_NAME(CairoImageSurface_Impl__obj::lime_cairo_image_surface_create,"lime_cairo_image_surface_create");
	HX_VISIT_MEMBER_NAME(CairoImageSurface_Impl__obj::lime_cairo_image_surface_create_for_data,"lime_cairo_image_surface_create_for_data");
	HX_VISIT_MEMBER_NAME(CairoImageSurface_Impl__obj::lime_cairo_image_surface_get_data,"lime_cairo_image_surface_get_data");
	HX_VISIT_MEMBER_NAME(CairoImageSurface_Impl__obj::lime_cairo_image_surface_get_format,"lime_cairo_image_surface_get_format");
	HX_VISIT_MEMBER_NAME(CairoImageSurface_Impl__obj::lime_cairo_image_surface_get_height,"lime_cairo_image_surface_get_height");
	HX_VISIT_MEMBER_NAME(CairoImageSurface_Impl__obj::lime_cairo_image_surface_get_stride,"lime_cairo_image_surface_get_stride");
	HX_VISIT_MEMBER_NAME(CairoImageSurface_Impl__obj::lime_cairo_image_surface_get_width,"lime_cairo_image_surface_get_width");
};

#endif

hx::Class CairoImageSurface_Impl__obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("_new","\x61","\x15","\x1f","\x3f"),
	HX_HCSTRING("create","\xfc","\x66","\x0f","\x7c"),
	HX_HCSTRING("fromImage","\x91","\x09","\xf2","\x71"),
	HX_HCSTRING("get_data","\xb3","\x11","\x1e","\xc2"),
	HX_HCSTRING("get_format","\x00","\xff","\x15","\xee"),
	HX_HCSTRING("get_height","\xb0","\x77","\xd3","\xf2"),
	HX_HCSTRING("get_stride","\xe2","\x8f","\xb7","\x01"),
	HX_HCSTRING("get_width","\x5d","\x12","\x0c","\x0e"),
	HX_HCSTRING("lime_bytes_get_data_pointer","\xaf","\xff","\x82","\x7b"),
	HX_HCSTRING("lime_cairo_image_surface_create","\x33","\x6e","\xfc","\xce"),
	HX_HCSTRING("lime_cairo_image_surface_create_for_data","\x2c","\x35","\x7d","\x63"),
	HX_HCSTRING("lime_cairo_image_surface_get_data","\xaa","\x94","\xc4","\x6f"),
	HX_HCSTRING("lime_cairo_image_surface_get_format","\xb7","\x6d","\x9c","\x34"),
	HX_HCSTRING("lime_cairo_image_surface_get_height","\x67","\xe6","\x59","\x39"),
	HX_HCSTRING("lime_cairo_image_surface_get_stride","\x99","\xfe","\x3d","\x48"),
	HX_HCSTRING("lime_cairo_image_surface_get_width","\x86","\x27","\x18","\x52"),
	::String(null()) };

void CairoImageSurface_Impl__obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("lime.graphics.cairo._CairoImageSurface.CairoImageSurface_Impl_","\x37","\x8d","\x2e","\x6d");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &CairoImageSurface_Impl__obj::__GetStatic;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< CairoImageSurface_Impl__obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = sStaticStorageInfo;
#endif
	hx::RegisterClass(__mClass->mName, __mClass);
}

void CairoImageSurface_Impl__obj::__boot()
{
	lime_bytes_get_data_pointer= ::lime::_system::System_obj::load(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_bytes_get_data_pointer","\xaf","\xff","\x82","\x7b"),(int)1,null());
	lime_cairo_image_surface_create= ::lime::_system::System_obj::load(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_cairo_image_surface_create","\x33","\x6e","\xfc","\xce"),(int)3,null());
	lime_cairo_image_surface_create_for_data= ::lime::_system::System_obj::load(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_cairo_image_surface_create_for_data","\x2c","\x35","\x7d","\x63"),(int)5,null());
	lime_cairo_image_surface_get_data= ::lime::_system::System_obj::load(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_cairo_image_surface_get_data","\xaa","\x94","\xc4","\x6f"),(int)1,null());
	lime_cairo_image_surface_get_format= ::lime::_system::System_obj::load(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_cairo_image_surface_get_format","\xb7","\x6d","\x9c","\x34"),(int)1,null());
	lime_cairo_image_surface_get_height= ::lime::_system::System_obj::load(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_cairo_image_surface_get_height","\x67","\xe6","\x59","\x39"),(int)1,null());
	lime_cairo_image_surface_get_stride= ::lime::_system::System_obj::load(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_cairo_image_surface_get_stride","\x99","\xfe","\x3d","\x48"),(int)1,null());
	lime_cairo_image_surface_get_width= ::lime::_system::System_obj::load(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_cairo_image_surface_get_width","\x86","\x27","\x18","\x52"),(int)1,null());
}

} // end namespace lime
} // end namespace graphics
} // end namespace cairo
} // end namespace _CairoImageSurface
