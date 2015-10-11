#include <hxcpp.h>

#ifndef INCLUDED_Main
#include <Main.h>
#endif
#ifndef INCLUDED_core_Stack
#include <core/Stack.h>
#endif
#ifndef INCLUDED_core_StackNode
#include <core/StackNode.h>
#endif
#ifndef INCLUDED_lime_app_IModule
#include <lime/app/IModule.h>
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
#ifndef INCLUDED_openfl_display_Stage
#include <openfl/display/Stage.h>
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
namespace ui{

Void OverlayStack_obj::__construct()
{
HX_STACK_FRAME("ui.OverlayStack","new",0x38a7ca04,"ui.OverlayStack.new","ui/OverlayStack.hx",16,0x92a28b0b)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(17)
	super::__construct();
	HX_STACK_LINE(18)
	::core::Stack tmp = ::core::Stack_obj::__new();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(18)
	this->overlayStack = tmp;
}
;
	return null();
}

//OverlayStack_obj::~OverlayStack_obj() { }

Dynamic OverlayStack_obj::__CreateEmpty() { return  new OverlayStack_obj; }
hx::ObjectPtr< OverlayStack_obj > OverlayStack_obj::__new()
{  hx::ObjectPtr< OverlayStack_obj > _result_ = new OverlayStack_obj();
	_result_->__construct();
	return _result_;}

Dynamic OverlayStack_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< OverlayStack_obj > _result_ = new OverlayStack_obj();
	_result_->__construct();
	return _result_;}

Void OverlayStack_obj::deactivateStack( ){
{
		HX_STACK_FRAME("ui.OverlayStack","deactivateStack",0x298e9e18,"ui.OverlayStack.deactivateStack","ui/OverlayStack.hx",21,0x92a28b0b)
		HX_STACK_THIS(this)
		HX_STACK_LINE(22)
		::ui::Overlay tmp = this->getTopOverlay();		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(22)
		bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(22)
		if ((tmp1)){
			HX_STACK_LINE(23)
			::ui::Overlay tmp2 = this->getTopOverlay();		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(23)
			tmp2->deactivateOverlay();
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(OverlayStack_obj,deactivateStack,(void))

Void OverlayStack_obj::activateStack( ){
{
		HX_STACK_FRAME("ui.OverlayStack","activateStack",0x398e6139,"ui.OverlayStack.activateStack","ui/OverlayStack.hx",25,0x92a28b0b)
		HX_STACK_THIS(this)
		HX_STACK_LINE(26)
		::ui::Overlay tmp = this->getTopOverlay();		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(26)
		bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(26)
		if ((tmp1)){
			HX_STACK_LINE(27)
			::ui::Overlay tmp2 = this->getTopOverlay();		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(27)
			tmp2->activateOverlay();
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(OverlayStack_obj,activateStack,(void))

Void OverlayStack_obj::redrawStack( ){
{
		HX_STACK_FRAME("ui.OverlayStack","redrawStack",0xc19fe835,"ui.OverlayStack.redrawStack","ui/OverlayStack.hx",29,0x92a28b0b)
		HX_STACK_THIS(this)
		HX_STACK_LINE(30)
		::core::Stack tmp = this->overlayStack;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(30)
		::core::StackNode tempNode = tmp->first;		HX_STACK_VAR(tempNode,"tempNode");
		HX_STACK_LINE(32)
		while((true)){
			HX_STACK_LINE(32)
			bool tmp1 = (tempNode != null());		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(32)
			bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(32)
			if ((tmp2)){
				HX_STACK_LINE(32)
				break;
			}
			HX_STACK_LINE(33)
			::ui::Overlay tempOverlay = ((::ui::Overlay)(tempNode->content));		HX_STACK_VAR(tempOverlay,"tempOverlay");
			HX_STACK_LINE(34)
			tempOverlay->redrawOverlay();
			HX_STACK_LINE(35)
			tempNode = tempNode->nextNode;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(OverlayStack_obj,redrawStack,(void))

bool OverlayStack_obj::isEmpty( ){
	HX_STACK_FRAME("ui.OverlayStack","isEmpty",0x9e5b79e7,"ui.OverlayStack.isEmpty","ui/OverlayStack.hx",39,0x92a28b0b)
	HX_STACK_THIS(this)
	HX_STACK_LINE(39)
	::core::Stack tmp = this->overlayStack;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(39)
	bool tmp1 = tmp->isEmpty();		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(39)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(OverlayStack_obj,isEmpty,return )

Void OverlayStack_obj::pushOverlay( ::ui::Overlay overlay){
{
		HX_STACK_FRAME("ui.OverlayStack","pushOverlay",0xedc5e67a,"ui.OverlayStack.pushOverlay","ui/OverlayStack.hx",41,0x92a28b0b)
		HX_STACK_THIS(this)
		HX_STACK_ARG(overlay,"overlay")
		HX_STACK_LINE(42)
		::ui::Overlay tmp = this->getTopOverlay();		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(42)
		bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(42)
		if ((tmp1)){
			HX_STACK_LINE(43)
			::ui::Overlay tmp2 = this->getTopOverlay();		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(43)
			tmp2->deactivateOverlay();
		}
		HX_STACK_LINE(45)
		::core::Stack tmp2 = this->overlayStack;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(45)
		::ui::Overlay tmp3 = overlay;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(45)
		tmp2->push(tmp3);
		HX_STACK_LINE(46)
		overlay->addOverlayToClient(hx::ObjectPtr<OBJ_>(this));
		HX_STACK_LINE(48)
		::ui::Overlay tmp4 = this->getTopOverlay();		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(48)
		tmp4->activateOverlay();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(OverlayStack_obj,pushOverlay,(void))

::ui::Overlay OverlayStack_obj::peekStack( ){
	HX_STACK_FRAME("ui.OverlayStack","peekStack",0xdeba1051,"ui.OverlayStack.peekStack","ui/OverlayStack.hx",50,0x92a28b0b)
	HX_STACK_THIS(this)
	HX_STACK_LINE(51)
	::core::Stack tmp = this->overlayStack;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(51)
	Dynamic tmp1 = tmp->peek();		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(51)
	::ui::Overlay tmp2 = ((::ui::Overlay)(tmp1));		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(51)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC0(OverlayStack_obj,peekStack,return )

::ui::Overlay OverlayStack_obj::popStack( ){
	HX_STACK_FRAME("ui.OverlayStack","popStack",0x173e3fd3,"ui.OverlayStack.popStack","ui/OverlayStack.hx",53,0x92a28b0b)
	HX_STACK_THIS(this)
	HX_STACK_LINE(54)
	::ui::Overlay tmp = this->getTopOverlay();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(54)
	::ui::Overlay topOverlay = tmp;		HX_STACK_VAR(topOverlay,"topOverlay");
	HX_STACK_LINE(55)
	bool tmp1 = (topOverlay == null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(55)
	if ((tmp1)){
		HX_STACK_LINE(55)
		return null();
	}
	HX_STACK_LINE(57)
	topOverlay->deactivateOverlay();
	HX_STACK_LINE(58)
	topOverlay->removeOverlayFromClient(hx::ObjectPtr<OBJ_>(this));
	HX_STACK_LINE(59)
	::core::Stack tmp2 = this->overlayStack;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(59)
	tmp2->pop();
	HX_STACK_LINE(61)
	::ui::Overlay tmp3 = this->getTopOverlay();		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(61)
	bool tmp4 = (tmp3 != null());		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(61)
	if ((tmp4)){
		HX_STACK_LINE(62)
		::ui::Overlay tmp5 = this->getTopOverlay();		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(62)
		tmp5->activateOverlay();
	}
	HX_STACK_LINE(64)
	::Main tmp5 = ::Main_obj::getSingleton();		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(64)
	tmp5->stage->set_focus(hx::ObjectPtr<OBJ_>(this));
	HX_STACK_LINE(65)
	::ui::Overlay tmp6 = topOverlay;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(65)
	return tmp6;
}


HX_DEFINE_DYNAMIC_FUNC0(OverlayStack_obj,popStack,return )

int OverlayStack_obj::numOfOverlays( ){
	HX_STACK_FRAME("ui.OverlayStack","numOfOverlays",0x48d00ba4,"ui.OverlayStack.numOfOverlays","ui/OverlayStack.hx",67,0x92a28b0b)
	HX_STACK_THIS(this)
	HX_STACK_LINE(68)
	::core::Stack tmp = this->overlayStack;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(68)
	int tmp1 = tmp->getLength();		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(68)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(OverlayStack_obj,numOfOverlays,return )

Void OverlayStack_obj::emptyStack( ){
{
		HX_STACK_FRAME("ui.OverlayStack","emptyStack",0x81bc8057,"ui.OverlayStack.emptyStack","ui/OverlayStack.hx",71,0x92a28b0b)
		HX_STACK_THIS(this)
		HX_STACK_LINE(71)
		while((true)){
			HX_STACK_LINE(71)
			bool tmp = this->isEmpty();		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(71)
			bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(71)
			bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(71)
			if ((tmp2)){
				HX_STACK_LINE(71)
				break;
			}
			HX_STACK_LINE(72)
			this->popStack();
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(OverlayStack_obj,emptyStack,(void))

::ui::Overlay OverlayStack_obj::getTopOverlay( ){
	HX_STACK_FRAME("ui.OverlayStack","getTopOverlay",0x54327c55,"ui.OverlayStack.getTopOverlay","ui/OverlayStack.hx",75,0x92a28b0b)
	HX_STACK_THIS(this)
	HX_STACK_LINE(76)
	::core::Stack tmp = this->overlayStack;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(76)
	::core::StackNode tmp1 = tmp->first;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(76)
	bool tmp2 = (tmp1 == null());		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(76)
	if ((tmp2)){
		HX_STACK_LINE(76)
		return null();
	}
	HX_STACK_LINE(77)
	::core::Stack tmp3 = this->overlayStack;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(77)
	Dynamic tmp4 = tmp3->peek();		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(77)
	::ui::Overlay tmp5 = ((::ui::Overlay)(tmp4));		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(77)
	return tmp5;
}


HX_DEFINE_DYNAMIC_FUNC0(OverlayStack_obj,getTopOverlay,return )


OverlayStack_obj::OverlayStack_obj()
{
}

void OverlayStack_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(OverlayStack);
	HX_MARK_MEMBER_NAME(overlayStack,"overlayStack");
	::openfl::display::Sprite_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void OverlayStack_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(overlayStack,"overlayStack");
	::openfl::display::Sprite_obj::__Visit(HX_VISIT_ARG);
}

Dynamic OverlayStack_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"isEmpty") ) { return isEmpty_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"popStack") ) { return popStack_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"peekStack") ) { return peekStack_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"emptyStack") ) { return emptyStack_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"redrawStack") ) { return redrawStack_dyn(); }
		if (HX_FIELD_EQ(inName,"pushOverlay") ) { return pushOverlay_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"overlayStack") ) { return overlayStack; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"activateStack") ) { return activateStack_dyn(); }
		if (HX_FIELD_EQ(inName,"numOfOverlays") ) { return numOfOverlays_dyn(); }
		if (HX_FIELD_EQ(inName,"getTopOverlay") ) { return getTopOverlay_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"deactivateStack") ) { return deactivateStack_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic OverlayStack_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 12:
		if (HX_FIELD_EQ(inName,"overlayStack") ) { overlayStack=inValue.Cast< ::core::Stack >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool OverlayStack_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	return false;
}

void OverlayStack_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("overlayStack","\x98","\xa9","\xb9","\x10"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::core::Stack*/ ,(int)offsetof(OverlayStack_obj,overlayStack),HX_HCSTRING("overlayStack","\x98","\xa9","\xb9","\x10")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("overlayStack","\x98","\xa9","\xb9","\x10"),
	HX_HCSTRING("deactivateStack","\x74","\xbe","\x58","\x57"),
	HX_HCSTRING("activateStack","\x95","\x72","\xac","\x56"),
	HX_HCSTRING("redrawStack","\x91","\xaa","\x83","\x8c"),
	HX_HCSTRING("isEmpty","\x43","\xde","\x5f","\x0c"),
	HX_HCSTRING("pushOverlay","\xd6","\xa8","\xa9","\xb8"),
	HX_HCSTRING("peekStack","\xad","\x43","\xe5","\x21"),
	HX_HCSTRING("popStack","\xf7","\xab","\x11","\xed"),
	HX_HCSTRING("numOfOverlays","\x00","\x1d","\xee","\x65"),
	HX_HCSTRING("emptyStack","\x7b","\x3d","\x5e","\x04"),
	HX_HCSTRING("getTopOverlay","\xb1","\x8d","\x50","\x71"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(OverlayStack_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(OverlayStack_obj::__mClass,"__mClass");
};

#endif

hx::Class OverlayStack_obj::__mClass;

void OverlayStack_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("ui.OverlayStack","\x12","\xb8","\x79","\x51");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &OverlayStack_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< OverlayStack_obj >;
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

} // end namespace ui
