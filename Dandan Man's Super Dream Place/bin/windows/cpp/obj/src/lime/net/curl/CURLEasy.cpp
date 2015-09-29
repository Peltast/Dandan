#include <hxcpp.h>

#ifndef INCLUDED_lime_net_curl_CURLEasy
#include <lime/net/curl/CURLEasy.h>
#endif
#ifndef INCLUDED_lime_system_System
#include <lime/system/System.h>
#endif
namespace lime{
namespace net{
namespace curl{

Void CURLEasy_obj::__construct()
{
	return null();
}

//CURLEasy_obj::~CURLEasy_obj() { }

Dynamic CURLEasy_obj::__CreateEmpty() { return  new CURLEasy_obj; }
hx::ObjectPtr< CURLEasy_obj > CURLEasy_obj::__new()
{  hx::ObjectPtr< CURLEasy_obj > _result_ = new CURLEasy_obj();
	_result_->__construct();
	return _result_;}

Dynamic CURLEasy_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< CURLEasy_obj > _result_ = new CURLEasy_obj();
	_result_->__construct();
	return _result_;}

Void CURLEasy_obj::cleanup( Float handle){
{
		HX_STACK_FRAME("lime.net.curl.CURLEasy","cleanup",0xf4922b1c,"lime.net.curl.CURLEasy.cleanup","lime/net/curl/CURLEasy.hx",11,0x6bf34539)
		HX_STACK_ARG(handle,"handle")
		HX_STACK_LINE(14)
		Float tmp = handle;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(14)
		::lime::net::curl::CURLEasy_obj::lime_curl_easy_cleanup(tmp);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(CURLEasy_obj,cleanup,(void))

Float CURLEasy_obj::duphandle( Float handle){
	HX_STACK_FRAME("lime.net.curl.CURLEasy","duphandle",0xc88c719f,"lime.net.curl.CURLEasy.duphandle","lime/net/curl/CURLEasy.hx",20,0x6bf34539)
	HX_STACK_ARG(handle,"handle")
	HX_STACK_LINE(23)
	Float tmp = handle;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(23)
	Float tmp1 = ::lime::net::curl::CURLEasy_obj::lime_curl_easy_duphandle(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(23)
	return tmp1;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(CURLEasy_obj,duphandle,return )

::String CURLEasy_obj::escape( Float handle,::String url,int length){
	HX_STACK_FRAME("lime.net.curl.CURLEasy","escape",0x85152b89,"lime.net.curl.CURLEasy.escape","lime/net/curl/CURLEasy.hx",31,0x6bf34539)
	HX_STACK_ARG(handle,"handle")
	HX_STACK_ARG(url,"url")
	HX_STACK_ARG(length,"length")
	HX_STACK_LINE(34)
	Float tmp = handle;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(34)
	::String tmp1 = url;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(34)
	int tmp2 = length;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(34)
	::String tmp3 = ::lime::net::curl::CURLEasy_obj::lime_curl_easy_escape(tmp,tmp1,tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(34)
	return tmp3;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(CURLEasy_obj,escape,return )

Dynamic CURLEasy_obj::getinfo( Float handle,int info){
	HX_STACK_FRAME("lime.net.curl.CURLEasy","getinfo",0x76b4dafc,"lime.net.curl.CURLEasy.getinfo","lime/net/curl/CURLEasy.hx",42,0x6bf34539)
	HX_STACK_ARG(handle,"handle")
	HX_STACK_ARG(info,"info")
	HX_STACK_LINE(45)
	Float tmp = handle;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(45)
	int tmp1;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(45)
	tmp1 = hx::TCast< ::Int >::cast(info);
	HX_STACK_LINE(45)
	Dynamic tmp2 = ::lime::net::curl::CURLEasy_obj::lime_curl_easy_getinfo(tmp,tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(45)
	return tmp2;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(CURLEasy_obj,getinfo,return )

Float CURLEasy_obj::init( ){
	HX_STACK_FRAME("lime.net.curl.CURLEasy","init",0x7bee9118,"lime.net.curl.CURLEasy.init","lime/net/curl/CURLEasy.hx",53,0x6bf34539)
	HX_STACK_LINE(56)
	Float tmp = ::lime::net::curl::CURLEasy_obj::lime_curl_easy_init();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(56)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(CURLEasy_obj,init,return )

int CURLEasy_obj::pause( Float handle,int bitMask){
	HX_STACK_FRAME("lime.net.curl.CURLEasy","pause",0xf40fc7ee,"lime.net.curl.CURLEasy.pause","lime/net/curl/CURLEasy.hx",64,0x6bf34539)
	HX_STACK_ARG(handle,"handle")
	HX_STACK_ARG(bitMask,"bitMask")
	HX_STACK_LINE(67)
	Float tmp = handle;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(67)
	int tmp1 = bitMask;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(67)
	Dynamic tmp2 = ::lime::net::curl::CURLEasy_obj::lime_curl_easy_pause(tmp,tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(67)
	int tmp3 = ((int)(tmp2));		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(67)
	return tmp3;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(CURLEasy_obj,pause,return )

int CURLEasy_obj::perform( Float handle){
	HX_STACK_FRAME("lime.net.curl.CURLEasy","perform",0xc42e0799,"lime.net.curl.CURLEasy.perform","lime/net/curl/CURLEasy.hx",75,0x6bf34539)
	HX_STACK_ARG(handle,"handle")
	HX_STACK_LINE(78)
	Float tmp = handle;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(78)
	Dynamic tmp1 = ::lime::net::curl::CURLEasy_obj::lime_curl_easy_perform(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(78)
	int tmp2 = ((int)(tmp1));		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(78)
	return tmp2;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(CURLEasy_obj,perform,return )

int CURLEasy_obj::reset( Float handle){
	HX_STACK_FRAME("lime.net.curl.CURLEasy","reset",0x1d803ac7,"lime.net.curl.CURLEasy.reset","lime/net/curl/CURLEasy.hx",97,0x6bf34539)
	HX_STACK_ARG(handle,"handle")
	HX_STACK_LINE(100)
	Float tmp = handle;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(100)
	Dynamic tmp1 = ::lime::net::curl::CURLEasy_obj::lime_curl_easy_reset(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(100)
	int tmp2 = ((int)(tmp1));		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(100)
	return tmp2;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(CURLEasy_obj,reset,return )

int CURLEasy_obj::setopt( Float handle,int option,Dynamic parameter){
	HX_STACK_FRAME("lime.net.curl.CURLEasy","setopt",0x19bf59d9,"lime.net.curl.CURLEasy.setopt","lime/net/curl/CURLEasy.hx",119,0x6bf34539)
	HX_STACK_ARG(handle,"handle")
	HX_STACK_ARG(option,"option")
	HX_STACK_ARG(parameter,"parameter")
	HX_STACK_LINE(122)
	Float tmp = handle;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(122)
	int tmp1;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(122)
	tmp1 = hx::TCast< ::Int >::cast(option);
	HX_STACK_LINE(122)
	Dynamic tmp2 = parameter;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(122)
	Dynamic tmp3 = ::lime::net::curl::CURLEasy_obj::lime_curl_easy_setopt(tmp,tmp1,tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(122)
	int tmp4 = ((int)(tmp3));		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(122)
	return tmp4;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(CURLEasy_obj,setopt,return )

::String CURLEasy_obj::strerror( int code){
	HX_STACK_FRAME("lime.net.curl.CURLEasy","strerror",0x6e06fb7f,"lime.net.curl.CURLEasy.strerror","lime/net/curl/CURLEasy.hx",130,0x6bf34539)
	HX_STACK_ARG(code,"code")
	HX_STACK_LINE(133)
	int tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(133)
	tmp = hx::TCast< ::Int >::cast(code);
	HX_STACK_LINE(133)
	::String tmp1 = ::lime::net::curl::CURLEasy_obj::lime_curl_easy_strerror(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(133)
	return tmp1;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(CURLEasy_obj,strerror,return )

::String CURLEasy_obj::unescape( Float handle,::String url,int inLength,int outLength){
	HX_STACK_FRAME("lime.net.curl.CURLEasy","unescape",0xb9ec6ca2,"lime.net.curl.CURLEasy.unescape","lime/net/curl/CURLEasy.hx",141,0x6bf34539)
	HX_STACK_ARG(handle,"handle")
	HX_STACK_ARG(url,"url")
	HX_STACK_ARG(inLength,"inLength")
	HX_STACK_ARG(outLength,"outLength")
	HX_STACK_LINE(144)
	Float tmp = handle;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(144)
	::String tmp1 = url;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(144)
	int tmp2 = inLength;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(144)
	int tmp3 = outLength;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(144)
	::String tmp4 = ::lime::net::curl::CURLEasy_obj::lime_curl_easy_unescape(tmp,tmp1,tmp2,tmp3);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(144)
	return tmp4;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(CURLEasy_obj,unescape,return )

Dynamic CURLEasy_obj::lime_curl_easy_cleanup;

Dynamic CURLEasy_obj::lime_curl_easy_duphandle;

Dynamic CURLEasy_obj::lime_curl_easy_escape;

Dynamic CURLEasy_obj::lime_curl_easy_getinfo;

Dynamic CURLEasy_obj::lime_curl_easy_init;

Dynamic CURLEasy_obj::lime_curl_easy_pause;

Dynamic CURLEasy_obj::lime_curl_easy_perform;

Dynamic CURLEasy_obj::lime_curl_easy_recv;

Dynamic CURLEasy_obj::lime_curl_easy_reset;

Dynamic CURLEasy_obj::lime_curl_easy_send;

Dynamic CURLEasy_obj::lime_curl_easy_setopt;

Dynamic CURLEasy_obj::lime_curl_easy_strerror;

Dynamic CURLEasy_obj::lime_curl_easy_unescape;

Dynamic CURLEasy_obj::lime_curl_getdate;

Dynamic CURLEasy_obj::lime_curl_global_cleanup;

Dynamic CURLEasy_obj::lime_curl_global_init;

Dynamic CURLEasy_obj::lime_curl_version;

Dynamic CURLEasy_obj::lime_curl_version_info;


CURLEasy_obj::CURLEasy_obj()
{
}

bool CURLEasy_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"init") ) { outValue = init_dyn(); return true;  }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"pause") ) { outValue = pause_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"reset") ) { outValue = reset_dyn(); return true;  }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"escape") ) { outValue = escape_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"setopt") ) { outValue = setopt_dyn(); return true;  }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"cleanup") ) { outValue = cleanup_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"getinfo") ) { outValue = getinfo_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"perform") ) { outValue = perform_dyn(); return true;  }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"strerror") ) { outValue = strerror_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"unescape") ) { outValue = unescape_dyn(); return true;  }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"duphandle") ) { outValue = duphandle_dyn(); return true;  }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"lime_curl_getdate") ) { outValue = lime_curl_getdate; return true;  }
		if (HX_FIELD_EQ(inName,"lime_curl_version") ) { outValue = lime_curl_version; return true;  }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"lime_curl_easy_init") ) { outValue = lime_curl_easy_init; return true;  }
		if (HX_FIELD_EQ(inName,"lime_curl_easy_recv") ) { outValue = lime_curl_easy_recv; return true;  }
		if (HX_FIELD_EQ(inName,"lime_curl_easy_send") ) { outValue = lime_curl_easy_send; return true;  }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"lime_curl_easy_pause") ) { outValue = lime_curl_easy_pause; return true;  }
		if (HX_FIELD_EQ(inName,"lime_curl_easy_reset") ) { outValue = lime_curl_easy_reset; return true;  }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"lime_curl_easy_escape") ) { outValue = lime_curl_easy_escape; return true;  }
		if (HX_FIELD_EQ(inName,"lime_curl_easy_setopt") ) { outValue = lime_curl_easy_setopt; return true;  }
		if (HX_FIELD_EQ(inName,"lime_curl_global_init") ) { outValue = lime_curl_global_init; return true;  }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"lime_curl_easy_cleanup") ) { outValue = lime_curl_easy_cleanup; return true;  }
		if (HX_FIELD_EQ(inName,"lime_curl_easy_getinfo") ) { outValue = lime_curl_easy_getinfo; return true;  }
		if (HX_FIELD_EQ(inName,"lime_curl_easy_perform") ) { outValue = lime_curl_easy_perform; return true;  }
		if (HX_FIELD_EQ(inName,"lime_curl_version_info") ) { outValue = lime_curl_version_info; return true;  }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"lime_curl_easy_strerror") ) { outValue = lime_curl_easy_strerror; return true;  }
		if (HX_FIELD_EQ(inName,"lime_curl_easy_unescape") ) { outValue = lime_curl_easy_unescape; return true;  }
		break;
	case 24:
		if (HX_FIELD_EQ(inName,"lime_curl_easy_duphandle") ) { outValue = lime_curl_easy_duphandle; return true;  }
		if (HX_FIELD_EQ(inName,"lime_curl_global_cleanup") ) { outValue = lime_curl_global_cleanup; return true;  }
	}
	return false;
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
static hx::StaticInfo sStaticStorageInfo[] = {
	{hx::fsObject /*Dynamic*/ ,(void *) &CURLEasy_obj::lime_curl_easy_cleanup,HX_HCSTRING("lime_curl_easy_cleanup","\x30","\xcd","\xaa","\x62")},
	{hx::fsObject /*Dynamic*/ ,(void *) &CURLEasy_obj::lime_curl_easy_duphandle,HX_HCSTRING("lime_curl_easy_duphandle","\xb3","\xc0","\xa0","\x67")},
	{hx::fsObject /*Dynamic*/ ,(void *) &CURLEasy_obj::lime_curl_easy_escape,HX_HCSTRING("lime_curl_easy_escape","\xf5","\x67","\xb1","\x5f")},
	{hx::fsObject /*Dynamic*/ ,(void *) &CURLEasy_obj::lime_curl_easy_getinfo,HX_HCSTRING("lime_curl_easy_getinfo","\x10","\x7d","\xcd","\xe4")},
	{hx::fsObject /*Dynamic*/ ,(void *) &CURLEasy_obj::lime_curl_easy_init,HX_HCSTRING("lime_curl_easy_init","\x84","\x9a","\xe4","\x65")},
	{hx::fsObject /*Dynamic*/ ,(void *) &CURLEasy_obj::lime_curl_easy_pause,HX_HCSTRING("lime_curl_easy_pause","\x02","\xfd","\x61","\xc1")},
	{hx::fsObject /*Dynamic*/ ,(void *) &CURLEasy_obj::lime_curl_easy_perform,HX_HCSTRING("lime_curl_easy_perform","\xad","\xa9","\x46","\x32")},
	{hx::fsObject /*Dynamic*/ ,(void *) &CURLEasy_obj::lime_curl_easy_recv,HX_HCSTRING("lime_curl_easy_recv","\x9a","\xac","\xd0","\x6b")},
	{hx::fsObject /*Dynamic*/ ,(void *) &CURLEasy_obj::lime_curl_easy_reset,HX_HCSTRING("lime_curl_easy_reset","\xdb","\x6f","\xd2","\xea")},
	{hx::fsObject /*Dynamic*/ ,(void *) &CURLEasy_obj::lime_curl_easy_send,HX_HCSTRING("lime_curl_easy_send","\xbc","\xec","\x79","\x6c")},
	{hx::fsObject /*Dynamic*/ ,(void *) &CURLEasy_obj::lime_curl_easy_setopt,HX_HCSTRING("lime_curl_easy_setopt","\x45","\x96","\x5b","\xf4")},
	{hx::fsObject /*Dynamic*/ ,(void *) &CURLEasy_obj::lime_curl_easy_strerror,HX_HCSTRING("lime_curl_easy_strerror","\xeb","\x2a","\x7c","\x55")},
	{hx::fsObject /*Dynamic*/ ,(void *) &CURLEasy_obj::lime_curl_easy_unescape,HX_HCSTRING("lime_curl_easy_unescape","\x0e","\x9c","\x61","\xa1")},
	{hx::fsObject /*Dynamic*/ ,(void *) &CURLEasy_obj::lime_curl_getdate,HX_HCSTRING("lime_curl_getdate","\xdb","\x3c","\x06","\x67")},
	{hx::fsObject /*Dynamic*/ ,(void *) &CURLEasy_obj::lime_curl_global_cleanup,HX_HCSTRING("lime_curl_global_cleanup","\xd1","\x6f","\xf2","\x40")},
	{hx::fsObject /*Dynamic*/ ,(void *) &CURLEasy_obj::lime_curl_global_init,HX_HCSTRING("lime_curl_global_init","\x43","\x79","\xfb","\xd4")},
	{hx::fsObject /*Dynamic*/ ,(void *) &CURLEasy_obj::lime_curl_version,HX_HCSTRING("lime_curl_version","\x2f","\x4a","\xeb","\xb9")},
	{hx::fsObject /*Dynamic*/ ,(void *) &CURLEasy_obj::lime_curl_version_info,HX_HCSTRING("lime_curl_version_info","\xbe","\xbf","\x7a","\x9e")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(CURLEasy_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(CURLEasy_obj::lime_curl_easy_cleanup,"lime_curl_easy_cleanup");
	HX_MARK_MEMBER_NAME(CURLEasy_obj::lime_curl_easy_duphandle,"lime_curl_easy_duphandle");
	HX_MARK_MEMBER_NAME(CURLEasy_obj::lime_curl_easy_escape,"lime_curl_easy_escape");
	HX_MARK_MEMBER_NAME(CURLEasy_obj::lime_curl_easy_getinfo,"lime_curl_easy_getinfo");
	HX_MARK_MEMBER_NAME(CURLEasy_obj::lime_curl_easy_init,"lime_curl_easy_init");
	HX_MARK_MEMBER_NAME(CURLEasy_obj::lime_curl_easy_pause,"lime_curl_easy_pause");
	HX_MARK_MEMBER_NAME(CURLEasy_obj::lime_curl_easy_perform,"lime_curl_easy_perform");
	HX_MARK_MEMBER_NAME(CURLEasy_obj::lime_curl_easy_recv,"lime_curl_easy_recv");
	HX_MARK_MEMBER_NAME(CURLEasy_obj::lime_curl_easy_reset,"lime_curl_easy_reset");
	HX_MARK_MEMBER_NAME(CURLEasy_obj::lime_curl_easy_send,"lime_curl_easy_send");
	HX_MARK_MEMBER_NAME(CURLEasy_obj::lime_curl_easy_setopt,"lime_curl_easy_setopt");
	HX_MARK_MEMBER_NAME(CURLEasy_obj::lime_curl_easy_strerror,"lime_curl_easy_strerror");
	HX_MARK_MEMBER_NAME(CURLEasy_obj::lime_curl_easy_unescape,"lime_curl_easy_unescape");
	HX_MARK_MEMBER_NAME(CURLEasy_obj::lime_curl_getdate,"lime_curl_getdate");
	HX_MARK_MEMBER_NAME(CURLEasy_obj::lime_curl_global_cleanup,"lime_curl_global_cleanup");
	HX_MARK_MEMBER_NAME(CURLEasy_obj::lime_curl_global_init,"lime_curl_global_init");
	HX_MARK_MEMBER_NAME(CURLEasy_obj::lime_curl_version,"lime_curl_version");
	HX_MARK_MEMBER_NAME(CURLEasy_obj::lime_curl_version_info,"lime_curl_version_info");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(CURLEasy_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(CURLEasy_obj::lime_curl_easy_cleanup,"lime_curl_easy_cleanup");
	HX_VISIT_MEMBER_NAME(CURLEasy_obj::lime_curl_easy_duphandle,"lime_curl_easy_duphandle");
	HX_VISIT_MEMBER_NAME(CURLEasy_obj::lime_curl_easy_escape,"lime_curl_easy_escape");
	HX_VISIT_MEMBER_NAME(CURLEasy_obj::lime_curl_easy_getinfo,"lime_curl_easy_getinfo");
	HX_VISIT_MEMBER_NAME(CURLEasy_obj::lime_curl_easy_init,"lime_curl_easy_init");
	HX_VISIT_MEMBER_NAME(CURLEasy_obj::lime_curl_easy_pause,"lime_curl_easy_pause");
	HX_VISIT_MEMBER_NAME(CURLEasy_obj::lime_curl_easy_perform,"lime_curl_easy_perform");
	HX_VISIT_MEMBER_NAME(CURLEasy_obj::lime_curl_easy_recv,"lime_curl_easy_recv");
	HX_VISIT_MEMBER_NAME(CURLEasy_obj::lime_curl_easy_reset,"lime_curl_easy_reset");
	HX_VISIT_MEMBER_NAME(CURLEasy_obj::lime_curl_easy_send,"lime_curl_easy_send");
	HX_VISIT_MEMBER_NAME(CURLEasy_obj::lime_curl_easy_setopt,"lime_curl_easy_setopt");
	HX_VISIT_MEMBER_NAME(CURLEasy_obj::lime_curl_easy_strerror,"lime_curl_easy_strerror");
	HX_VISIT_MEMBER_NAME(CURLEasy_obj::lime_curl_easy_unescape,"lime_curl_easy_unescape");
	HX_VISIT_MEMBER_NAME(CURLEasy_obj::lime_curl_getdate,"lime_curl_getdate");
	HX_VISIT_MEMBER_NAME(CURLEasy_obj::lime_curl_global_cleanup,"lime_curl_global_cleanup");
	HX_VISIT_MEMBER_NAME(CURLEasy_obj::lime_curl_global_init,"lime_curl_global_init");
	HX_VISIT_MEMBER_NAME(CURLEasy_obj::lime_curl_version,"lime_curl_version");
	HX_VISIT_MEMBER_NAME(CURLEasy_obj::lime_curl_version_info,"lime_curl_version_info");
};

#endif

hx::Class CURLEasy_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("cleanup","\x24","\x0c","\x42","\xab"),
	HX_HCSTRING("duphandle","\xa7","\xa4","\xbc","\x73"),
	HX_HCSTRING("escape","\x81","\x43","\xda","\xda"),
	HX_HCSTRING("getinfo","\x04","\xbc","\x64","\x2d"),
	HX_HCSTRING("init","\x10","\x3b","\xbb","\x45"),
	HX_HCSTRING("pause","\xf6","\xd6","\x57","\xbd"),
	HX_HCSTRING("perform","\xa1","\xe8","\xdd","\x7a"),
	HX_HCSTRING("reset","\xcf","\x49","\xc8","\xe6"),
	HX_HCSTRING("setopt","\xd1","\x71","\x84","\x6f"),
	HX_HCSTRING("strerror","\x77","\x01","\x3c","\x91"),
	HX_HCSTRING("unescape","\x9a","\x72","\x21","\xdd"),
	HX_HCSTRING("lime_curl_easy_cleanup","\x30","\xcd","\xaa","\x62"),
	HX_HCSTRING("lime_curl_easy_duphandle","\xb3","\xc0","\xa0","\x67"),
	HX_HCSTRING("lime_curl_easy_escape","\xf5","\x67","\xb1","\x5f"),
	HX_HCSTRING("lime_curl_easy_getinfo","\x10","\x7d","\xcd","\xe4"),
	HX_HCSTRING("lime_curl_easy_init","\x84","\x9a","\xe4","\x65"),
	HX_HCSTRING("lime_curl_easy_pause","\x02","\xfd","\x61","\xc1"),
	HX_HCSTRING("lime_curl_easy_perform","\xad","\xa9","\x46","\x32"),
	HX_HCSTRING("lime_curl_easy_recv","\x9a","\xac","\xd0","\x6b"),
	HX_HCSTRING("lime_curl_easy_reset","\xdb","\x6f","\xd2","\xea"),
	HX_HCSTRING("lime_curl_easy_send","\xbc","\xec","\x79","\x6c"),
	HX_HCSTRING("lime_curl_easy_setopt","\x45","\x96","\x5b","\xf4"),
	HX_HCSTRING("lime_curl_easy_strerror","\xeb","\x2a","\x7c","\x55"),
	HX_HCSTRING("lime_curl_easy_unescape","\x0e","\x9c","\x61","\xa1"),
	HX_HCSTRING("lime_curl_getdate","\xdb","\x3c","\x06","\x67"),
	HX_HCSTRING("lime_curl_global_cleanup","\xd1","\x6f","\xf2","\x40"),
	HX_HCSTRING("lime_curl_global_init","\x43","\x79","\xfb","\xd4"),
	HX_HCSTRING("lime_curl_version","\x2f","\x4a","\xeb","\xb9"),
	HX_HCSTRING("lime_curl_version_info","\xbe","\xbf","\x7a","\x9e"),
	::String(null()) };

void CURLEasy_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("lime.net.curl.CURLEasy","\x66","\xc7","\x70","\x5d");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &CURLEasy_obj::__GetStatic;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< CURLEasy_obj >;
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

void CURLEasy_obj::__boot()
{
	lime_curl_easy_cleanup= ::lime::_system::System_obj::load(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_curl_easy_cleanup","\x30","\xcd","\xaa","\x62"),(int)1,null());
	lime_curl_easy_duphandle= ::lime::_system::System_obj::load(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_curl_easy_duphandle","\xb3","\xc0","\xa0","\x67"),(int)1,null());
	lime_curl_easy_escape= ::lime::_system::System_obj::load(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_curl_easy_escape","\xf5","\x67","\xb1","\x5f"),(int)3,null());
	lime_curl_easy_getinfo= ::lime::_system::System_obj::load(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_curl_easy_getinfo","\x10","\x7d","\xcd","\xe4"),(int)2,null());
	lime_curl_easy_init= ::lime::_system::System_obj::load(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_curl_easy_init","\x84","\x9a","\xe4","\x65"),(int)0,null());
	lime_curl_easy_pause= ::lime::_system::System_obj::load(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_curl_easy_pause","\x02","\xfd","\x61","\xc1"),(int)2,null());
	lime_curl_easy_perform= ::lime::_system::System_obj::load(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_curl_easy_perform","\xad","\xa9","\x46","\x32"),(int)1,null());
	lime_curl_easy_recv= ::lime::_system::System_obj::load(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_curl_easy_recv","\x9a","\xac","\xd0","\x6b"),(int)4,null());
	lime_curl_easy_reset= ::lime::_system::System_obj::load(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_curl_easy_reset","\xdb","\x6f","\xd2","\xea"),(int)1,null());
	lime_curl_easy_send= ::lime::_system::System_obj::load(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_curl_easy_send","\xbc","\xec","\x79","\x6c"),(int)4,null());
	lime_curl_easy_setopt= ::lime::_system::System_obj::load(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_curl_easy_setopt","\x45","\x96","\x5b","\xf4"),(int)3,null());
	lime_curl_easy_strerror= ::lime::_system::System_obj::load(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_curl_easy_strerror","\xeb","\x2a","\x7c","\x55"),(int)1,null());
	lime_curl_easy_unescape= ::lime::_system::System_obj::load(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_curl_easy_unescape","\x0e","\x9c","\x61","\xa1"),(int)4,null());
	lime_curl_getdate= ::lime::_system::System_obj::load(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_curl_getdate","\xdb","\x3c","\x06","\x67"),(int)2,null());
	lime_curl_global_cleanup= ::lime::_system::System_obj::load(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_curl_global_cleanup","\xd1","\x6f","\xf2","\x40"),(int)0,null());
	lime_curl_global_init= ::lime::_system::System_obj::load(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_curl_global_init","\x43","\x79","\xfb","\xd4"),(int)1,null());
	lime_curl_version= ::lime::_system::System_obj::load(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_curl_version","\x2f","\x4a","\xeb","\xb9"),(int)0,null());
	lime_curl_version_info= ::lime::_system::System_obj::load(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_curl_easy_cleanup","\x30","\xcd","\xaa","\x62"),(int)1,null());
}

} // end namespace lime
} // end namespace net
} // end namespace curl
