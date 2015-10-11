#include <hxcpp.h>

#include "hxMath.h"
#ifndef INCLUDED_actors_ObjectMover
#include <actors/ObjectMover.h>
#endif
#ifndef INCLUDED_openfl_geom_Point
#include <openfl/geom/Point.h>
#endif
namespace actors{

Void ObjectMover_obj::__construct(Float xAcc,Float yAcc,int targetXVel,int targetYVel,Float xVel,Float yVel,int maxSpeedX,int maxSpeedY,int jumpCharges,hx::Null< int >  __o_gravity,hx::Null< bool >  __o_takesInput,hx::Null< bool >  __o_obeysGravity)
{
HX_STACK_FRAME("actors.ObjectMover","new",0x54ba8644,"actors.ObjectMover.new","actors/ObjectMover.hx",30,0x7af58d6d)
HX_STACK_THIS(this)
HX_STACK_ARG(xAcc,"xAcc")
HX_STACK_ARG(yAcc,"yAcc")
HX_STACK_ARG(targetXVel,"targetXVel")
HX_STACK_ARG(targetYVel,"targetYVel")
HX_STACK_ARG(xVel,"xVel")
HX_STACK_ARG(yVel,"yVel")
HX_STACK_ARG(maxSpeedX,"maxSpeedX")
HX_STACK_ARG(maxSpeedY,"maxSpeedY")
HX_STACK_ARG(jumpCharges,"jumpCharges")
HX_STACK_ARG(__o_gravity,"gravity")
HX_STACK_ARG(__o_takesInput,"takesInput")
HX_STACK_ARG(__o_obeysGravity,"obeysGravity")
int gravity = __o_gravity.Default(10);
bool takesInput = __o_takesInput.Default(true);
bool obeysGravity = __o_obeysGravity.Default(true);
{
	HX_STACK_LINE(31)
	this->xAcc = xAcc;
	HX_STACK_LINE(32)
	this->yAcc = yAcc;
	HX_STACK_LINE(33)
	this->targetXVel = targetXVel;
	HX_STACK_LINE(34)
	this->targetYVel = targetYVel;
	HX_STACK_LINE(35)
	this->xVel = xVel;
	HX_STACK_LINE(36)
	this->yVel = yVel;
	HX_STACK_LINE(37)
	this->maxSpeedX = maxSpeedX;
	HX_STACK_LINE(38)
	this->maxSpeedY = maxSpeedY;
	HX_STACK_LINE(39)
	this->maxJumpCharges = jumpCharges;
	HX_STACK_LINE(40)
	this->jumpCharges = jumpCharges;
	HX_STACK_LINE(41)
	this->gravity = gravity;
	HX_STACK_LINE(42)
	this->takesInput = takesInput;
	HX_STACK_LINE(43)
	this->obeysGravity = obeysGravity;
}
;
	return null();
}

//ObjectMover_obj::~ObjectMover_obj() { }

Dynamic ObjectMover_obj::__CreateEmpty() { return  new ObjectMover_obj; }
hx::ObjectPtr< ObjectMover_obj > ObjectMover_obj::__new(Float xAcc,Float yAcc,int targetXVel,int targetYVel,Float xVel,Float yVel,int maxSpeedX,int maxSpeedY,int jumpCharges,hx::Null< int >  __o_gravity,hx::Null< bool >  __o_takesInput,hx::Null< bool >  __o_obeysGravity)
{  hx::ObjectPtr< ObjectMover_obj > _result_ = new ObjectMover_obj();
	_result_->__construct(xAcc,yAcc,targetXVel,targetYVel,xVel,yVel,maxSpeedX,maxSpeedY,jumpCharges,__o_gravity,__o_takesInput,__o_obeysGravity);
	return _result_;}

Dynamic ObjectMover_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< ObjectMover_obj > _result_ = new ObjectMover_obj();
	_result_->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3],inArgs[4],inArgs[5],inArgs[6],inArgs[7],inArgs[8],inArgs[9],inArgs[10],inArgs[11]);
	return _result_;}

Void ObjectMover_obj::updateMovement( ){
{
		HX_STACK_FRAME("actors.ObjectMover","updateMovement",0xf5ba84f4,"actors.ObjectMover.updateMovement","actors/ObjectMover.hx",48,0x7af58d6d)
		HX_STACK_THIS(this)
		HX_STACK_LINE(48)
		this->updateVelocity();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ObjectMover_obj,updateMovement,(void))

Void ObjectMover_obj::updateVelocity( ){
{
		HX_STACK_FRAME("actors.ObjectMover","updateVelocity",0x148101e2,"actors.ObjectMover.updateVelocity","actors/ObjectMover.hx",50,0x7af58d6d)
		HX_STACK_THIS(this)
		HX_STACK_LINE(52)
		int tmp = this->targetXVel;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(52)
		Float tmp1 = this->xAcc;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(52)
		Float tmp2 = (tmp * tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(52)
		Float tmp3 = this->xAcc;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(52)
		Float tmp4 = ((int)1 - tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(52)
		Float tmp5 = this->xVel;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(52)
		Float tmp6 = (tmp4 * tmp5);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(52)
		Float tmp7 = (tmp2 + tmp6);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(52)
		this->xVel = tmp7;
		HX_STACK_LINE(53)
		Float tmp8 = this->xVel;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(53)
		int tmp9 = this->maxSpeedX;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(53)
		bool tmp10 = (tmp8 > tmp9);		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(53)
		if ((tmp10)){
			HX_STACK_LINE(54)
			int tmp11 = this->maxSpeedX;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(54)
			this->xVel = tmp11;
		}
		else{
			HX_STACK_LINE(55)
			Float tmp11 = this->xVel;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(55)
			int tmp12 = this->maxSpeedX;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(55)
			int tmp13 = -(tmp12);		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(55)
			bool tmp14 = (tmp11 < tmp13);		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(55)
			if ((tmp14)){
				HX_STACK_LINE(56)
				int tmp15 = this->maxSpeedX;		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(56)
				int tmp16 = -(tmp15);		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(56)
				this->xVel = tmp16;
			}
		}
		HX_STACK_LINE(58)
		int tmp11 = this->targetYVel;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(58)
		Float tmp12 = this->yAcc;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(58)
		Float tmp13 = (tmp11 * tmp12);		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(58)
		Float tmp14 = this->yAcc;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(58)
		Float tmp15 = ((int)1 - tmp14);		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(58)
		Float tmp16 = this->yVel;		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(58)
		Float tmp17 = (tmp15 * tmp16);		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(58)
		Float tmp18 = (tmp13 + tmp17);		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(58)
		this->yVel = tmp18;
		HX_STACK_LINE(59)
		Float tmp19 = this->yVel;		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(59)
		int tmp20 = this->maxSpeedY;		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(59)
		bool tmp21 = (tmp19 > tmp20);		HX_STACK_VAR(tmp21,"tmp21");
		HX_STACK_LINE(59)
		if ((tmp21)){
			HX_STACK_LINE(60)
			int tmp22 = this->maxSpeedY;		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(60)
			this->yVel = tmp22;
		}
		else{
			HX_STACK_LINE(61)
			Float tmp22 = this->yVel;		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(61)
			int tmp23 = this->maxSpeedY;		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(61)
			int tmp24 = -(tmp23);		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(61)
			bool tmp25 = (tmp22 < tmp24);		HX_STACK_VAR(tmp25,"tmp25");
			HX_STACK_LINE(61)
			if ((tmp25)){
				HX_STACK_LINE(62)
				int tmp26 = this->maxSpeedY;		HX_STACK_VAR(tmp26,"tmp26");
				HX_STACK_LINE(62)
				int tmp27 = -(tmp26);		HX_STACK_VAR(tmp27,"tmp27");
				HX_STACK_LINE(62)
				this->yVel = tmp27;
			}
		}
		HX_STACK_LINE(64)
		bool tmp22 = this->obeysGravity;		HX_STACK_VAR(tmp22,"tmp22");
		HX_STACK_LINE(64)
		if ((tmp22)){
			HX_STACK_LINE(65)
			int tmp23 = this->gravity;		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(65)
			this->targetYVel = tmp23;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ObjectMover_obj,updateVelocity,(void))

Void ObjectMover_obj::setGrounded( ){
{
		HX_STACK_FRAME("actors.ObjectMover","setGrounded",0x79616e4c,"actors.ObjectMover.setGrounded","actors/ObjectMover.hx",68,0x7af58d6d)
		HX_STACK_THIS(this)
		HX_STACK_LINE(69)
		int tmp = this->maxJumpCharges;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(69)
		this->jumpCharges = tmp;
		HX_STACK_LINE(70)
		this->grounded = true;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ObjectMover_obj,setGrounded,(void))

Void ObjectMover_obj::applyForce( ::openfl::geom::Point direction,int intensity){
{
		HX_STACK_FRAME("actors.ObjectMover","applyForce",0xefddbc39,"actors.ObjectMover.applyForce","actors/ObjectMover.hx",73,0x7af58d6d)
		HX_STACK_THIS(this)
		HX_STACK_ARG(direction,"direction")
		HX_STACK_ARG(intensity,"intensity")
		HX_STACK_LINE(75)
		Float tmp = (direction->x * direction->x);		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(75)
		Float tmp1 = (direction->y * direction->y);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(75)
		Float tmp2 = (tmp + tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(75)
		Float tmp3 = ::Math_obj::sqrt(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(75)
		Float hypotenuse = tmp3;		HX_STACK_VAR(hypotenuse,"hypotenuse");
		HX_STACK_LINE(77)
		Float tmp4 = (Float(direction->x) / Float(hypotenuse));		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(77)
		int tmp5 = intensity;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(77)
		Float tmp6 = (tmp4 * tmp5);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(77)
		Float tmp7 = this->xAcc;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(77)
		Float tmp8 = (tmp6 * tmp7);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(77)
		int tmp9 = ::Math_obj::round(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(77)
		this->xVel = tmp9;
		HX_STACK_LINE(78)
		Float tmp10 = (Float(direction->y) / Float(hypotenuse));		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(78)
		int tmp11 = intensity;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(78)
		Float tmp12 = (tmp10 * tmp11);		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(78)
		Float tmp13 = this->yAcc;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(78)
		Float tmp14 = (tmp12 * tmp13);		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(78)
		int tmp15 = ::Math_obj::round(tmp14);		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(78)
		this->yVel = tmp15;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(ObjectMover_obj,applyForce,(void))

Void ObjectMover_obj::goLeft( ){
{
		HX_STACK_FRAME("actors.ObjectMover","goLeft",0x7472d2eb,"actors.ObjectMover.goLeft","actors/ObjectMover.hx",81,0x7af58d6d)
		HX_STACK_THIS(this)
		HX_STACK_LINE(82)
		bool tmp = this->takesInput;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(82)
		bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(82)
		if ((tmp1)){
			HX_STACK_LINE(82)
			return null();
		}
		HX_STACK_LINE(84)
		this->targetXVel = (int)-5;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ObjectMover_obj,goLeft,(void))

Void ObjectMover_obj::goRight( ){
{
		HX_STACK_FRAME("actors.ObjectMover","goRight",0xe712c878,"actors.ObjectMover.goRight","actors/ObjectMover.hx",86,0x7af58d6d)
		HX_STACK_THIS(this)
		HX_STACK_LINE(87)
		bool tmp = this->takesInput;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(87)
		bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(87)
		if ((tmp1)){
			HX_STACK_LINE(87)
			return null();
		}
		HX_STACK_LINE(89)
		this->targetXVel = (int)5;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ObjectMover_obj,goRight,(void))

Void ObjectMover_obj::goUp( ){
{
		HX_STACK_FRAME("actors.ObjectMover","goUp",0xc9e1f03f,"actors.ObjectMover.goUp","actors/ObjectMover.hx",91,0x7af58d6d)
		HX_STACK_THIS(this)
		HX_STACK_LINE(92)
		bool tmp = this->takesInput;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(92)
		bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(92)
		if ((tmp1)){
			HX_STACK_LINE(92)
			return null();
		}
		HX_STACK_LINE(94)
		this->targetYVel = (int)-5;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ObjectMover_obj,goUp,(void))

Void ObjectMover_obj::goDown( ){
{
		HX_STACK_FRAME("actors.ObjectMover","goDown",0x6f30c346,"actors.ObjectMover.goDown","actors/ObjectMover.hx",96,0x7af58d6d)
		HX_STACK_THIS(this)
		HX_STACK_LINE(97)
		bool tmp = this->takesInput;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(97)
		bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(97)
		if ((tmp1)){
			HX_STACK_LINE(97)
			return null();
		}
		HX_STACK_LINE(99)
		this->targetYVel = (int)5;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ObjectMover_obj,goDown,(void))

Void ObjectMover_obj::stopLeft( ){
{
		HX_STACK_FRAME("actors.ObjectMover","stopLeft",0x55f1bcc5,"actors.ObjectMover.stopLeft","actors/ObjectMover.hx",101,0x7af58d6d)
		HX_STACK_THIS(this)
		HX_STACK_LINE(102)
		bool tmp = this->takesInput;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(102)
		bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(102)
		if ((tmp1)){
			HX_STACK_LINE(102)
			return null();
		}
		HX_STACK_LINE(104)
		int tmp2 = this->targetXVel;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(104)
		bool tmp3 = (tmp2 < (int)0);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(104)
		if ((tmp3)){
			HX_STACK_LINE(105)
			this->targetXVel = (int)0;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ObjectMover_obj,stopLeft,(void))

Void ObjectMover_obj::stopRight( ){
{
		HX_STACK_FRAME("actors.ObjectMover","stopRight",0x54a07d5e,"actors.ObjectMover.stopRight","actors/ObjectMover.hx",107,0x7af58d6d)
		HX_STACK_THIS(this)
		HX_STACK_LINE(108)
		bool tmp = this->takesInput;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(108)
		bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(108)
		if ((tmp1)){
			HX_STACK_LINE(108)
			return null();
		}
		HX_STACK_LINE(110)
		int tmp2 = this->targetXVel;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(110)
		bool tmp3 = (tmp2 > (int)0);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(110)
		if ((tmp3)){
			HX_STACK_LINE(111)
			this->targetXVel = (int)0;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ObjectMover_obj,stopRight,(void))

Void ObjectMover_obj::stopUp( ){
{
		HX_STACK_FRAME("actors.ObjectMover","stopUp",0x38e6cf99,"actors.ObjectMover.stopUp","actors/ObjectMover.hx",113,0x7af58d6d)
		HX_STACK_THIS(this)
		HX_STACK_LINE(114)
		bool tmp = this->takesInput;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(114)
		bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(114)
		if ((tmp1)){
			HX_STACK_LINE(114)
			return null();
		}
		HX_STACK_LINE(116)
		int tmp2 = this->targetYVel;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(116)
		bool tmp3 = (tmp2 < (int)0);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(116)
		if ((tmp3)){
			HX_STACK_LINE(117)
			this->targetYVel = (int)0;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ObjectMover_obj,stopUp,(void))

Void ObjectMover_obj::stopDown( ){
{
		HX_STACK_FRAME("actors.ObjectMover","stopDown",0x50afad20,"actors.ObjectMover.stopDown","actors/ObjectMover.hx",119,0x7af58d6d)
		HX_STACK_THIS(this)
		HX_STACK_LINE(120)
		bool tmp = this->takesInput;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(120)
		bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(120)
		if ((tmp1)){
			HX_STACK_LINE(120)
			return null();
		}
		HX_STACK_LINE(122)
		int tmp2 = this->targetYVel;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(122)
		bool tmp3 = (tmp2 > (int)0);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(122)
		if ((tmp3)){
			HX_STACK_LINE(123)
			this->targetYVel = (int)0;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ObjectMover_obj,stopDown,(void))

Void ObjectMover_obj::jump( ){
{
		HX_STACK_FRAME("actors.ObjectMover","jump",0xcbe2368a,"actors.ObjectMover.jump","actors/ObjectMover.hx",125,0x7af58d6d)
		HX_STACK_THIS(this)
		HX_STACK_LINE(126)
		bool tmp = this->takesInput;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(126)
		bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(126)
		if ((tmp1)){
			HX_STACK_LINE(126)
			return null();
		}
		HX_STACK_LINE(127)
		int tmp2 = this->jumpCharges;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(127)
		bool tmp3 = (tmp2 == (int)0);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(127)
		if ((tmp3)){
			HX_STACK_LINE(127)
			return null();
		}
		HX_STACK_LINE(129)
		hx::SubEq(this->jumpCharges,(int)1);
		HX_STACK_LINE(130)
		this->grounded = false;
		HX_STACK_LINE(131)
		this->yVel = (int)-15;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ObjectMover_obj,jump,(void))

Float ObjectMover_obj::getXVel( ){
	HX_STACK_FRAME("actors.ObjectMover","getXVel",0x6fd75c5f,"actors.ObjectMover.getXVel","actors/ObjectMover.hx",134,0x7af58d6d)
	HX_STACK_THIS(this)
	HX_STACK_LINE(135)
	Float tmp = this->xVel;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(135)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(ObjectMover_obj,getXVel,return )

Float ObjectMover_obj::getYVel( ){
	HX_STACK_FRAME("actors.ObjectMover","getYVel",0x708092fe,"actors.ObjectMover.getYVel","actors/ObjectMover.hx",137,0x7af58d6d)
	HX_STACK_THIS(this)
	HX_STACK_LINE(138)
	Float tmp = this->yVel;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(138)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(ObjectMover_obj,getYVel,return )

Void ObjectMover_obj::invertTargetXVel( ){
{
		HX_STACK_FRAME("actors.ObjectMover","invertTargetXVel",0x965c1f08,"actors.ObjectMover.invertTargetXVel","actors/ObjectMover.hx",140,0x7af58d6d)
		HX_STACK_THIS(this)
		HX_STACK_LINE(141)
		int tmp = this->targetXVel;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(141)
		int tmp1 = -(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(141)
		this->targetXVel = tmp1;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ObjectMover_obj,invertTargetXVel,(void))

Void ObjectMover_obj::invertTargetYVel( ){
{
		HX_STACK_FRAME("actors.ObjectMover","invertTargetYVel",0x970555a7,"actors.ObjectMover.invertTargetYVel","actors/ObjectMover.hx",143,0x7af58d6d)
		HX_STACK_THIS(this)
		HX_STACK_LINE(144)
		int tmp = this->targetYVel;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(144)
		int tmp1 = -(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(144)
		this->targetYVel = tmp1;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ObjectMover_obj,invertTargetYVel,(void))

int ObjectMover_obj::getTargetXVel( ){
	HX_STACK_FRAME("actors.ObjectMover","getTargetXVel",0x1e08a7d0,"actors.ObjectMover.getTargetXVel","actors/ObjectMover.hx",146,0x7af58d6d)
	HX_STACK_THIS(this)
	HX_STACK_LINE(147)
	int tmp = this->targetXVel;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(147)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(ObjectMover_obj,getTargetXVel,return )

int ObjectMover_obj::getTargetYVel( ){
	HX_STACK_FRAME("actors.ObjectMover","getTargetYVel",0x1eb1de6f,"actors.ObjectMover.getTargetYVel","actors/ObjectMover.hx",149,0x7af58d6d)
	HX_STACK_THIS(this)
	HX_STACK_LINE(150)
	int tmp = this->targetYVel;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(150)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(ObjectMover_obj,getTargetYVel,return )

bool ObjectMover_obj::getIsGrounded( ){
	HX_STACK_FRAME("actors.ObjectMover","getIsGrounded",0x7f4f53ca,"actors.ObjectMover.getIsGrounded","actors/ObjectMover.hx",152,0x7af58d6d)
	HX_STACK_THIS(this)
	HX_STACK_LINE(153)
	bool tmp = this->grounded;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(153)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(ObjectMover_obj,getIsGrounded,return )

Void ObjectMover_obj::freeze( ){
{
		HX_STACK_FRAME("actors.ObjectMover","freeze",0xd8d19af3,"actors.ObjectMover.freeze","actors/ObjectMover.hx",156,0x7af58d6d)
		HX_STACK_THIS(this)
		HX_STACK_LINE(157)
		this->xVel = (int)0;
		HX_STACK_LINE(158)
		this->yVel = (int)0;
		HX_STACK_LINE(159)
		this->targetXVel = (int)0;
		HX_STACK_LINE(160)
		this->targetYVel = (int)0;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ObjectMover_obj,freeze,(void))

::actors::ObjectMover ObjectMover_obj::copyMover( ){
	HX_STACK_FRAME("actors.ObjectMover","copyMover",0xed5b2930,"actors.ObjectMover.copyMover","actors/ObjectMover.hx",163,0x7af58d6d)
	HX_STACK_THIS(this)
	HX_STACK_LINE(164)
	Float tmp = this->xAcc;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(164)
	Float tmp1 = this->yAcc;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(164)
	int tmp2 = this->targetXVel;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(164)
	int tmp3 = this->targetYVel;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(164)
	Float tmp4 = this->xVel;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(164)
	Float tmp5 = this->yVel;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(164)
	int tmp6 = this->maxSpeedX;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(164)
	int tmp7 = this->maxSpeedY;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(164)
	int tmp8 = this->jumpCharges;		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(164)
	int tmp9 = this->gravity;		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(164)
	bool tmp10 = this->takesInput;		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(164)
	::actors::ObjectMover tmp11 = ::actors::ObjectMover_obj::__new(tmp,tmp1,tmp2,tmp3,tmp4,tmp5,tmp6,tmp7,tmp8,tmp9,tmp10,null());		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(164)
	return tmp11;
}


HX_DEFINE_DYNAMIC_FUNC0(ObjectMover_obj,copyMover,return )


ObjectMover_obj::ObjectMover_obj()
{
}

Dynamic ObjectMover_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"xAcc") ) { return xAcc; }
		if (HX_FIELD_EQ(inName,"yAcc") ) { return yAcc; }
		if (HX_FIELD_EQ(inName,"xVel") ) { return xVel; }
		if (HX_FIELD_EQ(inName,"yVel") ) { return yVel; }
		if (HX_FIELD_EQ(inName,"goUp") ) { return goUp_dyn(); }
		if (HX_FIELD_EQ(inName,"jump") ) { return jump_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"goLeft") ) { return goLeft_dyn(); }
		if (HX_FIELD_EQ(inName,"goDown") ) { return goDown_dyn(); }
		if (HX_FIELD_EQ(inName,"stopUp") ) { return stopUp_dyn(); }
		if (HX_FIELD_EQ(inName,"freeze") ) { return freeze_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"gravity") ) { return gravity; }
		if (HX_FIELD_EQ(inName,"goRight") ) { return goRight_dyn(); }
		if (HX_FIELD_EQ(inName,"getXVel") ) { return getXVel_dyn(); }
		if (HX_FIELD_EQ(inName,"getYVel") ) { return getYVel_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"grounded") ) { return grounded; }
		if (HX_FIELD_EQ(inName,"stopLeft") ) { return stopLeft_dyn(); }
		if (HX_FIELD_EQ(inName,"stopDown") ) { return stopDown_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"maxSpeedX") ) { return maxSpeedX; }
		if (HX_FIELD_EQ(inName,"maxSpeedY") ) { return maxSpeedY; }
		if (HX_FIELD_EQ(inName,"stopRight") ) { return stopRight_dyn(); }
		if (HX_FIELD_EQ(inName,"copyMover") ) { return copyMover_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"targetXVel") ) { return targetXVel; }
		if (HX_FIELD_EQ(inName,"targetYVel") ) { return targetYVel; }
		if (HX_FIELD_EQ(inName,"takesInput") ) { return takesInput; }
		if (HX_FIELD_EQ(inName,"applyForce") ) { return applyForce_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"jumpCharges") ) { return jumpCharges; }
		if (HX_FIELD_EQ(inName,"setGrounded") ) { return setGrounded_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"obeysGravity") ) { return obeysGravity; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"getTargetXVel") ) { return getTargetXVel_dyn(); }
		if (HX_FIELD_EQ(inName,"getTargetYVel") ) { return getTargetYVel_dyn(); }
		if (HX_FIELD_EQ(inName,"getIsGrounded") ) { return getIsGrounded_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"maxJumpCharges") ) { return maxJumpCharges; }
		if (HX_FIELD_EQ(inName,"updateMovement") ) { return updateMovement_dyn(); }
		if (HX_FIELD_EQ(inName,"updateVelocity") ) { return updateVelocity_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"invertTargetXVel") ) { return invertTargetXVel_dyn(); }
		if (HX_FIELD_EQ(inName,"invertTargetYVel") ) { return invertTargetYVel_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic ObjectMover_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"xAcc") ) { xAcc=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"yAcc") ) { yAcc=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"xVel") ) { xVel=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"yVel") ) { yVel=inValue.Cast< Float >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"gravity") ) { gravity=inValue.Cast< int >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"grounded") ) { grounded=inValue.Cast< bool >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"maxSpeedX") ) { maxSpeedX=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"maxSpeedY") ) { maxSpeedY=inValue.Cast< int >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"targetXVel") ) { targetXVel=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"targetYVel") ) { targetYVel=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"takesInput") ) { takesInput=inValue.Cast< bool >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"jumpCharges") ) { jumpCharges=inValue.Cast< int >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"obeysGravity") ) { obeysGravity=inValue.Cast< bool >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"maxJumpCharges") ) { maxJumpCharges=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool ObjectMover_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	return false;
}

void ObjectMover_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("xAcc","\xa9","\x43","\x83","\x4f"));
	outFields->push(HX_HCSTRING("yAcc","\x48","\x7a","\x2c","\x50"));
	outFields->push(HX_HCSTRING("targetXVel","\xb6","\xd0","\xc3","\xa9"));
	outFields->push(HX_HCSTRING("targetYVel","\x55","\x07","\x6d","\xaa"));
	outFields->push(HX_HCSTRING("maxSpeedX","\xb5","\x10","\x86","\xea"));
	outFields->push(HX_HCSTRING("maxSpeedY","\xb6","\x10","\x86","\xea"));
	outFields->push(HX_HCSTRING("grounded","\xa6","\x6a","\x5b","\x90"));
	outFields->push(HX_HCSTRING("maxJumpCharges","\xed","\x8f","\x69","\xb9"));
	outFields->push(HX_HCSTRING("jumpCharges","\x31","\x88","\xbf","\xb1"));
	outFields->push(HX_HCSTRING("gravity","\x4e","\x6e","\xff","\x77"));
	outFields->push(HX_HCSTRING("xVel","\xc5","\x34","\x93","\x4f"));
	outFields->push(HX_HCSTRING("yVel","\x64","\x6b","\x3c","\x50"));
	outFields->push(HX_HCSTRING("takesInput","\x1e","\x5a","\x9a","\xab"));
	outFields->push(HX_HCSTRING("obeysGravity","\x62","\x5d","\x9b","\x5f"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsFloat,(int)offsetof(ObjectMover_obj,xAcc),HX_HCSTRING("xAcc","\xa9","\x43","\x83","\x4f")},
	{hx::fsFloat,(int)offsetof(ObjectMover_obj,yAcc),HX_HCSTRING("yAcc","\x48","\x7a","\x2c","\x50")},
	{hx::fsInt,(int)offsetof(ObjectMover_obj,targetXVel),HX_HCSTRING("targetXVel","\xb6","\xd0","\xc3","\xa9")},
	{hx::fsInt,(int)offsetof(ObjectMover_obj,targetYVel),HX_HCSTRING("targetYVel","\x55","\x07","\x6d","\xaa")},
	{hx::fsInt,(int)offsetof(ObjectMover_obj,maxSpeedX),HX_HCSTRING("maxSpeedX","\xb5","\x10","\x86","\xea")},
	{hx::fsInt,(int)offsetof(ObjectMover_obj,maxSpeedY),HX_HCSTRING("maxSpeedY","\xb6","\x10","\x86","\xea")},
	{hx::fsBool,(int)offsetof(ObjectMover_obj,grounded),HX_HCSTRING("grounded","\xa6","\x6a","\x5b","\x90")},
	{hx::fsInt,(int)offsetof(ObjectMover_obj,maxJumpCharges),HX_HCSTRING("maxJumpCharges","\xed","\x8f","\x69","\xb9")},
	{hx::fsInt,(int)offsetof(ObjectMover_obj,jumpCharges),HX_HCSTRING("jumpCharges","\x31","\x88","\xbf","\xb1")},
	{hx::fsInt,(int)offsetof(ObjectMover_obj,gravity),HX_HCSTRING("gravity","\x4e","\x6e","\xff","\x77")},
	{hx::fsFloat,(int)offsetof(ObjectMover_obj,xVel),HX_HCSTRING("xVel","\xc5","\x34","\x93","\x4f")},
	{hx::fsFloat,(int)offsetof(ObjectMover_obj,yVel),HX_HCSTRING("yVel","\x64","\x6b","\x3c","\x50")},
	{hx::fsBool,(int)offsetof(ObjectMover_obj,takesInput),HX_HCSTRING("takesInput","\x1e","\x5a","\x9a","\xab")},
	{hx::fsBool,(int)offsetof(ObjectMover_obj,obeysGravity),HX_HCSTRING("obeysGravity","\x62","\x5d","\x9b","\x5f")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("xAcc","\xa9","\x43","\x83","\x4f"),
	HX_HCSTRING("yAcc","\x48","\x7a","\x2c","\x50"),
	HX_HCSTRING("targetXVel","\xb6","\xd0","\xc3","\xa9"),
	HX_HCSTRING("targetYVel","\x55","\x07","\x6d","\xaa"),
	HX_HCSTRING("maxSpeedX","\xb5","\x10","\x86","\xea"),
	HX_HCSTRING("maxSpeedY","\xb6","\x10","\x86","\xea"),
	HX_HCSTRING("grounded","\xa6","\x6a","\x5b","\x90"),
	HX_HCSTRING("maxJumpCharges","\xed","\x8f","\x69","\xb9"),
	HX_HCSTRING("jumpCharges","\x31","\x88","\xbf","\xb1"),
	HX_HCSTRING("gravity","\x4e","\x6e","\xff","\x77"),
	HX_HCSTRING("xVel","\xc5","\x34","\x93","\x4f"),
	HX_HCSTRING("yVel","\x64","\x6b","\x3c","\x50"),
	HX_HCSTRING("takesInput","\x1e","\x5a","\x9a","\xab"),
	HX_HCSTRING("obeysGravity","\x62","\x5d","\x9b","\x5f"),
	HX_HCSTRING("updateMovement","\x58","\x78","\x61","\x35"),
	HX_HCSTRING("updateVelocity","\x46","\xf5","\x27","\x54"),
	HX_HCSTRING("setGrounded","\x68","\x34","\xbc","\xc0"),
	HX_HCSTRING("applyForce","\x9d","\x2d","\xe6","\xaf"),
	HX_HCSTRING("goLeft","\x4f","\xc2","\xc5","\x4a"),
	HX_HCSTRING("goRight","\x94","\x50","\x51","\x99"),
	HX_HCSTRING("goUp","\xa3","\x7e","\x69","\x44"),
	HX_HCSTRING("goDown","\xaa","\xb2","\x83","\x45"),
	HX_HCSTRING("stopLeft","\x29","\x4d","\x6a","\x9a"),
	HX_HCSTRING("stopRight","\x7a","\x44","\xa6","\xf9"),
	HX_HCSTRING("stopUp","\xfd","\xbe","\x39","\x0f"),
	HX_HCSTRING("stopDown","\x84","\x3d","\x28","\x95"),
	HX_HCSTRING("jump","\xee","\xc4","\x69","\x46"),
	HX_HCSTRING("getXVel","\x7b","\xe4","\x15","\x22"),
	HX_HCSTRING("getYVel","\x1a","\x1b","\xbf","\x22"),
	HX_HCSTRING("invertTargetXVel","\x6c","\xb3","\x31","\x44"),
	HX_HCSTRING("invertTargetYVel","\x0b","\xea","\xda","\x44"),
	HX_HCSTRING("getTargetXVel","\xec","\x2c","\x36","\x06"),
	HX_HCSTRING("getTargetYVel","\x8b","\x63","\xdf","\x06"),
	HX_HCSTRING("getIsGrounded","\xe6","\xd8","\x7c","\x67"),
	HX_HCSTRING("freeze","\x57","\x8a","\x24","\xaf"),
	HX_HCSTRING("copyMover","\x4c","\xf0","\x60","\x92"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ObjectMover_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ObjectMover_obj::__mClass,"__mClass");
};

#endif

hx::Class ObjectMover_obj::__mClass;

void ObjectMover_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("actors.ObjectMover","\x52","\x54","\xe9","\xad");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &ObjectMover_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< ObjectMover_obj >;
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
