#include <hxcpp.h>

#ifndef INCLUDED_maps_mapobjects_AIPathWall
#include <maps/mapobjects/AIPathWall.h>
#endif
#ifndef INCLUDED_maps_mapobjects_MapObject
#include <maps/mapobjects/MapObject.h>
#endif
#ifndef INCLUDED_openfl_display_Bitmap
#include <openfl/display/Bitmap.h>
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
#ifndef INCLUDED_openfl_display_Sprite
#include <openfl/display/Sprite.h>
#endif
#ifndef INCLUDED_openfl_events_EventDispatcher
#include <openfl/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_events_IEventDispatcher
#include <openfl/events/IEventDispatcher.h>
#endif
namespace maps{
namespace mapobjects{

Void AIPathWall_obj::__construct(::openfl::display::Bitmap defaultBmp)
{
HX_STACK_FRAME("maps.mapobjects.AIPathWall","new",0xf61971e8,"maps.mapobjects.AIPathWall.new","maps/mapobjects/AIPathWall.hx",12,0x8a39d0e8)
HX_STACK_THIS(this)
HX_STACK_ARG(defaultBmp,"defaultBmp")
{
	HX_STACK_LINE(13)
	::openfl::display::Bitmap tmp = defaultBmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(13)
	super::__construct(hx::ObjectPtr<OBJ_>(this),tmp,false);
}
;
	return null();
}

//AIPathWall_obj::~AIPathWall_obj() { }

Dynamic AIPathWall_obj::__CreateEmpty() { return  new AIPathWall_obj; }
hx::ObjectPtr< AIPathWall_obj > AIPathWall_obj::__new(::openfl::display::Bitmap defaultBmp)
{  hx::ObjectPtr< AIPathWall_obj > _result_ = new AIPathWall_obj();
	_result_->__construct(defaultBmp);
	return _result_;}

Dynamic AIPathWall_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< AIPathWall_obj > _result_ = new AIPathWall_obj();
	_result_->__construct(inArgs[0]);
	return _result_;}


AIPathWall_obj::AIPathWall_obj()
{
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(AIPathWall_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(AIPathWall_obj::__mClass,"__mClass");
};

#endif

hx::Class AIPathWall_obj::__mClass;

void AIPathWall_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("maps.mapobjects.AIPathWall","\xf6","\x9d","\xb8","\x0d");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< AIPathWall_obj >;
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

} // end namespace maps
} // end namespace mapobjects
