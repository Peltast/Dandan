#include <hxcpp.h>

#include "hxMath.h"
#ifndef INCLUDED_Main
#include <Main.h>
#endif
#ifndef INCLUDED_maps_Checkpoint
#include <maps/Checkpoint.h>
#endif
#ifndef INCLUDED_maps_MapObject
#include <maps/MapObject.h>
#endif
#ifndef INCLUDED_maps_ObjectFactory
#include <maps/ObjectFactory.h>
#endif
#ifndef INCLUDED_maps_Portal
#include <maps/Portal.h>
#endif
#ifndef INCLUDED_maps_Tile
#include <maps/Tile.h>
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

Void ObjectFactory_obj::__construct()
{
HX_STACK_FRAME("maps.ObjectFactory","new",0x3087da46,"maps.ObjectFactory.new","maps/ObjectFactory.hx",52,0xb5ae61eb)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(53)
	this->tileSize = (int)16;
	HX_STACK_LINE(54)
	this->tileSheetWidth = (int)320;
	HX_STACK_LINE(56)
	::openfl::display::Bitmap tmp = ::Main_obj::getBitmapAsset(HX_HCSTRING("assets/tilesheet.png","\xa0","\x00","\xe6","\x6a"));		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(56)
	this->tileSheet = tmp;
	HX_STACK_LINE(58)
	this->tileIndexTypes = Array_obj< ::Dynamic >::__new();
	HX_STACK_LINE(60)
	{
		HX_STACK_LINE(60)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(60)
		while((true)){
			HX_STACK_LINE(60)
			bool tmp1 = (_g < (int)10);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(60)
			bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(60)
			if ((tmp2)){
				HX_STACK_LINE(60)
				break;
			}
			HX_STACK_LINE(60)
			int tmp3 = (_g)++;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(60)
			int i = tmp3;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(61)
			this->tileIndexTypes->push(Array_obj< int >::__new());
		}
	}
	HX_STACK_LINE(64)
	this->assignTileIndexTypes();
}
;
	return null();
}

//ObjectFactory_obj::~ObjectFactory_obj() { }

Dynamic ObjectFactory_obj::__CreateEmpty() { return  new ObjectFactory_obj; }
hx::ObjectPtr< ObjectFactory_obj > ObjectFactory_obj::__new()
{  hx::ObjectPtr< ObjectFactory_obj > _result_ = new ObjectFactory_obj();
	_result_->__construct();
	return _result_;}

Dynamic ObjectFactory_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< ObjectFactory_obj > _result_ = new ObjectFactory_obj();
	_result_->__construct();
	return _result_;}

Void ObjectFactory_obj::assignTileIndexTypes( ){
{
		HX_STACK_FRAME("maps.ObjectFactory","assignTileIndexTypes",0x83a6dabe,"maps.ObjectFactory.assignTileIndexTypes","maps/ObjectFactory.hx",66,0xb5ae61eb)
		HX_STACK_THIS(this)
		HX_STACK_LINE(68)
		int tmp = ::maps::ObjectFactory_obj::TILE_CHECKPOINT;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(68)
		this->tileIndexTypes->__get((int)1).StaticCast< Array< int > >()[(int)14] = tmp;
		HX_STACK_LINE(69)
		int tmp1 = ::maps::ObjectFactory_obj::TILE_ENDPOINT;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(69)
		this->tileIndexTypes->__get((int)0).StaticCast< Array< int > >()[(int)15] = tmp1;
		HX_STACK_LINE(70)
		int tmp2 = ::maps::ObjectFactory_obj::TILE_STARTPOINT;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(70)
		this->tileIndexTypes->__get((int)1).StaticCast< Array< int > >()[(int)15] = tmp2;
		HX_STACK_LINE(72)
		int tmp3 = ::maps::ObjectFactory_obj::TILE_PLATFORM;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(72)
		this->tileIndexTypes->__get((int)0).StaticCast< Array< int > >()[(int)0] = tmp3;
		HX_STACK_LINE(73)
		int tmp4 = ::maps::ObjectFactory_obj::TILE_PLATFORM;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(73)
		this->tileIndexTypes->__get((int)1).StaticCast< Array< int > >()[(int)0] = tmp4;
		HX_STACK_LINE(74)
		int tmp5 = ::maps::ObjectFactory_obj::TILE_PLATFORM;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(74)
		this->tileIndexTypes->__get((int)2).StaticCast< Array< int > >()[(int)0] = tmp5;
		HX_STACK_LINE(75)
		int tmp6 = ::maps::ObjectFactory_obj::TILE_FATAL_LR;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(75)
		this->tileIndexTypes->__get((int)0).StaticCast< Array< int > >()[(int)1] = tmp6;
		HX_STACK_LINE(76)
		int tmp7 = ::maps::ObjectFactory_obj::TILE_FATAL_LR;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(76)
		this->tileIndexTypes->__get((int)1).StaticCast< Array< int > >()[(int)1] = tmp7;
		HX_STACK_LINE(77)
		int tmp8 = ::maps::ObjectFactory_obj::TILE_FATAL_LR;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(77)
		this->tileIndexTypes->__get((int)2).StaticCast< Array< int > >()[(int)1] = tmp8;
		HX_STACK_LINE(79)
		int tmp9 = ::maps::ObjectFactory_obj::TILE_PLATFORM;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(79)
		this->tileIndexTypes->__get((int)4).StaticCast< Array< int > >()[(int)0] = tmp9;
		HX_STACK_LINE(80)
		int tmp10 = ::maps::ObjectFactory_obj::TILE_PLATFORM;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(80)
		this->tileIndexTypes->__get((int)4).StaticCast< Array< int > >()[(int)1] = tmp10;
		HX_STACK_LINE(81)
		int tmp11 = ::maps::ObjectFactory_obj::TILE_PLATFORM;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(81)
		this->tileIndexTypes->__get((int)4).StaticCast< Array< int > >()[(int)2] = tmp11;
		HX_STACK_LINE(82)
		int tmp12 = ::maps::ObjectFactory_obj::TILE_FATAL_UP;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(82)
		this->tileIndexTypes->__get((int)4).StaticCast< Array< int > >()[(int)3] = tmp12;
		HX_STACK_LINE(83)
		int tmp13 = ::maps::ObjectFactory_obj::TILE_FATAL_UP;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(83)
		this->tileIndexTypes->__get((int)4).StaticCast< Array< int > >()[(int)4] = tmp13;
		HX_STACK_LINE(84)
		int tmp14 = ::maps::ObjectFactory_obj::TILE_FATAL_UP;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(84)
		this->tileIndexTypes->__get((int)4).StaticCast< Array< int > >()[(int)5] = tmp14;
		HX_STACK_LINE(85)
		int tmp15 = ::maps::ObjectFactory_obj::TILE_FATAL_UD;		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(85)
		this->tileIndexTypes->__get((int)4).StaticCast< Array< int > >()[(int)6] = tmp15;
		HX_STACK_LINE(86)
		int tmp16 = ::maps::ObjectFactory_obj::TILE_FATAL_UD;		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(86)
		this->tileIndexTypes->__get((int)4).StaticCast< Array< int > >()[(int)7] = tmp16;
		HX_STACK_LINE(87)
		int tmp17 = ::maps::ObjectFactory_obj::TILE_FATAL_UD;		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(87)
		this->tileIndexTypes->__get((int)4).StaticCast< Array< int > >()[(int)8] = tmp17;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ObjectFactory_obj,assignTileIndexTypes,(void))

int ObjectFactory_obj::getIndexType( int tileIndex){
	HX_STACK_FRAME("maps.ObjectFactory","getIndexType",0xa2d7d0d0,"maps.ObjectFactory.getIndexType","maps/ObjectFactory.hx",90,0xb5ae61eb)
	HX_STACK_THIS(this)
	HX_STACK_ARG(tileIndex,"tileIndex")
	HX_STACK_LINE(92)
	int tmp = tileIndex;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(92)
	int tmp1 = this->tileSize;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(92)
	int tmp2 = (tmp * tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(92)
	int temp = tmp2;		HX_STACK_VAR(temp,"temp");
	HX_STACK_LINE(93)
	int tmp3 = temp;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(93)
	int tmp4 = this->tileSheetWidth;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(93)
	Float tmp5 = (Float(tmp3) / Float(tmp4));		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(93)
	int tmp6 = ::Math_obj::floor(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(93)
	int y = tmp6;		HX_STACK_VAR(y,"y");
	HX_STACK_LINE(94)
	int tmp7 = temp;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(94)
	int tmp8 = this->tileSheetWidth;		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(94)
	int tmp9 = hx::Mod(tmp7,tmp8);		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(94)
	int tmp10 = this->tileSize;		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(94)
	Float tmp11 = (Float(tmp9) / Float(tmp10));		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(94)
	Float tmp12 = (tmp11 - (int)1);		HX_STACK_VAR(tmp12,"tmp12");
	HX_STACK_LINE(94)
	int tmp13 = ::Math_obj::floor(tmp12);		HX_STACK_VAR(tmp13,"tmp13");
	HX_STACK_LINE(94)
	int x = tmp13;		HX_STACK_VAR(x,"x");
	HX_STACK_LINE(96)
	int tmp14 = y;		HX_STACK_VAR(tmp14,"tmp14");
	HX_STACK_LINE(96)
	int tmp15 = this->tileIndexTypes->length;		HX_STACK_VAR(tmp15,"tmp15");
	HX_STACK_LINE(96)
	bool tmp16 = (tmp14 >= tmp15);		HX_STACK_VAR(tmp16,"tmp16");
	HX_STACK_LINE(96)
	if ((tmp16)){
		HX_STACK_LINE(97)
		return (int)-1;
	}
	else{
		HX_STACK_LINE(98)
		int tmp17 = x;		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(98)
		int tmp18 = this->tileIndexTypes->__get(y).StaticCast< Array< int > >()->length;		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(98)
		bool tmp19 = (tmp17 >= tmp18);		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(98)
		if ((tmp19)){
			HX_STACK_LINE(99)
			return (int)-1;
		}
		else{
			HX_STACK_LINE(101)
			int tmp20 = this->tileIndexTypes->__get(y).StaticCast< Array< int > >()->__get(x);		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(101)
			bool tmp21 = (tmp20 != (int)0);		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(101)
			if ((tmp21)){
				HX_STACK_LINE(102)
				int tmp22 = this->tileIndexTypes->__get(y).StaticCast< Array< int > >()->__get(x);		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(102)
				return tmp22;
			}
			else{
				HX_STACK_LINE(104)
				return (int)-1;
			}
		}
	}
	HX_STACK_LINE(96)
	return (int)0;
}


HX_DEFINE_DYNAMIC_FUNC1(ObjectFactory_obj,getIndexType,return )

bool ObjectFactory_obj::isObjectTile( int index){
	HX_STACK_FRAME("maps.ObjectFactory","isObjectTile",0x2bbef371,"maps.ObjectFactory.isObjectTile","maps/ObjectFactory.hx",108,0xb5ae61eb)
	HX_STACK_THIS(this)
	HX_STACK_ARG(index,"index")
	HX_STACK_LINE(109)
	int tmp = index;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(109)
	int tmp1 = this->getIndexType(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(109)
	int indexType = tmp1;		HX_STACK_VAR(indexType,"indexType");
	HX_STACK_LINE(111)
	int tmp2 = indexType;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(111)
	int tmp3 = ::maps::ObjectFactory_obj::tileTypes->indexOf(tmp2,null());		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(111)
	bool tmp4 = (tmp3 >= (int)0);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(111)
	if ((tmp4)){
		HX_STACK_LINE(112)
		return true;
	}
	HX_STACK_LINE(113)
	return false;
}


HX_DEFINE_DYNAMIC_FUNC1(ObjectFactory_obj,isObjectTile,return )

bool ObjectFactory_obj::isObjectCheckpoint( int index){
	HX_STACK_FRAME("maps.ObjectFactory","isObjectCheckpoint",0xdc40830b,"maps.ObjectFactory.isObjectCheckpoint","maps/ObjectFactory.hx",115,0xb5ae61eb)
	HX_STACK_THIS(this)
	HX_STACK_ARG(index,"index")
	HX_STACK_LINE(116)
	int tmp = index;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(116)
	int tmp1 = this->getIndexType(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(116)
	int indexType = tmp1;		HX_STACK_VAR(indexType,"indexType");
	HX_STACK_LINE(118)
	int tmp2 = indexType;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(118)
	int tmp3 = ::maps::ObjectFactory_obj::TILE_CHECKPOINT;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(118)
	bool tmp4 = (tmp2 == tmp3);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(118)
	if ((tmp4)){
		HX_STACK_LINE(119)
		return true;
	}
	HX_STACK_LINE(120)
	return false;
}


HX_DEFINE_DYNAMIC_FUNC1(ObjectFactory_obj,isObjectCheckpoint,return )

bool ObjectFactory_obj::isMapStart( int index){
	HX_STACK_FRAME("maps.ObjectFactory","isMapStart",0x9d9e950a,"maps.ObjectFactory.isMapStart","maps/ObjectFactory.hx",122,0xb5ae61eb)
	HX_STACK_THIS(this)
	HX_STACK_ARG(index,"index")
	HX_STACK_LINE(123)
	int tmp = index;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(123)
	int tmp1 = this->getIndexType(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(123)
	int indexType = tmp1;		HX_STACK_VAR(indexType,"indexType");
	HX_STACK_LINE(125)
	int tmp2 = indexType;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(125)
	int tmp3 = ::maps::ObjectFactory_obj::TILE_STARTPOINT;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(125)
	bool tmp4 = (tmp2 == tmp3);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(125)
	if ((tmp4)){
		HX_STACK_LINE(126)
		return true;
	}
	HX_STACK_LINE(127)
	return false;
}


HX_DEFINE_DYNAMIC_FUNC1(ObjectFactory_obj,isMapStart,return )

bool ObjectFactory_obj::isMapEnd( int index){
	HX_STACK_FRAME("maps.ObjectFactory","isMapEnd",0xd10b2a83,"maps.ObjectFactory.isMapEnd","maps/ObjectFactory.hx",129,0xb5ae61eb)
	HX_STACK_THIS(this)
	HX_STACK_ARG(index,"index")
	HX_STACK_LINE(130)
	int tmp = index;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(130)
	int tmp1 = this->getIndexType(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(130)
	int indexType = tmp1;		HX_STACK_VAR(indexType,"indexType");
	HX_STACK_LINE(132)
	int tmp2 = indexType;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(132)
	int tmp3 = ::maps::ObjectFactory_obj::TILE_ENDPOINT;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(132)
	bool tmp4 = (tmp2 == tmp3);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(132)
	if ((tmp4)){
		HX_STACK_LINE(133)
		return true;
	}
	HX_STACK_LINE(134)
	return false;
}


HX_DEFINE_DYNAMIC_FUNC1(ObjectFactory_obj,isMapEnd,return )

::maps::Checkpoint ObjectFactory_obj::createCheckpoint( int index){
	HX_STACK_FRAME("maps.ObjectFactory","createCheckpoint",0x377302fe,"maps.ObjectFactory.createCheckpoint","maps/ObjectFactory.hx",137,0xb5ae61eb)
	HX_STACK_THIS(this)
	HX_STACK_ARG(index,"index")
	HX_STACK_LINE(138)
	int tmp = index;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(138)
	int tmp1 = this->getIndexType(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(138)
	int indexType = tmp1;		HX_STACK_VAR(indexType,"indexType");
	HX_STACK_LINE(140)
	::openfl::display::Bitmap tmp2 = ::Main_obj::getBitmapAsset(HX_HCSTRING("assets/checkpoint.png","\x0f","\x6f","\xee","\x50"));		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(140)
	::openfl::display::Bitmap checkpointBmp = tmp2;		HX_STACK_VAR(checkpointBmp,"checkpointBmp");
	HX_STACK_LINE(141)
	::maps::Checkpoint tmp3 = ::maps::Checkpoint_obj::__new(false,checkpointBmp);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(141)
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC1(ObjectFactory_obj,createCheckpoint,return )

::maps::Portal ObjectFactory_obj::createPortal( int index){
	HX_STACK_FRAME("maps.ObjectFactory","createPortal",0xa9e54422,"maps.ObjectFactory.createPortal","maps/ObjectFactory.hx",143,0xb5ae61eb)
	HX_STACK_THIS(this)
	HX_STACK_ARG(index,"index")
	HX_STACK_LINE(144)
	::openfl::display::Bitmap tmp = ::Main_obj::getBitmapAsset(HX_HCSTRING("assets/portal.png","\x33","\xef","\x8f","\x9f"));		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(144)
	::openfl::display::Bitmap portalBmp = tmp;		HX_STACK_VAR(portalBmp,"portalBmp");
	HX_STACK_LINE(146)
	::openfl::display::Bitmap tmp1 = portalBmp;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(146)
	::openfl::display::Bitmap tmp2 = this->getBitmap((int)1,tmp1,(int)48);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(146)
	::maps::Portal tmp3 = ::maps::Portal_obj::__new(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(146)
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC1(ObjectFactory_obj,createPortal,return )

::maps::Tile ObjectFactory_obj::createTile( int tileIndex){
	HX_STACK_FRAME("maps.ObjectFactory","createTile",0x872c2b24,"maps.ObjectFactory.createTile","maps/ObjectFactory.hx",148,0xb5ae61eb)
	HX_STACK_THIS(this)
	HX_STACK_ARG(tileIndex,"tileIndex")
	HX_STACK_LINE(150)
	int tmp = tileIndex;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(150)
	int tmp1 = this->getIndexType(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(150)
	int indexType = tmp1;		HX_STACK_VAR(indexType,"indexType");
	HX_STACK_LINE(152)
	int tmp2 = indexType;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(152)
	int tmp3 = ::maps::ObjectFactory_obj::TILE_PLATFORM;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(152)
	bool tmp4 = (tmp2 == tmp3);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(152)
	if ((tmp4)){
		HX_STACK_LINE(153)
		int tmp5 = tileIndex;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(153)
		int tmp6 = indexType;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(153)
		::maps::Tile tmp7 = this->createPlatformTile(tmp5,tmp6);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(153)
		return tmp7;
	}
	else{
		HX_STACK_LINE(155)
		int tmp5 = indexType;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(155)
		int tmp6 = ::maps::ObjectFactory_obj::fatalTypes->indexOf(tmp5,null());		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(155)
		bool tmp7 = (tmp6 >= (int)0);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(155)
		if ((tmp7)){
			HX_STACK_LINE(156)
			int tmp8 = tileIndex;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(156)
			int tmp9 = indexType;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(156)
			::maps::Tile tmp10 = this->createSpikeTile(tmp8,tmp9);		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(156)
			return tmp10;
		}
		else{
			HX_STACK_LINE(158)
			int tmp8 = indexType;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(158)
			int tmp9 = ::maps::ObjectFactory_obj::TILE_BACKGROUND;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(158)
			bool tmp10 = (tmp8 == tmp9);		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(158)
			if ((tmp10)){
				HX_STACK_LINE(159)
				int tmp11 = tileIndex;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(159)
				int tmp12 = indexType;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(159)
				::maps::Tile tmp13 = this->createBGTile(tmp11,tmp12);		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(159)
				return tmp13;
			}
		}
	}
	HX_STACK_LINE(161)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ObjectFactory_obj,createTile,return )

::maps::Tile ObjectFactory_obj::createPlatformTile( int tileIndex,int indexType){
	HX_STACK_FRAME("maps.ObjectFactory","createPlatformTile",0xbf6bc577,"maps.ObjectFactory.createPlatformTile","maps/ObjectFactory.hx",164,0xb5ae61eb)
	HX_STACK_THIS(this)
	HX_STACK_ARG(tileIndex,"tileIndex")
	HX_STACK_ARG(indexType,"indexType")
	HX_STACK_LINE(166)
	int tmp = tileIndex;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(166)
	::openfl::display::Bitmap tmp1 = this->getTileBitmap(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(166)
	::maps::Tile tmp2 = ::maps::Tile_obj::__new(tmp1,true,Array_obj< int >::__new().Add((int)0).Add((int)0).Add((int)0).Add((int)0));		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(166)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC2(ObjectFactory_obj,createPlatformTile,return )

::maps::Tile ObjectFactory_obj::createSpikeTile( int tileIndex,int indexType){
	HX_STACK_FRAME("maps.ObjectFactory","createSpikeTile",0xbcd2fc5e,"maps.ObjectFactory.createSpikeTile","maps/ObjectFactory.hx",168,0xb5ae61eb)
	HX_STACK_THIS(this)
	HX_STACK_ARG(tileIndex,"tileIndex")
	HX_STACK_ARG(indexType,"indexType")
	HX_STACK_LINE(170)
	Array< int > fatalDirections = Array_obj< int >::__new().Add((int)0).Add((int)0).Add((int)0).Add((int)0);		HX_STACK_VAR(fatalDirections,"fatalDirections");
	HX_STACK_LINE(171)
	int tmp = indexType;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(171)
	int tmp1 = ::maps::ObjectFactory_obj::TILE_FATAL_LEFT;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(171)
	bool tmp2 = (tmp == tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(171)
	if ((tmp2)){
		HX_STACK_LINE(171)
		fatalDirections[(int)0] = (int)1;
	}
	else{
		HX_STACK_LINE(172)
		int tmp3 = indexType;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(172)
		int tmp4 = ::maps::ObjectFactory_obj::TILE_FATAL_RIGHT;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(172)
		bool tmp5 = (tmp3 == tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(172)
		if ((tmp5)){
			HX_STACK_LINE(172)
			fatalDirections[(int)1] = (int)1;
		}
		else{
			HX_STACK_LINE(173)
			int tmp6 = indexType;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(173)
			int tmp7 = ::maps::ObjectFactory_obj::TILE_FATAL_UP;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(173)
			bool tmp8 = (tmp6 == tmp7);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(173)
			if ((tmp8)){
				HX_STACK_LINE(173)
				fatalDirections[(int)2] = (int)1;
			}
			else{
				HX_STACK_LINE(174)
				int tmp9 = indexType;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(174)
				int tmp10 = ::maps::ObjectFactory_obj::TILE_FATAL_DOWN;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(174)
				bool tmp11 = (tmp9 == tmp10);		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(174)
				if ((tmp11)){
					HX_STACK_LINE(174)
					fatalDirections[(int)3] = (int)1;
				}
				else{
					HX_STACK_LINE(175)
					int tmp12 = indexType;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(175)
					int tmp13 = ::maps::ObjectFactory_obj::TILE_FATAL_LR;		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(175)
					bool tmp14 = (tmp12 == tmp13);		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(175)
					if ((tmp14)){
						HX_STACK_LINE(175)
						fatalDirections = Array_obj< int >::__new().Add((int)1).Add((int)1).Add((int)0).Add((int)0);
					}
					else{
						HX_STACK_LINE(176)
						int tmp15 = indexType;		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(176)
						int tmp16 = ::maps::ObjectFactory_obj::TILE_FATAL_UD;		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(176)
						bool tmp17 = (tmp15 == tmp16);		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(176)
						if ((tmp17)){
							HX_STACK_LINE(176)
							fatalDirections = Array_obj< int >::__new().Add((int)0).Add((int)0).Add((int)1).Add((int)1);
						}
						else{
							HX_STACK_LINE(177)
							int tmp18 = indexType;		HX_STACK_VAR(tmp18,"tmp18");
							HX_STACK_LINE(177)
							int tmp19 = ::maps::ObjectFactory_obj::TILE_FATAL_ALL;		HX_STACK_VAR(tmp19,"tmp19");
							HX_STACK_LINE(177)
							bool tmp20 = (tmp18 == tmp19);		HX_STACK_VAR(tmp20,"tmp20");
							HX_STACK_LINE(177)
							if ((tmp20)){
								HX_STACK_LINE(177)
								fatalDirections = Array_obj< int >::__new().Add((int)1).Add((int)1).Add((int)1).Add((int)1);
							}
						}
					}
				}
			}
		}
	}
	HX_STACK_LINE(179)
	int tmp3 = tileIndex;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(179)
	::openfl::display::Bitmap tmp4 = this->getTileBitmap(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(179)
	::maps::Tile tmp5 = ::maps::Tile_obj::__new(tmp4,true,fatalDirections);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(179)
	return tmp5;
}


HX_DEFINE_DYNAMIC_FUNC2(ObjectFactory_obj,createSpikeTile,return )

::maps::Tile ObjectFactory_obj::createBGTile( int tileIndex,int indexType){
	HX_STACK_FRAME("maps.ObjectFactory","createBGTile",0xf5024ce9,"maps.ObjectFactory.createBGTile","maps/ObjectFactory.hx",181,0xb5ae61eb)
	HX_STACK_THIS(this)
	HX_STACK_ARG(tileIndex,"tileIndex")
	HX_STACK_ARG(indexType,"indexType")
	HX_STACK_LINE(183)
	int tmp = tileIndex;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(183)
	::openfl::display::Bitmap tmp1 = this->getTileBitmap(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(183)
	::maps::Tile tmp2 = ::maps::Tile_obj::__new(tmp1,false,Array_obj< int >::__new().Add((int)0).Add((int)0).Add((int)0).Add((int)0));		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(183)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC2(ObjectFactory_obj,createBGTile,return )

::openfl::display::Bitmap ObjectFactory_obj::getTileBitmap( int index){
	HX_STACK_FRAME("maps.ObjectFactory","getTileBitmap",0x44e2e759,"maps.ObjectFactory.getTileBitmap","maps/ObjectFactory.hx",186,0xb5ae61eb)
	HX_STACK_THIS(this)
	HX_STACK_ARG(index,"index")
	HX_STACK_LINE(187)
	int tmp = index;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(187)
	::openfl::display::Bitmap tmp1 = this->tileSheet;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(187)
	int tmp2 = this->tileSheetWidth;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(187)
	::openfl::display::Bitmap tmp3 = this->getBitmap(tmp,tmp1,tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(187)
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC1(ObjectFactory_obj,getTileBitmap,return )

::openfl::display::Bitmap ObjectFactory_obj::getBitmap( int index,::openfl::display::Bitmap sheet,int sheetWidth){
	HX_STACK_FRAME("maps.ObjectFactory","getBitmap",0x5a0c138b,"maps.ObjectFactory.getBitmap","maps/ObjectFactory.hx",190,0xb5ae61eb)
	HX_STACK_THIS(this)
	HX_STACK_ARG(index,"index")
	HX_STACK_ARG(sheet,"sheet")
	HX_STACK_ARG(sheetWidth,"sheetWidth")
	HX_STACK_LINE(192)
	int tmp = index;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(192)
	int tmp1 = this->tileSize;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(192)
	int tmp2 = (tmp * tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(192)
	int temp = tmp2;		HX_STACK_VAR(temp,"temp");
	HX_STACK_LINE(193)
	Float tmp3 = (Float(temp) / Float(sheetWidth));		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(193)
	int tmp4 = ::Math_obj::floor(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(193)
	int y = tmp4;		HX_STACK_VAR(y,"y");
	HX_STACK_LINE(194)
	int tmp5 = hx::Mod(temp,sheetWidth);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(194)
	int tmp6 = this->tileSize;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(194)
	Float tmp7 = (Float(tmp5) / Float(tmp6));		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(194)
	Float tmp8 = (tmp7 - (int)1);		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(194)
	int tmp9 = ::Math_obj::floor(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(194)
	int x = tmp9;		HX_STACK_VAR(x,"x");
	HX_STACK_LINE(196)
	int tmp10 = x;		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(196)
	int tmp11 = this->tileSize;		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(196)
	int tmp12 = (tmp10 * tmp11);		HX_STACK_VAR(tmp12,"tmp12");
	HX_STACK_LINE(196)
	int tmp13 = y;		HX_STACK_VAR(tmp13,"tmp13");
	HX_STACK_LINE(196)
	int tmp14 = this->tileSize;		HX_STACK_VAR(tmp14,"tmp14");
	HX_STACK_LINE(196)
	int tmp15 = (tmp13 * tmp14);		HX_STACK_VAR(tmp15,"tmp15");
	HX_STACK_LINE(196)
	int tmp16 = this->tileSize;		HX_STACK_VAR(tmp16,"tmp16");
	HX_STACK_LINE(196)
	int tmp17 = this->tileSize;		HX_STACK_VAR(tmp17,"tmp17");
	HX_STACK_LINE(196)
	::openfl::geom::Rectangle tmp18 = ::openfl::geom::Rectangle_obj::__new(tmp12,tmp15,tmp16,tmp17);		HX_STACK_VAR(tmp18,"tmp18");
	HX_STACK_LINE(196)
	::openfl::geom::Rectangle frame = tmp18;		HX_STACK_VAR(frame,"frame");
	HX_STACK_LINE(197)
	int tmp19 = this->tileSize;		HX_STACK_VAR(tmp19,"tmp19");
	HX_STACK_LINE(197)
	int tmp20 = this->tileSize;		HX_STACK_VAR(tmp20,"tmp20");
	HX_STACK_LINE(197)
	::openfl::display::BitmapData tmp21 = ::openfl::display::BitmapData_obj::__new(tmp19,tmp20,null(),null());		HX_STACK_VAR(tmp21,"tmp21");
	HX_STACK_LINE(197)
	::openfl::display::Bitmap tmp22 = ::openfl::display::Bitmap_obj::__new(tmp21,null(),null());		HX_STACK_VAR(tmp22,"tmp22");
	HX_STACK_LINE(197)
	::openfl::display::Bitmap bitmap = tmp22;		HX_STACK_VAR(bitmap,"bitmap");
	HX_STACK_LINE(198)
	::openfl::display::BitmapData tmp23 = sheet->bitmapData;		HX_STACK_VAR(tmp23,"tmp23");
	HX_STACK_LINE(198)
	::openfl::geom::Rectangle tmp24 = frame;		HX_STACK_VAR(tmp24,"tmp24");
	HX_STACK_LINE(198)
	::openfl::geom::Point tmp25 = ::openfl::geom::Point_obj::__new(null(),null());		HX_STACK_VAR(tmp25,"tmp25");
	HX_STACK_LINE(198)
	bitmap->bitmapData->copyPixels(tmp23,tmp24,tmp25,null(),null(),null());
	HX_STACK_LINE(200)
	::openfl::display::Bitmap tmp26 = bitmap;		HX_STACK_VAR(tmp26,"tmp26");
	HX_STACK_LINE(200)
	return tmp26;
}


HX_DEFINE_DYNAMIC_FUNC3(ObjectFactory_obj,getBitmap,return )

::maps::ObjectFactory ObjectFactory_obj::singleton;

::maps::ObjectFactory ObjectFactory_obj::getSingleton( ){
	HX_STACK_FRAME("maps.ObjectFactory","getSingleton",0x5140eaef,"maps.ObjectFactory.getSingleton","maps/ObjectFactory.hx",17,0xb5ae61eb)
	HX_STACK_LINE(19)
	::maps::ObjectFactory tmp = ::maps::ObjectFactory_obj::singleton;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(19)
	bool tmp1 = (tmp == null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(19)
	if ((tmp1)){
		HX_STACK_LINE(20)
		::maps::ObjectFactory tmp2 = ::maps::ObjectFactory_obj::__new();		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(20)
		::maps::ObjectFactory_obj::singleton = tmp2;
	}
	HX_STACK_LINE(21)
	::maps::ObjectFactory tmp2 = ::maps::ObjectFactory_obj::singleton;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(21)
	return tmp2;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(ObjectFactory_obj,getSingleton,return )

int ObjectFactory_obj::TILE_STARTPOINT;

int ObjectFactory_obj::TILE_ENDPOINT;

int ObjectFactory_obj::TILE_CHECKPOINT;

int ObjectFactory_obj::TILE_BACKGROUND;

int ObjectFactory_obj::TILE_PLATFORM;

int ObjectFactory_obj::TILE_FATAL_UP;

int ObjectFactory_obj::TILE_FATAL_DOWN;

int ObjectFactory_obj::TILE_FATAL_LEFT;

int ObjectFactory_obj::TILE_FATAL_RIGHT;

int ObjectFactory_obj::TILE_FATAL_LR;

int ObjectFactory_obj::TILE_FATAL_UD;

int ObjectFactory_obj::TILE_FATAL_ALL;

Array< int > ObjectFactory_obj::tileTypes;

Array< int > ObjectFactory_obj::fatalTypes;


ObjectFactory_obj::ObjectFactory_obj()
{
}

void ObjectFactory_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ObjectFactory);
	HX_MARK_MEMBER_NAME(tileSize,"tileSize");
	HX_MARK_MEMBER_NAME(tileSheetWidth,"tileSheetWidth");
	HX_MARK_MEMBER_NAME(tileSheet,"tileSheet");
	HX_MARK_MEMBER_NAME(tileIndexTypes,"tileIndexTypes");
	HX_MARK_END_CLASS();
}

void ObjectFactory_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(tileSize,"tileSize");
	HX_VISIT_MEMBER_NAME(tileSheetWidth,"tileSheetWidth");
	HX_VISIT_MEMBER_NAME(tileSheet,"tileSheet");
	HX_VISIT_MEMBER_NAME(tileIndexTypes,"tileIndexTypes");
}

Dynamic ObjectFactory_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"tileSize") ) { return tileSize; }
		if (HX_FIELD_EQ(inName,"isMapEnd") ) { return isMapEnd_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"tileSheet") ) { return tileSheet; }
		if (HX_FIELD_EQ(inName,"getBitmap") ) { return getBitmap_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"isMapStart") ) { return isMapStart_dyn(); }
		if (HX_FIELD_EQ(inName,"createTile") ) { return createTile_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"getIndexType") ) { return getIndexType_dyn(); }
		if (HX_FIELD_EQ(inName,"isObjectTile") ) { return isObjectTile_dyn(); }
		if (HX_FIELD_EQ(inName,"createPortal") ) { return createPortal_dyn(); }
		if (HX_FIELD_EQ(inName,"createBGTile") ) { return createBGTile_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"getTileBitmap") ) { return getTileBitmap_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"tileSheetWidth") ) { return tileSheetWidth; }
		if (HX_FIELD_EQ(inName,"tileIndexTypes") ) { return tileIndexTypes; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"createSpikeTile") ) { return createSpikeTile_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"createCheckpoint") ) { return createCheckpoint_dyn(); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"isObjectCheckpoint") ) { return isObjectCheckpoint_dyn(); }
		if (HX_FIELD_EQ(inName,"createPlatformTile") ) { return createPlatformTile_dyn(); }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"assignTileIndexTypes") ) { return assignTileIndexTypes_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

bool ObjectFactory_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 9:
		if (HX_FIELD_EQ(inName,"singleton") ) { outValue = singleton; return true;  }
		if (HX_FIELD_EQ(inName,"tileTypes") ) { outValue = tileTypes; return true;  }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"fatalTypes") ) { outValue = fatalTypes; return true;  }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"getSingleton") ) { outValue = getSingleton_dyn(); return true;  }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"TILE_ENDPOINT") ) { outValue = TILE_ENDPOINT; return true;  }
		if (HX_FIELD_EQ(inName,"TILE_PLATFORM") ) { outValue = TILE_PLATFORM; return true;  }
		if (HX_FIELD_EQ(inName,"TILE_FATAL_UP") ) { outValue = TILE_FATAL_UP; return true;  }
		if (HX_FIELD_EQ(inName,"TILE_FATAL_LR") ) { outValue = TILE_FATAL_LR; return true;  }
		if (HX_FIELD_EQ(inName,"TILE_FATAL_UD") ) { outValue = TILE_FATAL_UD; return true;  }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"TILE_FATAL_ALL") ) { outValue = TILE_FATAL_ALL; return true;  }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"TILE_STARTPOINT") ) { outValue = TILE_STARTPOINT; return true;  }
		if (HX_FIELD_EQ(inName,"TILE_CHECKPOINT") ) { outValue = TILE_CHECKPOINT; return true;  }
		if (HX_FIELD_EQ(inName,"TILE_BACKGROUND") ) { outValue = TILE_BACKGROUND; return true;  }
		if (HX_FIELD_EQ(inName,"TILE_FATAL_DOWN") ) { outValue = TILE_FATAL_DOWN; return true;  }
		if (HX_FIELD_EQ(inName,"TILE_FATAL_LEFT") ) { outValue = TILE_FATAL_LEFT; return true;  }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"TILE_FATAL_RIGHT") ) { outValue = TILE_FATAL_RIGHT; return true;  }
	}
	return false;
}

Dynamic ObjectFactory_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"tileSize") ) { tileSize=inValue.Cast< int >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"tileSheet") ) { tileSheet=inValue.Cast< ::openfl::display::Bitmap >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"tileSheetWidth") ) { tileSheetWidth=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"tileIndexTypes") ) { tileIndexTypes=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool ObjectFactory_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 9:
		if (HX_FIELD_EQ(inName,"singleton") ) { singleton=ioValue.Cast< ::maps::ObjectFactory >(); return true; }
		if (HX_FIELD_EQ(inName,"tileTypes") ) { tileTypes=ioValue.Cast< Array< int > >(); return true; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"fatalTypes") ) { fatalTypes=ioValue.Cast< Array< int > >(); return true; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"TILE_ENDPOINT") ) { TILE_ENDPOINT=ioValue.Cast< int >(); return true; }
		if (HX_FIELD_EQ(inName,"TILE_PLATFORM") ) { TILE_PLATFORM=ioValue.Cast< int >(); return true; }
		if (HX_FIELD_EQ(inName,"TILE_FATAL_UP") ) { TILE_FATAL_UP=ioValue.Cast< int >(); return true; }
		if (HX_FIELD_EQ(inName,"TILE_FATAL_LR") ) { TILE_FATAL_LR=ioValue.Cast< int >(); return true; }
		if (HX_FIELD_EQ(inName,"TILE_FATAL_UD") ) { TILE_FATAL_UD=ioValue.Cast< int >(); return true; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"TILE_FATAL_ALL") ) { TILE_FATAL_ALL=ioValue.Cast< int >(); return true; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"TILE_STARTPOINT") ) { TILE_STARTPOINT=ioValue.Cast< int >(); return true; }
		if (HX_FIELD_EQ(inName,"TILE_CHECKPOINT") ) { TILE_CHECKPOINT=ioValue.Cast< int >(); return true; }
		if (HX_FIELD_EQ(inName,"TILE_BACKGROUND") ) { TILE_BACKGROUND=ioValue.Cast< int >(); return true; }
		if (HX_FIELD_EQ(inName,"TILE_FATAL_DOWN") ) { TILE_FATAL_DOWN=ioValue.Cast< int >(); return true; }
		if (HX_FIELD_EQ(inName,"TILE_FATAL_LEFT") ) { TILE_FATAL_LEFT=ioValue.Cast< int >(); return true; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"TILE_FATAL_RIGHT") ) { TILE_FATAL_RIGHT=ioValue.Cast< int >(); return true; }
	}
	return false;
}

void ObjectFactory_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("tileSize","\x0f","\xc7","\x59","\x86"));
	outFields->push(HX_HCSTRING("tileSheetWidth","\xb5","\x37","\x0c","\x29"));
	outFields->push(HX_HCSTRING("tileSheet","\x91","\x40","\x7b","\x07"));
	outFields->push(HX_HCSTRING("tileIndexTypes","\xd5","\xb8","\x6f","\x48"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsInt,(int)offsetof(ObjectFactory_obj,tileSize),HX_HCSTRING("tileSize","\x0f","\xc7","\x59","\x86")},
	{hx::fsInt,(int)offsetof(ObjectFactory_obj,tileSheetWidth),HX_HCSTRING("tileSheetWidth","\xb5","\x37","\x0c","\x29")},
	{hx::fsObject /*::openfl::display::Bitmap*/ ,(int)offsetof(ObjectFactory_obj,tileSheet),HX_HCSTRING("tileSheet","\x91","\x40","\x7b","\x07")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(ObjectFactory_obj,tileIndexTypes),HX_HCSTRING("tileIndexTypes","\xd5","\xb8","\x6f","\x48")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo sStaticStorageInfo[] = {
	{hx::fsObject /*::maps::ObjectFactory*/ ,(void *) &ObjectFactory_obj::singleton,HX_HCSTRING("singleton","\x0b","\xc5","\x7f","\xb7")},
	{hx::fsInt,(void *) &ObjectFactory_obj::TILE_STARTPOINT,HX_HCSTRING("TILE_STARTPOINT","\x5f","\x5d","\xc7","\xe7")},
	{hx::fsInt,(void *) &ObjectFactory_obj::TILE_ENDPOINT,HX_HCSTRING("TILE_ENDPOINT","\x06","\xf5","\x54","\x8b")},
	{hx::fsInt,(void *) &ObjectFactory_obj::TILE_CHECKPOINT,HX_HCSTRING("TILE_CHECKPOINT","\x39","\x87","\xa0","\xdb")},
	{hx::fsInt,(void *) &ObjectFactory_obj::TILE_BACKGROUND,HX_HCSTRING("TILE_BACKGROUND","\x9f","\xd4","\x6b","\xbe")},
	{hx::fsInt,(void *) &ObjectFactory_obj::TILE_PLATFORM,HX_HCSTRING("TILE_PLATFORM","\x24","\xd1","\xee","\xc1")},
	{hx::fsInt,(void *) &ObjectFactory_obj::TILE_FATAL_UP,HX_HCSTRING("TILE_FATAL_UP","\x87","\x85","\xb8","\x68")},
	{hx::fsInt,(void *) &ObjectFactory_obj::TILE_FATAL_DOWN,HX_HCSTRING("TILE_FATAL_DOWN","\x8e","\x1e","\xcd","\x60")},
	{hx::fsInt,(void *) &ObjectFactory_obj::TILE_FATAL_LEFT,HX_HCSTRING("TILE_FATAL_LEFT","\x33","\x2e","\x0f","\x66")},
	{hx::fsInt,(void *) &ObjectFactory_obj::TILE_FATAL_RIGHT,HX_HCSTRING("TILE_FATAL_RIGHT","\x10","\x4c","\x46","\x5e")},
	{hx::fsInt,(void *) &ObjectFactory_obj::TILE_FATAL_LR,HX_HCSTRING("TILE_FATAL_LR","\xb2","\x7d","\xb8","\x68")},
	{hx::fsInt,(void *) &ObjectFactory_obj::TILE_FATAL_UD,HX_HCSTRING("TILE_FATAL_UD","\x7b","\x85","\xb8","\x68")},
	{hx::fsInt,(void *) &ObjectFactory_obj::TILE_FATAL_ALL,HX_HCSTRING("TILE_FATAL_ALL","\x55","\x20","\xad","\x38")},
	{hx::fsObject /*Array< int >*/ ,(void *) &ObjectFactory_obj::tileTypes,HX_HCSTRING("tileTypes","\x6b","\xce","\x26","\xa6")},
	{hx::fsObject /*Array< int >*/ ,(void *) &ObjectFactory_obj::fatalTypes,HX_HCSTRING("fatalTypes","\xd5","\x19","\x26","\x14")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("tileSize","\x0f","\xc7","\x59","\x86"),
	HX_HCSTRING("tileSheetWidth","\xb5","\x37","\x0c","\x29"),
	HX_HCSTRING("tileSheet","\x91","\x40","\x7b","\x07"),
	HX_HCSTRING("tileIndexTypes","\xd5","\xb8","\x6f","\x48"),
	HX_HCSTRING("assignTileIndexTypes","\x64","\x67","\x2c","\x25"),
	HX_HCSTRING("getIndexType","\x76","\x47","\x6d","\x18"),
	HX_HCSTRING("isObjectTile","\x17","\x6a","\x54","\xa1"),
	HX_HCSTRING("isObjectCheckpoint","\x31","\x7a","\x3d","\x0b"),
	HX_HCSTRING("isMapStart","\x30","\xf6","\xfc","\x75"),
	HX_HCSTRING("isMapEnd","\x29","\xd6","\x6a","\x11"),
	HX_HCSTRING("createCheckpoint","\xa4","\xc4","\x7f","\x78"),
	HX_HCSTRING("createPortal","\xc8","\xba","\x7a","\x1f"),
	HX_HCSTRING("createTile","\x4a","\x8c","\x8a","\x5f"),
	HX_HCSTRING("createPlatformTile","\x9d","\xbc","\x68","\xee"),
	HX_HCSTRING("createSpikeTile","\x78","\xb1","\x44","\x9f"),
	HX_HCSTRING("createBGTile","\x8f","\xc3","\x97","\x6a"),
	HX_HCSTRING("getTileBitmap","\xf3","\x41","\x15","\xb2"),
	HX_HCSTRING("getBitmap","\x25","\x99","\x62","\x6d"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ObjectFactory_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(ObjectFactory_obj::singleton,"singleton");
	HX_MARK_MEMBER_NAME(ObjectFactory_obj::TILE_STARTPOINT,"TILE_STARTPOINT");
	HX_MARK_MEMBER_NAME(ObjectFactory_obj::TILE_ENDPOINT,"TILE_ENDPOINT");
	HX_MARK_MEMBER_NAME(ObjectFactory_obj::TILE_CHECKPOINT,"TILE_CHECKPOINT");
	HX_MARK_MEMBER_NAME(ObjectFactory_obj::TILE_BACKGROUND,"TILE_BACKGROUND");
	HX_MARK_MEMBER_NAME(ObjectFactory_obj::TILE_PLATFORM,"TILE_PLATFORM");
	HX_MARK_MEMBER_NAME(ObjectFactory_obj::TILE_FATAL_UP,"TILE_FATAL_UP");
	HX_MARK_MEMBER_NAME(ObjectFactory_obj::TILE_FATAL_DOWN,"TILE_FATAL_DOWN");
	HX_MARK_MEMBER_NAME(ObjectFactory_obj::TILE_FATAL_LEFT,"TILE_FATAL_LEFT");
	HX_MARK_MEMBER_NAME(ObjectFactory_obj::TILE_FATAL_RIGHT,"TILE_FATAL_RIGHT");
	HX_MARK_MEMBER_NAME(ObjectFactory_obj::TILE_FATAL_LR,"TILE_FATAL_LR");
	HX_MARK_MEMBER_NAME(ObjectFactory_obj::TILE_FATAL_UD,"TILE_FATAL_UD");
	HX_MARK_MEMBER_NAME(ObjectFactory_obj::TILE_FATAL_ALL,"TILE_FATAL_ALL");
	HX_MARK_MEMBER_NAME(ObjectFactory_obj::tileTypes,"tileTypes");
	HX_MARK_MEMBER_NAME(ObjectFactory_obj::fatalTypes,"fatalTypes");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ObjectFactory_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(ObjectFactory_obj::singleton,"singleton");
	HX_VISIT_MEMBER_NAME(ObjectFactory_obj::TILE_STARTPOINT,"TILE_STARTPOINT");
	HX_VISIT_MEMBER_NAME(ObjectFactory_obj::TILE_ENDPOINT,"TILE_ENDPOINT");
	HX_VISIT_MEMBER_NAME(ObjectFactory_obj::TILE_CHECKPOINT,"TILE_CHECKPOINT");
	HX_VISIT_MEMBER_NAME(ObjectFactory_obj::TILE_BACKGROUND,"TILE_BACKGROUND");
	HX_VISIT_MEMBER_NAME(ObjectFactory_obj::TILE_PLATFORM,"TILE_PLATFORM");
	HX_VISIT_MEMBER_NAME(ObjectFactory_obj::TILE_FATAL_UP,"TILE_FATAL_UP");
	HX_VISIT_MEMBER_NAME(ObjectFactory_obj::TILE_FATAL_DOWN,"TILE_FATAL_DOWN");
	HX_VISIT_MEMBER_NAME(ObjectFactory_obj::TILE_FATAL_LEFT,"TILE_FATAL_LEFT");
	HX_VISIT_MEMBER_NAME(ObjectFactory_obj::TILE_FATAL_RIGHT,"TILE_FATAL_RIGHT");
	HX_VISIT_MEMBER_NAME(ObjectFactory_obj::TILE_FATAL_LR,"TILE_FATAL_LR");
	HX_VISIT_MEMBER_NAME(ObjectFactory_obj::TILE_FATAL_UD,"TILE_FATAL_UD");
	HX_VISIT_MEMBER_NAME(ObjectFactory_obj::TILE_FATAL_ALL,"TILE_FATAL_ALL");
	HX_VISIT_MEMBER_NAME(ObjectFactory_obj::tileTypes,"tileTypes");
	HX_VISIT_MEMBER_NAME(ObjectFactory_obj::fatalTypes,"fatalTypes");
};

#endif

hx::Class ObjectFactory_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("singleton","\x0b","\xc5","\x7f","\xb7"),
	HX_HCSTRING("getSingleton","\x95","\x61","\xd6","\xc6"),
	HX_HCSTRING("TILE_STARTPOINT","\x5f","\x5d","\xc7","\xe7"),
	HX_HCSTRING("TILE_ENDPOINT","\x06","\xf5","\x54","\x8b"),
	HX_HCSTRING("TILE_CHECKPOINT","\x39","\x87","\xa0","\xdb"),
	HX_HCSTRING("TILE_BACKGROUND","\x9f","\xd4","\x6b","\xbe"),
	HX_HCSTRING("TILE_PLATFORM","\x24","\xd1","\xee","\xc1"),
	HX_HCSTRING("TILE_FATAL_UP","\x87","\x85","\xb8","\x68"),
	HX_HCSTRING("TILE_FATAL_DOWN","\x8e","\x1e","\xcd","\x60"),
	HX_HCSTRING("TILE_FATAL_LEFT","\x33","\x2e","\x0f","\x66"),
	HX_HCSTRING("TILE_FATAL_RIGHT","\x10","\x4c","\x46","\x5e"),
	HX_HCSTRING("TILE_FATAL_LR","\xb2","\x7d","\xb8","\x68"),
	HX_HCSTRING("TILE_FATAL_UD","\x7b","\x85","\xb8","\x68"),
	HX_HCSTRING("TILE_FATAL_ALL","\x55","\x20","\xad","\x38"),
	HX_HCSTRING("tileTypes","\x6b","\xce","\x26","\xa6"),
	HX_HCSTRING("fatalTypes","\xd5","\x19","\x26","\x14"),
	::String(null()) };

void ObjectFactory_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("maps.ObjectFactory","\x54","\xff","\xb7","\x5e");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &ObjectFactory_obj::__GetStatic;
	__mClass->mSetStaticField = &ObjectFactory_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< ObjectFactory_obj >;
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

void ObjectFactory_obj::__boot()
{
	TILE_STARTPOINT= (int)41;
	TILE_ENDPOINT= (int)42;
	TILE_CHECKPOINT= (int)20;
	TILE_BACKGROUND= (int)11;
	TILE_PLATFORM= (int)12;
	TILE_FATAL_UP= (int)13;
	TILE_FATAL_DOWN= (int)14;
	TILE_FATAL_LEFT= (int)15;
	TILE_FATAL_RIGHT= (int)16;
	TILE_FATAL_LR= (int)17;
	TILE_FATAL_UD= (int)18;
	TILE_FATAL_ALL= (int)19;
struct _Function_0_1{
	inline static Array< int > Block( ){
		HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","maps/ObjectFactory.hx",39,0xb5ae61eb)
		{
			HX_STACK_LINE(39)
			int tmp = ::maps::ObjectFactory_obj::TILE_FATAL_ALL;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(39)
			int tmp1 = ::maps::ObjectFactory_obj::TILE_FATAL_DOWN;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(39)
			int tmp2 = ::maps::ObjectFactory_obj::TILE_FATAL_LEFT;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(39)
			int tmp3 = ::maps::ObjectFactory_obj::TILE_FATAL_RIGHT;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(39)
			int tmp4 = ::maps::ObjectFactory_obj::TILE_FATAL_UP;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(40)
			int tmp5 = ::maps::ObjectFactory_obj::TILE_FATAL_LR;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(40)
			int tmp6 = ::maps::ObjectFactory_obj::TILE_FATAL_UD;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(40)
			int tmp7 = ::maps::ObjectFactory_obj::TILE_BACKGROUND;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(40)
			int tmp8 = ::maps::ObjectFactory_obj::TILE_PLATFORM;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(39)
			return Array_obj< int >::__new().Add(tmp).Add(tmp1).Add(tmp2).Add(tmp3).Add(tmp4).Add(tmp5).Add(tmp6).Add(tmp7).Add(tmp8);
		}
		return null();
	}
};
	tileTypes= _Function_0_1::Block();
struct _Function_0_2{
	inline static Array< int > Block( ){
		HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","maps/ObjectFactory.hx",42,0xb5ae61eb)
		{
			HX_STACK_LINE(42)
			int tmp = ::maps::ObjectFactory_obj::TILE_FATAL_ALL;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(42)
			int tmp1 = ::maps::ObjectFactory_obj::TILE_FATAL_DOWN;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(42)
			int tmp2 = ::maps::ObjectFactory_obj::TILE_FATAL_LEFT;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(42)
			int tmp3 = ::maps::ObjectFactory_obj::TILE_FATAL_RIGHT;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(42)
			int tmp4 = ::maps::ObjectFactory_obj::TILE_FATAL_UP;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(43)
			int tmp5 = ::maps::ObjectFactory_obj::TILE_FATAL_LR;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(43)
			int tmp6 = ::maps::ObjectFactory_obj::TILE_FATAL_UD;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(42)
			return Array_obj< int >::__new().Add(tmp).Add(tmp1).Add(tmp2).Add(tmp3).Add(tmp4).Add(tmp5).Add(tmp6);
		}
		return null();
	}
};
	fatalTypes= _Function_0_2::Block();
}

} // end namespace maps
