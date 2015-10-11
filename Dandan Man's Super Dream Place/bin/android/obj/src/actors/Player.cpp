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
	::actors::ObjectMover tmp6 = ::actors::ObjectMover_obj::__new(((Float).5),((Float).1),(int)0,(int)0,(int)0,(int)0,(int)60,(int)60,(int)2,null(),null());		HX_STACK_VAR(tmp6,"tmp6");
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
	::actors::Animation tmp13 = ::actors::Animation_obj::__new(HX_HCSTRING("RightIdle","\xf0","\xdc","\x4c","\x52"),(int)3,tmp7,tmp8,tmp9,Array_obj< ::Dynamic >::__new().Add(tmp10).Add(tmp11).Add(tmp12),null());		HX_STACK_VAR(tmp13,"tmp13");
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
	::actors::Animation tmp20 = ::actors::Animation_obj::__new(HX_HCSTRING("LeftIdle","\xdb","\xa6","\x60","\x26"),(int)3,tmp14,tmp15,tmp16,Array_obj< ::Dynamic >::__new().Add(tmp17).Add(tmp18).Add(tmp19),null());		HX_STACK_VAR(tmp20,"tmp20");
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
	::actors::Animation tmp29 = ::actors::Animation_obj::__new(HX_HCSTRING("RightWalk","\xe5","\x92","\x8b","\x5b"),(int)3,tmp22,tmp23,tmp24,Array_obj< ::Dynamic >::__new().Add(tmp25).Add(tmp26).Add(tmp27).Add(tmp28),null());		HX_STACK_VAR(tmp29,"tmp29");
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
	::actors::Animation tmp38 = ::actors::Animation_obj::__new(HX_HCSTRING("LeftWalk","\xd0","\x5c","\x9f","\x2f"),(int)3,tmp31,tmp32,tmp33,Array_obj< ::Dynamic >::__new().Add(tmp34).Add(tmp35).Add(tmp36).Add(tmp37),null());		HX_STACK_VAR(tmp38,"tmp38");
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
	::actors::Animation tmp44 = ::actors::Animation_obj::__new(HX_HCSTRING("RightJump","\xca","\xfa","\x02","\x53"),(int)0,tmp40,tmp41,tmp42,Array_obj< ::Dynamic >::__new().Add(tmp43),null());		HX_STACK_VAR(tmp44,"tmp44");
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
	::actors::Animation tmp51 = ::actors::Animation_obj::__new(HX_HCSTRING("LeftJump","\xb5","\xc4","\x16","\x27"),(int)0,tmp47,tmp48,tmp49,Array_obj< ::Dynamic >::__new().Add(tmp50),null());		HX_STACK_VAR(tmp51,"tmp51");
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
	::actors::Animation tmp58 = ::actors::Animation_obj::__new(HX_HCSTRING("RightFall","\x57","\xf2","\x4e","\x50"),(int)0,tmp54,tmp55,tmp56,Array_obj< ::Dynamic >::__new().Add(tmp57),null());		HX_STACK_VAR(tmp58,"tmp58");
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
	::actors::Animation tmp65 = ::actors::Animation_obj::__new(HX_HCSTRING("LeftFall","\x42","\xbc","\x62","\x24"),(int)0,tmp61,tmp62,tmp63,Array_obj< ::Dynamic >::__new().Add(tmp64),null());		HX_STACK_VAR(tmp65,"tmp65");
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
	::actors::Animation tmp72 = ::actors::Animation_obj::__new(HX_HCSTRING("RightHurt","\xeb","\x91","\xb0","\x51"),(int)1,tmp67,tmp68,tmp69,Array_obj< ::Dynamic >::__new().Add(tmp70).Add(tmp71),null());		HX_STACK_VAR(tmp72,"tmp72");
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
	::actors::Animation tmp80 = ::actors::Animation_obj::__new(HX_HCSTRING("LeftHurt","\xd6","\x5b","\xc4","\x25"),(int)1,tmp75,tmp76,tmp77,Array_obj< ::Dynamic >::__new().Add(tmp78).Add(tmp79),null());		HX_STACK_VAR(tmp80,"tmp80");
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
	HX_STACK_LINE(78)
	::actors::Animation tmp87 = ::actors::Animation_obj::__new(HX_HCSTRING("LeftDash","\x19","\x55","\x10","\x23"),(int)1,tmp82,tmp83,tmp84,Array_obj< ::Dynamic >::__new().Add(tmp85).Add(tmp86),null());		HX_STACK_VAR(tmp87,"tmp87");
	HX_STACK_LINE(78)
	::actors::Animation dashLeft = tmp87;		HX_STACK_VAR(dashLeft,"dashLeft");
	HX_STACK_LINE(81)
	int tmp88 = (playerWidth * (int)2);		HX_STACK_VAR(tmp88,"tmp88");
	HX_STACK_LINE(81)
	int tmp89 = (playerHeight * (int)6);		HX_STACK_VAR(tmp89,"tmp89");
	HX_STACK_LINE(81)
	::openfl::geom::Point tmp90 = ::openfl::geom::Point_obj::__new(tmp88,tmp89);		HX_STACK_VAR(tmp90,"tmp90");
	HX_STACK_LINE(81)
	int tmp91 = playerWidth;		HX_STACK_VAR(tmp91,"tmp91");
	HX_STACK_LINE(81)
	int tmp92 = playerHeight;		HX_STACK_VAR(tmp92,"tmp92");
	HX_STACK_LINE(81)
	::openfl::geom::Point tmp93 = ::openfl::geom::Point_obj::__new(null(),null());		HX_STACK_VAR(tmp93,"tmp93");
	HX_STACK_LINE(81)
	::openfl::geom::Point tmp94 = ::openfl::geom::Point_obj::__new((int)1,null());		HX_STACK_VAR(tmp94,"tmp94");
	HX_STACK_LINE(80)
	::actors::Animation tmp95 = ::actors::Animation_obj::__new(HX_HCSTRING("RightDash","\x2e","\x8b","\xfc","\x4e"),(int)1,tmp90,tmp91,tmp92,Array_obj< ::Dynamic >::__new().Add(tmp93).Add(tmp94),null());		HX_STACK_VAR(tmp95,"tmp95");
	HX_STACK_LINE(80)
	::actors::Animation dashRight = tmp95;		HX_STACK_VAR(dashRight,"dashRight");
	HX_STACK_LINE(83)
	int tmp96 = (playerHeight * (int)7);		HX_STACK_VAR(tmp96,"tmp96");
	HX_STACK_LINE(83)
	::openfl::geom::Point tmp97 = ::openfl::geom::Point_obj::__new((int)0,tmp96);		HX_STACK_VAR(tmp97,"tmp97");
	HX_STACK_LINE(83)
	int tmp98 = playerWidth;		HX_STACK_VAR(tmp98,"tmp98");
	HX_STACK_LINE(83)
	int tmp99 = playerHeight;		HX_STACK_VAR(tmp99,"tmp99");
	HX_STACK_LINE(83)
	::openfl::geom::Point tmp100 = ::openfl::geom::Point_obj::__new(null(),null());		HX_STACK_VAR(tmp100,"tmp100");
	HX_STACK_LINE(83)
	::openfl::geom::Point tmp101 = ::openfl::geom::Point_obj::__new((int)1,null());		HX_STACK_VAR(tmp101,"tmp101");
	HX_STACK_LINE(82)
	::actors::Animation tmp102 = ::actors::Animation_obj::__new(HX_HCSTRING("LeftDashRest","\xcd","\xdc","\xe3","\x95"),(int)5,tmp97,tmp98,tmp99,Array_obj< ::Dynamic >::__new().Add(tmp100).Add(tmp101),null());		HX_STACK_VAR(tmp102,"tmp102");
	HX_STACK_LINE(82)
	::actors::Animation dashRestLeft = tmp102;		HX_STACK_VAR(dashRestLeft,"dashRestLeft");
	HX_STACK_LINE(85)
	int tmp103 = (playerWidth * (int)2);		HX_STACK_VAR(tmp103,"tmp103");
	HX_STACK_LINE(85)
	int tmp104 = (playerHeight * (int)7);		HX_STACK_VAR(tmp104,"tmp104");
	HX_STACK_LINE(85)
	::openfl::geom::Point tmp105 = ::openfl::geom::Point_obj::__new(tmp103,tmp104);		HX_STACK_VAR(tmp105,"tmp105");
	HX_STACK_LINE(85)
	int tmp106 = playerWidth;		HX_STACK_VAR(tmp106,"tmp106");
	HX_STACK_LINE(85)
	int tmp107 = playerHeight;		HX_STACK_VAR(tmp107,"tmp107");
	HX_STACK_LINE(85)
	::openfl::geom::Point tmp108 = ::openfl::geom::Point_obj::__new(null(),null());		HX_STACK_VAR(tmp108,"tmp108");
	HX_STACK_LINE(85)
	::openfl::geom::Point tmp109 = ::openfl::geom::Point_obj::__new((int)1,null());		HX_STACK_VAR(tmp109,"tmp109");
	HX_STACK_LINE(84)
	::actors::Animation tmp110 = ::actors::Animation_obj::__new(HX_HCSTRING("RightDashRest","\x62","\x41","\x8d","\xe2"),(int)5,tmp105,tmp106,tmp107,Array_obj< ::Dynamic >::__new().Add(tmp108).Add(tmp109),null());		HX_STACK_VAR(tmp110,"tmp110");
	HX_STACK_LINE(84)
	::actors::Animation dashRestRight = tmp110;		HX_STACK_VAR(dashRestRight,"dashRestRight");
	HX_STACK_LINE(88)
	int tmp111 = (playerHeight * (int)6);		HX_STACK_VAR(tmp111,"tmp111");
	HX_STACK_LINE(88)
	::openfl::geom::Point tmp112 = ::openfl::geom::Point_obj::__new((int)0,tmp111);		HX_STACK_VAR(tmp112,"tmp112");
	HX_STACK_LINE(88)
	::openfl::geom::Point tmp113 = ::openfl::geom::Point_obj::__new(null(),null());		HX_STACK_VAR(tmp113,"tmp113");
	HX_STACK_LINE(88)
	::openfl::geom::Point tmp114 = ::openfl::geom::Point_obj::__new((int)1,null());		HX_STACK_VAR(tmp114,"tmp114");
	HX_STACK_LINE(87)
	::actors::Animation tmp115 = ::actors::Animation_obj::__new(HX_HCSTRING("LeftLaunch","\xba","\xc1","\xd4","\x7b"),(int)1,tmp112,(int)40,(int)40,Array_obj< ::Dynamic >::__new().Add(tmp113).Add(tmp114),null());		HX_STACK_VAR(tmp115,"tmp115");
	HX_STACK_LINE(87)
	::actors::Animation leftLaunch = tmp115;		HX_STACK_VAR(leftLaunch,"leftLaunch");
	HX_STACK_LINE(90)
	int tmp116 = (playerHeight * (int)6);		HX_STACK_VAR(tmp116,"tmp116");
	HX_STACK_LINE(90)
	::openfl::geom::Point tmp117 = ::openfl::geom::Point_obj::__new((int)0,tmp116);		HX_STACK_VAR(tmp117,"tmp117");
	HX_STACK_LINE(90)
	::openfl::geom::Point tmp118 = ::openfl::geom::Point_obj::__new(null(),null());		HX_STACK_VAR(tmp118,"tmp118");
	HX_STACK_LINE(90)
	::openfl::geom::Point tmp119 = ::openfl::geom::Point_obj::__new((int)1,null());		HX_STACK_VAR(tmp119,"tmp119");
	HX_STACK_LINE(89)
	::actors::Animation tmp120 = ::actors::Animation_obj::__new(HX_HCSTRING("RightLaunch","\x0f","\x67","\xca","\xa3"),(int)1,tmp117,(int)40,(int)40,Array_obj< ::Dynamic >::__new().Add(tmp118).Add(tmp119),null());		HX_STACK_VAR(tmp120,"tmp120");
	HX_STACK_LINE(89)
	::actors::Animation rightLaunch = tmp120;		HX_STACK_VAR(rightLaunch,"rightLaunch");
	HX_STACK_LINE(92)
	int tmp121 = (playerHeight * (int)6);		HX_STACK_VAR(tmp121,"tmp121");
	HX_STACK_LINE(92)
	int tmp122 = (tmp121 + (int)40);		HX_STACK_VAR(tmp122,"tmp122");
	HX_STACK_LINE(92)
	::openfl::geom::Point tmp123 = ::openfl::geom::Point_obj::__new((int)0,tmp122);		HX_STACK_VAR(tmp123,"tmp123");
	HX_STACK_LINE(92)
	int tmp124 = playerWidth;		HX_STACK_VAR(tmp124,"tmp124");
	HX_STACK_LINE(92)
	int tmp125 = playerHeight;		HX_STACK_VAR(tmp125,"tmp125");
	HX_STACK_LINE(92)
	::openfl::geom::Point tmp126 = ::openfl::geom::Point_obj::__new(null(),null());		HX_STACK_VAR(tmp126,"tmp126");
	HX_STACK_LINE(92)
	::openfl::geom::Point tmp127 = ::openfl::geom::Point_obj::__new((int)1,null());		HX_STACK_VAR(tmp127,"tmp127");
	HX_STACK_LINE(91)
	::actors::Animation tmp128 = ::actors::Animation_obj::__new(HX_HCSTRING("LeftLaunchRest","\xee","\xad","\xd1","\x9a"),(int)10,tmp123,tmp124,tmp125,Array_obj< ::Dynamic >::__new().Add(tmp126).Add(tmp127),null());		HX_STACK_VAR(tmp128,"tmp128");
	HX_STACK_LINE(91)
	::actors::Animation leftLaunchRest = tmp128;		HX_STACK_VAR(leftLaunchRest,"leftLaunchRest");
	HX_STACK_LINE(94)
	int tmp129 = (playerHeight * (int)6);		HX_STACK_VAR(tmp129,"tmp129");
	HX_STACK_LINE(94)
	int tmp130 = (tmp129 + (int)40);		HX_STACK_VAR(tmp130,"tmp130");
	HX_STACK_LINE(94)
	::openfl::geom::Point tmp131 = ::openfl::geom::Point_obj::__new((int)0,tmp130);		HX_STACK_VAR(tmp131,"tmp131");
	HX_STACK_LINE(94)
	int tmp132 = playerWidth;		HX_STACK_VAR(tmp132,"tmp132");
	HX_STACK_LINE(94)
	int tmp133 = playerHeight;		HX_STACK_VAR(tmp133,"tmp133");
	HX_STACK_LINE(94)
	::openfl::geom::Point tmp134 = ::openfl::geom::Point_obj::__new(null(),null());		HX_STACK_VAR(tmp134,"tmp134");
	HX_STACK_LINE(94)
	::openfl::geom::Point tmp135 = ::openfl::geom::Point_obj::__new((int)1,null());		HX_STACK_VAR(tmp135,"tmp135");
	HX_STACK_LINE(93)
	::actors::Animation tmp136 = ::actors::Animation_obj::__new(HX_HCSTRING("RightLaunchRest","\xc3","\x21","\x0d","\x70"),(int)10,tmp131,tmp132,tmp133,Array_obj< ::Dynamic >::__new().Add(tmp134).Add(tmp135),null());		HX_STACK_VAR(tmp136,"tmp136");
	HX_STACK_LINE(93)
	::actors::Animation rightLaunchRest = tmp136;		HX_STACK_VAR(rightLaunchRest,"rightLaunchRest");
	HX_STACK_LINE(97)
	int tmp137 = (playerHeight * (int)6);		HX_STACK_VAR(tmp137,"tmp137");
	HX_STACK_LINE(97)
	::openfl::geom::Point tmp138 = ::openfl::geom::Point_obj::__new((int)0,tmp137);		HX_STACK_VAR(tmp138,"tmp138");
	HX_STACK_LINE(97)
	int tmp139 = playerWidth;		HX_STACK_VAR(tmp139,"tmp139");
	HX_STACK_LINE(97)
	int tmp140 = playerHeight;		HX_STACK_VAR(tmp140,"tmp140");
	HX_STACK_LINE(97)
	::openfl::geom::Point tmp141 = ::openfl::geom::Point_obj::__new(null(),null());		HX_STACK_VAR(tmp141,"tmp141");
	HX_STACK_LINE(97)
	::openfl::geom::Point tmp142 = ::openfl::geom::Point_obj::__new((int)1,null());		HX_STACK_VAR(tmp142,"tmp142");
	HX_STACK_LINE(97)
	::openfl::geom::Point tmp143 = ::openfl::geom::Point_obj::__new((int)2,null());		HX_STACK_VAR(tmp143,"tmp143");
	HX_STACK_LINE(97)
	::openfl::geom::Point tmp144 = ::openfl::geom::Point_obj::__new((int)3,null());		HX_STACK_VAR(tmp144,"tmp144");
	HX_STACK_LINE(96)
	::actors::Animation tmp145 = ::actors::Animation_obj::__new(HX_HCSTRING("RightProjectile","\xc5","\x88","\xec","\x77"),(int)1,tmp138,tmp139,tmp140,Array_obj< ::Dynamic >::__new().Add(tmp141).Add(tmp142).Add(tmp143).Add(tmp144),(int)10);		HX_STACK_VAR(tmp145,"tmp145");
	HX_STACK_LINE(96)
	::actors::Animation rightProjectile = tmp145;		HX_STACK_VAR(rightProjectile,"rightProjectile");
	HX_STACK_LINE(99)
	int tmp146 = (playerHeight * (int)7);		HX_STACK_VAR(tmp146,"tmp146");
	HX_STACK_LINE(99)
	::openfl::geom::Point tmp147 = ::openfl::geom::Point_obj::__new((int)0,tmp146);		HX_STACK_VAR(tmp147,"tmp147");
	HX_STACK_LINE(99)
	int tmp148 = playerWidth;		HX_STACK_VAR(tmp148,"tmp148");
	HX_STACK_LINE(99)
	int tmp149 = playerHeight;		HX_STACK_VAR(tmp149,"tmp149");
	HX_STACK_LINE(99)
	::openfl::geom::Point tmp150 = ::openfl::geom::Point_obj::__new(null(),null());		HX_STACK_VAR(tmp150,"tmp150");
	HX_STACK_LINE(99)
	::openfl::geom::Point tmp151 = ::openfl::geom::Point_obj::__new((int)1,null());		HX_STACK_VAR(tmp151,"tmp151");
	HX_STACK_LINE(99)
	::openfl::geom::Point tmp152 = ::openfl::geom::Point_obj::__new((int)2,null());		HX_STACK_VAR(tmp152,"tmp152");
	HX_STACK_LINE(99)
	::openfl::geom::Point tmp153 = ::openfl::geom::Point_obj::__new((int)3,null());		HX_STACK_VAR(tmp153,"tmp153");
	HX_STACK_LINE(98)
	::actors::Animation tmp154 = ::actors::Animation_obj::__new(HX_HCSTRING("LeftProjectile","\xf0","\x14","\xb1","\xa2"),(int)1,tmp147,tmp148,tmp149,Array_obj< ::Dynamic >::__new().Add(tmp150).Add(tmp151).Add(tmp152).Add(tmp153),(int)10);		HX_STACK_VAR(tmp154,"tmp154");
	HX_STACK_LINE(98)
	::actors::Animation leftProjectile = tmp154;		HX_STACK_VAR(leftProjectile,"leftProjectile");
	HX_STACK_LINE(102)
	::haxe::ds::StringMap tmp155;		HX_STACK_VAR(tmp155,"tmp155");
	HX_STACK_LINE(102)
	{
		HX_STACK_LINE(102)
		::haxe::ds::StringMap tmp156 = ::haxe::ds::StringMap_obj::__new();		HX_STACK_VAR(tmp156,"tmp156");
		HX_STACK_LINE(102)
		::haxe::ds::StringMap tmp157 = tmp156;		HX_STACK_VAR(tmp157,"tmp157");
		HX_STACK_LINE(102)
		tmp155 = tmp157;
	}
	HX_STACK_LINE(102)
	this->animations = tmp155;
	HX_STACK_LINE(103)
	{
		HX_STACK_LINE(103)
		::String tmp156 = rightIdle->getName();		HX_STACK_VAR(tmp156,"tmp156");
		HX_STACK_LINE(103)
		::String k = tmp156;		HX_STACK_VAR(k,"k");
		HX_STACK_LINE(103)
		::haxe::ds::StringMap tmp157 = this->animations;		HX_STACK_VAR(tmp157,"tmp157");
		HX_STACK_LINE(103)
		::String tmp158 = k;		HX_STACK_VAR(tmp158,"tmp158");
		HX_STACK_LINE(103)
		::actors::Animation tmp159 = rightIdle;		HX_STACK_VAR(tmp159,"tmp159");
		HX_STACK_LINE(103)
		tmp157->set(tmp158,tmp159);
		HX_STACK_LINE(103)
		rightIdle;
	}
	HX_STACK_LINE(104)
	{
		HX_STACK_LINE(104)
		::String tmp156 = leftIdle->getName();		HX_STACK_VAR(tmp156,"tmp156");
		HX_STACK_LINE(104)
		::String k = tmp156;		HX_STACK_VAR(k,"k");
		HX_STACK_LINE(104)
		::haxe::ds::StringMap tmp157 = this->animations;		HX_STACK_VAR(tmp157,"tmp157");
		HX_STACK_LINE(104)
		::String tmp158 = k;		HX_STACK_VAR(tmp158,"tmp158");
		HX_STACK_LINE(104)
		::actors::Animation tmp159 = leftIdle;		HX_STACK_VAR(tmp159,"tmp159");
		HX_STACK_LINE(104)
		tmp157->set(tmp158,tmp159);
		HX_STACK_LINE(104)
		leftIdle;
	}
	HX_STACK_LINE(105)
	{
		HX_STACK_LINE(105)
		::String tmp156 = leftWalk->getName();		HX_STACK_VAR(tmp156,"tmp156");
		HX_STACK_LINE(105)
		::String k = tmp156;		HX_STACK_VAR(k,"k");
		HX_STACK_LINE(105)
		::haxe::ds::StringMap tmp157 = this->animations;		HX_STACK_VAR(tmp157,"tmp157");
		HX_STACK_LINE(105)
		::String tmp158 = k;		HX_STACK_VAR(tmp158,"tmp158");
		HX_STACK_LINE(105)
		::actors::Animation tmp159 = leftWalk;		HX_STACK_VAR(tmp159,"tmp159");
		HX_STACK_LINE(105)
		tmp157->set(tmp158,tmp159);
		HX_STACK_LINE(105)
		leftWalk;
	}
	HX_STACK_LINE(106)
	{
		HX_STACK_LINE(106)
		::String tmp156 = rightWalk->getName();		HX_STACK_VAR(tmp156,"tmp156");
		HX_STACK_LINE(106)
		::String k = tmp156;		HX_STACK_VAR(k,"k");
		HX_STACK_LINE(106)
		::haxe::ds::StringMap tmp157 = this->animations;		HX_STACK_VAR(tmp157,"tmp157");
		HX_STACK_LINE(106)
		::String tmp158 = k;		HX_STACK_VAR(tmp158,"tmp158");
		HX_STACK_LINE(106)
		::actors::Animation tmp159 = rightWalk;		HX_STACK_VAR(tmp159,"tmp159");
		HX_STACK_LINE(106)
		tmp157->set(tmp158,tmp159);
		HX_STACK_LINE(106)
		rightWalk;
	}
	HX_STACK_LINE(107)
	{
		HX_STACK_LINE(107)
		::String tmp156 = rightJump->getName();		HX_STACK_VAR(tmp156,"tmp156");
		HX_STACK_LINE(107)
		::String k = tmp156;		HX_STACK_VAR(k,"k");
		HX_STACK_LINE(107)
		::haxe::ds::StringMap tmp157 = this->animations;		HX_STACK_VAR(tmp157,"tmp157");
		HX_STACK_LINE(107)
		::String tmp158 = k;		HX_STACK_VAR(tmp158,"tmp158");
		HX_STACK_LINE(107)
		::actors::Animation tmp159 = rightJump;		HX_STACK_VAR(tmp159,"tmp159");
		HX_STACK_LINE(107)
		tmp157->set(tmp158,tmp159);
		HX_STACK_LINE(107)
		rightJump;
	}
	HX_STACK_LINE(108)
	{
		HX_STACK_LINE(108)
		::String tmp156 = rightFall->getName();		HX_STACK_VAR(tmp156,"tmp156");
		HX_STACK_LINE(108)
		::String k = tmp156;		HX_STACK_VAR(k,"k");
		HX_STACK_LINE(108)
		::haxe::ds::StringMap tmp157 = this->animations;		HX_STACK_VAR(tmp157,"tmp157");
		HX_STACK_LINE(108)
		::String tmp158 = k;		HX_STACK_VAR(tmp158,"tmp158");
		HX_STACK_LINE(108)
		::actors::Animation tmp159 = rightFall;		HX_STACK_VAR(tmp159,"tmp159");
		HX_STACK_LINE(108)
		tmp157->set(tmp158,tmp159);
		HX_STACK_LINE(108)
		rightFall;
	}
	HX_STACK_LINE(109)
	{
		HX_STACK_LINE(109)
		::String tmp156 = leftJump->getName();		HX_STACK_VAR(tmp156,"tmp156");
		HX_STACK_LINE(109)
		::String k = tmp156;		HX_STACK_VAR(k,"k");
		HX_STACK_LINE(109)
		::haxe::ds::StringMap tmp157 = this->animations;		HX_STACK_VAR(tmp157,"tmp157");
		HX_STACK_LINE(109)
		::String tmp158 = k;		HX_STACK_VAR(tmp158,"tmp158");
		HX_STACK_LINE(109)
		::actors::Animation tmp159 = leftJump;		HX_STACK_VAR(tmp159,"tmp159");
		HX_STACK_LINE(109)
		tmp157->set(tmp158,tmp159);
		HX_STACK_LINE(109)
		leftJump;
	}
	HX_STACK_LINE(110)
	{
		HX_STACK_LINE(110)
		::String tmp156 = leftFall->getName();		HX_STACK_VAR(tmp156,"tmp156");
		HX_STACK_LINE(110)
		::String k = tmp156;		HX_STACK_VAR(k,"k");
		HX_STACK_LINE(110)
		::haxe::ds::StringMap tmp157 = this->animations;		HX_STACK_VAR(tmp157,"tmp157");
		HX_STACK_LINE(110)
		::String tmp158 = k;		HX_STACK_VAR(tmp158,"tmp158");
		HX_STACK_LINE(110)
		::actors::Animation tmp159 = leftFall;		HX_STACK_VAR(tmp159,"tmp159");
		HX_STACK_LINE(110)
		tmp157->set(tmp158,tmp159);
		HX_STACK_LINE(110)
		leftFall;
	}
	HX_STACK_LINE(111)
	{
		HX_STACK_LINE(111)
		::String tmp156 = rightHurt->getName();		HX_STACK_VAR(tmp156,"tmp156");
		HX_STACK_LINE(111)
		::String k = tmp156;		HX_STACK_VAR(k,"k");
		HX_STACK_LINE(111)
		::haxe::ds::StringMap tmp157 = this->animations;		HX_STACK_VAR(tmp157,"tmp157");
		HX_STACK_LINE(111)
		::String tmp158 = k;		HX_STACK_VAR(tmp158,"tmp158");
		HX_STACK_LINE(111)
		::actors::Animation tmp159 = rightHurt;		HX_STACK_VAR(tmp159,"tmp159");
		HX_STACK_LINE(111)
		tmp157->set(tmp158,tmp159);
		HX_STACK_LINE(111)
		rightHurt;
	}
	HX_STACK_LINE(112)
	{
		HX_STACK_LINE(112)
		::String tmp156 = leftHurt->getName();		HX_STACK_VAR(tmp156,"tmp156");
		HX_STACK_LINE(112)
		::String k = tmp156;		HX_STACK_VAR(k,"k");
		HX_STACK_LINE(112)
		::haxe::ds::StringMap tmp157 = this->animations;		HX_STACK_VAR(tmp157,"tmp157");
		HX_STACK_LINE(112)
		::String tmp158 = k;		HX_STACK_VAR(tmp158,"tmp158");
		HX_STACK_LINE(112)
		::actors::Animation tmp159 = leftHurt;		HX_STACK_VAR(tmp159,"tmp159");
		HX_STACK_LINE(112)
		tmp157->set(tmp158,tmp159);
		HX_STACK_LINE(112)
		leftHurt;
	}
	HX_STACK_LINE(114)
	{
		HX_STACK_LINE(114)
		::String tmp156 = dashLeft->getName();		HX_STACK_VAR(tmp156,"tmp156");
		HX_STACK_LINE(114)
		::String k = tmp156;		HX_STACK_VAR(k,"k");
		HX_STACK_LINE(114)
		::haxe::ds::StringMap tmp157 = this->animations;		HX_STACK_VAR(tmp157,"tmp157");
		HX_STACK_LINE(114)
		::String tmp158 = k;		HX_STACK_VAR(tmp158,"tmp158");
		HX_STACK_LINE(114)
		::actors::Animation tmp159 = dashLeft;		HX_STACK_VAR(tmp159,"tmp159");
		HX_STACK_LINE(114)
		tmp157->set(tmp158,tmp159);
		HX_STACK_LINE(114)
		dashLeft;
	}
	HX_STACK_LINE(115)
	{
		HX_STACK_LINE(115)
		::String tmp156 = dashRight->getName();		HX_STACK_VAR(tmp156,"tmp156");
		HX_STACK_LINE(115)
		::String k = tmp156;		HX_STACK_VAR(k,"k");
		HX_STACK_LINE(115)
		::haxe::ds::StringMap tmp157 = this->animations;		HX_STACK_VAR(tmp157,"tmp157");
		HX_STACK_LINE(115)
		::String tmp158 = k;		HX_STACK_VAR(tmp158,"tmp158");
		HX_STACK_LINE(115)
		::actors::Animation tmp159 = dashRight;		HX_STACK_VAR(tmp159,"tmp159");
		HX_STACK_LINE(115)
		tmp157->set(tmp158,tmp159);
		HX_STACK_LINE(115)
		dashRight;
	}
	HX_STACK_LINE(116)
	{
		HX_STACK_LINE(116)
		::String tmp156 = dashRestLeft->getName();		HX_STACK_VAR(tmp156,"tmp156");
		HX_STACK_LINE(116)
		::String k = tmp156;		HX_STACK_VAR(k,"k");
		HX_STACK_LINE(116)
		::haxe::ds::StringMap tmp157 = this->animations;		HX_STACK_VAR(tmp157,"tmp157");
		HX_STACK_LINE(116)
		::String tmp158 = k;		HX_STACK_VAR(tmp158,"tmp158");
		HX_STACK_LINE(116)
		::actors::Animation tmp159 = dashRestLeft;		HX_STACK_VAR(tmp159,"tmp159");
		HX_STACK_LINE(116)
		tmp157->set(tmp158,tmp159);
		HX_STACK_LINE(116)
		dashRestLeft;
	}
	HX_STACK_LINE(117)
	{
		HX_STACK_LINE(117)
		::String tmp156 = dashRestRight->getName();		HX_STACK_VAR(tmp156,"tmp156");
		HX_STACK_LINE(117)
		::String k = tmp156;		HX_STACK_VAR(k,"k");
		HX_STACK_LINE(117)
		::haxe::ds::StringMap tmp157 = this->animations;		HX_STACK_VAR(tmp157,"tmp157");
		HX_STACK_LINE(117)
		::String tmp158 = k;		HX_STACK_VAR(tmp158,"tmp158");
		HX_STACK_LINE(117)
		::actors::Animation tmp159 = dashRestRight;		HX_STACK_VAR(tmp159,"tmp159");
		HX_STACK_LINE(117)
		tmp157->set(tmp158,tmp159);
		HX_STACK_LINE(117)
		dashRestRight;
	}
	HX_STACK_LINE(119)
	{
		HX_STACK_LINE(119)
		::String tmp156 = leftLaunch->getName();		HX_STACK_VAR(tmp156,"tmp156");
		HX_STACK_LINE(119)
		::String k = tmp156;		HX_STACK_VAR(k,"k");
		HX_STACK_LINE(119)
		::haxe::ds::StringMap tmp157 = this->animations;		HX_STACK_VAR(tmp157,"tmp157");
		HX_STACK_LINE(119)
		::String tmp158 = k;		HX_STACK_VAR(tmp158,"tmp158");
		HX_STACK_LINE(119)
		::actors::Animation tmp159 = leftLaunch;		HX_STACK_VAR(tmp159,"tmp159");
		HX_STACK_LINE(119)
		tmp157->set(tmp158,tmp159);
		HX_STACK_LINE(119)
		leftLaunch;
	}
	HX_STACK_LINE(120)
	{
		HX_STACK_LINE(120)
		::String tmp156 = rightLaunch->getName();		HX_STACK_VAR(tmp156,"tmp156");
		HX_STACK_LINE(120)
		::String k = tmp156;		HX_STACK_VAR(k,"k");
		HX_STACK_LINE(120)
		::haxe::ds::StringMap tmp157 = this->animations;		HX_STACK_VAR(tmp157,"tmp157");
		HX_STACK_LINE(120)
		::String tmp158 = k;		HX_STACK_VAR(tmp158,"tmp158");
		HX_STACK_LINE(120)
		::actors::Animation tmp159 = rightLaunch;		HX_STACK_VAR(tmp159,"tmp159");
		HX_STACK_LINE(120)
		tmp157->set(tmp158,tmp159);
		HX_STACK_LINE(120)
		rightLaunch;
	}
	HX_STACK_LINE(121)
	{
		HX_STACK_LINE(121)
		::String tmp156 = leftLaunchRest->getName();		HX_STACK_VAR(tmp156,"tmp156");
		HX_STACK_LINE(121)
		::String k = tmp156;		HX_STACK_VAR(k,"k");
		HX_STACK_LINE(121)
		::haxe::ds::StringMap tmp157 = this->animations;		HX_STACK_VAR(tmp157,"tmp157");
		HX_STACK_LINE(121)
		::String tmp158 = k;		HX_STACK_VAR(tmp158,"tmp158");
		HX_STACK_LINE(121)
		::actors::Animation tmp159 = leftLaunchRest;		HX_STACK_VAR(tmp159,"tmp159");
		HX_STACK_LINE(121)
		tmp157->set(tmp158,tmp159);
		HX_STACK_LINE(121)
		leftLaunchRest;
	}
	HX_STACK_LINE(122)
	{
		HX_STACK_LINE(122)
		::String tmp156 = rightLaunchRest->getName();		HX_STACK_VAR(tmp156,"tmp156");
		HX_STACK_LINE(122)
		::String k = tmp156;		HX_STACK_VAR(k,"k");
		HX_STACK_LINE(122)
		::haxe::ds::StringMap tmp157 = this->animations;		HX_STACK_VAR(tmp157,"tmp157");
		HX_STACK_LINE(122)
		::String tmp158 = k;		HX_STACK_VAR(tmp158,"tmp158");
		HX_STACK_LINE(122)
		::actors::Animation tmp159 = rightLaunchRest;		HX_STACK_VAR(tmp159,"tmp159");
		HX_STACK_LINE(122)
		tmp157->set(tmp158,tmp159);
		HX_STACK_LINE(122)
		rightLaunchRest;
	}
	HX_STACK_LINE(124)
	{
		HX_STACK_LINE(124)
		::String tmp156 = leftProjectile->getName();		HX_STACK_VAR(tmp156,"tmp156");
		HX_STACK_LINE(124)
		::String k = tmp156;		HX_STACK_VAR(k,"k");
		HX_STACK_LINE(124)
		::haxe::ds::StringMap tmp157 = this->animations;		HX_STACK_VAR(tmp157,"tmp157");
		HX_STACK_LINE(124)
		::String tmp158 = k;		HX_STACK_VAR(tmp158,"tmp158");
		HX_STACK_LINE(124)
		::actors::Animation tmp159 = leftProjectile;		HX_STACK_VAR(tmp159,"tmp159");
		HX_STACK_LINE(124)
		tmp157->set(tmp158,tmp159);
		HX_STACK_LINE(124)
		leftProjectile;
	}
	HX_STACK_LINE(125)
	{
		HX_STACK_LINE(125)
		::String tmp156 = rightProjectile->getName();		HX_STACK_VAR(tmp156,"tmp156");
		HX_STACK_LINE(125)
		::String k = tmp156;		HX_STACK_VAR(k,"k");
		HX_STACK_LINE(125)
		::haxe::ds::StringMap tmp157 = this->animations;		HX_STACK_VAR(tmp157,"tmp157");
		HX_STACK_LINE(125)
		::String tmp158 = k;		HX_STACK_VAR(tmp158,"tmp158");
		HX_STACK_LINE(125)
		::actors::Animation tmp159 = rightProjectile;		HX_STACK_VAR(tmp159,"tmp159");
		HX_STACK_LINE(125)
		tmp157->set(tmp158,tmp159);
		HX_STACK_LINE(125)
		rightProjectile;
	}
	HX_STACK_LINE(127)
	this->currentAnimation = rightIdle;
	HX_STACK_LINE(130)
	Array< ::Dynamic > hits = Array_obj< ::Dynamic >::__new();		HX_STACK_VAR(hits,"hits");
	HX_STACK_LINE(131)
	int tmp156 = playerHeight;		HX_STACK_VAR(tmp156,"tmp156");
	HX_STACK_LINE(131)
	int tmp157 = (playerWidth - (int)8);		HX_STACK_VAR(tmp157,"tmp157");
	HX_STACK_LINE(131)
	::openfl::geom::Rectangle tmp158 = ::openfl::geom::Rectangle_obj::__new((int)4,tmp156,tmp157,(int)14);		HX_STACK_VAR(tmp158,"tmp158");
	HX_STACK_LINE(131)
	hits->push(tmp158);
	HX_STACK_LINE(132)
	::actors::ObjectMover tmp159 = ::actors::ObjectMover_obj::__new(((Float).5),((Float).1),(int)0,(int)60,(int)0,(int)10,(int)0,(int)60,(int)0,null(),null());		HX_STACK_VAR(tmp159,"tmp159");
	HX_STACK_LINE(132)
	::actors::attacks::AbsorbAttack tmp160 = ::actors::attacks::AbsorbAttack_obj::__new(tmp159,hits,(int)60,(int)3);		HX_STACK_VAR(tmp160,"tmp160");
	HX_STACK_LINE(132)
	this->jumpAttack = tmp160;
	HX_STACK_LINE(134)
	hits = Array_obj< ::Dynamic >::__new();
	HX_STACK_LINE(135)
	int tmp161 = (int)-2;		HX_STACK_VAR(tmp161,"tmp161");
	HX_STACK_LINE(135)
	int tmp162 = (tmp161 - (int)10);		HX_STACK_VAR(tmp162,"tmp162");
	HX_STACK_LINE(135)
	int tmp163 = playerWidth;		HX_STACK_VAR(tmp163,"tmp163");
	HX_STACK_LINE(135)
	::openfl::geom::Rectangle tmp164 = ::openfl::geom::Rectangle_obj::__new(tmp162,(int)0,(int)10,tmp163);		HX_STACK_VAR(tmp164,"tmp164");
	HX_STACK_LINE(135)
	hits->push(tmp164);
	HX_STACK_LINE(136)
	int tmp165 = (playerWidth + (int)2);		HX_STACK_VAR(tmp165,"tmp165");
	HX_STACK_LINE(136)
	int tmp166 = playerWidth;		HX_STACK_VAR(tmp166,"tmp166");
	HX_STACK_LINE(136)
	::openfl::geom::Rectangle tmp167 = ::openfl::geom::Rectangle_obj::__new(tmp165,(int)0,(int)10,tmp166);		HX_STACK_VAR(tmp167,"tmp167");
	HX_STACK_LINE(136)
	hits->push(tmp167);
	HX_STACK_LINE(137)
	::actors::ObjectMover tmp168 = ::actors::ObjectMover_obj::__new(((Float).5),((Float).1),(int)0,(int)0,(int)0,(int)0,(int)0,(int)60,(int)0,null(),null());		HX_STACK_VAR(tmp168,"tmp168");
	HX_STACK_LINE(137)
	::actors::attacks::Attack tmp169 = ::actors::attacks::Attack_obj::__new(tmp168,hits,(int)15,(int)1,(int)0,null(),null(),null());		HX_STACK_VAR(tmp169,"tmp169");
	HX_STACK_LINE(137)
	this->standAttack = tmp169;
	HX_STACK_LINE(139)
	::openfl::display::Bitmap tmp170 = ::Main_obj::getBitmapAsset(HX_HCSTRING("assets/Player.png","\x88","\x62","\xd3","\x2e"));		HX_STACK_VAR(tmp170,"tmp170");
	HX_STACK_LINE(139)
	::haxe::ds::StringMap tmp171 = this->animations;		HX_STACK_VAR(tmp171,"tmp171");
	HX_STACK_LINE(139)
	::actors::ObjectMover tmp172 = mover;		HX_STACK_VAR(tmp172,"tmp172");
	HX_STACK_LINE(139)
	int tmp173 = playerWidth;		HX_STACK_VAR(tmp173,"tmp173");
	HX_STACK_LINE(139)
	int tmp174 = playerHeight;		HX_STACK_VAR(tmp174,"tmp174");
	HX_STACK_LINE(139)
	super::__construct(hx::ObjectPtr<OBJ_>(this),tmp170,true,tmp171,tmp172,tmp173,tmp174);
	HX_STACK_LINE(141)
	this->maxHealth = (int)3;
	HX_STACK_LINE(142)
	this->health = (int)3;
	HX_STACK_LINE(144)
	::openfl::geom::Rectangle tmp175 = ::openfl::geom::Rectangle_obj::__new((int)4,(int)6,(int)24,(int)30);		HX_STACK_VAR(tmp175,"tmp175");
	HX_STACK_LINE(144)
	this->collisionBounds = tmp175;
	HX_STACK_LINE(145)
	::openfl::geom::Rectangle tmp176 = this->collisionBounds;		HX_STACK_VAR(tmp176,"tmp176");
	HX_STACK_LINE(145)
	this->originalBounds = tmp176;
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
		HX_STACK_FRAME("actors.Player","updatePlayer",0x6d3826c7,"actors.Player.updatePlayer","actors/Player.hx",148,0xa6e3592c)
		HX_STACK_THIS(this)
		HX_STACK_LINE(152)
		this->centerScreen();
		HX_STACK_LINE(153)
		this->handleAnimation();
		HX_STACK_LINE(155)
		Float tmp = this->get_y();		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(155)
		::maps::AreaMap tmp1 = this->currentMap;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(155)
		int tmp2 = tmp1->getMapHeight();		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(155)
		bool tmp3 = (tmp > tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(155)
		if ((tmp3)){
			HX_STACK_LINE(156)
			this->kill();
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Player_obj,updatePlayer,(void))

bool Player_obj::isStunned( ){
	HX_STACK_FRAME("actors.Player","isStunned",0x5f9d43ec,"actors.Player.isStunned","actors/Player.hx",160,0xa6e3592c)
	HX_STACK_THIS(this)
	HX_STACK_LINE(161)
	int tmp = this->stunCount;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(161)
	bool tmp1 = (tmp <= (int)0);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(161)
	if ((tmp1)){
		HX_STACK_LINE(161)
		return false;
	}
	HX_STACK_LINE(162)
	return true;
}


HX_DEFINE_DYNAMIC_FUNC0(Player_obj,isStunned,return )

Void Player_obj::handleAnimation( ){
{
		HX_STACK_FRAME("actors.Player","handleAnimation",0x10f92ddf,"actors.Player.handleAnimation","actors/Player.hx",165,0xa6e3592c)
		HX_STACK_THIS(this)
		HX_STACK_LINE(167)
		int tmp = this->stunCount;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(167)
		bool tmp1 = (tmp > (int)0);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(167)
		bool tmp2;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(167)
		if ((tmp1)){
			HX_STACK_LINE(167)
			tmp2 = this->invulnerable;
		}
		else{
			HX_STACK_LINE(167)
			tmp2 = false;
		}
		HX_STACK_LINE(167)
		if ((tmp2)){
			HX_STACK_LINE(168)
			return null();
		}
		HX_STACK_LINE(169)
		::actors::attacks::Attack tmp3 = this->attackBehavior;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(169)
		bool tmp4 = (tmp3 != null());		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(169)
		if ((tmp4)){
			HX_STACK_LINE(171)
			::actors::attacks::Attack tmp5 = this->attackBehavior;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(171)
			bool tmp6 = tmp5->hasAnimation();		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(171)
			if ((tmp6)){
				HX_STACK_LINE(172)
				::actors::attacks::Attack tmp7 = this->attackBehavior;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(172)
				::String tmp8 = tmp7->getAnimation();		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(172)
				this->setAnimation(tmp8);
				HX_STACK_LINE(173)
				return null();
			}
		}
		HX_STACK_LINE(176)
		int tmp5 = this->stunCount;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(176)
		bool tmp6 = (tmp5 > (int)0);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(176)
		bool tmp7;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(176)
		if ((tmp6)){
			HX_STACK_LINE(176)
			::actors::Animation tmp8 = this->currentAnimation;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(176)
			::actors::Animation tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(176)
			::String tmp10 = tmp9->getName();		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(176)
			::String tmp11 = tmp10;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(176)
			int tmp12 = tmp11.indexOf(HX_HCSTRING("Rest","\x34","\x87","\x80","\x36"),null());		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(176)
			int tmp13 = tmp12;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(176)
			tmp7 = (tmp13 >= (int)0);
		}
		else{
			HX_STACK_LINE(176)
			tmp7 = false;
		}
		HX_STACK_LINE(176)
		if ((tmp7)){
			HX_STACK_LINE(177)
			return null();
		}
		else{
			HX_STACK_LINE(178)
			::actors::ObjectMover tmp8 = this->currentMover;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(178)
			bool tmp9 = tmp8->getIsGrounded();		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(178)
			bool tmp10 = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(178)
			bool tmp11 = !(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(178)
			bool tmp12;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(178)
			if ((tmp11)){
				HX_STACK_LINE(178)
				::actors::ObjectMover tmp13 = this->currentMover;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(178)
				::actors::ObjectMover tmp14 = tmp13;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(178)
				Float tmp15 = tmp14->getYVel();		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(178)
				Float tmp16 = tmp15;		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(178)
				tmp12 = (tmp16 > (int)0);
			}
			else{
				HX_STACK_LINE(178)
				tmp12 = false;
			}
			HX_STACK_LINE(178)
			if ((tmp12)){
				HX_STACK_LINE(179)
				this->setAnimation(HX_HCSTRING("Fall","\x9b","\xe8","\x8e","\x2e"));
			}
			else{
				HX_STACK_LINE(180)
				::actors::ObjectMover tmp13 = this->currentMover;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(180)
				bool tmp14 = tmp13->getIsGrounded();		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(180)
				bool tmp15 = tmp14;		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(180)
				bool tmp16 = !(tmp15);		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(180)
				bool tmp17;		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(180)
				if ((tmp16)){
					HX_STACK_LINE(180)
					::actors::ObjectMover tmp18 = this->currentMover;		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(180)
					::actors::ObjectMover tmp19 = tmp18;		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(180)
					Float tmp20 = tmp19->getYVel();		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(180)
					Float tmp21 = tmp20;		HX_STACK_VAR(tmp21,"tmp21");
					HX_STACK_LINE(180)
					tmp17 = (tmp21 < (int)0);
				}
				else{
					HX_STACK_LINE(180)
					tmp17 = false;
				}
				HX_STACK_LINE(180)
				if ((tmp17)){
					HX_STACK_LINE(181)
					this->setAnimation(HX_HCSTRING("Jump","\x0e","\xf1","\x42","\x31"));
				}
				else{
					HX_STACK_LINE(182)
					::actors::ObjectMover tmp18 = this->currentMover;		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(182)
					Float tmp19 = tmp18->getXVel();		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(182)
					Float tmp20 = ::Math_obj::abs(tmp19);		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(182)
					bool tmp21 = (tmp20 < ((Float).1));		HX_STACK_VAR(tmp21,"tmp21");
					HX_STACK_LINE(182)
					if ((tmp21)){
						HX_STACK_LINE(183)
						this->setAnimation(HX_HCSTRING("Idle","\x34","\xd3","\x8c","\x30"));
					}
					else{
						HX_STACK_LINE(184)
						::actors::ObjectMover tmp22 = this->currentMover;		HX_STACK_VAR(tmp22,"tmp22");
						HX_STACK_LINE(184)
						Float tmp23 = tmp22->getXVel();		HX_STACK_VAR(tmp23,"tmp23");
						HX_STACK_LINE(184)
						Float tmp24 = ::Math_obj::abs(tmp23);		HX_STACK_VAR(tmp24,"tmp24");
						HX_STACK_LINE(184)
						bool tmp25 = (tmp24 > ((Float).1));		HX_STACK_VAR(tmp25,"tmp25");
						HX_STACK_LINE(184)
						if ((tmp25)){
							HX_STACK_LINE(185)
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
		HX_STACK_FRAME("actors.Player","centerScreen",0x414df79e,"actors.Player.centerScreen","actors/Player.hx",188,0xa6e3592c)
		HX_STACK_THIS(this)
		HX_STACK_LINE(190)
		Float screenHeight = (int)360;		HX_STACK_VAR(screenHeight,"screenHeight");
		HX_STACK_LINE(191)
		Float screenWidth = (int)540;		HX_STACK_VAR(screenWidth,"screenWidth");
		HX_STACK_LINE(192)
		int scale = (int)1;		HX_STACK_VAR(scale,"scale");
		HX_STACK_LINE(193)
		Float tmp = (Float(screenHeight) / Float(scale));		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(193)
		screenHeight = tmp;
		HX_STACK_LINE(194)
		Float tmp1 = (Float(screenWidth) / Float(scale));		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(194)
		screenWidth = tmp1;
		HX_STACK_LINE(196)
		::maps::AreaMap tmp2 = this->currentMap;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(196)
		int tmp3 = tmp2->getMapWidth();		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(196)
		int mapWidth = tmp3;		HX_STACK_VAR(mapWidth,"mapWidth");
		HX_STACK_LINE(197)
		::maps::AreaMap tmp4 = this->currentMap;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(197)
		int tmp5 = tmp4->getMapHeight();		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(197)
		int mapHeight = tmp5;		HX_STACK_VAR(mapHeight,"mapHeight");
		HX_STACK_LINE(198)
		int tmp6 = (mapWidth * scale);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(198)
		mapWidth = tmp6;
		HX_STACK_LINE(199)
		int tmp7 = (mapHeight * scale);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(199)
		mapHeight = tmp7;
		HX_STACK_LINE(202)
		int tmp8 = mapWidth;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(202)
		Float tmp9 = (screenWidth * scale);		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(202)
		bool tmp10 = (tmp8 < tmp9);		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(202)
		if ((tmp10)){
			HX_STACK_LINE(203)
			::maps::AreaMap tmp11 = this->currentMap;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(203)
			Float tmp12 = (screenWidth * scale);		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(203)
			Float tmp13 = (Float(tmp12) / Float((int)2));		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(203)
			Float tmp14 = (Float(mapWidth) / Float((int)2));		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(203)
			Float tmp15 = (tmp13 - tmp14);		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(203)
			int tmp16 = scale;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(203)
			Float tmp17 = (Float(tmp15) / Float(tmp16));		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(203)
			tmp11->set_x(tmp17);
		}
		else{
			HX_STACK_LINE(207)
			::maps::AreaMap tmp11 = this->currentMap;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(207)
			Float tmp12 = (Float(screenWidth) / Float((int)2));		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(207)
			Float tmp13 = this->get_x();		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(207)
			Float tmp14 = (tmp12 - tmp13);		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(207)
			tmp11->set_x(tmp14);
			HX_STACK_LINE(209)
			::maps::AreaMap tmp15 = this->currentMap;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(209)
			Float tmp16 = tmp15->get_x();		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(209)
			bool tmp17 = (tmp16 > (int)0);		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(209)
			if ((tmp17)){
				HX_STACK_LINE(210)
				::maps::AreaMap tmp18 = this->currentMap;		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(210)
				tmp18->set_x((int)0);
			}
			else{
				HX_STACK_LINE(211)
				Float tmp18 = this->get_x();		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(211)
				Float tmp19 = (Float(screenWidth) / Float((int)2));		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(211)
				Float tmp20 = (tmp18 + tmp19);		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(211)
				int tmp21 = mapWidth;		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(211)
				bool tmp22 = (tmp20 > tmp21);		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(211)
				if ((tmp22)){
					HX_STACK_LINE(212)
					::maps::AreaMap tmp23 = this->currentMap;		HX_STACK_VAR(tmp23,"tmp23");
					HX_STACK_LINE(212)
					Float tmp24 = (screenWidth - mapWidth);		HX_STACK_VAR(tmp24,"tmp24");
					HX_STACK_LINE(212)
					tmp23->set_x(tmp24);
				}
			}
		}
		HX_STACK_LINE(216)
		int tmp11 = mapHeight;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(216)
		Float tmp12 = (screenHeight * scale);		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(216)
		bool tmp13 = (tmp11 < tmp12);		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(216)
		if ((tmp13)){
			HX_STACK_LINE(217)
			::maps::AreaMap tmp14 = this->currentMap;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(217)
			Float tmp15 = (screenHeight * scale);		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(217)
			Float tmp16 = (Float(tmp15) / Float((int)2));		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(217)
			Float tmp17 = (Float(mapHeight) / Float((int)2));		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(217)
			Float tmp18 = (tmp16 - tmp17);		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(217)
			int tmp19 = scale;		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(217)
			Float tmp20 = (Float(tmp18) / Float(tmp19));		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(217)
			tmp14->set_y(tmp20);
		}
		else{
			HX_STACK_LINE(221)
			::maps::AreaMap tmp14 = this->currentMap;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(221)
			Float tmp15 = (Float(screenHeight) / Float((int)2));		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(221)
			Float tmp16 = this->get_y();		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(221)
			Float tmp17 = (tmp15 - tmp16);		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(221)
			tmp14->set_y(tmp17);
			HX_STACK_LINE(223)
			::maps::AreaMap tmp18 = this->currentMap;		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(223)
			Float tmp19 = tmp18->get_y();		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(223)
			bool tmp20 = (tmp19 > (int)0);		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(223)
			if ((tmp20)){
				HX_STACK_LINE(224)
				::maps::AreaMap tmp21 = this->currentMap;		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(224)
				tmp21->set_y((int)0);
			}
			else{
				HX_STACK_LINE(225)
				Float tmp21 = this->get_y();		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(225)
				Float tmp22 = (Float(screenHeight) / Float((int)2));		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(225)
				Float tmp23 = (tmp21 + tmp22);		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(225)
				int tmp24 = mapHeight;		HX_STACK_VAR(tmp24,"tmp24");
				HX_STACK_LINE(225)
				bool tmp25 = (tmp23 > tmp24);		HX_STACK_VAR(tmp25,"tmp25");
				HX_STACK_LINE(225)
				if ((tmp25)){
					HX_STACK_LINE(226)
					::maps::AreaMap tmp26 = this->currentMap;		HX_STACK_VAR(tmp26,"tmp26");
					HX_STACK_LINE(226)
					Float tmp27 = (screenHeight - mapHeight);		HX_STACK_VAR(tmp27,"tmp27");
					HX_STACK_LINE(226)
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
		HX_STACK_FRAME("actors.Player","setGrounded",0x13a17e8b,"actors.Player.setGrounded","actors/Player.hx",233,0xa6e3592c)
		HX_STACK_THIS(this)
		HX_STACK_LINE(234)
		this->super::setGrounded();
		HX_STACK_LINE(236)
		::actors::ObjectMover tmp = this->currentMover;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(236)
		bool tmp1 = tmp->getIsGrounded();		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(236)
		bool tmp2;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(236)
		if ((tmp1)){
			HX_STACK_LINE(236)
			::actors::Animation tmp3 = this->currentAnimation;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(236)
			::actors::Animation tmp4 = tmp3;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(236)
			::String tmp5 = tmp4->getName();		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(236)
			::String tmp6 = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(236)
			int tmp7 = tmp6.indexOf(HX_HCSTRING("Fall","\x9b","\xe8","\x8e","\x2e"),null());		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(236)
			int tmp8 = tmp7;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(236)
			tmp2 = (tmp8 >= (int)0);
		}
		else{
			HX_STACK_LINE(236)
			tmp2 = false;
		}
		HX_STACK_LINE(236)
		if ((tmp2)){
			HX_STACK_LINE(237)
			::actors::ObjectMover tmp3 = this->currentMover;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(237)
			Float tmp4 = tmp3->getXVel();		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(237)
			Float tmp5 = ::Math_obj::abs(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(237)
			bool tmp6 = (tmp5 < ((Float)0.1));		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(237)
			if ((tmp6)){
				HX_STACK_LINE(238)
				this->setAnimation(HX_HCSTRING("Idle","\x34","\xd3","\x8c","\x30"));
			}
			else{
				HX_STACK_LINE(240)
				this->setAnimation(HX_HCSTRING("Walk","\x29","\x89","\xcb","\x39"));
			}
		}
	}
return null();
}


Void Player_obj::initiateAttack( ){
{
		HX_STACK_FRAME("actors.Player","initiateAttack",0x2cbd10be,"actors.Player.initiateAttack","actors/Player.hx",244,0xa6e3592c)
		HX_STACK_THIS(this)
		HX_STACK_LINE(245)
		bool tmp = this->isAttacking();		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(245)
		bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(245)
		bool tmp2;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(245)
		if ((tmp1)){
			HX_STACK_LINE(245)
			tmp2 = this->isStunned();
		}
		else{
			HX_STACK_LINE(245)
			tmp2 = true;
		}
		HX_STACK_LINE(245)
		if ((tmp2)){
			HX_STACK_LINE(245)
			return null();
		}
		HX_STACK_LINE(247)
		::actors::abilities::Ability tmp3 = this->ability;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(247)
		bool tmp4 = (tmp3 != null());		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(247)
		if ((tmp4)){
			HX_STACK_LINE(248)
			this->beginAbilityAttack();
			HX_STACK_LINE(249)
			::actors::abilities::Ability tmp5 = this->ability;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(249)
			::actors::ObjectMover tmp6 = this->currentMover;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(249)
			::actors::attacks::Attack tmp7 = tmp5->getAbilityAttack(hx::ObjectPtr<OBJ_>(this),tmp6);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(249)
			this->attackBehavior = tmp7;
		}
		else{
			HX_STACK_LINE(252)
			::actors::ObjectMover tmp5 = this->currentMover;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(252)
			bool tmp6 = tmp5->getIsGrounded();		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(252)
			if ((tmp6)){
				HX_STACK_LINE(253)
				::actors::attacks::Attack tmp7 = this->standAttack;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(253)
				this->attackBehavior = tmp7;
			}
			else{
				HX_STACK_LINE(255)
				::actors::attacks::Attack tmp7 = this->jumpAttack;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(255)
				this->attackBehavior = tmp7;
			}
		}
		HX_STACK_LINE(257)
		this->super::initiateAttack();
	}
return null();
}


bool Player_obj::isAttacking( ){
	HX_STACK_FRAME("actors.Player","isAttacking",0xf1c79ef3,"actors.Player.isAttacking","actors/Player.hx",259,0xa6e3592c)
	HX_STACK_THIS(this)
	HX_STACK_LINE(260)
	::actors::attacks::Attack tmp = this->attackBehavior;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(260)
	bool tmp1 = (tmp == null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(260)
	if ((tmp1)){
		HX_STACK_LINE(260)
		return false;
	}
	else{
		HX_STACK_LINE(261)
		::actors::attacks::Attack tmp2 = this->attackBehavior;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(261)
		bool tmp3 = tmp2->isActive();		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(261)
		return tmp3;
	}
	HX_STACK_LINE(260)
	return false;
}


HX_DEFINE_DYNAMIC_FUNC0(Player_obj,isAttacking,return )

Void Player_obj::endAttack( ){
{
		HX_STACK_FRAME("actors.Player","endAttack",0xc51bb566,"actors.Player.endAttack","actors/Player.hx",263,0xa6e3592c)
		HX_STACK_THIS(this)
		HX_STACK_LINE(265)
		this->resetAttackAnimation();
		HX_STACK_LINE(267)
		::actors::abilities::Ability tmp = this->ability;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(267)
		bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(267)
		if ((tmp1)){
			HX_STACK_LINE(268)
			this->endAbilityAttack();
		}
		HX_STACK_LINE(269)
		this->super::endAttack();
	}
return null();
}


Void Player_obj::resetAttackAnimation( ){
{
		HX_STACK_FRAME("actors.Player","resetAttackAnimation",0xf08d128a,"actors.Player.resetAttackAnimation","actors/Player.hx",271,0xa6e3592c)
		HX_STACK_THIS(this)
		HX_STACK_LINE(272)
		::actors::attacks::Attack tmp = this->attackBehavior;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(272)
		bool tmp1 = (tmp == null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(272)
		if ((tmp1)){
			HX_STACK_LINE(272)
			return null();
		}
		HX_STACK_LINE(274)
		::actors::attacks::Attack tmp2 = this->attackBehavior;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(274)
		bool tmp3 = tmp2->hasAnimation();		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(274)
		if ((tmp3)){
			HX_STACK_LINE(275)
			::actors::Animation tmp4 = this->currentAnimation;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(275)
			tmp4->resetAnimation();
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Player_obj,resetAttackAnimation,(void))

Void Player_obj::beginAbilityAttack( ){
{
		HX_STACK_FRAME("actors.Player","beginAbilityAttack",0x0d157d66,"actors.Player.beginAbilityAttack","actors/Player.hx",278,0xa6e3592c)
		HX_STACK_THIS(this)
		HX_STACK_LINE(279)
		::actors::abilities::Ability tmp = this->ability;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(279)
		int tmp1 = tmp->getAbilityHeight();		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(279)
		bool tmp2 = (tmp1 != (int)-1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(279)
		if ((tmp2)){
			HX_STACK_LINE(280)
			::actors::abilities::Ability tmp3 = this->ability;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(280)
			int tmp4 = tmp3->getAbilityHeight();		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(280)
			this->actorHeight = tmp4;
		}
		HX_STACK_LINE(281)
		::actors::abilities::Ability tmp3 = this->ability;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(281)
		int tmp4 = tmp3->getAbilityWidth();		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(281)
		bool tmp5 = (tmp4 != (int)-1);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(281)
		if ((tmp5)){
			HX_STACK_LINE(282)
			::actors::abilities::Ability tmp6 = this->ability;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(282)
			int tmp7 = tmp6->getAbilityWidth();		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(282)
			this->actorWidth = tmp7;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Player_obj,beginAbilityAttack,(void))

Void Player_obj::endAbilityAttack( ){
{
		HX_STACK_FRAME("actors.Player","endAbilityAttack",0x23f54334,"actors.Player.endAbilityAttack","actors/Player.hx",284,0xa6e3592c)
		HX_STACK_THIS(this)
		HX_STACK_LINE(285)
		int tmp = this->originalActorHeight;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(285)
		this->actorHeight = tmp;
		HX_STACK_LINE(286)
		int tmp1 = this->originalActorWidth;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(286)
		this->actorWidth = tmp1;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Player_obj,endAbilityAttack,(void))

Void Player_obj::calculateDamage( ::maps::mapobjects::MapObject source){
{
		HX_STACK_FRAME("actors.Player","calculateDamage",0xca674218,"actors.Player.calculateDamage","actors/Player.hx",289,0xa6e3592c)
		HX_STACK_THIS(this)
		HX_STACK_ARG(source,"source")
		HX_STACK_LINE(291)
		int tmp = this->health;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(291)
		bool tmp1 = (tmp <= (int)0);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(291)
		if ((tmp1)){
			HX_STACK_LINE(292)
			this->kill();
		}
		else{
			HX_STACK_LINE(295)
			this->set_alpha(((Float).7));
			HX_STACK_LINE(296)
			this->invulnerable = true;
			HX_STACK_LINE(297)
			int tmp2 = this->invulDuration;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(297)
			Float tmp3 = (Float(tmp2) / Float((int)4));		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(297)
			int tmp4 = ::Math_obj::round(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(297)
			this->stunLock(tmp4);
			HX_STACK_LINE(298)
			::maps::mapobjects::MapObject tmp5 = source;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(298)
			this->damageKnockback(tmp5);
			HX_STACK_LINE(299)
			this->setAnimation(HX_HCSTRING("Hurt","\x2f","\x88","\xf0","\x2f"));
		}
	}
return null();
}


bool Player_obj::takeProjectileDamage( ::actors::attacks::Projectile projectile){
	HX_STACK_FRAME("actors.Player","takeProjectileDamage",0x4dd00b1c,"actors.Player.takeProjectileDamage","actors/Player.hx",304,0xa6e3592c)
	HX_STACK_THIS(this)
	HX_STACK_ARG(projectile,"projectile")
	HX_STACK_LINE(305)
	::actors::attacks::Projectile tmp = projectile;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(305)
	bool tmp1 = ::Std_obj::is(tmp,hx::ClassOf< ::actors::attacks::EnemyProjectile >());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(305)
	if ((tmp1)){
		HX_STACK_LINE(306)
		::actors::attacks::Projectile tmp2 = projectile;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(306)
		bool tmp3 = this->super::takeProjectileDamage(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(306)
		return tmp3;
	}
	HX_STACK_LINE(307)
	return false;
}


Void Player_obj::damageKnockback( ::maps::mapobjects::MapObject source){
{
		HX_STACK_FRAME("actors.Player","damageKnockback",0x1b26f06f,"actors.Player.damageKnockback","actors/Player.hx",310,0xa6e3592c)
		HX_STACK_THIS(this)
		HX_STACK_ARG(source,"source")
		HX_STACK_LINE(311)
		Float tmp = this->get_x();		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(311)
		int tmp1 = this->actorWidth;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(311)
		Float tmp2 = (Float(tmp1) / Float((int)2));		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(311)
		Float tmp3 = (tmp + tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(311)
		Float tmp4 = source->get_x();		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(311)
		Float tmp5 = source->get_width();		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(311)
		Float tmp6 = (Float(tmp5) / Float((int)2));		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(311)
		Float tmp7 = (tmp4 + tmp6);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(311)
		Float tmp8 = (tmp3 - tmp7);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(312)
		Float tmp9 = this->get_y();		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(312)
		int tmp10 = this->actorHeight;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(312)
		Float tmp11 = (Float(tmp10) / Float((int)2));		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(312)
		Float tmp12 = (tmp9 + tmp11);		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(312)
		Float tmp13 = source->get_y();		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(312)
		Float tmp14 = source->get_height();		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(312)
		Float tmp15 = (Float(tmp14) / Float((int)2));		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(312)
		Float tmp16 = (tmp13 + tmp15);		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(312)
		Float tmp17 = (tmp12 - tmp16);		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(311)
		::openfl::geom::Point tmp18 = ::openfl::geom::Point_obj::__new(tmp8,tmp17);		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(311)
		::openfl::geom::Point hitAngle = tmp18;		HX_STACK_VAR(hitAngle,"hitAngle");
		HX_STACK_LINE(313)
		::actors::ObjectMover tmp19 = this->currentMover;		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(313)
		::openfl::geom::Point tmp20 = hitAngle;		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(313)
		tmp19->applyForce(tmp20,(int)60);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Player_obj,damageKnockback,(void))

Void Player_obj::kill( ){
{
		HX_STACK_FRAME("actors.Player","kill",0x697e2f1b,"actors.Player.kill","actors/Player.hx",316,0xa6e3592c)
		HX_STACK_THIS(this)
		HX_STACK_LINE(317)
		this->super::kill();
		HX_STACK_LINE(319)
		::maps::AreaMap tmp = this->currentMap;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(319)
		::maps::mapobjects::MapObject tmp1 = tmp->getCurrentCheckpoint();		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(319)
		::maps::mapobjects::MapObject checkpoint = tmp1;		HX_STACK_VAR(checkpoint,"checkpoint");
		HX_STACK_LINE(320)
		bool tmp2 = (checkpoint == null());		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(320)
		if ((tmp2)){
			HX_STACK_LINE(320)
			::maps::AreaMap tmp3 = this->currentMap;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(320)
			::maps::mapobjects::Checkpoint tmp4 = tmp3->getStartPoint();		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(320)
			checkpoint = tmp4;
		}
		HX_STACK_LINE(322)
		int tmp3 = this->maxHealth;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(322)
		this->health = tmp3;
		HX_STACK_LINE(323)
		Float tmp4 = checkpoint->get_x();		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(323)
		Float tmp5 = (tmp4 + (int)6);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(323)
		this->set_x(tmp5);
		HX_STACK_LINE(324)
		Float tmp6 = checkpoint->get_y();		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(324)
		Float tmp7 = (tmp6 - (int)4);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(324)
		this->set_y(tmp7);
		HX_STACK_LINE(325)
		::maps::AreaMap tmp8 = this->currentMap;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(325)
		tmp8->resetMap();
		HX_STACK_LINE(326)
		this->removeAbility();
		HX_STACK_LINE(327)
		::actors::ObjectMover tmp9 = this->currentMover;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(327)
		tmp9->freeze();
	}
return null();
}


Void Player_obj::absorbAbility( ::actors::enemies::Enemy enemy){
{
		HX_STACK_FRAME("actors.Player","absorbAbility",0xfb550160,"actors.Player.absorbAbility","actors/Player.hx",330,0xa6e3592c)
		HX_STACK_THIS(this)
		HX_STACK_ARG(enemy,"enemy")
		HX_STACK_LINE(332)
		::actors::enemies::Enemy tmp = enemy;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(332)
		bool tmp1 = ::Std_obj::is(tmp,hx::ClassOf< ::actors::enemies::DashEnemy >());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(332)
		if ((tmp1)){
			HX_STACK_LINE(333)
			::actors::abilities::DashAbility tmp2 = ::actors::abilities::DashAbility_obj::__new();		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(333)
			this->ability = tmp2;
			HX_STACK_LINE(334)
			::openfl::display::Bitmap tmp3 = ::Main_obj::getBitmapAsset(HX_HCSTRING("assets/PlayerDash.png","\x7a","\xaf","\x2b","\x54"));		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(334)
			this->baseBmp = tmp3;
		}
		else{
			HX_STACK_LINE(336)
			::actors::enemies::Enemy tmp2 = enemy;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(336)
			bool tmp3 = ::Std_obj::is(tmp2,hx::ClassOf< ::actors::enemies::LaunchEnemy >());		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(336)
			if ((tmp3)){
				HX_STACK_LINE(337)
				::actors::abilities::LaunchAbility tmp4 = ::actors::abilities::LaunchAbility_obj::__new();		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(337)
				this->ability = tmp4;
				HX_STACK_LINE(338)
				::openfl::display::Bitmap tmp5 = ::Main_obj::getBitmapAsset(HX_HCSTRING("assets/PlayerLaunch.png","\x1b","\x76","\xba","\x53"));		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(338)
				this->baseBmp = tmp5;
			}
			else{
				HX_STACK_LINE(340)
				::actors::enemies::Enemy tmp4 = enemy;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(340)
				bool tmp5 = ::Std_obj::is(tmp4,hx::ClassOf< ::actors::enemies::ProjectileEnemy >());		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(340)
				if ((tmp5)){
					HX_STACK_LINE(341)
					::actors::abilities::ProjectileAbility tmp6 = ::actors::abilities::ProjectileAbility_obj::__new();		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(341)
					this->ability = tmp6;
					HX_STACK_LINE(342)
					::openfl::display::Bitmap tmp7 = ::Main_obj::getBitmapAsset(HX_HCSTRING("assets/PlayerProjectile.png","\x51","\xa7","\x52","\xb9"));		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(342)
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
		HX_STACK_FRAME("actors.Player","removeAbility",0x548216a9,"actors.Player.removeAbility","actors/Player.hx",345,0xa6e3592c)
		HX_STACK_THIS(this)
		HX_STACK_LINE(346)
		this->ability = null();
		HX_STACK_LINE(347)
		::openfl::display::Bitmap tmp = ::Main_obj::getBitmapAsset(HX_HCSTRING("assets/Player.png","\x88","\x62","\xd3","\x2e"));		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(347)
		this->baseBmp = tmp;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Player_obj,removeAbility,(void))

Void Player_obj::checkKeysDown( ::openfl::events::KeyboardEvent key){
{
		HX_STACK_FRAME("actors.Player","checkKeysDown",0xcc58c641,"actors.Player.checkKeysDown","actors/Player.hx",351,0xa6e3592c)
		HX_STACK_THIS(this)
		HX_STACK_ARG(key,"key")
		HX_STACK_LINE(352)
		bool tmp = this->isStunned();		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(352)
		if ((tmp)){
			HX_STACK_LINE(352)
			return null();
		}
		HX_STACK_LINE(354)
		bool tmp1 = (key->keyCode == (int)65);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(354)
		bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(354)
		bool tmp3;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(354)
		if ((tmp2)){
			HX_STACK_LINE(354)
			tmp3 = (key->keyCode == (int)37);
		}
		else{
			HX_STACK_LINE(354)
			tmp3 = true;
		}
		HX_STACK_LINE(354)
		if ((tmp3)){
			HX_STACK_LINE(355)
			this->goLeft();
		}
		else{
			HX_STACK_LINE(356)
			bool tmp4 = (key->keyCode == (int)68);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(356)
			bool tmp5 = !(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(356)
			bool tmp6;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(356)
			if ((tmp5)){
				HX_STACK_LINE(356)
				tmp6 = (key->keyCode == (int)39);
			}
			else{
				HX_STACK_LINE(356)
				tmp6 = true;
			}
			HX_STACK_LINE(356)
			if ((tmp6)){
				HX_STACK_LINE(357)
				this->goRight();
			}
			else{
				HX_STACK_LINE(358)
				bool tmp7 = (key->keyCode == (int)74);		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(358)
				if ((tmp7)){
					HX_STACK_LINE(359)
					this->initiateAttack();
				}
			}
		}
		HX_STACK_LINE(361)
		bool tmp4 = (key->keyCode == (int)32);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(361)
		if ((tmp4)){
			HX_STACK_LINE(362)
			this->jump();
		}
		HX_STACK_LINE(364)
		bool tmp5 = (key->keyCode == (int)75);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(364)
		if ((tmp5)){
			HX_STACK_LINE(365)
			this->removeAbility();
		}
		HX_STACK_LINE(367)
		bool tmp6 = (key->keyCode == (int)38);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(367)
		bool tmp7 = !(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(367)
		bool tmp8;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(367)
		if ((tmp7)){
			HX_STACK_LINE(367)
			tmp8 = (key->keyCode == (int)87);
		}
		else{
			HX_STACK_LINE(367)
			tmp8 = true;
		}
		HX_STACK_LINE(367)
		if ((tmp8)){
			HX_STACK_LINE(368)
			int tmp9 = this->maxHealth;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(368)
			this->health = tmp9;
			HX_STACK_LINE(369)
			::maps::AreaMap tmp10 = this->currentMap;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(369)
			tmp10->updateEndPortal(hx::ObjectPtr<OBJ_>(this));
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Player_obj,checkKeysDown,(void))

Void Player_obj::checkKeysUp( ::openfl::events::KeyboardEvent key){
{
		HX_STACK_FRAME("actors.Player","checkKeysUp",0x74f1ae7a,"actors.Player.checkKeysUp","actors/Player.hx",372,0xa6e3592c)
		HX_STACK_THIS(this)
		HX_STACK_ARG(key,"key")
		HX_STACK_LINE(374)
		bool tmp = (key->keyCode == (int)65);		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(374)
		bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(374)
		bool tmp2;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(374)
		if ((tmp1)){
			HX_STACK_LINE(374)
			tmp2 = (key->keyCode == (int)37);
		}
		else{
			HX_STACK_LINE(374)
			tmp2 = true;
		}
		HX_STACK_LINE(374)
		if ((tmp2)){
			HX_STACK_LINE(375)
			this->stopLeft();
		}
		else{
			HX_STACK_LINE(376)
			bool tmp3 = (key->keyCode == (int)68);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(376)
			bool tmp4 = !(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(376)
			bool tmp5;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(376)
			if ((tmp4)){
				HX_STACK_LINE(376)
				tmp5 = (key->keyCode == (int)39);
			}
			else{
				HX_STACK_LINE(376)
				tmp5 = true;
			}
			HX_STACK_LINE(376)
			if ((tmp5)){
				HX_STACK_LINE(377)
				this->stopRight();
			}
			else{
				HX_STACK_LINE(378)
				bool tmp6 = (key->keyCode == (int)74);		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(378)
				if ((tmp6)){
					HX_STACK_LINE(379)
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
		HX_STACK_FRAME("actors.Player","stopHoldAttack",0xbd796ac6,"actors.Player.stopHoldAttack","actors/Player.hx",381,0xa6e3592c)
		HX_STACK_THIS(this)
		HX_STACK_LINE(382)
		::actors::attacks::Attack tmp = this->attackBehavior;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(382)
		bool tmp1 = (tmp == null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(382)
		bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(382)
		bool tmp3;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(382)
		if ((tmp2)){
			HX_STACK_LINE(382)
			::actors::attacks::Attack tmp4 = this->attackBehavior;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(382)
			::actors::attacks::Attack tmp5 = tmp4;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(382)
			bool tmp6 = tmp5->isActive();		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(382)
			bool tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(382)
			bool tmp8 = tmp7;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(382)
			tmp3 = !(tmp8);
		}
		else{
			HX_STACK_LINE(382)
			tmp3 = true;
		}
		HX_STACK_LINE(382)
		if ((tmp3)){
			HX_STACK_LINE(382)
			return null();
		}
		HX_STACK_LINE(384)
		::actors::attacks::Attack tmp4 = this->attackBehavior;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(384)
		int tmp5 = tmp4->getDuration();		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(384)
		bool tmp6 = (tmp5 < (int)0);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(384)
		if ((tmp6)){
			HX_STACK_LINE(385)
			this->endAttack();
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Player_obj,stopHoldAttack,(void))

Void Player_obj::goLeft( ){
{
		HX_STACK_FRAME("actors.Player","goLeft",0x2e8aab0c,"actors.Player.goLeft","actors/Player.hx",389,0xa6e3592c)
		HX_STACK_THIS(this)
		HX_STACK_LINE(389)
		this->super::goLeft();
	}
return null();
}


Void Player_obj::goRight( ){
{
		HX_STACK_FRAME("actors.Player","goRight",0x01d80d37,"actors.Player.goRight","actors/Player.hx",392,0xa6e3592c)
		HX_STACK_THIS(this)
		HX_STACK_LINE(392)
		this->super::goRight();
	}
return null();
}


Void Player_obj::stopLeft( ){
{
		HX_STACK_FRAME("actors.Player","stopLeft",0xa7c89f26,"actors.Player.stopLeft","actors/Player.hx",395,0xa6e3592c)
		HX_STACK_THIS(this)
		HX_STACK_LINE(395)
		this->super::stopLeft();
	}
return null();
}


Void Player_obj::stopRight( ){
{
		HX_STACK_FRAME("actors.Player","stopRight",0x9ecfafdd,"actors.Player.stopRight","actors/Player.hx",399,0xa6e3592c)
		HX_STACK_THIS(this)
		HX_STACK_LINE(399)
		this->super::stopRight();
	}
return null();
}


Void Player_obj::jump( ){
{
		HX_STACK_FRAME("actors.Player","jump",0x68de146b,"actors.Player.jump","actors/Player.hx",402,0xa6e3592c)
		HX_STACK_THIS(this)
		HX_STACK_LINE(403)
		this->super::jump();
		HX_STACK_LINE(405)
		::actors::ObjectMover tmp = this->currentMover;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(405)
		bool tmp1 = tmp->getIsGrounded();		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(405)
		bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(405)
		if ((tmp2)){
			HX_STACK_LINE(406)
			this->setAnimation(HX_HCSTRING("Jump","\x0e","\xf1","\x42","\x31"));
		}
	}
return null();
}


Void Player_obj::setAnimation( ::String action){
{
		HX_STACK_FRAME("actors.Player","setAnimation",0xa540437f,"actors.Player.setAnimation","actors/Player.hx",409,0xa6e3592c)
		HX_STACK_THIS(this)
		HX_STACK_ARG(action,"action")
		HX_STACK_LINE(410)
		bool tmp = this->alignmentLeft;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(410)
		if ((tmp)){
			HX_STACK_LINE(411)
			::String tmp1 = (HX_HCSTRING("Left","\x27","\x34","\x89","\x32") + action);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(411)
			::actors::Animation tmp2 = this->getAnimation(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(411)
			this->currentAnimation = tmp2;
		}
		else{
			HX_STACK_LINE(413)
			::String tmp1 = (HX_HCSTRING("Right","\xbc","\x7b","\x91","\x7c") + action);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(413)
			::actors::Animation tmp2 = this->getAnimation(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(413)
			this->currentAnimation = tmp2;
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
		if (HX_FIELD_EQ(inName,"damageKnockback") ) { return damageKnockback_dyn(); }
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
	HX_HCSTRING("damageKnockback","\xcc","\x58","\xce","\x23"),
	HX_HCSTRING("kill","\x9e","\xdf","\x09","\x47"),
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
