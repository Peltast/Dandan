#include <hxcpp.h>

#ifndef INCLUDED_actors_Actor
#include <actors/Actor.h>
#endif
#ifndef INCLUDED_actors_enemies_Enemy
#include <actors/enemies/Enemy.h>
#endif
#ifndef INCLUDED_maps_mapobjects_MapObject
#include <maps/mapobjects/MapObject.h>
#endif
#ifndef INCLUDED_maps_mapobjects_SpawnPoint
#include <maps/mapobjects/SpawnPoint.h>
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

Void SpawnPoint_obj::__construct(::openfl::display::Bitmap defaultBmp,::actors::enemies::Enemy enemyPrototype,hx::Null< int >  __o_maxEnemies,hx::Null< int >  __o_frequency,hx::Null< int >  __o_startCount,hx::Null< int >  __o_enemiesPerInstance)
{
HX_STACK_FRAME("maps.mapobjects.SpawnPoint","new",0x80610ac6,"maps.mapobjects.SpawnPoint.new","maps/mapobjects/SpawnPoint.hx",26,0x81a97dca)
HX_STACK_THIS(this)
HX_STACK_ARG(defaultBmp,"defaultBmp")
HX_STACK_ARG(enemyPrototype,"enemyPrototype")
HX_STACK_ARG(__o_maxEnemies,"maxEnemies")
HX_STACK_ARG(__o_frequency,"frequency")
HX_STACK_ARG(__o_startCount,"startCount")
HX_STACK_ARG(__o_enemiesPerInstance,"enemiesPerInstance")
int maxEnemies = __o_maxEnemies.Default(3);
int frequency = __o_frequency.Default(60);
int startCount = __o_startCount.Default(50);
int enemiesPerInstance = __o_enemiesPerInstance.Default(-1);
{
	HX_STACK_LINE(27)
	::openfl::display::Bitmap tmp = defaultBmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(27)
	super::__construct(hx::ObjectPtr<OBJ_>(this),tmp,false);
	HX_STACK_LINE(29)
	this->frequency = frequency;
	HX_STACK_LINE(30)
	this->startCount = startCount;
	HX_STACK_LINE(31)
	this->counter = startCount;
	HX_STACK_LINE(32)
	this->enemyCount = (int)0;
	HX_STACK_LINE(33)
	this->totalEnemiesSpawned = (int)0;
	HX_STACK_LINE(34)
	this->maxEnemies = maxEnemies;
	HX_STACK_LINE(35)
	this->enemiesPerInstance = enemiesPerInstance;
	HX_STACK_LINE(36)
	this->enemyPrototype = enemyPrototype;
}
;
	return null();
}

//SpawnPoint_obj::~SpawnPoint_obj() { }

Dynamic SpawnPoint_obj::__CreateEmpty() { return  new SpawnPoint_obj; }
hx::ObjectPtr< SpawnPoint_obj > SpawnPoint_obj::__new(::openfl::display::Bitmap defaultBmp,::actors::enemies::Enemy enemyPrototype,hx::Null< int >  __o_maxEnemies,hx::Null< int >  __o_frequency,hx::Null< int >  __o_startCount,hx::Null< int >  __o_enemiesPerInstance)
{  hx::ObjectPtr< SpawnPoint_obj > _result_ = new SpawnPoint_obj();
	_result_->__construct(defaultBmp,enemyPrototype,__o_maxEnemies,__o_frequency,__o_startCount,__o_enemiesPerInstance);
	return _result_;}

Dynamic SpawnPoint_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< SpawnPoint_obj > _result_ = new SpawnPoint_obj();
	_result_->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3],inArgs[4],inArgs[5]);
	return _result_;}

bool SpawnPoint_obj::updateSpawn( ){
	HX_STACK_FRAME("maps.mapobjects.SpawnPoint","updateSpawn",0xfa0617d8,"maps.mapobjects.SpawnPoint.updateSpawn","maps/mapobjects/SpawnPoint.hx",39,0x81a97dca)
	HX_STACK_THIS(this)
	HX_STACK_LINE(41)
	int tmp = this->enemiesPerInstance;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(41)
	int tmp1 = (int)-1;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(41)
	bool tmp2 = (tmp != tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(41)
	bool tmp3;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(41)
	if ((tmp2)){
		HX_STACK_LINE(41)
		int tmp4 = this->totalEnemiesSpawned;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(41)
		int tmp5 = tmp4;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(41)
		int tmp6 = this->enemiesPerInstance;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(41)
		int tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(41)
		tmp3 = (tmp5 >= tmp7);
	}
	else{
		HX_STACK_LINE(41)
		tmp3 = false;
	}
	HX_STACK_LINE(41)
	if ((tmp3)){
		HX_STACK_LINE(42)
		return false;
	}
	HX_STACK_LINE(43)
	int tmp4 = this->enemyCount;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(43)
	int tmp5 = this->maxEnemies;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(43)
	bool tmp6 = (tmp4 >= tmp5);		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(43)
	if ((tmp6)){
		HX_STACK_LINE(44)
		return false;
	}
	HX_STACK_LINE(46)
	hx::AddEq(this->counter,(int)1);
	HX_STACK_LINE(48)
	int tmp7 = this->counter;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(48)
	int tmp8 = this->frequency;		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(48)
	bool tmp9 = (tmp7 >= tmp8);		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(48)
	if ((tmp9)){
		HX_STACK_LINE(49)
		this->counter = (int)0;
		HX_STACK_LINE(50)
		hx::AddEq(this->enemyCount,(int)1);
		HX_STACK_LINE(51)
		hx::AddEq(this->totalEnemiesSpawned,(int)1);
		HX_STACK_LINE(52)
		return true;
	}
	HX_STACK_LINE(54)
	return false;
}


HX_DEFINE_DYNAMIC_FUNC0(SpawnPoint_obj,updateSpawn,return )

Void SpawnPoint_obj::resetSpawn( ){
{
		HX_STACK_FRAME("maps.mapobjects.SpawnPoint","resetSpawn",0xed8a5446,"maps.mapobjects.SpawnPoint.resetSpawn","maps/mapobjects/SpawnPoint.hx",57,0x81a97dca)
		HX_STACK_THIS(this)
		HX_STACK_LINE(58)
		this->totalEnemiesSpawned = (int)0;
		HX_STACK_LINE(59)
		this->enemyCount = (int)0;
		HX_STACK_LINE(60)
		int tmp = this->startCount;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(60)
		this->counter = tmp;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(SpawnPoint_obj,resetSpawn,(void))

::actors::enemies::Enemy SpawnPoint_obj::getEnemyType( ){
	HX_STACK_FRAME("maps.mapobjects.SpawnPoint","getEnemyType",0xcfa5da86,"maps.mapobjects.SpawnPoint.getEnemyType","maps/mapobjects/SpawnPoint.hx",63,0x81a97dca)
	HX_STACK_THIS(this)
	HX_STACK_LINE(65)
	::actors::enemies::Enemy tmp = this->enemyPrototype;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(65)
	::actors::enemies::Enemy tmp1 = tmp->createClone(hx::ObjectPtr<OBJ_>(this));		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(65)
	::actors::enemies::Enemy newEnemy = tmp1;		HX_STACK_VAR(newEnemy,"newEnemy");
	HX_STACK_LINE(66)
	Float tmp2 = this->get_x();		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(66)
	newEnemy->set_x(tmp2);
	HX_STACK_LINE(67)
	Float tmp3 = this->get_y();		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(67)
	newEnemy->set_y(tmp3);
	HX_STACK_LINE(68)
	::actors::enemies::Enemy tmp4 = newEnemy;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(68)
	return tmp4;
}


HX_DEFINE_DYNAMIC_FUNC0(SpawnPoint_obj,getEnemyType,return )

Void SpawnPoint_obj::enemyDead( ::actors::enemies::Enemy enemy){
{
		HX_STACK_FRAME("maps.mapobjects.SpawnPoint","enemyDead",0x98c75bf2,"maps.mapobjects.SpawnPoint.enemyDead","maps/mapobjects/SpawnPoint.hx",72,0x81a97dca)
		HX_STACK_THIS(this)
		HX_STACK_ARG(enemy,"enemy")
		HX_STACK_LINE(72)
		hx::SubEq(this->enemyCount,(int)1);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(SpawnPoint_obj,enemyDead,(void))


SpawnPoint_obj::SpawnPoint_obj()
{
}

void SpawnPoint_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(SpawnPoint);
	HX_MARK_MEMBER_NAME(enemyPrototype,"enemyPrototype");
	HX_MARK_MEMBER_NAME(frequency,"frequency");
	HX_MARK_MEMBER_NAME(startCount,"startCount");
	HX_MARK_MEMBER_NAME(counter,"counter");
	HX_MARK_MEMBER_NAME(enemyCount,"enemyCount");
	HX_MARK_MEMBER_NAME(maxEnemies,"maxEnemies");
	HX_MARK_MEMBER_NAME(enemiesPerInstance,"enemiesPerInstance");
	HX_MARK_MEMBER_NAME(totalEnemiesSpawned,"totalEnemiesSpawned");
	::maps::mapobjects::MapObject_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void SpawnPoint_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(enemyPrototype,"enemyPrototype");
	HX_VISIT_MEMBER_NAME(frequency,"frequency");
	HX_VISIT_MEMBER_NAME(startCount,"startCount");
	HX_VISIT_MEMBER_NAME(counter,"counter");
	HX_VISIT_MEMBER_NAME(enemyCount,"enemyCount");
	HX_VISIT_MEMBER_NAME(maxEnemies,"maxEnemies");
	HX_VISIT_MEMBER_NAME(enemiesPerInstance,"enemiesPerInstance");
	HX_VISIT_MEMBER_NAME(totalEnemiesSpawned,"totalEnemiesSpawned");
	::maps::mapobjects::MapObject_obj::__Visit(HX_VISIT_ARG);
}

Dynamic SpawnPoint_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"counter") ) { return counter; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"frequency") ) { return frequency; }
		if (HX_FIELD_EQ(inName,"enemyDead") ) { return enemyDead_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"startCount") ) { return startCount; }
		if (HX_FIELD_EQ(inName,"enemyCount") ) { return enemyCount; }
		if (HX_FIELD_EQ(inName,"maxEnemies") ) { return maxEnemies; }
		if (HX_FIELD_EQ(inName,"resetSpawn") ) { return resetSpawn_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"updateSpawn") ) { return updateSpawn_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"getEnemyType") ) { return getEnemyType_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"enemyPrototype") ) { return enemyPrototype; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"enemiesPerInstance") ) { return enemiesPerInstance; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"totalEnemiesSpawned") ) { return totalEnemiesSpawned; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic SpawnPoint_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"counter") ) { counter=inValue.Cast< int >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"frequency") ) { frequency=inValue.Cast< int >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"startCount") ) { startCount=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"enemyCount") ) { enemyCount=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"maxEnemies") ) { maxEnemies=inValue.Cast< int >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"enemyPrototype") ) { enemyPrototype=inValue.Cast< ::actors::enemies::Enemy >(); return inValue; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"enemiesPerInstance") ) { enemiesPerInstance=inValue.Cast< int >(); return inValue; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"totalEnemiesSpawned") ) { totalEnemiesSpawned=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool SpawnPoint_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	return false;
}

void SpawnPoint_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("enemyPrototype","\x3a","\xb6","\x23","\x7d"));
	outFields->push(HX_HCSTRING("frequency","\x9c","\x82","\xea","\xbb"));
	outFields->push(HX_HCSTRING("startCount","\x0d","\x1d","\x7a","\x66"));
	outFields->push(HX_HCSTRING("counter","\xfc","\xae","\x59","\x1d"));
	outFields->push(HX_HCSTRING("enemyCount","\x67","\x5d","\x66","\x05"));
	outFields->push(HX_HCSTRING("maxEnemies","\x62","\xe2","\x32","\x3d"));
	outFields->push(HX_HCSTRING("enemiesPerInstance","\x8c","\x1a","\x52","\xb8"));
	outFields->push(HX_HCSTRING("totalEnemiesSpawned","\x38","\x72","\x86","\x63"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::actors::enemies::Enemy*/ ,(int)offsetof(SpawnPoint_obj,enemyPrototype),HX_HCSTRING("enemyPrototype","\x3a","\xb6","\x23","\x7d")},
	{hx::fsInt,(int)offsetof(SpawnPoint_obj,frequency),HX_HCSTRING("frequency","\x9c","\x82","\xea","\xbb")},
	{hx::fsInt,(int)offsetof(SpawnPoint_obj,startCount),HX_HCSTRING("startCount","\x0d","\x1d","\x7a","\x66")},
	{hx::fsInt,(int)offsetof(SpawnPoint_obj,counter),HX_HCSTRING("counter","\xfc","\xae","\x59","\x1d")},
	{hx::fsInt,(int)offsetof(SpawnPoint_obj,enemyCount),HX_HCSTRING("enemyCount","\x67","\x5d","\x66","\x05")},
	{hx::fsInt,(int)offsetof(SpawnPoint_obj,maxEnemies),HX_HCSTRING("maxEnemies","\x62","\xe2","\x32","\x3d")},
	{hx::fsInt,(int)offsetof(SpawnPoint_obj,enemiesPerInstance),HX_HCSTRING("enemiesPerInstance","\x8c","\x1a","\x52","\xb8")},
	{hx::fsInt,(int)offsetof(SpawnPoint_obj,totalEnemiesSpawned),HX_HCSTRING("totalEnemiesSpawned","\x38","\x72","\x86","\x63")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("enemyPrototype","\x3a","\xb6","\x23","\x7d"),
	HX_HCSTRING("frequency","\x9c","\x82","\xea","\xbb"),
	HX_HCSTRING("startCount","\x0d","\x1d","\x7a","\x66"),
	HX_HCSTRING("counter","\xfc","\xae","\x59","\x1d"),
	HX_HCSTRING("enemyCount","\x67","\x5d","\x66","\x05"),
	HX_HCSTRING("maxEnemies","\x62","\xe2","\x32","\x3d"),
	HX_HCSTRING("enemiesPerInstance","\x8c","\x1a","\x52","\xb8"),
	HX_HCSTRING("totalEnemiesSpawned","\x38","\x72","\x86","\x63"),
	HX_HCSTRING("updateSpawn","\x72","\x07","\xff","\x66"),
	HX_HCSTRING("resetSpawn","\xec","\xd5","\x02","\x6a"),
	HX_HCSTRING("getEnemyType","\xac","\x91","\x7e","\xbc"),
	HX_HCSTRING("enemyDead","\x0c","\x51","\x85","\xa2"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(SpawnPoint_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(SpawnPoint_obj::__mClass,"__mClass");
};

#endif

hx::Class SpawnPoint_obj::__mClass;

void SpawnPoint_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("maps.mapobjects.SpawnPoint","\xd4","\xef","\x0e","\xed");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &SpawnPoint_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< SpawnPoint_obj >;
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
