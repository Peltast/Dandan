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
#ifndef INCLUDED_openfl_errors_Error
#include <openfl/errors/Error.h>
#endif
#ifndef INCLUDED_openfl_events_EventDispatcher
#include <openfl/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_events_IEventDispatcher
#include <openfl/events/IEventDispatcher.h>
#endif
namespace actors{
namespace abilities{

Void Ability_obj::__construct(::actors::abilities::Ability ability)
{
HX_STACK_FRAME("actors.abilities.Ability","new",0x6a906a06,"actors.abilities.Ability.new","actors/abilities/Ability.hx",19,0x0c8f09ec)
HX_STACK_THIS(this)
HX_STACK_ARG(ability,"ability")
{
	HX_STACK_LINE(21)
	bool tmp = (ability != hx::ObjectPtr<OBJ_>(this));		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(21)
	if ((tmp)){
		HX_STACK_LINE(22)
		::openfl::errors::Error tmp1 = ::openfl::errors::Error_obj::__new(HX_HCSTRING("This class is meant to be treated as Abstract.","\xba","\x08","\xad","\xc7"),null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(22)
		HX_STACK_DO_THROW(tmp1);
	}
	HX_STACK_LINE(24)
	this->abilityWidth = (int)-1;
	HX_STACK_LINE(25)
	this->abilityHeight = (int)-1;
}
;
	return null();
}

//Ability_obj::~Ability_obj() { }

Dynamic Ability_obj::__CreateEmpty() { return  new Ability_obj; }
hx::ObjectPtr< Ability_obj > Ability_obj::__new(::actors::abilities::Ability ability)
{  hx::ObjectPtr< Ability_obj > _result_ = new Ability_obj();
	_result_->__construct(ability);
	return _result_;}

Dynamic Ability_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Ability_obj > _result_ = new Ability_obj();
	_result_->__construct(inArgs[0]);
	return _result_;}

::actors::attacks::Attack Ability_obj::getAbilityAttack( ::actors::Actor actor,::actors::ObjectMover mover){
	HX_STACK_FRAME("actors.abilities.Ability","getAbilityAttack",0xdda1ed36,"actors.abilities.Ability.getAbilityAttack","actors/abilities/Ability.hx",28,0x0c8f09ec)
	HX_STACK_THIS(this)
	HX_STACK_ARG(actor,"actor")
	HX_STACK_ARG(mover,"mover")
	HX_STACK_LINE(29)
	bool tmp = mover->getIsGrounded();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(29)
	if ((tmp)){
		HX_STACK_LINE(30)
		::actors::attacks::Attack tmp1 = this->jumpAttack;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(30)
		return tmp1;
	}
	else{
		HX_STACK_LINE(32)
		::actors::attacks::Attack tmp1 = this->standingAttack;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(32)
		return tmp1;
	}
	HX_STACK_LINE(29)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Ability_obj,getAbilityAttack,return )

int Ability_obj::getAbilityWidth( ){
	HX_STACK_FRAME("actors.abilities.Ability","getAbilityWidth",0x64344c58,"actors.abilities.Ability.getAbilityWidth","actors/abilities/Ability.hx",35,0x0c8f09ec)
	HX_STACK_THIS(this)
	HX_STACK_LINE(35)
	int tmp = this->abilityWidth;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(35)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(Ability_obj,getAbilityWidth,return )

int Ability_obj::getAbilityHeight( ){
	HX_STACK_FRAME("actors.abilities.Ability","getAbilityHeight",0xffddf955,"actors.abilities.Ability.getAbilityHeight","actors/abilities/Ability.hx",36,0x0c8f09ec)
	HX_STACK_THIS(this)
	HX_STACK_LINE(36)
	int tmp = this->abilityHeight;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(36)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(Ability_obj,getAbilityHeight,return )


Ability_obj::Ability_obj()
{
}

void Ability_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Ability);
	HX_MARK_MEMBER_NAME(standingAttack,"standingAttack");
	HX_MARK_MEMBER_NAME(jumpAttack,"jumpAttack");
	HX_MARK_MEMBER_NAME(abilityWidth,"abilityWidth");
	HX_MARK_MEMBER_NAME(abilityHeight,"abilityHeight");
	HX_MARK_END_CLASS();
}

void Ability_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(standingAttack,"standingAttack");
	HX_VISIT_MEMBER_NAME(jumpAttack,"jumpAttack");
	HX_VISIT_MEMBER_NAME(abilityWidth,"abilityWidth");
	HX_VISIT_MEMBER_NAME(abilityHeight,"abilityHeight");
}

Dynamic Ability_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 10:
		if (HX_FIELD_EQ(inName,"jumpAttack") ) { return jumpAttack; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"abilityWidth") ) { return abilityWidth; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"abilityHeight") ) { return abilityHeight; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"standingAttack") ) { return standingAttack; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"getAbilityWidth") ) { return getAbilityWidth_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"getAbilityAttack") ) { return getAbilityAttack_dyn(); }
		if (HX_FIELD_EQ(inName,"getAbilityHeight") ) { return getAbilityHeight_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Ability_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 10:
		if (HX_FIELD_EQ(inName,"jumpAttack") ) { jumpAttack=inValue.Cast< ::actors::attacks::Attack >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"abilityWidth") ) { abilityWidth=inValue.Cast< int >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"abilityHeight") ) { abilityHeight=inValue.Cast< int >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"standingAttack") ) { standingAttack=inValue.Cast< ::actors::attacks::Attack >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool Ability_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	return false;
}

void Ability_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("standingAttack","\xb4","\x16","\xbf","\x5d"));
	outFields->push(HX_HCSTRING("jumpAttack","\x56","\x9b","\xad","\xa7"));
	outFields->push(HX_HCSTRING("abilityWidth","\xfc","\x7b","\x3a","\x27"));
	outFields->push(HX_HCSTRING("abilityHeight","\x31","\x79","\x41","\xe2"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::actors::attacks::Attack*/ ,(int)offsetof(Ability_obj,standingAttack),HX_HCSTRING("standingAttack","\xb4","\x16","\xbf","\x5d")},
	{hx::fsObject /*::actors::attacks::Attack*/ ,(int)offsetof(Ability_obj,jumpAttack),HX_HCSTRING("jumpAttack","\x56","\x9b","\xad","\xa7")},
	{hx::fsInt,(int)offsetof(Ability_obj,abilityWidth),HX_HCSTRING("abilityWidth","\xfc","\x7b","\x3a","\x27")},
	{hx::fsInt,(int)offsetof(Ability_obj,abilityHeight),HX_HCSTRING("abilityHeight","\x31","\x79","\x41","\xe2")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("standingAttack","\xb4","\x16","\xbf","\x5d"),
	HX_HCSTRING("jumpAttack","\x56","\x9b","\xad","\xa7"),
	HX_HCSTRING("abilityWidth","\xfc","\x7b","\x3a","\x27"),
	HX_HCSTRING("abilityHeight","\x31","\x79","\x41","\xe2"),
	HX_HCSTRING("getAbilityAttack","\x9c","\x16","\x26","\x2a"),
	HX_HCSTRING("getAbilityWidth","\xb2","\xd1","\x24","\x4a"),
	HX_HCSTRING("getAbilityHeight","\xbb","\x22","\x62","\x4c"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Ability_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Ability_obj::__mClass,"__mClass");
};

#endif

hx::Class Ability_obj::__mClass;

void Ability_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("actors.abilities.Ability","\x14","\xaf","\xcd","\x3d");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &Ability_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Ability_obj >;
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
