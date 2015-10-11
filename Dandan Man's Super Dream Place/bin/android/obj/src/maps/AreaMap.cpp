#include <hxcpp.h>

#include "hxMath.h"
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_actors_Actor
#include <actors/Actor.h>
#endif
#ifndef INCLUDED_actors_Player
#include <actors/Player.h>
#endif
#ifndef INCLUDED_actors_attacks_Projectile
#include <actors/attacks/Projectile.h>
#endif
#ifndef INCLUDED_actors_enemies_Enemy
#include <actors/enemies/Enemy.h>
#endif
#ifndef INCLUDED_haxe_IMap
#include <haxe/IMap.h>
#endif
#ifndef INCLUDED_haxe_ds_StringMap
#include <haxe/ds/StringMap.h>
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
#ifndef INCLUDED_maps_Level
#include <maps/Level.h>
#endif
#ifndef INCLUDED_maps_LevelManager
#include <maps/LevelManager.h>
#endif
#ifndef INCLUDED_maps_ObjectFactory
#include <maps/ObjectFactory.h>
#endif
#ifndef INCLUDED_maps_mapobjects_AIPathWall
#include <maps/mapobjects/AIPathWall.h>
#endif
#ifndef INCLUDED_maps_mapobjects_Checkpoint
#include <maps/mapobjects/Checkpoint.h>
#endif
#ifndef INCLUDED_maps_mapobjects_MapObject
#include <maps/mapobjects/MapObject.h>
#endif
#ifndef INCLUDED_maps_mapobjects_Portal
#include <maps/mapobjects/Portal.h>
#endif
#ifndef INCLUDED_maps_mapobjects_SpawnPoint
#include <maps/mapobjects/SpawnPoint.h>
#endif
#ifndef INCLUDED_maps_mapobjects_Tile
#include <maps/mapobjects/Tile.h>
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

Void AreaMap_obj::__construct(::lime::utils::ByteArray mapFile,::maps::Level hostLevel)
{
HX_STACK_FRAME("maps.AreaMap","new",0xb9b930ca,"maps.AreaMap.new","maps/AreaMap.hx",47,0xeb50e127)
HX_STACK_THIS(this)
HX_STACK_ARG(mapFile,"mapFile")
HX_STACK_ARG(hostLevel,"hostLevel")
{
	HX_STACK_LINE(48)
	super::__construct();
	HX_STACK_LINE(49)
	this->hostLevel = hostLevel;
	HX_STACK_LINE(51)
	this->checkPoints = Array_obj< ::Dynamic >::__new();
	HX_STACK_LINE(52)
	this->spawnPoints = Array_obj< ::Dynamic >::__new();
	HX_STACK_LINE(53)
	this->pathWalls = Array_obj< ::Dynamic >::__new();
	HX_STACK_LINE(54)
	this->endPoints = Array_obj< ::Dynamic >::__new();
	HX_STACK_LINE(56)
	this->mapWidth = (int)0;
	HX_STACK_LINE(57)
	this->mapHeight = (int)0;
	HX_STACK_LINE(58)
	this->tileSize = (int)32;
	HX_STACK_LINE(59)
	::lime::utils::ByteArray fileBytes = mapFile;		HX_STACK_VAR(fileBytes,"fileBytes");
	HX_STACK_LINE(60)
	::String tmp = fileBytes->toString();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(60)
	::String fileInfo = tmp;		HX_STACK_VAR(fileInfo,"fileInfo");
	HX_STACK_LINE(61)
	Array< ::String > fileArray = fileInfo.split(HX_HCSTRING("\n","\x0a","\x00","\x00","\x00"));		HX_STACK_VAR(fileArray,"fileArray");
	HX_STACK_LINE(63)
	this->parseMapDimensions(fileArray);
	HX_STACK_LINE(64)
	this->addMapBG((int)0);
	HX_STACK_LINE(66)
	this->actorList = Array_obj< ::Dynamic >::__new();
	HX_STACK_LINE(67)
	this->projectileList = Array_obj< ::Dynamic >::__new();
	HX_STACK_LINE(68)
	int tmp1 = this->mapWidth;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(68)
	int tmp2 = this->mapHeight;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(68)
	this->initiateObjectList(tmp1,tmp2);
	HX_STACK_LINE(70)
	this->readTiles(fileArray);
	HX_STACK_LINE(71)
	this->readDynamicObjects(fileArray);
}
;
	return null();
}

//AreaMap_obj::~AreaMap_obj() { }

Dynamic AreaMap_obj::__CreateEmpty() { return  new AreaMap_obj; }
hx::ObjectPtr< AreaMap_obj > AreaMap_obj::__new(::lime::utils::ByteArray mapFile,::maps::Level hostLevel)
{  hx::ObjectPtr< AreaMap_obj > _result_ = new AreaMap_obj();
	_result_->__construct(mapFile,hostLevel);
	return _result_;}

Dynamic AreaMap_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< AreaMap_obj > _result_ = new AreaMap_obj();
	_result_->__construct(inArgs[0],inArgs[1]);
	return _result_;}

Void AreaMap_obj::parseMapDimensions( Array< ::String > fileArray){
{
		HX_STACK_FRAME("maps.AreaMap","parseMapDimensions",0x5b9daaac,"maps.AreaMap.parseMapDimensions","maps/AreaMap.hx",73,0xeb50e127)
		HX_STACK_THIS(this)
		HX_STACK_ARG(fileArray,"fileArray")
		HX_STACK_LINE(76)
		int fcount = (int)0;		HX_STACK_VAR(fcount,"fcount");
		HX_STACK_LINE(77)
		{
			HX_STACK_LINE(77)
			int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(77)
			int _g = fileArray->length;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(77)
			while((true)){
				HX_STACK_LINE(77)
				bool tmp = (_g1 < _g);		HX_STACK_VAR(tmp,"tmp");
				HX_STACK_LINE(77)
				bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(77)
				if ((tmp1)){
					HX_STACK_LINE(77)
					break;
				}
				HX_STACK_LINE(77)
				int tmp2 = (_g1)++;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(77)
				int f = tmp2;		HX_STACK_VAR(f,"f");
				HX_STACK_LINE(78)
				::String tmp3 = fileArray->__get(f);		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(78)
				int tmp4 = tmp3.indexOf(HX_HCSTRING("layer name","\xfa","\x4a","\x34","\xc8"),null());		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(78)
				bool tmp5 = (tmp4 >= (int)0);		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(78)
				if ((tmp5)){
					HX_STACK_LINE(79)
					break;
				}
				HX_STACK_LINE(80)
				hx::AddEq(fcount,(int)1);
			}
		}
		HX_STACK_LINE(83)
		::String tmp = fileArray->__get(fcount);		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(83)
		Array< ::String > sizeLine = tmp.split(HX_HCSTRING(" ","\x20","\x00","\x00","\x00"));		HX_STACK_VAR(sizeLine,"sizeLine");
		HX_STACK_LINE(84)
		{
			HX_STACK_LINE(84)
			int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(84)
			int _g = sizeLine->length;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(84)
			while((true)){
				HX_STACK_LINE(84)
				bool tmp1 = (_g1 < _g);		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(84)
				bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(84)
				if ((tmp2)){
					HX_STACK_LINE(84)
					break;
				}
				HX_STACK_LINE(84)
				int tmp3 = (_g1)++;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(84)
				int i = tmp3;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(85)
				::String tmp4 = sizeLine->__get(i);		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(85)
				int tmp5 = tmp4.indexOf(HX_HCSTRING("width","\x06","\xb6","\x62","\xca"),null());		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(85)
				bool tmp6 = (tmp5 >= (int)0);		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(85)
				if ((tmp6)){
					HX_STACK_LINE(86)
					::String tmp7 = sizeLine->__get(i);		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(86)
					Array< ::String > parsedWidth = tmp7.split(HX_HCSTRING("\"","\x22","\x00","\x00","\x00"));		HX_STACK_VAR(parsedWidth,"parsedWidth");
					HX_STACK_LINE(87)
					::String tmp8 = parsedWidth->__get((int)1);		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(87)
					Dynamic tmp9 = ::Std_obj::parseInt(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(87)
					this->mapWidth = tmp9;
				}
				else{
					HX_STACK_LINE(89)
					::String tmp7 = sizeLine->__get(i);		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(89)
					int tmp8 = tmp7.indexOf(HX_HCSTRING("height","\xe7","\x07","\x4c","\x02"),null());		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(89)
					bool tmp9 = (tmp8 >= (int)0);		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(89)
					if ((tmp9)){
						HX_STACK_LINE(90)
						::String tmp10 = sizeLine->__get(i);		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(90)
						Array< ::String > parsedHeight = tmp10.split(HX_HCSTRING("\"","\x22","\x00","\x00","\x00"));		HX_STACK_VAR(parsedHeight,"parsedHeight");
						HX_STACK_LINE(91)
						::String tmp11 = parsedHeight->__get((int)1);		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(91)
						Dynamic tmp12 = ::Std_obj::parseInt(tmp11);		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(91)
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
		HX_STACK_FRAME("maps.AreaMap","addMapBG",0x397028d6,"maps.AreaMap.addMapBG","maps/AreaMap.hx",95,0xeb50e127)
		HX_STACK_THIS(this)
		HX_STACK_ARG(color,"color")
		HX_STACK_LINE(97)
		::openfl::display::Shape tmp = ::openfl::display::Shape_obj::__new();		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(97)
		this->background = tmp;
		HX_STACK_LINE(98)
		::openfl::display::Shape tmp1 = this->background;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(98)
		::openfl::display::Graphics tmp2 = tmp1->get_graphics();		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(98)
		int tmp3 = color;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(98)
		tmp2->beginFill(tmp3,null());
		HX_STACK_LINE(99)
		::openfl::display::Shape tmp4 = this->background;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(99)
		::openfl::display::Graphics tmp5 = tmp4->get_graphics();		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(99)
		int tmp6 = this->mapWidth;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(99)
		int tmp7 = this->tileSize;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(99)
		int tmp8 = (tmp6 * tmp7);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(99)
		int tmp9 = this->mapHeight;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(99)
		int tmp10 = this->tileSize;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(99)
		int tmp11 = (tmp9 * tmp10);		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(99)
		tmp5->drawRect((int)0,(int)0,tmp8,tmp11);
		HX_STACK_LINE(100)
		::openfl::display::Shape tmp12 = this->background;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(100)
		::openfl::display::Graphics tmp13 = tmp12->get_graphics();		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(100)
		tmp13->endFill();
		HX_STACK_LINE(101)
		::openfl::display::Shape tmp14 = this->background;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(101)
		this->addChildAt(tmp14,(int)0);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(AreaMap_obj,addMapBG,(void))

Void AreaMap_obj::initiateObjectList( int width,int height){
{
		HX_STACK_FRAME("maps.AreaMap","initiateObjectList",0xd83f714c,"maps.AreaMap.initiateObjectList","maps/AreaMap.hx",103,0xeb50e127)
		HX_STACK_THIS(this)
		HX_STACK_ARG(width,"width")
		HX_STACK_ARG(height,"height")
		HX_STACK_LINE(105)
		this->objectList = Array_obj< ::Dynamic >::__new();
		HX_STACK_LINE(106)
		{
			HX_STACK_LINE(106)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(106)
			while((true)){
				HX_STACK_LINE(106)
				bool tmp = (_g < height);		HX_STACK_VAR(tmp,"tmp");
				HX_STACK_LINE(106)
				bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(106)
				if ((tmp1)){
					HX_STACK_LINE(106)
					break;
				}
				HX_STACK_LINE(106)
				int tmp2 = (_g)++;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(106)
				int y = tmp2;		HX_STACK_VAR(y,"y");
				HX_STACK_LINE(107)
				Array< ::Dynamic > row = Array_obj< ::Dynamic >::__new();		HX_STACK_VAR(row,"row");
				HX_STACK_LINE(108)
				{
					HX_STACK_LINE(108)
					int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
					HX_STACK_LINE(108)
					while((true)){
						HX_STACK_LINE(108)
						bool tmp3 = (_g1 < width);		HX_STACK_VAR(tmp3,"tmp3");
						HX_STACK_LINE(108)
						bool tmp4 = !(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
						HX_STACK_LINE(108)
						if ((tmp4)){
							HX_STACK_LINE(108)
							break;
						}
						HX_STACK_LINE(108)
						int tmp5 = (_g1)++;		HX_STACK_VAR(tmp5,"tmp5");
						HX_STACK_LINE(108)
						int x = tmp5;		HX_STACK_VAR(x,"x");
						HX_STACK_LINE(109)
						row->push(null());
					}
				}
				HX_STACK_LINE(111)
				this->objectList->push(row);
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(AreaMap_obj,initiateObjectList,(void))

Void AreaMap_obj::readTiles( Array< ::String > fileArray){
{
		HX_STACK_FRAME("maps.AreaMap","readTiles",0x78acd639,"maps.AreaMap.readTiles","maps/AreaMap.hx",114,0xeb50e127)
		HX_STACK_THIS(this)
		HX_STACK_ARG(fileArray,"fileArray")
		HX_STACK_LINE(116)
		int yCounter = (int)0;		HX_STACK_VAR(yCounter,"yCounter");
		HX_STACK_LINE(117)
		int xCounter = (int)0;		HX_STACK_VAR(xCounter,"xCounter");
		HX_STACK_LINE(119)
		{
			HX_STACK_LINE(119)
			int _g1 = (int)7;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(119)
			int _g = fileArray->length;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(119)
			while((true)){
				HX_STACK_LINE(119)
				bool tmp = (_g1 < _g);		HX_STACK_VAR(tmp,"tmp");
				HX_STACK_LINE(119)
				bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(119)
				if ((tmp1)){
					HX_STACK_LINE(119)
					break;
				}
				HX_STACK_LINE(119)
				int tmp2 = (_g1)++;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(119)
				int j = tmp2;		HX_STACK_VAR(j,"j");
				HX_STACK_LINE(120)
				::String tmp3 = fileArray->__get(j);		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(120)
				int tmp4 = tmp3.indexOf(HX_HCSTRING("layer name","\xfa","\x4a","\x34","\xc8"),null());		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(120)
				bool tmp5 = (tmp4 >= (int)0);		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(120)
				if ((tmp5)){
					HX_STACK_LINE(121)
					xCounter = (int)0;
					HX_STACK_LINE(122)
					yCounter = (int)0;
					HX_STACK_LINE(123)
					continue;
				}
				else{
					HX_STACK_LINE(125)
					::String tmp6 = fileArray->__get(j);		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(125)
					int tmp7 = tmp6.indexOf(HX_HCSTRING("tile gid=\"","\x55","\x2b","\x67","\x8f"),null());		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(125)
					bool tmp8 = (tmp7 < (int)0);		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(125)
					if ((tmp8)){
						HX_STACK_LINE(126)
						continue;
					}
				}
				HX_STACK_LINE(128)
				::String tmp6 = fileArray->__get(j);		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(128)
				Array< ::String > parsedTileLine = tmp6.split(HX_HCSTRING("\"","\x22","\x00","\x00","\x00"));		HX_STACK_VAR(parsedTileLine,"parsedTileLine");
				HX_STACK_LINE(129)
				::String tmp7 = parsedTileLine->__get((int)1);		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(129)
				Dynamic tmp8 = ::Std_obj::parseInt(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(129)
				int index = tmp8;		HX_STACK_VAR(index,"index");
				HX_STACK_LINE(131)
				int tmp9 = index;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(131)
				int tmp10 = xCounter;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(131)
				int tmp11 = yCounter;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(131)
				this->createObject(tmp9,tmp10,tmp11);
				HX_STACK_LINE(133)
				hx::AddEq(xCounter,(int)1);
				HX_STACK_LINE(134)
				int tmp12 = xCounter;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(134)
				int tmp13 = this->mapWidth;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(134)
				bool tmp14 = (tmp12 >= tmp13);		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(134)
				if ((tmp14)){
					HX_STACK_LINE(135)
					xCounter = (int)0;
					HX_STACK_LINE(136)
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
		HX_STACK_FRAME("maps.AreaMap","createObject",0x35590131,"maps.AreaMap.createObject","maps/AreaMap.hx",140,0xeb50e127)
		HX_STACK_THIS(this)
		HX_STACK_ARG(index,"index")
		HX_STACK_ARG(x,"x")
		HX_STACK_ARG(y,"y")
		HX_STACK_LINE(141)
		bool tmp = (index == (int)0);		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(141)
		if ((tmp)){
			HX_STACK_LINE(141)
			return null();
		}
		HX_STACK_LINE(143)
		::maps::ObjectFactory tmp1 = ::maps::ObjectFactory_obj::getSingleton();		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(143)
		int tmp2 = index;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(143)
		bool tmp3 = tmp1->isObjectTile(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(143)
		if ((tmp3)){
			HX_STACK_LINE(144)
			int tmp4 = index;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(144)
			int tmp5 = x;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(144)
			int tmp6 = y;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(144)
			this->createTile(tmp4,tmp5,tmp6);
		}
		else{
			HX_STACK_LINE(145)
			::maps::ObjectFactory tmp4 = ::maps::ObjectFactory_obj::getSingleton();		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(145)
			int tmp5 = index;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(145)
			bool tmp6 = tmp4->isObjectCheckpoint(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(145)
			if ((tmp6)){
				HX_STACK_LINE(146)
				int tmp7 = index;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(146)
				int tmp8 = x;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(146)
				int tmp9 = y;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(146)
				this->createCheckpoint(tmp7,tmp8,tmp9);
			}
			else{
				HX_STACK_LINE(147)
				::maps::ObjectFactory tmp7 = ::maps::ObjectFactory_obj::getSingleton();		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(147)
				int tmp8 = index;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(147)
				bool tmp9 = tmp7->isMapStart(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(147)
				if ((tmp9)){
					HX_STACK_LINE(148)
					int tmp10 = index;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(148)
					int tmp11 = x;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(148)
					int tmp12 = y;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(148)
					this->createStartpoint(tmp10,tmp11,tmp12);
				}
				else{
					HX_STACK_LINE(151)
					::maps::ObjectFactory tmp10 = ::maps::ObjectFactory_obj::getSingleton();		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(151)
					int tmp11 = index;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(151)
					bool tmp12 = tmp10->isObjectSpawnPoint(tmp11);		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(151)
					if ((tmp12)){
						HX_STACK_LINE(152)
						int tmp13 = index;		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(152)
						int tmp14 = x;		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(152)
						int tmp15 = y;		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(152)
						this->createSpawnPoint(tmp13,tmp14,tmp15);
					}
					else{
						HX_STACK_LINE(153)
						::maps::ObjectFactory tmp13 = ::maps::ObjectFactory_obj::getSingleton();		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(153)
						int tmp14 = index;		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(153)
						bool tmp15 = tmp13->isObjectAIPathWall(tmp14);		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(153)
						if ((tmp15)){
							HX_STACK_LINE(154)
							int tmp16 = index;		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(154)
							int tmp17 = x;		HX_STACK_VAR(tmp17,"tmp17");
							HX_STACK_LINE(154)
							int tmp18 = y;		HX_STACK_VAR(tmp18,"tmp18");
							HX_STACK_LINE(154)
							this->createAIPathWall(tmp16,tmp17,tmp18);
						}
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
		HX_STACK_FRAME("maps.AreaMap","createTile",0x66746d20,"maps.AreaMap.createTile","maps/AreaMap.hx",156,0xeb50e127)
		HX_STACK_THIS(this)
		HX_STACK_ARG(index,"index")
		HX_STACK_ARG(x,"x")
		HX_STACK_ARG(y,"y")
		HX_STACK_LINE(157)
		::maps::ObjectFactory tmp = ::maps::ObjectFactory_obj::getSingleton();		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(157)
		int tmp1 = index;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(157)
		::maps::mapobjects::Tile tmp2 = tmp->createTile(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(157)
		::maps::mapobjects::Tile newTile = tmp2;		HX_STACK_VAR(newTile,"newTile");
		HX_STACK_LINE(158)
		bool tmp3 = (newTile == null());		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(158)
		if ((tmp3)){
			HX_STACK_LINE(159)
			return null();
		}
		HX_STACK_LINE(161)
		::maps::mapobjects::Tile tmp4 = newTile;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(161)
		this->addChild(tmp4);
		HX_STACK_LINE(162)
		int tmp5 = x;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(162)
		int tmp6 = this->tileSize;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(162)
		int tmp7 = (tmp5 * tmp6);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(162)
		newTile->set_x(tmp7);
		HX_STACK_LINE(163)
		int tmp8 = y;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(163)
		int tmp9 = this->tileSize;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(163)
		int tmp10 = (tmp8 * tmp9);		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(163)
		newTile->set_y(tmp10);
		HX_STACK_LINE(164)
		::maps::mapobjects::Tile tmp11 = newTile;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(164)
		this->objectList->__get(y).StaticCast< Array< ::Dynamic > >()[x] = tmp11;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(AreaMap_obj,createTile,(void))

Void AreaMap_obj::createCheckpoint( int index,int x,int y){
{
		HX_STACK_FRAME("maps.AreaMap","createCheckpoint",0x9f02e9fa,"maps.AreaMap.createCheckpoint","maps/AreaMap.hx",166,0xeb50e127)
		HX_STACK_THIS(this)
		HX_STACK_ARG(index,"index")
		HX_STACK_ARG(x,"x")
		HX_STACK_ARG(y,"y")
		HX_STACK_LINE(167)
		::maps::ObjectFactory tmp = ::maps::ObjectFactory_obj::getSingleton();		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(167)
		int tmp1 = index;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(167)
		::maps::mapobjects::Checkpoint tmp2 = tmp->createCheckpoint(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(167)
		::maps::mapobjects::Checkpoint newCheckpoint = tmp2;		HX_STACK_VAR(newCheckpoint,"newCheckpoint");
		HX_STACK_LINE(169)
		::maps::mapobjects::Checkpoint tmp3 = newCheckpoint;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(169)
		this->addChild(tmp3);
		HX_STACK_LINE(170)
		int tmp4 = x;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(170)
		int tmp5 = this->tileSize;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(170)
		int tmp6 = (tmp4 * tmp5);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(170)
		newCheckpoint->set_x(tmp6);
		HX_STACK_LINE(171)
		int tmp7 = y;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(171)
		int tmp8 = this->tileSize;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(171)
		int tmp9 = (tmp7 * tmp8);		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(171)
		newCheckpoint->set_y(tmp9);
		HX_STACK_LINE(172)
		::maps::mapobjects::Checkpoint tmp10 = newCheckpoint;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(172)
		this->objectList->__get(y).StaticCast< Array< ::Dynamic > >()[x] = tmp10;
		HX_STACK_LINE(174)
		::maps::mapobjects::Checkpoint tmp11 = newCheckpoint;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(174)
		this->checkPoints->push(tmp11);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(AreaMap_obj,createCheckpoint,(void))

Void AreaMap_obj::createStartpoint( int index,int x,int y){
{
		HX_STACK_FRAME("maps.AreaMap","createStartpoint",0xab29c020,"maps.AreaMap.createStartpoint","maps/AreaMap.hx",176,0xeb50e127)
		HX_STACK_THIS(this)
		HX_STACK_ARG(index,"index")
		HX_STACK_ARG(x,"x")
		HX_STACK_ARG(y,"y")
		HX_STACK_LINE(177)
		::maps::ObjectFactory tmp = ::maps::ObjectFactory_obj::getSingleton();		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(177)
		int tmp1 = index;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(177)
		::maps::mapobjects::Checkpoint tmp2 = tmp->createCheckpoint(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(177)
		::maps::mapobjects::Checkpoint startPoint = tmp2;		HX_STACK_VAR(startPoint,"startPoint");
		HX_STACK_LINE(178)
		int tmp3 = x;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(178)
		int tmp4 = this->tileSize;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(178)
		int tmp5 = (tmp3 * tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(178)
		startPoint->set_x(tmp5);
		HX_STACK_LINE(179)
		int tmp6 = y;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(179)
		int tmp7 = this->tileSize;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(179)
		int tmp8 = (tmp6 * tmp7);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(179)
		startPoint->set_y(tmp8);
		HX_STACK_LINE(180)
		this->startPoint = startPoint;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(AreaMap_obj,createStartpoint,(void))

Void AreaMap_obj::createEndpoint( int index,::String endMap,int x,int y){
{
		HX_STACK_FRAME("maps.AreaMap","createEndpoint",0xacb45987,"maps.AreaMap.createEndpoint","maps/AreaMap.hx",182,0xeb50e127)
		HX_STACK_THIS(this)
		HX_STACK_ARG(index,"index")
		HX_STACK_ARG(endMap,"endMap")
		HX_STACK_ARG(x,"x")
		HX_STACK_ARG(y,"y")
		HX_STACK_LINE(183)
		::maps::ObjectFactory tmp = ::maps::ObjectFactory_obj::getSingleton();		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(183)
		int tmp1 = index;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(183)
		::String tmp2 = endMap;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(183)
		::maps::mapobjects::Portal tmp3 = tmp->createPortal(tmp1,tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(183)
		::maps::mapobjects::Portal endPoint = tmp3;		HX_STACK_VAR(endPoint,"endPoint");
		HX_STACK_LINE(184)
		int tmp4 = x;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(184)
		int tmp5 = this->tileSize;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(184)
		int tmp6 = (tmp4 * tmp5);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(184)
		endPoint->set_x(tmp6);
		HX_STACK_LINE(185)
		int tmp7 = y;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(185)
		int tmp8 = this->tileSize;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(185)
		int tmp9 = (tmp7 * tmp8);		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(185)
		endPoint->set_y(tmp9);
		HX_STACK_LINE(186)
		::maps::mapobjects::Portal tmp10 = endPoint;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(186)
		this->endPoints->push(tmp10);
		HX_STACK_LINE(187)
		::maps::mapobjects::Portal tmp11 = endPoint;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(187)
		this->addChild(tmp11);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC4(AreaMap_obj,createEndpoint,(void))

Void AreaMap_obj::createSpawnPoint( int index,int x,int y){
{
		HX_STACK_FRAME("maps.AreaMap","createSpawnPoint",0x5c58b387,"maps.AreaMap.createSpawnPoint","maps/AreaMap.hx",189,0xeb50e127)
		HX_STACK_THIS(this)
		HX_STACK_ARG(index,"index")
		HX_STACK_ARG(x,"x")
		HX_STACK_ARG(y,"y")
		HX_STACK_LINE(190)
		::maps::ObjectFactory tmp = ::maps::ObjectFactory_obj::getSingleton();		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(190)
		int tmp1 = index;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(190)
		::maps::mapobjects::SpawnPoint tmp2 = tmp->createSpawnPoint(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(190)
		::maps::mapobjects::SpawnPoint spawnPoint = tmp2;		HX_STACK_VAR(spawnPoint,"spawnPoint");
		HX_STACK_LINE(191)
		int tmp3 = x;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(191)
		int tmp4 = this->tileSize;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(191)
		int tmp5 = (tmp3 * tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(191)
		spawnPoint->set_x(tmp5);
		HX_STACK_LINE(192)
		int tmp6 = y;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(192)
		int tmp7 = this->tileSize;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(192)
		int tmp8 = (tmp6 * tmp7);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(192)
		spawnPoint->set_y(tmp8);
		HX_STACK_LINE(194)
		::maps::mapobjects::SpawnPoint tmp9 = spawnPoint;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(194)
		this->spawnPoints->push(tmp9);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(AreaMap_obj,createSpawnPoint,(void))

Void AreaMap_obj::createAIPathWall( int index,int x,int y){
{
		HX_STACK_FRAME("maps.AreaMap","createAIPathWall",0x7d0261a9,"maps.AreaMap.createAIPathWall","maps/AreaMap.hx",196,0xeb50e127)
		HX_STACK_THIS(this)
		HX_STACK_ARG(index,"index")
		HX_STACK_ARG(x,"x")
		HX_STACK_ARG(y,"y")
		HX_STACK_LINE(197)
		::maps::ObjectFactory tmp = ::maps::ObjectFactory_obj::getSingleton();		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(197)
		int tmp1 = index;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(197)
		::maps::mapobjects::AIPathWall tmp2 = tmp->createAIPathWall(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(197)
		::maps::mapobjects::AIPathWall pathWall = tmp2;		HX_STACK_VAR(pathWall,"pathWall");
		HX_STACK_LINE(198)
		int tmp3 = x;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(198)
		int tmp4 = this->tileSize;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(198)
		int tmp5 = (tmp3 * tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(198)
		pathWall->set_x(tmp5);
		HX_STACK_LINE(199)
		int tmp6 = y;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(199)
		int tmp7 = this->tileSize;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(199)
		int tmp8 = (tmp6 * tmp7);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(199)
		pathWall->set_y(tmp8);
		HX_STACK_LINE(200)
		::maps::mapobjects::AIPathWall tmp9 = pathWall;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(200)
		this->objectList->__get(y).StaticCast< Array< ::Dynamic > >()[x] = tmp9;
		HX_STACK_LINE(202)
		::maps::mapobjects::AIPathWall tmp10 = pathWall;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(202)
		this->pathWalls->push(tmp10);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(AreaMap_obj,createAIPathWall,(void))

Void AreaMap_obj::readDynamicObjects( Array< ::String > fileArray){
{
		HX_STACK_FRAME("maps.AreaMap","readDynamicObjects",0x453cdfe1,"maps.AreaMap.readDynamicObjects","maps/AreaMap.hx",207,0xeb50e127)
		HX_STACK_THIS(this)
		HX_STACK_ARG(fileArray,"fileArray")
		HX_STACK_LINE(207)
		int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(207)
		int _g = fileArray->length;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(207)
		while((true)){
			HX_STACK_LINE(207)
			bool tmp = (_g1 < _g);		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(207)
			bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(207)
			if ((tmp1)){
				HX_STACK_LINE(207)
				break;
			}
			HX_STACK_LINE(207)
			int tmp2 = (_g1)++;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(207)
			int i = tmp2;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(208)
			::String tmp3 = fileArray->__get(i);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(208)
			int tmp4 = tmp3.indexOf(HX_HCSTRING("object id","\x9c","\xa6","\x5b","\x43"),null());		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(208)
			bool tmp5 = (tmp4 >= (int)0);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(208)
			if ((tmp5)){
				HX_STACK_LINE(209)
				int tmp6 = i;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(209)
				this->parseDynamicObject(fileArray,tmp6);
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(AreaMap_obj,readDynamicObjects,(void))

Void AreaMap_obj::parseDynamicObject( Array< ::String > fileArray,int startIndex){
{
		HX_STACK_FRAME("maps.AreaMap","parseDynamicObject",0xbe10be41,"maps.AreaMap.parseDynamicObject","maps/AreaMap.hx",213,0xeb50e127)
		HX_STACK_THIS(this)
		HX_STACK_ARG(fileArray,"fileArray")
		HX_STACK_ARG(startIndex,"startIndex")
		HX_STACK_LINE(215)
		::haxe::ds::StringMap tmp;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(215)
		{
			HX_STACK_LINE(215)
			::haxe::ds::StringMap tmp1 = ::haxe::ds::StringMap_obj::__new();		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(215)
			::haxe::ds::StringMap tmp2 = tmp1;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(215)
			tmp = tmp2;
		}
		HX_STACK_LINE(215)
		::haxe::ds::StringMap objectProperties = tmp;		HX_STACK_VAR(objectProperties,"objectProperties");
		HX_STACK_LINE(216)
		::String tmp1 = fileArray->__get(startIndex);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(216)
		int tmp2 = this->parseObjectID(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(216)
		int objectID = tmp2;		HX_STACK_VAR(objectID,"objectID");
		HX_STACK_LINE(217)
		::String tmp3 = fileArray->__get(startIndex);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(217)
		::openfl::geom::Point tmp4 = this->parseObjectLocation(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(217)
		::openfl::geom::Point objectLocation = tmp4;		HX_STACK_VAR(objectLocation,"objectLocation");
		HX_STACK_LINE(219)
		{
			HX_STACK_LINE(219)
			int _g1 = startIndex;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(219)
			int _g = fileArray->length;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(219)
			while((true)){
				HX_STACK_LINE(219)
				bool tmp5 = (_g1 < _g);		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(219)
				bool tmp6 = !(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(219)
				if ((tmp6)){
					HX_STACK_LINE(219)
					break;
				}
				HX_STACK_LINE(219)
				int tmp7 = (_g1)++;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(219)
				int j = tmp7;		HX_STACK_VAR(j,"j");
				HX_STACK_LINE(220)
				::String tmp8 = fileArray->__get(j);		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(220)
				int tmp9 = tmp8.indexOf(HX_HCSTRING("/properties","\xe2","\xac","\xe4","\x09"),null());		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(220)
				bool tmp10 = (tmp9 >= (int)0);		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(220)
				if ((tmp10)){
					HX_STACK_LINE(220)
					break;
				}
				HX_STACK_LINE(222)
				::String tmp11 = fileArray->__get(j);		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(222)
				int tmp12 = tmp11.indexOf(HX_HCSTRING("property name","\xf6","\x65","\xea","\x6c"),null());		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(222)
				bool tmp13 = (tmp12 >= (int)0);		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(222)
				if ((tmp13)){
					HX_STACK_LINE(223)
					::String tmp14 = fileArray->__get(j);		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(223)
					::haxe::ds::StringMap tmp15 = objectProperties;		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(223)
					::haxe::ds::StringMap tmp16 = this->addObjectProperty(tmp14,tmp15);		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(223)
					objectProperties = tmp16;
				}
			}
		}
		HX_STACK_LINE(226)
		::String tmp5 = objectProperties->get(HX_HCSTRING("type","\xba","\xf2","\x08","\x4d"));		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(226)
		::String tmp6 = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(226)
		bool tmp7 = (tmp6 == HX_HCSTRING("portal","\xac","\x7a","\x25","\xfd"));		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(226)
		if ((tmp7)){
			HX_STACK_LINE(227)
			int tmp8 = objectID;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(227)
			::String tmp9 = objectProperties->get(HX_HCSTRING("map","\x9c","\x0a","\x53","\x00"));		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(227)
			::String tmp10 = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(227)
			Float tmp11 = objectLocation->x;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(227)
			int tmp12 = this->tileSize;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(227)
			Float tmp13 = (Float(tmp11) / Float(tmp12));		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(227)
			int tmp14 = ((int)(tmp13));		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(227)
			Float tmp15 = objectLocation->y;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(227)
			int tmp16 = this->tileSize;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(227)
			Float tmp17 = (Float(tmp15) / Float(tmp16));		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(227)
			int tmp18 = ((int)(tmp17));		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(227)
			this->createEndpoint(tmp8,tmp10,tmp14,tmp18);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(AreaMap_obj,parseDynamicObject,(void))

int AreaMap_obj::parseObjectID( ::String idLine){
	HX_STACK_FRAME("maps.AreaMap","parseObjectID",0xd6512c97,"maps.AreaMap.parseObjectID","maps/AreaMap.hx",229,0xeb50e127)
	HX_STACK_THIS(this)
	HX_STACK_ARG(idLine,"idLine")
	HX_STACK_LINE(230)
	Array< ::String > parsedLine = idLine.split(HX_HCSTRING(" ","\x20","\x00","\x00","\x00"));		HX_STACK_VAR(parsedLine,"parsedLine");
	HX_STACK_LINE(231)
	int objectID = (int)0;		HX_STACK_VAR(objectID,"objectID");
	HX_STACK_LINE(232)
	{
		HX_STACK_LINE(232)
		int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(232)
		int _g = parsedLine->length;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(232)
		while((true)){
			HX_STACK_LINE(232)
			bool tmp = (_g1 < _g);		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(232)
			bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(232)
			if ((tmp1)){
				HX_STACK_LINE(232)
				break;
			}
			HX_STACK_LINE(232)
			int tmp2 = (_g1)++;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(232)
			int i = tmp2;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(233)
			::String tmp3 = parsedLine->__get(i);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(233)
			int tmp4 = tmp3.indexOf(HX_HCSTRING("gid","\x02","\x84","\x4e","\x00"),null());		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(233)
			bool tmp5 = (tmp4 >= (int)0);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(233)
			if ((tmp5)){
				HX_STACK_LINE(234)
				::String tmp6 = parsedLine->__get(i);		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(234)
				::String tmp7 = tmp6.split(HX_HCSTRING("\"","\x22","\x00","\x00","\x00"))->__get((int)1);		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(234)
				Dynamic tmp8 = ::Std_obj::parseInt(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(234)
				objectID = tmp8;
			}
		}
	}
	HX_STACK_LINE(236)
	int tmp = objectID;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(236)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC1(AreaMap_obj,parseObjectID,return )

::openfl::geom::Point AreaMap_obj::parseObjectLocation( ::String idLine){
	HX_STACK_FRAME("maps.AreaMap","parseObjectLocation",0x84854c11,"maps.AreaMap.parseObjectLocation","maps/AreaMap.hx",238,0xeb50e127)
	HX_STACK_THIS(this)
	HX_STACK_ARG(idLine,"idLine")
	HX_STACK_LINE(239)
	Array< ::String > parsedLine = idLine.split(HX_HCSTRING(" ","\x20","\x00","\x00","\x00"));		HX_STACK_VAR(parsedLine,"parsedLine");
	HX_STACK_LINE(240)
	int objectX = (int)0;		HX_STACK_VAR(objectX,"objectX");
	HX_STACK_LINE(241)
	int objectY = (int)0;		HX_STACK_VAR(objectY,"objectY");
	HX_STACK_LINE(242)
	{
		HX_STACK_LINE(242)
		int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(242)
		int _g = parsedLine->length;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(242)
		while((true)){
			HX_STACK_LINE(242)
			bool tmp = (_g1 < _g);		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(242)
			bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(242)
			if ((tmp1)){
				HX_STACK_LINE(242)
				break;
			}
			HX_STACK_LINE(242)
			int tmp2 = (_g1)++;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(242)
			int i = tmp2;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(243)
			::String tmp3 = parsedLine->__get(i);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(243)
			int tmp4 = tmp3.indexOf(HX_HCSTRING("x","\x78","\x00","\x00","\x00"),null());		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(243)
			bool tmp5 = (tmp4 >= (int)0);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(243)
			if ((tmp5)){
				HX_STACK_LINE(244)
				::String tmp6 = parsedLine->__get(i);		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(244)
				::String tmp7 = tmp6.split(HX_HCSTRING("\"","\x22","\x00","\x00","\x00"))->__get((int)1);		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(244)
				Dynamic tmp8 = ::Std_obj::parseInt(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(244)
				objectX = tmp8;
			}
			HX_STACK_LINE(245)
			::String tmp6 = parsedLine->__get(i);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(245)
			int tmp7 = tmp6.indexOf(HX_HCSTRING("y","\x79","\x00","\x00","\x00"),null());		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(245)
			bool tmp8 = (tmp7 >= (int)0);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(245)
			if ((tmp8)){
				HX_STACK_LINE(246)
				::String tmp9 = parsedLine->__get(i);		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(246)
				::String tmp10 = tmp9.split(HX_HCSTRING("\"","\x22","\x00","\x00","\x00"))->__get((int)1);		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(246)
				Dynamic tmp11 = ::Std_obj::parseInt(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(246)
				objectY = tmp11;
			}
		}
	}
	HX_STACK_LINE(248)
	int tmp = objectX;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(248)
	int tmp1 = (objectY - (int)1);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(248)
	::openfl::geom::Point tmp2 = ::openfl::geom::Point_obj::__new(tmp,tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(248)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC1(AreaMap_obj,parseObjectLocation,return )

::haxe::ds::StringMap AreaMap_obj::addObjectProperty( ::String propertyLine,::haxe::ds::StringMap propertyMap){
	HX_STACK_FRAME("maps.AreaMap","addObjectProperty",0x7c04fe1f,"maps.AreaMap.addObjectProperty","maps/AreaMap.hx",250,0xeb50e127)
	HX_STACK_THIS(this)
	HX_STACK_ARG(propertyLine,"propertyLine")
	HX_STACK_ARG(propertyMap,"propertyMap")
	HX_STACK_LINE(251)
	Array< ::String > parsedLine = propertyLine.split(HX_HCSTRING(" ","\x20","\x00","\x00","\x00"));		HX_STACK_VAR(parsedLine,"parsedLine");
	HX_STACK_LINE(252)
	::String name = HX_HCSTRING("","\x00","\x00","\x00","\x00");		HX_STACK_VAR(name,"name");
	HX_STACK_LINE(253)
	::String value = HX_HCSTRING("","\x00","\x00","\x00","\x00");		HX_STACK_VAR(value,"value");
	HX_STACK_LINE(254)
	{
		HX_STACK_LINE(254)
		int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(254)
		int _g = parsedLine->length;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(254)
		while((true)){
			HX_STACK_LINE(254)
			bool tmp = (_g1 < _g);		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(254)
			bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(254)
			if ((tmp1)){
				HX_STACK_LINE(254)
				break;
			}
			HX_STACK_LINE(254)
			int tmp2 = (_g1)++;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(254)
			int i = tmp2;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(255)
			::String tmp3 = parsedLine->__get(i);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(255)
			int tmp4 = tmp3.indexOf(HX_HCSTRING("name","\x4b","\x72","\xff","\x48"),null());		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(255)
			bool tmp5 = (tmp4 >= (int)0);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(255)
			if ((tmp5)){
				HX_STACK_LINE(256)
				::String tmp6 = parsedLine->__get(i);		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(256)
				::String tmp7 = tmp6.split(HX_HCSTRING("\"","\x22","\x00","\x00","\x00"))->__get((int)1);		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(256)
				name = tmp7;
			}
			HX_STACK_LINE(257)
			::String tmp6 = parsedLine->__get(i);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(257)
			int tmp7 = tmp6.indexOf(HX_HCSTRING("value","\x71","\x7f","\xb8","\x31"),null());		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(257)
			bool tmp8 = (tmp7 >= (int)0);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(257)
			if ((tmp8)){
				HX_STACK_LINE(258)
				::String tmp9 = parsedLine->__get(i);		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(258)
				::String tmp10 = tmp9.split(HX_HCSTRING("\"","\x22","\x00","\x00","\x00"))->__get((int)1);		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(258)
				value = tmp10;
			}
		}
	}
	HX_STACK_LINE(260)
	::String tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(260)
	{
		HX_STACK_LINE(260)
		::String tmp1 = name;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(260)
		::String tmp2 = value;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(260)
		propertyMap->set(tmp1,tmp2);
		HX_STACK_LINE(260)
		tmp = value;
	}
	HX_STACK_LINE(260)
	tmp;
	HX_STACK_LINE(261)
	::haxe::ds::StringMap tmp1 = propertyMap;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(261)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC2(AreaMap_obj,addObjectProperty,return )

Void AreaMap_obj::resetMap( ){
{
		HX_STACK_FRAME("maps.AreaMap","resetMap",0x0ccc2363,"maps.AreaMap.resetMap","maps/AreaMap.hx",264,0xeb50e127)
		HX_STACK_THIS(this)
		HX_STACK_LINE(266)
		{
			HX_STACK_LINE(266)
			int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(266)
			int tmp = this->checkPoints->length;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(266)
			int _g = tmp;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(266)
			while((true)){
				HX_STACK_LINE(266)
				bool tmp1 = (_g1 < _g);		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(266)
				bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(266)
				if ((tmp2)){
					HX_STACK_LINE(266)
					break;
				}
				HX_STACK_LINE(266)
				int tmp3 = (_g1)++;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(266)
				int i = tmp3;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(267)
				::maps::mapobjects::Checkpoint tmp4 = this->checkPoints->__get(i).StaticCast< ::maps::mapobjects::Checkpoint >();		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(267)
				tmp4->setInactive();
			}
		}
		HX_STACK_LINE(269)
		Array< ::Dynamic > removeList = Array_obj< ::Dynamic >::__new();		HX_STACK_VAR(removeList,"removeList");
		HX_STACK_LINE(271)
		{
			HX_STACK_LINE(271)
			int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(271)
			int tmp = this->actorList->length;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(271)
			int _g = tmp;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(271)
			while((true)){
				HX_STACK_LINE(271)
				bool tmp1 = (_g1 < _g);		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(271)
				bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(271)
				if ((tmp2)){
					HX_STACK_LINE(271)
					break;
				}
				HX_STACK_LINE(271)
				int tmp3 = (_g1)++;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(271)
				int j = tmp3;		HX_STACK_VAR(j,"j");
				HX_STACK_LINE(272)
				::actors::Actor tmp4 = this->actorList->__get(j).StaticCast< ::actors::Actor >();		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(272)
				removeList->push(tmp4);
			}
		}
		HX_STACK_LINE(273)
		{
			HX_STACK_LINE(273)
			int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(273)
			int _g = removeList->length;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(273)
			while((true)){
				HX_STACK_LINE(273)
				bool tmp = (_g1 < _g);		HX_STACK_VAR(tmp,"tmp");
				HX_STACK_LINE(273)
				bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(273)
				if ((tmp1)){
					HX_STACK_LINE(273)
					break;
				}
				HX_STACK_LINE(273)
				int tmp2 = (_g1)++;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(273)
				int k = tmp2;		HX_STACK_VAR(k,"k");
				HX_STACK_LINE(274)
				::actors::Actor tmp3 = removeList->__get(k).StaticCast< ::actors::Actor >();		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(274)
				bool tmp4 = ::Std_obj::is(tmp3,hx::ClassOf< ::actors::Player >());		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(274)
				if ((tmp4)){
					HX_STACK_LINE(274)
					continue;
				}
				HX_STACK_LINE(275)
				::actors::Actor tmp5 = removeList->__get(k).StaticCast< ::actors::Actor >();		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(275)
				this->removeActor(tmp5);
			}
		}
		HX_STACK_LINE(278)
		Array< ::Dynamic > removeProjList = Array_obj< ::Dynamic >::__new();		HX_STACK_VAR(removeProjList,"removeProjList");
		HX_STACK_LINE(279)
		{
			HX_STACK_LINE(279)
			int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(279)
			int tmp = this->projectileList->length;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(279)
			int _g = tmp;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(279)
			while((true)){
				HX_STACK_LINE(279)
				bool tmp1 = (_g1 < _g);		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(279)
				bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(279)
				if ((tmp2)){
					HX_STACK_LINE(279)
					break;
				}
				HX_STACK_LINE(279)
				int tmp3 = (_g1)++;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(279)
				int c = tmp3;		HX_STACK_VAR(c,"c");
				HX_STACK_LINE(280)
				::actors::attacks::Projectile tmp4 = this->projectileList->__get(c).StaticCast< ::actors::attacks::Projectile >();		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(280)
				removeProjList->push(tmp4);
			}
		}
		HX_STACK_LINE(281)
		{
			HX_STACK_LINE(281)
			int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(281)
			int _g = removeProjList->length;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(281)
			while((true)){
				HX_STACK_LINE(281)
				bool tmp = (_g1 < _g);		HX_STACK_VAR(tmp,"tmp");
				HX_STACK_LINE(281)
				bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(281)
				if ((tmp1)){
					HX_STACK_LINE(281)
					break;
				}
				HX_STACK_LINE(281)
				int tmp2 = (_g1)++;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(281)
				int e = tmp2;		HX_STACK_VAR(e,"e");
				HX_STACK_LINE(282)
				::actors::attacks::Projectile tmp3 = removeProjList->__get(e).StaticCast< ::actors::attacks::Projectile >();		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(282)
				this->removeProjectile(tmp3);
			}
		}
		HX_STACK_LINE(283)
		this->resetSpawnPoints();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(AreaMap_obj,resetMap,(void))

Void AreaMap_obj::resetSpawnPoints( ){
{
		HX_STACK_FRAME("maps.AreaMap","resetSpawnPoints",0xdb5fba85,"maps.AreaMap.resetSpawnPoints","maps/AreaMap.hx",287,0xeb50e127)
		HX_STACK_THIS(this)
		HX_STACK_LINE(287)
		int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(287)
		int tmp = this->spawnPoints->length;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(287)
		int _g = tmp;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(287)
		while((true)){
			HX_STACK_LINE(287)
			bool tmp1 = (_g1 < _g);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(287)
			bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(287)
			if ((tmp2)){
				HX_STACK_LINE(287)
				break;
			}
			HX_STACK_LINE(287)
			int tmp3 = (_g1)++;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(287)
			int i = tmp3;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(288)
			::maps::mapobjects::SpawnPoint tmp4 = this->spawnPoints->__get(i).StaticCast< ::maps::mapobjects::SpawnPoint >();		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(288)
			tmp4->resetSpawn();
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(AreaMap_obj,resetSpawnPoints,(void))

Void AreaMap_obj::updateMap( ){
{
		HX_STACK_FRAME("maps.AreaMap","updateMap",0x1a7073fd,"maps.AreaMap.updateMap","maps/AreaMap.hx",293,0xeb50e127)
		HX_STACK_THIS(this)
		HX_STACK_LINE(295)
		::actors::Player tmp = this->player;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(295)
		tmp->updatePlayer();
		HX_STACK_LINE(296)
		this->updateActors();
		HX_STACK_LINE(297)
		this->updateProjectiles();
		HX_STACK_LINE(298)
		this->updateSpawnPoints();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(AreaMap_obj,updateMap,(void))

Void AreaMap_obj::updateActors( ){
{
		HX_STACK_FRAME("maps.AreaMap","updateActors",0x13d2b51d,"maps.AreaMap.updateActors","maps/AreaMap.hx",302,0xeb50e127)
		HX_STACK_THIS(this)
		HX_STACK_LINE(302)
		int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(302)
		int tmp = this->actorList->length;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(302)
		int _g = tmp;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(302)
		while((true)){
			HX_STACK_LINE(302)
			bool tmp1 = (_g1 < _g);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(302)
			bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(302)
			if ((tmp2)){
				HX_STACK_LINE(302)
				break;
			}
			HX_STACK_LINE(302)
			int tmp3 = (_g1)++;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(302)
			int i = tmp3;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(303)
			int tmp4 = i;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(303)
			int tmp5 = this->actorList->length;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(303)
			bool tmp6 = (tmp4 >= tmp5);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(303)
			if ((tmp6)){
				HX_STACK_LINE(303)
				return null();
			}
			HX_STACK_LINE(304)
			::actors::Actor tmp7 = this->actorList->__get(i).StaticCast< ::actors::Actor >();		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(304)
			tmp7->updateActor();
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(AreaMap_obj,updateActors,(void))

Void AreaMap_obj::updateSpawnPoints( ){
{
		HX_STACK_FRAME("maps.AreaMap","updateSpawnPoints",0x830d351f,"maps.AreaMap.updateSpawnPoints","maps/AreaMap.hx",309,0xeb50e127)
		HX_STACK_THIS(this)
		HX_STACK_LINE(309)
		int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(309)
		int tmp = this->spawnPoints->length;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(309)
		int _g = tmp;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(309)
		while((true)){
			HX_STACK_LINE(309)
			bool tmp1 = (_g1 < _g);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(309)
			bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(309)
			if ((tmp2)){
				HX_STACK_LINE(309)
				break;
			}
			HX_STACK_LINE(309)
			int tmp3 = (_g1)++;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(309)
			int i = tmp3;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(310)
			::maps::mapobjects::SpawnPoint tmp4 = this->spawnPoints->__get(i).StaticCast< ::maps::mapobjects::SpawnPoint >();		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(310)
			bool tmp5 = tmp4->updateSpawn();		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(310)
			if ((tmp5)){
				HX_STACK_LINE(311)
				::maps::mapobjects::SpawnPoint tmp6 = this->spawnPoints->__get(i).StaticCast< ::maps::mapobjects::SpawnPoint >();		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(311)
				::actors::enemies::Enemy tmp7 = tmp6->getEnemyType();		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(311)
				this->addActor(tmp7);
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(AreaMap_obj,updateSpawnPoints,(void))

Void AreaMap_obj::updateProjectiles( ){
{
		HX_STACK_FRAME("maps.AreaMap","updateProjectiles",0x2630d8cb,"maps.AreaMap.updateProjectiles","maps/AreaMap.hx",315,0xeb50e127)
		HX_STACK_THIS(this)
		HX_STACK_LINE(316)
		Array< ::Dynamic > expiredProjectiles = Array_obj< ::Dynamic >::__new();		HX_STACK_VAR(expiredProjectiles,"expiredProjectiles");
		HX_STACK_LINE(318)
		{
			HX_STACK_LINE(318)
			int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(318)
			int tmp = this->projectileList->length;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(318)
			int _g = tmp;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(318)
			while((true)){
				HX_STACK_LINE(318)
				bool tmp1 = (_g1 < _g);		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(318)
				bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(318)
				if ((tmp2)){
					HX_STACK_LINE(318)
					break;
				}
				HX_STACK_LINE(318)
				int tmp3 = (_g1)++;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(318)
				int i = tmp3;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(319)
				::actors::attacks::Projectile tmp4 = this->projectileList->__get(i).StaticCast< ::actors::attacks::Projectile >();		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(319)
				bool tmp5 = tmp4->updateProjectile();		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(319)
				if ((tmp5)){
					HX_STACK_LINE(320)
					::actors::attacks::Projectile tmp6 = this->projectileList->__get(i).StaticCast< ::actors::attacks::Projectile >();		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(320)
					expiredProjectiles->push(tmp6);
				}
			}
		}
		HX_STACK_LINE(322)
		{
			HX_STACK_LINE(322)
			int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(322)
			int _g = expiredProjectiles->length;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(322)
			while((true)){
				HX_STACK_LINE(322)
				bool tmp = (_g1 < _g);		HX_STACK_VAR(tmp,"tmp");
				HX_STACK_LINE(322)
				bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(322)
				if ((tmp1)){
					HX_STACK_LINE(322)
					break;
				}
				HX_STACK_LINE(322)
				int tmp2 = (_g1)++;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(322)
				int j = tmp2;		HX_STACK_VAR(j,"j");
				HX_STACK_LINE(323)
				::actors::attacks::Projectile tmp3 = expiredProjectiles->__get(j).StaticCast< ::actors::attacks::Projectile >();		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(323)
				this->removeProjectile(tmp3);
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(AreaMap_obj,updateProjectiles,(void))

Void AreaMap_obj::addPlayer( ::actors::Player player,::maps::mapobjects::Portal origin){
{
		HX_STACK_FRAME("maps.AreaMap","addPlayer",0x876dac4c,"maps.AreaMap.addPlayer","maps/AreaMap.hx",327,0xeb50e127)
		HX_STACK_THIS(this)
		HX_STACK_ARG(player,"player")
		HX_STACK_ARG(origin,"origin")
		HX_STACK_LINE(328)
		this->player = player;
		HX_STACK_LINE(329)
		::actors::Player tmp = player;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(329)
		this->addActor(tmp);
		HX_STACK_LINE(331)
		bool tmp1 = (origin != null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(331)
		if ((tmp1)){
			HX_STACK_LINE(332)
			Float tmp2 = origin->get_x();		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(332)
			Float tmp3 = (tmp2 + (int)6);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(332)
			player->set_x(tmp3);
			HX_STACK_LINE(333)
			Float tmp4 = origin->get_y();		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(333)
			Float tmp5 = (tmp4 - (int)4);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(333)
			player->set_y(tmp5);
			HX_STACK_LINE(334)
			this->currentCheckpoint = origin;
		}
		else{
			HX_STACK_LINE(336)
			::maps::mapobjects::Checkpoint tmp2 = this->startPoint;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(336)
			bool tmp3 = (tmp2 != null());		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(336)
			if ((tmp3)){
				HX_STACK_LINE(337)
				::maps::mapobjects::Checkpoint tmp4 = this->startPoint;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(337)
				Float tmp5 = tmp4->get_x();		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(337)
				player->set_x(tmp5);
				HX_STACK_LINE(338)
				::maps::mapobjects::Checkpoint tmp6 = this->startPoint;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(338)
				Float tmp7 = tmp6->get_y();		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(338)
				player->set_y(tmp7);
				HX_STACK_LINE(339)
				::maps::mapobjects::Checkpoint tmp8 = this->startPoint;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(339)
				this->currentCheckpoint = tmp8;
			}
			else{
				HX_STACK_LINE(342)
				player->set_x((int)32);
				HX_STACK_LINE(343)
				player->set_y((int)32);
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(AreaMap_obj,addPlayer,(void))

Void AreaMap_obj::addActor( ::actors::Actor actor){
{
		HX_STACK_FRAME("maps.AreaMap","addActor",0x51f6d06a,"maps.AreaMap.addActor","maps/AreaMap.hx",346,0xeb50e127)
		HX_STACK_THIS(this)
		HX_STACK_ARG(actor,"actor")
		HX_STACK_LINE(348)
		::actors::Actor tmp = actor;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(348)
		this->actorList->push(tmp);
		HX_STACK_LINE(349)
		actor->setCurrentMap(hx::ObjectPtr<OBJ_>(this));
		HX_STACK_LINE(350)
		::actors::Actor tmp1 = actor;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(350)
		this->addChild(tmp1);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(AreaMap_obj,addActor,(void))

Void AreaMap_obj::removeActor( ::actors::Actor actor){
{
		HX_STACK_FRAME("maps.AreaMap","removeActor",0x1f95827b,"maps.AreaMap.removeActor","maps/AreaMap.hx",352,0xeb50e127)
		HX_STACK_THIS(this)
		HX_STACK_ARG(actor,"actor")
		HX_STACK_LINE(353)
		::actors::Actor tmp = actor;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(353)
		bool tmp1 = this->contains(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(353)
		if ((tmp1)){
			HX_STACK_LINE(354)
			::actors::Actor tmp2 = actor;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(354)
			this->removeChild(tmp2);
		}
		HX_STACK_LINE(355)
		{
			HX_STACK_LINE(355)
			int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(355)
			int tmp2 = this->actorList->length;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(355)
			int _g = tmp2;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(355)
			while((true)){
				HX_STACK_LINE(355)
				bool tmp3 = (_g1 < _g);		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(355)
				bool tmp4 = !(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(355)
				if ((tmp4)){
					HX_STACK_LINE(355)
					break;
				}
				HX_STACK_LINE(355)
				int tmp5 = (_g1)++;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(355)
				int i = tmp5;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(356)
				::actors::Actor tmp6 = this->actorList->__get(i).StaticCast< ::actors::Actor >();		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(356)
				::actors::Actor tmp7 = actor;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(356)
				bool tmp8 = (tmp6 == tmp7);		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(356)
				if ((tmp8)){
					HX_STACK_LINE(357)
					int tmp9 = i;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(357)
					this->actorList->splice(tmp9,(int)1);
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(AreaMap_obj,removeActor,(void))

Void AreaMap_obj::addProjectile( ::actors::attacks::Projectile projectile){
{
		HX_STACK_FRAME("maps.AreaMap","addProjectile",0x3cca9854,"maps.AreaMap.addProjectile","maps/AreaMap.hx",361,0xeb50e127)
		HX_STACK_THIS(this)
		HX_STACK_ARG(projectile,"projectile")
		HX_STACK_LINE(362)
		::actors::attacks::Projectile tmp = projectile;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(362)
		this->projectileList->push(tmp);
		HX_STACK_LINE(363)
		projectile->setCurrentMap(hx::ObjectPtr<OBJ_>(this));
		HX_STACK_LINE(364)
		::actors::attacks::Projectile tmp1 = projectile;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(364)
		this->addChild(tmp1);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(AreaMap_obj,addProjectile,(void))

Void AreaMap_obj::removeProjectile( ::actors::attacks::Projectile projectile){
{
		HX_STACK_FRAME("maps.AreaMap","removeProjectile",0xa4b7c8a3,"maps.AreaMap.removeProjectile","maps/AreaMap.hx",366,0xeb50e127)
		HX_STACK_THIS(this)
		HX_STACK_ARG(projectile,"projectile")
		HX_STACK_LINE(367)
		::actors::attacks::Projectile tmp = projectile;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(367)
		int tmp1 = this->projectileList->indexOf(tmp,null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(367)
		this->projectileList->splice(tmp1,(int)1);
		HX_STACK_LINE(368)
		::actors::attacks::Projectile tmp2 = projectile;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(368)
		bool tmp3 = this->contains(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(368)
		if ((tmp3)){
			HX_STACK_LINE(369)
			::actors::attacks::Projectile tmp4 = projectile;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(369)
			this->removeChild(tmp4);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(AreaMap_obj,removeProjectile,(void))

Array< ::Dynamic > AreaMap_obj::checkCollisions( ::maps::mapobjects::MapObject object,hx::Null< bool >  __o_AIcheck){
bool AIcheck = __o_AIcheck.Default(false);
	HX_STACK_FRAME("maps.AreaMap","checkCollisions",0x3f1b7a13,"maps.AreaMap.checkCollisions","maps/AreaMap.hx",372,0xeb50e127)
	HX_STACK_THIS(this)
	HX_STACK_ARG(object,"object")
	HX_STACK_ARG(AIcheck,"AIcheck")
{
		HX_STACK_LINE(374)
		::openfl::geom::Rectangle tmp = object->getCollisionBounds();		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(374)
		::openfl::geom::Rectangle objectBounds = tmp;		HX_STACK_VAR(objectBounds,"objectBounds");
		HX_STACK_LINE(375)
		Float tmp1 = objectBounds->x;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(375)
		Float tmp2 = (Float(objectBounds->width) / Float((int)2));		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(375)
		Float tmp3 = (tmp1 + tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(375)
		Float tmp4 = objectBounds->y;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(375)
		Float tmp5 = (Float(objectBounds->height) / Float((int)2));		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(375)
		Float tmp6 = (tmp4 + tmp5);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(375)
		::openfl::geom::Point tmp7 = ::openfl::geom::Point_obj::__new(tmp3,tmp6);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(375)
		::openfl::geom::Point objectCenter = tmp7;		HX_STACK_VAR(objectCenter,"objectCenter");
		HX_STACK_LINE(376)
		Float tmp8 = objectCenter->x;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(376)
		int tmp9 = this->tileSize;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(376)
		Float tmp10 = (Float(tmp8) / Float(tmp9));		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(376)
		int tmp11 = ::Math_obj::floor(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(376)
		Float tmp12 = objectCenter->y;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(376)
		int tmp13 = this->tileSize;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(376)
		Float tmp14 = (Float(tmp12) / Float(tmp13));		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(376)
		int tmp15 = ::Math_obj::floor(tmp14);		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(376)
		::openfl::geom::Point tmp16 = ::openfl::geom::Point_obj::__new(tmp11,tmp15);		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(376)
		objectCenter = tmp16;
		HX_STACK_LINE(377)
		Array< ::Dynamic > collisionList = Array_obj< ::Dynamic >::__new();		HX_STACK_VAR(collisionList,"collisionList");
		HX_STACK_LINE(379)
		Float tmp17 = objectCenter->y;		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(379)
		int tmp18 = ::Math_obj::round(tmp17);		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(379)
		int objectY = tmp18;		HX_STACK_VAR(objectY,"objectY");
		HX_STACK_LINE(380)
		Float tmp19 = objectCenter->x;		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(380)
		int tmp20 = ::Math_obj::round(tmp19);		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(380)
		int objectX = tmp20;		HX_STACK_VAR(objectX,"objectX");
		HX_STACK_LINE(382)
		{
			HX_STACK_LINE(382)
			int tmp21 = (objectY - (int)1);		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(382)
			int _g1 = tmp21;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(382)
			int tmp22 = (objectY + (int)2);		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(382)
			int _g = tmp22;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(382)
			while((true)){
				HX_STACK_LINE(382)
				bool tmp23 = (_g1 < _g);		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(382)
				bool tmp24 = !(tmp23);		HX_STACK_VAR(tmp24,"tmp24");
				HX_STACK_LINE(382)
				if ((tmp24)){
					HX_STACK_LINE(382)
					break;
				}
				HX_STACK_LINE(382)
				int tmp25 = (_g1)++;		HX_STACK_VAR(tmp25,"tmp25");
				HX_STACK_LINE(382)
				int y = tmp25;		HX_STACK_VAR(y,"y");
				HX_STACK_LINE(383)
				{
					HX_STACK_LINE(383)
					int tmp26 = (objectX - (int)1);		HX_STACK_VAR(tmp26,"tmp26");
					HX_STACK_LINE(383)
					int _g3 = tmp26;		HX_STACK_VAR(_g3,"_g3");
					HX_STACK_LINE(383)
					int tmp27 = (objectX + (int)2);		HX_STACK_VAR(tmp27,"tmp27");
					HX_STACK_LINE(383)
					int _g2 = tmp27;		HX_STACK_VAR(_g2,"_g2");
					HX_STACK_LINE(383)
					while((true)){
						HX_STACK_LINE(383)
						bool tmp28 = (_g3 < _g2);		HX_STACK_VAR(tmp28,"tmp28");
						HX_STACK_LINE(383)
						bool tmp29 = !(tmp28);		HX_STACK_VAR(tmp29,"tmp29");
						HX_STACK_LINE(383)
						if ((tmp29)){
							HX_STACK_LINE(383)
							break;
						}
						HX_STACK_LINE(383)
						int tmp30 = (_g3)++;		HX_STACK_VAR(tmp30,"tmp30");
						HX_STACK_LINE(383)
						int x = tmp30;		HX_STACK_VAR(x,"x");
						HX_STACK_LINE(385)
						int tmp31 = y;		HX_STACK_VAR(tmp31,"tmp31");
						HX_STACK_LINE(385)
						int tmp32 = this->objectList->length;		HX_STACK_VAR(tmp32,"tmp32");
						HX_STACK_LINE(385)
						bool tmp33 = (tmp31 >= tmp32);		HX_STACK_VAR(tmp33,"tmp33");
						HX_STACK_LINE(385)
						bool tmp34 = !(tmp33);		HX_STACK_VAR(tmp34,"tmp34");
						HX_STACK_LINE(385)
						bool tmp35;		HX_STACK_VAR(tmp35,"tmp35");
						HX_STACK_LINE(385)
						if ((tmp34)){
							HX_STACK_LINE(385)
							tmp35 = (y < (int)0);
						}
						else{
							HX_STACK_LINE(385)
							tmp35 = true;
						}
						HX_STACK_LINE(385)
						if ((tmp35)){
							HX_STACK_LINE(385)
							continue;
						}
						else{
							HX_STACK_LINE(386)
							int tmp36 = x;		HX_STACK_VAR(tmp36,"tmp36");
							HX_STACK_LINE(386)
							int tmp37 = this->objectList->__get(y).StaticCast< Array< ::Dynamic > >()->length;		HX_STACK_VAR(tmp37,"tmp37");
							HX_STACK_LINE(386)
							bool tmp38 = (tmp36 >= tmp37);		HX_STACK_VAR(tmp38,"tmp38");
							HX_STACK_LINE(386)
							bool tmp39 = !(tmp38);		HX_STACK_VAR(tmp39,"tmp39");
							HX_STACK_LINE(386)
							bool tmp40;		HX_STACK_VAR(tmp40,"tmp40");
							HX_STACK_LINE(386)
							if ((tmp39)){
								HX_STACK_LINE(386)
								tmp40 = (x < (int)0);
							}
							else{
								HX_STACK_LINE(386)
								tmp40 = true;
							}
							HX_STACK_LINE(386)
							if ((tmp40)){
								HX_STACK_LINE(386)
								continue;
							}
						}
						HX_STACK_LINE(388)
						::maps::mapobjects::MapObject tmp36 = this->objectList->__get(y).StaticCast< Array< ::Dynamic > >()->__get(x).StaticCast< ::maps::mapobjects::MapObject >();		HX_STACK_VAR(tmp36,"tmp36");
						HX_STACK_LINE(388)
						bool tmp37 = (tmp36 != null());		HX_STACK_VAR(tmp37,"tmp37");
						HX_STACK_LINE(388)
						if ((tmp37)){
							HX_STACK_LINE(390)
							bool tmp38 = AIcheck;		HX_STACK_VAR(tmp38,"tmp38");
							HX_STACK_LINE(390)
							bool tmp39 = !(tmp38);		HX_STACK_VAR(tmp39,"tmp39");
							HX_STACK_LINE(390)
							if ((tmp39)){
								HX_STACK_LINE(391)
								::maps::mapobjects::MapObject tmp40 = object;		HX_STACK_VAR(tmp40,"tmp40");
								HX_STACK_LINE(391)
								int tmp41 = y;		HX_STACK_VAR(tmp41,"tmp41");
								HX_STACK_LINE(391)
								int tmp42 = x;		HX_STACK_VAR(tmp42,"tmp42");
								HX_STACK_LINE(391)
								bool tmp43 = this->checkObjectCollision(tmp40,tmp41,tmp42);		HX_STACK_VAR(tmp43,"tmp43");
								HX_STACK_LINE(391)
								if ((tmp43)){
									HX_STACK_LINE(392)
									::maps::mapobjects::MapObject tmp44 = this->objectList->__get(y).StaticCast< Array< ::Dynamic > >()->__get(x).StaticCast< ::maps::mapobjects::MapObject >();		HX_STACK_VAR(tmp44,"tmp44");
									HX_STACK_LINE(392)
									collisionList->push(tmp44);
								}
							}
							else{
								HX_STACK_LINE(395)
								::maps::mapobjects::MapObject tmp40 = object;		HX_STACK_VAR(tmp40,"tmp40");
								HX_STACK_LINE(395)
								int tmp41 = y;		HX_STACK_VAR(tmp41,"tmp41");
								HX_STACK_LINE(395)
								int tmp42 = x;		HX_STACK_VAR(tmp42,"tmp42");
								HX_STACK_LINE(395)
								bool tmp43 = this->checkAICollision(tmp40,tmp41,tmp42);		HX_STACK_VAR(tmp43,"tmp43");
								HX_STACK_LINE(395)
								if ((tmp43)){
									HX_STACK_LINE(396)
									::maps::mapobjects::MapObject tmp44 = this->objectList->__get(y).StaticCast< Array< ::Dynamic > >()->__get(x).StaticCast< ::maps::mapobjects::MapObject >();		HX_STACK_VAR(tmp44,"tmp44");
									HX_STACK_LINE(396)
									collisionList->push(tmp44);
								}
							}
						}
					}
				}
			}
		}
		HX_STACK_LINE(401)
		return collisionList;
	}
}


HX_DEFINE_DYNAMIC_FUNC2(AreaMap_obj,checkCollisions,return )

::openfl::geom::Point AreaMap_obj::checkDistFromPlayer( ::actors::Actor actor){
	HX_STACK_FRAME("maps.AreaMap","checkDistFromPlayer",0x503226c3,"maps.AreaMap.checkDistFromPlayer","maps/AreaMap.hx",404,0xeb50e127)
	HX_STACK_THIS(this)
	HX_STACK_ARG(actor,"actor")
	HX_STACK_LINE(405)
	::actors::Actor tmp = actor;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(405)
	::actors::Player tmp1 = this->player;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(405)
	bool tmp2 = ::Std_obj::is(tmp,tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(405)
	if ((tmp2)){
		HX_STACK_LINE(405)
		::openfl::geom::Point tmp3 = ::openfl::geom::Point_obj::__new((int)-1,(int)-1);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(405)
		return tmp3;
	}
	HX_STACK_LINE(407)
	Float tmp3 = actor->get_x();		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(407)
	::actors::Player tmp4 = this->player;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(407)
	Float tmp5 = tmp4->get_x();		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(407)
	Float tmp6 = (tmp3 - tmp5);		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(407)
	Float tmp7 = actor->get_y();		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(407)
	::actors::Player tmp8 = this->player;		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(407)
	Float tmp9 = tmp8->get_y();		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(407)
	Float tmp10 = (tmp7 - tmp9);		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(407)
	::openfl::geom::Point tmp11 = ::openfl::geom::Point_obj::__new(tmp6,tmp10);		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(407)
	return tmp11;
}


HX_DEFINE_DYNAMIC_FUNC1(AreaMap_obj,checkDistFromPlayer,return )

Array< ::Dynamic > AreaMap_obj::checkActorCollisions( ::actors::Actor actor){
	HX_STACK_FRAME("maps.AreaMap","checkActorCollisions",0xd4fdc784,"maps.AreaMap.checkActorCollisions","maps/AreaMap.hx",410,0xeb50e127)
	HX_STACK_THIS(this)
	HX_STACK_ARG(actor,"actor")
	HX_STACK_LINE(412)
	::openfl::geom::Rectangle tmp = actor->getCollisionBounds();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(412)
	::openfl::geom::Rectangle actorBounds = tmp;		HX_STACK_VAR(actorBounds,"actorBounds");
	HX_STACK_LINE(413)
	Array< ::Dynamic > collisionList = Array_obj< ::Dynamic >::__new();		HX_STACK_VAR(collisionList,"collisionList");
	HX_STACK_LINE(415)
	{
		HX_STACK_LINE(415)
		int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(415)
		int tmp1 = this->actorList->length;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(415)
		int _g = tmp1;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(415)
		while((true)){
			HX_STACK_LINE(415)
			bool tmp2 = (_g1 < _g);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(415)
			bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(415)
			if ((tmp3)){
				HX_STACK_LINE(415)
				break;
			}
			HX_STACK_LINE(415)
			int tmp4 = (_g1)++;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(415)
			int i = tmp4;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(416)
			::actors::Actor tmp5 = this->actorList->__get(i).StaticCast< ::actors::Actor >();		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(416)
			::actors::Actor tmp6 = actor;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(416)
			bool tmp7 = (tmp5 == tmp6);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(416)
			if ((tmp7)){
				HX_STACK_LINE(416)
				continue;
			}
			HX_STACK_LINE(417)
			::actors::Actor tmp8 = this->actorList->__get(i).StaticCast< ::actors::Actor >();		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(417)
			::openfl::geom::Rectangle tmp9 = tmp8->getCollisionBounds();		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(417)
			::openfl::geom::Rectangle otherBounds = tmp9;		HX_STACK_VAR(otherBounds,"otherBounds");
			HX_STACK_LINE(419)
			::openfl::geom::Rectangle tmp10 = actorBounds;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(419)
			bool tmp11 = otherBounds->intersects(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(419)
			if ((tmp11)){
				HX_STACK_LINE(420)
				::actors::Actor tmp12 = this->actorList->__get(i).StaticCast< ::actors::Actor >();		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(420)
				collisionList->push(tmp12);
			}
		}
	}
	HX_STACK_LINE(423)
	return collisionList;
}


HX_DEFINE_DYNAMIC_FUNC1(AreaMap_obj,checkActorCollisions,return )

Array< ::Dynamic > AreaMap_obj::checkActorHitBoxes( ::actors::Actor actor){
	HX_STACK_FRAME("maps.AreaMap","checkActorHitBoxes",0xb295d0e9,"maps.AreaMap.checkActorHitBoxes","maps/AreaMap.hx",426,0xeb50e127)
	HX_STACK_THIS(this)
	HX_STACK_ARG(actor,"actor")
	HX_STACK_LINE(428)
	Array< ::Dynamic > collisionList = Array_obj< ::Dynamic >::__new();		HX_STACK_VAR(collisionList,"collisionList");
	HX_STACK_LINE(430)
	{
		HX_STACK_LINE(430)
		int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(430)
		int tmp = this->actorList->length;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(430)
		int _g = tmp;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(430)
		while((true)){
			HX_STACK_LINE(430)
			bool tmp1 = (_g1 < _g);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(430)
			bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(430)
			if ((tmp2)){
				HX_STACK_LINE(430)
				break;
			}
			HX_STACK_LINE(430)
			int tmp3 = (_g1)++;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(430)
			int i = tmp3;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(431)
			::actors::Actor tmp4 = this->actorList->__get(i).StaticCast< ::actors::Actor >();		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(431)
			::actors::Actor tmp5 = actor;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(431)
			::actors::Actor tmp6 = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(431)
			bool tmp7 = tmp4->isHitting(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(431)
			bool tmp8;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(431)
			if ((tmp7)){
				HX_STACK_LINE(431)
				::actors::Actor tmp9 = actor;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(431)
				::actors::Actor tmp10 = this->actorList->__get(i).StaticCast< ::actors::Actor >();		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(431)
				::actors::Actor tmp11 = tmp10;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(431)
				tmp8 = (tmp9 != tmp11);
			}
			else{
				HX_STACK_LINE(431)
				tmp8 = false;
			}
			HX_STACK_LINE(431)
			if ((tmp8)){
				HX_STACK_LINE(432)
				::actors::Actor tmp9 = this->actorList->__get(i).StaticCast< ::actors::Actor >();		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(432)
				collisionList->push(tmp9);
			}
		}
	}
	HX_STACK_LINE(435)
	return collisionList;
}


HX_DEFINE_DYNAMIC_FUNC1(AreaMap_obj,checkActorHitBoxes,return )

Array< ::Dynamic > AreaMap_obj::checkProjectileBounds( ::actors::Actor actor){
	HX_STACK_FRAME("maps.AreaMap","checkProjectileBounds",0x0dbd9d10,"maps.AreaMap.checkProjectileBounds","maps/AreaMap.hx",437,0xeb50e127)
	HX_STACK_THIS(this)
	HX_STACK_ARG(actor,"actor")
	HX_STACK_LINE(438)
	Array< ::Dynamic > collisionList = Array_obj< ::Dynamic >::__new();		HX_STACK_VAR(collisionList,"collisionList");
	HX_STACK_LINE(440)
	{
		HX_STACK_LINE(440)
		int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(440)
		int tmp = this->projectileList->length;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(440)
		int _g = tmp;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(440)
		while((true)){
			HX_STACK_LINE(440)
			bool tmp1 = (_g1 < _g);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(440)
			bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(440)
			if ((tmp2)){
				HX_STACK_LINE(440)
				break;
			}
			HX_STACK_LINE(440)
			int tmp3 = (_g1)++;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(440)
			int i = tmp3;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(441)
			::actors::attacks::Projectile tmp4 = this->projectileList->__get(i).StaticCast< ::actors::attacks::Projectile >();		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(441)
			::actors::Actor tmp5 = actor;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(441)
			bool tmp6 = tmp4->checkCollision(tmp5,null());		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(441)
			if ((tmp6)){
				HX_STACK_LINE(442)
				::actors::attacks::Projectile tmp7 = this->projectileList->__get(i).StaticCast< ::actors::attacks::Projectile >();		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(442)
				collisionList->push(tmp7);
			}
		}
	}
	HX_STACK_LINE(445)
	return collisionList;
}


HX_DEFINE_DYNAMIC_FUNC1(AreaMap_obj,checkProjectileBounds,return )

Void AreaMap_obj::updateCheckpoints( ::actors::Player player){
{
		HX_STACK_FRAME("maps.AreaMap","updateCheckpoints",0x9552a34c,"maps.AreaMap.updateCheckpoints","maps/AreaMap.hx",449,0xeb50e127)
		HX_STACK_THIS(this)
		HX_STACK_ARG(player,"player")
		HX_STACK_LINE(449)
		int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(449)
		int tmp = this->checkPoints->length;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(449)
		int _g = tmp;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(449)
		while((true)){
			HX_STACK_LINE(449)
			bool tmp1 = (_g1 < _g);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(449)
			bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(449)
			if ((tmp2)){
				HX_STACK_LINE(449)
				break;
			}
			HX_STACK_LINE(449)
			int tmp3 = (_g1)++;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(449)
			int i = tmp3;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(451)
			::maps::mapobjects::Checkpoint tmp4 = this->checkPoints->__get(i).StaticCast< ::maps::mapobjects::Checkpoint >();		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(451)
			::maps::mapobjects::Checkpoint checkpoint = tmp4;		HX_STACK_VAR(checkpoint,"checkpoint");
			HX_STACK_LINE(452)
			::maps::mapobjects::Checkpoint tmp5 = checkpoint;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(452)
			::maps::mapobjects::Checkpoint tmp6 = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(452)
			bool tmp7 = player->checkCollision(tmp6,null());		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(452)
			bool tmp8;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(452)
			if ((tmp7)){
				HX_STACK_LINE(452)
				bool tmp9 = checkpoint->getActive();		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(452)
				bool tmp10 = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(452)
				bool tmp11 = tmp10;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(452)
				tmp8 = !(tmp11);
			}
			else{
				HX_STACK_LINE(452)
				tmp8 = false;
			}
			HX_STACK_LINE(452)
			if ((tmp8)){
				HX_STACK_LINE(453)
				::maps::mapobjects::Checkpoint tmp9 = checkpoint;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(453)
				this->changeCheckpoint(tmp9);
				HX_STACK_LINE(454)
				return null();
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(AreaMap_obj,updateCheckpoints,(void))

Void AreaMap_obj::updateEndPortal( ::actors::Player player){
{
		HX_STACK_FRAME("maps.AreaMap","updateEndPortal",0x5a3bf108,"maps.AreaMap.updateEndPortal","maps/AreaMap.hx",458,0xeb50e127)
		HX_STACK_THIS(this)
		HX_STACK_ARG(player,"player")
		HX_STACK_LINE(459)
		bool tmp = (this->endPoints == null());		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(459)
		if ((tmp)){
			HX_STACK_LINE(459)
			return null();
		}
		HX_STACK_LINE(461)
		{
			HX_STACK_LINE(461)
			int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(461)
			int tmp1 = this->endPoints->length;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(461)
			int _g = tmp1;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(461)
			while((true)){
				HX_STACK_LINE(461)
				bool tmp2 = (_g1 < _g);		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(461)
				bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(461)
				if ((tmp3)){
					HX_STACK_LINE(461)
					break;
				}
				HX_STACK_LINE(461)
				int tmp4 = (_g1)++;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(461)
				int i = tmp4;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(463)
				::maps::mapobjects::Portal tmp5 = this->endPoints->__get(i).StaticCast< ::maps::mapobjects::Portal >();		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(463)
				::maps::mapobjects::Portal endPoint = tmp5;		HX_STACK_VAR(endPoint,"endPoint");
				HX_STACK_LINE(464)
				::maps::mapobjects::Portal tmp6 = endPoint;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(464)
				bool tmp7 = player->checkCollision(tmp6,null());		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(464)
				if ((tmp7)){
					HX_STACK_LINE(466)
					::maps::Level tmp8 = this->hostLevel;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(466)
					::String tmp9 = endPoint->getEndMap();		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(466)
					::maps::AreaMap tmp10 = tmp8->getMap(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(466)
					::maps::AreaMap endMap = tmp10;		HX_STACK_VAR(endMap,"endMap");
					HX_STACK_LINE(467)
					::maps::Level tmp11 = this->hostLevel;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(467)
					::String tmp12 = tmp11->getMapLabel(hx::ObjectPtr<OBJ_>(this));		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(467)
					::maps::mapobjects::Portal tmp13 = endMap->findDoorFrom(tmp12);		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(467)
					::maps::mapobjects::Portal origin = tmp13;		HX_STACK_VAR(origin,"origin");
					HX_STACK_LINE(469)
					::maps::LevelManager tmp14 = ::maps::LevelManager_obj::getSingleton();		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(469)
					::maps::Level tmp15 = tmp14->getCurrentLevel();		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(469)
					::maps::AreaMap tmp16 = endMap;		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(469)
					::actors::Player tmp17 = player;		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(469)
					::maps::mapobjects::Portal tmp18 = origin;		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(469)
					tmp15->setMap(tmp16,tmp17,tmp18);
					HX_STACK_LINE(470)
					::actors::Player tmp19 = player;		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(470)
					this->removeActor(tmp19);
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(AreaMap_obj,updateEndPortal,(void))

::maps::mapobjects::Portal AreaMap_obj::findDoorFrom( ::String map){
	HX_STACK_FRAME("maps.AreaMap","findDoorFrom",0x7eac41a7,"maps.AreaMap.findDoorFrom","maps/AreaMap.hx",474,0xeb50e127)
	HX_STACK_THIS(this)
	HX_STACK_ARG(map,"map")
	HX_STACK_LINE(475)
	{
		HX_STACK_LINE(475)
		int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(475)
		int tmp = this->endPoints->length;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(475)
		int _g = tmp;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(475)
		while((true)){
			HX_STACK_LINE(475)
			bool tmp1 = (_g1 < _g);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(475)
			bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(475)
			if ((tmp2)){
				HX_STACK_LINE(475)
				break;
			}
			HX_STACK_LINE(475)
			int tmp3 = (_g1)++;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(475)
			int i = tmp3;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(476)
			::maps::mapobjects::Portal tmp4 = this->endPoints->__get(i).StaticCast< ::maps::mapobjects::Portal >();		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(476)
			::String tmp5 = tmp4->getEndMap();		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(476)
			::String tmp6 = map;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(476)
			bool tmp7 = (tmp5 == tmp6);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(476)
			if ((tmp7)){
				HX_STACK_LINE(477)
				::maps::mapobjects::Portal tmp8 = this->endPoints->__get(i).StaticCast< ::maps::mapobjects::Portal >();		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(477)
				return tmp8;
			}
		}
	}
	HX_STACK_LINE(479)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC1(AreaMap_obj,findDoorFrom,return )

bool AreaMap_obj::checkAICollision( ::maps::mapobjects::MapObject object,int y,int x){
	HX_STACK_FRAME("maps.AreaMap","checkAICollision",0x01f423f8,"maps.AreaMap.checkAICollision","maps/AreaMap.hx",482,0xeb50e127)
	HX_STACK_THIS(this)
	HX_STACK_ARG(object,"object")
	HX_STACK_ARG(y,"y")
	HX_STACK_ARG(x,"x")
	HX_STACK_LINE(483)
	::maps::mapobjects::MapObject tmp = this->objectList->__get(y).StaticCast< Array< ::Dynamic > >()->__get(x).StaticCast< ::maps::mapobjects::MapObject >();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(483)
	bool tmp1 = (tmp == null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(483)
	if ((tmp1)){
		HX_STACK_LINE(483)
		return false;
	}
	HX_STACK_LINE(485)
	::maps::mapobjects::MapObject tmp2 = this->objectList->__get(y).StaticCast< Array< ::Dynamic > >()->__get(x).StaticCast< ::maps::mapobjects::MapObject >();		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(485)
	bool tmp3 = ::Std_obj::is(tmp2,hx::ClassOf< ::maps::mapobjects::AIPathWall >());		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(485)
	if ((tmp3)){
		HX_STACK_LINE(486)
		::maps::mapobjects::MapObject tmp4 = this->objectList->__get(y).StaticCast< Array< ::Dynamic > >()->__get(x).StaticCast< ::maps::mapobjects::MapObject >();		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(486)
		::maps::mapobjects::AIPathWall collidingPath = ((::maps::mapobjects::AIPathWall)(tmp4));		HX_STACK_VAR(collidingPath,"collidingPath");
		HX_STACK_LINE(487)
		::maps::mapobjects::MapObject tmp5 = object;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(487)
		bool tmp6 = collidingPath->checkCollision(tmp5,false);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(487)
		if ((tmp6)){
			HX_STACK_LINE(488)
			return true;
		}
	}
	else{
		HX_STACK_LINE(490)
		::maps::mapobjects::MapObject tmp4 = this->objectList->__get(y).StaticCast< Array< ::Dynamic > >()->__get(x).StaticCast< ::maps::mapobjects::MapObject >();		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(490)
		bool tmp5 = ::Std_obj::is(tmp4,hx::ClassOf< ::actors::enemies::Enemy >());		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(490)
		if ((tmp5)){
			HX_STACK_LINE(491)
			::maps::mapobjects::MapObject tmp6 = this->objectList->__get(y).StaticCast< Array< ::Dynamic > >()->__get(x).StaticCast< ::maps::mapobjects::MapObject >();		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(491)
			::actors::enemies::Enemy collidingEnemy = ((::actors::enemies::Enemy)(tmp6));		HX_STACK_VAR(collidingEnemy,"collidingEnemy");
			HX_STACK_LINE(492)
			::maps::mapobjects::MapObject tmp7 = object;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(492)
			bool tmp8 = collidingEnemy->checkCollision(tmp7,null());		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(492)
			if ((tmp8)){
				HX_STACK_LINE(493)
				return true;
			}
		}
	}
	HX_STACK_LINE(495)
	return false;
}


HX_DEFINE_DYNAMIC_FUNC3(AreaMap_obj,checkAICollision,return )

bool AreaMap_obj::checkObjectCollision( ::maps::mapobjects::MapObject object,int y,int x){
	HX_STACK_FRAME("maps.AreaMap","checkObjectCollision",0x100dd221,"maps.AreaMap.checkObjectCollision","maps/AreaMap.hx",498,0xeb50e127)
	HX_STACK_THIS(this)
	HX_STACK_ARG(object,"object")
	HX_STACK_ARG(y,"y")
	HX_STACK_ARG(x,"x")
	HX_STACK_LINE(499)
	::maps::mapobjects::MapObject tmp = this->objectList->__get(y).StaticCast< Array< ::Dynamic > >()->__get(x).StaticCast< ::maps::mapobjects::MapObject >();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(499)
	bool tmp1 = (tmp == null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(499)
	if ((tmp1)){
		HX_STACK_LINE(499)
		return false;
	}
	HX_STACK_LINE(501)
	::maps::mapobjects::MapObject tmp2 = this->objectList->__get(y).StaticCast< Array< ::Dynamic > >()->__get(x).StaticCast< ::maps::mapobjects::MapObject >();		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(501)
	bool tmp3 = ::Std_obj::is(tmp2,hx::ClassOf< ::maps::mapobjects::Tile >());		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(501)
	if ((tmp3)){
		HX_STACK_LINE(502)
		::maps::mapobjects::MapObject tmp4 = this->objectList->__get(y).StaticCast< Array< ::Dynamic > >()->__get(x).StaticCast< ::maps::mapobjects::MapObject >();		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(502)
		::maps::mapobjects::Tile collidingTile = ((::maps::mapobjects::Tile)(tmp4));		HX_STACK_VAR(collidingTile,"collidingTile");
		HX_STACK_LINE(503)
		::maps::mapobjects::MapObject tmp5 = object;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(503)
		bool tmp6 = collidingTile->checkCollision(tmp5,null());		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(503)
		if ((tmp6)){
			HX_STACK_LINE(504)
			return true;
		}
	}
	else{
		HX_STACK_LINE(507)
		::maps::mapobjects::MapObject tmp4 = this->objectList->__get(y).StaticCast< Array< ::Dynamic > >()->__get(x).StaticCast< ::maps::mapobjects::MapObject >();		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(507)
		::maps::mapobjects::MapObject collidingObject = tmp4;		HX_STACK_VAR(collidingObject,"collidingObject");
		HX_STACK_LINE(508)
		::maps::mapobjects::MapObject tmp5 = object;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(508)
		bool tmp6 = collidingObject->checkCollision(tmp5,null());		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(508)
		if ((tmp6)){
			HX_STACK_LINE(509)
			return true;
		}
	}
	HX_STACK_LINE(511)
	return false;
}


HX_DEFINE_DYNAMIC_FUNC3(AreaMap_obj,checkObjectCollision,return )

::maps::mapobjects::MapObject AreaMap_obj::getCurrentCheckpoint( ){
	HX_STACK_FRAME("maps.AreaMap","getCurrentCheckpoint",0xbdec8701,"maps.AreaMap.getCurrentCheckpoint","maps/AreaMap.hx",514,0xeb50e127)
	HX_STACK_THIS(this)
	HX_STACK_LINE(515)
	::maps::mapobjects::MapObject tmp = this->currentCheckpoint;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(515)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(AreaMap_obj,getCurrentCheckpoint,return )

::maps::mapobjects::Checkpoint AreaMap_obj::getStartPoint( ){
	HX_STACK_FRAME("maps.AreaMap","getStartPoint",0x4d0eb1ae,"maps.AreaMap.getStartPoint","maps/AreaMap.hx",517,0xeb50e127)
	HX_STACK_THIS(this)
	HX_STACK_LINE(518)
	::maps::mapobjects::Checkpoint tmp = this->startPoint;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(518)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(AreaMap_obj,getStartPoint,return )

Void AreaMap_obj::changeCheckpoint( ::maps::mapobjects::MapObject newCheckpoint){
{
		HX_STACK_FRAME("maps.AreaMap","changeCheckpoint",0xf6872d6e,"maps.AreaMap.changeCheckpoint","maps/AreaMap.hx",522,0xeb50e127)
		HX_STACK_THIS(this)
		HX_STACK_ARG(newCheckpoint,"newCheckpoint")
		HX_STACK_LINE(522)
		this->currentCheckpoint = newCheckpoint;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(AreaMap_obj,changeCheckpoint,(void))

int AreaMap_obj::getMapWidth( ){
	HX_STACK_FRAME("maps.AreaMap","getMapWidth",0x6d53c2ea,"maps.AreaMap.getMapWidth","maps/AreaMap.hx",525,0xeb50e127)
	HX_STACK_THIS(this)
	HX_STACK_LINE(526)
	int tmp = this->mapWidth;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(526)
	int tmp1 = this->tileSize;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(526)
	int tmp2 = (tmp * tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(526)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC0(AreaMap_obj,getMapWidth,return )

int AreaMap_obj::getMapHeight( ){
	HX_STACK_FRAME("maps.AreaMap","getMapHeight",0xf2464283,"maps.AreaMap.getMapHeight","maps/AreaMap.hx",528,0xeb50e127)
	HX_STACK_THIS(this)
	HX_STACK_LINE(529)
	int tmp = this->mapHeight;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(529)
	int tmp1 = this->tileSize;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(529)
	int tmp2 = (tmp * tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(529)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC0(AreaMap_obj,getMapHeight,return )


AreaMap_obj::AreaMap_obj()
{
}

void AreaMap_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(AreaMap);
	HX_MARK_MEMBER_NAME(hostLevel,"hostLevel");
	HX_MARK_MEMBER_NAME(objectList,"objectList");
	HX_MARK_MEMBER_NAME(actorList,"actorList");
	HX_MARK_MEMBER_NAME(projectileList,"projectileList");
	HX_MARK_MEMBER_NAME(player,"player");
	HX_MARK_MEMBER_NAME(startPoint,"startPoint");
	HX_MARK_MEMBER_NAME(currentCheckpoint,"currentCheckpoint");
	HX_MARK_MEMBER_NAME(checkPoints,"checkPoints");
	HX_MARK_MEMBER_NAME(spawnPoints,"spawnPoints");
	HX_MARK_MEMBER_NAME(pathWalls,"pathWalls");
	HX_MARK_MEMBER_NAME(endPoints,"endPoints");
	HX_MARK_MEMBER_NAME(background,"background");
	HX_MARK_MEMBER_NAME(mapWidth,"mapWidth");
	HX_MARK_MEMBER_NAME(mapHeight,"mapHeight");
	HX_MARK_MEMBER_NAME(tileSize,"tileSize");
	::openfl::display::Sprite_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void AreaMap_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(hostLevel,"hostLevel");
	HX_VISIT_MEMBER_NAME(objectList,"objectList");
	HX_VISIT_MEMBER_NAME(actorList,"actorList");
	HX_VISIT_MEMBER_NAME(projectileList,"projectileList");
	HX_VISIT_MEMBER_NAME(player,"player");
	HX_VISIT_MEMBER_NAME(startPoint,"startPoint");
	HX_VISIT_MEMBER_NAME(currentCheckpoint,"currentCheckpoint");
	HX_VISIT_MEMBER_NAME(checkPoints,"checkPoints");
	HX_VISIT_MEMBER_NAME(spawnPoints,"spawnPoints");
	HX_VISIT_MEMBER_NAME(pathWalls,"pathWalls");
	HX_VISIT_MEMBER_NAME(endPoints,"endPoints");
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
	case 8:
		if (HX_FIELD_EQ(inName,"mapWidth") ) { return mapWidth; }
		if (HX_FIELD_EQ(inName,"tileSize") ) { return tileSize; }
		if (HX_FIELD_EQ(inName,"addMapBG") ) { return addMapBG_dyn(); }
		if (HX_FIELD_EQ(inName,"resetMap") ) { return resetMap_dyn(); }
		if (HX_FIELD_EQ(inName,"addActor") ) { return addActor_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"hostLevel") ) { return hostLevel; }
		if (HX_FIELD_EQ(inName,"actorList") ) { return actorList; }
		if (HX_FIELD_EQ(inName,"pathWalls") ) { return pathWalls; }
		if (HX_FIELD_EQ(inName,"endPoints") ) { return endPoints; }
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
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"checkPoints") ) { return checkPoints; }
		if (HX_FIELD_EQ(inName,"spawnPoints") ) { return spawnPoints; }
		if (HX_FIELD_EQ(inName,"removeActor") ) { return removeActor_dyn(); }
		if (HX_FIELD_EQ(inName,"getMapWidth") ) { return getMapWidth_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"createObject") ) { return createObject_dyn(); }
		if (HX_FIELD_EQ(inName,"updateActors") ) { return updateActors_dyn(); }
		if (HX_FIELD_EQ(inName,"findDoorFrom") ) { return findDoorFrom_dyn(); }
		if (HX_FIELD_EQ(inName,"getMapHeight") ) { return getMapHeight_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"parseObjectID") ) { return parseObjectID_dyn(); }
		if (HX_FIELD_EQ(inName,"addProjectile") ) { return addProjectile_dyn(); }
		if (HX_FIELD_EQ(inName,"getStartPoint") ) { return getStartPoint_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"projectileList") ) { return projectileList; }
		if (HX_FIELD_EQ(inName,"createEndpoint") ) { return createEndpoint_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"checkCollisions") ) { return checkCollisions_dyn(); }
		if (HX_FIELD_EQ(inName,"updateEndPortal") ) { return updateEndPortal_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"createCheckpoint") ) { return createCheckpoint_dyn(); }
		if (HX_FIELD_EQ(inName,"createStartpoint") ) { return createStartpoint_dyn(); }
		if (HX_FIELD_EQ(inName,"createSpawnPoint") ) { return createSpawnPoint_dyn(); }
		if (HX_FIELD_EQ(inName,"createAIPathWall") ) { return createAIPathWall_dyn(); }
		if (HX_FIELD_EQ(inName,"resetSpawnPoints") ) { return resetSpawnPoints_dyn(); }
		if (HX_FIELD_EQ(inName,"removeProjectile") ) { return removeProjectile_dyn(); }
		if (HX_FIELD_EQ(inName,"checkAICollision") ) { return checkAICollision_dyn(); }
		if (HX_FIELD_EQ(inName,"changeCheckpoint") ) { return changeCheckpoint_dyn(); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"currentCheckpoint") ) { return currentCheckpoint; }
		if (HX_FIELD_EQ(inName,"addObjectProperty") ) { return addObjectProperty_dyn(); }
		if (HX_FIELD_EQ(inName,"updateSpawnPoints") ) { return updateSpawnPoints_dyn(); }
		if (HX_FIELD_EQ(inName,"updateProjectiles") ) { return updateProjectiles_dyn(); }
		if (HX_FIELD_EQ(inName,"updateCheckpoints") ) { return updateCheckpoints_dyn(); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"parseMapDimensions") ) { return parseMapDimensions_dyn(); }
		if (HX_FIELD_EQ(inName,"initiateObjectList") ) { return initiateObjectList_dyn(); }
		if (HX_FIELD_EQ(inName,"readDynamicObjects") ) { return readDynamicObjects_dyn(); }
		if (HX_FIELD_EQ(inName,"parseDynamicObject") ) { return parseDynamicObject_dyn(); }
		if (HX_FIELD_EQ(inName,"checkActorHitBoxes") ) { return checkActorHitBoxes_dyn(); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"parseObjectLocation") ) { return parseObjectLocation_dyn(); }
		if (HX_FIELD_EQ(inName,"checkDistFromPlayer") ) { return checkDistFromPlayer_dyn(); }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"checkActorCollisions") ) { return checkActorCollisions_dyn(); }
		if (HX_FIELD_EQ(inName,"checkObjectCollision") ) { return checkObjectCollision_dyn(); }
		if (HX_FIELD_EQ(inName,"getCurrentCheckpoint") ) { return getCurrentCheckpoint_dyn(); }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"checkProjectileBounds") ) { return checkProjectileBounds_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic AreaMap_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"player") ) { player=inValue.Cast< ::actors::Player >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"mapWidth") ) { mapWidth=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"tileSize") ) { tileSize=inValue.Cast< int >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"hostLevel") ) { hostLevel=inValue.Cast< ::maps::Level >(); return inValue; }
		if (HX_FIELD_EQ(inName,"actorList") ) { actorList=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"pathWalls") ) { pathWalls=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"endPoints") ) { endPoints=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"mapHeight") ) { mapHeight=inValue.Cast< int >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"objectList") ) { objectList=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"startPoint") ) { startPoint=inValue.Cast< ::maps::mapobjects::Checkpoint >(); return inValue; }
		if (HX_FIELD_EQ(inName,"background") ) { background=inValue.Cast< ::openfl::display::Shape >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"checkPoints") ) { checkPoints=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"spawnPoints") ) { spawnPoints=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"projectileList") ) { projectileList=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"currentCheckpoint") ) { currentCheckpoint=inValue.Cast< ::maps::mapobjects::MapObject >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool AreaMap_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	return false;
}

void AreaMap_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("hostLevel","\xfc","\xdc","\x0c","\x94"));
	outFields->push(HX_HCSTRING("objectList","\xbd","\x92","\xeb","\xc9"));
	outFields->push(HX_HCSTRING("actorList","\xf3","\x31","\x8c","\x1b"));
	outFields->push(HX_HCSTRING("projectileList","\xe7","\x76","\x1b","\x0c"));
	outFields->push(HX_HCSTRING("player","\x61","\xeb","\xb8","\x37"));
	outFields->push(HX_HCSTRING("startPoint","\x8e","\x8c","\xa6","\xe2"));
	outFields->push(HX_HCSTRING("currentCheckpoint","\x21","\xc8","\x87","\x1a"));
	outFields->push(HX_HCSTRING("checkPoints","\x0b","\xe5","\x3f","\xd9"));
	outFields->push(HX_HCSTRING("spawnPoints","\xbe","\x02","\x66","\x92"));
	outFields->push(HX_HCSTRING("pathWalls","\x44","\x00","\xdf","\xba"));
	outFields->push(HX_HCSTRING("endPoints","\x5e","\x60","\x10","\x37"));
	outFields->push(HX_HCSTRING("background","\xee","\x93","\x1d","\x26"));
	outFields->push(HX_HCSTRING("mapWidth","\xca","\x25","\xa5","\x41"));
	outFields->push(HX_HCSTRING("mapHeight","\xa3","\x63","\x2b","\xe5"));
	outFields->push(HX_HCSTRING("tileSize","\x0f","\xc7","\x59","\x86"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::maps::Level*/ ,(int)offsetof(AreaMap_obj,hostLevel),HX_HCSTRING("hostLevel","\xfc","\xdc","\x0c","\x94")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(AreaMap_obj,objectList),HX_HCSTRING("objectList","\xbd","\x92","\xeb","\xc9")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(AreaMap_obj,actorList),HX_HCSTRING("actorList","\xf3","\x31","\x8c","\x1b")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(AreaMap_obj,projectileList),HX_HCSTRING("projectileList","\xe7","\x76","\x1b","\x0c")},
	{hx::fsObject /*::actors::Player*/ ,(int)offsetof(AreaMap_obj,player),HX_HCSTRING("player","\x61","\xeb","\xb8","\x37")},
	{hx::fsObject /*::maps::mapobjects::Checkpoint*/ ,(int)offsetof(AreaMap_obj,startPoint),HX_HCSTRING("startPoint","\x8e","\x8c","\xa6","\xe2")},
	{hx::fsObject /*::maps::mapobjects::MapObject*/ ,(int)offsetof(AreaMap_obj,currentCheckpoint),HX_HCSTRING("currentCheckpoint","\x21","\xc8","\x87","\x1a")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(AreaMap_obj,checkPoints),HX_HCSTRING("checkPoints","\x0b","\xe5","\x3f","\xd9")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(AreaMap_obj,spawnPoints),HX_HCSTRING("spawnPoints","\xbe","\x02","\x66","\x92")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(AreaMap_obj,pathWalls),HX_HCSTRING("pathWalls","\x44","\x00","\xdf","\xba")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(AreaMap_obj,endPoints),HX_HCSTRING("endPoints","\x5e","\x60","\x10","\x37")},
	{hx::fsObject /*::openfl::display::Shape*/ ,(int)offsetof(AreaMap_obj,background),HX_HCSTRING("background","\xee","\x93","\x1d","\x26")},
	{hx::fsInt,(int)offsetof(AreaMap_obj,mapWidth),HX_HCSTRING("mapWidth","\xca","\x25","\xa5","\x41")},
	{hx::fsInt,(int)offsetof(AreaMap_obj,mapHeight),HX_HCSTRING("mapHeight","\xa3","\x63","\x2b","\xe5")},
	{hx::fsInt,(int)offsetof(AreaMap_obj,tileSize),HX_HCSTRING("tileSize","\x0f","\xc7","\x59","\x86")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("hostLevel","\xfc","\xdc","\x0c","\x94"),
	HX_HCSTRING("objectList","\xbd","\x92","\xeb","\xc9"),
	HX_HCSTRING("actorList","\xf3","\x31","\x8c","\x1b"),
	HX_HCSTRING("projectileList","\xe7","\x76","\x1b","\x0c"),
	HX_HCSTRING("player","\x61","\xeb","\xb8","\x37"),
	HX_HCSTRING("startPoint","\x8e","\x8c","\xa6","\xe2"),
	HX_HCSTRING("currentCheckpoint","\x21","\xc8","\x87","\x1a"),
	HX_HCSTRING("checkPoints","\x0b","\xe5","\x3f","\xd9"),
	HX_HCSTRING("spawnPoints","\xbe","\x02","\x66","\x92"),
	HX_HCSTRING("pathWalls","\x44","\x00","\xdf","\xba"),
	HX_HCSTRING("endPoints","\x5e","\x60","\x10","\x37"),
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
	HX_HCSTRING("createSpawnPoint","\x31","\x8e","\xd5","\x35"),
	HX_HCSTRING("createAIPathWall","\x53","\x3c","\x7f","\x56"),
	HX_HCSTRING("readDynamicObjects","\x0b","\x39","\xa5","\x1b"),
	HX_HCSTRING("parseDynamicObject","\x6b","\x17","\x79","\x94"),
	HX_HCSTRING("parseObjectID","\xad","\x63","\x5b","\xc8"),
	HX_HCSTRING("parseObjectLocation","\xa7","\xf7","\x6a","\x49"),
	HX_HCSTRING("addObjectProperty","\x35","\x78","\xc7","\xef"),
	HX_HCSTRING("resetMap","\x0d","\x44","\xd9","\x4f"),
	HX_HCSTRING("resetSpawnPoints","\x2f","\x95","\xdc","\xb4"),
	HX_HCSTRING("updateMap","\x13","\xe8","\xdf","\x82"),
	HX_HCSTRING("updateActors","\xc7","\x72","\x0e","\x16"),
	HX_HCSTRING("updateSpawnPoints","\x35","\xaf","\xcf","\xf6"),
	HX_HCSTRING("updateProjectiles","\xe1","\x52","\xf3","\x99"),
	HX_HCSTRING("addPlayer","\x62","\x20","\xdd","\xef"),
	HX_HCSTRING("addActor","\x14","\xf1","\x03","\x95"),
	HX_HCSTRING("removeActor","\x11","\xa8","\xda","\x19"),
	HX_HCSTRING("addProjectile","\x6a","\xcf","\xd4","\x2e"),
	HX_HCSTRING("removeProjectile","\x4d","\xa3","\x34","\x7e"),
	HX_HCSTRING("checkCollisions","\xa9","\x22","\x72","\x71"),
	HX_HCSTRING("checkDistFromPlayer","\x59","\xd2","\x17","\x15"),
	HX_HCSTRING("checkActorCollisions","\x2e","\x3f","\x0e","\x59"),
	HX_HCSTRING("checkActorHitBoxes","\x13","\x2a","\xfe","\x88"),
	HX_HCSTRING("checkProjectileBounds","\x26","\xda","\x15","\x18"),
	HX_HCSTRING("updateCheckpoints","\x62","\x1d","\x15","\x09"),
	HX_HCSTRING("updateEndPortal","\x9e","\x99","\x92","\x8c"),
	HX_HCSTRING("findDoorFrom","\x51","\xff","\xe7","\x80"),
	HX_HCSTRING("checkAICollision","\xa2","\xfe","\x70","\xdb"),
	HX_HCSTRING("checkObjectCollision","\xcb","\x49","\x1e","\x94"),
	HX_HCSTRING("getCurrentCheckpoint","\xab","\xfe","\xfc","\x41"),
	HX_HCSTRING("getStartPoint","\xc4","\xe8","\x18","\x3f"),
	HX_HCSTRING("changeCheckpoint","\x18","\x08","\x04","\xd0"),
	HX_HCSTRING("getMapWidth","\x80","\xe8","\x98","\x67"),
	HX_HCSTRING("getMapHeight","\x2d","\x00","\x82","\xf4"),
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
