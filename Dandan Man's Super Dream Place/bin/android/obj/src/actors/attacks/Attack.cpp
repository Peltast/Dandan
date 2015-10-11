#include <hxcpp.h>

#ifndef INCLUDED_actors_ObjectMover
#include <actors/ObjectMover.h>
#endif
#ifndef INCLUDED_actors_attacks_Attack
#include <actors/attacks/Attack.h>
#endif
#ifndef INCLUDED_actors_attacks_Hitbox
#include <actors/attacks/Hitbox.h>
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
#ifndef INCLUDED_openfl_geom_Rectangle
#include <openfl/geom/Rectangle.h>
#endif
namespace actors{
namespace attacks{

Void Attack_obj::__construct(::actors::ObjectMover attackMovement,Array< ::Dynamic > hits,int duration,int damage,int stunDuration,::String __o_animation,::String __o_stunAnimation,hx::Null< bool >  __o_unstoppable)
{
HX_STACK_FRAME("actors.attacks.Attack","new",0x4bceab4d,"actors.attacks.Attack.new","actors/attacks/Attack.hx",24,0xbf816381)
HX_STACK_THIS(this)
HX_STACK_ARG(attackMovement,"attackMovement")
HX_STACK_ARG(hits,"hits")
HX_STACK_ARG(duration,"duration")
HX_STACK_ARG(damage,"damage")
HX_STACK_ARG(stunDuration,"stunDuration")
HX_STACK_ARG(__o_animation,"animation")
HX_STACK_ARG(__o_stunAnimation,"stunAnimation")
HX_STACK_ARG(__o_unstoppable,"unstoppable")
::String animation = __o_animation.Default(HX_HCSTRING("","\x00","\x00","\x00","\x00"));
::String stunAnimation = __o_stunAnimation.Default(HX_HCSTRING("","\x00","\x00","\x00","\x00"));
bool unstoppable = __o_unstoppable.Default(false);
{
	HX_STACK_LINE(25)
	this->attackMovement = attackMovement;
	HX_STACK_LINE(26)
	this->duration = duration;
	HX_STACK_LINE(27)
	::actors::attacks::Hitbox tmp = ::actors::attacks::Hitbox_obj::__new(hits,duration);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(27)
	this->attackHitbox = tmp;
	HX_STACK_LINE(28)
	this->damage = damage;
	HX_STACK_LINE(29)
	this->stunDuration = stunDuration;
	HX_STACK_LINE(30)
	this->attackAnimation = animation;
	HX_STACK_LINE(31)
	this->stunAnimation = stunAnimation;
	HX_STACK_LINE(32)
	this->unstoppable = unstoppable;
	HX_STACK_LINE(34)
	this->counter = (int)0;
	HX_STACK_LINE(36)
	this->active = false;
}
;
	return null();
}

//Attack_obj::~Attack_obj() { }

Dynamic Attack_obj::__CreateEmpty() { return  new Attack_obj; }
hx::ObjectPtr< Attack_obj > Attack_obj::__new(::actors::ObjectMover attackMovement,Array< ::Dynamic > hits,int duration,int damage,int stunDuration,::String __o_animation,::String __o_stunAnimation,hx::Null< bool >  __o_unstoppable)
{  hx::ObjectPtr< Attack_obj > _result_ = new Attack_obj();
	_result_->__construct(attackMovement,hits,duration,damage,stunDuration,__o_animation,__o_stunAnimation,__o_unstoppable);
	return _result_;}

Dynamic Attack_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Attack_obj > _result_ = new Attack_obj();
	_result_->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3],inArgs[4],inArgs[5],inArgs[6],inArgs[7]);
	return _result_;}

Void Attack_obj::startAttack( ){
{
		HX_STACK_FRAME("actors.attacks.Attack","startAttack",0x8a5969b7,"actors.attacks.Attack.startAttack","actors/attacks/Attack.hx",40,0xbf816381)
		HX_STACK_THIS(this)
		HX_STACK_LINE(40)
		this->active = true;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Attack_obj,startAttack,(void))

Void Attack_obj::endAttack( ){
{
		HX_STACK_FRAME("actors.attacks.Attack","endAttack",0x096b94b0,"actors.attacks.Attack.endAttack","actors/attacks/Attack.hx",42,0xbf816381)
		HX_STACK_THIS(this)
		HX_STACK_LINE(43)
		this->active = false;
		HX_STACK_LINE(44)
		this->counter = (int)0;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Attack_obj,endAttack,(void))

bool Attack_obj::updateAttack( ::actors::ObjectMover mover){
	HX_STACK_FRAME("actors.attacks.Attack","updateAttack",0xc41e8224,"actors.attacks.Attack.updateAttack","actors/attacks/Attack.hx",46,0xbf816381)
	HX_STACK_THIS(this)
	HX_STACK_ARG(mover,"mover")
	HX_STACK_LINE(47)
	bool tmp = this->active;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(47)
	bool tmp1 = tmp;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(47)
	bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(47)
	bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(47)
	bool tmp4;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(47)
	if ((tmp3)){
		HX_STACK_LINE(47)
		int tmp5 = this->duration;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(47)
		int tmp6 = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(47)
		tmp4 = (tmp6 < (int)0);
	}
	else{
		HX_STACK_LINE(47)
		tmp4 = true;
	}
	HX_STACK_LINE(47)
	if ((tmp4)){
		HX_STACK_LINE(47)
		return false;
	}
	HX_STACK_LINE(49)
	hx::AddEq(this->counter,(int)1);
	HX_STACK_LINE(51)
	int tmp5 = this->counter;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(51)
	int tmp6 = this->duration;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(51)
	bool tmp7 = (tmp5 >= tmp6);		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(51)
	if ((tmp7)){
		HX_STACK_LINE(52)
		this->endAttack();
		HX_STACK_LINE(53)
		return true;
	}
	HX_STACK_LINE(55)
	return false;
}


HX_DEFINE_DYNAMIC_FUNC1(Attack_obj,updateAttack,return )

bool Attack_obj::isActive( ){
	HX_STACK_FRAME("actors.attacks.Attack","isActive",0xd8334743,"actors.attacks.Attack.isActive","actors/attacks/Attack.hx",58,0xbf816381)
	HX_STACK_THIS(this)
	HX_STACK_LINE(59)
	bool tmp = this->active;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(59)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(Attack_obj,isActive,return )

::actors::ObjectMover Attack_obj::getMovement( ){
	HX_STACK_FRAME("actors.attacks.Attack","getMovement",0x588e57d2,"actors.attacks.Attack.getMovement","actors/attacks/Attack.hx",61,0xbf816381)
	HX_STACK_THIS(this)
	HX_STACK_LINE(62)
	::actors::ObjectMover tmp = this->attackMovement;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(62)
	bool tmp1 = (tmp == null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(62)
	if ((tmp1)){
		HX_STACK_LINE(62)
		return null();
	}
	HX_STACK_LINE(63)
	::actors::ObjectMover tmp2 = this->attackMovement;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(63)
	::actors::ObjectMover tmp3 = tmp2->copyMover();		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(63)
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC0(Attack_obj,getMovement,return )

::actors::attacks::Hitbox Attack_obj::getHits( ){
	HX_STACK_FRAME("actors.attacks.Attack","getHits",0x787847e3,"actors.attacks.Attack.getHits","actors/attacks/Attack.hx",65,0xbf816381)
	HX_STACK_THIS(this)
	HX_STACK_LINE(66)
	::actors::attacks::Hitbox tmp = this->attackHitbox;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(66)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(Attack_obj,getHits,return )

int Attack_obj::getDamage( ){
	HX_STACK_FRAME("actors.attacks.Attack","getDamage",0x83b46452,"actors.attacks.Attack.getDamage","actors/attacks/Attack.hx",68,0xbf816381)
	HX_STACK_THIS(this)
	HX_STACK_LINE(69)
	int tmp = this->damage;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(69)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(Attack_obj,getDamage,return )

int Attack_obj::getStunDuration( ){
	HX_STACK_FRAME("actors.attacks.Attack","getStunDuration",0x9d42ead1,"actors.attacks.Attack.getStunDuration","actors/attacks/Attack.hx",71,0xbf816381)
	HX_STACK_THIS(this)
	HX_STACK_LINE(72)
	int tmp = this->stunDuration;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(72)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(Attack_obj,getStunDuration,return )

int Attack_obj::getDuration( ){
	HX_STACK_FRAME("actors.attacks.Attack","getDuration",0x6ce4e1f7,"actors.attacks.Attack.getDuration","actors/attacks/Attack.hx",74,0xbf816381)
	HX_STACK_THIS(this)
	HX_STACK_LINE(75)
	int tmp = this->duration;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(75)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(Attack_obj,getDuration,return )

bool Attack_obj::hasAnimation( ){
	HX_STACK_FRAME("actors.attacks.Attack","hasAnimation",0xbcd1b3bd,"actors.attacks.Attack.hasAnimation","actors/attacks/Attack.hx",77,0xbf816381)
	HX_STACK_THIS(this)
	HX_STACK_LINE(78)
	::String tmp = this->attackAnimation;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(78)
	bool tmp1 = (tmp == HX_HCSTRING("","\x00","\x00","\x00","\x00"));		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(78)
	if ((tmp1)){
		HX_STACK_LINE(78)
		return false;
	}
	HX_STACK_LINE(79)
	return true;
}


HX_DEFINE_DYNAMIC_FUNC0(Attack_obj,hasAnimation,return )

::String Attack_obj::getAnimation( ){
	HX_STACK_FRAME("actors.attacks.Attack","getAnimation",0x3ed66b01,"actors.attacks.Attack.getAnimation","actors/attacks/Attack.hx",81,0xbf816381)
	HX_STACK_THIS(this)
	HX_STACK_LINE(82)
	::String tmp = this->attackAnimation;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(82)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(Attack_obj,getAnimation,return )

bool Attack_obj::hasStunAnimation( ){
	HX_STACK_FRAME("actors.attacks.Attack","hasStunAnimation",0x115477a3,"actors.attacks.Attack.hasStunAnimation","actors/attacks/Attack.hx",84,0xbf816381)
	HX_STACK_THIS(this)
	HX_STACK_LINE(85)
	::String tmp = this->stunAnimation;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(85)
	bool tmp1 = (tmp == HX_HCSTRING("","\x00","\x00","\x00","\x00"));		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(85)
	if ((tmp1)){
		HX_STACK_LINE(85)
		return false;
	}
	HX_STACK_LINE(86)
	return true;
}


HX_DEFINE_DYNAMIC_FUNC0(Attack_obj,hasStunAnimation,return )

::String Attack_obj::getStunAnimation( ){
	HX_STACK_FRAME("actors.attacks.Attack","getStunAnimation",0x60c020e7,"actors.attacks.Attack.getStunAnimation","actors/attacks/Attack.hx",88,0xbf816381)
	HX_STACK_THIS(this)
	HX_STACK_LINE(89)
	::String tmp = this->stunAnimation;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(89)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(Attack_obj,getStunAnimation,return )

bool Attack_obj::grantsUnstoppable( ){
	HX_STACK_FRAME("actors.attacks.Attack","grantsUnstoppable",0x25c2d2e5,"actors.attacks.Attack.grantsUnstoppable","actors/attacks/Attack.hx",92,0xbf816381)
	HX_STACK_THIS(this)
	HX_STACK_LINE(93)
	bool tmp = this->unstoppable;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(93)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(Attack_obj,grantsUnstoppable,return )


Attack_obj::Attack_obj()
{
}

void Attack_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Attack);
	HX_MARK_MEMBER_NAME(active,"active");
	HX_MARK_MEMBER_NAME(attackMovement,"attackMovement");
	HX_MARK_MEMBER_NAME(attackHitbox,"attackHitbox");
	HX_MARK_MEMBER_NAME(attackAnimation,"attackAnimation");
	HX_MARK_MEMBER_NAME(stunAnimation,"stunAnimation");
	HX_MARK_MEMBER_NAME(duration,"duration");
	HX_MARK_MEMBER_NAME(counter,"counter");
	HX_MARK_MEMBER_NAME(damage,"damage");
	HX_MARK_MEMBER_NAME(stunDuration,"stunDuration");
	HX_MARK_MEMBER_NAME(unstoppable,"unstoppable");
	HX_MARK_END_CLASS();
}

void Attack_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(active,"active");
	HX_VISIT_MEMBER_NAME(attackMovement,"attackMovement");
	HX_VISIT_MEMBER_NAME(attackHitbox,"attackHitbox");
	HX_VISIT_MEMBER_NAME(attackAnimation,"attackAnimation");
	HX_VISIT_MEMBER_NAME(stunAnimation,"stunAnimation");
	HX_VISIT_MEMBER_NAME(duration,"duration");
	HX_VISIT_MEMBER_NAME(counter,"counter");
	HX_VISIT_MEMBER_NAME(damage,"damage");
	HX_VISIT_MEMBER_NAME(stunDuration,"stunDuration");
	HX_VISIT_MEMBER_NAME(unstoppable,"unstoppable");
}

Dynamic Attack_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"active") ) { return active; }
		if (HX_FIELD_EQ(inName,"damage") ) { return damage; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"counter") ) { return counter; }
		if (HX_FIELD_EQ(inName,"getHits") ) { return getHits_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"duration") ) { return duration; }
		if (HX_FIELD_EQ(inName,"isActive") ) { return isActive_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"endAttack") ) { return endAttack_dyn(); }
		if (HX_FIELD_EQ(inName,"getDamage") ) { return getDamage_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"unstoppable") ) { return unstoppable; }
		if (HX_FIELD_EQ(inName,"startAttack") ) { return startAttack_dyn(); }
		if (HX_FIELD_EQ(inName,"getMovement") ) { return getMovement_dyn(); }
		if (HX_FIELD_EQ(inName,"getDuration") ) { return getDuration_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"attackHitbox") ) { return attackHitbox; }
		if (HX_FIELD_EQ(inName,"stunDuration") ) { return stunDuration; }
		if (HX_FIELD_EQ(inName,"updateAttack") ) { return updateAttack_dyn(); }
		if (HX_FIELD_EQ(inName,"hasAnimation") ) { return hasAnimation_dyn(); }
		if (HX_FIELD_EQ(inName,"getAnimation") ) { return getAnimation_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"stunAnimation") ) { return stunAnimation; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"attackMovement") ) { return attackMovement; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"attackAnimation") ) { return attackAnimation; }
		if (HX_FIELD_EQ(inName,"getStunDuration") ) { return getStunDuration_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"hasStunAnimation") ) { return hasStunAnimation_dyn(); }
		if (HX_FIELD_EQ(inName,"getStunAnimation") ) { return getStunAnimation_dyn(); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"grantsUnstoppable") ) { return grantsUnstoppable_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Attack_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"active") ) { active=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"damage") ) { damage=inValue.Cast< int >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"counter") ) { counter=inValue.Cast< int >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"duration") ) { duration=inValue.Cast< int >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"unstoppable") ) { unstoppable=inValue.Cast< bool >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"attackHitbox") ) { attackHitbox=inValue.Cast< ::actors::attacks::Hitbox >(); return inValue; }
		if (HX_FIELD_EQ(inName,"stunDuration") ) { stunDuration=inValue.Cast< int >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"stunAnimation") ) { stunAnimation=inValue.Cast< ::String >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"attackMovement") ) { attackMovement=inValue.Cast< ::actors::ObjectMover >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"attackAnimation") ) { attackAnimation=inValue.Cast< ::String >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool Attack_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	return false;
}

void Attack_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("active","\xc6","\x41","\x46","\x16"));
	outFields->push(HX_HCSTRING("attackMovement","\x17","\x45","\x86","\x5f"));
	outFields->push(HX_HCSTRING("attackHitbox","\x80","\x63","\x3f","\x69"));
	outFields->push(HX_HCSTRING("attackAnimation","\x1c","\x1a","\xce","\x50"));
	outFields->push(HX_HCSTRING("stunAnimation","\x6a","\x62","\xe4","\x92"));
	outFields->push(HX_HCSTRING("duration","\x54","\x0f","\x8e","\x14"));
	outFields->push(HX_HCSTRING("counter","\xfc","\xae","\x59","\x1d"));
	outFields->push(HX_HCSTRING("damage","\x6f","\x90","\xe4","\x1d"));
	outFields->push(HX_HCSTRING("stunDuration","\xae","\x8a","\xca","\x61"));
	outFields->push(HX_HCSTRING("unstoppable","\x4f","\xb5","\x04","\xc0"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsBool,(int)offsetof(Attack_obj,active),HX_HCSTRING("active","\xc6","\x41","\x46","\x16")},
	{hx::fsObject /*::actors::ObjectMover*/ ,(int)offsetof(Attack_obj,attackMovement),HX_HCSTRING("attackMovement","\x17","\x45","\x86","\x5f")},
	{hx::fsObject /*::actors::attacks::Hitbox*/ ,(int)offsetof(Attack_obj,attackHitbox),HX_HCSTRING("attackHitbox","\x80","\x63","\x3f","\x69")},
	{hx::fsString,(int)offsetof(Attack_obj,attackAnimation),HX_HCSTRING("attackAnimation","\x1c","\x1a","\xce","\x50")},
	{hx::fsString,(int)offsetof(Attack_obj,stunAnimation),HX_HCSTRING("stunAnimation","\x6a","\x62","\xe4","\x92")},
	{hx::fsInt,(int)offsetof(Attack_obj,duration),HX_HCSTRING("duration","\x54","\x0f","\x8e","\x14")},
	{hx::fsInt,(int)offsetof(Attack_obj,counter),HX_HCSTRING("counter","\xfc","\xae","\x59","\x1d")},
	{hx::fsInt,(int)offsetof(Attack_obj,damage),HX_HCSTRING("damage","\x6f","\x90","\xe4","\x1d")},
	{hx::fsInt,(int)offsetof(Attack_obj,stunDuration),HX_HCSTRING("stunDuration","\xae","\x8a","\xca","\x61")},
	{hx::fsBool,(int)offsetof(Attack_obj,unstoppable),HX_HCSTRING("unstoppable","\x4f","\xb5","\x04","\xc0")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("active","\xc6","\x41","\x46","\x16"),
	HX_HCSTRING("attackMovement","\x17","\x45","\x86","\x5f"),
	HX_HCSTRING("attackHitbox","\x80","\x63","\x3f","\x69"),
	HX_HCSTRING("attackAnimation","\x1c","\x1a","\xce","\x50"),
	HX_HCSTRING("stunAnimation","\x6a","\x62","\xe4","\x92"),
	HX_HCSTRING("duration","\x54","\x0f","\x8e","\x14"),
	HX_HCSTRING("counter","\xfc","\xae","\x59","\x1d"),
	HX_HCSTRING("damage","\x6f","\x90","\xe4","\x1d"),
	HX_HCSTRING("stunDuration","\xae","\x8a","\xca","\x61"),
	HX_HCSTRING("unstoppable","\x4f","\xb5","\x04","\xc0"),
	HX_HCSTRING("startAttack","\xca","\x59","\xf6","\x57"),
	HX_HCSTRING("endAttack","\x03","\x4a","\xf2","\x1f"),
	HX_HCSTRING("updateAttack","\xb1","\xa2","\xd3","\xdf"),
	HX_HCSTRING("isActive","\x50","\xdd","\xaf","\x6e"),
	HX_HCSTRING("getMovement","\xe5","\x47","\x2b","\x26"),
	HX_HCSTRING("getHits","\x76","\xf2","\x90","\x17"),
	HX_HCSTRING("getDamage","\xa5","\x19","\x3b","\x9a"),
	HX_HCSTRING("getStunDuration","\x64","\xe0","\xb4","\x84"),
	HX_HCSTRING("getDuration","\x0a","\xd2","\x81","\x3a"),
	HX_HCSTRING("hasAnimation","\x4a","\xd4","\x86","\xd8"),
	HX_HCSTRING("getAnimation","\x8e","\x8b","\x8b","\x5a"),
	HX_HCSTRING("hasStunAnimation","\xb0","\x62","\x99","\xad"),
	HX_HCSTRING("getStunAnimation","\xf4","\x0b","\x05","\xfd"),
	HX_HCSTRING("grantsUnstoppable","\x38","\x93","\xcb","\x45"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Attack_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Attack_obj::__mClass,"__mClass");
};

#endif

hx::Class Attack_obj::__mClass;

void Attack_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("actors.attacks.Attack","\xdb","\x00","\x52","\x03");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &Attack_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Attack_obj >;
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
