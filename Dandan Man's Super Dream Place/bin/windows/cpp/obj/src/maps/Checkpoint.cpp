#include <hxcpp.h>

#ifndef INCLUDED_Main
#include <Main.h>
#endif
#ifndef INCLUDED_actors_Animation
#include <actors/Animation.h>
#endif
#ifndef INCLUDED_haxe_IMap
#include <haxe/IMap.h>
#endif
#ifndef INCLUDED_haxe_ds_StringMap
#include <haxe/ds/StringMap.h>
#endif
#ifndef INCLUDED_maps_Checkpoint
#include <maps/Checkpoint.h>
#endif
#ifndef INCLUDED_maps_MapObject
#include <maps/MapObject.h>
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
#ifndef INCLUDED_openfl_geom_Point
#include <openfl/geom/Point.h>
#endif
#ifndef INCLUDED_openfl_geom_Rectangle
#include <openfl/geom/Rectangle.h>
#endif
namespace maps{

Void Checkpoint_obj::__construct(bool active,::openfl::display::Bitmap defaultBitmap)
{
HX_STACK_FRAME("maps.Checkpoint","new",0x21718fd1,"maps.Checkpoint.new","maps/Checkpoint.hx",24,0x45b2681e)
HX_STACK_THIS(this)
HX_STACK_ARG(active,"active")
HX_STACK_ARG(defaultBitmap,"defaultBitmap")
{
	HX_STACK_LINE(25)
	::openfl::display::Bitmap tmp = defaultBitmap;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(25)
	super::__construct(hx::ObjectPtr<OBJ_>(this),tmp,false);
	HX_STACK_LINE(27)
	this->activated = active;
	HX_STACK_LINE(28)
	::haxe::ds::StringMap tmp1;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(28)
	{
		HX_STACK_LINE(28)
		::haxe::ds::StringMap tmp2 = ::haxe::ds::StringMap_obj::__new();		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(28)
		::haxe::ds::StringMap tmp3 = tmp2;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(28)
		tmp1 = tmp3;
	}
	HX_STACK_LINE(28)
	this->animations = tmp1;
	HX_STACK_LINE(30)
	int spriteSize = (int)16;		HX_STACK_VAR(spriteSize,"spriteSize");
	HX_STACK_LINE(31)
	::openfl::geom::Point tmp2 = ::openfl::geom::Point_obj::__new((int)0,(int)0);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(31)
	::openfl::geom::Point tmp3 = ::openfl::geom::Point_obj::__new(null(),null());		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(31)
	::actors::Animation tmp4 = ::actors::Animation_obj::__new(HX_HCSTRING("Inactive","\x8b","\xd3","\xe1","\x43"),(int)0,tmp2,(int)16,(int)16,Array_obj< ::Dynamic >::__new().Add(tmp3));		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(31)
	::actors::Animation inactive = tmp4;		HX_STACK_VAR(inactive,"inactive");
	HX_STACK_LINE(32)
	::openfl::geom::Point tmp5 = ::openfl::geom::Point_obj::__new(spriteSize,(int)0);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(32)
	::openfl::geom::Point tmp6 = ::openfl::geom::Point_obj::__new(null(),null());		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(32)
	::actors::Animation tmp7 = ::actors::Animation_obj::__new(HX_HCSTRING("Active","\xe6","\xb5","\xda","\x4a"),(int)0,tmp5,(int)16,(int)16,Array_obj< ::Dynamic >::__new().Add(tmp6));		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(32)
	::actors::Animation active1 = tmp7;		HX_STACK_VAR(active1,"active1");
	HX_STACK_LINE(34)
	{
		HX_STACK_LINE(34)
		::String tmp8 = inactive->getName();		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(34)
		::String k = tmp8;		HX_STACK_VAR(k,"k");
		HX_STACK_LINE(34)
		::haxe::ds::StringMap tmp9 = this->animations;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(34)
		::String tmp10 = k;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(34)
		::actors::Animation tmp11 = inactive;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(34)
		tmp9->set(tmp10,tmp11);
		HX_STACK_LINE(34)
		inactive;
	}
	HX_STACK_LINE(35)
	{
		HX_STACK_LINE(35)
		::String tmp8 = active1->getName();		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(35)
		::String k = tmp8;		HX_STACK_VAR(k,"k");
		HX_STACK_LINE(35)
		::haxe::ds::StringMap tmp9 = this->animations;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(35)
		::String tmp10 = k;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(35)
		::actors::Animation tmp11 = active1;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(35)
		tmp9->set(tmp10,tmp11);
		HX_STACK_LINE(35)
		active1;
	}
	HX_STACK_LINE(37)
	this->currentAnimation = inactive;
	HX_STACK_LINE(38)
	::actors::Animation tmp8 = this->currentAnimation;		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(38)
	::openfl::display::Bitmap tmp9 = ::Main_obj::getBitmapAsset(HX_HCSTRING("assets/checkpoint.png","\x0f","\x6f","\xee","\x50"));		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(38)
	::openfl::display::Bitmap tmp10 = this->getAnimationBmp(tmp8,tmp9);		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(38)
	this->checkpointBmp = tmp10;
	HX_STACK_LINE(39)
	::openfl::display::Bitmap tmp11 = this->checkpointBmp;		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(39)
	this->addChild(tmp11);
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

Void Checkpoint_obj::removeBmp( ){
{
		HX_STACK_FRAME("maps.Checkpoint","removeBmp",0xfe564492,"maps.Checkpoint.removeBmp","maps/Checkpoint.hx",43,0x45b2681e)
		HX_STACK_THIS(this)
		HX_STACK_LINE(44)
		::openfl::display::Bitmap tmp = this->checkpointBmp;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(44)
		bool tmp1 = this->contains(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(44)
		if ((tmp1)){
			HX_STACK_LINE(45)
			::openfl::display::Bitmap tmp2 = this->checkpointBmp;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(45)
			this->removeChild(tmp2);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Checkpoint_obj,removeBmp,(void))

Void Checkpoint_obj::addAnimationBmp( ::actors::Animation animation){
{
		HX_STACK_FRAME("maps.Checkpoint","addAnimationBmp",0x70a8d053,"maps.Checkpoint.addAnimationBmp","maps/Checkpoint.hx",47,0x45b2681e)
		HX_STACK_THIS(this)
		HX_STACK_ARG(animation,"animation")
		HX_STACK_LINE(49)
		::actors::Animation tmp = this->currentAnimation;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(49)
		::openfl::display::Bitmap tmp1 = ::Main_obj::getBitmapAsset(HX_HCSTRING("assets/checkpoint.png","\x0f","\x6f","\xee","\x50"));		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(49)
		::openfl::display::Bitmap tmp2 = this->getAnimationBmp(tmp,tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(49)
		this->checkpointBmp = tmp2;
		HX_STACK_LINE(50)
		::openfl::display::Bitmap tmp3 = this->checkpointBmp;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(50)
		this->addChild(tmp3);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Checkpoint_obj,addAnimationBmp,(void))

::openfl::display::Bitmap Checkpoint_obj::getAnimationBmp( ::actors::Animation animation,::openfl::display::Bitmap bitmap){
	HX_STACK_FRAME("maps.Checkpoint","getAnimationBmp",0x0d43ba48,"maps.Checkpoint.getAnimationBmp","maps/Checkpoint.hx",53,0x45b2681e)
	HX_STACK_THIS(this)
	HX_STACK_ARG(animation,"animation")
	HX_STACK_ARG(bitmap,"bitmap")
	HX_STACK_LINE(55)
	::openfl::geom::Rectangle tmp = animation->getRectangle();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(55)
	::openfl::geom::Rectangle frame = tmp;		HX_STACK_VAR(frame,"frame");
	HX_STACK_LINE(56)
	::openfl::display::BitmapData tmp1 = ::openfl::display::BitmapData_obj::__new((int)16,(int)16,null(),null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(56)
	::openfl::display::Bitmap tmp2 = ::openfl::display::Bitmap_obj::__new(tmp1,null(),null());		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(56)
	::openfl::display::Bitmap animationBmp = tmp2;		HX_STACK_VAR(animationBmp,"animationBmp");
	HX_STACK_LINE(57)
	::openfl::display::BitmapData tmp3 = bitmap->bitmapData;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(57)
	::openfl::geom::Rectangle tmp4 = frame;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(57)
	::openfl::geom::Point tmp5 = ::openfl::geom::Point_obj::__new(null(),null());		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(57)
	animationBmp->bitmapData->copyPixels(tmp3,tmp4,tmp5,null(),null(),null());
	HX_STACK_LINE(59)
	::openfl::display::Bitmap tmp6 = animationBmp;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(59)
	return tmp6;
}


HX_DEFINE_DYNAMIC_FUNC2(Checkpoint_obj,getAnimationBmp,return )

Void Checkpoint_obj::setActive( ){
{
		HX_STACK_FRAME("maps.Checkpoint","setActive",0xa95e2139,"maps.Checkpoint.setActive","maps/Checkpoint.hx",68,0x45b2681e)
		HX_STACK_THIS(this)
		HX_STACK_LINE(69)
		this->activated = true;
		HX_STACK_LINE(71)
		::actors::Animation tmp = this->getAnimation(HX_HCSTRING("Active","\xe6","\xb5","\xda","\x4a"));		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(71)
		this->currentAnimation = tmp;
		HX_STACK_LINE(72)
		this->removeBmp();
		HX_STACK_LINE(73)
		::actors::Animation tmp1 = this->currentAnimation;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(73)
		this->addAnimationBmp(tmp1);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Checkpoint_obj,setActive,(void))

Void Checkpoint_obj::setInactive( ){
{
		HX_STACK_FRAME("maps.Checkpoint","setInactive",0xda94f99e,"maps.Checkpoint.setInactive","maps/Checkpoint.hx",75,0x45b2681e)
		HX_STACK_THIS(this)
		HX_STACK_LINE(76)
		this->activated = false;
		HX_STACK_LINE(78)
		::actors::Animation tmp = this->getAnimation(HX_HCSTRING("Inactive","\x8b","\xd3","\xe1","\x43"));		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(78)
		this->currentAnimation = tmp;
		HX_STACK_LINE(79)
		this->removeBmp();
		HX_STACK_LINE(80)
		::actors::Animation tmp1 = this->currentAnimation;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(80)
		this->addAnimationBmp(tmp1);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Checkpoint_obj,setInactive,(void))

bool Checkpoint_obj::getActive( ){
	HX_STACK_FRAME("maps.Checkpoint","getActive",0xc60d352d,"maps.Checkpoint.getActive","maps/Checkpoint.hx",82,0x45b2681e)
	HX_STACK_THIS(this)
	HX_STACK_LINE(83)
	bool tmp = this->activated;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(83)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(Checkpoint_obj,getActive,return )

::actors::Animation Checkpoint_obj::getAnimation( ::String title){
	HX_STACK_FRAME("maps.Checkpoint","getAnimation",0x1e1cd5fd,"maps.Checkpoint.getAnimation","maps/Checkpoint.hx",86,0x45b2681e)
	HX_STACK_THIS(this)
	HX_STACK_ARG(title,"title")
	HX_STACK_LINE(87)
	::haxe::ds::StringMap tmp = this->animations;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(87)
	::String tmp1 = title;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(87)
	::actors::Animation tmp2 = tmp->get(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(87)
	::actors::Animation tmp3 = tmp2;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(87)
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC1(Checkpoint_obj,getAnimation,return )


Checkpoint_obj::Checkpoint_obj()
{
}

void Checkpoint_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Checkpoint);
	HX_MARK_MEMBER_NAME(activated,"activated");
	HX_MARK_MEMBER_NAME(animations,"animations");
	HX_MARK_MEMBER_NAME(currentAnimation,"currentAnimation");
	HX_MARK_MEMBER_NAME(checkpointBmp,"checkpointBmp");
	::maps::MapObject_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void Checkpoint_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(activated,"activated");
	HX_VISIT_MEMBER_NAME(animations,"animations");
	HX_VISIT_MEMBER_NAME(currentAnimation,"currentAnimation");
	HX_VISIT_MEMBER_NAME(checkpointBmp,"checkpointBmp");
	::maps::MapObject_obj::__Visit(HX_VISIT_ARG);
}

Dynamic Checkpoint_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 9:
		if (HX_FIELD_EQ(inName,"activated") ) { return activated; }
		if (HX_FIELD_EQ(inName,"removeBmp") ) { return removeBmp_dyn(); }
		if (HX_FIELD_EQ(inName,"setActive") ) { return setActive_dyn(); }
		if (HX_FIELD_EQ(inName,"getActive") ) { return getActive_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"animations") ) { return animations; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"setInactive") ) { return setInactive_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"getAnimation") ) { return getAnimation_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"checkpointBmp") ) { return checkpointBmp; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"addAnimationBmp") ) { return addAnimationBmp_dyn(); }
		if (HX_FIELD_EQ(inName,"getAnimationBmp") ) { return getAnimationBmp_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"currentAnimation") ) { return currentAnimation; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Checkpoint_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 9:
		if (HX_FIELD_EQ(inName,"activated") ) { activated=inValue.Cast< bool >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"animations") ) { animations=inValue.Cast< ::haxe::ds::StringMap >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"checkpointBmp") ) { checkpointBmp=inValue.Cast< ::openfl::display::Bitmap >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"currentAnimation") ) { currentAnimation=inValue.Cast< ::actors::Animation >(); return inValue; }
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
	outFields->push(HX_HCSTRING("animations","\xef","\x34","\x1c","\x83"));
	outFields->push(HX_HCSTRING("currentAnimation","\x8b","\x63","\x65","\x3e"));
	outFields->push(HX_HCSTRING("checkpointBmp","\x9d","\xf2","\xf4","\xba"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsBool,(int)offsetof(Checkpoint_obj,activated),HX_HCSTRING("activated","\x51","\x21","\xec","\x10")},
	{hx::fsObject /*::haxe::ds::StringMap*/ ,(int)offsetof(Checkpoint_obj,animations),HX_HCSTRING("animations","\xef","\x34","\x1c","\x83")},
	{hx::fsObject /*::actors::Animation*/ ,(int)offsetof(Checkpoint_obj,currentAnimation),HX_HCSTRING("currentAnimation","\x8b","\x63","\x65","\x3e")},
	{hx::fsObject /*::openfl::display::Bitmap*/ ,(int)offsetof(Checkpoint_obj,checkpointBmp),HX_HCSTRING("checkpointBmp","\x9d","\xf2","\xf4","\xba")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("activated","\x51","\x21","\xec","\x10"),
	HX_HCSTRING("animations","\xef","\x34","\x1c","\x83"),
	HX_HCSTRING("currentAnimation","\x8b","\x63","\x65","\x3e"),
	HX_HCSTRING("checkpointBmp","\x9d","\xf2","\xf4","\xba"),
	HX_HCSTRING("removeBmp","\x61","\xda","\xe5","\xca"),
	HX_HCSTRING("addAnimationBmp","\x62","\x2b","\x71","\x30"),
	HX_HCSTRING("getAnimationBmp","\x57","\x15","\x0c","\xcd"),
	HX_HCSTRING("setActive","\x08","\xb7","\xed","\x75"),
	HX_HCSTRING("setInactive","\x2d","\xe1","\x90","\x9a"),
	HX_HCSTRING("getActive","\xfc","\xca","\x9c","\x92"),
	HX_HCSTRING("getAnimation","\x8e","\x8b","\x8b","\x5a"),
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
	__mClass->mName = HX_HCSTRING("maps.Checkpoint","\x5f","\x53","\xff","\xa1");
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
