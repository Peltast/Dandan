#include <hxcpp.h>

#ifndef INCLUDED_lime_system__ThreadPool_ThreadPoolMessage
#include <lime/system/_ThreadPool/ThreadPoolMessage.h>
#endif
#ifndef INCLUDED_lime_system__ThreadPool_ThreadPoolMessageType
#include <lime/system/_ThreadPool/ThreadPoolMessageType.h>
#endif
namespace lime{
namespace _system{
namespace _ThreadPool{

Void ThreadPoolMessage_obj::__construct(::lime::_system::_ThreadPool::ThreadPoolMessageType type,::String id,Dynamic message)
{
HX_STACK_FRAME("lime.system._ThreadPool.ThreadPoolMessage","new",0x973bef04,"lime.system._ThreadPool.ThreadPoolMessage.new","lime/system/ThreadPool.hx",231,0x8993fbb2)
HX_STACK_THIS(this)
HX_STACK_ARG(type,"type")
HX_STACK_ARG(id,"id")
HX_STACK_ARG(message,"message")
{
	HX_STACK_LINE(233)
	this->type = type;
	HX_STACK_LINE(234)
	this->id = id;
	HX_STACK_LINE(235)
	this->message = message;
}
;
	return null();
}

//ThreadPoolMessage_obj::~ThreadPoolMessage_obj() { }

Dynamic ThreadPoolMessage_obj::__CreateEmpty() { return  new ThreadPoolMessage_obj; }
hx::ObjectPtr< ThreadPoolMessage_obj > ThreadPoolMessage_obj::__new(::lime::_system::_ThreadPool::ThreadPoolMessageType type,::String id,Dynamic message)
{  hx::ObjectPtr< ThreadPoolMessage_obj > _result_ = new ThreadPoolMessage_obj();
	_result_->__construct(type,id,message);
	return _result_;}

Dynamic ThreadPoolMessage_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< ThreadPoolMessage_obj > _result_ = new ThreadPoolMessage_obj();
	_result_->__construct(inArgs[0],inArgs[1],inArgs[2]);
	return _result_;}


ThreadPoolMessage_obj::ThreadPoolMessage_obj()
{
}

void ThreadPoolMessage_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ThreadPoolMessage);
	HX_MARK_MEMBER_NAME(id,"id");
	HX_MARK_MEMBER_NAME(message,"message");
	HX_MARK_MEMBER_NAME(type,"type");
	HX_MARK_END_CLASS();
}

void ThreadPoolMessage_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(id,"id");
	HX_VISIT_MEMBER_NAME(message,"message");
	HX_VISIT_MEMBER_NAME(type,"type");
}

Dynamic ThreadPoolMessage_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"id") ) { return id; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"type") ) { return type; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"message") ) { return message; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic ThreadPoolMessage_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"id") ) { id=inValue.Cast< ::String >(); return inValue; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"type") ) { type=inValue.Cast< ::lime::_system::_ThreadPool::ThreadPoolMessageType >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"message") ) { message=inValue.Cast< Dynamic >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool ThreadPoolMessage_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	return false;
}

void ThreadPoolMessage_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("id","\xdb","\x5b","\x00","\x00"));
	outFields->push(HX_HCSTRING("message","\xc7","\x35","\x11","\x9a"));
	outFields->push(HX_HCSTRING("type","\xba","\xf2","\x08","\x4d"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsString,(int)offsetof(ThreadPoolMessage_obj,id),HX_HCSTRING("id","\xdb","\x5b","\x00","\x00")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(ThreadPoolMessage_obj,message),HX_HCSTRING("message","\xc7","\x35","\x11","\x9a")},
	{hx::fsObject /*::lime::_system::_ThreadPool::ThreadPoolMessageType*/ ,(int)offsetof(ThreadPoolMessage_obj,type),HX_HCSTRING("type","\xba","\xf2","\x08","\x4d")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("id","\xdb","\x5b","\x00","\x00"),
	HX_HCSTRING("message","\xc7","\x35","\x11","\x9a"),
	HX_HCSTRING("type","\xba","\xf2","\x08","\x4d"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ThreadPoolMessage_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ThreadPoolMessage_obj::__mClass,"__mClass");
};

#endif

hx::Class ThreadPoolMessage_obj::__mClass;

void ThreadPoolMessage_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("lime.system._ThreadPool.ThreadPoolMessage","\x12","\x5d","\xd7","\x9f");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &ThreadPoolMessage_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< ThreadPoolMessage_obj >;
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

} // end namespace lime
} // end namespace system
} // end namespace _ThreadPool
