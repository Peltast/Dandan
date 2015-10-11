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
#ifndef INCLUDED_actors_abilities_DashAbility
#include <actors/abilities/DashAbility.h>
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

Void DashAbility_obj::__construct()
{
HX_STACK_FRAME("actors.abilities.DashAbility","new",0x075d66d4,"actors.abilities.DashAbility.new","actors/abilities/DashAbility.hx",17,0x156f29de)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(18)
	super::__construct(hx::ObjectPtr<OBJ_>(this));
	HX_STACK_LINE(21)
	Array< ::Dynamic > hitBoxes = Array_obj< ::Dynamic >::__new();		HX_STACK_VAR(hitBoxes,"hitBoxes");
	HX_STACK_LINE(22)
	::openfl::geom::Rectangle tmp = ::openfl::geom::Rectangle_obj::__new((int)-4,(int)-2,(int)20,(int)40);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(22)
	hitBoxes->push(tmp);
	HX_STACK_LINE(25)
	::actors::ObjectMover tmp1 = ::actors::ObjectMover_obj::__new(((Float).5),((Float).1),(int)-15,(int)0,(int)0,(int)0,(int)60,(int)60,(int)0,(int)0,false,null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(24)
	::actors::attacks::Attack tmp2 = ::actors::attacks::Attack_obj::__new(tmp1,hitBoxes,(int)15,(int)3,(int)20,HX_HCSTRING("Dash","\x72","\x81","\x3c","\x2d"),HX_HCSTRING("DashRest","\xa6","\xa9","\x3f","\x06"),true,null());		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(24)
	this->leftDash = tmp2;
	HX_STACK_LINE(29)
	hitBoxes = Array_obj< ::Dynamic >::__new();
	HX_STACK_LINE(30)
	::openfl::geom::Rectangle tmp3 = ::openfl::geom::Rectangle_obj::__new((int)16,(int)-2,(int)20,(int)40);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(30)
	hitBoxes->push(tmp3);
	HX_STACK_LINE(33)
	::actors::ObjectMover tmp4 = ::actors::ObjectMover_obj::__new(((Float).5),((Float).1),(int)15,(int)0,(int)0,(int)0,(int)60,(int)60,(int)0,(int)0,false,null());		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(32)
	::actors::attacks::Attack tmp5 = ::actors::attacks::Attack_obj::__new(tmp4,hitBoxes,(int)15,(int)3,(int)20,HX_HCSTRING("Dash","\x72","\x81","\x3c","\x2d"),HX_HCSTRING("DashRest","\xa6","\xa9","\x3f","\x06"),true,null());		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(32)
	this->rightDash = tmp5;
	HX_STACK_LINE(36)
	::actors::attacks::Attack tmp6 = this->leftDash;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(36)
	this->jumpAttack = tmp6;
	HX_STACK_LINE(37)
	::actors::attacks::Attack tmp7 = this->leftDash;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(37)
	this->standingAttack = tmp7;
}
;
	return null();
}

//DashAbility_obj::~DashAbility_obj() { }

Dynamic DashAbility_obj::__CreateEmpty() { return  new DashAbility_obj; }
hx::ObjectPtr< DashAbility_obj > DashAbility_obj::__new()
{  hx::ObjectPtr< DashAbility_obj > _result_ = new DashAbility_obj();
	_result_->__construct();
	return _result_;}

Dynamic DashAbility_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< DashAbility_obj > _result_ = new DashAbility_obj();
	_result_->__construct();
	return _result_;}

::actors::attacks::Attack DashAbility_obj::getAbilityAttack( ::actors::Actor actor,::actors::ObjectMover mover){
	HX_STACK_FRAME("actors.abilities.DashAbility","getAbilityAttack",0x76e087a8,"actors.abilities.DashAbility.getAbilityAttack","actors/abilities/DashAbility.hx",41,0x156f29de)
	HX_STACK_THIS(this)
	HX_STACK_ARG(actor,"actor")
	HX_STACK_ARG(mover,"mover")
	HX_STACK_LINE(42)
	::actors::Actor tmp = actor;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(42)
	this->changeDashDirection(tmp);
	HX_STACK_LINE(44)
	::actors::Actor tmp1 = actor;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(44)
	::actors::ObjectMover tmp2 = mover;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(44)
	::actors::attacks::Attack tmp3 = this->super::getAbilityAttack(tmp1,tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(44)
	return tmp3;
}


Void DashAbility_obj::changeDashDirection( ::actors::Actor actor){
{
		HX_STACK_FRAME("actors.abilities.DashAbility","changeDashDirection",0x22d40971,"actors.abilities.DashAbility.changeDashDirection","actors/abilities/DashAbility.hx",47,0x156f29de)
		HX_STACK_THIS(this)
		HX_STACK_ARG(actor,"actor")
		HX_STACK_LINE(49)
		::String tmp = actor->getAnimationName();		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(49)
		int tmp1 = tmp.indexOf(HX_HCSTRING("Left","\x27","\x34","\x89","\x32"),null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(49)
		bool tmp2 = (tmp1 >= (int)0);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(49)
		if ((tmp2)){
			HX_STACK_LINE(51)
			::actors::attacks::Attack tmp3 = this->leftDash;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(51)
			this->jumpAttack = tmp3;
			HX_STACK_LINE(52)
			::actors::attacks::Attack tmp4 = this->leftDash;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(52)
			this->standingAttack = tmp4;
		}
		else{
			HX_STACK_LINE(57)
			::actors::attacks::Attack tmp3 = this->rightDash;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(57)
			this->jumpAttack = tmp3;
			HX_STACK_LINE(58)
			::actors::attacks::Attack tmp4 = this->rightDash;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(58)
			this->standingAttack = tmp4;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(DashAbility_obj,changeDashDirection,(void))


DashAbility_obj::DashAbility_obj()
{
}

void DashAbility_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(DashAbility);
	HX_MARK_MEMBER_NAME(hitBoxes,"hitBoxes");
	HX_MARK_MEMBER_NAME(leftDash,"leftDash");
	HX_MARK_MEMBER_NAME(rightDash,"rightDash");
	::actors::abilities::Ability_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void DashAbility_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(hitBoxes,"hitBoxes");
	HX_VISIT_MEMBER_NAME(leftDash,"leftDash");
	HX_VISIT_MEMBER_NAME(rightDash,"rightDash");
	::actors::abilities::Ability_obj::__Visit(HX_VISIT_ARG);
}

Dynamic DashAbility_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"hitBoxes") ) { return hitBoxes; }
		if (HX_FIELD_EQ(inName,"leftDash") ) { return leftDash; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"rightDash") ) { return rightDash; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"getAbilityAttack") ) { return getAbilityAttack_dyn(); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"changeDashDirection") ) { return changeDashDirection_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic DashAbility_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"hitBoxes") ) { hitBoxes=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"leftDash") ) { leftDash=inValue.Cast< ::actors::attacks::Attack >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"rightDash") ) { rightDash=inValue.Cast< ::actors::attacks::Attack >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool DashAbility_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	return false;
}

void DashAbility_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("hitBoxes","\xe6","\x4b","\x5e","\xf6"));
	outFields->push(HX_HCSTRING("leftDash","\xf9","\x98","\x5e","\x49"));
	outFields->push(HX_HCSTRING("rightDash","\x4e","\xab","\x29","\xad"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(DashAbility_obj,hitBoxes),HX_HCSTRING("hitBoxes","\xe6","\x4b","\x5e","\xf6")},
	{hx::fsObject /*::actors::attacks::Attack*/ ,(int)offsetof(DashAbility_obj,leftDash),HX_HCSTRING("leftDash","\xf9","\x98","\x5e","\x49")},
	{hx::fsObject /*::actors::attacks::Attack*/ ,(int)offsetof(DashAbility_obj,rightDash),HX_HCSTRING("rightDash","\x4e","\xab","\x29","\xad")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("hitBoxes","\xe6","\x4b","\x5e","\xf6"),
	HX_HCSTRING("leftDash","\xf9","\x98","\x5e","\x49"),
	HX_HCSTRING("rightDash","\x4e","\xab","\x29","\xad"),
	HX_HCSTRING("getAbilityAttack","\x9c","\x16","\x26","\x2a"),
	HX_HCSTRING("changeDashDirection","\xfd","\x4a","\x43","\x86"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(DashAbility_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(DashAbility_obj::__mClass,"__mClass");
};

#endif

hx::Class DashAbility_obj::__mClass;

void DashAbility_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("actors.abilities.DashAbility","\xe2","\xac","\x4c","\xc6");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &DashAbility_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< DashAbility_obj >;
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
