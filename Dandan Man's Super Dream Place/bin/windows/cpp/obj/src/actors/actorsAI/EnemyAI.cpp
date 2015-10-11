#include <hxcpp.h>

#ifndef INCLUDED_actors_Actor
#include <actors/Actor.h>
#endif
#ifndef INCLUDED_actors_ObjectMover
#include <actors/ObjectMover.h>
#endif
#ifndef INCLUDED_actors_actorsAI_EnemyAI
#include <actors/actorsAI/EnemyAI.h>
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
namespace actorsAI{

Void EnemyAI_obj::__construct(::actors::actorsAI::EnemyAI implementation)
{
HX_STACK_FRAME("actors.actorsAI.EnemyAI","new",0x4297786a,"actors.actorsAI.EnemyAI.new","actors/actorsAI/EnemyAI.hx",14,0xe1d21226)
HX_STACK_THIS(this)
HX_STACK_ARG(implementation,"implementation")
{
	HX_STACK_LINE(15)
	bool tmp = (hx::ObjectPtr<OBJ_>(this) != implementation);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(15)
	if ((tmp)){
		HX_STACK_LINE(15)
		::openfl::errors::Error tmp1 = ::openfl::errors::Error_obj::__new(HX_HCSTRING("Actor is meant to be used as an abstract class.","\x80","\xba","\x8c","\x11"),null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(15)
		HX_STACK_DO_THROW(tmp1);
	}
}
;
	return null();
}

//EnemyAI_obj::~EnemyAI_obj() { }

Dynamic EnemyAI_obj::__CreateEmpty() { return  new EnemyAI_obj; }
hx::ObjectPtr< EnemyAI_obj > EnemyAI_obj::__new(::actors::actorsAI::EnemyAI implementation)
{  hx::ObjectPtr< EnemyAI_obj > _result_ = new EnemyAI_obj();
	_result_->__construct(implementation);
	return _result_;}

Dynamic EnemyAI_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< EnemyAI_obj > _result_ = new EnemyAI_obj();
	_result_->__construct(inArgs[0]);
	return _result_;}

Void EnemyAI_obj::updateAI( ::actors::Actor actor,::actors::ObjectMover mover){
{
		HX_STACK_FRAME("actors.actorsAI.EnemyAI","updateAI",0x170706e7,"actors.actorsAI.EnemyAI.updateAI","actors/actorsAI/EnemyAI.hx",20,0xe1d21226)
		HX_STACK_THIS(this)
		HX_STACK_ARG(actor,"actor")
		HX_STACK_ARG(mover,"mover")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(EnemyAI_obj,updateAI,(void))

Void EnemyAI_obj::handleCollision( ::maps::mapobjects::MapObject collider,::actors::Actor host,bool horizontal){
{
		HX_STACK_FRAME("actors.actorsAI.EnemyAI","handleCollision",0xd04adeb4,"actors.actorsAI.EnemyAI.handleCollision","actors/actorsAI/EnemyAI.hx",24,0xe1d21226)
		HX_STACK_THIS(this)
		HX_STACK_ARG(collider,"collider")
		HX_STACK_ARG(host,"host")
		HX_STACK_ARG(horizontal,"horizontal")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(EnemyAI_obj,handleCollision,(void))


EnemyAI_obj::EnemyAI_obj()
{
}

Dynamic EnemyAI_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"updateAI") ) { return updateAI_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"handleCollision") ) { return handleCollision_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("updateAI","\x31","\x13","\xfa","\x77"),
	HX_HCSTRING("handleCollision","\xaa","\x4f","\xa6","\xa9"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(EnemyAI_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(EnemyAI_obj::__mClass,"__mClass");
};

#endif

hx::Class EnemyAI_obj::__mClass;

void EnemyAI_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("actors.actorsAI.EnemyAI","\x78","\xbb","\x4c","\x87");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< EnemyAI_obj >;
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
