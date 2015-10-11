#include <hxcpp.h>

#ifndef INCLUDED_actors_Actor
#include <actors/Actor.h>
#endif
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
#ifndef INCLUDED_ui_GameScreen
#include <ui/GameScreen.h>
#endif
#ifndef INCLUDED_ui_OverlayItem
#include <ui/OverlayItem.h>
#endif
namespace ui{

Void GameScreen_obj::__construct()
{
HX_STACK_FRAME("ui.GameScreen","new",0x36743dea,"ui.GameScreen.new","ui/GameScreen.hx",19,0xb9bcc025)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(19)
	super::__construct(hx::ObjectPtr<OBJ_>(this),true);
}
;
	return null();
}

//GameScreen_obj::~GameScreen_obj() { }

Dynamic GameScreen_obj::__CreateEmpty() { return  new GameScreen_obj; }
hx::ObjectPtr< GameScreen_obj > GameScreen_obj::__new()
{  hx::ObjectPtr< GameScreen_obj > _result_ = new GameScreen_obj();
	_result_->__construct();
	return _result_;}

Dynamic GameScreen_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< GameScreen_obj > _result_ = new GameScreen_obj();
	_result_->__construct();
	return _result_;}

Void GameScreen_obj::initiateGameScreen( ::core::GameState gameState,::actors::Player player,::maps::LevelManager mapManager){
{
		HX_STACK_FRAME("ui.GameScreen","initiateGameScreen",0xfde7ba6d,"ui.GameScreen.initiateGameScreen","ui/GameScreen.hx",22,0xb9bcc025)
		HX_STACK_THIS(this)
		HX_STACK_ARG(gameState,"gameState")
		HX_STACK_ARG(player,"player")
		HX_STACK_ARG(mapManager,"mapManager")
		HX_STACK_LINE(24)
		this->gameState = gameState;
		HX_STACK_LINE(25)
		this->player = player;
		HX_STACK_LINE(26)
		this->mapManager = mapManager;
		HX_STACK_LINE(27)
		::maps::LevelManager tmp = mapManager;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(27)
		this->addChild(tmp);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(GameScreen_obj,initiateGameScreen,(void))

Void GameScreen_obj::activateOverlayItem( ){
{
		HX_STACK_FRAME("ui.GameScreen","activateOverlayItem",0x31a3e15a,"ui.GameScreen.activateOverlayItem","ui/GameScreen.hx",32,0xb9bcc025)
		HX_STACK_THIS(this)
		HX_STACK_LINE(32)
		this->super::activateOverlayItem();
	}
return null();
}


Void GameScreen_obj::updateOverlayItem( ){
{
		HX_STACK_FRAME("ui.GameScreen","updateOverlayItem",0xe96d3444,"ui.GameScreen.updateOverlayItem","ui/GameScreen.hx",41,0xb9bcc025)
		HX_STACK_THIS(this)
		HX_STACK_LINE(42)
		this->super::updateOverlayItem();
		HX_STACK_LINE(44)
		::maps::LevelManager tmp = this->mapManager;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(44)
		::maps::Level tmp1 = tmp->getCurrentLevel();		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(44)
		::maps::AreaMap tmp2 = tmp1->getCurrentMap();		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(44)
		tmp2->updateMap();
	}
return null();
}


Void GameScreen_obj::deactivateOverlayItem( ){
{
		HX_STACK_FRAME("ui.GameScreen","deactivateOverlayItem",0xa91fd4f9,"ui.GameScreen.deactivateOverlayItem","ui/GameScreen.hx",49,0xb9bcc025)
		HX_STACK_THIS(this)
		HX_STACK_LINE(49)
		this->super::deactivateOverlayItem();
	}
return null();
}



GameScreen_obj::GameScreen_obj()
{
}

void GameScreen_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(GameScreen);
	HX_MARK_MEMBER_NAME(gameState,"gameState");
	HX_MARK_MEMBER_NAME(player,"player");
	HX_MARK_MEMBER_NAME(mapManager,"mapManager");
	::ui::OverlayItem_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void GameScreen_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(gameState,"gameState");
	HX_VISIT_MEMBER_NAME(player,"player");
	HX_VISIT_MEMBER_NAME(mapManager,"mapManager");
	::ui::OverlayItem_obj::__Visit(HX_VISIT_ARG);
}

Dynamic GameScreen_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"player") ) { return player; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"gameState") ) { return gameState; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"mapManager") ) { return mapManager; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"updateOverlayItem") ) { return updateOverlayItem_dyn(); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"initiateGameScreen") ) { return initiateGameScreen_dyn(); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"activateOverlayItem") ) { return activateOverlayItem_dyn(); }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"deactivateOverlayItem") ) { return deactivateOverlayItem_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic GameScreen_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"player") ) { player=inValue.Cast< ::actors::Player >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"gameState") ) { gameState=inValue.Cast< ::core::GameState >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"mapManager") ) { mapManager=inValue.Cast< ::maps::LevelManager >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool GameScreen_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	return false;
}

void GameScreen_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("gameState","\xbf","\x64","\x26","\xb9"));
	outFields->push(HX_HCSTRING("player","\x61","\xeb","\xb8","\x37"));
	outFields->push(HX_HCSTRING("mapManager","\x31","\x7b","\x52","\xb4"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::core::GameState*/ ,(int)offsetof(GameScreen_obj,gameState),HX_HCSTRING("gameState","\xbf","\x64","\x26","\xb9")},
	{hx::fsObject /*::actors::Player*/ ,(int)offsetof(GameScreen_obj,player),HX_HCSTRING("player","\x61","\xeb","\xb8","\x37")},
	{hx::fsObject /*::maps::LevelManager*/ ,(int)offsetof(GameScreen_obj,mapManager),HX_HCSTRING("mapManager","\x31","\x7b","\x52","\xb4")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("gameState","\xbf","\x64","\x26","\xb9"),
	HX_HCSTRING("player","\x61","\xeb","\xb8","\x37"),
	HX_HCSTRING("mapManager","\x31","\x7b","\x52","\xb4"),
	HX_HCSTRING("initiateGameScreen","\xb7","\x5c","\x8f","\x6e"),
	HX_HCSTRING("activateOverlayItem","\xd0","\x3f","\xaa","\x53"),
	HX_HCSTRING("updateOverlayItem","\x3a","\xe9","\xa3","\xc8"),
	HX_HCSTRING("deactivateOverlayItem","\xef","\x3c","\x53","\x20"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(GameScreen_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(GameScreen_obj::__mClass,"__mClass");
};

#endif

hx::Class GameScreen_obj::__mClass;

void GameScreen_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("ui.GameScreen","\xf8","\xc0","\xf8","\x80");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &GameScreen_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< GameScreen_obj >;
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

} // end namespace ui
