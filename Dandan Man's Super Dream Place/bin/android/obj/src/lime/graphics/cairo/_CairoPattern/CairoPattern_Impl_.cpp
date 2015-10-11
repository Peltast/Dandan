#include <hxcpp.h>

#ifndef INCLUDED_lime_graphics_cairo__CairoPattern_CairoPattern_Impl_
#include <lime/graphics/cairo/_CairoPattern/CairoPattern_Impl_.h>
#endif
#ifndef INCLUDED_lime_math_Matrix3
#include <lime/math/Matrix3.h>
#endif
#ifndef INCLUDED_lime_system_System
#include <lime/system/System.h>
#endif
namespace lime{
namespace graphics{
namespace cairo{
namespace _CairoPattern{

Void CairoPattern_Impl__obj::__construct()
{
	return null();
}

//CairoPattern_Impl__obj::~CairoPattern_Impl__obj() { }

Dynamic CairoPattern_Impl__obj::__CreateEmpty() { return  new CairoPattern_Impl__obj; }
hx::ObjectPtr< CairoPattern_Impl__obj > CairoPattern_Impl__obj::__new()
{  hx::ObjectPtr< CairoPattern_Impl__obj > _result_ = new CairoPattern_Impl__obj();
	_result_->__construct();
	return _result_;}

Dynamic CairoPattern_Impl__obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< CairoPattern_Impl__obj > _result_ = new CairoPattern_Impl__obj();
	_result_->__construct();
	return _result_;}

Dynamic CairoPattern_Impl__obj::_new( Dynamic handle){
	HX_STACK_FRAME("lime.graphics.cairo._CairoPattern.CairoPattern_Impl_","_new",0xc71fdbd0,"lime.graphics.cairo._CairoPattern.CairoPattern_Impl_._new","lime/graphics/cairo/CairoPattern.hx",19,0x9806f3a5)
	HX_STACK_ARG(handle,"handle")
	HX_STACK_LINE(19)
	Dynamic tmp = handle;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(19)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(CairoPattern_Impl__obj,_new,return )

Void CairoPattern_Impl__obj::addColorStopRGB( Dynamic this1,Float offset,Float r,Float g,Float b){
{
		HX_STACK_FRAME("lime.graphics.cairo._CairoPattern.CairoPattern_Impl_","addColorStopRGB",0xfbbadaba,"lime.graphics.cairo._CairoPattern.CairoPattern_Impl_.addColorStopRGB","lime/graphics/cairo/CairoPattern.hx",24,0x9806f3a5)
		HX_STACK_ARG(this1,"this1")
		HX_STACK_ARG(offset,"offset")
		HX_STACK_ARG(r,"r")
		HX_STACK_ARG(g,"g")
		HX_STACK_ARG(b,"b")
		HX_STACK_LINE(27)
		Dynamic tmp = this1;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(27)
		Float tmp1 = offset;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(27)
		Float tmp2 = r;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(27)
		Float tmp3 = g;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(27)
		Float tmp4 = b;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(27)
		::lime::graphics::cairo::_CairoPattern::CairoPattern_Impl__obj::lime_cairo_pattern_add_color_stop_rgb(tmp,tmp1,tmp2,tmp3,tmp4);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC5(CairoPattern_Impl__obj,addColorStopRGB,(void))

Void CairoPattern_Impl__obj::addColorStopRGBA( Dynamic this1,Float offset,Float r,Float g,Float b,Float a){
{
		HX_STACK_FRAME("lime.graphics.cairo._CairoPattern.CairoPattern_Impl_","addColorStopRGBA",0x47c48847,"lime.graphics.cairo._CairoPattern.CairoPattern_Impl_.addColorStopRGBA","lime/graphics/cairo/CairoPattern.hx",33,0x9806f3a5)
		HX_STACK_ARG(this1,"this1")
		HX_STACK_ARG(offset,"offset")
		HX_STACK_ARG(r,"r")
		HX_STACK_ARG(g,"g")
		HX_STACK_ARG(b,"b")
		HX_STACK_ARG(a,"a")
		HX_STACK_LINE(36)
		Dynamic tmp = this1;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(36)
		Float tmp1 = offset;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(36)
		Float tmp2 = r;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(36)
		Float tmp3 = g;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(36)
		Float tmp4 = b;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(36)
		Float tmp5 = a;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(36)
		::lime::graphics::cairo::_CairoPattern::CairoPattern_Impl__obj::lime_cairo_pattern_add_color_stop_rgba(tmp,tmp1,tmp2,tmp3,tmp4,tmp5);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC6(CairoPattern_Impl__obj,addColorStopRGBA,(void))

Dynamic CairoPattern_Impl__obj::createForSurface( Dynamic surface){
	HX_STACK_FRAME("lime.graphics.cairo._CairoPattern.CairoPattern_Impl_","createForSurface",0x941f592f,"lime.graphics.cairo._CairoPattern.CairoPattern_Impl_.createForSurface","lime/graphics/cairo/CairoPattern.hx",42,0x9806f3a5)
	HX_STACK_ARG(surface,"surface")
	HX_STACK_LINE(45)
	Dynamic tmp = surface;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(45)
	Dynamic tmp1 = ::lime::graphics::cairo::_CairoPattern::CairoPattern_Impl__obj::lime_cairo_pattern_create_for_surface(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(45)
	return tmp1;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(CairoPattern_Impl__obj,createForSurface,return )

Dynamic CairoPattern_Impl__obj::createLinear( Float x0,Float y0,Float x1,Float y1){
	HX_STACK_FRAME("lime.graphics.cairo._CairoPattern.CairoPattern_Impl_","createLinear",0xc4d8df70,"lime.graphics.cairo._CairoPattern.CairoPattern_Impl_.createLinear","lime/graphics/cairo/CairoPattern.hx",53,0x9806f3a5)
	HX_STACK_ARG(x0,"x0")
	HX_STACK_ARG(y0,"y0")
	HX_STACK_ARG(x1,"x1")
	HX_STACK_ARG(y1,"y1")
	HX_STACK_LINE(56)
	Float tmp = x0;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(56)
	Float tmp1 = y0;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(56)
	Float tmp2 = x1;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(56)
	Float tmp3 = y1;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(56)
	Dynamic tmp4 = ::lime::graphics::cairo::_CairoPattern::CairoPattern_Impl__obj::lime_cairo_pattern_create_linear(tmp,tmp1,tmp2,tmp3);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(56)
	return tmp4;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(CairoPattern_Impl__obj,createLinear,return )

Dynamic CairoPattern_Impl__obj::createRadial( Float cx0,Float cy0,Float radius0,Float cx1,Float cy1,Float radius1){
	HX_STACK_FRAME("lime.graphics.cairo._CairoPattern.CairoPattern_Impl_","createRadial",0x892f4c6a,"lime.graphics.cairo._CairoPattern.CairoPattern_Impl_.createRadial","lime/graphics/cairo/CairoPattern.hx",64,0x9806f3a5)
	HX_STACK_ARG(cx0,"cx0")
	HX_STACK_ARG(cy0,"cy0")
	HX_STACK_ARG(radius0,"radius0")
	HX_STACK_ARG(cx1,"cx1")
	HX_STACK_ARG(cy1,"cy1")
	HX_STACK_ARG(radius1,"radius1")
	HX_STACK_LINE(67)
	Float tmp = cx0;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(67)
	Float tmp1 = cy0;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(67)
	Float tmp2 = radius0;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(67)
	Float tmp3 = cx1;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(67)
	Float tmp4 = cy1;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(67)
	Float tmp5 = radius1;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(67)
	Dynamic tmp6 = ::lime::graphics::cairo::_CairoPattern::CairoPattern_Impl__obj::lime_cairo_pattern_create_radial(tmp,tmp1,tmp2,tmp3,tmp4,tmp5);		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(67)
	return tmp6;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC6(CairoPattern_Impl__obj,createRadial,return )

Dynamic CairoPattern_Impl__obj::createRGB( Float r,Float g,Float b){
	HX_STACK_FRAME("lime.graphics.cairo._CairoPattern.CairoPattern_Impl_","createRGB",0xccf31ca2,"lime.graphics.cairo._CairoPattern.CairoPattern_Impl_.createRGB","lime/graphics/cairo/CairoPattern.hx",75,0x9806f3a5)
	HX_STACK_ARG(r,"r")
	HX_STACK_ARG(g,"g")
	HX_STACK_ARG(b,"b")
	HX_STACK_LINE(78)
	Float tmp = r;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(78)
	Float tmp1 = g;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(78)
	Float tmp2 = b;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(78)
	Dynamic tmp3 = ::lime::graphics::cairo::_CairoPattern::CairoPattern_Impl__obj::lime_cairo_pattern_create_rgb(tmp,tmp1,tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(78)
	return tmp3;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(CairoPattern_Impl__obj,createRGB,return )

Dynamic CairoPattern_Impl__obj::createRGBA( Float r,Float g,Float b,Float a){
	HX_STACK_FRAME("lime.graphics.cairo._CairoPattern.CairoPattern_Impl_","createRGBA",0x87c5f15f,"lime.graphics.cairo._CairoPattern.CairoPattern_Impl_.createRGBA","lime/graphics/cairo/CairoPattern.hx",86,0x9806f3a5)
	HX_STACK_ARG(r,"r")
	HX_STACK_ARG(g,"g")
	HX_STACK_ARG(b,"b")
	HX_STACK_ARG(a,"a")
	HX_STACK_LINE(89)
	Float tmp = r;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(89)
	Float tmp1 = g;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(89)
	Float tmp2 = b;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(89)
	Float tmp3 = a;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(89)
	Dynamic tmp4 = ::lime::graphics::cairo::_CairoPattern::CairoPattern_Impl__obj::lime_cairo_pattern_create_rgba(tmp,tmp1,tmp2,tmp3);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(89)
	return tmp4;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(CairoPattern_Impl__obj,createRGBA,return )

Void CairoPattern_Impl__obj::destroy( Dynamic this1){
{
		HX_STACK_FRAME("lime.graphics.cairo._CairoPattern.CairoPattern_Impl_","destroy",0xc623d5eb,"lime.graphics.cairo._CairoPattern.CairoPattern_Impl_.destroy","lime/graphics/cairo/CairoPattern.hx",97,0x9806f3a5)
		HX_STACK_ARG(this1,"this1")
		HX_STACK_LINE(100)
		Dynamic tmp = this1;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(100)
		::lime::graphics::cairo::_CairoPattern::CairoPattern_Impl__obj::lime_cairo_pattern_destroy(tmp);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(CairoPattern_Impl__obj,destroy,(void))

int CairoPattern_Impl__obj::get_colorStopCount( Dynamic this1){
	HX_STACK_FRAME("lime.graphics.cairo._CairoPattern.CairoPattern_Impl_","get_colorStopCount",0x1c959302,"lime.graphics.cairo._CairoPattern.CairoPattern_Impl_.get_colorStopCount","lime/graphics/cairo/CairoPattern.hx",113,0x9806f3a5)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(116)
	Dynamic tmp = this1;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(116)
	int tmp1 = ::lime::graphics::cairo::_CairoPattern::CairoPattern_Impl__obj::lime_cairo_pattern_get_color_stop_count(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(116)
	return tmp1;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(CairoPattern_Impl__obj,get_colorStopCount,return )

int CairoPattern_Impl__obj::get_extend( Dynamic this1){
	HX_STACK_FRAME("lime.graphics.cairo._CairoPattern.CairoPattern_Impl_","get_extend",0xe14a0552,"lime.graphics.cairo._CairoPattern.CairoPattern_Impl_.get_extend","lime/graphics/cairo/CairoPattern.hx",124,0x9806f3a5)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(127)
	Dynamic tmp = this1;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(127)
	int tmp1 = ::lime::graphics::cairo::_CairoPattern::CairoPattern_Impl__obj::lime_cairo_pattern_get_extend(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(127)
	return tmp1;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(CairoPattern_Impl__obj,get_extend,return )

int CairoPattern_Impl__obj::set_extend( Dynamic this1,int value){
	HX_STACK_FRAME("lime.graphics.cairo._CairoPattern.CairoPattern_Impl_","set_extend",0xe4c7a3c6,"lime.graphics.cairo._CairoPattern.CairoPattern_Impl_.set_extend","lime/graphics/cairo/CairoPattern.hx",135,0x9806f3a5)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(138)
	Dynamic tmp = this1;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(138)
	int tmp1 = value;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(138)
	::lime::graphics::cairo::_CairoPattern::CairoPattern_Impl__obj::lime_cairo_pattern_set_extend(tmp,tmp1);
	HX_STACK_LINE(141)
	int tmp2 = value;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(141)
	return tmp2;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(CairoPattern_Impl__obj,set_extend,return )

int CairoPattern_Impl__obj::get_filter( Dynamic this1){
	HX_STACK_FRAME("lime.graphics.cairo._CairoPattern.CairoPattern_Impl_","get_filter",0x9f645330,"lime.graphics.cairo._CairoPattern.CairoPattern_Impl_.get_filter","lime/graphics/cairo/CairoPattern.hx",146,0x9806f3a5)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(149)
	Dynamic tmp = this1;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(149)
	int tmp1 = ::lime::graphics::cairo::_CairoPattern::CairoPattern_Impl__obj::lime_cairo_pattern_get_filter(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(149)
	return tmp1;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(CairoPattern_Impl__obj,get_filter,return )

int CairoPattern_Impl__obj::set_filter( Dynamic this1,int value){
	HX_STACK_FRAME("lime.graphics.cairo._CairoPattern.CairoPattern_Impl_","set_filter",0xa2e1f1a4,"lime.graphics.cairo._CairoPattern.CairoPattern_Impl_.set_filter","lime/graphics/cairo/CairoPattern.hx",157,0x9806f3a5)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(160)
	Dynamic tmp = this1;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(160)
	int tmp1 = value;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(160)
	::lime::graphics::cairo::_CairoPattern::CairoPattern_Impl__obj::lime_cairo_pattern_set_filter(tmp,tmp1);
	HX_STACK_LINE(163)
	int tmp2 = value;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(163)
	return tmp2;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(CairoPattern_Impl__obj,set_filter,return )

::lime::math::Matrix3 CairoPattern_Impl__obj::get_matrix( Dynamic this1){
	HX_STACK_FRAME("lime.graphics.cairo._CairoPattern.CairoPattern_Impl_","get_matrix",0xd5f769b9,"lime.graphics.cairo._CairoPattern.CairoPattern_Impl_.get_matrix","lime/graphics/cairo/CairoPattern.hx",168,0x9806f3a5)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(171)
	Dynamic tmp = this1;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(171)
	Dynamic tmp1 = ::lime::graphics::cairo::_CairoPattern::CairoPattern_Impl__obj::lime_cairo_pattern_get_matrix(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(171)
	Dynamic m = tmp1;		HX_STACK_VAR(m,"m");
	HX_STACK_LINE(172)
	::lime::math::Matrix3 tmp2 = ::lime::math::Matrix3_obj::__new(m->__Field(HX_HCSTRING("a","\x61","\x00","\x00","\x00"), hx::paccDynamic ),m->__Field(HX_HCSTRING("b","\x62","\x00","\x00","\x00"), hx::paccDynamic ),m->__Field(HX_HCSTRING("c","\x63","\x00","\x00","\x00"), hx::paccDynamic ),m->__Field(HX_HCSTRING("d","\x64","\x00","\x00","\x00"), hx::paccDynamic ),m->__Field(HX_HCSTRING("tx","\x84","\x65","\x00","\x00"), hx::paccDynamic ),m->__Field(HX_HCSTRING("ty","\x85","\x65","\x00","\x00"), hx::paccDynamic ));		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(172)
	return tmp2;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(CairoPattern_Impl__obj,get_matrix,return )

::lime::math::Matrix3 CairoPattern_Impl__obj::set_matrix( Dynamic this1,::lime::math::Matrix3 value){
	HX_STACK_FRAME("lime.graphics.cairo._CairoPattern.CairoPattern_Impl_","set_matrix",0xd975082d,"lime.graphics.cairo._CairoPattern.CairoPattern_Impl_.set_matrix","lime/graphics/cairo/CairoPattern.hx",180,0x9806f3a5)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(183)
	Dynamic tmp = this1;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(183)
	::lime::math::Matrix3 tmp1 = value;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(183)
	::lime::graphics::cairo::_CairoPattern::CairoPattern_Impl__obj::lime_cairo_pattern_set_matrix(tmp,tmp1);
	HX_STACK_LINE(186)
	::lime::math::Matrix3 tmp2 = value;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(186)
	return tmp2;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(CairoPattern_Impl__obj,set_matrix,return )

Dynamic CairoPattern_Impl__obj::lime_cairo_pattern_add_color_stop_rgb;

Dynamic CairoPattern_Impl__obj::lime_cairo_pattern_add_color_stop_rgba;

Dynamic CairoPattern_Impl__obj::lime_cairo_pattern_create_for_surface;

Dynamic CairoPattern_Impl__obj::lime_cairo_pattern_create_linear;

Dynamic CairoPattern_Impl__obj::lime_cairo_pattern_create_radial;

Dynamic CairoPattern_Impl__obj::lime_cairo_pattern_create_rgb;

Dynamic CairoPattern_Impl__obj::lime_cairo_pattern_create_rgba;

Dynamic CairoPattern_Impl__obj::lime_cairo_pattern_destroy;

Dynamic CairoPattern_Impl__obj::lime_cairo_pattern_get_color_stop_count;

Dynamic CairoPattern_Impl__obj::lime_cairo_pattern_get_extend;

Dynamic CairoPattern_Impl__obj::lime_cairo_pattern_get_filter;

Dynamic CairoPattern_Impl__obj::lime_cairo_pattern_get_matrix;

Dynamic CairoPattern_Impl__obj::lime_cairo_pattern_set_extend;

Dynamic CairoPattern_Impl__obj::lime_cairo_pattern_set_filter;

Dynamic CairoPattern_Impl__obj::lime_cairo_pattern_set_matrix;


CairoPattern_Impl__obj::CairoPattern_Impl__obj()
{
}

bool CairoPattern_Impl__obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"_new") ) { outValue = _new_dyn(); return true;  }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"destroy") ) { outValue = destroy_dyn(); return true;  }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"createRGB") ) { outValue = createRGB_dyn(); return true;  }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"createRGBA") ) { outValue = createRGBA_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"get_extend") ) { outValue = get_extend_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"set_extend") ) { outValue = set_extend_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"get_filter") ) { outValue = get_filter_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"set_filter") ) { outValue = set_filter_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"get_matrix") ) { outValue = get_matrix_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"set_matrix") ) { outValue = set_matrix_dyn(); return true;  }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"createLinear") ) { outValue = createLinear_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"createRadial") ) { outValue = createRadial_dyn(); return true;  }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"addColorStopRGB") ) { outValue = addColorStopRGB_dyn(); return true;  }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"addColorStopRGBA") ) { outValue = addColorStopRGBA_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"createForSurface") ) { outValue = createForSurface_dyn(); return true;  }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"get_colorStopCount") ) { outValue = get_colorStopCount_dyn(); return true;  }
	}
	return false;
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
static hx::StaticInfo sStaticStorageInfo[] = {
	{hx::fsObject /*Dynamic*/ ,(void *) &CairoPattern_Impl__obj::lime_cairo_pattern_add_color_stop_rgb,HX_HCSTRING("lime_cairo_pattern_add_color_stop_rgb","\x5a","\x49","\x3d","\xbb")},
	{hx::fsObject /*Dynamic*/ ,(void *) &CairoPattern_Impl__obj::lime_cairo_pattern_add_color_stop_rgba,HX_HCSTRING("lime_cairo_pattern_add_color_stop_rgba","\xc7","\xe5","\x62","\x1a")},
	{hx::fsObject /*Dynamic*/ ,(void *) &CairoPattern_Impl__obj::lime_cairo_pattern_create_for_surface,HX_HCSTRING("lime_cairo_pattern_create_for_surface","\xc4","\x41","\xff","\xa6")},
	{hx::fsObject /*Dynamic*/ ,(void *) &CairoPattern_Impl__obj::lime_cairo_pattern_create_linear,HX_HCSTRING("lime_cairo_pattern_create_linear","\xf8","\x82","\x42","\xcf")},
	{hx::fsObject /*Dynamic*/ ,(void *) &CairoPattern_Impl__obj::lime_cairo_pattern_create_radial,HX_HCSTRING("lime_cairo_pattern_create_radial","\xf2","\xef","\x98","\x93")},
	{hx::fsObject /*Dynamic*/ ,(void *) &CairoPattern_Impl__obj::lime_cairo_pattern_create_rgb,HX_HCSTRING("lime_cairo_pattern_create_rgb","\x1a","\x90","\x6b","\xce")},
	{hx::fsObject /*Dynamic*/ ,(void *) &CairoPattern_Impl__obj::lime_cairo_pattern_create_rgba,HX_HCSTRING("lime_cairo_pattern_create_rgba","\x07","\x87","\xb2","\xcf")},
	{hx::fsObject /*Dynamic*/ ,(void *) &CairoPattern_Impl__obj::lime_cairo_pattern_destroy,HX_HCSTRING("lime_cairo_pattern_destroy","\xea","\xc7","\xb0","\x1c")},
	{hx::fsObject /*Dynamic*/ ,(void *) &CairoPattern_Impl__obj::lime_cairo_pattern_get_color_stop_count,HX_HCSTRING("lime_cairo_pattern_get_color_stop_count","\x47","\x7e","\x23","\xf0")},
	{hx::fsObject /*Dynamic*/ ,(void *) &CairoPattern_Impl__obj::lime_cairo_pattern_get_extend,HX_HCSTRING("lime_cairo_pattern_get_extend","\xb3","\x1c","\x37","\x1f")},
	{hx::fsObject /*Dynamic*/ ,(void *) &CairoPattern_Impl__obj::lime_cairo_pattern_get_filter,HX_HCSTRING("lime_cairo_pattern_get_filter","\x91","\x6a","\x51","\xdd")},
	{hx::fsObject /*Dynamic*/ ,(void *) &CairoPattern_Impl__obj::lime_cairo_pattern_get_matrix,HX_HCSTRING("lime_cairo_pattern_get_matrix","\x1a","\x81","\xe4","\x13")},
	{hx::fsObject /*Dynamic*/ ,(void *) &CairoPattern_Impl__obj::lime_cairo_pattern_set_extend,HX_HCSTRING("lime_cairo_pattern_set_extend","\x27","\xbb","\xb4","\x22")},
	{hx::fsObject /*Dynamic*/ ,(void *) &CairoPattern_Impl__obj::lime_cairo_pattern_set_filter,HX_HCSTRING("lime_cairo_pattern_set_filter","\x05","\x09","\xcf","\xe0")},
	{hx::fsObject /*Dynamic*/ ,(void *) &CairoPattern_Impl__obj::lime_cairo_pattern_set_matrix,HX_HCSTRING("lime_cairo_pattern_set_matrix","\x8e","\x1f","\x62","\x17")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(CairoPattern_Impl__obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(CairoPattern_Impl__obj::lime_cairo_pattern_add_color_stop_rgb,"lime_cairo_pattern_add_color_stop_rgb");
	HX_MARK_MEMBER_NAME(CairoPattern_Impl__obj::lime_cairo_pattern_add_color_stop_rgba,"lime_cairo_pattern_add_color_stop_rgba");
	HX_MARK_MEMBER_NAME(CairoPattern_Impl__obj::lime_cairo_pattern_create_for_surface,"lime_cairo_pattern_create_for_surface");
	HX_MARK_MEMBER_NAME(CairoPattern_Impl__obj::lime_cairo_pattern_create_linear,"lime_cairo_pattern_create_linear");
	HX_MARK_MEMBER_NAME(CairoPattern_Impl__obj::lime_cairo_pattern_create_radial,"lime_cairo_pattern_create_radial");
	HX_MARK_MEMBER_NAME(CairoPattern_Impl__obj::lime_cairo_pattern_create_rgb,"lime_cairo_pattern_create_rgb");
	HX_MARK_MEMBER_NAME(CairoPattern_Impl__obj::lime_cairo_pattern_create_rgba,"lime_cairo_pattern_create_rgba");
	HX_MARK_MEMBER_NAME(CairoPattern_Impl__obj::lime_cairo_pattern_destroy,"lime_cairo_pattern_destroy");
	HX_MARK_MEMBER_NAME(CairoPattern_Impl__obj::lime_cairo_pattern_get_color_stop_count,"lime_cairo_pattern_get_color_stop_count");
	HX_MARK_MEMBER_NAME(CairoPattern_Impl__obj::lime_cairo_pattern_get_extend,"lime_cairo_pattern_get_extend");
	HX_MARK_MEMBER_NAME(CairoPattern_Impl__obj::lime_cairo_pattern_get_filter,"lime_cairo_pattern_get_filter");
	HX_MARK_MEMBER_NAME(CairoPattern_Impl__obj::lime_cairo_pattern_get_matrix,"lime_cairo_pattern_get_matrix");
	HX_MARK_MEMBER_NAME(CairoPattern_Impl__obj::lime_cairo_pattern_set_extend,"lime_cairo_pattern_set_extend");
	HX_MARK_MEMBER_NAME(CairoPattern_Impl__obj::lime_cairo_pattern_set_filter,"lime_cairo_pattern_set_filter");
	HX_MARK_MEMBER_NAME(CairoPattern_Impl__obj::lime_cairo_pattern_set_matrix,"lime_cairo_pattern_set_matrix");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(CairoPattern_Impl__obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(CairoPattern_Impl__obj::lime_cairo_pattern_add_color_stop_rgb,"lime_cairo_pattern_add_color_stop_rgb");
	HX_VISIT_MEMBER_NAME(CairoPattern_Impl__obj::lime_cairo_pattern_add_color_stop_rgba,"lime_cairo_pattern_add_color_stop_rgba");
	HX_VISIT_MEMBER_NAME(CairoPattern_Impl__obj::lime_cairo_pattern_create_for_surface,"lime_cairo_pattern_create_for_surface");
	HX_VISIT_MEMBER_NAME(CairoPattern_Impl__obj::lime_cairo_pattern_create_linear,"lime_cairo_pattern_create_linear");
	HX_VISIT_MEMBER_NAME(CairoPattern_Impl__obj::lime_cairo_pattern_create_radial,"lime_cairo_pattern_create_radial");
	HX_VISIT_MEMBER_NAME(CairoPattern_Impl__obj::lime_cairo_pattern_create_rgb,"lime_cairo_pattern_create_rgb");
	HX_VISIT_MEMBER_NAME(CairoPattern_Impl__obj::lime_cairo_pattern_create_rgba,"lime_cairo_pattern_create_rgba");
	HX_VISIT_MEMBER_NAME(CairoPattern_Impl__obj::lime_cairo_pattern_destroy,"lime_cairo_pattern_destroy");
	HX_VISIT_MEMBER_NAME(CairoPattern_Impl__obj::lime_cairo_pattern_get_color_stop_count,"lime_cairo_pattern_get_color_stop_count");
	HX_VISIT_MEMBER_NAME(CairoPattern_Impl__obj::lime_cairo_pattern_get_extend,"lime_cairo_pattern_get_extend");
	HX_VISIT_MEMBER_NAME(CairoPattern_Impl__obj::lime_cairo_pattern_get_filter,"lime_cairo_pattern_get_filter");
	HX_VISIT_MEMBER_NAME(CairoPattern_Impl__obj::lime_cairo_pattern_get_matrix,"lime_cairo_pattern_get_matrix");
	HX_VISIT_MEMBER_NAME(CairoPattern_Impl__obj::lime_cairo_pattern_set_extend,"lime_cairo_pattern_set_extend");
	HX_VISIT_MEMBER_NAME(CairoPattern_Impl__obj::lime_cairo_pattern_set_filter,"lime_cairo_pattern_set_filter");
	HX_VISIT_MEMBER_NAME(CairoPattern_Impl__obj::lime_cairo_pattern_set_matrix,"lime_cairo_pattern_set_matrix");
};

#endif

hx::Class CairoPattern_Impl__obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("_new","\x61","\x15","\x1f","\x3f"),
	HX_HCSTRING("addColorStopRGB","\xc9","\x58","\xf1","\xf2"),
	HX_HCSTRING("addColorStopRGBA","\x58","\x57","\x3c","\xa0"),
	HX_HCSTRING("createForSurface","\x40","\x28","\x97","\xec"),
	HX_HCSTRING("createLinear","\x01","\x92","\xf5","\x0e"),
	HX_HCSTRING("createRadial","\xfb","\xfe","\x4b","\xd3"),
	HX_HCSTRING("createRGB","\x71","\x95","\xe4","\x49"),
	HX_HCSTRING("createRGBA","\xb0","\x2d","\x1e","\x5e"),
	HX_HCSTRING("destroy","\xfa","\x2c","\x86","\x24"),
	HX_HCSTRING("get_colorStopCount","\x53","\x08","\xec","\x5d"),
	HX_HCSTRING("get_extend","\xa3","\x41","\xa2","\xb7"),
	HX_HCSTRING("set_extend","\x17","\xe0","\x1f","\xbb"),
	HX_HCSTRING("get_filter","\x81","\x8f","\xbc","\x75"),
	HX_HCSTRING("set_filter","\xf5","\x2d","\x3a","\x79"),
	HX_HCSTRING("get_matrix","\x0a","\xa6","\x4f","\xac"),
	HX_HCSTRING("set_matrix","\x7e","\x44","\xcd","\xaf"),
	HX_HCSTRING("lime_cairo_pattern_add_color_stop_rgb","\x5a","\x49","\x3d","\xbb"),
	HX_HCSTRING("lime_cairo_pattern_add_color_stop_rgba","\xc7","\xe5","\x62","\x1a"),
	HX_HCSTRING("lime_cairo_pattern_create_for_surface","\xc4","\x41","\xff","\xa6"),
	HX_HCSTRING("lime_cairo_pattern_create_linear","\xf8","\x82","\x42","\xcf"),
	HX_HCSTRING("lime_cairo_pattern_create_radial","\xf2","\xef","\x98","\x93"),
	HX_HCSTRING("lime_cairo_pattern_create_rgb","\x1a","\x90","\x6b","\xce"),
	HX_HCSTRING("lime_cairo_pattern_create_rgba","\x07","\x87","\xb2","\xcf"),
	HX_HCSTRING("lime_cairo_pattern_destroy","\xea","\xc7","\xb0","\x1c"),
	HX_HCSTRING("lime_cairo_pattern_get_color_stop_count","\x47","\x7e","\x23","\xf0"),
	HX_HCSTRING("lime_cairo_pattern_get_extend","\xb3","\x1c","\x37","\x1f"),
	HX_HCSTRING("lime_cairo_pattern_get_filter","\x91","\x6a","\x51","\xdd"),
	HX_HCSTRING("lime_cairo_pattern_get_matrix","\x1a","\x81","\xe4","\x13"),
	HX_HCSTRING("lime_cairo_pattern_set_extend","\x27","\xbb","\xb4","\x22"),
	HX_HCSTRING("lime_cairo_pattern_set_filter","\x05","\x09","\xcf","\xe0"),
	HX_HCSTRING("lime_cairo_pattern_set_matrix","\x8e","\x1f","\x62","\x17"),
	::String(null()) };

void CairoPattern_Impl__obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("lime.graphics.cairo._CairoPattern.CairoPattern_Impl_","\x5f","\x30","\x47","\xb0");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &CairoPattern_Impl__obj::__GetStatic;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< CairoPattern_Impl__obj >;
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

void CairoPattern_Impl__obj::__boot()
{
	lime_cairo_pattern_add_color_stop_rgb= ::lime::_system::System_obj::load(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_cairo_pattern_add_color_stop_rgb","\x5a","\x49","\x3d","\xbb"),(int)5,null());
	lime_cairo_pattern_add_color_stop_rgba= ::lime::_system::System_obj::load(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_cairo_pattern_add_color_stop_rgba","\xc7","\xe5","\x62","\x1a"),(int)-1,null());
	lime_cairo_pattern_create_for_surface= ::lime::_system::System_obj::load(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_cairo_pattern_create_for_surface","\xc4","\x41","\xff","\xa6"),(int)1,null());
	lime_cairo_pattern_create_linear= ::lime::_system::System_obj::load(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_cairo_pattern_create_linear","\xf8","\x82","\x42","\xcf"),(int)4,null());
	lime_cairo_pattern_create_radial= ::lime::_system::System_obj::load(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_cairo_pattern_create_radial","\xf2","\xef","\x98","\x93"),(int)-1,null());
	lime_cairo_pattern_create_rgb= ::lime::_system::System_obj::load(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_cairo_pattern_create_rgb","\x1a","\x90","\x6b","\xce"),(int)3,null());
	lime_cairo_pattern_create_rgba= ::lime::_system::System_obj::load(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_cairo_pattern_create_rgba","\x07","\x87","\xb2","\xcf"),(int)4,null());
	lime_cairo_pattern_destroy= ::lime::_system::System_obj::load(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_cairo_pattern_destroy","\xea","\xc7","\xb0","\x1c"),(int)1,null());
	lime_cairo_pattern_get_color_stop_count= ::lime::_system::System_obj::load(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_cairo_pattern_get_color_stop_count","\x47","\x7e","\x23","\xf0"),(int)1,null());
	lime_cairo_pattern_get_extend= ::lime::_system::System_obj::load(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_cairo_pattern_get_extend","\xb3","\x1c","\x37","\x1f"),(int)1,null());
	lime_cairo_pattern_get_filter= ::lime::_system::System_obj::load(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_cairo_pattern_get_filter","\x91","\x6a","\x51","\xdd"),(int)1,null());
	lime_cairo_pattern_get_matrix= ::lime::_system::System_obj::load(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_cairo_pattern_get_matrix","\x1a","\x81","\xe4","\x13"),(int)1,null());
	lime_cairo_pattern_set_extend= ::lime::_system::System_obj::load(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_cairo_pattern_set_extend","\x27","\xbb","\xb4","\x22"),(int)2,null());
	lime_cairo_pattern_set_filter= ::lime::_system::System_obj::load(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_cairo_pattern_set_filter","\x05","\x09","\xcf","\xe0"),(int)2,null());
	lime_cairo_pattern_set_matrix= ::lime::_system::System_obj::load(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_cairo_pattern_set_matrix","\x8e","\x1f","\x62","\x17"),(int)2,null());
}

} // end namespace lime
} // end namespace graphics
} // end namespace cairo
} // end namespace _CairoPattern
