#include <hxcpp.h>

#include "hxMath.h"
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
namespace mapobjects{

Void MapObject_obj::__construct(::maps::mapobjects::MapObject implementation,::openfl::display::Bitmap defaultBmp,hx::Null< bool >  __o_passable)
{
HX_STACK_FRAME("maps.mapobjects.MapObject","new",0xe6c7168e,"maps.mapobjects.MapObject.new","maps/mapobjects/MapObject.hx",27,0xc640d242)
HX_STACK_THIS(this)
HX_STACK_ARG(implementation,"implementation")
HX_STACK_ARG(defaultBmp,"defaultBmp")
HX_STACK_ARG(__o_passable,"passable")
bool passable = __o_passable.Default(true);
{
	HX_STACK_LINE(28)
	super::__construct();
	HX_STACK_LINE(30)
	bool tmp = (hx::ObjectPtr<OBJ_>(this) != implementation);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(30)
	if ((tmp)){
		HX_STACK_LINE(30)
		::openfl::errors::Error tmp1 = ::openfl::errors::Error_obj::__new(HX_HCSTRING("MapObject is meant to be used as an abstract class.","\x86","\xf5","\xfc","\x7b"),null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(30)
		HX_STACK_DO_THROW(tmp1);
	}
	HX_STACK_LINE(32)
	this->defaultBitmap = defaultBmp;
	HX_STACK_LINE(33)
	this->passable = passable;
	HX_STACK_LINE(35)
	::openfl::display::Bitmap tmp1 = this->defaultBitmap;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(35)
	this->addChild(tmp1);
	HX_STACK_LINE(36)
	Float tmp2 = this->get_x();		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(36)
	Float tmp3 = this->get_y();		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(36)
	Float tmp4 = this->get_width();		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(36)
	Float tmp5 = this->get_height();		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(36)
	::openfl::geom::Rectangle tmp6 = ::openfl::geom::Rectangle_obj::__new(tmp2,tmp3,tmp4,tmp5);		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(36)
	this->collisionBounds = tmp6;
}
;
	return null();
}

//MapObject_obj::~MapObject_obj() { }

Dynamic MapObject_obj::__CreateEmpty() { return  new MapObject_obj; }
hx::ObjectPtr< MapObject_obj > MapObject_obj::__new(::maps::mapobjects::MapObject implementation,::openfl::display::Bitmap defaultBmp,hx::Null< bool >  __o_passable)
{  hx::ObjectPtr< MapObject_obj > _result_ = new MapObject_obj();
	_result_->__construct(implementation,defaultBmp,__o_passable);
	return _result_;}

Dynamic MapObject_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< MapObject_obj > _result_ = new MapObject_obj();
	_result_->__construct(inArgs[0],inArgs[1],inArgs[2]);
	return _result_;}

bool MapObject_obj::getPassable( ){
	HX_STACK_FRAME("maps.mapobjects.MapObject","getPassable",0x5bb975cf,"maps.mapobjects.MapObject.getPassable","maps/mapobjects/MapObject.hx",39,0xc640d242)
	HX_STACK_THIS(this)
	HX_STACK_LINE(40)
	bool tmp = this->passable;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(40)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(MapObject_obj,getPassable,return )

bool MapObject_obj::checkCollision( ::maps::mapobjects::MapObject otherObject,hx::Null< bool >  __o_checkPassable){
bool checkPassable = __o_checkPassable.Default(true);
	HX_STACK_FRAME("maps.mapobjects.MapObject","checkCollision",0x82bdc31c,"maps.mapobjects.MapObject.checkCollision","maps/mapobjects/MapObject.hx",43,0xc640d242)
	HX_STACK_THIS(this)
	HX_STACK_ARG(otherObject,"otherObject")
	HX_STACK_ARG(checkPassable,"checkPassable")
{
		HX_STACK_LINE(44)
		bool tmp = this->passable;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(44)
		bool tmp1 = tmp;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(44)
		bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(44)
		bool tmp3;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(44)
		if ((tmp2)){
			HX_STACK_LINE(44)
			tmp3 = checkPassable;
		}
		else{
			HX_STACK_LINE(44)
			tmp3 = false;
		}
		HX_STACK_LINE(44)
		if ((tmp3)){
			HX_STACK_LINE(44)
			return false;
		}
		HX_STACK_LINE(46)
		::openfl::geom::Rectangle tmp4 = this->getCollisionBounds();		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(46)
		this->tempObjectBounds = tmp4;
		HX_STACK_LINE(47)
		::openfl::geom::Rectangle tmp5 = otherObject->getCollisionBounds();		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(47)
		this->tempCollideBounds = tmp5;
		HX_STACK_LINE(49)
		::openfl::geom::Rectangle tmp6 = this->tempObjectBounds;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(49)
		::openfl::geom::Rectangle tmp7 = this->tempCollideBounds;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(49)
		bool tmp8 = tmp6->intersects(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(49)
		if ((tmp8)){
			HX_STACK_LINE(50)
			return true;
		}
		else{
			HX_STACK_LINE(52)
			return false;
		}
		HX_STACK_LINE(49)
		return false;
	}
}


HX_DEFINE_DYNAMIC_FUNC2(MapObject_obj,checkCollision,return )

::openfl::geom::Rectangle MapObject_obj::getCollisionBounds( ){
	HX_STACK_FRAME("maps.mapobjects.MapObject","getCollisionBounds",0x33820223,"maps.mapobjects.MapObject.getCollisionBounds","maps/mapobjects/MapObject.hx",55,0xc640d242)
	HX_STACK_THIS(this)
	HX_STACK_LINE(56)
	Float tmp = this->get_x();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(56)
	::openfl::geom::Rectangle tmp1 = this->collisionBounds;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(56)
	Float tmp2 = tmp1->x;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(56)
	Float tmp3 = (tmp + tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(56)
	Float tmp4 = this->get_y();		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(56)
	::openfl::geom::Rectangle tmp5 = this->collisionBounds;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(56)
	Float tmp6 = tmp5->y;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(56)
	Float tmp7 = (tmp4 + tmp6);		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(56)
	::openfl::geom::Rectangle tmp8 = this->collisionBounds;		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(56)
	Float tmp9 = tmp8->width;		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(56)
	::openfl::geom::Rectangle tmp10 = this->collisionBounds;		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(56)
	Float tmp11 = tmp10->height;		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(56)
	::openfl::geom::Rectangle tmp12 = ::openfl::geom::Rectangle_obj::__new(tmp3,tmp7,tmp9,tmp11);		HX_STACK_VAR(tmp12,"tmp12");
	HX_STACK_LINE(56)
	return tmp12;
}


HX_DEFINE_DYNAMIC_FUNC0(MapObject_obj,getCollisionBounds,return )

int MapObject_obj::getCollisionDistance( ::maps::mapobjects::MapObject otherObject,bool xAxis){
	HX_STACK_FRAME("maps.mapobjects.MapObject","getCollisionDistance",0xb836d663,"maps.mapobjects.MapObject.getCollisionDistance","maps/mapobjects/MapObject.hx",59,0xc640d242)
	HX_STACK_THIS(this)
	HX_STACK_ARG(otherObject,"otherObject")
	HX_STACK_ARG(xAxis,"xAxis")
	HX_STACK_LINE(61)
	::openfl::geom::Rectangle tmp = this->getCollisionBounds();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(61)
	this->tempObjectBounds = tmp;
	HX_STACK_LINE(62)
	::openfl::geom::Rectangle tmp1 = otherObject->getCollisionBounds();		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(62)
	this->tempCollideBounds = tmp1;
	HX_STACK_LINE(63)
	::openfl::geom::Rectangle tmp2 = this->tempObjectBounds;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(63)
	Float tmp3 = tmp2->x;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(63)
	::openfl::geom::Rectangle tmp4 = this->tempObjectBounds;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(63)
	Float tmp5 = tmp4->width;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(63)
	Float tmp6 = (Float(tmp5) / Float((int)2));		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(63)
	Float tmp7 = (tmp3 + tmp6);		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(63)
	::openfl::geom::Rectangle tmp8 = this->tempObjectBounds;		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(63)
	Float tmp9 = tmp8->y;		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(63)
	::openfl::geom::Rectangle tmp10 = this->tempObjectBounds;		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(63)
	Float tmp11 = tmp10->height;		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(63)
	Float tmp12 = (Float(tmp11) / Float((int)2));		HX_STACK_VAR(tmp12,"tmp12");
	HX_STACK_LINE(63)
	Float tmp13 = (tmp9 + tmp12);		HX_STACK_VAR(tmp13,"tmp13");
	HX_STACK_LINE(63)
	::openfl::geom::Point tmp14 = ::openfl::geom::Point_obj::__new(tmp7,tmp13);		HX_STACK_VAR(tmp14,"tmp14");
	HX_STACK_LINE(63)
	this->thisCenter = tmp14;
	HX_STACK_LINE(64)
	::openfl::geom::Rectangle tmp15 = this->tempCollideBounds;		HX_STACK_VAR(tmp15,"tmp15");
	HX_STACK_LINE(64)
	Float tmp16 = tmp15->x;		HX_STACK_VAR(tmp16,"tmp16");
	HX_STACK_LINE(64)
	::openfl::geom::Rectangle tmp17 = this->tempCollideBounds;		HX_STACK_VAR(tmp17,"tmp17");
	HX_STACK_LINE(64)
	Float tmp18 = tmp17->width;		HX_STACK_VAR(tmp18,"tmp18");
	HX_STACK_LINE(64)
	Float tmp19 = (Float(tmp18) / Float((int)2));		HX_STACK_VAR(tmp19,"tmp19");
	HX_STACK_LINE(64)
	Float tmp20 = (tmp16 + tmp19);		HX_STACK_VAR(tmp20,"tmp20");
	HX_STACK_LINE(64)
	::openfl::geom::Rectangle tmp21 = this->tempCollideBounds;		HX_STACK_VAR(tmp21,"tmp21");
	HX_STACK_LINE(64)
	Float tmp22 = tmp21->y;		HX_STACK_VAR(tmp22,"tmp22");
	HX_STACK_LINE(64)
	::openfl::geom::Rectangle tmp23 = this->tempCollideBounds;		HX_STACK_VAR(tmp23,"tmp23");
	HX_STACK_LINE(64)
	Float tmp24 = tmp23->height;		HX_STACK_VAR(tmp24,"tmp24");
	HX_STACK_LINE(64)
	Float tmp25 = (Float(tmp24) / Float((int)2));		HX_STACK_VAR(tmp25,"tmp25");
	HX_STACK_LINE(64)
	Float tmp26 = (tmp22 + tmp25);		HX_STACK_VAR(tmp26,"tmp26");
	HX_STACK_LINE(64)
	::openfl::geom::Point tmp27 = ::openfl::geom::Point_obj::__new(tmp20,tmp26);		HX_STACK_VAR(tmp27,"tmp27");
	HX_STACK_LINE(64)
	this->otherCenter = tmp27;
	HX_STACK_LINE(66)
	Float distance = (int)0;		HX_STACK_VAR(distance,"distance");
	HX_STACK_LINE(68)
	bool tmp28 = xAxis;		HX_STACK_VAR(tmp28,"tmp28");
	HX_STACK_LINE(68)
	if ((tmp28)){
		HX_STACK_LINE(69)
		::openfl::geom::Point tmp29 = this->thisCenter;		HX_STACK_VAR(tmp29,"tmp29");
		HX_STACK_LINE(69)
		Float tmp30 = tmp29->x;		HX_STACK_VAR(tmp30,"tmp30");
		HX_STACK_LINE(69)
		::openfl::geom::Point tmp31 = this->otherCenter;		HX_STACK_VAR(tmp31,"tmp31");
		HX_STACK_LINE(69)
		Float tmp32 = tmp31->x;		HX_STACK_VAR(tmp32,"tmp32");
		HX_STACK_LINE(69)
		Float tmp33 = (tmp30 - tmp32);		HX_STACK_VAR(tmp33,"tmp33");
		HX_STACK_LINE(69)
		bool tmp34 = (tmp33 >= (int)0);		HX_STACK_VAR(tmp34,"tmp34");
		HX_STACK_LINE(69)
		if ((tmp34)){
			HX_STACK_LINE(70)
			::openfl::geom::Rectangle tmp35 = this->tempObjectBounds;		HX_STACK_VAR(tmp35,"tmp35");
			HX_STACK_LINE(70)
			Float tmp36 = tmp35->x;		HX_STACK_VAR(tmp36,"tmp36");
			HX_STACK_LINE(70)
			::openfl::geom::Rectangle tmp37 = this->tempCollideBounds;		HX_STACK_VAR(tmp37,"tmp37");
			HX_STACK_LINE(70)
			Float tmp38 = tmp37->x;		HX_STACK_VAR(tmp38,"tmp38");
			HX_STACK_LINE(70)
			::openfl::geom::Rectangle tmp39 = this->tempCollideBounds;		HX_STACK_VAR(tmp39,"tmp39");
			HX_STACK_LINE(70)
			Float tmp40 = tmp39->width;		HX_STACK_VAR(tmp40,"tmp40");
			HX_STACK_LINE(70)
			Float tmp41 = (tmp38 + tmp40);		HX_STACK_VAR(tmp41,"tmp41");
			HX_STACK_LINE(70)
			Float tmp42 = (tmp36 - tmp41);		HX_STACK_VAR(tmp42,"tmp42");
			HX_STACK_LINE(70)
			distance = tmp42;
		}
		else{
			HX_STACK_LINE(71)
			::openfl::geom::Point tmp35 = this->thisCenter;		HX_STACK_VAR(tmp35,"tmp35");
			HX_STACK_LINE(71)
			Float tmp36 = tmp35->x;		HX_STACK_VAR(tmp36,"tmp36");
			HX_STACK_LINE(71)
			::openfl::geom::Point tmp37 = this->otherCenter;		HX_STACK_VAR(tmp37,"tmp37");
			HX_STACK_LINE(71)
			Float tmp38 = tmp37->x;		HX_STACK_VAR(tmp38,"tmp38");
			HX_STACK_LINE(71)
			Float tmp39 = (tmp36 - tmp38);		HX_STACK_VAR(tmp39,"tmp39");
			HX_STACK_LINE(71)
			bool tmp40 = (tmp39 < (int)0);		HX_STACK_VAR(tmp40,"tmp40");
			HX_STACK_LINE(71)
			if ((tmp40)){
				HX_STACK_LINE(72)
				::openfl::geom::Rectangle tmp41 = this->tempObjectBounds;		HX_STACK_VAR(tmp41,"tmp41");
				HX_STACK_LINE(72)
				Float tmp42 = tmp41->x;		HX_STACK_VAR(tmp42,"tmp42");
				HX_STACK_LINE(72)
				::openfl::geom::Rectangle tmp43 = this->tempObjectBounds;		HX_STACK_VAR(tmp43,"tmp43");
				HX_STACK_LINE(72)
				Float tmp44 = tmp43->width;		HX_STACK_VAR(tmp44,"tmp44");
				HX_STACK_LINE(72)
				Float tmp45 = (tmp42 + tmp44);		HX_STACK_VAR(tmp45,"tmp45");
				HX_STACK_LINE(72)
				::openfl::geom::Rectangle tmp46 = this->tempCollideBounds;		HX_STACK_VAR(tmp46,"tmp46");
				HX_STACK_LINE(72)
				Float tmp47 = tmp46->x;		HX_STACK_VAR(tmp47,"tmp47");
				HX_STACK_LINE(72)
				Float tmp48 = (tmp45 - tmp47);		HX_STACK_VAR(tmp48,"tmp48");
				HX_STACK_LINE(72)
				distance = tmp48;
			}
		}
	}
	else{
		HX_STACK_LINE(75)
		::openfl::geom::Point tmp29 = this->thisCenter;		HX_STACK_VAR(tmp29,"tmp29");
		HX_STACK_LINE(75)
		Float tmp30 = tmp29->y;		HX_STACK_VAR(tmp30,"tmp30");
		HX_STACK_LINE(75)
		::openfl::geom::Point tmp31 = this->otherCenter;		HX_STACK_VAR(tmp31,"tmp31");
		HX_STACK_LINE(75)
		Float tmp32 = tmp31->y;		HX_STACK_VAR(tmp32,"tmp32");
		HX_STACK_LINE(75)
		Float tmp33 = (tmp30 - tmp32);		HX_STACK_VAR(tmp33,"tmp33");
		HX_STACK_LINE(75)
		bool tmp34 = (tmp33 >= (int)0);		HX_STACK_VAR(tmp34,"tmp34");
		HX_STACK_LINE(75)
		if ((tmp34)){
			HX_STACK_LINE(76)
			::openfl::geom::Rectangle tmp35 = this->tempObjectBounds;		HX_STACK_VAR(tmp35,"tmp35");
			HX_STACK_LINE(76)
			Float tmp36 = tmp35->y;		HX_STACK_VAR(tmp36,"tmp36");
			HX_STACK_LINE(76)
			::openfl::geom::Rectangle tmp37 = this->tempCollideBounds;		HX_STACK_VAR(tmp37,"tmp37");
			HX_STACK_LINE(76)
			Float tmp38 = tmp37->y;		HX_STACK_VAR(tmp38,"tmp38");
			HX_STACK_LINE(76)
			::openfl::geom::Rectangle tmp39 = this->tempCollideBounds;		HX_STACK_VAR(tmp39,"tmp39");
			HX_STACK_LINE(76)
			Float tmp40 = tmp39->height;		HX_STACK_VAR(tmp40,"tmp40");
			HX_STACK_LINE(76)
			Float tmp41 = (tmp38 + tmp40);		HX_STACK_VAR(tmp41,"tmp41");
			HX_STACK_LINE(76)
			Float tmp42 = (tmp36 - tmp41);		HX_STACK_VAR(tmp42,"tmp42");
			HX_STACK_LINE(76)
			distance = tmp42;
		}
		else{
			HX_STACK_LINE(77)
			::openfl::geom::Point tmp35 = this->thisCenter;		HX_STACK_VAR(tmp35,"tmp35");
			HX_STACK_LINE(77)
			Float tmp36 = tmp35->y;		HX_STACK_VAR(tmp36,"tmp36");
			HX_STACK_LINE(77)
			::openfl::geom::Point tmp37 = this->otherCenter;		HX_STACK_VAR(tmp37,"tmp37");
			HX_STACK_LINE(77)
			Float tmp38 = tmp37->y;		HX_STACK_VAR(tmp38,"tmp38");
			HX_STACK_LINE(77)
			Float tmp39 = (tmp36 - tmp38);		HX_STACK_VAR(tmp39,"tmp39");
			HX_STACK_LINE(77)
			bool tmp40 = (tmp39 < (int)0);		HX_STACK_VAR(tmp40,"tmp40");
			HX_STACK_LINE(77)
			if ((tmp40)){
				HX_STACK_LINE(78)
				::openfl::geom::Rectangle tmp41 = this->tempObjectBounds;		HX_STACK_VAR(tmp41,"tmp41");
				HX_STACK_LINE(78)
				Float tmp42 = tmp41->y;		HX_STACK_VAR(tmp42,"tmp42");
				HX_STACK_LINE(78)
				::openfl::geom::Rectangle tmp43 = this->tempObjectBounds;		HX_STACK_VAR(tmp43,"tmp43");
				HX_STACK_LINE(78)
				Float tmp44 = tmp43->height;		HX_STACK_VAR(tmp44,"tmp44");
				HX_STACK_LINE(78)
				Float tmp45 = (tmp42 + tmp44);		HX_STACK_VAR(tmp45,"tmp45");
				HX_STACK_LINE(78)
				::openfl::geom::Rectangle tmp46 = this->tempCollideBounds;		HX_STACK_VAR(tmp46,"tmp46");
				HX_STACK_LINE(78)
				Float tmp47 = tmp46->y;		HX_STACK_VAR(tmp47,"tmp47");
				HX_STACK_LINE(78)
				Float tmp48 = (tmp45 - tmp47);		HX_STACK_VAR(tmp48,"tmp48");
				HX_STACK_LINE(78)
				distance = tmp48;
			}
		}
	}
	HX_STACK_LINE(81)
	Float tmp29 = distance;		HX_STACK_VAR(tmp29,"tmp29");
	HX_STACK_LINE(81)
	int tmp30 = ::Math_obj::round(tmp29);		HX_STACK_VAR(tmp30,"tmp30");
	HX_STACK_LINE(81)
	return tmp30;
}


HX_DEFINE_DYNAMIC_FUNC2(MapObject_obj,getCollisionDistance,return )


MapObject_obj::MapObject_obj()
{
}

void MapObject_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(MapObject);
	HX_MARK_MEMBER_NAME(collisionBounds,"collisionBounds");
	HX_MARK_MEMBER_NAME(tempObjectBounds,"tempObjectBounds");
	HX_MARK_MEMBER_NAME(tempCollideBounds,"tempCollideBounds");
	HX_MARK_MEMBER_NAME(thisCenter,"thisCenter");
	HX_MARK_MEMBER_NAME(otherCenter,"otherCenter");
	HX_MARK_MEMBER_NAME(passable,"passable");
	HX_MARK_MEMBER_NAME(defaultBitmap,"defaultBitmap");
	::openfl::display::Sprite_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void MapObject_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(collisionBounds,"collisionBounds");
	HX_VISIT_MEMBER_NAME(tempObjectBounds,"tempObjectBounds");
	HX_VISIT_MEMBER_NAME(tempCollideBounds,"tempCollideBounds");
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
	case 13:
		if (HX_FIELD_EQ(inName,"defaultBitmap") ) { return defaultBitmap; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"checkCollision") ) { return checkCollision_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"collisionBounds") ) { return collisionBounds; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"tempObjectBounds") ) { return tempObjectBounds; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"tempCollideBounds") ) { return tempCollideBounds; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"getCollisionBounds") ) { return getCollisionBounds_dyn(); }
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
	case 13:
		if (HX_FIELD_EQ(inName,"defaultBitmap") ) { defaultBitmap=inValue.Cast< ::openfl::display::Bitmap >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"collisionBounds") ) { collisionBounds=inValue.Cast< ::openfl::geom::Rectangle >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"tempObjectBounds") ) { tempObjectBounds=inValue.Cast< ::openfl::geom::Rectangle >(); return inValue; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"tempCollideBounds") ) { tempCollideBounds=inValue.Cast< ::openfl::geom::Rectangle >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool MapObject_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	return false;
}

void MapObject_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("collisionBounds","\x87","\x84","\xe9","\x37"));
	outFields->push(HX_HCSTRING("tempObjectBounds","\xc8","\xef","\x55","\x79"));
	outFields->push(HX_HCSTRING("tempCollideBounds","\xdf","\x8c","\x76","\xa7"));
	outFields->push(HX_HCSTRING("thisCenter","\xd3","\xba","\x15","\x32"));
	outFields->push(HX_HCSTRING("otherCenter","\xc5","\xfc","\x26","\x04"));
	outFields->push(HX_HCSTRING("passable","\xeb","\x8e","\x3b","\x3a"));
	outFields->push(HX_HCSTRING("defaultBitmap","\x90","\xe3","\x84","\xeb"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::openfl::geom::Rectangle*/ ,(int)offsetof(MapObject_obj,collisionBounds),HX_HCSTRING("collisionBounds","\x87","\x84","\xe9","\x37")},
	{hx::fsObject /*::openfl::geom::Rectangle*/ ,(int)offsetof(MapObject_obj,tempObjectBounds),HX_HCSTRING("tempObjectBounds","\xc8","\xef","\x55","\x79")},
	{hx::fsObject /*::openfl::geom::Rectangle*/ ,(int)offsetof(MapObject_obj,tempCollideBounds),HX_HCSTRING("tempCollideBounds","\xdf","\x8c","\x76","\xa7")},
	{hx::fsObject /*::openfl::geom::Point*/ ,(int)offsetof(MapObject_obj,thisCenter),HX_HCSTRING("thisCenter","\xd3","\xba","\x15","\x32")},
	{hx::fsObject /*::openfl::geom::Point*/ ,(int)offsetof(MapObject_obj,otherCenter),HX_HCSTRING("otherCenter","\xc5","\xfc","\x26","\x04")},
	{hx::fsBool,(int)offsetof(MapObject_obj,passable),HX_HCSTRING("passable","\xeb","\x8e","\x3b","\x3a")},
	{hx::fsObject /*::openfl::display::Bitmap*/ ,(int)offsetof(MapObject_obj,defaultBitmap),HX_HCSTRING("defaultBitmap","\x90","\xe3","\x84","\xeb")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("collisionBounds","\x87","\x84","\xe9","\x37"),
	HX_HCSTRING("tempObjectBounds","\xc8","\xef","\x55","\x79"),
	HX_HCSTRING("tempCollideBounds","\xdf","\x8c","\x76","\xa7"),
	HX_HCSTRING("thisCenter","\xd3","\xba","\x15","\x32"),
	HX_HCSTRING("otherCenter","\xc5","\xfc","\x26","\x04"),
	HX_HCSTRING("passable","\xeb","\x8e","\x3b","\x3a"),
	HX_HCSTRING("defaultBitmap","\x90","\xe3","\x84","\xeb"),
	HX_HCSTRING("getPassable","\xa1","\x51","\x2f","\x60"),
	HX_HCSTRING("checkCollision","\x8a","\x96","\xf1","\x41"),
	HX_HCSTRING("getCollisionBounds","\x91","\x24","\xaf","\xea"),
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
	__mClass->mName = HX_HCSTRING("maps.mapobjects.MapObject","\x9c","\x77","\x01","\xb2");
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
} // end namespace mapobjects
