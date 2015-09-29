#include <hxcpp.h>

#ifndef INCLUDED_actors_Player
#include <actors/Player.h>
#endif
#ifndef INCLUDED_core_GameState
#include <core/GameState.h>
#endif
#ifndef INCLUDED_core_State
#include <core/State.h>
#endif
#ifndef INCLUDED_maps_AreaMap
#include <maps/AreaMap.h>
#endif
#ifndef INCLUDED_maps_MapManager
#include <maps/MapManager.h>
#endif
#ifndef INCLUDED_maps_MapObject
#include <maps/MapObject.h>
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
namespace core{

Void GameState_obj::__construct()
{
HX_STACK_FRAME("core.GameState","new",0x1097e1c2,"core.GameState.new","core/GameState.hx",16,0x5957896f)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(17)
	super::__construct(hx::ObjectPtr<OBJ_>(this));
	HX_STACK_LINE(19)
	::actors::Player tmp = ::actors::Player_obj::__new();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(19)
	::actors::Player player = tmp;		HX_STACK_VAR(player,"player");
	HX_STACK_LINE(20)
	::maps::MapManager tmp1 = ::maps::MapManager_obj::getSingleton();		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(20)
	this->mapManager = tmp1;
	HX_STACK_LINE(21)
	::maps::MapManager tmp2 = this->mapManager;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(21)
	::maps::MapManager tmp3 = this->mapManager;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(21)
	::maps::AreaMap tmp4 = tmp3->getMap(HX_HCSTRING("TestMap","\x4a","\xa1","\x12","\x8b"));		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(21)
	::actors::Player tmp5 = player;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(21)
	tmp2->setMap(tmp4,tmp5);
	HX_STACK_LINE(23)
	::maps::MapManager tmp6 = this->mapManager;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(23)
	this->addChild(tmp6);
}
;
	return null();
}

//GameState_obj::~GameState_obj() { }

Dynamic GameState_obj::__CreateEmpty() { return  new GameState_obj; }
hx::ObjectPtr< GameState_obj > GameState_obj::__new()
{  hx::ObjectPtr< GameState_obj > _result_ = new GameState_obj();
	_result_->__construct();
	return _result_;}

Dynamic GameState_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< GameState_obj > _result_ = new GameState_obj();
	_result_->__construct();
	return _result_;}

Void GameState_obj::drawState( ){
{
		HX_STACK_FRAME("core.GameState","drawState",0xbf74f24f,"core.GameState.drawState","core/GameState.hx",27,0x5957896f)
		HX_STACK_THIS(this)
		HX_STACK_LINE(29)
		::maps::MapManager tmp = this->mapManager;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(29)
		::maps::AreaMap tmp1 = tmp->getCurrentMap();		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(29)
		tmp1->updateMap();
	}
return null();
}



GameState_obj::GameState_obj()
{
}

void GameState_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(GameState);
	HX_MARK_MEMBER_NAME(mapManager,"mapManager");
	::core::State_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void GameState_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(mapManager,"mapManager");
	::core::State_obj::__Visit(HX_VISIT_ARG);
}

Dynamic GameState_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 9:
		if (HX_FIELD_EQ(inName,"drawState") ) { return drawState_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"mapManager") ) { return mapManager; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic GameState_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 10:
		if (HX_FIELD_EQ(inName,"mapManager") ) { mapManager=inValue.Cast< ::maps::MapManager >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool GameState_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	return false;
}

void GameState_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("mapManager","\x31","\x7b","\x52","\xb4"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::maps::MapManager*/ ,(int)offsetof(GameState_obj,mapManager),HX_HCSTRING("mapManager","\x31","\x7b","\x52","\xb4")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("mapManager","\x31","\x7b","\x52","\xb4"),
	HX_HCSTRING("drawState","\x6d","\xab","\x16","\x4c"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(GameState_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(GameState_obj::__mClass,"__mClass");
};

#endif

hx::Class GameState_obj::__mClass;

void GameState_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("core.GameState","\xd0","\x98","\xd7","\x8e");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &GameState_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< GameState_obj >;
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

} // end namespace core
