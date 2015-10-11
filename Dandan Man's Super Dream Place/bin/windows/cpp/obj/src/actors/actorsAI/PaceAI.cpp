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
#ifndef INCLUDED_actors_actorsAI_PaceAI
#include <actors/actorsAI/PaceAI.h>
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

Void PaceAI_obj::__construct()
{
HX_STACK_FRAME("actors.actorsAI.PaceAI","new",0xedff73a5,"actors.actorsAI.PaceAI.new","actors/actorsAI/PaceAI.hx",16,0xaf73138b)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(17)
	super::__construct(hx::ObjectPtr<OBJ_>(this));
	HX_STACK_LINE(19)
	Float tmp = ::Math_obj::random();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(19)
	bool tmp1 = (tmp >= ((Float).5));		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(19)
	if ((tmp1)){
		HX_STACK_LINE(19)
		this->alignmentLeft = false;
	}
	else{
		HX_STACK_LINE(20)
		this->alignmentLeft = true;
	}
}
;
	return null();
}

//PaceAI_obj::~PaceAI_obj() { }

Dynamic PaceAI_obj::__CreateEmpty() { return  new PaceAI_obj; }
hx::ObjectPtr< PaceAI_obj > PaceAI_obj::__new()
{  hx::ObjectPtr< PaceAI_obj > _result_ = new PaceAI_obj();
	_result_->__construct();
	return _result_;}

Dynamic PaceAI_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< PaceAI_obj > _result_ = new PaceAI_obj();
	_result_->__construct();
	return _result_;}

Void PaceAI_obj::updateAI( ::actors::Actor actor,::actors::ObjectMover mover){
{
		HX_STACK_FRAME("actors.actorsAI.PaceAI","updateAI",0xe0df75cc,"actors.actorsAI.PaceAI.updateAI","actors/actorsAI/PaceAI.hx",24,0xaf73138b)
		HX_STACK_THIS(this)
		HX_STACK_ARG(actor,"actor")
		HX_STACK_ARG(mover,"mover")
		HX_STACK_LINE(25)
		::actors::Actor tmp = actor;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(25)
		::actors::ObjectMover tmp1 = mover;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(25)
		this->super::updateAI(tmp,tmp1);
		HX_STACK_LINE(27)
		bool tmp2 = mover->getIsGrounded();		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(27)
		bool tmp3;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(27)
		if ((tmp2)){
			HX_STACK_LINE(27)
			Float tmp4 = mover->getXVel();		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(27)
			Float tmp5 = tmp4;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(27)
			Float tmp6 = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(27)
			Float tmp7 = ::Math_obj::abs(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(27)
			Float tmp8 = tmp7;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(27)
			tmp3 = (tmp8 < ((Float).1));
		}
		else{
			HX_STACK_LINE(27)
			tmp3 = false;
		}
		HX_STACK_LINE(27)
		if ((tmp3)){
			HX_STACK_LINE(28)
			::actors::Actor tmp4 = actor;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(28)
			this->switchDirections(tmp4);
		}
		HX_STACK_LINE(30)
		::maps::AreaMap tmp4 = actor->getCurrentMap();		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(30)
		::actors::Actor tmp5 = actor;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(30)
		Array< ::Dynamic > aiCollisions = tmp4->checkCollisions(tmp5,true);		HX_STACK_VAR(aiCollisions,"aiCollisions");
		HX_STACK_LINE(31)
		bool tmp6 = (aiCollisions->length > (int)0);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(31)
		if ((tmp6)){
			HX_STACK_LINE(32)
			::maps::mapobjects::MapObject tmp7 = aiCollisions->__get((int)0).StaticCast< ::maps::mapobjects::MapObject >();		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(32)
			::actors::Actor tmp8 = actor;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(32)
			bool tmp9 = this->headingToWall(tmp7,tmp8);		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(32)
			if ((tmp9)){
				HX_STACK_LINE(33)
				::actors::Actor tmp10 = actor;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(33)
				this->switchDirections(tmp10);
			}
		}
	}
return null();
}


Void PaceAI_obj::handleCollision( ::maps::mapobjects::MapObject collider,::actors::Actor host,bool horizontal){
{
		HX_STACK_FRAME("actors.actorsAI.PaceAI","handleCollision",0x489c466f,"actors.actorsAI.PaceAI.handleCollision","actors/actorsAI/PaceAI.hx",38,0xaf73138b)
		HX_STACK_THIS(this)
		HX_STACK_ARG(collider,"collider")
		HX_STACK_ARG(host,"host")
		HX_STACK_ARG(horizontal,"horizontal")
		HX_STACK_LINE(39)
		bool tmp = horizontal;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(39)
		if ((tmp)){
			HX_STACK_LINE(40)
			::actors::Actor tmp1 = host;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(40)
			this->switchDirections(tmp1);
		}
	}
return null();
}


bool PaceAI_obj::headingToWall( ::maps::mapobjects::MapObject object,::actors::Actor host){
	HX_STACK_FRAME("actors.actorsAI.PaceAI","headingToWall",0xf0d31d0c,"actors.actorsAI.PaceAI.headingToWall","actors/actorsAI/PaceAI.hx",43,0xaf73138b)
	HX_STACK_THIS(this)
	HX_STACK_ARG(object,"object")
	HX_STACK_ARG(host,"host")
	HX_STACK_LINE(44)
	Float tmp = object->get_x();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(44)
	Float tmp1 = object->get_width();		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(44)
	Float tmp2 = (Float(tmp1) / Float((int)2));		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(44)
	Float tmp3 = (tmp + tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(44)
	Float objXCenter = tmp3;		HX_STACK_VAR(objXCenter,"objXCenter");
	HX_STACK_LINE(45)
	Float tmp4 = host->get_x();		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(45)
	Float tmp5 = host->get_width();		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(45)
	Float tmp6 = (Float(tmp5) / Float((int)2));		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(45)
	Float tmp7 = (tmp4 + tmp6);		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(45)
	Float hostXCenter = tmp7;		HX_STACK_VAR(hostXCenter,"hostXCenter");
	HX_STACK_LINE(47)
	bool tmp8 = (objXCenter >= hostXCenter);		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(47)
	bool tmp9;		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(47)
	if ((tmp8)){
		HX_STACK_LINE(47)
		bool tmp10 = this->alignmentLeft;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(47)
		bool tmp11 = tmp10;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(47)
		bool tmp12 = tmp11;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(47)
		tmp9 = !(tmp12);
	}
	else{
		HX_STACK_LINE(47)
		tmp9 = false;
	}
	HX_STACK_LINE(47)
	if ((tmp9)){
		HX_STACK_LINE(48)
		return true;
	}
	else{
		HX_STACK_LINE(49)
		bool tmp10 = (objXCenter < hostXCenter);		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(49)
		bool tmp11;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(49)
		if ((tmp10)){
			HX_STACK_LINE(49)
			tmp11 = this->alignmentLeft;
		}
		else{
			HX_STACK_LINE(49)
			tmp11 = false;
		}
		HX_STACK_LINE(49)
		if ((tmp11)){
			HX_STACK_LINE(50)
			return true;
		}
	}
	HX_STACK_LINE(51)
	return false;
}


HX_DEFINE_DYNAMIC_FUNC2(PaceAI_obj,headingToWall,return )

Void PaceAI_obj::switchDirections( ::actors::Actor actor){
{
		HX_STACK_FRAME("actors.actorsAI.PaceAI","switchDirections",0x8e555203,"actors.actorsAI.PaceAI.switchDirections","actors/actorsAI/PaceAI.hx",54,0xaf73138b)
		HX_STACK_THIS(this)
		HX_STACK_ARG(actor,"actor")
		HX_STACK_LINE(56)
		bool tmp = this->alignmentLeft;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(56)
		if ((tmp)){
			HX_STACK_LINE(57)
			actor->stopLeft();
			HX_STACK_LINE(58)
			actor->goRight();
			HX_STACK_LINE(59)
			bool tmp1 = this->alignmentLeft;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(59)
			bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(59)
			this->alignmentLeft = tmp2;
		}
		else{
			HX_STACK_LINE(62)
			actor->stopRight();
			HX_STACK_LINE(63)
			actor->goLeft();
			HX_STACK_LINE(64)
			bool tmp1 = this->alignmentLeft;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(64)
			bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(64)
			this->alignmentLeft = tmp2;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(PaceAI_obj,switchDirections,(void))


PaceAI_obj::PaceAI_obj()
{
}

Dynamic PaceAI_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"updateAI") ) { return updateAI_dyn(); }
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

Dynamic PaceAI_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 13:
		if (HX_FIELD_EQ(inName,"alignmentLeft") ) { alignmentLeft=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool PaceAI_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	return false;
}

void PaceAI_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("alignmentLeft","\x8a","\xc4","\x55","\xc2"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsBool,(int)offsetof(PaceAI_obj,alignmentLeft),HX_HCSTRING("alignmentLeft","\x8a","\xc4","\x55","\xc2")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("alignmentLeft","\x8a","\xc4","\x55","\xc2"),
	HX_HCSTRING("updateAI","\x31","\x13","\xfa","\x77"),
	HX_HCSTRING("handleCollision","\xaa","\x4f","\xa6","\xa9"),
	HX_HCSTRING("headingToWall","\x87","\xd1","\x2a","\xc5"),
	HX_HCSTRING("switchDirections","\x68","\x5c","\x13","\x16"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(PaceAI_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(PaceAI_obj::__mClass,"__mClass");
};

#endif

hx::Class PaceAI_obj::__mClass;

void PaceAI_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("actors.actorsAI.PaceAI","\x33","\xbd","\xb1","\x89");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &PaceAI_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< PaceAI_obj >;
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
