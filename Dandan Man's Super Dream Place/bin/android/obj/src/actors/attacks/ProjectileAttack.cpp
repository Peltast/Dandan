#include <hxcpp.h>

#ifndef INCLUDED_actors_Actor
#include <actors/Actor.h>
#endif
#ifndef INCLUDED_actors_ObjectMover
#include <actors/ObjectMover.h>
#endif
#ifndef INCLUDED_actors_attacks_Attack
#include <actors/attacks/Attack.h>
#endif
#ifndef INCLUDED_actors_attacks_Projectile
#include <actors/attacks/Projectile.h>
#endif
#ifndef INCLUDED_actors_attacks_ProjectileAttack
#include <actors/attacks/ProjectileAttack.h>
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
#ifndef INCLUDED_openfl_geom_Rectangle
#include <openfl/geom/Rectangle.h>
#endif
namespace actors{
namespace attacks{

Void ProjectileAttack_obj::__construct(::actors::Actor host,::actors::attacks::Projectile prototypeProjectile,int stun,::String __o_fireAnimation,::String __o_stunAnimation)
{
HX_STACK_FRAME("actors.attacks.ProjectileAttack","new",0xc8bb2856,"actors.attacks.ProjectileAttack.new","actors/attacks/ProjectileAttack.hx",15,0xb5243418)
HX_STACK_THIS(this)
HX_STACK_ARG(host,"host")
HX_STACK_ARG(prototypeProjectile,"prototypeProjectile")
HX_STACK_ARG(stun,"stun")
HX_STACK_ARG(__o_fireAnimation,"fireAnimation")
HX_STACK_ARG(__o_stunAnimation,"stunAnimation")
::String fireAnimation = __o_fireAnimation.Default(HX_HCSTRING("","\x00","\x00","\x00","\x00"));
::String stunAnimation = __o_stunAnimation.Default(HX_HCSTRING("","\x00","\x00","\x00","\x00"));
{
	HX_STACK_LINE(16)
	int tmp = stun;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(16)
	::String tmp1 = fireAnimation;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(16)
	::String tmp2 = stunAnimation;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(16)
	super::__construct(null(),Array_obj< ::Dynamic >::__new(),(int)20,(int)0,tmp,tmp1,tmp2,null());
	HX_STACK_LINE(18)
	this->prototypeProjectile = prototypeProjectile;
	HX_STACK_LINE(19)
	this->host = host;
}
;
	return null();
}

//ProjectileAttack_obj::~ProjectileAttack_obj() { }

Dynamic ProjectileAttack_obj::__CreateEmpty() { return  new ProjectileAttack_obj; }
hx::ObjectPtr< ProjectileAttack_obj > ProjectileAttack_obj::__new(::actors::Actor host,::actors::attacks::Projectile prototypeProjectile,int stun,::String __o_fireAnimation,::String __o_stunAnimation)
{  hx::ObjectPtr< ProjectileAttack_obj > _result_ = new ProjectileAttack_obj();
	_result_->__construct(host,prototypeProjectile,stun,__o_fireAnimation,__o_stunAnimation);
	return _result_;}

Dynamic ProjectileAttack_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< ProjectileAttack_obj > _result_ = new ProjectileAttack_obj();
	_result_->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3],inArgs[4]);
	return _result_;}

Void ProjectileAttack_obj::startAttack( ){
{
		HX_STACK_FRAME("actors.attacks.ProjectileAttack","startAttack",0x1e0797c0,"actors.attacks.ProjectileAttack.startAttack","actors/attacks/ProjectileAttack.hx",23,0xb5243418)
		HX_STACK_THIS(this)
		HX_STACK_LINE(24)
		this->super::startAttack();
		HX_STACK_LINE(26)
		::actors::attacks::Projectile tmp = this->prototypeProjectile;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(26)
		::actors::attacks::Projectile tmp1 = tmp->createClone();		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(26)
		::actors::attacks::Projectile newProjectile = tmp1;		HX_STACK_VAR(newProjectile,"newProjectile");
		HX_STACK_LINE(27)
		::actors::Actor tmp2 = this->host;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(27)
		Float tmp3 = tmp2->get_x();		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(27)
		::actors::Actor tmp4 = this->host;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(27)
		Float tmp5 = tmp4->get_width();		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(27)
		Float tmp6 = (Float(tmp5) / Float((int)2));		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(27)
		Float tmp7 = newProjectile->get_width();		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(27)
		Float tmp8 = (Float(tmp7) / Float((int)2));		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(27)
		Float tmp9 = (tmp6 - tmp8);		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(27)
		Float tmp10 = (tmp3 + tmp9);		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(27)
		newProjectile->set_x(tmp10);
		HX_STACK_LINE(28)
		::actors::Actor tmp11 = this->host;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(28)
		Float tmp12 = tmp11->get_y();		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(28)
		::actors::Actor tmp13 = this->host;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(28)
		Float tmp14 = tmp13->get_height();		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(28)
		Float tmp15 = (Float(tmp14) / Float((int)2));		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(28)
		Float tmp16 = newProjectile->get_height();		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(28)
		Float tmp17 = (Float(tmp16) / Float((int)2));		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(28)
		Float tmp18 = (tmp15 - tmp17);		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(28)
		Float tmp19 = (tmp12 + tmp18);		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(28)
		newProjectile->set_y(tmp19);
		HX_STACK_LINE(30)
		::actors::Actor tmp20 = this->host;		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(30)
		::maps::AreaMap tmp21 = tmp20->getCurrentMap();		HX_STACK_VAR(tmp21,"tmp21");
		HX_STACK_LINE(30)
		::actors::attacks::Projectile tmp22 = newProjectile;		HX_STACK_VAR(tmp22,"tmp22");
		HX_STACK_LINE(30)
		tmp21->addProjectile(tmp22);
		HX_STACK_LINE(32)
		::actors::Actor tmp23 = this->host;		HX_STACK_VAR(tmp23,"tmp23");
		HX_STACK_LINE(32)
		bool tmp24 = tmp23->isFacingLeft();		HX_STACK_VAR(tmp24,"tmp24");
		HX_STACK_LINE(32)
		if ((tmp24)){
			HX_STACK_LINE(33)
			newProjectile->flipProjectile(true);
		}
	}
return null();
}



ProjectileAttack_obj::ProjectileAttack_obj()
{
}

void ProjectileAttack_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ProjectileAttack);
	HX_MARK_MEMBER_NAME(prototypeProjectile,"prototypeProjectile");
	HX_MARK_MEMBER_NAME(host,"host");
	::actors::attacks::Attack_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void ProjectileAttack_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(prototypeProjectile,"prototypeProjectile");
	HX_VISIT_MEMBER_NAME(host,"host");
	::actors::attacks::Attack_obj::__Visit(HX_VISIT_ARG);
}

Dynamic ProjectileAttack_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"host") ) { return host; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"startAttack") ) { return startAttack_dyn(); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"prototypeProjectile") ) { return prototypeProjectile; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic ProjectileAttack_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"host") ) { host=inValue.Cast< ::actors::Actor >(); return inValue; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"prototypeProjectile") ) { prototypeProjectile=inValue.Cast< ::actors::attacks::Projectile >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool ProjectileAttack_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	return false;
}

void ProjectileAttack_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("prototypeProjectile","\x2b","\x1a","\x20","\x8e"));
	outFields->push(HX_HCSTRING("host","\x68","\xcf","\x12","\x45"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::actors::attacks::Projectile*/ ,(int)offsetof(ProjectileAttack_obj,prototypeProjectile),HX_HCSTRING("prototypeProjectile","\x2b","\x1a","\x20","\x8e")},
	{hx::fsObject /*::actors::Actor*/ ,(int)offsetof(ProjectileAttack_obj,host),HX_HCSTRING("host","\x68","\xcf","\x12","\x45")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("prototypeProjectile","\x2b","\x1a","\x20","\x8e"),
	HX_HCSTRING("host","\x68","\xcf","\x12","\x45"),
	HX_HCSTRING("startAttack","\xca","\x59","\xf6","\x57"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ProjectileAttack_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ProjectileAttack_obj::__mClass,"__mClass");
};

#endif

hx::Class ProjectileAttack_obj::__mClass;

void ProjectileAttack_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("actors.attacks.ProjectileAttack","\x64","\x05","\x87","\x45");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &ProjectileAttack_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< ProjectileAttack_obj >;
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
} // end namespace attacks
