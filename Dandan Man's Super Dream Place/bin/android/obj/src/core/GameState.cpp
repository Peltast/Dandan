#include <hxcpp.h>

#ifndef INCLUDED_actors_Actor
#include <actors/Actor.h>
#endif
#ifndef INCLUDED_actors_Player
#include <actors/Player.h>
#endif
#ifndef INCLUDED_core_GameScreen
#include <core/GameScreen.h>
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
#ifndef INCLUDED_maps_Level
#include <maps/Level.h>
#endif
#ifndef INCLUDED_maps_LevelManager
#include <maps/LevelManager.h>
#endif
#ifndef INCLUDED_maps_mapobjects_MapObject
#include <maps/mapobjects/MapObject.h>
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
HX_STACK_FRAME("core.GameState","new",0x1097e1c2,"core.GameState.new","core/GameState.hx",17,0x5957896f)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(18)
	super::__construct(hx::ObjectPtr<OBJ_>(this));
	HX_STACK_LINE(20)
	::core::GameScreen tmp = ::core::GameScreen_obj::__new();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(20)
	this->gameScreen = tmp;
	HX_STACK_LINE(22)
	::actors::Player tmp1 = ::actors::Player_obj::__new();		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(22)
	::actors::Player player = tmp1;		HX_STACK_VAR(player,"player");
	HX_STACK_LINE(23)
	::maps::LevelManager tmp2 = ::maps::LevelManager_obj::getSingleton();		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(23)
	this->levelManager = tmp2;
	HX_STACK_LINE(24)
	::maps::LevelManager tmp3 = this->levelManager;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(24)
	::actors::Player tmp4 = player;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(24)
	tmp3->setLevel((int)1,tmp4);
	HX_STACK_LINE(26)
	::maps::LevelManager tmp5 = this->levelManager;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(26)
	this->addChild(tmp5);
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
		HX_STACK_FRAME("core.GameState","drawState",0xbf74f24f,"core.GameState.drawState","core/GameState.hx",30,0x5957896f)
		HX_STACK_THIS(this)
		HX_STACK_LINE(32)
		::maps::LevelManager tmp = this->levelManager;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(32)
		::maps::Level tmp1 = tmp->getCurrentLevel();		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(32)
		::maps::AreaMap tmp2 = tmp1->getCurrentMap();		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(32)
		tmp2->updateMap();
	}
return null();
}



GameState_obj::GameState_obj()
{
}

void GameState_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(GameState);
	HX_MARK_MEMBER_NAME(gameScreen,"gameScreen");
	HX_MARK_MEMBER_NAME(levelManager,"levelManager");
	::core::State_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void GameState_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(gameScreen,"gameScreen");
	HX_VISIT_MEMBER_NAME(levelManager,"levelManager");
	::core::State_obj::__Visit(HX_VISIT_ARG);
}

Dynamic GameState_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 9:
		if (HX_FIELD_EQ(inName,"drawState") ) { return drawState_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"gameScreen") ) { return gameScreen; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"levelManager") ) { return levelManager; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic GameState_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 10:
		if (HX_FIELD_EQ(inName,"gameScreen") ) { gameScreen=inValue.Cast< ::core::GameScreen >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"levelManager") ) { levelManager=inValue.Cast< ::maps::LevelManager >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool GameState_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	return false;
}

void GameState_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("gameScreen","\xfe","\x24","\xd3","\x89"));
	outFields->push(HX_HCSTRING("levelManager","\x49","\x1d","\x6f","\x72"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::core::GameScreen*/ ,(int)offsetof(GameState_obj,gameScreen),HX_HCSTRING("gameScreen","\xfe","\x24","\xd3","\x89")},
	{hx::fsObject /*::maps::LevelManager*/ ,(int)offsetof(GameState_obj,levelManager),HX_HCSTRING("levelManager","\x49","\x1d","\x6f","\x72")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("gameScreen","\xfe","\x24","\xd3","\x89"),
	HX_HCSTRING("levelManager","\x49","\x1d","\x6f","\x72"),
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
