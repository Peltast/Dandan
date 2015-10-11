#include <hxcpp.h>

#include "hxMath.h"
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_actors_Actor
#include <actors/Actor.h>
#endif
#ifndef INCLUDED_actors_Animation
#include <actors/Animation.h>
#endif
#ifndef INCLUDED_actors_ObjectMover
#include <actors/ObjectMover.h>
#endif
#ifndef INCLUDED_actors_Player
#include <actors/Player.h>
#endif
#ifndef INCLUDED_actors_actorsAI_EnemyAI
#include <actors/actorsAI/EnemyAI.h>
#endif
#ifndef INCLUDED_actors_attacks_AbsorbAttack
#include <actors/attacks/AbsorbAttack.h>
#endif
#ifndef INCLUDED_actors_attacks_Attack
#include <actors/attacks/Attack.h>
#endif
#ifndef INCLUDED_actors_attacks_PlayerProjectile
#include <actors/attacks/PlayerProjectile.h>
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
#ifndef INCLUDED_maps_AreaMap
#include <maps/AreaMap.h>
#endif
#ifndef INCLUDED_maps_mapobjects_MapObject
#include <maps/mapobjects/MapObject.h>
#endif
#ifndef INCLUDED_maps_mapobjects_SpawnPoint
#include <maps/mapobjects/SpawnPoint.h>
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
#ifndef INCLUDED_openfl_geom_Rectangle
#include <openfl/geom/Rectangle.h>
#endif
namespace actors{
namespace enemies{

Void Enemy_obj::__construct(::actors::enemies::Enemy implementation,::openfl::display::Bitmap defaultBmp,::actors::ObjectMover mover,int enemyWidth,int enemyHeight,::maps::mapobjects::SpawnPoint homeSpawn,::actors::actorsAI::EnemyAI enemyAI)
{
HX_STACK_FRAME("actors.enemies.Enemy","new",0x9eb5dcc2,"actors.enemies.Enemy.new","actors/enemies/Enemy.hx",28,0x3676abf0)
HX_STACK_THIS(this)
HX_STACK_ARG(implementation,"implementation")
HX_STACK_ARG(defaultBmp,"defaultBmp")
HX_STACK_ARG(mover,"mover")
HX_STACK_ARG(enemyWidth,"enemyWidth")
HX_STACK_ARG(enemyHeight,"enemyHeight")
HX_STACK_ARG(homeSpawn,"homeSpawn")
HX_STACK_ARG(enemyAI,"enemyAI")
{
	HX_STACK_LINE(29)
	bool tmp = (hx::ObjectPtr<OBJ_>(this) != implementation);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(29)
	if ((tmp)){
		HX_STACK_LINE(29)
		::openfl::errors::Error tmp1 = ::openfl::errors::Error_obj::__new(HX_HCSTRING("Enemy is meant to be used as an abstract class.","\x93","\xb3","\xcd","\xba"),null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(29)
		HX_STACK_DO_THROW(tmp1);
	}
	HX_STACK_LINE(31)
	::openfl::display::Bitmap tmp1 = defaultBmp;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(31)
	::haxe::ds::StringMap tmp2 = this->animations;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(31)
	::actors::ObjectMover tmp3 = mover;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(31)
	int tmp4 = enemyWidth;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(31)
	int tmp5 = enemyHeight;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(31)
	super::__construct(hx::ObjectPtr<OBJ_>(this),tmp1,true,tmp2,tmp3,tmp4,tmp5);
	HX_STACK_LINE(33)
	this->homeSpawn = homeSpawn;
	HX_STACK_LINE(34)
	this->enemyAI = enemyAI;
}
;
	return null();
}

//Enemy_obj::~Enemy_obj() { }

Dynamic Enemy_obj::__CreateEmpty() { return  new Enemy_obj; }
hx::ObjectPtr< Enemy_obj > Enemy_obj::__new(::actors::enemies::Enemy implementation,::openfl::display::Bitmap defaultBmp,::actors::ObjectMover mover,int enemyWidth,int enemyHeight,::maps::mapobjects::SpawnPoint homeSpawn,::actors::actorsAI::EnemyAI enemyAI)
{  hx::ObjectPtr< Enemy_obj > _result_ = new Enemy_obj();
	_result_->__construct(implementation,defaultBmp,mover,enemyWidth,enemyHeight,homeSpawn,enemyAI);
	return _result_;}

Dynamic Enemy_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Enemy_obj > _result_ = new Enemy_obj();
	_result_->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3],inArgs[4],inArgs[5],inArgs[6]);
	return _result_;}

Void Enemy_obj::updateActor( ){
{
		HX_STACK_FRAME("actors.enemies.Enemy","updateActor",0xe2f7728e,"actors.enemies.Enemy.updateActor","actors/enemies/Enemy.hx",38,0x3676abf0)
		HX_STACK_THIS(this)
		HX_STACK_LINE(39)
		::maps::mapobjects::SpawnPoint tmp = this->homeSpawn;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(39)
		bool tmp1 = (tmp == null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(39)
		if ((tmp1)){
			HX_STACK_LINE(39)
			return null();
		}
		HX_STACK_LINE(41)
		::actors::actorsAI::EnemyAI tmp2 = this->enemyAI;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(41)
		::actors::ObjectMover tmp3 = this->currentMover;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(41)
		tmp2->updateAI(hx::ObjectPtr<OBJ_>(this),tmp3);
		HX_STACK_LINE(42)
		this->handleAnimation();
		HX_STACK_LINE(44)
		this->super::updateActor();
	}
return null();
}


Void Enemy_obj::handleAnimation( ){
{
		HX_STACK_FRAME("actors.enemies.Enemy","handleAnimation",0x7c94ad9e,"actors.enemies.Enemy.handleAnimation","actors/enemies/Enemy.hx",48,0x3676abf0)
		HX_STACK_THIS(this)
		HX_STACK_LINE(48)
		return null();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Enemy_obj,handleAnimation,(void))

bool Enemy_obj::takeActorDamage( ::actors::Actor actor,::actors::attacks::Attack attack){
	HX_STACK_FRAME("actors.enemies.Enemy","takeActorDamage",0x0f30539f,"actors.enemies.Enemy.takeActorDamage","actors/enemies/Enemy.hx",51,0x3676abf0)
	HX_STACK_THIS(this)
	HX_STACK_ARG(actor,"actor")
	HX_STACK_ARG(attack,"attack")
	HX_STACK_LINE(53)
	::actors::Actor tmp = actor;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(53)
	bool tmp1 = ::Std_obj::is(tmp,hx::ClassOf< ::actors::enemies::Enemy >());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(53)
	if ((tmp1)){
		HX_STACK_LINE(53)
		return true;
	}
	HX_STACK_LINE(55)
	int tmp2 = actor->getAttackDamage();		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(55)
	::actors::Actor tmp3 = actor;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(55)
	bool tmp4 = this->super::takeDamage(tmp2,tmp3);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(55)
	if ((tmp4)){
		HX_STACK_LINE(57)
		int tmp5 = this->health;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(57)
		bool tmp6 = (tmp5 <= (int)0);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(57)
		if ((tmp6)){
			HX_STACK_LINE(58)
			::actors::Actor tmp7 = actor;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(58)
			::actors::attacks::Attack tmp8 = attack;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(58)
			this->beAbsorbed(tmp7,tmp8);
		}
		HX_STACK_LINE(60)
		return true;
	}
	else{
		HX_STACK_LINE(62)
		return false;
	}
	HX_STACK_LINE(55)
	return false;
}


bool Enemy_obj::takeProjectileDamage( ::actors::attacks::Projectile projectile){
	HX_STACK_FRAME("actors.enemies.Enemy","takeProjectileDamage",0xa15216fd,"actors.enemies.Enemy.takeProjectileDamage","actors/enemies/Enemy.hx",65,0x3676abf0)
	HX_STACK_THIS(this)
	HX_STACK_ARG(projectile,"projectile")
	HX_STACK_LINE(66)
	::actors::attacks::Projectile tmp = projectile;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(66)
	bool tmp1 = ::Std_obj::is(tmp,hx::ClassOf< ::actors::attacks::PlayerProjectile >());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(66)
	if ((tmp1)){
		HX_STACK_LINE(67)
		::actors::attacks::Projectile tmp2 = projectile;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(67)
		this->damageReaction(tmp2);
		HX_STACK_LINE(68)
		::actors::attacks::Projectile tmp3 = projectile;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(68)
		bool tmp4 = this->super::takeProjectileDamage(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(68)
		return tmp4;
	}
	HX_STACK_LINE(70)
	return false;
}


Void Enemy_obj::beAbsorbed( ::actors::Actor actor,::actors::attacks::Attack attack){
{
		HX_STACK_FRAME("actors.enemies.Enemy","beAbsorbed",0x8b77cf0d,"actors.enemies.Enemy.beAbsorbed","actors/enemies/Enemy.hx",73,0x3676abf0)
		HX_STACK_THIS(this)
		HX_STACK_ARG(actor,"actor")
		HX_STACK_ARG(attack,"attack")
		HX_STACK_LINE(75)
		::actors::Actor tmp = actor;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(75)
		::actors::Actor tmp1 = tmp;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(75)
		bool tmp2 = ::Std_obj::is(tmp1,hx::ClassOf< ::actors::Player >());		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(75)
		bool tmp3;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(75)
		if ((tmp2)){
			HX_STACK_LINE(75)
			::actors::attacks::Attack tmp4 = attack;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(75)
			::actors::attacks::Attack tmp5 = tmp4;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(75)
			tmp3 = ::Std_obj::is(tmp5,hx::ClassOf< ::actors::attacks::AbsorbAttack >());
		}
		else{
			HX_STACK_LINE(75)
			tmp3 = false;
		}
		HX_STACK_LINE(75)
		if ((tmp3)){
			HX_STACK_LINE(76)
			::actors::Player tmp4;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(76)
			tmp4 = hx::TCast< ::actors::Player >::cast(actor);
			HX_STACK_LINE(76)
			::actors::Player player = tmp4;		HX_STACK_VAR(player,"player");
			HX_STACK_LINE(77)
			player->absorbAbility(hx::ObjectPtr<OBJ_>(this));
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Enemy_obj,beAbsorbed,(void))

Void Enemy_obj::calculateDamage( ::maps::mapobjects::MapObject source){
{
		HX_STACK_FRAME("actors.enemies.Enemy","calculateDamage",0x3602c1d7,"actors.enemies.Enemy.calculateDamage","actors/enemies/Enemy.hx",80,0x3676abf0)
		HX_STACK_THIS(this)
		HX_STACK_ARG(source,"source")
		HX_STACK_LINE(82)
		int tmp = this->health;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(82)
		bool tmp1 = (tmp <= (int)0);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(82)
		if ((tmp1)){
			HX_STACK_LINE(83)
			this->kill();
		}
		else{
			HX_STACK_LINE(86)
			this->set_alpha(((Float).7));
			HX_STACK_LINE(87)
			this->invulnerable = true;
			HX_STACK_LINE(88)
			::maps::mapobjects::MapObject tmp2 = source;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(88)
			this->damageReaction(tmp2);
		}
	}
return null();
}


Void Enemy_obj::kill( ){
{
		HX_STACK_FRAME("actors.enemies.Enemy","kill",0x3e72a8fc,"actors.enemies.Enemy.kill","actors/enemies/Enemy.hx",93,0x3676abf0)
		HX_STACK_THIS(this)
		HX_STACK_LINE(94)
		this->super::kill();
		HX_STACK_LINE(95)
		::openfl::geom::Rectangle tmp = ::openfl::geom::Rectangle_obj::__new((int)0,(int)0,(int)0,(int)0);		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(95)
		this->collisionBounds = tmp;
	}
return null();
}


Void Enemy_obj::handleDeath( ){
{
		HX_STACK_FRAME("actors.enemies.Enemy","handleDeath",0x6b2078ce,"actors.enemies.Enemy.handleDeath","actors/enemies/Enemy.hx",98,0x3676abf0)
		HX_STACK_THIS(this)
		HX_STACK_LINE(99)
		this->super::handleDeath();
		HX_STACK_LINE(100)
		::maps::AreaMap tmp = this->currentMap;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(100)
		tmp->removeActor(hx::ObjectPtr<OBJ_>(this));
		HX_STACK_LINE(101)
		::maps::mapobjects::SpawnPoint tmp1 = this->homeSpawn;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(101)
		tmp1->enemyDead(hx::ObjectPtr<OBJ_>(this));
	}
return null();
}


Void Enemy_obj::damageReaction( ::maps::mapobjects::MapObject source){
{
		HX_STACK_FRAME("actors.enemies.Enemy","damageReaction",0xf1512616,"actors.enemies.Enemy.damageReaction","actors/enemies/Enemy.hx",104,0x3676abf0)
		HX_STACK_THIS(this)
		HX_STACK_ARG(source,"source")
		HX_STACK_LINE(104)
		return null();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Enemy_obj,damageReaction,(void))

int Enemy_obj::getAttackDamage( ){
	HX_STACK_FRAME("actors.enemies.Enemy","getAttackDamage",0xb5da736f,"actors.enemies.Enemy.getAttackDamage","actors/enemies/Enemy.hx",107,0x3676abf0)
	HX_STACK_THIS(this)
	HX_STACK_LINE(108)
	::actors::attacks::Attack tmp = this->attackBehavior;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(108)
	bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(108)
	if ((tmp1)){
		HX_STACK_LINE(109)
		::actors::attacks::Attack tmp2 = this->attackBehavior;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(109)
		int tmp3 = tmp2->getDamage();		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(109)
		return tmp3;
	}
	HX_STACK_LINE(110)
	int tmp2 = this->touchDamage;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(110)
	return tmp2;
}


Void Enemy_obj::moveXAxis( ){
{
		HX_STACK_FRAME("actors.enemies.Enemy","moveXAxis",0x81d9364a,"actors.enemies.Enemy.moveXAxis","actors/enemies/Enemy.hx",114,0x3676abf0)
		HX_STACK_THIS(this)
		HX_STACK_LINE(116)
		{
			HX_STACK_LINE(116)
			::actors::enemies::Enemy _g = hx::ObjectPtr<OBJ_>(this);		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(116)
			Float tmp = _g->get_x();		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(116)
			::actors::ObjectMover tmp1 = this->currentMover;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(116)
			Float tmp2 = tmp1->getXVel();		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(116)
			int tmp3 = ::Math_obj::round(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(116)
			Float tmp4 = (tmp + tmp3);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(116)
			_g->set_x(tmp4);
		}
		HX_STACK_LINE(118)
		::maps::AreaMap tmp = this->currentMap;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(118)
		Array< ::Dynamic > collisions = tmp->checkCollisions(hx::ObjectPtr<OBJ_>(this),null());		HX_STACK_VAR(collisions,"collisions");
		HX_STACK_LINE(119)
		::maps::AreaMap tmp1 = this->currentMap;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(119)
		Array< ::Dynamic > actorCollisions = tmp1->checkActorCollisions(hx::ObjectPtr<OBJ_>(this));		HX_STACK_VAR(actorCollisions,"actorCollisions");
		HX_STACK_LINE(120)
		bool tmp2 = this->checkFatalTiles(collisions,true);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(120)
		if ((tmp2)){
			HX_STACK_LINE(121)
			this->kill();
			HX_STACK_LINE(122)
			return null();
		}
		else{
			HX_STACK_LINE(124)
			bool tmp3 = this->checkActorCollision(actorCollisions,true);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(124)
			if ((tmp3)){
				HX_STACK_LINE(125)
				::actors::Actor tmp4 = actorCollisions->__get((int)0).StaticCast< ::actors::Actor >();		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(125)
				collisions->push(tmp4);
			}
		}
		HX_STACK_LINE(128)
		int tmp3 = this->getCollisionLargestDistance(collisions,true);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(128)
		int largestDistance = tmp3;		HX_STACK_VAR(largestDistance,"largestDistance");
		HX_STACK_LINE(130)
		bool tmp4 = (largestDistance != (int)0);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(130)
		if ((tmp4)){
			HX_STACK_LINE(131)
			::actors::enemies::Enemy _g = hx::ObjectPtr<OBJ_>(this);		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(131)
			Float tmp5 = _g->get_x();		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(131)
			int tmp6 = largestDistance;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(131)
			Float tmp7 = (tmp5 - tmp6);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(131)
			_g->set_x(tmp7);
		}
		HX_STACK_LINE(133)
		bool tmp5 = (collisions->length > (int)0);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(133)
		if ((tmp5)){
			HX_STACK_LINE(134)
			::actors::actorsAI::EnemyAI tmp6 = this->enemyAI;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(134)
			::maps::mapobjects::MapObject tmp7 = collisions->__get((int)0).StaticCast< ::maps::mapobjects::MapObject >();		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(134)
			tmp6->handleCollision(tmp7,hx::ObjectPtr<OBJ_>(this),true);
		}
	}
return null();
}


Void Enemy_obj::moveYAxis( ){
{
		HX_STACK_FRAME("actors.enemies.Enemy","moveYAxis",0x153fcacb,"actors.enemies.Enemy.moveYAxis","actors/enemies/Enemy.hx",136,0x3676abf0)
		HX_STACK_THIS(this)
		HX_STACK_LINE(138)
		{
			HX_STACK_LINE(138)
			::actors::enemies::Enemy _g = hx::ObjectPtr<OBJ_>(this);		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(138)
			Float tmp = _g->get_y();		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(138)
			::actors::ObjectMover tmp1 = this->currentMover;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(138)
			Float tmp2 = tmp1->getYVel();		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(138)
			int tmp3 = ::Math_obj::round(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(138)
			Float tmp4 = (tmp + tmp3);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(138)
			_g->set_y(tmp4);
		}
		HX_STACK_LINE(140)
		::maps::AreaMap tmp = this->currentMap;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(140)
		Array< ::Dynamic > collisions = tmp->checkCollisions(hx::ObjectPtr<OBJ_>(this),null());		HX_STACK_VAR(collisions,"collisions");
		HX_STACK_LINE(141)
		::maps::AreaMap tmp1 = this->currentMap;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(141)
		Array< ::Dynamic > actorCollisions = tmp1->checkActorCollisions(hx::ObjectPtr<OBJ_>(this));		HX_STACK_VAR(actorCollisions,"actorCollisions");
		HX_STACK_LINE(142)
		bool tmp2 = this->checkFatalTiles(collisions,false);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(142)
		if ((tmp2)){
			HX_STACK_LINE(143)
			this->kill();
			HX_STACK_LINE(144)
			return null();
		}
		else{
			HX_STACK_LINE(146)
			bool tmp3 = this->checkActorCollision(actorCollisions,false);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(146)
			if ((tmp3)){
				HX_STACK_LINE(147)
				::actors::Actor tmp4 = actorCollisions->__get((int)0).StaticCast< ::actors::Actor >();		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(147)
				collisions->push(tmp4);
			}
		}
		HX_STACK_LINE(150)
		int tmp3 = this->getCollisionLargestDistance(collisions,false);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(150)
		int largestDistance = tmp3;		HX_STACK_VAR(largestDistance,"largestDistance");
		HX_STACK_LINE(152)
		bool tmp4 = (largestDistance != (int)0);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(152)
		if ((tmp4)){
			HX_STACK_LINE(153)
			::actors::enemies::Enemy _g = hx::ObjectPtr<OBJ_>(this);		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(153)
			Float tmp5 = _g->get_y();		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(153)
			int tmp6 = largestDistance;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(153)
			Float tmp7 = (tmp5 - tmp6);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(153)
			_g->set_y(tmp7);
		}
		HX_STACK_LINE(154)
		bool tmp5 = (largestDistance > (int)0);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(154)
		if ((tmp5)){
			HX_STACK_LINE(155)
			this->setGrounded();
		}
		HX_STACK_LINE(157)
		bool tmp6 = (collisions->length > (int)0);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(157)
		if ((tmp6)){
			HX_STACK_LINE(158)
			::actors::actorsAI::EnemyAI tmp7 = this->enemyAI;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(158)
			::maps::mapobjects::MapObject tmp8 = collisions->__get((int)0).StaticCast< ::maps::mapobjects::MapObject >();		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(158)
			tmp7->handleCollision(tmp8,hx::ObjectPtr<OBJ_>(this),false);
		}
	}
return null();
}


Void Enemy_obj::goLeft( ){
{
		HX_STACK_FRAME("actors.enemies.Enemy","goLeft",0x84fa1f2d,"actors.enemies.Enemy.goLeft","actors/enemies/Enemy.hx",163,0x3676abf0)
		HX_STACK_THIS(this)
		HX_STACK_LINE(164)
		this->super::goLeft();
		HX_STACK_LINE(165)
		::actors::Animation tmp = this->currentAnimation;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(165)
		::String tmp1 = tmp->getName();		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(165)
		bool tmp2 = (tmp1 != HX_HCSTRING("LeftWalk","\xd0","\x5c","\x9f","\x2f"));		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(165)
		bool tmp3;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(165)
		if ((tmp2)){
			HX_STACK_LINE(165)
			::actors::ObjectMover tmp4 = this->currentMover;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(165)
			::actors::ObjectMover tmp5 = tmp4;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(165)
			tmp3 = tmp5->getIsGrounded();
		}
		else{
			HX_STACK_LINE(165)
			tmp3 = false;
		}
		HX_STACK_LINE(165)
		if ((tmp3)){
			HX_STACK_LINE(166)
			::actors::Animation tmp4 = this->getAnimation(HX_HCSTRING("LeftWalk","\xd0","\x5c","\x9f","\x2f"));		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(166)
			this->currentAnimation = tmp4;
		}
	}
return null();
}


Void Enemy_obj::goRight( ){
{
		HX_STACK_FRAME("actors.enemies.Enemy","goRight",0x4cee35f6,"actors.enemies.Enemy.goRight","actors/enemies/Enemy.hx",168,0x3676abf0)
		HX_STACK_THIS(this)
		HX_STACK_LINE(169)
		this->super::goRight();
		HX_STACK_LINE(170)
		::actors::Animation tmp = this->currentAnimation;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(170)
		::String tmp1 = tmp->getName();		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(170)
		bool tmp2 = (tmp1 != HX_HCSTRING("RightWalk","\xe5","\x92","\x8b","\x5b"));		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(170)
		bool tmp3;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(170)
		if ((tmp2)){
			HX_STACK_LINE(170)
			::actors::ObjectMover tmp4 = this->currentMover;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(170)
			::actors::ObjectMover tmp5 = tmp4;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(170)
			tmp3 = tmp5->getIsGrounded();
		}
		else{
			HX_STACK_LINE(170)
			tmp3 = false;
		}
		HX_STACK_LINE(170)
		if ((tmp3)){
			HX_STACK_LINE(171)
			::actors::Animation tmp4 = this->getAnimation(HX_HCSTRING("RightWalk","\xe5","\x92","\x8b","\x5b"));		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(171)
			this->currentAnimation = tmp4;
		}
	}
return null();
}


Void Enemy_obj::stopLeft( ){
{
		HX_STACK_FRAME("actors.enemies.Enemy","stopLeft",0x10161d87,"actors.enemies.Enemy.stopLeft","actors/enemies/Enemy.hx",173,0x3676abf0)
		HX_STACK_THIS(this)
		HX_STACK_LINE(174)
		this->super::stopLeft();
		HX_STACK_LINE(176)
		::actors::ObjectMover tmp = this->currentMover;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(176)
		bool tmp1 = tmp->getIsGrounded();		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(176)
		bool tmp2;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(176)
		if ((tmp1)){
			HX_STACK_LINE(176)
			::actors::ObjectMover tmp3 = this->currentMover;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(176)
			::actors::ObjectMover tmp4 = tmp3;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(176)
			int tmp5 = tmp4->getTargetXVel();		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(176)
			int tmp6 = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(176)
			tmp2 = (tmp6 == (int)0);
		}
		else{
			HX_STACK_LINE(176)
			tmp2 = false;
		}
		HX_STACK_LINE(176)
		if ((tmp2)){
			HX_STACK_LINE(177)
			::actors::Animation tmp3 = this->getAnimation(HX_HCSTRING("Idle","\x34","\xd3","\x8c","\x30"));		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(177)
			this->currentAnimation = tmp3;
		}
	}
return null();
}


Void Enemy_obj::stopRight( ){
{
		HX_STACK_FRAME("actors.enemies.Enemy","stopRight",0x7a50c65c,"actors.enemies.Enemy.stopRight","actors/enemies/Enemy.hx",179,0x3676abf0)
		HX_STACK_THIS(this)
		HX_STACK_LINE(180)
		this->super::stopRight();
		HX_STACK_LINE(182)
		::actors::ObjectMover tmp = this->currentMover;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(182)
		bool tmp1 = tmp->getIsGrounded();		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(182)
		bool tmp2;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(182)
		if ((tmp1)){
			HX_STACK_LINE(182)
			::actors::ObjectMover tmp3 = this->currentMover;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(182)
			::actors::ObjectMover tmp4 = tmp3;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(182)
			int tmp5 = tmp4->getTargetXVel();		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(182)
			int tmp6 = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(182)
			tmp2 = (tmp6 == (int)0);
		}
		else{
			HX_STACK_LINE(182)
			tmp2 = false;
		}
		HX_STACK_LINE(182)
		if ((tmp2)){
			HX_STACK_LINE(183)
			::actors::Animation tmp3 = this->getAnimation(HX_HCSTRING("Idle","\x34","\xd3","\x8c","\x30"));		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(183)
			this->currentAnimation = tmp3;
		}
	}
return null();
}


::actors::enemies::Enemy Enemy_obj::createClone( ::maps::mapobjects::SpawnPoint spawnPoint){
	HX_STACK_FRAME("actors.enemies.Enemy","createClone",0x53968923,"actors.enemies.Enemy.createClone","actors/enemies/Enemy.hx",188,0x3676abf0)
	HX_STACK_THIS(this)
	HX_STACK_ARG(spawnPoint,"spawnPoint")
	HX_STACK_LINE(188)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Enemy_obj,createClone,return )


Enemy_obj::Enemy_obj()
{
}

void Enemy_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Enemy);
	HX_MARK_MEMBER_NAME(homeSpawn,"homeSpawn");
	HX_MARK_MEMBER_NAME(enemyAI,"enemyAI");
	HX_MARK_MEMBER_NAME(touchDamage,"touchDamage");
	::actors::Actor_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void Enemy_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(homeSpawn,"homeSpawn");
	HX_VISIT_MEMBER_NAME(enemyAI,"enemyAI");
	HX_VISIT_MEMBER_NAME(touchDamage,"touchDamage");
	::actors::Actor_obj::__Visit(HX_VISIT_ARG);
}

Dynamic Enemy_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"kill") ) { return kill_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"goLeft") ) { return goLeft_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"enemyAI") ) { return enemyAI; }
		if (HX_FIELD_EQ(inName,"goRight") ) { return goRight_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"stopLeft") ) { return stopLeft_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"homeSpawn") ) { return homeSpawn; }
		if (HX_FIELD_EQ(inName,"moveXAxis") ) { return moveXAxis_dyn(); }
		if (HX_FIELD_EQ(inName,"moveYAxis") ) { return moveYAxis_dyn(); }
		if (HX_FIELD_EQ(inName,"stopRight") ) { return stopRight_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"beAbsorbed") ) { return beAbsorbed_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"touchDamage") ) { return touchDamage; }
		if (HX_FIELD_EQ(inName,"updateActor") ) { return updateActor_dyn(); }
		if (HX_FIELD_EQ(inName,"handleDeath") ) { return handleDeath_dyn(); }
		if (HX_FIELD_EQ(inName,"createClone") ) { return createClone_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"damageReaction") ) { return damageReaction_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"handleAnimation") ) { return handleAnimation_dyn(); }
		if (HX_FIELD_EQ(inName,"takeActorDamage") ) { return takeActorDamage_dyn(); }
		if (HX_FIELD_EQ(inName,"calculateDamage") ) { return calculateDamage_dyn(); }
		if (HX_FIELD_EQ(inName,"getAttackDamage") ) { return getAttackDamage_dyn(); }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"takeProjectileDamage") ) { return takeProjectileDamage_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Enemy_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"enemyAI") ) { enemyAI=inValue.Cast< ::actors::actorsAI::EnemyAI >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"homeSpawn") ) { homeSpawn=inValue.Cast< ::maps::mapobjects::SpawnPoint >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"touchDamage") ) { touchDamage=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool Enemy_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	return false;
}

void Enemy_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("homeSpawn","\x9c","\x33","\x35","\xaa"));
	outFields->push(HX_HCSTRING("enemyAI","\x30","\x6d","\x1a","\xd3"));
	outFields->push(HX_HCSTRING("touchDamage","\x8e","\xf5","\x1a","\x83"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::maps::mapobjects::SpawnPoint*/ ,(int)offsetof(Enemy_obj,homeSpawn),HX_HCSTRING("homeSpawn","\x9c","\x33","\x35","\xaa")},
	{hx::fsObject /*::actors::actorsAI::EnemyAI*/ ,(int)offsetof(Enemy_obj,enemyAI),HX_HCSTRING("enemyAI","\x30","\x6d","\x1a","\xd3")},
	{hx::fsInt,(int)offsetof(Enemy_obj,touchDamage),HX_HCSTRING("touchDamage","\x8e","\xf5","\x1a","\x83")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("homeSpawn","\x9c","\x33","\x35","\xaa"),
	HX_HCSTRING("enemyAI","\x30","\x6d","\x1a","\xd3"),
	HX_HCSTRING("touchDamage","\x8e","\xf5","\x1a","\x83"),
	HX_HCSTRING("updateActor","\x2c","\x34","\x3f","\x01"),
	HX_HCSTRING("handleAnimation","\x3c","\x96","\xa0","\x19"),
	HX_HCSTRING("takeActorDamage","\x3d","\x3c","\x3c","\xac"),
	HX_HCSTRING("takeProjectileDamage","\x9f","\x31","\x80","\xd4"),
	HX_HCSTRING("beAbsorbed","\x2f","\xab","\xf0","\x76"),
	HX_HCSTRING("calculateDamage","\x75","\xaa","\x0e","\xd3"),
	HX_HCSTRING("kill","\x9e","\xdf","\x09","\x47"),
	HX_HCSTRING("handleDeath","\x6c","\x3a","\x68","\x89"),
	HX_HCSTRING("damageReaction","\x38","\xbb","\x07","\xb4"),
	HX_HCSTRING("getAttackDamage","\x0d","\x5c","\xe6","\x52"),
	HX_HCSTRING("moveXAxis","\x68","\xb4","\x2e","\x01"),
	HX_HCSTRING("moveYAxis","\xe9","\x48","\x95","\x94"),
	HX_HCSTRING("goLeft","\x4f","\xc2","\xc5","\x4a"),
	HX_HCSTRING("goRight","\x94","\x50","\x51","\x99"),
	HX_HCSTRING("stopLeft","\x29","\x4d","\x6a","\x9a"),
	HX_HCSTRING("stopRight","\x7a","\x44","\xa6","\xf9"),
	HX_HCSTRING("createClone","\xc1","\x4a","\xde","\x71"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Enemy_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Enemy_obj::__mClass,"__mClass");
};

#endif

hx::Class Enemy_obj::__mClass;

void Enemy_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("actors.enemies.Enemy","\xd0","\x13","\x9c","\x21");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &Enemy_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Enemy_obj >;
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
} // end namespace enemies
