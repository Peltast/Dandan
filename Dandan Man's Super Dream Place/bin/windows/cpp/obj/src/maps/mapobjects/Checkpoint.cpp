#include <hxcpp.h>

#ifndef INCLUDED_Main
#include <Main.h>
#endif
#ifndef INCLUDED_actors_Actor
#include <actors/Actor.h>
#endif
#ifndef INCLUDED_actors_Animation
#include <actors/Animation.h>
#endif
#ifndef INCLUDED_actors_ObjectMover
#include <actors/ObjectMover.h>
#endif
#ifndef INCLUDED_haxe_IMap
#include <haxe/IMap.h>
#endif
#ifndef INCLUDED_haxe_ds_StringMap
#include <haxe/ds/StringMap.h>
#endif
#ifndef INCLUDED_maps_mapobjects_Checkpoint
#include <maps/mapobjects/Checkpoint.h>
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
#ifndef INCLUDED_openfl_geom_Point
#include <openfl/geom/Point.h>
#endif
namespace maps{
namespace mapobjects{

Void Checkpoint_obj::__construct(bool active,::openfl::display::Bitmap defaultBitmap)
{
HX_STACK_FRAME("maps.mapobjects.Checkpoint","new",0x3a72f6b9,"maps.mapobjects.Checkpoint.new","maps/mapobjects/Checkpoint.hx",21,0xc2c89137)
HX_STACK_THIS(this)
HX_STACK_ARG(active,"active")
HX_STACK_ARG(defaultBitmap,"defaultBitmap")
{
	HX_STACK_LINE(22)
	this->activated = active;
	HX_STACK_LINE(24)
	int spriteSize = (int)16;		HX_STACK_VAR(spriteSize,"spriteSize");
	HX_STACK_LINE(25)
	::openfl::geom::Point tmp = ::openfl::geom::Point_obj::__new((int)0,(int)0);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(25)
	::openfl::geom::Point tmp1 = ::openfl::geom::Point_obj::__new(null(),null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(25)
	::actors::Animation tmp2 = ::actors::Animation_obj::__new(HX_HCSTRING("Inactive","\x8b","\xd3","\xe1","\x43"),(int)0,tmp,(int)16,(int)16,Array_obj< ::Dynamic >::__new().Add(tmp1),null(),null());		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(25)
	::actors::Animation inactive = tmp2;		HX_STACK_VAR(inactive,"inactive");
	HX_STACK_LINE(26)
	::openfl::geom::Point tmp3 = ::openfl::geom::Point_obj::__new(spriteSize,(int)0);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(26)
	::openfl::geom::Point tmp4 = ::openfl::geom::Point_obj::__new(null(),null());		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(26)
	::actors::Animation tmp5 = ::actors::Animation_obj::__new(HX_HCSTRING("Active","\xe6","\xb5","\xda","\x4a"),(int)0,tmp3,(int)16,(int)16,Array_obj< ::Dynamic >::__new().Add(tmp4),null(),null());		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(26)
	::actors::Animation active1 = tmp5;		HX_STACK_VAR(active1,"active1");
	HX_STACK_LINE(28)
	::haxe::ds::StringMap tmp6;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(28)
	{
		HX_STACK_LINE(28)
		::haxe::ds::StringMap tmp7 = ::haxe::ds::StringMap_obj::__new();		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(28)
		::haxe::ds::StringMap tmp8 = tmp7;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(28)
		tmp6 = tmp8;
	}
	HX_STACK_LINE(28)
	this->animations = tmp6;
	HX_STACK_LINE(29)
	{
		HX_STACK_LINE(29)
		::String tmp7 = inactive->getName();		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(29)
		::String k = tmp7;		HX_STACK_VAR(k,"k");
		HX_STACK_LINE(29)
		::haxe::ds::StringMap tmp8 = this->animations;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(29)
		::String tmp9 = k;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(29)
		::actors::Animation tmp10 = inactive;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(29)
		tmp8->set(tmp9,tmp10);
		HX_STACK_LINE(29)
		inactive;
	}
	HX_STACK_LINE(30)
	{
		HX_STACK_LINE(30)
		::String tmp7 = active1->getName();		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(30)
		::String k = tmp7;		HX_STACK_VAR(k,"k");
		HX_STACK_LINE(30)
		::haxe::ds::StringMap tmp8 = this->animations;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(30)
		::String tmp9 = k;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(30)
		::actors::Animation tmp10 = active1;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(30)
		tmp8->set(tmp9,tmp10);
		HX_STACK_LINE(30)
		active1;
	}
	HX_STACK_LINE(31)
	::actors::Animation tmp7 = this->getAnimation(HX_HCSTRING("Inactive","\x8b","\xd3","\xe1","\x43"));		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(31)
	this->currentAnimation = tmp7;
	HX_STACK_LINE(33)
	::actors::ObjectMover tmp8 = ::actors::ObjectMover_obj::__new((int)0,(int)0,(int)0,(int)0,(int)0,(int)0,(int)0,(int)0,(int)0,null(),null(),null());		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(33)
	::actors::ObjectMover mover = tmp8;		HX_STACK_VAR(mover,"mover");
	HX_STACK_LINE(35)
	::openfl::display::Bitmap tmp9 = ::Main_obj::getBitmapAsset(HX_HCSTRING("assets/checkpoint.png","\x0f","\x6f","\xee","\x50"));		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(35)
	::haxe::ds::StringMap tmp10 = this->animations;		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(35)
	::actors::ObjectMover tmp11 = mover;		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(35)
	int tmp12 = spriteSize;		HX_STACK_VAR(tmp12,"tmp12");
	HX_STACK_LINE(35)
	super::__construct(hx::ObjectPtr<OBJ_>(this),tmp9,false,tmp10,tmp11,tmp12,null());
}
;
	return null();
}

//Checkpoint_obj::~Checkpoint_obj() { }

Dynamic Checkpoint_obj::__CreateEmpty() { return  new Checkpoint_obj; }
hx::ObjectPtr< Checkpoint_obj > Checkpoint_obj::__new(bool active,::openfl::display::Bitmap defaultBitmap)
{  hx::ObjectPtr< Checkpoint_obj > _result_ = new Checkpoint_obj();
	_result_->__construct(active,defaultBitmap);
	return _result_;}

Dynamic Checkpoint_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Checkpoint_obj > _result_ = new Checkpoint_obj();
	_result_->__construct(inArgs[0],inArgs[1]);
	return _result_;}

Void Checkpoint_obj::setActive( ){
{
		HX_STACK_FRAME("maps.mapobjects.Checkpoint","setActive",0x35e3a621,"maps.mapobjects.Checkpoint.setActive","maps/mapobjects/Checkpoint.hx",39,0xc2c89137)
		HX_STACK_THIS(this)
		HX_STACK_LINE(40)
		this->activated = true;
		HX_STACK_LINE(42)
		::actors::Animation tmp = this->getAnimation(HX_HCSTRING("Active","\xe6","\xb5","\xda","\x4a"));		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(42)
		this->currentAnimation = tmp;
		HX_STACK_LINE(43)
		this->removeBmp();
		HX_STACK_LINE(44)
		::actors::Animation tmp1 = this->currentAnimation;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(44)
		this->addAnimationBmp(tmp1);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Checkpoint_obj,setActive,(void))

Void Checkpoint_obj::setInactive( ){
{
		HX_STACK_FRAME("maps.mapobjects.Checkpoint","setInactive",0xb7338886,"maps.mapobjects.Checkpoint.setInactive","maps/mapobjects/Checkpoint.hx",46,0xc2c89137)
		HX_STACK_THIS(this)
		HX_STACK_LINE(47)
		this->activated = false;
		HX_STACK_LINE(49)
		::actors::Animation tmp = this->getAnimation(HX_HCSTRING("Inactive","\x8b","\xd3","\xe1","\x43"));		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(49)
		this->currentAnimation = tmp;
		HX_STACK_LINE(50)
		this->removeBmp();
		HX_STACK_LINE(51)
		::actors::Animation tmp1 = this->currentAnimation;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(51)
		this->addAnimationBmp(tmp1);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Checkpoint_obj,setInactive,(void))

bool Checkpoint_obj::getActive( ){
	HX_STACK_FRAME("maps.mapobjects.Checkpoint","getActive",0x5292ba15,"maps.mapobjects.Checkpoint.getActive","maps/mapobjects/Checkpoint.hx",53,0xc2c89137)
	HX_STACK_THIS(this)
	HX_STACK_LINE(54)
	bool tmp = this->activated;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(54)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(Checkpoint_obj,getActive,return )


Checkpoint_obj::Checkpoint_obj()
{
}

Dynamic Checkpoint_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 9:
		if (HX_FIELD_EQ(inName,"activated") ) { return activated; }
		if (HX_FIELD_EQ(inName,"setActive") ) { return setActive_dyn(); }
		if (HX_FIELD_EQ(inName,"getActive") ) { return getActive_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"setInactive") ) { return setInactive_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Checkpoint_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 9:
		if (HX_FIELD_EQ(inName,"activated") ) { activated=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool Checkpoint_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	return false;
}

void Checkpoint_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("activated","\x51","\x21","\xec","\x10"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsBool,(int)offsetof(Checkpoint_obj,activated),HX_HCSTRING("activated","\x51","\x21","\xec","\x10")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("activated","\x51","\x21","\xec","\x10"),
	HX_HCSTRING("setActive","\x08","\xb7","\xed","\x75"),
	HX_HCSTRING("setInactive","\x2d","\xe1","\x90","\x9a"),
	HX_HCSTRING("getActive","\xfc","\xca","\x9c","\x92"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Checkpoint_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Checkpoint_obj::__mClass,"__mClass");
};

#endif

hx::Class Checkpoint_obj::__mClass;

void Checkpoint_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("maps.mapobjects.Checkpoint","\x47","\x26","\xb9","\x2f");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &Checkpoint_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Checkpoint_obj >;
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

} // end namespace maps
} // end namespace mapobjects
