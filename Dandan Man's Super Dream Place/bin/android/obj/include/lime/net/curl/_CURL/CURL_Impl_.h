#ifndef INCLUDED_lime_net_curl__CURL_CURL_Impl_
#define INCLUDED_lime_net_curl__CURL_CURL_Impl_

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS4(lime,net,curl,_CURL,CURL_Impl_)
namespace lime{
namespace net{
namespace curl{
namespace _CURL{


class HXCPP_CLASS_ATTRIBUTES  CURL_Impl__obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef CURL_Impl__obj OBJ_;
		CURL_Impl__obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=false,const char *inName="lime.net.curl._CURL.CURL_Impl_")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< CURL_Impl__obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~CURL_Impl__obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		static void __register();
		::String __ToString() const { return HX_HCSTRING("CURL_Impl_","\x8c","\x48","\xb6","\x54"); }

		static void __boot();
		static int GLOBAL_SSL;
		static int GLOBAL_WIN32;
		static int GLOBAL_ALL;
		static int GLOBAL_NOTHING;
		static int GLOBAL_DEFAULT;
		static int GLOBAL_ACK_EINTR;
		static int getDate( ::String date,int now);
		static Dynamic getDate_dyn();

		static Void globalCleanup( );
		static Dynamic globalCleanup_dyn();

		static int globalInit( int flags);
		static Dynamic globalInit_dyn();

		static ::String version( );
		static Dynamic version_dyn();

		static ::String versionInfo( int type);
		static Dynamic versionInfo_dyn();

		static bool intGt( Float a,Float b);
		static Dynamic intGt_dyn();

		static Dynamic lime_curl_getdate;
		static Dynamic &lime_curl_getdate_dyn() { return lime_curl_getdate;}
		static Dynamic lime_curl_global_cleanup;
		static Dynamic &lime_curl_global_cleanup_dyn() { return lime_curl_global_cleanup;}
		static Dynamic lime_curl_global_init;
		static Dynamic &lime_curl_global_init_dyn() { return lime_curl_global_init;}
		static Dynamic lime_curl_version;
		static Dynamic &lime_curl_version_dyn() { return lime_curl_version;}
		static Dynamic lime_curl_version_info;
		static Dynamic &lime_curl_version_info_dyn() { return lime_curl_version_info;}
};

} // end namespace lime
} // end namespace net
} // end namespace curl
} // end namespace _CURL

#endif /* INCLUDED_lime_net_curl__CURL_CURL_Impl_ */ 
