#include <hxcpp.h>

#include "hxMath.h"
#ifndef INCLUDED_actors_Actor
#include <actors/Actor.h>
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
#ifndef INCLUDED_actors_enemies_Enemy
#include <actors/enemies/Enemy.h>
#endif
#ifndef INCLUDED_actors_enemies_LaunchEnemy
#include <actors/enemies/LaunchEnemy.h>
#endif
#ifndef INCLUDED_maps_AreaMap
#include <maps/AreaMap.h>
#endif
#ifndef INCLUDED_maps_mapobjects_MapObject
#include <maps/mapobjects/MapObject.h>
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
namespace actors{
namespace actorsAI{

Void LaunchAI_obj::__construct()
{
HX_STACK_FRAME("actors.actorsAI.LaunchAI","new",0xb49a8505,"actors.actorsAI.LaunchAI.new","actors/actorsAI/LaunchAI.hx",21,0x5c1e962b)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(22)
	super::__construct(hx::ObjectPtr<OBJ_>(this));
	HX_STACK_LINE(24)
	Float tmp = ::Math_obj::random();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(24)
	bool tmp1 = (tmp >= ((Float).5));		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(24)
	if ((tmp1)){
		HX_STACK_LINE(24)
		this->alignmentLeft = false;
	}
	else{
		HX_STACK_LINE(25)
		this->alignmentLeft = true;
	}
	HX_STACK_LINE(27)
	this->visionConeHeight = (int)96;
	HX_STACK_LINE(28)
	this->visionConeWidth = (int)42;
}
;
	return null();
}

//LaunchAI_obj::~LaunchAI_obj() { }

Dynamic LaunchAI_obj::__CreateEmpty() { return  new LaunchAI_obj; }
hx::ObjectPtr< LaunchAI_obj > LaunchAI_obj::__new()
{  hx::ObjectPtr< LaunchAI_obj > _result_ = new LaunchAI_obj();
	_result_->__construct();
	return _result_;}

Dynamic LaunchAI_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< LaunchAI_obj > _result_ = new LaunchAI_obj();
	_result_->__construct();
	return _result_;}

Void LaunchAI_obj::updateAI( ::actors::Actor actor,::actors::ObjectMover mover){
{
		HX_STACK_FRAME("actors.actorsAI.LaunchAI","updateAI",0xbbc9686c,"actors.actorsAI.LaunchAI.updateAI","actors/actorsAI/LaunchAI.hx",31,0x5c1e962b)
		HX_STACK_THIS(this)
		HX_STACK_ARG(actor,"actor")
		HX_STACK_ARG(mover,"mover")
		HX_STACK_LINE(33)
		::actors::Actor tmp = actor;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(33)
		::actors::ObjectMover tmp1 = mover;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(33)
		this->super::updateAI(tmp,tmp1);
		HX_STACK_LINE(35)
		::actors::enemies::LaunchEnemy tmp2 = ((::actors::enemies::LaunchEnemy)(actor));		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(35)
		this->handleAttack(tmp2);
		HX_STACK_LINE(36)
		int tmp3 = this->windupCooldown;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(36)
		bool tmp4 = (tmp3 > (int)0);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(36)
		bool tmp5 = !(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(36)
		bool tmp6;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(36)
		if ((tmp5)){
			HX_STACK_LINE(36)
			int tmp7 = this->attackCooldown;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(36)
			int tmp8 = tmp7;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(36)
			tmp6 = (tmp8 > (int)0);
		}
		else{
			HX_STACK_LINE(36)
			tmp6 = true;
		}
		HX_STACK_LINE(36)
		if ((tmp6)){
			HX_STACK_LINE(36)
			return null();
		}
		HX_STACK_LINE(38)
		bool tmp7 = mover->getIsGrounded();		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(38)
		bool tmp8;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(38)
		if ((tmp7)){
			HX_STACK_LINE(38)
			Float tmp9 = mover->getXVel();		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(38)
			Float tmp10 = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(38)
			Float tmp11 = tmp10;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(38)
			Float tmp12 = ::Math_obj::abs(tmp11);		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(38)
			Float tmp13 = tmp12;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(38)
			tmp8 = (tmp13 < ((Float).1));
		}
		else{
			HX_STACK_LINE(38)
			tmp8 = false;
		}
		HX_STACK_LINE(38)
		if ((tmp8)){
			HX_STACK_LINE(39)
			::actors::Actor tmp9 = actor;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(39)
			this->switchDirections(tmp9);
		}
		HX_STACK_LINE(41)
		::maps::AreaMap tmp9 = actor->getCurrentMap();		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(41)
		::actors::Actor tmp10 = actor;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(41)
		Array< ::Dynamic > aiCollisions = tmp9->checkCollisions(tmp10,true);		HX_STACK_VAR(aiCollisions,"aiCollisions");
		HX_STACK_LINE(42)
		bool tmp11 = (aiCollisions->length > (int)0);		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(42)
		if ((tmp11)){
			HX_STACK_LINE(43)
			::maps::mapobjects::MapObject tmp12 = aiCollisions->__get((int)0).StaticCast< ::maps::mapobjects::MapObject >();		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(43)
			::actors::Actor tmp13 = actor;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(43)
			bool tmp14 = this->headingToWall(tmp12,tmp13);		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(43)
			if ((tmp14)){
				HX_STACK_LINE(44)
				::actors::Actor tmp15 = actor;		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(44)
				this->switchDirections(tmp15);
			}
		}
	}
return null();
}


Void LaunchAI_obj::handleAttack( ::actors::enemies::LaunchEnemy enemy){
{
		HX_STACK_FRAME("actors.actorsAI.LaunchAI","handleAttack",0x0d7e304b,"actors.actorsAI.LaunchAI.handleAttack","actors/actorsAI/LaunchAI.hx",48,0x5c1e962b)
		HX_STACK_THIS(this)
		HX_STACK_ARG(enemy,"enemy")
		HX_STACK_LINE(49)
		int tmp = this->attackCooldown;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(49)
		bool tmp1 = (tmp > (int)0);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(49)
		if ((tmp1)){
			HX_STACK_LINE(50)
			hx::SubEq(this->attackCooldown,(int)1);
			HX_STACK_LINE(51)
			int tmp2 = this->attackCooldown;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(51)
			bool tmp3 = (tmp2 == (int)0);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(51)
			if ((tmp3)){
				HX_STACK_LINE(52)
				enemy->endLaunchAttack();
			}
			HX_STACK_LINE(53)
			return null();
		}
		else{
			HX_STACK_LINE(55)
			int tmp2 = this->windupCooldown;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(55)
			bool tmp3 = (tmp2 > (int)0);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(55)
			if ((tmp3)){
				HX_STACK_LINE(56)
				hx::SubEq(this->windupCooldown,(int)1);
				HX_STACK_LINE(57)
				int tmp4 = this->windupCooldown;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(57)
				bool tmp5 = (tmp4 == (int)0);		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(57)
				if ((tmp5)){
					HX_STACK_LINE(58)
					enemy->launchAttack();
					HX_STACK_LINE(59)
					this->attackCooldown = (int)50;
				}
				HX_STACK_LINE(61)
				return null();
			}
		}
		HX_STACK_LINE(64)
		::maps::AreaMap tmp2 = enemy->getCurrentMap();		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(64)
		::actors::enemies::LaunchEnemy tmp3 = enemy;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(64)
		::openfl::geom::Point tmp4 = tmp2->checkDistFromPlayer(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(64)
		::openfl::geom::Point distFromPlayer = tmp4;		HX_STACK_VAR(distFromPlayer,"distFromPlayer");
		HX_STACK_LINE(66)
		Float tmp5 = distFromPlayer->y;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(66)
		int tmp6 = this->visionConeHeight;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(66)
		bool tmp7 = (tmp5 < tmp6);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(66)
		bool tmp8 = tmp7;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(66)
		bool tmp9;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(66)
		if ((tmp8)){
			HX_STACK_LINE(66)
			tmp9 = (distFromPlayer->y >= (int)0);
		}
		else{
			HX_STACK_LINE(66)
			tmp9 = false;
		}
		HX_STACK_LINE(66)
		bool tmp10;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(66)
		if ((tmp9)){
			HX_STACK_LINE(66)
			Float tmp11 = distFromPlayer->x;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(66)
			Float tmp12 = tmp11;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(66)
			Float tmp13 = ::Math_obj::abs(tmp12);		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(66)
			Float tmp14 = tmp13;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(66)
			int tmp15 = this->visionConeWidth;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(66)
			int tmp16 = tmp15;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(66)
			tmp10 = (tmp14 < tmp16);
		}
		else{
			HX_STACK_LINE(66)
			tmp10 = false;
		}
		HX_STACK_LINE(66)
		if ((tmp10)){
			HX_STACK_LINE(68)
			this->windupCooldown = (int)20;
			HX_STACK_LINE(69)
			enemy->windup();
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(LaunchAI_obj,handleAttack,(void))

Void LaunchAI_obj::handleCollision( ::maps::mapobjects::MapObject collider,::actors::Actor host,bool horizontal){
{
		HX_STACK_FRAME("actors.actorsAI.LaunchAI","handleCollision",0xfc3be7cf,"actors.actorsAI.LaunchAI.handleCollision","actors/actorsAI/LaunchAI.hx",74,0x5c1e962b)
		HX_STACK_THIS(this)
		HX_STACK_ARG(collider,"collider")
		HX_STACK_ARG(host,"host")
		HX_STACK_ARG(horizontal,"horizontal")
		HX_STACK_LINE(75)
		bool tmp = horizontal;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(75)
		bool tmp1;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(75)
		if ((tmp)){
			HX_STACK_LINE(75)
			::maps::mapobjects::MapObject tmp2 = collider;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(75)
			::actors::Actor tmp3 = host;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(75)
			::maps::mapobjects::MapObject tmp4 = tmp2;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(75)
			::actors::Actor tmp5 = tmp3;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(75)
			tmp1 = this->headingToWall(tmp4,tmp5);
		}
		else{
			HX_STACK_LINE(75)
			tmp1 = false;
		}
		HX_STACK_LINE(75)
		if ((tmp1)){
			HX_STACK_LINE(76)
			::actors::Actor tmp2 = host;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(76)
			this->switchDirections(tmp2);
		}
	}
return null();
}


bool LaunchAI_obj::headingToWall( ::maps::mapobjects::MapObject object,::actors::Actor host){
	HX_STACK_FRAME("actors.actorsAI.LaunchAI","headingToWall",0x3fb5a66c,"actors.actorsAI.LaunchAI.headingToWall","actors/actorsAI/LaunchAI.hx",79,0x5c1e962b)
	HX_STACK_THIS(this)
	HX_STACK_ARG(object,"object")
	HX_STACK_ARG(host,"host")
	HX_STACK_LINE(80)
	Float tmp = object->get_x();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(80)
	Float tmp1 = object->get_width();		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(80)
	Float tmp2 = (Float(tmp1) / Float((int)2));		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(80)
	Float tmp3 = (tmp + tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(80)
	Float objXCenter = tmp3;		HX_STACK_VAR(objXCenter,"objXCenter");
	HX_STACK_LINE(81)
	Float tmp4 = host->get_x();		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(81)
	Float tmp5 = host->get_width();		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(81)
	Float tmp6 = (Float(tmp5) / Float((int)2));		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(81)
	Float tmp7 = (tmp4 + tmp6);		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(81)
	Float hostXCenter = tmp7;		HX_STACK_VAR(hostXCenter,"hostXCenter");
	HX_STACK_LINE(83)
	bool tmp8 = (objXCenter >= hostXCenter);		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(83)
	bool tmp9;		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(83)
	if ((tmp8)){
		HX_STACK_LINE(83)
		bool tmp10 = this->alignmentLeft;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(83)
		bool tmp11 = tmp10;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(83)
		bool tmp12 = tmp11;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(83)
		tmp9 = !(tmp12);
	}
	else{
		HX_STACK_LINE(83)
		tmp9 = false;
	}
	HX_STACK_LINE(83)
	if ((tmp9)){
		HX_STACK_LINE(84)
		return true;
	}
	else{
		HX_STACK_LINE(85)
		bool tmp10 = (objXCenter < hostXCenter);		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(85)
		bool tmp11;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(85)
		if ((tmp10)){
			HX_STACK_LINE(85)
			tmp11 = this->alignmentLeft;
		}
		else{
			HX_STACK_LINE(85)
			tmp11 = false;
		}
		HX_STACK_LINE(85)
		if ((tmp11)){
			HX_STACK_LINE(86)
			return true;
		}
	}
	HX_STACK_LINE(87)
	return false;
}


HX_DEFINE_DYNAMIC_FUNC2(LaunchAI_obj,headingToWall,return )

Void LaunchAI_obj::switchDirections( ::actors::Actor actor){
{
		HX_STACK_FRAME("actors.actorsAI.LaunchAI","switchDirections",0x0662e4a3,"actors.actorsAI.LaunchAI.switchDirections","actors/actorsAI/LaunchAI.hx",90,0x5c1e962b)
		HX_STACK_THIS(this)
		HX_STACK_ARG(actor,"actor")
		HX_STACK_LINE(92)
		bool tmp = this->alignmentLeft;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(92)
		if ((tmp)){
			HX_STACK_LINE(93)
			actor->stopLeft();
			HX_STACK_LINE(94)
			actor->goRight();
			HX_STACK_LINE(95)
			bool tmp1 = this->alignmentLeft;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(95)
			bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(95)
			this->alignmentLeft = tmp2;
		}
		else{
			HX_STACK_LINE(98)
			actor->stopRight();
			HX_STACK_LINE(99)
			actor->goLeft();
			HX_STACK_LINE(100)
			bool tmp1 = this->alignmentLeft;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(100)
			bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(100)
			this->alignmentLeft = tmp2;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(LaunchAI_obj,switchDirections,(void))


LaunchAI_obj::LaunchAI_obj()
{
}

Dynamic LaunchAI_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"updateAI") ) { return updateAI_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"handleAttack") ) { return handleAttack_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"alignmentLeft") ) { return alignmentLeft; }
		if (HX_FIELD_EQ(inName,"headingToWall") ) { return headingToWall_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"windupCooldown") ) { return windupCooldown; }
		if (HX_FIELD_EQ(inName,"attackCooldown") ) { return attackCooldown; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"visionConeWidth") ) { return visionConeWidth; }
		if (HX_FIELD_EQ(inName,"handleCollision") ) { return handleCollision_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"visionConeHeight") ) { return visionConeHeight; }
		if (HX_FIELD_EQ(inName,"switchDirections") ) { return switchDirections_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic LaunchAI_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 13:
		if (HX_FIELD_EQ(inName,"alignmentLeft") ) { alignmentLeft=inValue.Cast< bool >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"windupCooldown") ) { windupCooldown=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"attackCooldown") ) { attackCooldown=inValue.Cast< int >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"visionConeWidth") ) { visionConeWidth=inValue.Cast< int >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"visionConeHeight") ) { visionConeHeight=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool LaunchAI_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	return false;
}

void LaunchAI_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("alignmentLeft","\x8a","\xc4","\x55","\xc2"));
	outFields->push(HX_HCSTRING("windupCooldown","\xee","\xfb","\xa2","\xb0"));
	outFields->push(HX_HCSTRING("attackCooldown","\x93","\x0b","\xf1","\x58"));
	outFields->push(HX_HCSTRING("visionConeHeight","\x32","\x4c","\x79","\xd9"));
	outFields->push(HX_HCSTRING("visionConeWidth","\x1b","\xc4","\x61","\xf2"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsBool,(int)offsetof(LaunchAI_obj,alignmentLeft),HX_HCSTRING("alignmentLeft","\x8a","\xc4","\x55","\xc2")},
	{hx::fsInt,(int)offsetof(LaunchAI_obj,windupCooldown),HX_HCSTRING("windupCooldown","\xee","\xfb","\xa2","\xb0")},
	{hx::fsInt,(int)offsetof(LaunchAI_obj,attackCooldown),HX_HCSTRING("attackCooldown","\x93","\x0b","\xf1","\x58")},
	{hx::fsInt,(int)offsetof(LaunchAI_obj,visionConeHeight),HX_HCSTRING("visionConeHeight","\x32","\x4c","\x79","\xd9")},
	{hx::fsInt,(int)offsetof(LaunchAI_obj,visionConeWidth),HX_HCSTRING("visionConeWidth","\x1b","\xc4","\x61","\xf2")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("alignmentLeft","\x8a","\xc4","\x55","\xc2"),
	HX_HCSTRING("windupCooldown","\xee","\xfb","\xa2","\xb0"),
	HX_HCSTRING("attackCooldown","\x93","\x0b","\xf1","\x58"),
	HX_HCSTRING("visionConeHeight","\x32","\x4c","\x79","\xd9"),
	HX_HCSTRING("visionConeWidth","\x1b","\xc4","\x61","\xf2"),
	HX_HCSTRING("updateAI","\x31","\x13","\xfa","\x77"),
	HX_HCSTRING("handleAttack","\x90","\x21","\x3c","\x2e"),
	HX_HCSTRING("handleCollision","\xaa","\x4f","\xa6","\xa9"),
	HX_HCSTRING("headingToWall","\x87","\xd1","\x2a","\xc5"),
	HX_HCSTRING("switchDirections","\x68","\x5c","\x13","\x16"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(LaunchAI_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(LaunchAI_obj::__mClass,"__mClass");
};

#endif

hx::Class LaunchAI_obj::__mClass;

void LaunchAI_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("actors.actorsAI.LaunchAI","\x93","\x9e","\x50","\x3a");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &LaunchAI_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< LaunchAI_obj >;
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
} // end namespace actorsAI
