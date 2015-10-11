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
#ifndef INCLUDED_actors_enemies_FlyingEnemy
#include <actors/enemies/FlyingEnemy.h>
#endif
#ifndef INCLUDED_actors_enemies_LaunchEnemy
#include <actors/enemies/LaunchEnemy.h>
#endif
#ifndef INCLUDED_actors_enemies_ProjectileEnemy
#include <actors/enemies/ProjectileEnemy.h>
#endif
#ifndef INCLUDED_actors_enemies_RunningEnemy
#include <actors/enemies/RunningEnemy.h>
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
HX_STACK_FRAME("maps.ObjectFactory","new",0x3087da46,"maps.ObjectFactory.new","maps/ObjectFactory.hx",77,0xb5ae61eb)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(78)
	this->tileSize = (int)32;
	HX_STACK_LINE(79)
	this->tileSheetWidth = (int)480;
	HX_STACK_LINE(81)
	::openfl::display::Bitmap tmp = ::Main_obj::getBitmapAsset(HX_HCSTRING("assets/World1Tiles.png","\xb5","\x66","\xc9","\xd5"));		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(81)
	this->tileSheet = tmp;
	HX_STACK_LINE(83)
	::haxe::ds::IntMap tmp1;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(83)
	{
		HX_STACK_LINE(83)
		::haxe::ds::IntMap tmp2 = ::haxe::ds::IntMap_obj::__new();		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(83)
		::haxe::ds::IntMap tmp3 = tmp2;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(83)
		tmp1 = tmp3;
	}
	HX_STACK_LINE(83)
	this->tileIndexTypes = tmp1;
	HX_STACK_LINE(85)
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
		HX_STACK_FRAME("maps.ObjectFactory","assignTileIndexTypes",0x83a6dabe,"maps.ObjectFactory.assignTileIndexTypes","maps/ObjectFactory.hx",87,0xb5ae61eb)
		HX_STACK_THIS(this)
		HX_STACK_LINE(89)
		{
			HX_STACK_LINE(89)
			int tmp = ::maps::ObjectFactory_obj::TILE_CHECKPOINT;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(89)
			int v = tmp;		HX_STACK_VAR(v,"v");
			HX_STACK_LINE(89)
			::haxe::ds::IntMap tmp1 = this->tileIndexTypes;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(89)
			int tmp2 = v;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(89)
			tmp1->set((int)0,tmp2);
			HX_STACK_LINE(89)
			v;
		}
		HX_STACK_LINE(90)
		{
			HX_STACK_LINE(90)
			int tmp = ::maps::ObjectFactory_obj::TILE_ENDPOINT;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(90)
			int v = tmp;		HX_STACK_VAR(v,"v");
			HX_STACK_LINE(90)
			::haxe::ds::IntMap tmp1 = this->tileIndexTypes;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(90)
			int tmp2 = v;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(90)
			tmp1->set((int)1,tmp2);
			HX_STACK_LINE(90)
			v;
		}
		HX_STACK_LINE(91)
		{
			HX_STACK_LINE(91)
			int tmp = ::maps::ObjectFactory_obj::TILE_BACKGROUND;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(91)
			int v = tmp;		HX_STACK_VAR(v,"v");
			HX_STACK_LINE(91)
			::haxe::ds::IntMap tmp1 = this->tileIndexTypes;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(91)
			int tmp2 = v;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(91)
			tmp1->set((int)2,tmp2);
			HX_STACK_LINE(91)
			v;
		}
		HX_STACK_LINE(92)
		{
			HX_STACK_LINE(92)
			int tmp = ::maps::ObjectFactory_obj::TILE_AIPATHWALL;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(92)
			int v = tmp;		HX_STACK_VAR(v,"v");
			HX_STACK_LINE(92)
			::haxe::ds::IntMap tmp1 = this->tileIndexTypes;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(92)
			int tmp2 = v;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(92)
			tmp1->set((int)3,tmp2);
			HX_STACK_LINE(92)
			v;
		}
		HX_STACK_LINE(93)
		{
			HX_STACK_LINE(93)
			int tmp = ::maps::ObjectFactory_obj::TILE_STARTPOINT;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(93)
			int v = tmp;		HX_STACK_VAR(v,"v");
			HX_STACK_LINE(93)
			::haxe::ds::IntMap tmp1 = this->tileIndexTypes;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(93)
			int tmp2 = v;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(93)
			tmp1->set((int)16,tmp2);
			HX_STACK_LINE(93)
			v;
		}
		HX_STACK_LINE(95)
		{
			HX_STACK_LINE(95)
			int tmp = ::maps::ObjectFactory_obj::TILE_SPAWNPOINT_WALKING;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(95)
			int v = tmp;		HX_STACK_VAR(v,"v");
			HX_STACK_LINE(95)
			::haxe::ds::IntMap tmp1 = this->tileIndexTypes;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(95)
			int tmp2 = v;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(95)
			tmp1->set((int)15,tmp2);
			HX_STACK_LINE(95)
			v;
		}
		HX_STACK_LINE(96)
		{
			HX_STACK_LINE(96)
			int tmp = ::maps::ObjectFactory_obj::TILE_SPAWNPOINT_DASH;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(96)
			int v = tmp;		HX_STACK_VAR(v,"v");
			HX_STACK_LINE(96)
			::haxe::ds::IntMap tmp1 = this->tileIndexTypes;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(96)
			int tmp2 = v;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(96)
			tmp1->set((int)30,tmp2);
			HX_STACK_LINE(96)
			v;
		}
		HX_STACK_LINE(97)
		{
			HX_STACK_LINE(97)
			int tmp = ::maps::ObjectFactory_obj::TILE_SPAWNPOINT_LAUNCH;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(97)
			int v = tmp;		HX_STACK_VAR(v,"v");
			HX_STACK_LINE(97)
			::haxe::ds::IntMap tmp1 = this->tileIndexTypes;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(97)
			int tmp2 = v;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(97)
			tmp1->set((int)45,tmp2);
			HX_STACK_LINE(97)
			v;
		}
		HX_STACK_LINE(98)
		{
			HX_STACK_LINE(98)
			int tmp = ::maps::ObjectFactory_obj::TILE_SPAWNPOINT_PROJECTILE;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(98)
			int v = tmp;		HX_STACK_VAR(v,"v");
			HX_STACK_LINE(98)
			::haxe::ds::IntMap tmp1 = this->tileIndexTypes;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(98)
			int tmp2 = v;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(98)
			tmp1->set((int)60,tmp2);
			HX_STACK_LINE(98)
			v;
		}
		HX_STACK_LINE(99)
		{
			HX_STACK_LINE(99)
			int tmp = ::maps::ObjectFactory_obj::TILE_SPAWNPOINT_FLYING_HOR;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(99)
			int v = tmp;		HX_STACK_VAR(v,"v");
			HX_STACK_LINE(99)
			::haxe::ds::IntMap tmp1 = this->tileIndexTypes;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(99)
			int tmp2 = v;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(99)
			tmp1->set((int)75,tmp2);
			HX_STACK_LINE(99)
			v;
		}
		HX_STACK_LINE(100)
		{
			HX_STACK_LINE(100)
			int tmp = ::maps::ObjectFactory_obj::TILE_SPAWNPOINT_FLYING_VER;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(100)
			int v = tmp;		HX_STACK_VAR(v,"v");
			HX_STACK_LINE(100)
			::haxe::ds::IntMap tmp1 = this->tileIndexTypes;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(100)
			int tmp2 = v;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(100)
			tmp1->set((int)90,tmp2);
			HX_STACK_LINE(100)
			v;
		}
		HX_STACK_LINE(101)
		{
			HX_STACK_LINE(101)
			int tmp = ::maps::ObjectFactory_obj::TILE_SPAWNPOINT_RUNNING;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(101)
			int v = tmp;		HX_STACK_VAR(v,"v");
			HX_STACK_LINE(101)
			::haxe::ds::IntMap tmp1 = this->tileIndexTypes;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(101)
			int tmp2 = v;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(101)
			tmp1->set((int)105,tmp2);
			HX_STACK_LINE(101)
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
			tmp1->set((int)31,tmp2);
			HX_STACK_LINE(103)
			v;
		}
		HX_STACK_LINE(104)
		{
			HX_STACK_LINE(104)
			int tmp = ::maps::ObjectFactory_obj::TILE_PLATFORM;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(104)
			int v = tmp;		HX_STACK_VAR(v,"v");
			HX_STACK_LINE(104)
			::haxe::ds::IntMap tmp1 = this->tileIndexTypes;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(104)
			int tmp2 = v;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(104)
			tmp1->set((int)32,tmp2);
			HX_STACK_LINE(104)
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
			tmp1->set((int)33,tmp2);
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
			tmp1->set((int)46,tmp2);
			HX_STACK_LINE(106)
			v;
		}
		HX_STACK_LINE(107)
		{
			HX_STACK_LINE(107)
			int tmp = ::maps::ObjectFactory_obj::TILE_PLATFORM;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(107)
			int v = tmp;		HX_STACK_VAR(v,"v");
			HX_STACK_LINE(107)
			::haxe::ds::IntMap tmp1 = this->tileIndexTypes;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(107)
			int tmp2 = v;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(107)
			tmp1->set((int)47,tmp2);
			HX_STACK_LINE(107)
			v;
		}
		HX_STACK_LINE(108)
		{
			HX_STACK_LINE(108)
			int tmp = ::maps::ObjectFactory_obj::TILE_PLATFORM;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(108)
			int v = tmp;		HX_STACK_VAR(v,"v");
			HX_STACK_LINE(108)
			::haxe::ds::IntMap tmp1 = this->tileIndexTypes;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(108)
			int tmp2 = v;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(108)
			tmp1->set((int)48,tmp2);
			HX_STACK_LINE(108)
			v;
		}
		HX_STACK_LINE(109)
		{
			HX_STACK_LINE(109)
			int tmp = ::maps::ObjectFactory_obj::TILE_PLATFORM;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(109)
			int v = tmp;		HX_STACK_VAR(v,"v");
			HX_STACK_LINE(109)
			::haxe::ds::IntMap tmp1 = this->tileIndexTypes;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(109)
			int tmp2 = v;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(109)
			tmp1->set((int)61,tmp2);
			HX_STACK_LINE(109)
			v;
		}
		HX_STACK_LINE(110)
		{
			HX_STACK_LINE(110)
			int tmp = ::maps::ObjectFactory_obj::TILE_PLATFORM;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(110)
			int v = tmp;		HX_STACK_VAR(v,"v");
			HX_STACK_LINE(110)
			::haxe::ds::IntMap tmp1 = this->tileIndexTypes;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(110)
			int tmp2 = v;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(110)
			tmp1->set((int)62,tmp2);
			HX_STACK_LINE(110)
			v;
		}
		HX_STACK_LINE(111)
		{
			HX_STACK_LINE(111)
			int tmp = ::maps::ObjectFactory_obj::TILE_PLATFORM;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(111)
			int v = tmp;		HX_STACK_VAR(v,"v");
			HX_STACK_LINE(111)
			::haxe::ds::IntMap tmp1 = this->tileIndexTypes;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(111)
			int tmp2 = v;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(111)
			tmp1->set((int)63,tmp2);
			HX_STACK_LINE(111)
			v;
		}
		HX_STACK_LINE(112)
		{
			HX_STACK_LINE(112)
			int tmp = ::maps::ObjectFactory_obj::TILE_PLATFORM;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(112)
			int v = tmp;		HX_STACK_VAR(v,"v");
			HX_STACK_LINE(112)
			::haxe::ds::IntMap tmp1 = this->tileIndexTypes;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(112)
			int tmp2 = v;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(112)
			tmp1->set((int)64,tmp2);
			HX_STACK_LINE(112)
			v;
		}
		HX_STACK_LINE(113)
		{
			HX_STACK_LINE(113)
			int tmp = ::maps::ObjectFactory_obj::TILE_PLATFORM;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(113)
			int v = tmp;		HX_STACK_VAR(v,"v");
			HX_STACK_LINE(113)
			::haxe::ds::IntMap tmp1 = this->tileIndexTypes;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(113)
			int tmp2 = v;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(113)
			tmp1->set((int)76,tmp2);
			HX_STACK_LINE(113)
			v;
		}
		HX_STACK_LINE(114)
		{
			HX_STACK_LINE(114)
			int tmp = ::maps::ObjectFactory_obj::TILE_PLATFORM;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(114)
			int v = tmp;		HX_STACK_VAR(v,"v");
			HX_STACK_LINE(114)
			::haxe::ds::IntMap tmp1 = this->tileIndexTypes;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(114)
			int tmp2 = v;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(114)
			tmp1->set((int)77,tmp2);
			HX_STACK_LINE(114)
			v;
		}
		HX_STACK_LINE(115)
		{
			HX_STACK_LINE(115)
			int tmp = ::maps::ObjectFactory_obj::TILE_PLATFORM;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(115)
			int v = tmp;		HX_STACK_VAR(v,"v");
			HX_STACK_LINE(115)
			::haxe::ds::IntMap tmp1 = this->tileIndexTypes;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(115)
			int tmp2 = v;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(115)
			tmp1->set((int)78,tmp2);
			HX_STACK_LINE(115)
			v;
		}
		HX_STACK_LINE(116)
		{
			HX_STACK_LINE(116)
			int tmp = ::maps::ObjectFactory_obj::TILE_PLATFORM;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(116)
			int v = tmp;		HX_STACK_VAR(v,"v");
			HX_STACK_LINE(116)
			::haxe::ds::IntMap tmp1 = this->tileIndexTypes;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(116)
			int tmp2 = v;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(116)
			tmp1->set((int)79,tmp2);
			HX_STACK_LINE(116)
			v;
		}
		HX_STACK_LINE(117)
		{
			HX_STACK_LINE(117)
			int tmp = ::maps::ObjectFactory_obj::TILE_PLATFORM;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(117)
			int v = tmp;		HX_STACK_VAR(v,"v");
			HX_STACK_LINE(117)
			::haxe::ds::IntMap tmp1 = this->tileIndexTypes;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(117)
			int tmp2 = v;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(117)
			tmp1->set((int)65,tmp2);
			HX_STACK_LINE(117)
			v;
		}
		HX_STACK_LINE(118)
		{
			HX_STACK_LINE(118)
			int tmp = ::maps::ObjectFactory_obj::TILE_PLATFORM;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(118)
			int v = tmp;		HX_STACK_VAR(v,"v");
			HX_STACK_LINE(118)
			::haxe::ds::IntMap tmp1 = this->tileIndexTypes;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(118)
			int tmp2 = v;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(118)
			tmp1->set((int)66,tmp2);
			HX_STACK_LINE(118)
			v;
		}
		HX_STACK_LINE(119)
		{
			HX_STACK_LINE(119)
			int tmp = ::maps::ObjectFactory_obj::TILE_PLATFORM;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(119)
			int v = tmp;		HX_STACK_VAR(v,"v");
			HX_STACK_LINE(119)
			::haxe::ds::IntMap tmp1 = this->tileIndexTypes;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(119)
			int tmp2 = v;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(119)
			tmp1->set((int)80,tmp2);
			HX_STACK_LINE(119)
			v;
		}
		HX_STACK_LINE(121)
		{
			HX_STACK_LINE(121)
			int tmp = ::maps::ObjectFactory_obj::TILE_PLATFORM;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(121)
			int v = tmp;		HX_STACK_VAR(v,"v");
			HX_STACK_LINE(121)
			::haxe::ds::IntMap tmp1 = this->tileIndexTypes;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(121)
			int tmp2 = v;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(121)
			tmp1->set((int)34,tmp2);
			HX_STACK_LINE(121)
			v;
		}
		HX_STACK_LINE(122)
		{
			HX_STACK_LINE(122)
			int tmp = ::maps::ObjectFactory_obj::TILE_PLATFORM;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(122)
			int v = tmp;		HX_STACK_VAR(v,"v");
			HX_STACK_LINE(122)
			::haxe::ds::IntMap tmp1 = this->tileIndexTypes;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(122)
			int tmp2 = v;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(122)
			tmp1->set((int)49,tmp2);
			HX_STACK_LINE(122)
			v;
		}
		HX_STACK_LINE(124)
		{
			HX_STACK_LINE(124)
			int tmp = ::maps::ObjectFactory_obj::TILE_FATAL_DOWN;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(124)
			int v = tmp;		HX_STACK_VAR(v,"v");
			HX_STACK_LINE(124)
			::haxe::ds::IntMap tmp1 = this->tileIndexTypes;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(124)
			int tmp2 = v;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(124)
			tmp1->set((int)20,tmp2);
			HX_STACK_LINE(124)
			v;
		}
		HX_STACK_LINE(125)
		{
			HX_STACK_LINE(125)
			int tmp = ::maps::ObjectFactory_obj::TILE_FATAL_DOWN;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(125)
			int v = tmp;		HX_STACK_VAR(v,"v");
			HX_STACK_LINE(125)
			::haxe::ds::IntMap tmp1 = this->tileIndexTypes;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(125)
			int tmp2 = v;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(125)
			tmp1->set((int)21,tmp2);
			HX_STACK_LINE(125)
			v;
		}
		HX_STACK_LINE(126)
		{
			HX_STACK_LINE(126)
			int tmp = ::maps::ObjectFactory_obj::TILE_FATAL_DOWN;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(126)
			int v = tmp;		HX_STACK_VAR(v,"v");
			HX_STACK_LINE(126)
			::haxe::ds::IntMap tmp1 = this->tileIndexTypes;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(126)
			int tmp2 = v;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(126)
			tmp1->set((int)22,tmp2);
			HX_STACK_LINE(126)
			v;
		}
		HX_STACK_LINE(127)
		{
			HX_STACK_LINE(127)
			int tmp = ::maps::ObjectFactory_obj::TILE_FATAL_DOWN;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(127)
			int v = tmp;		HX_STACK_VAR(v,"v");
			HX_STACK_LINE(127)
			::haxe::ds::IntMap tmp1 = this->tileIndexTypes;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(127)
			int tmp2 = v;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(127)
			tmp1->set((int)23,tmp2);
			HX_STACK_LINE(127)
			v;
		}
		HX_STACK_LINE(128)
		{
			HX_STACK_LINE(128)
			int tmp = ::maps::ObjectFactory_obj::TILE_FATAL_UP;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(128)
			int v = tmp;		HX_STACK_VAR(v,"v");
			HX_STACK_LINE(128)
			::haxe::ds::IntMap tmp1 = this->tileIndexTypes;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(128)
			int tmp2 = v;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(128)
			tmp1->set((int)35,tmp2);
			HX_STACK_LINE(128)
			v;
		}
		HX_STACK_LINE(129)
		{
			HX_STACK_LINE(129)
			int tmp = ::maps::ObjectFactory_obj::TILE_FATAL_UP;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(129)
			int v = tmp;		HX_STACK_VAR(v,"v");
			HX_STACK_LINE(129)
			::haxe::ds::IntMap tmp1 = this->tileIndexTypes;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(129)
			int tmp2 = v;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(129)
			tmp1->set((int)36,tmp2);
			HX_STACK_LINE(129)
			v;
		}
		HX_STACK_LINE(130)
		{
			HX_STACK_LINE(130)
			int tmp = ::maps::ObjectFactory_obj::TILE_FATAL_UP;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(130)
			int v = tmp;		HX_STACK_VAR(v,"v");
			HX_STACK_LINE(130)
			::haxe::ds::IntMap tmp1 = this->tileIndexTypes;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(130)
			int tmp2 = v;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(130)
			tmp1->set((int)37,tmp2);
			HX_STACK_LINE(130)
			v;
		}
		HX_STACK_LINE(131)
		{
			HX_STACK_LINE(131)
			int tmp = ::maps::ObjectFactory_obj::TILE_FATAL_UP;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(131)
			int v = tmp;		HX_STACK_VAR(v,"v");
			HX_STACK_LINE(131)
			::haxe::ds::IntMap tmp1 = this->tileIndexTypes;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(131)
			int tmp2 = v;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(131)
			tmp1->set((int)38,tmp2);
			HX_STACK_LINE(131)
			v;
		}
		HX_STACK_LINE(133)
		{
			HX_STACK_LINE(133)
			int tmp = ::maps::ObjectFactory_obj::TILE_FATAL_LEFT;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(133)
			int v = tmp;		HX_STACK_VAR(v,"v");
			HX_STACK_LINE(133)
			::haxe::ds::IntMap tmp1 = this->tileIndexTypes;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(133)
			int tmp2 = v;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(133)
			tmp1->set((int)9,tmp2);
			HX_STACK_LINE(133)
			v;
		}
		HX_STACK_LINE(134)
		{
			HX_STACK_LINE(134)
			int tmp = ::maps::ObjectFactory_obj::TILE_FATAL_LEFT;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(134)
			int v = tmp;		HX_STACK_VAR(v,"v");
			HX_STACK_LINE(134)
			::haxe::ds::IntMap tmp1 = this->tileIndexTypes;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(134)
			int tmp2 = v;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(134)
			tmp1->set((int)24,tmp2);
			HX_STACK_LINE(134)
			v;
		}
		HX_STACK_LINE(135)
		{
			HX_STACK_LINE(135)
			int tmp = ::maps::ObjectFactory_obj::TILE_FATAL_LEFT;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(135)
			int v = tmp;		HX_STACK_VAR(v,"v");
			HX_STACK_LINE(135)
			::haxe::ds::IntMap tmp1 = this->tileIndexTypes;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(135)
			int tmp2 = v;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(135)
			tmp1->set((int)39,tmp2);
			HX_STACK_LINE(135)
			v;
		}
		HX_STACK_LINE(136)
		{
			HX_STACK_LINE(136)
			int tmp = ::maps::ObjectFactory_obj::TILE_FATAL_LEFT;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(136)
			int v = tmp;		HX_STACK_VAR(v,"v");
			HX_STACK_LINE(136)
			::haxe::ds::IntMap tmp1 = this->tileIndexTypes;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(136)
			int tmp2 = v;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(136)
			tmp1->set((int)54,tmp2);
			HX_STACK_LINE(136)
			v;
		}
		HX_STACK_LINE(137)
		{
			HX_STACK_LINE(137)
			int tmp = ::maps::ObjectFactory_obj::TILE_FATAL_RIGHT;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(137)
			int v = tmp;		HX_STACK_VAR(v,"v");
			HX_STACK_LINE(137)
			::haxe::ds::IntMap tmp1 = this->tileIndexTypes;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(137)
			int tmp2 = v;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(137)
			tmp1->set((int)10,tmp2);
			HX_STACK_LINE(137)
			v;
		}
		HX_STACK_LINE(138)
		{
			HX_STACK_LINE(138)
			int tmp = ::maps::ObjectFactory_obj::TILE_FATAL_RIGHT;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(138)
			int v = tmp;		HX_STACK_VAR(v,"v");
			HX_STACK_LINE(138)
			::haxe::ds::IntMap tmp1 = this->tileIndexTypes;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(138)
			int tmp2 = v;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(138)
			tmp1->set((int)25,tmp2);
			HX_STACK_LINE(138)
			v;
		}
		HX_STACK_LINE(139)
		{
			HX_STACK_LINE(139)
			int tmp = ::maps::ObjectFactory_obj::TILE_FATAL_RIGHT;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(139)
			int v = tmp;		HX_STACK_VAR(v,"v");
			HX_STACK_LINE(139)
			::haxe::ds::IntMap tmp1 = this->tileIndexTypes;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(139)
			int tmp2 = v;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(139)
			tmp1->set((int)40,tmp2);
			HX_STACK_LINE(139)
			v;
		}
		HX_STACK_LINE(140)
		{
			HX_STACK_LINE(140)
			int tmp = ::maps::ObjectFactory_obj::TILE_FATAL_RIGHT;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(140)
			int v = tmp;		HX_STACK_VAR(v,"v");
			HX_STACK_LINE(140)
			::haxe::ds::IntMap tmp1 = this->tileIndexTypes;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(140)
			int tmp2 = v;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(140)
			tmp1->set((int)55,tmp2);
			HX_STACK_LINE(140)
			v;
		}
		HX_STACK_LINE(142)
		{
			HX_STACK_LINE(142)
			int tmp = ::maps::ObjectFactory_obj::TILE_BACKGROUND;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(142)
			int v = tmp;		HX_STACK_VAR(v,"v");
			HX_STACK_LINE(142)
			::haxe::ds::IntMap tmp1 = this->tileIndexTypes;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(142)
			int tmp2 = v;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(142)
			tmp1->set((int)11,tmp2);
			HX_STACK_LINE(142)
			v;
		}
		HX_STACK_LINE(143)
		{
			HX_STACK_LINE(143)
			int tmp = ::maps::ObjectFactory_obj::TILE_BACKGROUND;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(143)
			int v = tmp;		HX_STACK_VAR(v,"v");
			HX_STACK_LINE(143)
			::haxe::ds::IntMap tmp1 = this->tileIndexTypes;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(143)
			int tmp2 = v;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(143)
			tmp1->set((int)12,tmp2);
			HX_STACK_LINE(143)
			v;
		}
		HX_STACK_LINE(144)
		{
			HX_STACK_LINE(144)
			int tmp = ::maps::ObjectFactory_obj::TILE_BACKGROUND;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(144)
			int v = tmp;		HX_STACK_VAR(v,"v");
			HX_STACK_LINE(144)
			::haxe::ds::IntMap tmp1 = this->tileIndexTypes;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(144)
			int tmp2 = v;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(144)
			tmp1->set((int)13,tmp2);
			HX_STACK_LINE(144)
			v;
		}
		HX_STACK_LINE(145)
		{
			HX_STACK_LINE(145)
			int tmp = ::maps::ObjectFactory_obj::TILE_BACKGROUND;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(145)
			int v = tmp;		HX_STACK_VAR(v,"v");
			HX_STACK_LINE(145)
			::haxe::ds::IntMap tmp1 = this->tileIndexTypes;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(145)
			int tmp2 = v;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(145)
			tmp1->set((int)14,tmp2);
			HX_STACK_LINE(145)
			v;
		}
		HX_STACK_LINE(146)
		{
			HX_STACK_LINE(146)
			int tmp = ::maps::ObjectFactory_obj::TILE_BACKGROUND;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(146)
			int v = tmp;		HX_STACK_VAR(v,"v");
			HX_STACK_LINE(146)
			::haxe::ds::IntMap tmp1 = this->tileIndexTypes;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(146)
			int tmp2 = v;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(146)
			tmp1->set((int)26,tmp2);
			HX_STACK_LINE(146)
			v;
		}
		HX_STACK_LINE(147)
		{
			HX_STACK_LINE(147)
			int tmp = ::maps::ObjectFactory_obj::TILE_BACKGROUND;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(147)
			int v = tmp;		HX_STACK_VAR(v,"v");
			HX_STACK_LINE(147)
			::haxe::ds::IntMap tmp1 = this->tileIndexTypes;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(147)
			int tmp2 = v;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(147)
			tmp1->set((int)27,tmp2);
			HX_STACK_LINE(147)
			v;
		}
		HX_STACK_LINE(148)
		{
			HX_STACK_LINE(148)
			int tmp = ::maps::ObjectFactory_obj::TILE_BACKGROUND;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(148)
			int v = tmp;		HX_STACK_VAR(v,"v");
			HX_STACK_LINE(148)
			::haxe::ds::IntMap tmp1 = this->tileIndexTypes;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(148)
			int tmp2 = v;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(148)
			tmp1->set((int)28,tmp2);
			HX_STACK_LINE(148)
			v;
		}
		HX_STACK_LINE(149)
		{
			HX_STACK_LINE(149)
			int tmp = ::maps::ObjectFactory_obj::TILE_BACKGROUND;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(149)
			int v = tmp;		HX_STACK_VAR(v,"v");
			HX_STACK_LINE(149)
			::haxe::ds::IntMap tmp1 = this->tileIndexTypes;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(149)
			int tmp2 = v;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(149)
			tmp1->set((int)29,tmp2);
			HX_STACK_LINE(149)
			v;
		}
		HX_STACK_LINE(150)
		{
			HX_STACK_LINE(150)
			int tmp = ::maps::ObjectFactory_obj::TILE_BACKGROUND;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(150)
			int v = tmp;		HX_STACK_VAR(v,"v");
			HX_STACK_LINE(150)
			::haxe::ds::IntMap tmp1 = this->tileIndexTypes;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(150)
			int tmp2 = v;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(150)
			tmp1->set((int)41,tmp2);
			HX_STACK_LINE(150)
			v;
		}
		HX_STACK_LINE(151)
		{
			HX_STACK_LINE(151)
			int tmp = ::maps::ObjectFactory_obj::TILE_BACKGROUND;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(151)
			int v = tmp;		HX_STACK_VAR(v,"v");
			HX_STACK_LINE(151)
			::haxe::ds::IntMap tmp1 = this->tileIndexTypes;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(151)
			int tmp2 = v;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(151)
			tmp1->set((int)42,tmp2);
			HX_STACK_LINE(151)
			v;
		}
		HX_STACK_LINE(152)
		{
			HX_STACK_LINE(152)
			int tmp = ::maps::ObjectFactory_obj::TILE_BACKGROUND;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(152)
			int v = tmp;		HX_STACK_VAR(v,"v");
			HX_STACK_LINE(152)
			::haxe::ds::IntMap tmp1 = this->tileIndexTypes;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(152)
			int tmp2 = v;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(152)
			tmp1->set((int)43,tmp2);
			HX_STACK_LINE(152)
			v;
		}
		HX_STACK_LINE(153)
		{
			HX_STACK_LINE(153)
			int tmp = ::maps::ObjectFactory_obj::TILE_BACKGROUND;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(153)
			int v = tmp;		HX_STACK_VAR(v,"v");
			HX_STACK_LINE(153)
			::haxe::ds::IntMap tmp1 = this->tileIndexTypes;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(153)
			int tmp2 = v;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(153)
			tmp1->set((int)44,tmp2);
			HX_STACK_LINE(153)
			v;
		}
		HX_STACK_LINE(154)
		{
			HX_STACK_LINE(154)
			int tmp = ::maps::ObjectFactory_obj::TILE_BACKGROUND;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(154)
			int v = tmp;		HX_STACK_VAR(v,"v");
			HX_STACK_LINE(154)
			::haxe::ds::IntMap tmp1 = this->tileIndexTypes;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(154)
			int tmp2 = v;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(154)
			tmp1->set((int)56,tmp2);
			HX_STACK_LINE(154)
			v;
		}
		HX_STACK_LINE(155)
		{
			HX_STACK_LINE(155)
			int tmp = ::maps::ObjectFactory_obj::TILE_BACKGROUND;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(155)
			int v = tmp;		HX_STACK_VAR(v,"v");
			HX_STACK_LINE(155)
			::haxe::ds::IntMap tmp1 = this->tileIndexTypes;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(155)
			int tmp2 = v;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(155)
			tmp1->set((int)57,tmp2);
			HX_STACK_LINE(155)
			v;
		}
		HX_STACK_LINE(156)
		{
			HX_STACK_LINE(156)
			int tmp = ::maps::ObjectFactory_obj::TILE_BACKGROUND;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(156)
			int v = tmp;		HX_STACK_VAR(v,"v");
			HX_STACK_LINE(156)
			::haxe::ds::IntMap tmp1 = this->tileIndexTypes;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(156)
			int tmp2 = v;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(156)
			tmp1->set((int)58,tmp2);
			HX_STACK_LINE(156)
			v;
		}
		HX_STACK_LINE(157)
		{
			HX_STACK_LINE(157)
			int tmp = ::maps::ObjectFactory_obj::TILE_BACKGROUND;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(157)
			int v = tmp;		HX_STACK_VAR(v,"v");
			HX_STACK_LINE(157)
			::haxe::ds::IntMap tmp1 = this->tileIndexTypes;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(157)
			int tmp2 = v;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(157)
			tmp1->set((int)71,tmp2);
			HX_STACK_LINE(157)
			v;
		}
		HX_STACK_LINE(158)
		{
			HX_STACK_LINE(158)
			int tmp = ::maps::ObjectFactory_obj::TILE_BACKGROUND;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(158)
			int v = tmp;		HX_STACK_VAR(v,"v");
			HX_STACK_LINE(158)
			::haxe::ds::IntMap tmp1 = this->tileIndexTypes;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(158)
			int tmp2 = v;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(158)
			tmp1->set((int)72,tmp2);
			HX_STACK_LINE(158)
			v;
		}
		HX_STACK_LINE(159)
		{
			HX_STACK_LINE(159)
			int tmp = ::maps::ObjectFactory_obj::TILE_BACKGROUND;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(159)
			int v = tmp;		HX_STACK_VAR(v,"v");
			HX_STACK_LINE(159)
			::haxe::ds::IntMap tmp1 = this->tileIndexTypes;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(159)
			int tmp2 = v;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(159)
			tmp1->set((int)73,tmp2);
			HX_STACK_LINE(159)
			v;
		}
		HX_STACK_LINE(160)
		{
			HX_STACK_LINE(160)
			int tmp = ::maps::ObjectFactory_obj::TILE_BACKGROUND;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(160)
			int v = tmp;		HX_STACK_VAR(v,"v");
			HX_STACK_LINE(160)
			::haxe::ds::IntMap tmp1 = this->tileIndexTypes;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(160)
			int tmp2 = v;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(160)
			tmp1->set((int)86,tmp2);
			HX_STACK_LINE(160)
			v;
		}
		HX_STACK_LINE(161)
		{
			HX_STACK_LINE(161)
			int tmp = ::maps::ObjectFactory_obj::TILE_BACKGROUND;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(161)
			int v = tmp;		HX_STACK_VAR(v,"v");
			HX_STACK_LINE(161)
			::haxe::ds::IntMap tmp1 = this->tileIndexTypes;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(161)
			int tmp2 = v;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(161)
			tmp1->set((int)87,tmp2);
			HX_STACK_LINE(161)
			v;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ObjectFactory_obj,assignTileIndexTypes,(void))

int ObjectFactory_obj::getIndexType( hx::Null< int >  __o_tileIndex){
int tileIndex = __o_tileIndex.Default(0);
	HX_STACK_FRAME("maps.ObjectFactory","getIndexType",0xa2d7d0d0,"maps.ObjectFactory.getIndexType","maps/ObjectFactory.hx",164,0xb5ae61eb)
	HX_STACK_THIS(this)
	HX_STACK_ARG(tileIndex,"tileIndex")
{
		HX_STACK_LINE(166)
		hx::SubEq(tileIndex,(int)1);
		HX_STACK_LINE(168)
		::haxe::ds::IntMap tmp = this->tileIndexTypes;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(168)
		int tmp1 = tileIndex;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(168)
		bool tmp2 = tmp->exists(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(168)
		if ((tmp2)){
			HX_STACK_LINE(169)
			::haxe::ds::IntMap tmp3 = this->tileIndexTypes;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(169)
			int tmp4 = tileIndex;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(169)
			Dynamic tmp5 = tmp3->get(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(169)
			Dynamic tmp6 = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(169)
			return tmp6;
		}
		else{
			HX_STACK_LINE(171)
			return (int)-1;
		}
		HX_STACK_LINE(168)
		return (int)0;
	}
}


HX_DEFINE_DYNAMIC_FUNC1(ObjectFactory_obj,getIndexType,return )

Void ObjectFactory_obj::changeTileSheet( ::openfl::display::Bitmap newSet){
{
		HX_STACK_FRAME("maps.ObjectFactory","changeTileSheet",0xdfa42be7,"maps.ObjectFactory.changeTileSheet","maps/ObjectFactory.hx",174,0xb5ae61eb)
		HX_STACK_THIS(this)
		HX_STACK_ARG(newSet,"newSet")
		HX_STACK_LINE(175)
		bool tmp = (newSet->bitmapData != null());		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(175)
		if ((tmp)){
			HX_STACK_LINE(176)
			this->tileSheet = newSet;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ObjectFactory_obj,changeTileSheet,(void))

bool ObjectFactory_obj::isObjectTile( int index){
	HX_STACK_FRAME("maps.ObjectFactory","isObjectTile",0x2bbef371,"maps.ObjectFactory.isObjectTile","maps/ObjectFactory.hx",181,0xb5ae61eb)
	HX_STACK_THIS(this)
	HX_STACK_ARG(index,"index")
	HX_STACK_LINE(182)
	int tmp = index;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(182)
	int tmp1 = this->getIndexType(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(182)
	int indexType = tmp1;		HX_STACK_VAR(indexType,"indexType");
	HX_STACK_LINE(184)
	int tmp2 = indexType;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(184)
	int tmp3 = ::maps::ObjectFactory_obj::tileTypes->indexOf(tmp2,null());		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(184)
	bool tmp4 = (tmp3 >= (int)0);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(184)
	if ((tmp4)){
		HX_STACK_LINE(185)
		return true;
	}
	HX_STACK_LINE(186)
	return false;
}


HX_DEFINE_DYNAMIC_FUNC1(ObjectFactory_obj,isObjectTile,return )

bool ObjectFactory_obj::isObjectCheckpoint( int index){
	HX_STACK_FRAME("maps.ObjectFactory","isObjectCheckpoint",0xdc40830b,"maps.ObjectFactory.isObjectCheckpoint","maps/ObjectFactory.hx",188,0xb5ae61eb)
	HX_STACK_THIS(this)
	HX_STACK_ARG(index,"index")
	HX_STACK_LINE(189)
	int tmp = index;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(189)
	int tmp1 = this->getIndexType(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(189)
	int indexType = tmp1;		HX_STACK_VAR(indexType,"indexType");
	HX_STACK_LINE(191)
	int tmp2 = indexType;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(191)
	int tmp3 = ::maps::ObjectFactory_obj::TILE_CHECKPOINT;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(191)
	bool tmp4 = (tmp2 == tmp3);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(191)
	if ((tmp4)){
		HX_STACK_LINE(192)
		return true;
	}
	HX_STACK_LINE(193)
	return false;
}


HX_DEFINE_DYNAMIC_FUNC1(ObjectFactory_obj,isObjectCheckpoint,return )

bool ObjectFactory_obj::isMapStart( int index){
	HX_STACK_FRAME("maps.ObjectFactory","isMapStart",0x9d9e950a,"maps.ObjectFactory.isMapStart","maps/ObjectFactory.hx",195,0xb5ae61eb)
	HX_STACK_THIS(this)
	HX_STACK_ARG(index,"index")
	HX_STACK_LINE(196)
	int tmp = index;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(196)
	int tmp1 = this->getIndexType(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(196)
	int indexType = tmp1;		HX_STACK_VAR(indexType,"indexType");
	HX_STACK_LINE(198)
	int tmp2 = indexType;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(198)
	int tmp3 = ::maps::ObjectFactory_obj::TILE_STARTPOINT;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(198)
	bool tmp4 = (tmp2 == tmp3);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(198)
	if ((tmp4)){
		HX_STACK_LINE(199)
		return true;
	}
	HX_STACK_LINE(200)
	return false;
}


HX_DEFINE_DYNAMIC_FUNC1(ObjectFactory_obj,isMapStart,return )

bool ObjectFactory_obj::isMapEnd( int index){
	HX_STACK_FRAME("maps.ObjectFactory","isMapEnd",0xd10b2a83,"maps.ObjectFactory.isMapEnd","maps/ObjectFactory.hx",202,0xb5ae61eb)
	HX_STACK_THIS(this)
	HX_STACK_ARG(index,"index")
	HX_STACK_LINE(203)
	int tmp = index;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(203)
	int tmp1 = this->getIndexType(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(203)
	int indexType = tmp1;		HX_STACK_VAR(indexType,"indexType");
	HX_STACK_LINE(205)
	int tmp2 = indexType;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(205)
	int tmp3 = ::maps::ObjectFactory_obj::TILE_ENDPOINT;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(205)
	bool tmp4 = (tmp2 == tmp3);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(205)
	if ((tmp4)){
		HX_STACK_LINE(206)
		return true;
	}
	HX_STACK_LINE(207)
	return false;
}


HX_DEFINE_DYNAMIC_FUNC1(ObjectFactory_obj,isMapEnd,return )

bool ObjectFactory_obj::isObjectSpawnPoint( int index){
	HX_STACK_FRAME("maps.ObjectFactory","isObjectSpawnPoint",0x99964c98,"maps.ObjectFactory.isObjectSpawnPoint","maps/ObjectFactory.hx",209,0xb5ae61eb)
	HX_STACK_THIS(this)
	HX_STACK_ARG(index,"index")
	HX_STACK_LINE(210)
	int tmp = index;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(210)
	int tmp1 = this->getIndexType(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(210)
	int indexType = tmp1;		HX_STACK_VAR(indexType,"indexType");
	HX_STACK_LINE(212)
	int tmp2 = indexType;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(212)
	int tmp3 = ::maps::ObjectFactory_obj::spawnTypes->indexOf(tmp2,null());		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(212)
	bool tmp4 = (tmp3 >= (int)0);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(212)
	if ((tmp4)){
		HX_STACK_LINE(213)
		return true;
	}
	HX_STACK_LINE(214)
	return false;
}


HX_DEFINE_DYNAMIC_FUNC1(ObjectFactory_obj,isObjectSpawnPoint,return )

bool ObjectFactory_obj::isObjectAIPathWall( int index){
	HX_STACK_FRAME("maps.ObjectFactory","isObjectAIPathWall",0xba3ffaba,"maps.ObjectFactory.isObjectAIPathWall","maps/ObjectFactory.hx",216,0xb5ae61eb)
	HX_STACK_THIS(this)
	HX_STACK_ARG(index,"index")
	HX_STACK_LINE(217)
	int tmp = index;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(217)
	int tmp1 = this->getIndexType(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(217)
	int indexType = tmp1;		HX_STACK_VAR(indexType,"indexType");
	HX_STACK_LINE(219)
	int tmp2 = indexType;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(219)
	int tmp3 = ::maps::ObjectFactory_obj::TILE_AIPATHWALL;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(219)
	bool tmp4 = (tmp2 == tmp3);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(219)
	if ((tmp4)){
		HX_STACK_LINE(220)
		return true;
	}
	HX_STACK_LINE(221)
	return false;
}


HX_DEFINE_DYNAMIC_FUNC1(ObjectFactory_obj,isObjectAIPathWall,return )

::maps::mapobjects::Checkpoint ObjectFactory_obj::createCheckpoint( int index){
	HX_STACK_FRAME("maps.ObjectFactory","createCheckpoint",0x377302fe,"maps.ObjectFactory.createCheckpoint","maps/ObjectFactory.hx",224,0xb5ae61eb)
	HX_STACK_THIS(this)
	HX_STACK_ARG(index,"index")
	HX_STACK_LINE(225)
	int tmp = index;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(225)
	int tmp1 = this->getIndexType(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(225)
	int indexType = tmp1;		HX_STACK_VAR(indexType,"indexType");
	HX_STACK_LINE(227)
	::openfl::display::Bitmap tmp2 = ::Main_obj::getBitmapAsset(HX_HCSTRING("assets/checkpoint.png","\x0f","\x6f","\xee","\x50"));		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(227)
	::openfl::display::Bitmap checkpointBmp = tmp2;		HX_STACK_VAR(checkpointBmp,"checkpointBmp");
	HX_STACK_LINE(228)
	::maps::mapobjects::Checkpoint tmp3 = ::maps::mapobjects::Checkpoint_obj::__new(false,checkpointBmp);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(228)
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC1(ObjectFactory_obj,createCheckpoint,return )

::maps::mapobjects::Portal ObjectFactory_obj::createPortal( int index,::String endMap){
	HX_STACK_FRAME("maps.ObjectFactory","createPortal",0xa9e54422,"maps.ObjectFactory.createPortal","maps/ObjectFactory.hx",230,0xb5ae61eb)
	HX_STACK_THIS(this)
	HX_STACK_ARG(index,"index")
	HX_STACK_ARG(endMap,"endMap")
	HX_STACK_LINE(231)
	::openfl::display::Bitmap tmp = ::Main_obj::getBitmapAsset(HX_HCSTRING("assets/Door.png","\x15","\x80","\xfe","\x0a"));		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(231)
	::openfl::display::Bitmap portalBmp = tmp;		HX_STACK_VAR(portalBmp,"portalBmp");
	HX_STACK_LINE(233)
	::maps::mapobjects::Portal tmp1 = ::maps::mapobjects::Portal_obj::__new(portalBmp,endMap);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(233)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC2(ObjectFactory_obj,createPortal,return )

::maps::mapobjects::SpawnPoint ObjectFactory_obj::createSpawnPoint( int index){
	HX_STACK_FRAME("maps.ObjectFactory","createSpawnPoint",0xf4c8cc8b,"maps.ObjectFactory.createSpawnPoint","maps/ObjectFactory.hx",235,0xb5ae61eb)
	HX_STACK_THIS(this)
	HX_STACK_ARG(index,"index")
	HX_STACK_LINE(236)
	int tmp = index;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(236)
	int tmp1 = this->getIndexType(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(236)
	int indexType = tmp1;		HX_STACK_VAR(indexType,"indexType");
	HX_STACK_LINE(237)
	::openfl::display::Bitmap tmp2 = ::Main_obj::getBitmapAsset(HX_HCSTRING("assets/portal.png","\x33","\xef","\x8f","\x9f"));		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(237)
	::openfl::display::Bitmap spawnBmp = tmp2;		HX_STACK_VAR(spawnBmp,"spawnBmp");
	HX_STACK_LINE(239)
	int tmp3 = indexType;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(239)
	int tmp4 = ::maps::ObjectFactory_obj::TILE_SPAWNPOINT_WALKING;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(239)
	bool tmp5 = (tmp3 == tmp4);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(239)
	if ((tmp5)){
		HX_STACK_LINE(240)
		::openfl::display::Bitmap tmp6 = spawnBmp;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(240)
		::actors::enemies::WalkingEnemy tmp7 = ::actors::enemies::WalkingEnemy_obj::__new(null());		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(240)
		::maps::mapobjects::SpawnPoint tmp8 = ::maps::mapobjects::SpawnPoint_obj::__new(tmp6,tmp7,(int)1,(int)60,(int)60,(int)1);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(240)
		return tmp8;
	}
	else{
		HX_STACK_LINE(241)
		int tmp6 = indexType;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(241)
		int tmp7 = ::maps::ObjectFactory_obj::TILE_SPAWNPOINT_DASH;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(241)
		bool tmp8 = (tmp6 == tmp7);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(241)
		if ((tmp8)){
			HX_STACK_LINE(242)
			::openfl::display::Bitmap tmp9 = spawnBmp;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(242)
			::actors::enemies::DashEnemy tmp10 = ::actors::enemies::DashEnemy_obj::__new(null());		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(242)
			::maps::mapobjects::SpawnPoint tmp11 = ::maps::mapobjects::SpawnPoint_obj::__new(tmp9,tmp10,(int)1,(int)60,(int)60,(int)1);		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(242)
			return tmp11;
		}
		else{
			HX_STACK_LINE(243)
			int tmp9 = indexType;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(243)
			int tmp10 = ::maps::ObjectFactory_obj::TILE_SPAWNPOINT_LAUNCH;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(243)
			bool tmp11 = (tmp9 == tmp10);		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(243)
			if ((tmp11)){
				HX_STACK_LINE(244)
				::openfl::display::Bitmap tmp12 = spawnBmp;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(244)
				::actors::enemies::LaunchEnemy tmp13 = ::actors::enemies::LaunchEnemy_obj::__new(null());		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(244)
				::maps::mapobjects::SpawnPoint tmp14 = ::maps::mapobjects::SpawnPoint_obj::__new(tmp12,tmp13,(int)1,(int)60,(int)60,(int)1);		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(244)
				return tmp14;
			}
			else{
				HX_STACK_LINE(245)
				int tmp12 = indexType;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(245)
				int tmp13 = ::maps::ObjectFactory_obj::TILE_SPAWNPOINT_PROJECTILE;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(245)
				bool tmp14 = (tmp12 == tmp13);		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(245)
				if ((tmp14)){
					HX_STACK_LINE(246)
					::openfl::display::Bitmap tmp15 = spawnBmp;		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(246)
					::actors::enemies::ProjectileEnemy tmp16 = ::actors::enemies::ProjectileEnemy_obj::__new(null());		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(246)
					::maps::mapobjects::SpawnPoint tmp17 = ::maps::mapobjects::SpawnPoint_obj::__new(tmp15,tmp16,(int)1,(int)60,(int)60,(int)1);		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(246)
					return tmp17;
				}
				else{
					HX_STACK_LINE(247)
					int tmp15 = indexType;		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(247)
					int tmp16 = ::maps::ObjectFactory_obj::TILE_SPAWNPOINT_FLYING_HOR;		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(247)
					bool tmp17 = (tmp15 == tmp16);		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(247)
					if ((tmp17)){
						HX_STACK_LINE(248)
						::openfl::display::Bitmap tmp18 = spawnBmp;		HX_STACK_VAR(tmp18,"tmp18");
						HX_STACK_LINE(248)
						::actors::enemies::FlyingEnemy tmp19 = ::actors::enemies::FlyingEnemy_obj::__new(null(),true);		HX_STACK_VAR(tmp19,"tmp19");
						HX_STACK_LINE(248)
						::maps::mapobjects::SpawnPoint tmp20 = ::maps::mapobjects::SpawnPoint_obj::__new(tmp18,tmp19,(int)1,(int)60,(int)60,(int)1);		HX_STACK_VAR(tmp20,"tmp20");
						HX_STACK_LINE(248)
						return tmp20;
					}
					else{
						HX_STACK_LINE(249)
						int tmp18 = indexType;		HX_STACK_VAR(tmp18,"tmp18");
						HX_STACK_LINE(249)
						int tmp19 = ::maps::ObjectFactory_obj::TILE_SPAWNPOINT_FLYING_VER;		HX_STACK_VAR(tmp19,"tmp19");
						HX_STACK_LINE(249)
						bool tmp20 = (tmp18 == tmp19);		HX_STACK_VAR(tmp20,"tmp20");
						HX_STACK_LINE(249)
						if ((tmp20)){
							HX_STACK_LINE(250)
							::openfl::display::Bitmap tmp21 = spawnBmp;		HX_STACK_VAR(tmp21,"tmp21");
							HX_STACK_LINE(250)
							::actors::enemies::FlyingEnemy tmp22 = ::actors::enemies::FlyingEnemy_obj::__new(null(),false);		HX_STACK_VAR(tmp22,"tmp22");
							HX_STACK_LINE(250)
							::maps::mapobjects::SpawnPoint tmp23 = ::maps::mapobjects::SpawnPoint_obj::__new(tmp21,tmp22,(int)1,(int)60,(int)60,(int)1);		HX_STACK_VAR(tmp23,"tmp23");
							HX_STACK_LINE(250)
							return tmp23;
						}
						else{
							HX_STACK_LINE(251)
							int tmp21 = indexType;		HX_STACK_VAR(tmp21,"tmp21");
							HX_STACK_LINE(251)
							int tmp22 = ::maps::ObjectFactory_obj::TILE_SPAWNPOINT_RUNNING;		HX_STACK_VAR(tmp22,"tmp22");
							HX_STACK_LINE(251)
							bool tmp23 = (tmp21 == tmp22);		HX_STACK_VAR(tmp23,"tmp23");
							HX_STACK_LINE(251)
							if ((tmp23)){
								HX_STACK_LINE(252)
								::openfl::display::Bitmap tmp24 = spawnBmp;		HX_STACK_VAR(tmp24,"tmp24");
								HX_STACK_LINE(252)
								::actors::enemies::RunningEnemy tmp25 = ::actors::enemies::RunningEnemy_obj::__new(null());		HX_STACK_VAR(tmp25,"tmp25");
								HX_STACK_LINE(252)
								::maps::mapobjects::SpawnPoint tmp26 = ::maps::mapobjects::SpawnPoint_obj::__new(tmp24,tmp25,(int)1,(int)60,(int)60,(int)1);		HX_STACK_VAR(tmp26,"tmp26");
								HX_STACK_LINE(252)
								return tmp26;
							}
							else{
								HX_STACK_LINE(255)
								::openfl::display::Bitmap tmp24 = spawnBmp;		HX_STACK_VAR(tmp24,"tmp24");
								HX_STACK_LINE(255)
								::actors::enemies::WalkingEnemy tmp25 = ::actors::enemies::WalkingEnemy_obj::__new(null());		HX_STACK_VAR(tmp25,"tmp25");
								HX_STACK_LINE(255)
								::maps::mapobjects::SpawnPoint tmp26 = ::maps::mapobjects::SpawnPoint_obj::__new(tmp24,tmp25,null(),null(),null(),null());		HX_STACK_VAR(tmp26,"tmp26");
								HX_STACK_LINE(255)
								return tmp26;
							}
						}
					}
				}
			}
		}
	}
	HX_STACK_LINE(239)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ObjectFactory_obj,createSpawnPoint,return )

::maps::mapobjects::AIPathWall ObjectFactory_obj::createAIPathWall( int index){
	HX_STACK_FRAME("maps.ObjectFactory","createAIPathWall",0x15727aad,"maps.ObjectFactory.createAIPathWall","maps/ObjectFactory.hx",257,0xb5ae61eb)
	HX_STACK_THIS(this)
	HX_STACK_ARG(index,"index")
	HX_STACK_LINE(258)
	::openfl::display::Bitmap tmp = ::Main_obj::getBitmapAsset(HX_HCSTRING("assets/portal.png","\x33","\xef","\x8f","\x9f"));		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(258)
	::openfl::display::Bitmap pathBmp = tmp;		HX_STACK_VAR(pathBmp,"pathBmp");
	HX_STACK_LINE(259)
	::maps::mapobjects::AIPathWall tmp1 = ::maps::mapobjects::AIPathWall_obj::__new(pathBmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(259)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC1(ObjectFactory_obj,createAIPathWall,return )

::maps::mapobjects::Tile ObjectFactory_obj::createTile( int tileIndex){
	HX_STACK_FRAME("maps.ObjectFactory","createTile",0x872c2b24,"maps.ObjectFactory.createTile","maps/ObjectFactory.hx",261,0xb5ae61eb)
	HX_STACK_THIS(this)
	HX_STACK_ARG(tileIndex,"tileIndex")
	HX_STACK_LINE(263)
	int tmp = tileIndex;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(263)
	int tmp1 = this->getIndexType(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(263)
	int indexType = tmp1;		HX_STACK_VAR(indexType,"indexType");
	HX_STACK_LINE(265)
	int tmp2 = indexType;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(265)
	int tmp3 = ::maps::ObjectFactory_obj::TILE_PLATFORM;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(265)
	bool tmp4 = (tmp2 == tmp3);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(265)
	if ((tmp4)){
		HX_STACK_LINE(266)
		int tmp5 = tileIndex;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(266)
		int tmp6 = indexType;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(266)
		::maps::mapobjects::Tile tmp7 = this->createPlatformTile(tmp5,tmp6);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(266)
		return tmp7;
	}
	else{
		HX_STACK_LINE(268)
		int tmp5 = indexType;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(268)
		int tmp6 = ::maps::ObjectFactory_obj::fatalTypes->indexOf(tmp5,null());		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(268)
		bool tmp7 = (tmp6 >= (int)0);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(268)
		if ((tmp7)){
			HX_STACK_LINE(269)
			int tmp8 = tileIndex;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(269)
			int tmp9 = indexType;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(269)
			::maps::mapobjects::Tile tmp10 = this->createSpikeTile(tmp8,tmp9);		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(269)
			return tmp10;
		}
		else{
			HX_STACK_LINE(271)
			int tmp8 = indexType;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(271)
			int tmp9 = ::maps::ObjectFactory_obj::TILE_BACKGROUND;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(271)
			bool tmp10 = (tmp8 == tmp9);		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(271)
			if ((tmp10)){
				HX_STACK_LINE(272)
				int tmp11 = tileIndex;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(272)
				int tmp12 = indexType;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(272)
				::maps::mapobjects::Tile tmp13 = this->createBGTile(tmp11,tmp12);		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(272)
				return tmp13;
			}
		}
	}
	HX_STACK_LINE(274)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ObjectFactory_obj,createTile,return )

::maps::mapobjects::Tile ObjectFactory_obj::createPlatformTile( int tileIndex,int indexType){
	HX_STACK_FRAME("maps.ObjectFactory","createPlatformTile",0xbf6bc577,"maps.ObjectFactory.createPlatformTile","maps/ObjectFactory.hx",277,0xb5ae61eb)
	HX_STACK_THIS(this)
	HX_STACK_ARG(tileIndex,"tileIndex")
	HX_STACK_ARG(indexType,"indexType")
	HX_STACK_LINE(279)
	int tmp = tileIndex;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(279)
	::openfl::display::Bitmap tmp1 = this->getTileBitmap(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(279)
	::maps::mapobjects::Tile tmp2 = ::maps::mapobjects::Tile_obj::__new(tmp1,true,Array_obj< int >::__new().Add((int)0).Add((int)0).Add((int)0).Add((int)0));		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(279)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC2(ObjectFactory_obj,createPlatformTile,return )

::maps::mapobjects::Tile ObjectFactory_obj::createSpikeTile( int tileIndex,int indexType){
	HX_STACK_FRAME("maps.ObjectFactory","createSpikeTile",0xbcd2fc5e,"maps.ObjectFactory.createSpikeTile","maps/ObjectFactory.hx",281,0xb5ae61eb)
	HX_STACK_THIS(this)
	HX_STACK_ARG(tileIndex,"tileIndex")
	HX_STACK_ARG(indexType,"indexType")
	HX_STACK_LINE(283)
	Array< int > fatalDirections = Array_obj< int >::__new().Add((int)0).Add((int)0).Add((int)0).Add((int)0);		HX_STACK_VAR(fatalDirections,"fatalDirections");
	HX_STACK_LINE(284)
	int tmp = indexType;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(284)
	int tmp1 = ::maps::ObjectFactory_obj::TILE_FATAL_LEFT;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(284)
	bool tmp2 = (tmp == tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(284)
	if ((tmp2)){
		HX_STACK_LINE(284)
		fatalDirections[(int)0] = (int)1;
	}
	else{
		HX_STACK_LINE(285)
		int tmp3 = indexType;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(285)
		int tmp4 = ::maps::ObjectFactory_obj::TILE_FATAL_RIGHT;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(285)
		bool tmp5 = (tmp3 == tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(285)
		if ((tmp5)){
			HX_STACK_LINE(285)
			fatalDirections[(int)1] = (int)1;
		}
		else{
			HX_STACK_LINE(286)
			int tmp6 = indexType;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(286)
			int tmp7 = ::maps::ObjectFactory_obj::TILE_FATAL_UP;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(286)
			bool tmp8 = (tmp6 == tmp7);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(286)
			if ((tmp8)){
				HX_STACK_LINE(286)
				fatalDirections[(int)2] = (int)1;
			}
			else{
				HX_STACK_LINE(287)
				int tmp9 = indexType;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(287)
				int tmp10 = ::maps::ObjectFactory_obj::TILE_FATAL_DOWN;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(287)
				bool tmp11 = (tmp9 == tmp10);		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(287)
				if ((tmp11)){
					HX_STACK_LINE(287)
					fatalDirections[(int)3] = (int)1;
				}
				else{
					HX_STACK_LINE(288)
					int tmp12 = indexType;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(288)
					int tmp13 = ::maps::ObjectFactory_obj::TILE_FATAL_LR;		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(288)
					bool tmp14 = (tmp12 == tmp13);		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(288)
					if ((tmp14)){
						HX_STACK_LINE(288)
						fatalDirections = Array_obj< int >::__new().Add((int)1).Add((int)1).Add((int)0).Add((int)0);
					}
					else{
						HX_STACK_LINE(289)
						int tmp15 = indexType;		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(289)
						int tmp16 = ::maps::ObjectFactory_obj::TILE_FATAL_UD;		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(289)
						bool tmp17 = (tmp15 == tmp16);		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(289)
						if ((tmp17)){
							HX_STACK_LINE(289)
							fatalDirections = Array_obj< int >::__new().Add((int)0).Add((int)0).Add((int)1).Add((int)1);
						}
						else{
							HX_STACK_LINE(290)
							int tmp18 = indexType;		HX_STACK_VAR(tmp18,"tmp18");
							HX_STACK_LINE(290)
							int tmp19 = ::maps::ObjectFactory_obj::TILE_FATAL_ALL;		HX_STACK_VAR(tmp19,"tmp19");
							HX_STACK_LINE(290)
							bool tmp20 = (tmp18 == tmp19);		HX_STACK_VAR(tmp20,"tmp20");
							HX_STACK_LINE(290)
							if ((tmp20)){
								HX_STACK_LINE(290)
								fatalDirections = Array_obj< int >::__new().Add((int)1).Add((int)1).Add((int)1).Add((int)1);
							}
						}
					}
				}
			}
		}
	}
	HX_STACK_LINE(292)
	int tmp3 = tileIndex;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(292)
	::openfl::display::Bitmap tmp4 = this->getTileBitmap(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(292)
	::maps::mapobjects::Tile tmp5 = ::maps::mapobjects::Tile_obj::__new(tmp4,true,fatalDirections);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(292)
	return tmp5;
}


HX_DEFINE_DYNAMIC_FUNC2(ObjectFactory_obj,createSpikeTile,return )

::maps::mapobjects::Tile ObjectFactory_obj::createBGTile( int tileIndex,int indexType){
	HX_STACK_FRAME("maps.ObjectFactory","createBGTile",0xf5024ce9,"maps.ObjectFactory.createBGTile","maps/ObjectFactory.hx",294,0xb5ae61eb)
	HX_STACK_THIS(this)
	HX_STACK_ARG(tileIndex,"tileIndex")
	HX_STACK_ARG(indexType,"indexType")
	HX_STACK_LINE(296)
	int tmp = tileIndex;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(296)
	::openfl::display::Bitmap tmp1 = this->getTileBitmap(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(296)
	::maps::mapobjects::Tile tmp2 = ::maps::mapobjects::Tile_obj::__new(tmp1,false,Array_obj< int >::__new().Add((int)0).Add((int)0).Add((int)0).Add((int)0));		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(296)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC2(ObjectFactory_obj,createBGTile,return )

::openfl::display::Bitmap ObjectFactory_obj::getTileBitmap( int index){
	HX_STACK_FRAME("maps.ObjectFactory","getTileBitmap",0x44e2e759,"maps.ObjectFactory.getTileBitmap","maps/ObjectFactory.hx",299,0xb5ae61eb)
	HX_STACK_THIS(this)
	HX_STACK_ARG(index,"index")
	HX_STACK_LINE(300)
	int tmp = index;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(300)
	::openfl::display::Bitmap tmp1 = this->tileSheet;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(300)
	int tmp2 = this->tileSheetWidth;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(300)
	::openfl::display::Bitmap tmp3 = this->getBitmap(tmp,tmp1,tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(300)
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC1(ObjectFactory_obj,getTileBitmap,return )

::openfl::display::Bitmap ObjectFactory_obj::getBitmap( int index,::openfl::display::Bitmap sheet,int sheetWidth){
	HX_STACK_FRAME("maps.ObjectFactory","getBitmap",0x5a0c138b,"maps.ObjectFactory.getBitmap","maps/ObjectFactory.hx",303,0xb5ae61eb)
	HX_STACK_THIS(this)
	HX_STACK_ARG(index,"index")
	HX_STACK_ARG(sheet,"sheet")
	HX_STACK_ARG(sheetWidth,"sheetWidth")
	HX_STACK_LINE(305)
	int tmp = index;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(305)
	int tmp1 = this->tileSize;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(305)
	int tmp2 = (tmp * tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(305)
	int temp = tmp2;		HX_STACK_VAR(temp,"temp");
	HX_STACK_LINE(306)
	Float tmp3 = (Float(temp) / Float(sheetWidth));		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(306)
	int tmp4 = ::Math_obj::floor(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(306)
	int y = tmp4;		HX_STACK_VAR(y,"y");
	HX_STACK_LINE(307)
	int tmp5 = hx::Mod(temp,sheetWidth);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(307)
	int tmp6 = this->tileSize;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(307)
	Float tmp7 = (Float(tmp5) / Float(tmp6));		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(307)
	Float tmp8 = (tmp7 - (int)1);		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(307)
	int tmp9 = ::Math_obj::floor(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(307)
	int x = tmp9;		HX_STACK_VAR(x,"x");
	HX_STACK_LINE(309)
	int tmp10 = x;		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(309)
	int tmp11 = this->tileSize;		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(309)
	int tmp12 = (tmp10 * tmp11);		HX_STACK_VAR(tmp12,"tmp12");
	HX_STACK_LINE(309)
	int tmp13 = y;		HX_STACK_VAR(tmp13,"tmp13");
	HX_STACK_LINE(309)
	int tmp14 = this->tileSize;		HX_STACK_VAR(tmp14,"tmp14");
	HX_STACK_LINE(309)
	int tmp15 = (tmp13 * tmp14);		HX_STACK_VAR(tmp15,"tmp15");
	HX_STACK_LINE(309)
	int tmp16 = this->tileSize;		HX_STACK_VAR(tmp16,"tmp16");
	HX_STACK_LINE(309)
	int tmp17 = this->tileSize;		HX_STACK_VAR(tmp17,"tmp17");
	HX_STACK_LINE(309)
	::openfl::geom::Rectangle tmp18 = ::openfl::geom::Rectangle_obj::__new(tmp12,tmp15,tmp16,tmp17);		HX_STACK_VAR(tmp18,"tmp18");
	HX_STACK_LINE(309)
	::openfl::geom::Rectangle frame = tmp18;		HX_STACK_VAR(frame,"frame");
	HX_STACK_LINE(310)
	int tmp19 = this->tileSize;		HX_STACK_VAR(tmp19,"tmp19");
	HX_STACK_LINE(310)
	int tmp20 = this->tileSize;		HX_STACK_VAR(tmp20,"tmp20");
	HX_STACK_LINE(310)
	::openfl::display::BitmapData tmp21 = ::openfl::display::BitmapData_obj::__new(tmp19,tmp20,null(),null());		HX_STACK_VAR(tmp21,"tmp21");
	HX_STACK_LINE(310)
	::openfl::display::Bitmap tmp22 = ::openfl::display::Bitmap_obj::__new(tmp21,null(),null());		HX_STACK_VAR(tmp22,"tmp22");
	HX_STACK_LINE(310)
	::openfl::display::Bitmap bitmap = tmp22;		HX_STACK_VAR(bitmap,"bitmap");
	HX_STACK_LINE(311)
	::openfl::display::BitmapData tmp23 = sheet->bitmapData;		HX_STACK_VAR(tmp23,"tmp23");
	HX_STACK_LINE(311)
	::openfl::geom::Rectangle tmp24 = frame;		HX_STACK_VAR(tmp24,"tmp24");
	HX_STACK_LINE(311)
	::openfl::geom::Point tmp25 = ::openfl::geom::Point_obj::__new(null(),null());		HX_STACK_VAR(tmp25,"tmp25");
	HX_STACK_LINE(311)
	bitmap->bitmapData->copyPixels(tmp23,tmp24,tmp25,null(),null(),null());
	HX_STACK_LINE(313)
	::openfl::display::Bitmap tmp26 = bitmap;		HX_STACK_VAR(tmp26,"tmp26");
	HX_STACK_LINE(313)
	return tmp26;
}


HX_DEFINE_DYNAMIC_FUNC3(ObjectFactory_obj,getBitmap,return )

::maps::ObjectFactory ObjectFactory_obj::singleton;

::maps::ObjectFactory ObjectFactory_obj::getSingleton( ){
	HX_STACK_FRAME("maps.ObjectFactory","getSingleton",0x5140eaef,"maps.ObjectFactory.getSingleton","maps/ObjectFactory.hx",30,0xb5ae61eb)
	HX_STACK_LINE(32)
	::maps::ObjectFactory tmp = ::maps::ObjectFactory_obj::singleton;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(32)
	bool tmp1 = (tmp == null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(32)
	if ((tmp1)){
		HX_STACK_LINE(33)
		::maps::ObjectFactory tmp2 = ::maps::ObjectFactory_obj::__new();		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(33)
		::maps::ObjectFactory_obj::singleton = tmp2;
	}
	HX_STACK_LINE(34)
	::maps::ObjectFactory tmp2 = ::maps::ObjectFactory_obj::singleton;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(34)
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

int ObjectFactory_obj::TILE_SPAWNPOINT_FLYING_HOR;

int ObjectFactory_obj::TILE_SPAWNPOINT_FLYING_VER;

int ObjectFactory_obj::TILE_SPAWNPOINT_RUNNING;

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
		if (HX_FIELD_EQ(inName,"changeTileSheet") ) { return changeTileSheet_dyn(); }
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
		if (HX_FIELD_EQ(inName,"TILE_SPAWNPOINT_RUNNING") ) { outValue = TILE_SPAWNPOINT_RUNNING; return true;  }
		break;
	case 26:
		if (HX_FIELD_EQ(inName,"TILE_SPAWNPOINT_PROJECTILE") ) { outValue = TILE_SPAWNPOINT_PROJECTILE; return true;  }
		if (HX_FIELD_EQ(inName,"TILE_SPAWNPOINT_FLYING_HOR") ) { outValue = TILE_SPAWNPOINT_FLYING_HOR; return true;  }
		if (HX_FIELD_EQ(inName,"TILE_SPAWNPOINT_FLYING_VER") ) { outValue = TILE_SPAWNPOINT_FLYING_VER; return true;  }
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
		if (HX_FIELD_EQ(inName,"TILE_SPAWNPOINT_RUNNING") ) { TILE_SPAWNPOINT_RUNNING=ioValue.Cast< int >(); return true; }
		break;
	case 26:
		if (HX_FIELD_EQ(inName,"TILE_SPAWNPOINT_PROJECTILE") ) { TILE_SPAWNPOINT_PROJECTILE=ioValue.Cast< int >(); return true; }
		if (HX_FIELD_EQ(inName,"TILE_SPAWNPOINT_FLYING_HOR") ) { TILE_SPAWNPOINT_FLYING_HOR=ioValue.Cast< int >(); return true; }
		if (HX_FIELD_EQ(inName,"TILE_SPAWNPOINT_FLYING_VER") ) { TILE_SPAWNPOINT_FLYING_VER=ioValue.Cast< int >(); return true; }
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
	{hx::fsInt,(void *) &ObjectFactory_obj::TILE_SPAWNPOINT_FLYING_HOR,HX_HCSTRING("TILE_SPAWNPOINT_FLYING_HOR","\x34","\x68","\x25","\x66")},
	{hx::fsInt,(void *) &ObjectFactory_obj::TILE_SPAWNPOINT_FLYING_VER,HX_HCSTRING("TILE_SPAWNPOINT_FLYING_VER","\x0c","\xff","\x2f","\x66")},
	{hx::fsInt,(void *) &ObjectFactory_obj::TILE_SPAWNPOINT_RUNNING,HX_HCSTRING("TILE_SPAWNPOINT_RUNNING","\x46","\xd2","\x82","\x73")},
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
	HX_HCSTRING("changeTileSheet","\x01","\xe1","\x15","\xc2"),
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
	HX_MARK_MEMBER_NAME(ObjectFactory_obj::TILE_SPAWNPOINT_FLYING_HOR,"TILE_SPAWNPOINT_FLYING_HOR");
	HX_MARK_MEMBER_NAME(ObjectFactory_obj::TILE_SPAWNPOINT_FLYING_VER,"TILE_SPAWNPOINT_FLYING_VER");
	HX_MARK_MEMBER_NAME(ObjectFactory_obj::TILE_SPAWNPOINT_RUNNING,"TILE_SPAWNPOINT_RUNNING");
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
	HX_VISIT_MEMBER_NAME(ObjectFactory_obj::TILE_SPAWNPOINT_FLYING_HOR,"TILE_SPAWNPOINT_FLYING_HOR");
	HX_VISIT_MEMBER_NAME(ObjectFactory_obj::TILE_SPAWNPOINT_FLYING_VER,"TILE_SPAWNPOINT_FLYING_VER");
	HX_VISIT_MEMBER_NAME(ObjectFactory_obj::TILE_SPAWNPOINT_RUNNING,"TILE_SPAWNPOINT_RUNNING");
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
	HX_HCSTRING("TILE_SPAWNPOINT_FLYING_HOR","\x34","\x68","\x25","\x66"),
	HX_HCSTRING("TILE_SPAWNPOINT_FLYING_VER","\x0c","\xff","\x2f","\x66"),
	HX_HCSTRING("TILE_SPAWNPOINT_RUNNING","\x46","\xd2","\x82","\x73"),
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
	TILE_SPAWNPOINT_FLYING_HOR= (int)48;
	TILE_SPAWNPOINT_FLYING_VER= (int)49;
	TILE_SPAWNPOINT_RUNNING= (int)50;
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
		HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","maps/ObjectFactory.hx",61,0xb5ae61eb)
		{
			HX_STACK_LINE(61)
			int tmp = ::maps::ObjectFactory_obj::TILE_FATAL_ALL;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(61)
			int tmp1 = ::maps::ObjectFactory_obj::TILE_FATAL_DOWN;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(61)
			int tmp2 = ::maps::ObjectFactory_obj::TILE_FATAL_LEFT;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(61)
			int tmp3 = ::maps::ObjectFactory_obj::TILE_FATAL_RIGHT;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(61)
			int tmp4 = ::maps::ObjectFactory_obj::TILE_FATAL_UP;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(62)
			int tmp5 = ::maps::ObjectFactory_obj::TILE_FATAL_LR;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(62)
			int tmp6 = ::maps::ObjectFactory_obj::TILE_FATAL_UD;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(62)
			int tmp7 = ::maps::ObjectFactory_obj::TILE_BACKGROUND;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(62)
			int tmp8 = ::maps::ObjectFactory_obj::TILE_PLATFORM;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(61)
			return Array_obj< int >::__new().Add(tmp).Add(tmp1).Add(tmp2).Add(tmp3).Add(tmp4).Add(tmp5).Add(tmp6).Add(tmp7).Add(tmp8);
		}
		return null();
	}
};
	tileTypes= _Function_0_1::Block();
struct _Function_0_2{
	inline static Array< int > Block( ){
		HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","maps/ObjectFactory.hx",64,0xb5ae61eb)
		{
			HX_STACK_LINE(64)
			int tmp = ::maps::ObjectFactory_obj::TILE_FATAL_ALL;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(64)
			int tmp1 = ::maps::ObjectFactory_obj::TILE_FATAL_DOWN;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(64)
			int tmp2 = ::maps::ObjectFactory_obj::TILE_FATAL_LEFT;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(64)
			int tmp3 = ::maps::ObjectFactory_obj::TILE_FATAL_RIGHT;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(64)
			int tmp4 = ::maps::ObjectFactory_obj::TILE_FATAL_UP;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(65)
			int tmp5 = ::maps::ObjectFactory_obj::TILE_FATAL_LR;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(65)
			int tmp6 = ::maps::ObjectFactory_obj::TILE_FATAL_UD;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(64)
			return Array_obj< int >::__new().Add(tmp).Add(tmp1).Add(tmp2).Add(tmp3).Add(tmp4).Add(tmp5).Add(tmp6);
		}
		return null();
	}
};
	fatalTypes= _Function_0_2::Block();
struct _Function_0_3{
	inline static Array< int > Block( ){
		HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","maps/ObjectFactory.hx",67,0xb5ae61eb)
		{
			HX_STACK_LINE(67)
			int tmp = ::maps::ObjectFactory_obj::TILE_SPAWNPOINT_WALKING;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(67)
			int tmp1 = ::maps::ObjectFactory_obj::TILE_SPAWNPOINT_DASH;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(67)
			int tmp2 = ::maps::ObjectFactory_obj::TILE_SPAWNPOINT_LAUNCH;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(68)
			int tmp3 = ::maps::ObjectFactory_obj::TILE_SPAWNPOINT_PROJECTILE;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(68)
			int tmp4 = ::maps::ObjectFactory_obj::TILE_SPAWNPOINT_FLYING_HOR;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(68)
			int tmp5 = ::maps::ObjectFactory_obj::TILE_SPAWNPOINT_FLYING_VER;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(68)
			int tmp6 = ::maps::ObjectFactory_obj::TILE_SPAWNPOINT_RUNNING;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(67)
			return Array_obj< int >::__new().Add(tmp).Add(tmp1).Add(tmp2).Add(tmp3).Add(tmp4).Add(tmp5).Add(tmp6);
		}
		return null();
	}
};
	spawnTypes= _Function_0_3::Block();
}

} // end namespace maps
