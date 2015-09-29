#include <hxcpp.h>

#include "hxMath.h"
#ifndef INCLUDED_maps_MapObject
#include <maps/MapObject.h>
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
#ifndef INCLUDED_openfl_errors_Error
#include <openfl/errors/Error.h>
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

Void MapObject_obj::__construct(::maps::MapObject implementation,::openfl::display::Bitmap defaultBmp,hx::Null< bool >  __o_passable)
{
HX_STACK_FRAME("maps.MapObject","new",0x72b82876,"maps.MapObject.new","maps/MapObject.hx",26,0x4c01953b)
HX_STACK_THIS(this)
HX_STACK_ARG(implementation,"implementation")
HX_STACK_ARG(defaultBmp,"defaultBmp")
HX_STACK_ARG(__o_passable,"passable")
bool passable = __o_passable.Default(true);
{
	HX_STACK_LINE(27)
	super::__construct();
	HX_STACK_LINE(29)
	bool tmp = (hx::ObjectPtr<OBJ_>(this) != implementation);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(29)
	if ((tmp)){
		HX_STACK_LINE(29)
		::openfl::errors::Error tmp1 = ::openfl::errors::Error_obj::__new(HX_HCSTRING("MapObject is meant to be used as an abstract class.","\x86","\xf5","\xfc","\x7b"),null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(29)
		HX_STACK_DO_THROW(tmp1);
	}
	HX_STACK_LINE(31)
	this->defaultBitmap = defaultBmp;
	HX_STACK_LINE(32)
	this->passable = passable;
	HX_STACK_LINE(34)
	::openfl::display::Bitmap tmp1 = this->defaultBitmap;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(34)
	this->addChild(tmp1);
}
;
	return null();
}

//MapObject_obj::~MapObject_obj() { }

Dynamic MapObject_obj::__CreateEmpty() { return  new MapObject_obj; }
hx::ObjectPtr< MapObject_obj > MapObject_obj::__new(::maps::MapObject implementation,::openfl::display::Bitmap defaultBmp,hx::Null< bool >  __o_passable)
{  hx::ObjectPtr< MapObject_obj > _result_ = new MapObject_obj();
	_result_->__construct(implementation,defaultBmp,__o_passable);
	return _result_;}

Dynamic MapObject_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< MapObject_obj > _result_ = new MapObject_obj();
	_result_->__construct(inArgs[0],inArgs[1],inArgs[2]);
	return _result_;}

bool MapObject_obj::getPassable( ){
	HX_STACK_FRAME("maps.MapObject","getPassable",0xf36aafb7,"maps.MapObject.getPassable","maps/MapObject.hx",38,0x4c01953b)
	HX_STACK_THIS(this)
	HX_STACK_LINE(39)
	bool tmp = this->passable;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(39)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(MapObject_obj,getPassable,return )

bool MapObject_obj::checkCollision( ::maps::MapObject otherObject){
	HX_STACK_FRAME("maps.MapObject","checkCollision",0x562faa34,"maps.MapObject.checkCollision","maps/MapObject.hx",42,0x4c01953b)
	HX_STACK_THIS(this)
	HX_STACK_ARG(otherObject,"otherObject")
	HX_STACK_LINE(44)
	Float tmp = this->get_x();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(44)
	Float tmp1 = this->get_y();		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(44)
	Float tmp2 = this->get_width();		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(44)
	Float tmp3 = this->get_height();		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(44)
	::openfl::geom::Rectangle tmp4 = ::openfl::geom::Rectangle_obj::__new(tmp,tmp1,tmp2,tmp3);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(44)
	this->objectBounds = tmp4;
	HX_STACK_LINE(45)
	Float tmp5 = otherObject->get_x();		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(45)
	Float tmp6 = otherObject->get_y();		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(45)
	Float tmp7 = otherObject->get_width();		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(45)
	Float tmp8 = otherObject->get_height();		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(45)
	::openfl::geom::Rectangle tmp9 = ::openfl::geom::Rectangle_obj::__new(tmp5,tmp6,tmp7,tmp8);		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(45)
	this->collideBounds = tmp9;
	HX_STACK_LINE(47)
	::openfl::geom::Rectangle tmp10 = this->objectBounds;		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(47)
	::openfl::geom::Rectangle tmp11 = this->collideBounds;		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(47)
	bool tmp12 = tmp10->intersects(tmp11);		HX_STACK_VAR(tmp12,"tmp12");
	HX_STACK_LINE(47)
	if ((tmp12)){
		HX_STACK_LINE(48)
		return true;
	}
	else{
		HX_STACK_LINE(50)
		return false;
	}
	HX_STACK_LINE(47)
	return false;
}


HX_DEFINE_DYNAMIC_FUNC1(MapObject_obj,checkCollision,return )

int MapObject_obj::getCollisionDistance( ::maps::MapObject otherObject,bool xAxis){
	HX_STACK_FRAME("maps.MapObject","getCollisionDistance",0xfa931f7b,"maps.MapObject.getCollisionDistance","maps/MapObject.hx",53,0x4c01953b)
	HX_STACK_THIS(this)
	HX_STACK_ARG(otherObject,"otherObject")
	HX_STACK_ARG(xAxis,"xAxis")
	HX_STACK_LINE(55)
	Float tmp = this->get_x();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(55)
	Float tmp1 = this->get_width();		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(55)
	Float tmp2 = (Float(tmp1) / Float((int)2));		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(55)
	Float tmp3 = (tmp + tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(55)
	Float tmp4 = this->get_y();		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(55)
	Float tmp5 = this->get_height();		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(55)
	Float tmp6 = (Float(tmp5) / Float((int)2));		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(55)
	Float tmp7 = (tmp4 + tmp6);		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(55)
	::openfl::geom::Point tmp8 = ::openfl::geom::Point_obj::__new(tmp3,tmp7);		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(55)
	this->thisCenter = tmp8;
	HX_STACK_LINE(56)
	Float tmp9 = otherObject->get_x();		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(56)
	Float tmp10 = otherObject->get_width();		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(56)
	Float tmp11 = (Float(tmp10) / Float((int)2));		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(56)
	Float tmp12 = (tmp9 + tmp11);		HX_STACK_VAR(tmp12,"tmp12");
	HX_STACK_LINE(56)
	Float tmp13 = otherObject->get_y();		HX_STACK_VAR(tmp13,"tmp13");
	HX_STACK_LINE(56)
	Float tmp14 = otherObject->get_height();		HX_STACK_VAR(tmp14,"tmp14");
	HX_STACK_LINE(56)
	Float tmp15 = (Float(tmp14) / Float((int)2));		HX_STACK_VAR(tmp15,"tmp15");
	HX_STACK_LINE(56)
	Float tmp16 = (tmp13 + tmp15);		HX_STACK_VAR(tmp16,"tmp16");
	HX_STACK_LINE(56)
	::openfl::geom::Point tmp17 = ::openfl::geom::Point_obj::__new(tmp12,tmp16);		HX_STACK_VAR(tmp17,"tmp17");
	HX_STACK_LINE(56)
	this->otherCenter = tmp17;
	HX_STACK_LINE(58)
	Float distance = (int)0;		HX_STACK_VAR(distance,"distance");
	HX_STACK_LINE(60)
	bool tmp18 = xAxis;		HX_STACK_VAR(tmp18,"tmp18");
	HX_STACK_LINE(60)
	if ((tmp18)){
		HX_STACK_LINE(61)
		::openfl::geom::Point tmp19 = this->thisCenter;		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(61)
		Float tmp20 = tmp19->x;		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(61)
		::openfl::geom::Point tmp21 = this->otherCenter;		HX_STACK_VAR(tmp21,"tmp21");
		HX_STACK_LINE(61)
		Float tmp22 = tmp21->x;		HX_STACK_VAR(tmp22,"tmp22");
		HX_STACK_LINE(61)
		Float tmp23 = (tmp20 - tmp22);		HX_STACK_VAR(tmp23,"tmp23");
		HX_STACK_LINE(61)
		bool tmp24 = (tmp23 >= (int)0);		HX_STACK_VAR(tmp24,"tmp24");
		HX_STACK_LINE(61)
		if ((tmp24)){
			HX_STACK_LINE(62)
			Float tmp25 = this->get_x();		HX_STACK_VAR(tmp25,"tmp25");
			HX_STACK_LINE(62)
			Float tmp26 = otherObject->get_x();		HX_STACK_VAR(tmp26,"tmp26");
			HX_STACK_LINE(62)
			Float tmp27 = otherObject->get_width();		HX_STACK_VAR(tmp27,"tmp27");
			HX_STACK_LINE(62)
			Float tmp28 = (tmp26 + tmp27);		HX_STACK_VAR(tmp28,"tmp28");
			HX_STACK_LINE(62)
			Float tmp29 = (tmp25 - tmp28);		HX_STACK_VAR(tmp29,"tmp29");
			HX_STACK_LINE(62)
			distance = tmp29;
		}
		else{
			HX_STACK_LINE(63)
			::openfl::geom::Point tmp25 = this->thisCenter;		HX_STACK_VAR(tmp25,"tmp25");
			HX_STACK_LINE(63)
			Float tmp26 = tmp25->x;		HX_STACK_VAR(tmp26,"tmp26");
			HX_STACK_LINE(63)
			::openfl::geom::Point tmp27 = this->otherCenter;		HX_STACK_VAR(tmp27,"tmp27");
			HX_STACK_LINE(63)
			Float tmp28 = tmp27->x;		HX_STACK_VAR(tmp28,"tmp28");
			HX_STACK_LINE(63)
			Float tmp29 = (tmp26 - tmp28);		HX_STACK_VAR(tmp29,"tmp29");
			HX_STACK_LINE(63)
			bool tmp30 = (tmp29 < (int)0);		HX_STACK_VAR(tmp30,"tmp30");
			HX_STACK_LINE(63)
			if ((tmp30)){
				HX_STACK_LINE(64)
				Float tmp31 = this->get_x();		HX_STACK_VAR(tmp31,"tmp31");
				HX_STACK_LINE(64)
				Float tmp32 = this->get_width();		HX_STACK_VAR(tmp32,"tmp32");
				HX_STACK_LINE(64)
				Float tmp33 = (tmp31 + tmp32);		HX_STACK_VAR(tmp33,"tmp33");
				HX_STACK_LINE(64)
				Float tmp34 = otherObject->get_x();		HX_STACK_VAR(tmp34,"tmp34");
				HX_STACK_LINE(64)
				Float tmp35 = (tmp33 - tmp34);		HX_STACK_VAR(tmp35,"tmp35");
				HX_STACK_LINE(64)
				distance = tmp35;
			}
		}
	}
	else{
		HX_STACK_LINE(67)
		::openfl::geom::Point tmp19 = this->thisCenter;		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(67)
		Float tmp20 = tmp19->y;		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(67)
		::openfl::geom::Point tmp21 = this->otherCenter;		HX_STACK_VAR(tmp21,"tmp21");
		HX_STACK_LINE(67)
		Float tmp22 = tmp21->y;		HX_STACK_VAR(tmp22,"tmp22");
		HX_STACK_LINE(67)
		Float tmp23 = (tmp20 - tmp22);		HX_STACK_VAR(tmp23,"tmp23");
		HX_STACK_LINE(67)
		bool tmp24 = (tmp23 >= (int)0);		HX_STACK_VAR(tmp24,"tmp24");
		HX_STACK_LINE(67)
		if ((tmp24)){
			HX_STACK_LINE(68)
			Float tmp25 = this->get_y();		HX_STACK_VAR(tmp25,"tmp25");
			HX_STACK_LINE(68)
			Float tmp26 = otherObject->get_y();		HX_STACK_VAR(tmp26,"tmp26");
			HX_STACK_LINE(68)
			Float tmp27 = otherObject->get_height();		HX_STACK_VAR(tmp27,"tmp27");
			HX_STACK_LINE(68)
			Float tmp28 = (tmp26 + tmp27);		HX_STACK_VAR(tmp28,"tmp28");
			HX_STACK_LINE(68)
			Float tmp29 = (tmp25 - tmp28);		HX_STACK_VAR(tmp29,"tmp29");
			HX_STACK_LINE(68)
			distance = tmp29;
		}
		else{
			HX_STACK_LINE(69)
			::openfl::geom::Point tmp25 = this->thisCenter;		HX_STACK_VAR(tmp25,"tmp25");
			HX_STACK_LINE(69)
			Float tmp26 = tmp25->y;		HX_STACK_VAR(tmp26,"tmp26");
			HX_STACK_LINE(69)
			::openfl::geom::Point tmp27 = this->otherCenter;		HX_STACK_VAR(tmp27,"tmp27");
			HX_STACK_LINE(69)
			Float tmp28 = tmp27->y;		HX_STACK_VAR(tmp28,"tmp28");
			HX_STACK_LINE(69)
			Float tmp29 = (tmp26 - tmp28);		HX_STACK_VAR(tmp29,"tmp29");
			HX_STACK_LINE(69)
			bool tmp30 = (tmp29 < (int)0);		HX_STACK_VAR(tmp30,"tmp30");
			HX_STACK_LINE(69)
			if ((tmp30)){
				HX_STACK_LINE(70)
				Float tmp31 = this->get_y();		HX_STACK_VAR(tmp31,"tmp31");
				HX_STACK_LINE(70)
				Float tmp32 = this->get_height();		HX_STACK_VAR(tmp32,"tmp32");
				HX_STACK_LINE(70)
				Float tmp33 = (tmp31 + tmp32);		HX_STACK_VAR(tmp33,"tmp33");
				HX_STACK_LINE(70)
				Float tmp34 = otherObject->get_y();		HX_STACK_VAR(tmp34,"tmp34");
				HX_STACK_LINE(70)
				Float tmp35 = (tmp33 - tmp34);		HX_STACK_VAR(tmp35,"tmp35");
				HX_STACK_LINE(70)
				distance = tmp35;
			}
		}
	}
	HX_STACK_LINE(73)
	Float tmp19 = distance;		HX_STACK_VAR(tmp19,"tmp19");
	HX_STACK_LINE(73)
	int tmp20 = ::Math_obj::round(tmp19);		HX_STACK_VAR(tmp20,"tmp20");
	HX_STACK_LINE(73)
	return tmp20;
}


HX_DEFINE_DYNAMIC_FUNC2(MapObject_obj,getCollisionDistance,return )


MapObject_obj::MapObject_obj()
{
}

void MapObject_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(MapObject);
	HX_MARK_MEMBER_NAME(objectBounds,"objectBounds");
	HX_MARK_MEMBER_NAME(collideBounds,"collideBounds");
	HX_MARK_MEMBER_NAME(thisCenter,"thisCenter");
	HX_MARK_MEMBER_NAME(otherCenter,"otherCenter");
	HX_MARK_MEMBER_NAME(passable,"passable");
	HX_MARK_MEMBER_NAME(defaultBitmap,"defaultBitmap");
	::openfl::display::Sprite_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void MapObject_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(objectBounds,"objectBounds");
	HX_VISIT_MEMBER_NAME(collideBounds,"collideBounds");
	HX_VISIT_MEMBER_NAME(thisCenter,"thisCenter");
	HX_VISIT_MEMBER_NAME(otherCenter,"otherCenter");
	HX_VISIT_MEMBER_NAME(passable,"passable");
	HX_VISIT_MEMBER_NAME(defaultBitmap,"defaultBitmap");
	::openfl::display::Sprite_obj::__Visit(HX_VISIT_ARG);
}

Dynamic MapObject_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"passable") ) { return passable; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"thisCenter") ) { return thisCenter; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"otherCenter") ) { return otherCenter; }
		if (HX_FIELD_EQ(inName,"getPassable") ) { return getPassable_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"objectBounds") ) { return objectBounds; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"collideBounds") ) { return collideBounds; }
		if (HX_FIELD_EQ(inName,"defaultBitmap") ) { return defaultBitmap; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"checkCollision") ) { return checkCollision_dyn(); }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"getCollisionDistance") ) { return getCollisionDistance_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic MapObject_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"passable") ) { passable=inValue.Cast< bool >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"thisCenter") ) { thisCenter=inValue.Cast< ::openfl::geom::Point >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"otherCenter") ) { otherCenter=inValue.Cast< ::openfl::geom::Point >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"objectBounds") ) { objectBounds=inValue.Cast< ::openfl::geom::Rectangle >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"collideBounds") ) { collideBounds=inValue.Cast< ::openfl::geom::Rectangle >(); return inValue; }
		if (HX_FIELD_EQ(inName,"defaultBitmap") ) { defaultBitmap=inValue.Cast< ::openfl::display::Bitmap >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool MapObject_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	return false;
}

void MapObject_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("objectBounds","\x94","\x92","\x27","\x40"));
	outFields->push(HX_HCSTRING("collideBounds","\x93","\x5c","\x13","\xd8"));
	outFields->push(HX_HCSTRING("thisCenter","\xd3","\xba","\x15","\x32"));
	outFields->push(HX_HCSTRING("otherCenter","\xc5","\xfc","\x26","\x04"));
	outFields->push(HX_HCSTRING("passable","\xeb","\x8e","\x3b","\x3a"));
	outFields->push(HX_HCSTRING("defaultBitmap","\x90","\xe3","\x84","\xeb"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::openfl::geom::Rectangle*/ ,(int)offsetof(MapObject_obj,objectBounds),HX_HCSTRING("objectBounds","\x94","\x92","\x27","\x40")},
	{hx::fsObject /*::openfl::geom::Rectangle*/ ,(int)offsetof(MapObject_obj,collideBounds),HX_HCSTRING("collideBounds","\x93","\x5c","\x13","\xd8")},
	{hx::fsObject /*::openfl::geom::Point*/ ,(int)offsetof(MapObject_obj,thisCenter),HX_HCSTRING("thisCenter","\xd3","\xba","\x15","\x32")},
	{hx::fsObject /*::openfl::geom::Point*/ ,(int)offsetof(MapObject_obj,otherCenter),HX_HCSTRING("otherCenter","\xc5","\xfc","\x26","\x04")},
	{hx::fsBool,(int)offsetof(MapObject_obj,passable),HX_HCSTRING("passable","\xeb","\x8e","\x3b","\x3a")},
	{hx::fsObject /*::openfl::display::Bitmap*/ ,(int)offsetof(MapObject_obj,defaultBitmap),HX_HCSTRING("defaultBitmap","\x90","\xe3","\x84","\xeb")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("objectBounds","\x94","\x92","\x27","\x40"),
	HX_HCSTRING("collideBounds","\x93","\x5c","\x13","\xd8"),
	HX_HCSTRING("thisCenter","\xd3","\xba","\x15","\x32"),
	HX_HCSTRING("otherCenter","\xc5","\xfc","\x26","\x04"),
	HX_HCSTRING("passable","\xeb","\x8e","\x3b","\x3a"),
	HX_HCSTRING("defaultBitmap","\x90","\xe3","\x84","\xeb"),
	HX_HCSTRING("getPassable","\xa1","\x51","\x2f","\x60"),
	HX_HCSTRING("checkCollision","\x8a","\x96","\xf1","\x41"),
	HX_HCSTRING("getCollisionDistance","\x51","\xf0","\xc3","\x6e"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(MapObject_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(MapObject_obj::__mClass,"__mClass");
};

#endif

hx::Class MapObject_obj::__mClass;

void MapObject_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("maps.MapObject","\x84","\x75","\xb9","\x20");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &MapObject_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< MapObject_obj >;
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
