#include <hxcpp.h>

#ifndef INCLUDED_Main
#include <Main.h>
#endif
#ifndef INCLUDED_core_Game
#include <core/Game.h>
#endif
#ifndef INCLUDED_core_GameState
#include <core/GameState.h>
#endif
#ifndef INCLUDED_core_State
#include <core/State.h>
#endif
#ifndef INCLUDED_openfl_Assets
#include <openfl/Assets.h>
#endif
#ifndef INCLUDED_openfl_display_Bitmap
#include <openfl/display/Bitmap.h>
#endif
#ifndef INCLUDED_openfl_display_BitmapData
#include <openfl/display/BitmapData.h>
#endif
#ifndef INCLUDED_openfl_display_DisplayObject
#include <openfl/display/DisplayObject.h>
#endif
#ifndef INCLUDED_openfl_display_DisplayObjectContainer
#include <openfl/display/DisplayObjectContainer.h>
#endif
#ifndef INCLUDED_openfl_display_IBitmapDrawable
#include <openfl/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_openfl_display_InteractiveObject
#include <openfl/display/InteractiveObject.h>
#endif
#ifndef INCLUDED_openfl_display_PixelSnapping
#include <openfl/display/PixelSnapping.h>
#endif
#ifndef INCLUDED_openfl_display_Sprite
#include <openfl/display/Sprite.h>
#endif
#ifndef INCLUDED_openfl_events_EventDispatcher
#include <openfl/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_events_IEventDispatcher
#include <openfl/events/IEventDispatcher.h>
#endif

Void Main_obj::__construct()
{
HX_STACK_FRAME("Main","new",0x6616a5cb,"Main.new","Main.hx",26,0x087e5c05)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(27)
	super::__construct();
	HX_STACK_LINE(29)
	::Main_obj::singleton = hx::ObjectPtr<OBJ_>(this);
	HX_STACK_LINE(31)
	::core::Game tmp = ::core::Game_obj::getSingleton();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(31)
	this->addChild(tmp);
	HX_STACK_LINE(32)
	::core::GameState tmp1 = ::core::GameState_obj::__new();		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(32)
	::core::Game_obj::pushState(tmp1);
}
;
	return null();
}

//Main_obj::~Main_obj() { }

Dynamic Main_obj::__CreateEmpty() { return  new Main_obj; }
hx::ObjectPtr< Main_obj > Main_obj::__new()
{  hx::ObjectPtr< Main_obj > _result_ = new Main_obj();
	_result_->__construct();
	return _result_;}

Dynamic Main_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Main_obj > _result_ = new Main_obj();
	_result_->__construct();
	return _result_;}

::Main Main_obj::singleton;

::Main Main_obj::getSingleton( ){
	HX_STACK_FRAME("Main","getSingleton",0xedb106ca,"Main.getSingleton","Main.hx",20,0x087e5c05)
	HX_STACK_LINE(22)
	::Main tmp = ::Main_obj::singleton;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(22)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Main_obj,getSingleton,return )

::openfl::display::Bitmap Main_obj::getBitmapAsset( ::String path){
	HX_STACK_FRAME("Main","getBitmapAsset",0x7ce41700,"Main.getBitmapAsset","Main.hx",35,0x087e5c05)
	HX_STACK_ARG(path,"path")
	HX_STACK_LINE(37)
	::String tmp = path;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(37)
	::openfl::display::BitmapData tmp1 = ::openfl::Assets_obj::getBitmapData(tmp,null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(37)
	::openfl::display::BitmapData bitmapData = tmp1;		HX_STACK_VAR(bitmapData,"bitmapData");
	HX_STACK_LINE(38)
	::openfl::display::Bitmap tmp2 = ::openfl::display::Bitmap_obj::__new(bitmapData,null(),null());		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(38)
	::openfl::display::Bitmap bitmap = tmp2;		HX_STACK_VAR(bitmap,"bitmap");
	HX_STACK_LINE(39)
	::openfl::display::Bitmap tmp3 = bitmap;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(39)
	return tmp3;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Main_obj,getBitmapAsset,return )


Main_obj::Main_obj()
{
}

bool Main_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 9:
		if (HX_FIELD_EQ(inName,"singleton") ) { outValue = singleton; return true;  }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"getSingleton") ) { outValue = getSingleton_dyn(); return true;  }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"getBitmapAsset") ) { outValue = getBitmapAsset_dyn(); return true;  }
	}
	return false;
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
static hx::StaticInfo sStaticStorageInfo[] = {
	{hx::fsObject /*::Main*/ ,(void *) &Main_obj::singleton,HX_HCSTRING("singleton","\x0b","\xc5","\x7f","\xb7")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Main_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(Main_obj::singleton,"singleton");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Main_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(Main_obj::singleton,"singleton");
};

#endif

hx::Class Main_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("singleton","\x0b","\xc5","\x7f","\xb7"),
	HX_HCSTRING("getSingleton","\x95","\x61","\xd6","\xc6"),
	HX_HCSTRING("getBitmapAsset","\x8b","\xfa","\x2d","\xee"),
	::String(null()) };

void Main_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("Main","\x59","\x64","\x2f","\x33");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Main_obj::__GetStatic;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< Main_obj >;
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

