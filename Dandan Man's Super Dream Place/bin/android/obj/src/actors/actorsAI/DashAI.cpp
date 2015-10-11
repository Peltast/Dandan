#include <hxcpp.h>

#include "hxMath.h"
#ifndef INCLUDED_actors_Actor
#include <actors/Actor.h>
#endif
#ifndef INCLUDED_actors_ObjectMover
#include <actors/ObjectMover.h>
#endif
#ifndef INCLUDED_actors_actorsAI_DashAI
#include <actors/actorsAI/DashAI.h>
#endif
#ifndef INCLUDED_actors_actorsAI_EnemyAI
#include <actors/actorsAI/EnemyAI.h>
#endif
#ifndef INCLUDED_actors_enemies_DashEnemy
#include <actors/enemies/DashEnemy.h>
#endif
#ifndef INCLUDED_actors_enemies_Enemy
#include <actors/enemies/Enemy.h>
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

Void DashAI_obj::__construct()
{
HX_STACK_FRAME("actors.actorsAI.DashAI","new",0xfa695b64,"actors.actorsAI.DashAI.new","actors/actorsAI/DashAI.hx",19,0x988ba8ac)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(20)
	super::__construct(hx::ObjectPtr<OBJ_>(this));
	HX_STACK_LINE(22)
	this->dashCooldown = (int)0;
	HX_STACK_LINE(24)
	this->visionConeHeight = (int)32;
	HX_STACK_LINE(25)
	this->visionConeWidth = (int)100;
}
;
	return null();
}

//DashAI_obj::~DashAI_obj() { }

Dynamic DashAI_obj::__CreateEmpty() { return  new DashAI_obj; }
hx::ObjectPtr< DashAI_obj > DashAI_obj::__new()
{  hx::ObjectPtr< DashAI_obj > _result_ = new DashAI_obj();
	_result_->__construct();
	return _result_;}

Dynamic DashAI_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< DashAI_obj > _result_ = new DashAI_obj();
	_result_->__construct();
	return _result_;}

Void DashAI_obj::updateAI( ::actors::Actor actor,::actors::ObjectMover mover){
{
		HX_STACK_FRAME("actors.actorsAI.DashAI","updateAI",0x065a19ad,"actors.actorsAI.DashAI.updateAI","actors/actorsAI/DashAI.hx",29,0x988ba8ac)
		HX_STACK_THIS(this)
		HX_STACK_ARG(actor,"actor")
		HX_STACK_ARG(mover,"mover")
		HX_STACK_LINE(30)
		::actors::Actor tmp = actor;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(30)
		::actors::ObjectMover tmp1 = mover;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(30)
		this->super::updateAI(tmp,tmp1);
		HX_STACK_LINE(31)
		hx::SubEq(this->dashCooldown,(int)1);
		HX_STACK_LINE(32)
		int tmp2 = this->dashCooldown;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(32)
		bool tmp3 = (tmp2 >= (int)0);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(32)
		if ((tmp3)){
			HX_STACK_LINE(32)
			return null();
		}
		HX_STACK_LINE(33)
		bool tmp4 = mover->getIsGrounded();		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(33)
		bool tmp5 = !(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(33)
		if ((tmp5)){
			HX_STACK_LINE(33)
			return null();
		}
		HX_STACK_LINE(35)
		::maps::AreaMap tmp6 = actor->getCurrentMap();		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(35)
		::actors::Actor tmp7 = actor;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(35)
		::openfl::geom::Point tmp8 = tmp6->checkDistFromPlayer(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(35)
		::openfl::geom::Point distFromPlayer = tmp8;		HX_STACK_VAR(distFromPlayer,"distFromPlayer");
		HX_STACK_LINE(37)
		Float tmp9 = distFromPlayer->y;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(37)
		Float tmp10 = ::Math_obj::abs(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(37)
		int tmp11 = this->visionConeHeight;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(37)
		bool tmp12 = (tmp10 < tmp11);		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(37)
		bool tmp13;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(37)
		if ((tmp12)){
			HX_STACK_LINE(37)
			Float tmp14 = distFromPlayer->x;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(37)
			Float tmp15 = tmp14;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(37)
			Float tmp16 = ::Math_obj::abs(tmp15);		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(37)
			Float tmp17 = tmp16;		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(37)
			int tmp18 = this->visionConeWidth;		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(37)
			int tmp19 = tmp18;		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(37)
			tmp13 = (tmp17 < tmp19);
		}
		else{
			HX_STACK_LINE(37)
			tmp13 = false;
		}
		HX_STACK_LINE(37)
		if ((tmp13)){
			HX_STACK_LINE(39)
			::actors::enemies::DashEnemy dashEnemy = ((::actors::enemies::DashEnemy)(actor));		HX_STACK_VAR(dashEnemy,"dashEnemy");
			HX_STACK_LINE(40)
			bool tmp14 = (distFromPlayer->x > (int)0);		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(40)
			if ((tmp14)){
				HX_STACK_LINE(41)
				dashEnemy->dashLeft();
			}
			else{
				HX_STACK_LINE(43)
				dashEnemy->dashRight();
			}
			HX_STACK_LINE(45)
			this->dashCooldown = (int)30;
		}
	}
return null();
}



DashAI_obj::DashAI_obj()
{
}

Dynamic DashAI_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"updateAI") ) { return updateAI_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"dashCooldown") ) { return dashCooldown; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"visionConeWidth") ) { return visionConeWidth; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"visionConeHeight") ) { return visionConeHeight; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic DashAI_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 12:
		if (HX_FIELD_EQ(inName,"dashCooldown") ) { dashCooldown=inValue.Cast< int >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"visionConeWidth") ) { visionConeWidth=inValue.Cast< int >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"visionConeHeight") ) { visionConeHeight=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool DashAI_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	return false;
}

void DashAI_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("dashCooldown","\x1d","\xff","\xe7","\x69"));
	outFields->push(HX_HCSTRING("visionConeHeight","\x32","\x4c","\x79","\xd9"));
	outFields->push(HX_HCSTRING("visionConeWidth","\x1b","\xc4","\x61","\xf2"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsInt,(int)offsetof(DashAI_obj,dashCooldown),HX_HCSTRING("dashCooldown","\x1d","\xff","\xe7","\x69")},
	{hx::fsInt,(int)offsetof(DashAI_obj,visionConeHeight),HX_HCSTRING("visionConeHeight","\x32","\x4c","\x79","\xd9")},
	{hx::fsInt,(int)offsetof(DashAI_obj,visionConeWidth),HX_HCSTRING("visionConeWidth","\x1b","\xc4","\x61","\xf2")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("dashCooldown","\x1d","\xff","\xe7","\x69"),
	HX_HCSTRING("visionConeHeight","\x32","\x4c","\x79","\xd9"),
	HX_HCSTRING("visionConeWidth","\x1b","\xc4","\x61","\xf2"),
	HX_HCSTRING("updateAI","\x31","\x13","\xfa","\x77"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(DashAI_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(DashAI_obj::__mClass,"__mClass");
};

#endif

hx::Class DashAI_obj::__mClass;

void DashAI_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("actors.actorsAI.DashAI","\x72","\x19","\xff","\xc7");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &DashAI_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< DashAI_obj >;
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
