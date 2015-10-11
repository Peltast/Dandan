#include <hxcpp.h>

#include "hxMath.h"
#ifndef INCLUDED_actors_Actor
#include <actors/Actor.h>
#endif
#ifndef INCLUDED_actors_Animation
#include <actors/Animation.h>
#endif
#ifndef INCLUDED_actors_ObjectMover
#include <actors/ObjectMover.h>
#endif
#ifndef INCLUDED_actors_attacks_Projectile
#include <actors/attacks/Projectile.h>
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
#ifndef INCLUDED_openfl_display_Bitmap
#include <openfl/display/Bitmap.h>
#endif
#ifndef INCLUDED_openfl_display_BitmapData
#include <openfl/display/BitmapData.h>
#endif
#ifndef INCLUDED_openfl_display_BlendMode
#include <openfl/display/BlendMode.h>
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
#ifndef INCLUDED_openfl_geom_ColorTransform
#include <openfl/geom/ColorTransform.h>
#endif
#ifndef INCLUDED_openfl_geom_Matrix
#include <openfl/geom/Matrix.h>
#endif
#ifndef INCLUDED_openfl_geom_Point
#include <openfl/geom/Point.h>
#endif
#ifndef INCLUDED_openfl_geom_Rectangle
#include <openfl/geom/Rectangle.h>
#endif
namespace actors{
namespace attacks{

Void Projectile_obj::__construct(::actors::attacks::Projectile implementation,::openfl::display::Bitmap bitmap,::actors::ObjectMover mover,int duration,int damage)
{
HX_STACK_FRAME("actors.attacks.Projectile","new",0x8c849f6e,"actors.attacks.Projectile.new","actors/attacks/Projectile.hx",26,0xd2ce4580)
HX_STACK_THIS(this)
HX_STACK_ARG(implementation,"implementation")
HX_STACK_ARG(bitmap,"bitmap")
HX_STACK_ARG(mover,"mover")
HX_STACK_ARG(duration,"duration")
HX_STACK_ARG(damage,"damage")
{
	HX_STACK_LINE(28)
	bool tmp = (hx::ObjectPtr<OBJ_>(this) != implementation);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(28)
	if ((tmp)){
		HX_STACK_LINE(28)
		::openfl::errors::Error tmp1 = ::openfl::errors::Error_obj::__new(HX_HCSTRING("Projectile is meant to be used as an abstract class.","\xb4","\xe2","\x78","\xeb"),null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(28)
		HX_STACK_DO_THROW(tmp1);
	}
	HX_STACK_LINE(30)
	::openfl::geom::Point tmp1 = ::openfl::geom::Point_obj::__new(null(),null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(30)
	::openfl::geom::Point tmp2 = ::openfl::geom::Point_obj::__new(null(),null());		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(30)
	::openfl::geom::Point tmp3 = ::openfl::geom::Point_obj::__new((int)1,null());		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(30)
	::openfl::geom::Point tmp4 = ::openfl::geom::Point_obj::__new((int)2,null());		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(30)
	::actors::Animation tmp5 = ::actors::Animation_obj::__new(HX_HCSTRING("Left","\x27","\x34","\x89","\x32"),(int)1,tmp1,(int)24,(int)24,Array_obj< ::Dynamic >::__new().Add(tmp2).Add(tmp3).Add(tmp4),null());		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(30)
	::actors::Animation leftMove = tmp5;		HX_STACK_VAR(leftMove,"leftMove");
	HX_STACK_LINE(31)
	::openfl::geom::Point tmp6 = ::openfl::geom::Point_obj::__new((int)0,(int)24);		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(31)
	::openfl::geom::Point tmp7 = ::openfl::geom::Point_obj::__new(null(),null());		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(31)
	::openfl::geom::Point tmp8 = ::openfl::geom::Point_obj::__new((int)1,null());		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(31)
	::openfl::geom::Point tmp9 = ::openfl::geom::Point_obj::__new((int)2,null());		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(31)
	::actors::Animation tmp10 = ::actors::Animation_obj::__new(HX_HCSTRING("Right","\xbc","\x7b","\x91","\x7c"),(int)1,tmp6,(int)24,(int)24,Array_obj< ::Dynamic >::__new().Add(tmp7).Add(tmp8).Add(tmp9),null());		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(31)
	::actors::Animation rightMove = tmp10;		HX_STACK_VAR(rightMove,"rightMove");
	HX_STACK_LINE(32)
	::haxe::ds::StringMap tmp11;		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(32)
	{
		HX_STACK_LINE(32)
		::haxe::ds::StringMap tmp12 = ::haxe::ds::StringMap_obj::__new();		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(32)
		::haxe::ds::StringMap tmp13 = tmp12;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(32)
		tmp11 = tmp13;
	}
	HX_STACK_LINE(32)
	this->animations = tmp11;
	HX_STACK_LINE(33)
	{
		HX_STACK_LINE(33)
		::String tmp12 = leftMove->getName();		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(33)
		::String k = tmp12;		HX_STACK_VAR(k,"k");
		HX_STACK_LINE(33)
		::haxe::ds::StringMap tmp13 = this->animations;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(33)
		::String tmp14 = k;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(33)
		::actors::Animation tmp15 = leftMove;		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(33)
		tmp13->set(tmp14,tmp15);
		HX_STACK_LINE(33)
		leftMove;
	}
	HX_STACK_LINE(34)
	{
		HX_STACK_LINE(34)
		::String tmp12 = rightMove->getName();		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(34)
		::String k = tmp12;		HX_STACK_VAR(k,"k");
		HX_STACK_LINE(34)
		::haxe::ds::StringMap tmp13 = this->animations;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(34)
		::String tmp14 = k;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(34)
		::actors::Animation tmp15 = rightMove;		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(34)
		tmp13->set(tmp14,tmp15);
		HX_STACK_LINE(34)
		rightMove;
	}
	HX_STACK_LINE(35)
	this->currentAnimation = rightMove;
	HX_STACK_LINE(37)
	this->projectileMover = mover;
	HX_STACK_LINE(38)
	this->duration = duration;
	HX_STACK_LINE(39)
	this->damage = damage;
	HX_STACK_LINE(40)
	this->expired = false;
	HX_STACK_LINE(42)
	::openfl::display::Bitmap tmp12 = bitmap;		HX_STACK_VAR(tmp12,"tmp12");
	HX_STACK_LINE(42)
	::haxe::ds::StringMap tmp13 = this->animations;		HX_STACK_VAR(tmp13,"tmp13");
	HX_STACK_LINE(42)
	::actors::ObjectMover tmp14 = mover;		HX_STACK_VAR(tmp14,"tmp14");
	HX_STACK_LINE(42)
	super::__construct(hx::ObjectPtr<OBJ_>(this),tmp12,true,tmp13,tmp14,(int)24,(int)24);
	HX_STACK_LINE(44)
	::openfl::geom::Rectangle tmp15 = ::openfl::geom::Rectangle_obj::__new((int)3,(int)5,(int)15,(int)17);		HX_STACK_VAR(tmp15,"tmp15");
	HX_STACK_LINE(44)
	this->collisionBounds = tmp15;
}
;
	return null();
}

//Projectile_obj::~Projectile_obj() { }

Dynamic Projectile_obj::__CreateEmpty() { return  new Projectile_obj; }
hx::ObjectPtr< Projectile_obj > Projectile_obj::__new(::actors::attacks::Projectile implementation,::openfl::display::Bitmap bitmap,::actors::ObjectMover mover,int duration,int damage)
{  hx::ObjectPtr< Projectile_obj > _result_ = new Projectile_obj();
	_result_->__construct(implementation,bitmap,mover,duration,damage);
	return _result_;}

Dynamic Projectile_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Projectile_obj > _result_ = new Projectile_obj();
	_result_->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3],inArgs[4]);
	return _result_;}

bool Projectile_obj::updateProjectile( ){
	HX_STACK_FRAME("actors.attacks.Projectile","updateProjectile",0x702bb584,"actors.attacks.Projectile.updateProjectile","actors/attacks/Projectile.hx",48,0xd2ce4580)
	HX_STACK_THIS(this)
	HX_STACK_LINE(50)
	hx::SubEq(this->duration,(int)1);
	HX_STACK_LINE(51)
	int tmp = this->duration;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(51)
	bool tmp1 = (tmp <= (int)0);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(51)
	if ((tmp1)){
		HX_STACK_LINE(52)
		return true;
	}
	HX_STACK_LINE(54)
	::actors::ObjectMover tmp2 = this->projectileMover;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(54)
	tmp2->updateMovement();
	HX_STACK_LINE(55)
	this->moveXAxis();
	HX_STACK_LINE(56)
	this->moveYAxis();
	HX_STACK_LINE(57)
	this->updateActorAnimation();
	HX_STACK_LINE(59)
	bool tmp3 = this->expired;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(59)
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC0(Projectile_obj,updateProjectile,return )

Void Projectile_obj::flipProjectile( bool horizontal){
{
		HX_STACK_FRAME("actors.attacks.Projectile","flipProjectile",0xf63f26a8,"actors.attacks.Projectile.flipProjectile","actors/attacks/Projectile.hx",62,0xd2ce4580)
		HX_STACK_THIS(this)
		HX_STACK_ARG(horizontal,"horizontal")
		HX_STACK_LINE(64)
		bool tmp = horizontal;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(64)
		if ((tmp)){
			HX_STACK_LINE(65)
			this->invertXMovement();
			HX_STACK_LINE(66)
			::actors::ObjectMover tmp1 = this->projectileMover;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(66)
			int tmp2 = tmp1->getTargetXVel();		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(66)
			bool tmp3 = (tmp2 > (int)0);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(66)
			if ((tmp3)){
				HX_STACK_LINE(67)
				::haxe::ds::StringMap tmp4 = this->animations;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(67)
				::actors::Animation tmp5 = tmp4->get(HX_HCSTRING("Right","\xbc","\x7b","\x91","\x7c"));		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(67)
				this->currentAnimation = tmp5;
			}
			else{
				HX_STACK_LINE(69)
				::haxe::ds::StringMap tmp4 = this->animations;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(69)
				::actors::Animation tmp5 = tmp4->get(HX_HCSTRING("Left","\x27","\x34","\x89","\x32"));		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(69)
				this->currentAnimation = tmp5;
			}
		}
		else{
			HX_STACK_LINE(73)
			this->invertYMovement();
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Projectile_obj,flipProjectile,(void))

Void Projectile_obj::invertXMovement( ){
{
		HX_STACK_FRAME("actors.attacks.Projectile","invertXMovement",0x44d00bdf,"actors.attacks.Projectile.invertXMovement","actors/attacks/Projectile.hx",79,0xd2ce4580)
		HX_STACK_THIS(this)
		HX_STACK_LINE(80)
		::actors::ObjectMover tmp = this->projectileMover;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(80)
		tmp->invertTargetXVel();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Projectile_obj,invertXMovement,(void))

Void Projectile_obj::invertYMovement( ){
{
		HX_STACK_FRAME("actors.attacks.Projectile","invertYMovement",0x17c174e0,"actors.attacks.Projectile.invertYMovement","actors/attacks/Projectile.hx",82,0xd2ce4580)
		HX_STACK_THIS(this)
		HX_STACK_LINE(83)
		::actors::ObjectMover tmp = this->projectileMover;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(83)
		tmp->invertTargetYVel();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Projectile_obj,invertYMovement,(void))

Void Projectile_obj::flipProjectileBmp( bool horizontal){
{
		HX_STACK_FRAME("actors.attacks.Projectile","flipProjectileBmp",0xc87ae67d,"actors.attacks.Projectile.flipProjectileBmp","actors/attacks/Projectile.hx",85,0xd2ce4580)
		HX_STACK_THIS(this)
		HX_STACK_ARG(horizontal,"horizontal")
		HX_STACK_LINE(86)
		::openfl::geom::Matrix matrix;		HX_STACK_VAR(matrix,"matrix");
		HX_STACK_LINE(87)
		::openfl::display::Bitmap tmp = this->defaultBitmap;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(87)
		Float tmp1 = tmp->get_width();		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(87)
		int tmp2 = ((int)(tmp1));		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(87)
		::openfl::display::Bitmap tmp3 = this->defaultBitmap;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(87)
		Float tmp4 = tmp3->get_height();		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(87)
		int tmp5 = ((int)(tmp4));		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(87)
		::openfl::display::BitmapData tmp6 = ::openfl::display::BitmapData_obj::__new(tmp2,tmp5,true,(int)0);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(87)
		::openfl::display::BitmapData newBmpData = tmp6;		HX_STACK_VAR(newBmpData,"newBmpData");
		HX_STACK_LINE(89)
		bool tmp7 = horizontal;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(89)
		if ((tmp7)){
			HX_STACK_LINE(90)
			::openfl::display::Bitmap tmp8 = this->defaultBitmap;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(90)
			Float tmp9 = tmp8->get_width();		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(90)
			::openfl::geom::Matrix tmp10 = ::openfl::geom::Matrix_obj::__new((int)-1,(int)0,(int)0,(int)1,tmp9,(int)0);		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(90)
			matrix = tmp10;
		}
		else{
			HX_STACK_LINE(92)
			::openfl::display::Bitmap tmp8 = this->defaultBitmap;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(92)
			Float tmp9 = tmp8->get_height();		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(92)
			::openfl::geom::Matrix tmp10 = ::openfl::geom::Matrix_obj::__new((int)1,(int)0,(int)0,(int)-1,(int)0,tmp9);		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(92)
			matrix = tmp10;
		}
		HX_STACK_LINE(94)
		::openfl::display::Bitmap tmp8 = this->defaultBitmap;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(94)
		::openfl::display::BitmapData tmp9 = tmp8->bitmapData;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(94)
		::openfl::geom::Matrix tmp10 = matrix;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(94)
		newBmpData->draw(tmp9,tmp10,null(),null(),null(),null());
		HX_STACK_LINE(95)
		::openfl::display::Bitmap tmp11 = this->defaultBitmap;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(95)
		tmp11->bitmapData = newBmpData;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Projectile_obj,flipProjectileBmp,(void))

Void Projectile_obj::moveXAxis( ){
{
		HX_STACK_FRAME("actors.attacks.Projectile","moveXAxis",0xf29141f6,"actors.attacks.Projectile.moveXAxis","actors/attacks/Projectile.hx",98,0xd2ce4580)
		HX_STACK_THIS(this)
		HX_STACK_LINE(100)
		{
			HX_STACK_LINE(100)
			::actors::attacks::Projectile _g = hx::ObjectPtr<OBJ_>(this);		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(100)
			Float tmp = _g->get_x();		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(100)
			::actors::ObjectMover tmp1 = this->projectileMover;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(100)
			Float tmp2 = tmp1->getXVel();		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(100)
			int tmp3 = ::Math_obj::round(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(100)
			Float tmp4 = (tmp + tmp3);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(100)
			_g->set_x(tmp4);
		}
		HX_STACK_LINE(102)
		::maps::AreaMap tmp = this->currentMap;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(102)
		Array< ::Dynamic > collisions = tmp->checkCollisions(hx::ObjectPtr<OBJ_>(this),null());		HX_STACK_VAR(collisions,"collisions");
		HX_STACK_LINE(103)
		bool tmp1 = (collisions->length > (int)0);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(103)
		if ((tmp1)){
			HX_STACK_LINE(104)
			this->expired = true;
		}
	}
return null();
}


Void Projectile_obj::moveYAxis( ){
{
		HX_STACK_FRAME("actors.attacks.Projectile","moveYAxis",0x85f7d677,"actors.attacks.Projectile.moveYAxis","actors/attacks/Projectile.hx",110,0xd2ce4580)
		HX_STACK_THIS(this)
		HX_STACK_LINE(112)
		{
			HX_STACK_LINE(112)
			::actors::attacks::Projectile _g = hx::ObjectPtr<OBJ_>(this);		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(112)
			Float tmp = _g->get_y();		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(112)
			::actors::ObjectMover tmp1 = this->projectileMover;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(112)
			Float tmp2 = tmp1->getYVel();		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(112)
			int tmp3 = ::Math_obj::round(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(112)
			Float tmp4 = (tmp + tmp3);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(112)
			_g->set_y(tmp4);
		}
		HX_STACK_LINE(114)
		::maps::AreaMap tmp = this->currentMap;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(114)
		Array< ::Dynamic > collisions = tmp->checkCollisions(hx::ObjectPtr<OBJ_>(this),null());		HX_STACK_VAR(collisions,"collisions");
		HX_STACK_LINE(115)
		bool tmp1 = (collisions->length > (int)0);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(115)
		if ((tmp1)){
			HX_STACK_LINE(116)
			this->expired = true;
		}
	}
return null();
}


int Projectile_obj::getProjectileDamage( ){
	HX_STACK_FRAME("actors.attacks.Projectile","getProjectileDamage",0x077a12fc,"actors.attacks.Projectile.getProjectileDamage","actors/attacks/Projectile.hx",123,0xd2ce4580)
	HX_STACK_THIS(this)
	HX_STACK_LINE(123)
	int tmp = this->damage;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(123)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(Projectile_obj,getProjectileDamage,return )

::actors::attacks::Projectile Projectile_obj::createClone( ){
	HX_STACK_FRAME("actors.attacks.Projectile","createClone",0x6b29d7cf,"actors.attacks.Projectile.createClone","actors/attacks/Projectile.hx",126,0xd2ce4580)
	HX_STACK_THIS(this)
	HX_STACK_LINE(126)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Projectile_obj,createClone,return )


Projectile_obj::Projectile_obj()
{
}

void Projectile_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Projectile);
	HX_MARK_MEMBER_NAME(projectileMover,"projectileMover");
	HX_MARK_MEMBER_NAME(duration,"duration");
	HX_MARK_MEMBER_NAME(damage,"damage");
	HX_MARK_MEMBER_NAME(expired,"expired");
	::actors::Actor_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void Projectile_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(projectileMover,"projectileMover");
	HX_VISIT_MEMBER_NAME(duration,"duration");
	HX_VISIT_MEMBER_NAME(damage,"damage");
	HX_VISIT_MEMBER_NAME(expired,"expired");
	::actors::Actor_obj::__Visit(HX_VISIT_ARG);
}

Dynamic Projectile_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"damage") ) { return damage; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"expired") ) { return expired; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"duration") ) { return duration; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"moveXAxis") ) { return moveXAxis_dyn(); }
		if (HX_FIELD_EQ(inName,"moveYAxis") ) { return moveYAxis_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"createClone") ) { return createClone_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"flipProjectile") ) { return flipProjectile_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"projectileMover") ) { return projectileMover; }
		if (HX_FIELD_EQ(inName,"invertXMovement") ) { return invertXMovement_dyn(); }
		if (HX_FIELD_EQ(inName,"invertYMovement") ) { return invertYMovement_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"updateProjectile") ) { return updateProjectile_dyn(); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"flipProjectileBmp") ) { return flipProjectileBmp_dyn(); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"getProjectileDamage") ) { return getProjectileDamage_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Projectile_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"damage") ) { damage=inValue.Cast< int >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"expired") ) { expired=inValue.Cast< bool >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"duration") ) { duration=inValue.Cast< int >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"projectileMover") ) { projectileMover=inValue.Cast< ::actors::ObjectMover >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool Projectile_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	return false;
}

void Projectile_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("projectileMover","\x98","\xa9","\x4c","\x23"));
	outFields->push(HX_HCSTRING("duration","\x54","\x0f","\x8e","\x14"));
	outFields->push(HX_HCSTRING("damage","\x6f","\x90","\xe4","\x1d"));
	outFields->push(HX_HCSTRING("expired","\xa5","\x5f","\x6a","\x25"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::actors::ObjectMover*/ ,(int)offsetof(Projectile_obj,projectileMover),HX_HCSTRING("projectileMover","\x98","\xa9","\x4c","\x23")},
	{hx::fsInt,(int)offsetof(Projectile_obj,duration),HX_HCSTRING("duration","\x54","\x0f","\x8e","\x14")},
	{hx::fsInt,(int)offsetof(Projectile_obj,damage),HX_HCSTRING("damage","\x6f","\x90","\xe4","\x1d")},
	{hx::fsBool,(int)offsetof(Projectile_obj,expired),HX_HCSTRING("expired","\xa5","\x5f","\x6a","\x25")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("projectileMover","\x98","\xa9","\x4c","\x23"),
	HX_HCSTRING("duration","\x54","\x0f","\x8e","\x14"),
	HX_HCSTRING("damage","\x6f","\x90","\xe4","\x1d"),
	HX_HCSTRING("expired","\xa5","\x5f","\x6a","\x25"),
	HX_HCSTRING("updateProjectile","\x52","\x55","\x77","\x0e"),
	HX_HCSTRING("flipProjectile","\xf6","\x96","\x53","\x12"),
	HX_HCSTRING("invertXMovement","\xd1","\xdf","\x9d","\xba"),
	HX_HCSTRING("invertYMovement","\xd2","\x48","\x8f","\x8d"),
	HX_HCSTRING("flipProjectileBmp","\xef","\x1a","\x5b","\xac"),
	HX_HCSTRING("moveXAxis","\x68","\xb4","\x2e","\x01"),
	HX_HCSTRING("moveYAxis","\xe9","\x48","\x95","\x94"),
	HX_HCSTRING("getProjectileDamage","\xee","\xc7","\x25","\xcb"),
	HX_HCSTRING("createClone","\xc1","\x4a","\xde","\x71"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Projectile_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Projectile_obj::__mClass,"__mClass");
};

#endif

hx::Class Projectile_obj::__mClass;

void Projectile_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("actors.attacks.Projectile","\x7c","\x10","\x51","\xa2");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &Projectile_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Projectile_obj >;
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
} // end namespace attacks
