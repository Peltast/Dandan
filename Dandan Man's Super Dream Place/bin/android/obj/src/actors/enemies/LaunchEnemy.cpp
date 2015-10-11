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
#ifndef INCLUDED_actors_actorsAI_LaunchAI
#include <actors/actorsAI/LaunchAI.h>
#endif
#ifndef INCLUDED_actors_attacks_Attack
#include <actors/attacks/Attack.h>
#endif
#ifndef INCLUDED_actors_enemies_Enemy
#include <actors/enemies/Enemy.h>
#endif
#ifndef INCLUDED_actors_enemies_LaunchEnemy
#include <actors/enemies/LaunchEnemy.h>
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

Void LaunchEnemy_obj::__construct(::maps::mapobjects::SpawnPoint homeSpawn)
{
HX_STACK_FRAME("actors.enemies.LaunchEnemy","new",0x021c320f,"actors.enemies.LaunchEnemy.new","actors/enemies/LaunchEnemy.hx",24,0xf19a6cc3)
HX_STACK_THIS(this)
HX_STACK_ARG(homeSpawn,"homeSpawn")
{
	HX_STACK_LINE(26)
	int enemyWidth = (int)40;		HX_STACK_VAR(enemyWidth,"enemyWidth");
	HX_STACK_LINE(27)
	int enemyHeight = (int)32;		HX_STACK_VAR(enemyHeight,"enemyHeight");
	HX_STACK_LINE(28)
	this->aoeWidth = (int)64;
	HX_STACK_LINE(29)
	this->aoeHeight = (int)40;
	HX_STACK_LINE(30)
	this->originalWidth = enemyWidth;
	HX_STACK_LINE(31)
	this->originalHeight = enemyHeight;
	HX_STACK_LINE(34)
	::openfl::geom::Point tmp = ::openfl::geom::Point_obj::__new(null(),null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(34)
	int tmp1 = enemyWidth;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(34)
	int tmp2 = enemyHeight;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(34)
	::openfl::geom::Point tmp3 = ::openfl::geom::Point_obj::__new(null(),null());		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(33)
	::actors::Animation tmp4 = ::actors::Animation_obj::__new(HX_HCSTRING("LeftIdle","\xdb","\xa6","\x60","\x26"),(int)0,tmp,tmp1,tmp2,Array_obj< ::Dynamic >::__new().Add(tmp3),null());		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(33)
	::actors::Animation leftIdle = tmp4;		HX_STACK_VAR(leftIdle,"leftIdle");
	HX_STACK_LINE(36)
	::openfl::geom::Point tmp5 = ::openfl::geom::Point_obj::__new((int)0,enemyHeight);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(36)
	int tmp6 = enemyWidth;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(36)
	int tmp7 = enemyHeight;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(36)
	::openfl::geom::Point tmp8 = ::openfl::geom::Point_obj::__new(null(),null());		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(35)
	::actors::Animation tmp9 = ::actors::Animation_obj::__new(HX_HCSTRING("RightIdle","\xf0","\xdc","\x4c","\x52"),(int)0,tmp5,tmp6,tmp7,Array_obj< ::Dynamic >::__new().Add(tmp8),null());		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(35)
	::actors::Animation rightIdle = tmp9;		HX_STACK_VAR(rightIdle,"rightIdle");
	HX_STACK_LINE(39)
	::openfl::geom::Point tmp10 = ::openfl::geom::Point_obj::__new(null(),null());		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(39)
	int tmp11 = enemyWidth;		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(39)
	int tmp12 = enemyHeight;		HX_STACK_VAR(tmp12,"tmp12");
	HX_STACK_LINE(39)
	::openfl::geom::Point tmp13 = ::openfl::geom::Point_obj::__new(null(),null());		HX_STACK_VAR(tmp13,"tmp13");
	HX_STACK_LINE(39)
	::openfl::geom::Point tmp14 = ::openfl::geom::Point_obj::__new(null(),null());		HX_STACK_VAR(tmp14,"tmp14");
	HX_STACK_LINE(39)
	::openfl::geom::Point tmp15 = ::openfl::geom::Point_obj::__new((int)1,null());		HX_STACK_VAR(tmp15,"tmp15");
	HX_STACK_LINE(39)
	::openfl::geom::Point tmp16 = ::openfl::geom::Point_obj::__new((int)2,null());		HX_STACK_VAR(tmp16,"tmp16");
	HX_STACK_LINE(38)
	::actors::Animation tmp17 = ::actors::Animation_obj::__new(HX_HCSTRING("LeftWalk","\xd0","\x5c","\x9f","\x2f"),(int)3,tmp10,tmp11,tmp12,Array_obj< ::Dynamic >::__new().Add(tmp13).Add(tmp14).Add(tmp15).Add(tmp16),null());		HX_STACK_VAR(tmp17,"tmp17");
	HX_STACK_LINE(38)
	::actors::Animation leftWalk = tmp17;		HX_STACK_VAR(leftWalk,"leftWalk");
	HX_STACK_LINE(41)
	::openfl::geom::Point tmp18 = ::openfl::geom::Point_obj::__new((int)0,enemyHeight);		HX_STACK_VAR(tmp18,"tmp18");
	HX_STACK_LINE(41)
	int tmp19 = enemyWidth;		HX_STACK_VAR(tmp19,"tmp19");
	HX_STACK_LINE(41)
	int tmp20 = enemyHeight;		HX_STACK_VAR(tmp20,"tmp20");
	HX_STACK_LINE(41)
	::openfl::geom::Point tmp21 = ::openfl::geom::Point_obj::__new(null(),null());		HX_STACK_VAR(tmp21,"tmp21");
	HX_STACK_LINE(41)
	::openfl::geom::Point tmp22 = ::openfl::geom::Point_obj::__new(null(),null());		HX_STACK_VAR(tmp22,"tmp22");
	HX_STACK_LINE(41)
	::openfl::geom::Point tmp23 = ::openfl::geom::Point_obj::__new((int)1,null());		HX_STACK_VAR(tmp23,"tmp23");
	HX_STACK_LINE(41)
	::openfl::geom::Point tmp24 = ::openfl::geom::Point_obj::__new((int)2,null());		HX_STACK_VAR(tmp24,"tmp24");
	HX_STACK_LINE(40)
	::actors::Animation tmp25 = ::actors::Animation_obj::__new(HX_HCSTRING("RightWalk","\xe5","\x92","\x8b","\x5b"),(int)3,tmp18,tmp19,tmp20,Array_obj< ::Dynamic >::__new().Add(tmp21).Add(tmp22).Add(tmp23).Add(tmp24),null());		HX_STACK_VAR(tmp25,"tmp25");
	HX_STACK_LINE(40)
	::actors::Animation rightWalk = tmp25;		HX_STACK_VAR(rightWalk,"rightWalk");
	HX_STACK_LINE(44)
	int tmp26 = (enemyHeight * (int)2);		HX_STACK_VAR(tmp26,"tmp26");
	HX_STACK_LINE(44)
	::openfl::geom::Point tmp27 = ::openfl::geom::Point_obj::__new((int)0,tmp26);		HX_STACK_VAR(tmp27,"tmp27");
	HX_STACK_LINE(44)
	int tmp28 = enemyWidth;		HX_STACK_VAR(tmp28,"tmp28");
	HX_STACK_LINE(44)
	int tmp29 = enemyHeight;		HX_STACK_VAR(tmp29,"tmp29");
	HX_STACK_LINE(44)
	::openfl::geom::Point tmp30 = ::openfl::geom::Point_obj::__new(null(),null());		HX_STACK_VAR(tmp30,"tmp30");
	HX_STACK_LINE(44)
	::openfl::geom::Point tmp31 = ::openfl::geom::Point_obj::__new((int)1,null());		HX_STACK_VAR(tmp31,"tmp31");
	HX_STACK_LINE(44)
	::openfl::geom::Point tmp32 = ::openfl::geom::Point_obj::__new((int)2,null());		HX_STACK_VAR(tmp32,"tmp32");
	HX_STACK_LINE(44)
	::openfl::geom::Point tmp33 = ::openfl::geom::Point_obj::__new((int)1,null());		HX_STACK_VAR(tmp33,"tmp33");
	HX_STACK_LINE(43)
	::actors::Animation tmp34 = ::actors::Animation_obj::__new(HX_HCSTRING("LeftWindup","\xaa","\x58","\x4e","\x78"),(int)1,tmp27,tmp28,tmp29,Array_obj< ::Dynamic >::__new().Add(tmp30).Add(tmp31).Add(tmp32).Add(tmp33),null());		HX_STACK_VAR(tmp34,"tmp34");
	HX_STACK_LINE(43)
	::actors::Animation leftWindup = tmp34;		HX_STACK_VAR(leftWindup,"leftWindup");
	HX_STACK_LINE(46)
	int tmp35 = (enemyHeight * (int)3);		HX_STACK_VAR(tmp35,"tmp35");
	HX_STACK_LINE(46)
	::openfl::geom::Point tmp36 = ::openfl::geom::Point_obj::__new((int)0,tmp35);		HX_STACK_VAR(tmp36,"tmp36");
	HX_STACK_LINE(46)
	int tmp37 = enemyWidth;		HX_STACK_VAR(tmp37,"tmp37");
	HX_STACK_LINE(46)
	int tmp38 = enemyHeight;		HX_STACK_VAR(tmp38,"tmp38");
	HX_STACK_LINE(46)
	::openfl::geom::Point tmp39 = ::openfl::geom::Point_obj::__new(null(),null());		HX_STACK_VAR(tmp39,"tmp39");
	HX_STACK_LINE(46)
	::openfl::geom::Point tmp40 = ::openfl::geom::Point_obj::__new((int)1,null());		HX_STACK_VAR(tmp40,"tmp40");
	HX_STACK_LINE(46)
	::openfl::geom::Point tmp41 = ::openfl::geom::Point_obj::__new((int)2,null());		HX_STACK_VAR(tmp41,"tmp41");
	HX_STACK_LINE(46)
	::openfl::geom::Point tmp42 = ::openfl::geom::Point_obj::__new((int)1,null());		HX_STACK_VAR(tmp42,"tmp42");
	HX_STACK_LINE(45)
	::actors::Animation tmp43 = ::actors::Animation_obj::__new(HX_HCSTRING("RightWindup","\xff","\xfd","\x43","\xa0"),(int)1,tmp36,tmp37,tmp38,Array_obj< ::Dynamic >::__new().Add(tmp39).Add(tmp40).Add(tmp41).Add(tmp42),null());		HX_STACK_VAR(tmp43,"tmp43");
	HX_STACK_LINE(45)
	::actors::Animation rightWindup = tmp43;		HX_STACK_VAR(rightWindup,"rightWindup");
	HX_STACK_LINE(49)
	int tmp44 = (enemyHeight * (int)4);		HX_STACK_VAR(tmp44,"tmp44");
	HX_STACK_LINE(49)
	::openfl::geom::Point tmp45 = ::openfl::geom::Point_obj::__new((int)0,tmp44);		HX_STACK_VAR(tmp45,"tmp45");
	HX_STACK_LINE(49)
	int tmp46 = this->aoeWidth;		HX_STACK_VAR(tmp46,"tmp46");
	HX_STACK_LINE(49)
	int tmp47 = this->aoeHeight;		HX_STACK_VAR(tmp47,"tmp47");
	HX_STACK_LINE(49)
	::openfl::geom::Point tmp48 = ::openfl::geom::Point_obj::__new(null(),null());		HX_STACK_VAR(tmp48,"tmp48");
	HX_STACK_LINE(49)
	::openfl::geom::Point tmp49 = ::openfl::geom::Point_obj::__new((int)0,(int)1);		HX_STACK_VAR(tmp49,"tmp49");
	HX_STACK_LINE(48)
	::actors::Animation tmp50 = ::actors::Animation_obj::__new(HX_HCSTRING("LeftAttack","\x4f","\xbb","\xd1","\x05"),(int)1,tmp45,tmp46,tmp47,Array_obj< ::Dynamic >::__new().Add(tmp48).Add(tmp49),null());		HX_STACK_VAR(tmp50,"tmp50");
	HX_STACK_LINE(48)
	::actors::Animation leftAttack = tmp50;		HX_STACK_VAR(leftAttack,"leftAttack");
	HX_STACK_LINE(51)
	int tmp51 = (enemyHeight * (int)4);		HX_STACK_VAR(tmp51,"tmp51");
	HX_STACK_LINE(51)
	int tmp52 = this->aoeHeight;		HX_STACK_VAR(tmp52,"tmp52");
	HX_STACK_LINE(51)
	int tmp53 = (tmp52 * (int)2);		HX_STACK_VAR(tmp53,"tmp53");
	HX_STACK_LINE(51)
	int tmp54 = (tmp51 + tmp53);		HX_STACK_VAR(tmp54,"tmp54");
	HX_STACK_LINE(51)
	::openfl::geom::Point tmp55 = ::openfl::geom::Point_obj::__new((int)0,tmp54);		HX_STACK_VAR(tmp55,"tmp55");
	HX_STACK_LINE(51)
	int tmp56 = this->aoeWidth;		HX_STACK_VAR(tmp56,"tmp56");
	HX_STACK_LINE(51)
	int tmp57 = this->aoeHeight;		HX_STACK_VAR(tmp57,"tmp57");
	HX_STACK_LINE(51)
	::openfl::geom::Point tmp58 = ::openfl::geom::Point_obj::__new(null(),null());		HX_STACK_VAR(tmp58,"tmp58");
	HX_STACK_LINE(51)
	::openfl::geom::Point tmp59 = ::openfl::geom::Point_obj::__new((int)0,(int)1);		HX_STACK_VAR(tmp59,"tmp59");
	HX_STACK_LINE(50)
	::actors::Animation tmp60 = ::actors::Animation_obj::__new(HX_HCSTRING("RightAttack","\xa4","\x60","\xc7","\x2d"),(int)1,tmp55,tmp56,tmp57,Array_obj< ::Dynamic >::__new().Add(tmp58).Add(tmp59),null());		HX_STACK_VAR(tmp60,"tmp60");
	HX_STACK_LINE(50)
	::actors::Animation rightAttack = tmp60;		HX_STACK_VAR(rightAttack,"rightAttack");
	HX_STACK_LINE(53)
	::haxe::ds::StringMap tmp61;		HX_STACK_VAR(tmp61,"tmp61");
	HX_STACK_LINE(53)
	{
		HX_STACK_LINE(53)
		::haxe::ds::StringMap tmp62 = ::haxe::ds::StringMap_obj::__new();		HX_STACK_VAR(tmp62,"tmp62");
		HX_STACK_LINE(53)
		::haxe::ds::StringMap tmp63 = tmp62;		HX_STACK_VAR(tmp63,"tmp63");
		HX_STACK_LINE(53)
		tmp61 = tmp63;
	}
	HX_STACK_LINE(53)
	this->animations = tmp61;
	HX_STACK_LINE(54)
	::actors::Animation tmp62;		HX_STACK_VAR(tmp62,"tmp62");
	HX_STACK_LINE(54)
	{
		HX_STACK_LINE(54)
		::haxe::ds::StringMap tmp63 = this->animations;		HX_STACK_VAR(tmp63,"tmp63");
		HX_STACK_LINE(54)
		::actors::Animation tmp64 = leftIdle;		HX_STACK_VAR(tmp64,"tmp64");
		HX_STACK_LINE(54)
		tmp63->set(HX_HCSTRING("Idle","\x34","\xd3","\x8c","\x30"),tmp64);
		HX_STACK_LINE(54)
		tmp62 = leftIdle;
	}
	HX_STACK_LINE(54)
	tmp62;
	HX_STACK_LINE(55)
	{
		HX_STACK_LINE(55)
		::String tmp63 = leftIdle->getName();		HX_STACK_VAR(tmp63,"tmp63");
		HX_STACK_LINE(55)
		::String k = tmp63;		HX_STACK_VAR(k,"k");
		HX_STACK_LINE(55)
		::haxe::ds::StringMap tmp64 = this->animations;		HX_STACK_VAR(tmp64,"tmp64");
		HX_STACK_LINE(55)
		::String tmp65 = k;		HX_STACK_VAR(tmp65,"tmp65");
		HX_STACK_LINE(55)
		::actors::Animation tmp66 = leftIdle;		HX_STACK_VAR(tmp66,"tmp66");
		HX_STACK_LINE(55)
		tmp64->set(tmp65,tmp66);
		HX_STACK_LINE(55)
		leftIdle;
	}
	HX_STACK_LINE(56)
	{
		HX_STACK_LINE(56)
		::String tmp63 = rightIdle->getName();		HX_STACK_VAR(tmp63,"tmp63");
		HX_STACK_LINE(56)
		::String k = tmp63;		HX_STACK_VAR(k,"k");
		HX_STACK_LINE(56)
		::haxe::ds::StringMap tmp64 = this->animations;		HX_STACK_VAR(tmp64,"tmp64");
		HX_STACK_LINE(56)
		::String tmp65 = k;		HX_STACK_VAR(tmp65,"tmp65");
		HX_STACK_LINE(56)
		::actors::Animation tmp66 = rightIdle;		HX_STACK_VAR(tmp66,"tmp66");
		HX_STACK_LINE(56)
		tmp64->set(tmp65,tmp66);
		HX_STACK_LINE(56)
		rightIdle;
	}
	HX_STACK_LINE(57)
	{
		HX_STACK_LINE(57)
		::String tmp63 = leftWalk->getName();		HX_STACK_VAR(tmp63,"tmp63");
		HX_STACK_LINE(57)
		::String k = tmp63;		HX_STACK_VAR(k,"k");
		HX_STACK_LINE(57)
		::haxe::ds::StringMap tmp64 = this->animations;		HX_STACK_VAR(tmp64,"tmp64");
		HX_STACK_LINE(57)
		::String tmp65 = k;		HX_STACK_VAR(tmp65,"tmp65");
		HX_STACK_LINE(57)
		::actors::Animation tmp66 = leftWalk;		HX_STACK_VAR(tmp66,"tmp66");
		HX_STACK_LINE(57)
		tmp64->set(tmp65,tmp66);
		HX_STACK_LINE(57)
		leftWalk;
	}
	HX_STACK_LINE(58)
	{
		HX_STACK_LINE(58)
		::String tmp63 = rightWalk->getName();		HX_STACK_VAR(tmp63,"tmp63");
		HX_STACK_LINE(58)
		::String k = tmp63;		HX_STACK_VAR(k,"k");
		HX_STACK_LINE(58)
		::haxe::ds::StringMap tmp64 = this->animations;		HX_STACK_VAR(tmp64,"tmp64");
		HX_STACK_LINE(58)
		::String tmp65 = k;		HX_STACK_VAR(tmp65,"tmp65");
		HX_STACK_LINE(58)
		::actors::Animation tmp66 = rightWalk;		HX_STACK_VAR(tmp66,"tmp66");
		HX_STACK_LINE(58)
		tmp64->set(tmp65,tmp66);
		HX_STACK_LINE(58)
		rightWalk;
	}
	HX_STACK_LINE(59)
	{
		HX_STACK_LINE(59)
		::String tmp63 = leftWindup->getName();		HX_STACK_VAR(tmp63,"tmp63");
		HX_STACK_LINE(59)
		::String k = tmp63;		HX_STACK_VAR(k,"k");
		HX_STACK_LINE(59)
		::haxe::ds::StringMap tmp64 = this->animations;		HX_STACK_VAR(tmp64,"tmp64");
		HX_STACK_LINE(59)
		::String tmp65 = k;		HX_STACK_VAR(tmp65,"tmp65");
		HX_STACK_LINE(59)
		::actors::Animation tmp66 = leftWindup;		HX_STACK_VAR(tmp66,"tmp66");
		HX_STACK_LINE(59)
		tmp64->set(tmp65,tmp66);
		HX_STACK_LINE(59)
		leftWindup;
	}
	HX_STACK_LINE(60)
	{
		HX_STACK_LINE(60)
		::String tmp63 = rightWindup->getName();		HX_STACK_VAR(tmp63,"tmp63");
		HX_STACK_LINE(60)
		::String k = tmp63;		HX_STACK_VAR(k,"k");
		HX_STACK_LINE(60)
		::haxe::ds::StringMap tmp64 = this->animations;		HX_STACK_VAR(tmp64,"tmp64");
		HX_STACK_LINE(60)
		::String tmp65 = k;		HX_STACK_VAR(tmp65,"tmp65");
		HX_STACK_LINE(60)
		::actors::Animation tmp66 = rightWindup;		HX_STACK_VAR(tmp66,"tmp66");
		HX_STACK_LINE(60)
		tmp64->set(tmp65,tmp66);
		HX_STACK_LINE(60)
		rightWindup;
	}
	HX_STACK_LINE(61)
	{
		HX_STACK_LINE(61)
		::String tmp63 = leftAttack->getName();		HX_STACK_VAR(tmp63,"tmp63");
		HX_STACK_LINE(61)
		::String k = tmp63;		HX_STACK_VAR(k,"k");
		HX_STACK_LINE(61)
		::haxe::ds::StringMap tmp64 = this->animations;		HX_STACK_VAR(tmp64,"tmp64");
		HX_STACK_LINE(61)
		::String tmp65 = k;		HX_STACK_VAR(tmp65,"tmp65");
		HX_STACK_LINE(61)
		::actors::Animation tmp66 = leftAttack;		HX_STACK_VAR(tmp66,"tmp66");
		HX_STACK_LINE(61)
		tmp64->set(tmp65,tmp66);
		HX_STACK_LINE(61)
		leftAttack;
	}
	HX_STACK_LINE(62)
	{
		HX_STACK_LINE(62)
		::String tmp63 = rightAttack->getName();		HX_STACK_VAR(tmp63,"tmp63");
		HX_STACK_LINE(62)
		::String k = tmp63;		HX_STACK_VAR(k,"k");
		HX_STACK_LINE(62)
		::haxe::ds::StringMap tmp64 = this->animations;		HX_STACK_VAR(tmp64,"tmp64");
		HX_STACK_LINE(62)
		::String tmp65 = k;		HX_STACK_VAR(tmp65,"tmp65");
		HX_STACK_LINE(62)
		::actors::Animation tmp66 = rightAttack;		HX_STACK_VAR(tmp66,"tmp66");
		HX_STACK_LINE(62)
		tmp64->set(tmp65,tmp66);
		HX_STACK_LINE(62)
		rightAttack;
	}
	HX_STACK_LINE(64)
	this->currentAnimation = leftIdle;
	HX_STACK_LINE(65)
	this->alignmentLeft = true;
	HX_STACK_LINE(66)
	::actors::ObjectMover tmp63 = ::actors::ObjectMover_obj::__new(((Float).1),((Float).1),(int)0,(int)0,(int)0,(int)0,(int)2,(int)60,(int)2,null(),null());		HX_STACK_VAR(tmp63,"tmp63");
	HX_STACK_LINE(66)
	::actors::ObjectMover mover = tmp63;		HX_STACK_VAR(mover,"mover");
	HX_STACK_LINE(68)
	::openfl::display::Bitmap tmp64 = ::Main_obj::getBitmapAsset(HX_HCSTRING("assets/LaunchEnemy.png","\xe4","\xd5","\x63","\x33"));		HX_STACK_VAR(tmp64,"tmp64");
	HX_STACK_LINE(68)
	::actors::ObjectMover tmp65 = mover;		HX_STACK_VAR(tmp65,"tmp65");
	HX_STACK_LINE(68)
	int tmp66 = enemyWidth;		HX_STACK_VAR(tmp66,"tmp66");
	HX_STACK_LINE(68)
	int tmp67 = enemyHeight;		HX_STACK_VAR(tmp67,"tmp67");
	HX_STACK_LINE(68)
	::maps::mapobjects::SpawnPoint tmp68 = homeSpawn;		HX_STACK_VAR(tmp68,"tmp68");
	HX_STACK_LINE(68)
	::actors::actorsAI::LaunchAI tmp69 = ::actors::actorsAI::LaunchAI_obj::__new();		HX_STACK_VAR(tmp69,"tmp69");
	HX_STACK_LINE(68)
	super::__construct(hx::ObjectPtr<OBJ_>(this),tmp64,tmp65,tmp66,tmp67,tmp68,tmp69);
	HX_STACK_LINE(70)
	this->health = (int)2;
	HX_STACK_LINE(71)
	this->invulDuration = (int)15;
	HX_STACK_LINE(72)
	::openfl::geom::Rectangle tmp70 = ::openfl::geom::Rectangle_obj::__new((int)4,(int)10,(int)28,(int)18);		HX_STACK_VAR(tmp70,"tmp70");
	HX_STACK_LINE(72)
	this->collisionBounds = tmp70;
	HX_STACK_LINE(74)
	Array< ::Dynamic > hitBoxes = Array_obj< ::Dynamic >::__new();		HX_STACK_VAR(hitBoxes,"hitBoxes");
	HX_STACK_LINE(75)
	int tmp71 = this->aoeWidth;		HX_STACK_VAR(tmp71,"tmp71");
	HX_STACK_LINE(75)
	int tmp72 = (tmp71 + (int)10);		HX_STACK_VAR(tmp72,"tmp72");
	HX_STACK_LINE(75)
	int tmp73 = this->aoeHeight;		HX_STACK_VAR(tmp73,"tmp73");
	HX_STACK_LINE(75)
	int tmp74 = (tmp73 + (int)10);		HX_STACK_VAR(tmp74,"tmp74");
	HX_STACK_LINE(75)
	::openfl::geom::Rectangle tmp75 = ::openfl::geom::Rectangle_obj::__new((int)-5,(int)-5,tmp72,tmp74);		HX_STACK_VAR(tmp75,"tmp75");
	HX_STACK_LINE(75)
	hitBoxes->push(tmp75);
	HX_STACK_LINE(76)
	::actors::ObjectMover tmp76 = ::actors::ObjectMover_obj::__new(((Float).1),((Float).1),(int)0,(int)0,(int)0,(int)0,(int)0,(int)0,(int)0,(int)5,false);		HX_STACK_VAR(tmp76,"tmp76");
	HX_STACK_LINE(76)
	::actors::attacks::Attack tmp77 = ::actors::attacks::Attack_obj::__new(tmp76,hitBoxes,(int)-1,(int)1,(int)0,HX_HCSTRING("Attack","\xe8","\x6f","\xa4","\x14"),HX_HCSTRING("","\x00","\x00","\x00","\x00"),true);		HX_STACK_VAR(tmp77,"tmp77");
	HX_STACK_LINE(76)
	this->aoeAttack = tmp77;
}
;
	return null();
}

//LaunchEnemy_obj::~LaunchEnemy_obj() { }

Dynamic LaunchEnemy_obj::__CreateEmpty() { return  new LaunchEnemy_obj; }
hx::ObjectPtr< LaunchEnemy_obj > LaunchEnemy_obj::__new(::maps::mapobjects::SpawnPoint homeSpawn)
{  hx::ObjectPtr< LaunchEnemy_obj > _result_ = new LaunchEnemy_obj();
	_result_->__construct(homeSpawn);
	return _result_;}

Dynamic LaunchEnemy_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< LaunchEnemy_obj > _result_ = new LaunchEnemy_obj();
	_result_->__construct(inArgs[0]);
	return _result_;}

Void LaunchEnemy_obj::handleAnimation( ){
{
		HX_STACK_FRAME("actors.enemies.LaunchEnemy","handleAnimation",0x458c426b,"actors.enemies.LaunchEnemy.handleAnimation","actors/enemies/LaunchEnemy.hx",80,0xf19a6cc3)
		HX_STACK_THIS(this)
		HX_STACK_LINE(81)
		this->super::handleAnimation();
		HX_STACK_LINE(83)
		::actors::attacks::Attack tmp = this->attackBehavior;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(83)
		bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(83)
		if ((tmp1)){
			HX_STACK_LINE(85)
			::actors::attacks::Attack tmp2 = this->attackBehavior;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(85)
			bool tmp3 = tmp2->hasAnimation();		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(85)
			if ((tmp3)){
				HX_STACK_LINE(86)
				::actors::attacks::Attack tmp4 = this->attackBehavior;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(86)
				::String tmp5 = tmp4->getAnimation();		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(86)
				this->setAnimation(tmp5);
				HX_STACK_LINE(87)
				return null();
			}
		}
		else{
			HX_STACK_LINE(90)
			::actors::Animation tmp2 = this->currentAnimation;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(90)
			::String tmp3 = tmp2->getName();		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(90)
			int tmp4 = tmp3.indexOf(HX_HCSTRING("Windup","\x43","\x0d","\x21","\x87"),null());		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(90)
			bool tmp5 = (tmp4 >= (int)0);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(90)
			if ((tmp5)){
				HX_STACK_LINE(91)
				return null();
			}
			else{
				HX_STACK_LINE(92)
				::actors::ObjectMover tmp6 = this->currentMover;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(92)
				Float tmp7 = tmp6->getXVel();		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(92)
				Float tmp8 = ::Math_obj::abs(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(92)
				bool tmp9 = (tmp8 < ((Float).1));		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(92)
				if ((tmp9)){
					HX_STACK_LINE(93)
					this->setAnimation(HX_HCSTRING("Idle","\x34","\xd3","\x8c","\x30"));
				}
				else{
					HX_STACK_LINE(94)
					::actors::ObjectMover tmp10 = this->currentMover;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(94)
					Float tmp11 = tmp10->getXVel();		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(94)
					Float tmp12 = ::Math_obj::abs(tmp11);		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(94)
					bool tmp13 = (tmp12 > ((Float).1));		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(94)
					if ((tmp13)){
						HX_STACK_LINE(95)
						this->setAnimation(HX_HCSTRING("Walk","\x29","\x89","\xcb","\x39"));
					}
				}
			}
		}
	}
return null();
}


Void LaunchEnemy_obj::stopLeft( ){
{
		HX_STACK_FRAME("actors.enemies.LaunchEnemy","stopLeft",0xba16711a,"actors.enemies.LaunchEnemy.stopLeft","actors/enemies/LaunchEnemy.hx",99,0xf19a6cc3)
		HX_STACK_THIS(this)
		HX_STACK_LINE(100)
		::actors::ObjectMover tmp = this->currentMover;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(100)
		tmp->stopLeft();
		HX_STACK_LINE(101)
		::actors::ObjectMover tmp1 = this->defaultMover;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(101)
		::actors::ObjectMover tmp2 = this->currentMover;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(101)
		bool tmp3 = (tmp1 != tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(101)
		if ((tmp3)){
			HX_STACK_LINE(102)
			::actors::ObjectMover tmp4 = this->defaultMover;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(102)
			tmp4->stopLeft();
		}
		HX_STACK_LINE(103)
		::actors::ObjectMover tmp4 = this->currentMover;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(103)
		bool tmp5 = tmp4->getIsGrounded();		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(103)
		bool tmp6;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(103)
		if ((tmp5)){
			HX_STACK_LINE(103)
			::actors::ObjectMover tmp7 = this->currentMover;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(103)
			::actors::ObjectMover tmp8 = tmp7;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(103)
			int tmp9 = tmp8->getTargetXVel();		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(103)
			int tmp10 = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(103)
			tmp6 = (tmp10 == (int)0);
		}
		else{
			HX_STACK_LINE(103)
			tmp6 = false;
		}
		HX_STACK_LINE(103)
		if ((tmp6)){
			HX_STACK_LINE(104)
			this->setAnimation(HX_HCSTRING("Idle","\x34","\xd3","\x8c","\x30"));
		}
	}
return null();
}


Void LaunchEnemy_obj::stopRight( ){
{
		HX_STACK_FRAME("actors.enemies.LaunchEnemy","stopRight",0x90999369,"actors.enemies.LaunchEnemy.stopRight","actors/enemies/LaunchEnemy.hx",107,0xf19a6cc3)
		HX_STACK_THIS(this)
		HX_STACK_LINE(108)
		::actors::ObjectMover tmp = this->currentMover;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(108)
		tmp->stopRight();
		HX_STACK_LINE(109)
		::actors::ObjectMover tmp1 = this->defaultMover;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(109)
		::actors::ObjectMover tmp2 = this->currentMover;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(109)
		bool tmp3 = (tmp1 != tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(109)
		if ((tmp3)){
			HX_STACK_LINE(110)
			::actors::ObjectMover tmp4 = this->defaultMover;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(110)
			tmp4->stopRight();
		}
		HX_STACK_LINE(111)
		::actors::ObjectMover tmp4 = this->currentMover;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(111)
		bool tmp5 = tmp4->getIsGrounded();		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(111)
		bool tmp6;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(111)
		if ((tmp5)){
			HX_STACK_LINE(111)
			::actors::ObjectMover tmp7 = this->currentMover;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(111)
			::actors::ObjectMover tmp8 = tmp7;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(111)
			int tmp9 = tmp8->getTargetXVel();		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(111)
			int tmp10 = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(111)
			tmp6 = (tmp10 == (int)0);
		}
		else{
			HX_STACK_LINE(111)
			tmp6 = false;
		}
		HX_STACK_LINE(111)
		if ((tmp6)){
			HX_STACK_LINE(112)
			this->setAnimation(HX_HCSTRING("Idle","\x34","\xd3","\x8c","\x30"));
		}
	}
return null();
}


Void LaunchEnemy_obj::goLeft( ){
{
		HX_STACK_FRAME("actors.enemies.LaunchEnemy","goLeft",0x275c5800,"actors.enemies.LaunchEnemy.goLeft","actors/enemies/LaunchEnemy.hx",115,0xf19a6cc3)
		HX_STACK_THIS(this)
		HX_STACK_LINE(116)
		this->super::goLeft();
		HX_STACK_LINE(117)
		this->alignmentLeft = true;
	}
return null();
}


Void LaunchEnemy_obj::goRight( ){
{
		HX_STACK_FRAME("actors.enemies.LaunchEnemy","goRight",0xc07db5c3,"actors.enemies.LaunchEnemy.goRight","actors/enemies/LaunchEnemy.hx",120,0xf19a6cc3)
		HX_STACK_THIS(this)
		HX_STACK_LINE(121)
		this->super::goRight();
		HX_STACK_LINE(122)
		this->alignmentLeft = false;
	}
return null();
}


Void LaunchEnemy_obj::setAnimation( ::String action){
{
		HX_STACK_FRAME("actors.enemies.LaunchEnemy","setAnimation",0x9f101f73,"actors.enemies.LaunchEnemy.setAnimation","actors/enemies/LaunchEnemy.hx",125,0xf19a6cc3)
		HX_STACK_THIS(this)
		HX_STACK_ARG(action,"action")
		HX_STACK_LINE(127)
		bool tmp = this->alignmentLeft;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(127)
		if ((tmp)){
			HX_STACK_LINE(128)
			::String tmp1 = (HX_HCSTRING("Left","\x27","\x34","\x89","\x32") + action);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(128)
			::actors::Animation tmp2 = this->getAnimation(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(128)
			this->currentAnimation = tmp2;
		}
		else{
			HX_STACK_LINE(130)
			::String tmp1 = (HX_HCSTRING("Right","\xbc","\x7b","\x91","\x7c") + action);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(130)
			::actors::Animation tmp2 = this->getAnimation(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(130)
			this->currentAnimation = tmp2;
		}
	}
return null();
}


Void LaunchEnemy_obj::windup( ){
{
		HX_STACK_FRAME("actors.enemies.LaunchEnemy","windup",0x2f232ed4,"actors.enemies.LaunchEnemy.windup","actors/enemies/LaunchEnemy.hx",133,0xf19a6cc3)
		HX_STACK_THIS(this)
		HX_STACK_LINE(134)
		this->stopLeft();
		HX_STACK_LINE(135)
		this->stopRight();
		HX_STACK_LINE(136)
		::actors::ObjectMover tmp = this->currentMover;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(136)
		tmp->freeze();
		HX_STACK_LINE(137)
		this->setAnimation(HX_HCSTRING("Windup","\x43","\x0d","\x21","\x87"));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(LaunchEnemy_obj,windup,(void))

Void LaunchEnemy_obj::launchAttack( ){
{
		HX_STACK_FRAME("actors.enemies.LaunchEnemy","launchAttack",0x5e370acc,"actors.enemies.LaunchEnemy.launchAttack","actors/enemies/LaunchEnemy.hx",139,0xf19a6cc3)
		HX_STACK_THIS(this)
		HX_STACK_LINE(140)
		::actors::attacks::Attack tmp = this->aoeAttack;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(140)
		this->attackBehavior = tmp;
		HX_STACK_LINE(141)
		this->initiateAttack();
		HX_STACK_LINE(142)
		int tmp1 = this->aoeWidth;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(142)
		this->actorWidth = tmp1;
		HX_STACK_LINE(143)
		int tmp2 = this->aoeHeight;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(143)
		this->actorHeight = tmp2;
		HX_STACK_LINE(144)
		{
			HX_STACK_LINE(144)
			::actors::enemies::LaunchEnemy _g = hx::ObjectPtr<OBJ_>(this);		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(144)
			Float tmp3 = _g->get_x();		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(144)
			int tmp4 = this->aoeWidth;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(144)
			int tmp5 = this->originalWidth;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(144)
			int tmp6 = (tmp4 - tmp5);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(144)
			Float tmp7 = (Float(tmp6) / Float((int)2));		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(144)
			Float tmp8 = (tmp7 + (int)4);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(144)
			Float tmp9 = (tmp3 - tmp8);		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(144)
			_g->set_x(tmp9);
		}
		HX_STACK_LINE(145)
		{
			HX_STACK_LINE(145)
			::actors::enemies::LaunchEnemy _g = hx::ObjectPtr<OBJ_>(this);		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(145)
			Float tmp3 = _g->get_y();		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(145)
			int tmp4 = this->aoeHeight;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(145)
			int tmp5 = this->originalHeight;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(145)
			int tmp6 = (tmp4 - tmp5);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(145)
			Float tmp7 = (Float(tmp6) / Float((int)2));		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(145)
			Float tmp8 = (tmp7 + (int)4);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(145)
			Float tmp9 = (tmp3 - tmp8);		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(145)
			_g->set_y(tmp9);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(LaunchEnemy_obj,launchAttack,(void))

Void LaunchEnemy_obj::endLaunchAttack( ){
{
		HX_STACK_FRAME("actors.enemies.LaunchEnemy","endLaunchAttack",0xcf9a7305,"actors.enemies.LaunchEnemy.endLaunchAttack","actors/enemies/LaunchEnemy.hx",147,0xf19a6cc3)
		HX_STACK_THIS(this)
		HX_STACK_LINE(148)
		this->endAttack();
		HX_STACK_LINE(149)
		int tmp = this->originalWidth;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(149)
		this->actorWidth = tmp;
		HX_STACK_LINE(150)
		int tmp1 = this->originalHeight;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(150)
		this->actorHeight = tmp1;
		HX_STACK_LINE(151)
		{
			HX_STACK_LINE(151)
			::actors::enemies::LaunchEnemy _g = hx::ObjectPtr<OBJ_>(this);		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(151)
			Float tmp2 = _g->get_x();		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(151)
			int tmp3 = this->aoeWidth;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(151)
			int tmp4 = this->originalWidth;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(151)
			int tmp5 = (tmp3 - tmp4);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(151)
			Float tmp6 = (Float(tmp5) / Float((int)2));		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(151)
			Float tmp7 = (tmp6 + (int)4);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(151)
			Float tmp8 = (tmp2 + tmp7);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(151)
			_g->set_x(tmp8);
		}
		HX_STACK_LINE(152)
		{
			HX_STACK_LINE(152)
			::actors::enemies::LaunchEnemy _g = hx::ObjectPtr<OBJ_>(this);		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(152)
			Float tmp2 = _g->get_y();		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(152)
			int tmp3 = this->aoeHeight;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(152)
			int tmp4 = this->originalHeight;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(152)
			int tmp5 = (tmp3 - tmp4);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(152)
			Float tmp6 = (Float(tmp5) / Float((int)2));		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(152)
			Float tmp7 = (tmp6 + (int)4);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(152)
			Float tmp8 = (tmp2 + tmp7);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(152)
			_g->set_y(tmp8);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(LaunchEnemy_obj,endLaunchAttack,(void))

::actors::enemies::Enemy LaunchEnemy_obj::createClone( ::maps::mapobjects::SpawnPoint spawnPoint){
	HX_STACK_FRAME("actors.enemies.LaunchEnemy","createClone",0x27767370,"actors.enemies.LaunchEnemy.createClone","actors/enemies/LaunchEnemy.hx",156,0xf19a6cc3)
	HX_STACK_THIS(this)
	HX_STACK_ARG(spawnPoint,"spawnPoint")
	HX_STACK_LINE(157)
	::actors::enemies::LaunchEnemy tmp = ::actors::enemies::LaunchEnemy_obj::__new(spawnPoint);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(157)
	return tmp;
}



LaunchEnemy_obj::LaunchEnemy_obj()
{
}

void LaunchEnemy_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(LaunchEnemy);
	HX_MARK_MEMBER_NAME(aoeAttack,"aoeAttack");
	HX_MARK_MEMBER_NAME(originalWidth,"originalWidth");
	HX_MARK_MEMBER_NAME(originalHeight,"originalHeight");
	HX_MARK_MEMBER_NAME(aoeWidth,"aoeWidth");
	HX_MARK_MEMBER_NAME(aoeHeight,"aoeHeight");
	::actors::enemies::Enemy_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void LaunchEnemy_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(aoeAttack,"aoeAttack");
	HX_VISIT_MEMBER_NAME(originalWidth,"originalWidth");
	HX_VISIT_MEMBER_NAME(originalHeight,"originalHeight");
	HX_VISIT_MEMBER_NAME(aoeWidth,"aoeWidth");
	HX_VISIT_MEMBER_NAME(aoeHeight,"aoeHeight");
	::actors::enemies::Enemy_obj::__Visit(HX_VISIT_ARG);
}

Dynamic LaunchEnemy_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"goLeft") ) { return goLeft_dyn(); }
		if (HX_FIELD_EQ(inName,"windup") ) { return windup_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"goRight") ) { return goRight_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"aoeWidth") ) { return aoeWidth; }
		if (HX_FIELD_EQ(inName,"stopLeft") ) { return stopLeft_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"aoeAttack") ) { return aoeAttack; }
		if (HX_FIELD_EQ(inName,"aoeHeight") ) { return aoeHeight; }
		if (HX_FIELD_EQ(inName,"stopRight") ) { return stopRight_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"createClone") ) { return createClone_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"setAnimation") ) { return setAnimation_dyn(); }
		if (HX_FIELD_EQ(inName,"launchAttack") ) { return launchAttack_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"originalWidth") ) { return originalWidth; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"originalHeight") ) { return originalHeight; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"handleAnimation") ) { return handleAnimation_dyn(); }
		if (HX_FIELD_EQ(inName,"endLaunchAttack") ) { return endLaunchAttack_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic LaunchEnemy_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"aoeWidth") ) { aoeWidth=inValue.Cast< int >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"aoeAttack") ) { aoeAttack=inValue.Cast< ::actors::attacks::Attack >(); return inValue; }
		if (HX_FIELD_EQ(inName,"aoeHeight") ) { aoeHeight=inValue.Cast< int >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"originalWidth") ) { originalWidth=inValue.Cast< int >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"originalHeight") ) { originalHeight=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool LaunchEnemy_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	return false;
}

void LaunchEnemy_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("aoeAttack","\xdf","\x8e","\xf4","\x36"));
	outFields->push(HX_HCSTRING("originalWidth","\xf5","\xab","\x53","\x25"));
	outFields->push(HX_HCSTRING("originalHeight","\x18","\x43","\x32","\x3a"));
	outFields->push(HX_HCSTRING("aoeWidth","\xcf","\x52","\x87","\x73"));
	outFields->push(HX_HCSTRING("aoeHeight","\xfe","\x9a","\x30","\x59"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::actors::attacks::Attack*/ ,(int)offsetof(LaunchEnemy_obj,aoeAttack),HX_HCSTRING("aoeAttack","\xdf","\x8e","\xf4","\x36")},
	{hx::fsInt,(int)offsetof(LaunchEnemy_obj,originalWidth),HX_HCSTRING("originalWidth","\xf5","\xab","\x53","\x25")},
	{hx::fsInt,(int)offsetof(LaunchEnemy_obj,originalHeight),HX_HCSTRING("originalHeight","\x18","\x43","\x32","\x3a")},
	{hx::fsInt,(int)offsetof(LaunchEnemy_obj,aoeWidth),HX_HCSTRING("aoeWidth","\xcf","\x52","\x87","\x73")},
	{hx::fsInt,(int)offsetof(LaunchEnemy_obj,aoeHeight),HX_HCSTRING("aoeHeight","\xfe","\x9a","\x30","\x59")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("aoeAttack","\xdf","\x8e","\xf4","\x36"),
	HX_HCSTRING("originalWidth","\xf5","\xab","\x53","\x25"),
	HX_HCSTRING("originalHeight","\x18","\x43","\x32","\x3a"),
	HX_HCSTRING("aoeWidth","\xcf","\x52","\x87","\x73"),
	HX_HCSTRING("aoeHeight","\xfe","\x9a","\x30","\x59"),
	HX_HCSTRING("handleAnimation","\x3c","\x96","\xa0","\x19"),
	HX_HCSTRING("stopLeft","\x29","\x4d","\x6a","\x9a"),
	HX_HCSTRING("stopRight","\x7a","\x44","\xa6","\xf9"),
	HX_HCSTRING("goLeft","\x4f","\xc2","\xc5","\x4a"),
	HX_HCSTRING("goRight","\x94","\x50","\x51","\x99"),
	HX_HCSTRING("setAnimation","\x02","\xaf","\x84","\x6f"),
	HX_HCSTRING("windup","\x23","\x99","\x8c","\x52"),
	HX_HCSTRING("launchAttack","\x5b","\x9a","\xab","\x2e"),
	HX_HCSTRING("endLaunchAttack","\xd6","\xc6","\xae","\xa3"),
	HX_HCSTRING("createClone","\xc1","\x4a","\xde","\x71"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(LaunchEnemy_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(LaunchEnemy_obj::__mClass,"__mClass");
};

#endif

hx::Class LaunchEnemy_obj::__mClass;

void LaunchEnemy_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("actors.enemies.LaunchEnemy","\x9d","\x7e","\x60","\x50");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &LaunchEnemy_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< LaunchEnemy_obj >;
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
