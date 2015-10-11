#include <hxcpp.h>

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
#ifndef INCLUDED_ui_OverlayItem
#include <ui/OverlayItem.h>
#endif
namespace ui{

Void OverlayItem_obj::__construct(::ui::OverlayItem overlayItem,bool exclusiveActivity)
{
HX_STACK_FRAME("ui.OverlayItem","new",0xc2c7b4fb,"ui.OverlayItem.new","ui/OverlayItem.hx",18,0x3692e296)
HX_STACK_THIS(this)
HX_STACK_ARG(overlayItem,"overlayItem")
HX_STACK_ARG(exclusiveActivity,"exclusiveActivity")
{
	HX_STACK_LINE(19)
	super::__construct();
	HX_STACK_LINE(20)
	bool tmp = (hx::ObjectPtr<OBJ_>(this) != overlayItem);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(20)
	if ((tmp)){
		HX_STACK_LINE(20)
		::openfl::errors::Error tmp1 = ::openfl::errors::Error_obj::__new(HX_HCSTRING("OverlayItem is meant to be used as an abstract class.","\xce","\xd9","\x80","\xc1"),null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(20)
		HX_STACK_DO_THROW(tmp1);
	}
	HX_STACK_LINE(21)
	this->active = false;
	HX_STACK_LINE(22)
	this->selected = false;
	HX_STACK_LINE(23)
	this->exclusiveActivity = exclusiveActivity;
}
;
	return null();
}

//OverlayItem_obj::~OverlayItem_obj() { }

Dynamic OverlayItem_obj::__CreateEmpty() { return  new OverlayItem_obj; }
hx::ObjectPtr< OverlayItem_obj > OverlayItem_obj::__new(::ui::OverlayItem overlayItem,bool exclusiveActivity)
{  hx::ObjectPtr< OverlayItem_obj > _result_ = new OverlayItem_obj();
	_result_->__construct(overlayItem,exclusiveActivity);
	return _result_;}

Dynamic OverlayItem_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< OverlayItem_obj > _result_ = new OverlayItem_obj();
	_result_->__construct(inArgs[0],inArgs[1]);
	return _result_;}

bool OverlayItem_obj::itemHitTest( Float x,Float y){
	HX_STACK_FRAME("ui.OverlayItem","itemHitTest",0xe7a4530d,"ui.OverlayItem.itemHitTest","ui/OverlayItem.hx",26,0x3692e296)
	HX_STACK_THIS(this)
	HX_STACK_ARG(x,"x")
	HX_STACK_ARG(y,"y")
	HX_STACK_LINE(27)
	Float tmp = x;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(27)
	Float tmp1 = y;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(27)
	bool tmp2 = this->hitTestPoint(tmp,tmp1,null());		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(27)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC2(OverlayItem_obj,itemHitTest,return )

Void OverlayItem_obj::setOverlay( ::ui::Overlay parent){
{
		HX_STACK_FRAME("ui.OverlayItem","setOverlay",0x4d0b1cd3,"ui.OverlayItem.setOverlay","ui/OverlayItem.hx",31,0x3692e296)
		HX_STACK_THIS(this)
		HX_STACK_ARG(parent,"parent")
		HX_STACK_LINE(31)
		this->parentOverlay = parent;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(OverlayItem_obj,setOverlay,(void))

Void OverlayItem_obj::resetOverlayItem( ){
{
		HX_STACK_FRAME("ui.OverlayItem","resetOverlayItem",0x358fe5b9,"ui.OverlayItem.resetOverlayItem","ui/OverlayItem.hx",34,0x3692e296)
		HX_STACK_THIS(this)
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(OverlayItem_obj,resetOverlayItem,(void))

Void OverlayItem_obj::activateOverlayItem( ){
{
		HX_STACK_FRAME("ui.OverlayItem","activateOverlayItem",0xdcc64a6b,"ui.OverlayItem.activateOverlayItem","ui/OverlayItem.hx",35,0x3692e296)
		HX_STACK_THIS(this)
		HX_STACK_LINE(36)
		this->active = true;
		HX_STACK_LINE(38)
		bool tmp = this->exclusiveActivity;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(38)
		bool tmp1;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(38)
		if ((tmp)){
			HX_STACK_LINE(38)
			::ui::Overlay tmp2 = this->parentOverlay;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(38)
			::ui::Overlay tmp3 = tmp2;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(38)
			tmp1 = (tmp3 != null());
		}
		else{
			HX_STACK_LINE(38)
			tmp1 = false;
		}
		HX_STACK_LINE(38)
		if ((tmp1)){
			HX_STACK_LINE(38)
			::ui::Overlay tmp2 = this->parentOverlay;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(38)
			tmp2->resetItems(hx::ObjectPtr<OBJ_>(this));
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(OverlayItem_obj,activateOverlayItem,(void))

Void OverlayItem_obj::updateOverlayItem( ){
{
		HX_STACK_FRAME("ui.OverlayItem","updateOverlayItem",0x1cf88715,"ui.OverlayItem.updateOverlayItem","ui/OverlayItem.hx",40,0x3692e296)
		HX_STACK_THIS(this)
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(OverlayItem_obj,updateOverlayItem,(void))

Void OverlayItem_obj::deactivateOverlayItem( ){
{
		HX_STACK_FRAME("ui.OverlayItem","deactivateOverlayItem",0x307b644a,"ui.OverlayItem.deactivateOverlayItem","ui/OverlayItem.hx",43,0x3692e296)
		HX_STACK_THIS(this)
		HX_STACK_LINE(44)
		this->active = false;
		HX_STACK_LINE(45)
		this->selected = false;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(OverlayItem_obj,deactivateOverlayItem,(void))

bool OverlayItem_obj::isActive( ){
	HX_STACK_FRAME("ui.OverlayItem","isActive",0x42f266d5,"ui.OverlayItem.isActive","ui/OverlayItem.hx",48,0x3692e296)
	HX_STACK_THIS(this)
	HX_STACK_LINE(48)
	bool tmp = this->active;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(48)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(OverlayItem_obj,isActive,return )

bool OverlayItem_obj::isSelected( ){
	HX_STACK_FRAME("ui.OverlayItem","isSelected",0x7d37f12a,"ui.OverlayItem.isSelected","ui/OverlayItem.hx",49,0x3692e296)
	HX_STACK_THIS(this)
	HX_STACK_LINE(49)
	bool tmp = this->selected;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(49)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(OverlayItem_obj,isSelected,return )

bool OverlayItem_obj::requiresExclusiveActivity( ){
	HX_STACK_FRAME("ui.OverlayItem","requiresExclusiveActivity",0x93b9685a,"ui.OverlayItem.requiresExclusiveActivity","ui/OverlayItem.hx",50,0x3692e296)
	HX_STACK_THIS(this)
	HX_STACK_LINE(50)
	bool tmp = this->exclusiveActivity;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(50)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(OverlayItem_obj,requiresExclusiveActivity,return )


OverlayItem_obj::OverlayItem_obj()
{
}

void OverlayItem_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(OverlayItem);
	HX_MARK_MEMBER_NAME(parentOverlay,"parentOverlay");
	HX_MARK_MEMBER_NAME(active,"active");
	HX_MARK_MEMBER_NAME(selected,"selected");
	HX_MARK_MEMBER_NAME(exclusiveActivity,"exclusiveActivity");
	::openfl::display::Sprite_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void OverlayItem_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(parentOverlay,"parentOverlay");
	HX_VISIT_MEMBER_NAME(active,"active");
	HX_VISIT_MEMBER_NAME(selected,"selected");
	HX_VISIT_MEMBER_NAME(exclusiveActivity,"exclusiveActivity");
	::openfl::display::Sprite_obj::__Visit(HX_VISIT_ARG);
}

Dynamic OverlayItem_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"active") ) { return active; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"selected") ) { return selected; }
		if (HX_FIELD_EQ(inName,"isActive") ) { return isActive_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"setOverlay") ) { return setOverlay_dyn(); }
		if (HX_FIELD_EQ(inName,"isSelected") ) { return isSelected_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"itemHitTest") ) { return itemHitTest_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"parentOverlay") ) { return parentOverlay; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"resetOverlayItem") ) { return resetOverlayItem_dyn(); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"exclusiveActivity") ) { return exclusiveActivity; }
		if (HX_FIELD_EQ(inName,"updateOverlayItem") ) { return updateOverlayItem_dyn(); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"activateOverlayItem") ) { return activateOverlayItem_dyn(); }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"deactivateOverlayItem") ) { return deactivateOverlayItem_dyn(); }
		break;
	case 25:
		if (HX_FIELD_EQ(inName,"requiresExclusiveActivity") ) { return requiresExclusiveActivity_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic OverlayItem_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"active") ) { active=inValue.Cast< bool >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"selected") ) { selected=inValue.Cast< bool >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"parentOverlay") ) { parentOverlay=inValue.Cast< ::ui::Overlay >(); return inValue; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"exclusiveActivity") ) { exclusiveActivity=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool OverlayItem_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	return false;
}

void OverlayItem_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("parentOverlay","\x86","\xbf","\x24","\xb3"));
	outFields->push(HX_HCSTRING("active","\xc6","\x41","\x46","\x16"));
	outFields->push(HX_HCSTRING("selected","\x5b","\x2a","\x6d","\xb1"));
	outFields->push(HX_HCSTRING("exclusiveActivity","\xcd","\x44","\x5a","\xa7"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::ui::Overlay*/ ,(int)offsetof(OverlayItem_obj,parentOverlay),HX_HCSTRING("parentOverlay","\x86","\xbf","\x24","\xb3")},
	{hx::fsBool,(int)offsetof(OverlayItem_obj,active),HX_HCSTRING("active","\xc6","\x41","\x46","\x16")},
	{hx::fsBool,(int)offsetof(OverlayItem_obj,selected),HX_HCSTRING("selected","\x5b","\x2a","\x6d","\xb1")},
	{hx::fsBool,(int)offsetof(OverlayItem_obj,exclusiveActivity),HX_HCSTRING("exclusiveActivity","\xcd","\x44","\x5a","\xa7")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("parentOverlay","\x86","\xbf","\x24","\xb3"),
	HX_HCSTRING("active","\xc6","\x41","\x46","\x16"),
	HX_HCSTRING("selected","\x5b","\x2a","\x6d","\xb1"),
	HX_HCSTRING("exclusiveActivity","\xcd","\x44","\x5a","\xa7"),
	HX_HCSTRING("itemHitTest","\x72","\xdb","\x81","\x40"),
	HX_HCSTRING("setOverlay","\x0e","\x68","\xef","\xfb"),
	HX_HCSTRING("resetOverlayItem","\x34","\xcf","\xb0","\x86"),
	HX_HCSTRING("activateOverlayItem","\xd0","\x3f","\xaa","\x53"),
	HX_HCSTRING("updateOverlayItem","\x3a","\xe9","\xa3","\xc8"),
	HX_HCSTRING("deactivateOverlayItem","\xef","\x3c","\x53","\x20"),
	HX_HCSTRING("isActive","\x50","\xdd","\xaf","\x6e"),
	HX_HCSTRING("isSelected","\x65","\x3c","\x1c","\x2c"),
	HX_HCSTRING("requiresExclusiveActivity","\x7f","\xf7","\x7a","\x49"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(OverlayItem_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(OverlayItem_obj::__mClass,"__mClass");
};

#endif

hx::Class OverlayItem_obj::__mClass;

void OverlayItem_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("ui.OverlayItem","\x89","\x1b","\xfd","\xad");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &OverlayItem_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< OverlayItem_obj >;
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
