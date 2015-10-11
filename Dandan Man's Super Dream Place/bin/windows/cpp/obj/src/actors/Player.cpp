#include <hxcpp.h>

#include "hxMath.h"
#ifndef INCLUDED_Main
#include <Main.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
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
#ifndef INCLUDED_actors_Player
#include <actors/Player.h>
#endif
#ifndef INCLUDED_actors_abilities_Ability
#include <actors/abilities/Ability.h>
#endif
#ifndef INCLUDED_actors_abilities_DashAbility
#include <actors/abilities/DashAbility.h>
#endif
#ifndef INCLUDED_actors_abilities_LaunchAbility
#include <actors/abilities/LaunchAbility.h>
#endif
#ifndef INCLUDED_actors_abilities_ProjectileAbility
#include <actors/abilities/ProjectileAbility.h>
#endif
#ifndef INCLUDED_actors_attacks_AbsorbAttack
#include <actors/attacks/AbsorbAttack.h>
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
#ifndef INCLUDED_actors_enemies_DashEnemy
#include <actors/enemies/DashEnemy.h>
#endif
#ifndef INCLUDED_actors_enemies_Enemy
#include <actors/enemies/Enemy.h>
#endif
#ifndef INCLUDED_actors_enemies_LaunchEnemy
#include <actors/enemies/LaunchEnemy.h>
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
#ifndef INCLUDED_lime_app_IModule
#include <lime/app/IModule.h>
#endif
#ifndef INCLUDED_maps_AreaMap
#include <maps/AreaMap.h>
#endif
#ifndef INCLUDED_maps_mapobjects_Checkpoint
#include <maps/mapobjects/Checkpoint.h>
#endif
#ifndef INCLUDED_maps_mapobjects_MapObject
#include <maps/mapobjects/MapObject.h>
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
#ifndef INCLUDED_openfl_display_Stage
#include <openfl/display/Stage.h>
#endif
#ifndef INCLUDED_openfl_events_Event
#include <openfl/events/Event.h>
#endif
#ifndef INCLUDED_openfl_events_EventDispatcher
#include <openfl/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_events_IEventDispatcher
#include <openfl/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_events_KeyboardEvent
#include <openfl/events/KeyboardEvent.h>
#endif
#ifndef INCLUDED_openfl_geom_Point
#include <openfl/geom/Point.h>
#endif
#ifndef INCLUDED_openfl_geom_Rectangle
#include <openfl/geom/Rectangle.h>
#endif
namespace actors{

Void Player_obj::__construct()
{
HX_STACK_FRAME("actors.Player","new",0xdf30bf83,"actors.Player.new","actors/Player.hx",43,0xa6e3592c)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(44)
	::Main tmp = ::Main_obj::getSingleton();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(44)
	::String tmp1 = ::openfl::events::KeyboardEvent_obj::KEY_UP;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(44)
	Dynamic tmp2 = this->checkKeysUp_dyn();		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(44)
	tmp->stage->addEventListener(tmp1,tmp2,null(),null(),null());
	HX_STACK_LINE(45)
	::Main tmp3 = ::Main_obj::getSingleton();		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(45)
	::String tmp4 = ::openfl::events::KeyboardEvent_obj::KEY_DOWN;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(45)
	Dynamic tmp5 = this->checkKeysDown_dyn();		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(45)
	tmp3->stage->addEventListener(tmp4,tmp5,null(),null(),null());
	HX_STACK_LINE(47)
	::actors::ObjectMover tmp6 = ::actors::ObjectMover_obj::__new(((Float).5),((Float).1),(int)0,(int)0,(int)0,(int)0,(int)60,(int)60,(int)2,null(),null(),null());		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(47)
	::actors::ObjectMover mover = tmp6;		HX_STACK_VAR(mover,"mover");
	HX_STACK_LINE(48)
	int playerWidth = (int)32;		HX_STACK_VAR(playerWidth,"playerWidth");
	HX_STACK_LINE(49)
	int playerHeight = (int)36;		HX_STACK_VAR(playerHeight,"playerHeight");
	HX_STACK_LINE(52)
	::openfl::geom::Point tmp7 = ::openfl::geom::Point_obj::__new((int)0,(int)0);		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(52)
	int tmp8 = playerWidth;		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(52)
	int tmp9 = playerHeight;		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(52)
	::openfl::geom::Point tmp10 = ::openfl::geom::Point_obj::__new(null(),null());		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(52)
	::openfl::geom::Point tmp11 = ::openfl::geom::Point_obj::__new((int)1,null());		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(52)
	::openfl::geom::Point tmp12 = ::openfl::geom::Point_obj::__new((int)2,null());		HX_STACK_VAR(tmp12,"tmp12");
	HX_STACK_LINE(51)
	::actors::Animation tmp13 = ::actors::Animation_obj::__new(HX_HCSTRING("RightIdle","\xf0","\xdc","\x4c","\x52"),(int)3,tmp7,tmp8,tmp9,Array_obj< ::Dynamic >::__new().Add(tmp10).Add(tmp11).Add(tmp12),null(),null());		HX_STACK_VAR(tmp13,"tmp13");
	HX_STACK_LINE(51)
	::actors::Animation rightIdle = tmp13;		HX_STACK_VAR(rightIdle,"rightIdle");
	HX_STACK_LINE(54)
	::openfl::geom::Point tmp14 = ::openfl::geom::Point_obj::__new((int)0,playerHeight);		HX_STACK_VAR(tmp14,"tmp14");
	HX_STACK_LINE(54)
	int tmp15 = playerWidth;		HX_STACK_VAR(tmp15,"tmp15");
	HX_STACK_LINE(54)
	int tmp16 = playerHeight;		HX_STACK_VAR(tmp16,"tmp16");
	HX_STACK_LINE(54)
	::openfl::geom::Point tmp17 = ::openfl::geom::Point_obj::__new(null(),null());		HX_STACK_VAR(tmp17,"tmp17");
	HX_STACK_LINE(54)
	::openfl::geom::Point tmp18 = ::openfl::geom::Point_obj::__new((int)1,null());		HX_STACK_VAR(tmp18,"tmp18");
	HX_STACK_LINE(54)
	::openfl::geom::Point tmp19 = ::openfl::geom::Point_obj::__new((int)2,null());		HX_STACK_VAR(tmp19,"tmp19");
	HX_STACK_LINE(53)
	::actors::Animation tmp20 = ::actors::Animation_obj::__new(HX_HCSTRING("LeftIdle","\xdb","\xa6","\x60","\x26"),(int)3,tmp14,tmp15,tmp16,Array_obj< ::Dynamic >::__new().Add(tmp17).Add(tmp18).Add(tmp19),null(),null());		HX_STACK_VAR(tmp20,"tmp20");
	HX_STACK_LINE(53)
	::actors::Animation leftIdle = tmp20;		HX_STACK_VAR(leftIdle,"leftIdle");
	HX_STACK_LINE(57)
	int tmp21 = (playerHeight * (int)2);		HX_STACK_VAR(tmp21,"tmp21");
	HX_STACK_LINE(57)
	::openfl::geom::Point tmp22 = ::openfl::geom::Point_obj::__new((int)0,tmp21);		HX_STACK_VAR(tmp22,"tmp22");
	HX_STACK_LINE(57)
	int tmp23 = playerWidth;		HX_STACK_VAR(tmp23,"tmp23");
	HX_STACK_LINE(57)
	int tmp24 = playerHeight;		HX_STACK_VAR(tmp24,"tmp24");
	HX_STACK_LINE(58)
	::openfl::geom::Point tmp25 = ::openfl::geom::Point_obj::__new(null(),null());		HX_STACK_VAR(tmp25,"tmp25");
	HX_STACK_LINE(58)
	::openfl::geom::Point tmp26 = ::openfl::geom::Point_obj::__new((int)1,(int)0);		HX_STACK_VAR(tmp26,"tmp26");
	HX_STACK_LINE(58)
	::openfl::geom::Point tmp27 = ::openfl::geom::Point_obj::__new((int)2,(int)0);		HX_STACK_VAR(tmp27,"tmp27");
	HX_STACK_LINE(58)
	::openfl::geom::Point tmp28 = ::openfl::geom::Point_obj::__new((int)3,(int)0);		HX_STACK_VAR(tmp28,"tmp28");
	HX_STACK_LINE(56)
	::actors::Animation tmp29 = ::actors::Animation_obj::__new(HX_HCSTRING("RightWalk","\xe5","\x92","\x8b","\x5b"),(int)3,tmp22,tmp23,tmp24,Array_obj< ::Dynamic >::__new().Add(tmp25).Add(tmp26).Add(tmp27).Add(tmp28),null(),null());		HX_STACK_VAR(tmp29,"tmp29");
	HX_STACK_LINE(56)
	::actors::Animation rightWalk = tmp29;		HX_STACK_VAR(rightWalk,"rightWalk");
	HX_STACK_LINE(60)
	int tmp30 = (playerHeight * (int)3);		HX_STACK_VAR(tmp30,"tmp30");
	HX_STACK_LINE(60)
	::openfl::geom::Point tmp31 = ::openfl::geom::Point_obj::__new((int)0,tmp30);		HX_STACK_VAR(tmp31,"tmp31");
	HX_STACK_LINE(60)
	int tmp32 = playerWidth;		HX_STACK_VAR(tmp32,"tmp32");
	HX_STACK_LINE(60)
	int tmp33 = playerHeight;		HX_STACK_VAR(tmp33,"tmp33");
	HX_STACK_LINE(61)
	::openfl::geom::Point tmp34 = ::openfl::geom::Point_obj::__new(null(),null());		HX_STACK_VAR(tmp34,"tmp34");
	HX_STACK_LINE(61)
	::openfl::geom::Point tmp35 = ::openfl::geom::Point_obj::__new((int)1,(int)0);		HX_STACK_VAR(tmp35,"tmp35");
	HX_STACK_LINE(61)
	::openfl::geom::Point tmp36 = ::openfl::geom::Point_obj::__new((int)2,(int)0);		HX_STACK_VAR(tmp36,"tmp36");
	HX_STACK_LINE(61)
	::openfl::geom::Point tmp37 = ::openfl::geom::Point_obj::__new((int)3,(int)0);		HX_STACK_VAR(tmp37,"tmp37");
	HX_STACK_LINE(59)
	::actors::Animation tmp38 = ::actors::Animation_obj::__new(HX_HCSTRING("LeftWalk","\xd0","\x5c","\x9f","\x2f"),(int)3,tmp31,tmp32,tmp33,Array_obj< ::Dynamic >::__new().Add(tmp34).Add(tmp35).Add(tmp36).Add(tmp37),null(),null());		HX_STACK_VAR(tmp38,"tmp38");
	HX_STACK_LINE(59)
	::actors::Animation leftWalk = tmp38;		HX_STACK_VAR(leftWalk,"leftWalk");
	HX_STACK_LINE(64)
	int tmp39 = (playerHeight * (int)4);		HX_STACK_VAR(tmp39,"tmp39");
	HX_STACK_LINE(64)
	::openfl::geom::Point tmp40 = ::openfl::geom::Point_obj::__new((int)0,tmp39);		HX_STACK_VAR(tmp40,"tmp40");
	HX_STACK_LINE(64)
	int tmp41 = playerWidth;		HX_STACK_VAR(tmp41,"tmp41");
	HX_STACK_LINE(64)
	int tmp42 = playerHeight;		HX_STACK_VAR(tmp42,"tmp42");
	HX_STACK_LINE(64)
	::openfl::geom::Point tmp43 = ::openfl::geom::Point_obj::__new(null(),null());		HX_STACK_VAR(tmp43,"tmp43");
	HX_STACK_LINE(63)
	::actors::Animation tmp44 = ::actors::Animation_obj::__new(HX_HCSTRING("RightJump","\xca","\xfa","\x02","\x53"),(int)0,tmp40,tmp41,tmp42,Array_obj< ::Dynamic >::__new().Add(tmp43),null(),null());		HX_STACK_VAR(tmp44,"tmp44");
	HX_STACK_LINE(63)
	::actors::Animation rightJump = tmp44;		HX_STACK_VAR(rightJump,"rightJump");
	HX_STACK_LINE(66)
	int tmp45 = (playerWidth * (int)2);		HX_STACK_VAR(tmp45,"tmp45");
	HX_STACK_LINE(66)
	int tmp46 = (playerHeight * (int)4);		HX_STACK_VAR(tmp46,"tmp46");
	HX_STACK_LINE(66)
	::openfl::geom::Point tmp47 = ::openfl::geom::Point_obj::__new(tmp45,tmp46);		HX_STACK_VAR(tmp47,"tmp47");
	HX_STACK_LINE(66)
	int tmp48 = playerWidth;		HX_STACK_VAR(tmp48,"tmp48");
	HX_STACK_LINE(66)
	int tmp49 = playerHeight;		HX_STACK_VAR(tmp49,"tmp49");
	HX_STACK_LINE(66)
	::openfl::geom::Point tmp50 = ::openfl::geom::Point_obj::__new(null(),null());		HX_STACK_VAR(tmp50,"tmp50");
	HX_STACK_LINE(65)
	::actors::Animation tmp51 = ::actors::Animation_obj::__new(HX_HCSTRING("LeftJump","\xb5","\xc4","\x16","\x27"),(int)0,tmp47,tmp48,tmp49,Array_obj< ::Dynamic >::__new().Add(tmp50),null(),null());		HX_STACK_VAR(tmp51,"tmp51");
	HX_STACK_LINE(65)
	::actors::Animation leftJump = tmp51;		HX_STACK_VAR(leftJump,"leftJump");
	HX_STACK_LINE(69)
	int tmp52 = playerWidth;		HX_STACK_VAR(tmp52,"tmp52");
	HX_STACK_LINE(69)
	int tmp53 = (playerHeight * (int)4);		HX_STACK_VAR(tmp53,"tmp53");
	HX_STACK_LINE(69)
	::openfl::geom::Point tmp54 = ::openfl::geom::Point_obj::__new(tmp52,tmp53);		HX_STACK_VAR(tmp54,"tmp54");
	HX_STACK_LINE(69)
	int tmp55 = playerWidth;		HX_STACK_VAR(tmp55,"tmp55");
	HX_STACK_LINE(69)
	int tmp56 = playerHeight;		HX_STACK_VAR(tmp56,"tmp56");
	HX_STACK_LINE(69)
	::openfl::geom::Point tmp57 = ::openfl::geom::Point_obj::__new(null(),null());		HX_STACK_VAR(tmp57,"tmp57");
	HX_STACK_LINE(68)
	::actors::Animation tmp58 = ::actors::Animation_obj::__new(HX_HCSTRING("RightFall","\x57","\xf2","\x4e","\x50"),(int)0,tmp54,tmp55,tmp56,Array_obj< ::Dynamic >::__new().Add(tmp57),null(),null());		HX_STACK_VAR(tmp58,"tmp58");
	HX_STACK_LINE(68)
	::actors::Animation rightFall = tmp58;		HX_STACK_VAR(rightFall,"rightFall");
	HX_STACK_LINE(71)
	int tmp59 = (playerWidth * (int)3);		HX_STACK_VAR(tmp59,"tmp59");
	HX_STACK_LINE(71)
	int tmp60 = (playerHeight * (int)4);		HX_STACK_VAR(tmp60,"tmp60");
	HX_STACK_LINE(71)
	::openfl::geom::Point tmp61 = ::openfl::geom::Point_obj::__new(tmp59,tmp60);		HX_STACK_VAR(tmp61,"tmp61");
	HX_STACK_LINE(71)
	int tmp62 = playerWidth;		HX_STACK_VAR(tmp62,"tmp62");
	HX_STACK_LINE(71)
	int tmp63 = playerHeight;		HX_STACK_VAR(tmp63,"tmp63");
	HX_STACK_LINE(71)
	::openfl::geom::Point tmp64 = ::openfl::geom::Point_obj::__new(null(),null());		HX_STACK_VAR(tmp64,"tmp64");
	HX_STACK_LINE(70)
	::actors::Animation tmp65 = ::actors::Animation_obj::__new(HX_HCSTRING("LeftFall","\x42","\xbc","\x62","\x24"),(int)0,tmp61,tmp62,tmp63,Array_obj< ::Dynamic >::__new().Add(tmp64),null(),null());		HX_STACK_VAR(tmp65,"tmp65");
	HX_STACK_LINE(70)
	::actors::Animation leftFall = tmp65;		HX_STACK_VAR(leftFall,"leftFall");
	HX_STACK_LINE(74)
	int tmp66 = (playerHeight * (int)5);		HX_STACK_VAR(tmp66,"tmp66");
	HX_STACK_LINE(74)
	::openfl::geom::Point tmp67 = ::openfl::geom::Point_obj::__new((int)0,tmp66);		HX_STACK_VAR(tmp67,"tmp67");
	HX_STACK_LINE(74)
	int tmp68 = playerWidth;		HX_STACK_VAR(tmp68,"tmp68");
	HX_STACK_LINE(74)
	int tmp69 = playerHeight;		HX_STACK_VAR(tmp69,"tmp69");
	HX_STACK_LINE(74)
	::openfl::geom::Point tmp70 = ::openfl::geom::Point_obj::__new(null(),null());		HX_STACK_VAR(tmp70,"tmp70");
	HX_STACK_LINE(74)
	::openfl::geom::Point tmp71 = ::openfl::geom::Point_obj::__new((int)1,null());		HX_STACK_VAR(tmp71,"tmp71");
	HX_STACK_LINE(73)
	::actors::Animation tmp72 = ::actors::Animation_obj::__new(HX_HCSTRING("RightHurt","\xeb","\x91","\xb0","\x51"),(int)1,tmp67,tmp68,tmp69,Array_obj< ::Dynamic >::__new().Add(tmp70).Add(tmp71),null(),null());		HX_STACK_VAR(tmp72,"tmp72");
	HX_STACK_LINE(73)
	::actors::Animation rightHurt = tmp72;		HX_STACK_VAR(rightHurt,"rightHurt");
	HX_STACK_LINE(76)
	int tmp73 = (playerWidth * (int)2);		HX_STACK_VAR(tmp73,"tmp73");
	HX_STACK_LINE(76)
	int tmp74 = (playerHeight * (int)5);		HX_STACK_VAR(tmp74,"tmp74");
	HX_STACK_LINE(76)
	::openfl::geom::Point tmp75 = ::openfl::geom::Point_obj::__new(tmp73,tmp74);		HX_STACK_VAR(tmp75,"tmp75");
	HX_STACK_LINE(76)
	int tmp76 = playerWidth;		HX_STACK_VAR(tmp76,"tmp76");
	HX_STACK_LINE(76)
	int tmp77 = playerHeight;		HX_STACK_VAR(tmp77,"tmp77");
	HX_STACK_LINE(76)
	::openfl::geom::Point tmp78 = ::openfl::geom::Point_obj::__new(null(),null());		HX_STACK_VAR(tmp78,"tmp78");
	HX_STACK_LINE(76)
	::openfl::geom::Point tmp79 = ::openfl::geom::Point_obj::__new((int)1,null());		HX_STACK_VAR(tmp79,"tmp79");
	HX_STACK_LINE(75)
	::actors::Animation tmp80 = ::actors::Animation_obj::__new(HX_HCSTRING("LeftHurt","\xd6","\x5b","\xc4","\x25"),(int)1,tmp75,tmp76,tmp77,Array_obj< ::Dynamic >::__new().Add(tmp78).Add(tmp79),null(),null());		HX_STACK_VAR(tmp80,"tmp80");
	HX_STACK_LINE(75)
	::actors::Animation leftHurt = tmp80;		HX_STACK_VAR(leftHurt,"leftHurt");
	HX_STACK_LINE(79)
	int tmp81 = (playerHeight * (int)6);		HX_STACK_VAR(tmp81,"tmp81");
	HX_STACK_LINE(79)
	::openfl::geom::Point tmp82 = ::openfl::geom::Point_obj::__new((int)0,tmp81);		HX_STACK_VAR(tmp82,"tmp82");
	HX_STACK_LINE(79)
	int tmp83 = playerWidth;		HX_STACK_VAR(tmp83,"tmp83");
	HX_STACK_LINE(79)
	int tmp84 = playerHeight;		HX_STACK_VAR(tmp84,"tmp84");
	HX_STACK_LINE(79)
	::openfl::geom::Point tmp85 = ::openfl::geom::Point_obj::__new(null(),null());		HX_STACK_VAR(tmp85,"tmp85");
	HX_STACK_LINE(79)
	::openfl::geom::Point tmp86 = ::openfl::geom::Point_obj::__new((int)1,null());		HX_STACK_VAR(tmp86,"tmp86");
	HX_STACK_LINE(79)
	::openfl::geom::Point tmp87 = ::openfl::geom::Point_obj::__new((int)2,null());		HX_STACK_VAR(tmp87,"tmp87");
	HX_STACK_LINE(80)
	::openfl::geom::Point tmp88 = ::openfl::geom::Point_obj::__new((int)3,null());		HX_STACK_VAR(tmp88,"tmp88");
	HX_STACK_LINE(80)
	::openfl::geom::Point tmp89 = ::openfl::geom::Point_obj::__new((int)0,(int)1);		HX_STACK_VAR(tmp89,"tmp89");
	HX_STACK_LINE(78)
	::actors::Animation tmp90 = ::actors::Animation_obj::__new(HX_HCSTRING("StandingAttack","\xd4","\xaa","\x14","\x08"),(int)1,tmp82,tmp83,tmp84,Array_obj< ::Dynamic >::__new().Add(tmp85).Add(tmp86).Add(tmp87).Add(tmp88).Add(tmp89),(int)20,null());		HX_STACK_VAR(tmp90,"tmp90");
	HX_STACK_LINE(78)
	::actors::Animation standingAttack = tmp90;		HX_STACK_VAR(standingAttack,"standingAttack");
	HX_STACK_LINE(82)
	int tmp91 = playerWidth;		HX_STACK_VAR(tmp91,"tmp91");
	HX_STACK_LINE(82)
	int tmp92 = (playerHeight * (int)7);		HX_STACK_VAR(tmp92,"tmp92");
	HX_STACK_LINE(82)
	::openfl::geom::Point tmp93 = ::openfl::geom::Point_obj::__new(tmp91,tmp92);		HX_STACK_VAR(tmp93,"tmp93");
	HX_STACK_LINE(82)
	int tmp94 = playerWidth;		HX_STACK_VAR(tmp94,"tmp94");
	HX_STACK_LINE(82)
	int tmp95 = playerHeight;		HX_STACK_VAR(tmp95,"tmp95");
	HX_STACK_LINE(82)
	::openfl::geom::Point tmp96 = ::openfl::geom::Point_obj::__new(null(),null());		HX_STACK_VAR(tmp96,"tmp96");
	HX_STACK_LINE(82)
	::openfl::geom::Point tmp97 = ::openfl::geom::Point_obj::__new((int)1,null());		HX_STACK_VAR(tmp97,"tmp97");
	HX_STACK_LINE(82)
	::openfl::geom::Point tmp98 = ::openfl::geom::Point_obj::__new((int)2,null());		HX_STACK_VAR(tmp98,"tmp98");
	HX_STACK_LINE(83)
	::openfl::geom::Point tmp99 = ::openfl::geom::Point_obj::__new((int)-1,(int)1);		HX_STACK_VAR(tmp99,"tmp99");
	HX_STACK_LINE(83)
	::openfl::geom::Point tmp100 = ::openfl::geom::Point_obj::__new((int)0,(int)1);		HX_STACK_VAR(tmp100,"tmp100");
	HX_STACK_LINE(81)
	::actors::Animation tmp101 = ::actors::Animation_obj::__new(HX_HCSTRING("JumpingAttack","\x7c","\xcf","\xe1","\x1d"),(int)1,tmp93,tmp94,tmp95,Array_obj< ::Dynamic >::__new().Add(tmp96).Add(tmp97).Add(tmp98).Add(tmp99).Add(tmp100),null(),null());		HX_STACK_VAR(tmp101,"tmp101");
	HX_STACK_LINE(81)
	::actors::Animation jumpingAttack = tmp101;		HX_STACK_VAR(jumpingAttack,"jumpingAttack");
	HX_STACK_LINE(85)
	int tmp102 = (playerWidth * (int)2);		HX_STACK_VAR(tmp102,"tmp102");
	HX_STACK_LINE(85)
	int tmp103 = (playerHeight * (int)8);		HX_STACK_VAR(tmp103,"tmp103");
	HX_STACK_LINE(85)
	::openfl::geom::Point tmp104 = ::openfl::geom::Point_obj::__new(tmp102,tmp103);		HX_STACK_VAR(tmp104,"tmp104");
	HX_STACK_LINE(85)
	int tmp105 = playerWidth;		HX_STACK_VAR(tmp105,"tmp105");
	HX_STACK_LINE(85)
	int tmp106 = playerHeight;		HX_STACK_VAR(tmp106,"tmp106");
	HX_STACK_LINE(85)
	::openfl::geom::Point tmp107 = ::openfl::geom::Point_obj::__new(null(),null());		HX_STACK_VAR(tmp107,"tmp107");
	HX_STACK_LINE(85)
	::openfl::geom::Point tmp108 = ::openfl::geom::Point_obj::__new((int)1,null());		HX_STACK_VAR(tmp108,"tmp108");
	HX_STACK_LINE(84)
	::actors::Animation tmp109 = ::actors::Animation_obj::__new(HX_HCSTRING("JumpingAttackRest","\xb0","\xc4","\xa5","\xb0"),(int)3,tmp104,tmp105,tmp106,Array_obj< ::Dynamic >::__new().Add(tmp107).Add(tmp108),null(),null());		HX_STACK_VAR(tmp109,"tmp109");
	HX_STACK_LINE(84)
	::actors::Animation jumpingAttackStun = tmp109;		HX_STACK_VAR(jumpingAttackStun,"jumpingAttackStun");
	HX_STACK_LINE(88)
	int tmp110 = (playerHeight * (int)6);		HX_STACK_VAR(tmp110,"tmp110");
	HX_STACK_LINE(88)
	::openfl::geom::Point tmp111 = ::openfl::geom::Point_obj::__new((int)0,tmp110);		HX_STACK_VAR(tmp111,"tmp111");
	HX_STACK_LINE(88)
	int tmp112 = playerWidth;		HX_STACK_VAR(tmp112,"tmp112");
	HX_STACK_LINE(88)
	int tmp113 = playerHeight;		HX_STACK_VAR(tmp113,"tmp113");
	HX_STACK_LINE(88)
	::openfl::geom::Point tmp114 = ::openfl::geom::Point_obj::__new(null(),null());		HX_STACK_VAR(tmp114,"tmp114");
	HX_STACK_LINE(88)
	::openfl::geom::Point tmp115 = ::openfl::geom::Point_obj::__new((int)1,null());		HX_STACK_VAR(tmp115,"tmp115");
	HX_STACK_LINE(87)
	::actors::Animation tmp116 = ::actors::Animation_obj::__new(HX_HCSTRING("LeftDash","\x19","\x55","\x10","\x23"),(int)1,tmp111,tmp112,tmp113,Array_obj< ::Dynamic >::__new().Add(tmp114).Add(tmp115),null(),null());		HX_STACK_VAR(tmp116,"tmp116");
	HX_STACK_LINE(87)
	::actors::Animation dashLeft = tmp116;		HX_STACK_VAR(dashLeft,"dashLeft");
	HX_STACK_LINE(90)
	int tmp117 = (playerWidth * (int)2);		HX_STACK_VAR(tmp117,"tmp117");
	HX_STACK_LINE(90)
	int tmp118 = (playerHeight * (int)6);		HX_STACK_VAR(tmp118,"tmp118");
	HX_STACK_LINE(90)
	::openfl::geom::Point tmp119 = ::openfl::geom::Point_obj::__new(tmp117,tmp118);		HX_STACK_VAR(tmp119,"tmp119");
	HX_STACK_LINE(90)
	int tmp120 = playerWidth;		HX_STACK_VAR(tmp120,"tmp120");
	HX_STACK_LINE(90)
	int tmp121 = playerHeight;		HX_STACK_VAR(tmp121,"tmp121");
	HX_STACK_LINE(90)
	::openfl::geom::Point tmp122 = ::openfl::geom::Point_obj::__new(null(),null());		HX_STACK_VAR(tmp122,"tmp122");
	HX_STACK_LINE(90)
	::openfl::geom::Point tmp123 = ::openfl::geom::Point_obj::__new((int)1,null());		HX_STACK_VAR(tmp123,"tmp123");
	HX_STACK_LINE(89)
	::actors::Animation tmp124 = ::actors::Animation_obj::__new(HX_HCSTRING("RightDash","\x2e","\x8b","\xfc","\x4e"),(int)1,tmp119,tmp120,tmp121,Array_obj< ::Dynamic >::__new().Add(tmp122).Add(tmp123),null(),null());		HX_STACK_VAR(tmp124,"tmp124");
	HX_STACK_LINE(89)
	::actors::Animation dashRight = tmp124;		HX_STACK_VAR(dashRight,"dashRight");
	HX_STACK_LINE(92)
	int tmp125 = (playerHeight * (int)7);		HX_STACK_VAR(tmp125,"tmp125");
	HX_STACK_LINE(92)
	::openfl::geom::Point tmp126 = ::openfl::geom::Point_obj::__new((int)0,tmp125);		HX_STACK_VAR(tmp126,"tmp126");
	HX_STACK_LINE(92)
	int tmp127 = playerWidth;		HX_STACK_VAR(tmp127,"tmp127");
	HX_STACK_LINE(92)
	int tmp128 = playerHeight;		HX_STACK_VAR(tmp128,"tmp128");
	HX_STACK_LINE(92)
	::openfl::geom::Point tmp129 = ::openfl::geom::Point_obj::__new(null(),null());		HX_STACK_VAR(tmp129,"tmp129");
	HX_STACK_LINE(92)
	::openfl::geom::Point tmp130 = ::openfl::geom::Point_obj::__new((int)1,null());		HX_STACK_VAR(tmp130,"tmp130");
	HX_STACK_LINE(91)
	::actors::Animation tmp131 = ::actors::Animation_obj::__new(HX_HCSTRING("LeftDashRest","\xcd","\xdc","\xe3","\x95"),(int)5,tmp126,tmp127,tmp128,Array_obj< ::Dynamic >::__new().Add(tmp129).Add(tmp130),null(),null());		HX_STACK_VAR(tmp131,"tmp131");
	HX_STACK_LINE(91)
	::actors::Animation dashRestLeft = tmp131;		HX_STACK_VAR(dashRestLeft,"dashRestLeft");
	HX_STACK_LINE(94)
	int tmp132 = (playerWidth * (int)2);		HX_STACK_VAR(tmp132,"tmp132");
	HX_STACK_LINE(94)
	int tmp133 = (playerHeight * (int)7);		HX_STACK_VAR(tmp133,"tmp133");
	HX_STACK_LINE(94)
	::openfl::geom::Point tmp134 = ::openfl::geom::Point_obj::__new(tmp132,tmp133);		HX_STACK_VAR(tmp134,"tmp134");
	HX_STACK_LINE(94)
	int tmp135 = playerWidth;		HX_STACK_VAR(tmp135,"tmp135");
	HX_STACK_LINE(94)
	int tmp136 = playerHeight;		HX_STACK_VAR(tmp136,"tmp136");
	HX_STACK_LINE(94)
	::openfl::geom::Point tmp137 = ::openfl::geom::Point_obj::__new(null(),null());		HX_STACK_VAR(tmp137,"tmp137");
	HX_STACK_LINE(94)
	::openfl::geom::Point tmp138 = ::openfl::geom::Point_obj::__new((int)1,null());		HX_STACK_VAR(tmp138,"tmp138");
	HX_STACK_LINE(93)
	::actors::Animation tmp139 = ::actors::Animation_obj::__new(HX_HCSTRING("RightDashRest","\x62","\x41","\x8d","\xe2"),(int)5,tmp134,tmp135,tmp136,Array_obj< ::Dynamic >::__new().Add(tmp137).Add(tmp138),null(),null());		HX_STACK_VAR(tmp139,"tmp139");
	HX_STACK_LINE(93)
	::actors::Animation dashRestRight = tmp139;		HX_STACK_VAR(dashRestRight,"dashRestRight");
	HX_STACK_LINE(97)
	int tmp140 = (playerHeight * (int)6);		HX_STACK_VAR(tmp140,"tmp140");
	HX_STACK_LINE(97)
	::openfl::geom::Point tmp141 = ::openfl::geom::Point_obj::__new((int)0,tmp140);		HX_STACK_VAR(tmp141,"tmp141");
	HX_STACK_LINE(97)
	::openfl::geom::Point tmp142 = ::openfl::geom::Point_obj::__new(null(),null());		HX_STACK_VAR(tmp142,"tmp142");
	HX_STACK_LINE(97)
	::openfl::geom::Point tmp143 = ::openfl::geom::Point_obj::__new((int)1,null());		HX_STACK_VAR(tmp143,"tmp143");
	HX_STACK_LINE(96)
	::actors::Animation tmp144 = ::actors::Animation_obj::__new(HX_HCSTRING("LeftLaunch","\xba","\xc1","\xd4","\x7b"),(int)1,tmp141,(int)40,(int)40,Array_obj< ::Dynamic >::__new().Add(tmp142).Add(tmp143),null(),null());		HX_STACK_VAR(tmp144,"tmp144");
	HX_STACK_LINE(96)
	::actors::Animation leftLaunch = tmp144;		HX_STACK_VAR(leftLaunch,"leftLaunch");
	HX_STACK_LINE(99)
	int tmp145 = (playerHeight * (int)6);		HX_STACK_VAR(tmp145,"tmp145");
	HX_STACK_LINE(99)
	::openfl::geom::Point tmp146 = ::openfl::geom::Point_obj::__new((int)0,tmp145);		HX_STACK_VAR(tmp146,"tmp146");
	HX_STACK_LINE(99)
	::openfl::geom::Point tmp147 = ::openfl::geom::Point_obj::__new(null(),null());		HX_STACK_VAR(tmp147,"tmp147");
	HX_STACK_LINE(99)
	::openfl::geom::Point tmp148 = ::openfl::geom::Point_obj::__new((int)1,null());		HX_STACK_VAR(tmp148,"tmp148");
	HX_STACK_LINE(98)
	::actors::Animation tmp149 = ::actors::Animation_obj::__new(HX_HCSTRING("RightLaunch","\x0f","\x67","\xca","\xa3"),(int)1,tmp146,(int)40,(int)40,Array_obj< ::Dynamic >::__new().Add(tmp147).Add(tmp148),null(),null());		HX_STACK_VAR(tmp149,"tmp149");
	HX_STACK_LINE(98)
	::actors::Animation rightLaunch = tmp149;		HX_STACK_VAR(rightLaunch,"rightLaunch");
	HX_STACK_LINE(101)
	int tmp150 = (playerHeight * (int)6);		HX_STACK_VAR(tmp150,"tmp150");
	HX_STACK_LINE(101)
	int tmp151 = (tmp150 + (int)40);		HX_STACK_VAR(tmp151,"tmp151");
	HX_STACK_LINE(101)
	::openfl::geom::Point tmp152 = ::openfl::geom::Point_obj::__new((int)0,tmp151);		HX_STACK_VAR(tmp152,"tmp152");
	HX_STACK_LINE(101)
	int tmp153 = playerWidth;		HX_STACK_VAR(tmp153,"tmp153");
	HX_STACK_LINE(101)
	int tmp154 = playerHeight;		HX_STACK_VAR(tmp154,"tmp154");
	HX_STACK_LINE(101)
	::openfl::geom::Point tmp155 = ::openfl::geom::Point_obj::__new(null(),null());		HX_STACK_VAR(tmp155,"tmp155");
	HX_STACK_LINE(101)
	::openfl::geom::Point tmp156 = ::openfl::geom::Point_obj::__new((int)1,null());		HX_STACK_VAR(tmp156,"tmp156");
	HX_STACK_LINE(100)
	::actors::Animation tmp157 = ::actors::Animation_obj::__new(HX_HCSTRING("LeftLaunchRest","\xee","\xad","\xd1","\x9a"),(int)10,tmp152,tmp153,tmp154,Array_obj< ::Dynamic >::__new().Add(tmp155).Add(tmp156),null(),null());		HX_STACK_VAR(tmp157,"tmp157");
	HX_STACK_LINE(100)
	::actors::Animation leftLaunchRest = tmp157;		HX_STACK_VAR(leftLaunchRest,"leftLaunchRest");
	HX_STACK_LINE(103)
	int tmp158 = (playerHeight * (int)6);		HX_STACK_VAR(tmp158,"tmp158");
	HX_STACK_LINE(103)
	int tmp159 = (tmp158 + (int)40);		HX_STACK_VAR(tmp159,"tmp159");
	HX_STACK_LINE(103)
	::openfl::geom::Point tmp160 = ::openfl::geom::Point_obj::__new((int)0,tmp159);		HX_STACK_VAR(tmp160,"tmp160");
	HX_STACK_LINE(103)
	int tmp161 = playerWidth;		HX_STACK_VAR(tmp161,"tmp161");
	HX_STACK_LINE(103)
	int tmp162 = playerHeight;		HX_STACK_VAR(tmp162,"tmp162");
	HX_STACK_LINE(103)
	::openfl::geom::Point tmp163 = ::openfl::geom::Point_obj::__new(null(),null());		HX_STACK_VAR(tmp163,"tmp163");
	HX_STACK_LINE(103)
	::openfl::geom::Point tmp164 = ::openfl::geom::Point_obj::__new((int)1,null());		HX_STACK_VAR(tmp164,"tmp164");
	HX_STACK_LINE(102)
	::actors::Animation tmp165 = ::actors::Animation_obj::__new(HX_HCSTRING("RightLaunchRest","\xc3","\x21","\x0d","\x70"),(int)10,tmp160,tmp161,tmp162,Array_obj< ::Dynamic >::__new().Add(tmp163).Add(tmp164),null(),null());		HX_STACK_VAR(tmp165,"tmp165");
	HX_STACK_LINE(102)
	::actors::Animation rightLaunchRest = tmp165;		HX_STACK_VAR(rightLaunchRest,"rightLaunchRest");
	HX_STACK_LINE(106)
	int tmp166 = (playerHeight * (int)6);		HX_STACK_VAR(tmp166,"tmp166");
	HX_STACK_LINE(106)
	::openfl::geom::Point tmp167 = ::openfl::geom::Point_obj::__new((int)0,tmp166);		HX_STACK_VAR(tmp167,"tmp167");
	HX_STACK_LINE(106)
	int tmp168 = playerWidth;		HX_STACK_VAR(tmp168,"tmp168");
	HX_STACK_LINE(106)
	int tmp169 = playerHeight;		HX_STACK_VAR(tmp169,"tmp169");
	HX_STACK_LINE(106)
	::openfl::geom::Point tmp170 = ::openfl::geom::Point_obj::__new(null(),null());		HX_STACK_VAR(tmp170,"tmp170");
	HX_STACK_LINE(106)
	::openfl::geom::Point tmp171 = ::openfl::geom::Point_obj::__new((int)1,null());		HX_STACK_VAR(tmp171,"tmp171");
	HX_STACK_LINE(106)
	::openfl::geom::Point tmp172 = ::openfl::geom::Point_obj::__new((int)2,null());		HX_STACK_VAR(tmp172,"tmp172");
	HX_STACK_LINE(106)
	::openfl::geom::Point tmp173 = ::openfl::geom::Point_obj::__new((int)3,null());		HX_STACK_VAR(tmp173,"tmp173");
	HX_STACK_LINE(105)
	::actors::Animation tmp174 = ::actors::Animation_obj::__new(HX_HCSTRING("RightProjectile","\xc5","\x88","\xec","\x77"),(int)1,tmp167,tmp168,tmp169,Array_obj< ::Dynamic >::__new().Add(tmp170).Add(tmp171).Add(tmp172).Add(tmp173),(int)10,null());		HX_STACK_VAR(tmp174,"tmp174");
	HX_STACK_LINE(105)
	::actors::Animation rightProjectile = tmp174;		HX_STACK_VAR(rightProjectile,"rightProjectile");
	HX_STACK_LINE(108)
	int tmp175 = (playerHeight * (int)7);		HX_STACK_VAR(tmp175,"tmp175");
	HX_STACK_LINE(108)
	::openfl::geom::Point tmp176 = ::openfl::geom::Point_obj::__new((int)0,tmp175);		HX_STACK_VAR(tmp176,"tmp176");
	HX_STACK_LINE(108)
	int tmp177 = playerWidth;		HX_STACK_VAR(tmp177,"tmp177");
	HX_STACK_LINE(108)
	int tmp178 = playerHeight;		HX_STACK_VAR(tmp178,"tmp178");
	HX_STACK_LINE(108)
	::openfl::geom::Point tmp179 = ::openfl::geom::Point_obj::__new(null(),null());		HX_STACK_VAR(tmp179,"tmp179");
	HX_STACK_LINE(108)
	::openfl::geom::Point tmp180 = ::openfl::geom::Point_obj::__new((int)1,null());		HX_STACK_VAR(tmp180,"tmp180");
	HX_STACK_LINE(108)
	::openfl::geom::Point tmp181 = ::openfl::geom::Point_obj::__new((int)2,null());		HX_STACK_VAR(tmp181,"tmp181");
	HX_STACK_LINE(108)
	::openfl::geom::Point tmp182 = ::openfl::geom::Point_obj::__new((int)3,null());		HX_STACK_VAR(tmp182,"tmp182");
	HX_STACK_LINE(107)
	::actors::Animation tmp183 = ::actors::Animation_obj::__new(HX_HCSTRING("LeftProjectile","\xf0","\x14","\xb1","\xa2"),(int)1,tmp176,tmp177,tmp178,Array_obj< ::Dynamic >::__new().Add(tmp179).Add(tmp180).Add(tmp181).Add(tmp182),(int)10,null());		HX_STACK_VAR(tmp183,"tmp183");
	HX_STACK_LINE(107)
	::actors::Animation leftProjectile = tmp183;		HX_STACK_VAR(leftProjectile,"leftProjectile");
	HX_STACK_LINE(111)
	int tmp184 = (playerHeight * (int)9);		HX_STACK_VAR(tmp184,"tmp184");
	HX_STACK_LINE(111)
	::openfl::geom::Point tmp185 = ::openfl::geom::Point_obj::__new((int)0,tmp184);		HX_STACK_VAR(tmp185,"tmp185");
	HX_STACK_LINE(111)
	int tmp186 = playerWidth;		HX_STACK_VAR(tmp186,"tmp186");
	HX_STACK_LINE(111)
	int tmp187 = playerHeight;		HX_STACK_VAR(tmp187,"tmp187");
	HX_STACK_LINE(112)
	::openfl::geom::Point tmp188 = ::openfl::geom::Point_obj::__new(null(),null());		HX_STACK_VAR(tmp188,"tmp188");
	HX_STACK_LINE(112)
	::openfl::geom::Point tmp189 = ::openfl::geom::Point_obj::__new((int)1,null());		HX_STACK_VAR(tmp189,"tmp189");
	HX_STACK_LINE(112)
	::openfl::geom::Point tmp190 = ::openfl::geom::Point_obj::__new((int)2,null());		HX_STACK_VAR(tmp190,"tmp190");
	HX_STACK_LINE(112)
	::openfl::geom::Point tmp191 = ::openfl::geom::Point_obj::__new((int)3,null());		HX_STACK_VAR(tmp191,"tmp191");
	HX_STACK_LINE(110)
	::actors::Animation tmp192 = ::actors::Animation_obj::__new(HX_HCSTRING("Death","\x14","\xff","\x4b","\x6a"),(int)1,tmp185,tmp186,tmp187,Array_obj< ::Dynamic >::__new().Add(tmp188).Add(tmp189).Add(tmp190).Add(tmp191),(int)0,false);		HX_STACK_VAR(tmp192,"tmp192");
	HX_STACK_LINE(110)
	this->deathAnimation = tmp192;
	HX_STACK_LINE(115)
	::haxe::ds::StringMap tmp193;		HX_STACK_VAR(tmp193,"tmp193");
	HX_STACK_LINE(115)
	{
		HX_STACK_LINE(115)
		::haxe::ds::StringMap tmp194 = ::haxe::ds::StringMap_obj::__new();		HX_STACK_VAR(tmp194,"tmp194");
		HX_STACK_LINE(115)
		::haxe::ds::StringMap tmp195 = tmp194;		HX_STACK_VAR(tmp195,"tmp195");
		HX_STACK_LINE(115)
		tmp193 = tmp195;
	}
	HX_STACK_LINE(115)
	this->animations = tmp193;
	HX_STACK_LINE(116)
	{
		HX_STACK_LINE(116)
		::String tmp194 = rightIdle->getName();		HX_STACK_VAR(tmp194,"tmp194");
		HX_STACK_LINE(116)
		::String k = tmp194;		HX_STACK_VAR(k,"k");
		HX_STACK_LINE(116)
		::haxe::ds::StringMap tmp195 = this->animations;		HX_STACK_VAR(tmp195,"tmp195");
		HX_STACK_LINE(116)
		::String tmp196 = k;		HX_STACK_VAR(tmp196,"tmp196");
		HX_STACK_LINE(116)
		::actors::Animation tmp197 = rightIdle;		HX_STACK_VAR(tmp197,"tmp197");
		HX_STACK_LINE(116)
		tmp195->set(tmp196,tmp197);
		HX_STACK_LINE(116)
		rightIdle;
	}
	HX_STACK_LINE(117)
	{
		HX_STACK_LINE(117)
		::String tmp194 = leftIdle->getName();		HX_STACK_VAR(tmp194,"tmp194");
		HX_STACK_LINE(117)
		::String k = tmp194;		HX_STACK_VAR(k,"k");
		HX_STACK_LINE(117)
		::haxe::ds::StringMap tmp195 = this->animations;		HX_STACK_VAR(tmp195,"tmp195");
		HX_STACK_LINE(117)
		::String tmp196 = k;		HX_STACK_VAR(tmp196,"tmp196");
		HX_STACK_LINE(117)
		::actors::Animation tmp197 = leftIdle;		HX_STACK_VAR(tmp197,"tmp197");
		HX_STACK_LINE(117)
		tmp195->set(tmp196,tmp197);
		HX_STACK_LINE(117)
		leftIdle;
	}
	HX_STACK_LINE(118)
	{
		HX_STACK_LINE(118)
		::String tmp194 = leftWalk->getName();		HX_STACK_VAR(tmp194,"tmp194");
		HX_STACK_LINE(118)
		::String k = tmp194;		HX_STACK_VAR(k,"k");
		HX_STACK_LINE(118)
		::haxe::ds::StringMap tmp195 = this->animations;		HX_STACK_VAR(tmp195,"tmp195");
		HX_STACK_LINE(118)
		::String tmp196 = k;		HX_STACK_VAR(tmp196,"tmp196");
		HX_STACK_LINE(118)
		::actors::Animation tmp197 = leftWalk;		HX_STACK_VAR(tmp197,"tmp197");
		HX_STACK_LINE(118)
		tmp195->set(tmp196,tmp197);
		HX_STACK_LINE(118)
		leftWalk;
	}
	HX_STACK_LINE(119)
	{
		HX_STACK_LINE(119)
		::String tmp194 = rightWalk->getName();		HX_STACK_VAR(tmp194,"tmp194");
		HX_STACK_LINE(119)
		::String k = tmp194;		HX_STACK_VAR(k,"k");
		HX_STACK_LINE(119)
		::haxe::ds::StringMap tmp195 = this->animations;		HX_STACK_VAR(tmp195,"tmp195");
		HX_STACK_LINE(119)
		::String tmp196 = k;		HX_STACK_VAR(tmp196,"tmp196");
		HX_STACK_LINE(119)
		::actors::Animation tmp197 = rightWalk;		HX_STACK_VAR(tmp197,"tmp197");
		HX_STACK_LINE(119)
		tmp195->set(tmp196,tmp197);
		HX_STACK_LINE(119)
		rightWalk;
	}
	HX_STACK_LINE(120)
	{
		HX_STACK_LINE(120)
		::String tmp194 = rightJump->getName();		HX_STACK_VAR(tmp194,"tmp194");
		HX_STACK_LINE(120)
		::String k = tmp194;		HX_STACK_VAR(k,"k");
		HX_STACK_LINE(120)
		::haxe::ds::StringMap tmp195 = this->animations;		HX_STACK_VAR(tmp195,"tmp195");
		HX_STACK_LINE(120)
		::String tmp196 = k;		HX_STACK_VAR(tmp196,"tmp196");
		HX_STACK_LINE(120)
		::actors::Animation tmp197 = rightJump;		HX_STACK_VAR(tmp197,"tmp197");
		HX_STACK_LINE(120)
		tmp195->set(tmp196,tmp197);
		HX_STACK_LINE(120)
		rightJump;
	}
	HX_STACK_LINE(121)
	{
		HX_STACK_LINE(121)
		::String tmp194 = rightFall->getName();		HX_STACK_VAR(tmp194,"tmp194");
		HX_STACK_LINE(121)
		::String k = tmp194;		HX_STACK_VAR(k,"k");
		HX_STACK_LINE(121)
		::haxe::ds::StringMap tmp195 = this->animations;		HX_STACK_VAR(tmp195,"tmp195");
		HX_STACK_LINE(121)
		::String tmp196 = k;		HX_STACK_VAR(tmp196,"tmp196");
		HX_STACK_LINE(121)
		::actors::Animation tmp197 = rightFall;		HX_STACK_VAR(tmp197,"tmp197");
		HX_STACK_LINE(121)
		tmp195->set(tmp196,tmp197);
		HX_STACK_LINE(121)
		rightFall;
	}
	HX_STACK_LINE(122)
	{
		HX_STACK_LINE(122)
		::String tmp194 = leftJump->getName();		HX_STACK_VAR(tmp194,"tmp194");
		HX_STACK_LINE(122)
		::String k = tmp194;		HX_STACK_VAR(k,"k");
		HX_STACK_LINE(122)
		::haxe::ds::StringMap tmp195 = this->animations;		HX_STACK_VAR(tmp195,"tmp195");
		HX_STACK_LINE(122)
		::String tmp196 = k;		HX_STACK_VAR(tmp196,"tmp196");
		HX_STACK_LINE(122)
		::actors::Animation tmp197 = leftJump;		HX_STACK_VAR(tmp197,"tmp197");
		HX_STACK_LINE(122)
		tmp195->set(tmp196,tmp197);
		HX_STACK_LINE(122)
		leftJump;
	}
	HX_STACK_LINE(123)
	{
		HX_STACK_LINE(123)
		::String tmp194 = leftFall->getName();		HX_STACK_VAR(tmp194,"tmp194");
		HX_STACK_LINE(123)
		::String k = tmp194;		HX_STACK_VAR(k,"k");
		HX_STACK_LINE(123)
		::haxe::ds::StringMap tmp195 = this->animations;		HX_STACK_VAR(tmp195,"tmp195");
		HX_STACK_LINE(123)
		::String tmp196 = k;		HX_STACK_VAR(tmp196,"tmp196");
		HX_STACK_LINE(123)
		::actors::Animation tmp197 = leftFall;		HX_STACK_VAR(tmp197,"tmp197");
		HX_STACK_LINE(123)
		tmp195->set(tmp196,tmp197);
		HX_STACK_LINE(123)
		leftFall;
	}
	HX_STACK_LINE(124)
	{
		HX_STACK_LINE(124)
		::String tmp194 = rightHurt->getName();		HX_STACK_VAR(tmp194,"tmp194");
		HX_STACK_LINE(124)
		::String k = tmp194;		HX_STACK_VAR(k,"k");
		HX_STACK_LINE(124)
		::haxe::ds::StringMap tmp195 = this->animations;		HX_STACK_VAR(tmp195,"tmp195");
		HX_STACK_LINE(124)
		::String tmp196 = k;		HX_STACK_VAR(tmp196,"tmp196");
		HX_STACK_LINE(124)
		::actors::Animation tmp197 = rightHurt;		HX_STACK_VAR(tmp197,"tmp197");
		HX_STACK_LINE(124)
		tmp195->set(tmp196,tmp197);
		HX_STACK_LINE(124)
		rightHurt;
	}
	HX_STACK_LINE(125)
	{
		HX_STACK_LINE(125)
		::String tmp194 = leftHurt->getName();		HX_STACK_VAR(tmp194,"tmp194");
		HX_STACK_LINE(125)
		::String k = tmp194;		HX_STACK_VAR(k,"k");
		HX_STACK_LINE(125)
		::haxe::ds::StringMap tmp195 = this->animations;		HX_STACK_VAR(tmp195,"tmp195");
		HX_STACK_LINE(125)
		::String tmp196 = k;		HX_STACK_VAR(tmp196,"tmp196");
		HX_STACK_LINE(125)
		::actors::Animation tmp197 = leftHurt;		HX_STACK_VAR(tmp197,"tmp197");
		HX_STACK_LINE(125)
		tmp195->set(tmp196,tmp197);
		HX_STACK_LINE(125)
		leftHurt;
	}
	HX_STACK_LINE(126)
	{
		HX_STACK_LINE(126)
		::String tmp194 = standingAttack->getName();		HX_STACK_VAR(tmp194,"tmp194");
		HX_STACK_LINE(126)
		::String k = tmp194;		HX_STACK_VAR(k,"k");
		HX_STACK_LINE(126)
		::haxe::ds::StringMap tmp195 = this->animations;		HX_STACK_VAR(tmp195,"tmp195");
		HX_STACK_LINE(126)
		::String tmp196 = k;		HX_STACK_VAR(tmp196,"tmp196");
		HX_STACK_LINE(126)
		::actors::Animation tmp197 = standingAttack;		HX_STACK_VAR(tmp197,"tmp197");
		HX_STACK_LINE(126)
		tmp195->set(tmp196,tmp197);
		HX_STACK_LINE(126)
		standingAttack;
	}
	HX_STACK_LINE(127)
	{
		HX_STACK_LINE(127)
		::String tmp194 = jumpingAttack->getName();		HX_STACK_VAR(tmp194,"tmp194");
		HX_STACK_LINE(127)
		::String k = tmp194;		HX_STACK_VAR(k,"k");
		HX_STACK_LINE(127)
		::haxe::ds::StringMap tmp195 = this->animations;		HX_STACK_VAR(tmp195,"tmp195");
		HX_STACK_LINE(127)
		::String tmp196 = k;		HX_STACK_VAR(tmp196,"tmp196");
		HX_STACK_LINE(127)
		::actors::Animation tmp197 = jumpingAttack;		HX_STACK_VAR(tmp197,"tmp197");
		HX_STACK_LINE(127)
		tmp195->set(tmp196,tmp197);
		HX_STACK_LINE(127)
		jumpingAttack;
	}
	HX_STACK_LINE(128)
	{
		HX_STACK_LINE(128)
		::String tmp194 = jumpingAttackStun->getName();		HX_STACK_VAR(tmp194,"tmp194");
		HX_STACK_LINE(128)
		::String k = tmp194;		HX_STACK_VAR(k,"k");
		HX_STACK_LINE(128)
		::haxe::ds::StringMap tmp195 = this->animations;		HX_STACK_VAR(tmp195,"tmp195");
		HX_STACK_LINE(128)
		::String tmp196 = k;		HX_STACK_VAR(tmp196,"tmp196");
		HX_STACK_LINE(128)
		::actors::Animation tmp197 = jumpingAttackStun;		HX_STACK_VAR(tmp197,"tmp197");
		HX_STACK_LINE(128)
		tmp195->set(tmp196,tmp197);
		HX_STACK_LINE(128)
		jumpingAttackStun;
	}
	HX_STACK_LINE(130)
	{
		HX_STACK_LINE(130)
		::String tmp194 = dashLeft->getName();		HX_STACK_VAR(tmp194,"tmp194");
		HX_STACK_LINE(130)
		::String k = tmp194;		HX_STACK_VAR(k,"k");
		HX_STACK_LINE(130)
		::haxe::ds::StringMap tmp195 = this->animations;		HX_STACK_VAR(tmp195,"tmp195");
		HX_STACK_LINE(130)
		::String tmp196 = k;		HX_STACK_VAR(tmp196,"tmp196");
		HX_STACK_LINE(130)
		::actors::Animation tmp197 = dashLeft;		HX_STACK_VAR(tmp197,"tmp197");
		HX_STACK_LINE(130)
		tmp195->set(tmp196,tmp197);
		HX_STACK_LINE(130)
		dashLeft;
	}
	HX_STACK_LINE(131)
	{
		HX_STACK_LINE(131)
		::String tmp194 = dashRight->getName();		HX_STACK_VAR(tmp194,"tmp194");
		HX_STACK_LINE(131)
		::String k = tmp194;		HX_STACK_VAR(k,"k");
		HX_STACK_LINE(131)
		::haxe::ds::StringMap tmp195 = this->animations;		HX_STACK_VAR(tmp195,"tmp195");
		HX_STACK_LINE(131)
		::String tmp196 = k;		HX_STACK_VAR(tmp196,"tmp196");
		HX_STACK_LINE(131)
		::actors::Animation tmp197 = dashRight;		HX_STACK_VAR(tmp197,"tmp197");
		HX_STACK_LINE(131)
		tmp195->set(tmp196,tmp197);
		HX_STACK_LINE(131)
		dashRight;
	}
	HX_STACK_LINE(132)
	{
		HX_STACK_LINE(132)
		::String tmp194 = dashRestLeft->getName();		HX_STACK_VAR(tmp194,"tmp194");
		HX_STACK_LINE(132)
		::String k = tmp194;		HX_STACK_VAR(k,"k");
		HX_STACK_LINE(132)
		::haxe::ds::StringMap tmp195 = this->animations;		HX_STACK_VAR(tmp195,"tmp195");
		HX_STACK_LINE(132)
		::String tmp196 = k;		HX_STACK_VAR(tmp196,"tmp196");
		HX_STACK_LINE(132)
		::actors::Animation tmp197 = dashRestLeft;		HX_STACK_VAR(tmp197,"tmp197");
		HX_STACK_LINE(132)
		tmp195->set(tmp196,tmp197);
		HX_STACK_LINE(132)
		dashRestLeft;
	}
	HX_STACK_LINE(133)
	{
		HX_STACK_LINE(133)
		::String tmp194 = dashRestRight->getName();		HX_STACK_VAR(tmp194,"tmp194");
		HX_STACK_LINE(133)
		::String k = tmp194;		HX_STACK_VAR(k,"k");
		HX_STACK_LINE(133)
		::haxe::ds::StringMap tmp195 = this->animations;		HX_STACK_VAR(tmp195,"tmp195");
		HX_STACK_LINE(133)
		::String tmp196 = k;		HX_STACK_VAR(tmp196,"tmp196");
		HX_STACK_LINE(133)
		::actors::Animation tmp197 = dashRestRight;		HX_STACK_VAR(tmp197,"tmp197");
		HX_STACK_LINE(133)
		tmp195->set(tmp196,tmp197);
		HX_STACK_LINE(133)
		dashRestRight;
	}
	HX_STACK_LINE(135)
	{
		HX_STACK_LINE(135)
		::String tmp194 = leftLaunch->getName();		HX_STACK_VAR(tmp194,"tmp194");
		HX_STACK_LINE(135)
		::String k = tmp194;		HX_STACK_VAR(k,"k");
		HX_STACK_LINE(135)
		::haxe::ds::StringMap tmp195 = this->animations;		HX_STACK_VAR(tmp195,"tmp195");
		HX_STACK_LINE(135)
		::String tmp196 = k;		HX_STACK_VAR(tmp196,"tmp196");
		HX_STACK_LINE(135)
		::actors::Animation tmp197 = leftLaunch;		HX_STACK_VAR(tmp197,"tmp197");
		HX_STACK_LINE(135)
		tmp195->set(tmp196,tmp197);
		HX_STACK_LINE(135)
		leftLaunch;
	}
	HX_STACK_LINE(136)
	{
		HX_STACK_LINE(136)
		::String tmp194 = rightLaunch->getName();		HX_STACK_VAR(tmp194,"tmp194");
		HX_STACK_LINE(136)
		::String k = tmp194;		HX_STACK_VAR(k,"k");
		HX_STACK_LINE(136)
		::haxe::ds::StringMap tmp195 = this->animations;		HX_STACK_VAR(tmp195,"tmp195");
		HX_STACK_LINE(136)
		::String tmp196 = k;		HX_STACK_VAR(tmp196,"tmp196");
		HX_STACK_LINE(136)
		::actors::Animation tmp197 = rightLaunch;		HX_STACK_VAR(tmp197,"tmp197");
		HX_STACK_LINE(136)
		tmp195->set(tmp196,tmp197);
		HX_STACK_LINE(136)
		rightLaunch;
	}
	HX_STACK_LINE(137)
	{
		HX_STACK_LINE(137)
		::String tmp194 = leftLaunchRest->getName();		HX_STACK_VAR(tmp194,"tmp194");
		HX_STACK_LINE(137)
		::String k = tmp194;		HX_STACK_VAR(k,"k");
		HX_STACK_LINE(137)
		::haxe::ds::StringMap tmp195 = this->animations;		HX_STACK_VAR(tmp195,"tmp195");
		HX_STACK_LINE(137)
		::String tmp196 = k;		HX_STACK_VAR(tmp196,"tmp196");
		HX_STACK_LINE(137)
		::actors::Animation tmp197 = leftLaunchRest;		HX_STACK_VAR(tmp197,"tmp197");
		HX_STACK_LINE(137)
		tmp195->set(tmp196,tmp197);
		HX_STACK_LINE(137)
		leftLaunchRest;
	}
	HX_STACK_LINE(138)
	{
		HX_STACK_LINE(138)
		::String tmp194 = rightLaunchRest->getName();		HX_STACK_VAR(tmp194,"tmp194");
		HX_STACK_LINE(138)
		::String k = tmp194;		HX_STACK_VAR(k,"k");
		HX_STACK_LINE(138)
		::haxe::ds::StringMap tmp195 = this->animations;		HX_STACK_VAR(tmp195,"tmp195");
		HX_STACK_LINE(138)
		::String tmp196 = k;		HX_STACK_VAR(tmp196,"tmp196");
		HX_STACK_LINE(138)
		::actors::Animation tmp197 = rightLaunchRest;		HX_STACK_VAR(tmp197,"tmp197");
		HX_STACK_LINE(138)
		tmp195->set(tmp196,tmp197);
		HX_STACK_LINE(138)
		rightLaunchRest;
	}
	HX_STACK_LINE(140)
	{
		HX_STACK_LINE(140)
		::String tmp194 = leftProjectile->getName();		HX_STACK_VAR(tmp194,"tmp194");
		HX_STACK_LINE(140)
		::String k = tmp194;		HX_STACK_VAR(k,"k");
		HX_STACK_LINE(140)
		::haxe::ds::StringMap tmp195 = this->animations;		HX_STACK_VAR(tmp195,"tmp195");
		HX_STACK_LINE(140)
		::String tmp196 = k;		HX_STACK_VAR(tmp196,"tmp196");
		HX_STACK_LINE(140)
		::actors::Animation tmp197 = leftProjectile;		HX_STACK_VAR(tmp197,"tmp197");
		HX_STACK_LINE(140)
		tmp195->set(tmp196,tmp197);
		HX_STACK_LINE(140)
		leftProjectile;
	}
	HX_STACK_LINE(141)
	{
		HX_STACK_LINE(141)
		::String tmp194 = rightProjectile->getName();		HX_STACK_VAR(tmp194,"tmp194");
		HX_STACK_LINE(141)
		::String k = tmp194;		HX_STACK_VAR(k,"k");
		HX_STACK_LINE(141)
		::haxe::ds::StringMap tmp195 = this->animations;		HX_STACK_VAR(tmp195,"tmp195");
		HX_STACK_LINE(141)
		::String tmp196 = k;		HX_STACK_VAR(tmp196,"tmp196");
		HX_STACK_LINE(141)
		::actors::Animation tmp197 = rightProjectile;		HX_STACK_VAR(tmp197,"tmp197");
		HX_STACK_LINE(141)
		tmp195->set(tmp196,tmp197);
		HX_STACK_LINE(141)
		rightProjectile;
	}
	HX_STACK_LINE(143)
	{
		HX_STACK_LINE(143)
		::actors::Animation tmp194 = this->deathAnimation;		HX_STACK_VAR(tmp194,"tmp194");
		HX_STACK_LINE(143)
		::String tmp195 = tmp194->getName();		HX_STACK_VAR(tmp195,"tmp195");
		HX_STACK_LINE(143)
		::String k = tmp195;		HX_STACK_VAR(k,"k");
		HX_STACK_LINE(143)
		::actors::Animation tmp196 = this->deathAnimation;		HX_STACK_VAR(tmp196,"tmp196");
		HX_STACK_LINE(143)
		::actors::Animation v = tmp196;		HX_STACK_VAR(v,"v");
		HX_STACK_LINE(143)
		::haxe::ds::StringMap tmp197 = this->animations;		HX_STACK_VAR(tmp197,"tmp197");
		HX_STACK_LINE(143)
		::String tmp198 = k;		HX_STACK_VAR(tmp198,"tmp198");
		HX_STACK_LINE(143)
		::actors::Animation tmp199 = v;		HX_STACK_VAR(tmp199,"tmp199");
		HX_STACK_LINE(143)
		tmp197->set(tmp198,tmp199);
		HX_STACK_LINE(143)
		v;
	}
	HX_STACK_LINE(145)
	this->currentAnimation = rightIdle;
	HX_STACK_LINE(148)
	Array< ::Dynamic > hits = Array_obj< ::Dynamic >::__new();		HX_STACK_VAR(hits,"hits");
	HX_STACK_LINE(149)
	int tmp194 = playerHeight;		HX_STACK_VAR(tmp194,"tmp194");
	HX_STACK_LINE(149)
	int tmp195 = (playerWidth - (int)8);		HX_STACK_VAR(tmp195,"tmp195");
	HX_STACK_LINE(149)
	::openfl::geom::Rectangle tmp196 = ::openfl::geom::Rectangle_obj::__new((int)4,tmp194,tmp195,(int)14);		HX_STACK_VAR(tmp196,"tmp196");
	HX_STACK_LINE(149)
	hits->push(tmp196);
	HX_STACK_LINE(150)
	::actors::ObjectMover tmp197 = ::actors::ObjectMover_obj::__new(((Float).5),((Float).1),(int)0,(int)60,(int)0,(int)10,(int)0,(int)60,(int)0,null(),null(),null());		HX_STACK_VAR(tmp197,"tmp197");
	HX_STACK_LINE(150)
	::actors::attacks::AbsorbAttack tmp198 = ::actors::attacks::AbsorbAttack_obj::__new(tmp197,hits,(int)60,(int)3);		HX_STACK_VAR(tmp198,"tmp198");
	HX_STACK_LINE(150)
	this->jumpAttack = tmp198;
	HX_STACK_LINE(152)
	hits = Array_obj< ::Dynamic >::__new();
	HX_STACK_LINE(153)
	::openfl::geom::Rectangle tmp199 = ::openfl::geom::Rectangle_obj::__new((int)-10,(int)0,(int)15,playerWidth);		HX_STACK_VAR(tmp199,"tmp199");
	HX_STACK_LINE(153)
	hits->push(tmp199);
	HX_STACK_LINE(154)
	int tmp200 = (playerWidth - (int)5);		HX_STACK_VAR(tmp200,"tmp200");
	HX_STACK_LINE(154)
	int tmp201 = playerWidth;		HX_STACK_VAR(tmp201,"tmp201");
	HX_STACK_LINE(154)
	::openfl::geom::Rectangle tmp202 = ::openfl::geom::Rectangle_obj::__new(tmp200,(int)0,(int)15,tmp201);		HX_STACK_VAR(tmp202,"tmp202");
	HX_STACK_LINE(154)
	hits->push(tmp202);
	HX_STACK_LINE(155)
	::String tmp203 = standingAttack->getName();		HX_STACK_VAR(tmp203,"tmp203");
	HX_STACK_LINE(155)
	::actors::attacks::Attack tmp204 = ::actors::attacks::Attack_obj::__new(null(),hits,(int)20,(int)1,(int)0,tmp203,HX_HCSTRING("","\x00","\x00","\x00","\x00"),true,(int)10);		HX_STACK_VAR(tmp204,"tmp204");
	HX_STACK_LINE(155)
	this->standAttack = tmp204;
	HX_STACK_LINE(157)
	::openfl::display::Bitmap tmp205 = ::Main_obj::getBitmapAsset(HX_HCSTRING("assets/Player.png","\x88","\x62","\xd3","\x2e"));		HX_STACK_VAR(tmp205,"tmp205");
	HX_STACK_LINE(157)
	::haxe::ds::StringMap tmp206 = this->animations;		HX_STACK_VAR(tmp206,"tmp206");
	HX_STACK_LINE(157)
	::actors::ObjectMover tmp207 = mover;		HX_STACK_VAR(tmp207,"tmp207");
	HX_STACK_LINE(157)
	int tmp208 = playerWidth;		HX_STACK_VAR(tmp208,"tmp208");
	HX_STACK_LINE(157)
	int tmp209 = playerHeight;		HX_STACK_VAR(tmp209,"tmp209");
	HX_STACK_LINE(157)
	super::__construct(hx::ObjectPtr<OBJ_>(this),tmp205,true,tmp206,tmp207,tmp208,tmp209);
	HX_STACK_LINE(159)
	this->maxHealth = (int)3;
	HX_STACK_LINE(160)
	this->health = (int)3;
	HX_STACK_LINE(162)
	::openfl::geom::Rectangle tmp210 = ::openfl::geom::Rectangle_obj::__new((int)4,(int)6,(int)24,(int)30);		HX_STACK_VAR(tmp210,"tmp210");
	HX_STACK_LINE(162)
	this->collisionBounds = tmp210;
	HX_STACK_LINE(163)
	::openfl::geom::Rectangle tmp211 = this->collisionBounds;		HX_STACK_VAR(tmp211,"tmp211");
	HX_STACK_LINE(163)
	this->originalBounds = tmp211;
}
;
	return null();
}

//Player_obj::~Player_obj() { }

Dynamic Player_obj::__CreateEmpty() { return  new Player_obj; }
hx::ObjectPtr< Player_obj > Player_obj::__new()
{  hx::ObjectPtr< Player_obj > _result_ = new Player_obj();
	_result_->__construct();
	return _result_;}

Dynamic Player_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Player_obj > _result_ = new Player_obj();
	_result_->__construct();
	return _result_;}

Void Player_obj::updatePlayer( ){
{
		HX_STACK_FRAME("actors.Player","updatePlayer",0x6d3826c7,"actors.Player.updatePlayer","actors/Player.hx",166,0xa6e3592c)
		HX_STACK_THIS(this)
		HX_STACK_LINE(170)
		this->centerScreen();
		HX_STACK_LINE(171)
		this->handleAnimation();
		HX_STACK_LINE(173)
		Float tmp = this->get_y();		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(173)
		::maps::AreaMap tmp1 = this->currentMap;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(173)
		int tmp2 = tmp1->getMapHeight();		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(173)
		bool tmp3 = (tmp > tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(173)
		if ((tmp3)){
			HX_STACK_LINE(174)
			this->kill();
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Player_obj,updatePlayer,(void))

bool Player_obj::isStunned( ){
	HX_STACK_FRAME("actors.Player","isStunned",0x5f9d43ec,"actors.Player.isStunned","actors/Player.hx",178,0xa6e3592c)
	HX_STACK_THIS(this)
	HX_STACK_LINE(179)
	int tmp = this->stunCount;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(179)
	bool tmp1 = (tmp <= (int)0);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(179)
	if ((tmp1)){
		HX_STACK_LINE(179)
		return false;
	}
	HX_STACK_LINE(180)
	return true;
}


HX_DEFINE_DYNAMIC_FUNC0(Player_obj,isStunned,return )

Void Player_obj::handleAnimation( ){
{
		HX_STACK_FRAME("actors.Player","handleAnimation",0x10f92ddf,"actors.Player.handleAnimation","actors/Player.hx",183,0xa6e3592c)
		HX_STACK_THIS(this)
		HX_STACK_LINE(185)
		::actors::Animation tmp = this->currentAnimation;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(185)
		::actors::Animation tmp1 = this->deathAnimation;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(185)
		bool tmp2 = (tmp == tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(185)
		if ((tmp2)){
			HX_STACK_LINE(186)
			return null();
		}
		HX_STACK_LINE(187)
		int tmp3 = this->stunCount;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(187)
		bool tmp4 = (tmp3 > (int)0);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(187)
		bool tmp5;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(187)
		if ((tmp4)){
			HX_STACK_LINE(187)
			tmp5 = this->invulnerable;
		}
		else{
			HX_STACK_LINE(187)
			tmp5 = false;
		}
		HX_STACK_LINE(187)
		if ((tmp5)){
			HX_STACK_LINE(188)
			return null();
		}
		HX_STACK_LINE(189)
		::actors::attacks::Attack tmp6 = this->attackBehavior;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(189)
		bool tmp7 = (tmp6 != null());		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(189)
		if ((tmp7)){
			HX_STACK_LINE(191)
			::actors::attacks::Attack tmp8 = this->attackBehavior;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(191)
			bool tmp9 = tmp8->hasAnimation();		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(191)
			if ((tmp9)){
				HX_STACK_LINE(192)
				::actors::attacks::Attack tmp10 = this->attackBehavior;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(192)
				::String tmp11 = tmp10->getAnimation();		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(192)
				this->setAnimation(tmp11);
				HX_STACK_LINE(193)
				return null();
			}
		}
		HX_STACK_LINE(196)
		int tmp8 = this->stunCount;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(196)
		bool tmp9 = (tmp8 > (int)0);		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(196)
		bool tmp10;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(196)
		if ((tmp9)){
			HX_STACK_LINE(196)
			::actors::Animation tmp11 = this->currentAnimation;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(196)
			::actors::Animation tmp12 = tmp11;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(196)
			::String tmp13 = tmp12->getName();		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(196)
			::String tmp14 = tmp13;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(196)
			int tmp15 = tmp14.indexOf(HX_HCSTRING("Rest","\x34","\x87","\x80","\x36"),null());		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(196)
			int tmp16 = tmp15;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(196)
			tmp10 = (tmp16 >= (int)0);
		}
		else{
			HX_STACK_LINE(196)
			tmp10 = false;
		}
		HX_STACK_LINE(196)
		if ((tmp10)){
			HX_STACK_LINE(197)
			return null();
		}
		else{
			HX_STACK_LINE(198)
			::actors::ObjectMover tmp11 = this->currentMover;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(198)
			bool tmp12 = tmp11->getIsGrounded();		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(198)
			bool tmp13 = tmp12;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(198)
			bool tmp14 = !(tmp13);		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(198)
			bool tmp15;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(198)
			if ((tmp14)){
				HX_STACK_LINE(198)
				::actors::ObjectMover tmp16 = this->currentMover;		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(198)
				::actors::ObjectMover tmp17 = tmp16;		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(198)
				Float tmp18 = tmp17->getYVel();		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(198)
				Float tmp19 = tmp18;		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(198)
				tmp15 = (tmp19 > (int)0);
			}
			else{
				HX_STACK_LINE(198)
				tmp15 = false;
			}
			HX_STACK_LINE(198)
			if ((tmp15)){
				HX_STACK_LINE(199)
				this->setAnimation(HX_HCSTRING("Fall","\x9b","\xe8","\x8e","\x2e"));
			}
			else{
				HX_STACK_LINE(200)
				::actors::ObjectMover tmp16 = this->currentMover;		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(200)
				bool tmp17 = tmp16->getIsGrounded();		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(200)
				bool tmp18 = tmp17;		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(200)
				bool tmp19 = !(tmp18);		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(200)
				bool tmp20;		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(200)
				if ((tmp19)){
					HX_STACK_LINE(200)
					::actors::ObjectMover tmp21 = this->currentMover;		HX_STACK_VAR(tmp21,"tmp21");
					HX_STACK_LINE(200)
					::actors::ObjectMover tmp22 = tmp21;		HX_STACK_VAR(tmp22,"tmp22");
					HX_STACK_LINE(200)
					Float tmp23 = tmp22->getYVel();		HX_STACK_VAR(tmp23,"tmp23");
					HX_STACK_LINE(200)
					Float tmp24 = tmp23;		HX_STACK_VAR(tmp24,"tmp24");
					HX_STACK_LINE(200)
					tmp20 = (tmp24 < (int)0);
				}
				else{
					HX_STACK_LINE(200)
					tmp20 = false;
				}
				HX_STACK_LINE(200)
				if ((tmp20)){
					HX_STACK_LINE(201)
					this->setAnimation(HX_HCSTRING("Jump","\x0e","\xf1","\x42","\x31"));
				}
				else{
					HX_STACK_LINE(202)
					::actors::ObjectMover tmp21 = this->currentMover;		HX_STACK_VAR(tmp21,"tmp21");
					HX_STACK_LINE(202)
					Float tmp22 = tmp21->getXVel();		HX_STACK_VAR(tmp22,"tmp22");
					HX_STACK_LINE(202)
					Float tmp23 = ::Math_obj::abs(tmp22);		HX_STACK_VAR(tmp23,"tmp23");
					HX_STACK_LINE(202)
					bool tmp24 = (tmp23 < ((Float).1));		HX_STACK_VAR(tmp24,"tmp24");
					HX_STACK_LINE(202)
					if ((tmp24)){
						HX_STACK_LINE(203)
						this->setAnimation(HX_HCSTRING("Idle","\x34","\xd3","\x8c","\x30"));
					}
					else{
						HX_STACK_LINE(204)
						::actors::ObjectMover tmp25 = this->currentMover;		HX_STACK_VAR(tmp25,"tmp25");
						HX_STACK_LINE(204)
						Float tmp26 = tmp25->getXVel();		HX_STACK_VAR(tmp26,"tmp26");
						HX_STACK_LINE(204)
						Float tmp27 = ::Math_obj::abs(tmp26);		HX_STACK_VAR(tmp27,"tmp27");
						HX_STACK_LINE(204)
						bool tmp28 = (tmp27 > ((Float).1));		HX_STACK_VAR(tmp28,"tmp28");
						HX_STACK_LINE(204)
						if ((tmp28)){
							HX_STACK_LINE(205)
							this->setAnimation(HX_HCSTRING("Walk","\x29","\x89","\xcb","\x39"));
						}
					}
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Player_obj,handleAnimation,(void))

Void Player_obj::centerScreen( ){
{
		HX_STACK_FRAME("actors.Player","centerScreen",0x414df79e,"actors.Player.centerScreen","actors/Player.hx",208,0xa6e3592c)
		HX_STACK_THIS(this)
		HX_STACK_LINE(210)
		Float screenHeight = (int)360;		HX_STACK_VAR(screenHeight,"screenHeight");
		HX_STACK_LINE(211)
		Float screenWidth = (int)540;		HX_STACK_VAR(screenWidth,"screenWidth");
		HX_STACK_LINE(212)
		int scale = (int)1;		HX_STACK_VAR(scale,"scale");
		HX_STACK_LINE(213)
		Float tmp = (Float(screenHeight) / Float(scale));		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(213)
		screenHeight = tmp;
		HX_STACK_LINE(214)
		Float tmp1 = (Float(screenWidth) / Float(scale));		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(214)
		screenWidth = tmp1;
		HX_STACK_LINE(216)
		::maps::AreaMap tmp2 = this->currentMap;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(216)
		int tmp3 = tmp2->getMapWidth();		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(216)
		int mapWidth = tmp3;		HX_STACK_VAR(mapWidth,"mapWidth");
		HX_STACK_LINE(217)
		::maps::AreaMap tmp4 = this->currentMap;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(217)
		int tmp5 = tmp4->getMapHeight();		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(217)
		int mapHeight = tmp5;		HX_STACK_VAR(mapHeight,"mapHeight");
		HX_STACK_LINE(218)
		int tmp6 = (mapWidth * scale);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(218)
		mapWidth = tmp6;
		HX_STACK_LINE(219)
		int tmp7 = (mapHeight * scale);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(219)
		mapHeight = tmp7;
		HX_STACK_LINE(222)
		int tmp8 = mapWidth;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(222)
		Float tmp9 = (screenWidth * scale);		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(222)
		bool tmp10 = (tmp8 < tmp9);		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(222)
		if ((tmp10)){
			HX_STACK_LINE(223)
			::maps::AreaMap tmp11 = this->currentMap;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(223)
			Float tmp12 = (screenWidth * scale);		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(223)
			Float tmp13 = (Float(tmp12) / Float((int)2));		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(223)
			Float tmp14 = (Float(mapWidth) / Float((int)2));		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(223)
			Float tmp15 = (tmp13 - tmp14);		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(223)
			int tmp16 = scale;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(223)
			Float tmp17 = (Float(tmp15) / Float(tmp16));		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(223)
			tmp11->set_x(tmp17);
		}
		else{
			HX_STACK_LINE(227)
			::maps::AreaMap tmp11 = this->currentMap;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(227)
			Float tmp12 = (Float(screenWidth) / Float((int)2));		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(227)
			Float tmp13 = this->get_x();		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(227)
			Float tmp14 = (tmp12 - tmp13);		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(227)
			tmp11->set_x(tmp14);
			HX_STACK_LINE(229)
			::maps::AreaMap tmp15 = this->currentMap;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(229)
			Float tmp16 = tmp15->get_x();		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(229)
			bool tmp17 = (tmp16 > (int)0);		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(229)
			if ((tmp17)){
				HX_STACK_LINE(230)
				::maps::AreaMap tmp18 = this->currentMap;		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(230)
				tmp18->set_x((int)0);
			}
			else{
				HX_STACK_LINE(231)
				Float tmp18 = this->get_x();		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(231)
				Float tmp19 = (Float(screenWidth) / Float((int)2));		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(231)
				Float tmp20 = (tmp18 + tmp19);		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(231)
				int tmp21 = mapWidth;		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(231)
				bool tmp22 = (tmp20 > tmp21);		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(231)
				if ((tmp22)){
					HX_STACK_LINE(232)
					::maps::AreaMap tmp23 = this->currentMap;		HX_STACK_VAR(tmp23,"tmp23");
					HX_STACK_LINE(232)
					Float tmp24 = (screenWidth - mapWidth);		HX_STACK_VAR(tmp24,"tmp24");
					HX_STACK_LINE(232)
					tmp23->set_x(tmp24);
				}
			}
		}
		HX_STACK_LINE(236)
		int tmp11 = mapHeight;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(236)
		Float tmp12 = (screenHeight * scale);		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(236)
		bool tmp13 = (tmp11 < tmp12);		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(236)
		if ((tmp13)){
			HX_STACK_LINE(237)
			::maps::AreaMap tmp14 = this->currentMap;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(237)
			Float tmp15 = (screenHeight * scale);		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(237)
			Float tmp16 = (Float(tmp15) / Float((int)2));		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(237)
			Float tmp17 = (Float(mapHeight) / Float((int)2));		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(237)
			Float tmp18 = (tmp16 - tmp17);		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(237)
			int tmp19 = scale;		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(237)
			Float tmp20 = (Float(tmp18) / Float(tmp19));		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(237)
			tmp14->set_y(tmp20);
		}
		else{
			HX_STACK_LINE(241)
			::maps::AreaMap tmp14 = this->currentMap;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(241)
			Float tmp15 = (Float(screenHeight) / Float((int)2));		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(241)
			Float tmp16 = this->get_y();		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(241)
			Float tmp17 = (tmp15 - tmp16);		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(241)
			tmp14->set_y(tmp17);
			HX_STACK_LINE(243)
			::maps::AreaMap tmp18 = this->currentMap;		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(243)
			Float tmp19 = tmp18->get_y();		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(243)
			bool tmp20 = (tmp19 > (int)0);		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(243)
			if ((tmp20)){
				HX_STACK_LINE(244)
				::maps::AreaMap tmp21 = this->currentMap;		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(244)
				tmp21->set_y((int)0);
			}
			else{
				HX_STACK_LINE(245)
				Float tmp21 = this->get_y();		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(245)
				Float tmp22 = (Float(screenHeight) / Float((int)2));		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(245)
				Float tmp23 = (tmp21 + tmp22);		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(245)
				int tmp24 = mapHeight;		HX_STACK_VAR(tmp24,"tmp24");
				HX_STACK_LINE(245)
				bool tmp25 = (tmp23 > tmp24);		HX_STACK_VAR(tmp25,"tmp25");
				HX_STACK_LINE(245)
				if ((tmp25)){
					HX_STACK_LINE(246)
					::maps::AreaMap tmp26 = this->currentMap;		HX_STACK_VAR(tmp26,"tmp26");
					HX_STACK_LINE(246)
					Float tmp27 = (screenHeight - mapHeight);		HX_STACK_VAR(tmp27,"tmp27");
					HX_STACK_LINE(246)
					tmp26->set_y(tmp27);
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Player_obj,centerScreen,(void))

Void Player_obj::setGrounded( ){
{
		HX_STACK_FRAME("actors.Player","setGrounded",0x13a17e8b,"actors.Player.setGrounded","actors/Player.hx",253,0xa6e3592c)
		HX_STACK_THIS(this)
		HX_STACK_LINE(254)
		this->super::setGrounded();
		HX_STACK_LINE(256)
		::actors::ObjectMover tmp = this->currentMover;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(256)
		bool tmp1 = tmp->getIsGrounded();		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(256)
		bool tmp2;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(256)
		if ((tmp1)){
			HX_STACK_LINE(256)
			::actors::Animation tmp3 = this->currentAnimation;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(256)
			::actors::Animation tmp4 = tmp3;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(256)
			::String tmp5 = tmp4->getName();		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(256)
			::String tmp6 = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(256)
			int tmp7 = tmp6.indexOf(HX_HCSTRING("Fall","\x9b","\xe8","\x8e","\x2e"),null());		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(256)
			int tmp8 = tmp7;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(256)
			tmp2 = (tmp8 >= (int)0);
		}
		else{
			HX_STACK_LINE(256)
			tmp2 = false;
		}
		HX_STACK_LINE(256)
		if ((tmp2)){
			HX_STACK_LINE(257)
			::actors::ObjectMover tmp3 = this->currentMover;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(257)
			Float tmp4 = tmp3->getXVel();		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(257)
			Float tmp5 = ::Math_obj::abs(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(257)
			bool tmp6 = (tmp5 < ((Float)0.1));		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(257)
			if ((tmp6)){
				HX_STACK_LINE(258)
				this->setAnimation(HX_HCSTRING("Idle","\x34","\xd3","\x8c","\x30"));
			}
			else{
				HX_STACK_LINE(260)
				this->setAnimation(HX_HCSTRING("Walk","\x29","\x89","\xcb","\x39"));
			}
		}
	}
return null();
}


Void Player_obj::initiateAttack( ){
{
		HX_STACK_FRAME("actors.Player","initiateAttack",0x2cbd10be,"actors.Player.initiateAttack","actors/Player.hx",264,0xa6e3592c)
		HX_STACK_THIS(this)
		HX_STACK_LINE(265)
		bool tmp = this->isAttacking();		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(265)
		bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(265)
		bool tmp2;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(265)
		if ((tmp1)){
			HX_STACK_LINE(265)
			tmp2 = this->isStunned();
		}
		else{
			HX_STACK_LINE(265)
			tmp2 = true;
		}
		HX_STACK_LINE(265)
		if ((tmp2)){
			HX_STACK_LINE(265)
			return null();
		}
		HX_STACK_LINE(267)
		::actors::abilities::Ability tmp3 = this->ability;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(267)
		bool tmp4 = (tmp3 != null());		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(267)
		if ((tmp4)){
			HX_STACK_LINE(268)
			this->beginAbilityAttack();
			HX_STACK_LINE(269)
			::actors::abilities::Ability tmp5 = this->ability;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(269)
			::actors::ObjectMover tmp6 = this->currentMover;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(269)
			::actors::attacks::Attack tmp7 = tmp5->getAbilityAttack(hx::ObjectPtr<OBJ_>(this),tmp6);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(269)
			this->attackBehavior = tmp7;
		}
		else{
			HX_STACK_LINE(272)
			::actors::ObjectMover tmp5 = this->currentMover;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(272)
			bool tmp6 = tmp5->getIsGrounded();		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(272)
			if ((tmp6)){
				HX_STACK_LINE(273)
				::actors::attacks::Attack tmp7 = this->standAttack;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(273)
				this->attackBehavior = tmp7;
			}
			else{
				HX_STACK_LINE(275)
				::actors::attacks::Attack tmp7 = this->jumpAttack;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(275)
				this->attackBehavior = tmp7;
			}
		}
		HX_STACK_LINE(277)
		this->super::initiateAttack();
	}
return null();
}


bool Player_obj::isAttacking( ){
	HX_STACK_FRAME("actors.Player","isAttacking",0xf1c79ef3,"actors.Player.isAttacking","actors/Player.hx",279,0xa6e3592c)
	HX_STACK_THIS(this)
	HX_STACK_LINE(280)
	::actors::attacks::Attack tmp = this->attackBehavior;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(280)
	bool tmp1 = (tmp == null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(280)
	if ((tmp1)){
		HX_STACK_LINE(280)
		return false;
	}
	else{
		HX_STACK_LINE(281)
		::actors::attacks::Attack tmp2 = this->attackBehavior;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(281)
		bool tmp3 = tmp2->isActive();		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(281)
		return tmp3;
	}
	HX_STACK_LINE(280)
	return false;
}


HX_DEFINE_DYNAMIC_FUNC0(Player_obj,isAttacking,return )

Void Player_obj::endAttack( ){
{
		HX_STACK_FRAME("actors.Player","endAttack",0xc51bb566,"actors.Player.endAttack","actors/Player.hx",283,0xa6e3592c)
		HX_STACK_THIS(this)
		HX_STACK_LINE(285)
		this->resetAttackAnimation();
		HX_STACK_LINE(287)
		::actors::abilities::Ability tmp = this->ability;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(287)
		bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(287)
		if ((tmp1)){
			HX_STACK_LINE(288)
			this->endAbilityAttack();
		}
		HX_STACK_LINE(289)
		this->super::endAttack();
	}
return null();
}


Void Player_obj::resetAttackAnimation( ){
{
		HX_STACK_FRAME("actors.Player","resetAttackAnimation",0xf08d128a,"actors.Player.resetAttackAnimation","actors/Player.hx",291,0xa6e3592c)
		HX_STACK_THIS(this)
		HX_STACK_LINE(292)
		::actors::attacks::Attack tmp = this->attackBehavior;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(292)
		bool tmp1 = (tmp == null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(292)
		if ((tmp1)){
			HX_STACK_LINE(292)
			return null();
		}
		HX_STACK_LINE(294)
		::actors::attacks::Attack tmp2 = this->attackBehavior;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(294)
		bool tmp3 = tmp2->hasAnimation();		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(294)
		if ((tmp3)){
			HX_STACK_LINE(295)
			::actors::Animation tmp4 = this->currentAnimation;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(295)
			tmp4->resetAnimation();
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Player_obj,resetAttackAnimation,(void))

Void Player_obj::beginAbilityAttack( ){
{
		HX_STACK_FRAME("actors.Player","beginAbilityAttack",0x0d157d66,"actors.Player.beginAbilityAttack","actors/Player.hx",298,0xa6e3592c)
		HX_STACK_THIS(this)
		HX_STACK_LINE(299)
		::actors::abilities::Ability tmp = this->ability;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(299)
		int tmp1 = tmp->getAbilityHeight();		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(299)
		bool tmp2 = (tmp1 != (int)-1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(299)
		if ((tmp2)){
			HX_STACK_LINE(300)
			::actors::abilities::Ability tmp3 = this->ability;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(300)
			int tmp4 = tmp3->getAbilityHeight();		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(300)
			this->actorHeight = tmp4;
		}
		HX_STACK_LINE(301)
		::actors::abilities::Ability tmp3 = this->ability;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(301)
		int tmp4 = tmp3->getAbilityWidth();		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(301)
		bool tmp5 = (tmp4 != (int)-1);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(301)
		if ((tmp5)){
			HX_STACK_LINE(302)
			::actors::abilities::Ability tmp6 = this->ability;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(302)
			int tmp7 = tmp6->getAbilityWidth();		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(302)
			this->actorWidth = tmp7;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Player_obj,beginAbilityAttack,(void))

Void Player_obj::endAbilityAttack( ){
{
		HX_STACK_FRAME("actors.Player","endAbilityAttack",0x23f54334,"actors.Player.endAbilityAttack","actors/Player.hx",304,0xa6e3592c)
		HX_STACK_THIS(this)
		HX_STACK_LINE(305)
		int tmp = this->originalActorHeight;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(305)
		this->actorHeight = tmp;
		HX_STACK_LINE(306)
		int tmp1 = this->originalActorWidth;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(306)
		this->actorWidth = tmp1;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Player_obj,endAbilityAttack,(void))

Void Player_obj::calculateDamage( ::maps::mapobjects::MapObject source){
{
		HX_STACK_FRAME("actors.Player","calculateDamage",0xca674218,"actors.Player.calculateDamage","actors/Player.hx",309,0xa6e3592c)
		HX_STACK_THIS(this)
		HX_STACK_ARG(source,"source")
		HX_STACK_LINE(311)
		int tmp = this->health;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(311)
		bool tmp1 = (tmp <= (int)0);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(311)
		if ((tmp1)){
			HX_STACK_LINE(312)
			this->kill();
		}
		else{
			HX_STACK_LINE(315)
			this->set_alpha(((Float).7));
			HX_STACK_LINE(316)
			this->invulnerable = true;
			HX_STACK_LINE(317)
			int tmp2 = this->invulDuration;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(317)
			Float tmp3 = (Float(tmp2) / Float((int)4));		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(317)
			int tmp4 = ::Math_obj::round(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(317)
			this->stunLock(tmp4);
			HX_STACK_LINE(318)
			::maps::mapobjects::MapObject tmp5 = source;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(318)
			this->damageKnockback(tmp5);
			HX_STACK_LINE(319)
			this->setAnimation(HX_HCSTRING("Hurt","\x2f","\x88","\xf0","\x2f"));
		}
	}
return null();
}


bool Player_obj::takeProjectileDamage( ::actors::attacks::Projectile projectile){
	HX_STACK_FRAME("actors.Player","takeProjectileDamage",0x4dd00b1c,"actors.Player.takeProjectileDamage","actors/Player.hx",324,0xa6e3592c)
	HX_STACK_THIS(this)
	HX_STACK_ARG(projectile,"projectile")
	HX_STACK_LINE(325)
	::actors::attacks::Projectile tmp = projectile;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(325)
	bool tmp1 = ::Std_obj::is(tmp,hx::ClassOf< ::actors::attacks::EnemyProjectile >());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(325)
	if ((tmp1)){
		HX_STACK_LINE(326)
		::actors::attacks::Projectile tmp2 = projectile;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(326)
		bool tmp3 = this->super::takeProjectileDamage(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(326)
		return tmp3;
	}
	HX_STACK_LINE(327)
	return false;
}


Void Player_obj::kill( ){
{
		HX_STACK_FRAME("actors.Player","kill",0x697e2f1b,"actors.Player.kill","actors/Player.hx",331,0xa6e3592c)
		HX_STACK_THIS(this)
		HX_STACK_LINE(332)
		this->removeAbility();
		HX_STACK_LINE(333)
		::actors::ObjectMover tmp = this->currentMover;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(333)
		tmp->freeze();
		HX_STACK_LINE(334)
		this->stunCount = (int)60;
		HX_STACK_LINE(335)
		this->super::kill();
	}
return null();
}


Void Player_obj::handleDeath( ){
{
		HX_STACK_FRAME("actors.Player","handleDeath",0xdc4d848f,"actors.Player.handleDeath","actors/Player.hx",337,0xa6e3592c)
		HX_STACK_THIS(this)
		HX_STACK_LINE(338)
		::maps::AreaMap tmp = this->currentMap;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(338)
		::maps::mapobjects::MapObject tmp1 = tmp->getCurrentCheckpoint();		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(338)
		::maps::mapobjects::MapObject checkpoint = tmp1;		HX_STACK_VAR(checkpoint,"checkpoint");
		HX_STACK_LINE(339)
		bool tmp2 = (checkpoint == null());		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(339)
		if ((tmp2)){
			HX_STACK_LINE(339)
			::maps::AreaMap tmp3 = this->currentMap;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(339)
			::maps::mapobjects::Checkpoint tmp4 = tmp3->getStartPoint();		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(339)
			checkpoint = tmp4;
		}
		HX_STACK_LINE(341)
		int tmp3 = this->maxHealth;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(341)
		this->health = tmp3;
		HX_STACK_LINE(342)
		Float tmp4 = checkpoint->get_x();		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(342)
		Float tmp5 = (tmp4 + (int)6);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(342)
		this->set_x(tmp5);
		HX_STACK_LINE(343)
		Float tmp6 = checkpoint->get_y();		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(343)
		Float tmp7 = (tmp6 - (int)4);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(343)
		this->set_y(tmp7);
		HX_STACK_LINE(344)
		::maps::AreaMap tmp8 = this->currentMap;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(344)
		tmp8->resetMap();
		HX_STACK_LINE(345)
		::actors::ObjectMover tmp9 = this->currentMover;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(345)
		tmp9->freeze();
		HX_STACK_LINE(346)
		this->setAnimation(HX_HCSTRING("Idle","\x34","\xd3","\x8c","\x30"));
		HX_STACK_LINE(347)
		this->stunCount = (int)0;
	}
return null();
}


Void Player_obj::absorbAbility( ::actors::enemies::Enemy enemy){
{
		HX_STACK_FRAME("actors.Player","absorbAbility",0xfb550160,"actors.Player.absorbAbility","actors/Player.hx",350,0xa6e3592c)
		HX_STACK_THIS(this)
		HX_STACK_ARG(enemy,"enemy")
		HX_STACK_LINE(352)
		::actors::enemies::Enemy tmp = enemy;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(352)
		bool tmp1 = ::Std_obj::is(tmp,hx::ClassOf< ::actors::enemies::DashEnemy >());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(352)
		if ((tmp1)){
			HX_STACK_LINE(353)
			::actors::abilities::DashAbility tmp2 = ::actors::abilities::DashAbility_obj::__new();		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(353)
			this->ability = tmp2;
			HX_STACK_LINE(354)
			this->setAnimation(HX_HCSTRING("Idle","\x34","\xd3","\x8c","\x30"));
			HX_STACK_LINE(355)
			::openfl::display::Bitmap tmp3 = ::Main_obj::getBitmapAsset(HX_HCSTRING("assets/PlayerDash.png","\x7a","\xaf","\x2b","\x54"));		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(355)
			this->baseBmp = tmp3;
		}
		else{
			HX_STACK_LINE(357)
			::actors::enemies::Enemy tmp2 = enemy;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(357)
			bool tmp3 = ::Std_obj::is(tmp2,hx::ClassOf< ::actors::enemies::LaunchEnemy >());		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(357)
			if ((tmp3)){
				HX_STACK_LINE(358)
				::actors::abilities::LaunchAbility tmp4 = ::actors::abilities::LaunchAbility_obj::__new();		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(358)
				this->ability = tmp4;
				HX_STACK_LINE(359)
				this->setAnimation(HX_HCSTRING("Idle","\x34","\xd3","\x8c","\x30"));
				HX_STACK_LINE(360)
				::openfl::display::Bitmap tmp5 = ::Main_obj::getBitmapAsset(HX_HCSTRING("assets/PlayerLaunch.png","\x1b","\x76","\xba","\x53"));		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(360)
				this->baseBmp = tmp5;
			}
			else{
				HX_STACK_LINE(362)
				::actors::enemies::Enemy tmp4 = enemy;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(362)
				bool tmp5 = ::Std_obj::is(tmp4,hx::ClassOf< ::actors::enemies::ProjectileEnemy >());		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(362)
				if ((tmp5)){
					HX_STACK_LINE(363)
					::actors::abilities::ProjectileAbility tmp6 = ::actors::abilities::ProjectileAbility_obj::__new();		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(363)
					this->ability = tmp6;
					HX_STACK_LINE(364)
					this->setAnimation(HX_HCSTRING("Idle","\x34","\xd3","\x8c","\x30"));
					HX_STACK_LINE(365)
					::openfl::display::Bitmap tmp7 = ::Main_obj::getBitmapAsset(HX_HCSTRING("assets/PlayerProjectile.png","\x51","\xa7","\x52","\xb9"));		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(365)
					this->baseBmp = tmp7;
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Player_obj,absorbAbility,(void))

Void Player_obj::removeAbility( ){
{
		HX_STACK_FRAME("actors.Player","removeAbility",0x548216a9,"actors.Player.removeAbility","actors/Player.hx",368,0xa6e3592c)
		HX_STACK_THIS(this)
		HX_STACK_LINE(369)
		this->ability = null();
		HX_STACK_LINE(370)
		::openfl::display::Bitmap tmp = ::Main_obj::getBitmapAsset(HX_HCSTRING("assets/Player.png","\x88","\x62","\xd3","\x2e"));		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(370)
		this->baseBmp = tmp;
		HX_STACK_LINE(371)
		this->setAnimation(HX_HCSTRING("Idle","\x34","\xd3","\x8c","\x30"));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Player_obj,removeAbility,(void))

Void Player_obj::checkKeysDown( ::openfl::events::KeyboardEvent key){
{
		HX_STACK_FRAME("actors.Player","checkKeysDown",0xcc58c641,"actors.Player.checkKeysDown","actors/Player.hx",375,0xa6e3592c)
		HX_STACK_THIS(this)
		HX_STACK_ARG(key,"key")
		HX_STACK_LINE(376)
		bool tmp = this->isStunned();		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(376)
		if ((tmp)){
			HX_STACK_LINE(376)
			return null();
		}
		HX_STACK_LINE(378)
		bool tmp1 = (key->keyCode == (int)65);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(378)
		bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(378)
		bool tmp3;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(378)
		if ((tmp2)){
			HX_STACK_LINE(378)
			tmp3 = (key->keyCode == (int)37);
		}
		else{
			HX_STACK_LINE(378)
			tmp3 = true;
		}
		HX_STACK_LINE(378)
		if ((tmp3)){
			HX_STACK_LINE(379)
			this->goLeft();
		}
		else{
			HX_STACK_LINE(380)
			bool tmp4 = (key->keyCode == (int)68);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(380)
			bool tmp5 = !(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(380)
			bool tmp6;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(380)
			if ((tmp5)){
				HX_STACK_LINE(380)
				tmp6 = (key->keyCode == (int)39);
			}
			else{
				HX_STACK_LINE(380)
				tmp6 = true;
			}
			HX_STACK_LINE(380)
			if ((tmp6)){
				HX_STACK_LINE(381)
				this->goRight();
			}
			else{
				HX_STACK_LINE(382)
				bool tmp7 = (key->keyCode == (int)74);		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(382)
				if ((tmp7)){
					HX_STACK_LINE(383)
					this->initiateAttack();
				}
			}
		}
		HX_STACK_LINE(385)
		bool tmp4 = (key->keyCode == (int)32);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(385)
		if ((tmp4)){
			HX_STACK_LINE(386)
			this->jump();
		}
		HX_STACK_LINE(388)
		bool tmp5 = (key->keyCode == (int)75);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(388)
		if ((tmp5)){
			HX_STACK_LINE(389)
			this->removeAbility();
		}
		HX_STACK_LINE(391)
		bool tmp6 = (key->keyCode == (int)38);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(391)
		bool tmp7 = !(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(391)
		bool tmp8;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(391)
		if ((tmp7)){
			HX_STACK_LINE(391)
			tmp8 = (key->keyCode == (int)87);
		}
		else{
			HX_STACK_LINE(391)
			tmp8 = true;
		}
		HX_STACK_LINE(391)
		if ((tmp8)){
			HX_STACK_LINE(392)
			int tmp9 = this->maxHealth;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(392)
			this->health = tmp9;
			HX_STACK_LINE(393)
			::maps::AreaMap tmp10 = this->currentMap;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(393)
			tmp10->updateEndPortal(hx::ObjectPtr<OBJ_>(this));
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Player_obj,checkKeysDown,(void))

Void Player_obj::checkKeysUp( ::openfl::events::KeyboardEvent key){
{
		HX_STACK_FRAME("actors.Player","checkKeysUp",0x74f1ae7a,"actors.Player.checkKeysUp","actors/Player.hx",396,0xa6e3592c)
		HX_STACK_THIS(this)
		HX_STACK_ARG(key,"key")
		HX_STACK_LINE(398)
		bool tmp = (key->keyCode == (int)65);		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(398)
		bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(398)
		bool tmp2;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(398)
		if ((tmp1)){
			HX_STACK_LINE(398)
			tmp2 = (key->keyCode == (int)37);
		}
		else{
			HX_STACK_LINE(398)
			tmp2 = true;
		}
		HX_STACK_LINE(398)
		if ((tmp2)){
			HX_STACK_LINE(399)
			this->stopLeft();
		}
		else{
			HX_STACK_LINE(400)
			bool tmp3 = (key->keyCode == (int)68);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(400)
			bool tmp4 = !(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(400)
			bool tmp5;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(400)
			if ((tmp4)){
				HX_STACK_LINE(400)
				tmp5 = (key->keyCode == (int)39);
			}
			else{
				HX_STACK_LINE(400)
				tmp5 = true;
			}
			HX_STACK_LINE(400)
			if ((tmp5)){
				HX_STACK_LINE(401)
				this->stopRight();
			}
			else{
				HX_STACK_LINE(402)
				bool tmp6 = (key->keyCode == (int)74);		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(402)
				if ((tmp6)){
					HX_STACK_LINE(403)
					this->stopHoldAttack();
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Player_obj,checkKeysUp,(void))

Void Player_obj::stopHoldAttack( ){
{
		HX_STACK_FRAME("actors.Player","stopHoldAttack",0xbd796ac6,"actors.Player.stopHoldAttack","actors/Player.hx",405,0xa6e3592c)
		HX_STACK_THIS(this)
		HX_STACK_LINE(406)
		::actors::attacks::Attack tmp = this->attackBehavior;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(406)
		bool tmp1 = (tmp == null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(406)
		bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(406)
		bool tmp3;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(406)
		if ((tmp2)){
			HX_STACK_LINE(406)
			::actors::attacks::Attack tmp4 = this->attackBehavior;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(406)
			::actors::attacks::Attack tmp5 = tmp4;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(406)
			bool tmp6 = tmp5->isActive();		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(406)
			bool tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(406)
			bool tmp8 = tmp7;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(406)
			tmp3 = !(tmp8);
		}
		else{
			HX_STACK_LINE(406)
			tmp3 = true;
		}
		HX_STACK_LINE(406)
		if ((tmp3)){
			HX_STACK_LINE(406)
			return null();
		}
		HX_STACK_LINE(408)
		::actors::attacks::Attack tmp4 = this->attackBehavior;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(408)
		int tmp5 = tmp4->getDuration();		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(408)
		bool tmp6 = (tmp5 < (int)0);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(408)
		if ((tmp6)){
			HX_STACK_LINE(409)
			this->endAttack();
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Player_obj,stopHoldAttack,(void))

Void Player_obj::goLeft( ){
{
		HX_STACK_FRAME("actors.Player","goLeft",0x2e8aab0c,"actors.Player.goLeft","actors/Player.hx",413,0xa6e3592c)
		HX_STACK_THIS(this)
		HX_STACK_LINE(413)
		this->super::goLeft();
	}
return null();
}


Void Player_obj::goRight( ){
{
		HX_STACK_FRAME("actors.Player","goRight",0x01d80d37,"actors.Player.goRight","actors/Player.hx",416,0xa6e3592c)
		HX_STACK_THIS(this)
		HX_STACK_LINE(416)
		this->super::goRight();
	}
return null();
}


Void Player_obj::stopLeft( ){
{
		HX_STACK_FRAME("actors.Player","stopLeft",0xa7c89f26,"actors.Player.stopLeft","actors/Player.hx",419,0xa6e3592c)
		HX_STACK_THIS(this)
		HX_STACK_LINE(419)
		this->super::stopLeft();
	}
return null();
}


Void Player_obj::stopRight( ){
{
		HX_STACK_FRAME("actors.Player","stopRight",0x9ecfafdd,"actors.Player.stopRight","actors/Player.hx",423,0xa6e3592c)
		HX_STACK_THIS(this)
		HX_STACK_LINE(423)
		this->super::stopRight();
	}
return null();
}


Void Player_obj::jump( ){
{
		HX_STACK_FRAME("actors.Player","jump",0x68de146b,"actors.Player.jump","actors/Player.hx",426,0xa6e3592c)
		HX_STACK_THIS(this)
		HX_STACK_LINE(428)
		::actors::attacks::Attack tmp = this->attackBehavior;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(428)
		::actors::attacks::Attack tmp1 = this->standAttack;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(428)
		bool tmp2 = (tmp == tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(428)
		if ((tmp2)){
			HX_STACK_LINE(429)
			return null();
		}
		HX_STACK_LINE(431)
		this->super::jump();
		HX_STACK_LINE(433)
		::actors::ObjectMover tmp3 = this->currentMover;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(433)
		bool tmp4 = tmp3->getIsGrounded();		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(433)
		bool tmp5 = !(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(433)
		if ((tmp5)){
			HX_STACK_LINE(434)
			this->setAnimation(HX_HCSTRING("Jump","\x0e","\xf1","\x42","\x31"));
		}
	}
return null();
}


Void Player_obj::setAnimation( ::String action){
{
		HX_STACK_FRAME("actors.Player","setAnimation",0xa540437f,"actors.Player.setAnimation","actors/Player.hx",437,0xa6e3592c)
		HX_STACK_THIS(this)
		HX_STACK_ARG(action,"action")
		HX_STACK_LINE(438)
		bool tmp = this->alignmentLeft;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(438)
		bool tmp1;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(438)
		if ((tmp)){
			HX_STACK_LINE(438)
			::String tmp2 = (HX_HCSTRING("Left","\x27","\x34","\x89","\x32") + action);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(438)
			::String tmp3 = tmp2;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(438)
			::String tmp4 = tmp3;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(438)
			::actors::Animation tmp5 = this->getAnimation(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(438)
			::actors::Animation tmp6 = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(438)
			tmp1 = (tmp6 != null());
		}
		else{
			HX_STACK_LINE(438)
			tmp1 = false;
		}
		HX_STACK_LINE(438)
		if ((tmp1)){
			HX_STACK_LINE(439)
			::String tmp2 = (HX_HCSTRING("Left","\x27","\x34","\x89","\x32") + action);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(439)
			::actors::Animation tmp3 = this->getAnimation(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(439)
			this->currentAnimation = tmp3;
		}
		else{
			HX_STACK_LINE(440)
			::String tmp2 = (HX_HCSTRING("Right","\xbc","\x7b","\x91","\x7c") + action);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(440)
			::actors::Animation tmp3 = this->getAnimation(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(440)
			bool tmp4 = (tmp3 != null());		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(440)
			if ((tmp4)){
				HX_STACK_LINE(441)
				::String tmp5 = (HX_HCSTRING("Right","\xbc","\x7b","\x91","\x7c") + action);		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(441)
				::actors::Animation tmp6 = this->getAnimation(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(441)
				this->currentAnimation = tmp6;
			}
			else{
				HX_STACK_LINE(443)
				::String tmp5 = action;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(443)
				::actors::Animation tmp6 = this->getAnimation(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(443)
				this->currentAnimation = tmp6;
			}
		}
	}
return null();
}



Player_obj::Player_obj()
{
}

void Player_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Player);
	HX_MARK_MEMBER_NAME(jumpAttack,"jumpAttack");
	HX_MARK_MEMBER_NAME(standAttack,"standAttack");
	HX_MARK_MEMBER_NAME(ability,"ability");
	::actors::Actor_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void Player_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(jumpAttack,"jumpAttack");
	HX_VISIT_MEMBER_NAME(standAttack,"standAttack");
	HX_VISIT_MEMBER_NAME(ability,"ability");
	::actors::Actor_obj::__Visit(HX_VISIT_ARG);
}

Dynamic Player_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"kill") ) { return kill_dyn(); }
		if (HX_FIELD_EQ(inName,"jump") ) { return jump_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"goLeft") ) { return goLeft_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"ability") ) { return ability; }
		if (HX_FIELD_EQ(inName,"goRight") ) { return goRight_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"stopLeft") ) { return stopLeft_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"isStunned") ) { return isStunned_dyn(); }
		if (HX_FIELD_EQ(inName,"endAttack") ) { return endAttack_dyn(); }
		if (HX_FIELD_EQ(inName,"stopRight") ) { return stopRight_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"jumpAttack") ) { return jumpAttack; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"standAttack") ) { return standAttack; }
		if (HX_FIELD_EQ(inName,"setGrounded") ) { return setGrounded_dyn(); }
		if (HX_FIELD_EQ(inName,"isAttacking") ) { return isAttacking_dyn(); }
		if (HX_FIELD_EQ(inName,"handleDeath") ) { return handleDeath_dyn(); }
		if (HX_FIELD_EQ(inName,"checkKeysUp") ) { return checkKeysUp_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"updatePlayer") ) { return updatePlayer_dyn(); }
		if (HX_FIELD_EQ(inName,"centerScreen") ) { return centerScreen_dyn(); }
		if (HX_FIELD_EQ(inName,"setAnimation") ) { return setAnimation_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"absorbAbility") ) { return absorbAbility_dyn(); }
		if (HX_FIELD_EQ(inName,"removeAbility") ) { return removeAbility_dyn(); }
		if (HX_FIELD_EQ(inName,"checkKeysDown") ) { return checkKeysDown_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"initiateAttack") ) { return initiateAttack_dyn(); }
		if (HX_FIELD_EQ(inName,"stopHoldAttack") ) { return stopHoldAttack_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"handleAnimation") ) { return handleAnimation_dyn(); }
		if (HX_FIELD_EQ(inName,"calculateDamage") ) { return calculateDamage_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"endAbilityAttack") ) { return endAbilityAttack_dyn(); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"beginAbilityAttack") ) { return beginAbilityAttack_dyn(); }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"resetAttackAnimation") ) { return resetAttackAnimation_dyn(); }
		if (HX_FIELD_EQ(inName,"takeProjectileDamage") ) { return takeProjectileDamage_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Player_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"ability") ) { ability=inValue.Cast< ::actors::abilities::Ability >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"jumpAttack") ) { jumpAttack=inValue.Cast< ::actors::attacks::Attack >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"standAttack") ) { standAttack=inValue.Cast< ::actors::attacks::Attack >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool Player_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	return false;
}

void Player_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("jumpAttack","\x56","\x9b","\xad","\xa7"));
	outFields->push(HX_HCSTRING("standAttack","\x3e","\x25","\xd5","\xd9"));
	outFields->push(HX_HCSTRING("ability","\xaa","\x61","\x61","\xad"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::actors::attacks::Attack*/ ,(int)offsetof(Player_obj,jumpAttack),HX_HCSTRING("jumpAttack","\x56","\x9b","\xad","\xa7")},
	{hx::fsObject /*::actors::attacks::Attack*/ ,(int)offsetof(Player_obj,standAttack),HX_HCSTRING("standAttack","\x3e","\x25","\xd5","\xd9")},
	{hx::fsObject /*::actors::abilities::Ability*/ ,(int)offsetof(Player_obj,ability),HX_HCSTRING("ability","\xaa","\x61","\x61","\xad")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("jumpAttack","\x56","\x9b","\xad","\xa7"),
	HX_HCSTRING("standAttack","\x3e","\x25","\xd5","\xd9"),
	HX_HCSTRING("ability","\xaa","\x61","\x61","\xad"),
	HX_HCSTRING("updatePlayer","\x4a","\x92","\x7c","\x37"),
	HX_HCSTRING("isStunned","\x89","\xd8","\x73","\xba"),
	HX_HCSTRING("handleAnimation","\x3c","\x96","\xa0","\x19"),
	HX_HCSTRING("centerScreen","\x21","\x63","\x92","\x0b"),
	HX_HCSTRING("setGrounded","\x68","\x34","\xbc","\xc0"),
	HX_HCSTRING("initiateAttack","\x01","\xa3","\x95","\x61"),
	HX_HCSTRING("isAttacking","\xd0","\x54","\xe2","\x9e"),
	HX_HCSTRING("endAttack","\x03","\x4a","\xf2","\x1f"),
	HX_HCSTRING("resetAttackAnimation","\x0d","\x39","\x3d","\x77"),
	HX_HCSTRING("beginAbilityAttack","\x29","\xed","\x77","\xa2"),
	HX_HCSTRING("endAbilityAttack","\x37","\x2c","\xc9","\xad"),
	HX_HCSTRING("calculateDamage","\x75","\xaa","\x0e","\xd3"),
	HX_HCSTRING("takeProjectileDamage","\x9f","\x31","\x80","\xd4"),
	HX_HCSTRING("kill","\x9e","\xdf","\x09","\x47"),
	HX_HCSTRING("handleDeath","\x6c","\x3a","\x68","\x89"),
	HX_HCSTRING("absorbAbility","\x7d","\xa8","\xee","\x2c"),
	HX_HCSTRING("removeAbility","\xc6","\xbd","\x1b","\x86"),
	HX_HCSTRING("checkKeysDown","\x5e","\x6d","\xf2","\xfd"),
	HX_HCSTRING("checkKeysUp","\x57","\x64","\x0c","\x22"),
	HX_HCSTRING("stopHoldAttack","\x09","\xfd","\x51","\xf2"),
	HX_HCSTRING("goLeft","\x4f","\xc2","\xc5","\x4a"),
	HX_HCSTRING("goRight","\x94","\x50","\x51","\x99"),
	HX_HCSTRING("stopLeft","\x29","\x4d","\x6a","\x9a"),
	HX_HCSTRING("stopRight","\x7a","\x44","\xa6","\xf9"),
	HX_HCSTRING("jump","\xee","\xc4","\x69","\x46"),
	HX_HCSTRING("setAnimation","\x02","\xaf","\x84","\x6f"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Player_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Player_obj::__mClass,"__mClass");
};

#endif

hx::Class Player_obj::__mClass;

void Player_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("actors.Player","\x11","\x42","\x5c","\x26");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &Player_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Player_obj >;
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
