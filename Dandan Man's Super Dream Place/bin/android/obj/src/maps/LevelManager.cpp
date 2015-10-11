#include <hxcpp.h>

#ifndef INCLUDED_actors_Actor
#include <actors/Actor.h>
#endif
#ifndef INCLUDED_actors_Player
#include <actors/Player.h>
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
namespace maps{

Void LevelManager_obj::__construct()
{
HX_STACK_FRAME("maps.LevelManager","new",0xa8425ed2,"maps.LevelManager.new","maps/LevelManager.hx",30,0x2cf709fd)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(31)
	super::__construct();
	HX_STACK_LINE(33)
	this->levelList = Array_obj< ::Dynamic >::__new();
	HX_STACK_LINE(35)
	Array< int > levels = Array_obj< int >::__new();		HX_STACK_VAR(levels,"levels");
	HX_STACK_LINE(36)
	{
		HX_STACK_LINE(36)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(36)
		while((true)){
			HX_STACK_LINE(36)
			bool tmp = (_g < (int)101);		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(36)
			bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(36)
			if ((tmp1)){
				HX_STACK_LINE(36)
				break;
			}
			HX_STACK_LINE(36)
			int tmp2 = (_g)++;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(36)
			int i = tmp2;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(37)
			int tmp3 = i;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(37)
			levels->push(tmp3);
		}
	}
	HX_STACK_LINE(39)
	::maps::Level tmp = ::maps::Level_obj::__new((int)1,levels,HX_HCSTRING("Stage1-1","\xf7","\x71","\xe0","\xbc"));		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(39)
	::maps::Level levelOne = tmp;		HX_STACK_VAR(levelOne,"levelOne");
	HX_STACK_LINE(42)
	::maps::Level tmp1 = levelOne;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(42)
	this->levelList->push(tmp1);
}
;
	return null();
}

//LevelManager_obj::~LevelManager_obj() { }

Dynamic LevelManager_obj::__CreateEmpty() { return  new LevelManager_obj; }
hx::ObjectPtr< LevelManager_obj > LevelManager_obj::__new()
{  hx::ObjectPtr< LevelManager_obj > _result_ = new LevelManager_obj();
	_result_->__construct();
	return _result_;}

Dynamic LevelManager_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< LevelManager_obj > _result_ = new LevelManager_obj();
	_result_->__construct();
	return _result_;}

::maps::Level LevelManager_obj::getCurrentLevel( ){
	HX_STACK_FRAME("maps.LevelManager","getCurrentLevel",0x869cc1b3,"maps.LevelManager.getCurrentLevel","maps/LevelManager.hx",48,0x2cf709fd)
	HX_STACK_THIS(this)
	HX_STACK_LINE(49)
	::maps::Level tmp = this->currentLevel;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(49)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(LevelManager_obj,getCurrentLevel,return )

Void LevelManager_obj::setLevel( int newLevel,::actors::Player player){
{
		HX_STACK_FRAME("maps.LevelManager","setLevel",0x9bd552d0,"maps.LevelManager.setLevel","maps/LevelManager.hx",53,0x2cf709fd)
		HX_STACK_THIS(this)
		HX_STACK_ARG(newLevel,"newLevel")
		HX_STACK_ARG(player,"player")
		HX_STACK_LINE(54)
		int tmp = newLevel;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(54)
		int tmp1 = this->levelList->length;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(54)
		int tmp2 = (tmp1 + (int)1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(54)
		bool tmp3 = (tmp > tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(54)
		if ((tmp3)){
			HX_STACK_LINE(54)
			return null();
		}
		HX_STACK_LINE(56)
		::maps::Level tmp4 = this->currentLevel;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(56)
		bool tmp5 = (tmp4 != null());		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(56)
		if ((tmp5)){
			HX_STACK_LINE(56)
			::maps::Level tmp6 = this->currentLevel;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(56)
			bool tmp7 = this->contains(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(56)
			if ((tmp7)){
				HX_STACK_LINE(57)
				::maps::Level tmp8 = this->currentLevel;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(57)
				tmp8->resetLevel();
				HX_STACK_LINE(58)
				::maps::Level tmp9 = this->currentLevel;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(58)
				this->removeChild(tmp9);
			}
		}
		HX_STACK_LINE(61)
		int tmp6 = (newLevel - (int)1);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(61)
		::maps::Level tmp7 = this->levelList->__get(tmp6).StaticCast< ::maps::Level >();		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(61)
		this->currentLevel = tmp7;
		HX_STACK_LINE(62)
		::maps::Level tmp8 = this->currentLevel;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(62)
		this->addChild(tmp8);
		HX_STACK_LINE(63)
		::maps::Level tmp9 = this->currentLevel;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(63)
		::actors::Player tmp10 = player;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(63)
		tmp9->initiateLevel(tmp10);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(LevelManager_obj,setLevel,(void))

::maps::LevelManager LevelManager_obj::singleton;

::maps::LevelManager LevelManager_obj::getSingleton( ){
	HX_STACK_FRAME("maps.LevelManager","getSingleton",0xa0cf74e3,"maps.LevelManager.getSingleton","maps/LevelManager.hx",19,0x2cf709fd)
	HX_STACK_LINE(21)
	::maps::LevelManager tmp = ::maps::LevelManager_obj::singleton;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(21)
	bool tmp1 = (tmp == null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(21)
	if ((tmp1)){
		HX_STACK_LINE(22)
		::maps::LevelManager tmp2 = ::maps::LevelManager_obj::__new();		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(22)
		::maps::LevelManager_obj::singleton = tmp2;
	}
	HX_STACK_LINE(23)
	::maps::LevelManager tmp2 = ::maps::LevelManager_obj::singleton;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(23)
	return tmp2;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(LevelManager_obj,getSingleton,return )


LevelManager_obj::LevelManager_obj()
{
}

void LevelManager_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(LevelManager);
	HX_MARK_MEMBER_NAME(levelList,"levelList");
	HX_MARK_MEMBER_NAME(currentLevel,"currentLevel");
	::openfl::display::Sprite_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void LevelManager_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(levelList,"levelList");
	HX_VISIT_MEMBER_NAME(currentLevel,"currentLevel");
	::openfl::display::Sprite_obj::__Visit(HX_VISIT_ARG);
}

Dynamic LevelManager_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"setLevel") ) { return setLevel_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"levelList") ) { return levelList; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"currentLevel") ) { return currentLevel; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"getCurrentLevel") ) { return getCurrentLevel_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

bool LevelManager_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 9:
		if (HX_FIELD_EQ(inName,"singleton") ) { outValue = singleton; return true;  }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"getSingleton") ) { outValue = getSingleton_dyn(); return true;  }
	}
	return false;
}

Dynamic LevelManager_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 9:
		if (HX_FIELD_EQ(inName,"levelList") ) { levelList=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"currentLevel") ) { currentLevel=inValue.Cast< ::maps::Level >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool LevelManager_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 9:
		if (HX_FIELD_EQ(inName,"singleton") ) { singleton=ioValue.Cast< ::maps::LevelManager >(); return true; }
	}
	return false;
}

void LevelManager_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("levelList","\x02","\x70","\x82","\x7d"));
	outFields->push(HX_HCSTRING("currentLevel","\x8b","\xfa","\x6e","\xb9"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(LevelManager_obj,levelList),HX_HCSTRING("levelList","\x02","\x70","\x82","\x7d")},
	{hx::fsObject /*::maps::Level*/ ,(int)offsetof(LevelManager_obj,currentLevel),HX_HCSTRING("currentLevel","\x8b","\xfa","\x6e","\xb9")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo sStaticStorageInfo[] = {
	{hx::fsObject /*::maps::LevelManager*/ ,(void *) &LevelManager_obj::singleton,HX_HCSTRING("singleton","\x0b","\xc5","\x7f","\xb7")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("levelList","\x02","\x70","\x82","\x7d"),
	HX_HCSTRING("currentLevel","\x8b","\xfa","\x6e","\xb9"),
	HX_HCSTRING("getCurrentLevel","\x41","\x50","\x59","\xdc"),
	HX_HCSTRING("setLevel","\x82","\x7e","\x97","\x80"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(LevelManager_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(LevelManager_obj::singleton,"singleton");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(LevelManager_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(LevelManager_obj::singleton,"singleton");
};

#endif

hx::Class LevelManager_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("singleton","\x0b","\xc5","\x7f","\xb7"),
	HX_HCSTRING("getSingleton","\x95","\x61","\xd6","\xc6"),
	::String(null()) };

void LevelManager_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("maps.LevelManager","\xe0","\x4d","\x1a","\xa0");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &LevelManager_obj::__GetStatic;
	__mClass->mSetStaticField = &LevelManager_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< LevelManager_obj >;
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
