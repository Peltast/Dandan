#include <hxcpp.h>

#include "hxMath.h"
#ifndef INCLUDED_actors_Player
#include <actors/Player.h>
#endif
#ifndef INCLUDED_maps_MapObject
#include <maps/MapObject.h>
#endif
#ifndef INCLUDED_maps_Tile
#include <maps/Tile.h>
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

Void Tile_obj::__construct(::openfl::display::Bitmap defaultBmp,bool collidable,Array< int > fatalDirections)
{
HX_STACK_FRAME("maps.Tile","new",0x8e3bf437,"maps.Tile.new","maps/Tile.hx",18,0x48c23138)
HX_STACK_THIS(this)
HX_STACK_ARG(defaultBmp,"defaultBmp")
HX_STACK_ARG(collidable,"collidable")
HX_STACK_ARG(fatalDirections,"fatalDirections")
{
	HX_STACK_LINE(19)
	::openfl::display::Bitmap tmp = defaultBmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(19)
	super::__construct(hx::ObjectPtr<OBJ_>(this),tmp,null());
	HX_STACK_LINE(21)
	this->tileCollidable = collidable;
	HX_STACK_LINE(22)
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

bool Tile_obj::checkCollision( ::maps::MapObject otherObject){
	HX_STACK_FRAME("maps.Tile","checkCollision",0x90cb6413,"maps.Tile.checkCollision","maps/Tile.hx",25,0x48c23138)
	HX_STACK_THIS(this)
	HX_STACK_ARG(otherObject,"otherObject")
	HX_STACK_LINE(27)
	bool tmp = this->tileCollidable;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(27)
	bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(27)
	if ((tmp1)){
		HX_STACK_LINE(27)
		return false;
	}
	HX_STACK_LINE(29)
	Float tmp2 = this->get_x();		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(29)
	Float tmp3 = this->get_y();		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(29)
	Float tmp4 = this->get_width();		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(29)
	Float tmp5 = this->get_height();		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(29)
	::openfl::geom::Rectangle tmp6 = ::openfl::geom::Rectangle_obj::__new(tmp2,tmp3,tmp4,tmp5);		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(29)
	this->objectBounds = tmp6;
	HX_STACK_LINE(30)
	Float tmp7 = otherObject->get_x();		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(30)
	Float tmp8 = otherObject->get_y();		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(30)
	Float tmp9 = otherObject->get_width();		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(30)
	Float tmp10 = otherObject->get_height();		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(30)
	::openfl::geom::Rectangle tmp11 = ::openfl::geom::Rectangle_obj::__new(tmp7,tmp8,tmp9,tmp10);		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(30)
	this->collideBounds = tmp11;
	HX_STACK_LINE(32)
	::openfl::geom::Rectangle tmp12 = this->objectBounds;		HX_STACK_VAR(tmp12,"tmp12");
	HX_STACK_LINE(32)
	::openfl::geom::Rectangle tmp13 = this->collideBounds;		HX_STACK_VAR(tmp13,"tmp13");
	HX_STACK_LINE(32)
	bool tmp14 = tmp12->intersects(tmp13);		HX_STACK_VAR(tmp14,"tmp14");
	HX_STACK_LINE(32)
	if ((tmp14)){
		HX_STACK_LINE(33)
		return true;
	}
	else{
		HX_STACK_LINE(35)
		return false;
	}
	HX_STACK_LINE(32)
	return false;
}


bool Tile_obj::checkFatal( ::actors::Player player,bool xAxis){
	HX_STACK_FRAME("maps.Tile","checkFatal",0x79554f25,"maps.Tile.checkFatal","maps/Tile.hx",38,0x48c23138)
	HX_STACK_THIS(this)
	HX_STACK_ARG(player,"player")
	HX_STACK_ARG(xAxis,"xAxis")
	HX_STACK_LINE(39)
	int tmp = this->tileFatalDirections->indexOf((int)1,null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(39)
	bool tmp1 = (tmp < (int)0);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(39)
	if ((tmp1)){
		HX_STACK_LINE(39)
		return false;
	}
	HX_STACK_LINE(41)
	Float tmp2 = this->get_x();		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(41)
	Float tmp3 = this->get_width();		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(41)
	Float tmp4 = (Float(tmp3) / Float((int)2));		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(41)
	Float tmp5 = (tmp2 + tmp4);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(41)
	Float tmp6 = this->get_y();		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(41)
	Float tmp7 = this->get_height();		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(41)
	Float tmp8 = (Float(tmp7) / Float((int)2));		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(41)
	Float tmp9 = (tmp6 + tmp8);		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(41)
	::openfl::geom::Point tmp10 = ::openfl::geom::Point_obj::__new(tmp5,tmp9);		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(41)
	this->thisCenter = tmp10;
	HX_STACK_LINE(42)
	Float tmp11 = player->get_x();		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(42)
	Float tmp12 = player->get_width();		HX_STACK_VAR(tmp12,"tmp12");
	HX_STACK_LINE(42)
	Float tmp13 = (Float(tmp12) / Float((int)2));		HX_STACK_VAR(tmp13,"tmp13");
	HX_STACK_LINE(42)
	Float tmp14 = (tmp11 + tmp13);		HX_STACK_VAR(tmp14,"tmp14");
	HX_STACK_LINE(42)
	Float tmp15 = player->get_y();		HX_STACK_VAR(tmp15,"tmp15");
	HX_STACK_LINE(42)
	Float tmp16 = player->get_height();		HX_STACK_VAR(tmp16,"tmp16");
	HX_STACK_LINE(42)
	Float tmp17 = (Float(tmp16) / Float((int)2));		HX_STACK_VAR(tmp17,"tmp17");
	HX_STACK_LINE(42)
	Float tmp18 = (tmp15 + tmp17);		HX_STACK_VAR(tmp18,"tmp18");
	HX_STACK_LINE(42)
	::openfl::geom::Point tmp19 = ::openfl::geom::Point_obj::__new(tmp14,tmp18);		HX_STACK_VAR(tmp19,"tmp19");
	HX_STACK_LINE(42)
	this->otherCenter = tmp19;
	HX_STACK_LINE(44)
	bool tmp20 = xAxis;		HX_STACK_VAR(tmp20,"tmp20");
	HX_STACK_LINE(44)
	if ((tmp20)){
		HX_STACK_LINE(46)
		::openfl::geom::Point tmp21 = this->thisCenter;		HX_STACK_VAR(tmp21,"tmp21");
		HX_STACK_LINE(46)
		Float tmp22 = tmp21->x;		HX_STACK_VAR(tmp22,"tmp22");
		HX_STACK_LINE(46)
		::openfl::geom::Point tmp23 = this->otherCenter;		HX_STACK_VAR(tmp23,"tmp23");
		HX_STACK_LINE(46)
		Float tmp24 = tmp23->x;		HX_STACK_VAR(tmp24,"tmp24");
		HX_STACK_LINE(46)
		Float tmp25 = (tmp22 - tmp24);		HX_STACK_VAR(tmp25,"tmp25");
		HX_STACK_LINE(46)
		bool tmp26 = (tmp25 >= (int)0);		HX_STACK_VAR(tmp26,"tmp26");
		HX_STACK_LINE(46)
		bool tmp27;		HX_STACK_VAR(tmp27,"tmp27");
		HX_STACK_LINE(46)
		if ((tmp26)){
			HX_STACK_LINE(46)
			int tmp28 = this->tileFatalDirections->__get((int)0);		HX_STACK_VAR(tmp28,"tmp28");
			HX_STACK_LINE(46)
			int tmp29 = tmp28;		HX_STACK_VAR(tmp29,"tmp29");
			HX_STACK_LINE(46)
			tmp27 = (tmp29 == (int)1);
		}
		else{
			HX_STACK_LINE(46)
			tmp27 = false;
		}
		HX_STACK_LINE(46)
		if ((tmp27)){
			HX_STACK_LINE(47)
			return true;
		}
		else{
			HX_STACK_LINE(48)
			::openfl::geom::Point tmp28 = this->thisCenter;		HX_STACK_VAR(tmp28,"tmp28");
			HX_STACK_LINE(48)
			Float tmp29 = tmp28->x;		HX_STACK_VAR(tmp29,"tmp29");
			HX_STACK_LINE(48)
			::openfl::geom::Point tmp30 = this->otherCenter;		HX_STACK_VAR(tmp30,"tmp30");
			HX_STACK_LINE(48)
			Float tmp31 = tmp30->x;		HX_STACK_VAR(tmp31,"tmp31");
			HX_STACK_LINE(48)
			Float tmp32 = (tmp29 - tmp31);		HX_STACK_VAR(tmp32,"tmp32");
			HX_STACK_LINE(48)
			bool tmp33 = (tmp32 < (int)0);		HX_STACK_VAR(tmp33,"tmp33");
			HX_STACK_LINE(48)
			bool tmp34;		HX_STACK_VAR(tmp34,"tmp34");
			HX_STACK_LINE(48)
			if ((tmp33)){
				HX_STACK_LINE(48)
				int tmp35 = this->tileFatalDirections->__get((int)1);		HX_STACK_VAR(tmp35,"tmp35");
				HX_STACK_LINE(48)
				int tmp36 = tmp35;		HX_STACK_VAR(tmp36,"tmp36");
				HX_STACK_LINE(48)
				tmp34 = (tmp36 == (int)1);
			}
			else{
				HX_STACK_LINE(48)
				tmp34 = false;
			}
			HX_STACK_LINE(48)
			if ((tmp34)){
				HX_STACK_LINE(49)
				return true;
			}
		}
	}
	else{
		HX_STACK_LINE(52)
		::openfl::geom::Point tmp21 = this->thisCenter;		HX_STACK_VAR(tmp21,"tmp21");
		HX_STACK_LINE(52)
		Float tmp22 = tmp21->y;		HX_STACK_VAR(tmp22,"tmp22");
		HX_STACK_LINE(52)
		::openfl::geom::Point tmp23 = this->otherCenter;		HX_STACK_VAR(tmp23,"tmp23");
		HX_STACK_LINE(52)
		Float tmp24 = tmp23->y;		HX_STACK_VAR(tmp24,"tmp24");
		HX_STACK_LINE(52)
		Float tmp25 = (tmp22 - tmp24);		HX_STACK_VAR(tmp25,"tmp25");
		HX_STACK_LINE(52)
		bool tmp26 = (tmp25 >= (int)0);		HX_STACK_VAR(tmp26,"tmp26");
		HX_STACK_LINE(52)
		bool tmp27;		HX_STACK_VAR(tmp27,"tmp27");
		HX_STACK_LINE(52)
		if ((tmp26)){
			HX_STACK_LINE(52)
			int tmp28 = this->tileFatalDirections->__get((int)2);		HX_STACK_VAR(tmp28,"tmp28");
			HX_STACK_LINE(52)
			int tmp29 = tmp28;		HX_STACK_VAR(tmp29,"tmp29");
			HX_STACK_LINE(52)
			tmp27 = (tmp29 == (int)1);
		}
		else{
			HX_STACK_LINE(52)
			tmp27 = false;
		}
		HX_STACK_LINE(52)
		if ((tmp27)){
			HX_STACK_LINE(53)
			return true;
		}
		else{
			HX_STACK_LINE(54)
			::openfl::geom::Point tmp28 = this->thisCenter;		HX_STACK_VAR(tmp28,"tmp28");
			HX_STACK_LINE(54)
			Float tmp29 = tmp28->y;		HX_STACK_VAR(tmp29,"tmp29");
			HX_STACK_LINE(54)
			::openfl::geom::Point tmp30 = this->otherCenter;		HX_STACK_VAR(tmp30,"tmp30");
			HX_STACK_LINE(54)
			Float tmp31 = tmp30->y;		HX_STACK_VAR(tmp31,"tmp31");
			HX_STACK_LINE(54)
			Float tmp32 = (tmp29 - tmp31);		HX_STACK_VAR(tmp32,"tmp32");
			HX_STACK_LINE(54)
			bool tmp33 = (tmp32 < (int)0);		HX_STACK_VAR(tmp33,"tmp33");
			HX_STACK_LINE(54)
			bool tmp34;		HX_STACK_VAR(tmp34,"tmp34");
			HX_STACK_LINE(54)
			if ((tmp33)){
				HX_STACK_LINE(54)
				int tmp35 = this->tileFatalDirections->__get((int)3);		HX_STACK_VAR(tmp35,"tmp35");
				HX_STACK_LINE(54)
				int tmp36 = tmp35;		HX_STACK_VAR(tmp36,"tmp36");
				HX_STACK_LINE(54)
				tmp34 = (tmp36 == (int)1);
			}
			else{
				HX_STACK_LINE(54)
				tmp34 = false;
			}
			HX_STACK_LINE(54)
			if ((tmp34)){
				HX_STACK_LINE(55)
				return true;
			}
		}
	}
	HX_STACK_LINE(58)
	return false;
}


HX_DEFINE_DYNAMIC_FUNC2(Tile_obj,checkFatal,return )

int Tile_obj::getLeftDistance( ::maps::MapObject otherObject){
	HX_STACK_FRAME("maps.Tile","getLeftDistance",0xdfe19669,"maps.Tile.getLeftDistance","maps/Tile.hx",61,0x48c23138)
	HX_STACK_THIS(this)
	HX_STACK_ARG(otherObject,"otherObject")
	HX_STACK_LINE(62)
	Float tmp = this->get_x();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(62)
	Float tmp1 = otherObject->get_x();		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(62)
	Float tmp2 = otherObject->get_width();		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(62)
	Float tmp3 = (tmp1 + tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(62)
	Float tmp4 = (tmp - tmp3);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(62)
	int tmp5 = ::Math_obj::round(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(62)
	return tmp5;
}


HX_DEFINE_DYNAMIC_FUNC1(Tile_obj,getLeftDistance,return )

int Tile_obj::getRightDistance( ::maps::MapObject otherObject){
	HX_STACK_FRAME("maps.Tile","getRightDistance",0x57384284,"maps.Tile.getRightDistance","maps/Tile.hx",64,0x48c23138)
	HX_STACK_THIS(this)
	HX_STACK_ARG(otherObject,"otherObject")
	HX_STACK_LINE(65)
	Float tmp = this->get_x();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(65)
	Float tmp1 = this->get_width();		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(65)
	Float tmp2 = (tmp + tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(65)
	Float tmp3 = otherObject->get_x();		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(65)
	Float tmp4 = (tmp2 - tmp3);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(65)
	int tmp5 = ::Math_obj::round(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(65)
	return tmp5;
}


HX_DEFINE_DYNAMIC_FUNC1(Tile_obj,getRightDistance,return )

int Tile_obj::getUpDistance( ::maps::MapObject otherObject){
	HX_STACK_FRAME("maps.Tile","getUpDistance",0x71225b7d,"maps.Tile.getUpDistance","maps/Tile.hx",67,0x48c23138)
	HX_STACK_THIS(this)
	HX_STACK_ARG(otherObject,"otherObject")
	HX_STACK_LINE(68)
	Float tmp = this->get_y();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(68)
	Float tmp1 = otherObject->get_y();		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(68)
	Float tmp2 = otherObject->get_height();		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(68)
	Float tmp3 = (tmp1 + tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(68)
	Float tmp4 = (tmp - tmp3);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(68)
	int tmp5 = ::Math_obj::round(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(68)
	return tmp5;
}


HX_DEFINE_DYNAMIC_FUNC1(Tile_obj,getUpDistance,return )

int Tile_obj::getDownDistance( ::maps::MapObject otherObject){
	HX_STACK_FRAME("maps.Tile","getDownDistance",0xaddfd9c4,"maps.Tile.getDownDistance","maps/Tile.hx",70,0x48c23138)
	HX_STACK_THIS(this)
	HX_STACK_ARG(otherObject,"otherObject")
	HX_STACK_LINE(71)
	Float tmp = this->get_y();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(71)
	Float tmp1 = this->get_height();		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(71)
	Float tmp2 = (tmp + tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(71)
	Float tmp3 = otherObject->get_y();		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(71)
	Float tmp4 = (tmp2 - tmp3);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(71)
	int tmp5 = ::Math_obj::round(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(71)
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
	::maps::MapObject_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void Tile_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(tileCollidable,"tileCollidable");
	HX_VISIT_MEMBER_NAME(tileFatalDirections,"tileFatalDirections");
	::maps::MapObject_obj::__Visit(HX_VISIT_ARG);
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
	__mClass->mName = HX_HCSTRING("maps.Tile","\xc5","\x0c","\x9a","\x5d");
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
