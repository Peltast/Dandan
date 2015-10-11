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
HX_STACK_FRAME("actors.enemies.WalkingEnemy","new",0xfbcdbff9,"actors.enemies.WalkingEnemy.new","actors/enemies/WalkingEnemy.hx",19,0x91412ad5)
HX_STACK_THIS(this)
HX_STACK_ARG(homeSpawn,"homeSpawn")
{
	HX_STACK_LINE(21)
	int enemySize = (int)32;		HX_STACK_VAR(enemySize,"enemySize");
	HX_STACK_LINE(24)
	::openfl::geom::Point tmp = ::openfl::geom::Point_obj::__new((int)0,(int)0);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(24)
	int tmp1 = enemySize;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(24)
	int tmp2 = enemySize;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(24)
	::openfl::geom::Point tmp3 = ::openfl::geom::Point_obj::__new((int)0,(int)0);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(23)
	::actors::Animation tmp4 = ::actors::Animation_obj::__new(HX_HCSTRING("Idle","\x34","\xd3","\x8c","\x30"),(int)0,tmp,tmp1,tmp2,Array_obj< ::Dynamic >::__new().Add(tmp3),null());		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(23)
	::actors::Animation normalIdle = tmp4;		HX_STACK_VAR(normalIdle,"normalIdle");
	HX_STACK_LINE(26)
	::openfl::geom::Point tmp5 = ::openfl::geom::Point_obj::__new((int)0,enemySize);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(26)
	int tmp6 = enemySize;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(26)
	int tmp7 = enemySize;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(27)
	::openfl::geom::Point tmp8 = ::openfl::geom::Point_obj::__new(null(),null());		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(27)
	::openfl::geom::Point tmp9 = ::openfl::geom::Point_obj::__new((int)1,(int)0);		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(27)
	::openfl::geom::Point tmp10 = ::openfl::geom::Point_obj::__new((int)2,(int)0);		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(27)
	::openfl::geom::Point tmp11 = ::openfl::geom::Point_obj::__new((int)3,(int)0);		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(25)
	::actors::Animation tmp12 = ::actors::Animation_obj::__new(HX_HCSTRING("LeftWalk","\xd0","\x5c","\x9f","\x2f"),(int)5,tmp5,tmp6,tmp7,Array_obj< ::Dynamic >::__new().Add(tmp8).Add(tmp9).Add(tmp10).Add(tmp11),null());		HX_STACK_VAR(tmp12,"tmp12");
	HX_STACK_LINE(25)
	::actors::Animation leftWalk = tmp12;		HX_STACK_VAR(leftWalk,"leftWalk");
	HX_STACK_LINE(29)
	int tmp13 = (enemySize * (int)2);		HX_STACK_VAR(tmp13,"tmp13");
	HX_STACK_LINE(29)
	::openfl::geom::Point tmp14 = ::openfl::geom::Point_obj::__new((int)0,tmp13);		HX_STACK_VAR(tmp14,"tmp14");
	HX_STACK_LINE(29)
	int tmp15 = enemySize;		HX_STACK_VAR(tmp15,"tmp15");
	HX_STACK_LINE(29)
	int tmp16 = enemySize;		HX_STACK_VAR(tmp16,"tmp16");
	HX_STACK_LINE(30)
	::openfl::geom::Point tmp17 = ::openfl::geom::Point_obj::__new(null(),null());		HX_STACK_VAR(tmp17,"tmp17");
	HX_STACK_LINE(30)
	::openfl::geom::Point tmp18 = ::openfl::geom::Point_obj::__new((int)1,(int)0);		HX_STACK_VAR(tmp18,"tmp18");
	HX_STACK_LINE(30)
	::openfl::geom::Point tmp19 = ::openfl::geom::Point_obj::__new((int)2,(int)0);		HX_STACK_VAR(tmp19,"tmp19");
	HX_STACK_LINE(30)
	::openfl::geom::Point tmp20 = ::openfl::geom::Point_obj::__new((int)3,(int)0);		HX_STACK_VAR(tmp20,"tmp20");
	HX_STACK_LINE(28)
	::actors::Animation tmp21 = ::actors::Animation_obj::__new(HX_HCSTRING("RightWalk","\xe5","\x92","\x8b","\x5b"),(int)5,tmp14,tmp15,tmp16,Array_obj< ::Dynamic >::__new().Add(tmp17).Add(tmp18).Add(tmp19).Add(tmp20),null());		HX_STACK_VAR(tmp21,"tmp21");
	HX_STACK_LINE(28)
	::actors::Animation rightWalk = tmp21;		HX_STACK_VAR(rightWalk,"rightWalk");
	HX_STACK_LINE(32)
	int tmp22 = (enemySize * (int)2);		HX_STACK_VAR(tmp22,"tmp22");
	HX_STACK_LINE(32)
	::openfl::geom::Point tmp23 = ::openfl::geom::Point_obj::__new(tmp22,(int)0);		HX_STACK_VAR(tmp23,"tmp23");
	HX_STACK_LINE(32)
	int tmp24 = enemySize;		HX_STACK_VAR(tmp24,"tmp24");
	HX_STACK_LINE(32)
	int tmp25 = enemySize;		HX_STACK_VAR(tmp25,"tmp25");
	HX_STACK_LINE(32)
	::openfl::geom::Point tmp26 = ::openfl::geom::Point_obj::__new(null(),null());		HX_STACK_VAR(tmp26,"tmp26");
	HX_STACK_LINE(31)
	::actors::Animation tmp27 = ::actors::Animation_obj::__new(HX_HCSTRING("Jump","\x0e","\xf1","\x42","\x31"),(int)0,tmp23,tmp24,tmp25,Array_obj< ::Dynamic >::__new().Add(tmp26),null());		HX_STACK_VAR(tmp27,"tmp27");
	HX_STACK_LINE(31)
	::actors::Animation jump = tmp27;		HX_STACK_VAR(jump,"jump");
	HX_STACK_LINE(34)
	::openfl::geom::Point tmp28 = ::openfl::geom::Point_obj::__new(enemySize,(int)0);		HX_STACK_VAR(tmp28,"tmp28");
	HX_STACK_LINE(34)
	int tmp29 = enemySize;		HX_STACK_VAR(tmp29,"tmp29");
	HX_STACK_LINE(34)
	int tmp30 = enemySize;		HX_STACK_VAR(tmp30,"tmp30");
	HX_STACK_LINE(34)
	::openfl::geom::Point tmp31 = ::openfl::geom::Point_obj::__new(null(),null());		HX_STACK_VAR(tmp31,"tmp31");
	HX_STACK_LINE(34)
	::openfl::geom::Point tmp32 = ::openfl::geom::Point_obj::__new((int)1,null());		HX_STACK_VAR(tmp32,"tmp32");
	HX_STACK_LINE(33)
	::actors::Animation tmp33 = ::actors::Animation_obj::__new(HX_HCSTRING("Hurt","\x2f","\x88","\xf0","\x2f"),(int)1,tmp28,tmp29,tmp30,Array_obj< ::Dynamic >::__new().Add(tmp31).Add(tmp32),null());		HX_STACK_VAR(tmp33,"tmp33");
	HX_STACK_LINE(33)
	::actors::Animation hurt = tmp33;		HX_STACK_VAR(hurt,"hurt");
	HX_STACK_LINE(36)
	::haxe::ds::StringMap tmp34;		HX_STACK_VAR(tmp34,"tmp34");
	HX_STACK_LINE(36)
	{
		HX_STACK_LINE(36)
		::haxe::ds::StringMap tmp35 = ::haxe::ds::StringMap_obj::__new();		HX_STACK_VAR(tmp35,"tmp35");
		HX_STACK_LINE(36)
		::haxe::ds::StringMap tmp36 = tmp35;		HX_STACK_VAR(tmp36,"tmp36");
		HX_STACK_LINE(36)
		tmp34 = tmp36;
	}
	HX_STACK_LINE(36)
	this->animations = tmp34;
	HX_STACK_LINE(37)
	{
		HX_STACK_LINE(37)
		::String tmp35 = normalIdle->getName();		HX_STACK_VAR(tmp35,"tmp35");
		HX_STACK_LINE(37)
		::String k = tmp35;		HX_STACK_VAR(k,"k");
		HX_STACK_LINE(37)
		::haxe::ds::StringMap tmp36 = this->animations;		HX_STACK_VAR(tmp36,"tmp36");
		HX_STACK_LINE(37)
		::String tmp37 = k;		HX_STACK_VAR(tmp37,"tmp37");
		HX_STACK_LINE(37)
		::actors::Animation tmp38 = normalIdle;		HX_STACK_VAR(tmp38,"tmp38");
		HX_STACK_LINE(37)
		tmp36->set(tmp37,tmp38);
		HX_STACK_LINE(37)
		normalIdle;
	}
	HX_STACK_LINE(38)
	{
		HX_STACK_LINE(38)
		::String tmp35 = leftWalk->getName();		HX_STACK_VAR(tmp35,"tmp35");
		HX_STACK_LINE(38)
		::String k = tmp35;		HX_STACK_VAR(k,"k");
		HX_STACK_LINE(38)
		::haxe::ds::StringMap tmp36 = this->animations;		HX_STACK_VAR(tmp36,"tmp36");
		HX_STACK_LINE(38)
		::String tmp37 = k;		HX_STACK_VAR(tmp37,"tmp37");
		HX_STACK_LINE(38)
		::actors::Animation tmp38 = leftWalk;		HX_STACK_VAR(tmp38,"tmp38");
		HX_STACK_LINE(38)
		tmp36->set(tmp37,tmp38);
		HX_STACK_LINE(38)
		leftWalk;
	}
	HX_STACK_LINE(39)
	{
		HX_STACK_LINE(39)
		::String tmp35 = rightWalk->getName();		HX_STACK_VAR(tmp35,"tmp35");
		HX_STACK_LINE(39)
		::String k = tmp35;		HX_STACK_VAR(k,"k");
		HX_STACK_LINE(39)
		::haxe::ds::StringMap tmp36 = this->animations;		HX_STACK_VAR(tmp36,"tmp36");
		HX_STACK_LINE(39)
		::String tmp37 = k;		HX_STACK_VAR(tmp37,"tmp37");
		HX_STACK_LINE(39)
		::actors::Animation tmp38 = rightWalk;		HX_STACK_VAR(tmp38,"tmp38");
		HX_STACK_LINE(39)
		tmp36->set(tmp37,tmp38);
		HX_STACK_LINE(39)
		rightWalk;
	}
	HX_STACK_LINE(40)
	{
		HX_STACK_LINE(40)
		::String tmp35 = jump->getName();		HX_STACK_VAR(tmp35,"tmp35");
		HX_STACK_LINE(40)
		::String k = tmp35;		HX_STACK_VAR(k,"k");
		HX_STACK_LINE(40)
		::haxe::ds::StringMap tmp36 = this->animations;		HX_STACK_VAR(tmp36,"tmp36");
		HX_STACK_LINE(40)
		::String tmp37 = k;		HX_STACK_VAR(tmp37,"tmp37");
		HX_STACK_LINE(40)
		::actors::Animation tmp38 = jump;		HX_STACK_VAR(tmp38,"tmp38");
		HX_STACK_LINE(40)
		tmp36->set(tmp37,tmp38);
		HX_STACK_LINE(40)
		jump;
	}
	HX_STACK_LINE(41)
	{
		HX_STACK_LINE(41)
		::String tmp35 = hurt->getName();		HX_STACK_VAR(tmp35,"tmp35");
		HX_STACK_LINE(41)
		::String k = tmp35;		HX_STACK_VAR(k,"k");
		HX_STACK_LINE(41)
		::haxe::ds::StringMap tmp36 = this->animations;		HX_STACK_VAR(tmp36,"tmp36");
		HX_STACK_LINE(41)
		::String tmp37 = k;		HX_STACK_VAR(tmp37,"tmp37");
		HX_STACK_LINE(41)
		::actors::Animation tmp38 = hurt;		HX_STACK_VAR(tmp38,"tmp38");
		HX_STACK_LINE(41)
		tmp36->set(tmp37,tmp38);
		HX_STACK_LINE(41)
		hurt;
	}
	HX_STACK_LINE(43)
	this->currentAnimation = normalIdle;
	HX_STACK_LINE(44)
	::actors::ObjectMover tmp35 = ::actors::ObjectMover_obj::__new(((Float).1),((Float).1),(int)0,(int)0,(int)0,(int)0,(int)2,(int)60,(int)2,null(),null());		HX_STACK_VAR(tmp35,"tmp35");
	HX_STACK_LINE(44)
	::actors::ObjectMover mover = tmp35;		HX_STACK_VAR(mover,"mover");
	HX_STACK_LINE(46)
	::openfl::display::Bitmap tmp36 = ::Main_obj::getBitmapAsset(HX_HCSTRING("assets/WalkingEnemy.png","\x36","\xcf","\xdd","\xe7"));		HX_STACK_VAR(tmp36,"tmp36");
	HX_STACK_LINE(46)
	::actors::ObjectMover tmp37 = mover;		HX_STACK_VAR(tmp37,"tmp37");
	HX_STACK_LINE(46)
	int tmp38 = enemySize;		HX_STACK_VAR(tmp38,"tmp38");
	HX_STACK_LINE(46)
	int tmp39 = (enemySize - (int)2);		HX_STACK_VAR(tmp39,"tmp39");
	HX_STACK_LINE(46)
	::maps::mapobjects::SpawnPoint tmp40 = homeSpawn;		HX_STACK_VAR(tmp40,"tmp40");
	HX_STACK_LINE(46)
	::actors::actorsAI::PaceAI tmp41 = ::actors::actorsAI::PaceAI_obj::__new();		HX_STACK_VAR(tmp41,"tmp41");
	HX_STACK_LINE(46)
	super::__construct(hx::ObjectPtr<OBJ_>(this),tmp36,tmp37,tmp38,tmp39,tmp40,tmp41);
	HX_STACK_LINE(48)
	this->health = (int)2;
	HX_STACK_LINE(49)
	this->touchDamage = (int)1;
	HX_STACK_LINE(50)
	this->invulDuration = (int)15;
	HX_STACK_LINE(52)
	Array< ::Dynamic > hits = Array_obj< ::Dynamic >::__new();		HX_STACK_VAR(hits,"hits");
	HX_STACK_LINE(53)
	int tmp42 = this->actorWidth;		HX_STACK_VAR(tmp42,"tmp42");
	HX_STACK_LINE(53)
	int tmp43 = (tmp42 + (int)2);		HX_STACK_VAR(tmp43,"tmp43");
	HX_STACK_LINE(53)
	int tmp44 = this->actorHeight;		HX_STACK_VAR(tmp44,"tmp44");
	HX_STACK_LINE(53)
	::openfl::geom::Rectangle tmp45 = ::openfl::geom::Rectangle_obj::__new((int)-1,(int)-1,tmp43,tmp44);		HX_STACK_VAR(tmp45,"tmp45");
	HX_STACK_LINE(53)
	hits->push(tmp45);
	HX_STACK_LINE(54)
	::actors::attacks::Attack tmp46 = ::actors::attacks::Attack_obj::__new(mover,hits,(int)-1,(int)1,(int)0,null(),null(),null());		HX_STACK_VAR(tmp46,"tmp46");
	HX_STACK_LINE(54)
	this->attackBehavior = tmp46;
	HX_STACK_LINE(55)
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
		HX_STACK_FRAME("actors.enemies.WalkingEnemy","handleAnimation",0x4bd00755,"actors.enemies.WalkingEnemy.handleAnimation","actors/enemies/WalkingEnemy.hx",60,0x91412ad5)
		HX_STACK_THIS(this)
		HX_STACK_LINE(61)
		this->super::handleAnimation();
		HX_STACK_LINE(63)
		bool tmp = this->invulnerable;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(63)
		if ((tmp)){
			HX_STACK_LINE(64)
			return null();
		}
		HX_STACK_LINE(65)
		::actors::ObjectMover tmp1 = this->currentMover;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(65)
		bool tmp2 = tmp1->getIsGrounded();		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(65)
		bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(65)
		if ((tmp3)){
			HX_STACK_LINE(66)
			::actors::Animation tmp4 = this->getAnimation(HX_HCSTRING("Jump","\x0e","\xf1","\x42","\x31"));		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(66)
			this->currentAnimation = tmp4;
		}
		else{
			HX_STACK_LINE(67)
			::actors::ObjectMover tmp4 = this->currentMover;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(67)
			Float tmp5 = tmp4->getXVel();		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(67)
			Float tmp6 = ::Math_obj::abs(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(67)
			bool tmp7 = (tmp6 < ((Float).1));		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(67)
			if ((tmp7)){
				HX_STACK_LINE(68)
				::actors::Animation tmp8 = this->getAnimation(HX_HCSTRING("Idle","\x34","\xd3","\x8c","\x30"));		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(68)
				this->currentAnimation = tmp8;
			}
			else{
				HX_STACK_LINE(69)
				::actors::ObjectMover tmp8 = this->currentMover;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(69)
				Float tmp9 = tmp8->getXVel();		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(69)
				bool tmp10 = (tmp9 > ((Float).1));		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(69)
				if ((tmp10)){
					HX_STACK_LINE(70)
					::actors::Animation tmp11 = this->getAnimation(HX_HCSTRING("RightWalk","\xe5","\x92","\x8b","\x5b"));		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(70)
					this->currentAnimation = tmp11;
				}
				else{
					HX_STACK_LINE(71)
					::actors::ObjectMover tmp11 = this->currentMover;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(71)
					Float tmp12 = tmp11->getXVel();		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(71)
					bool tmp13 = (tmp12 < ((Float)-.1));		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(71)
					if ((tmp13)){
						HX_STACK_LINE(72)
						::actors::Animation tmp14 = this->getAnimation(HX_HCSTRING("LeftWalk","\xd0","\x5c","\x9f","\x2f"));		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(72)
						this->currentAnimation = tmp14;
					}
				}
			}
		}
	}
return null();
}


Void WalkingEnemy_obj::damageReaction( ::actors::Actor actor){
{
		HX_STACK_FRAME("actors.enemies.WalkingEnemy","damageReaction",0x6beeb03f,"actors.enemies.WalkingEnemy.damageReaction","actors/enemies/WalkingEnemy.hx",76,0x91412ad5)
		HX_STACK_THIS(this)
		HX_STACK_ARG(actor,"actor")
		HX_STACK_LINE(77)
		::actors::Actor tmp = actor;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(77)
		this->super::damageReaction(tmp);
		HX_STACK_LINE(79)
		::actors::Actor tmp1 = actor;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(79)
		this->knockBack(tmp1);
		HX_STACK_LINE(80)
		::actors::Animation tmp2 = this->getAnimation(HX_HCSTRING("Hurt","\x2f","\x88","\xf0","\x2f"));		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(80)
		this->currentAnimation = tmp2;
	}
return null();
}


::actors::enemies::Enemy WalkingEnemy_obj::createClone( ::maps::mapobjects::SpawnPoint spawnPoint){
	HX_STACK_FRAME("actors.enemies.WalkingEnemy","createClone",0x81a6fb5a,"actors.enemies.WalkingEnemy.createClone","actors/enemies/WalkingEnemy.hx",84,0x91412ad5)
	HX_STACK_THIS(this)
	HX_STACK_ARG(spawnPoint,"spawnPoint")
	HX_STACK_LINE(85)
	::actors::enemies::WalkingEnemy tmp = ::actors::enemies::WalkingEnemy_obj::__new(spawnPoint);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(85)
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
