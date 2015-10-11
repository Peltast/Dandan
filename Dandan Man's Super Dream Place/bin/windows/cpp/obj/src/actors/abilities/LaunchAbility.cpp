#include <hxcpp.h>

#ifndef INCLUDED_actors_Actor
#include <actors/Actor.h>
#endif
#ifndef INCLUDED_actors_ObjectMover
#include <actors/ObjectMover.h>
#endif
#ifndef INCLUDED_actors_abilities_Ability
#include <actors/abilities/Ability.h>
#endif
#ifndef INCLUDED_actors_abilities_LaunchAbility
#include <actors/abilities/LaunchAbility.h>
#endif
#ifndef INCLUDED_actors_attacks_Attack
#include <actors/attacks/Attack.h>
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
#ifndef INCLUDED_openfl_geom_Rectangle
#include <openfl/geom/Rectangle.h>
#endif
namespace actors{
namespace abilities{

Void LaunchAbility_obj::__construct()
{
HX_STACK_FRAME("actors.abilities.LaunchAbility","new",0x6bc4c213,"actors.abilities.LaunchAbility.new","actors/abilities/LaunchAbility.hx",18,0x2e94efff)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(19)
	super::__construct(hx::ObjectPtr<OBJ_>(this));
	HX_STACK_LINE(22)
	this->aoeHitBox = Array_obj< ::Dynamic >::__new();
	HX_STACK_LINE(23)
	::openfl::geom::Rectangle tmp = ::openfl::geom::Rectangle_obj::__new((int)0,(int)0,(int)40,(int)40);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(23)
	this->aoeHitBox->push(tmp);
	HX_STACK_LINE(24)
	::actors::ObjectMover tmp1 = ::actors::ObjectMover_obj::__new(((Float).1),((Float).1),(int)0,(int)0,(int)0,(int)0,(int)3,(int)3,(int)0,(int)1,false,null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(24)
	::actors::attacks::Attack tmp2 = ::actors::attacks::Attack_obj::__new(tmp1,this->aoeHitBox,(int)-1,(int)1,(int)0,HX_HCSTRING("Launch","\x53","\x76","\xa7","\x8a"),HX_HCSTRING("LaunchRest","\x07","\x23","\x5d","\xb3"),true,null());		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(24)
	this->aoeAttack = tmp2;
	HX_STACK_LINE(26)
	::actors::attacks::Attack tmp3 = this->aoeAttack;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(26)
	this->jumpAttack = tmp3;
	HX_STACK_LINE(27)
	::actors::attacks::Attack tmp4 = this->aoeAttack;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(27)
	this->standingAttack = tmp4;
	HX_STACK_LINE(29)
	this->abilityHeight = (int)40;
	HX_STACK_LINE(30)
	this->abilityWidth = (int)40;
}
;
	return null();
}

//LaunchAbility_obj::~LaunchAbility_obj() { }

Dynamic LaunchAbility_obj::__CreateEmpty() { return  new LaunchAbility_obj; }
hx::ObjectPtr< LaunchAbility_obj > LaunchAbility_obj::__new()
{  hx::ObjectPtr< LaunchAbility_obj > _result_ = new LaunchAbility_obj();
	_result_->__construct();
	return _result_;}

Dynamic LaunchAbility_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< LaunchAbility_obj > _result_ = new LaunchAbility_obj();
	_result_->__construct();
	return _result_;}

::actors::attacks::Attack LaunchAbility_obj::getAbilityAttack( ::actors::Actor actor,::actors::ObjectMover mover){
	HX_STACK_FRAME("actors.abilities.LaunchAbility","getAbilityAttack",0xa363d109,"actors.abilities.LaunchAbility.getAbilityAttack","actors/abilities/LaunchAbility.hx",34,0x2e94efff)
	HX_STACK_THIS(this)
	HX_STACK_ARG(actor,"actor")
	HX_STACK_ARG(mover,"mover")
	HX_STACK_LINE(35)
	::actors::ObjectMover tmp = mover;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(35)
	this->retainVelocity(tmp);
	HX_STACK_LINE(37)
	::actors::Actor tmp1 = actor;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(37)
	::actors::ObjectMover tmp2 = mover;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(37)
	::actors::attacks::Attack tmp3 = this->super::getAbilityAttack(tmp1,tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(37)
	return tmp3;
}


Void LaunchAbility_obj::retainVelocity( ::actors::ObjectMover mover){
{
		HX_STACK_FRAME("actors.abilities.LaunchAbility","retainVelocity",0xe9b7502f,"actors.abilities.LaunchAbility.retainVelocity","actors/abilities/LaunchAbility.hx",40,0x2e94efff)
		HX_STACK_THIS(this)
		HX_STACK_ARG(mover,"mover")
		HX_STACK_LINE(43)
		int tmp = mover->getTargetXVel();		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(43)
		int tmp1 = mover->getTargetYVel();		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(43)
		Float tmp2 = mover->getXVel();		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(43)
		Float tmp3 = mover->getYVel();		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(42)
		::actors::ObjectMover tmp4 = ::actors::ObjectMover_obj::__new(((Float).1),((Float).1),tmp,tmp1,tmp2,tmp3,(int)2,(int)5,(int)0,(int)1,false,null());		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(42)
		::actors::ObjectMover floatMovement = tmp4;		HX_STACK_VAR(floatMovement,"floatMovement");
		HX_STACK_LINE(44)
		::actors::attacks::Attack tmp5 = ::actors::attacks::Attack_obj::__new(floatMovement,this->aoeHitBox,(int)-1,(int)1,(int)40,HX_HCSTRING("Launch","\x53","\x76","\xa7","\x8a"),HX_HCSTRING("LaunchRest","\x07","\x23","\x5d","\xb3"),true,null());		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(44)
		this->aoeAttack = tmp5;
		HX_STACK_LINE(46)
		::actors::attacks::Attack tmp6 = this->aoeAttack;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(46)
		this->jumpAttack = tmp6;
		HX_STACK_LINE(47)
		::actors::attacks::Attack tmp7 = this->aoeAttack;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(47)
		this->standingAttack = tmp7;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(LaunchAbility_obj,retainVelocity,(void))


LaunchAbility_obj::LaunchAbility_obj()
{
}

void LaunchAbility_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(LaunchAbility);
	HX_MARK_MEMBER_NAME(aoeAttack,"aoeAttack");
	HX_MARK_MEMBER_NAME(aoeHitBox,"aoeHitBox");
	::actors::abilities::Ability_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void LaunchAbility_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(aoeAttack,"aoeAttack");
	HX_VISIT_MEMBER_NAME(aoeHitBox,"aoeHitBox");
	::actors::abilities::Ability_obj::__Visit(HX_VISIT_ARG);
}

Dynamic LaunchAbility_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 9:
		if (HX_FIELD_EQ(inName,"aoeAttack") ) { return aoeAttack; }
		if (HX_FIELD_EQ(inName,"aoeHitBox") ) { return aoeHitBox; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"retainVelocity") ) { return retainVelocity_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"getAbilityAttack") ) { return getAbilityAttack_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic LaunchAbility_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 9:
		if (HX_FIELD_EQ(inName,"aoeAttack") ) { aoeAttack=inValue.Cast< ::actors::attacks::Attack >(); return inValue; }
		if (HX_FIELD_EQ(inName,"aoeHitBox") ) { aoeHitBox=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool LaunchAbility_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	return false;
}

void LaunchAbility_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("aoeAttack","\xdf","\x8e","\xf4","\x36"));
	outFields->push(HX_HCSTRING("aoeHitBox","\x8f","\x38","\xf4","\xad"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::actors::attacks::Attack*/ ,(int)offsetof(LaunchAbility_obj,aoeAttack),HX_HCSTRING("aoeAttack","\xdf","\x8e","\xf4","\x36")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(LaunchAbility_obj,aoeHitBox),HX_HCSTRING("aoeHitBox","\x8f","\x38","\xf4","\xad")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("aoeAttack","\xdf","\x8e","\xf4","\x36"),
	HX_HCSTRING("aoeHitBox","\x8f","\x38","\xf4","\xad"),
	HX_HCSTRING("getAbilityAttack","\x9c","\x16","\x26","\x2a"),
	HX_HCSTRING("retainVelocity","\x02","\xfb","\x1a","\x50"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(LaunchAbility_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(LaunchAbility_obj::__mClass,"__mClass");
};

#endif

hx::Class LaunchAbility_obj::__mClass;

void LaunchAbility_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("actors.abilities.LaunchAbility","\xa1","\xbc","\xf7","\xfc");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &LaunchAbility_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< LaunchAbility_obj >;
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
