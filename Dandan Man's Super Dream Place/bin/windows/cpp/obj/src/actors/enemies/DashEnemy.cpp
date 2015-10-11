#include <hxcpp.h>

#ifndef INCLUDED_Main
#include <Main.h>
#endif
#ifndef INCLUDED_actors_Actor
#include <actors/Actor.h>
#endif
#ifndef INCLUDED_actors_Animation
#include <actors/Animation.h>
#endif
#ifndef INCLUDED_actors_ObjectMover
#include <actors/ObjectMover.h>
#endif
#ifndef INCLUDED_actors_actorsAI_DashAI
#include <actors/actorsAI/DashAI.h>
#endif
#ifndef INCLUDED_actors_actorsAI_EnemyAI
#include <actors/actorsAI/EnemyAI.h>
#endif
#ifndef INCLUDED_actors_attacks_Attack
#include <actors/attacks/Attack.h>
#endif
#ifndef INCLUDED_actors_enemies_DashEnemy
#include <actors/enemies/DashEnemy.h>
#endif
#ifndef INCLUDED_actors_enemies_Enemy
#include <actors/enemies/Enemy.h>
#endif
#ifndef INCLUDED_haxe_IMap
#include <haxe/IMap.h>
#endif
#ifndef INCLUDED_haxe_ds_StringMap
#include <haxe/ds/StringMap.h>
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
#ifndef INCLUDED_openfl_geom_Point
#include <openfl/geom/Point.h>
#endif
#ifndef INCLUDED_openfl_geom_Rectangle
#include <openfl/geom/Rectangle.h>
#endif
namespace actors{
namespace enemies{

Void DashEnemy_obj::__construct(::maps::mapobjects::SpawnPoint homespawn)
{
HX_STACK_FRAME("actors.enemies.DashEnemy","new",0x9c829110,"actors.enemies.DashEnemy.new","actors/enemies/DashEnemy.hx",21,0x85e62462)
HX_STACK_THIS(this)
HX_STACK_ARG(homespawn,"homespawn")
{
	HX_STACK_LINE(23)
	int enemySize = (int)32;		HX_STACK_VAR(enemySize,"enemySize");
	HX_STACK_LINE(26)
	::openfl::geom::Point tmp = ::openfl::geom::Point_obj::__new(null(),null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(26)
	int tmp1 = enemySize;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(26)
	int tmp2 = enemySize;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(26)
	::openfl::geom::Point tmp3 = ::openfl::geom::Point_obj::__new(null(),null());		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(26)
	::openfl::geom::Point tmp4 = ::openfl::geom::Point_obj::__new((int)1,null());		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(25)
	::actors::Animation tmp5 = ::actors::Animation_obj::__new(HX_HCSTRING("Idle","\x34","\xd3","\x8c","\x30"),(int)20,tmp,tmp1,tmp2,Array_obj< ::Dynamic >::__new().Add(tmp3).Add(tmp4),null(),null());		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(25)
	::actors::Animation restIdle = tmp5;		HX_STACK_VAR(restIdle,"restIdle");
	HX_STACK_LINE(28)
	::openfl::geom::Point tmp6 = ::openfl::geom::Point_obj::__new((int)0,enemySize);		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(28)
	int tmp7 = enemySize;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(28)
	int tmp8 = enemySize;		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(28)
	::openfl::geom::Point tmp9 = ::openfl::geom::Point_obj::__new(null(),null());		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(28)
	::openfl::geom::Point tmp10 = ::openfl::geom::Point_obj::__new((int)1,null());		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(27)
	::actors::Animation tmp11 = ::actors::Animation_obj::__new(HX_HCSTRING("DashLeft","\x99","\x56","\x48","\x02"),(int)1,tmp6,tmp7,tmp8,Array_obj< ::Dynamic >::__new().Add(tmp9).Add(tmp10),null(),null());		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(27)
	::actors::Animation dashLeft = tmp11;		HX_STACK_VAR(dashLeft,"dashLeft");
	HX_STACK_LINE(30)
	int tmp12 = (enemySize * (int)2);		HX_STACK_VAR(tmp12,"tmp12");
	HX_STACK_LINE(30)
	int tmp13 = enemySize;		HX_STACK_VAR(tmp13,"tmp13");
	HX_STACK_LINE(30)
	::openfl::geom::Point tmp14 = ::openfl::geom::Point_obj::__new(tmp12,tmp13);		HX_STACK_VAR(tmp14,"tmp14");
	HX_STACK_LINE(30)
	int tmp15 = enemySize;		HX_STACK_VAR(tmp15,"tmp15");
	HX_STACK_LINE(30)
	int tmp16 = enemySize;		HX_STACK_VAR(tmp16,"tmp16");
	HX_STACK_LINE(30)
	::openfl::geom::Point tmp17 = ::openfl::geom::Point_obj::__new(null(),null());		HX_STACK_VAR(tmp17,"tmp17");
	HX_STACK_LINE(30)
	::openfl::geom::Point tmp18 = ::openfl::geom::Point_obj::__new((int)1,null());		HX_STACK_VAR(tmp18,"tmp18");
	HX_STACK_LINE(29)
	::actors::Animation tmp19 = ::actors::Animation_obj::__new(HX_HCSTRING("DashRight","\x0a","\x7d","\x10","\x74"),(int)1,tmp14,tmp15,tmp16,Array_obj< ::Dynamic >::__new().Add(tmp17).Add(tmp18),null(),null());		HX_STACK_VAR(tmp19,"tmp19");
	HX_STACK_LINE(29)
	::actors::Animation dashRight = tmp19;		HX_STACK_VAR(dashRight,"dashRight");
	HX_STACK_LINE(32)
	::haxe::ds::StringMap tmp20;		HX_STACK_VAR(tmp20,"tmp20");
	HX_STACK_LINE(32)
	{
		HX_STACK_LINE(32)
		::haxe::ds::StringMap tmp21 = ::haxe::ds::StringMap_obj::__new();		HX_STACK_VAR(tmp21,"tmp21");
		HX_STACK_LINE(32)
		::haxe::ds::StringMap tmp22 = tmp21;		HX_STACK_VAR(tmp22,"tmp22");
		HX_STACK_LINE(32)
		tmp20 = tmp22;
	}
	HX_STACK_LINE(32)
	this->animations = tmp20;
	HX_STACK_LINE(33)
	{
		HX_STACK_LINE(33)
		::String tmp21 = restIdle->getName();		HX_STACK_VAR(tmp21,"tmp21");
		HX_STACK_LINE(33)
		::String k = tmp21;		HX_STACK_VAR(k,"k");
		HX_STACK_LINE(33)
		::haxe::ds::StringMap tmp22 = this->animations;		HX_STACK_VAR(tmp22,"tmp22");
		HX_STACK_LINE(33)
		::String tmp23 = k;		HX_STACK_VAR(tmp23,"tmp23");
		HX_STACK_LINE(33)
		::actors::Animation tmp24 = restIdle;		HX_STACK_VAR(tmp24,"tmp24");
		HX_STACK_LINE(33)
		tmp22->set(tmp23,tmp24);
		HX_STACK_LINE(33)
		restIdle;
	}
	HX_STACK_LINE(34)
	{
		HX_STACK_LINE(34)
		::String tmp21 = dashLeft->getName();		HX_STACK_VAR(tmp21,"tmp21");
		HX_STACK_LINE(34)
		::String k = tmp21;		HX_STACK_VAR(k,"k");
		HX_STACK_LINE(34)
		::haxe::ds::StringMap tmp22 = this->animations;		HX_STACK_VAR(tmp22,"tmp22");
		HX_STACK_LINE(34)
		::String tmp23 = k;		HX_STACK_VAR(tmp23,"tmp23");
		HX_STACK_LINE(34)
		::actors::Animation tmp24 = dashLeft;		HX_STACK_VAR(tmp24,"tmp24");
		HX_STACK_LINE(34)
		tmp22->set(tmp23,tmp24);
		HX_STACK_LINE(34)
		dashLeft;
	}
	HX_STACK_LINE(35)
	{
		HX_STACK_LINE(35)
		::String tmp21 = dashRight->getName();		HX_STACK_VAR(tmp21,"tmp21");
		HX_STACK_LINE(35)
		::String k = tmp21;		HX_STACK_VAR(k,"k");
		HX_STACK_LINE(35)
		::haxe::ds::StringMap tmp22 = this->animations;		HX_STACK_VAR(tmp22,"tmp22");
		HX_STACK_LINE(35)
		::String tmp23 = k;		HX_STACK_VAR(tmp23,"tmp23");
		HX_STACK_LINE(35)
		::actors::Animation tmp24 = dashRight;		HX_STACK_VAR(tmp24,"tmp24");
		HX_STACK_LINE(35)
		tmp22->set(tmp23,tmp24);
		HX_STACK_LINE(35)
		dashRight;
	}
	HX_STACK_LINE(37)
	this->currentAnimation = restIdle;
	HX_STACK_LINE(38)
	::actors::ObjectMover tmp21 = ::actors::ObjectMover_obj::__new(((Float).1),((Float).1),(int)0,(int)0,(int)0,(int)0,(int)2,(int)60,(int)2,null(),null(),null());		HX_STACK_VAR(tmp21,"tmp21");
	HX_STACK_LINE(38)
	::actors::ObjectMover mover = tmp21;		HX_STACK_VAR(mover,"mover");
	HX_STACK_LINE(40)
	::openfl::display::Bitmap tmp22 = ::Main_obj::getBitmapAsset(HX_HCSTRING("assets/DashEnemy.png","\xe5","\xf9","\x70","\x93"));		HX_STACK_VAR(tmp22,"tmp22");
	HX_STACK_LINE(40)
	::actors::ObjectMover tmp23 = mover;		HX_STACK_VAR(tmp23,"tmp23");
	HX_STACK_LINE(40)
	int tmp24 = enemySize;		HX_STACK_VAR(tmp24,"tmp24");
	HX_STACK_LINE(40)
	int tmp25 = (enemySize - (int)2);		HX_STACK_VAR(tmp25,"tmp25");
	HX_STACK_LINE(40)
	::maps::mapobjects::SpawnPoint tmp26 = homespawn;		HX_STACK_VAR(tmp26,"tmp26");
	HX_STACK_LINE(40)
	::actors::actorsAI::DashAI tmp27 = ::actors::actorsAI::DashAI_obj::__new();		HX_STACK_VAR(tmp27,"tmp27");
	HX_STACK_LINE(40)
	super::__construct(hx::ObjectPtr<OBJ_>(this),tmp22,tmp23,tmp24,tmp25,tmp26,tmp27);
	HX_STACK_LINE(42)
	this->health = (int)2;
	HX_STACK_LINE(43)
	this->invulDuration = (int)15;
	HX_STACK_LINE(44)
	::openfl::geom::Rectangle tmp28 = ::openfl::geom::Rectangle_obj::__new((int)2,(int)4,(int)28,(int)26);		HX_STACK_VAR(tmp28,"tmp28");
	HX_STACK_LINE(44)
	this->collisionBounds = tmp28;
	HX_STACK_LINE(46)
	Array< ::Dynamic > hits = Array_obj< ::Dynamic >::__new();		HX_STACK_VAR(hits,"hits");
	HX_STACK_LINE(47)
	::openfl::geom::Rectangle tmp29 = ::openfl::geom::Rectangle_obj::__new((int)-7,(int)-2,(int)23,(int)40);		HX_STACK_VAR(tmp29,"tmp29");
	HX_STACK_LINE(47)
	hits->push(tmp29);
	HX_STACK_LINE(50)
	::actors::ObjectMover tmp30 = ::actors::ObjectMover_obj::__new(((Float).5),((Float).1),(int)-15,(int)0,(int)0,(int)0,(int)60,(int)60,(int)0,(int)0,false,null());		HX_STACK_VAR(tmp30,"tmp30");
	HX_STACK_LINE(49)
	::actors::attacks::Attack tmp31 = ::actors::attacks::Attack_obj::__new(tmp30,hits,(int)15,(int)1,(int)20,HX_HCSTRING("DashLeft","\x99","\x56","\x48","\x02"),null(),null(),null());		HX_STACK_VAR(tmp31,"tmp31");
	HX_STACK_LINE(49)
	this->leftDash = tmp31;
	HX_STACK_LINE(53)
	hits = Array_obj< ::Dynamic >::__new();
	HX_STACK_LINE(54)
	::openfl::geom::Rectangle tmp32 = ::openfl::geom::Rectangle_obj::__new((int)16,(int)-2,(int)23,(int)40);		HX_STACK_VAR(tmp32,"tmp32");
	HX_STACK_LINE(54)
	hits->push(tmp32);
	HX_STACK_LINE(57)
	::actors::ObjectMover tmp33 = ::actors::ObjectMover_obj::__new(((Float).5),((Float).1),(int)15,(int)0,(int)0,(int)0,(int)60,(int)60,(int)0,(int)0,false,null());		HX_STACK_VAR(tmp33,"tmp33");
	HX_STACK_LINE(56)
	::actors::attacks::Attack tmp34 = ::actors::attacks::Attack_obj::__new(tmp33,hits,(int)15,(int)1,(int)20,HX_HCSTRING("DashRight","\x0a","\x7d","\x10","\x74"),null(),null(),null());		HX_STACK_VAR(tmp34,"tmp34");
	HX_STACK_LINE(56)
	this->rightDash = tmp34;
}
;
	return null();
}

//DashEnemy_obj::~DashEnemy_obj() { }

Dynamic DashEnemy_obj::__CreateEmpty() { return  new DashEnemy_obj; }
hx::ObjectPtr< DashEnemy_obj > DashEnemy_obj::__new(::maps::mapobjects::SpawnPoint homespawn)
{  hx::ObjectPtr< DashEnemy_obj > _result_ = new DashEnemy_obj();
	_result_->__construct(homespawn);
	return _result_;}

Dynamic DashEnemy_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< DashEnemy_obj > _result_ = new DashEnemy_obj();
	_result_->__construct(inArgs[0]);
	return _result_;}

Void DashEnemy_obj::handleAnimation( ){
{
		HX_STACK_FRAME("actors.enemies.DashEnemy","handleAnimation",0x95459eec,"actors.enemies.DashEnemy.handleAnimation","actors/enemies/DashEnemy.hx",63,0x85e62462)
		HX_STACK_THIS(this)
		HX_STACK_LINE(64)
		this->super::handleAnimation();
		HX_STACK_LINE(66)
		::actors::attacks::Attack tmp = this->attackBehavior;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(66)
		bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(66)
		if ((tmp1)){
			HX_STACK_LINE(68)
			::actors::attacks::Attack tmp2 = this->attackBehavior;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(68)
			bool tmp3 = tmp2->hasAnimation();		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(68)
			if ((tmp3)){
				HX_STACK_LINE(69)
				::actors::Animation tmp4;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(69)
				{
					HX_STACK_LINE(69)
					::actors::attacks::Attack tmp5 = this->attackBehavior;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(69)
					::String tmp6 = tmp5->getAnimation();		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(69)
					::String key = tmp6;		HX_STACK_VAR(key,"key");
					HX_STACK_LINE(69)
					::haxe::ds::StringMap tmp7 = this->animations;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(69)
					::String tmp8 = key;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(69)
					tmp4 = tmp7->get(tmp8);
				}
				HX_STACK_LINE(69)
				this->currentAnimation = tmp4;
				HX_STACK_LINE(70)
				return null();
			}
		}
		HX_STACK_LINE(73)
		::haxe::ds::StringMap tmp2 = this->animations;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(73)
		::actors::Animation tmp3 = tmp2->get(HX_HCSTRING("Idle","\x34","\xd3","\x8c","\x30"));		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(73)
		this->currentAnimation = tmp3;
	}
return null();
}


Void DashEnemy_obj::dashLeft( ){
{
		HX_STACK_FRAME("actors.enemies.DashEnemy","dashLeft",0x89bf5bc9,"actors.enemies.DashEnemy.dashLeft","actors/enemies/DashEnemy.hx",76,0x85e62462)
		HX_STACK_THIS(this)
		HX_STACK_LINE(77)
		::actors::attacks::Attack tmp = this->leftDash;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(77)
		this->attackBehavior = tmp;
		HX_STACK_LINE(78)
		this->initiateAttack();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(DashEnemy_obj,dashLeft,(void))

Void DashEnemy_obj::dashRight( ){
{
		HX_STACK_FRAME("actors.enemies.DashEnemy","dashRight",0x74be01da,"actors.enemies.DashEnemy.dashRight","actors/enemies/DashEnemy.hx",80,0x85e62462)
		HX_STACK_THIS(this)
		HX_STACK_LINE(81)
		::actors::attacks::Attack tmp = this->rightDash;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(81)
		this->attackBehavior = tmp;
		HX_STACK_LINE(82)
		this->initiateAttack();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(DashEnemy_obj,dashRight,(void))

::actors::enemies::Enemy DashEnemy_obj::createClone( ::maps::mapobjects::SpawnPoint spawnPoint){
	HX_STACK_FRAME("actors.enemies.DashEnemy","createClone",0x00c53b71,"actors.enemies.DashEnemy.createClone","actors/enemies/DashEnemy.hx",86,0x85e62462)
	HX_STACK_THIS(this)
	HX_STACK_ARG(spawnPoint,"spawnPoint")
	HX_STACK_LINE(87)
	::actors::enemies::DashEnemy tmp = ::actors::enemies::DashEnemy_obj::__new(spawnPoint);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(87)
	return tmp;
}



DashEnemy_obj::DashEnemy_obj()
{
}

void DashEnemy_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(DashEnemy);
	HX_MARK_MEMBER_NAME(leftDash,"leftDash");
	HX_MARK_MEMBER_NAME(rightDash,"rightDash");
	::actors::enemies::Enemy_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void DashEnemy_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(leftDash,"leftDash");
	HX_VISIT_MEMBER_NAME(rightDash,"rightDash");
	::actors::enemies::Enemy_obj::__Visit(HX_VISIT_ARG);
}

Dynamic DashEnemy_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"leftDash") ) { return leftDash; }
		if (HX_FIELD_EQ(inName,"dashLeft") ) { return dashLeft_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"rightDash") ) { return rightDash; }
		if (HX_FIELD_EQ(inName,"dashRight") ) { return dashRight_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"createClone") ) { return createClone_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"handleAnimation") ) { return handleAnimation_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic DashEnemy_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"leftDash") ) { leftDash=inValue.Cast< ::actors::attacks::Attack >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"rightDash") ) { rightDash=inValue.Cast< ::actors::attacks::Attack >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool DashEnemy_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	return false;
}

void DashEnemy_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("leftDash","\xf9","\x98","\x5e","\x49"));
	outFields->push(HX_HCSTRING("rightDash","\x4e","\xab","\x29","\xad"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::actors::attacks::Attack*/ ,(int)offsetof(DashEnemy_obj,leftDash),HX_HCSTRING("leftDash","\xf9","\x98","\x5e","\x49")},
	{hx::fsObject /*::actors::attacks::Attack*/ ,(int)offsetof(DashEnemy_obj,rightDash),HX_HCSTRING("rightDash","\x4e","\xab","\x29","\xad")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("leftDash","\xf9","\x98","\x5e","\x49"),
	HX_HCSTRING("rightDash","\x4e","\xab","\x29","\xad"),
	HX_HCSTRING("handleAnimation","\x3c","\x96","\xa0","\x19"),
	HX_HCSTRING("dashLeft","\x79","\x9a","\x96","\x28"),
	HX_HCSTRING("dashRight","\x2a","\x9d","\x3d","\xd2"),
	HX_HCSTRING("createClone","\xc1","\x4a","\xde","\x71"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(DashEnemy_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(DashEnemy_obj::__mClass,"__mClass");
};

#endif

hx::Class DashEnemy_obj::__mClass;

void DashEnemy_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("actors.enemies.DashEnemy","\x1e","\x09","\x09","\x64");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &DashEnemy_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< DashEnemy_obj >;
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

} // end namespace actors
} // end namespace enemies
