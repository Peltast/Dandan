#include <hxcpp.h>

#ifndef INCLUDED_actors_Actor
#include <actors/Actor.h>
#endif
#ifndef INCLUDED_actors_attacks_Hitbox
#include <actors/attacks/Hitbox.h>
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
#ifndef INCLUDED_openfl_display_Graphics
#include <openfl/display/Graphics.h>
#endif
#ifndef INCLUDED_openfl_display_IBitmapDrawable
#include <openfl/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_openfl_display_InteractiveObject
#include <openfl/display/InteractiveObject.h>
#endif
#ifndef INCLUDED_openfl_display_Shape
#include <openfl/display/Shape.h>
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

Void Hitbox_obj::__construct(Array< ::Dynamic > hitAreas,int duration)
{
HX_STACK_FRAME("actors.attacks.Hitbox","new",0xef8bc51d,"actors.attacks.Hitbox.new","actors/attacks/Hitbox.hx",17,0x66b273b1)
HX_STACK_THIS(this)
HX_STACK_ARG(hitAreas,"hitAreas")
HX_STACK_ARG(duration,"duration")
{
	HX_STACK_LINE(18)
	super::__construct();
	HX_STACK_LINE(20)
	this->hitAreas = hitAreas;
	HX_STACK_LINE(21)
	this->duration = duration;
	HX_STACK_LINE(22)
	this->counter = (int)0;
	HX_STACK_LINE(24)
	this->drawBoxes();
}
;
	return null();
}

//Hitbox_obj::~Hitbox_obj() { }

Dynamic Hitbox_obj::__CreateEmpty() { return  new Hitbox_obj; }
hx::ObjectPtr< Hitbox_obj > Hitbox_obj::__new(Array< ::Dynamic > hitAreas,int duration)
{  hx::ObjectPtr< Hitbox_obj > _result_ = new Hitbox_obj();
	_result_->__construct(hitAreas,duration);
	return _result_;}

Dynamic Hitbox_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Hitbox_obj > _result_ = new Hitbox_obj();
	_result_->__construct(inArgs[0],inArgs[1]);
	return _result_;}

bool Hitbox_obj::updateHitbox( ){
	HX_STACK_FRAME("actors.attacks.Hitbox","updateHitbox",0x3a0fa024,"actors.attacks.Hitbox.updateHitbox","actors/attacks/Hitbox.hx",27,0x66b273b1)
	HX_STACK_THIS(this)
	HX_STACK_LINE(28)
	int tmp = this->duration;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(28)
	bool tmp1 = (tmp < (int)0);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(28)
	if ((tmp1)){
		HX_STACK_LINE(29)
		return false;
	}
	HX_STACK_LINE(31)
	hx::AddEq(this->counter,(int)1);
	HX_STACK_LINE(33)
	int tmp2 = this->counter;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(33)
	int tmp3 = this->duration;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(33)
	bool tmp4 = (tmp2 >= tmp3);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(33)
	if ((tmp4)){
		HX_STACK_LINE(34)
		this->counter = (int)0;
		HX_STACK_LINE(35)
		return true;
	}
	HX_STACK_LINE(37)
	return false;
}


HX_DEFINE_DYNAMIC_FUNC0(Hitbox_obj,updateHitbox,return )

Void Hitbox_obj::resetHitbox( ){
{
		HX_STACK_FRAME("actors.attacks.Hitbox","resetHitbox",0x49c2ea84,"actors.attacks.Hitbox.resetHitbox","actors/attacks/Hitbox.hx",40,0x66b273b1)
		HX_STACK_THIS(this)
		HX_STACK_LINE(40)
		this->counter = (int)0;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Hitbox_obj,resetHitbox,(void))

bool Hitbox_obj::isHitting( ::actors::Actor host,::actors::Actor actor){
	HX_STACK_FRAME("actors.attacks.Hitbox","isHitting",0xd6a75674,"actors.attacks.Hitbox.isHitting","actors/attacks/Hitbox.hx",43,0x66b273b1)
	HX_STACK_THIS(this)
	HX_STACK_ARG(host,"host")
	HX_STACK_ARG(actor,"actor")
	HX_STACK_LINE(45)
	::openfl::geom::Rectangle hitBound;		HX_STACK_VAR(hitBound,"hitBound");
	HX_STACK_LINE(46)
	{
		HX_STACK_LINE(46)
		int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(46)
		int tmp = this->hitAreas->length;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(46)
		int _g = tmp;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(46)
		while((true)){
			HX_STACK_LINE(46)
			bool tmp1 = (_g1 < _g);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(46)
			bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(46)
			if ((tmp2)){
				HX_STACK_LINE(46)
				break;
			}
			HX_STACK_LINE(46)
			int tmp3 = (_g1)++;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(46)
			int i = tmp3;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(48)
			::openfl::geom::Rectangle tmp4 = this->hitAreas->__get(i).StaticCast< ::openfl::geom::Rectangle >();		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(48)
			Float tmp5 = tmp4->x;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(48)
			Float tmp6 = host->get_x();		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(48)
			Float tmp7 = (tmp5 + tmp6);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(48)
			::openfl::geom::Rectangle tmp8 = this->hitAreas->__get(i).StaticCast< ::openfl::geom::Rectangle >();		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(48)
			Float tmp9 = tmp8->y;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(48)
			Float tmp10 = host->get_y();		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(48)
			Float tmp11 = (tmp9 + tmp10);		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(48)
			::openfl::geom::Rectangle tmp12 = this->hitAreas->__get(i).StaticCast< ::openfl::geom::Rectangle >();		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(48)
			Float tmp13 = tmp12->width;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(48)
			::openfl::geom::Rectangle tmp14 = this->hitAreas->__get(i).StaticCast< ::openfl::geom::Rectangle >();		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(48)
			Float tmp15 = tmp14->height;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(48)
			::openfl::geom::Rectangle tmp16 = ::openfl::geom::Rectangle_obj::__new(tmp7,tmp11,tmp13,tmp15);		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(48)
			hitBound = tmp16;
			HX_STACK_LINE(49)
			::openfl::geom::Rectangle tmp17 = actor->getCollisionBounds();		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(49)
			bool tmp18 = hitBound->intersects(tmp17);		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(49)
			if ((tmp18)){
				HX_STACK_LINE(50)
				return true;
			}
		}
	}
	HX_STACK_LINE(52)
	return false;
}


HX_DEFINE_DYNAMIC_FUNC2(Hitbox_obj,isHitting,return )

Void Hitbox_obj::drawBoxes( ){
{
		HX_STACK_FRAME("actors.attacks.Hitbox","drawBoxes",0x5a09c512,"actors.attacks.Hitbox.drawBoxes","actors/attacks/Hitbox.hx",57,0x66b273b1)
		HX_STACK_THIS(this)
		HX_STACK_LINE(57)
		int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(57)
		int tmp = this->hitAreas->length;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(57)
		int _g = tmp;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(57)
		while((true)){
			HX_STACK_LINE(57)
			bool tmp1 = (_g1 < _g);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(57)
			bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(57)
			if ((tmp2)){
				HX_STACK_LINE(57)
				break;
			}
			HX_STACK_LINE(57)
			int tmp3 = (_g1)++;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(57)
			int i = tmp3;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(58)
			::openfl::display::Shape tmp4 = ::openfl::display::Shape_obj::__new();		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(58)
			::openfl::display::Shape box = tmp4;		HX_STACK_VAR(box,"box");
			HX_STACK_LINE(59)
			::openfl::display::Graphics tmp5 = box->get_graphics();		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(59)
			tmp5->beginFill((int)5592405,((Float).5));
			HX_STACK_LINE(60)
			::openfl::display::Graphics tmp6 = box->get_graphics();		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(60)
			::openfl::geom::Rectangle tmp7 = this->hitAreas->__get(i).StaticCast< ::openfl::geom::Rectangle >();		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(60)
			Float tmp8 = tmp7->x;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(60)
			::openfl::geom::Rectangle tmp9 = this->hitAreas->__get(i).StaticCast< ::openfl::geom::Rectangle >();		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(60)
			Float tmp10 = tmp9->y;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(60)
			::openfl::geom::Rectangle tmp11 = this->hitAreas->__get(i).StaticCast< ::openfl::geom::Rectangle >();		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(60)
			Float tmp12 = tmp11->width;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(60)
			::openfl::geom::Rectangle tmp13 = this->hitAreas->__get(i).StaticCast< ::openfl::geom::Rectangle >();		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(60)
			Float tmp14 = tmp13->height;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(60)
			tmp6->drawRect(tmp8,tmp10,tmp12,tmp14);
			HX_STACK_LINE(61)
			::openfl::display::Graphics tmp15 = box->get_graphics();		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(61)
			tmp15->endFill();
			HX_STACK_LINE(62)
			::openfl::display::Shape tmp16 = box;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(62)
			this->addChild(tmp16);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Hitbox_obj,drawBoxes,(void))


Hitbox_obj::Hitbox_obj()
{
}

void Hitbox_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Hitbox);
	HX_MARK_MEMBER_NAME(hitAreas,"hitAreas");
	HX_MARK_MEMBER_NAME(duration,"duration");
	HX_MARK_MEMBER_NAME(counter,"counter");
	::openfl::display::Sprite_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void Hitbox_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(hitAreas,"hitAreas");
	HX_VISIT_MEMBER_NAME(duration,"duration");
	HX_VISIT_MEMBER_NAME(counter,"counter");
	::openfl::display::Sprite_obj::__Visit(HX_VISIT_ARG);
}

Dynamic Hitbox_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"counter") ) { return counter; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"hitAreas") ) { return hitAreas; }
		if (HX_FIELD_EQ(inName,"duration") ) { return duration; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"isHitting") ) { return isHitting_dyn(); }
		if (HX_FIELD_EQ(inName,"drawBoxes") ) { return drawBoxes_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"resetHitbox") ) { return resetHitbox_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"updateHitbox") ) { return updateHitbox_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Hitbox_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"counter") ) { counter=inValue.Cast< int >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"hitAreas") ) { hitAreas=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"duration") ) { duration=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool Hitbox_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	return false;
}

void Hitbox_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("hitAreas","\xf3","\xec","\xe4","\x64"));
	outFields->push(HX_HCSTRING("duration","\x54","\x0f","\x8e","\x14"));
	outFields->push(HX_HCSTRING("counter","\xfc","\xae","\x59","\x1d"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(Hitbox_obj,hitAreas),HX_HCSTRING("hitAreas","\xf3","\xec","\xe4","\x64")},
	{hx::fsInt,(int)offsetof(Hitbox_obj,duration),HX_HCSTRING("duration","\x54","\x0f","\x8e","\x14")},
	{hx::fsInt,(int)offsetof(Hitbox_obj,counter),HX_HCSTRING("counter","\xfc","\xae","\x59","\x1d")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("hitAreas","\xf3","\xec","\xe4","\x64"),
	HX_HCSTRING("duration","\x54","\x0f","\x8e","\x14"),
	HX_HCSTRING("counter","\xfc","\xae","\x59","\x1d"),
	HX_HCSTRING("updateHitbox","\x81","\x94","\xeb","\x56"),
	HX_HCSTRING("resetHitbox","\xc7","\x70","\x3c","\xf7"),
	HX_HCSTRING("isHitting","\xf7","\xb5","\xa7","\xfb"),
	HX_HCSTRING("drawBoxes","\x95","\x24","\x0a","\x7f"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Hitbox_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Hitbox_obj::__mClass,"__mClass");
};

#endif

hx::Class Hitbox_obj::__mClass;

void Hitbox_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("actors.attacks.Hitbox","\xab","\xf2","\x69","\x7a");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &Hitbox_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Hitbox_obj >;
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
