#include <hxcpp.h>

#ifndef INCLUDED_actors_ObjectMover
#include <actors/ObjectMover.h>
#endif
#ifndef INCLUDED_actors_attacks_AbsorbAttack
#include <actors/attacks/AbsorbAttack.h>
#endif
#ifndef INCLUDED_actors_attacks_Attack
#include <actors/attacks/Attack.h>
#endif
#ifndef INCLUDED_openfl_geom_Point
#include <openfl/geom/Point.h>
#endif
#ifndef INCLUDED_openfl_geom_Rectangle
#include <openfl/geom/Rectangle.h>
#endif
namespace actors{
namespace attacks{

Void AbsorbAttack_obj::__construct(::actors::ObjectMover attackMovement,Array< ::Dynamic > hits,int duration,int damage)
{
HX_STACK_FRAME("actors.attacks.AbsorbAttack","new",0xa75fda9a,"actors.attacks.AbsorbAttack.new","actors/attacks/AbsorbAttack.hx",15,0xc488ff54)
HX_STACK_THIS(this)
HX_STACK_ARG(attackMovement,"attackMovement")
HX_STACK_ARG(hits,"hits")
HX_STACK_ARG(duration,"duration")
HX_STACK_ARG(damage,"damage")
{
	HX_STACK_LINE(16)
	::actors::ObjectMover tmp = attackMovement;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(16)
	int tmp1 = duration;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(16)
	int tmp2 = damage;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(16)
	super::__construct(tmp,hits,tmp1,tmp2,(int)10,HX_HCSTRING("JumpingAttack","\x7c","\xcf","\xe1","\x1d"),HX_HCSTRING("JumpingAttackRest","\xb0","\xc4","\xa5","\xb0"),true,null());
}
;
	return null();
}

//AbsorbAttack_obj::~AbsorbAttack_obj() { }

Dynamic AbsorbAttack_obj::__CreateEmpty() { return  new AbsorbAttack_obj; }
hx::ObjectPtr< AbsorbAttack_obj > AbsorbAttack_obj::__new(::actors::ObjectMover attackMovement,Array< ::Dynamic > hits,int duration,int damage)
{  hx::ObjectPtr< AbsorbAttack_obj > _result_ = new AbsorbAttack_obj();
	_result_->__construct(attackMovement,hits,duration,damage);
	return _result_;}

Dynamic AbsorbAttack_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< AbsorbAttack_obj > _result_ = new AbsorbAttack_obj();
	_result_->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3]);
	return _result_;}

bool AbsorbAttack_obj::updateAttack( ::actors::ObjectMover mover){
	HX_STACK_FRAME("actors.attacks.AbsorbAttack","updateAttack",0x70d58137,"actors.attacks.AbsorbAttack.updateAttack","actors/attacks/AbsorbAttack.hx",20,0xc488ff54)
	HX_STACK_THIS(this)
	HX_STACK_ARG(mover,"mover")
	HX_STACK_LINE(21)
	bool tmp = mover->getIsGrounded();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(21)
	if ((tmp)){
		HX_STACK_LINE(22)
		::openfl::geom::Point tmp1 = ::openfl::geom::Point_obj::__new((int)0,(int)10);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(22)
		mover->applyForce(tmp1,(int)50);
		HX_STACK_LINE(23)
		int tmp2 = this->duration;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(23)
		this->counter = tmp2;
	}
	HX_STACK_LINE(26)
	::actors::ObjectMover tmp1 = mover;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(26)
	bool tmp2 = this->super::updateAttack(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(26)
	return tmp2;
}



AbsorbAttack_obj::AbsorbAttack_obj()
{
}

Dynamic AbsorbAttack_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 12:
		if (HX_FIELD_EQ(inName,"updateAttack") ) { return updateAttack_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("updateAttack","\xb1","\xa2","\xd3","\xdf"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(AbsorbAttack_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(AbsorbAttack_obj::__mClass,"__mClass");
};

#endif

hx::Class AbsorbAttack_obj::__mClass;

void AbsorbAttack_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("actors.attacks.AbsorbAttack","\xa8","\x45","\x4c","\x91");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< AbsorbAttack_obj >;
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
