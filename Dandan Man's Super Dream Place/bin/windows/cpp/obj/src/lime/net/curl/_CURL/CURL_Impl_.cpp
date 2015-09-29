#include <hxcpp.h>

#ifndef INCLUDED_lime_net_curl__CURL_CURL_Impl_
#include <lime/net/curl/_CURL/CURL_Impl_.h>
#endif
#ifndef INCLUDED_lime_system_System
#include <lime/system/System.h>
#endif
namespace lime{
namespace net{
namespace curl{
namespace _CURL{

Void CURL_Impl__obj::__construct()
{
	return null();
}

//CURL_Impl__obj::~CURL_Impl__obj() { }

Dynamic CURL_Impl__obj::__CreateEmpty() { return  new CURL_Impl__obj; }
hx::ObjectPtr< CURL_Impl__obj > CURL_Impl__obj::__new()
{  hx::ObjectPtr< CURL_Impl__obj > _result_ = new CURL_Impl__obj();
	_result_->__construct();
	return _result_;}

Dynamic CURL_Impl__obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< CURL_Impl__obj > _result_ = new CURL_Impl__obj();
	_result_->__construct();
	return _result_;}

int CURL_Impl__obj::GLOBAL_SSL;

int CURL_Impl__obj::GLOBAL_WIN32;

int CURL_Impl__obj::GLOBAL_ALL;

int CURL_Impl__obj::GLOBAL_NOTHING;

int CURL_Impl__obj::GLOBAL_DEFAULT;

int CURL_Impl__obj::GLOBAL_ACK_EINTR;

int CURL_Impl__obj::getDate( ::String date,int now){
	HX_STACK_FRAME("lime.net.curl._CURL.CURL_Impl_","getDate",0xf817421d,"lime.net.curl._CURL.CURL_Impl_.getDate","lime/net/curl/CURL.hx",18,0x82d3899b)
	HX_STACK_ARG(date,"date")
	HX_STACK_ARG(now,"now")
	HX_STACK_LINE(21)
	::String tmp = date;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(21)
	int tmp1 = now;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(21)
	int tmp2 = ::lime::net::curl::_CURL::CURL_Impl__obj::lime_curl_getdate(tmp,tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(21)
	return tmp2;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(CURL_Impl__obj,getDate,return )

Void CURL_Impl__obj::globalCleanup( ){
{
		HX_STACK_FRAME("lime.net.curl._CURL.CURL_Impl_","globalCleanup",0xf988f1fa,"lime.net.curl._CURL.CURL_Impl_.globalCleanup","lime/net/curl/CURL.hx",32,0x82d3899b)
		HX_STACK_LINE(32)
		::lime::net::curl::_CURL::CURL_Impl__obj::lime_curl_global_cleanup();
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(CURL_Impl__obj,globalCleanup,(void))

int CURL_Impl__obj::globalInit( int flags){
	HX_STACK_FRAME("lime.net.curl._CURL.CURL_Impl_","globalInit",0x7c47f37a,"lime.net.curl._CURL.CURL_Impl_.globalInit","lime/net/curl/CURL.hx",38,0x82d3899b)
	HX_STACK_ARG(flags,"flags")
	HX_STACK_LINE(41)
	int tmp = flags;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(41)
	Dynamic tmp1 = ::lime::net::curl::_CURL::CURL_Impl__obj::lime_curl_global_init(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(41)
	int tmp2 = ((int)(tmp1));		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(41)
	return tmp2;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(CURL_Impl__obj,globalInit,return )

::String CURL_Impl__obj::version( ){
	HX_STACK_FRAME("lime.net.curl._CURL.CURL_Impl_","version",0x60232351,"lime.net.curl._CURL.CURL_Impl_.version","lime/net/curl/CURL.hx",49,0x82d3899b)
	HX_STACK_LINE(52)
	::String tmp = ::lime::net::curl::_CURL::CURL_Impl__obj::lime_curl_version();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(52)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(CURL_Impl__obj,version,return )

::String CURL_Impl__obj::versionInfo( int type){
	HX_STACK_FRAME("lime.net.curl._CURL.CURL_Impl_","versionInfo",0x87fa045f,"lime.net.curl._CURL.CURL_Impl_.versionInfo","lime/net/curl/CURL.hx",60,0x82d3899b)
	HX_STACK_ARG(type,"type")
	HX_STACK_LINE(63)
	int tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(63)
	tmp = hx::TCast< ::Int >::cast(type);
	HX_STACK_LINE(63)
	::String tmp1 = ::lime::net::curl::_CURL::CURL_Impl__obj::lime_curl_version_info(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(63)
	return tmp1;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(CURL_Impl__obj,versionInfo,return )

bool CURL_Impl__obj::intGt( Float a,Float b){
	HX_STACK_FRAME("lime.net.curl._CURL.CURL_Impl_","intGt",0x725c30f5,"lime.net.curl._CURL.CURL_Impl_.intGt","lime/net/curl/CURL.hx",71,0x82d3899b)
	HX_STACK_ARG(a,"a")
	HX_STACK_ARG(b,"b")
	HX_STACK_LINE(73)
	bool tmp = (a > b);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(73)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(CURL_Impl__obj,intGt,return )

Dynamic CURL_Impl__obj::lime_curl_getdate;

Dynamic CURL_Impl__obj::lime_curl_global_cleanup;

Dynamic CURL_Impl__obj::lime_curl_global_init;

Dynamic CURL_Impl__obj::lime_curl_version;

Dynamic CURL_Impl__obj::lime_curl_version_info;


CURL_Impl__obj::CURL_Impl__obj()
{
}

bool CURL_Impl__obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"intGt") ) { outValue = intGt_dyn(); return true;  }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"getDate") ) { outValue = getDate_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"version") ) { outValue = version_dyn(); return true;  }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"globalInit") ) { outValue = globalInit_dyn(); return true;  }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"versionInfo") ) { outValue = versionInfo_dyn(); return true;  }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"globalCleanup") ) { outValue = globalCleanup_dyn(); return true;  }
	}
	return false;
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
static hx::StaticInfo sStaticStorageInfo[] = {
	{hx::fsInt,(void *) &CURL_Impl__obj::GLOBAL_SSL,HX_HCSTRING("GLOBAL_SSL","\x90","\x53","\x1d","\x52")},
	{hx::fsInt,(void *) &CURL_Impl__obj::GLOBAL_WIN32,HX_HCSTRING("GLOBAL_WIN32","\x7f","\x38","\xc5","\x59")},
	{hx::fsInt,(void *) &CURL_Impl__obj::GLOBAL_ALL,HX_HCSTRING("GLOBAL_ALL","\xe5","\xa4","\x0f","\x52")},
	{hx::fsInt,(void *) &CURL_Impl__obj::GLOBAL_NOTHING,HX_HCSTRING("GLOBAL_NOTHING","\xd1","\x41","\x21","\xb2")},
	{hx::fsInt,(void *) &CURL_Impl__obj::GLOBAL_DEFAULT,HX_HCSTRING("GLOBAL_DEFAULT","\x85","\x7e","\x85","\xfe")},
	{hx::fsInt,(void *) &CURL_Impl__obj::GLOBAL_ACK_EINTR,HX_HCSTRING("GLOBAL_ACK_EINTR","\x76","\xbf","\xc3","\x74")},
	{hx::fsObject /*Dynamic*/ ,(void *) &CURL_Impl__obj::lime_curl_getdate,HX_HCSTRING("lime_curl_getdate","\xdb","\x3c","\x06","\x67")},
	{hx::fsObject /*Dynamic*/ ,(void *) &CURL_Impl__obj::lime_curl_global_cleanup,HX_HCSTRING("lime_curl_global_cleanup","\xd1","\x6f","\xf2","\x40")},
	{hx::fsObject /*Dynamic*/ ,(void *) &CURL_Impl__obj::lime_curl_global_init,HX_HCSTRING("lime_curl_global_init","\x43","\x79","\xfb","\xd4")},
	{hx::fsObject /*Dynamic*/ ,(void *) &CURL_Impl__obj::lime_curl_version,HX_HCSTRING("lime_curl_version","\x2f","\x4a","\xeb","\xb9")},
	{hx::fsObject /*Dynamic*/ ,(void *) &CURL_Impl__obj::lime_curl_version_info,HX_HCSTRING("lime_curl_version_info","\xbe","\xbf","\x7a","\x9e")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(CURL_Impl__obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(CURL_Impl__obj::GLOBAL_SSL,"GLOBAL_SSL");
	HX_MARK_MEMBER_NAME(CURL_Impl__obj::GLOBAL_WIN32,"GLOBAL_WIN32");
	HX_MARK_MEMBER_NAME(CURL_Impl__obj::GLOBAL_ALL,"GLOBAL_ALL");
	HX_MARK_MEMBER_NAME(CURL_Impl__obj::GLOBAL_NOTHING,"GLOBAL_NOTHING");
	HX_MARK_MEMBER_NAME(CURL_Impl__obj::GLOBAL_DEFAULT,"GLOBAL_DEFAULT");
	HX_MARK_MEMBER_NAME(CURL_Impl__obj::GLOBAL_ACK_EINTR,"GLOBAL_ACK_EINTR");
	HX_MARK_MEMBER_NAME(CURL_Impl__obj::lime_curl_getdate,"lime_curl_getdate");
	HX_MARK_MEMBER_NAME(CURL_Impl__obj::lime_curl_global_cleanup,"lime_curl_global_cleanup");
	HX_MARK_MEMBER_NAME(CURL_Impl__obj::lime_curl_global_init,"lime_curl_global_init");
	HX_MARK_MEMBER_NAME(CURL_Impl__obj::lime_curl_version,"lime_curl_version");
	HX_MARK_MEMBER_NAME(CURL_Impl__obj::lime_curl_version_info,"lime_curl_version_info");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(CURL_Impl__obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(CURL_Impl__obj::GLOBAL_SSL,"GLOBAL_SSL");
	HX_VISIT_MEMBER_NAME(CURL_Impl__obj::GLOBAL_WIN32,"GLOBAL_WIN32");
	HX_VISIT_MEMBER_NAME(CURL_Impl__obj::GLOBAL_ALL,"GLOBAL_ALL");
	HX_VISIT_MEMBER_NAME(CURL_Impl__obj::GLOBAL_NOTHING,"GLOBAL_NOTHING");
	HX_VISIT_MEMBER_NAME(CURL_Impl__obj::GLOBAL_DEFAULT,"GLOBAL_DEFAULT");
	HX_VISIT_MEMBER_NAME(CURL_Impl__obj::GLOBAL_ACK_EINTR,"GLOBAL_ACK_EINTR");
	HX_VISIT_MEMBER_NAME(CURL_Impl__obj::lime_curl_getdate,"lime_curl_getdate");
	HX_VISIT_MEMBER_NAME(CURL_Impl__obj::lime_curl_global_cleanup,"lime_curl_global_cleanup");
	HX_VISIT_MEMBER_NAME(CURL_Impl__obj::lime_curl_global_init,"lime_curl_global_init");
	HX_VISIT_MEMBER_NAME(CURL_Impl__obj::lime_curl_version,"lime_curl_version");
	HX_VISIT_MEMBER_NAME(CURL_Impl__obj::lime_curl_version_info,"lime_curl_version_info");
};

#endif

hx::Class CURL_Impl__obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("GLOBAL_SSL","\x90","\x53","\x1d","\x52"),
	HX_HCSTRING("GLOBAL_WIN32","\x7f","\x38","\xc5","\x59"),
	HX_HCSTRING("GLOBAL_ALL","\xe5","\xa4","\x0f","\x52"),
	HX_HCSTRING("GLOBAL_NOTHING","\xd1","\x41","\x21","\xb2"),
	HX_HCSTRING("GLOBAL_DEFAULT","\x85","\x7e","\x85","\xfe"),
	HX_HCSTRING("GLOBAL_ACK_EINTR","\x76","\xbf","\xc3","\x74"),
	HX_HCSTRING("getDate","\xe4","\x05","\xe6","\x14"),
	HX_HCSTRING("globalCleanup","\x01","\x45","\x7b","\xd1"),
	HX_HCSTRING("globalInit","\x13","\x86","\x5e","\x3c"),
	HX_HCSTRING("version","\x18","\xe7","\xf1","\x7c"),
	HX_HCSTRING("versionInfo","\xa6","\xb7","\xa3","\xdb"),
	HX_HCSTRING("intGt","\xfc","\xa4","\x20","\xbe"),
	HX_HCSTRING("lime_curl_getdate","\xdb","\x3c","\x06","\x67"),
	HX_HCSTRING("lime_curl_global_cleanup","\xd1","\x6f","\xf2","\x40"),
	HX_HCSTRING("lime_curl_global_init","\x43","\x79","\xfb","\xd4"),
	HX_HCSTRING("lime_curl_version","\x2f","\x4a","\xeb","\xb9"),
	HX_HCSTRING("lime_curl_version_info","\xbe","\xbf","\x7a","\x9e"),
	::String(null()) };

void CURL_Impl__obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("lime.net.curl._CURL.CURL_Impl_","\xa7","\x3b","\x72","\x9b");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &CURL_Impl__obj::__GetStatic;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< CURL_Impl__obj >;
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

void CURL_Impl__obj::__boot()
{
	GLOBAL_SSL= (int)1;
	GLOBAL_WIN32= (int)2;
	GLOBAL_ALL= (int)3;
	GLOBAL_NOTHING= (int)0;
	GLOBAL_DEFAULT= (int)3;
	GLOBAL_ACK_EINTR= (int)4;
	lime_curl_getdate= ::lime::_system::System_obj::load(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_curl_getdate","\xdb","\x3c","\x06","\x67"),(int)2,null());
	lime_curl_global_cleanup= ::lime::_system::System_obj::load(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_curl_global_cleanup","\xd1","\x6f","\xf2","\x40"),(int)0,null());
	lime_curl_global_init= ::lime::_system::System_obj::load(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_curl_global_init","\x43","\x79","\xfb","\xd4"),(int)1,null());
	lime_curl_version= ::lime::_system::System_obj::load(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_curl_version","\x2f","\x4a","\xeb","\xb9"),(int)0,null());
	lime_curl_version_info= ::lime::_system::System_obj::load(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_curl_easy_cleanup","\x30","\xcd","\xaa","\x62"),(int)1,null());
}

} // end namespace lime
} // end namespace net
} // end namespace curl
} // end namespace _CURL
