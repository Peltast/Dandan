#include <hxcpp.h>

#ifndef INCLUDED_openfl_utils_Dictionary
#include <openfl/utils/Dictionary.h>
#endif
namespace openfl{
namespace utils{

Void Dictionary_obj::__construct(hx::Null< bool >  __o_weakKeys)
{
HX_STACK_FRAME("openfl.utils.Dictionary","new",0x2a5f72e3,"openfl.utils.Dictionary.new","openfl/utils/Dictionary.hx",7,0x5979b1eb)
HX_STACK_THIS(this)
HX_STACK_ARG(__o_weakKeys,"weakKeys")
bool weakKeys = __o_weakKeys.Default(false);
{
}
;
	return null();
}

//Dictionary_obj::~Dictionary_obj() { }

Dynamic Dictionary_obj::__CreateEmpty() { return  new Dictionary_obj; }
hx::ObjectPtr< Dictionary_obj > Dictionary_obj::__new(hx::Null< bool >  __o_weakKeys)
{  hx::ObjectPtr< Dictionary_obj > _result_ = new Dictionary_obj();
	_result_->__construct(__o_weakKeys);
	return _result_;}

Dynamic Dictionary_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Dictionary_obj > _result_ = new Dictionary_obj();
	_result_->__construct(inArgs[0]);
	return _result_;}


Dictionary_obj::Dictionary_obj()
{
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Dictionary_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Dictionary_obj::__mClass,"__mClass");
};

#endif

hx::Class Dictionary_obj::__mClass;

void Dictionary_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("openfl.utils.Dictionary","\x71","\xc5","\x95","\x9c");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< Dictionary_obj >;
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

} // end namespace openfl
} // end namespace utils
