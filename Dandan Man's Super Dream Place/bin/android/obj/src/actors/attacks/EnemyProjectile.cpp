#include <hxcpp.h>

#ifndef INCLUDED_actors_Actor
#include <actors/Actor.h>
#endif
#ifndef INCLUDED_actors_ObjectMover
#include <actors/ObjectMover.h>
#endif
#ifndef INCLUDED_actors_attacks_EnemyProjectile
#include <actors/attacks/EnemyProjectile.h>
#endif
#ifndef INCLUDED_actors_attacks_Projectile
#include <actors/attacks/Projectile.h>
#endif
#ifndef INCLUDED_maps_mapobjects_MapObject
#include <maps/mapobjects/MapObject.h>
#endif
#ifndef INCLUDED_openfl_display_Bitmap
#include <openfl/display/Bitmap.h>
#endif
#ifndef INCLUDED_openfl_display_BitmapData
#include <openfl/display/BitmapData.h>
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
#ifndef INCLUDED_openfl_display_PixelSnapping
#include <openfl/display/PixelSnapping.h>
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
namespace attacks{

Void EnemyProjectile_obj::__construct(::openfl::display::Bitmap bitmap,::actors::ObjectMover mover,int duration,int damage)
{
HX_STACK_FRAME("actors.attacks.EnemyProjectile","new",0xbd57eed0,"actors.attacks.EnemyProjectile.new","actors/attacks/EnemyProjectile.hx",12,0x77a5ac22)
HX_STACK_THIS(this)
HX_STACK_ARG(bitmap,"bitmap")
HX_STACK_ARG(mover,"mover")
HX_STACK_ARG(duration,"duration")
HX_STACK_ARG(damage,"damage")
{
	HX_STACK_LINE(13)
	::openfl::display::Bitmap tmp = bitmap;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(13)
	::actors::ObjectMover tmp1 = mover;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(13)
	int tmp2 = duration;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(13)
	int tmp3 = damage;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(13)
	super::__construct(hx::ObjectPtr<OBJ_>(this),tmp,tmp1,tmp2,tmp3);
}
;
	return null();
}

//EnemyProjectile_obj::~EnemyProjectile_obj() { }

Dynamic EnemyProjectile_obj::__CreateEmpty() { return  new EnemyProjectile_obj; }
hx::ObjectPtr< EnemyProjectile_obj > EnemyProjectile_obj::__new(::openfl::display::Bitmap bitmap,::actors::ObjectMover mover,int duration,int damage)
{  hx::ObjectPtr< EnemyProjectile_obj > _result_ = new EnemyProjectile_obj();
	_result_->__construct(bitmap,mover,duration,damage);
	return _result_;}

Dynamic EnemyProjectile_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< EnemyProjectile_obj > _result_ = new EnemyProjectile_obj();
	_result_->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3]);
	return _result_;}

::actors::attacks::Projectile EnemyProjectile_obj::createClone( ){
	HX_STACK_FRAME("actors.attacks.EnemyProjectile","createClone",0x66ce5931,"actors.attacks.EnemyProjectile.createClone","actors/attacks/EnemyProjectile.hx",16,0x77a5ac22)
	HX_STACK_THIS(this)
	HX_STACK_LINE(17)
	::openfl::display::Bitmap tmp = this->baseBmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(17)
	::openfl::display::BitmapData tmp1 = tmp->bitmapData;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(17)
	::openfl::display::Bitmap tmp2 = ::openfl::display::Bitmap_obj::__new(tmp1,null(),null());		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(17)
	::actors::ObjectMover tmp3 = this->projectileMover;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(17)
	::actors::ObjectMover tmp4 = tmp3->copyMover();		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(17)
	int tmp5 = this->duration;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(17)
	int tmp6 = this->damage;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(17)
	::actors::attacks::EnemyProjectile tmp7 = ::actors::attacks::EnemyProjectile_obj::__new(tmp2,tmp4,tmp5,tmp6);		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(17)
	return tmp7;
}



EnemyProjectile_obj::EnemyProjectile_obj()
{
}

Dynamic EnemyProjectile_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 11:
		if (HX_FIELD_EQ(inName,"createClone") ) { return createClone_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("createClone","\xc1","\x4a","\xde","\x71"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(EnemyProjectile_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(EnemyProjectile_obj::__mClass,"__mClass");
};

#endif

hx::Class EnemyProjectile_obj::__mClass;

void EnemyProjectile_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("actors.attacks.EnemyProjectile","\xde","\x86","\xec","\xb3");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< EnemyProjectile_obj >;
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
