#include <hxcpp.h>

#ifndef INCLUDED_actors_Player
#include <actors/Player.h>
#endif
#ifndef INCLUDED_haxe_IMap
#include <haxe/IMap.h>
#endif
#ifndef INCLUDED_haxe_ds_StringMap
#include <haxe/ds/StringMap.h>
#endif
#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
#endif
#ifndef INCLUDED_lime_utils_ByteArray
#include <lime/utils/ByteArray.h>
#endif
#ifndef INCLUDED_lime_utils_IDataInput
#include <lime/utils/IDataInput.h>
#endif
#ifndef INCLUDED_lime_utils_IMemoryRange
#include <lime/utils/IMemoryRange.h>
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
#ifndef INCLUDED_openfl_Assets
#include <openfl/Assets.h>
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

Void MapManager_obj::__construct()
{
HX_STACK_FRAME("maps.MapManager","new",0x3753ccfa,"maps.MapManager.new","maps/MapManager.hx",29,0x437fc315)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(30)
	super::__construct();
	HX_STACK_LINE(32)
	::haxe::ds::StringMap tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(32)
	{
		HX_STACK_LINE(32)
		::haxe::ds::StringMap tmp1 = ::haxe::ds::StringMap_obj::__new();		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(32)
		::haxe::ds::StringMap tmp2 = tmp1;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(32)
		tmp = tmp2;
	}
	HX_STACK_LINE(32)
	this->maps = tmp;
	HX_STACK_LINE(34)
	::lime::utils::ByteArray tmp1 = ::openfl::Assets_obj::getBytes(HX_HCSTRING("assets/TestMap.txt","\x80","\xee","\x52","\x65"));		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(34)
	::maps::AreaMap tmp2 = ::maps::AreaMap_obj::__new(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(34)
	::maps::AreaMap testMap = tmp2;		HX_STACK_VAR(testMap,"testMap");
	HX_STACK_LINE(35)
	::lime::utils::ByteArray tmp3 = ::openfl::Assets_obj::getBytes(HX_HCSTRING("assets/TestMap2.tmx","\x65","\x15","\x90","\x62"));		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(35)
	::maps::AreaMap tmp4 = ::maps::AreaMap_obj::__new(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(35)
	::maps::AreaMap testMap2 = tmp4;		HX_STACK_VAR(testMap2,"testMap2");
	HX_STACK_LINE(38)
	::maps::AreaMap tmp5;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(38)
	{
		HX_STACK_LINE(38)
		::haxe::ds::StringMap tmp6 = this->maps;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(38)
		::maps::AreaMap tmp7 = testMap;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(38)
		tmp6->set(HX_HCSTRING("TestMap","\x4a","\xa1","\x12","\x8b"),tmp7);
		HX_STACK_LINE(38)
		tmp5 = testMap;
	}
	HX_STACK_LINE(38)
	tmp5;
	HX_STACK_LINE(39)
	::maps::AreaMap tmp6;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(39)
	{
		HX_STACK_LINE(39)
		::haxe::ds::StringMap tmp7 = this->maps;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(39)
		::maps::AreaMap tmp8 = testMap2;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(39)
		tmp7->set(HX_HCSTRING("TestMap2","\xa8","\x7f","\x3a","\x25"),tmp8);
		HX_STACK_LINE(39)
		tmp6 = testMap2;
	}
	HX_STACK_LINE(39)
	tmp6;
	HX_STACK_LINE(41)
	::maps::AreaMap tmp7 = testMap2;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(41)
	testMap->setNextMap(tmp7);
	HX_STACK_LINE(42)
	::maps::AreaMap tmp8 = testMap;		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(42)
	testMap2->setNextMap(tmp8);
}
;
	return null();
}

//MapManager_obj::~MapManager_obj() { }

Dynamic MapManager_obj::__CreateEmpty() { return  new MapManager_obj; }
hx::ObjectPtr< MapManager_obj > MapManager_obj::__new()
{  hx::ObjectPtr< MapManager_obj > _result_ = new MapManager_obj();
	_result_->__construct();
	return _result_;}

Dynamic MapManager_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< MapManager_obj > _result_ = new MapManager_obj();
	_result_->__construct();
	return _result_;}

::maps::AreaMap MapManager_obj::getCurrentMap( ){
	HX_STACK_FRAME("maps.MapManager","getCurrentMap",0x26bfad33,"maps.MapManager.getCurrentMap","maps/MapManager.hx",45,0x437fc315)
	HX_STACK_THIS(this)
	HX_STACK_LINE(46)
	::maps::AreaMap tmp = this->currentMap;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(46)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(MapManager_obj,getCurrentMap,return )

::maps::AreaMap MapManager_obj::getMap( ::String title){
	HX_STACK_FRAME("maps.MapManager","getMap",0x8d12a34c,"maps.MapManager.getMap","maps/MapManager.hx",48,0x437fc315)
	HX_STACK_THIS(this)
	HX_STACK_ARG(title,"title")
	HX_STACK_LINE(49)
	::haxe::ds::StringMap tmp = this->maps;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(49)
	::String tmp1 = title;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(49)
	::maps::AreaMap tmp2 = tmp->get(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(49)
	::maps::AreaMap tmp3 = tmp2;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(49)
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC1(MapManager_obj,getMap,return )

Void MapManager_obj::setMap( ::maps::AreaMap newMap,::actors::Player player){
{
		HX_STACK_FRAME("maps.MapManager","setMap",0x595af7c0,"maps.MapManager.setMap","maps/MapManager.hx",52,0x437fc315)
		HX_STACK_THIS(this)
		HX_STACK_ARG(newMap,"newMap")
		HX_STACK_ARG(player,"player")
		HX_STACK_LINE(53)
		::maps::AreaMap tmp = this->currentMap;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(53)
		bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(53)
		if ((tmp1)){
			HX_STACK_LINE(53)
			::maps::AreaMap tmp2 = this->currentMap;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(53)
			bool tmp3 = this->contains(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(53)
			if ((tmp3)){
				HX_STACK_LINE(54)
				::maps::AreaMap tmp4 = this->currentMap;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(54)
				tmp4->resetMap();
				HX_STACK_LINE(55)
				::maps::AreaMap tmp5 = this->currentMap;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(55)
				this->removeChild(tmp5);
			}
		}
		HX_STACK_LINE(58)
		this->currentMap = newMap;
		HX_STACK_LINE(59)
		::maps::AreaMap tmp2 = this->currentMap;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(59)
		this->addChild(tmp2);
		HX_STACK_LINE(60)
		::maps::AreaMap tmp3 = this->currentMap;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(60)
		::actors::Player tmp4 = player;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(60)
		tmp3->addPlayer(tmp4);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(MapManager_obj,setMap,(void))

::maps::MapManager MapManager_obj::singleton;

::maps::MapManager MapManager_obj::getSingleton( ){
	HX_STACK_FRAME("maps.MapManager","getSingleton",0x32c301bb,"maps.MapManager.getSingleton","maps/MapManager.hx",18,0x437fc315)
	HX_STACK_LINE(20)
	::maps::MapManager tmp = ::maps::MapManager_obj::singleton;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(20)
	bool tmp1 = (tmp == null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(20)
	if ((tmp1)){
		HX_STACK_LINE(21)
		::maps::MapManager tmp2 = ::maps::MapManager_obj::__new();		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(21)
		::maps::MapManager_obj::singleton = tmp2;
	}
	HX_STACK_LINE(22)
	::maps::MapManager tmp2 = ::maps::MapManager_obj::singleton;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(22)
	return tmp2;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(MapManager_obj,getSingleton,return )


MapManager_obj::MapManager_obj()
{
}

void MapManager_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(MapManager);
	HX_MARK_MEMBER_NAME(maps,"maps");
	HX_MARK_MEMBER_NAME(currentMap,"currentMap");
	::openfl::display::Sprite_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void MapManager_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(maps,"maps");
	HX_VISIT_MEMBER_NAME(currentMap,"currentMap");
	::openfl::display::Sprite_obj::__Visit(HX_VISIT_ARG);
}

Dynamic MapManager_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"maps") ) { return maps; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"getMap") ) { return getMap_dyn(); }
		if (HX_FIELD_EQ(inName,"setMap") ) { return setMap_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"currentMap") ) { return currentMap; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"getCurrentMap") ) { return getCurrentMap_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

bool MapManager_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
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

Dynamic MapManager_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"maps") ) { maps=inValue.Cast< ::haxe::ds::StringMap >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"currentMap") ) { currentMap=inValue.Cast< ::maps::AreaMap >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool MapManager_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 9:
		if (HX_FIELD_EQ(inName,"singleton") ) { singleton=ioValue.Cast< ::maps::MapManager >(); return true; }
	}
	return false;
}

void MapManager_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("maps","\x57","\x3e","\x56","\x48"));
	outFields->push(HX_HCSTRING("currentMap","\xe3","\xcf","\x2d","\xc7"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::haxe::ds::StringMap*/ ,(int)offsetof(MapManager_obj,maps),HX_HCSTRING("maps","\x57","\x3e","\x56","\x48")},
	{hx::fsObject /*::maps::AreaMap*/ ,(int)offsetof(MapManager_obj,currentMap),HX_HCSTRING("currentMap","\xe3","\xcf","\x2d","\xc7")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo sStaticStorageInfo[] = {
	{hx::fsObject /*::maps::MapManager*/ ,(void *) &MapManager_obj::singleton,HX_HCSTRING("singleton","\x0b","\xc5","\x7f","\xb7")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("maps","\x57","\x3e","\x56","\x48"),
	HX_HCSTRING("currentMap","\xe3","\xcf","\x2d","\xc7"),
	HX_HCSTRING("getCurrentMap","\x19","\x2c","\xa0","\x23"),
	HX_HCSTRING("getMap","\xa6","\x43","\x22","\xa3"),
	HX_HCSTRING("setMap","\x1a","\x98","\x6a","\x6f"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(MapManager_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(MapManager_obj::singleton,"singleton");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(MapManager_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(MapManager_obj::singleton,"singleton");
};

#endif

hx::Class MapManager_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("singleton","\x0b","\xc5","\x7f","\xb7"),
	HX_HCSTRING("getSingleton","\x95","\x61","\xd6","\xc6"),
	::String(null()) };

void MapManager_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("maps.MapManager","\x08","\x88","\xff","\x12");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &MapManager_obj::__GetStatic;
	__mClass->mSetStaticField = &MapManager_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< MapManager_obj >;
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
