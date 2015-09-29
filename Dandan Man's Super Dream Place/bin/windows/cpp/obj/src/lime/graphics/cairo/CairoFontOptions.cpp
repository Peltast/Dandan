#include <hxcpp.h>

#ifndef INCLUDED_lime_graphics_cairo_CairoFontOptions
#include <lime/graphics/cairo/CairoFontOptions.h>
#endif
#ifndef INCLUDED_lime_system_System
#include <lime/system/System.h>
#endif
namespace lime{
namespace graphics{
namespace cairo{

Void CairoFontOptions_obj::__construct(Dynamic handle)
{
HX_STACK_FRAME("lime.graphics.cairo.CairoFontOptions","new",0x8d4576c9,"lime.graphics.cairo.CairoFontOptions.new","lime/graphics/cairo/CairoFontOptions.hx",19,0x355ba586)
HX_STACK_THIS(this)
HX_STACK_ARG(handle,"handle")
{
	HX_STACK_LINE(22)
	bool tmp = (handle == null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(22)
	if ((tmp)){
		HX_STACK_LINE(24)
		Dynamic tmp1 = ::lime::graphics::cairo::CairoFontOptions_obj::lime_cairo_font_options_create();		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(24)
		handle = tmp1;
	}
	HX_STACK_LINE(29)
	this->handle = handle;
}
;
	return null();
}

//CairoFontOptions_obj::~CairoFontOptions_obj() { }

Dynamic CairoFontOptions_obj::__CreateEmpty() { return  new CairoFontOptions_obj; }
hx::ObjectPtr< CairoFontOptions_obj > CairoFontOptions_obj::__new(Dynamic handle)
{  hx::ObjectPtr< CairoFontOptions_obj > _result_ = new CairoFontOptions_obj();
	_result_->__construct(handle);
	return _result_;}

Dynamic CairoFontOptions_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< CairoFontOptions_obj > _result_ = new CairoFontOptions_obj();
	_result_->__construct(inArgs[0]);
	return _result_;}

int CairoFontOptions_obj::get_antialias( ){
	HX_STACK_FRAME("lime.graphics.cairo.CairoFontOptions","get_antialias",0xd044ce2e,"lime.graphics.cairo.CairoFontOptions.get_antialias","lime/graphics/cairo/CairoFontOptions.hx",41,0x355ba586)
	HX_STACK_THIS(this)
	HX_STACK_LINE(44)
	Dynamic tmp = this->handle;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(44)
	int tmp1 = ::lime::graphics::cairo::CairoFontOptions_obj::lime_cairo_font_options_get_antialias(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(44)
	return tmp1;
	HX_STACK_LINE(47)
	return (int)0;
}


HX_DEFINE_DYNAMIC_FUNC0(CairoFontOptions_obj,get_antialias,return )

int CairoFontOptions_obj::set_antialias( int value){
	HX_STACK_FRAME("lime.graphics.cairo.CairoFontOptions","set_antialias",0x154ab03a,"lime.graphics.cairo.CairoFontOptions.set_antialias","lime/graphics/cairo/CairoFontOptions.hx",52,0x355ba586)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(55)
	Dynamic tmp = this->handle;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(55)
	int tmp1 = value;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(55)
	::lime::graphics::cairo::CairoFontOptions_obj::lime_cairo_font_options_set_antialias(tmp,tmp1);
	HX_STACK_LINE(58)
	int tmp2 = value;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(58)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC1(CairoFontOptions_obj,set_antialias,return )

int CairoFontOptions_obj::get_hintMetrics( ){
	HX_STACK_FRAME("lime.graphics.cairo.CairoFontOptions","get_hintMetrics",0xa24b32fc,"lime.graphics.cairo.CairoFontOptions.get_hintMetrics","lime/graphics/cairo/CairoFontOptions.hx",63,0x355ba586)
	HX_STACK_THIS(this)
	HX_STACK_LINE(66)
	Dynamic tmp = this->handle;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(66)
	int tmp1 = ::lime::graphics::cairo::CairoFontOptions_obj::lime_cairo_font_options_get_hint_metrics(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(66)
	return tmp1;
	HX_STACK_LINE(69)
	return (int)0;
}


HX_DEFINE_DYNAMIC_FUNC0(CairoFontOptions_obj,get_hintMetrics,return )

int CairoFontOptions_obj::set_hintMetrics( int value){
	HX_STACK_FRAME("lime.graphics.cairo.CairoFontOptions","set_hintMetrics",0x9e16b008,"lime.graphics.cairo.CairoFontOptions.set_hintMetrics","lime/graphics/cairo/CairoFontOptions.hx",74,0x355ba586)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(77)
	Dynamic tmp = this->handle;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(77)
	int tmp1 = value;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(77)
	::lime::graphics::cairo::CairoFontOptions_obj::lime_cairo_font_options_set_hint_metrics(tmp,tmp1);
	HX_STACK_LINE(80)
	int tmp2 = value;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(80)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC1(CairoFontOptions_obj,set_hintMetrics,return )

int CairoFontOptions_obj::get_hintStyle( ){
	HX_STACK_FRAME("lime.graphics.cairo.CairoFontOptions","get_hintStyle",0xd90865aa,"lime.graphics.cairo.CairoFontOptions.get_hintStyle","lime/graphics/cairo/CairoFontOptions.hx",86,0x355ba586)
	HX_STACK_THIS(this)
	HX_STACK_LINE(89)
	Dynamic tmp = this->handle;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(89)
	int tmp1 = ::lime::graphics::cairo::CairoFontOptions_obj::lime_cairo_font_options_get_hint_style(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(89)
	return tmp1;
	HX_STACK_LINE(92)
	return (int)0;
}


HX_DEFINE_DYNAMIC_FUNC0(CairoFontOptions_obj,get_hintStyle,return )

int CairoFontOptions_obj::set_hintStyle( int value){
	HX_STACK_FRAME("lime.graphics.cairo.CairoFontOptions","set_hintStyle",0x1e0e47b6,"lime.graphics.cairo.CairoFontOptions.set_hintStyle","lime/graphics/cairo/CairoFontOptions.hx",97,0x355ba586)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(100)
	Dynamic tmp = this->handle;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(100)
	int tmp1 = value;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(100)
	::lime::graphics::cairo::CairoFontOptions_obj::lime_cairo_font_options_set_hint_style(tmp,tmp1);
	HX_STACK_LINE(103)
	int tmp2 = value;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(103)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC1(CairoFontOptions_obj,set_hintStyle,return )

int CairoFontOptions_obj::get_subpixelOrder( ){
	HX_STACK_FRAME("lime.graphics.cairo.CairoFontOptions","get_subpixelOrder",0xc7167528,"lime.graphics.cairo.CairoFontOptions.get_subpixelOrder","lime/graphics/cairo/CairoFontOptions.hx",108,0x355ba586)
	HX_STACK_THIS(this)
	HX_STACK_LINE(111)
	Dynamic tmp = this->handle;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(111)
	int tmp1 = ::lime::graphics::cairo::CairoFontOptions_obj::lime_cairo_font_options_get_subpixel_order(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(111)
	return tmp1;
	HX_STACK_LINE(114)
	return (int)0;
}


HX_DEFINE_DYNAMIC_FUNC0(CairoFontOptions_obj,get_subpixelOrder,return )

int CairoFontOptions_obj::set_subpixelOrder( int value){
	HX_STACK_FRAME("lime.graphics.cairo.CairoFontOptions","set_subpixelOrder",0xea844d34,"lime.graphics.cairo.CairoFontOptions.set_subpixelOrder","lime/graphics/cairo/CairoFontOptions.hx",119,0x355ba586)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(122)
	Dynamic tmp = this->handle;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(122)
	int tmp1 = value;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(122)
	::lime::graphics::cairo::CairoFontOptions_obj::lime_cairo_font_options_set_subpixel_order(tmp,tmp1);
	HX_STACK_LINE(125)
	int tmp2 = value;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(125)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC1(CairoFontOptions_obj,set_subpixelOrder,return )

Dynamic CairoFontOptions_obj::lime_cairo_font_options_create;

Dynamic CairoFontOptions_obj::lime_cairo_font_options_get_antialias;

Dynamic CairoFontOptions_obj::lime_cairo_font_options_get_hint_metrics;

Dynamic CairoFontOptions_obj::lime_cairo_font_options_get_hint_style;

Dynamic CairoFontOptions_obj::lime_cairo_font_options_get_subpixel_order;

Dynamic CairoFontOptions_obj::lime_cairo_font_options_set_antialias;

Dynamic CairoFontOptions_obj::lime_cairo_font_options_set_hint_metrics;

Dynamic CairoFontOptions_obj::lime_cairo_font_options_set_hint_style;

Dynamic CairoFontOptions_obj::lime_cairo_font_options_set_subpixel_order;


CairoFontOptions_obj::CairoFontOptions_obj()
{
}

void CairoFontOptions_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(CairoFontOptions);
	HX_MARK_MEMBER_NAME(handle,"handle");
	HX_MARK_END_CLASS();
}

void CairoFontOptions_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(handle,"handle");
}

Dynamic CairoFontOptions_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"handle") ) { return handle; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"antialias") ) { if (inCallProp == hx::paccAlways) return get_antialias(); }
		if (HX_FIELD_EQ(inName,"hintStyle") ) { if (inCallProp == hx::paccAlways) return get_hintStyle(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"hintMetrics") ) { if (inCallProp == hx::paccAlways) return get_hintMetrics(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"subpixelOrder") ) { if (inCallProp == hx::paccAlways) return get_subpixelOrder(); }
		if (HX_FIELD_EQ(inName,"get_antialias") ) { return get_antialias_dyn(); }
		if (HX_FIELD_EQ(inName,"set_antialias") ) { return set_antialias_dyn(); }
		if (HX_FIELD_EQ(inName,"get_hintStyle") ) { return get_hintStyle_dyn(); }
		if (HX_FIELD_EQ(inName,"set_hintStyle") ) { return set_hintStyle_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"get_hintMetrics") ) { return get_hintMetrics_dyn(); }
		if (HX_FIELD_EQ(inName,"set_hintMetrics") ) { return set_hintMetrics_dyn(); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"get_subpixelOrder") ) { return get_subpixelOrder_dyn(); }
		if (HX_FIELD_EQ(inName,"set_subpixelOrder") ) { return set_subpixelOrder_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

bool CairoFontOptions_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 30:
		if (HX_FIELD_EQ(inName,"lime_cairo_font_options_create") ) { outValue = lime_cairo_font_options_create; return true;  }
		break;
	case 37:
		if (HX_FIELD_EQ(inName,"lime_cairo_font_options_get_antialias") ) { outValue = lime_cairo_font_options_get_antialias; return true;  }
		if (HX_FIELD_EQ(inName,"lime_cairo_font_options_set_antialias") ) { outValue = lime_cairo_font_options_set_antialias; return true;  }
		break;
	case 38:
		if (HX_FIELD_EQ(inName,"lime_cairo_font_options_get_hint_style") ) { outValue = lime_cairo_font_options_get_hint_style; return true;  }
		if (HX_FIELD_EQ(inName,"lime_cairo_font_options_set_hint_style") ) { outValue = lime_cairo_font_options_set_hint_style; return true;  }
		break;
	case 40:
		if (HX_FIELD_EQ(inName,"lime_cairo_font_options_get_hint_metrics") ) { outValue = lime_cairo_font_options_get_hint_metrics; return true;  }
		if (HX_FIELD_EQ(inName,"lime_cairo_font_options_set_hint_metrics") ) { outValue = lime_cairo_font_options_set_hint_metrics; return true;  }
		break;
	case 42:
		if (HX_FIELD_EQ(inName,"lime_cairo_font_options_get_subpixel_order") ) { outValue = lime_cairo_font_options_get_subpixel_order; return true;  }
		if (HX_FIELD_EQ(inName,"lime_cairo_font_options_set_subpixel_order") ) { outValue = lime_cairo_font_options_set_subpixel_order; return true;  }
	}
	return false;
}

Dynamic CairoFontOptions_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"handle") ) { handle=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"antialias") ) { if (inCallProp == hx::paccAlways) return set_antialias(inValue); }
		if (HX_FIELD_EQ(inName,"hintStyle") ) { if (inCallProp == hx::paccAlways) return set_hintStyle(inValue); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"hintMetrics") ) { if (inCallProp == hx::paccAlways) return set_hintMetrics(inValue); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"subpixelOrder") ) { if (inCallProp == hx::paccAlways) return set_subpixelOrder(inValue); }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool CairoFontOptions_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 30:
		if (HX_FIELD_EQ(inName,"lime_cairo_font_options_create") ) { lime_cairo_font_options_create=ioValue.Cast< Dynamic >(); return true; }
		break;
	case 37:
		if (HX_FIELD_EQ(inName,"lime_cairo_font_options_get_antialias") ) { lime_cairo_font_options_get_antialias=ioValue.Cast< Dynamic >(); return true; }
		if (HX_FIELD_EQ(inName,"lime_cairo_font_options_set_antialias") ) { lime_cairo_font_options_set_antialias=ioValue.Cast< Dynamic >(); return true; }
		break;
	case 38:
		if (HX_FIELD_EQ(inName,"lime_cairo_font_options_get_hint_style") ) { lime_cairo_font_options_get_hint_style=ioValue.Cast< Dynamic >(); return true; }
		if (HX_FIELD_EQ(inName,"lime_cairo_font_options_set_hint_style") ) { lime_cairo_font_options_set_hint_style=ioValue.Cast< Dynamic >(); return true; }
		break;
	case 40:
		if (HX_FIELD_EQ(inName,"lime_cairo_font_options_get_hint_metrics") ) { lime_cairo_font_options_get_hint_metrics=ioValue.Cast< Dynamic >(); return true; }
		if (HX_FIELD_EQ(inName,"lime_cairo_font_options_set_hint_metrics") ) { lime_cairo_font_options_set_hint_metrics=ioValue.Cast< Dynamic >(); return true; }
		break;
	case 42:
		if (HX_FIELD_EQ(inName,"lime_cairo_font_options_get_subpixel_order") ) { lime_cairo_font_options_get_subpixel_order=ioValue.Cast< Dynamic >(); return true; }
		if (HX_FIELD_EQ(inName,"lime_cairo_font_options_set_subpixel_order") ) { lime_cairo_font_options_set_subpixel_order=ioValue.Cast< Dynamic >(); return true; }
	}
	return false;
}

void CairoFontOptions_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("antialias","\xae","\xd6","\xe9","\x75"));
	outFields->push(HX_HCSTRING("hintMetrics","\x7c","\x5b","\xa3","\xc1"));
	outFields->push(HX_HCSTRING("hintStyle","\x2a","\x6e","\xad","\x7e"));
	outFields->push(HX_HCSTRING("subpixelOrder","\xa8","\xbd","\x29","\x8b"));
	outFields->push(HX_HCSTRING("handle","\xa8","\x83","\xfd","\xb7"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(CairoFontOptions_obj,handle),HX_HCSTRING("handle","\xa8","\x83","\xfd","\xb7")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo sStaticStorageInfo[] = {
	{hx::fsObject /*Dynamic*/ ,(void *) &CairoFontOptions_obj::lime_cairo_font_options_create,HX_HCSTRING("lime_cairo_font_options_create","\x4c","\x3f","\x9e","\x9d")},
	{hx::fsObject /*Dynamic*/ ,(void *) &CairoFontOptions_obj::lime_cairo_font_options_get_antialias,HX_HCSTRING("lime_cairo_font_options_get_antialias","\x35","\x7c","\x8d","\xf3")},
	{hx::fsObject /*Dynamic*/ ,(void *) &CairoFontOptions_obj::lime_cairo_font_options_get_hint_metrics,HX_HCSTRING("lime_cairo_font_options_get_hint_metrics","\x24","\xe1","\x9b","\x00")},
	{hx::fsObject /*Dynamic*/ ,(void *) &CairoFontOptions_obj::lime_cairo_font_options_get_hint_style,HX_HCSTRING("lime_cairo_font_options_get_hint_style","\xd2","\xb9","\x3d","\x00")},
	{hx::fsObject /*Dynamic*/ ,(void *) &CairoFontOptions_obj::lime_cairo_font_options_get_subpixel_order,HX_HCSTRING("lime_cairo_font_options_get_subpixel_order","\x6e","\x5e","\x52","\xfe")},
	{hx::fsObject /*Dynamic*/ ,(void *) &CairoFontOptions_obj::lime_cairo_font_options_set_antialias,HX_HCSTRING("lime_cairo_font_options_set_antialias","\x41","\x5e","\x93","\x38")},
	{hx::fsObject /*Dynamic*/ ,(void *) &CairoFontOptions_obj::lime_cairo_font_options_set_hint_metrics,HX_HCSTRING("lime_cairo_font_options_set_hint_metrics","\x98","\xce","\xdd","\x56")},
	{hx::fsObject /*Dynamic*/ ,(void *) &CairoFontOptions_obj::lime_cairo_font_options_set_hint_style,HX_HCSTRING("lime_cairo_font_options_set_hint_style","\x46","\xa2","\x5d","\x20")},
	{hx::fsObject /*Dynamic*/ ,(void *) &CairoFontOptions_obj::lime_cairo_font_options_set_subpixel_order,HX_HCSTRING("lime_cairo_font_options_set_subpixel_order","\xe2","\x90","\x01","\xdb")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("handle","\xa8","\x83","\xfd","\xb7"),
	HX_HCSTRING("get_antialias","\x85","\xaa","\x4d","\x37"),
	HX_HCSTRING("set_antialias","\x91","\x8c","\x53","\x7c"),
	HX_HCSTRING("get_hintMetrics","\x13","\x13","\x85","\x82"),
	HX_HCSTRING("set_hintMetrics","\x1f","\x90","\x50","\x7e"),
	HX_HCSTRING("get_hintStyle","\x01","\x42","\x11","\x40"),
	HX_HCSTRING("set_hintStyle","\x0d","\x24","\x17","\x85"),
	HX_HCSTRING("get_subpixelOrder","\xff","\xc8","\x99","\x91"),
	HX_HCSTRING("set_subpixelOrder","\x0b","\xa1","\x07","\xb5"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(CairoFontOptions_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(CairoFontOptions_obj::lime_cairo_font_options_create,"lime_cairo_font_options_create");
	HX_MARK_MEMBER_NAME(CairoFontOptions_obj::lime_cairo_font_options_get_antialias,"lime_cairo_font_options_get_antialias");
	HX_MARK_MEMBER_NAME(CairoFontOptions_obj::lime_cairo_font_options_get_hint_metrics,"lime_cairo_font_options_get_hint_metrics");
	HX_MARK_MEMBER_NAME(CairoFontOptions_obj::lime_cairo_font_options_get_hint_style,"lime_cairo_font_options_get_hint_style");
	HX_MARK_MEMBER_NAME(CairoFontOptions_obj::lime_cairo_font_options_get_subpixel_order,"lime_cairo_font_options_get_subpixel_order");
	HX_MARK_MEMBER_NAME(CairoFontOptions_obj::lime_cairo_font_options_set_antialias,"lime_cairo_font_options_set_antialias");
	HX_MARK_MEMBER_NAME(CairoFontOptions_obj::lime_cairo_font_options_set_hint_metrics,"lime_cairo_font_options_set_hint_metrics");
	HX_MARK_MEMBER_NAME(CairoFontOptions_obj::lime_cairo_font_options_set_hint_style,"lime_cairo_font_options_set_hint_style");
	HX_MARK_MEMBER_NAME(CairoFontOptions_obj::lime_cairo_font_options_set_subpixel_order,"lime_cairo_font_options_set_subpixel_order");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(CairoFontOptions_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(CairoFontOptions_obj::lime_cairo_font_options_create,"lime_cairo_font_options_create");
	HX_VISIT_MEMBER_NAME(CairoFontOptions_obj::lime_cairo_font_options_get_antialias,"lime_cairo_font_options_get_antialias");
	HX_VISIT_MEMBER_NAME(CairoFontOptions_obj::lime_cairo_font_options_get_hint_metrics,"lime_cairo_font_options_get_hint_metrics");
	HX_VISIT_MEMBER_NAME(CairoFontOptions_obj::lime_cairo_font_options_get_hint_style,"lime_cairo_font_options_get_hint_style");
	HX_VISIT_MEMBER_NAME(CairoFontOptions_obj::lime_cairo_font_options_get_subpixel_order,"lime_cairo_font_options_get_subpixel_order");
	HX_VISIT_MEMBER_NAME(CairoFontOptions_obj::lime_cairo_font_options_set_antialias,"lime_cairo_font_options_set_antialias");
	HX_VISIT_MEMBER_NAME(CairoFontOptions_obj::lime_cairo_font_options_set_hint_metrics,"lime_cairo_font_options_set_hint_metrics");
	HX_VISIT_MEMBER_NAME(CairoFontOptions_obj::lime_cairo_font_options_set_hint_style,"lime_cairo_font_options_set_hint_style");
	HX_VISIT_MEMBER_NAME(CairoFontOptions_obj::lime_cairo_font_options_set_subpixel_order,"lime_cairo_font_options_set_subpixel_order");
};

#endif

hx::Class CairoFontOptions_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("lime_cairo_font_options_create","\x4c","\x3f","\x9e","\x9d"),
	HX_HCSTRING("lime_cairo_font_options_get_antialias","\x35","\x7c","\x8d","\xf3"),
	HX_HCSTRING("lime_cairo_font_options_get_hint_metrics","\x24","\xe1","\x9b","\x00"),
	HX_HCSTRING("lime_cairo_font_options_get_hint_style","\xd2","\xb9","\x3d","\x00"),
	HX_HCSTRING("lime_cairo_font_options_get_subpixel_order","\x6e","\x5e","\x52","\xfe"),
	HX_HCSTRING("lime_cairo_font_options_set_antialias","\x41","\x5e","\x93","\x38"),
	HX_HCSTRING("lime_cairo_font_options_set_hint_metrics","\x98","\xce","\xdd","\x56"),
	HX_HCSTRING("lime_cairo_font_options_set_hint_style","\x46","\xa2","\x5d","\x20"),
	HX_HCSTRING("lime_cairo_font_options_set_subpixel_order","\xe2","\x90","\x01","\xdb"),
	::String(null()) };

void CairoFontOptions_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("lime.graphics.cairo.CairoFontOptions","\x57","\x5e","\x26","\x21");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &CairoFontOptions_obj::__GetStatic;
	__mClass->mSetStaticField = &CairoFontOptions_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< CairoFontOptions_obj >;
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

void CairoFontOptions_obj::__boot()
{
	lime_cairo_font_options_create= ::lime::_system::System_obj::load(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_cairo_font_options_create","\x4c","\x3f","\x9e","\x9d"),(int)0,null());
	lime_cairo_font_options_get_antialias= ::lime::_system::System_obj::load(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_cairo_font_options_get_antialias","\x35","\x7c","\x8d","\xf3"),(int)1,null());
	lime_cairo_font_options_get_hint_metrics= ::lime::_system::System_obj::load(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_cairo_font_options_get_hint_metrics","\x24","\xe1","\x9b","\x00"),(int)1,null());
	lime_cairo_font_options_get_hint_style= ::lime::_system::System_obj::load(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_cairo_font_options_get_hint_style","\xd2","\xb9","\x3d","\x00"),(int)1,null());
	lime_cairo_font_options_get_subpixel_order= ::lime::_system::System_obj::load(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_cairo_font_options_get_subpixel_order","\x6e","\x5e","\x52","\xfe"),(int)1,null());
	lime_cairo_font_options_set_antialias= ::lime::_system::System_obj::load(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_cairo_font_options_set_antialias","\x41","\x5e","\x93","\x38"),(int)2,null());
	lime_cairo_font_options_set_hint_metrics= ::lime::_system::System_obj::load(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_cairo_font_options_set_hint_metrics","\x98","\xce","\xdd","\x56"),(int)2,null());
	lime_cairo_font_options_set_hint_style= ::lime::_system::System_obj::load(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_cairo_font_options_set_hint_style","\x46","\xa2","\x5d","\x20"),(int)2,null());
	lime_cairo_font_options_set_subpixel_order= ::lime::_system::System_obj::load(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_cairo_font_options_set_subpixel_order","\xe2","\x90","\x01","\xdb"),(int)2,null());
}

} // end namespace lime
} // end namespace graphics
} // end namespace cairo
