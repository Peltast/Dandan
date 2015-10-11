#include <hxcpp.h>

#ifndef INCLUDED_maps_mapobjects_MapObject
#include <maps/mapobjects/MapObject.h>
#endif
#ifndef INCLUDED_maps_mapobjects_Portal
#include <maps/mapobjects/Portal.h>
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

Void Portal_obj::__construct(::openfl::display::Bitmap defaultBmp,::String endMap)
{
HX_STACK_FRAME("maps.mapobjects.Portal","new",0xea78c15d,"maps.mapobjects.Portal.new","maps/mapobjects/Portal.hx",17,0xc9af3713)
HX_STACK_THIS(this)
HX_STACK_ARG(defaultBmp,"defaultBmp")
HX_STACK_ARG(endMap,"endMap")
{
	HX_STACK_LINE(18)
	::openfl::display::Bitmap tmp = defaultBmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(18)
	super::__construct(hx::ObjectPtr<OBJ_>(this),tmp,true);
	HX_STACK_LINE(20)
	this->endMap = endMap;
	HX_STACK_LINE(21)
	::openfl::display::Bitmap tmp1 = this->defaultBitmap;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(21)
	tmp1->set_x((int)0);
	HX_STACK_LINE(22)
	::openfl::display::Bitmap tmp2 = this->defaultBitmap;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(22)
	tmp2->set_y((int)-8);
}
;
	return null();
}

//Portal_obj::~Portal_obj() { }

Dynamic Portal_obj::__CreateEmpty() { return  new Portal_obj; }
hx::ObjectPtr< Portal_obj > Portal_obj::__new(::openfl::display::Bitmap defaultBmp,::String endMap)
{  hx::ObjectPtr< Portal_obj > _result_ = new Portal_obj();
	_result_->__construct(defaultBmp,endMap);
	return _result_;}

Dynamic Portal_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Portal_obj > _result_ = new Portal_obj();
	_result_->__construct(inArgs[0],inArgs[1]);
	return _result_;}

::String Portal_obj::getEndMap( ){
	HX_STACK_FRAME("maps.mapobjects.Portal","getEndMap",0xcbf92f74,"maps.mapobjects.Portal.getEndMap","maps/mapobjects/Portal.hx",25,0xc9af3713)
	HX_STACK_THIS(this)
	HX_STACK_LINE(26)
	::String tmp = this->endMap;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(26)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(Portal_obj,getEndMap,return )


Portal_obj::Portal_obj()
{
}

void Portal_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Portal);
	HX_MARK_MEMBER_NAME(endMap,"endMap");
	::maps::mapobjects::MapObject_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void Portal_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(endMap,"endMap");
	::maps::mapobjects::MapObject_obj::__Visit(HX_VISIT_ARG);
}

Dynamic Portal_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"endMap") ) { return endMap; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"getEndMap") ) { return getEndMap_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Portal_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"endMap") ) { endMap=inValue.Cast< ::String >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool Portal_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	return false;
}

void Portal_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("endMap","\x81","\x59","\x73","\xfa"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsString,(int)offsetof(Portal_obj,endMap),HX_HCSTRING("endMap","\x81","\x59","\x73","\xfa")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("endMap","\x81","\x59","\x73","\xfa"),
	HX_HCSTRING("getEndMap","\xb7","\xe2","\xc9","\x76"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Portal_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Portal_obj::__mClass,"__mClass");
};

#endif

hx::Class Portal_obj::__mClass;

void Portal_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("maps.mapobjects.Portal","\xeb","\xce","\x93","\x2b");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &Portal_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Portal_obj >;
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
