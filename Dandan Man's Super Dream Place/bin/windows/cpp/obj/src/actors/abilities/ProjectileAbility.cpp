#include <hxcpp.h>

#ifndef INCLUDED_Main
#include <Main.h>
#endif
#ifndef INCLUDED_actors_Actor
#include <actors/Actor.h>
#endif
#ifndef INCLUDED_actors_ObjectMover
#include <actors/ObjectMover.h>
#endif
#ifndef INCLUDED_actors_abilities_Ability
#include <actors/abilities/Ability.h>
#endif
#ifndef INCLUDED_actors_abilities_ProjectileAbility
#include <actors/abilities/ProjectileAbility.h>
#endif
#ifndef INCLUDED_actors_attacks_Attack
#include <actors/attacks/Attack.h>
#endif
#ifndef INCLUDED_actors_attacks_PlayerProjectile
#include <actors/attacks/PlayerProjectile.h>
#endif
#ifndef INCLUDED_actors_attacks_Projectile
#include <actors/attacks/Projectile.h>
#endif
#ifndef INCLUDED_actors_attacks_ProjectileAttack
#include <actors/attacks/ProjectileAttack.h>
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
#ifndef INCLUDED_openfl_events_EventDispatcher
#include <openfl/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_events_IEventDispatcher
#include <openfl/events/IEventDispatcher.h>
#endif
namespace actors{
namespace abilities{

Void ProjectileAbility_obj::__construct()
{
HX_STACK_FRAME("actors.abilities.ProjectileAbility","new",0x165f4b1d,"actors.abilities.ProjectileAbility.new","actors/abilities/ProjectileAbility.hx",18,0xb2699f35)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(19)
	super::__construct(hx::ObjectPtr<OBJ_>(this));
	HX_STACK_LINE(22)
	::actors::attacks::ProjectileAttack tmp = this->projectileAttack;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(22)
	this->standingAttack = tmp;
	HX_STACK_LINE(23)
	::actors::attacks::ProjectileAttack tmp1 = this->projectileAttack;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(23)
	this->jumpAttack = tmp1;
}
;
	return null();
}

//ProjectileAbility_obj::~ProjectileAbility_obj() { }

Dynamic ProjectileAbility_obj::__CreateEmpty() { return  new ProjectileAbility_obj; }
hx::ObjectPtr< ProjectileAbility_obj > ProjectileAbility_obj::__new()
{  hx::ObjectPtr< ProjectileAbility_obj > _result_ = new ProjectileAbility_obj();
	_result_->__construct();
	return _result_;}

Dynamic ProjectileAbility_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< ProjectileAbility_obj > _result_ = new ProjectileAbility_obj();
	_result_->__construct();
	return _result_;}

::actors::attacks::Attack ProjectileAbility_obj::getAbilityAttack( ::actors::Actor actor,::actors::ObjectMover mover){
	HX_STACK_FRAME("actors.abilities.ProjectileAbility","getAbilityAttack",0x3cece9bf,"actors.abilities.ProjectileAbility.getAbilityAttack","actors/abilities/ProjectileAbility.hx",27,0xb2699f35)
	HX_STACK_THIS(this)
	HX_STACK_ARG(actor,"actor")
	HX_STACK_ARG(mover,"mover")
	HX_STACK_LINE(30)
	::actors::Actor tmp = actor;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(30)
	::openfl::display::Bitmap tmp1 = ::Main_obj::getBitmapAsset(HX_HCSTRING("assets/Projectile2.png","\xf8","\xee","\xba","\xb6"));		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(31)
	::actors::ObjectMover tmp2 = ::actors::ObjectMover_obj::__new(((Float).5),((Float).1),(int)10,(int)0,(int)0,(int)0,(int)10,(int)0,(int)0,(int)0,false,null());		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(30)
	::actors::attacks::PlayerProjectile tmp3 = ::actors::attacks::PlayerProjectile_obj::__new(tmp1,tmp2,(int)30,(int)1);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(29)
	::actors::attacks::ProjectileAttack tmp4 = ::actors::attacks::ProjectileAttack_obj::__new(tmp,tmp3,(int)0,HX_HCSTRING("Projectile","\x09","\x8a","\x3c","\xbb"),HX_HCSTRING("","\x00","\x00","\x00","\x00"));		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(29)
	this->projectileAttack = tmp4;
	HX_STACK_LINE(32)
	::actors::attacks::ProjectileAttack tmp5 = this->projectileAttack;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(32)
	this->standingAttack = tmp5;
	HX_STACK_LINE(33)
	::actors::attacks::ProjectileAttack tmp6 = this->projectileAttack;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(33)
	this->jumpAttack = tmp6;
	HX_STACK_LINE(35)
	::actors::Actor tmp7 = actor;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(35)
	::actors::ObjectMover tmp8 = mover;		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(35)
	::actors::attacks::Attack tmp9 = this->super::getAbilityAttack(tmp7,tmp8);		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(35)
	return tmp9;
}



ProjectileAbility_obj::ProjectileAbility_obj()
{
}

void ProjectileAbility_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ProjectileAbility);
	HX_MARK_MEMBER_NAME(projectileAttack,"projectileAttack");
	::actors::abilities::Ability_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void ProjectileAbility_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(projectileAttack,"projectileAttack");
	::actors::abilities::Ability_obj::__Visit(HX_VISIT_ARG);
}

Dynamic ProjectileAbility_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 16:
		if (HX_FIELD_EQ(inName,"projectileAttack") ) { return projectileAttack; }
		if (HX_FIELD_EQ(inName,"getAbilityAttack") ) { return getAbilityAttack_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic ProjectileAbility_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 16:
		if (HX_FIELD_EQ(inName,"projectileAttack") ) { projectileAttack=inValue.Cast< ::actors::attacks::ProjectileAttack >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool ProjectileAbility_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	return false;
}

void ProjectileAbility_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("projectileAttack","\x91","\xca","\x2a","\xd3"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::actors::attacks::ProjectileAttack*/ ,(int)offsetof(ProjectileAbility_obj,projectileAttack),HX_HCSTRING("projectileAttack","\x91","\xca","\x2a","\xd3")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("projectileAttack","\x91","\xca","\x2a","\xd3"),
	HX_HCSTRING("getAbilityAttack","\x9c","\x16","\x26","\x2a"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ProjectileAbility_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ProjectileAbility_obj::__mClass,"__mClass");
};

#endif

hx::Class ProjectileAbility_obj::__mClass;

void ProjectileAbility_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("actors.abilities.ProjectileAbility","\xab","\x78","\x82","\x83");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &ProjectileAbility_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< ProjectileAbility_obj >;
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
} // end namespace abilities
