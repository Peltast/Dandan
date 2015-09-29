#include <hxcpp.h>

#include "hxMath.h"
#ifndef INCLUDED_Main
#include <Main.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_actors_Animation
#include <actors/Animation.h>
#endif
#ifndef INCLUDED_actors_Player
#include <actors/Player.h>
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
#ifndef INCLUDED_maps_Checkpoint
#include <maps/Checkpoint.h>
#endif
#ifndef INCLUDED_maps_MapObject
#include <maps/MapObject.h>
#endif
#ifndef INCLUDED_maps_Tile
#include <maps/Tile.h>
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
HX_STACK_FRAME("actors.Player","new",0xdf30bf83,"actors.Player.new","actors/Player.hx",41,0xa6e3592c)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(42)
	::Main tmp = ::Main_obj::getSingleton();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(42)
	::String tmp1 = ::openfl::events::KeyboardEvent_obj::KEY_UP;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(42)
	Dynamic tmp2 = this->checkKeysUp_dyn();		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(42)
	tmp->stage->addEventListener(tmp1,tmp2,null(),null(),null());
	HX_STACK_LINE(43)
	::Main tmp3 = ::Main_obj::getSingleton();		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(43)
	::String tmp4 = ::openfl::events::KeyboardEvent_obj::KEY_DOWN;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(43)
	Dynamic tmp5 = this->checkKeysDown_dyn();		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(43)
	tmp3->stage->addEventListener(tmp4,tmp5,null(),null(),null());
	HX_STACK_LINE(45)
	this->maxSpeedX = (int)10;
	HX_STACK_LINE(46)
	this->maxSpeedY = (int)60;
	HX_STACK_LINE(47)
	this->xAcc = ((Float)0.5);
	HX_STACK_LINE(48)
	this->yAcc = ((Float)0.1);
	HX_STACK_LINE(49)
	this->xVel = (int)0;
	HX_STACK_LINE(50)
	this->yVel = (int)0;
	HX_STACK_LINE(51)
	this->targetXVel = (int)0;
	HX_STACK_LINE(52)
	this->targetYVel = (int)0;
	HX_STACK_LINE(53)
	this->jumpCharges = (int)2;
	HX_STACK_LINE(55)
	this->playerSize = (int)16;
	HX_STACK_LINE(56)
	::haxe::ds::StringMap tmp6;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(56)
	{
		HX_STACK_LINE(56)
		::haxe::ds::StringMap tmp7 = ::haxe::ds::StringMap_obj::__new();		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(56)
		::haxe::ds::StringMap tmp8 = tmp7;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(56)
		tmp6 = tmp8;
	}
	HX_STACK_LINE(56)
	this->animations = tmp6;
	HX_STACK_LINE(59)
	::openfl::geom::Point tmp7 = ::openfl::geom::Point_obj::__new((int)0,(int)0);		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(59)
	int tmp8 = this->playerSize;		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(59)
	int tmp9 = this->playerSize;		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(59)
	::openfl::geom::Point tmp10 = ::openfl::geom::Point_obj::__new((int)0,(int)0);		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(58)
	::actors::Animation tmp11 = ::actors::Animation_obj::__new(HX_HCSTRING("Idle","\x34","\xd3","\x8c","\x30"),(int)0,tmp7,tmp8,tmp9,Array_obj< ::Dynamic >::__new().Add(tmp10));		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(58)
	::actors::Animation normalIdle = tmp11;		HX_STACK_VAR(normalIdle,"normalIdle");
	HX_STACK_LINE(61)
	int tmp12 = this->playerSize;		HX_STACK_VAR(tmp12,"tmp12");
	HX_STACK_LINE(61)
	int tmp13 = ((int)2 * tmp12);		HX_STACK_VAR(tmp13,"tmp13");
	HX_STACK_LINE(61)
	int tmp14 = this->playerSize;		HX_STACK_VAR(tmp14,"tmp14");
	HX_STACK_LINE(61)
	::openfl::geom::Point tmp15 = ::openfl::geom::Point_obj::__new(tmp13,tmp14);		HX_STACK_VAR(tmp15,"tmp15");
	HX_STACK_LINE(61)
	int tmp16 = this->playerSize;		HX_STACK_VAR(tmp16,"tmp16");
	HX_STACK_LINE(61)
	int tmp17 = this->playerSize;		HX_STACK_VAR(tmp17,"tmp17");
	HX_STACK_LINE(62)
	::openfl::geom::Point tmp18 = ::openfl::geom::Point_obj::__new(null(),null());		HX_STACK_VAR(tmp18,"tmp18");
	HX_STACK_LINE(62)
	::openfl::geom::Point tmp19 = ::openfl::geom::Point_obj::__new((int)1,(int)0);		HX_STACK_VAR(tmp19,"tmp19");
	HX_STACK_LINE(62)
	::openfl::geom::Point tmp20 = ::openfl::geom::Point_obj::__new((int)2,(int)0);		HX_STACK_VAR(tmp20,"tmp20");
	HX_STACK_LINE(62)
	::openfl::geom::Point tmp21 = ::openfl::geom::Point_obj::__new((int)3,(int)0);		HX_STACK_VAR(tmp21,"tmp21");
	HX_STACK_LINE(62)
	::openfl::geom::Point tmp22 = ::openfl::geom::Point_obj::__new((int)4,(int)0);		HX_STACK_VAR(tmp22,"tmp22");
	HX_STACK_LINE(60)
	::actors::Animation tmp23 = ::actors::Animation_obj::__new(HX_HCSTRING("LeftWalk","\xd0","\x5c","\x9f","\x2f"),(int)1,tmp15,tmp16,tmp17,Array_obj< ::Dynamic >::__new().Add(tmp18).Add(tmp19).Add(tmp20).Add(tmp21).Add(tmp22));		HX_STACK_VAR(tmp23,"tmp23");
	HX_STACK_LINE(60)
	::actors::Animation leftWalk = tmp23;		HX_STACK_VAR(leftWalk,"leftWalk");
	HX_STACK_LINE(64)
	int tmp24 = this->playerSize;		HX_STACK_VAR(tmp24,"tmp24");
	HX_STACK_LINE(64)
	int tmp25 = ((int)2 * tmp24);		HX_STACK_VAR(tmp25,"tmp25");
	HX_STACK_LINE(64)
	::openfl::geom::Point tmp26 = ::openfl::geom::Point_obj::__new(tmp25,(int)0);		HX_STACK_VAR(tmp26,"tmp26");
	HX_STACK_LINE(64)
	int tmp27 = this->playerSize;		HX_STACK_VAR(tmp27,"tmp27");
	HX_STACK_LINE(64)
	int tmp28 = this->playerSize;		HX_STACK_VAR(tmp28,"tmp28");
	HX_STACK_LINE(65)
	::openfl::geom::Point tmp29 = ::openfl::geom::Point_obj::__new(null(),null());		HX_STACK_VAR(tmp29,"tmp29");
	HX_STACK_LINE(65)
	::openfl::geom::Point tmp30 = ::openfl::geom::Point_obj::__new((int)1,(int)0);		HX_STACK_VAR(tmp30,"tmp30");
	HX_STACK_LINE(65)
	::openfl::geom::Point tmp31 = ::openfl::geom::Point_obj::__new((int)2,(int)0);		HX_STACK_VAR(tmp31,"tmp31");
	HX_STACK_LINE(65)
	::openfl::geom::Point tmp32 = ::openfl::geom::Point_obj::__new((int)3,(int)0);		HX_STACK_VAR(tmp32,"tmp32");
	HX_STACK_LINE(65)
	::openfl::geom::Point tmp33 = ::openfl::geom::Point_obj::__new((int)4,(int)0);		HX_STACK_VAR(tmp33,"tmp33");
	HX_STACK_LINE(63)
	::actors::Animation tmp34 = ::actors::Animation_obj::__new(HX_HCSTRING("RightWalk","\xe5","\x92","\x8b","\x5b"),(int)1,tmp26,tmp27,tmp28,Array_obj< ::Dynamic >::__new().Add(tmp29).Add(tmp30).Add(tmp31).Add(tmp32).Add(tmp33));		HX_STACK_VAR(tmp34,"tmp34");
	HX_STACK_LINE(63)
	::actors::Animation rightWalk = tmp34;		HX_STACK_VAR(rightWalk,"rightWalk");
	HX_STACK_LINE(67)
	int tmp35 = this->playerSize;		HX_STACK_VAR(tmp35,"tmp35");
	HX_STACK_LINE(67)
	::openfl::geom::Point tmp36 = ::openfl::geom::Point_obj::__new((int)0,tmp35);		HX_STACK_VAR(tmp36,"tmp36");
	HX_STACK_LINE(67)
	int tmp37 = this->playerSize;		HX_STACK_VAR(tmp37,"tmp37");
	HX_STACK_LINE(67)
	int tmp38 = this->playerSize;		HX_STACK_VAR(tmp38,"tmp38");
	HX_STACK_LINE(67)
	::openfl::geom::Point tmp39 = ::openfl::geom::Point_obj::__new(null(),null());		HX_STACK_VAR(tmp39,"tmp39");
	HX_STACK_LINE(66)
	::actors::Animation tmp40 = ::actors::Animation_obj::__new(HX_HCSTRING("Jump","\x0e","\xf1","\x42","\x31"),(int)0,tmp36,tmp37,tmp38,Array_obj< ::Dynamic >::__new().Add(tmp39));		HX_STACK_VAR(tmp40,"tmp40");
	HX_STACK_LINE(66)
	::actors::Animation jump = tmp40;		HX_STACK_VAR(jump,"jump");
	HX_STACK_LINE(69)
	{
		HX_STACK_LINE(69)
		::String tmp41 = normalIdle->getName();		HX_STACK_VAR(tmp41,"tmp41");
		HX_STACK_LINE(69)
		::String k = tmp41;		HX_STACK_VAR(k,"k");
		HX_STACK_LINE(69)
		::haxe::ds::StringMap tmp42 = this->animations;		HX_STACK_VAR(tmp42,"tmp42");
		HX_STACK_LINE(69)
		::String tmp43 = k;		HX_STACK_VAR(tmp43,"tmp43");
		HX_STACK_LINE(69)
		::actors::Animation tmp44 = normalIdle;		HX_STACK_VAR(tmp44,"tmp44");
		HX_STACK_LINE(69)
		tmp42->set(tmp43,tmp44);
		HX_STACK_LINE(69)
		normalIdle;
	}
	HX_STACK_LINE(70)
	{
		HX_STACK_LINE(70)
		::String tmp41 = leftWalk->getName();		HX_STACK_VAR(tmp41,"tmp41");
		HX_STACK_LINE(70)
		::String k = tmp41;		HX_STACK_VAR(k,"k");
		HX_STACK_LINE(70)
		::haxe::ds::StringMap tmp42 = this->animations;		HX_STACK_VAR(tmp42,"tmp42");
		HX_STACK_LINE(70)
		::String tmp43 = k;		HX_STACK_VAR(tmp43,"tmp43");
		HX_STACK_LINE(70)
		::actors::Animation tmp44 = leftWalk;		HX_STACK_VAR(tmp44,"tmp44");
		HX_STACK_LINE(70)
		tmp42->set(tmp43,tmp44);
		HX_STACK_LINE(70)
		leftWalk;
	}
	HX_STACK_LINE(71)
	{
		HX_STACK_LINE(71)
		::String tmp41 = rightWalk->getName();		HX_STACK_VAR(tmp41,"tmp41");
		HX_STACK_LINE(71)
		::String k = tmp41;		HX_STACK_VAR(k,"k");
		HX_STACK_LINE(71)
		::haxe::ds::StringMap tmp42 = this->animations;		HX_STACK_VAR(tmp42,"tmp42");
		HX_STACK_LINE(71)
		::String tmp43 = k;		HX_STACK_VAR(tmp43,"tmp43");
		HX_STACK_LINE(71)
		::actors::Animation tmp44 = rightWalk;		HX_STACK_VAR(tmp44,"tmp44");
		HX_STACK_LINE(71)
		tmp42->set(tmp43,tmp44);
		HX_STACK_LINE(71)
		rightWalk;
	}
	HX_STACK_LINE(72)
	{
		HX_STACK_LINE(72)
		::String tmp41 = jump->getName();		HX_STACK_VAR(tmp41,"tmp41");
		HX_STACK_LINE(72)
		::String k = tmp41;		HX_STACK_VAR(k,"k");
		HX_STACK_LINE(72)
		::haxe::ds::StringMap tmp42 = this->animations;		HX_STACK_VAR(tmp42,"tmp42");
		HX_STACK_LINE(72)
		::String tmp43 = k;		HX_STACK_VAR(tmp43,"tmp43");
		HX_STACK_LINE(72)
		::actors::Animation tmp44 = jump;		HX_STACK_VAR(tmp44,"tmp44");
		HX_STACK_LINE(72)
		tmp42->set(tmp43,tmp44);
		HX_STACK_LINE(72)
		jump;
	}
	HX_STACK_LINE(75)
	this->currentAnimation = normalIdle;
	HX_STACK_LINE(76)
	::actors::Animation tmp41 = normalIdle;		HX_STACK_VAR(tmp41,"tmp41");
	HX_STACK_LINE(76)
	::openfl::display::Bitmap tmp42 = ::Main_obj::getBitmapAsset(HX_HCSTRING("assets/player.png","\x68","\x5e","\x22","\x38"));		HX_STACK_VAR(tmp42,"tmp42");
	HX_STACK_LINE(76)
	::openfl::display::Bitmap tmp43 = this->getAnimationBmp(tmp41,tmp42);		HX_STACK_VAR(tmp43,"tmp43");
	HX_STACK_LINE(76)
	this->playerBmp = tmp43;
	HX_STACK_LINE(78)
	::openfl::display::Bitmap tmp44 = this->playerBmp;		HX_STACK_VAR(tmp44,"tmp44");
	HX_STACK_LINE(78)
	super::__construct(hx::ObjectPtr<OBJ_>(this),tmp44,false);
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

Void Player_obj::removeCharBmp( ){
{
		HX_STACK_FRAME("actors.Player","removeCharBmp",0x7676340e,"actors.Player.removeCharBmp","actors/Player.hx",81,0xa6e3592c)
		HX_STACK_THIS(this)
		HX_STACK_LINE(82)
		::openfl::display::Bitmap tmp = this->playerBmp;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(82)
		bool tmp1 = this->contains(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(82)
		if ((tmp1)){
			HX_STACK_LINE(83)
			::openfl::display::Bitmap tmp2 = this->playerBmp;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(83)
			this->removeChild(tmp2);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Player_obj,removeCharBmp,(void))

Void Player_obj::updatePlayer( ){
{
		HX_STACK_FRAME("actors.Player","updatePlayer",0x6d3826c7,"actors.Player.updatePlayer","actors/Player.hx",86,0xa6e3592c)
		HX_STACK_THIS(this)
		HX_STACK_LINE(88)
		::actors::Animation tmp = this->currentAnimation;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(88)
		tmp->updateAnimation();
		HX_STACK_LINE(89)
		this->removeCharBmp();
		HX_STACK_LINE(90)
		::actors::Animation tmp1 = this->currentAnimation;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(90)
		this->addAnimationBmp(tmp1);
		HX_STACK_LINE(92)
		this->updateVelocity();
		HX_STACK_LINE(93)
		this->moveXAxis();
		HX_STACK_LINE(94)
		this->moveYAxis();
		HX_STACK_LINE(96)
		::maps::AreaMap tmp2 = this->currentMap;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(96)
		tmp2->updateCheckpoints(hx::ObjectPtr<OBJ_>(this));
		HX_STACK_LINE(97)
		::maps::AreaMap tmp3 = this->currentMap;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(97)
		tmp3->updateEndPortal(hx::ObjectPtr<OBJ_>(this));
		HX_STACK_LINE(99)
		Float tmp4 = this->get_y();		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(99)
		bool tmp5 = (tmp4 > (int)200);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(99)
		if ((tmp5)){
			HX_STACK_LINE(100)
			this->killPlayer();
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Player_obj,updatePlayer,(void))

Void Player_obj::updateVelocity( ){
{
		HX_STACK_FRAME("actors.Player","updateVelocity",0x1f4f6303,"actors.Player.updateVelocity","actors/Player.hx",102,0xa6e3592c)
		HX_STACK_THIS(this)
		HX_STACK_LINE(104)
		int tmp = this->targetXVel;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(104)
		Float tmp1 = this->xAcc;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(104)
		Float tmp2 = (tmp * tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(104)
		Float tmp3 = this->xAcc;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(104)
		Float tmp4 = ((int)1 - tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(104)
		Float tmp5 = this->xVel;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(104)
		Float tmp6 = (tmp4 * tmp5);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(104)
		Float tmp7 = (tmp2 + tmp6);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(104)
		this->xVel = tmp7;
		HX_STACK_LINE(105)
		Float tmp8 = this->xVel;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(105)
		int tmp9 = this->maxSpeedX;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(105)
		bool tmp10 = (tmp8 > tmp9);		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(105)
		if ((tmp10)){
			HX_STACK_LINE(106)
			int tmp11 = this->maxSpeedX;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(106)
			this->xVel = tmp11;
		}
		else{
			HX_STACK_LINE(107)
			Float tmp11 = this->xVel;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(107)
			int tmp12 = this->maxSpeedX;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(107)
			int tmp13 = -(tmp12);		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(107)
			bool tmp14 = (tmp11 < tmp13);		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(107)
			if ((tmp14)){
				HX_STACK_LINE(108)
				int tmp15 = this->maxSpeedX;		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(108)
				int tmp16 = -(tmp15);		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(108)
				this->xVel = tmp16;
			}
		}
		HX_STACK_LINE(110)
		int tmp11 = this->targetYVel;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(110)
		Float tmp12 = this->yAcc;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(110)
		Float tmp13 = (tmp11 * tmp12);		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(110)
		Float tmp14 = this->yAcc;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(110)
		Float tmp15 = ((int)1 - tmp14);		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(110)
		Float tmp16 = this->yVel;		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(110)
		Float tmp17 = (tmp15 * tmp16);		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(110)
		Float tmp18 = (tmp13 + tmp17);		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(110)
		this->yVel = tmp18;
		HX_STACK_LINE(111)
		Float tmp19 = this->yVel;		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(111)
		int tmp20 = this->maxSpeedY;		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(111)
		bool tmp21 = (tmp19 > tmp20);		HX_STACK_VAR(tmp21,"tmp21");
		HX_STACK_LINE(111)
		if ((tmp21)){
			HX_STACK_LINE(112)
			int tmp22 = this->maxSpeedY;		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(112)
			this->yVel = tmp22;
		}
		else{
			HX_STACK_LINE(113)
			Float tmp22 = this->yVel;		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(113)
			int tmp23 = this->maxSpeedY;		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(113)
			int tmp24 = -(tmp23);		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(113)
			bool tmp25 = (tmp22 < tmp24);		HX_STACK_VAR(tmp25,"tmp25");
			HX_STACK_LINE(113)
			if ((tmp25)){
				HX_STACK_LINE(114)
				int tmp26 = this->maxSpeedY;		HX_STACK_VAR(tmp26,"tmp26");
				HX_STACK_LINE(114)
				int tmp27 = -(tmp26);		HX_STACK_VAR(tmp27,"tmp27");
				HX_STACK_LINE(114)
				this->yVel = tmp27;
			}
		}
		HX_STACK_LINE(116)
		this->targetYVel = (int)10;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Player_obj,updateVelocity,(void))

Void Player_obj::moveXAxis( ){
{
		HX_STACK_FRAME("actors.Player","moveXAxis",0xa6581fcb,"actors.Player.moveXAxis","actors/Player.hx",118,0xa6e3592c)
		HX_STACK_THIS(this)
		HX_STACK_LINE(120)
		{
			HX_STACK_LINE(120)
			::actors::Player _g = hx::ObjectPtr<OBJ_>(this);		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(120)
			Float tmp = _g->get_x();		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(120)
			Float tmp1 = this->xVel;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(120)
			int tmp2 = ::Math_obj::round(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(120)
			Float tmp3 = (tmp + tmp2);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(120)
			_g->set_x(tmp3);
		}
		HX_STACK_LINE(122)
		::maps::AreaMap tmp = this->currentMap;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(122)
		Array< ::Dynamic > tmp1 = tmp->checkCollisions(((::maps::MapObject)(hx::ObjectPtr<OBJ_>(this))));		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(122)
		Array< ::Dynamic > collisions = tmp1;		HX_STACK_VAR(collisions,"collisions");
		HX_STACK_LINE(123)
		Array< ::Dynamic > tmp2 = collisions;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(123)
		bool tmp3 = this->checkFatalTiles(tmp2,true);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(123)
		if ((tmp3)){
			HX_STACK_LINE(124)
			this->killPlayer();
			HX_STACK_LINE(125)
			return null();
		}
		HX_STACK_LINE(128)
		Array< ::Dynamic > tmp4 = collisions;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(128)
		int tmp5 = this->getCollisionLargestDistance(tmp4,true);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(128)
		int largestDistance = tmp5;		HX_STACK_VAR(largestDistance,"largestDistance");
		HX_STACK_LINE(130)
		bool tmp6 = (largestDistance != (int)0);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(130)
		if ((tmp6)){
			HX_STACK_LINE(131)
			::actors::Player _g = hx::ObjectPtr<OBJ_>(this);		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(131)
			Float tmp7 = _g->get_x();		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(131)
			int tmp8 = largestDistance;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(131)
			Float tmp9 = (tmp7 - tmp8);		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(131)
			_g->set_x(tmp9);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Player_obj,moveXAxis,(void))

Void Player_obj::moveYAxis( ){
{
		HX_STACK_FRAME("actors.Player","moveYAxis",0x39beb44c,"actors.Player.moveYAxis","actors/Player.hx",133,0xa6e3592c)
		HX_STACK_THIS(this)
		HX_STACK_LINE(135)
		{
			HX_STACK_LINE(135)
			::actors::Player _g = hx::ObjectPtr<OBJ_>(this);		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(135)
			Float tmp = _g->get_y();		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(135)
			Float tmp1 = this->yVel;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(135)
			int tmp2 = ::Math_obj::round(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(135)
			Float tmp3 = (tmp + tmp2);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(135)
			_g->set_y(tmp3);
		}
		HX_STACK_LINE(137)
		::maps::AreaMap tmp = this->currentMap;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(137)
		Array< ::Dynamic > tmp1 = tmp->checkCollisions(((::maps::MapObject)(hx::ObjectPtr<OBJ_>(this))));		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(137)
		Array< ::Dynamic > collisions = tmp1;		HX_STACK_VAR(collisions,"collisions");
		HX_STACK_LINE(138)
		Array< ::Dynamic > tmp2 = collisions;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(138)
		bool tmp3 = this->checkFatalTiles(tmp2,false);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(138)
		if ((tmp3)){
			HX_STACK_LINE(139)
			this->killPlayer();
			HX_STACK_LINE(140)
			return null();
		}
		HX_STACK_LINE(143)
		Array< ::Dynamic > tmp4 = collisions;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(143)
		int tmp5 = this->getCollisionLargestDistance(tmp4,false);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(143)
		int largestDistance = tmp5;		HX_STACK_VAR(largestDistance,"largestDistance");
		HX_STACK_LINE(145)
		bool tmp6 = (largestDistance != (int)0);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(145)
		if ((tmp6)){
			HX_STACK_LINE(146)
			::actors::Player _g = hx::ObjectPtr<OBJ_>(this);		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(146)
			Float tmp7 = _g->get_y();		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(146)
			int tmp8 = largestDistance;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(146)
			Float tmp9 = (tmp7 - tmp8);		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(146)
			_g->set_y(tmp9);
		}
		HX_STACK_LINE(147)
		bool tmp7 = (largestDistance > (int)0);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(147)
		if ((tmp7)){
			HX_STACK_LINE(148)
			this->setGrounded();
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Player_obj,moveYAxis,(void))

bool Player_obj::checkFatalTiles( Array< ::Dynamic > collisionList,bool xAxis){
	HX_STACK_FRAME("actors.Player","checkFatalTiles",0x7a41a56c,"actors.Player.checkFatalTiles","actors/Player.hx",151,0xa6e3592c)
	HX_STACK_THIS(this)
	HX_STACK_ARG(collisionList,"collisionList")
	HX_STACK_ARG(xAxis,"xAxis")
	HX_STACK_LINE(153)
	{
		HX_STACK_LINE(153)
		int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(153)
		int tmp = collisionList->length;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(153)
		int _g = tmp;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(153)
		while((true)){
			HX_STACK_LINE(153)
			bool tmp1 = (_g1 < _g);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(153)
			bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(153)
			if ((tmp2)){
				HX_STACK_LINE(153)
				break;
			}
			HX_STACK_LINE(153)
			int tmp3 = (_g1)++;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(153)
			int i = tmp3;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(154)
			::maps::MapObject tmp4 = collisionList->__get(i).StaticCast< ::maps::MapObject >();		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(154)
			::maps::MapObject tmp5 = tmp4;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(154)
			bool tmp6 = ::Std_obj::is(tmp5,hx::ClassOf< ::maps::Tile >());		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(154)
			if ((tmp6)){
				HX_STACK_LINE(156)
				::maps::MapObject tmp7 = collisionList->__get(i).StaticCast< ::maps::MapObject >();		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(156)
				::maps::Tile tempTile = ((::maps::Tile)(tmp7));		HX_STACK_VAR(tempTile,"tempTile");
				HX_STACK_LINE(157)
				bool tmp8 = xAxis;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(157)
				bool tmp9 = tempTile->checkFatal(hx::ObjectPtr<OBJ_>(this),tmp8);		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(157)
				if ((tmp9)){
					HX_STACK_LINE(158)
					return true;
				}
			}
		}
	}
	HX_STACK_LINE(161)
	return false;
}


HX_DEFINE_DYNAMIC_FUNC2(Player_obj,checkFatalTiles,return )

int Player_obj::getCollisionLargestDistance( Array< ::Dynamic > collisionList,bool xAxis){
	HX_STACK_FRAME("actors.Player","getCollisionLargestDistance",0xa432c6f8,"actors.Player.getCollisionLargestDistance","actors/Player.hx",164,0xa6e3592c)
	HX_STACK_THIS(this)
	HX_STACK_ARG(collisionList,"collisionList")
	HX_STACK_ARG(xAxis,"xAxis")
	HX_STACK_LINE(165)
	int largestDistance = (int)0;		HX_STACK_VAR(largestDistance,"largestDistance");
	HX_STACK_LINE(166)
	int largestIndex = (int)-1;		HX_STACK_VAR(largestIndex,"largestIndex");
	HX_STACK_LINE(167)
	int tempDistance;		HX_STACK_VAR(tempDistance,"tempDistance");
	HX_STACK_LINE(169)
	{
		HX_STACK_LINE(169)
		int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(169)
		int tmp = collisionList->length;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(169)
		int _g = tmp;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(169)
		while((true)){
			HX_STACK_LINE(169)
			bool tmp1 = (_g1 < _g);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(169)
			bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(169)
			if ((tmp2)){
				HX_STACK_LINE(169)
				break;
			}
			HX_STACK_LINE(169)
			int tmp3 = (_g1)++;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(169)
			int i = tmp3;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(170)
			::maps::MapObject tmp4 = collisionList->__get(i).StaticCast< ::maps::MapObject >();		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(170)
			bool tmp5 = tmp4->getPassable();		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(170)
			bool tmp6 = !(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(170)
			if ((tmp6)){
				HX_STACK_LINE(170)
				continue;
			}
			HX_STACK_LINE(172)
			::maps::MapObject tmp7 = collisionList->__get(i).StaticCast< ::maps::MapObject >();		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(172)
			::maps::MapObject tmp8 = tmp7;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(172)
			bool tmp9 = xAxis;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(172)
			int tmp10 = this->getCollisionDistance(tmp8,tmp9);		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(172)
			tempDistance = tmp10;
			HX_STACK_LINE(173)
			int tmp11 = tempDistance;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(173)
			Float tmp12 = ::Math_obj::abs(tmp11);		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(173)
			int tmp13 = largestDistance;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(173)
			Float tmp14 = ::Math_obj::abs(tmp13);		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(173)
			bool tmp15 = (tmp12 > tmp14);		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(173)
			if ((tmp15)){
				HX_STACK_LINE(174)
				largestDistance = tempDistance;
				HX_STACK_LINE(175)
				largestIndex = i;
			}
		}
	}
	HX_STACK_LINE(179)
	int tmp = largestDistance;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(179)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC2(Player_obj,getCollisionLargestDistance,return )

Void Player_obj::setGrounded( ){
{
		HX_STACK_FRAME("actors.Player","setGrounded",0x13a17e8b,"actors.Player.setGrounded","actors/Player.hx",182,0xa6e3592c)
		HX_STACK_THIS(this)
		HX_STACK_LINE(184)
		bool tmp = this->grounded;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(184)
		bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(184)
		if ((tmp1)){
			HX_STACK_LINE(185)
			::actors::Animation tmp2 = this->getAnimation(HX_HCSTRING("Idle","\x34","\xd3","\x8c","\x30"));		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(185)
			this->currentAnimation = tmp2;
		}
		HX_STACK_LINE(186)
		this->grounded = true;
		HX_STACK_LINE(187)
		this->jumpCharges = (int)2;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Player_obj,setGrounded,(void))

Void Player_obj::killPlayer( ){
{
		HX_STACK_FRAME("actors.Player","killPlayer",0xdbdc54dc,"actors.Player.killPlayer","actors/Player.hx",190,0xa6e3592c)
		HX_STACK_THIS(this)
		HX_STACK_LINE(192)
		::maps::AreaMap tmp = this->currentMap;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(192)
		::maps::Checkpoint tmp1 = tmp->getCurrentCheckpoint();		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(192)
		::maps::Checkpoint checkpoint = tmp1;		HX_STACK_VAR(checkpoint,"checkpoint");
		HX_STACK_LINE(193)
		bool tmp2 = (checkpoint == null());		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(193)
		if ((tmp2)){
			HX_STACK_LINE(193)
			return null();
		}
		HX_STACK_LINE(195)
		Float tmp3 = checkpoint->get_x();		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(195)
		this->set_x(tmp3);
		HX_STACK_LINE(196)
		Float tmp4 = checkpoint->get_y();		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(196)
		this->set_y(tmp4);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Player_obj,killPlayer,(void))

::maps::AreaMap Player_obj::getCurrentMap( ){
	HX_STACK_FRAME("actors.Player","getCurrentMap",0xf20684fc,"actors.Player.getCurrentMap","actors/Player.hx",200,0xa6e3592c)
	HX_STACK_THIS(this)
	HX_STACK_LINE(200)
	::maps::AreaMap tmp = this->currentMap;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(200)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(Player_obj,getCurrentMap,return )

Void Player_obj::setCurrentMap( ::maps::AreaMap map){
{
		HX_STACK_FRAME("actors.Player","setCurrentMap",0x370c6708,"actors.Player.setCurrentMap","actors/Player.hx",201,0xa6e3592c)
		HX_STACK_THIS(this)
		HX_STACK_ARG(map,"map")
		HX_STACK_LINE(201)
		this->currentMap = map;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Player_obj,setCurrentMap,(void))

Void Player_obj::addAnimationBmp( ::actors::Animation animation){
{
		HX_STACK_FRAME("actors.Player","addAnimationBmp",0x27c9c305,"actors.Player.addAnimationBmp","actors/Player.hx",203,0xa6e3592c)
		HX_STACK_THIS(this)
		HX_STACK_ARG(animation,"animation")
		HX_STACK_LINE(205)
		::actors::Animation tmp = this->currentAnimation;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(205)
		::openfl::display::Bitmap tmp1 = ::Main_obj::getBitmapAsset(HX_HCSTRING("assets/player.png","\x68","\x5e","\x22","\x38"));		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(205)
		::openfl::display::Bitmap tmp2 = this->getAnimationBmp(tmp,tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(205)
		this->playerBmp = tmp2;
		HX_STACK_LINE(206)
		::openfl::display::Bitmap tmp3 = this->playerBmp;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(206)
		this->addChild(tmp3);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Player_obj,addAnimationBmp,(void))

::openfl::display::Bitmap Player_obj::getAnimationBmp( ::actors::Animation animation,::openfl::display::Bitmap bitmap){
	HX_STACK_FRAME("actors.Player","getAnimationBmp",0xc464acfa,"actors.Player.getAnimationBmp","actors/Player.hx",208,0xa6e3592c)
	HX_STACK_THIS(this)
	HX_STACK_ARG(animation,"animation")
	HX_STACK_ARG(bitmap,"bitmap")
	HX_STACK_LINE(210)
	::openfl::geom::Rectangle tmp = animation->getRectangle();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(210)
	::openfl::geom::Rectangle frame = tmp;		HX_STACK_VAR(frame,"frame");
	HX_STACK_LINE(211)
	int tmp1 = this->playerSize;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(211)
	int tmp2 = this->playerSize;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(211)
	::openfl::display::BitmapData tmp3 = ::openfl::display::BitmapData_obj::__new(tmp1,tmp2,null(),null());		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(211)
	::openfl::display::Bitmap tmp4 = ::openfl::display::Bitmap_obj::__new(tmp3,null(),null());		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(211)
	::openfl::display::Bitmap animationBmp = tmp4;		HX_STACK_VAR(animationBmp,"animationBmp");
	HX_STACK_LINE(212)
	::openfl::display::BitmapData tmp5 = bitmap->bitmapData;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(212)
	::openfl::geom::Rectangle tmp6 = frame;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(212)
	::openfl::geom::Point tmp7 = ::openfl::geom::Point_obj::__new(null(),null());		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(212)
	animationBmp->bitmapData->copyPixels(tmp5,tmp6,tmp7,null(),null(),null());
	HX_STACK_LINE(214)
	::openfl::display::Bitmap tmp8 = animationBmp;		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(214)
	return tmp8;
}


HX_DEFINE_DYNAMIC_FUNC2(Player_obj,getAnimationBmp,return )

Void Player_obj::checkKeysDown( ::openfl::events::KeyboardEvent key){
{
		HX_STACK_FRAME("actors.Player","checkKeysDown",0xcc58c641,"actors.Player.checkKeysDown","actors/Player.hx",217,0xa6e3592c)
		HX_STACK_THIS(this)
		HX_STACK_ARG(key,"key")
		HX_STACK_LINE(219)
		bool tmp = (key->keyCode == (int)65);		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(219)
		bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(219)
		bool tmp2;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(219)
		if ((tmp1)){
			HX_STACK_LINE(219)
			tmp2 = (key->keyCode == (int)37);
		}
		else{
			HX_STACK_LINE(219)
			tmp2 = true;
		}
		HX_STACK_LINE(219)
		if ((tmp2)){
			HX_STACK_LINE(220)
			this->goLeft();
		}
		else{
			HX_STACK_LINE(221)
			bool tmp3 = (key->keyCode == (int)68);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(221)
			bool tmp4 = !(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(221)
			bool tmp5;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(221)
			if ((tmp4)){
				HX_STACK_LINE(221)
				tmp5 = (key->keyCode == (int)39);
			}
			else{
				HX_STACK_LINE(221)
				tmp5 = true;
			}
			HX_STACK_LINE(221)
			if ((tmp5)){
				HX_STACK_LINE(222)
				this->goRight();
			}
		}
		HX_STACK_LINE(224)
		bool tmp3 = (key->keyCode == (int)32);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(224)
		if ((tmp3)){
			HX_STACK_LINE(225)
			this->jump();
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Player_obj,checkKeysDown,(void))

Void Player_obj::checkKeysUp( ::openfl::events::KeyboardEvent key){
{
		HX_STACK_FRAME("actors.Player","checkKeysUp",0x74f1ae7a,"actors.Player.checkKeysUp","actors/Player.hx",228,0xa6e3592c)
		HX_STACK_THIS(this)
		HX_STACK_ARG(key,"key")
		HX_STACK_LINE(230)
		bool tmp = (key->keyCode == (int)65);		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(230)
		bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(230)
		bool tmp2;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(230)
		if ((tmp1)){
			HX_STACK_LINE(230)
			tmp2 = (key->keyCode == (int)37);
		}
		else{
			HX_STACK_LINE(230)
			tmp2 = true;
		}
		HX_STACK_LINE(230)
		if ((tmp2)){
			HX_STACK_LINE(231)
			this->stopLeft();
		}
		else{
			HX_STACK_LINE(232)
			bool tmp3 = (key->keyCode == (int)68);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(232)
			bool tmp4 = !(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(232)
			bool tmp5;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(232)
			if ((tmp4)){
				HX_STACK_LINE(232)
				tmp5 = (key->keyCode == (int)39);
			}
			else{
				HX_STACK_LINE(232)
				tmp5 = true;
			}
			HX_STACK_LINE(232)
			if ((tmp5)){
				HX_STACK_LINE(233)
				this->stopRight();
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Player_obj,checkKeysUp,(void))

Void Player_obj::goLeft( ){
{
		HX_STACK_FRAME("actors.Player","goLeft",0x2e8aab0c,"actors.Player.goLeft","actors/Player.hx",237,0xa6e3592c)
		HX_STACK_THIS(this)
		HX_STACK_LINE(238)
		this->targetXVel = (int)-5;
		HX_STACK_LINE(239)
		::actors::Animation tmp = this->currentAnimation;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(239)
		::String tmp1 = tmp->getName();		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(239)
		bool tmp2 = (tmp1 != HX_HCSTRING("LeftWalk","\xd0","\x5c","\x9f","\x2f"));		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(239)
		bool tmp3;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(239)
		if ((tmp2)){
			HX_STACK_LINE(239)
			tmp3 = this->grounded;
		}
		else{
			HX_STACK_LINE(239)
			tmp3 = false;
		}
		HX_STACK_LINE(239)
		if ((tmp3)){
			HX_STACK_LINE(240)
			::actors::Animation tmp4 = this->getAnimation(HX_HCSTRING("LeftWalk","\xd0","\x5c","\x9f","\x2f"));		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(240)
			this->currentAnimation = tmp4;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Player_obj,goLeft,(void))

Void Player_obj::goRight( ){
{
		HX_STACK_FRAME("actors.Player","goRight",0x01d80d37,"actors.Player.goRight","actors/Player.hx",242,0xa6e3592c)
		HX_STACK_THIS(this)
		HX_STACK_LINE(243)
		this->targetXVel = (int)5;
		HX_STACK_LINE(244)
		::actors::Animation tmp = this->currentAnimation;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(244)
		::String tmp1 = tmp->getName();		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(244)
		bool tmp2 = (tmp1 != HX_HCSTRING("RightWalk","\xe5","\x92","\x8b","\x5b"));		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(244)
		bool tmp3;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(244)
		if ((tmp2)){
			HX_STACK_LINE(244)
			tmp3 = this->grounded;
		}
		else{
			HX_STACK_LINE(244)
			tmp3 = false;
		}
		HX_STACK_LINE(244)
		if ((tmp3)){
			HX_STACK_LINE(245)
			::actors::Animation tmp4 = this->getAnimation(HX_HCSTRING("RightWalk","\xe5","\x92","\x8b","\x5b"));		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(245)
			this->currentAnimation = tmp4;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Player_obj,goRight,(void))

Void Player_obj::stopLeft( ){
{
		HX_STACK_FRAME("actors.Player","stopLeft",0xa7c89f26,"actors.Player.stopLeft","actors/Player.hx",247,0xa6e3592c)
		HX_STACK_THIS(this)
		HX_STACK_LINE(248)
		int tmp = this->targetXVel;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(248)
		bool tmp1 = (tmp < (int)0);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(248)
		if ((tmp1)){
			HX_STACK_LINE(249)
			this->targetXVel = (int)0;
			HX_STACK_LINE(250)
			bool tmp2 = this->grounded;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(250)
			if ((tmp2)){
				HX_STACK_LINE(251)
				::actors::Animation tmp3 = this->getAnimation(HX_HCSTRING("Idle","\x34","\xd3","\x8c","\x30"));		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(251)
				this->currentAnimation = tmp3;
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Player_obj,stopLeft,(void))

Void Player_obj::stopRight( ){
{
		HX_STACK_FRAME("actors.Player","stopRight",0x9ecfafdd,"actors.Player.stopRight","actors/Player.hx",254,0xa6e3592c)
		HX_STACK_THIS(this)
		HX_STACK_LINE(255)
		int tmp = this->targetXVel;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(255)
		bool tmp1 = (tmp > (int)0);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(255)
		if ((tmp1)){
			HX_STACK_LINE(256)
			this->targetXVel = (int)0;
			HX_STACK_LINE(257)
			bool tmp2 = this->grounded;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(257)
			if ((tmp2)){
				HX_STACK_LINE(258)
				::actors::Animation tmp3 = this->getAnimation(HX_HCSTRING("Idle","\x34","\xd3","\x8c","\x30"));		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(258)
				this->currentAnimation = tmp3;
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Player_obj,stopRight,(void))

Void Player_obj::jump( ){
{
		HX_STACK_FRAME("actors.Player","jump",0x68de146b,"actors.Player.jump","actors/Player.hx",261,0xa6e3592c)
		HX_STACK_THIS(this)
		HX_STACK_LINE(262)
		int tmp = this->jumpCharges;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(262)
		bool tmp1 = (tmp == (int)0);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(262)
		if ((tmp1)){
			HX_STACK_LINE(262)
			return null();
		}
		HX_STACK_LINE(264)
		hx::SubEq(this->jumpCharges,(int)1);
		HX_STACK_LINE(265)
		this->grounded = false;
		HX_STACK_LINE(266)
		::actors::Animation tmp2 = this->getAnimation(HX_HCSTRING("Jump","\x0e","\xf1","\x42","\x31"));		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(266)
		this->currentAnimation = tmp2;
		HX_STACK_LINE(267)
		this->yVel = (int)-15;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Player_obj,jump,(void))

::actors::Animation Player_obj::getAnimation( ::String title){
	HX_STACK_FRAME("actors.Player","getAnimation",0x9047200b,"actors.Player.getAnimation","actors/Player.hx",270,0xa6e3592c)
	HX_STACK_THIS(this)
	HX_STACK_ARG(title,"title")
	HX_STACK_LINE(271)
	::haxe::ds::StringMap tmp = this->animations;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(271)
	::String tmp1 = title;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(271)
	::actors::Animation tmp2 = tmp->get(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(271)
	::actors::Animation animation = tmp2;		HX_STACK_VAR(animation,"animation");
	HX_STACK_LINE(272)
	::actors::Animation tmp3 = animation;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(272)
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC1(Player_obj,getAnimation,return )


Player_obj::Player_obj()
{
}

void Player_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Player);
	HX_MARK_MEMBER_NAME(animations,"animations");
	HX_MARK_MEMBER_NAME(currentAnimation,"currentAnimation");
	HX_MARK_MEMBER_NAME(playerBmp,"playerBmp");
	HX_MARK_MEMBER_NAME(currentMap,"currentMap");
	HX_MARK_MEMBER_NAME(grounded,"grounded");
	HX_MARK_MEMBER_NAME(jumpCharges,"jumpCharges");
	HX_MARK_MEMBER_NAME(xAcc,"xAcc");
	HX_MARK_MEMBER_NAME(yAcc,"yAcc");
	HX_MARK_MEMBER_NAME(targetXVel,"targetXVel");
	HX_MARK_MEMBER_NAME(targetYVel,"targetYVel");
	HX_MARK_MEMBER_NAME(xVel,"xVel");
	HX_MARK_MEMBER_NAME(yVel,"yVel");
	HX_MARK_MEMBER_NAME(maxSpeedX,"maxSpeedX");
	HX_MARK_MEMBER_NAME(maxSpeedY,"maxSpeedY");
	HX_MARK_MEMBER_NAME(playerSize,"playerSize");
	::maps::MapObject_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void Player_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(animations,"animations");
	HX_VISIT_MEMBER_NAME(currentAnimation,"currentAnimation");
	HX_VISIT_MEMBER_NAME(playerBmp,"playerBmp");
	HX_VISIT_MEMBER_NAME(currentMap,"currentMap");
	HX_VISIT_MEMBER_NAME(grounded,"grounded");
	HX_VISIT_MEMBER_NAME(jumpCharges,"jumpCharges");
	HX_VISIT_MEMBER_NAME(xAcc,"xAcc");
	HX_VISIT_MEMBER_NAME(yAcc,"yAcc");
	HX_VISIT_MEMBER_NAME(targetXVel,"targetXVel");
	HX_VISIT_MEMBER_NAME(targetYVel,"targetYVel");
	HX_VISIT_MEMBER_NAME(xVel,"xVel");
	HX_VISIT_MEMBER_NAME(yVel,"yVel");
	HX_VISIT_MEMBER_NAME(maxSpeedX,"maxSpeedX");
	HX_VISIT_MEMBER_NAME(maxSpeedY,"maxSpeedY");
	HX_VISIT_MEMBER_NAME(playerSize,"playerSize");
	::maps::MapObject_obj::__Visit(HX_VISIT_ARG);
}

Dynamic Player_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"xAcc") ) { return xAcc; }
		if (HX_FIELD_EQ(inName,"yAcc") ) { return yAcc; }
		if (HX_FIELD_EQ(inName,"xVel") ) { return xVel; }
		if (HX_FIELD_EQ(inName,"yVel") ) { return yVel; }
		if (HX_FIELD_EQ(inName,"jump") ) { return jump_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"goLeft") ) { return goLeft_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"goRight") ) { return goRight_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"grounded") ) { return grounded; }
		if (HX_FIELD_EQ(inName,"stopLeft") ) { return stopLeft_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"playerBmp") ) { return playerBmp; }
		if (HX_FIELD_EQ(inName,"maxSpeedX") ) { return maxSpeedX; }
		if (HX_FIELD_EQ(inName,"maxSpeedY") ) { return maxSpeedY; }
		if (HX_FIELD_EQ(inName,"moveXAxis") ) { return moveXAxis_dyn(); }
		if (HX_FIELD_EQ(inName,"moveYAxis") ) { return moveYAxis_dyn(); }
		if (HX_FIELD_EQ(inName,"stopRight") ) { return stopRight_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"animations") ) { return animations; }
		if (HX_FIELD_EQ(inName,"currentMap") ) { return currentMap; }
		if (HX_FIELD_EQ(inName,"targetXVel") ) { return targetXVel; }
		if (HX_FIELD_EQ(inName,"targetYVel") ) { return targetYVel; }
		if (HX_FIELD_EQ(inName,"playerSize") ) { return playerSize; }
		if (HX_FIELD_EQ(inName,"killPlayer") ) { return killPlayer_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"jumpCharges") ) { return jumpCharges; }
		if (HX_FIELD_EQ(inName,"setGrounded") ) { return setGrounded_dyn(); }
		if (HX_FIELD_EQ(inName,"checkKeysUp") ) { return checkKeysUp_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"updatePlayer") ) { return updatePlayer_dyn(); }
		if (HX_FIELD_EQ(inName,"getAnimation") ) { return getAnimation_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"removeCharBmp") ) { return removeCharBmp_dyn(); }
		if (HX_FIELD_EQ(inName,"getCurrentMap") ) { return getCurrentMap_dyn(); }
		if (HX_FIELD_EQ(inName,"setCurrentMap") ) { return setCurrentMap_dyn(); }
		if (HX_FIELD_EQ(inName,"checkKeysDown") ) { return checkKeysDown_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"updateVelocity") ) { return updateVelocity_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"checkFatalTiles") ) { return checkFatalTiles_dyn(); }
		if (HX_FIELD_EQ(inName,"addAnimationBmp") ) { return addAnimationBmp_dyn(); }
		if (HX_FIELD_EQ(inName,"getAnimationBmp") ) { return getAnimationBmp_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"currentAnimation") ) { return currentAnimation; }
		break;
	case 27:
		if (HX_FIELD_EQ(inName,"getCollisionLargestDistance") ) { return getCollisionLargestDistance_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Player_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"xAcc") ) { xAcc=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"yAcc") ) { yAcc=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"xVel") ) { xVel=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"yVel") ) { yVel=inValue.Cast< Float >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"grounded") ) { grounded=inValue.Cast< bool >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"playerBmp") ) { playerBmp=inValue.Cast< ::openfl::display::Bitmap >(); return inValue; }
		if (HX_FIELD_EQ(inName,"maxSpeedX") ) { maxSpeedX=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"maxSpeedY") ) { maxSpeedY=inValue.Cast< int >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"animations") ) { animations=inValue.Cast< ::haxe::ds::StringMap >(); return inValue; }
		if (HX_FIELD_EQ(inName,"currentMap") ) { currentMap=inValue.Cast< ::maps::AreaMap >(); return inValue; }
		if (HX_FIELD_EQ(inName,"targetXVel") ) { targetXVel=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"targetYVel") ) { targetYVel=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"playerSize") ) { playerSize=inValue.Cast< int >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"jumpCharges") ) { jumpCharges=inValue.Cast< int >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"currentAnimation") ) { currentAnimation=inValue.Cast< ::actors::Animation >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool Player_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	return false;
}

void Player_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("animations","\xef","\x34","\x1c","\x83"));
	outFields->push(HX_HCSTRING("currentAnimation","\x8b","\x63","\x65","\x3e"));
	outFields->push(HX_HCSTRING("playerBmp","\x64","\x1b","\xbc","\x00"));
	outFields->push(HX_HCSTRING("currentMap","\xe3","\xcf","\x2d","\xc7"));
	outFields->push(HX_HCSTRING("grounded","\xa6","\x6a","\x5b","\x90"));
	outFields->push(HX_HCSTRING("jumpCharges","\x31","\x88","\xbf","\xb1"));
	outFields->push(HX_HCSTRING("xAcc","\xa9","\x43","\x83","\x4f"));
	outFields->push(HX_HCSTRING("yAcc","\x48","\x7a","\x2c","\x50"));
	outFields->push(HX_HCSTRING("targetXVel","\xb6","\xd0","\xc3","\xa9"));
	outFields->push(HX_HCSTRING("targetYVel","\x55","\x07","\x6d","\xaa"));
	outFields->push(HX_HCSTRING("xVel","\xc5","\x34","\x93","\x4f"));
	outFields->push(HX_HCSTRING("yVel","\x64","\x6b","\x3c","\x50"));
	outFields->push(HX_HCSTRING("maxSpeedX","\xb5","\x10","\x86","\xea"));
	outFields->push(HX_HCSTRING("maxSpeedY","\xb6","\x10","\x86","\xea"));
	outFields->push(HX_HCSTRING("playerSize","\xc2","\x7c","\x15","\xaf"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::haxe::ds::StringMap*/ ,(int)offsetof(Player_obj,animations),HX_HCSTRING("animations","\xef","\x34","\x1c","\x83")},
	{hx::fsObject /*::actors::Animation*/ ,(int)offsetof(Player_obj,currentAnimation),HX_HCSTRING("currentAnimation","\x8b","\x63","\x65","\x3e")},
	{hx::fsObject /*::openfl::display::Bitmap*/ ,(int)offsetof(Player_obj,playerBmp),HX_HCSTRING("playerBmp","\x64","\x1b","\xbc","\x00")},
	{hx::fsObject /*::maps::AreaMap*/ ,(int)offsetof(Player_obj,currentMap),HX_HCSTRING("currentMap","\xe3","\xcf","\x2d","\xc7")},
	{hx::fsBool,(int)offsetof(Player_obj,grounded),HX_HCSTRING("grounded","\xa6","\x6a","\x5b","\x90")},
	{hx::fsInt,(int)offsetof(Player_obj,jumpCharges),HX_HCSTRING("jumpCharges","\x31","\x88","\xbf","\xb1")},
	{hx::fsFloat,(int)offsetof(Player_obj,xAcc),HX_HCSTRING("xAcc","\xa9","\x43","\x83","\x4f")},
	{hx::fsFloat,(int)offsetof(Player_obj,yAcc),HX_HCSTRING("yAcc","\x48","\x7a","\x2c","\x50")},
	{hx::fsInt,(int)offsetof(Player_obj,targetXVel),HX_HCSTRING("targetXVel","\xb6","\xd0","\xc3","\xa9")},
	{hx::fsInt,(int)offsetof(Player_obj,targetYVel),HX_HCSTRING("targetYVel","\x55","\x07","\x6d","\xaa")},
	{hx::fsFloat,(int)offsetof(Player_obj,xVel),HX_HCSTRING("xVel","\xc5","\x34","\x93","\x4f")},
	{hx::fsFloat,(int)offsetof(Player_obj,yVel),HX_HCSTRING("yVel","\x64","\x6b","\x3c","\x50")},
	{hx::fsInt,(int)offsetof(Player_obj,maxSpeedX),HX_HCSTRING("maxSpeedX","\xb5","\x10","\x86","\xea")},
	{hx::fsInt,(int)offsetof(Player_obj,maxSpeedY),HX_HCSTRING("maxSpeedY","\xb6","\x10","\x86","\xea")},
	{hx::fsInt,(int)offsetof(Player_obj,playerSize),HX_HCSTRING("playerSize","\xc2","\x7c","\x15","\xaf")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("animations","\xef","\x34","\x1c","\x83"),
	HX_HCSTRING("currentAnimation","\x8b","\x63","\x65","\x3e"),
	HX_HCSTRING("playerBmp","\x64","\x1b","\xbc","\x00"),
	HX_HCSTRING("currentMap","\xe3","\xcf","\x2d","\xc7"),
	HX_HCSTRING("grounded","\xa6","\x6a","\x5b","\x90"),
	HX_HCSTRING("jumpCharges","\x31","\x88","\xbf","\xb1"),
	HX_HCSTRING("xAcc","\xa9","\x43","\x83","\x4f"),
	HX_HCSTRING("yAcc","\x48","\x7a","\x2c","\x50"),
	HX_HCSTRING("targetXVel","\xb6","\xd0","\xc3","\xa9"),
	HX_HCSTRING("targetYVel","\x55","\x07","\x6d","\xaa"),
	HX_HCSTRING("xVel","\xc5","\x34","\x93","\x4f"),
	HX_HCSTRING("yVel","\x64","\x6b","\x3c","\x50"),
	HX_HCSTRING("maxSpeedX","\xb5","\x10","\x86","\xea"),
	HX_HCSTRING("maxSpeedY","\xb6","\x10","\x86","\xea"),
	HX_HCSTRING("playerSize","\xc2","\x7c","\x15","\xaf"),
	HX_HCSTRING("removeCharBmp","\x2b","\xdb","\x0f","\xa8"),
	HX_HCSTRING("updatePlayer","\x4a","\x92","\x7c","\x37"),
	HX_HCSTRING("updateVelocity","\x46","\xf5","\x27","\x54"),
	HX_HCSTRING("moveXAxis","\x68","\xb4","\x2e","\x01"),
	HX_HCSTRING("moveYAxis","\xe9","\x48","\x95","\x94"),
	HX_HCSTRING("checkFatalTiles","\xc9","\x0d","\xe9","\x82"),
	HX_HCSTRING("getCollisionLargestDistance","\xd5","\xc6","\x43","\x15"),
	HX_HCSTRING("setGrounded","\x68","\x34","\xbc","\xc0"),
	HX_HCSTRING("killPlayer","\x9f","\xc9","\xc7","\xfc"),
	HX_HCSTRING("getCurrentMap","\x19","\x2c","\xa0","\x23"),
	HX_HCSTRING("setCurrentMap","\x25","\x0e","\xa6","\x68"),
	HX_HCSTRING("addAnimationBmp","\x62","\x2b","\x71","\x30"),
	HX_HCSTRING("getAnimationBmp","\x57","\x15","\x0c","\xcd"),
	HX_HCSTRING("checkKeysDown","\x5e","\x6d","\xf2","\xfd"),
	HX_HCSTRING("checkKeysUp","\x57","\x64","\x0c","\x22"),
	HX_HCSTRING("goLeft","\x4f","\xc2","\xc5","\x4a"),
	HX_HCSTRING("goRight","\x94","\x50","\x51","\x99"),
	HX_HCSTRING("stopLeft","\x29","\x4d","\x6a","\x9a"),
	HX_HCSTRING("stopRight","\x7a","\x44","\xa6","\xf9"),
	HX_HCSTRING("jump","\xee","\xc4","\x69","\x46"),
	HX_HCSTRING("getAnimation","\x8e","\x8b","\x8b","\x5a"),
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
