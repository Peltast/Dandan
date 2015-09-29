#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_core_Game
#include <core/Game.h>
#endif
#ifndef INCLUDED_core_GameState
#include <core/GameState.h>
#endif
#ifndef INCLUDED_core_Stack
#include <core/Stack.h>
#endif
#ifndef INCLUDED_core_State
#include <core/State.h>
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
#ifndef INCLUDED_openfl_errors_Error
#include <openfl/errors/Error.h>
#endif
#ifndef INCLUDED_openfl_events_Event
#include <openfl/events/Event.h>
#endif
#ifndef INCLUDED_openfl_events_EventDispatcher
#include <openfl/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_events_IEventDispatcher
#include <openfl/events/IEventDispatcher.h>
#endif
namespace core{

Void Game_obj::__construct()
{
HX_STACK_FRAME("core.Game","new",0x1cf92ef3,"core.Game.new","core/Game.hx",25,0xfec7a1fc)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(26)
	super::__construct();
	HX_STACK_LINE(28)
	::core::Stack tmp = ::core::Stack_obj::__new();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(28)
	::core::Game_obj::stateStack = tmp;
	HX_STACK_LINE(29)
	::String tmp1 = ::openfl::events::Event_obj::ENTER_FRAME;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(29)
	Dynamic tmp2 = this->playGame_dyn();		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(29)
	this->addEventListener(tmp1,tmp2,null(),null(),null());
	HX_STACK_LINE(30)
	::core::Game_obj::tileSize = (int)16;
}
;
	return null();
}

//Game_obj::~Game_obj() { }

Dynamic Game_obj::__CreateEmpty() { return  new Game_obj; }
hx::ObjectPtr< Game_obj > Game_obj::__new()
{  hx::ObjectPtr< Game_obj > _result_ = new Game_obj();
	_result_->__construct();
	return _result_;}

Dynamic Game_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Game_obj > _result_ = new Game_obj();
	_result_->__construct();
	return _result_;}

Void Game_obj::playGame( ::openfl::events::Event event){
{
		HX_STACK_FRAME("core.Game","playGame",0x740e4493,"core.Game.playGame","core/Game.hx",33,0xfec7a1fc)
		HX_STACK_THIS(this)
		HX_STACK_ARG(event,"event")
		HX_STACK_LINE(35)
		::core::Stack tmp = ::core::Game_obj::stateStack;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(35)
		bool tmp1 = tmp->isEmpty();		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(35)
		bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(35)
		if ((tmp2)){
			HX_STACK_LINE(37)
			::core::Stack tmp3 = ::core::Game_obj::stateStack;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(37)
			Dynamic tmp4 = tmp3->peek();		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(37)
			bool tmp5 = ::Std_obj::is(tmp4,hx::ClassOf< ::core::State >());		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(37)
			if ((tmp5)){
				HX_STACK_LINE(39)
				::core::Stack tmp6 = ::core::Game_obj::stateStack;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(39)
				Dynamic tmp7 = tmp6->peek();		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(39)
				::core::State currentState = ((::core::State)(tmp7));		HX_STACK_VAR(currentState,"currentState");
				HX_STACK_LINE(40)
				currentState->drawState();
			}
			else{
				HX_STACK_LINE(45)
				::openfl::errors::Error tmp6 = ::openfl::errors::Error_obj::__new(HX_HCSTRING("A non-state object was pushed into the game's state stack.","\x45","\xe6","\xda","\xd2"),null());		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(45)
				HX_STACK_DO_THROW(tmp6);
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Game_obj,playGame,(void))

::String Game_obj::replaceGeneralTerm( ::String term){
	HX_STACK_FRAME("core.Game","replaceGeneralTerm",0x0044a5ad,"core.Game.replaceGeneralTerm","core/Game.hx",89,0xfec7a1fc)
	HX_STACK_THIS(this)
	HX_STACK_ARG(term,"term")
	HX_STACK_LINE(90)
	::core::Stack tmp = ::core::Game_obj::stateStack;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(90)
	Dynamic tmp1 = tmp->peek();		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(90)
	bool tmp2 = ::Std_obj::is(tmp1,hx::ClassOf< ::core::GameState >());		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(90)
	if ((tmp2)){
		HX_STACK_LINE(91)
		::core::Stack tmp3 = ::core::Game_obj::stateStack;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(91)
		Dynamic tmp4 = tmp3->peek();		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(91)
		Dynamic tmp5 = tmp4->__Field(HX_HCSTRING("findGeneralTerm","\xfb","\x42","\xcf","\x60"), hx::paccDynamic )(term);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(91)
		return tmp5;
	}
	else{
		HX_STACK_LINE(93)
		return HX_HCSTRING("","\x00","\x00","\x00","\x00");
	}
	HX_STACK_LINE(90)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Game_obj,replaceGeneralTerm,return )

::core::Stack Game_obj::stateStack;

::core::Game Game_obj::singleton;

int Game_obj::tileSize;

::core::Game Game_obj::getSingleton( ){
	HX_STACK_FRAME("core.Game","getSingleton",0x305818a2,"core.Game.getSingleton","core/Game.hx",18,0xfec7a1fc)
	HX_STACK_LINE(19)
	::core::Game tmp = ::core::Game_obj::singleton;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(19)
	bool tmp1 = (tmp == null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(19)
	if ((tmp1)){
		HX_STACK_LINE(20)
		::core::Game tmp2 = ::core::Game_obj::__new();		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(20)
		::core::Game_obj::singleton = tmp2;
	}
	HX_STACK_LINE(21)
	::core::Game tmp2 = ::core::Game_obj::singleton;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(21)
	return tmp2;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Game_obj,getSingleton,return )

Void Game_obj::popState( ){
{
		HX_STACK_FRAME("core.Game","popState",0x2cada74d,"core.Game.popState","core/Game.hx",53,0xfec7a1fc)
		HX_STACK_LINE(54)
		::core::Stack tmp = ::core::Game_obj::stateStack;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(54)
		bool tmp1 = tmp->isEmpty();		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(54)
		if ((tmp1)){
			HX_STACK_LINE(54)
			return null();
		}
		HX_STACK_LINE(56)
		::core::Game tmp2 = ::core::Game_obj::singleton;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(56)
		::core::Stack tmp3 = ::core::Game_obj::stateStack;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(56)
		Dynamic tmp4 = tmp3->peek();		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(56)
		::openfl::display::DisplayObject tmp5 = ((::openfl::display::DisplayObject)(tmp4));		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(56)
		tmp2->removeChild(tmp5);
		HX_STACK_LINE(57)
		::core::Stack tmp6 = ::core::Game_obj::stateStack;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(57)
		Dynamic tmp7 = tmp6->peek();		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(57)
		tmp7->__Field(HX_HCSTRING("deactivateState","\x3d","\xcd","\x58","\x57"), hx::paccDynamic )();
		HX_STACK_LINE(58)
		::core::Stack tmp8 = ::core::Game_obj::stateStack;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(58)
		tmp8->pop();
		HX_STACK_LINE(59)
		::core::Stack tmp9 = ::core::Game_obj::stateStack;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(59)
		bool tmp10 = tmp9->isEmpty();		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(59)
		bool tmp11 = !(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(59)
		if ((tmp11)){
			HX_STACK_LINE(60)
			::core::Game tmp12 = ::core::Game_obj::singleton;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(60)
			::core::Stack tmp13 = ::core::Game_obj::stateStack;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(60)
			Dynamic tmp14 = tmp13->peek();		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(60)
			::openfl::display::DisplayObject tmp15 = ((::openfl::display::DisplayObject)(tmp14));		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(60)
			tmp12->addChild(tmp15);
			HX_STACK_LINE(61)
			::core::Stack tmp16 = ::core::Game_obj::stateStack;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(61)
			Dynamic tmp17 = tmp16->peek();		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(61)
			tmp17->__Field(HX_HCSTRING("activateState","\x5e","\x81","\xac","\x56"), hx::paccDynamic )();
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Game_obj,popState,(void))

Void Game_obj::pushState( ::core::State state){
{
		HX_STACK_FRAME("core.Game","pushState",0x30f9ecaa,"core.Game.pushState","core/Game.hx",64,0xfec7a1fc)
		HX_STACK_ARG(state,"state")
		HX_STACK_LINE(65)
		::core::Stack tmp = ::core::Game_obj::stateStack;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(65)
		bool tmp1 = tmp->isEmpty();		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(65)
		bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(65)
		if ((tmp2)){
			HX_STACK_LINE(66)
			::core::Stack tmp3 = ::core::Game_obj::stateStack;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(66)
			Dynamic tmp4 = tmp3->peek();		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(66)
			::core::State topState = ((::core::State)(tmp4));		HX_STACK_VAR(topState,"topState");
			HX_STACK_LINE(67)
			topState->deactivateState();
			HX_STACK_LINE(68)
			::core::Game tmp5 = ::core::Game_obj::singleton;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(68)
			::core::Stack tmp6 = ::core::Game_obj::stateStack;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(68)
			Dynamic tmp7 = tmp6->peek();		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(68)
			::openfl::display::DisplayObject tmp8 = ((::openfl::display::DisplayObject)(tmp7));		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(68)
			tmp5->removeChild(tmp8);
		}
		HX_STACK_LINE(70)
		::core::Game tmp3 = ::core::Game_obj::singleton;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(70)
		::core::State tmp4 = state;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(70)
		tmp3->addChild(tmp4);
		HX_STACK_LINE(71)
		::core::Stack tmp5 = ::core::Game_obj::stateStack;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(71)
		::core::State tmp6 = state;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(71)
		tmp5->push(tmp6);
		HX_STACK_LINE(72)
		state->activateState();
		HX_STACK_LINE(73)
		int j = (int)0;		HX_STACK_VAR(j,"j");
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Game_obj,pushState,(void))

Void Game_obj::clearAllStates( ){
{
		HX_STACK_FRAME("core.Game","clearAllStates",0xa90bfe43,"core.Game.clearAllStates","core/Game.hx",76,0xfec7a1fc)
		HX_STACK_LINE(76)
		while((true)){
			HX_STACK_LINE(76)
			::core::Stack tmp = ::core::Game_obj::stateStack;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(76)
			bool tmp1 = tmp->isEmpty();		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(76)
			bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(76)
			bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(76)
			if ((tmp3)){
				HX_STACK_LINE(76)
				break;
			}
			HX_STACK_LINE(77)
			::core::Game_obj::popState();
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Game_obj,clearAllStates,(void))

::core::State Game_obj::getState( ){
	HX_STACK_FRAME("core.Game","getState",0x237e7228,"core.Game.getState","core/Game.hx",79,0xfec7a1fc)
	HX_STACK_LINE(80)
	::core::Stack tmp = ::core::Game_obj::stateStack;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(80)
	Dynamic tmp1 = tmp->peek();		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(80)
	::core::State tmp2 = ((::core::State)(tmp1));		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(80)
	return tmp2;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Game_obj,getState,return )

int Game_obj::getTileSize( ){
	HX_STACK_FRAME("core.Game","getTileSize",0x3b203358,"core.Game.getTileSize","core/Game.hx",84,0xfec7a1fc)
	HX_STACK_LINE(85)
	int tmp = ::core::Game_obj::tileSize;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(85)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Game_obj,getTileSize,return )


Game_obj::Game_obj()
{
}

Dynamic Game_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"playGame") ) { return playGame_dyn(); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"replaceGeneralTerm") ) { return replaceGeneralTerm_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

bool Game_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"tileSize") ) { outValue = tileSize; return true;  }
		if (HX_FIELD_EQ(inName,"popState") ) { outValue = popState_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"getState") ) { outValue = getState_dyn(); return true;  }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"singleton") ) { outValue = singleton; return true;  }
		if (HX_FIELD_EQ(inName,"pushState") ) { outValue = pushState_dyn(); return true;  }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"stateStack") ) { outValue = stateStack; return true;  }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"getTileSize") ) { outValue = getTileSize_dyn(); return true;  }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"getSingleton") ) { outValue = getSingleton_dyn(); return true;  }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"clearAllStates") ) { outValue = clearAllStates_dyn(); return true;  }
	}
	return false;
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
static hx::StaticInfo sStaticStorageInfo[] = {
	{hx::fsObject /*::core::Stack*/ ,(void *) &Game_obj::stateStack,HX_HCSTRING("stateStack","\x77","\xc3","\xf2","\xf3")},
	{hx::fsObject /*::core::Game*/ ,(void *) &Game_obj::singleton,HX_HCSTRING("singleton","\x0b","\xc5","\x7f","\xb7")},
	{hx::fsInt,(void *) &Game_obj::tileSize,HX_HCSTRING("tileSize","\x0f","\xc7","\x59","\x86")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("playGame","\x06","\x58","\x72","\x34"),
	HX_HCSTRING("replaceGeneralTerm","\xe0","\xa6","\x88","\x0b"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Game_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(Game_obj::stateStack,"stateStack");
	HX_MARK_MEMBER_NAME(Game_obj::singleton,"singleton");
	HX_MARK_MEMBER_NAME(Game_obj::tileSize,"tileSize");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Game_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(Game_obj::stateStack,"stateStack");
	HX_VISIT_MEMBER_NAME(Game_obj::singleton,"singleton");
	HX_VISIT_MEMBER_NAME(Game_obj::tileSize,"tileSize");
};

#endif

hx::Class Game_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("stateStack","\x77","\xc3","\xf2","\xf3"),
	HX_HCSTRING("singleton","\x0b","\xc5","\x7f","\xb7"),
	HX_HCSTRING("tileSize","\x0f","\xc7","\x59","\x86"),
	HX_HCSTRING("getSingleton","\x95","\x61","\xd6","\xc6"),
	HX_HCSTRING("popState","\xc0","\xba","\x11","\xed"),
	HX_HCSTRING("pushState","\xd7","\xdd","\x26","\xc8"),
	HX_HCSTRING("clearAllStates","\xf6","\xa9","\x64","\x92"),
	HX_HCSTRING("getState","\x9b","\x85","\xe2","\xe3"),
	HX_HCSTRING("getTileSize","\xc5","\x89","\x4d","\xac"),
	::String(null()) };

void Game_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("core.Game","\x81","\x39","\x7c","\xf2");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Game_obj::__GetStatic;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Game_obj >;
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
