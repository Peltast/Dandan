#include <hxcpp.h>

#ifndef INCLUDED_actors_Actor
#include <actors/Actor.h>
#endif
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
#ifndef INCLUDED_maps_Level
#include <maps/Level.h>
#endif
#ifndef INCLUDED_maps_mapobjects_MapObject
#include <maps/mapobjects/MapObject.h>
#endif
#ifndef INCLUDED_maps_mapobjects_Portal
#include <maps/mapobjects/Portal.h>
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

Void Level_obj::__construct(int level,Array< int > stages,::String startMap)
{
HX_STACK_FRAME("maps.Level","new",0x924c637f,"maps.Level.new","maps/Level.hx",21,0x19a039d2)
HX_STACK_THIS(this)
HX_STACK_ARG(level,"level")
HX_STACK_ARG(stages,"stages")
HX_STACK_ARG(startMap,"startMap")
{
	HX_STACK_LINE(22)
	super::__construct();
	HX_STACK_LINE(24)
	int tmp = level;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(24)
	::haxe::ds::StringMap tmp1 = this->loadMaps(tmp,stages);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(24)
	this->mapList = tmp1;
	HX_STACK_LINE(25)
	this->startMap = startMap;
	HX_STACK_LINE(26)
	::haxe::ds::StringMap tmp2 = this->mapList;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(26)
	::String tmp3 = startMap;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(26)
	::maps::AreaMap tmp4 = tmp2->get(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(26)
	::maps::AreaMap tmp5 = tmp4;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(26)
	bool tmp6 = (tmp5 != null());		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(26)
	if ((tmp6)){
		HX_STACK_LINE(27)
		::haxe::ds::StringMap tmp7 = this->mapList;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(27)
		::String tmp8 = startMap;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(27)
		::maps::AreaMap tmp9 = tmp7->get(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(27)
		this->currentMap = tmp9;
	}
}
;
	return null();
}

//Level_obj::~Level_obj() { }

Dynamic Level_obj::__CreateEmpty() { return  new Level_obj; }
hx::ObjectPtr< Level_obj > Level_obj::__new(int level,Array< int > stages,::String startMap)
{  hx::ObjectPtr< Level_obj > _result_ = new Level_obj();
	_result_->__construct(level,stages,startMap);
	return _result_;}

Dynamic Level_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Level_obj > _result_ = new Level_obj();
	_result_->__construct(inArgs[0],inArgs[1],inArgs[2]);
	return _result_;}

::haxe::ds::StringMap Level_obj::loadMaps( int level,Array< int > stages){
	HX_STACK_FRAME("maps.Level","loadMaps",0xdf18cc1e,"maps.Level.loadMaps","maps/Level.hx",31,0x19a039d2)
	HX_STACK_THIS(this)
	HX_STACK_ARG(level,"level")
	HX_STACK_ARG(stages,"stages")
	HX_STACK_LINE(33)
	::haxe::ds::StringMap tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(33)
	{
		HX_STACK_LINE(33)
		::haxe::ds::StringMap tmp1 = ::haxe::ds::StringMap_obj::__new();		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(33)
		::haxe::ds::StringMap tmp2 = tmp1;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(33)
		tmp = tmp2;
	}
	HX_STACK_LINE(33)
	::haxe::ds::StringMap loadedMapList = tmp;		HX_STACK_VAR(loadedMapList,"loadedMapList");
	HX_STACK_LINE(35)
	{
		HX_STACK_LINE(35)
		int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(35)
		int _g = stages->length;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(35)
		while((true)){
			HX_STACK_LINE(35)
			bool tmp1 = (_g1 < _g);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(35)
			bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(35)
			if ((tmp2)){
				HX_STACK_LINE(35)
				break;
			}
			HX_STACK_LINE(35)
			int tmp3 = (_g1)++;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(35)
			int i = tmp3;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(36)
			::String tmp4 = (HX_HCSTRING("assets/Stage","\xd2","\xdc","\x23","\xe3") + level);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(36)
			::String tmp5 = (tmp4 + HX_HCSTRING("-","\x2d","\x00","\x00","\x00"));		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(36)
			int tmp6 = stages->__get(i);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(36)
			::String tmp7 = (tmp5 + tmp6);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(36)
			::String tmp8 = (tmp7 + HX_HCSTRING(".tmx","\x71","\x35","\xc0","\x1e"));		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(36)
			::String mapString = tmp8;		HX_STACK_VAR(mapString,"mapString");
			HX_STACK_LINE(37)
			::String tmp9 = mapString;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(37)
			bool tmp10 = ::openfl::Assets_obj::exists(tmp9,null());		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(37)
			bool tmp11 = !(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(37)
			if ((tmp11)){
				HX_STACK_LINE(37)
				continue;
			}
			HX_STACK_LINE(39)
			::String tmp12 = mapString;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(39)
			::lime::utils::ByteArray tmp13 = ::openfl::Assets_obj::getBytes(tmp12);		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(39)
			::lime::utils::ByteArray mapByteArray = tmp13;		HX_STACK_VAR(mapByteArray,"mapByteArray");
			HX_STACK_LINE(40)
			::maps::AreaMap tmp14 = ::maps::AreaMap_obj::__new(mapByteArray,hx::ObjectPtr<OBJ_>(this));		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(40)
			::maps::AreaMap loadedMap = tmp14;		HX_STACK_VAR(loadedMap,"loadedMap");
			HX_STACK_LINE(41)
			bool tmp15 = (loadedMap == null());		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(41)
			if ((tmp15)){
				HX_STACK_LINE(42)
				continue;
			}
			else{
				HX_STACK_LINE(44)
				::maps::AreaMap tmp16;		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(44)
				{
					HX_STACK_LINE(44)
					::String tmp17 = (HX_HCSTRING("Stage","\x9e","\xda","\x38","\x17") + level);		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(44)
					::String tmp18 = (tmp17 + HX_HCSTRING("-","\x2d","\x00","\x00","\x00"));		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(44)
					int tmp19 = stages->__get(i);		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(44)
					::String tmp20 = (tmp18 + tmp19);		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(44)
					::maps::AreaMap tmp21 = loadedMap;		HX_STACK_VAR(tmp21,"tmp21");
					HX_STACK_LINE(44)
					loadedMapList->set(tmp20,tmp21);
					HX_STACK_LINE(44)
					tmp16 = loadedMap;
				}
				HX_STACK_LINE(44)
				tmp16;
			}
		}
	}
	HX_STACK_LINE(47)
	::haxe::ds::StringMap tmp1 = loadedMapList;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(47)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC2(Level_obj,loadMaps,return )

Void Level_obj::resetLevel( ){
{
		HX_STACK_FRAME("maps.Level","resetLevel",0x5caaebf6,"maps.Level.resetLevel","maps/Level.hx",51,0x19a039d2)
		HX_STACK_THIS(this)
		HX_STACK_LINE(52)
		::haxe::ds::StringMap tmp = this->mapList;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(52)
		::String tmp1 = this->startMap;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(52)
		::maps::AreaMap tmp2 = tmp->get(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(52)
		this->currentMap = tmp2;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Level_obj,resetLevel,(void))

::maps::AreaMap Level_obj::getMap( ::String name){
	HX_STACK_FRAME("maps.Level","getMap",0xdb052de7,"maps.Level.getMap","maps/Level.hx",55,0x19a039d2)
	HX_STACK_THIS(this)
	HX_STACK_ARG(name,"name")
	HX_STACK_LINE(56)
	::haxe::ds::StringMap tmp = this->mapList;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(56)
	::String tmp1 = name;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(56)
	::maps::AreaMap tmp2 = tmp->get(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(56)
	::maps::AreaMap tmp3 = tmp2;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(56)
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC1(Level_obj,getMap,return )

::String Level_obj::getMapLabel( ::maps::AreaMap map){
	HX_STACK_FRAME("maps.Level","getMapLabel",0x81648a8d,"maps.Level.getMapLabel","maps/Level.hx",58,0x19a039d2)
	HX_STACK_THIS(this)
	HX_STACK_ARG(map,"map")
	HX_STACK_LINE(59)
	::haxe::ds::StringMap tmp = this->mapList;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(59)
	Dynamic tmp1 = tmp->keys();		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(59)
	for(::cpp::FastIterator_obj< ::String > *__it = ::cpp::CreateFastIterator< ::String >(tmp1);  __it->hasNext(); ){
		::String key = __it->next();
		{
			HX_STACK_LINE(60)
			::haxe::ds::StringMap tmp2 = this->mapList;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(60)
			::String tmp3 = key;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(60)
			::maps::AreaMap tmp4 = tmp2->get(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(60)
			::maps::AreaMap tmp5 = tmp4;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(60)
			::maps::AreaMap tmp6 = map;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(60)
			bool tmp7 = (tmp5 == tmp6);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(60)
			if ((tmp7)){
				HX_STACK_LINE(61)
				::String tmp8 = key;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(61)
				return tmp8;
			}
		}
;
	}
	HX_STACK_LINE(63)
	return HX_HCSTRING("","\x00","\x00","\x00","\x00");
}


HX_DEFINE_DYNAMIC_FUNC1(Level_obj,getMapLabel,return )

::maps::AreaMap Level_obj::getCurrentMap( ){
	HX_STACK_FRAME("maps.Level","getCurrentMap",0x2e1d7bf8,"maps.Level.getCurrentMap","maps/Level.hx",65,0x19a039d2)
	HX_STACK_THIS(this)
	HX_STACK_LINE(66)
	::maps::AreaMap tmp = this->currentMap;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(66)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(Level_obj,getCurrentMap,return )

Void Level_obj::setMap( ::maps::AreaMap newMap,::actors::Player player,::maps::mapobjects::Portal origin){
{
		HX_STACK_FRAME("maps.Level","setMap",0xa74d825b,"maps.Level.setMap","maps/Level.hx",69,0x19a039d2)
		HX_STACK_THIS(this)
		HX_STACK_ARG(newMap,"newMap")
		HX_STACK_ARG(player,"player")
		HX_STACK_ARG(origin,"origin")
		HX_STACK_LINE(70)
		::maps::AreaMap tmp = this->currentMap;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(70)
		bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(70)
		if ((tmp1)){
			HX_STACK_LINE(70)
			::maps::AreaMap tmp2 = this->currentMap;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(70)
			bool tmp3 = this->contains(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(70)
			if ((tmp3)){
				HX_STACK_LINE(71)
				::maps::AreaMap tmp4 = this->currentMap;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(71)
				tmp4->resetMap();
				HX_STACK_LINE(72)
				::maps::AreaMap tmp5 = this->currentMap;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(72)
				this->removeChild(tmp5);
			}
		}
		HX_STACK_LINE(75)
		this->currentMap = newMap;
		HX_STACK_LINE(76)
		::maps::AreaMap tmp2 = this->currentMap;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(76)
		this->addChild(tmp2);
		HX_STACK_LINE(77)
		::maps::AreaMap tmp3 = this->currentMap;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(77)
		tmp3->resetMap();
		HX_STACK_LINE(78)
		::maps::AreaMap tmp4 = this->currentMap;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(78)
		::actors::Player tmp5 = player;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(78)
		::maps::mapobjects::Portal tmp6 = origin;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(78)
		tmp4->addPlayer(tmp5,tmp6);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(Level_obj,setMap,(void))

Void Level_obj::initiateLevel( ::actors::Player player){
{
		HX_STACK_FRAME("maps.Level","initiateLevel",0x5421484a,"maps.Level.initiateLevel","maps/Level.hx",80,0x19a039d2)
		HX_STACK_THIS(this)
		HX_STACK_ARG(player,"player")
		HX_STACK_LINE(82)
		::maps::AreaMap tmp = this->currentMap;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(82)
		::actors::Player tmp1 = player;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(82)
		this->setMap(tmp,tmp1,null());
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Level_obj,initiateLevel,(void))


Level_obj::Level_obj()
{
}

void Level_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Level);
	HX_MARK_MEMBER_NAME(mapList,"mapList");
	HX_MARK_MEMBER_NAME(startMap,"startMap");
	HX_MARK_MEMBER_NAME(currentMap,"currentMap");
	::openfl::display::Sprite_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void Level_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(mapList,"mapList");
	HX_VISIT_MEMBER_NAME(startMap,"startMap");
	HX_VISIT_MEMBER_NAME(currentMap,"currentMap");
	::openfl::display::Sprite_obj::__Visit(HX_VISIT_ARG);
}

Dynamic Level_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"getMap") ) { return getMap_dyn(); }
		if (HX_FIELD_EQ(inName,"setMap") ) { return setMap_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"mapList") ) { return mapList; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"startMap") ) { return startMap; }
		if (HX_FIELD_EQ(inName,"loadMaps") ) { return loadMaps_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"currentMap") ) { return currentMap; }
		if (HX_FIELD_EQ(inName,"resetLevel") ) { return resetLevel_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"getMapLabel") ) { return getMapLabel_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"getCurrentMap") ) { return getCurrentMap_dyn(); }
		if (HX_FIELD_EQ(inName,"initiateLevel") ) { return initiateLevel_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Level_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"mapList") ) { mapList=inValue.Cast< ::haxe::ds::StringMap >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"startMap") ) { startMap=inValue.Cast< ::String >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"currentMap") ) { currentMap=inValue.Cast< ::maps::AreaMap >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool Level_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	return false;
}

void Level_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("mapList","\x1a","\xd1","\xae","\x2c"));
	outFields->push(HX_HCSTRING("startMap","\x5a","\xb7","\x96","\x42"));
	outFields->push(HX_HCSTRING("currentMap","\xe3","\xcf","\x2d","\xc7"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::haxe::ds::StringMap*/ ,(int)offsetof(Level_obj,mapList),HX_HCSTRING("mapList","\x1a","\xd1","\xae","\x2c")},
	{hx::fsString,(int)offsetof(Level_obj,startMap),HX_HCSTRING("startMap","\x5a","\xb7","\x96","\x42")},
	{hx::fsObject /*::maps::AreaMap*/ ,(int)offsetof(Level_obj,currentMap),HX_HCSTRING("currentMap","\xe3","\xcf","\x2d","\xc7")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("mapList","\x1a","\xd1","\xae","\x2c"),
	HX_HCSTRING("startMap","\x5a","\xb7","\x96","\x42"),
	HX_HCSTRING("currentMap","\xe3","\xcf","\x2d","\xc7"),
	HX_HCSTRING("loadMaps","\x9d","\x0f","\xf6","\xb8"),
	HX_HCSTRING("resetLevel","\x35","\x4d","\xff","\x5a"),
	HX_HCSTRING("getMap","\xa6","\x43","\x22","\xa3"),
	HX_HCSTRING("getMapLabel","\x6e","\x40","\xe5","\x0c"),
	HX_HCSTRING("getCurrentMap","\x19","\x2c","\xa0","\x23"),
	HX_HCSTRING("setMap","\x1a","\x98","\x6a","\x6f"),
	HX_HCSTRING("initiateLevel","\x6b","\xf8","\xa3","\x49"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Level_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Level_obj::__mClass,"__mClass");
};

#endif

hx::Class Level_obj::__mClass;

void Level_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("maps.Level","\x0d","\x38","\x5f","\xeb");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &Level_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Level_obj >;
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
