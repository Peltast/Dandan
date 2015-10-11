#include <hxcpp.h>

#ifndef INCLUDED_lime_graphics_cairo_CairoFont
#include <lime/graphics/cairo/CairoFont.h>
#endif
#ifndef INCLUDED_lime_system_System
#include <lime/system/System.h>
#endif
#ifndef INCLUDED_lime_text_Font
#include <lime/text/Font.h>
#endif
namespace lime{
namespace graphics{
namespace cairo{

Void CairoFont_obj::__construct(::lime::text::Font font,hx::Null< int >  __o_flags)
{
HX_STACK_FRAME("lime.graphics.cairo.CairoFont","new",0x8856a439,"lime.graphics.cairo.CairoFont.new","lime/graphics/cairo/CairoFont.hx",18,0xfe48f2b8)
HX_STACK_THIS(this)
HX_STACK_ARG(font,"font")
HX_STACK_ARG(__o_flags,"flags")
int flags = __o_flags.Default(0);
{
	HX_STACK_LINE(22)
	this->font = font;
	HX_STACK_LINE(24)
	bool tmp = (font != null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(24)
	bool tmp1;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(24)
	if ((tmp)){
		HX_STACK_LINE(24)
		tmp1 = (font->src != null());
	}
	else{
		HX_STACK_LINE(24)
		tmp1 = false;
	}
	HX_STACK_LINE(24)
	if ((tmp1)){
		HX_STACK_LINE(26)
		Dynamic tmp2 = font->src;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(26)
		int tmp3 = flags;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(26)
		Dynamic tmp4 = ::lime::graphics::cairo::CairoFont_obj::lime_cairo_ft_font_face_create_for_ft_face(tmp2,tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(26)
		this->handle = tmp4;
	}
}
;
	return null();
}

//CairoFont_obj::~CairoFont_obj() { }

Dynamic CairoFont_obj::__CreateEmpty() { return  new CairoFont_obj; }
hx::ObjectPtr< CairoFont_obj > CairoFont_obj::__new(::lime::text::Font font,hx::Null< int >  __o_flags)
{  hx::ObjectPtr< CairoFont_obj > _result_ = new CairoFont_obj();
	_result_->__construct(font,__o_flags);
	return _result_;}

Dynamic CairoFont_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< CairoFont_obj > _result_ = new CairoFont_obj();
	_result_->__construct(inArgs[0],inArgs[1]);
	return _result_;}

Void CairoFont_obj::destroy( ){
{
		HX_STACK_FRAME("lime.graphics.cairo.CairoFont","destroy",0x53e26153,"lime.graphics.cairo.CairoFont.destroy","lime/graphics/cairo/CairoFont.hx",35,0xfe48f2b8)
		HX_STACK_THIS(this)
		HX_STACK_LINE(39)
		Dynamic tmp = this->handle;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(39)
		bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(39)
		if ((tmp1)){
			HX_STACK_LINE(41)
			Dynamic tmp2 = this->handle;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(41)
			::lime::graphics::cairo::CairoFont_obj::lime_cairo_font_face_destroy(tmp2);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(CairoFont_obj,destroy,(void))

int CairoFont_obj::FT_LOAD_FORCE_AUTOHINT;

Dynamic CairoFont_obj::lime_cairo_ft_font_face_create_for_ft_face;

Dynamic CairoFont_obj::lime_cairo_font_face_destroy;


CairoFont_obj::CairoFont_obj()
{
}

void CairoFont_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(CairoFont);
	HX_MARK_MEMBER_NAME(font,"font");
	HX_MARK_MEMBER_NAME(handle,"handle");
	HX_MARK_END_CLASS();
}

void CairoFont_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(font,"font");
	HX_VISIT_MEMBER_NAME(handle,"handle");
}

Dynamic CairoFont_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"font") ) { return font; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"handle") ) { return handle; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"destroy") ) { return destroy_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

bool CairoFont_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 28:
		if (HX_FIELD_EQ(inName,"lime_cairo_font_face_destroy") ) { outValue = lime_cairo_font_face_destroy; return true;  }
		break;
	case 42:
		if (HX_FIELD_EQ(inName,"lime_cairo_ft_font_face_create_for_ft_face") ) { outValue = lime_cairo_ft_font_face_create_for_ft_face; return true;  }
	}
	return false;
}

Dynamic CairoFont_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"font") ) { font=inValue.Cast< ::lime::text::Font >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"handle") ) { handle=inValue.Cast< Dynamic >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool CairoFont_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 28:
		if (HX_FIELD_EQ(inName,"lime_cairo_font_face_destroy") ) { lime_cairo_font_face_destroy=ioValue.Cast< Dynamic >(); return true; }
		break;
	case 42:
		if (HX_FIELD_EQ(inName,"lime_cairo_ft_font_face_create_for_ft_face") ) { lime_cairo_ft_font_face_create_for_ft_face=ioValue.Cast< Dynamic >(); return true; }
	}
	return false;
}

void CairoFont_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("font","\xcf","\x5d","\xc0","\x43"));
	outFields->push(HX_HCSTRING("handle","\xa8","\x83","\xfd","\xb7"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::lime::text::Font*/ ,(int)offsetof(CairoFont_obj,font),HX_HCSTRING("font","\xcf","\x5d","\xc0","\x43")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(CairoFont_obj,handle),HX_HCSTRING("handle","\xa8","\x83","\xfd","\xb7")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo sStaticStorageInfo[] = {
	{hx::fsInt,(void *) &CairoFont_obj::FT_LOAD_FORCE_AUTOHINT,HX_HCSTRING("FT_LOAD_FORCE_AUTOHINT","\x32","\xdd","\xa6","\xd5")},
	{hx::fsObject /*Dynamic*/ ,(void *) &CairoFont_obj::lime_cairo_ft_font_face_create_for_ft_face,HX_HCSTRING("lime_cairo_ft_font_face_create_for_ft_face","\xd7","\x3c","\xf8","\x98")},
	{hx::fsObject /*Dynamic*/ ,(void *) &CairoFont_obj::lime_cairo_font_face_destroy,HX_HCSTRING("lime_cairo_font_face_destroy","\xa7","\xd0","\x50","\xeb")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("font","\xcf","\x5d","\xc0","\x43"),
	HX_HCSTRING("handle","\xa8","\x83","\xfd","\xb7"),
	HX_HCSTRING("destroy","\xfa","\x2c","\x86","\x24"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(CairoFont_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(CairoFont_obj::FT_LOAD_FORCE_AUTOHINT,"FT_LOAD_FORCE_AUTOHINT");
	HX_MARK_MEMBER_NAME(CairoFont_obj::lime_cairo_ft_font_face_create_for_ft_face,"lime_cairo_ft_font_face_create_for_ft_face");
	HX_MARK_MEMBER_NAME(CairoFont_obj::lime_cairo_font_face_destroy,"lime_cairo_font_face_destroy");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(CairoFont_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(CairoFont_obj::FT_LOAD_FORCE_AUTOHINT,"FT_LOAD_FORCE_AUTOHINT");
	HX_VISIT_MEMBER_NAME(CairoFont_obj::lime_cairo_ft_font_face_create_for_ft_face,"lime_cairo_ft_font_face_create_for_ft_face");
	HX_VISIT_MEMBER_NAME(CairoFont_obj::lime_cairo_font_face_destroy,"lime_cairo_font_face_destroy");
};

#endif

hx::Class CairoFont_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("FT_LOAD_FORCE_AUTOHINT","\x32","\xdd","\xa6","\xd5"),
	HX_HCSTRING("lime_cairo_ft_font_face_create_for_ft_face","\xd7","\x3c","\xf8","\x98"),
	HX_HCSTRING("lime_cairo_font_face_destroy","\xa7","\xd0","\x50","\xeb"),
	::String(null()) };

void CairoFont_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("lime.graphics.cairo.CairoFont","\xc7","\x13","\xd8","\x6b");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &CairoFont_obj::__GetStatic;
	__mClass->mSetStaticField = &CairoFont_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< CairoFont_obj >;
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

void CairoFont_obj::__boot()
{
	FT_LOAD_FORCE_AUTOHINT= (int)32;
	lime_cairo_ft_font_face_create_for_ft_face= ::lime::_system::System_obj::load(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_cairo_ft_font_face_create_for_ft_face","\xd7","\x3c","\xf8","\x98"),(int)2,null());
	lime_cairo_font_face_destroy= ::lime::_system::System_obj::load(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_cairo_font_face_destroy","\xa7","\xd0","\x50","\xeb"),(int)1,null());
}

} // end namespace lime
} // end namespace graphics
} // end namespace cairo
