#include <hxcpp.h>

#include "hxMath.h"
#ifndef INCLUDED_Main
#include <Main.h>
#endif
#ifndef INCLUDED_actors_Actor
#include <actors/Actor.h>
#endif
#ifndef INCLUDED_actors_enemies_DashEnemy
#include <actors/enemies/DashEnemy.h>
#endif
#ifndef INCLUDED_actors_enemies_Enemy
#include <actors/enemies/Enemy.h>
#endif
#ifndef INCLUDED_actors_enemies_LaunchEnemy
#include <actors/enemies/LaunchEnemy.h>
#endif
#ifndef INCLUDED_actors_enemies_ProjectileEnemy
#include <actors/enemies/ProjectileEnemy.h>
#endif
#ifndef INCLUDED_actors_enemies_WalkingEnemy
#include <actors/enemies/WalkingEnemy.h>
#endif
#ifndef INCLUDED_haxe_IMap
#include <haxe/IMap.h>
#endif
#ifndef INCLUDED_haxe_ds_IntMap
#include <haxe/ds/IntMap.h>
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
HX_STACK_FRAME("maps.ObjectFactory","new",0x3087da46,"maps.ObjectFactory.new","maps/ObjectFactory.hx",72,0xb5ae61eb)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(73)
	this->tileSize = (int)32;
	HX_STACK_LINE(74)
	this->tileSheetWidth = (int)480;
	HX_STACK_LINE(76)
	::openfl::display::Bitmap tmp = ::Main_obj::getBitmapAsset(HX_HCSTRING("assets/World1Tiles.png","\xb5","\x66","\xc9","\xd5"));		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(76)
	this->tileSheet = tmp;
	HX_STACK_LINE(78)
	::haxe::ds::IntMap tmp1;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(78)
	{
		HX_STACK_LINE(78)
		::haxe::ds::IntMap tmp2 = ::haxe::ds::IntMap_obj::__new();		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(78)
		::haxe::ds::IntMap tmp3 = tmp2;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(78)
		tmp1 = tmp3;
	}
	HX_STACK_LINE(78)
	this->tileIndexTypes = tmp1;
	HX_STACK_LINE(80)
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
		HX_STACK_FRAME("maps.ObjectFactory","assignTileIndexTypes",0x83a6dabe,"maps.ObjectFactory.assignTileIndexTypes","maps/ObjectFactory.hx",82,0xb5ae61eb)
		HX_STACK_THIS(this)
		HX_STACK_LINE(84)
		{
			HX_STACK_LINE(84)
			int tmp = ::maps::ObjectFactory_obj::TILE_CHECKPOINT;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(84)
			int v = tmp;		HX_STACK_VAR(v,"v");
			HX_STACK_LINE(84)
			::haxe::ds::IntMap tmp1 = this->tileIndexTypes;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(84)
			int tmp2 = v;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(84)
			tmp1->set((int)0,tmp2);
			HX_STACK_LINE(84)
			v;
		}
		HX_STACK_LINE(85)
		{
			HX_STACK_LINE(85)
			int tmp = ::maps::ObjectFactory_obj::TILE_ENDPOINT;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(85)
			int v = tmp;		HX_STACK_VAR(v,"v");
			HX_STACK_LINE(85)
			::haxe::ds::IntMap tmp1 = this->tileIndexTypes;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(85)
			int tmp2 = v;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(85)
			tmp1->set((int)1,tmp2);
			HX_STACK_LINE(85)
			v;
		}
		HX_STACK_LINE(86)
		{
			HX_STACK_LINE(86)
			int tmp = ::maps::ObjectFactory_obj::TILE_BACKGROUND;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(86)
			int v = tmp;		HX_STACK_VAR(v,"v");
			HX_STACK_LINE(86)
			::haxe::ds::IntMap tmp1 = this->tileIndexTypes;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(86)
			int tmp2 = v;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(86)
			tmp1->set((int)2,tmp2);
			HX_STACK_LINE(86)
			v;
		}
		HX_STACK_LINE(87)
		{
			HX_STACK_LINE(87)
			int tmp = ::maps::ObjectFactory_obj::TILE_AIPATHWALL;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(87)
			int v = tmp;		HX_STACK_VAR(v,"v");
			HX_STACK_LINE(87)
			::haxe::ds::IntMap tmp1 = this->tileIndexTypes;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(87)
			int tmp2 = v;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(87)
			tmp1->set((int)3,tmp2);
			HX_STACK_LINE(87)
			v;
		}
		HX_STACK_LINE(88)
		{
			HX_STACK_LINE(88)
			int tmp = ::maps::ObjectFactory_obj::TILE_STARTPOINT;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(88)
			int v = tmp;		HX_STACK_VAR(v,"v");
			HX_STACK_LINE(88)
			::haxe::ds::IntMap tmp1 = this->tileIndexTypes;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(88)
			int tmp2 = v;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(88)
			tmp1->set((int)16,tmp2);
			HX_STACK_LINE(88)
			v;
		}
		HX_STACK_LINE(90)
		{
			HX_STACK_LINE(90)
			int tmp = ::maps::ObjectFactory_obj::TILE_SPAWNPOINT_WALKING;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(90)
			int v = tmp;		HX_STACK_VAR(v,"v");
			HX_STACK_LINE(90)
			::haxe::ds::IntMap tmp1 = this->tileIndexTypes;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(90)
			int tmp2 = v;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(90)
			tmp1->set((int)15,tmp2);
			HX_STACK_LINE(90)
			v;
		}
		HX_STACK_LINE(91)
		{
			HX_STACK_LINE(91)
			int tmp = ::maps::ObjectFactory_obj::TILE_SPAWNPOINT_DASH;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(91)
			int v = tmp;		HX_STACK_VAR(v,"v");
			HX_STACK_LINE(91)
			::haxe::ds::IntMap tmp1 = this->tileIndexTypes;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(91)
			int tmp2 = v;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(91)
			tmp1->set((int)30,tmp2);
			HX_STACK_LINE(91)
			v;
		}
		HX_STACK_LINE(92)
		{
			HX_STACK_LINE(92)
			int tmp = ::maps::ObjectFactory_obj::TILE_SPAWNPOINT_LAUNCH;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(92)
			int v = tmp;		HX_STACK_VAR(v,"v");
			HX_STACK_LINE(92)
			::haxe::ds::IntMap tmp1 = this->tileIndexTypes;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(92)
			int tmp2 = v;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(92)
			tmp1->set((int)45,tmp2);
			HX_STACK_LINE(92)
			v;
		}
		HX_STACK_LINE(93)
		{
			HX_STACK_LINE(93)
			int tmp = ::maps::ObjectFactory_obj::TILE_SPAWNPOINT_PROJECTILE;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(93)
			int v = tmp;		HX_STACK_VAR(v,"v");
			HX_STACK_LINE(93)
			::haxe::ds::IntMap tmp1 = this->tileIndexTypes;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(93)
			int tmp2 = v;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(93)
			tmp1->set((int)60,tmp2);
			HX_STACK_LINE(93)
			v;
		}
		HX_STACK_LINE(95)
		{
			HX_STACK_LINE(95)
			int tmp = ::maps::ObjectFactory_obj::TILE_PLATFORM;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(95)
			int v = tmp;		HX_STACK_VAR(v,"v");
			HX_STACK_LINE(95)
			::haxe::ds::IntMap tmp1 = this->tileIndexTypes;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(95)
			int tmp2 = v;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(95)
			tmp1->set((int)31,tmp2);
			HX_STACK_LINE(95)
			v;
		}
		HX_STACK_LINE(96)
		{
			HX_STACK_LINE(96)
			int tmp = ::maps::ObjectFactory_obj::TILE_PLATFORM;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(96)
			int v = tmp;		HX_STACK_VAR(v,"v");
			HX_STACK_LINE(96)
			::haxe::ds::IntMap tmp1 = this->tileIndexTypes;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(96)
			int tmp2 = v;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(96)
			tmp1->set((int)32,tmp2);
			HX_STACK_LINE(96)
			v;
		}
		HX_STACK_LINE(97)
		{
			HX_STACK_LINE(97)
			int tmp = ::maps::ObjectFactory_obj::TILE_PLATFORM;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(97)
			int v = tmp;		HX_STACK_VAR(v,"v");
			HX_STACK_LINE(97)
			::haxe::ds::IntMap tmp1 = this->tileIndexTypes;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(97)
			int tmp2 = v;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(97)
			tmp1->set((int)33,tmp2);
			HX_STACK_LINE(97)
			v;
		}
		HX_STACK_LINE(98)
		{
			HX_STACK_LINE(98)
			int tmp = ::maps::ObjectFactory_obj::TILE_PLATFORM;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(98)
			int v = tmp;		HX_STACK_VAR(v,"v");
			HX_STACK_LINE(98)
			::haxe::ds::IntMap tmp1 = this->tileIndexTypes;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(98)
			int tmp2 = v;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(98)
			tmp1->set((int)46,tmp2);
			HX_STACK_LINE(98)
			v;
		}
		HX_STACK_LINE(99)
		{
			HX_STACK_LINE(99)
			int tmp = ::maps::ObjectFactory_obj::TILE_PLATFORM;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(99)
			int v = tmp;		HX_STACK_VAR(v,"v");
			HX_STACK_LINE(99)
			::haxe::ds::IntMap tmp1 = this->tileIndexTypes;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(99)
			int tmp2 = v;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(99)
			tmp1->set((int)47,tmp2);
			HX_STACK_LINE(99)
			v;
		}
		HX_STACK_LINE(100)
		{
			HX_STACK_LINE(100)
			int tmp = ::maps::ObjectFactory_obj::TILE_PLATFORM;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(100)
			int v = tmp;		HX_STACK_VAR(v,"v");
			HX_STACK_LINE(100)
			::haxe::ds::IntMap tmp1 = this->tileIndexTypes;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(100)
			int tmp2 = v;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(100)
			tmp1->set((int)48,tmp2);
			HX_STACK_LINE(100)
			v;
		}
		HX_STACK_LINE(101)
		{
			HX_STACK_LINE(101)
			int tmp = ::maps::ObjectFactory_obj::TILE_PLATFORM;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(101)
			int v = tmp;		HX_STACK_VAR(v,"v");
			HX_STACK_LINE(101)
			::haxe::ds::IntMap tmp1 = this->tileIndexTypes;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(101)
			int tmp2 = v;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(101)
			tmp1->set((int)61,tmp2);
			HX_STACK_LINE(101)
			v;
		}
		HX_STACK_LINE(102)
		{
			HX_STACK_LINE(102)
			int tmp = ::maps::ObjectFactory_obj::TILE_PLATFORM;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(102)
			int v = tmp;		HX_STACK_VAR(v,"v");
			HX_STACK_LINE(102)
			::haxe::ds::IntMap tmp1 = this->tileIndexTypes;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(102)
			int tmp2 = v;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(102)
			tmp1->set((int)62,tmp2);
			HX_STACK_LINE(102)
			v;
		}
		HX_STACK_LINE(103)
		{
			HX_STACK_LINE(103)
			int tmp = ::maps::ObjectFactory_obj::TILE_PLATFORM;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(103)
			int v = tmp;		HX_STACK_VAR(v,"v");
			HX_STACK_LINE(103)
			::haxe::ds::IntMap tmp1 = this->tileIndexTypes;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(103)
			int tmp2 = v;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(103)
			tmp1->set((int)63,tmp2);
			HX_STACK_LINE(103)
			v;
		}
		HX_STACK_LINE(105)
		{
			HX_STACK_LINE(105)
			int tmp = ::maps::ObjectFactory_obj::TILE_PLATFORM;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(105)
			int v = tmp;		HX_STACK_VAR(v,"v");
			HX_STACK_LINE(105)
			::haxe::ds::IntMap tmp1 = this->tileIndexTypes;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(105)
			int tmp2 = v;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(105)
			tmp1->set((int)36,tmp2);
			HX_STACK_LINE(105)
			v;
		}
		HX_STACK_LINE(106)
		{
			HX_STACK_LINE(106)
			int tmp = ::maps::ObjectFactory_obj::TILE_PLATFORM;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(106)
			int v = tmp;		HX_STACK_VAR(v,"v");
			HX_STACK_LINE(106)
			::haxe::ds::IntMap tmp1 = this->tileIndexTypes;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(106)
			int tmp2 = v;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(106)
			tmp1->set((int)51,tmp2);
			HX_STACK_LINE(106)
			v;
		}
		HX_STACK_LINE(108)
		{
			HX_STACK_LINE(108)
			int tmp = ::maps::ObjectFactory_obj::TILE_FATAL_DOWN;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(108)
			int v = tmp;		HX_STACK_VAR(v,"v");
			HX_STACK_LINE(108)
			::haxe::ds::IntMap tmp1 = this->tileIndexTypes;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(108)
			int tmp2 = v;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(108)
			tmp1->set((int)24,tmp2);
			HX_STACK_LINE(108)
			v;
		}
		HX_STACK_LINE(109)
		{
			HX_STACK_LINE(109)
			int tmp = ::maps::ObjectFactory_obj::TILE_FATAL_DOWN;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(109)
			int v = tmp;		HX_STACK_VAR(v,"v");
			HX_STACK_LINE(109)
			::haxe::ds::IntMap tmp1 = this->tileIndexTypes;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(109)
			int tmp2 = v;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(109)
			tmp1->set((int)25,tmp2);
			HX_STACK_LINE(109)
			v;
		}
		HX_STACK_LINE(110)
		{
			HX_STACK_LINE(110)
			int tmp = ::maps::ObjectFactory_obj::TILE_FATAL_DOWN;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(110)
			int v = tmp;		HX_STACK_VAR(v,"v");
			HX_STACK_LINE(110)
			::haxe::ds::IntMap tmp1 = this->tileIndexTypes;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(110)
			int tmp2 = v;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(110)
			tmp1->set((int)26,tmp2);
			HX_STACK_LINE(110)
			v;
		}
		HX_STACK_LINE(111)
		{
			HX_STACK_LINE(111)
			int tmp = ::maps::ObjectFactory_obj::TILE_FATAL_UP;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(111)
			int v = tmp;		HX_STACK_VAR(v,"v");
			HX_STACK_LINE(111)
			::haxe::ds::IntMap tmp1 = this->tileIndexTypes;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(111)
			int tmp2 = v;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(111)
			tmp1->set((int)54,tmp2);
			HX_STACK_LINE(111)
			v;
		}
		HX_STACK_LINE(112)
		{
			HX_STACK_LINE(112)
			int tmp = ::maps::ObjectFactory_obj::TILE_FATAL_UP;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(112)
			int v = tmp;		HX_STACK_VAR(v,"v");
			HX_STACK_LINE(112)
			::haxe::ds::IntMap tmp1 = this->tileIndexTypes;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(112)
			int tmp2 = v;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(112)
			tmp1->set((int)55,tmp2);
			HX_STACK_LINE(112)
			v;
		}
		HX_STACK_LINE(113)
		{
			HX_STACK_LINE(113)
			int tmp = ::maps::ObjectFactory_obj::TILE_FATAL_UP;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(113)
			int v = tmp;		HX_STACK_VAR(v,"v");
			HX_STACK_LINE(113)
			::haxe::ds::IntMap tmp1 = this->tileIndexTypes;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(113)
			int tmp2 = v;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(113)
			tmp1->set((int)56,tmp2);
			HX_STACK_LINE(113)
			v;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ObjectFactory_obj,assignTileIndexTypes,(void))

int ObjectFactory_obj::getIndexType( hx::Null< int >  __o_tileIndex){
int tileIndex = __o_tileIndex.Default(0);
	HX_STACK_FRAME("maps.ObjectFactory","getIndexType",0xa2d7d0d0,"maps.ObjectFactory.getIndexType","maps/ObjectFactory.hx",115,0xb5ae61eb)
	HX_STACK_THIS(this)
	HX_STACK_ARG(tileIndex,"tileIndex")
{
		HX_STACK_LINE(117)
		hx::SubEq(tileIndex,(int)1);
		HX_STACK_LINE(119)
		::haxe::ds::IntMap tmp = this->tileIndexTypes;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(119)
		int tmp1 = tileIndex;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(119)
		bool tmp2 = tmp->exists(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(119)
		if ((tmp2)){
			HX_STACK_LINE(120)
			::haxe::ds::IntMap tmp3 = this->tileIndexTypes;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(120)
			int tmp4 = tileIndex;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(120)
			Dynamic tmp5 = tmp3->get(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(120)
			Dynamic tmp6 = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(120)
			return tmp6;
		}
		else{
			HX_STACK_LINE(122)
			return (int)-1;
		}
		HX_STACK_LINE(119)
		return (int)0;
	}
}


HX_DEFINE_DYNAMIC_FUNC1(ObjectFactory_obj,getIndexType,return )

bool ObjectFactory_obj::isObjectTile( int index){
	HX_STACK_FRAME("maps.ObjectFactory","isObjectTile",0x2bbef371,"maps.ObjectFactory.isObjectTile","maps/ObjectFactory.hx",126,0xb5ae61eb)
	HX_STACK_THIS(this)
	HX_STACK_ARG(index,"index")
	HX_STACK_LINE(127)
	int tmp = index;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(127)
	int tmp1 = this->getIndexType(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(127)
	int indexType = tmp1;		HX_STACK_VAR(indexType,"indexType");
	HX_STACK_LINE(129)
	int tmp2 = indexType;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(129)
	int tmp3 = ::maps::ObjectFactory_obj::tileTypes->indexOf(tmp2,null());		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(129)
	bool tmp4 = (tmp3 >= (int)0);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(129)
	if ((tmp4)){
		HX_STACK_LINE(130)
		return true;
	}
	HX_STACK_LINE(131)
	return false;
}


HX_DEFINE_DYNAMIC_FUNC1(ObjectFactory_obj,isObjectTile,return )

bool ObjectFactory_obj::isObjectCheckpoint( int index){
	HX_STACK_FRAME("maps.ObjectFactory","isObjectCheckpoint",0xdc40830b,"maps.ObjectFactory.isObjectCheckpoint","maps/ObjectFactory.hx",133,0xb5ae61eb)
	HX_STACK_THIS(this)
	HX_STACK_ARG(index,"index")
	HX_STACK_LINE(134)
	int tmp = index;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(134)
	int tmp1 = this->getIndexType(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(134)
	int indexType = tmp1;		HX_STACK_VAR(indexType,"indexType");
	HX_STACK_LINE(136)
	int tmp2 = indexType;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(136)
	int tmp3 = ::maps::ObjectFactory_obj::TILE_CHECKPOINT;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(136)
	bool tmp4 = (tmp2 == tmp3);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(136)
	if ((tmp4)){
		HX_STACK_LINE(137)
		return true;
	}
	HX_STACK_LINE(138)
	return false;
}


HX_DEFINE_DYNAMIC_FUNC1(ObjectFactory_obj,isObjectCheckpoint,return )

bool ObjectFactory_obj::isMapStart( int index){
	HX_STACK_FRAME("maps.ObjectFactory","isMapStart",0x9d9e950a,"maps.ObjectFactory.isMapStart","maps/ObjectFactory.hx",140,0xb5ae61eb)
	HX_STACK_THIS(this)
	HX_STACK_ARG(index,"index")
	HX_STACK_LINE(141)
	int tmp = index;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(141)
	int tmp1 = this->getIndexType(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(141)
	int indexType = tmp1;		HX_STACK_VAR(indexType,"indexType");
	HX_STACK_LINE(143)
	int tmp2 = indexType;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(143)
	int tmp3 = ::maps::ObjectFactory_obj::TILE_STARTPOINT;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(143)
	bool tmp4 = (tmp2 == tmp3);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(143)
	if ((tmp4)){
		HX_STACK_LINE(144)
		return true;
	}
	HX_STACK_LINE(145)
	return false;
}


HX_DEFINE_DYNAMIC_FUNC1(ObjectFactory_obj,isMapStart,return )

bool ObjectFactory_obj::isMapEnd( int index){
	HX_STACK_FRAME("maps.ObjectFactory","isMapEnd",0xd10b2a83,"maps.ObjectFactory.isMapEnd","maps/ObjectFactory.hx",147,0xb5ae61eb)
	HX_STACK_THIS(this)
	HX_STACK_ARG(index,"index")
	HX_STACK_LINE(148)
	int tmp = index;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(148)
	int tmp1 = this->getIndexType(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(148)
	int indexType = tmp1;		HX_STACK_VAR(indexType,"indexType");
	HX_STACK_LINE(150)
	int tmp2 = indexType;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(150)
	int tmp3 = ::maps::ObjectFactory_obj::TILE_ENDPOINT;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(150)
	bool tmp4 = (tmp2 == tmp3);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(150)
	if ((tmp4)){
		HX_STACK_LINE(151)
		return true;
	}
	HX_STACK_LINE(152)
	return false;
}


HX_DEFINE_DYNAMIC_FUNC1(ObjectFactory_obj,isMapEnd,return )

bool ObjectFactory_obj::isObjectSpawnPoint( int index){
	HX_STACK_FRAME("maps.ObjectFactory","isObjectSpawnPoint",0x99964c98,"maps.ObjectFactory.isObjectSpawnPoint","maps/ObjectFactory.hx",154,0xb5ae61eb)
	HX_STACK_THIS(this)
	HX_STACK_ARG(index,"index")
	HX_STACK_LINE(155)
	int tmp = index;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(155)
	int tmp1 = this->getIndexType(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(155)
	int indexType = tmp1;		HX_STACK_VAR(indexType,"indexType");
	HX_STACK_LINE(157)
	int tmp2 = indexType;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(157)
	int tmp3 = ::maps::ObjectFactory_obj::spawnTypes->indexOf(tmp2,null());		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(157)
	bool tmp4 = (tmp3 >= (int)0);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(157)
	if ((tmp4)){
		HX_STACK_LINE(158)
		return true;
	}
	HX_STACK_LINE(159)
	return false;
}


HX_DEFINE_DYNAMIC_FUNC1(ObjectFactory_obj,isObjectSpawnPoint,return )

bool ObjectFactory_obj::isObjectAIPathWall( int index){
	HX_STACK_FRAME("maps.ObjectFactory","isObjectAIPathWall",0xba3ffaba,"maps.ObjectFactory.isObjectAIPathWall","maps/ObjectFactory.hx",161,0xb5ae61eb)
	HX_STACK_THIS(this)
	HX_STACK_ARG(index,"index")
	HX_STACK_LINE(162)
	int tmp = index;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(162)
	int tmp1 = this->getIndexType(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(162)
	int indexType = tmp1;		HX_STACK_VAR(indexType,"indexType");
	HX_STACK_LINE(164)
	int tmp2 = indexType;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(164)
	int tmp3 = ::maps::ObjectFactory_obj::TILE_AIPATHWALL;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(164)
	bool tmp4 = (tmp2 == tmp3);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(164)
	if ((tmp4)){
		HX_STACK_LINE(165)
		return true;
	}
	HX_STACK_LINE(166)
	return false;
}


HX_DEFINE_DYNAMIC_FUNC1(ObjectFactory_obj,isObjectAIPathWall,return )

::maps::mapobjects::Checkpoint ObjectFactory_obj::createCheckpoint( int index){
	HX_STACK_FRAME("maps.ObjectFactory","createCheckpoint",0x377302fe,"maps.ObjectFactory.createCheckpoint","maps/ObjectFactory.hx",169,0xb5ae61eb)
	HX_STACK_THIS(this)
	HX_STACK_ARG(index,"index")
	HX_STACK_LINE(170)
	int tmp = index;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(170)
	int tmp1 = this->getIndexType(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(170)
	int indexType = tmp1;		HX_STACK_VAR(indexType,"indexType");
	HX_STACK_LINE(172)
	::openfl::display::Bitmap tmp2 = ::Main_obj::getBitmapAsset(HX_HCSTRING("assets/checkpoint.png","\x0f","\x6f","\xee","\x50"));		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(172)
	::openfl::display::Bitmap checkpointBmp = tmp2;		HX_STACK_VAR(checkpointBmp,"checkpointBmp");
	HX_STACK_LINE(173)
	::maps::mapobjects::Checkpoint tmp3 = ::maps::mapobjects::Checkpoint_obj::__new(false,checkpointBmp);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(173)
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC1(ObjectFactory_obj,createCheckpoint,return )

::maps::mapobjects::Portal ObjectFactory_obj::createPortal( int index,::String endMap){
	HX_STACK_FRAME("maps.ObjectFactory","createPortal",0xa9e54422,"maps.ObjectFactory.createPortal","maps/ObjectFactory.hx",175,0xb5ae61eb)
	HX_STACK_THIS(this)
	HX_STACK_ARG(index,"index")
	HX_STACK_ARG(endMap,"endMap")
	HX_STACK_LINE(176)
	::openfl::display::Bitmap tmp = ::Main_obj::getBitmapAsset(HX_HCSTRING("assets/Door.png","\x15","\x80","\xfe","\x0a"));		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(176)
	::openfl::display::Bitmap portalBmp = tmp;		HX_STACK_VAR(portalBmp,"portalBmp");
	HX_STACK_LINE(178)
	::maps::mapobjects::Portal tmp1 = ::maps::mapobjects::Portal_obj::__new(portalBmp,endMap);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(178)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC2(ObjectFactory_obj,createPortal,return )

::maps::mapobjects::SpawnPoint ObjectFactory_obj::createSpawnPoint( int index){
	HX_STACK_FRAME("maps.ObjectFactory","createSpawnPoint",0xf4c8cc8b,"maps.ObjectFactory.createSpawnPoint","maps/ObjectFactory.hx",180,0xb5ae61eb)
	HX_STACK_THIS(this)
	HX_STACK_ARG(index,"index")
	HX_STACK_LINE(181)
	int tmp = index;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(181)
	int tmp1 = this->getIndexType(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(181)
	int indexType = tmp1;		HX_STACK_VAR(indexType,"indexType");
	HX_STACK_LINE(182)
	::openfl::display::Bitmap tmp2 = ::Main_obj::getBitmapAsset(HX_HCSTRING("assets/portal.png","\x33","\xef","\x8f","\x9f"));		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(182)
	::openfl::display::Bitmap spawnBmp = tmp2;		HX_STACK_VAR(spawnBmp,"spawnBmp");
	HX_STACK_LINE(184)
	int tmp3 = indexType;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(184)
	int tmp4 = ::maps::ObjectFactory_obj::TILE_SPAWNPOINT_WALKING;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(184)
	bool tmp5 = (tmp3 == tmp4);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(184)
	if ((tmp5)){
		HX_STACK_LINE(185)
		::openfl::display::Bitmap tmp6 = spawnBmp;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(185)
		::actors::enemies::WalkingEnemy tmp7 = ::actors::enemies::WalkingEnemy_obj::__new(null());		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(185)
		::maps::mapobjects::SpawnPoint tmp8 = ::maps::mapobjects::SpawnPoint_obj::__new(tmp6,tmp7,(int)1,(int)60,(int)60,(int)1);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(185)
		return tmp8;
	}
	else{
		HX_STACK_LINE(186)
		int tmp6 = indexType;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(186)
		int tmp7 = ::maps::ObjectFactory_obj::TILE_SPAWNPOINT_DASH;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(186)
		bool tmp8 = (tmp6 == tmp7);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(186)
		if ((tmp8)){
			HX_STACK_LINE(187)
			::openfl::display::Bitmap tmp9 = spawnBmp;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(187)
			::actors::enemies::DashEnemy tmp10 = ::actors::enemies::DashEnemy_obj::__new(null());		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(187)
			::maps::mapobjects::SpawnPoint tmp11 = ::maps::mapobjects::SpawnPoint_obj::__new(tmp9,tmp10,(int)1,(int)60,(int)60,(int)1);		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(187)
			return tmp11;
		}
		else{
			HX_STACK_LINE(188)
			int tmp9 = indexType;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(188)
			int tmp10 = ::maps::ObjectFactory_obj::TILE_SPAWNPOINT_LAUNCH;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(188)
			bool tmp11 = (tmp9 == tmp10);		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(188)
			if ((tmp11)){
				HX_STACK_LINE(189)
				::openfl::display::Bitmap tmp12 = spawnBmp;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(189)
				::actors::enemies::LaunchEnemy tmp13 = ::actors::enemies::LaunchEnemy_obj::__new(null());		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(189)
				::maps::mapobjects::SpawnPoint tmp14 = ::maps::mapobjects::SpawnPoint_obj::__new(tmp12,tmp13,(int)1,(int)60,(int)60,(int)1);		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(189)
				return tmp14;
			}
			else{
				HX_STACK_LINE(190)
				int tmp12 = indexType;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(190)
				int tmp13 = ::maps::ObjectFactory_obj::TILE_SPAWNPOINT_PROJECTILE;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(190)
				bool tmp14 = (tmp12 == tmp13);		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(190)
				if ((tmp14)){
					HX_STACK_LINE(191)
					::openfl::display::Bitmap tmp15 = spawnBmp;		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(191)
					::actors::enemies::ProjectileEnemy tmp16 = ::actors::enemies::ProjectileEnemy_obj::__new(null());		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(191)
					::maps::mapobjects::SpawnPoint tmp17 = ::maps::mapobjects::SpawnPoint_obj::__new(tmp15,tmp16,(int)1,(int)60,(int)60,(int)1);		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(191)
					return tmp17;
				}
				else{
					HX_STACK_LINE(194)
					::openfl::display::Bitmap tmp15 = spawnBmp;		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(194)
					::actors::enemies::WalkingEnemy tmp16 = ::actors::enemies::WalkingEnemy_obj::__new(null());		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(194)
					::maps::mapobjects::SpawnPoint tmp17 = ::maps::mapobjects::SpawnPoint_obj::__new(tmp15,tmp16,null(),null(),null(),null());		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(194)
					return tmp17;
				}
			}
		}
	}
	HX_STACK_LINE(184)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ObjectFactory_obj,createSpawnPoint,return )

::maps::mapobjects::AIPathWall ObjectFactory_obj::createAIPathWall( int index){
	HX_STACK_FRAME("maps.ObjectFactory","createAIPathWall",0x15727aad,"maps.ObjectFactory.createAIPathWall","maps/ObjectFactory.hx",196,0xb5ae61eb)
	HX_STACK_THIS(this)
	HX_STACK_ARG(index,"index")
	HX_STACK_LINE(197)
	::openfl::display::Bitmap tmp = ::Main_obj::getBitmapAsset(HX_HCSTRING("assets/portal.png","\x33","\xef","\x8f","\x9f"));		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(197)
	::openfl::display::Bitmap pathBmp = tmp;		HX_STACK_VAR(pathBmp,"pathBmp");
	HX_STACK_LINE(198)
	::maps::mapobjects::AIPathWall tmp1 = ::maps::mapobjects::AIPathWall_obj::__new(pathBmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(198)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC1(ObjectFactory_obj,createAIPathWall,return )

::maps::mapobjects::Tile ObjectFactory_obj::createTile( int tileIndex){
	HX_STACK_FRAME("maps.ObjectFactory","createTile",0x872c2b24,"maps.ObjectFactory.createTile","maps/ObjectFactory.hx",200,0xb5ae61eb)
	HX_STACK_THIS(this)
	HX_STACK_ARG(tileIndex,"tileIndex")
	HX_STACK_LINE(202)
	int tmp = tileIndex;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(202)
	int tmp1 = this->getIndexType(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(202)
	int indexType = tmp1;		HX_STACK_VAR(indexType,"indexType");
	HX_STACK_LINE(204)
	int tmp2 = indexType;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(204)
	int tmp3 = ::maps::ObjectFactory_obj::TILE_PLATFORM;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(204)
	bool tmp4 = (tmp2 == tmp3);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(204)
	if ((tmp4)){
		HX_STACK_LINE(205)
		int tmp5 = tileIndex;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(205)
		int tmp6 = indexType;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(205)
		::maps::mapobjects::Tile tmp7 = this->createPlatformTile(tmp5,tmp6);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(205)
		return tmp7;
	}
	else{
		HX_STACK_LINE(207)
		int tmp5 = indexType;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(207)
		int tmp6 = ::maps::ObjectFactory_obj::fatalTypes->indexOf(tmp5,null());		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(207)
		bool tmp7 = (tmp6 >= (int)0);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(207)
		if ((tmp7)){
			HX_STACK_LINE(208)
			int tmp8 = tileIndex;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(208)
			int tmp9 = indexType;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(208)
			::maps::mapobjects::Tile tmp10 = this->createSpikeTile(tmp8,tmp9);		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(208)
			return tmp10;
		}
		else{
			HX_STACK_LINE(210)
			int tmp8 = indexType;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(210)
			int tmp9 = ::maps::ObjectFactory_obj::TILE_BACKGROUND;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(210)
			bool tmp10 = (tmp8 == tmp9);		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(210)
			if ((tmp10)){
				HX_STACK_LINE(211)
				int tmp11 = tileIndex;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(211)
				int tmp12 = indexType;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(211)
				::maps::mapobjects::Tile tmp13 = this->createBGTile(tmp11,tmp12);		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(211)
				return tmp13;
			}
		}
	}
	HX_STACK_LINE(213)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ObjectFactory_obj,createTile,return )

::maps::mapobjects::Tile ObjectFactory_obj::createPlatformTile( int tileIndex,int indexType){
	HX_STACK_FRAME("maps.ObjectFactory","createPlatformTile",0xbf6bc577,"maps.ObjectFactory.createPlatformTile","maps/ObjectFactory.hx",216,0xb5ae61eb)
	HX_STACK_THIS(this)
	HX_STACK_ARG(tileIndex,"tileIndex")
	HX_STACK_ARG(indexType,"indexType")
	HX_STACK_LINE(218)
	int tmp = tileIndex;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(218)
	::openfl::display::Bitmap tmp1 = this->getTileBitmap(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(218)
	::maps::mapobjects::Tile tmp2 = ::maps::mapobjects::Tile_obj::__new(tmp1,true,Array_obj< int >::__new().Add((int)0).Add((int)0).Add((int)0).Add((int)0));		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(218)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC2(ObjectFactory_obj,createPlatformTile,return )

::maps::mapobjects::Tile ObjectFactory_obj::createSpikeTile( int tileIndex,int indexType){
	HX_STACK_FRAME("maps.ObjectFactory","createSpikeTile",0xbcd2fc5e,"maps.ObjectFactory.createSpikeTile","maps/ObjectFactory.hx",220,0xb5ae61eb)
	HX_STACK_THIS(this)
	HX_STACK_ARG(tileIndex,"tileIndex")
	HX_STACK_ARG(indexType,"indexType")
	HX_STACK_LINE(222)
	Array< int > fatalDirections = Array_obj< int >::__new().Add((int)0).Add((int)0).Add((int)0).Add((int)0);		HX_STACK_VAR(fatalDirections,"fatalDirections");
	HX_STACK_LINE(223)
	int tmp = indexType;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(223)
	int tmp1 = ::maps::ObjectFactory_obj::TILE_FATAL_LEFT;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(223)
	bool tmp2 = (tmp == tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(223)
	if ((tmp2)){
		HX_STACK_LINE(223)
		fatalDirections[(int)0] = (int)1;
	}
	else{
		HX_STACK_LINE(224)
		int tmp3 = indexType;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(224)
		int tmp4 = ::maps::ObjectFactory_obj::TILE_FATAL_RIGHT;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(224)
		bool tmp5 = (tmp3 == tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(224)
		if ((tmp5)){
			HX_STACK_LINE(224)
			fatalDirections[(int)1] = (int)1;
		}
		else{
			HX_STACK_LINE(225)
			int tmp6 = indexType;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(225)
			int tmp7 = ::maps::ObjectFactory_obj::TILE_FATAL_UP;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(225)
			bool tmp8 = (tmp6 == tmp7);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(225)
			if ((tmp8)){
				HX_STACK_LINE(225)
				fatalDirections[(int)2] = (int)1;
			}
			else{
				HX_STACK_LINE(226)
				int tmp9 = indexType;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(226)
				int tmp10 = ::maps::ObjectFactory_obj::TILE_FATAL_DOWN;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(226)
				bool tmp11 = (tmp9 == tmp10);		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(226)
				if ((tmp11)){
					HX_STACK_LINE(226)
					fatalDirections[(int)3] = (int)1;
				}
				else{
					HX_STACK_LINE(227)
					int tmp12 = indexType;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(227)
					int tmp13 = ::maps::ObjectFactory_obj::TILE_FATAL_LR;		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(227)
					bool tmp14 = (tmp12 == tmp13);		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(227)
					if ((tmp14)){
						HX_STACK_LINE(227)
						fatalDirections = Array_obj< int >::__new().Add((int)1).Add((int)1).Add((int)0).Add((int)0);
					}
					else{
						HX_STACK_LINE(228)
						int tmp15 = indexType;		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(228)
						int tmp16 = ::maps::ObjectFactory_obj::TILE_FATAL_UD;		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(228)
						bool tmp17 = (tmp15 == tmp16);		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(228)
						if ((tmp17)){
							HX_STACK_LINE(228)
							fatalDirections = Array_obj< int >::__new().Add((int)0).Add((int)0).Add((int)1).Add((int)1);
						}
						else{
							HX_STACK_LINE(229)
							int tmp18 = indexType;		HX_STACK_VAR(tmp18,"tmp18");
							HX_STACK_LINE(229)
							int tmp19 = ::maps::ObjectFactory_obj::TILE_FATAL_ALL;		HX_STACK_VAR(tmp19,"tmp19");
							HX_STACK_LINE(229)
							bool tmp20 = (tmp18 == tmp19);		HX_STACK_VAR(tmp20,"tmp20");
							HX_STACK_LINE(229)
							if ((tmp20)){
								HX_STACK_LINE(229)
								fatalDirections = Array_obj< int >::__new().Add((int)1).Add((int)1).Add((int)1).Add((int)1);
							}
						}
					}
				}
			}
		}
	}
	HX_STACK_LINE(231)
	int tmp3 = tileIndex;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(231)
	::openfl::display::Bitmap tmp4 = this->getTileBitmap(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(231)
	::maps::mapobjects::Tile tmp5 = ::maps::mapobjects::Tile_obj::__new(tmp4,true,fatalDirections);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(231)
	return tmp5;
}


HX_DEFINE_DYNAMIC_FUNC2(ObjectFactory_obj,createSpikeTile,return )

::maps::mapobjects::Tile ObjectFactory_obj::createBGTile( int tileIndex,int indexType){
	HX_STACK_FRAME("maps.ObjectFactory","createBGTile",0xf5024ce9,"maps.ObjectFactory.createBGTile","maps/ObjectFactory.hx",233,0xb5ae61eb)
	HX_STACK_THIS(this)
	HX_STACK_ARG(tileIndex,"tileIndex")
	HX_STACK_ARG(indexType,"indexType")
	HX_STACK_LINE(235)
	int tmp = tileIndex;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(235)
	::openfl::display::Bitmap tmp1 = this->getTileBitmap(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(235)
	::maps::mapobjects::Tile tmp2 = ::maps::mapobjects::Tile_obj::__new(tmp1,false,Array_obj< int >::__new().Add((int)0).Add((int)0).Add((int)0).Add((int)0));		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(235)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC2(ObjectFactory_obj,createBGTile,return )

::openfl::display::Bitmap ObjectFactory_obj::getTileBitmap( int index){
	HX_STACK_FRAME("maps.ObjectFactory","getTileBitmap",0x44e2e759,"maps.ObjectFactory.getTileBitmap","maps/ObjectFactory.hx",238,0xb5ae61eb)
	HX_STACK_THIS(this)
	HX_STACK_ARG(index,"index")
	HX_STACK_LINE(239)
	int tmp = index;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(239)
	::openfl::display::Bitmap tmp1 = this->tileSheet;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(239)
	int tmp2 = this->tileSheetWidth;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(239)
	::openfl::display::Bitmap tmp3 = this->getBitmap(tmp,tmp1,tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(239)
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC1(ObjectFactory_obj,getTileBitmap,return )

::openfl::display::Bitmap ObjectFactory_obj::getBitmap( int index,::openfl::display::Bitmap sheet,int sheetWidth){
	HX_STACK_FRAME("maps.ObjectFactory","getBitmap",0x5a0c138b,"maps.ObjectFactory.getBitmap","maps/ObjectFactory.hx",242,0xb5ae61eb)
	HX_STACK_THIS(this)
	HX_STACK_ARG(index,"index")
	HX_STACK_ARG(sheet,"sheet")
	HX_STACK_ARG(sheetWidth,"sheetWidth")
	HX_STACK_LINE(244)
	int tmp = index;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(244)
	int tmp1 = this->tileSize;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(244)
	int tmp2 = (tmp * tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(244)
	int temp = tmp2;		HX_STACK_VAR(temp,"temp");
	HX_STACK_LINE(245)
	Float tmp3 = (Float(temp) / Float(sheetWidth));		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(245)
	int tmp4 = ::Math_obj::floor(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(245)
	int y = tmp4;		HX_STACK_VAR(y,"y");
	HX_STACK_LINE(246)
	int tmp5 = hx::Mod(temp,sheetWidth);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(246)
	int tmp6 = this->tileSize;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(246)
	Float tmp7 = (Float(tmp5) / Float(tmp6));		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(246)
	Float tmp8 = (tmp7 - (int)1);		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(246)
	int tmp9 = ::Math_obj::floor(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(246)
	int x = tmp9;		HX_STACK_VAR(x,"x");
	HX_STACK_LINE(248)
	int tmp10 = x;		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(248)
	int tmp11 = this->tileSize;		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(248)
	int tmp12 = (tmp10 * tmp11);		HX_STACK_VAR(tmp12,"tmp12");
	HX_STACK_LINE(248)
	int tmp13 = y;		HX_STACK_VAR(tmp13,"tmp13");
	HX_STACK_LINE(248)
	int tmp14 = this->tileSize;		HX_STACK_VAR(tmp14,"tmp14");
	HX_STACK_LINE(248)
	int tmp15 = (tmp13 * tmp14);		HX_STACK_VAR(tmp15,"tmp15");
	HX_STACK_LINE(248)
	int tmp16 = this->tileSize;		HX_STACK_VAR(tmp16,"tmp16");
	HX_STACK_LINE(248)
	int tmp17 = this->tileSize;		HX_STACK_VAR(tmp17,"tmp17");
	HX_STACK_LINE(248)
	::openfl::geom::Rectangle tmp18 = ::openfl::geom::Rectangle_obj::__new(tmp12,tmp15,tmp16,tmp17);		HX_STACK_VAR(tmp18,"tmp18");
	HX_STACK_LINE(248)
	::openfl::geom::Rectangle frame = tmp18;		HX_STACK_VAR(frame,"frame");
	HX_STACK_LINE(249)
	int tmp19 = this->tileSize;		HX_STACK_VAR(tmp19,"tmp19");
	HX_STACK_LINE(249)
	int tmp20 = this->tileSize;		HX_STACK_VAR(tmp20,"tmp20");
	HX_STACK_LINE(249)
	::openfl::display::BitmapData tmp21 = ::openfl::display::BitmapData_obj::__new(tmp19,tmp20,null(),null());		HX_STACK_VAR(tmp21,"tmp21");
	HX_STACK_LINE(249)
	::openfl::display::Bitmap tmp22 = ::openfl::display::Bitmap_obj::__new(tmp21,null(),null());		HX_STACK_VAR(tmp22,"tmp22");
	HX_STACK_LINE(249)
	::openfl::display::Bitmap bitmap = tmp22;		HX_STACK_VAR(bitmap,"bitmap");
	HX_STACK_LINE(250)
	::openfl::display::BitmapData tmp23 = sheet->bitmapData;		HX_STACK_VAR(tmp23,"tmp23");
	HX_STACK_LINE(250)
	::openfl::geom::Rectangle tmp24 = frame;		HX_STACK_VAR(tmp24,"tmp24");
	HX_STACK_LINE(250)
	::openfl::geom::Point tmp25 = ::openfl::geom::Point_obj::__new(null(),null());		HX_STACK_VAR(tmp25,"tmp25");
	HX_STACK_LINE(250)
	bitmap->bitmapData->copyPixels(tmp23,tmp24,tmp25,null(),null(),null());
	HX_STACK_LINE(252)
	::openfl::display::Bitmap tmp26 = bitmap;		HX_STACK_VAR(tmp26,"tmp26");
	HX_STACK_LINE(252)
	return tmp26;
}


HX_DEFINE_DYNAMIC_FUNC3(ObjectFactory_obj,getBitmap,return )

::maps::ObjectFactory ObjectFactory_obj::singleton;

::maps::ObjectFactory ObjectFactory_obj::getSingleton( ){
	HX_STACK_FRAME("maps.ObjectFactory","getSingleton",0x5140eaef,"maps.ObjectFactory.getSingleton","maps/ObjectFactory.hx",28,0xb5ae61eb)
	HX_STACK_LINE(30)
	::maps::ObjectFactory tmp = ::maps::ObjectFactory_obj::singleton;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(30)
	bool tmp1 = (tmp == null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(30)
	if ((tmp1)){
		HX_STACK_LINE(31)
		::maps::ObjectFactory tmp2 = ::maps::ObjectFactory_obj::__new();		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(31)
		::maps::ObjectFactory_obj::singleton = tmp2;
	}
	HX_STACK_LINE(32)
	::maps::ObjectFactory tmp2 = ::maps::ObjectFactory_obj::singleton;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(32)
	return tmp2;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(ObjectFactory_obj,getSingleton,return )

int ObjectFactory_obj::TILE_STARTPOINT;

int ObjectFactory_obj::TILE_ENDPOINT;

int ObjectFactory_obj::TILE_CHECKPOINT;

int ObjectFactory_obj::TILE_AIPATHWALL;

int ObjectFactory_obj::TILE_SPAWNPOINT_WALKING;

int ObjectFactory_obj::TILE_SPAWNPOINT_DASH;

int ObjectFactory_obj::TILE_SPAWNPOINT_LAUNCH;

int ObjectFactory_obj::TILE_SPAWNPOINT_PROJECTILE;

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

Array< int > ObjectFactory_obj::spawnTypes;


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
		if (HX_FIELD_EQ(inName,"createSpawnPoint") ) { return createSpawnPoint_dyn(); }
		if (HX_FIELD_EQ(inName,"createAIPathWall") ) { return createAIPathWall_dyn(); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"isObjectCheckpoint") ) { return isObjectCheckpoint_dyn(); }
		if (HX_FIELD_EQ(inName,"isObjectSpawnPoint") ) { return isObjectSpawnPoint_dyn(); }
		if (HX_FIELD_EQ(inName,"isObjectAIPathWall") ) { return isObjectAIPathWall_dyn(); }
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
		if (HX_FIELD_EQ(inName,"spawnTypes") ) { outValue = spawnTypes; return true;  }
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
		if (HX_FIELD_EQ(inName,"TILE_AIPATHWALL") ) { outValue = TILE_AIPATHWALL; return true;  }
		if (HX_FIELD_EQ(inName,"TILE_BACKGROUND") ) { outValue = TILE_BACKGROUND; return true;  }
		if (HX_FIELD_EQ(inName,"TILE_FATAL_DOWN") ) { outValue = TILE_FATAL_DOWN; return true;  }
		if (HX_FIELD_EQ(inName,"TILE_FATAL_LEFT") ) { outValue = TILE_FATAL_LEFT; return true;  }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"TILE_FATAL_RIGHT") ) { outValue = TILE_FATAL_RIGHT; return true;  }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"TILE_SPAWNPOINT_DASH") ) { outValue = TILE_SPAWNPOINT_DASH; return true;  }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"TILE_SPAWNPOINT_LAUNCH") ) { outValue = TILE_SPAWNPOINT_LAUNCH; return true;  }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"TILE_SPAWNPOINT_WALKING") ) { outValue = TILE_SPAWNPOINT_WALKING; return true;  }
		break;
	case 26:
		if (HX_FIELD_EQ(inName,"TILE_SPAWNPOINT_PROJECTILE") ) { outValue = TILE_SPAWNPOINT_PROJECTILE; return true;  }
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
		if (HX_FIELD_EQ(inName,"tileIndexTypes") ) { tileIndexTypes=inValue.Cast< ::haxe::ds::IntMap >(); return inValue; }
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
		if (HX_FIELD_EQ(inName,"spawnTypes") ) { spawnTypes=ioValue.Cast< Array< int > >(); return true; }
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
		if (HX_FIELD_EQ(inName,"TILE_AIPATHWALL") ) { TILE_AIPATHWALL=ioValue.Cast< int >(); return true; }
		if (HX_FIELD_EQ(inName,"TILE_BACKGROUND") ) { TILE_BACKGROUND=ioValue.Cast< int >(); return true; }
		if (HX_FIELD_EQ(inName,"TILE_FATAL_DOWN") ) { TILE_FATAL_DOWN=ioValue.Cast< int >(); return true; }
		if (HX_FIELD_EQ(inName,"TILE_FATAL_LEFT") ) { TILE_FATAL_LEFT=ioValue.Cast< int >(); return true; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"TILE_FATAL_RIGHT") ) { TILE_FATAL_RIGHT=ioValue.Cast< int >(); return true; }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"TILE_SPAWNPOINT_DASH") ) { TILE_SPAWNPOINT_DASH=ioValue.Cast< int >(); return true; }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"TILE_SPAWNPOINT_LAUNCH") ) { TILE_SPAWNPOINT_LAUNCH=ioValue.Cast< int >(); return true; }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"TILE_SPAWNPOINT_WALKING") ) { TILE_SPAWNPOINT_WALKING=ioValue.Cast< int >(); return true; }
		break;
	case 26:
		if (HX_FIELD_EQ(inName,"TILE_SPAWNPOINT_PROJECTILE") ) { TILE_SPAWNPOINT_PROJECTILE=ioValue.Cast< int >(); return true; }
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
	{hx::fsObject /*::haxe::ds::IntMap*/ ,(int)offsetof(ObjectFactory_obj,tileIndexTypes),HX_HCSTRING("tileIndexTypes","\xd5","\xb8","\x6f","\x48")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo sStaticStorageInfo[] = {
	{hx::fsObject /*::maps::ObjectFactory*/ ,(void *) &ObjectFactory_obj::singleton,HX_HCSTRING("singleton","\x0b","\xc5","\x7f","\xb7")},
	{hx::fsInt,(void *) &ObjectFactory_obj::TILE_STARTPOINT,HX_HCSTRING("TILE_STARTPOINT","\x5f","\x5d","\xc7","\xe7")},
	{hx::fsInt,(void *) &ObjectFactory_obj::TILE_ENDPOINT,HX_HCSTRING("TILE_ENDPOINT","\x06","\xf5","\x54","\x8b")},
	{hx::fsInt,(void *) &ObjectFactory_obj::TILE_CHECKPOINT,HX_HCSTRING("TILE_CHECKPOINT","\x39","\x87","\xa0","\xdb")},
	{hx::fsInt,(void *) &ObjectFactory_obj::TILE_AIPATHWALL,HX_HCSTRING("TILE_AIPATHWALL","\xc8","\x36","\x42","\x53")},
	{hx::fsInt,(void *) &ObjectFactory_obj::TILE_SPAWNPOINT_WALKING,HX_HCSTRING("TILE_SPAWNPOINT_WALKING","\xc0","\x1f","\x82","\x1b")},
	{hx::fsInt,(void *) &ObjectFactory_obj::TILE_SPAWNPOINT_DASH,HX_HCSTRING("TILE_SPAWNPOINT_DASH","\x8b","\x56","\x55","\xcc")},
	{hx::fsInt,(void *) &ObjectFactory_obj::TILE_SPAWNPOINT_LAUNCH,HX_HCSTRING("TILE_SPAWNPOINT_LAUNCH","\xac","\x67","\x72","\xc1")},
	{hx::fsInt,(void *) &ObjectFactory_obj::TILE_SPAWNPOINT_PROJECTILE,HX_HCSTRING("TILE_SPAWNPOINT_PROJECTILE","\xe2","\x63","\x3e","\xda")},
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
	{hx::fsObject /*Array< int >*/ ,(void *) &ObjectFactory_obj::spawnTypes,HX_HCSTRING("spawnTypes","\x3e","\xcc","\xe3","\x54")},
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
	HX_HCSTRING("isObjectSpawnPoint","\xbe","\x43","\x93","\xc8"),
	HX_HCSTRING("isObjectAIPathWall","\xe0","\xf1","\x3c","\xe9"),
	HX_HCSTRING("createCheckpoint","\xa4","\xc4","\x7f","\x78"),
	HX_HCSTRING("createPortal","\xc8","\xba","\x7a","\x1f"),
	HX_HCSTRING("createSpawnPoint","\x31","\x8e","\xd5","\x35"),
	HX_HCSTRING("createAIPathWall","\x53","\x3c","\x7f","\x56"),
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
	HX_MARK_MEMBER_NAME(ObjectFactory_obj::TILE_AIPATHWALL,"TILE_AIPATHWALL");
	HX_MARK_MEMBER_NAME(ObjectFactory_obj::TILE_SPAWNPOINT_WALKING,"TILE_SPAWNPOINT_WALKING");
	HX_MARK_MEMBER_NAME(ObjectFactory_obj::TILE_SPAWNPOINT_DASH,"TILE_SPAWNPOINT_DASH");
	HX_MARK_MEMBER_NAME(ObjectFactory_obj::TILE_SPAWNPOINT_LAUNCH,"TILE_SPAWNPOINT_LAUNCH");
	HX_MARK_MEMBER_NAME(ObjectFactory_obj::TILE_SPAWNPOINT_PROJECTILE,"TILE_SPAWNPOINT_PROJECTILE");
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
	HX_MARK_MEMBER_NAME(ObjectFactory_obj::spawnTypes,"spawnTypes");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ObjectFactory_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(ObjectFactory_obj::singleton,"singleton");
	HX_VISIT_MEMBER_NAME(ObjectFactory_obj::TILE_STARTPOINT,"TILE_STARTPOINT");
	HX_VISIT_MEMBER_NAME(ObjectFactory_obj::TILE_ENDPOINT,"TILE_ENDPOINT");
	HX_VISIT_MEMBER_NAME(ObjectFactory_obj::TILE_CHECKPOINT,"TILE_CHECKPOINT");
	HX_VISIT_MEMBER_NAME(ObjectFactory_obj::TILE_AIPATHWALL,"TILE_AIPATHWALL");
	HX_VISIT_MEMBER_NAME(ObjectFactory_obj::TILE_SPAWNPOINT_WALKING,"TILE_SPAWNPOINT_WALKING");
	HX_VISIT_MEMBER_NAME(ObjectFactory_obj::TILE_SPAWNPOINT_DASH,"TILE_SPAWNPOINT_DASH");
	HX_VISIT_MEMBER_NAME(ObjectFactory_obj::TILE_SPAWNPOINT_LAUNCH,"TILE_SPAWNPOINT_LAUNCH");
	HX_VISIT_MEMBER_NAME(ObjectFactory_obj::TILE_SPAWNPOINT_PROJECTILE,"TILE_SPAWNPOINT_PROJECTILE");
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
	HX_VISIT_MEMBER_NAME(ObjectFactory_obj::spawnTypes,"spawnTypes");
};

#endif

hx::Class ObjectFactory_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("singleton","\x0b","\xc5","\x7f","\xb7"),
	HX_HCSTRING("getSingleton","\x95","\x61","\xd6","\xc6"),
	HX_HCSTRING("TILE_STARTPOINT","\x5f","\x5d","\xc7","\xe7"),
	HX_HCSTRING("TILE_ENDPOINT","\x06","\xf5","\x54","\x8b"),
	HX_HCSTRING("TILE_CHECKPOINT","\x39","\x87","\xa0","\xdb"),
	HX_HCSTRING("TILE_AIPATHWALL","\xc8","\x36","\x42","\x53"),
	HX_HCSTRING("TILE_SPAWNPOINT_WALKING","\xc0","\x1f","\x82","\x1b"),
	HX_HCSTRING("TILE_SPAWNPOINT_DASH","\x8b","\x56","\x55","\xcc"),
	HX_HCSTRING("TILE_SPAWNPOINT_LAUNCH","\xac","\x67","\x72","\xc1"),
	HX_HCSTRING("TILE_SPAWNPOINT_PROJECTILE","\xe2","\x63","\x3e","\xda"),
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
	HX_HCSTRING("spawnTypes","\x3e","\xcc","\xe3","\x54"),
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
	TILE_AIPATHWALL= (int)43;
	TILE_SPAWNPOINT_WALKING= (int)44;
	TILE_SPAWNPOINT_DASH= (int)45;
	TILE_SPAWNPOINT_LAUNCH= (int)46;
	TILE_SPAWNPOINT_PROJECTILE= (int)47;
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
		HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","maps/ObjectFactory.hx",56,0xb5ae61eb)
		{
			HX_STACK_LINE(56)
			int tmp = ::maps::ObjectFactory_obj::TILE_FATAL_ALL;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(56)
			int tmp1 = ::maps::ObjectFactory_obj::TILE_FATAL_DOWN;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(56)
			int tmp2 = ::maps::ObjectFactory_obj::TILE_FATAL_LEFT;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(56)
			int tmp3 = ::maps::ObjectFactory_obj::TILE_FATAL_RIGHT;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(56)
			int tmp4 = ::maps::ObjectFactory_obj::TILE_FATAL_UP;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(57)
			int tmp5 = ::maps::ObjectFactory_obj::TILE_FATAL_LR;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(57)
			int tmp6 = ::maps::ObjectFactory_obj::TILE_FATAL_UD;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(57)
			int tmp7 = ::maps::ObjectFactory_obj::TILE_BACKGROUND;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(57)
			int tmp8 = ::maps::ObjectFactory_obj::TILE_PLATFORM;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(56)
			return Array_obj< int >::__new().Add(tmp).Add(tmp1).Add(tmp2).Add(tmp3).Add(tmp4).Add(tmp5).Add(tmp6).Add(tmp7).Add(tmp8);
		}
		return null();
	}
};
	tileTypes= _Function_0_1::Block();
struct _Function_0_2{
	inline static Array< int > Block( ){
		HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","maps/ObjectFactory.hx",59,0xb5ae61eb)
		{
			HX_STACK_LINE(59)
			int tmp = ::maps::ObjectFactory_obj::TILE_FATAL_ALL;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(59)
			int tmp1 = ::maps::ObjectFactory_obj::TILE_FATAL_DOWN;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(59)
			int tmp2 = ::maps::ObjectFactory_obj::TILE_FATAL_LEFT;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(59)
			int tmp3 = ::maps::ObjectFactory_obj::TILE_FATAL_RIGHT;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(59)
			int tmp4 = ::maps::ObjectFactory_obj::TILE_FATAL_UP;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(60)
			int tmp5 = ::maps::ObjectFactory_obj::TILE_FATAL_LR;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(60)
			int tmp6 = ::maps::ObjectFactory_obj::TILE_FATAL_UD;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(59)
			return Array_obj< int >::__new().Add(tmp).Add(tmp1).Add(tmp2).Add(tmp3).Add(tmp4).Add(tmp5).Add(tmp6);
		}
		return null();
	}
};
	fatalTypes= _Function_0_2::Block();
struct _Function_0_3{
	inline static Array< int > Block( ){
		HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","maps/ObjectFactory.hx",62,0xb5ae61eb)
		{
			HX_STACK_LINE(62)
			int tmp = ::maps::ObjectFactory_obj::TILE_SPAWNPOINT_WALKING;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(62)
			int tmp1 = ::maps::ObjectFactory_obj::TILE_SPAWNPOINT_DASH;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(62)
			int tmp2 = ::maps::ObjectFactory_obj::TILE_SPAWNPOINT_LAUNCH;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(63)
			int tmp3 = ::maps::ObjectFactory_obj::TILE_SPAWNPOINT_PROJECTILE;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(62)
			return Array_obj< int >::__new().Add(tmp).Add(tmp1).Add(tmp2).Add(tmp3);
		}
		return null();
	}
};
	spawnTypes= _Function_0_3::Block();
}

} // end namespace maps
