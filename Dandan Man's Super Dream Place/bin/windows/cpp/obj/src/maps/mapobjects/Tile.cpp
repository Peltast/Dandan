#include <hxcpp.h>

#include "hxMath.h"
#ifndef INCLUDED_actors_Actor
#include <actors/Actor.h>
#endif
#ifndef INCLUDED_maps_mapobjects_MapObject
#include <maps/mapobjects/MapObject.h>
#endif
#ifndef INCLUDED_maps_mapobjects_Tile
#include <maps/mapobjects/Tile.h>
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
#ifndef INCLUDED_openfl_geom_Rectangle
#include <openfl/geom/Rectangle.h>
#endif
namespace maps{
namespace mapobjects{

Void Tile_obj::__construct(::openfl::display::Bitmap defaultBmp,bool collidable,Array< int > fatalDirections)
{
HX_STACK_FRAME("maps.mapobjects.Tile","new",0xd3c3bd1f,"maps.mapobjects.Tile.new","maps/mapobjects/Tile.hx",20,0xf5ba1191)
HX_STACK_THIS(this)
HX_STACK_ARG(defaultBmp,"defaultBmp")
HX_STACK_ARG(collidable,"collidable")
HX_STACK_ARG(fatalDirections,"fatalDirections")
{
	HX_STACK_LINE(21)
	::openfl::display::Bitmap tmp = defaultBmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(21)
	super::__construct(hx::ObjectPtr<OBJ_>(this),tmp,null());
	HX_STACK_LINE(23)
	this->tileCollidable = collidable;
	HX_STACK_LINE(24)
	this->tileFatalDirections = fatalDirections;
}
;
	return null();
}

//Tile_obj::~Tile_obj() { }

Dynamic Tile_obj::__CreateEmpty() { return  new Tile_obj; }
hx::ObjectPtr< Tile_obj > Tile_obj::__new(::openfl::display::Bitmap defaultBmp,bool collidable,Array< int > fatalDirections)
{  hx::ObjectPtr< Tile_obj > _result_ = new Tile_obj();
	_result_->__construct(defaultBmp,collidable,fatalDirections);
	return _result_;}

Dynamic Tile_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Tile_obj > _result_ = new Tile_obj();
	_result_->__construct(inArgs[0],inArgs[1],inArgs[2]);
	return _result_;}

bool Tile_obj::checkCollision( ::maps::mapobjects::MapObject otherObject,hx::Null< bool >  __o_checkPassable){
bool checkPassable = __o_checkPassable.Default(true);
	HX_STACK_FRAME("maps.mapobjects.Tile","checkCollision",0x5dc3f42b,"maps.mapobjects.Tile.checkCollision","maps/mapobjects/Tile.hx",27,0xf5ba1191)
	HX_STACK_THIS(this)
	HX_STACK_ARG(otherObject,"otherObject")
	HX_STACK_ARG(checkPassable,"checkPassable")
{
		HX_STACK_LINE(29)
		bool tmp = this->tileCollidable;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(29)
		bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(29)
		if ((tmp1)){
			HX_STACK_LINE(29)
			return false;
		}
		HX_STACK_LINE(31)
		::openfl::geom::Rectangle tmp2 = this->getCollisionBounds();		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(31)
		this->tempObjectBounds = tmp2;
		HX_STACK_LINE(32)
		::openfl::geom::Rectangle tmp3 = otherObject->getCollisionBounds();		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(32)
		this->tempCollideBounds = tmp3;
		HX_STACK_LINE(34)
		::openfl::geom::Rectangle tmp4 = this->tempObjectBounds;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(34)
		::openfl::geom::Rectangle tmp5 = this->tempCollideBounds;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(34)
		bool tmp6 = tmp4->intersects(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(34)
		if ((tmp6)){
			HX_STACK_LINE(35)
			return true;
		}
		else{
			HX_STACK_LINE(37)
			return false;
		}
		HX_STACK_LINE(34)
		return false;
	}
}


bool Tile_obj::checkFatal( ::actors::Actor actor,bool xAxis){
	HX_STACK_FRAME("maps.mapobjects.Tile","checkFatal",0x418df33d,"maps.mapobjects.Tile.checkFatal","maps/mapobjects/Tile.hx",40,0xf5ba1191)
	HX_STACK_THIS(this)
	HX_STACK_ARG(actor,"actor")
	HX_STACK_ARG(xAxis,"xAxis")
	HX_STACK_LINE(41)
	int tmp = this->tileFatalDirections->indexOf((int)1,null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(41)
	bool tmp1 = (tmp < (int)0);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(41)
	if ((tmp1)){
		HX_STACK_LINE(41)
		return false;
	}
	HX_STACK_LINE(43)
	Float tmp2 = this->get_x();		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(43)
	Float tmp3 = this->get_width();		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(43)
	Float tmp4 = (Float(tmp3) / Float((int)2));		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(43)
	Float tmp5 = (tmp2 + tmp4);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(43)
	Float tmp6 = this->get_y();		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(43)
	Float tmp7 = this->get_height();		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(43)
	Float tmp8 = (Float(tmp7) / Float((int)2));		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(43)
	Float tmp9 = (tmp6 + tmp8);		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(43)
	::openfl::geom::Point tmp10 = ::openfl::geom::Point_obj::__new(tmp5,tmp9);		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(43)
	this->thisCenter = tmp10;
	HX_STACK_LINE(44)
	Float tmp11 = actor->get_x();		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(44)
	Float tmp12 = actor->get_width();		HX_STACK_VAR(tmp12,"tmp12");
	HX_STACK_LINE(44)
	Float tmp13 = (Float(tmp12) / Float((int)2));		HX_STACK_VAR(tmp13,"tmp13");
	HX_STACK_LINE(44)
	Float tmp14 = (tmp11 + tmp13);		HX_STACK_VAR(tmp14,"tmp14");
	HX_STACK_LINE(44)
	Float tmp15 = actor->get_y();		HX_STACK_VAR(tmp15,"tmp15");
	HX_STACK_LINE(44)
	Float tmp16 = actor->get_height();		HX_STACK_VAR(tmp16,"tmp16");
	HX_STACK_LINE(44)
	Float tmp17 = (Float(tmp16) / Float((int)2));		HX_STACK_VAR(tmp17,"tmp17");
	HX_STACK_LINE(44)
	Float tmp18 = (tmp15 + tmp17);		HX_STACK_VAR(tmp18,"tmp18");
	HX_STACK_LINE(44)
	::openfl::geom::Point tmp19 = ::openfl::geom::Point_obj::__new(tmp14,tmp18);		HX_STACK_VAR(tmp19,"tmp19");
	HX_STACK_LINE(44)
	this->otherCenter = tmp19;
	HX_STACK_LINE(46)
	bool tmp20 = xAxis;		HX_STACK_VAR(tmp20,"tmp20");
	HX_STACK_LINE(46)
	if ((tmp20)){
		HX_STACK_LINE(48)
		::openfl::geom::Point tmp21 = this->thisCenter;		HX_STACK_VAR(tmp21,"tmp21");
		HX_STACK_LINE(48)
		Float tmp22 = tmp21->x;		HX_STACK_VAR(tmp22,"tmp22");
		HX_STACK_LINE(48)
		::openfl::geom::Point tmp23 = this->otherCenter;		HX_STACK_VAR(tmp23,"tmp23");
		HX_STACK_LINE(48)
		Float tmp24 = tmp23->x;		HX_STACK_VAR(tmp24,"tmp24");
		HX_STACK_LINE(48)
		Float tmp25 = (tmp22 - tmp24);		HX_STACK_VAR(tmp25,"tmp25");
		HX_STACK_LINE(48)
		bool tmp26 = (tmp25 >= (int)0);		HX_STACK_VAR(tmp26,"tmp26");
		HX_STACK_LINE(48)
		bool tmp27;		HX_STACK_VAR(tmp27,"tmp27");
		HX_STACK_LINE(48)
		if ((tmp26)){
			HX_STACK_LINE(48)
			int tmp28 = this->tileFatalDirections->__get((int)0);		HX_STACK_VAR(tmp28,"tmp28");
			HX_STACK_LINE(48)
			int tmp29 = tmp28;		HX_STACK_VAR(tmp29,"tmp29");
			HX_STACK_LINE(48)
			tmp27 = (tmp29 == (int)1);
		}
		else{
			HX_STACK_LINE(48)
			tmp27 = false;
		}
		HX_STACK_LINE(48)
		if ((tmp27)){
			HX_STACK_LINE(49)
			return true;
		}
		else{
			HX_STACK_LINE(50)
			::openfl::geom::Point tmp28 = this->thisCenter;		HX_STACK_VAR(tmp28,"tmp28");
			HX_STACK_LINE(50)
			Float tmp29 = tmp28->x;		HX_STACK_VAR(tmp29,"tmp29");
			HX_STACK_LINE(50)
			::openfl::geom::Point tmp30 = this->otherCenter;		HX_STACK_VAR(tmp30,"tmp30");
			HX_STACK_LINE(50)
			Float tmp31 = tmp30->x;		HX_STACK_VAR(tmp31,"tmp31");
			HX_STACK_LINE(50)
			Float tmp32 = (tmp29 - tmp31);		HX_STACK_VAR(tmp32,"tmp32");
			HX_STACK_LINE(50)
			bool tmp33 = (tmp32 < (int)0);		HX_STACK_VAR(tmp33,"tmp33");
			HX_STACK_LINE(50)
			bool tmp34;		HX_STACK_VAR(tmp34,"tmp34");
			HX_STACK_LINE(50)
			if ((tmp33)){
				HX_STACK_LINE(50)
				int tmp35 = this->tileFatalDirections->__get((int)1);		HX_STACK_VAR(tmp35,"tmp35");
				HX_STACK_LINE(50)
				int tmp36 = tmp35;		HX_STACK_VAR(tmp36,"tmp36");
				HX_STACK_LINE(50)
				tmp34 = (tmp36 == (int)1);
			}
			else{
				HX_STACK_LINE(50)
				tmp34 = false;
			}
			HX_STACK_LINE(50)
			if ((tmp34)){
				HX_STACK_LINE(51)
				return true;
			}
		}
	}
	else{
		HX_STACK_LINE(54)
		::openfl::geom::Point tmp21 = this->thisCenter;		HX_STACK_VAR(tmp21,"tmp21");
		HX_STACK_LINE(54)
		Float tmp22 = tmp21->y;		HX_STACK_VAR(tmp22,"tmp22");
		HX_STACK_LINE(54)
		::openfl::geom::Point tmp23 = this->otherCenter;		HX_STACK_VAR(tmp23,"tmp23");
		HX_STACK_LINE(54)
		Float tmp24 = tmp23->y;		HX_STACK_VAR(tmp24,"tmp24");
		HX_STACK_LINE(54)
		Float tmp25 = (tmp22 - tmp24);		HX_STACK_VAR(tmp25,"tmp25");
		HX_STACK_LINE(54)
		bool tmp26 = (tmp25 >= (int)0);		HX_STACK_VAR(tmp26,"tmp26");
		HX_STACK_LINE(54)
		bool tmp27 = tmp26;		HX_STACK_VAR(tmp27,"tmp27");
		HX_STACK_LINE(54)
		bool tmp28;		HX_STACK_VAR(tmp28,"tmp28");
		HX_STACK_LINE(54)
		if ((tmp27)){
			HX_STACK_LINE(54)
			::openfl::geom::Point tmp29 = this->thisCenter;		HX_STACK_VAR(tmp29,"tmp29");
			HX_STACK_LINE(54)
			::openfl::geom::Point tmp30 = tmp29;		HX_STACK_VAR(tmp30,"tmp30");
			HX_STACK_LINE(54)
			::openfl::geom::Point tmp31 = tmp30;		HX_STACK_VAR(tmp31,"tmp31");
			HX_STACK_LINE(54)
			Float tmp32 = tmp31->x;		HX_STACK_VAR(tmp32,"tmp32");
			HX_STACK_LINE(54)
			::openfl::geom::Point tmp33 = this->otherCenter;		HX_STACK_VAR(tmp33,"tmp33");
			HX_STACK_LINE(54)
			::openfl::geom::Point tmp34 = tmp33;		HX_STACK_VAR(tmp34,"tmp34");
			HX_STACK_LINE(54)
			::openfl::geom::Point tmp35 = tmp34;		HX_STACK_VAR(tmp35,"tmp35");
			HX_STACK_LINE(54)
			Float tmp36 = tmp35->x;		HX_STACK_VAR(tmp36,"tmp36");
			HX_STACK_LINE(54)
			Float tmp37 = (tmp32 - tmp36);		HX_STACK_VAR(tmp37,"tmp37");
			HX_STACK_LINE(54)
			Float tmp38 = tmp37;		HX_STACK_VAR(tmp38,"tmp38");
			HX_STACK_LINE(54)
			Float tmp39 = tmp38;		HX_STACK_VAR(tmp39,"tmp39");
			HX_STACK_LINE(54)
			Float tmp40 = tmp39;		HX_STACK_VAR(tmp40,"tmp40");
			HX_STACK_LINE(54)
			Float tmp41 = tmp40;		HX_STACK_VAR(tmp41,"tmp41");
			HX_STACK_LINE(54)
			Float tmp42 = ::Math_obj::abs(tmp41);		HX_STACK_VAR(tmp42,"tmp42");
			HX_STACK_LINE(54)
			Float tmp43 = tmp42;		HX_STACK_VAR(tmp43,"tmp43");
			HX_STACK_LINE(54)
			Float tmp44 = tmp43;		HX_STACK_VAR(tmp44,"tmp44");
			HX_STACK_LINE(54)
			tmp28 = (tmp44 < (int)16);
		}
		else{
			HX_STACK_LINE(54)
			tmp28 = false;
		}
		HX_STACK_LINE(54)
		bool tmp29;		HX_STACK_VAR(tmp29,"tmp29");
		HX_STACK_LINE(54)
		if ((tmp28)){
			HX_STACK_LINE(54)
			int tmp30 = this->tileFatalDirections->__get((int)2);		HX_STACK_VAR(tmp30,"tmp30");
			HX_STACK_LINE(54)
			int tmp31 = tmp30;		HX_STACK_VAR(tmp31,"tmp31");
			HX_STACK_LINE(54)
			tmp29 = (tmp31 == (int)1);
		}
		else{
			HX_STACK_LINE(54)
			tmp29 = false;
		}
		HX_STACK_LINE(54)
		if ((tmp29)){
			HX_STACK_LINE(55)
			return true;
		}
		else{
			HX_STACK_LINE(56)
			::openfl::geom::Point tmp30 = this->thisCenter;		HX_STACK_VAR(tmp30,"tmp30");
			HX_STACK_LINE(56)
			Float tmp31 = tmp30->y;		HX_STACK_VAR(tmp31,"tmp31");
			HX_STACK_LINE(56)
			::openfl::geom::Point tmp32 = this->otherCenter;		HX_STACK_VAR(tmp32,"tmp32");
			HX_STACK_LINE(56)
			Float tmp33 = tmp32->y;		HX_STACK_VAR(tmp33,"tmp33");
			HX_STACK_LINE(56)
			Float tmp34 = (tmp31 - tmp33);		HX_STACK_VAR(tmp34,"tmp34");
			HX_STACK_LINE(56)
			bool tmp35 = (tmp34 < (int)0);		HX_STACK_VAR(tmp35,"tmp35");
			HX_STACK_LINE(56)
			bool tmp36;		HX_STACK_VAR(tmp36,"tmp36");
			HX_STACK_LINE(56)
			if ((tmp35)){
				HX_STACK_LINE(56)
				int tmp37 = this->tileFatalDirections->__get((int)3);		HX_STACK_VAR(tmp37,"tmp37");
				HX_STACK_LINE(56)
				int tmp38 = tmp37;		HX_STACK_VAR(tmp38,"tmp38");
				HX_STACK_LINE(56)
				tmp36 = (tmp38 == (int)1);
			}
			else{
				HX_STACK_LINE(56)
				tmp36 = false;
			}
			HX_STACK_LINE(56)
			if ((tmp36)){
				HX_STACK_LINE(57)
				return true;
			}
		}
	}
	HX_STACK_LINE(60)
	return false;
}


HX_DEFINE_DYNAMIC_FUNC2(Tile_obj,checkFatal,return )

int Tile_obj::getLeftDistance( ::maps::mapobjects::MapObject otherObject){
	HX_STACK_FRAME("maps.mapobjects.Tile","getLeftDistance",0x6c671b51,"maps.mapobjects.Tile.getLeftDistance","maps/mapobjects/Tile.hx",63,0xf5ba1191)
	HX_STACK_THIS(this)
	HX_STACK_ARG(otherObject,"otherObject")
	HX_STACK_LINE(64)
	Float tmp = this->get_x();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(64)
	Float tmp1 = otherObject->get_x();		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(64)
	Float tmp2 = otherObject->get_width();		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(64)
	Float tmp3 = (tmp1 + tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(64)
	Float tmp4 = (tmp - tmp3);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(64)
	int tmp5 = ::Math_obj::round(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(64)
	return tmp5;
}


HX_DEFINE_DYNAMIC_FUNC1(Tile_obj,getLeftDistance,return )

int Tile_obj::getRightDistance( ::maps::mapobjects::MapObject otherObject){
	HX_STACK_FRAME("maps.mapobjects.Tile","getRightDistance",0xbf87089c,"maps.mapobjects.Tile.getRightDistance","maps/mapobjects/Tile.hx",66,0xf5ba1191)
	HX_STACK_THIS(this)
	HX_STACK_ARG(otherObject,"otherObject")
	HX_STACK_LINE(67)
	Float tmp = this->get_x();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(67)
	Float tmp1 = this->get_width();		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(67)
	Float tmp2 = (tmp + tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(67)
	Float tmp3 = otherObject->get_x();		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(67)
	Float tmp4 = (tmp2 - tmp3);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(67)
	int tmp5 = ::Math_obj::round(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(67)
	return tmp5;
}


HX_DEFINE_DYNAMIC_FUNC1(Tile_obj,getRightDistance,return )

int Tile_obj::getUpDistance( ::maps::mapobjects::MapObject otherObject){
	HX_STACK_FRAME("maps.mapobjects.Tile","getUpDistance",0x12c55665,"maps.mapobjects.Tile.getUpDistance","maps/mapobjects/Tile.hx",69,0xf5ba1191)
	HX_STACK_THIS(this)
	HX_STACK_ARG(otherObject,"otherObject")
	HX_STACK_LINE(70)
	Float tmp = this->get_y();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(70)
	Float tmp1 = otherObject->get_y();		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(70)
	Float tmp2 = otherObject->get_height();		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(70)
	Float tmp3 = (tmp1 + tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(70)
	Float tmp4 = (tmp - tmp3);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(70)
	int tmp5 = ::Math_obj::round(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(70)
	return tmp5;
}


HX_DEFINE_DYNAMIC_FUNC1(Tile_obj,getUpDistance,return )

int Tile_obj::getDownDistance( ::maps::mapobjects::MapObject otherObject){
	HX_STACK_FRAME("maps.mapobjects.Tile","getDownDistance",0x3a655eac,"maps.mapobjects.Tile.getDownDistance","maps/mapobjects/Tile.hx",72,0xf5ba1191)
	HX_STACK_THIS(this)
	HX_STACK_ARG(otherObject,"otherObject")
	HX_STACK_LINE(73)
	Float tmp = this->get_y();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(73)
	Float tmp1 = this->get_height();		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(73)
	Float tmp2 = (tmp + tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(73)
	Float tmp3 = otherObject->get_y();		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(73)
	Float tmp4 = (tmp2 - tmp3);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(73)
	int tmp5 = ::Math_obj::round(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(73)
	return tmp5;
}


HX_DEFINE_DYNAMIC_FUNC1(Tile_obj,getDownDistance,return )


Tile_obj::Tile_obj()
{
}

void Tile_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Tile);
	HX_MARK_MEMBER_NAME(tileCollidable,"tileCollidable");
	HX_MARK_MEMBER_NAME(tileFatalDirections,"tileFatalDirections");
	::maps::mapobjects::MapObject_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void Tile_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(tileCollidable,"tileCollidable");
	HX_VISIT_MEMBER_NAME(tileFatalDirections,"tileFatalDirections");
	::maps::mapobjects::MapObject_obj::__Visit(HX_VISIT_ARG);
}

Dynamic Tile_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 10:
		if (HX_FIELD_EQ(inName,"checkFatal") ) { return checkFatal_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"getUpDistance") ) { return getUpDistance_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"tileCollidable") ) { return tileCollidable; }
		if (HX_FIELD_EQ(inName,"checkCollision") ) { return checkCollision_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"getLeftDistance") ) { return getLeftDistance_dyn(); }
		if (HX_FIELD_EQ(inName,"getDownDistance") ) { return getDownDistance_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"getRightDistance") ) { return getRightDistance_dyn(); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"tileFatalDirections") ) { return tileFatalDirections; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Tile_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 14:
		if (HX_FIELD_EQ(inName,"tileCollidable") ) { tileCollidable=inValue.Cast< bool >(); return inValue; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"tileFatalDirections") ) { tileFatalDirections=inValue.Cast< Array< int > >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool Tile_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	return false;
}

void Tile_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("tileCollidable","\xef","\x48","\x73","\xad"));
	outFields->push(HX_HCSTRING("tileFatalDirections","\xea","\x7e","\x9e","\x2b"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsBool,(int)offsetof(Tile_obj,tileCollidable),HX_HCSTRING("tileCollidable","\xef","\x48","\x73","\xad")},
	{hx::fsObject /*Array< int >*/ ,(int)offsetof(Tile_obj,tileFatalDirections),HX_HCSTRING("tileFatalDirections","\xea","\x7e","\x9e","\x2b")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("tileCollidable","\xef","\x48","\x73","\xad"),
	HX_HCSTRING("tileFatalDirections","\xea","\x7e","\x9e","\x2b"),
	HX_HCSTRING("checkCollision","\x8a","\x96","\xf1","\x41"),
	HX_HCSTRING("checkFatal","\x1c","\x3a","\x45","\x0b"),
	HX_HCSTRING("getLeftDistance","\x12","\x8c","\x27","\x30"),
	HX_HCSTRING("getRightDistance","\xbb","\x40","\x29","\x44"),
	HX_HCSTRING("getUpDistance","\xe6","\x64","\xc4","\xcd"),
	HX_HCSTRING("getDownDistance","\x6d","\xcf","\x25","\xfe"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Tile_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Tile_obj::__mClass,"__mClass");
};

#endif

hx::Class Tile_obj::__mClass;

void Tile_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("maps.mapobjects.Tile","\xad","\x41","\x81","\x38");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &Tile_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Tile_obj >;
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
