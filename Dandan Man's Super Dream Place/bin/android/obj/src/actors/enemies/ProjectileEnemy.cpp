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
#ifndef INCLUDED_actors_actorsAI_EnemyAI
#include <actors/actorsAI/EnemyAI.h>
#endif
#ifndef INCLUDED_actors_actorsAI_ProjectileAI
#include <actors/actorsAI/ProjectileAI.h>
#endif
#ifndef INCLUDED_actors_attacks_Attack
#include <actors/attacks/Attack.h>
#endif
#ifndef INCLUDED_actors_attacks_EnemyProjectile
#include <actors/attacks/EnemyProjectile.h>
#endif
#ifndef INCLUDED_actors_attacks_Projectile
#include <actors/attacks/Projectile.h>
#endif
#ifndef INCLUDED_actors_attacks_ProjectileAttack
#include <actors/attacks/ProjectileAttack.h>
#endif
#ifndef INCLUDED_actors_enemies_Enemy
#include <actors/enemies/Enemy.h>
#endif
#ifndef INCLUDED_actors_enemies_ProjectileEnemy
#include <actors/enemies/ProjectileEnemy.h>
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

Void ProjectileEnemy_obj::__construct(::maps::mapobjects::SpawnPoint spawnPoint)
{
HX_STACK_FRAME("actors.enemies.ProjectileEnemy","new",0xe624eb99,"actors.enemies.ProjectileEnemy.new","actors/enemies/ProjectileEnemy.hx",23,0x40ba1b79)
HX_STACK_THIS(this)
HX_STACK_ARG(spawnPoint,"spawnPoint")
{
	HX_STACK_LINE(24)
	int enemySize = (int)32;		HX_STACK_VAR(enemySize,"enemySize");
	HX_STACK_LINE(27)
	::openfl::geom::Point tmp = ::openfl::geom::Point_obj::__new(null(),null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(27)
	int tmp1 = enemySize;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(27)
	int tmp2 = enemySize;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(27)
	::openfl::geom::Point tmp3 = ::openfl::geom::Point_obj::__new(null(),null());		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(27)
	::openfl::geom::Point tmp4 = ::openfl::geom::Point_obj::__new((int)1,null());		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(26)
	::actors::Animation tmp5 = ::actors::Animation_obj::__new(HX_HCSTRING("LeftIdle","\xdb","\xa6","\x60","\x26"),(int)4,tmp,tmp1,tmp2,Array_obj< ::Dynamic >::__new().Add(tmp3).Add(tmp4),null());		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(26)
	::actors::Animation leftIdle = tmp5;		HX_STACK_VAR(leftIdle,"leftIdle");
	HX_STACK_LINE(29)
	int tmp6 = (enemySize * (int)2);		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(29)
	::openfl::geom::Point tmp7 = ::openfl::geom::Point_obj::__new(tmp6,(int)0);		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(29)
	int tmp8 = enemySize;		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(29)
	int tmp9 = enemySize;		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(29)
	::openfl::geom::Point tmp10 = ::openfl::geom::Point_obj::__new(null(),null());		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(29)
	::openfl::geom::Point tmp11 = ::openfl::geom::Point_obj::__new((int)1,null());		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(28)
	::actors::Animation tmp12 = ::actors::Animation_obj::__new(HX_HCSTRING("RightIdle","\xf0","\xdc","\x4c","\x52"),(int)4,tmp7,tmp8,tmp9,Array_obj< ::Dynamic >::__new().Add(tmp10).Add(tmp11),null());		HX_STACK_VAR(tmp12,"tmp12");
	HX_STACK_LINE(28)
	::actors::Animation rightIdle = tmp12;		HX_STACK_VAR(rightIdle,"rightIdle");
	HX_STACK_LINE(32)
	::openfl::geom::Point tmp13 = ::openfl::geom::Point_obj::__new((int)0,enemySize);		HX_STACK_VAR(tmp13,"tmp13");
	HX_STACK_LINE(32)
	int tmp14 = enemySize;		HX_STACK_VAR(tmp14,"tmp14");
	HX_STACK_LINE(32)
	int tmp15 = enemySize;		HX_STACK_VAR(tmp15,"tmp15");
	HX_STACK_LINE(32)
	::openfl::geom::Point tmp16 = ::openfl::geom::Point_obj::__new(null(),null());		HX_STACK_VAR(tmp16,"tmp16");
	HX_STACK_LINE(32)
	::openfl::geom::Point tmp17 = ::openfl::geom::Point_obj::__new((int)1,null());		HX_STACK_VAR(tmp17,"tmp17");
	HX_STACK_LINE(32)
	::openfl::geom::Point tmp18 = ::openfl::geom::Point_obj::__new((int)2,null());		HX_STACK_VAR(tmp18,"tmp18");
	HX_STACK_LINE(32)
	::openfl::geom::Point tmp19 = ::openfl::geom::Point_obj::__new((int)3,null());		HX_STACK_VAR(tmp19,"tmp19");
	HX_STACK_LINE(31)
	::actors::Animation tmp20 = ::actors::Animation_obj::__new(HX_HCSTRING("LeftFire","\x7d","\xd3","\x68","\x24"),(int)2,tmp13,tmp14,tmp15,Array_obj< ::Dynamic >::__new().Add(tmp16).Add(tmp17).Add(tmp18).Add(tmp19),null());		HX_STACK_VAR(tmp20,"tmp20");
	HX_STACK_LINE(31)
	::actors::Animation leftFire = tmp20;		HX_STACK_VAR(leftFire,"leftFire");
	HX_STACK_LINE(34)
	int tmp21 = (enemySize * (int)2);		HX_STACK_VAR(tmp21,"tmp21");
	HX_STACK_LINE(34)
	::openfl::geom::Point tmp22 = ::openfl::geom::Point_obj::__new((int)0,tmp21);		HX_STACK_VAR(tmp22,"tmp22");
	HX_STACK_LINE(34)
	int tmp23 = enemySize;		HX_STACK_VAR(tmp23,"tmp23");
	HX_STACK_LINE(34)
	int tmp24 = enemySize;		HX_STACK_VAR(tmp24,"tmp24");
	HX_STACK_LINE(34)
	::openfl::geom::Point tmp25 = ::openfl::geom::Point_obj::__new(null(),null());		HX_STACK_VAR(tmp25,"tmp25");
	HX_STACK_LINE(34)
	::openfl::geom::Point tmp26 = ::openfl::geom::Point_obj::__new((int)1,null());		HX_STACK_VAR(tmp26,"tmp26");
	HX_STACK_LINE(34)
	::openfl::geom::Point tmp27 = ::openfl::geom::Point_obj::__new((int)2,null());		HX_STACK_VAR(tmp27,"tmp27");
	HX_STACK_LINE(34)
	::openfl::geom::Point tmp28 = ::openfl::geom::Point_obj::__new((int)3,null());		HX_STACK_VAR(tmp28,"tmp28");
	HX_STACK_LINE(33)
	::actors::Animation tmp29 = ::actors::Animation_obj::__new(HX_HCSTRING("RightFire","\x92","\x09","\x55","\x50"),(int)2,tmp22,tmp23,tmp24,Array_obj< ::Dynamic >::__new().Add(tmp25).Add(tmp26).Add(tmp27).Add(tmp28),null());		HX_STACK_VAR(tmp29,"tmp29");
	HX_STACK_LINE(33)
	::actors::Animation rightFire = tmp29;		HX_STACK_VAR(rightFire,"rightFire");
	HX_STACK_LINE(36)
	::haxe::ds::StringMap tmp30;		HX_STACK_VAR(tmp30,"tmp30");
	HX_STACK_LINE(36)
	{
		HX_STACK_LINE(36)
		::haxe::ds::StringMap tmp31 = ::haxe::ds::StringMap_obj::__new();		HX_STACK_VAR(tmp31,"tmp31");
		HX_STACK_LINE(36)
		::haxe::ds::StringMap tmp32 = tmp31;		HX_STACK_VAR(tmp32,"tmp32");
		HX_STACK_LINE(36)
		tmp30 = tmp32;
	}
	HX_STACK_LINE(36)
	this->animations = tmp30;
	HX_STACK_LINE(37)
	{
		HX_STACK_LINE(37)
		::String tmp31 = leftIdle->getName();		HX_STACK_VAR(tmp31,"tmp31");
		HX_STACK_LINE(37)
		::String k = tmp31;		HX_STACK_VAR(k,"k");
		HX_STACK_LINE(37)
		::haxe::ds::StringMap tmp32 = this->animations;		HX_STACK_VAR(tmp32,"tmp32");
		HX_STACK_LINE(37)
		::String tmp33 = k;		HX_STACK_VAR(tmp33,"tmp33");
		HX_STACK_LINE(37)
		::actors::Animation tmp34 = leftIdle;		HX_STACK_VAR(tmp34,"tmp34");
		HX_STACK_LINE(37)
		tmp32->set(tmp33,tmp34);
		HX_STACK_LINE(37)
		leftIdle;
	}
	HX_STACK_LINE(38)
	{
		HX_STACK_LINE(38)
		::String tmp31 = rightIdle->getName();		HX_STACK_VAR(tmp31,"tmp31");
		HX_STACK_LINE(38)
		::String k = tmp31;		HX_STACK_VAR(k,"k");
		HX_STACK_LINE(38)
		::haxe::ds::StringMap tmp32 = this->animations;		HX_STACK_VAR(tmp32,"tmp32");
		HX_STACK_LINE(38)
		::String tmp33 = k;		HX_STACK_VAR(tmp33,"tmp33");
		HX_STACK_LINE(38)
		::actors::Animation tmp34 = rightIdle;		HX_STACK_VAR(tmp34,"tmp34");
		HX_STACK_LINE(38)
		tmp32->set(tmp33,tmp34);
		HX_STACK_LINE(38)
		rightIdle;
	}
	HX_STACK_LINE(39)
	{
		HX_STACK_LINE(39)
		::String tmp31 = leftFire->getName();		HX_STACK_VAR(tmp31,"tmp31");
		HX_STACK_LINE(39)
		::String k = tmp31;		HX_STACK_VAR(k,"k");
		HX_STACK_LINE(39)
		::haxe::ds::StringMap tmp32 = this->animations;		HX_STACK_VAR(tmp32,"tmp32");
		HX_STACK_LINE(39)
		::String tmp33 = k;		HX_STACK_VAR(tmp33,"tmp33");
		HX_STACK_LINE(39)
		::actors::Animation tmp34 = leftFire;		HX_STACK_VAR(tmp34,"tmp34");
		HX_STACK_LINE(39)
		tmp32->set(tmp33,tmp34);
		HX_STACK_LINE(39)
		leftFire;
	}
	HX_STACK_LINE(40)
	{
		HX_STACK_LINE(40)
		::String tmp31 = rightFire->getName();		HX_STACK_VAR(tmp31,"tmp31");
		HX_STACK_LINE(40)
		::String k = tmp31;		HX_STACK_VAR(k,"k");
		HX_STACK_LINE(40)
		::haxe::ds::StringMap tmp32 = this->animations;		HX_STACK_VAR(tmp32,"tmp32");
		HX_STACK_LINE(40)
		::String tmp33 = k;		HX_STACK_VAR(tmp33,"tmp33");
		HX_STACK_LINE(40)
		::actors::Animation tmp34 = rightFire;		HX_STACK_VAR(tmp34,"tmp34");
		HX_STACK_LINE(40)
		tmp32->set(tmp33,tmp34);
		HX_STACK_LINE(40)
		rightFire;
	}
	HX_STACK_LINE(42)
	this->currentAnimation = leftIdle;
	HX_STACK_LINE(43)
	::actors::ObjectMover tmp31 = ::actors::ObjectMover_obj::__new(((Float).1),((Float).1),(int)0,(int)0,(int)0,(int)0,(int)2,(int)60,(int)2,null(),null());		HX_STACK_VAR(tmp31,"tmp31");
	HX_STACK_LINE(43)
	::actors::ObjectMover mover = tmp31;		HX_STACK_VAR(mover,"mover");
	HX_STACK_LINE(45)
	::openfl::display::Bitmap tmp32 = ::Main_obj::getBitmapAsset(HX_HCSTRING("assets/ProjectileEnemy.png","\x6e","\x45","\xdd","\x05"));		HX_STACK_VAR(tmp32,"tmp32");
	HX_STACK_LINE(46)
	::actors::ObjectMover tmp33 = mover;		HX_STACK_VAR(tmp33,"tmp33");
	HX_STACK_LINE(46)
	::maps::mapobjects::SpawnPoint tmp34 = spawnPoint;		HX_STACK_VAR(tmp34,"tmp34");
	HX_STACK_LINE(46)
	::actors::actorsAI::ProjectileAI tmp35 = ::actors::actorsAI::ProjectileAI_obj::__new();		HX_STACK_VAR(tmp35,"tmp35");
	HX_STACK_LINE(45)
	super::__construct(hx::ObjectPtr<OBJ_>(this),tmp32,tmp33,(int)32,(int)30,tmp34,tmp35);
	HX_STACK_LINE(48)
	this->health = (int)3;
	HX_STACK_LINE(49)
	this->invulDuration = (int)15;
	HX_STACK_LINE(50)
	::openfl::geom::Rectangle tmp36 = ::openfl::geom::Rectangle_obj::__new((int)0,(int)4,(int)32,(int)26);		HX_STACK_VAR(tmp36,"tmp36");
	HX_STACK_LINE(50)
	this->collisionBounds = tmp36;
	HX_STACK_LINE(53)
	::openfl::display::Bitmap tmp37 = ::Main_obj::getBitmapAsset(HX_HCSTRING("assets/Projectile.png","\x10","\x07","\x67","\x25"));		HX_STACK_VAR(tmp37,"tmp37");
	HX_STACK_LINE(54)
	::actors::ObjectMover tmp38 = ::actors::ObjectMover_obj::__new(((Float).5),((Float).1),(int)10,(int)0,(int)0,(int)0,(int)10,(int)0,(int)0,(int)0,false);		HX_STACK_VAR(tmp38,"tmp38");
	HX_STACK_LINE(53)
	::actors::attacks::EnemyProjectile tmp39 = ::actors::attacks::EnemyProjectile_obj::__new(tmp37,tmp38,(int)30,(int)1);		HX_STACK_VAR(tmp39,"tmp39");
	HX_STACK_LINE(52)
	::actors::attacks::ProjectileAttack tmp40 = ::actors::attacks::ProjectileAttack_obj::__new(hx::ObjectPtr<OBJ_>(this),tmp39,(int)0,HX_HCSTRING("Fire","\xd6","\xff","\x94","\x2e"),HX_HCSTRING("","\x00","\x00","\x00","\x00"));		HX_STACK_VAR(tmp40,"tmp40");
	HX_STACK_LINE(52)
	this->projectileAttack = tmp40;
}
;
	return null();
}

//ProjectileEnemy_obj::~ProjectileEnemy_obj() { }

Dynamic ProjectileEnemy_obj::__CreateEmpty() { return  new ProjectileEnemy_obj; }
hx::ObjectPtr< ProjectileEnemy_obj > ProjectileEnemy_obj::__new(::maps::mapobjects::SpawnPoint spawnPoint)
{  hx::ObjectPtr< ProjectileEnemy_obj > _result_ = new ProjectileEnemy_obj();
	_result_->__construct(spawnPoint);
	return _result_;}

Dynamic ProjectileEnemy_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< ProjectileEnemy_obj > _result_ = new ProjectileEnemy_obj();
	_result_->__construct(inArgs[0]);
	return _result_;}

Void ProjectileEnemy_obj::handleAnimation( ){
{
		HX_STACK_FRAME("actors.enemies.ProjectileEnemy","handleAnimation",0xca0a22f5,"actors.enemies.ProjectileEnemy.handleAnimation","actors/enemies/ProjectileEnemy.hx",59,0x40ba1b79)
		HX_STACK_THIS(this)
		HX_STACK_LINE(60)
		this->super::handleAnimation();
		HX_STACK_LINE(62)
		::actors::attacks::Attack tmp = this->attackBehavior;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(62)
		bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(62)
		if ((tmp1)){
			HX_STACK_LINE(64)
			::actors::attacks::Attack tmp2 = this->attackBehavior;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(64)
			bool tmp3 = tmp2->hasAnimation();		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(64)
			if ((tmp3)){
				HX_STACK_LINE(65)
				::actors::attacks::Attack tmp4 = this->attackBehavior;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(65)
				::String tmp5 = tmp4->getAnimation();		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(65)
				this->setAnimation(tmp5);
				HX_STACK_LINE(66)
				return null();
			}
		}
		HX_STACK_LINE(69)
		this->setAnimation(HX_HCSTRING("Idle","\x34","\xd3","\x8c","\x30"));
	}
return null();
}


Void ProjectileEnemy_obj::faceLeft( ){
{
		HX_STACK_FRAME("actors.enemies.ProjectileEnemy","faceLeft",0x4cb6916b,"actors.enemies.ProjectileEnemy.faceLeft","actors/enemies/ProjectileEnemy.hx",73,0x40ba1b79)
		HX_STACK_THIS(this)
		HX_STACK_LINE(73)
		this->alignmentLeft = true;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ProjectileEnemy_obj,faceLeft,(void))

Void ProjectileEnemy_obj::faceRight( ){
{
		HX_STACK_FRAME("actors.enemies.ProjectileEnemy","faceRight",0x4a15b9f8,"actors.enemies.ProjectileEnemy.faceRight","actors/enemies/ProjectileEnemy.hx",76,0x40ba1b79)
		HX_STACK_THIS(this)
		HX_STACK_LINE(76)
		this->alignmentLeft = false;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ProjectileEnemy_obj,faceRight,(void))

Void ProjectileEnemy_obj::fireProjectile( ){
{
		HX_STACK_FRAME("actors.enemies.ProjectileEnemy","fireProjectile",0x953c8aa6,"actors.enemies.ProjectileEnemy.fireProjectile","actors/enemies/ProjectileEnemy.hx",78,0x40ba1b79)
		HX_STACK_THIS(this)
		HX_STACK_LINE(79)
		::actors::attacks::ProjectileAttack tmp = this->projectileAttack;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(79)
		this->attackBehavior = tmp;
		HX_STACK_LINE(80)
		this->initiateAttack();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ProjectileEnemy_obj,fireProjectile,(void))

Void ProjectileEnemy_obj::setAnimation( ::String action){
{
		HX_STACK_FRAME("actors.enemies.ProjectileEnemy","setAnimation",0x72cce4a9,"actors.enemies.ProjectileEnemy.setAnimation","actors/enemies/ProjectileEnemy.hx",83,0x40ba1b79)
		HX_STACK_THIS(this)
		HX_STACK_ARG(action,"action")
		HX_STACK_LINE(85)
		bool tmp = this->alignmentLeft;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(85)
		if ((tmp)){
			HX_STACK_LINE(86)
			::String tmp1 = (HX_HCSTRING("Left","\x27","\x34","\x89","\x32") + action);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(86)
			::actors::Animation tmp2 = this->getAnimation(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(86)
			this->currentAnimation = tmp2;
		}
		else{
			HX_STACK_LINE(88)
			::String tmp1 = (HX_HCSTRING("Right","\xbc","\x7b","\x91","\x7c") + action);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(88)
			::actors::Animation tmp2 = this->getAnimation(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(88)
			this->currentAnimation = tmp2;
		}
	}
return null();
}


::actors::enemies::Enemy ProjectileEnemy_obj::createClone( ::maps::mapobjects::SpawnPoint spawnPoint){
	HX_STACK_FRAME("actors.enemies.ProjectileEnemy","createClone",0x7e82c6fa,"actors.enemies.ProjectileEnemy.createClone","actors/enemies/ProjectileEnemy.hx",93,0x40ba1b79)
	HX_STACK_THIS(this)
	HX_STACK_ARG(spawnPoint,"spawnPoint")
	HX_STACK_LINE(94)
	::actors::enemies::ProjectileEnemy tmp = ::actors::enemies::ProjectileEnemy_obj::__new(spawnPoint);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(94)
	return tmp;
}



ProjectileEnemy_obj::ProjectileEnemy_obj()
{
}

void ProjectileEnemy_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ProjectileEnemy);
	HX_MARK_MEMBER_NAME(projectileAttack,"projectileAttack");
	::actors::enemies::Enemy_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void ProjectileEnemy_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(projectileAttack,"projectileAttack");
	::actors::enemies::Enemy_obj::__Visit(HX_VISIT_ARG);
}

Dynamic ProjectileEnemy_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"faceLeft") ) { return faceLeft_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"faceRight") ) { return faceRight_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"createClone") ) { return createClone_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"setAnimation") ) { return setAnimation_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"fireProjectile") ) { return fireProjectile_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"handleAnimation") ) { return handleAnimation_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"projectileAttack") ) { return projectileAttack; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic ProjectileEnemy_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 16:
		if (HX_FIELD_EQ(inName,"projectileAttack") ) { projectileAttack=inValue.Cast< ::actors::attacks::ProjectileAttack >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool ProjectileEnemy_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	return false;
}

void ProjectileEnemy_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("projectileAttack","\x91","\xca","\x2a","\xd3"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::actors::attacks::ProjectileAttack*/ ,(int)offsetof(ProjectileEnemy_obj,projectileAttack),HX_HCSTRING("projectileAttack","\x91","\xca","\x2a","\xd3")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("projectileAttack","\x91","\xca","\x2a","\xd3"),
	HX_HCSTRING("handleAnimation","\x3c","\x96","\xa0","\x19"),
	HX_HCSTRING("faceLeft","\x44","\xfb","\x11","\x7b"),
	HX_HCSTRING("faceRight","\xff","\xed","\xb6","\xab"),
	HX_HCSTRING("fireProjectile","\x3f","\x5d","\x3e","\x07"),
	HX_HCSTRING("setAnimation","\x02","\xaf","\x84","\x6f"),
	HX_HCSTRING("createClone","\xc1","\x4a","\xde","\x71"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ProjectileEnemy_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ProjectileEnemy_obj::__mClass,"__mClass");
};

#endif

hx::Class ProjectileEnemy_obj::__mClass;

void ProjectileEnemy_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("actors.enemies.ProjectileEnemy","\x27","\x2b","\x57","\xa0");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &ProjectileEnemy_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< ProjectileEnemy_obj >;
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
