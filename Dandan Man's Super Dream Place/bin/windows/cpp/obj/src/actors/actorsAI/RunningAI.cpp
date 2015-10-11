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
#ifndef INCLUDED_actors_actorsAI_RunningAI
#include <actors/actorsAI/RunningAI.h>
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

Void RunningAI_obj::__construct()
{
HX_STACK_FRAME("actors.actorsAI.RunningAI","new",0x35b31961,"actors.actorsAI.RunningAI.new","actors/actorsAI/RunningAI.hx",22,0x912fb50f)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(23)
	super::__construct(hx::ObjectPtr<OBJ_>(this));
	HX_STACK_LINE(25)
	this->alignmentLeft = true;
	HX_STACK_LINE(26)
	this->runDistance = (int)96;
	HX_STACK_LINE(27)
	this->runInterval = (int)30;
	HX_STACK_LINE(28)
	this->runTimer = (int)0;
}
;
	return null();
}

//RunningAI_obj::~RunningAI_obj() { }

Dynamic RunningAI_obj::__CreateEmpty() { return  new RunningAI_obj; }
hx::ObjectPtr< RunningAI_obj > RunningAI_obj::__new()
{  hx::ObjectPtr< RunningAI_obj > _result_ = new RunningAI_obj();
	_result_->__construct();
	return _result_;}

Dynamic RunningAI_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< RunningAI_obj > _result_ = new RunningAI_obj();
	_result_->__construct();
	return _result_;}

Void RunningAI_obj::updateAI( ::actors::Actor actor,::actors::ObjectMover mover){
{
		HX_STACK_FRAME("actors.actorsAI.RunningAI","updateAI",0xdded8690,"actors.actorsAI.RunningAI.updateAI","actors/actorsAI/RunningAI.hx",32,0x912fb50f)
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
		bool tmp2 = this->isRunning;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(35)
		if ((tmp2)){
			HX_STACK_LINE(36)
			::actors::Actor tmp3 = actor;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(36)
			this->updateRun(tmp3);
			HX_STACK_LINE(37)
			return null();
		}
		HX_STACK_LINE(40)
		hx::AddEq(this->runTimer,(int)1);
		HX_STACK_LINE(41)
		int tmp3 = this->runTimer;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(41)
		int tmp4 = this->runInterval;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(41)
		bool tmp5 = (tmp3 >= tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(41)
		if ((tmp5)){
			HX_STACK_LINE(42)
			::actors::Actor tmp6 = actor;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(42)
			this->startRun(tmp6);
		}
	}
return null();
}


Void RunningAI_obj::updateRun( ::actors::Actor actor){
{
		HX_STACK_FRAME("actors.actorsAI.RunningAI","updateRun",0x51f54483,"actors.actorsAI.RunningAI.updateRun","actors/actorsAI/RunningAI.hx",47,0x912fb50f)
		HX_STACK_THIS(this)
		HX_STACK_ARG(actor,"actor")
		HX_STACK_LINE(48)
		int tmp = this->startPosition;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(48)
		Float tmp1 = actor->get_x();		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(48)
		Float tmp2 = (tmp - tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(48)
		Float tmp3 = ::Math_obj::abs(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(48)
		int tmp4 = this->runDistance;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(48)
		bool tmp5 = (tmp3 > tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(48)
		if ((tmp5)){
			HX_STACK_LINE(49)
			::actors::Actor tmp6 = actor;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(49)
			this->stopRun(tmp6);
		}
		HX_STACK_LINE(52)
		::maps::AreaMap tmp6 = actor->getCurrentMap();		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(52)
		::actors::Actor tmp7 = actor;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(52)
		Array< ::Dynamic > aiCollisions = tmp6->checkCollisions(tmp7,true);		HX_STACK_VAR(aiCollisions,"aiCollisions");
		HX_STACK_LINE(53)
		bool tmp8 = (aiCollisions->length > (int)0);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(53)
		if ((tmp8)){
			HX_STACK_LINE(54)
			::maps::mapobjects::MapObject tmp9 = aiCollisions->__get((int)0).StaticCast< ::maps::mapobjects::MapObject >();		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(54)
			::actors::Actor tmp10 = actor;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(54)
			bool tmp11 = this->headingToWall(tmp9,tmp10);		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(54)
			if ((tmp11)){
				HX_STACK_LINE(55)
				::actors::Actor tmp12 = actor;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(55)
				this->stopRun(tmp12);
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(RunningAI_obj,updateRun,(void))

Void RunningAI_obj::handleCollision( ::maps::mapobjects::MapObject collider,::actors::Actor host,bool horizontal){
{
		HX_STACK_FRAME("actors.actorsAI.RunningAI","handleCollision",0x1b0f962b,"actors.actorsAI.RunningAI.handleCollision","actors/actorsAI/RunningAI.hx",59,0x912fb50f)
		HX_STACK_THIS(this)
		HX_STACK_ARG(collider,"collider")
		HX_STACK_ARG(host,"host")
		HX_STACK_ARG(horizontal,"horizontal")
		HX_STACK_LINE(60)
		bool tmp = horizontal;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(60)
		if ((tmp)){
			HX_STACK_LINE(61)
			::actors::Actor tmp1 = host;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(61)
			this->stopRun(tmp1);
		}
	}
return null();
}


Void RunningAI_obj::startRun( ::actors::Actor actor){
{
		HX_STACK_FRAME("actors.actorsAI.RunningAI","startRun",0xa88e0768,"actors.actorsAI.RunningAI.startRun","actors/actorsAI/RunningAI.hx",66,0x912fb50f)
		HX_STACK_THIS(this)
		HX_STACK_ARG(actor,"actor")
		HX_STACK_LINE(67)
		Float tmp = actor->get_x();		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(67)
		int tmp1 = ::Math_obj::round(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(67)
		this->startPosition = tmp1;
		HX_STACK_LINE(68)
		this->isRunning = true;
		HX_STACK_LINE(69)
		this->runTimer = (int)0;
		HX_STACK_LINE(71)
		bool tmp2 = this->alignmentLeft;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(71)
		if ((tmp2)){
			HX_STACK_LINE(72)
			actor->goLeft();
		}
		else{
			HX_STACK_LINE(74)
			actor->goRight();
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(RunningAI_obj,startRun,(void))

Void RunningAI_obj::stopRun( ::actors::Actor actor){
{
		HX_STACK_FRAME("actors.actorsAI.RunningAI","stopRun",0xe7e979ea,"actors.actorsAI.RunningAI.stopRun","actors/actorsAI/RunningAI.hx",76,0x912fb50f)
		HX_STACK_THIS(this)
		HX_STACK_ARG(actor,"actor")
		HX_STACK_LINE(77)
		this->isRunning = false;
		HX_STACK_LINE(78)
		actor->stopLeft();
		HX_STACK_LINE(79)
		actor->stopRight();
		HX_STACK_LINE(80)
		this->runTimer = (int)0;
		HX_STACK_LINE(81)
		bool tmp = this->alignmentLeft;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(81)
		bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(81)
		this->alignmentLeft = tmp1;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(RunningAI_obj,stopRun,(void))

bool RunningAI_obj::headingToWall( ::maps::mapobjects::MapObject object,::actors::Actor host){
	HX_STACK_FRAME("actors.actorsAI.RunningAI","headingToWall",0xf4bdc5c8,"actors.actorsAI.RunningAI.headingToWall","actors/actorsAI/RunningAI.hx",84,0x912fb50f)
	HX_STACK_THIS(this)
	HX_STACK_ARG(object,"object")
	HX_STACK_ARG(host,"host")
	HX_STACK_LINE(85)
	Float tmp = object->get_x();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(85)
	Float tmp1 = object->get_width();		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(85)
	Float tmp2 = (Float(tmp1) / Float((int)2));		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(85)
	Float tmp3 = (tmp + tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(85)
	Float objXCenter = tmp3;		HX_STACK_VAR(objXCenter,"objXCenter");
	HX_STACK_LINE(86)
	Float tmp4 = host->get_x();		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(86)
	Float tmp5 = host->get_width();		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(86)
	Float tmp6 = (Float(tmp5) / Float((int)2));		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(86)
	Float tmp7 = (tmp4 + tmp6);		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(86)
	Float hostXCenter = tmp7;		HX_STACK_VAR(hostXCenter,"hostXCenter");
	HX_STACK_LINE(88)
	bool tmp8 = (objXCenter >= hostXCenter);		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(88)
	bool tmp9;		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(88)
	if ((tmp8)){
		HX_STACK_LINE(88)
		bool tmp10 = this->alignmentLeft;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(88)
		bool tmp11 = tmp10;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(88)
		bool tmp12 = tmp11;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(88)
		tmp9 = !(tmp12);
	}
	else{
		HX_STACK_LINE(88)
		tmp9 = false;
	}
	HX_STACK_LINE(88)
	if ((tmp9)){
		HX_STACK_LINE(89)
		return true;
	}
	else{
		HX_STACK_LINE(90)
		bool tmp10 = (objXCenter < hostXCenter);		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(90)
		bool tmp11;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(90)
		if ((tmp10)){
			HX_STACK_LINE(90)
			tmp11 = this->alignmentLeft;
		}
		else{
			HX_STACK_LINE(90)
			tmp11 = false;
		}
		HX_STACK_LINE(90)
		if ((tmp11)){
			HX_STACK_LINE(91)
			return true;
		}
	}
	HX_STACK_LINE(92)
	return false;
}


HX_DEFINE_DYNAMIC_FUNC2(RunningAI_obj,headingToWall,return )


RunningAI_obj::RunningAI_obj()
{
}

Dynamic RunningAI_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"stopRun") ) { return stopRun_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"runTimer") ) { return runTimer; }
		if (HX_FIELD_EQ(inName,"updateAI") ) { return updateAI_dyn(); }
		if (HX_FIELD_EQ(inName,"startRun") ) { return startRun_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"isRunning") ) { return isRunning; }
		if (HX_FIELD_EQ(inName,"updateRun") ) { return updateRun_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"runDistance") ) { return runDistance; }
		if (HX_FIELD_EQ(inName,"runInterval") ) { return runInterval; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"alignmentLeft") ) { return alignmentLeft; }
		if (HX_FIELD_EQ(inName,"startPosition") ) { return startPosition; }
		if (HX_FIELD_EQ(inName,"headingToWall") ) { return headingToWall_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"handleCollision") ) { return handleCollision_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic RunningAI_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"runTimer") ) { runTimer=inValue.Cast< int >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"isRunning") ) { isRunning=inValue.Cast< bool >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"runDistance") ) { runDistance=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"runInterval") ) { runInterval=inValue.Cast< int >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"alignmentLeft") ) { alignmentLeft=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"startPosition") ) { startPosition=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool RunningAI_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	return false;
}

void RunningAI_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("alignmentLeft","\x8a","\xc4","\x55","\xc2"));
	outFields->push(HX_HCSTRING("isRunning","\x35","\xeb","\x67","\xef"));
	outFields->push(HX_HCSTRING("startPosition","\x2b","\x03","\xb6","\xcf"));
	outFields->push(HX_HCSTRING("runDistance","\xa0","\xf9","\x7a","\x2e"));
	outFields->push(HX_HCSTRING("runInterval","\xb0","\xdf","\xfd","\xea"));
	outFields->push(HX_HCSTRING("runTimer","\x7a","\xf8","\x6a","\x18"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsBool,(int)offsetof(RunningAI_obj,alignmentLeft),HX_HCSTRING("alignmentLeft","\x8a","\xc4","\x55","\xc2")},
	{hx::fsBool,(int)offsetof(RunningAI_obj,isRunning),HX_HCSTRING("isRunning","\x35","\xeb","\x67","\xef")},
	{hx::fsInt,(int)offsetof(RunningAI_obj,startPosition),HX_HCSTRING("startPosition","\x2b","\x03","\xb6","\xcf")},
	{hx::fsInt,(int)offsetof(RunningAI_obj,runDistance),HX_HCSTRING("runDistance","\xa0","\xf9","\x7a","\x2e")},
	{hx::fsInt,(int)offsetof(RunningAI_obj,runInterval),HX_HCSTRING("runInterval","\xb0","\xdf","\xfd","\xea")},
	{hx::fsInt,(int)offsetof(RunningAI_obj,runTimer),HX_HCSTRING("runTimer","\x7a","\xf8","\x6a","\x18")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("alignmentLeft","\x8a","\xc4","\x55","\xc2"),
	HX_HCSTRING("isRunning","\x35","\xeb","\x67","\xef"),
	HX_HCSTRING("startPosition","\x2b","\x03","\xb6","\xcf"),
	HX_HCSTRING("runDistance","\xa0","\xf9","\x7a","\x2e"),
	HX_HCSTRING("runInterval","\xb0","\xdf","\xfd","\xea"),
	HX_HCSTRING("runTimer","\x7a","\xf8","\x6a","\x18"),
	HX_HCSTRING("updateAI","\x31","\x13","\xfa","\x77"),
	HX_HCSTRING("updateRun","\xc2","\xc4","\xe3","\x82"),
	HX_HCSTRING("handleCollision","\xaa","\x4f","\xa6","\xa9"),
	HX_HCSTRING("startRun","\x09","\x94","\x9a","\x42"),
	HX_HCSTRING("stopRun","\x69","\x1c","\x4b","\x43"),
	HX_HCSTRING("headingToWall","\x87","\xd1","\x2a","\xc5"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(RunningAI_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(RunningAI_obj::__mClass,"__mClass");
};

#endif

hx::Class RunningAI_obj::__mClass;

void RunningAI_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("actors.actorsAI.RunningAI","\xef","\xd4","\x38","\x8b");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &RunningAI_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< RunningAI_obj >;
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
