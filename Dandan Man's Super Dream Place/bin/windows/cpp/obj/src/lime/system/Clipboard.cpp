#include <hxcpp.h>

#ifndef INCLUDED_lime_system_Clipboard
#include <lime/system/Clipboard.h>
#endif
#ifndef INCLUDED_lime_system_System
#include <lime/system/System.h>
#endif
namespace lime{
namespace _system{

Void Clipboard_obj::__construct()
{
	return null();
}

//Clipboard_obj::~Clipboard_obj() { }

Dynamic Clipboard_obj::__CreateEmpty() { return  new Clipboard_obj; }
hx::ObjectPtr< Clipboard_obj > Clipboard_obj::__new()
{  hx::ObjectPtr< Clipboard_obj > _result_ = new Clipboard_obj();
	_result_->__construct();
	return _result_;}

Dynamic Clipboard_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Clipboard_obj > _result_ = new Clipboard_obj();
	_result_->__construct();
	return _result_;}

::String Clipboard_obj::get_text( ){
	HX_STACK_FRAME("lime.system.Clipboard","get_text",0xe647e374,"lime.system.Clipboard.get_text","lime/system/Clipboard.hx",22,0x9490b5ee)
	HX_STACK_LINE(25)
	::String tmp = ::lime::_system::Clipboard_obj::lime_clipboard_get_text();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(25)
	return tmp;
	HX_STACK_LINE(34)
	return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Clipboard_obj,get_text,return )

::String Clipboard_obj::set_text( ::String value){
	HX_STACK_FRAME("lime.system.Clipboard","set_text",0x94a53ce8,"lime.system.Clipboard.set_text","lime/system/Clipboard.hx",39,0x9490b5ee)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(42)
	::String tmp = value;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(42)
	::lime::_system::Clipboard_obj::lime_clipboard_set_text(tmp);
	HX_STACK_LINE(43)
	::String tmp1 = value;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(43)
	return tmp1;
	HX_STACK_LINE(49)
	return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Clipboard_obj,set_text,return )

Dynamic Clipboard_obj::lime_clipboard_get_text;

Dynamic Clipboard_obj::lime_clipboard_set_text;


Clipboard_obj::Clipboard_obj()
{
}

bool Clipboard_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"text") ) { if (inCallProp == hx::paccAlways) { outValue = get_text(); return true; } }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"get_text") ) { outValue = get_text_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"set_text") ) { outValue = set_text_dyn(); return true;  }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"lime_clipboard_get_text") ) { outValue = lime_clipboard_get_text; return true;  }
		if (HX_FIELD_EQ(inName,"lime_clipboard_set_text") ) { outValue = lime_clipboard_set_text; return true;  }
	}
	return false;
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
static hx::StaticInfo sStaticStorageInfo[] = {
	{hx::fsObject /*Dynamic*/ ,(void *) &Clipboard_obj::lime_clipboard_get_text,HX_HCSTRING("lime_clipboard_get_text","\x29","\xfd","\x31","\x04")},
	{hx::fsObject /*Dynamic*/ ,(void *) &Clipboard_obj::lime_clipboard_set_text,HX_HCSTRING("lime_clipboard_set_text","\x9d","\x56","\x8f","\xb2")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Clipboard_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(Clipboard_obj::lime_clipboard_get_text,"lime_clipboard_get_text");
	HX_MARK_MEMBER_NAME(Clipboard_obj::lime_clipboard_set_text,"lime_clipboard_set_text");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Clipboard_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(Clipboard_obj::lime_clipboard_get_text,"lime_clipboard_get_text");
	HX_VISIT_MEMBER_NAME(Clipboard_obj::lime_clipboard_set_text,"lime_clipboard_set_text");
};

#endif

hx::Class Clipboard_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("get_text","\x36","\x88","\xb4","\xcc"),
	HX_HCSTRING("set_text","\xaa","\xe1","\x11","\x7b"),
	HX_HCSTRING("lime_clipboard_get_text","\x29","\xfd","\x31","\x04"),
	HX_HCSTRING("lime_clipboard_set_text","\x9d","\x56","\x8f","\xb2"),
	::String(null()) };

void Clipboard_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("lime.system.Clipboard","\xf0","\x64","\x51","\x18");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Clipboard_obj::__GetStatic;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< Clipboard_obj >;
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

void Clipboard_obj::__boot()
{
	lime_clipboard_get_text= ::lime::_system::System_obj::load(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_clipboard_get_text","\x29","\xfd","\x31","\x04"),(int)0,null());
	lime_clipboard_set_text= ::lime::_system::System_obj::load(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_clipboard_set_text","\x9d","\x56","\x8f","\xb2"),(int)1,null());
}

} // end namespace lime
} // end namespace system
