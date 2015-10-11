#include <hxcpp.h>

#include "hxMath.h"
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
#ifndef INCLUDED_actors_actorsAI_RunningAI
#include <actors/actorsAI/RunningAI.h>
#endif
#ifndef INCLUDED_actors_attacks_Attack
#include <actors/attacks/Attack.h>
#endif
#ifndef INCLUDED_actors_enemies_Enemy
#include <actors/enemies/Enemy.h>
#endif
#ifndef INCLUDED_actors_enemies_RunningEnemy
#include <actors/enemies/RunningEnemy.h>
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

Void RunningEnemy_obj::__construct(::maps::mapobjects::SpawnPoint homeSpawn)
{
HX_STACK_FRAME("actors.enemies.RunningEnemy","new",0x12218cb3,"actors.enemies.RunningEnemy.new","actors/enemies/RunningEnemy.hx",19,0x2ea0d35b)
HX_STACK_THIS(this)
HX_STACK_ARG(homeSpawn,"homeSpawn")
{
	HX_STACK_LINE(21)
	int enemyWidth = (int)32;		HX_STACK_VAR(enemyWidth,"enemyWidth");
	HX_STACK_LINE(22)
	int enemyHeight = (int)40;		HX_STACK_VAR(enemyHeight,"enemyHeight");
	HX_STACK_LINE(25)
	::openfl::geom::Point tmp = ::openfl::geom::Point_obj::__new(null(),null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(25)
	int tmp1 = enemyWidth;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(25)
	int tmp2 = enemyHeight;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(25)
	::openfl::geom::Point tmp3 = ::openfl::geom::Point_obj::__new(null(),null());		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(25)
	::openfl::geom::Point tmp4 = ::openfl::geom::Point_obj::__new((int)1,null());		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(24)
	::actors::Animation tmp5 = ::actors::Animation_obj::__new(HX_HCSTRING("LeftIdle","\xdb","\xa6","\x60","\x26"),(int)3,tmp,tmp1,tmp2,Array_obj< ::Dynamic >::__new().Add(tmp3).Add(tmp4),null(),null());		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(24)
	::actors::Animation leftIdle = tmp5;		HX_STACK_VAR(leftIdle,"leftIdle");
	HX_STACK_LINE(27)
	int tmp6 = (enemyWidth * (int)2);		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(27)
	::openfl::geom::Point tmp7 = ::openfl::geom::Point_obj::__new(tmp6,null());		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(27)
	int tmp8 = enemyWidth;		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(27)
	int tmp9 = enemyHeight;		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(27)
	::openfl::geom::Point tmp10 = ::openfl::geom::Point_obj::__new(null(),null());		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(27)
	::openfl::geom::Point tmp11 = ::openfl::geom::Point_obj::__new((int)1,null());		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(26)
	::actors::Animation tmp12 = ::actors::Animation_obj::__new(HX_HCSTRING("RightIdle","\xf0","\xdc","\x4c","\x52"),(int)3,tmp7,tmp8,tmp9,Array_obj< ::Dynamic >::__new().Add(tmp10).Add(tmp11),null(),null());		HX_STACK_VAR(tmp12,"tmp12");
	HX_STACK_LINE(26)
	::actors::Animation rightIdle = tmp12;		HX_STACK_VAR(rightIdle,"rightIdle");
	HX_STACK_LINE(30)
	::openfl::geom::Point tmp13 = ::openfl::geom::Point_obj::__new((int)0,enemyHeight);		HX_STACK_VAR(tmp13,"tmp13");
	HX_STACK_LINE(30)
	int tmp14 = enemyWidth;		HX_STACK_VAR(tmp14,"tmp14");
	HX_STACK_LINE(30)
	int tmp15 = enemyHeight;		HX_STACK_VAR(tmp15,"tmp15");
	HX_STACK_LINE(30)
	::openfl::geom::Point tmp16 = ::openfl::geom::Point_obj::__new(null(),null());		HX_STACK_VAR(tmp16,"tmp16");
	HX_STACK_LINE(30)
	::openfl::geom::Point tmp17 = ::openfl::geom::Point_obj::__new((int)1,null());		HX_STACK_VAR(tmp17,"tmp17");
	HX_STACK_LINE(29)
	::actors::Animation tmp18 = ::actors::Animation_obj::__new(HX_HCSTRING("LeftRun","\x64","\x3d","\x35","\xc2"),(int)1,tmp13,tmp14,tmp15,Array_obj< ::Dynamic >::__new().Add(tmp16).Add(tmp17),null(),null());		HX_STACK_VAR(tmp18,"tmp18");
	HX_STACK_LINE(29)
	::actors::Animation leftRun = tmp18;		HX_STACK_VAR(leftRun,"leftRun");
	HX_STACK_LINE(32)
	int tmp19 = (enemyWidth * (int)2);		HX_STACK_VAR(tmp19,"tmp19");
	HX_STACK_LINE(32)
	int tmp20 = enemyHeight;		HX_STACK_VAR(tmp20,"tmp20");
	HX_STACK_LINE(32)
	::openfl::geom::Point tmp21 = ::openfl::geom::Point_obj::__new(tmp19,tmp20);		HX_STACK_VAR(tmp21,"tmp21");
	HX_STACK_LINE(32)
	int tmp22 = enemyWidth;		HX_STACK_VAR(tmp22,"tmp22");
	HX_STACK_LINE(32)
	int tmp23 = enemyHeight;		HX_STACK_VAR(tmp23,"tmp23");
	HX_STACK_LINE(32)
	::openfl::geom::Point tmp24 = ::openfl::geom::Point_obj::__new(null(),null());		HX_STACK_VAR(tmp24,"tmp24");
	HX_STACK_LINE(32)
	::openfl::geom::Point tmp25 = ::openfl::geom::Point_obj::__new((int)1,null());		HX_STACK_VAR(tmp25,"tmp25");
	HX_STACK_LINE(31)
	::actors::Animation tmp26 = ::actors::Animation_obj::__new(HX_HCSTRING("RightRun","\xef","\x20","\xd0","\xbd"),(int)1,tmp21,tmp22,tmp23,Array_obj< ::Dynamic >::__new().Add(tmp24).Add(tmp25),null(),null());		HX_STACK_VAR(tmp26,"tmp26");
	HX_STACK_LINE(31)
	::actors::Animation rightRun = tmp26;		HX_STACK_VAR(rightRun,"rightRun");
	HX_STACK_LINE(35)
	int tmp27 = (enemyHeight * (int)2);		HX_STACK_VAR(tmp27,"tmp27");
	HX_STACK_LINE(35)
	::openfl::geom::Point tmp28 = ::openfl::geom::Point_obj::__new((int)0,tmp27);		HX_STACK_VAR(tmp28,"tmp28");
	HX_STACK_LINE(35)
	int tmp29 = enemyWidth;		HX_STACK_VAR(tmp29,"tmp29");
	HX_STACK_LINE(35)
	int tmp30 = enemyHeight;		HX_STACK_VAR(tmp30,"tmp30");
	HX_STACK_LINE(35)
	::openfl::geom::Point tmp31 = ::openfl::geom::Point_obj::__new(null(),null());		HX_STACK_VAR(tmp31,"tmp31");
	HX_STACK_LINE(35)
	::openfl::geom::Point tmp32 = ::openfl::geom::Point_obj::__new((int)1,null());		HX_STACK_VAR(tmp32,"tmp32");
	HX_STACK_LINE(34)
	::actors::Animation tmp33 = ::actors::Animation_obj::__new(HX_HCSTRING("LeftHurt","\xd6","\x5b","\xc4","\x25"),(int)1,tmp28,tmp29,tmp30,Array_obj< ::Dynamic >::__new().Add(tmp31).Add(tmp32),null(),null());		HX_STACK_VAR(tmp33,"tmp33");
	HX_STACK_LINE(34)
	::actors::Animation leftHurt = tmp33;		HX_STACK_VAR(leftHurt,"leftHurt");
	HX_STACK_LINE(37)
	int tmp34 = (enemyWidth * (int)2);		HX_STACK_VAR(tmp34,"tmp34");
	HX_STACK_LINE(37)
	int tmp35 = (enemyHeight * (int)2);		HX_STACK_VAR(tmp35,"tmp35");
	HX_STACK_LINE(37)
	::openfl::geom::Point tmp36 = ::openfl::geom::Point_obj::__new(tmp34,tmp35);		HX_STACK_VAR(tmp36,"tmp36");
	HX_STACK_LINE(37)
	int tmp37 = enemyWidth;		HX_STACK_VAR(tmp37,"tmp37");
	HX_STACK_LINE(37)
	int tmp38 = enemyHeight;		HX_STACK_VAR(tmp38,"tmp38");
	HX_STACK_LINE(37)
	::openfl::geom::Point tmp39 = ::openfl::geom::Point_obj::__new(null(),null());		HX_STACK_VAR(tmp39,"tmp39");
	HX_STACK_LINE(37)
	::openfl::geom::Point tmp40 = ::openfl::geom::Point_obj::__new((int)1,null());		HX_STACK_VAR(tmp40,"tmp40");
	HX_STACK_LINE(36)
	::actors::Animation tmp41 = ::actors::Animation_obj::__new(HX_HCSTRING("RightHurt","\xeb","\x91","\xb0","\x51"),(int)1,tmp36,tmp37,tmp38,Array_obj< ::Dynamic >::__new().Add(tmp39).Add(tmp40),null(),null());		HX_STACK_VAR(tmp41,"tmp41");
	HX_STACK_LINE(36)
	::actors::Animation rightHurt = tmp41;		HX_STACK_VAR(rightHurt,"rightHurt");
	HX_STACK_LINE(39)
	::haxe::ds::StringMap tmp42;		HX_STACK_VAR(tmp42,"tmp42");
	HX_STACK_LINE(39)
	{
		HX_STACK_LINE(39)
		::haxe::ds::StringMap tmp43 = ::haxe::ds::StringMap_obj::__new();		HX_STACK_VAR(tmp43,"tmp43");
		HX_STACK_LINE(39)
		::haxe::ds::StringMap tmp44 = tmp43;		HX_STACK_VAR(tmp44,"tmp44");
		HX_STACK_LINE(39)
		tmp42 = tmp44;
	}
	HX_STACK_LINE(39)
	this->animations = tmp42;
	HX_STACK_LINE(40)
	{
		HX_STACK_LINE(40)
		::String tmp43 = leftIdle->getName();		HX_STACK_VAR(tmp43,"tmp43");
		HX_STACK_LINE(40)
		::String k = tmp43;		HX_STACK_VAR(k,"k");
		HX_STACK_LINE(40)
		::haxe::ds::StringMap tmp44 = this->animations;		HX_STACK_VAR(tmp44,"tmp44");
		HX_STACK_LINE(40)
		::String tmp45 = k;		HX_STACK_VAR(tmp45,"tmp45");
		HX_STACK_LINE(40)
		::actors::Animation tmp46 = leftIdle;		HX_STACK_VAR(tmp46,"tmp46");
		HX_STACK_LINE(40)
		tmp44->set(tmp45,tmp46);
		HX_STACK_LINE(40)
		leftIdle;
	}
	HX_STACK_LINE(41)
	{
		HX_STACK_LINE(41)
		::String tmp43 = rightIdle->getName();		HX_STACK_VAR(tmp43,"tmp43");
		HX_STACK_LINE(41)
		::String k = tmp43;		HX_STACK_VAR(k,"k");
		HX_STACK_LINE(41)
		::haxe::ds::StringMap tmp44 = this->animations;		HX_STACK_VAR(tmp44,"tmp44");
		HX_STACK_LINE(41)
		::String tmp45 = k;		HX_STACK_VAR(tmp45,"tmp45");
		HX_STACK_LINE(41)
		::actors::Animation tmp46 = rightIdle;		HX_STACK_VAR(tmp46,"tmp46");
		HX_STACK_LINE(41)
		tmp44->set(tmp45,tmp46);
		HX_STACK_LINE(41)
		rightIdle;
	}
	HX_STACK_LINE(42)
	{
		HX_STACK_LINE(42)
		::String tmp43 = leftRun->getName();		HX_STACK_VAR(tmp43,"tmp43");
		HX_STACK_LINE(42)
		::String k = tmp43;		HX_STACK_VAR(k,"k");
		HX_STACK_LINE(42)
		::haxe::ds::StringMap tmp44 = this->animations;		HX_STACK_VAR(tmp44,"tmp44");
		HX_STACK_LINE(42)
		::String tmp45 = k;		HX_STACK_VAR(tmp45,"tmp45");
		HX_STACK_LINE(42)
		::actors::Animation tmp46 = leftRun;		HX_STACK_VAR(tmp46,"tmp46");
		HX_STACK_LINE(42)
		tmp44->set(tmp45,tmp46);
		HX_STACK_LINE(42)
		leftRun;
	}
	HX_STACK_LINE(43)
	{
		HX_STACK_LINE(43)
		::String tmp43 = rightRun->getName();		HX_STACK_VAR(tmp43,"tmp43");
		HX_STACK_LINE(43)
		::String k = tmp43;		HX_STACK_VAR(k,"k");
		HX_STACK_LINE(43)
		::haxe::ds::StringMap tmp44 = this->animations;		HX_STACK_VAR(tmp44,"tmp44");
		HX_STACK_LINE(43)
		::String tmp45 = k;		HX_STACK_VAR(tmp45,"tmp45");
		HX_STACK_LINE(43)
		::actors::Animation tmp46 = rightRun;		HX_STACK_VAR(tmp46,"tmp46");
		HX_STACK_LINE(43)
		tmp44->set(tmp45,tmp46);
		HX_STACK_LINE(43)
		rightRun;
	}
	HX_STACK_LINE(44)
	{
		HX_STACK_LINE(44)
		::String tmp43 = leftHurt->getName();		HX_STACK_VAR(tmp43,"tmp43");
		HX_STACK_LINE(44)
		::String k = tmp43;		HX_STACK_VAR(k,"k");
		HX_STACK_LINE(44)
		::haxe::ds::StringMap tmp44 = this->animations;		HX_STACK_VAR(tmp44,"tmp44");
		HX_STACK_LINE(44)
		::String tmp45 = k;		HX_STACK_VAR(tmp45,"tmp45");
		HX_STACK_LINE(44)
		::actors::Animation tmp46 = leftHurt;		HX_STACK_VAR(tmp46,"tmp46");
		HX_STACK_LINE(44)
		tmp44->set(tmp45,tmp46);
		HX_STACK_LINE(44)
		leftHurt;
	}
	HX_STACK_LINE(45)
	{
		HX_STACK_LINE(45)
		::String tmp43 = rightHurt->getName();		HX_STACK_VAR(tmp43,"tmp43");
		HX_STACK_LINE(45)
		::String k = tmp43;		HX_STACK_VAR(k,"k");
		HX_STACK_LINE(45)
		::haxe::ds::StringMap tmp44 = this->animations;		HX_STACK_VAR(tmp44,"tmp44");
		HX_STACK_LINE(45)
		::String tmp45 = k;		HX_STACK_VAR(tmp45,"tmp45");
		HX_STACK_LINE(45)
		::actors::Animation tmp46 = rightHurt;		HX_STACK_VAR(tmp46,"tmp46");
		HX_STACK_LINE(45)
		tmp44->set(tmp45,tmp46);
		HX_STACK_LINE(45)
		rightHurt;
	}
	HX_STACK_LINE(47)
	this->currentAnimation = leftIdle;
	HX_STACK_LINE(48)
	::actors::ObjectMover tmp43 = ::actors::ObjectMover_obj::__new((int)1,(int)1,(int)0,(int)0,(int)0,(int)0,(int)10,(int)60,(int)0,null(),null(),null());		HX_STACK_VAR(tmp43,"tmp43");
	HX_STACK_LINE(48)
	::actors::ObjectMover mover = tmp43;		HX_STACK_VAR(mover,"mover");
	HX_STACK_LINE(50)
	::openfl::display::Bitmap tmp44 = ::Main_obj::getBitmapAsset(HX_HCSTRING("assets/RunningEnemy.png","\xf0","\x9b","\x31","\xfe"));		HX_STACK_VAR(tmp44,"tmp44");
	HX_STACK_LINE(50)
	::actors::ObjectMover tmp45 = mover;		HX_STACK_VAR(tmp45,"tmp45");
	HX_STACK_LINE(50)
	int tmp46 = enemyWidth;		HX_STACK_VAR(tmp46,"tmp46");
	HX_STACK_LINE(50)
	int tmp47 = enemyHeight;		HX_STACK_VAR(tmp47,"tmp47");
	HX_STACK_LINE(50)
	::maps::mapobjects::SpawnPoint tmp48 = homeSpawn;		HX_STACK_VAR(tmp48,"tmp48");
	HX_STACK_LINE(50)
	::actors::actorsAI::RunningAI tmp49 = ::actors::actorsAI::RunningAI_obj::__new();		HX_STACK_VAR(tmp49,"tmp49");
	HX_STACK_LINE(50)
	super::__construct(hx::ObjectPtr<OBJ_>(this),tmp44,tmp45,tmp46,tmp47,tmp48,tmp49);
	HX_STACK_LINE(52)
	Array< ::Dynamic > hits = Array_obj< ::Dynamic >::__new();		HX_STACK_VAR(hits,"hits");
	HX_STACK_LINE(53)
	int tmp50 = (enemyWidth - (int)2);		HX_STACK_VAR(tmp50,"tmp50");
	HX_STACK_LINE(53)
	int tmp51 = (enemyHeight + (int)2);		HX_STACK_VAR(tmp51,"tmp51");
	HX_STACK_LINE(53)
	::openfl::geom::Rectangle tmp52 = ::openfl::geom::Rectangle_obj::__new((int)1,(int)-1,tmp50,tmp51);		HX_STACK_VAR(tmp52,"tmp52");
	HX_STACK_LINE(53)
	hits->push(tmp52);
	HX_STACK_LINE(54)
	::actors::attacks::Attack tmp53 = ::actors::attacks::Attack_obj::__new(null(),hits,(int)-1,(int)1,(int)0,null(),null(),null(),null());		HX_STACK_VAR(tmp53,"tmp53");
	HX_STACK_LINE(54)
	this->attackBehavior = tmp53;
	HX_STACK_LINE(55)
	this->initiateAttack();
	HX_STACK_LINE(57)
	this->health = (int)2;
	HX_STACK_LINE(58)
	this->invulDuration = (int)15;
	HX_STACK_LINE(59)
	::openfl::geom::Rectangle tmp54 = ::openfl::geom::Rectangle_obj::__new((int)4,(int)5,(int)24,(int)35);		HX_STACK_VAR(tmp54,"tmp54");
	HX_STACK_LINE(59)
	this->collisionBounds = tmp54;
}
;
	return null();
}

//RunningEnemy_obj::~RunningEnemy_obj() { }

Dynamic RunningEnemy_obj::__CreateEmpty() { return  new RunningEnemy_obj; }
hx::ObjectPtr< RunningEnemy_obj > RunningEnemy_obj::__new(::maps::mapobjects::SpawnPoint homeSpawn)
{  hx::ObjectPtr< RunningEnemy_obj > _result_ = new RunningEnemy_obj();
	_result_->__construct(homeSpawn);
	return _result_;}

Dynamic RunningEnemy_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< RunningEnemy_obj > _result_ = new RunningEnemy_obj();
	_result_->__construct(inArgs[0]);
	return _result_;}

Void RunningEnemy_obj::handleAnimation( ){
{
		HX_STACK_FRAME("actors.enemies.RunningEnemy","handleAnimation",0x2481030f,"actors.enemies.RunningEnemy.handleAnimation","actors/enemies/RunningEnemy.hx",64,0x2ea0d35b)
		HX_STACK_THIS(this)
		HX_STACK_LINE(65)
		this->super::handleAnimation();
		HX_STACK_LINE(67)
		bool tmp = this->invulnerable;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(67)
		if ((tmp)){
			HX_STACK_LINE(68)
			this->setAnimation(HX_HCSTRING("Hurt","\x2f","\x88","\xf0","\x2f"));
		}
		else{
			HX_STACK_LINE(69)
			::actors::ObjectMover tmp1 = this->currentMover;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(69)
			Float tmp2 = tmp1->getXVel();		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(69)
			Float tmp3 = ::Math_obj::abs(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(69)
			bool tmp4 = (tmp3 < ((Float).1));		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(69)
			if ((tmp4)){
				HX_STACK_LINE(70)
				this->setAnimation(HX_HCSTRING("Idle","\x34","\xd3","\x8c","\x30"));
			}
			else{
				HX_STACK_LINE(72)
				this->setAnimation(HX_HCSTRING("Run","\x2b","\x9f","\x3e","\x00"));
			}
		}
	}
return null();
}


Void RunningEnemy_obj::damageReaction( ::maps::mapobjects::MapObject source){
{
		HX_STACK_FRAME("actors.enemies.RunningEnemy","damageReaction",0xf0ec09c5,"actors.enemies.RunningEnemy.damageReaction","actors/enemies/RunningEnemy.hx",76,0x2ea0d35b)
		HX_STACK_THIS(this)
		HX_STACK_ARG(source,"source")
		HX_STACK_LINE(77)
		::maps::mapobjects::MapObject tmp = source;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(77)
		this->super::damageReaction(tmp);
		HX_STACK_LINE(79)
		this->setAnimation(HX_HCSTRING("Hurt","\x2f","\x88","\xf0","\x2f"));
	}
return null();
}


Void RunningEnemy_obj::setAnimation( ::String action){
{
		HX_STACK_FRAME("actors.enemies.RunningEnemy","setAnimation",0x4444504f,"actors.enemies.RunningEnemy.setAnimation","actors/enemies/RunningEnemy.hx",83,0x2ea0d35b)
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


::actors::enemies::Enemy RunningEnemy_obj::createClone( ::maps::mapobjects::SpawnPoint spawnPoint){
	HX_STACK_FRAME("actors.enemies.RunningEnemy","createClone",0x460d1214,"actors.enemies.RunningEnemy.createClone","actors/enemies/RunningEnemy.hx",93,0x2ea0d35b)
	HX_STACK_THIS(this)
	HX_STACK_ARG(spawnPoint,"spawnPoint")
	HX_STACK_LINE(94)
	::actors::enemies::RunningEnemy tmp = ::actors::enemies::RunningEnemy_obj::__new(spawnPoint);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(94)
	return tmp;
}



RunningEnemy_obj::RunningEnemy_obj()
{
}

Dynamic RunningEnemy_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 11:
		if (HX_FIELD_EQ(inName,"createClone") ) { return createClone_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"setAnimation") ) { return setAnimation_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"damageReaction") ) { return damageReaction_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"handleAnimation") ) { return handleAnimation_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("handleAnimation","\x3c","\x96","\xa0","\x19"),
	HX_HCSTRING("damageReaction","\x38","\xbb","\x07","\xb4"),
	HX_HCSTRING("setAnimation","\x02","\xaf","\x84","\x6f"),
	HX_HCSTRING("createClone","\xc1","\x4a","\xde","\x71"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(RunningEnemy_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(RunningEnemy_obj::__mClass,"__mClass");
};

#endif

hx::Class RunningEnemy_obj::__mClass;

void RunningEnemy_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("actors.enemies.RunningEnemy","\x41","\xb7","\x32","\xb1");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< RunningEnemy_obj >;
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
