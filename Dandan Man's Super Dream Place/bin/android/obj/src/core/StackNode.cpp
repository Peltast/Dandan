#include <hxcpp.h>

#ifndef INCLUDED_core_StackNode
#include <core/StackNode.h>
#endif
namespace core{

Void StackNode_obj::__construct()
{
HX_STACK_FRAME("core.StackNode","new",0xd56c8fed,"core.StackNode.new","core/StackNode.hx",13,0xe89309a4)
HX_STACK_THIS(this)
{
}
;
	return null();
}

//StackNode_obj::~StackNode_obj() { }

Dynamic StackNode_obj::__CreateEmpty() { return  new StackNode_obj; }
hx::ObjectPtr< StackNode_obj > StackNode_obj::__new()
{  hx::ObjectPtr< StackNode_obj > _result_ = new StackNode_obj();
	_result_->__construct();
	return _result_;}

Dynamic StackNode_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< StackNode_obj > _result_ = new StackNode_obj();
	_result_->__construct();
	return _result_;}


StackNode_obj::StackNode_obj()
{
}

void StackNode_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(StackNode);
	HX_MARK_MEMBER_NAME(nextNode,"nextNode");
	HX_MARK_MEMBER_NAME(content,"content");
	HX_MARK_END_CLASS();
}

void StackNode_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(nextNode,"nextNode");
	HX_VISIT_MEMBER_NAME(content,"content");
}

Dynamic StackNode_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"content") ) { return content; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"nextNode") ) { return nextNode; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic StackNode_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"content") ) { content=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"nextNode") ) { nextNode=inValue.Cast< ::core::StackNode >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool StackNode_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	return false;
}

void StackNode_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("nextNode","\x95","\xb0","\xd6","\xf4"));
	outFields->push(HX_HCSTRING("content","\x39","\x8d","\x77","\x19"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::core::StackNode*/ ,(int)offsetof(StackNode_obj,nextNode),HX_HCSTRING("nextNode","\x95","\xb0","\xd6","\xf4")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(StackNode_obj,content),HX_HCSTRING("content","\x39","\x8d","\x77","\x19")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("nextNode","\x95","\xb0","\xd6","\xf4"),
	HX_HCSTRING("content","\x39","\x8d","\x77","\x19"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(StackNode_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(StackNode_obj::__mClass,"__mClass");
};

#endif

hx::Class StackNode_obj::__mClass;

void StackNode_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("core.StackNode","\x7b","\x15","\xb9","\xa9");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &StackNode_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< StackNode_obj >;
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
