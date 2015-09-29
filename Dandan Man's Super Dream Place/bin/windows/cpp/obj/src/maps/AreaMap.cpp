#include <hxcpp.h>

#include "hxMath.h"
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_actors_Player
#include <actors/Player.h>
#endif
#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
#endif
#ifndef INCLUDED_lime_utils_ByteArray
#include <lime/utils/ByteArray.h>
#endif
#ifndef INCLUDED_lime_utils_IDataInput
#include <lime/utils/IDataInput.h>
#endif
#ifndef INCLUDED_lime_utils_IMemoryRange
#include <lime/utils/IMemoryRange.h>
#endif
#ifndef INCLUDED_maps_AreaMap
#include <maps/AreaMap.h>
#endif
#ifndef INCLUDED_maps_Checkpoint
#include <maps/Checkpoint.h>
#endif
#ifndef INCLUDED_maps_MapManager
#include <maps/MapManager.h>
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
#ifndef INCLUDED_openfl_geom_Point
#include <openfl/geom/Point.h>
#endif
#ifndef INCLUDED_openfl_geom_Rectangle
#include <openfl/geom/Rectangle.h>
#endif
namespace maps{

Void AreaMap_obj::__construct(::lime::utils::ByteArray mapFile)
{
HX_STACK_FRAME("maps.AreaMap","new",0xb9b930ca,"maps.AreaMap.new","maps/AreaMap.hx",34,0xeb50e127)
HX_STACK_THIS(this)
HX_STACK_ARG(mapFile,"mapFile")
{
	HX_STACK_LINE(35)
	super::__construct();
	HX_STACK_LINE(37)
	Array< ::Dynamic > tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(37)
	{
		HX_STACK_LINE(37)
		Array< ::Dynamic > this1;		HX_STACK_VAR(this1,"this1");
		HX_STACK_LINE(37)
		this1 = Array_obj< ::Dynamic >::__new()->__SetSizeExact(null());
		HX_STACK_LINE(37)
		tmp = this1;
	}
	HX_STACK_LINE(37)
	this->checkPoints = tmp;
	HX_STACK_LINE(39)
	this->mapWidth = (int)0;
	HX_STACK_LINE(40)
	this->mapHeight = (int)0;
	HX_STACK_LINE(41)
	this->tileSize = (int)16;
	HX_STACK_LINE(42)
	::lime::utils::ByteArray fileBytes = mapFile;		HX_STACK_VAR(fileBytes,"fileBytes");
	HX_STACK_LINE(43)
	::String tmp1 = fileBytes->toString();		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(43)
	::String fileInfo = tmp1;		HX_STACK_VAR(fileInfo,"fileInfo");
	HX_STACK_LINE(44)
	Array< ::String > fileArray = fileInfo.split(HX_HCSTRING("\n","\x0a","\x00","\x00","\x00"));		HX_STACK_VAR(fileArray,"fileArray");
	HX_STACK_LINE(46)
	this->parseMapDimensions(fileArray);
	HX_STACK_LINE(47)
	this->addMapBG((int)11184810);
	HX_STACK_LINE(49)
	int tmp2 = this->mapWidth;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(49)
	int tmp3 = this->mapHeight;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(49)
	this->initiateObjectList(tmp2,tmp3);
	HX_STACK_LINE(50)
	this->readTiles(fileArray);
}
;
	return null();
}

//AreaMap_obj::~AreaMap_obj() { }

Dynamic AreaMap_obj::__CreateEmpty() { return  new AreaMap_obj; }
hx::ObjectPtr< AreaMap_obj > AreaMap_obj::__new(::lime::utils::ByteArray mapFile)
{  hx::ObjectPtr< AreaMap_obj > _result_ = new AreaMap_obj();
	_result_->__construct(mapFile);
	return _result_;}

Dynamic AreaMap_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< AreaMap_obj > _result_ = new AreaMap_obj();
	_result_->__construct(inArgs[0]);
	return _result_;}

Void AreaMap_obj::parseMapDimensions( Array< ::String > fileArray){
{
		HX_STACK_FRAME("maps.AreaMap","parseMapDimensions",0x5b9daaac,"maps.AreaMap.parseMapDimensions","maps/AreaMap.hx",53,0xeb50e127)
		HX_STACK_THIS(this)
		HX_STACK_ARG(fileArray,"fileArray")
		HX_STACK_LINE(56)
		int fcount = (int)0;		HX_STACK_VAR(fcount,"fcount");
		HX_STACK_LINE(57)
		{
			HX_STACK_LINE(57)
			int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(57)
			int _g = fileArray->length;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(57)
			while((true)){
				HX_STACK_LINE(57)
				bool tmp = (_g1 < _g);		HX_STACK_VAR(tmp,"tmp");
				HX_STACK_LINE(57)
				bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(57)
				if ((tmp1)){
					HX_STACK_LINE(57)
					break;
				}
				HX_STACK_LINE(57)
				int tmp2 = (_g1)++;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(57)
				int f = tmp2;		HX_STACK_VAR(f,"f");
				HX_STACK_LINE(58)
				::String tmp3 = fileArray->__get(f);		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(58)
				int tmp4 = tmp3.indexOf(HX_HCSTRING("layer name","\xfa","\x4a","\x34","\xc8"),null());		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(58)
				bool tmp5 = (tmp4 >= (int)0);		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(58)
				if ((tmp5)){
					HX_STACK_LINE(58)
					break;
				}
				HX_STACK_LINE(59)
				hx::AddEq(fcount,(int)1);
			}
		}
		HX_STACK_LINE(62)
		::String tmp = fileArray->__get(fcount);		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(62)
		Array< ::String > sizeLine = tmp.split(HX_HCSTRING(" ","\x20","\x00","\x00","\x00"));		HX_STACK_VAR(sizeLine,"sizeLine");
		HX_STACK_LINE(63)
		{
			HX_STACK_LINE(63)
			int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(63)
			int _g = sizeLine->length;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(63)
			while((true)){
				HX_STACK_LINE(63)
				bool tmp1 = (_g1 < _g);		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(63)
				bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(63)
				if ((tmp2)){
					HX_STACK_LINE(63)
					break;
				}
				HX_STACK_LINE(63)
				int tmp3 = (_g1)++;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(63)
				int i = tmp3;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(64)
				::String tmp4 = sizeLine->__get(i);		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(64)
				int tmp5 = tmp4.indexOf(HX_HCSTRING("width","\x06","\xb6","\x62","\xca"),null());		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(64)
				bool tmp6 = (tmp5 >= (int)0);		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(64)
				if ((tmp6)){
					HX_STACK_LINE(65)
					::String tmp7 = sizeLine->__get(i);		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(65)
					Array< ::String > parsedWidth = tmp7.split(HX_HCSTRING("\"","\x22","\x00","\x00","\x00"));		HX_STACK_VAR(parsedWidth,"parsedWidth");
					HX_STACK_LINE(66)
					::String tmp8 = parsedWidth->__get((int)1);		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(66)
					Dynamic tmp9 = ::Std_obj::parseInt(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(66)
					this->mapWidth = tmp9;
				}
				else{
					HX_STACK_LINE(68)
					::String tmp7 = sizeLine->__get(i);		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(68)
					int tmp8 = tmp7.indexOf(HX_HCSTRING("height","\xe7","\x07","\x4c","\x02"),null());		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(68)
					bool tmp9 = (tmp8 >= (int)0);		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(68)
					if ((tmp9)){
						HX_STACK_LINE(69)
						::String tmp10 = sizeLine->__get(i);		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(69)
						Array< ::String > parsedHeight = tmp10.split(HX_HCSTRING("\"","\x22","\x00","\x00","\x00"));		HX_STACK_VAR(parsedHeight,"parsedHeight");
						HX_STACK_LINE(70)
						::String tmp11 = parsedHeight->__get((int)1);		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(70)
						Dynamic tmp12 = ::Std_obj::parseInt(tmp11);		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(70)
						this->mapHeight = tmp12;
					}
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(AreaMap_obj,parseMapDimensions,(void))

Void AreaMap_obj::addMapBG( int color){
{
		HX_STACK_FRAME("maps.AreaMap","addMapBG",0x397028d6,"maps.AreaMap.addMapBG","maps/AreaMap.hx",74,0xeb50e127)
		HX_STACK_THIS(this)
		HX_STACK_ARG(color,"color")
		HX_STACK_LINE(76)
		::openfl::display::Shape tmp = ::openfl::display::Shape_obj::__new();		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(76)
		this->background = tmp;
		HX_STACK_LINE(77)
		::openfl::display::Shape tmp1 = this->background;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(77)
		::openfl::display::Graphics tmp2 = tmp1->get_graphics();		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(77)
		int tmp3 = color;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(77)
		tmp2->beginFill(tmp3,null());
		HX_STACK_LINE(78)
		::openfl::display::Shape tmp4 = this->background;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(78)
		::openfl::display::Graphics tmp5 = tmp4->get_graphics();		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(78)
		int tmp6 = this->mapWidth;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(78)
		int tmp7 = this->tileSize;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(78)
		int tmp8 = (tmp6 * tmp7);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(78)
		int tmp9 = this->mapHeight;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(78)
		int tmp10 = this->tileSize;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(78)
		int tmp11 = (tmp9 * tmp10);		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(78)
		tmp5->drawRect((int)0,(int)0,tmp8,tmp11);
		HX_STACK_LINE(79)
		::openfl::display::Shape tmp12 = this->background;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(79)
		::openfl::display::Graphics tmp13 = tmp12->get_graphics();		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(79)
		tmp13->endFill();
		HX_STACK_LINE(80)
		::openfl::display::Shape tmp14 = this->background;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(80)
		this->addChildAt(tmp14,(int)0);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(AreaMap_obj,addMapBG,(void))

Void AreaMap_obj::initiateObjectList( int width,int height){
{
		HX_STACK_FRAME("maps.AreaMap","initiateObjectList",0xd83f714c,"maps.AreaMap.initiateObjectList","maps/AreaMap.hx",82,0xeb50e127)
		HX_STACK_THIS(this)
		HX_STACK_ARG(width,"width")
		HX_STACK_ARG(height,"height")
		HX_STACK_LINE(84)
		this->objectList = Array_obj< ::Dynamic >::__new();
		HX_STACK_LINE(85)
		{
			HX_STACK_LINE(85)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(85)
			while((true)){
				HX_STACK_LINE(85)
				bool tmp = (_g < height);		HX_STACK_VAR(tmp,"tmp");
				HX_STACK_LINE(85)
				bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(85)
				if ((tmp1)){
					HX_STACK_LINE(85)
					break;
				}
				HX_STACK_LINE(85)
				int tmp2 = (_g)++;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(85)
				int y = tmp2;		HX_STACK_VAR(y,"y");
				HX_STACK_LINE(86)
				Array< ::Dynamic > row = Array_obj< ::Dynamic >::__new();		HX_STACK_VAR(row,"row");
				HX_STACK_LINE(87)
				{
					HX_STACK_LINE(87)
					int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
					HX_STACK_LINE(87)
					while((true)){
						HX_STACK_LINE(87)
						bool tmp3 = (_g1 < width);		HX_STACK_VAR(tmp3,"tmp3");
						HX_STACK_LINE(87)
						bool tmp4 = !(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
						HX_STACK_LINE(87)
						if ((tmp4)){
							HX_STACK_LINE(87)
							break;
						}
						HX_STACK_LINE(87)
						int tmp5 = (_g1)++;		HX_STACK_VAR(tmp5,"tmp5");
						HX_STACK_LINE(87)
						int x = tmp5;		HX_STACK_VAR(x,"x");
						HX_STACK_LINE(88)
						row->push(null());
					}
				}
				HX_STACK_LINE(90)
				this->objectList->push(row);
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(AreaMap_obj,initiateObjectList,(void))

Void AreaMap_obj::readTiles( Array< ::String > fileArray){
{
		HX_STACK_FRAME("maps.AreaMap","readTiles",0x78acd639,"maps.AreaMap.readTiles","maps/AreaMap.hx",93,0xeb50e127)
		HX_STACK_THIS(this)
		HX_STACK_ARG(fileArray,"fileArray")
		HX_STACK_LINE(95)
		int yCounter = (int)0;		HX_STACK_VAR(yCounter,"yCounter");
		HX_STACK_LINE(96)
		int xCounter = (int)0;		HX_STACK_VAR(xCounter,"xCounter");
		HX_STACK_LINE(98)
		{
			HX_STACK_LINE(98)
			int _g1 = (int)7;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(98)
			int _g = fileArray->length;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(98)
			while((true)){
				HX_STACK_LINE(98)
				bool tmp = (_g1 < _g);		HX_STACK_VAR(tmp,"tmp");
				HX_STACK_LINE(98)
				bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(98)
				if ((tmp1)){
					HX_STACK_LINE(98)
					break;
				}
				HX_STACK_LINE(98)
				int tmp2 = (_g1)++;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(98)
				int j = tmp2;		HX_STACK_VAR(j,"j");
				HX_STACK_LINE(99)
				::String tmp3 = fileArray->__get(j);		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(99)
				int tmp4 = tmp3.indexOf(HX_HCSTRING("tile gid=\"","\x55","\x2b","\x67","\x8f"),null());		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(99)
				bool tmp5 = (tmp4 < (int)0);		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(99)
				if ((tmp5)){
					HX_STACK_LINE(100)
					continue;
				}
				HX_STACK_LINE(102)
				::String tmp6 = fileArray->__get(j);		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(102)
				Array< ::String > parsedTileLine = tmp6.split(HX_HCSTRING("\"","\x22","\x00","\x00","\x00"));		HX_STACK_VAR(parsedTileLine,"parsedTileLine");
				HX_STACK_LINE(103)
				::String tmp7 = parsedTileLine->__get((int)1);		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(103)
				int index = ((int)(tmp7));		HX_STACK_VAR(index,"index");
				HX_STACK_LINE(105)
				int tmp8 = index;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(105)
				int tmp9 = xCounter;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(105)
				int tmp10 = yCounter;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(105)
				this->createObject(tmp8,tmp9,tmp10);
				HX_STACK_LINE(107)
				hx::AddEq(xCounter,(int)1);
				HX_STACK_LINE(108)
				int tmp11 = xCounter;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(108)
				int tmp12 = this->mapWidth;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(108)
				bool tmp13 = (tmp11 >= tmp12);		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(108)
				if ((tmp13)){
					HX_STACK_LINE(109)
					xCounter = (int)0;
					HX_STACK_LINE(110)
					hx::AddEq(yCounter,(int)1);
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(AreaMap_obj,readTiles,(void))

Void AreaMap_obj::createObject( int index,int x,int y){
{
		HX_STACK_FRAME("maps.AreaMap","createObject",0x35590131,"maps.AreaMap.createObject","maps/AreaMap.hx",114,0xeb50e127)
		HX_STACK_THIS(this)
		HX_STACK_ARG(index,"index")
		HX_STACK_ARG(x,"x")
		HX_STACK_ARG(y,"y")
		HX_STACK_LINE(116)
		::maps::ObjectFactory tmp = ::maps::ObjectFactory_obj::getSingleton();		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(116)
		int tmp1 = index;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(116)
		bool tmp2 = tmp->isObjectTile(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(116)
		if ((tmp2)){
			HX_STACK_LINE(117)
			int tmp3 = index;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(117)
			int tmp4 = x;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(117)
			int tmp5 = y;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(117)
			this->createTile(tmp3,tmp4,tmp5);
		}
		else{
			HX_STACK_LINE(118)
			::maps::ObjectFactory tmp3 = ::maps::ObjectFactory_obj::getSingleton();		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(118)
			int tmp4 = index;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(118)
			bool tmp5 = tmp3->isObjectCheckpoint(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(118)
			if ((tmp5)){
				HX_STACK_LINE(119)
				int tmp6 = index;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(119)
				int tmp7 = x;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(119)
				int tmp8 = y;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(119)
				this->createCheckpoint(tmp6,tmp7,tmp8);
			}
			else{
				HX_STACK_LINE(120)
				::maps::ObjectFactory tmp6 = ::maps::ObjectFactory_obj::getSingleton();		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(120)
				int tmp7 = index;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(120)
				bool tmp8 = tmp6->isMapStart(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(120)
				if ((tmp8)){
					HX_STACK_LINE(121)
					int tmp9 = index;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(121)
					int tmp10 = x;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(121)
					int tmp11 = y;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(121)
					this->createStartpoint(tmp9,tmp10,tmp11);
				}
				else{
					HX_STACK_LINE(122)
					::maps::ObjectFactory tmp9 = ::maps::ObjectFactory_obj::getSingleton();		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(122)
					int tmp10 = index;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(122)
					bool tmp11 = tmp9->isMapEnd(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(122)
					if ((tmp11)){
						HX_STACK_LINE(123)
						int tmp12 = index;		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(123)
						int tmp13 = x;		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(123)
						int tmp14 = y;		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(123)
						this->createEndpoint(tmp12,tmp13,tmp14);
					}
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(AreaMap_obj,createObject,(void))

Void AreaMap_obj::createTile( int index,int x,int y){
{
		HX_STACK_FRAME("maps.AreaMap","createTile",0x66746d20,"maps.AreaMap.createTile","maps/AreaMap.hx",125,0xeb50e127)
		HX_STACK_THIS(this)
		HX_STACK_ARG(index,"index")
		HX_STACK_ARG(x,"x")
		HX_STACK_ARG(y,"y")
		HX_STACK_LINE(126)
		::maps::ObjectFactory tmp = ::maps::ObjectFactory_obj::getSingleton();		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(126)
		int tmp1 = index;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(126)
		::maps::Tile tmp2 = tmp->createTile(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(126)
		::maps::Tile newTile = tmp2;		HX_STACK_VAR(newTile,"newTile");
		HX_STACK_LINE(127)
		bool tmp3 = (newTile == null());		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(127)
		if ((tmp3)){
			HX_STACK_LINE(128)
			return null();
		}
		HX_STACK_LINE(130)
		::maps::Tile tmp4 = newTile;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(130)
		this->addChild(tmp4);
		HX_STACK_LINE(131)
		int tmp5 = x;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(131)
		int tmp6 = this->tileSize;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(131)
		int tmp7 = (tmp5 * tmp6);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(131)
		newTile->set_x(tmp7);
		HX_STACK_LINE(132)
		int tmp8 = y;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(132)
		int tmp9 = this->tileSize;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(132)
		int tmp10 = (tmp8 * tmp9);		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(132)
		newTile->set_y(tmp10);
		HX_STACK_LINE(133)
		::maps::Tile tmp11 = newTile;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(133)
		this->objectList->__get(y).StaticCast< Array< ::Dynamic > >()[x] = tmp11;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(AreaMap_obj,createTile,(void))

Void AreaMap_obj::createCheckpoint( int index,int x,int y){
{
		HX_STACK_FRAME("maps.AreaMap","createCheckpoint",0x9f02e9fa,"maps.AreaMap.createCheckpoint","maps/AreaMap.hx",135,0xeb50e127)
		HX_STACK_THIS(this)
		HX_STACK_ARG(index,"index")
		HX_STACK_ARG(x,"x")
		HX_STACK_ARG(y,"y")
		HX_STACK_LINE(136)
		::maps::ObjectFactory tmp = ::maps::ObjectFactory_obj::getSingleton();		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(136)
		int tmp1 = index;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(136)
		::maps::Checkpoint tmp2 = tmp->createCheckpoint(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(136)
		::maps::Checkpoint newCheckpoint = tmp2;		HX_STACK_VAR(newCheckpoint,"newCheckpoint");
		HX_STACK_LINE(138)
		::maps::Checkpoint tmp3 = newCheckpoint;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(138)
		this->addChild(tmp3);
		HX_STACK_LINE(139)
		int tmp4 = x;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(139)
		int tmp5 = this->tileSize;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(139)
		int tmp6 = (tmp4 * tmp5);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(139)
		newCheckpoint->set_x(tmp6);
		HX_STACK_LINE(140)
		int tmp7 = y;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(140)
		int tmp8 = this->tileSize;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(140)
		int tmp9 = (tmp7 * tmp8);		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(140)
		newCheckpoint->set_y(tmp9);
		HX_STACK_LINE(141)
		::maps::Checkpoint tmp10 = newCheckpoint;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(141)
		this->objectList->__get(y).StaticCast< Array< ::Dynamic > >()[x] = tmp10;
		HX_STACK_LINE(143)
		Array< ::Dynamic > tmp11 = this->checkPoints;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(143)
		::maps::Checkpoint tmp12 = newCheckpoint;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(143)
		tmp11->push(tmp12);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(AreaMap_obj,createCheckpoint,(void))

Void AreaMap_obj::createStartpoint( int index,int x,int y){
{
		HX_STACK_FRAME("maps.AreaMap","createStartpoint",0xab29c020,"maps.AreaMap.createStartpoint","maps/AreaMap.hx",145,0xeb50e127)
		HX_STACK_THIS(this)
		HX_STACK_ARG(index,"index")
		HX_STACK_ARG(x,"x")
		HX_STACK_ARG(y,"y")
		HX_STACK_LINE(146)
		::maps::ObjectFactory tmp = ::maps::ObjectFactory_obj::getSingleton();		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(146)
		int tmp1 = index;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(146)
		::maps::Checkpoint tmp2 = tmp->createCheckpoint(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(146)
		::maps::Checkpoint startPoint = tmp2;		HX_STACK_VAR(startPoint,"startPoint");
		HX_STACK_LINE(147)
		int tmp3 = x;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(147)
		int tmp4 = this->tileSize;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(147)
		int tmp5 = (tmp3 * tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(147)
		startPoint->set_x(tmp5);
		HX_STACK_LINE(148)
		int tmp6 = y;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(148)
		int tmp7 = this->tileSize;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(148)
		int tmp8 = (tmp6 * tmp7);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(148)
		startPoint->set_y(tmp8);
		HX_STACK_LINE(149)
		this->startPoint = startPoint;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(AreaMap_obj,createStartpoint,(void))

Void AreaMap_obj::createEndpoint( int index,int x,int y){
{
		HX_STACK_FRAME("maps.AreaMap","createEndpoint",0xacb45987,"maps.AreaMap.createEndpoint","maps/AreaMap.hx",151,0xeb50e127)
		HX_STACK_THIS(this)
		HX_STACK_ARG(index,"index")
		HX_STACK_ARG(x,"x")
		HX_STACK_ARG(y,"y")
		HX_STACK_LINE(152)
		::maps::ObjectFactory tmp = ::maps::ObjectFactory_obj::getSingleton();		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(152)
		int tmp1 = index;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(152)
		::maps::Portal tmp2 = tmp->createPortal(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(152)
		::maps::Portal endPoint = tmp2;		HX_STACK_VAR(endPoint,"endPoint");
		HX_STACK_LINE(153)
		int tmp3 = x;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(153)
		int tmp4 = this->tileSize;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(153)
		int tmp5 = (tmp3 * tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(153)
		endPoint->set_x(tmp5);
		HX_STACK_LINE(154)
		int tmp6 = y;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(154)
		int tmp7 = this->tileSize;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(154)
		int tmp8 = (tmp6 * tmp7);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(154)
		endPoint->set_y(tmp8);
		HX_STACK_LINE(155)
		this->endPoint = endPoint;
		HX_STACK_LINE(156)
		::maps::Portal tmp9 = endPoint;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(156)
		this->addChild(tmp9);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(AreaMap_obj,createEndpoint,(void))

Void AreaMap_obj::setNextMap( ::maps::AreaMap map){
{
		HX_STACK_FRAME("maps.AreaMap","setNextMap",0xff0a9cbd,"maps.AreaMap.setNextMap","maps/AreaMap.hx",160,0xeb50e127)
		HX_STACK_THIS(this)
		HX_STACK_ARG(map,"map")
		HX_STACK_LINE(160)
		this->nextMap = map;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(AreaMap_obj,setNextMap,(void))

Void AreaMap_obj::resetMap( ){
{
		HX_STACK_FRAME("maps.AreaMap","resetMap",0x0ccc2363,"maps.AreaMap.resetMap","maps/AreaMap.hx",163,0xeb50e127)
		HX_STACK_THIS(this)
		HX_STACK_LINE(164)
		this->currentCheckpoint = null();
		HX_STACK_LINE(165)
		{
			HX_STACK_LINE(165)
			int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(165)
			Array< ::Dynamic > tmp = this->checkPoints;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(165)
			int tmp1 = tmp->length;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(165)
			int _g = tmp1;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(165)
			while((true)){
				HX_STACK_LINE(165)
				bool tmp2 = (_g1 < _g);		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(165)
				bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(165)
				if ((tmp3)){
					HX_STACK_LINE(165)
					break;
				}
				HX_STACK_LINE(165)
				int tmp4 = (_g1)++;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(165)
				int i = tmp4;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(166)
				Array< ::Dynamic > tmp5 = this->checkPoints;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(166)
				::maps::Checkpoint tmp6 = tmp5->__get(i).StaticCast< ::maps::Checkpoint >();		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(166)
				tmp6->setInactive();
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(AreaMap_obj,resetMap,(void))

Void AreaMap_obj::updateMap( ){
{
		HX_STACK_FRAME("maps.AreaMap","updateMap",0x1a7073fd,"maps.AreaMap.updateMap","maps/AreaMap.hx",171,0xeb50e127)
		HX_STACK_THIS(this)
		HX_STACK_LINE(173)
		::actors::Player tmp = this->player;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(173)
		tmp->updatePlayer();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(AreaMap_obj,updateMap,(void))

Void AreaMap_obj::addPlayer( ::actors::Player player){
{
		HX_STACK_FRAME("maps.AreaMap","addPlayer",0x876dac4c,"maps.AreaMap.addPlayer","maps/AreaMap.hx",177,0xeb50e127)
		HX_STACK_THIS(this)
		HX_STACK_ARG(player,"player")
		HX_STACK_LINE(178)
		this->player = player;
		HX_STACK_LINE(179)
		player->setCurrentMap(hx::ObjectPtr<OBJ_>(this));
		HX_STACK_LINE(180)
		::actors::Player tmp = player;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(180)
		this->addChild(tmp);
		HX_STACK_LINE(182)
		::maps::Checkpoint tmp1 = this->startPoint;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(182)
		bool tmp2 = (tmp1 != null());		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(182)
		if ((tmp2)){
			HX_STACK_LINE(183)
			::maps::Checkpoint tmp3 = this->startPoint;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(183)
			Float tmp4 = tmp3->get_x();		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(183)
			player->set_x(tmp4);
			HX_STACK_LINE(184)
			::maps::Checkpoint tmp5 = this->startPoint;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(184)
			Float tmp6 = tmp5->get_y();		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(184)
			player->set_y(tmp6);
			HX_STACK_LINE(185)
			::maps::Checkpoint tmp7 = this->startPoint;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(185)
			this->currentCheckpoint = tmp7;
		}
		else{
			HX_STACK_LINE(188)
			player->set_x((int)32);
			HX_STACK_LINE(189)
			player->set_y((int)32);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(AreaMap_obj,addPlayer,(void))

Array< ::Dynamic > AreaMap_obj::checkCollisions( ::maps::MapObject object){
	HX_STACK_FRAME("maps.AreaMap","checkCollisions",0x3f1b7a13,"maps.AreaMap.checkCollisions","maps/AreaMap.hx",194,0xeb50e127)
	HX_STACK_THIS(this)
	HX_STACK_ARG(object,"object")
	HX_STACK_LINE(196)
	Float tmp = object->get_x();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(196)
	Float tmp1 = object->get_width();		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(196)
	Float tmp2 = (Float(tmp1) / Float((int)2));		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(196)
	Float tmp3 = (tmp + tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(196)
	Float tmp4 = object->get_y();		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(196)
	Float tmp5 = object->get_height();		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(196)
	Float tmp6 = (Float(tmp5) / Float((int)2));		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(196)
	Float tmp7 = (tmp4 + tmp6);		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(196)
	::openfl::geom::Point tmp8 = ::openfl::geom::Point_obj::__new(tmp3,tmp7);		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(196)
	::openfl::geom::Point objectCenter = tmp8;		HX_STACK_VAR(objectCenter,"objectCenter");
	HX_STACK_LINE(197)
	Float tmp9 = objectCenter->x;		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(197)
	int tmp10 = this->tileSize;		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(197)
	Float tmp11 = (Float(tmp9) / Float(tmp10));		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(197)
	int tmp12 = ::Math_obj::floor(tmp11);		HX_STACK_VAR(tmp12,"tmp12");
	HX_STACK_LINE(197)
	Float tmp13 = objectCenter->y;		HX_STACK_VAR(tmp13,"tmp13");
	HX_STACK_LINE(197)
	int tmp14 = this->tileSize;		HX_STACK_VAR(tmp14,"tmp14");
	HX_STACK_LINE(197)
	Float tmp15 = (Float(tmp13) / Float(tmp14));		HX_STACK_VAR(tmp15,"tmp15");
	HX_STACK_LINE(197)
	int tmp16 = ::Math_obj::floor(tmp15);		HX_STACK_VAR(tmp16,"tmp16");
	HX_STACK_LINE(197)
	::openfl::geom::Point tmp17 = ::openfl::geom::Point_obj::__new(tmp12,tmp16);		HX_STACK_VAR(tmp17,"tmp17");
	HX_STACK_LINE(197)
	objectCenter = tmp17;
	HX_STACK_LINE(198)
	Float tmp18 = object->get_x();		HX_STACK_VAR(tmp18,"tmp18");
	HX_STACK_LINE(198)
	Float tmp19 = object->get_y();		HX_STACK_VAR(tmp19,"tmp19");
	HX_STACK_LINE(198)
	Float tmp20 = object->get_width();		HX_STACK_VAR(tmp20,"tmp20");
	HX_STACK_LINE(198)
	Float tmp21 = object->get_height();		HX_STACK_VAR(tmp21,"tmp21");
	HX_STACK_LINE(198)
	::openfl::geom::Rectangle tmp22 = ::openfl::geom::Rectangle_obj::__new(tmp18,tmp19,tmp20,tmp21);		HX_STACK_VAR(tmp22,"tmp22");
	HX_STACK_LINE(198)
	::openfl::geom::Rectangle objectBounds = tmp22;		HX_STACK_VAR(objectBounds,"objectBounds");
	HX_STACK_LINE(199)
	Array< ::Dynamic > tmp23;		HX_STACK_VAR(tmp23,"tmp23");
	HX_STACK_LINE(199)
	{
		HX_STACK_LINE(199)
		Array< ::Dynamic > this1;		HX_STACK_VAR(this1,"this1");
		HX_STACK_LINE(199)
		this1 = Array_obj< ::Dynamic >::__new()->__SetSizeExact(null());
		HX_STACK_LINE(199)
		tmp23 = this1;
	}
	HX_STACK_LINE(199)
	Array< ::Dynamic > collisionList = tmp23;		HX_STACK_VAR(collisionList,"collisionList");
	HX_STACK_LINE(201)
	int objectY = ((int)(objectCenter->y));		HX_STACK_VAR(objectY,"objectY");
	HX_STACK_LINE(202)
	int objectX = ((int)(objectCenter->x));		HX_STACK_VAR(objectX,"objectX");
	HX_STACK_LINE(204)
	{
		HX_STACK_LINE(204)
		int tmp24 = (objectY - (int)1);		HX_STACK_VAR(tmp24,"tmp24");
		HX_STACK_LINE(204)
		int _g1 = tmp24;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(204)
		int tmp25 = (objectY + (int)2);		HX_STACK_VAR(tmp25,"tmp25");
		HX_STACK_LINE(204)
		int _g = tmp25;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(204)
		while((true)){
			HX_STACK_LINE(204)
			bool tmp26 = (_g1 < _g);		HX_STACK_VAR(tmp26,"tmp26");
			HX_STACK_LINE(204)
			bool tmp27 = !(tmp26);		HX_STACK_VAR(tmp27,"tmp27");
			HX_STACK_LINE(204)
			if ((tmp27)){
				HX_STACK_LINE(204)
				break;
			}
			HX_STACK_LINE(204)
			int tmp28 = (_g1)++;		HX_STACK_VAR(tmp28,"tmp28");
			HX_STACK_LINE(204)
			int y = tmp28;		HX_STACK_VAR(y,"y");
			HX_STACK_LINE(205)
			{
				HX_STACK_LINE(205)
				int tmp29 = (objectX - (int)1);		HX_STACK_VAR(tmp29,"tmp29");
				HX_STACK_LINE(205)
				int _g3 = tmp29;		HX_STACK_VAR(_g3,"_g3");
				HX_STACK_LINE(205)
				int tmp30 = (objectX + (int)2);		HX_STACK_VAR(tmp30,"tmp30");
				HX_STACK_LINE(205)
				int _g2 = tmp30;		HX_STACK_VAR(_g2,"_g2");
				HX_STACK_LINE(205)
				while((true)){
					HX_STACK_LINE(205)
					bool tmp31 = (_g3 < _g2);		HX_STACK_VAR(tmp31,"tmp31");
					HX_STACK_LINE(205)
					bool tmp32 = !(tmp31);		HX_STACK_VAR(tmp32,"tmp32");
					HX_STACK_LINE(205)
					if ((tmp32)){
						HX_STACK_LINE(205)
						break;
					}
					HX_STACK_LINE(205)
					int tmp33 = (_g3)++;		HX_STACK_VAR(tmp33,"tmp33");
					HX_STACK_LINE(205)
					int x = tmp33;		HX_STACK_VAR(x,"x");
					HX_STACK_LINE(207)
					int tmp34 = y;		HX_STACK_VAR(tmp34,"tmp34");
					HX_STACK_LINE(207)
					int tmp35 = this->objectList->length;		HX_STACK_VAR(tmp35,"tmp35");
					HX_STACK_LINE(207)
					bool tmp36 = (tmp34 >= tmp35);		HX_STACK_VAR(tmp36,"tmp36");
					HX_STACK_LINE(207)
					bool tmp37 = !(tmp36);		HX_STACK_VAR(tmp37,"tmp37");
					HX_STACK_LINE(207)
					bool tmp38;		HX_STACK_VAR(tmp38,"tmp38");
					HX_STACK_LINE(207)
					if ((tmp37)){
						HX_STACK_LINE(207)
						tmp38 = (y < (int)0);
					}
					else{
						HX_STACK_LINE(207)
						tmp38 = true;
					}
					HX_STACK_LINE(207)
					if ((tmp38)){
						HX_STACK_LINE(207)
						continue;
					}
					else{
						HX_STACK_LINE(208)
						int tmp39 = x;		HX_STACK_VAR(tmp39,"tmp39");
						HX_STACK_LINE(208)
						int tmp40 = this->objectList->__get(y).StaticCast< Array< ::Dynamic > >()->length;		HX_STACK_VAR(tmp40,"tmp40");
						HX_STACK_LINE(208)
						bool tmp41 = (tmp39 >= tmp40);		HX_STACK_VAR(tmp41,"tmp41");
						HX_STACK_LINE(208)
						bool tmp42 = !(tmp41);		HX_STACK_VAR(tmp42,"tmp42");
						HX_STACK_LINE(208)
						bool tmp43;		HX_STACK_VAR(tmp43,"tmp43");
						HX_STACK_LINE(208)
						if ((tmp42)){
							HX_STACK_LINE(208)
							tmp43 = (x < (int)0);
						}
						else{
							HX_STACK_LINE(208)
							tmp43 = true;
						}
						HX_STACK_LINE(208)
						if ((tmp43)){
							HX_STACK_LINE(208)
							continue;
						}
					}
					HX_STACK_LINE(210)
					::maps::MapObject tmp39 = this->objectList->__get(y).StaticCast< Array< ::Dynamic > >()->__get(x).StaticCast< ::maps::MapObject >();		HX_STACK_VAR(tmp39,"tmp39");
					HX_STACK_LINE(210)
					bool tmp40 = (tmp39 != null());		HX_STACK_VAR(tmp40,"tmp40");
					HX_STACK_LINE(210)
					if ((tmp40)){
						HX_STACK_LINE(212)
						::maps::MapObject tmp41 = object;		HX_STACK_VAR(tmp41,"tmp41");
						HX_STACK_LINE(212)
						int tmp42 = y;		HX_STACK_VAR(tmp42,"tmp42");
						HX_STACK_LINE(212)
						int tmp43 = x;		HX_STACK_VAR(tmp43,"tmp43");
						HX_STACK_LINE(212)
						bool tmp44 = this->checkObjectCollision(tmp41,tmp42,tmp43);		HX_STACK_VAR(tmp44,"tmp44");
						HX_STACK_LINE(212)
						if ((tmp44)){
							HX_STACK_LINE(213)
							::maps::MapObject tmp45 = this->objectList->__get(y).StaticCast< Array< ::Dynamic > >()->__get(x).StaticCast< ::maps::MapObject >();		HX_STACK_VAR(tmp45,"tmp45");
							HX_STACK_LINE(213)
							collisionList->push(tmp45);
						}
					}
				}
			}
		}
	}
	HX_STACK_LINE(218)
	Array< ::Dynamic > tmp24 = collisionList;		HX_STACK_VAR(tmp24,"tmp24");
	HX_STACK_LINE(218)
	return tmp24;
}


HX_DEFINE_DYNAMIC_FUNC1(AreaMap_obj,checkCollisions,return )

Void AreaMap_obj::updateCheckpoints( ::actors::Player player){
{
		HX_STACK_FRAME("maps.AreaMap","updateCheckpoints",0x9552a34c,"maps.AreaMap.updateCheckpoints","maps/AreaMap.hx",221,0xeb50e127)
		HX_STACK_THIS(this)
		HX_STACK_ARG(player,"player")
		HX_STACK_LINE(221)
		int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(221)
		Array< ::Dynamic > tmp = this->checkPoints;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(221)
		int tmp1 = tmp->length;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(221)
		int _g = tmp1;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(221)
		while((true)){
			HX_STACK_LINE(221)
			bool tmp2 = (_g1 < _g);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(221)
			bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(221)
			if ((tmp3)){
				HX_STACK_LINE(221)
				break;
			}
			HX_STACK_LINE(221)
			int tmp4 = (_g1)++;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(221)
			int i = tmp4;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(223)
			Array< ::Dynamic > tmp5 = this->checkPoints;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(223)
			::maps::Checkpoint tmp6 = tmp5->__get(i).StaticCast< ::maps::Checkpoint >();		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(223)
			::maps::Checkpoint checkpoint = tmp6;		HX_STACK_VAR(checkpoint,"checkpoint");
			HX_STACK_LINE(224)
			::maps::Checkpoint tmp7 = checkpoint;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(224)
			::maps::Checkpoint tmp8 = tmp7;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(224)
			bool tmp9 = player->checkCollision(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(224)
			bool tmp10;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(224)
			if ((tmp9)){
				HX_STACK_LINE(224)
				bool tmp11 = checkpoint->getActive();		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(224)
				bool tmp12 = tmp11;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(224)
				bool tmp13 = tmp12;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(224)
				tmp10 = !(tmp13);
			}
			else{
				HX_STACK_LINE(224)
				tmp10 = false;
			}
			HX_STACK_LINE(224)
			if ((tmp10)){
				HX_STACK_LINE(225)
				::maps::Checkpoint tmp11 = checkpoint;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(225)
				this->changeCheckpoint(tmp11);
				HX_STACK_LINE(226)
				return null();
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(AreaMap_obj,updateCheckpoints,(void))

Void AreaMap_obj::updateEndPortal( ::actors::Player player){
{
		HX_STACK_FRAME("maps.AreaMap","updateEndPortal",0x5a3bf108,"maps.AreaMap.updateEndPortal","maps/AreaMap.hx",230,0xeb50e127)
		HX_STACK_THIS(this)
		HX_STACK_ARG(player,"player")
		HX_STACK_LINE(231)
		::maps::Portal tmp = this->endPoint;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(231)
		bool tmp1 = (tmp == null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(231)
		if ((tmp1)){
			HX_STACK_LINE(231)
			return null();
		}
		HX_STACK_LINE(233)
		::maps::Portal tmp2 = this->endPoint;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(233)
		bool tmp3 = player->checkCollision(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(233)
		if ((tmp3)){
			HX_STACK_LINE(234)
			::maps::MapManager tmp4 = ::maps::MapManager_obj::getSingleton();		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(234)
			::maps::AreaMap tmp5 = this->nextMap;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(234)
			::actors::Player tmp6 = player;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(234)
			tmp4->setMap(tmp5,tmp6);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(AreaMap_obj,updateEndPortal,(void))

bool AreaMap_obj::checkObjectCollision( ::maps::MapObject object,int y,int x){
	HX_STACK_FRAME("maps.AreaMap","checkObjectCollision",0x100dd221,"maps.AreaMap.checkObjectCollision","maps/AreaMap.hx",238,0xeb50e127)
	HX_STACK_THIS(this)
	HX_STACK_ARG(object,"object")
	HX_STACK_ARG(y,"y")
	HX_STACK_ARG(x,"x")
	HX_STACK_LINE(239)
	::maps::MapObject tmp = this->objectList->__get(y).StaticCast< Array< ::Dynamic > >()->__get(x).StaticCast< ::maps::MapObject >();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(239)
	bool tmp1 = (tmp == null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(239)
	if ((tmp1)){
		HX_STACK_LINE(239)
		return false;
	}
	HX_STACK_LINE(241)
	::maps::MapObject tmp2 = this->objectList->__get(y).StaticCast< Array< ::Dynamic > >()->__get(x).StaticCast< ::maps::MapObject >();		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(241)
	bool tmp3 = ::Std_obj::is(tmp2,hx::ClassOf< ::maps::Tile >());		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(241)
	if ((tmp3)){
		HX_STACK_LINE(242)
		::maps::MapObject tmp4 = this->objectList->__get(y).StaticCast< Array< ::Dynamic > >()->__get(x).StaticCast< ::maps::MapObject >();		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(242)
		::maps::Tile collidingTile = ((::maps::Tile)(tmp4));		HX_STACK_VAR(collidingTile,"collidingTile");
		HX_STACK_LINE(243)
		::maps::MapObject tmp5 = object;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(243)
		bool tmp6 = collidingTile->checkCollision(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(243)
		if ((tmp6)){
			HX_STACK_LINE(244)
			return true;
		}
	}
	else{
		HX_STACK_LINE(247)
		::maps::MapObject tmp4 = this->objectList->__get(y).StaticCast< Array< ::Dynamic > >()->__get(x).StaticCast< ::maps::MapObject >();		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(247)
		::maps::MapObject collidingObject = tmp4;		HX_STACK_VAR(collidingObject,"collidingObject");
		HX_STACK_LINE(248)
		::maps::MapObject tmp5 = object;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(248)
		bool tmp6 = collidingObject->checkCollision(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(248)
		if ((tmp6)){
			HX_STACK_LINE(249)
			return true;
		}
	}
	HX_STACK_LINE(251)
	return false;
}


HX_DEFINE_DYNAMIC_FUNC3(AreaMap_obj,checkObjectCollision,return )

::maps::Checkpoint AreaMap_obj::getCurrentCheckpoint( ){
	HX_STACK_FRAME("maps.AreaMap","getCurrentCheckpoint",0xbdec8701,"maps.AreaMap.getCurrentCheckpoint","maps/AreaMap.hx",254,0xeb50e127)
	HX_STACK_THIS(this)
	HX_STACK_LINE(255)
	::maps::Checkpoint tmp = this->currentCheckpoint;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(255)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(AreaMap_obj,getCurrentCheckpoint,return )

Void AreaMap_obj::changeCheckpoint( ::maps::Checkpoint newCheckpoint){
{
		HX_STACK_FRAME("maps.AreaMap","changeCheckpoint",0xf6872d6e,"maps.AreaMap.changeCheckpoint","maps/AreaMap.hx",257,0xeb50e127)
		HX_STACK_THIS(this)
		HX_STACK_ARG(newCheckpoint,"newCheckpoint")
		HX_STACK_LINE(259)
		::maps::Checkpoint tmp = this->currentCheckpoint;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(259)
		bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(259)
		if ((tmp1)){
			HX_STACK_LINE(260)
			::maps::Checkpoint tmp2 = this->currentCheckpoint;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(260)
			tmp2->setInactive();
		}
		HX_STACK_LINE(262)
		this->currentCheckpoint = newCheckpoint;
		HX_STACK_LINE(263)
		::maps::Checkpoint tmp2 = this->currentCheckpoint;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(263)
		tmp2->setActive();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(AreaMap_obj,changeCheckpoint,(void))


AreaMap_obj::AreaMap_obj()
{
}

void AreaMap_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(AreaMap);
	HX_MARK_MEMBER_NAME(objectList,"objectList");
	HX_MARK_MEMBER_NAME(player,"player");
	HX_MARK_MEMBER_NAME(startPoint,"startPoint");
	HX_MARK_MEMBER_NAME(currentCheckpoint,"currentCheckpoint");
	HX_MARK_MEMBER_NAME(checkPoints,"checkPoints");
	HX_MARK_MEMBER_NAME(endPoint,"endPoint");
	HX_MARK_MEMBER_NAME(nextMap,"nextMap");
	HX_MARK_MEMBER_NAME(background,"background");
	HX_MARK_MEMBER_NAME(mapWidth,"mapWidth");
	HX_MARK_MEMBER_NAME(mapHeight,"mapHeight");
	HX_MARK_MEMBER_NAME(tileSize,"tileSize");
	::openfl::display::Sprite_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void AreaMap_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(objectList,"objectList");
	HX_VISIT_MEMBER_NAME(player,"player");
	HX_VISIT_MEMBER_NAME(startPoint,"startPoint");
	HX_VISIT_MEMBER_NAME(currentCheckpoint,"currentCheckpoint");
	HX_VISIT_MEMBER_NAME(checkPoints,"checkPoints");
	HX_VISIT_MEMBER_NAME(endPoint,"endPoint");
	HX_VISIT_MEMBER_NAME(nextMap,"nextMap");
	HX_VISIT_MEMBER_NAME(background,"background");
	HX_VISIT_MEMBER_NAME(mapWidth,"mapWidth");
	HX_VISIT_MEMBER_NAME(mapHeight,"mapHeight");
	HX_VISIT_MEMBER_NAME(tileSize,"tileSize");
	::openfl::display::Sprite_obj::__Visit(HX_VISIT_ARG);
}

Dynamic AreaMap_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"player") ) { return player; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"nextMap") ) { return nextMap; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"endPoint") ) { return endPoint; }
		if (HX_FIELD_EQ(inName,"mapWidth") ) { return mapWidth; }
		if (HX_FIELD_EQ(inName,"tileSize") ) { return tileSize; }
		if (HX_FIELD_EQ(inName,"addMapBG") ) { return addMapBG_dyn(); }
		if (HX_FIELD_EQ(inName,"resetMap") ) { return resetMap_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"mapHeight") ) { return mapHeight; }
		if (HX_FIELD_EQ(inName,"readTiles") ) { return readTiles_dyn(); }
		if (HX_FIELD_EQ(inName,"updateMap") ) { return updateMap_dyn(); }
		if (HX_FIELD_EQ(inName,"addPlayer") ) { return addPlayer_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"objectList") ) { return objectList; }
		if (HX_FIELD_EQ(inName,"startPoint") ) { return startPoint; }
		if (HX_FIELD_EQ(inName,"background") ) { return background; }
		if (HX_FIELD_EQ(inName,"createTile") ) { return createTile_dyn(); }
		if (HX_FIELD_EQ(inName,"setNextMap") ) { return setNextMap_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"checkPoints") ) { return checkPoints; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"createObject") ) { return createObject_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"createEndpoint") ) { return createEndpoint_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"checkCollisions") ) { return checkCollisions_dyn(); }
		if (HX_FIELD_EQ(inName,"updateEndPortal") ) { return updateEndPortal_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"createCheckpoint") ) { return createCheckpoint_dyn(); }
		if (HX_FIELD_EQ(inName,"createStartpoint") ) { return createStartpoint_dyn(); }
		if (HX_FIELD_EQ(inName,"changeCheckpoint") ) { return changeCheckpoint_dyn(); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"currentCheckpoint") ) { return currentCheckpoint; }
		if (HX_FIELD_EQ(inName,"updateCheckpoints") ) { return updateCheckpoints_dyn(); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"parseMapDimensions") ) { return parseMapDimensions_dyn(); }
		if (HX_FIELD_EQ(inName,"initiateObjectList") ) { return initiateObjectList_dyn(); }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"checkObjectCollision") ) { return checkObjectCollision_dyn(); }
		if (HX_FIELD_EQ(inName,"getCurrentCheckpoint") ) { return getCurrentCheckpoint_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic AreaMap_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"player") ) { player=inValue.Cast< ::actors::Player >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"nextMap") ) { nextMap=inValue.Cast< ::maps::AreaMap >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"endPoint") ) { endPoint=inValue.Cast< ::maps::Portal >(); return inValue; }
		if (HX_FIELD_EQ(inName,"mapWidth") ) { mapWidth=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"tileSize") ) { tileSize=inValue.Cast< int >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"mapHeight") ) { mapHeight=inValue.Cast< int >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"objectList") ) { objectList=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"startPoint") ) { startPoint=inValue.Cast< ::maps::Checkpoint >(); return inValue; }
		if (HX_FIELD_EQ(inName,"background") ) { background=inValue.Cast< ::openfl::display::Shape >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"checkPoints") ) { checkPoints=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"currentCheckpoint") ) { currentCheckpoint=inValue.Cast< ::maps::Checkpoint >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool AreaMap_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	return false;
}

void AreaMap_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("objectList","\xbd","\x92","\xeb","\xc9"));
	outFields->push(HX_HCSTRING("player","\x61","\xeb","\xb8","\x37"));
	outFields->push(HX_HCSTRING("startPoint","\x8e","\x8c","\xa6","\xe2"));
	outFields->push(HX_HCSTRING("currentCheckpoint","\x21","\xc8","\x87","\x1a"));
	outFields->push(HX_HCSTRING("checkPoints","\x0b","\xe5","\x3f","\xd9"));
	outFields->push(HX_HCSTRING("endPoint","\x75","\x46","\x8d","\xc4"));
	outFields->push(HX_HCSTRING("nextMap","\x69","\x97","\x41","\xa5"));
	outFields->push(HX_HCSTRING("background","\xee","\x93","\x1d","\x26"));
	outFields->push(HX_HCSTRING("mapWidth","\xca","\x25","\xa5","\x41"));
	outFields->push(HX_HCSTRING("mapHeight","\xa3","\x63","\x2b","\xe5"));
	outFields->push(HX_HCSTRING("tileSize","\x0f","\xc7","\x59","\x86"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(AreaMap_obj,objectList),HX_HCSTRING("objectList","\xbd","\x92","\xeb","\xc9")},
	{hx::fsObject /*::actors::Player*/ ,(int)offsetof(AreaMap_obj,player),HX_HCSTRING("player","\x61","\xeb","\xb8","\x37")},
	{hx::fsObject /*::maps::Checkpoint*/ ,(int)offsetof(AreaMap_obj,startPoint),HX_HCSTRING("startPoint","\x8e","\x8c","\xa6","\xe2")},
	{hx::fsObject /*::maps::Checkpoint*/ ,(int)offsetof(AreaMap_obj,currentCheckpoint),HX_HCSTRING("currentCheckpoint","\x21","\xc8","\x87","\x1a")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(AreaMap_obj,checkPoints),HX_HCSTRING("checkPoints","\x0b","\xe5","\x3f","\xd9")},
	{hx::fsObject /*::maps::Portal*/ ,(int)offsetof(AreaMap_obj,endPoint),HX_HCSTRING("endPoint","\x75","\x46","\x8d","\xc4")},
	{hx::fsObject /*::maps::AreaMap*/ ,(int)offsetof(AreaMap_obj,nextMap),HX_HCSTRING("nextMap","\x69","\x97","\x41","\xa5")},
	{hx::fsObject /*::openfl::display::Shape*/ ,(int)offsetof(AreaMap_obj,background),HX_HCSTRING("background","\xee","\x93","\x1d","\x26")},
	{hx::fsInt,(int)offsetof(AreaMap_obj,mapWidth),HX_HCSTRING("mapWidth","\xca","\x25","\xa5","\x41")},
	{hx::fsInt,(int)offsetof(AreaMap_obj,mapHeight),HX_HCSTRING("mapHeight","\xa3","\x63","\x2b","\xe5")},
	{hx::fsInt,(int)offsetof(AreaMap_obj,tileSize),HX_HCSTRING("tileSize","\x0f","\xc7","\x59","\x86")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("objectList","\xbd","\x92","\xeb","\xc9"),
	HX_HCSTRING("player","\x61","\xeb","\xb8","\x37"),
	HX_HCSTRING("startPoint","\x8e","\x8c","\xa6","\xe2"),
	HX_HCSTRING("currentCheckpoint","\x21","\xc8","\x87","\x1a"),
	HX_HCSTRING("checkPoints","\x0b","\xe5","\x3f","\xd9"),
	HX_HCSTRING("endPoint","\x75","\x46","\x8d","\xc4"),
	HX_HCSTRING("nextMap","\x69","\x97","\x41","\xa5"),
	HX_HCSTRING("background","\xee","\x93","\x1d","\x26"),
	HX_HCSTRING("mapWidth","\xca","\x25","\xa5","\x41"),
	HX_HCSTRING("mapHeight","\xa3","\x63","\x2b","\xe5"),
	HX_HCSTRING("tileSize","\x0f","\xc7","\x59","\x86"),
	HX_HCSTRING("parseMapDimensions","\xd6","\x03","\x06","\x32"),
	HX_HCSTRING("addMapBG","\x80","\x49","\x7d","\x7c"),
	HX_HCSTRING("initiateObjectList","\x76","\xca","\xa7","\xae"),
	HX_HCSTRING("readTiles","\x4f","\x4a","\x1c","\xe1"),
	HX_HCSTRING("createObject","\xdb","\xbe","\x94","\x37"),
	HX_HCSTRING("createTile","\x4a","\x8c","\x8a","\x5f"),
	HX_HCSTRING("createCheckpoint","\xa4","\xc4","\x7f","\x78"),
	HX_HCSTRING("createStartpoint","\xca","\x9a","\xa6","\x84"),
	HX_HCSTRING("createEndpoint","\xb1","\x55","\x9a","\x83"),
	HX_HCSTRING("setNextMap","\xe7","\xbb","\x20","\xf8"),
	HX_HCSTRING("resetMap","\x0d","\x44","\xd9","\x4f"),
	HX_HCSTRING("updateMap","\x13","\xe8","\xdf","\x82"),
	HX_HCSTRING("addPlayer","\x62","\x20","\xdd","\xef"),
	HX_HCSTRING("checkCollisions","\xa9","\x22","\x72","\x71"),
	HX_HCSTRING("updateCheckpoints","\x62","\x1d","\x15","\x09"),
	HX_HCSTRING("updateEndPortal","\x9e","\x99","\x92","\x8c"),
	HX_HCSTRING("checkObjectCollision","\xcb","\x49","\x1e","\x94"),
	HX_HCSTRING("getCurrentCheckpoint","\xab","\xfe","\xfc","\x41"),
	HX_HCSTRING("changeCheckpoint","\x18","\x08","\x04","\xd0"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(AreaMap_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(AreaMap_obj::__mClass,"__mClass");
};

#endif

hx::Class AreaMap_obj::__mClass;

void AreaMap_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("maps.AreaMap","\xd8","\xc3","\x52","\x88");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &AreaMap_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< AreaMap_obj >;
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
