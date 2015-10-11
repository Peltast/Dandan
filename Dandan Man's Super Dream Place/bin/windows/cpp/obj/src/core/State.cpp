#include <hxcpp.h>

#ifndef INCLUDED_core_State
#include <core/State.h>
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
#ifndef INCLUDED_ui_Overlay
#include <ui/Overlay.h>
#endif
#ifndef INCLUDED_ui_OverlayStack
#include <ui/OverlayStack.h>
#endif
namespace core{

Void State_obj::__construct(::core::State state)
{
HX_STACK_FRAME("core.State","new",0xec3b2794,"core.State.new","core/State.hx",17,0xaf444f5d)
HX_STACK_THIS(this)
HX_STACK_ARG(state,"state")
{
	HX_STACK_LINE(18)
	super::__construct();
	HX_STACK_LINE(19)
	::ui::OverlayStack tmp = ::ui::OverlayStack_obj::__new();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(19)
	this->overlayStack = tmp;
	HX_STACK_LINE(20)
	::ui::OverlayStack tmp1 = this->overlayStack;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(20)
	this->addChild(tmp1);
	HX_STACK_LINE(22)
	bool tmp2 = (state != hx::ObjectPtr<OBJ_>(this));		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(22)
	if ((tmp2)){
		HX_STACK_LINE(23)
		::openfl::errors::Error tmp3 = ::openfl::errors::Error_obj::__new(HX_HCSTRING("This class is meant to be treated as Abstract.","\xba","\x08","\xad","\xc7"),null());		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(23)
		HX_STACK_DO_THROW(tmp3);
	}
}
;
	return null();
}

//State_obj::~State_obj() { }

Dynamic State_obj::__CreateEmpty() { return  new State_obj; }
hx::ObjectPtr< State_obj > State_obj::__new(::core::State state)
{  hx::ObjectPtr< State_obj > _result_ = new State_obj();
	_result_->__construct(state);
	return _result_;}

Dynamic State_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< State_obj > _result_ = new State_obj();
	_result_->__construct(inArgs[0]);
	return _result_;}

Void State_obj::redrawState( ){
{
		HX_STACK_FRAME("core.State","redrawState",0x1b23648e,"core.State.redrawState","core/State.hx",26,0xaf444f5d)
		HX_STACK_THIS(this)
		HX_STACK_LINE(27)
		::ui::OverlayStack tmp = this->overlayStack;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(27)
		tmp->redrawStack();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(State_obj,redrawState,(void))

Void State_obj::deactivateState( ){
{
		HX_STACK_FRAME("core.State","deactivateState",0x97802271,"core.State.deactivateState","core/State.hx",30,0xaf444f5d)
		HX_STACK_THIS(this)
		HX_STACK_LINE(31)
		::ui::OverlayStack tmp = this->overlayStack;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(31)
		tmp->deactivateStack();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(State_obj,deactivateState,(void))

Void State_obj::activateState( ){
{
		HX_STACK_FRAME("core.State","activateState",0x8cf46192,"core.State.activateState","core/State.hx",33,0xaf444f5d)
		HX_STACK_THIS(this)
		HX_STACK_LINE(34)
		::ui::OverlayStack tmp = this->overlayStack;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(34)
		tmp->activateStack();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(State_obj,activateState,(void))

Void State_obj::drawState( ){
{
		HX_STACK_FRAME("core.State","drawState",0xdcf561a1,"core.State.drawState","core/State.hx",37,0xaf444f5d)
		HX_STACK_THIS(this)
		HX_STACK_LINE(39)
		::ui::OverlayStack tmp = this->overlayStack;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(39)
		::ui::Overlay tmp1 = tmp->peekStack();		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(39)
		tmp1->updateOverlay();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(State_obj,drawState,(void))


State_obj::State_obj()
{
}

void State_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(State);
	HX_MARK_MEMBER_NAME(stateName,"stateName");
	HX_MARK_MEMBER_NAME(overlayStack,"overlayStack");
	::openfl::display::Sprite_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void State_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(stateName,"stateName");
	HX_VISIT_MEMBER_NAME(overlayStack,"overlayStack");
	::openfl::display::Sprite_obj::__Visit(HX_VISIT_ARG);
}

Dynamic State_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 9:
		if (HX_FIELD_EQ(inName,"stateName") ) { return stateName; }
		if (HX_FIELD_EQ(inName,"drawState") ) { return drawState_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"redrawState") ) { return redrawState_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"overlayStack") ) { return overlayStack; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"activateState") ) { return activateState_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"deactivateState") ) { return deactivateState_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic State_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 9:
		if (HX_FIELD_EQ(inName,"stateName") ) { stateName=inValue.Cast< ::String >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"overlayStack") ) { overlayStack=inValue.Cast< ::ui::OverlayStack >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool State_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	return false;
}

void State_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("stateName","\xfc","\xf0","\xa6","\x2b"));
	outFields->push(HX_HCSTRING("overlayStack","\x98","\xa9","\xb9","\x10"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsString,(int)offsetof(State_obj,stateName),HX_HCSTRING("stateName","\xfc","\xf0","\xa6","\x2b")},
	{hx::fsObject /*::ui::OverlayStack*/ ,(int)offsetof(State_obj,overlayStack),HX_HCSTRING("overlayStack","\x98","\xa9","\xb9","\x10")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("stateName","\xfc","\xf0","\xa6","\x2b"),
	HX_HCSTRING("overlayStack","\x98","\xa9","\xb9","\x10"),
	HX_HCSTRING("redrawState","\x5a","\xb9","\x83","\x8c"),
	HX_HCSTRING("deactivateState","\x3d","\xcd","\x58","\x57"),
	HX_HCSTRING("activateState","\x5e","\x81","\xac","\x56"),
	HX_HCSTRING("drawState","\x6d","\xab","\x16","\x4c"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(State_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(State_obj::__mClass,"__mClass");
};

#endif

hx::Class State_obj::__mClass;

void State_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("core.State","\xa2","\x0d","\x8b","\x2f");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &State_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< State_obj >;
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

} // end namespace core
