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
#ifndef INCLUDED_actors_actorsAI_FlyingAI
#include <actors/actorsAI/FlyingAI.h>
#endif
#ifndef INCLUDED_actors_enemies_Enemy
#include <actors/enemies/Enemy.h>
#endif
#ifndef INCLUDED_actors_enemies_FlyingEnemy
#include <actors/enemies/FlyingEnemy.h>
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
namespace actors{
namespace actorsAI{

Void FlyingAI_obj::__construct(bool horizontal)
{
HX_STACK_FRAME("actors.actorsAI.FlyingAI","new",0xe1b4d221,"actors.actorsAI.FlyingAI.new","actors/actorsAI/FlyingAI.hx",15,0x2af5608f)
HX_STACK_THIS(this)
HX_STACK_ARG(horizontal,"horizontal")
{
	HX_STACK_LINE(16)
	super::__construct(hx::ObjectPtr<OBJ_>(this));
	HX_STACK_LINE(18)
	this->horizontal = horizontal;
	HX_STACK_LINE(19)
	this->alignmentLeft = true;
}
;
	return null();
}

//FlyingAI_obj::~FlyingAI_obj() { }

Dynamic FlyingAI_obj::__CreateEmpty() { return  new FlyingAI_obj; }
hx::ObjectPtr< FlyingAI_obj > FlyingAI_obj::__new(bool horizontal)
{  hx::ObjectPtr< FlyingAI_obj > _result_ = new FlyingAI_obj();
	_result_->__construct(horizontal);
	return _result_;}

Dynamic FlyingAI_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< FlyingAI_obj > _result_ = new FlyingAI_obj();
	_result_->__construct(inArgs[0]);
	return _result_;}

Void FlyingAI_obj::updateAI( ::actors::Actor actor,::actors::ObjectMover mover){
{
		HX_STACK_FRAME("actors.actorsAI.FlyingAI","updateAI",0x7d3615d0,"actors.actorsAI.FlyingAI.updateAI","actors/actorsAI/FlyingAI.hx",23,0x2af5608f)
		HX_STACK_THIS(this)
		HX_STACK_ARG(actor,"actor")
		HX_STACK_ARG(mover,"mover")
		HX_STACK_LINE(24)
		::actors::Actor tmp = actor;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(24)
		::actors::ObjectMover tmp1 = mover;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(24)
		this->super::updateAI(tmp,tmp1);
		HX_STACK_LINE(26)
		::actors::enemies::FlyingEnemy flyingEnemy = ((::actors::enemies::FlyingEnemy)(actor));		HX_STACK_VAR(flyingEnemy,"flyingEnemy");
		HX_STACK_LINE(28)
		bool tmp2 = this->horizontal;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(28)
		bool tmp3;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(28)
		if ((tmp2)){
			HX_STACK_LINE(28)
			Float tmp4 = mover->getXVel();		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(28)
			Float tmp5 = tmp4;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(28)
			Float tmp6 = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(28)
			Float tmp7 = ::Math_obj::abs(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(28)
			Float tmp8 = tmp7;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(28)
			tmp3 = (tmp8 < ((Float).1));
		}
		else{
			HX_STACK_LINE(28)
			tmp3 = false;
		}
		HX_STACK_LINE(28)
		if ((tmp3)){
			HX_STACK_LINE(29)
			::actors::enemies::FlyingEnemy tmp4 = flyingEnemy;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(29)
			this->switchDirections(tmp4);
		}
		else{
			HX_STACK_LINE(30)
			bool tmp4 = this->horizontal;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(30)
			bool tmp5 = tmp4;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(30)
			bool tmp6 = !(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(30)
			bool tmp7;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(30)
			if ((tmp6)){
				HX_STACK_LINE(30)
				Float tmp8 = mover->getYVel();		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(30)
				Float tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(30)
				Float tmp10 = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(30)
				Float tmp11 = ::Math_obj::abs(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(30)
				Float tmp12 = tmp11;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(30)
				tmp7 = (tmp12 < ((Float).1));
			}
			else{
				HX_STACK_LINE(30)
				tmp7 = false;
			}
			HX_STACK_LINE(30)
			if ((tmp7)){
				HX_STACK_LINE(31)
				::actors::enemies::FlyingEnemy tmp8 = flyingEnemy;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(31)
				this->switchDirections(tmp8);
			}
		}
		HX_STACK_LINE(33)
		::maps::AreaMap tmp4 = actor->getCurrentMap();		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(33)
		::actors::Actor tmp5 = actor;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(33)
		Array< ::Dynamic > aiCollisions = tmp4->checkCollisions(tmp5,true);		HX_STACK_VAR(aiCollisions,"aiCollisions");
		HX_STACK_LINE(34)
		bool tmp6 = (aiCollisions->length > (int)0);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(34)
		if ((tmp6)){
			HX_STACK_LINE(35)
			::maps::mapobjects::MapObject tmp7 = aiCollisions->__get((int)0).StaticCast< ::maps::mapobjects::MapObject >();		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(35)
			::actors::Actor tmp8 = actor;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(35)
			bool tmp9 = this->headingToWall(tmp7,tmp8);		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(35)
			if ((tmp9)){
				HX_STACK_LINE(36)
				::actors::enemies::FlyingEnemy tmp10 = flyingEnemy;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(36)
				this->switchDirections(tmp10);
			}
		}
	}
return null();
}


bool FlyingAI_obj::headingToWall( ::maps::mapobjects::MapObject object,::actors::Actor host){
	HX_STACK_FRAME("actors.actorsAI.FlyingAI","headingToWall",0x8fe5ee88,"actors.actorsAI.FlyingAI.headingToWall","actors/actorsAI/FlyingAI.hx",39,0x2af5608f)
	HX_STACK_THIS(this)
	HX_STACK_ARG(object,"object")
	HX_STACK_ARG(host,"host")
	HX_STACK_LINE(40)
	Float objCenter;		HX_STACK_VAR(objCenter,"objCenter");
	HX_STACK_LINE(41)
	Float hostCenter;		HX_STACK_VAR(hostCenter,"hostCenter");
	HX_STACK_LINE(43)
	bool tmp = this->horizontal;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(43)
	if ((tmp)){
		HX_STACK_LINE(44)
		Float tmp1 = object->get_x();		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(44)
		Float tmp2 = object->get_width();		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(44)
		Float tmp3 = (Float(tmp2) / Float((int)2));		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(44)
		Float tmp4 = (tmp1 + tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(44)
		objCenter = tmp4;
		HX_STACK_LINE(45)
		Float tmp5 = host->get_x();		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(45)
		Float tmp6 = host->get_width();		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(45)
		Float tmp7 = (Float(tmp6) / Float((int)2));		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(45)
		Float tmp8 = (tmp5 + tmp7);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(45)
		hostCenter = tmp8;
	}
	else{
		HX_STACK_LINE(48)
		Float tmp1 = object->get_y();		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(48)
		Float tmp2 = object->get_height();		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(48)
		Float tmp3 = (Float(tmp2) / Float((int)2));		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(48)
		Float tmp4 = (tmp1 + tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(48)
		objCenter = tmp4;
		HX_STACK_LINE(49)
		Float tmp5 = host->get_y();		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(49)
		Float tmp6 = host->get_height();		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(49)
		Float tmp7 = (Float(tmp6) / Float((int)2));		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(49)
		Float tmp8 = (tmp5 + tmp7);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(49)
		hostCenter = tmp8;
	}
	HX_STACK_LINE(52)
	bool tmp1 = (objCenter >= hostCenter);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(52)
	bool tmp2;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(52)
	if ((tmp1)){
		HX_STACK_LINE(52)
		bool tmp3 = this->alignmentLeft;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(52)
		bool tmp4 = tmp3;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(52)
		bool tmp5 = tmp4;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(52)
		tmp2 = !(tmp5);
	}
	else{
		HX_STACK_LINE(52)
		tmp2 = false;
	}
	HX_STACK_LINE(52)
	if ((tmp2)){
		HX_STACK_LINE(53)
		return true;
	}
	else{
		HX_STACK_LINE(54)
		bool tmp3 = (objCenter < hostCenter);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(54)
		bool tmp4;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(54)
		if ((tmp3)){
			HX_STACK_LINE(54)
			tmp4 = this->alignmentLeft;
		}
		else{
			HX_STACK_LINE(54)
			tmp4 = false;
		}
		HX_STACK_LINE(54)
		if ((tmp4)){
			HX_STACK_LINE(55)
			return true;
		}
	}
	HX_STACK_LINE(56)
	return false;
}


HX_DEFINE_DYNAMIC_FUNC2(FlyingAI_obj,headingToWall,return )

Void FlyingAI_obj::handleCollision( ::maps::mapobjects::MapObject collider,::actors::Actor host,bool horizontal){
{
		HX_STACK_FRAME("actors.actorsAI.FlyingAI","handleCollision",0xef236eeb,"actors.actorsAI.FlyingAI.handleCollision","actors/actorsAI/FlyingAI.hx",60,0x2af5608f)
		HX_STACK_THIS(this)
		HX_STACK_ARG(collider,"collider")
		HX_STACK_ARG(host,"host")
		HX_STACK_ARG(horizontal,"horizontal")
		HX_STACK_LINE(61)
		::actors::enemies::FlyingEnemy flyingEnemy = ((::actors::enemies::FlyingEnemy)(host));		HX_STACK_VAR(flyingEnemy,"flyingEnemy");
		HX_STACK_LINE(63)
		bool tmp = this->horizontal;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(63)
		bool tmp1;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(63)
		if ((tmp)){
			HX_STACK_LINE(63)
			tmp1 = horizontal;
		}
		else{
			HX_STACK_LINE(63)
			tmp1 = false;
		}
		HX_STACK_LINE(63)
		if ((tmp1)){
			HX_STACK_LINE(64)
			::actors::enemies::FlyingEnemy tmp2 = flyingEnemy;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(64)
			this->switchDirections(tmp2);
		}
		else{
			HX_STACK_LINE(65)
			bool tmp2 = this->horizontal;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(65)
			bool tmp3 = tmp2;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(65)
			bool tmp4 = !(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(65)
			bool tmp5;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(65)
			if ((tmp4)){
				HX_STACK_LINE(65)
				bool tmp6 = horizontal;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(65)
				bool tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(65)
				tmp5 = !(tmp7);
			}
			else{
				HX_STACK_LINE(65)
				tmp5 = false;
			}
			HX_STACK_LINE(65)
			if ((tmp5)){
				HX_STACK_LINE(66)
				::actors::enemies::FlyingEnemy tmp6 = flyingEnemy;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(66)
				this->switchDirections(tmp6);
			}
		}
	}
return null();
}


Void FlyingAI_obj::switchDirections( ::actors::enemies::FlyingEnemy host){
{
		HX_STACK_FRAME("actors.actorsAI.FlyingAI","switchDirections",0x9e119607,"actors.actorsAI.FlyingAI.switchDirections","actors/actorsAI/FlyingAI.hx",69,0x2af5608f)
		HX_STACK_THIS(this)
		HX_STACK_ARG(host,"host")
		HX_STACK_LINE(71)
		bool tmp = this->horizontal;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(71)
		if ((tmp)){
			HX_STACK_LINE(72)
			bool tmp1 = this->alignmentLeft;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(72)
			if ((tmp1)){
				HX_STACK_LINE(73)
				host->stopLeft();
				HX_STACK_LINE(74)
				host->goRight();
				HX_STACK_LINE(75)
				bool tmp2 = this->alignmentLeft;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(75)
				bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(75)
				this->alignmentLeft = tmp3;
			}
			else{
				HX_STACK_LINE(79)
				host->stopRight();
				HX_STACK_LINE(80)
				host->goLeft();
				HX_STACK_LINE(81)
				bool tmp2 = this->alignmentLeft;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(81)
				bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(81)
				this->alignmentLeft = tmp3;
			}
		}
		else{
			HX_STACK_LINE(85)
			bool tmp1 = this->alignmentLeft;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(85)
			if ((tmp1)){
				HX_STACK_LINE(86)
				host->stopUp();
				HX_STACK_LINE(87)
				host->goDown();
				HX_STACK_LINE(88)
				bool tmp2 = this->alignmentLeft;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(88)
				bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(88)
				this->alignmentLeft = tmp3;
			}
			else{
				HX_STACK_LINE(92)
				host->stopDown();
				HX_STACK_LINE(93)
				host->goUp();
				HX_STACK_LINE(94)
				bool tmp2 = this->alignmentLeft;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(94)
				bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(94)
				this->alignmentLeft = tmp3;
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(FlyingAI_obj,switchDirections,(void))


FlyingAI_obj::FlyingAI_obj()
{
}

Dynamic FlyingAI_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"updateAI") ) { return updateAI_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"horizontal") ) { return horizontal; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"alignmentLeft") ) { return alignmentLeft; }
		if (HX_FIELD_EQ(inName,"headingToWall") ) { return headingToWall_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"handleCollision") ) { return handleCollision_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"switchDirections") ) { return switchDirections_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic FlyingAI_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 10:
		if (HX_FIELD_EQ(inName,"horizontal") ) { horizontal=inValue.Cast< bool >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"alignmentLeft") ) { alignmentLeft=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool FlyingAI_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	return false;
}

void FlyingAI_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("horizontal","\xe4","\xfc","\xc3","\x15"));
	outFields->push(HX_HCSTRING("alignmentLeft","\x8a","\xc4","\x55","\xc2"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsBool,(int)offsetof(FlyingAI_obj,horizontal),HX_HCSTRING("horizontal","\xe4","\xfc","\xc3","\x15")},
	{hx::fsBool,(int)offsetof(FlyingAI_obj,alignmentLeft),HX_HCSTRING("alignmentLeft","\x8a","\xc4","\x55","\xc2")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("horizontal","\xe4","\xfc","\xc3","\x15"),
	HX_HCSTRING("alignmentLeft","\x8a","\xc4","\x55","\xc2"),
	HX_HCSTRING("updateAI","\x31","\x13","\xfa","\x77"),
	HX_HCSTRING("headingToWall","\x87","\xd1","\x2a","\xc5"),
	HX_HCSTRING("handleCollision","\xaa","\x4f","\xa6","\xa9"),
	HX_HCSTRING("switchDirections","\x68","\x5c","\x13","\x16"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FlyingAI_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FlyingAI_obj::__mClass,"__mClass");
};

#endif

hx::Class FlyingAI_obj::__mClass;

void FlyingAI_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("actors.actorsAI.FlyingAI","\xaf","\x2d","\x3f","\x6c");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &FlyingAI_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< FlyingAI_obj >;
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
