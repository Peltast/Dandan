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
#ifndef INCLUDED_actors_actorsAI_FlyingAI
#include <actors/actorsAI/FlyingAI.h>
#endif
#ifndef INCLUDED_actors_attacks_Attack
#include <actors/attacks/Attack.h>
#endif
#ifndef INCLUDED_actors_enemies_Enemy
#include <actors/enemies/Enemy.h>
#endif
#ifndef INCLUDED_actors_enemies_FlyingEnemy
#include <actors/enemies/FlyingEnemy.h>
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

Void FlyingEnemy_obj::__construct(::maps::mapobjects::SpawnPoint homeSpawn,bool horizontal)
{
HX_STACK_FRAME("actors.enemies.FlyingEnemy","new",0x7931fe73,"actors.enemies.FlyingEnemy.new","actors/enemies/FlyingEnemy.hx",22,0x53b738df)
HX_STACK_THIS(this)
HX_STACK_ARG(homeSpawn,"homeSpawn")
HX_STACK_ARG(horizontal,"horizontal")
{
	HX_STACK_LINE(23)
	this->horizontal = horizontal;
	HX_STACK_LINE(25)
	int enemySize = (int)32;		HX_STACK_VAR(enemySize,"enemySize");
	HX_STACK_LINE(28)
	::openfl::geom::Point tmp = ::openfl::geom::Point_obj::__new(null(),null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(28)
	int tmp1 = enemySize;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(28)
	int tmp2 = enemySize;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(28)
	::openfl::geom::Point tmp3 = ::openfl::geom::Point_obj::__new(null(),null());		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(28)
	::openfl::geom::Point tmp4 = ::openfl::geom::Point_obj::__new((int)1,null());		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(27)
	::actors::Animation tmp5 = ::actors::Animation_obj::__new(HX_HCSTRING("LeftIdle","\xdb","\xa6","\x60","\x26"),(int)4,tmp,tmp1,tmp2,Array_obj< ::Dynamic >::__new().Add(tmp3).Add(tmp4),null(),null());		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(27)
	::actors::Animation leftIdle = tmp5;		HX_STACK_VAR(leftIdle,"leftIdle");
	HX_STACK_LINE(30)
	::openfl::geom::Point tmp6 = ::openfl::geom::Point_obj::__new((int)0,enemySize);		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(30)
	int tmp7 = enemySize;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(30)
	int tmp8 = enemySize;		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(30)
	::openfl::geom::Point tmp9 = ::openfl::geom::Point_obj::__new(null(),null());		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(30)
	::openfl::geom::Point tmp10 = ::openfl::geom::Point_obj::__new((int)1,null());		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(29)
	::actors::Animation tmp11 = ::actors::Animation_obj::__new(HX_HCSTRING("RightIdle","\xf0","\xdc","\x4c","\x52"),(int)4,tmp6,tmp7,tmp8,Array_obj< ::Dynamic >::__new().Add(tmp9).Add(tmp10),null(),null());		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(29)
	::actors::Animation rightIdle = tmp11;		HX_STACK_VAR(rightIdle,"rightIdle");
	HX_STACK_LINE(33)
	int tmp12 = (enemySize * (int)2);		HX_STACK_VAR(tmp12,"tmp12");
	HX_STACK_LINE(33)
	::openfl::geom::Point tmp13 = ::openfl::geom::Point_obj::__new((int)0,tmp12);		HX_STACK_VAR(tmp13,"tmp13");
	HX_STACK_LINE(33)
	int tmp14 = enemySize;		HX_STACK_VAR(tmp14,"tmp14");
	HX_STACK_LINE(33)
	int tmp15 = enemySize;		HX_STACK_VAR(tmp15,"tmp15");
	HX_STACK_LINE(33)
	::openfl::geom::Point tmp16 = ::openfl::geom::Point_obj::__new(null(),null());		HX_STACK_VAR(tmp16,"tmp16");
	HX_STACK_LINE(33)
	::openfl::geom::Point tmp17 = ::openfl::geom::Point_obj::__new((int)1,null());		HX_STACK_VAR(tmp17,"tmp17");
	HX_STACK_LINE(32)
	::actors::Animation tmp18 = ::actors::Animation_obj::__new(HX_HCSTRING("LeftHurt","\xd6","\x5b","\xc4","\x25"),(int)4,tmp13,tmp14,tmp15,Array_obj< ::Dynamic >::__new().Add(tmp16).Add(tmp17),null(),null());		HX_STACK_VAR(tmp18,"tmp18");
	HX_STACK_LINE(32)
	::actors::Animation leftHurt = tmp18;		HX_STACK_VAR(leftHurt,"leftHurt");
	HX_STACK_LINE(35)
	int tmp19 = (enemySize * (int)3);		HX_STACK_VAR(tmp19,"tmp19");
	HX_STACK_LINE(35)
	::openfl::geom::Point tmp20 = ::openfl::geom::Point_obj::__new((int)0,tmp19);		HX_STACK_VAR(tmp20,"tmp20");
	HX_STACK_LINE(35)
	int tmp21 = enemySize;		HX_STACK_VAR(tmp21,"tmp21");
	HX_STACK_LINE(35)
	int tmp22 = enemySize;		HX_STACK_VAR(tmp22,"tmp22");
	HX_STACK_LINE(35)
	::openfl::geom::Point tmp23 = ::openfl::geom::Point_obj::__new(null(),null());		HX_STACK_VAR(tmp23,"tmp23");
	HX_STACK_LINE(35)
	::openfl::geom::Point tmp24 = ::openfl::geom::Point_obj::__new((int)1,null());		HX_STACK_VAR(tmp24,"tmp24");
	HX_STACK_LINE(34)
	::actors::Animation tmp25 = ::actors::Animation_obj::__new(HX_HCSTRING("RightHurt","\xeb","\x91","\xb0","\x51"),(int)4,tmp20,tmp21,tmp22,Array_obj< ::Dynamic >::__new().Add(tmp23).Add(tmp24),null(),null());		HX_STACK_VAR(tmp25,"tmp25");
	HX_STACK_LINE(34)
	::actors::Animation rightHurt = tmp25;		HX_STACK_VAR(rightHurt,"rightHurt");
	HX_STACK_LINE(37)
	::haxe::ds::StringMap tmp26;		HX_STACK_VAR(tmp26,"tmp26");
	HX_STACK_LINE(37)
	{
		HX_STACK_LINE(37)
		::haxe::ds::StringMap tmp27 = ::haxe::ds::StringMap_obj::__new();		HX_STACK_VAR(tmp27,"tmp27");
		HX_STACK_LINE(37)
		::haxe::ds::StringMap tmp28 = tmp27;		HX_STACK_VAR(tmp28,"tmp28");
		HX_STACK_LINE(37)
		tmp26 = tmp28;
	}
	HX_STACK_LINE(37)
	this->animations = tmp26;
	HX_STACK_LINE(38)
	{
		HX_STACK_LINE(38)
		::String tmp27 = leftIdle->getName();		HX_STACK_VAR(tmp27,"tmp27");
		HX_STACK_LINE(38)
		::String k = tmp27;		HX_STACK_VAR(k,"k");
		HX_STACK_LINE(38)
		::haxe::ds::StringMap tmp28 = this->animations;		HX_STACK_VAR(tmp28,"tmp28");
		HX_STACK_LINE(38)
		::String tmp29 = k;		HX_STACK_VAR(tmp29,"tmp29");
		HX_STACK_LINE(38)
		::actors::Animation tmp30 = leftIdle;		HX_STACK_VAR(tmp30,"tmp30");
		HX_STACK_LINE(38)
		tmp28->set(tmp29,tmp30);
		HX_STACK_LINE(38)
		leftIdle;
	}
	HX_STACK_LINE(39)
	{
		HX_STACK_LINE(39)
		::String tmp27 = rightIdle->getName();		HX_STACK_VAR(tmp27,"tmp27");
		HX_STACK_LINE(39)
		::String k = tmp27;		HX_STACK_VAR(k,"k");
		HX_STACK_LINE(39)
		::haxe::ds::StringMap tmp28 = this->animations;		HX_STACK_VAR(tmp28,"tmp28");
		HX_STACK_LINE(39)
		::String tmp29 = k;		HX_STACK_VAR(tmp29,"tmp29");
		HX_STACK_LINE(39)
		::actors::Animation tmp30 = rightIdle;		HX_STACK_VAR(tmp30,"tmp30");
		HX_STACK_LINE(39)
		tmp28->set(tmp29,tmp30);
		HX_STACK_LINE(39)
		rightIdle;
	}
	HX_STACK_LINE(40)
	{
		HX_STACK_LINE(40)
		::String tmp27 = leftHurt->getName();		HX_STACK_VAR(tmp27,"tmp27");
		HX_STACK_LINE(40)
		::String k = tmp27;		HX_STACK_VAR(k,"k");
		HX_STACK_LINE(40)
		::haxe::ds::StringMap tmp28 = this->animations;		HX_STACK_VAR(tmp28,"tmp28");
		HX_STACK_LINE(40)
		::String tmp29 = k;		HX_STACK_VAR(tmp29,"tmp29");
		HX_STACK_LINE(40)
		::actors::Animation tmp30 = leftHurt;		HX_STACK_VAR(tmp30,"tmp30");
		HX_STACK_LINE(40)
		tmp28->set(tmp29,tmp30);
		HX_STACK_LINE(40)
		leftHurt;
	}
	HX_STACK_LINE(41)
	{
		HX_STACK_LINE(41)
		::String tmp27 = rightHurt->getName();		HX_STACK_VAR(tmp27,"tmp27");
		HX_STACK_LINE(41)
		::String k = tmp27;		HX_STACK_VAR(k,"k");
		HX_STACK_LINE(41)
		::haxe::ds::StringMap tmp28 = this->animations;		HX_STACK_VAR(tmp28,"tmp28");
		HX_STACK_LINE(41)
		::String tmp29 = k;		HX_STACK_VAR(tmp29,"tmp29");
		HX_STACK_LINE(41)
		::actors::Animation tmp30 = rightHurt;		HX_STACK_VAR(tmp30,"tmp30");
		HX_STACK_LINE(41)
		tmp28->set(tmp29,tmp30);
		HX_STACK_LINE(41)
		rightHurt;
	}
	HX_STACK_LINE(43)
	this->currentAnimation = leftIdle;
	HX_STACK_LINE(44)
	::actors::ObjectMover tmp27 = ::actors::ObjectMover_obj::__new(((Float).1),((Float).1),(int)0,(int)0,(int)0,(int)0,(int)2,(int)2,(int)0,(int)0,true,false);		HX_STACK_VAR(tmp27,"tmp27");
	HX_STACK_LINE(44)
	::actors::ObjectMover mover = tmp27;		HX_STACK_VAR(mover,"mover");
	HX_STACK_LINE(46)
	::openfl::display::Bitmap tmp28 = ::Main_obj::getBitmapAsset(HX_HCSTRING("assets/FlyingEnemy.png","\x48","\xa2","\x79","\xaa"));		HX_STACK_VAR(tmp28,"tmp28");
	HX_STACK_LINE(46)
	::actors::ObjectMover tmp29 = mover;		HX_STACK_VAR(tmp29,"tmp29");
	HX_STACK_LINE(46)
	int tmp30 = enemySize;		HX_STACK_VAR(tmp30,"tmp30");
	HX_STACK_LINE(46)
	int tmp31 = enemySize;		HX_STACK_VAR(tmp31,"tmp31");
	HX_STACK_LINE(46)
	::maps::mapobjects::SpawnPoint tmp32 = homeSpawn;		HX_STACK_VAR(tmp32,"tmp32");
	HX_STACK_LINE(46)
	::actors::actorsAI::FlyingAI tmp33 = ::actors::actorsAI::FlyingAI_obj::__new(horizontal);		HX_STACK_VAR(tmp33,"tmp33");
	HX_STACK_LINE(46)
	super::__construct(hx::ObjectPtr<OBJ_>(this),tmp28,tmp29,tmp30,tmp31,tmp32,tmp33);
	HX_STACK_LINE(48)
	Array< ::Dynamic > hits = Array_obj< ::Dynamic >::__new();		HX_STACK_VAR(hits,"hits");
	HX_STACK_LINE(49)
	int tmp34 = this->actorWidth;		HX_STACK_VAR(tmp34,"tmp34");
	HX_STACK_LINE(49)
	int tmp35 = (tmp34 + (int)2);		HX_STACK_VAR(tmp35,"tmp35");
	HX_STACK_LINE(49)
	int tmp36 = this->actorHeight;		HX_STACK_VAR(tmp36,"tmp36");
	HX_STACK_LINE(49)
	::openfl::geom::Rectangle tmp37 = ::openfl::geom::Rectangle_obj::__new((int)-1,(int)-1,tmp35,tmp36);		HX_STACK_VAR(tmp37,"tmp37");
	HX_STACK_LINE(49)
	hits->push(tmp37);
	HX_STACK_LINE(50)
	::actors::attacks::Attack tmp38 = ::actors::attacks::Attack_obj::__new(null(),hits,(int)-1,(int)1,(int)0,null(),null(),null(),null());		HX_STACK_VAR(tmp38,"tmp38");
	HX_STACK_LINE(50)
	this->attackBehavior = tmp38;
	HX_STACK_LINE(51)
	this->initiateAttack();
	HX_STACK_LINE(53)
	this->health = (int)1;
	HX_STACK_LINE(54)
	this->invulDuration = (int)15;
	HX_STACK_LINE(55)
	::openfl::geom::Rectangle tmp39 = ::openfl::geom::Rectangle_obj::__new((int)4,(int)10,(int)28,(int)18);		HX_STACK_VAR(tmp39,"tmp39");
	HX_STACK_LINE(55)
	this->collisionBounds = tmp39;
}
;
	return null();
}

//FlyingEnemy_obj::~FlyingEnemy_obj() { }

Dynamic FlyingEnemy_obj::__CreateEmpty() { return  new FlyingEnemy_obj; }
hx::ObjectPtr< FlyingEnemy_obj > FlyingEnemy_obj::__new(::maps::mapobjects::SpawnPoint homeSpawn,bool horizontal)
{  hx::ObjectPtr< FlyingEnemy_obj > _result_ = new FlyingEnemy_obj();
	_result_->__construct(homeSpawn,horizontal);
	return _result_;}

Dynamic FlyingEnemy_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< FlyingEnemy_obj > _result_ = new FlyingEnemy_obj();
	_result_->__construct(inArgs[0],inArgs[1]);
	return _result_;}

Void FlyingEnemy_obj::handleAnimation( ){
{
		HX_STACK_FRAME("actors.enemies.FlyingEnemy","handleAnimation",0x2b5514cf,"actors.enemies.FlyingEnemy.handleAnimation","actors/enemies/FlyingEnemy.hx",59,0x53b738df)
		HX_STACK_THIS(this)
		HX_STACK_LINE(60)
		this->super::handleAnimation();
		HX_STACK_LINE(62)
		bool tmp = this->invulnerable;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(62)
		if ((tmp)){
			HX_STACK_LINE(63)
			this->setAnimation(HX_HCSTRING("Hurt","\x2f","\x88","\xf0","\x2f"));
		}
		else{
			HX_STACK_LINE(65)
			this->setAnimation(HX_HCSTRING("Idle","\x34","\xd3","\x8c","\x30"));
		}
	}
return null();
}


Void FlyingEnemy_obj::damageReaction( ::maps::mapobjects::MapObject source){
{
		HX_STACK_FRAME("actors.enemies.FlyingEnemy","damageReaction",0x92d17005,"actors.enemies.FlyingEnemy.damageReaction","actors/enemies/FlyingEnemy.hx",69,0x53b738df)
		HX_STACK_THIS(this)
		HX_STACK_ARG(source,"source")
		HX_STACK_LINE(70)
		::maps::mapobjects::MapObject tmp = source;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(70)
		this->super::damageReaction(tmp);
		HX_STACK_LINE(72)
		this->setAnimation(HX_HCSTRING("Hurt","\x2f","\x88","\xf0","\x2f"));
	}
return null();
}


Void FlyingEnemy_obj::goUp( ){
{
		HX_STACK_FRAME("actors.enemies.FlyingEnemy","goUp",0x8df3a130,"actors.enemies.FlyingEnemy.goUp","actors/enemies/FlyingEnemy.hx",75,0x53b738df)
		HX_STACK_THIS(this)
		HX_STACK_LINE(76)
		this->alignmentLeft = true;
		HX_STACK_LINE(77)
		::actors::ObjectMover tmp = this->currentMover;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(77)
		tmp->goUp();
		HX_STACK_LINE(78)
		::actors::ObjectMover tmp1 = this->defaultMover;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(78)
		::actors::ObjectMover tmp2 = this->currentMover;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(78)
		bool tmp3 = (tmp1 != tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(78)
		if ((tmp3)){
			HX_STACK_LINE(79)
			::actors::ObjectMover tmp4 = this->defaultMover;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(79)
			tmp4->goUp();
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlyingEnemy_obj,goUp,(void))

Void FlyingEnemy_obj::goDown( ){
{
		HX_STACK_FRAME("actors.enemies.FlyingEnemy","goDown",0x9fc55277,"actors.enemies.FlyingEnemy.goDown","actors/enemies/FlyingEnemy.hx",81,0x53b738df)
		HX_STACK_THIS(this)
		HX_STACK_LINE(82)
		this->alignmentLeft = false;
		HX_STACK_LINE(83)
		::actors::ObjectMover tmp = this->currentMover;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(83)
		tmp->goDown();
		HX_STACK_LINE(84)
		::actors::ObjectMover tmp1 = this->defaultMover;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(84)
		::actors::ObjectMover tmp2 = this->currentMover;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(84)
		bool tmp3 = (tmp1 != tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(84)
		if ((tmp3)){
			HX_STACK_LINE(85)
			::actors::ObjectMover tmp4 = this->defaultMover;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(85)
			tmp4->goDown();
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlyingEnemy_obj,goDown,(void))

Void FlyingEnemy_obj::stopUp( ){
{
		HX_STACK_FRAME("actors.enemies.FlyingEnemy","stopUp",0x697b5eca,"actors.enemies.FlyingEnemy.stopUp","actors/enemies/FlyingEnemy.hx",88,0x53b738df)
		HX_STACK_THIS(this)
		HX_STACK_LINE(89)
		::actors::ObjectMover tmp = this->currentMover;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(89)
		tmp->stopUp();
		HX_STACK_LINE(90)
		::actors::ObjectMover tmp1 = this->defaultMover;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(90)
		::actors::ObjectMover tmp2 = this->currentMover;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(90)
		bool tmp3 = (tmp1 != tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(90)
		if ((tmp3)){
			HX_STACK_LINE(91)
			::actors::ObjectMover tmp4 = this->defaultMover;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(91)
			tmp4->stopUp();
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlyingEnemy_obj,stopUp,(void))

Void FlyingEnemy_obj::stopDown( ){
{
		HX_STACK_FRAME("actors.enemies.FlyingEnemy","stopDown",0x3aeb2a91,"actors.enemies.FlyingEnemy.stopDown","actors/enemies/FlyingEnemy.hx",93,0x53b738df)
		HX_STACK_THIS(this)
		HX_STACK_LINE(94)
		::actors::ObjectMover tmp = this->currentMover;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(94)
		tmp->stopDown();
		HX_STACK_LINE(95)
		::actors::ObjectMover tmp1 = this->defaultMover;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(95)
		::actors::ObjectMover tmp2 = this->currentMover;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(95)
		bool tmp3 = (tmp1 != tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(95)
		if ((tmp3)){
			HX_STACK_LINE(96)
			::actors::ObjectMover tmp4 = this->defaultMover;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(96)
			tmp4->stopDown();
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlyingEnemy_obj,stopDown,(void))

Void FlyingEnemy_obj::setAnimation( ::String action){
{
		HX_STACK_FRAME("actors.enemies.FlyingEnemy","setAnimation",0x91f7a68f,"actors.enemies.FlyingEnemy.setAnimation","actors/enemies/FlyingEnemy.hx",99,0x53b738df)
		HX_STACK_THIS(this)
		HX_STACK_ARG(action,"action")
		HX_STACK_LINE(101)
		bool tmp = this->alignmentLeft;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(101)
		if ((tmp)){
			HX_STACK_LINE(102)
			::String tmp1 = (HX_HCSTRING("Left","\x27","\x34","\x89","\x32") + action);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(102)
			::actors::Animation tmp2 = this->getAnimation(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(102)
			this->currentAnimation = tmp2;
		}
		else{
			HX_STACK_LINE(104)
			::String tmp1 = (HX_HCSTRING("Right","\xbc","\x7b","\x91","\x7c") + action);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(104)
			::actors::Animation tmp2 = this->getAnimation(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(104)
			this->currentAnimation = tmp2;
		}
	}
return null();
}


::actors::enemies::Enemy FlyingEnemy_obj::createClone( ::maps::mapobjects::SpawnPoint spawnPoint){
	HX_STACK_FRAME("actors.enemies.FlyingEnemy","createClone",0x018543d4,"actors.enemies.FlyingEnemy.createClone","actors/enemies/FlyingEnemy.hx",109,0x53b738df)
	HX_STACK_THIS(this)
	HX_STACK_ARG(spawnPoint,"spawnPoint")
	HX_STACK_LINE(110)
	::maps::mapobjects::SpawnPoint tmp = spawnPoint;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(110)
	bool tmp1 = this->horizontal;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(110)
	::actors::enemies::FlyingEnemy tmp2 = ::actors::enemies::FlyingEnemy_obj::__new(tmp,tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(110)
	return tmp2;
}



FlyingEnemy_obj::FlyingEnemy_obj()
{
}

Dynamic FlyingEnemy_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"goUp") ) { return goUp_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"goDown") ) { return goDown_dyn(); }
		if (HX_FIELD_EQ(inName,"stopUp") ) { return stopUp_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"stopDown") ) { return stopDown_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"horizontal") ) { return horizontal; }
		break;
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

Dynamic FlyingEnemy_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 10:
		if (HX_FIELD_EQ(inName,"horizontal") ) { horizontal=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool FlyingEnemy_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	return false;
}

void FlyingEnemy_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("horizontal","\xe4","\xfc","\xc3","\x15"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsBool,(int)offsetof(FlyingEnemy_obj,horizontal),HX_HCSTRING("horizontal","\xe4","\xfc","\xc3","\x15")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("horizontal","\xe4","\xfc","\xc3","\x15"),
	HX_HCSTRING("handleAnimation","\x3c","\x96","\xa0","\x19"),
	HX_HCSTRING("damageReaction","\x38","\xbb","\x07","\xb4"),
	HX_HCSTRING("goUp","\xa3","\x7e","\x69","\x44"),
	HX_HCSTRING("goDown","\xaa","\xb2","\x83","\x45"),
	HX_HCSTRING("stopUp","\xfd","\xbe","\x39","\x0f"),
	HX_HCSTRING("stopDown","\x84","\x3d","\x28","\x95"),
	HX_HCSTRING("setAnimation","\x02","\xaf","\x84","\x6f"),
	HX_HCSTRING("createClone","\xc1","\x4a","\xde","\x71"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FlyingEnemy_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FlyingEnemy_obj::__mClass,"__mClass");
};

#endif

hx::Class FlyingEnemy_obj::__mClass;

void FlyingEnemy_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("actors.enemies.FlyingEnemy","\x01","\x49","\x37","\x1f");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &FlyingEnemy_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< FlyingEnemy_obj >;
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
