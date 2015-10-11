#include <hxcpp.h>

#include "hxMath.h"
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
#ifndef INCLUDED_actors_attacks_Attack
#include <actors/attacks/Attack.h>
#endif
#ifndef INCLUDED_actors_attacks_Hitbox
#include <actors/attacks/Hitbox.h>
#endif
#ifndef INCLUDED_actors_attacks_Projectile
#include <actors/attacks/Projectile.h>
#endif
#ifndef INCLUDED_haxe_IMap
#include <haxe/IMap.h>
#endif
#ifndef INCLUDED_haxe_ds_StringMap
#include <haxe/ds/StringMap.h>
#endif
#ifndef INCLUDED_maps_AreaMap
#include <maps/AreaMap.h>
#endif
#ifndef INCLUDED_maps_mapobjects_MapObject
#include <maps/mapobjects/MapObject.h>
#endif
#ifndef INCLUDED_maps_mapobjects_Tile
#include <maps/mapobjects/Tile.h>
#endif
#ifndef INCLUDED_openfl_display_Bitmap
#include <openfl/display/Bitmap.h>
#endif
#ifndef INCLUDED_openfl_display_BitmapData
#include <openfl/display/BitmapData.h>
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
#ifndef INCLUDED_openfl_display_PixelSnapping
#include <openfl/display/PixelSnapping.h>
#endif
#ifndef INCLUDED_openfl_display_Sprite
#include <openfl/display/Sprite.h>
#endif
#ifndef INCLUDED_openfl_errors_Error
#include <openfl/errors/Error.h>
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

Void Actor_obj::__construct(::actors::Actor implementation,::openfl::display::Bitmap defaultBmp,bool passable,::haxe::ds::StringMap animations,::actors::ObjectMover mover,int actorWidth,hx::Null< int >  __o_actorHeight)
{
HX_STACK_FRAME("actors.Actor","new",0xeda781b7,"actors.Actor.new","actors/Actor.hx",50,0x8963ca9a)
HX_STACK_THIS(this)
HX_STACK_ARG(implementation,"implementation")
HX_STACK_ARG(defaultBmp,"defaultBmp")
HX_STACK_ARG(passable,"passable")
HX_STACK_ARG(animations,"animations")
HX_STACK_ARG(mover,"mover")
HX_STACK_ARG(actorWidth,"actorWidth")
HX_STACK_ARG(__o_actorHeight,"actorHeight")
int actorHeight = __o_actorHeight.Default(-1);
{
	HX_STACK_LINE(51)
	bool tmp = (hx::ObjectPtr<OBJ_>(this) != implementation);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(51)
	if ((tmp)){
		HX_STACK_LINE(51)
		::openfl::errors::Error tmp1 = ::openfl::errors::Error_obj::__new(HX_HCSTRING("Actor is meant to be used as an abstract class.","\x80","\xba","\x8c","\x11"),null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(51)
		HX_STACK_DO_THROW(tmp1);
	}
	HX_STACK_LINE(53)
	this->actorWidth = actorWidth;
	HX_STACK_LINE(54)
	bool tmp1 = (actorHeight == (int)-1);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(54)
	if ((tmp1)){
		HX_STACK_LINE(55)
		actorHeight = actorWidth;
	}
	HX_STACK_LINE(56)
	this->actorHeight = actorHeight;
	HX_STACK_LINE(57)
	int tmp2 = this->actorHeight;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(57)
	this->originalActorHeight = tmp2;
	HX_STACK_LINE(58)
	int tmp3 = this->actorWidth;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(58)
	this->originalActorWidth = tmp3;
	HX_STACK_LINE(60)
	this->animations = animations;
	HX_STACK_LINE(61)
	this->baseBmp = defaultBmp;
	HX_STACK_LINE(62)
	::actors::Animation tmp4 = this->currentAnimation;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(62)
	::openfl::display::Bitmap tmp5 = defaultBmp;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(62)
	::openfl::display::Bitmap tmp6 = this->getAnimationBmp(tmp4,tmp5);		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(62)
	this->actorBmp = tmp6;
	HX_STACK_LINE(64)
	::openfl::display::Bitmap tmp7 = this->actorBmp;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(64)
	bool tmp8 = passable;		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(64)
	super::__construct(hx::ObjectPtr<OBJ_>(this),tmp7,tmp8);
	HX_STACK_LINE(66)
	this->defaultMover = mover;
	HX_STACK_LINE(67)
	::actors::ObjectMover tmp9 = this->defaultMover;		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(67)
	this->currentMover = tmp9;
	HX_STACK_LINE(68)
	::openfl::geom::Rectangle tmp10 = ::openfl::geom::Rectangle_obj::__new((int)0,(int)0,actorWidth,actorHeight);		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(68)
	this->collisionBounds = tmp10;
	HX_STACK_LINE(69)
	::openfl::geom::Rectangle tmp11 = this->collisionBounds;		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(69)
	this->originalBounds = tmp11;
	HX_STACK_LINE(71)
	this->maxHealth = (int)1;
	HX_STACK_LINE(72)
	int tmp12 = this->maxHealth;		HX_STACK_VAR(tmp12,"tmp12");
	HX_STACK_LINE(72)
	this->health = tmp12;
	HX_STACK_LINE(73)
	this->unstoppable = false;
	HX_STACK_LINE(74)
	this->invulnerable = false;
	HX_STACK_LINE(75)
	this->invulDuration = (int)30;
	HX_STACK_LINE(76)
	this->invulCount = (int)0;
	HX_STACK_LINE(77)
	this->stunCount = (int)0;
}
;
	return null();
}

//Actor_obj::~Actor_obj() { }

Dynamic Actor_obj::__CreateEmpty() { return  new Actor_obj; }
hx::ObjectPtr< Actor_obj > Actor_obj::__new(::actors::Actor implementation,::openfl::display::Bitmap defaultBmp,bool passable,::haxe::ds::StringMap animations,::actors::ObjectMover mover,int actorWidth,hx::Null< int >  __o_actorHeight)
{  hx::ObjectPtr< Actor_obj > _result_ = new Actor_obj();
	_result_->__construct(implementation,defaultBmp,passable,animations,mover,actorWidth,__o_actorHeight);
	return _result_;}

Dynamic Actor_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Actor_obj > _result_ = new Actor_obj();
	_result_->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3],inArgs[4],inArgs[5],inArgs[6]);
	return _result_;}

Void Actor_obj::updateActor( ){
{
		HX_STACK_FRAME("actors.Actor","updateActor",0x93369483,"actors.Actor.updateActor","actors/Actor.hx",80,0x8963ca9a)
		HX_STACK_THIS(this)
		HX_STACK_LINE(82)
		this->updateStun();
		HX_STACK_LINE(83)
		this->updateAttack();
		HX_STACK_LINE(84)
		this->updateHitbox();
		HX_STACK_LINE(85)
		this->updateActorAnimation();
		HX_STACK_LINE(86)
		::actors::ObjectMover tmp = this->currentMover;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(86)
		tmp->updateMovement();
		HX_STACK_LINE(88)
		this->moveXAxis();
		HX_STACK_LINE(89)
		this->moveYAxis();
		HX_STACK_LINE(91)
		this->checkInvulnerable();
		HX_STACK_LINE(92)
		this->checkDamage();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Actor_obj,updateActor,(void))

Void Actor_obj::updateStun( ){
{
		HX_STACK_FRAME("actors.Actor","updateStun",0x092a176c,"actors.Actor.updateStun","actors/Actor.hx",95,0x8963ca9a)
		HX_STACK_THIS(this)
		HX_STACK_LINE(96)
		int tmp = this->stunCount;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(96)
		bool tmp1 = (tmp > (int)0);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(96)
		if ((tmp1)){
			HX_STACK_LINE(96)
			hx::SubEq(this->stunCount,(int)1);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Actor_obj,updateStun,(void))

Void Actor_obj::stunLock( int duration){
{
		HX_STACK_FRAME("actors.Actor","stunLock",0xb37ff58e,"actors.Actor.stunLock","actors/Actor.hx",98,0x8963ca9a)
		HX_STACK_THIS(this)
		HX_STACK_ARG(duration,"duration")
		HX_STACK_LINE(100)
		this->stunCount = duration;
		HX_STACK_LINE(101)
		bool tmp = (duration > (int)0);		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(101)
		if ((tmp)){
			HX_STACK_LINE(102)
			::actors::ObjectMover tmp1 = this->currentMover;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(102)
			tmp1->freeze();
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Actor_obj,stunLock,(void))

Void Actor_obj::updateAttack( ){
{
		HX_STACK_FRAME("actors.Actor","updateAttack",0x06508e7a,"actors.Actor.updateAttack","actors/Actor.hx",105,0x8963ca9a)
		HX_STACK_THIS(this)
		HX_STACK_LINE(106)
		::actors::attacks::Attack tmp = this->attackBehavior;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(106)
		bool tmp1 = (tmp == null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(106)
		if ((tmp1)){
			HX_STACK_LINE(106)
			return null();
		}
		HX_STACK_LINE(108)
		::actors::attacks::Attack tmp2 = this->attackBehavior;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(108)
		::actors::ObjectMover tmp3 = this->currentMover;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(108)
		bool tmp4 = tmp2->updateAttack(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(108)
		if ((tmp4)){
			HX_STACK_LINE(109)
			this->endAttack();
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Actor_obj,updateAttack,(void))

Void Actor_obj::updateHitbox( ){
{
		HX_STACK_FRAME("actors.Actor","updateHitbox",0x7d68804a,"actors.Actor.updateHitbox","actors/Actor.hx",111,0x8963ca9a)
		HX_STACK_THIS(this)
		HX_STACK_LINE(112)
		::actors::attacks::Hitbox tmp = this->hitBox;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(112)
		bool tmp1 = (tmp == null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(112)
		if ((tmp1)){
			HX_STACK_LINE(112)
			return null();
		}
		HX_STACK_LINE(114)
		::actors::attacks::Hitbox tmp2 = this->hitBox;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(114)
		bool tmp3 = tmp2->updateHitbox();		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(114)
		if ((tmp3)){
			HX_STACK_LINE(115)
			this->removeHitbox();
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Actor_obj,updateHitbox,(void))

Void Actor_obj::removeHitbox( ){
{
		HX_STACK_FRAME("actors.Actor","removeHitbox",0xecd274c5,"actors.Actor.removeHitbox","actors/Actor.hx",117,0x8963ca9a)
		HX_STACK_THIS(this)
		HX_STACK_LINE(118)
		::actors::attacks::Hitbox tmp = this->hitBox;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(118)
		bool tmp1 = (tmp == null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(118)
		if ((tmp1)){
			HX_STACK_LINE(118)
			return null();
		}
		HX_STACK_LINE(120)
		::actors::attacks::Hitbox tmp2 = this->hitBox;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(120)
		tmp2->resetHitbox();
		HX_STACK_LINE(121)
		::actors::attacks::Hitbox tmp3 = this->hitBox;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(121)
		bool tmp4 = this->contains(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(121)
		if ((tmp4)){
			HX_STACK_LINE(122)
			::actors::attacks::Hitbox tmp5 = this->hitBox;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(122)
			this->removeChild(tmp5);
		}
		HX_STACK_LINE(123)
		this->hitBox = null();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Actor_obj,removeHitbox,(void))

Void Actor_obj::addHitbox( ::actors::attacks::Hitbox hitBox){
{
		HX_STACK_FRAME("actors.Actor","addHitbox",0xb5c5ef30,"actors.Actor.addHitbox","actors/Actor.hx",125,0x8963ca9a)
		HX_STACK_THIS(this)
		HX_STACK_ARG(hitBox,"hitBox")
		HX_STACK_LINE(126)
		::actors::attacks::Hitbox tmp = this->hitBox;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(126)
		bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(126)
		if ((tmp1)){
			HX_STACK_LINE(127)
			this->removeHitbox();
		}
		HX_STACK_LINE(128)
		::actors::attacks::Hitbox tmp2 = hitBox;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(128)
		this->addChild(tmp2);
		HX_STACK_LINE(129)
		this->hitBox = hitBox;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Actor_obj,addHitbox,(void))

bool Actor_obj::isHitting( ::actors::Actor actor){
	HX_STACK_FRAME("actors.Actor","isHitting",0xa221828e,"actors.Actor.isHitting","actors/Actor.hx",131,0x8963ca9a)
	HX_STACK_THIS(this)
	HX_STACK_ARG(actor,"actor")
	HX_STACK_LINE(132)
	::actors::attacks::Hitbox tmp = this->hitBox;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(132)
	bool tmp1 = (tmp == null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(132)
	if ((tmp1)){
		HX_STACK_LINE(132)
		return false;
	}
	HX_STACK_LINE(134)
	::actors::attacks::Hitbox tmp2 = this->hitBox;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(134)
	::actors::Actor tmp3 = actor;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(134)
	bool tmp4 = tmp2->isHitting(hx::ObjectPtr<OBJ_>(this),tmp3);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(134)
	return tmp4;
}


HX_DEFINE_DYNAMIC_FUNC1(Actor_obj,isHitting,return )

int Actor_obj::getAttackDamage( ){
	HX_STACK_FRAME("actors.Actor","getAttackDamage",0x3bea33e4,"actors.Actor.getAttackDamage","actors/Actor.hx",136,0x8963ca9a)
	HX_STACK_THIS(this)
	HX_STACK_LINE(137)
	::actors::attacks::Attack tmp = this->attackBehavior;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(137)
	bool tmp1 = (tmp == null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(137)
	if ((tmp1)){
		HX_STACK_LINE(137)
		return (int)0;
	}
	HX_STACK_LINE(138)
	::actors::attacks::Attack tmp2 = this->attackBehavior;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(138)
	int tmp3 = tmp2->getDamage();		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(138)
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC0(Actor_obj,getAttackDamage,return )

::actors::attacks::Attack Actor_obj::getAttackBehavior( ){
	HX_STACK_FRAME("actors.Actor","getAttackBehavior",0xefdfbb47,"actors.Actor.getAttackBehavior","actors/Actor.hx",140,0x8963ca9a)
	HX_STACK_THIS(this)
	HX_STACK_LINE(141)
	::actors::attacks::Attack tmp = this->attackBehavior;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(141)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(Actor_obj,getAttackBehavior,return )

Void Actor_obj::updateActorAnimation( ){
{
		HX_STACK_FRAME("actors.Actor","updateActorAnimation",0xb67a1201,"actors.Actor.updateActorAnimation","actors/Actor.hx",145,0x8963ca9a)
		HX_STACK_THIS(this)
		HX_STACK_LINE(147)
		::actors::Animation tmp = this->currentAnimation;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(147)
		tmp->updateAnimation();
		HX_STACK_LINE(148)
		this->removeBmp();
		HX_STACK_LINE(149)
		::actors::Animation tmp1 = this->currentAnimation;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(149)
		this->addAnimationBmp(tmp1);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Actor_obj,updateActorAnimation,(void))

Void Actor_obj::removeBmp( ){
{
		HX_STACK_FRAME("actors.Actor","removeBmp",0x715fa6f8,"actors.Actor.removeBmp","actors/Actor.hx",153,0x8963ca9a)
		HX_STACK_THIS(this)
		HX_STACK_LINE(154)
		::openfl::display::Bitmap tmp = this->actorBmp;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(154)
		bool tmp1 = this->contains(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(154)
		if ((tmp1)){
			HX_STACK_LINE(155)
			::openfl::display::Bitmap tmp2 = this->actorBmp;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(155)
			this->removeChild(tmp2);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Actor_obj,removeBmp,(void))

Void Actor_obj::addAnimationBmp( ::actors::Animation animation){
{
		HX_STACK_FRAME("actors.Actor","addAnimationBmp",0x19750339,"actors.Actor.addAnimationBmp","actors/Actor.hx",157,0x8963ca9a)
		HX_STACK_THIS(this)
		HX_STACK_ARG(animation,"animation")
		HX_STACK_LINE(159)
		::actors::Animation tmp = this->currentAnimation;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(159)
		::openfl::display::Bitmap tmp1 = this->baseBmp;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(159)
		::openfl::display::Bitmap tmp2 = this->getAnimationBmp(tmp,tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(159)
		this->actorBmp = tmp2;
		HX_STACK_LINE(160)
		::openfl::display::Bitmap tmp3 = this->actorBmp;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(160)
		this->addChild(tmp3);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Actor_obj,addAnimationBmp,(void))

::openfl::display::Bitmap Actor_obj::getAnimationBmp( ::actors::Animation animation,::openfl::display::Bitmap bitmap){
	HX_STACK_FRAME("actors.Actor","getAnimationBmp",0xb60fed2e,"actors.Actor.getAnimationBmp","actors/Actor.hx",163,0x8963ca9a)
	HX_STACK_THIS(this)
	HX_STACK_ARG(animation,"animation")
	HX_STACK_ARG(bitmap,"bitmap")
	HX_STACK_LINE(165)
	::openfl::geom::Rectangle tmp = animation->getRectangle();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(165)
	::openfl::geom::Rectangle frame = tmp;		HX_STACK_VAR(frame,"frame");
	HX_STACK_LINE(166)
	int tmp1 = this->actorWidth;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(166)
	int tmp2 = this->actorHeight;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(166)
	::openfl::display::BitmapData tmp3 = ::openfl::display::BitmapData_obj::__new(tmp1,tmp2,null(),null());		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(166)
	::openfl::display::Bitmap tmp4 = ::openfl::display::Bitmap_obj::__new(tmp3,null(),null());		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(166)
	::openfl::display::Bitmap animationBmp = tmp4;		HX_STACK_VAR(animationBmp,"animationBmp");
	HX_STACK_LINE(167)
	::openfl::display::BitmapData tmp5 = bitmap->bitmapData;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(167)
	::openfl::geom::Rectangle tmp6 = frame;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(167)
	::openfl::geom::Point tmp7 = ::openfl::geom::Point_obj::__new(null(),null());		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(167)
	animationBmp->bitmapData->copyPixels(tmp5,tmp6,tmp7,null(),null(),null());
	HX_STACK_LINE(169)
	::openfl::display::Bitmap tmp8 = animationBmp;		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(169)
	return tmp8;
}


HX_DEFINE_DYNAMIC_FUNC2(Actor_obj,getAnimationBmp,return )

::actors::Animation Actor_obj::getAnimation( ::String title){
	HX_STACK_FRAME("actors.Actor","getAnimation",0x81087757,"actors.Actor.getAnimation","actors/Actor.hx",172,0x8963ca9a)
	HX_STACK_THIS(this)
	HX_STACK_ARG(title,"title")
	HX_STACK_LINE(173)
	::haxe::ds::StringMap tmp = this->animations;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(173)
	::String tmp1 = title;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(173)
	::actors::Animation tmp2 = tmp->get(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(173)
	::actors::Animation tmp3 = tmp2;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(173)
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC1(Actor_obj,getAnimation,return )

::String Actor_obj::getAnimationName( ){
	HX_STACK_FRAME("actors.Actor","getAnimationName",0x9fc50d42,"actors.Actor.getAnimationName","actors/Actor.hx",175,0x8963ca9a)
	HX_STACK_THIS(this)
	HX_STACK_LINE(176)
	::actors::Animation tmp = this->currentAnimation;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(176)
	bool tmp1 = (tmp == null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(176)
	if ((tmp1)){
		HX_STACK_LINE(177)
		return HX_HCSTRING("","\x00","\x00","\x00","\x00");
	}
	HX_STACK_LINE(178)
	::actors::Animation tmp2 = this->currentAnimation;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(178)
	::String tmp3 = tmp2->getName();		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(178)
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC0(Actor_obj,getAnimationName,return )

Void Actor_obj::checkDamage( ){
{
		HX_STACK_FRAME("actors.Actor","checkDamage",0x91edc3ae,"actors.Actor.checkDamage","actors/Actor.hx",181,0x8963ca9a)
		HX_STACK_THIS(this)
		HX_STACK_LINE(183)
		::maps::AreaMap tmp = this->currentMap;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(183)
		Array< ::Dynamic > hitboxCollisions = tmp->checkActorHitBoxes(hx::ObjectPtr<OBJ_>(this));		HX_STACK_VAR(hitboxCollisions,"hitboxCollisions");
		HX_STACK_LINE(184)
		bool tmp1 = (hitboxCollisions->length > (int)0);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(184)
		if ((tmp1)){
			HX_STACK_LINE(185)
			::actors::Actor tmp2 = hitboxCollisions->__get((int)0).StaticCast< ::actors::Actor >();		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(185)
			::actors::Actor tmp3 = hitboxCollisions->__get((int)0).StaticCast< ::actors::Actor >();		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(185)
			::actors::attacks::Attack tmp4 = tmp3->getAttackBehavior();		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(185)
			this->takeActorDamage(tmp2,tmp4);
		}
		HX_STACK_LINE(187)
		::maps::AreaMap tmp2 = this->currentMap;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(187)
		Array< ::Dynamic > projectileCollisions = tmp2->checkProjectileBounds(hx::ObjectPtr<OBJ_>(this));		HX_STACK_VAR(projectileCollisions,"projectileCollisions");
		HX_STACK_LINE(188)
		bool tmp3 = (projectileCollisions->length > (int)0);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(188)
		if ((tmp3)){
			HX_STACK_LINE(189)
			::actors::attacks::Projectile tmp4 = projectileCollisions->__get((int)0).StaticCast< ::actors::attacks::Projectile >();		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(189)
			bool tmp5 = this->takeProjectileDamage(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(189)
			if ((tmp5)){
				HX_STACK_LINE(190)
				::maps::AreaMap tmp6 = this->currentMap;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(190)
				::actors::attacks::Projectile tmp7 = projectileCollisions->__get((int)0).StaticCast< ::actors::attacks::Projectile >();		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(190)
				tmp6->removeProjectile(tmp7);
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Actor_obj,checkDamage,(void))

Void Actor_obj::checkInvulnerable( ){
{
		HX_STACK_FRAME("actors.Actor","checkInvulnerable",0x4a9b236c,"actors.Actor.checkInvulnerable","actors/Actor.hx",193,0x8963ca9a)
		HX_STACK_THIS(this)
		HX_STACK_LINE(194)
		bool tmp = this->invulnerable;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(194)
		if ((tmp)){
			HX_STACK_LINE(195)
			hx::AddEq(this->invulCount,(int)1);
			HX_STACK_LINE(196)
			int tmp1 = this->invulCount;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(196)
			int tmp2 = this->invulDuration;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(196)
			bool tmp3 = (tmp1 >= tmp2);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(196)
			if ((tmp3)){
				HX_STACK_LINE(197)
				this->invulnerable = false;
				HX_STACK_LINE(198)
				this->set_alpha((int)1);
				HX_STACK_LINE(199)
				this->invulCount = (int)0;
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Actor_obj,checkInvulnerable,(void))

bool Actor_obj::takeActorDamage( ::actors::Actor actor,::actors::attacks::Attack attack){
	HX_STACK_FRAME("actors.Actor","takeActorDamage",0x95401414,"actors.Actor.takeActorDamage","actors/Actor.hx",204,0x8963ca9a)
	HX_STACK_THIS(this)
	HX_STACK_ARG(actor,"actor")
	HX_STACK_ARG(attack,"attack")
	HX_STACK_LINE(205)
	int tmp = actor->getAttackDamage();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(205)
	::actors::Actor tmp1 = actor;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(205)
	bool tmp2 = this->takeDamage(tmp,tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(205)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC2(Actor_obj,takeActorDamage,return )

bool Actor_obj::takeProjectileDamage( ::actors::attacks::Projectile projectile){
	HX_STACK_FRAME("actors.Actor","takeProjectileDamage",0x11eb8e68,"actors.Actor.takeProjectileDamage","actors/Actor.hx",207,0x8963ca9a)
	HX_STACK_THIS(this)
	HX_STACK_ARG(projectile,"projectile")
	HX_STACK_LINE(208)
	int tmp = projectile->getProjectileDamage();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(208)
	::actors::attacks::Projectile tmp1 = projectile;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(208)
	bool tmp2 = this->takeDamage(tmp,tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(208)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC1(Actor_obj,takeProjectileDamage,return )

bool Actor_obj::takeDamage( int damage,::maps::mapobjects::MapObject source){
	HX_STACK_FRAME("actors.Actor","takeDamage",0xb5d6e39f,"actors.Actor.takeDamage","actors/Actor.hx",210,0x8963ca9a)
	HX_STACK_THIS(this)
	HX_STACK_ARG(damage,"damage")
	HX_STACK_ARG(source,"source")
	HX_STACK_LINE(211)
	bool tmp = this->invulnerable;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(211)
	if ((tmp)){
		HX_STACK_LINE(211)
		return false;
	}
	else{
		HX_STACK_LINE(212)
		bool tmp1 = this->unstoppable;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(212)
		if ((tmp1)){
			HX_STACK_LINE(212)
			return false;
		}
	}
	HX_STACK_LINE(214)
	hx::SubEq(this->health,damage);
	HX_STACK_LINE(216)
	::maps::mapobjects::MapObject tmp1 = source;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(216)
	this->calculateDamage(tmp1);
	HX_STACK_LINE(218)
	return true;
}


HX_DEFINE_DYNAMIC_FUNC2(Actor_obj,takeDamage,return )

Void Actor_obj::calculateDamage( ::maps::mapobjects::MapObject source){
{
		HX_STACK_FRAME("actors.Actor","calculateDamage",0xbc12824c,"actors.Actor.calculateDamage","actors/Actor.hx",220,0x8963ca9a)
		HX_STACK_THIS(this)
		HX_STACK_ARG(source,"source")
		HX_STACK_LINE(222)
		int tmp = this->health;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(222)
		bool tmp1 = (tmp <= (int)0);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(222)
		if ((tmp1)){
			HX_STACK_LINE(223)
			this->kill();
		}
		else{
			HX_STACK_LINE(226)
			this->set_alpha(((Float).7));
			HX_STACK_LINE(227)
			this->invulnerable = true;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Actor_obj,calculateDamage,(void))

Void Actor_obj::kill( ){
{
		HX_STACK_FRAME("actors.Actor","kill",0x02f15a67,"actors.Actor.kill","actors/Actor.hx",231,0x8963ca9a)
		HX_STACK_THIS(this)
		HX_STACK_LINE(232)
		this->endAttack();
		HX_STACK_LINE(233)
		::actors::ObjectMover tmp = this->currentMover;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(233)
		tmp->freeze();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Actor_obj,kill,(void))

Void Actor_obj::setGrounded( ){
{
		HX_STACK_FRAME("actors.Actor","setGrounded",0x52b394bf,"actors.Actor.setGrounded","actors/Actor.hx",235,0x8963ca9a)
		HX_STACK_THIS(this)
		HX_STACK_LINE(236)
		::actors::ObjectMover tmp = this->currentMover;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(236)
		tmp->setGrounded();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Actor_obj,setGrounded,(void))

Void Actor_obj::initiateAttack( ){
{
		HX_STACK_FRAME("actors.Actor","initiateAttack",0xd1fbd30a,"actors.Actor.initiateAttack","actors/Actor.hx",238,0x8963ca9a)
		HX_STACK_THIS(this)
		HX_STACK_LINE(239)
		::actors::attacks::Attack tmp = this->attackBehavior;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(239)
		bool tmp1 = (tmp == null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(239)
		if ((tmp1)){
			HX_STACK_LINE(239)
			return null();
		}
		HX_STACK_LINE(241)
		::actors::attacks::Attack tmp2 = this->attackBehavior;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(241)
		tmp2->startAttack();
		HX_STACK_LINE(243)
		::actors::attacks::Attack tmp3 = this->attackBehavior;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(243)
		bool tmp4 = tmp3->grantsUnstoppable();		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(243)
		if ((tmp4)){
			HX_STACK_LINE(244)
			this->unstoppable = true;
		}
		HX_STACK_LINE(245)
		::actors::attacks::Attack tmp5 = this->attackBehavior;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(245)
		::actors::ObjectMover tmp6 = tmp5->getMovement();		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(245)
		bool tmp7 = (tmp6 != null());		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(245)
		if ((tmp7)){
			HX_STACK_LINE(246)
			::actors::attacks::Attack tmp8 = this->attackBehavior;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(246)
			::actors::ObjectMover tmp9 = tmp8->getMovement();		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(246)
			this->currentMover = tmp9;
		}
		HX_STACK_LINE(247)
		::actors::attacks::Attack tmp8 = this->attackBehavior;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(247)
		::actors::attacks::Hitbox tmp9 = tmp8->getHits();		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(247)
		bool tmp10 = (tmp9 != null());		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(247)
		if ((tmp10)){
			HX_STACK_LINE(248)
			::actors::attacks::Attack tmp11 = this->attackBehavior;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(248)
			::actors::attacks::Hitbox tmp12 = tmp11->getHits();		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(248)
			this->addHitbox(tmp12);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Actor_obj,initiateAttack,(void))

Void Actor_obj::endAttack( ){
{
		HX_STACK_FRAME("actors.Actor","endAttack",0xc66c169a,"actors.Actor.endAttack","actors/Actor.hx",251,0x8963ca9a)
		HX_STACK_THIS(this)
		HX_STACK_LINE(252)
		::actors::attacks::Attack tmp = this->attackBehavior;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(252)
		bool tmp1 = (tmp == null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(252)
		if ((tmp1)){
			HX_STACK_LINE(252)
			return null();
		}
		HX_STACK_LINE(254)
		this->revertAttackProperties();
		HX_STACK_LINE(255)
		this->endAttackStun();
		HX_STACK_LINE(257)
		this->removeHitbox();
		HX_STACK_LINE(258)
		this->attackBehavior = null();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Actor_obj,endAttack,(void))

Void Actor_obj::revertAttackProperties( ){
{
		HX_STACK_FRAME("actors.Actor","revertAttackProperties",0x0b0e38e8,"actors.Actor.revertAttackProperties","actors/Actor.hx",260,0x8963ca9a)
		HX_STACK_THIS(this)
		HX_STACK_LINE(262)
		::actors::attacks::Attack tmp = this->attackBehavior;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(262)
		bool tmp1 = tmp->grantsUnstoppable();		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(262)
		if ((tmp1)){
			HX_STACK_LINE(263)
			this->unstoppable = false;
		}
		HX_STACK_LINE(264)
		::actors::attacks::Attack tmp2 = this->attackBehavior;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(264)
		::actors::ObjectMover tmp3 = tmp2->getMovement();		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(264)
		bool tmp4 = (tmp3 != null());		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(264)
		if ((tmp4)){
			HX_STACK_LINE(265)
			::actors::ObjectMover tmp5 = this->defaultMover;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(265)
			this->currentMover = tmp5;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Actor_obj,revertAttackProperties,(void))

Void Actor_obj::endAttackStun( ){
{
		HX_STACK_FRAME("actors.Actor","endAttackStun",0x20198cf4,"actors.Actor.endAttackStun","actors/Actor.hx",267,0x8963ca9a)
		HX_STACK_THIS(this)
		HX_STACK_LINE(269)
		::actors::attacks::Attack tmp = this->attackBehavior;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(269)
		int tmp1 = tmp->getStunDuration();		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(269)
		this->stunLock(tmp1);
		HX_STACK_LINE(270)
		::actors::attacks::Attack tmp2 = this->attackBehavior;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(270)
		bool tmp3 = tmp2->hasStunAnimation();		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(270)
		if ((tmp3)){
			HX_STACK_LINE(271)
			::actors::attacks::Attack tmp4 = this->attackBehavior;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(271)
			::String tmp5 = tmp4->getStunAnimation();		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(271)
			this->setAnimation(tmp5);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Actor_obj,endAttackStun,(void))

Void Actor_obj::goLeft( ){
{
		HX_STACK_FRAME("actors.Actor","goLeft",0x6b984158,"actors.Actor.goLeft","actors/Actor.hx",274,0x8963ca9a)
		HX_STACK_THIS(this)
		HX_STACK_LINE(275)
		this->alignmentLeft = true;
		HX_STACK_LINE(276)
		::actors::ObjectMover tmp = this->currentMover;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(276)
		tmp->goLeft();
		HX_STACK_LINE(277)
		::actors::ObjectMover tmp1 = this->defaultMover;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(277)
		::actors::ObjectMover tmp2 = this->currentMover;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(277)
		bool tmp3 = (tmp1 != tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(277)
		if ((tmp3)){
			HX_STACK_LINE(278)
			::actors::ObjectMover tmp4 = this->defaultMover;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(278)
			tmp4->goLeft();
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Actor_obj,goLeft,(void))

Void Actor_obj::goRight( ){
{
		HX_STACK_FRAME("actors.Actor","goRight",0x30adf96b,"actors.Actor.goRight","actors/Actor.hx",280,0x8963ca9a)
		HX_STACK_THIS(this)
		HX_STACK_LINE(281)
		this->alignmentLeft = false;
		HX_STACK_LINE(282)
		::actors::ObjectMover tmp = this->currentMover;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(282)
		tmp->goRight();
		HX_STACK_LINE(283)
		::actors::ObjectMover tmp1 = this->defaultMover;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(283)
		::actors::ObjectMover tmp2 = this->currentMover;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(283)
		bool tmp3 = (tmp1 != tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(283)
		if ((tmp3)){
			HX_STACK_LINE(284)
			::actors::ObjectMover tmp4 = this->defaultMover;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(284)
			tmp4->goRight();
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Actor_obj,goRight,(void))

Void Actor_obj::stopLeft( ){
{
		HX_STACK_FRAME("actors.Actor","stopLeft",0x74216072,"actors.Actor.stopLeft","actors/Actor.hx",286,0x8963ca9a)
		HX_STACK_THIS(this)
		HX_STACK_LINE(287)
		::actors::ObjectMover tmp = this->currentMover;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(287)
		tmp->stopLeft();
		HX_STACK_LINE(288)
		::actors::ObjectMover tmp1 = this->defaultMover;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(288)
		::actors::ObjectMover tmp2 = this->currentMover;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(288)
		bool tmp3 = (tmp1 != tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(288)
		if ((tmp3)){
			HX_STACK_LINE(289)
			::actors::ObjectMover tmp4 = this->defaultMover;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(289)
			tmp4->stopLeft();
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Actor_obj,stopLeft,(void))

Void Actor_obj::stopRight( ){
{
		HX_STACK_FRAME("actors.Actor","stopRight",0xa0201111,"actors.Actor.stopRight","actors/Actor.hx",291,0x8963ca9a)
		HX_STACK_THIS(this)
		HX_STACK_LINE(292)
		::actors::ObjectMover tmp = this->currentMover;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(292)
		tmp->stopRight();
		HX_STACK_LINE(293)
		::actors::ObjectMover tmp1 = this->defaultMover;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(293)
		::actors::ObjectMover tmp2 = this->currentMover;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(293)
		bool tmp3 = (tmp1 != tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(293)
		if ((tmp3)){
			HX_STACK_LINE(294)
			::actors::ObjectMover tmp4 = this->defaultMover;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(294)
			tmp4->stopRight();
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Actor_obj,stopRight,(void))

Void Actor_obj::jump( ){
{
		HX_STACK_FRAME("actors.Actor","jump",0x02513fb7,"actors.Actor.jump","actors/Actor.hx",296,0x8963ca9a)
		HX_STACK_THIS(this)
		HX_STACK_LINE(297)
		::actors::ObjectMover tmp = this->currentMover;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(297)
		tmp->jump();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Actor_obj,jump,(void))

Void Actor_obj::moveXAxis( ){
{
		HX_STACK_FRAME("actors.Actor","moveXAxis",0xa7a880ff,"actors.Actor.moveXAxis","actors/Actor.hx",300,0x8963ca9a)
		HX_STACK_THIS(this)
		HX_STACK_LINE(302)
		{
			HX_STACK_LINE(302)
			::actors::Actor _g = hx::ObjectPtr<OBJ_>(this);		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(302)
			Float tmp = _g->get_x();		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(302)
			::actors::ObjectMover tmp1 = this->currentMover;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(302)
			Float tmp2 = tmp1->getXVel();		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(302)
			int tmp3 = ::Math_obj::round(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(302)
			Float tmp4 = (tmp + tmp3);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(302)
			_g->set_x(tmp4);
		}
		HX_STACK_LINE(304)
		::maps::AreaMap tmp = this->currentMap;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(304)
		Array< ::Dynamic > collisions = tmp->checkCollisions(hx::ObjectPtr<OBJ_>(this),null());		HX_STACK_VAR(collisions,"collisions");
		HX_STACK_LINE(305)
		::maps::AreaMap tmp1 = this->currentMap;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(305)
		Array< ::Dynamic > actorCollisions = tmp1->checkActorCollisions(hx::ObjectPtr<OBJ_>(this));		HX_STACK_VAR(actorCollisions,"actorCollisions");
		HX_STACK_LINE(306)
		bool tmp2 = this->checkFatalTiles(collisions,true);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(306)
		if ((tmp2)){
			HX_STACK_LINE(307)
			this->kill();
			HX_STACK_LINE(308)
			return null();
		}
		else{
			HX_STACK_LINE(310)
			bool tmp3 = this->checkActorCollision(actorCollisions,true);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(310)
			if ((tmp3)){
				HX_STACK_LINE(311)
				::actors::Actor tmp4 = actorCollisions->__get((int)0).StaticCast< ::actors::Actor >();		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(311)
				collisions->push(tmp4);
			}
		}
		HX_STACK_LINE(314)
		int tmp3 = this->getCollisionLargestDistance(collisions,true);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(314)
		int largestDistance = tmp3;		HX_STACK_VAR(largestDistance,"largestDistance");
		HX_STACK_LINE(316)
		bool tmp4 = (largestDistance != (int)0);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(316)
		if ((tmp4)){
			HX_STACK_LINE(317)
			::actors::Actor _g = hx::ObjectPtr<OBJ_>(this);		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(317)
			Float tmp5 = _g->get_x();		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(317)
			int tmp6 = largestDistance;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(317)
			Float tmp7 = (tmp5 - tmp6);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(317)
			_g->set_x(tmp7);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Actor_obj,moveXAxis,(void))

Void Actor_obj::moveYAxis( ){
{
		HX_STACK_FRAME("actors.Actor","moveYAxis",0x3b0f1580,"actors.Actor.moveYAxis","actors/Actor.hx",319,0x8963ca9a)
		HX_STACK_THIS(this)
		HX_STACK_LINE(321)
		{
			HX_STACK_LINE(321)
			::actors::Actor _g = hx::ObjectPtr<OBJ_>(this);		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(321)
			Float tmp = _g->get_y();		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(321)
			::actors::ObjectMover tmp1 = this->currentMover;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(321)
			Float tmp2 = tmp1->getYVel();		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(321)
			int tmp3 = ::Math_obj::round(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(321)
			Float tmp4 = (tmp + tmp3);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(321)
			_g->set_y(tmp4);
		}
		HX_STACK_LINE(323)
		::maps::AreaMap tmp = this->currentMap;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(323)
		Array< ::Dynamic > collisions = tmp->checkCollisions(hx::ObjectPtr<OBJ_>(this),null());		HX_STACK_VAR(collisions,"collisions");
		HX_STACK_LINE(324)
		::maps::AreaMap tmp1 = this->currentMap;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(324)
		Array< ::Dynamic > actorCollisions = tmp1->checkActorCollisions(hx::ObjectPtr<OBJ_>(this));		HX_STACK_VAR(actorCollisions,"actorCollisions");
		HX_STACK_LINE(325)
		bool tmp2 = this->checkFatalTiles(collisions,false);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(325)
		if ((tmp2)){
			HX_STACK_LINE(326)
			this->kill();
			HX_STACK_LINE(327)
			return null();
		}
		else{
			HX_STACK_LINE(329)
			bool tmp3 = this->checkActorCollision(actorCollisions,false);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(329)
			if ((tmp3)){
				HX_STACK_LINE(330)
				::actors::Actor tmp4 = actorCollisions->__get((int)0).StaticCast< ::actors::Actor >();		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(330)
				collisions->push(tmp4);
			}
		}
		HX_STACK_LINE(333)
		int tmp3 = this->getCollisionLargestDistance(collisions,false);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(333)
		int largestDistance = tmp3;		HX_STACK_VAR(largestDistance,"largestDistance");
		HX_STACK_LINE(335)
		bool tmp4 = (largestDistance != (int)0);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(335)
		if ((tmp4)){
			HX_STACK_LINE(336)
			::actors::Actor _g = hx::ObjectPtr<OBJ_>(this);		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(336)
			Float tmp5 = _g->get_y();		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(336)
			int tmp6 = largestDistance;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(336)
			Float tmp7 = (tmp5 - tmp6);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(336)
			_g->set_y(tmp7);
		}
		HX_STACK_LINE(337)
		bool tmp5 = (largestDistance > (int)0);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(337)
		if ((tmp5)){
			HX_STACK_LINE(338)
			this->setGrounded();
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Actor_obj,moveYAxis,(void))

bool Actor_obj::checkFatalTiles( Array< ::Dynamic > collisionList,bool xAxis){
	HX_STACK_FRAME("actors.Actor","checkFatalTiles",0x6bece5a0,"actors.Actor.checkFatalTiles","actors/Actor.hx",341,0x8963ca9a)
	HX_STACK_THIS(this)
	HX_STACK_ARG(collisionList,"collisionList")
	HX_STACK_ARG(xAxis,"xAxis")
	HX_STACK_LINE(343)
	{
		HX_STACK_LINE(343)
		int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(343)
		int _g = collisionList->length;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(343)
		while((true)){
			HX_STACK_LINE(343)
			bool tmp = (_g1 < _g);		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(343)
			bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(343)
			if ((tmp1)){
				HX_STACK_LINE(343)
				break;
			}
			HX_STACK_LINE(343)
			int tmp2 = (_g1)++;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(343)
			int i = tmp2;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(344)
			::maps::mapobjects::MapObject tmp3 = collisionList->__get(i).StaticCast< ::maps::mapobjects::MapObject >();		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(344)
			bool tmp4 = ::Std_obj::is(tmp3,hx::ClassOf< ::maps::mapobjects::Tile >());		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(344)
			if ((tmp4)){
				HX_STACK_LINE(346)
				::maps::mapobjects::MapObject tmp5 = collisionList->__get(i).StaticCast< ::maps::mapobjects::MapObject >();		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(346)
				::maps::mapobjects::Tile tempTile = ((::maps::mapobjects::Tile)(tmp5));		HX_STACK_VAR(tempTile,"tempTile");
				HX_STACK_LINE(347)
				bool tmp6 = xAxis;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(347)
				bool tmp7 = tempTile->checkFatal(hx::ObjectPtr<OBJ_>(this),tmp6);		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(347)
				if ((tmp7)){
					HX_STACK_LINE(348)
					return true;
				}
			}
		}
	}
	HX_STACK_LINE(351)
	return false;
}


HX_DEFINE_DYNAMIC_FUNC2(Actor_obj,checkFatalTiles,return )

bool Actor_obj::checkActorCollision( Array< ::Dynamic > collisionList,bool xAxis){
	HX_STACK_FRAME("actors.Actor","checkActorCollision",0xacdf40fc,"actors.Actor.checkActorCollision","actors/Actor.hx",353,0x8963ca9a)
	HX_STACK_THIS(this)
	HX_STACK_ARG(collisionList,"collisionList")
	HX_STACK_ARG(xAxis,"xAxis")
	HX_STACK_LINE(355)
	{
		HX_STACK_LINE(355)
		int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(355)
		int _g = collisionList->length;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(355)
		while((true)){
			HX_STACK_LINE(355)
			bool tmp = (_g1 < _g);		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(355)
			bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(355)
			if ((tmp1)){
				HX_STACK_LINE(355)
				break;
			}
			HX_STACK_LINE(355)
			int tmp2 = (_g1)++;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(355)
			int i = tmp2;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(356)
			::actors::Actor tmp3 = collisionList->__get(i).StaticCast< ::actors::Actor >();		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(356)
			::actors::Actor tmp4 = tmp3;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(356)
			bool tmp5 = ::Std_obj::is(tmp4,hx::ClassOf< ::actors::Actor >());		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(356)
			bool tmp6;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(356)
			if ((tmp5)){
				HX_STACK_LINE(356)
				::actors::Actor tmp7 = collisionList->__get(i).StaticCast< ::actors::Actor >();		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(356)
				::actors::Actor tmp8 = tmp7;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(356)
				tmp6 = (tmp8 != hx::ObjectPtr<OBJ_>(this));
			}
			else{
				HX_STACK_LINE(356)
				tmp6 = false;
			}
			HX_STACK_LINE(356)
			if ((tmp6)){
				HX_STACK_LINE(357)
				return true;
			}
		}
	}
	HX_STACK_LINE(360)
	return false;
}


HX_DEFINE_DYNAMIC_FUNC2(Actor_obj,checkActorCollision,return )

int Actor_obj::getCollisionLargestDistance( Array< ::Dynamic > collisionList,bool xAxis){
	HX_STACK_FRAME("actors.Actor","getCollisionLargestDistance",0x34d7852c,"actors.Actor.getCollisionLargestDistance","actors/Actor.hx",363,0x8963ca9a)
	HX_STACK_THIS(this)
	HX_STACK_ARG(collisionList,"collisionList")
	HX_STACK_ARG(xAxis,"xAxis")
	HX_STACK_LINE(364)
	int largestDistance = (int)0;		HX_STACK_VAR(largestDistance,"largestDistance");
	HX_STACK_LINE(365)
	int largestIndex = (int)-1;		HX_STACK_VAR(largestIndex,"largestIndex");
	HX_STACK_LINE(366)
	int tempDistance;		HX_STACK_VAR(tempDistance,"tempDistance");
	HX_STACK_LINE(368)
	{
		HX_STACK_LINE(368)
		int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(368)
		int _g = collisionList->length;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(368)
		while((true)){
			HX_STACK_LINE(368)
			bool tmp = (_g1 < _g);		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(368)
			bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(368)
			if ((tmp1)){
				HX_STACK_LINE(368)
				break;
			}
			HX_STACK_LINE(368)
			int tmp2 = (_g1)++;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(368)
			int i = tmp2;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(369)
			::maps::mapobjects::MapObject tmp3 = collisionList->__get(i).StaticCast< ::maps::mapobjects::MapObject >();		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(369)
			bool tmp4 = tmp3->getPassable();		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(369)
			bool tmp5 = !(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(369)
			if ((tmp5)){
				HX_STACK_LINE(369)
				continue;
			}
			HX_STACK_LINE(371)
			::maps::mapobjects::MapObject tmp6 = collisionList->__get(i).StaticCast< ::maps::mapobjects::MapObject >();		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(371)
			bool tmp7 = xAxis;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(371)
			int tmp8 = this->getCollisionDistance(tmp6,tmp7);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(371)
			tempDistance = tmp8;
			HX_STACK_LINE(372)
			int tmp9 = tempDistance;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(372)
			Float tmp10 = ::Math_obj::abs(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(372)
			int tmp11 = largestDistance;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(372)
			Float tmp12 = ::Math_obj::abs(tmp11);		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(372)
			bool tmp13 = (tmp10 > tmp12);		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(372)
			if ((tmp13)){
				HX_STACK_LINE(373)
				largestDistance = tempDistance;
				HX_STACK_LINE(374)
				largestIndex = i;
			}
		}
	}
	HX_STACK_LINE(378)
	int tmp = largestDistance;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(378)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC2(Actor_obj,getCollisionLargestDistance,return )

Void Actor_obj::setAnimation( ::String animation){
{
		HX_STACK_FRAME("actors.Actor","setAnimation",0x96019acb,"actors.Actor.setAnimation","actors/Actor.hx",381,0x8963ca9a)
		HX_STACK_THIS(this)
		HX_STACK_ARG(animation,"animation")
		HX_STACK_LINE(382)
		::haxe::ds::StringMap tmp = this->animations;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(382)
		::String tmp1 = animation;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(382)
		::actors::Animation tmp2 = tmp->get(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(382)
		this->currentAnimation = tmp2;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Actor_obj,setAnimation,(void))

bool Actor_obj::isFacingLeft( ){
	HX_STACK_FRAME("actors.Actor","isFacingLeft",0x2ca11c94,"actors.Actor.isFacingLeft","actors/Actor.hx",385,0x8963ca9a)
	HX_STACK_THIS(this)
	HX_STACK_LINE(385)
	bool tmp = this->alignmentLeft;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(385)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(Actor_obj,isFacingLeft,return )

::maps::AreaMap Actor_obj::getCurrentMap( ){
	HX_STACK_FRAME("actors.Actor","getCurrentMap",0xaa719030,"actors.Actor.getCurrentMap","actors/Actor.hx",386,0x8963ca9a)
	HX_STACK_THIS(this)
	HX_STACK_LINE(386)
	::maps::AreaMap tmp = this->currentMap;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(386)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(Actor_obj,getCurrentMap,return )

Void Actor_obj::setCurrentMap( ::maps::AreaMap map){
{
		HX_STACK_FRAME("actors.Actor","setCurrentMap",0xef77723c,"actors.Actor.setCurrentMap","actors/Actor.hx",387,0x8963ca9a)
		HX_STACK_THIS(this)
		HX_STACK_ARG(map,"map")
		HX_STACK_LINE(387)
		this->currentMap = map;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Actor_obj,setCurrentMap,(void))


Actor_obj::Actor_obj()
{
}

void Actor_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Actor);
	HX_MARK_MEMBER_NAME(animations,"animations");
	HX_MARK_MEMBER_NAME(defaultMover,"defaultMover");
	HX_MARK_MEMBER_NAME(currentMover,"currentMover");
	HX_MARK_MEMBER_NAME(attackBehavior,"attackBehavior");
	HX_MARK_MEMBER_NAME(hitBox,"hitBox");
	HX_MARK_MEMBER_NAME(currentMap,"currentMap");
	HX_MARK_MEMBER_NAME(alignmentLeft,"alignmentLeft");
	HX_MARK_MEMBER_NAME(currentAnimation,"currentAnimation");
	HX_MARK_MEMBER_NAME(baseBmp,"baseBmp");
	HX_MARK_MEMBER_NAME(actorBmp,"actorBmp");
	HX_MARK_MEMBER_NAME(actorWidth,"actorWidth");
	HX_MARK_MEMBER_NAME(actorHeight,"actorHeight");
	HX_MARK_MEMBER_NAME(originalActorWidth,"originalActorWidth");
	HX_MARK_MEMBER_NAME(originalActorHeight,"originalActorHeight");
	HX_MARK_MEMBER_NAME(originalBounds,"originalBounds");
	HX_MARK_MEMBER_NAME(maxHealth,"maxHealth");
	HX_MARK_MEMBER_NAME(health,"health");
	HX_MARK_MEMBER_NAME(stunCount,"stunCount");
	HX_MARK_MEMBER_NAME(invulnerable,"invulnerable");
	HX_MARK_MEMBER_NAME(invulDuration,"invulDuration");
	HX_MARK_MEMBER_NAME(invulCount,"invulCount");
	HX_MARK_MEMBER_NAME(unstoppable,"unstoppable");
	::maps::mapobjects::MapObject_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void Actor_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(animations,"animations");
	HX_VISIT_MEMBER_NAME(defaultMover,"defaultMover");
	HX_VISIT_MEMBER_NAME(currentMover,"currentMover");
	HX_VISIT_MEMBER_NAME(attackBehavior,"attackBehavior");
	HX_VISIT_MEMBER_NAME(hitBox,"hitBox");
	HX_VISIT_MEMBER_NAME(currentMap,"currentMap");
	HX_VISIT_MEMBER_NAME(alignmentLeft,"alignmentLeft");
	HX_VISIT_MEMBER_NAME(currentAnimation,"currentAnimation");
	HX_VISIT_MEMBER_NAME(baseBmp,"baseBmp");
	HX_VISIT_MEMBER_NAME(actorBmp,"actorBmp");
	HX_VISIT_MEMBER_NAME(actorWidth,"actorWidth");
	HX_VISIT_MEMBER_NAME(actorHeight,"actorHeight");
	HX_VISIT_MEMBER_NAME(originalActorWidth,"originalActorWidth");
	HX_VISIT_MEMBER_NAME(originalActorHeight,"originalActorHeight");
	HX_VISIT_MEMBER_NAME(originalBounds,"originalBounds");
	HX_VISIT_MEMBER_NAME(maxHealth,"maxHealth");
	HX_VISIT_MEMBER_NAME(health,"health");
	HX_VISIT_MEMBER_NAME(stunCount,"stunCount");
	HX_VISIT_MEMBER_NAME(invulnerable,"invulnerable");
	HX_VISIT_MEMBER_NAME(invulDuration,"invulDuration");
	HX_VISIT_MEMBER_NAME(invulCount,"invulCount");
	HX_VISIT_MEMBER_NAME(unstoppable,"unstoppable");
	::maps::mapobjects::MapObject_obj::__Visit(HX_VISIT_ARG);
}

Dynamic Actor_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"kill") ) { return kill_dyn(); }
		if (HX_FIELD_EQ(inName,"jump") ) { return jump_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"hitBox") ) { return hitBox; }
		if (HX_FIELD_EQ(inName,"health") ) { return health; }
		if (HX_FIELD_EQ(inName,"goLeft") ) { return goLeft_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"baseBmp") ) { return baseBmp; }
		if (HX_FIELD_EQ(inName,"goRight") ) { return goRight_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"actorBmp") ) { return actorBmp; }
		if (HX_FIELD_EQ(inName,"stunLock") ) { return stunLock_dyn(); }
		if (HX_FIELD_EQ(inName,"stopLeft") ) { return stopLeft_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"maxHealth") ) { return maxHealth; }
		if (HX_FIELD_EQ(inName,"stunCount") ) { return stunCount; }
		if (HX_FIELD_EQ(inName,"addHitbox") ) { return addHitbox_dyn(); }
		if (HX_FIELD_EQ(inName,"isHitting") ) { return isHitting_dyn(); }
		if (HX_FIELD_EQ(inName,"removeBmp") ) { return removeBmp_dyn(); }
		if (HX_FIELD_EQ(inName,"endAttack") ) { return endAttack_dyn(); }
		if (HX_FIELD_EQ(inName,"stopRight") ) { return stopRight_dyn(); }
		if (HX_FIELD_EQ(inName,"moveXAxis") ) { return moveXAxis_dyn(); }
		if (HX_FIELD_EQ(inName,"moveYAxis") ) { return moveYAxis_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"animations") ) { return animations; }
		if (HX_FIELD_EQ(inName,"currentMap") ) { return currentMap; }
		if (HX_FIELD_EQ(inName,"actorWidth") ) { return actorWidth; }
		if (HX_FIELD_EQ(inName,"invulCount") ) { return invulCount; }
		if (HX_FIELD_EQ(inName,"updateStun") ) { return updateStun_dyn(); }
		if (HX_FIELD_EQ(inName,"takeDamage") ) { return takeDamage_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"actorHeight") ) { return actorHeight; }
		if (HX_FIELD_EQ(inName,"unstoppable") ) { return unstoppable; }
		if (HX_FIELD_EQ(inName,"updateActor") ) { return updateActor_dyn(); }
		if (HX_FIELD_EQ(inName,"checkDamage") ) { return checkDamage_dyn(); }
		if (HX_FIELD_EQ(inName,"setGrounded") ) { return setGrounded_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"defaultMover") ) { return defaultMover; }
		if (HX_FIELD_EQ(inName,"currentMover") ) { return currentMover; }
		if (HX_FIELD_EQ(inName,"invulnerable") ) { return invulnerable; }
		if (HX_FIELD_EQ(inName,"updateAttack") ) { return updateAttack_dyn(); }
		if (HX_FIELD_EQ(inName,"updateHitbox") ) { return updateHitbox_dyn(); }
		if (HX_FIELD_EQ(inName,"removeHitbox") ) { return removeHitbox_dyn(); }
		if (HX_FIELD_EQ(inName,"getAnimation") ) { return getAnimation_dyn(); }
		if (HX_FIELD_EQ(inName,"setAnimation") ) { return setAnimation_dyn(); }
		if (HX_FIELD_EQ(inName,"isFacingLeft") ) { return isFacingLeft_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"alignmentLeft") ) { return alignmentLeft; }
		if (HX_FIELD_EQ(inName,"invulDuration") ) { return invulDuration; }
		if (HX_FIELD_EQ(inName,"endAttackStun") ) { return endAttackStun_dyn(); }
		if (HX_FIELD_EQ(inName,"getCurrentMap") ) { return getCurrentMap_dyn(); }
		if (HX_FIELD_EQ(inName,"setCurrentMap") ) { return setCurrentMap_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"attackBehavior") ) { return attackBehavior; }
		if (HX_FIELD_EQ(inName,"originalBounds") ) { return originalBounds; }
		if (HX_FIELD_EQ(inName,"initiateAttack") ) { return initiateAttack_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"getAttackDamage") ) { return getAttackDamage_dyn(); }
		if (HX_FIELD_EQ(inName,"addAnimationBmp") ) { return addAnimationBmp_dyn(); }
		if (HX_FIELD_EQ(inName,"getAnimationBmp") ) { return getAnimationBmp_dyn(); }
		if (HX_FIELD_EQ(inName,"takeActorDamage") ) { return takeActorDamage_dyn(); }
		if (HX_FIELD_EQ(inName,"calculateDamage") ) { return calculateDamage_dyn(); }
		if (HX_FIELD_EQ(inName,"checkFatalTiles") ) { return checkFatalTiles_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"currentAnimation") ) { return currentAnimation; }
		if (HX_FIELD_EQ(inName,"getAnimationName") ) { return getAnimationName_dyn(); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"getAttackBehavior") ) { return getAttackBehavior_dyn(); }
		if (HX_FIELD_EQ(inName,"checkInvulnerable") ) { return checkInvulnerable_dyn(); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"originalActorWidth") ) { return originalActorWidth; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"originalActorHeight") ) { return originalActorHeight; }
		if (HX_FIELD_EQ(inName,"checkActorCollision") ) { return checkActorCollision_dyn(); }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"updateActorAnimation") ) { return updateActorAnimation_dyn(); }
		if (HX_FIELD_EQ(inName,"takeProjectileDamage") ) { return takeProjectileDamage_dyn(); }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"revertAttackProperties") ) { return revertAttackProperties_dyn(); }
		break;
	case 27:
		if (HX_FIELD_EQ(inName,"getCollisionLargestDistance") ) { return getCollisionLargestDistance_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Actor_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"hitBox") ) { hitBox=inValue.Cast< ::actors::attacks::Hitbox >(); return inValue; }
		if (HX_FIELD_EQ(inName,"health") ) { health=inValue.Cast< int >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"baseBmp") ) { baseBmp=inValue.Cast< ::openfl::display::Bitmap >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"actorBmp") ) { actorBmp=inValue.Cast< ::openfl::display::Bitmap >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"maxHealth") ) { maxHealth=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"stunCount") ) { stunCount=inValue.Cast< int >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"animations") ) { animations=inValue.Cast< ::haxe::ds::StringMap >(); return inValue; }
		if (HX_FIELD_EQ(inName,"currentMap") ) { currentMap=inValue.Cast< ::maps::AreaMap >(); return inValue; }
		if (HX_FIELD_EQ(inName,"actorWidth") ) { actorWidth=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"invulCount") ) { invulCount=inValue.Cast< int >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"actorHeight") ) { actorHeight=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"unstoppable") ) { unstoppable=inValue.Cast< bool >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"defaultMover") ) { defaultMover=inValue.Cast< ::actors::ObjectMover >(); return inValue; }
		if (HX_FIELD_EQ(inName,"currentMover") ) { currentMover=inValue.Cast< ::actors::ObjectMover >(); return inValue; }
		if (HX_FIELD_EQ(inName,"invulnerable") ) { invulnerable=inValue.Cast< bool >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"alignmentLeft") ) { alignmentLeft=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"invulDuration") ) { invulDuration=inValue.Cast< int >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"attackBehavior") ) { attackBehavior=inValue.Cast< ::actors::attacks::Attack >(); return inValue; }
		if (HX_FIELD_EQ(inName,"originalBounds") ) { originalBounds=inValue.Cast< ::openfl::geom::Rectangle >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"currentAnimation") ) { currentAnimation=inValue.Cast< ::actors::Animation >(); return inValue; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"originalActorWidth") ) { originalActorWidth=inValue.Cast< int >(); return inValue; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"originalActorHeight") ) { originalActorHeight=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool Actor_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	return false;
}

void Actor_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("animations","\xef","\x34","\x1c","\x83"));
	outFields->push(HX_HCSTRING("defaultMover","\xc0","\x07","\xc1","\xc1"));
	outFields->push(HX_HCSTRING("currentMover","\x48","\xb1","\x71","\x53"));
	outFields->push(HX_HCSTRING("attackBehavior","\x7a","\x50","\xe1","\x69"));
	outFields->push(HX_HCSTRING("hitBox","\x78","\xa5","\x0f","\x57"));
	outFields->push(HX_HCSTRING("currentMap","\xe3","\xcf","\x2d","\xc7"));
	outFields->push(HX_HCSTRING("alignmentLeft","\x8a","\xc4","\x55","\xc2"));
	outFields->push(HX_HCSTRING("currentAnimation","\x8b","\x63","\x65","\x3e"));
	outFields->push(HX_HCSTRING("baseBmp","\xb4","\x2c","\xdf","\x2d"));
	outFields->push(HX_HCSTRING("actorBmp","\x50","\x30","\x57","\x57"));
	outFields->push(HX_HCSTRING("actorWidth","\xd1","\x82","\x7c","\x54"));
	outFields->push(HX_HCSTRING("actorHeight","\xbc","\x6c","\xc5","\x4e"));
	outFields->push(HX_HCSTRING("originalActorWidth","\x82","\xaa","\x3e","\x52"));
	outFields->push(HX_HCSTRING("originalActorHeight","\xeb","\xff","\xe5","\x5a"));
	outFields->push(HX_HCSTRING("originalBounds","\xa6","\xc1","\x03","\x9e"));
	outFields->push(HX_HCSTRING("maxHealth","\x60","\x3a","\x91","\x2c"));
	outFields->push(HX_HCSTRING("health","\x9c","\x28","\x06","\xfd"));
	outFields->push(HX_HCSTRING("stunCount","\x35","\x8d","\x6f","\x87"));
	outFields->push(HX_HCSTRING("invulnerable","\xed","\x76","\x61","\xa7"));
	outFields->push(HX_HCSTRING("invulDuration","\xfc","\xe4","\xda","\x10"));
	outFields->push(HX_HCSTRING("invulCount","\x27","\xd6","\xf1","\xec"));
	outFields->push(HX_HCSTRING("unstoppable","\x4f","\xb5","\x04","\xc0"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::haxe::ds::StringMap*/ ,(int)offsetof(Actor_obj,animations),HX_HCSTRING("animations","\xef","\x34","\x1c","\x83")},
	{hx::fsObject /*::actors::ObjectMover*/ ,(int)offsetof(Actor_obj,defaultMover),HX_HCSTRING("defaultMover","\xc0","\x07","\xc1","\xc1")},
	{hx::fsObject /*::actors::ObjectMover*/ ,(int)offsetof(Actor_obj,currentMover),HX_HCSTRING("currentMover","\x48","\xb1","\x71","\x53")},
	{hx::fsObject /*::actors::attacks::Attack*/ ,(int)offsetof(Actor_obj,attackBehavior),HX_HCSTRING("attackBehavior","\x7a","\x50","\xe1","\x69")},
	{hx::fsObject /*::actors::attacks::Hitbox*/ ,(int)offsetof(Actor_obj,hitBox),HX_HCSTRING("hitBox","\x78","\xa5","\x0f","\x57")},
	{hx::fsObject /*::maps::AreaMap*/ ,(int)offsetof(Actor_obj,currentMap),HX_HCSTRING("currentMap","\xe3","\xcf","\x2d","\xc7")},
	{hx::fsBool,(int)offsetof(Actor_obj,alignmentLeft),HX_HCSTRING("alignmentLeft","\x8a","\xc4","\x55","\xc2")},
	{hx::fsObject /*::actors::Animation*/ ,(int)offsetof(Actor_obj,currentAnimation),HX_HCSTRING("currentAnimation","\x8b","\x63","\x65","\x3e")},
	{hx::fsObject /*::openfl::display::Bitmap*/ ,(int)offsetof(Actor_obj,baseBmp),HX_HCSTRING("baseBmp","\xb4","\x2c","\xdf","\x2d")},
	{hx::fsObject /*::openfl::display::Bitmap*/ ,(int)offsetof(Actor_obj,actorBmp),HX_HCSTRING("actorBmp","\x50","\x30","\x57","\x57")},
	{hx::fsInt,(int)offsetof(Actor_obj,actorWidth),HX_HCSTRING("actorWidth","\xd1","\x82","\x7c","\x54")},
	{hx::fsInt,(int)offsetof(Actor_obj,actorHeight),HX_HCSTRING("actorHeight","\xbc","\x6c","\xc5","\x4e")},
	{hx::fsInt,(int)offsetof(Actor_obj,originalActorWidth),HX_HCSTRING("originalActorWidth","\x82","\xaa","\x3e","\x52")},
	{hx::fsInt,(int)offsetof(Actor_obj,originalActorHeight),HX_HCSTRING("originalActorHeight","\xeb","\xff","\xe5","\x5a")},
	{hx::fsObject /*::openfl::geom::Rectangle*/ ,(int)offsetof(Actor_obj,originalBounds),HX_HCSTRING("originalBounds","\xa6","\xc1","\x03","\x9e")},
	{hx::fsInt,(int)offsetof(Actor_obj,maxHealth),HX_HCSTRING("maxHealth","\x60","\x3a","\x91","\x2c")},
	{hx::fsInt,(int)offsetof(Actor_obj,health),HX_HCSTRING("health","\x9c","\x28","\x06","\xfd")},
	{hx::fsInt,(int)offsetof(Actor_obj,stunCount),HX_HCSTRING("stunCount","\x35","\x8d","\x6f","\x87")},
	{hx::fsBool,(int)offsetof(Actor_obj,invulnerable),HX_HCSTRING("invulnerable","\xed","\x76","\x61","\xa7")},
	{hx::fsInt,(int)offsetof(Actor_obj,invulDuration),HX_HCSTRING("invulDuration","\xfc","\xe4","\xda","\x10")},
	{hx::fsInt,(int)offsetof(Actor_obj,invulCount),HX_HCSTRING("invulCount","\x27","\xd6","\xf1","\xec")},
	{hx::fsBool,(int)offsetof(Actor_obj,unstoppable),HX_HCSTRING("unstoppable","\x4f","\xb5","\x04","\xc0")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("animations","\xef","\x34","\x1c","\x83"),
	HX_HCSTRING("defaultMover","\xc0","\x07","\xc1","\xc1"),
	HX_HCSTRING("currentMover","\x48","\xb1","\x71","\x53"),
	HX_HCSTRING("attackBehavior","\x7a","\x50","\xe1","\x69"),
	HX_HCSTRING("hitBox","\x78","\xa5","\x0f","\x57"),
	HX_HCSTRING("currentMap","\xe3","\xcf","\x2d","\xc7"),
	HX_HCSTRING("alignmentLeft","\x8a","\xc4","\x55","\xc2"),
	HX_HCSTRING("currentAnimation","\x8b","\x63","\x65","\x3e"),
	HX_HCSTRING("baseBmp","\xb4","\x2c","\xdf","\x2d"),
	HX_HCSTRING("actorBmp","\x50","\x30","\x57","\x57"),
	HX_HCSTRING("actorWidth","\xd1","\x82","\x7c","\x54"),
	HX_HCSTRING("actorHeight","\xbc","\x6c","\xc5","\x4e"),
	HX_HCSTRING("originalActorWidth","\x82","\xaa","\x3e","\x52"),
	HX_HCSTRING("originalActorHeight","\xeb","\xff","\xe5","\x5a"),
	HX_HCSTRING("originalBounds","\xa6","\xc1","\x03","\x9e"),
	HX_HCSTRING("maxHealth","\x60","\x3a","\x91","\x2c"),
	HX_HCSTRING("health","\x9c","\x28","\x06","\xfd"),
	HX_HCSTRING("stunCount","\x35","\x8d","\x6f","\x87"),
	HX_HCSTRING("invulnerable","\xed","\x76","\x61","\xa7"),
	HX_HCSTRING("invulDuration","\xfc","\xe4","\xda","\x10"),
	HX_HCSTRING("invulCount","\x27","\xd6","\xf1","\xec"),
	HX_HCSTRING("unstoppable","\x4f","\xb5","\x04","\xc0"),
	HX_HCSTRING("updateActor","\x2c","\x34","\x3f","\x01"),
	HX_HCSTRING("updateStun","\xe3","\xdf","\x10","\x05"),
	HX_HCSTRING("stunLock","\x45","\xe2","\xc8","\xd9"),
	HX_HCSTRING("updateAttack","\xb1","\xa2","\xd3","\xdf"),
	HX_HCSTRING("updateHitbox","\x81","\x94","\xeb","\x56"),
	HX_HCSTRING("removeHitbox","\xfc","\x88","\x55","\xc6"),
	HX_HCSTRING("addHitbox","\x99","\x22","\x4c","\x0f"),
	HX_HCSTRING("isHitting","\xf7","\xb5","\xa7","\xfb"),
	HX_HCSTRING("getAttackDamage","\x0d","\x5c","\xe6","\x52"),
	HX_HCSTRING("getAttackBehavior","\xb0","\xff","\x54","\xdc"),
	HX_HCSTRING("updateActorAnimation","\x38","\xb5","\x0e","\x79"),
	HX_HCSTRING("removeBmp","\x61","\xda","\xe5","\xca"),
	HX_HCSTRING("addAnimationBmp","\x62","\x2b","\x71","\x30"),
	HX_HCSTRING("getAnimationBmp","\x57","\x15","\x0c","\xcd"),
	HX_HCSTRING("getAnimation","\x8e","\x8b","\x8b","\x5a"),
	HX_HCSTRING("getAnimationName","\xf9","\x08","\x6c","\xa5"),
	HX_HCSTRING("checkDamage","\x57","\x63","\xf6","\xff"),
	HX_HCSTRING("checkInvulnerable","\xd5","\x67","\x10","\x37"),
	HX_HCSTRING("takeActorDamage","\x3d","\x3c","\x3c","\xac"),
	HX_HCSTRING("takeProjectileDamage","\x9f","\x31","\x80","\xd4"),
	HX_HCSTRING("takeDamage","\x16","\xac","\xbd","\xb1"),
	HX_HCSTRING("calculateDamage","\x75","\xaa","\x0e","\xd3"),
	HX_HCSTRING("kill","\x9e","\xdf","\x09","\x47"),
	HX_HCSTRING("setGrounded","\x68","\x34","\xbc","\xc0"),
	HX_HCSTRING("initiateAttack","\x01","\xa3","\x95","\x61"),
	HX_HCSTRING("endAttack","\x03","\x4a","\xf2","\x1f"),
	HX_HCSTRING("revertAttackProperties","\xdf","\x57","\x7b","\x16"),
	HX_HCSTRING("endAttackStun","\xdd","\x28","\x48","\x99"),
	HX_HCSTRING("goLeft","\x4f","\xc2","\xc5","\x4a"),
	HX_HCSTRING("goRight","\x94","\x50","\x51","\x99"),
	HX_HCSTRING("stopLeft","\x29","\x4d","\x6a","\x9a"),
	HX_HCSTRING("stopRight","\x7a","\x44","\xa6","\xf9"),
	HX_HCSTRING("jump","\xee","\xc4","\x69","\x46"),
	HX_HCSTRING("moveXAxis","\x68","\xb4","\x2e","\x01"),
	HX_HCSTRING("moveYAxis","\xe9","\x48","\x95","\x94"),
	HX_HCSTRING("checkFatalTiles","\xc9","\x0d","\xe9","\x82"),
	HX_HCSTRING("checkActorCollision","\xa5","\x31","\x7d","\x94"),
	HX_HCSTRING("getCollisionLargestDistance","\xd5","\xc6","\x43","\x15"),
	HX_HCSTRING("setAnimation","\x02","\xaf","\x84","\x6f"),
	HX_HCSTRING("isFacingLeft","\xcb","\x30","\x24","\x06"),
	HX_HCSTRING("getCurrentMap","\x19","\x2c","\xa0","\x23"),
	HX_HCSTRING("setCurrentMap","\x25","\x0e","\xa6","\x68"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Actor_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Actor_obj::__mClass,"__mClass");
};

#endif

hx::Class Actor_obj::__mClass;

void Actor_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("actors.Actor","\x45","\xda","\xd0","\x91");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &Actor_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Actor_obj >;
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