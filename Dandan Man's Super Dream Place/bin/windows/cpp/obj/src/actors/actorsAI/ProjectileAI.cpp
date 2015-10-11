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
#ifndef INCLUDED_actors_actorsAI_ProjectileAI
#include <actors/actorsAI/ProjectileAI.h>
#endif
#ifndef INCLUDED_actors_enemies_Enemy
#include <actors/enemies/Enemy.h>
#endif
#ifndef INCLUDED_actors_enemies_ProjectileEnemy
#include <actors/enemies/ProjectileEnemy.h>
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

Void ProjectileAI_obj::__construct()
{
HX_STACK_FRAME("actors.actorsAI.ProjectileAI","new",0xddba713b,"actors.actorsAI.ProjectileAI.new","actors/actorsAI/ProjectileAI.hx",22,0x097632b5)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(23)
	super::__construct(hx::ObjectPtr<OBJ_>(this));
	HX_STACK_LINE(25)
	this->alignmentLeft = true;
	HX_STACK_LINE(26)
	this->attackCooldown = (int)50;
	HX_STACK_LINE(27)
	this->visionConeHeight = (int)30;
	HX_STACK_LINE(28)
	this->visionConeWidth = (int)320;
	HX_STACK_LINE(29)
	this->shortVisionConeWidth = (int)220;
	HX_STACK_LINE(30)
	this->projectileCooldown = (int)0;
}
;
	return null();
}

//ProjectileAI_obj::~ProjectileAI_obj() { }

Dynamic ProjectileAI_obj::__CreateEmpty() { return  new ProjectileAI_obj; }
hx::ObjectPtr< ProjectileAI_obj > ProjectileAI_obj::__new()
{  hx::ObjectPtr< ProjectileAI_obj > _result_ = new ProjectileAI_obj();
	_result_->__construct();
	return _result_;}

Dynamic ProjectileAI_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< ProjectileAI_obj > _result_ = new ProjectileAI_obj();
	_result_->__construct();
	return _result_;}

Void ProjectileAI_obj::updateAI( ::actors::Actor actor,::actors::ObjectMover mover){
{
		HX_STACK_FRAME("actors.actorsAI.ProjectileAI","updateAI",0xf2b77876,"actors.actorsAI.ProjectileAI.updateAI","actors/actorsAI/ProjectileAI.hx",34,0x097632b5)
		HX_STACK_THIS(this)
		HX_STACK_ARG(actor,"actor")
		HX_STACK_ARG(mover,"mover")
		HX_STACK_LINE(35)
		::actors::Actor tmp = actor;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(35)
		::actors::ObjectMover tmp1 = mover;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(35)
		this->super::updateAI(tmp,tmp1);
		HX_STACK_LINE(37)
		int tmp2 = this->projectileCooldown;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(37)
		bool tmp3 = (tmp2 > (int)0);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(37)
		if ((tmp3)){
			HX_STACK_LINE(38)
			hx::SubEq(this->projectileCooldown,(int)1);
		}
		HX_STACK_LINE(40)
		::maps::AreaMap tmp4 = actor->getCurrentMap();		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(40)
		::actors::Actor tmp5 = actor;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(40)
		::openfl::geom::Point tmp6 = tmp4->checkDistFromPlayer(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(40)
		::openfl::geom::Point distFromPlayer = tmp6;		HX_STACK_VAR(distFromPlayer,"distFromPlayer");
		HX_STACK_LINE(42)
		Float tmp7 = distFromPlayer->y;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(42)
		Float tmp8 = ::Math_obj::abs(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(42)
		int tmp9 = this->visionConeHeight;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(42)
		bool tmp10 = (tmp8 < tmp9);		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(42)
		bool tmp11;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(42)
		if ((tmp10)){
			HX_STACK_LINE(42)
			Float tmp12 = distFromPlayer->x;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(42)
			Float tmp13 = tmp12;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(42)
			Float tmp14 = ::Math_obj::abs(tmp13);		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(42)
			Float tmp15 = tmp14;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(42)
			int tmp16 = this->visionConeWidth;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(42)
			int tmp17 = tmp16;		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(42)
			tmp11 = (tmp15 < tmp17);
		}
		else{
			HX_STACK_LINE(42)
			tmp11 = false;
		}
		HX_STACK_LINE(42)
		if ((tmp11)){
			HX_STACK_LINE(43)
			::actors::enemies::ProjectileEnemy projectileEnemy = ((::actors::enemies::ProjectileEnemy)(actor));		HX_STACK_VAR(projectileEnemy,"projectileEnemy");
			HX_STACK_LINE(45)
			bool tmp12 = (distFromPlayer->x > (int)0);		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(45)
			if ((tmp12)){
				HX_STACK_LINE(46)
				projectileEnemy->faceLeft();
			}
			else{
				HX_STACK_LINE(48)
				projectileEnemy->faceRight();
			}
			HX_STACK_LINE(50)
			Float tmp13 = distFromPlayer->x;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(50)
			Float tmp14 = ::Math_obj::abs(tmp13);		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(50)
			int tmp15 = this->shortVisionConeWidth;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(50)
			bool tmp16 = (tmp14 < tmp15);		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(50)
			if ((tmp16)){
				HX_STACK_LINE(52)
				int tmp17 = this->projectileCooldown;		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(52)
				bool tmp18 = (tmp17 > (int)0);		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(52)
				if ((tmp18)){
					HX_STACK_LINE(53)
					return null();
				}
				HX_STACK_LINE(55)
				this->projectileCooldown = (int)45;
				HX_STACK_LINE(56)
				projectileEnemy->fireProjectile();
			}
		}
	}
return null();
}



ProjectileAI_obj::ProjectileAI_obj()
{
}

Dynamic ProjectileAI_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"updateAI") ) { return updateAI_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"alignmentLeft") ) { return alignmentLeft; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"attackCooldown") ) { return attackCooldown; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"visionConeWidth") ) { return visionConeWidth; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"visionConeHeight") ) { return visionConeHeight; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"projectileCooldown") ) { return projectileCooldown; }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"shortVisionConeWidth") ) { return shortVisionConeWidth; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic ProjectileAI_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 13:
		if (HX_FIELD_EQ(inName,"alignmentLeft") ) { alignmentLeft=inValue.Cast< bool >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"attackCooldown") ) { attackCooldown=inValue.Cast< int >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"visionConeWidth") ) { visionConeWidth=inValue.Cast< int >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"visionConeHeight") ) { visionConeHeight=inValue.Cast< int >(); return inValue; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"projectileCooldown") ) { projectileCooldown=inValue.Cast< int >(); return inValue; }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"shortVisionConeWidth") ) { shortVisionConeWidth=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool ProjectileAI_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	return false;
}

void ProjectileAI_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("alignmentLeft","\x8a","\xc4","\x55","\xc2"));
	outFields->push(HX_HCSTRING("attackCooldown","\x93","\x0b","\xf1","\x58"));
	outFields->push(HX_HCSTRING("visionConeHeight","\x32","\x4c","\x79","\xd9"));
	outFields->push(HX_HCSTRING("shortVisionConeWidth","\xff","\xb2","\x2e","\xeb"));
	outFields->push(HX_HCSTRING("visionConeWidth","\x1b","\xc4","\x61","\xf2"));
	outFields->push(HX_HCSTRING("projectileCooldown","\xb4","\x1e","\x25","\x04"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsBool,(int)offsetof(ProjectileAI_obj,alignmentLeft),HX_HCSTRING("alignmentLeft","\x8a","\xc4","\x55","\xc2")},
	{hx::fsInt,(int)offsetof(ProjectileAI_obj,attackCooldown),HX_HCSTRING("attackCooldown","\x93","\x0b","\xf1","\x58")},
	{hx::fsInt,(int)offsetof(ProjectileAI_obj,visionConeHeight),HX_HCSTRING("visionConeHeight","\x32","\x4c","\x79","\xd9")},
	{hx::fsInt,(int)offsetof(ProjectileAI_obj,shortVisionConeWidth),HX_HCSTRING("shortVisionConeWidth","\xff","\xb2","\x2e","\xeb")},
	{hx::fsInt,(int)offsetof(ProjectileAI_obj,visionConeWidth),HX_HCSTRING("visionConeWidth","\x1b","\xc4","\x61","\xf2")},
	{hx::fsInt,(int)offsetof(ProjectileAI_obj,projectileCooldown),HX_HCSTRING("projectileCooldown","\xb4","\x1e","\x25","\x04")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("alignmentLeft","\x8a","\xc4","\x55","\xc2"),
	HX_HCSTRING("attackCooldown","\x93","\x0b","\xf1","\x58"),
	HX_HCSTRING("visionConeHeight","\x32","\x4c","\x79","\xd9"),
	HX_HCSTRING("shortVisionConeWidth","\xff","\xb2","\x2e","\xeb"),
	HX_HCSTRING("visionConeWidth","\x1b","\xc4","\x61","\xf2"),
	HX_HCSTRING("projectileCooldown","\xb4","\x1e","\x25","\x04"),
	HX_HCSTRING("updateAI","\x31","\x13","\xfa","\x77"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ProjectileAI_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ProjectileAI_obj::__mClass,"__mClass");
};

#endif

hx::Class ProjectileAI_obj::__mClass;

void ProjectileAI_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("actors.actorsAI.ProjectileAI","\xc9","\xb7","\x4c","\x19");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &ProjectileAI_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< ProjectileAI_obj >;
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
