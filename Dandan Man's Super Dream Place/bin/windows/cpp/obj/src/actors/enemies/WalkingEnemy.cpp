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
#ifndef INCLUDED_actors_actorsAI_PaceAI
#include <actors/actorsAI/PaceAI.h>
#endif
#ifndef INCLUDED_actors_attacks_Attack
#include <actors/attacks/Attack.h>
#endif
#ifndef INCLUDED_actors_enemies_Enemy
#include <actors/enemies/Enemy.h>
#endif
#ifndef INCLUDED_actors_enemies_WalkingEnemy
#include <actors/enemies/WalkingEnemy.h>
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

Void WalkingEnemy_obj::__construct(::maps::mapobjects::SpawnPoint homeSpawn)
{
HX_STACK_FRAME("actors.enemies.WalkingEnemy","new",0xfbcdbff9,"actors.enemies.WalkingEnemy.new","actors/enemies/WalkingEnemy.hx",21,0x91412ad5)
HX_STACK_THIS(this)
HX_STACK_ARG(homeSpawn,"homeSpawn")
{
	HX_STACK_LINE(23)
	int enemySize = (int)32;		HX_STACK_VAR(enemySize,"enemySize");
	HX_STACK_LINE(26)
	::openfl::geom::Point tmp = ::openfl::geom::Point_obj::__new((int)0,(int)0);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(26)
	int tmp1 = enemySize;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(26)
	int tmp2 = enemySize;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(26)
	::openfl::geom::Point tmp3 = ::openfl::geom::Point_obj::__new((int)0,(int)0);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(25)
	::actors::Animation tmp4 = ::actors::Animation_obj::__new(HX_HCSTRING("Idle","\x34","\xd3","\x8c","\x30"),(int)0,tmp,tmp1,tmp2,Array_obj< ::Dynamic >::__new().Add(tmp3),null(),null());		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(25)
	::actors::Animation normalIdle = tmp4;		HX_STACK_VAR(normalIdle,"normalIdle");
	HX_STACK_LINE(28)
	::openfl::geom::Point tmp5 = ::openfl::geom::Point_obj::__new((int)0,enemySize);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(28)
	int tmp6 = enemySize;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(28)
	int tmp7 = enemySize;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(29)
	::openfl::geom::Point tmp8 = ::openfl::geom::Point_obj::__new(null(),null());		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(29)
	::openfl::geom::Point tmp9 = ::openfl::geom::Point_obj::__new((int)1,(int)0);		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(29)
	::openfl::geom::Point tmp10 = ::openfl::geom::Point_obj::__new((int)2,(int)0);		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(29)
	::openfl::geom::Point tmp11 = ::openfl::geom::Point_obj::__new((int)3,(int)0);		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(27)
	::actors::Animation tmp12 = ::actors::Animation_obj::__new(HX_HCSTRING("LeftWalk","\xd0","\x5c","\x9f","\x2f"),(int)5,tmp5,tmp6,tmp7,Array_obj< ::Dynamic >::__new().Add(tmp8).Add(tmp9).Add(tmp10).Add(tmp11),null(),null());		HX_STACK_VAR(tmp12,"tmp12");
	HX_STACK_LINE(27)
	::actors::Animation leftWalk = tmp12;		HX_STACK_VAR(leftWalk,"leftWalk");
	HX_STACK_LINE(31)
	int tmp13 = (enemySize * (int)2);		HX_STACK_VAR(tmp13,"tmp13");
	HX_STACK_LINE(31)
	::openfl::geom::Point tmp14 = ::openfl::geom::Point_obj::__new((int)0,tmp13);		HX_STACK_VAR(tmp14,"tmp14");
	HX_STACK_LINE(31)
	int tmp15 = enemySize;		HX_STACK_VAR(tmp15,"tmp15");
	HX_STACK_LINE(31)
	int tmp16 = enemySize;		HX_STACK_VAR(tmp16,"tmp16");
	HX_STACK_LINE(32)
	::openfl::geom::Point tmp17 = ::openfl::geom::Point_obj::__new(null(),null());		HX_STACK_VAR(tmp17,"tmp17");
	HX_STACK_LINE(32)
	::openfl::geom::Point tmp18 = ::openfl::geom::Point_obj::__new((int)1,(int)0);		HX_STACK_VAR(tmp18,"tmp18");
	HX_STACK_LINE(32)
	::openfl::geom::Point tmp19 = ::openfl::geom::Point_obj::__new((int)2,(int)0);		HX_STACK_VAR(tmp19,"tmp19");
	HX_STACK_LINE(32)
	::openfl::geom::Point tmp20 = ::openfl::geom::Point_obj::__new((int)3,(int)0);		HX_STACK_VAR(tmp20,"tmp20");
	HX_STACK_LINE(30)
	::actors::Animation tmp21 = ::actors::Animation_obj::__new(HX_HCSTRING("RightWalk","\xe5","\x92","\x8b","\x5b"),(int)5,tmp14,tmp15,tmp16,Array_obj< ::Dynamic >::__new().Add(tmp17).Add(tmp18).Add(tmp19).Add(tmp20),null(),null());		HX_STACK_VAR(tmp21,"tmp21");
	HX_STACK_LINE(30)
	::actors::Animation rightWalk = tmp21;		HX_STACK_VAR(rightWalk,"rightWalk");
	HX_STACK_LINE(34)
	int tmp22 = (enemySize * (int)2);		HX_STACK_VAR(tmp22,"tmp22");
	HX_STACK_LINE(34)
	::openfl::geom::Point tmp23 = ::openfl::geom::Point_obj::__new(tmp22,(int)0);		HX_STACK_VAR(tmp23,"tmp23");
	HX_STACK_LINE(34)
	int tmp24 = enemySize;		HX_STACK_VAR(tmp24,"tmp24");
	HX_STACK_LINE(34)
	int tmp25 = enemySize;		HX_STACK_VAR(tmp25,"tmp25");
	HX_STACK_LINE(34)
	::openfl::geom::Point tmp26 = ::openfl::geom::Point_obj::__new(null(),null());		HX_STACK_VAR(tmp26,"tmp26");
	HX_STACK_LINE(33)
	::actors::Animation tmp27 = ::actors::Animation_obj::__new(HX_HCSTRING("Jump","\x0e","\xf1","\x42","\x31"),(int)0,tmp23,tmp24,tmp25,Array_obj< ::Dynamic >::__new().Add(tmp26),null(),null());		HX_STACK_VAR(tmp27,"tmp27");
	HX_STACK_LINE(33)
	::actors::Animation jump = tmp27;		HX_STACK_VAR(jump,"jump");
	HX_STACK_LINE(36)
	::openfl::geom::Point tmp28 = ::openfl::geom::Point_obj::__new(enemySize,(int)0);		HX_STACK_VAR(tmp28,"tmp28");
	HX_STACK_LINE(36)
	int tmp29 = enemySize;		HX_STACK_VAR(tmp29,"tmp29");
	HX_STACK_LINE(36)
	int tmp30 = enemySize;		HX_STACK_VAR(tmp30,"tmp30");
	HX_STACK_LINE(36)
	::openfl::geom::Point tmp31 = ::openfl::geom::Point_obj::__new(null(),null());		HX_STACK_VAR(tmp31,"tmp31");
	HX_STACK_LINE(36)
	::openfl::geom::Point tmp32 = ::openfl::geom::Point_obj::__new((int)1,null());		HX_STACK_VAR(tmp32,"tmp32");
	HX_STACK_LINE(35)
	::actors::Animation tmp33 = ::actors::Animation_obj::__new(HX_HCSTRING("Hurt","\x2f","\x88","\xf0","\x2f"),(int)1,tmp28,tmp29,tmp30,Array_obj< ::Dynamic >::__new().Add(tmp31).Add(tmp32),null(),null());		HX_STACK_VAR(tmp33,"tmp33");
	HX_STACK_LINE(35)
	::actors::Animation hurt = tmp33;		HX_STACK_VAR(hurt,"hurt");
	HX_STACK_LINE(38)
	int tmp34 = (enemySize * (int)3);		HX_STACK_VAR(tmp34,"tmp34");
	HX_STACK_LINE(38)
	::openfl::geom::Point tmp35 = ::openfl::geom::Point_obj::__new((int)0,tmp34);		HX_STACK_VAR(tmp35,"tmp35");
	HX_STACK_LINE(38)
	int tmp36 = enemySize;		HX_STACK_VAR(tmp36,"tmp36");
	HX_STACK_LINE(38)
	int tmp37 = enemySize;		HX_STACK_VAR(tmp37,"tmp37");
	HX_STACK_LINE(38)
	::openfl::geom::Point tmp38 = ::openfl::geom::Point_obj::__new(null(),null());		HX_STACK_VAR(tmp38,"tmp38");
	HX_STACK_LINE(38)
	::openfl::geom::Point tmp39 = ::openfl::geom::Point_obj::__new((int)1,null());		HX_STACK_VAR(tmp39,"tmp39");
	HX_STACK_LINE(38)
	::openfl::geom::Point tmp40 = ::openfl::geom::Point_obj::__new((int)2,null());		HX_STACK_VAR(tmp40,"tmp40");
	HX_STACK_LINE(38)
	::openfl::geom::Point tmp41 = ::openfl::geom::Point_obj::__new((int)3,null());		HX_STACK_VAR(tmp41,"tmp41");
	HX_STACK_LINE(37)
	::actors::Animation tmp42 = ::actors::Animation_obj::__new(HX_HCSTRING("Death","\x14","\xff","\x4b","\x6a"),(int)1,tmp35,tmp36,tmp37,Array_obj< ::Dynamic >::__new().Add(tmp38).Add(tmp39).Add(tmp40).Add(tmp41),(int)0,false);		HX_STACK_VAR(tmp42,"tmp42");
	HX_STACK_LINE(37)
	this->deathAnimation = tmp42;
	HX_STACK_LINE(40)
	::haxe::ds::StringMap tmp43;		HX_STACK_VAR(tmp43,"tmp43");
	HX_STACK_LINE(40)
	{
		HX_STACK_LINE(40)
		::haxe::ds::StringMap tmp44 = ::haxe::ds::StringMap_obj::__new();		HX_STACK_VAR(tmp44,"tmp44");
		HX_STACK_LINE(40)
		::haxe::ds::StringMap tmp45 = tmp44;		HX_STACK_VAR(tmp45,"tmp45");
		HX_STACK_LINE(40)
		tmp43 = tmp45;
	}
	HX_STACK_LINE(40)
	this->animations = tmp43;
	HX_STACK_LINE(41)
	{
		HX_STACK_LINE(41)
		::String tmp44 = normalIdle->getName();		HX_STACK_VAR(tmp44,"tmp44");
		HX_STACK_LINE(41)
		::String k = tmp44;		HX_STACK_VAR(k,"k");
		HX_STACK_LINE(41)
		::haxe::ds::StringMap tmp45 = this->animations;		HX_STACK_VAR(tmp45,"tmp45");
		HX_STACK_LINE(41)
		::String tmp46 = k;		HX_STACK_VAR(tmp46,"tmp46");
		HX_STACK_LINE(41)
		::actors::Animation tmp47 = normalIdle;		HX_STACK_VAR(tmp47,"tmp47");
		HX_STACK_LINE(41)
		tmp45->set(tmp46,tmp47);
		HX_STACK_LINE(41)
		normalIdle;
	}
	HX_STACK_LINE(42)
	{
		HX_STACK_LINE(42)
		::String tmp44 = leftWalk->getName();		HX_STACK_VAR(tmp44,"tmp44");
		HX_STACK_LINE(42)
		::String k = tmp44;		HX_STACK_VAR(k,"k");
		HX_STACK_LINE(42)
		::haxe::ds::StringMap tmp45 = this->animations;		HX_STACK_VAR(tmp45,"tmp45");
		HX_STACK_LINE(42)
		::String tmp46 = k;		HX_STACK_VAR(tmp46,"tmp46");
		HX_STACK_LINE(42)
		::actors::Animation tmp47 = leftWalk;		HX_STACK_VAR(tmp47,"tmp47");
		HX_STACK_LINE(42)
		tmp45->set(tmp46,tmp47);
		HX_STACK_LINE(42)
		leftWalk;
	}
	HX_STACK_LINE(43)
	{
		HX_STACK_LINE(43)
		::String tmp44 = rightWalk->getName();		HX_STACK_VAR(tmp44,"tmp44");
		HX_STACK_LINE(43)
		::String k = tmp44;		HX_STACK_VAR(k,"k");
		HX_STACK_LINE(43)
		::haxe::ds::StringMap tmp45 = this->animations;		HX_STACK_VAR(tmp45,"tmp45");
		HX_STACK_LINE(43)
		::String tmp46 = k;		HX_STACK_VAR(tmp46,"tmp46");
		HX_STACK_LINE(43)
		::actors::Animation tmp47 = rightWalk;		HX_STACK_VAR(tmp47,"tmp47");
		HX_STACK_LINE(43)
		tmp45->set(tmp46,tmp47);
		HX_STACK_LINE(43)
		rightWalk;
	}
	HX_STACK_LINE(44)
	{
		HX_STACK_LINE(44)
		::String tmp44 = jump->getName();		HX_STACK_VAR(tmp44,"tmp44");
		HX_STACK_LINE(44)
		::String k = tmp44;		HX_STACK_VAR(k,"k");
		HX_STACK_LINE(44)
		::haxe::ds::StringMap tmp45 = this->animations;		HX_STACK_VAR(tmp45,"tmp45");
		HX_STACK_LINE(44)
		::String tmp46 = k;		HX_STACK_VAR(tmp46,"tmp46");
		HX_STACK_LINE(44)
		::actors::Animation tmp47 = jump;		HX_STACK_VAR(tmp47,"tmp47");
		HX_STACK_LINE(44)
		tmp45->set(tmp46,tmp47);
		HX_STACK_LINE(44)
		jump;
	}
	HX_STACK_LINE(45)
	{
		HX_STACK_LINE(45)
		::String tmp44 = hurt->getName();		HX_STACK_VAR(tmp44,"tmp44");
		HX_STACK_LINE(45)
		::String k = tmp44;		HX_STACK_VAR(k,"k");
		HX_STACK_LINE(45)
		::haxe::ds::StringMap tmp45 = this->animations;		HX_STACK_VAR(tmp45,"tmp45");
		HX_STACK_LINE(45)
		::String tmp46 = k;		HX_STACK_VAR(tmp46,"tmp46");
		HX_STACK_LINE(45)
		::actors::Animation tmp47 = hurt;		HX_STACK_VAR(tmp47,"tmp47");
		HX_STACK_LINE(45)
		tmp45->set(tmp46,tmp47);
		HX_STACK_LINE(45)
		hurt;
	}
	HX_STACK_LINE(46)
	{
		HX_STACK_LINE(46)
		::actors::Animation tmp44 = this->deathAnimation;		HX_STACK_VAR(tmp44,"tmp44");
		HX_STACK_LINE(46)
		::String tmp45 = tmp44->getName();		HX_STACK_VAR(tmp45,"tmp45");
		HX_STACK_LINE(46)
		::String k = tmp45;		HX_STACK_VAR(k,"k");
		HX_STACK_LINE(46)
		::actors::Animation tmp46 = this->deathAnimation;		HX_STACK_VAR(tmp46,"tmp46");
		HX_STACK_LINE(46)
		::actors::Animation v = tmp46;		HX_STACK_VAR(v,"v");
		HX_STACK_LINE(46)
		::haxe::ds::StringMap tmp47 = this->animations;		HX_STACK_VAR(tmp47,"tmp47");
		HX_STACK_LINE(46)
		::String tmp48 = k;		HX_STACK_VAR(tmp48,"tmp48");
		HX_STACK_LINE(46)
		::actors::Animation tmp49 = v;		HX_STACK_VAR(tmp49,"tmp49");
		HX_STACK_LINE(46)
		tmp47->set(tmp48,tmp49);
		HX_STACK_LINE(46)
		v;
	}
	HX_STACK_LINE(48)
	this->currentAnimation = normalIdle;
	HX_STACK_LINE(49)
	::actors::ObjectMover tmp44 = ::actors::ObjectMover_obj::__new(((Float).1),((Float).1),(int)0,(int)0,(int)0,(int)0,(int)2,(int)60,(int)2,null(),null(),null());		HX_STACK_VAR(tmp44,"tmp44");
	HX_STACK_LINE(49)
	::actors::ObjectMover mover = tmp44;		HX_STACK_VAR(mover,"mover");
	HX_STACK_LINE(51)
	::openfl::display::Bitmap tmp45 = ::Main_obj::getBitmapAsset(HX_HCSTRING("assets/WalkingEnemy.png","\x36","\xcf","\xdd","\xe7"));		HX_STACK_VAR(tmp45,"tmp45");
	HX_STACK_LINE(51)
	::actors::ObjectMover tmp46 = mover;		HX_STACK_VAR(tmp46,"tmp46");
	HX_STACK_LINE(51)
	int tmp47 = enemySize;		HX_STACK_VAR(tmp47,"tmp47");
	HX_STACK_LINE(51)
	int tmp48 = (enemySize - (int)2);		HX_STACK_VAR(tmp48,"tmp48");
	HX_STACK_LINE(51)
	::maps::mapobjects::SpawnPoint tmp49 = homeSpawn;		HX_STACK_VAR(tmp49,"tmp49");
	HX_STACK_LINE(51)
	::actors::actorsAI::PaceAI tmp50 = ::actors::actorsAI::PaceAI_obj::__new();		HX_STACK_VAR(tmp50,"tmp50");
	HX_STACK_LINE(51)
	super::__construct(hx::ObjectPtr<OBJ_>(this),tmp45,tmp46,tmp47,tmp48,tmp49,tmp50);
	HX_STACK_LINE(53)
	this->health = (int)2;
	HX_STACK_LINE(54)
	this->touchDamage = (int)1;
	HX_STACK_LINE(55)
	this->invulDuration = (int)15;
	HX_STACK_LINE(57)
	Array< ::Dynamic > hits = Array_obj< ::Dynamic >::__new();		HX_STACK_VAR(hits,"hits");
	HX_STACK_LINE(58)
	int tmp51 = this->actorWidth;		HX_STACK_VAR(tmp51,"tmp51");
	HX_STACK_LINE(58)
	int tmp52 = (tmp51 + (int)2);		HX_STACK_VAR(tmp52,"tmp52");
	HX_STACK_LINE(58)
	int tmp53 = this->actorHeight;		HX_STACK_VAR(tmp53,"tmp53");
	HX_STACK_LINE(58)
	::openfl::geom::Rectangle tmp54 = ::openfl::geom::Rectangle_obj::__new((int)-1,(int)-1,tmp52,tmp53);		HX_STACK_VAR(tmp54,"tmp54");
	HX_STACK_LINE(58)
	hits->push(tmp54);
	HX_STACK_LINE(59)
	::actors::attacks::Attack tmp55 = ::actors::attacks::Attack_obj::__new(mover,hits,(int)-1,(int)1,(int)0,null(),null(),null(),null());		HX_STACK_VAR(tmp55,"tmp55");
	HX_STACK_LINE(59)
	this->attackBehavior = tmp55;
	HX_STACK_LINE(60)
	this->initiateAttack();
}
;
	return null();
}

//WalkingEnemy_obj::~WalkingEnemy_obj() { }

Dynamic WalkingEnemy_obj::__CreateEmpty() { return  new WalkingEnemy_obj; }
hx::ObjectPtr< WalkingEnemy_obj > WalkingEnemy_obj::__new(::maps::mapobjects::SpawnPoint homeSpawn)
{  hx::ObjectPtr< WalkingEnemy_obj > _result_ = new WalkingEnemy_obj();
	_result_->__construct(homeSpawn);
	return _result_;}

Dynamic WalkingEnemy_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< WalkingEnemy_obj > _result_ = new WalkingEnemy_obj();
	_result_->__construct(inArgs[0]);
	return _result_;}

Void WalkingEnemy_obj::handleAnimation( ){
{
		HX_STACK_FRAME("actors.enemies.WalkingEnemy","handleAnimation",0x4bd00755,"actors.enemies.WalkingEnemy.handleAnimation","actors/enemies/WalkingEnemy.hx",65,0x91412ad5)
		HX_STACK_THIS(this)
		HX_STACK_LINE(66)
		this->super::handleAnimation();
		HX_STACK_LINE(68)
		::actors::Animation tmp = this->currentAnimation;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(68)
		::actors::Animation tmp1 = this->deathAnimation;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(68)
		bool tmp2 = (tmp == tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(68)
		if ((tmp2)){
			HX_STACK_LINE(69)
			return null();
		}
		HX_STACK_LINE(70)
		bool tmp3 = this->invulnerable;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(70)
		if ((tmp3)){
			HX_STACK_LINE(71)
			return null();
		}
		HX_STACK_LINE(72)
		::actors::ObjectMover tmp4 = this->currentMover;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(72)
		bool tmp5 = tmp4->getIsGrounded();		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(72)
		bool tmp6 = !(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(72)
		if ((tmp6)){
			HX_STACK_LINE(73)
			::actors::Animation tmp7 = this->getAnimation(HX_HCSTRING("Jump","\x0e","\xf1","\x42","\x31"));		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(73)
			this->currentAnimation = tmp7;
		}
		else{
			HX_STACK_LINE(74)
			::actors::ObjectMover tmp7 = this->currentMover;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(74)
			Float tmp8 = tmp7->getXVel();		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(74)
			Float tmp9 = ::Math_obj::abs(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(74)
			bool tmp10 = (tmp9 < ((Float).1));		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(74)
			if ((tmp10)){
				HX_STACK_LINE(75)
				::actors::Animation tmp11 = this->getAnimation(HX_HCSTRING("Idle","\x34","\xd3","\x8c","\x30"));		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(75)
				this->currentAnimation = tmp11;
			}
			else{
				HX_STACK_LINE(76)
				::actors::ObjectMover tmp11 = this->currentMover;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(76)
				Float tmp12 = tmp11->getXVel();		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(76)
				bool tmp13 = (tmp12 > ((Float).1));		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(76)
				if ((tmp13)){
					HX_STACK_LINE(77)
					::actors::Animation tmp14 = this->getAnimation(HX_HCSTRING("RightWalk","\xe5","\x92","\x8b","\x5b"));		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(77)
					this->currentAnimation = tmp14;
				}
				else{
					HX_STACK_LINE(78)
					::actors::ObjectMover tmp14 = this->currentMover;		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(78)
					Float tmp15 = tmp14->getXVel();		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(78)
					bool tmp16 = (tmp15 < ((Float)-.1));		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(78)
					if ((tmp16)){
						HX_STACK_LINE(79)
						::actors::Animation tmp17 = this->getAnimation(HX_HCSTRING("LeftWalk","\xd0","\x5c","\x9f","\x2f"));		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(79)
						this->currentAnimation = tmp17;
					}
				}
			}
		}
	}
return null();
}


Void WalkingEnemy_obj::damageReaction( ::maps::mapobjects::MapObject source){
{
		HX_STACK_FRAME("actors.enemies.WalkingEnemy","damageReaction",0x6beeb03f,"actors.enemies.WalkingEnemy.damageReaction","actors/enemies/WalkingEnemy.hx",83,0x91412ad5)
		HX_STACK_THIS(this)
		HX_STACK_ARG(source,"source")
		HX_STACK_LINE(84)
		::maps::mapobjects::MapObject tmp = source;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(84)
		this->super::damageReaction(tmp);
		HX_STACK_LINE(86)
		::maps::mapobjects::MapObject tmp1 = source;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(86)
		this->damageKnockback(tmp1);
		HX_STACK_LINE(87)
		::actors::Animation tmp2 = this->getAnimation(HX_HCSTRING("Hurt","\x2f","\x88","\xf0","\x2f"));		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(87)
		this->currentAnimation = tmp2;
	}
return null();
}


::actors::enemies::Enemy WalkingEnemy_obj::createClone( ::maps::mapobjects::SpawnPoint spawnPoint){
	HX_STACK_FRAME("actors.enemies.WalkingEnemy","createClone",0x81a6fb5a,"actors.enemies.WalkingEnemy.createClone","actors/enemies/WalkingEnemy.hx",91,0x91412ad5)
	HX_STACK_THIS(this)
	HX_STACK_ARG(spawnPoint,"spawnPoint")
	HX_STACK_LINE(92)
	::actors::enemies::WalkingEnemy tmp = ::actors::enemies::WalkingEnemy_obj::__new(spawnPoint);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(92)
	return tmp;
}



WalkingEnemy_obj::WalkingEnemy_obj()
{
}

Dynamic WalkingEnemy_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 11:
		if (HX_FIELD_EQ(inName,"createClone") ) { return createClone_dyn(); }
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
	HX_HCSTRING("createClone","\xc1","\x4a","\xde","\x71"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(WalkingEnemy_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(WalkingEnemy_obj::__mClass,"__mClass");
};

#endif

hx::Class WalkingEnemy_obj::__mClass;

void WalkingEnemy_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("actors.enemies.WalkingEnemy","\x87","\x4f","\x26","\xef");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< WalkingEnemy_obj >;
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
