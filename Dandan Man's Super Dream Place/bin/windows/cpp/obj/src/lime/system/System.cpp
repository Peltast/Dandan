#include <hxcpp.h>

#ifndef INCLUDED_Reflect
#include <Reflect.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_Sys
#include <Sys.h>
#endif
#ifndef INCLUDED_cpp_Lib
#include <cpp/Lib.h>
#endif
#ifndef INCLUDED_haxe_IMap
#include <haxe/IMap.h>
#endif
#ifndef INCLUDED_haxe_ds_StringMap
#include <haxe/ds/StringMap.h>
#endif
#ifndef INCLUDED_haxe_io_Input
#include <haxe/io/Input.h>
#endif
#ifndef INCLUDED_lime_app_Application
#include <lime/app/Application.h>
#endif
#ifndef INCLUDED_lime_app_Event
#include <lime/app/Event.h>
#endif
#ifndef INCLUDED_lime_app_IModule
#include <lime/app/IModule.h>
#endif
#ifndef INCLUDED_lime_app_Module
#include <lime/app/Module.h>
#endif
#ifndef INCLUDED_lime_math_Rectangle
#include <lime/math/Rectangle.h>
#endif
#ifndef INCLUDED_lime_system_Display
#include <lime/system/Display.h>
#endif
#ifndef INCLUDED_lime_system_DisplayMode
#include <lime/system/DisplayMode.h>
#endif
#ifndef INCLUDED_lime_system_Endian
#include <lime/system/Endian.h>
#endif
#ifndef INCLUDED_lime_system_System
#include <lime/system/System.h>
#endif
#ifndef INCLUDED_sys_io_Process
#include <sys/io/Process.h>
#endif
namespace lime{
namespace _system{

Void System_obj::__construct()
{
	return null();
}

//System_obj::~System_obj() { }

Dynamic System_obj::__CreateEmpty() { return  new System_obj; }
hx::ObjectPtr< System_obj > System_obj::__new()
{  hx::ObjectPtr< System_obj > _result_ = new System_obj();
	_result_->__construct();
	return _result_;}

Dynamic System_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< System_obj > _result_ = new System_obj();
	_result_->__construct();
	return _result_;}

::String System_obj::applicationDirectory;

::String System_obj::applicationStorageDirectory;

::String System_obj::desktopDirectory;

bool System_obj::disableCFFI;

::String System_obj::documentsDirectory;

::lime::_system::Endian System_obj::endianness;

::String System_obj::fontsDirectory;

int System_obj::numDisplays;

::String System_obj::userDirectory;

::haxe::ds::StringMap System_obj::__moduleNames;

Void System_obj::exit( int code){
{
		HX_STACK_FRAME("lime.system.System","exit",0x19210697,"lime.system.System.exit","lime/system/System.hx",118,0x6434b429)
		HX_STACK_ARG(code,"code")
		HX_STACK_LINE(122)
		::lime::app::Application tmp = ::lime::app::Application_obj::current;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(122)
		bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(122)
		if ((tmp1)){
			HX_STACK_LINE(126)
			::lime::app::Application tmp2 = ::lime::app::Application_obj::current;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(52)
			cpp::ArrayBase listeners = tmp2->onExit->listeners;		HX_STACK_VAR(listeners,"listeners");
			HX_STACK_LINE(126)
			::lime::app::Application tmp3 = ::lime::app::Application_obj::current;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(53)
			Array< bool > repeat = tmp3->onExit->repeat;		HX_STACK_VAR(repeat,"repeat");
			HX_STACK_LINE(54)
			int i = (int)0;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(56)
			while((true)){
				HX_STACK_LINE(56)
				bool tmp4 = (i < listeners->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic ));		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(56)
				bool tmp5 = !(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(56)
				if ((tmp5)){
					HX_STACK_LINE(56)
					break;
				}
				HX_STACK_LINE(58)
				Dynamic tmp6 = listeners->__GetItem(i);		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(126)
				int tmp7 = code;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(58)
				tmp6(tmp7).Cast< Void >();
				HX_STACK_LINE(60)
				bool tmp8 = repeat->__get(i);		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(60)
				bool tmp9 = !(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(60)
				if ((tmp9)){
					HX_STACK_LINE(126)
					::lime::app::Application tmp10 = ::lime::app::Application_obj::current;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(62)
					Dynamic tmp11 = listeners->__GetItem(i);		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(62)
					tmp10->onExit->remove(tmp11);
				}
				else{
					HX_STACK_LINE(66)
					(i)++;
				}
			}
		}
		HX_STACK_LINE(130)
		int tmp2 = code;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(130)
		::Sys_obj::exit(tmp2);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(System_obj,exit,(void))

::String System_obj::findHaxeLib( ::String library){
	HX_STACK_FRAME("lime.system.System","findHaxeLib",0x4637f12d,"lime.system.System.findHaxeLib","lime/system/System.hx",136,0x6434b429)
	HX_STACK_ARG(library,"library")
	HX_STACK_LINE(140)
	try
	{
	HX_STACK_CATCHABLE(Dynamic, 0);
	{
		HX_STACK_LINE(142)
		::sys::io::Process tmp = ::sys::io::Process_obj::__new(HX_HCSTRING("haxelib","\xdf","\xb6","\x80","\x08"),Array_obj< ::String >::__new().Add(HX_HCSTRING("path","\xa5","\xe5","\x51","\x4a")).Add(library));		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(142)
		::sys::io::Process proc = tmp;		HX_STACK_VAR(proc,"proc");
		HX_STACK_LINE(144)
		bool tmp1 = (proc != null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(144)
		if ((tmp1)){
			HX_STACK_LINE(146)
			::haxe::io::Input stream = proc->_stdout;		HX_STACK_VAR(stream,"stream");
			HX_STACK_LINE(148)
			try
			{
			HX_STACK_CATCHABLE(Dynamic, 0);
			{
				HX_STACK_LINE(150)
				while((true)){
					HX_STACK_LINE(152)
					::String tmp2 = stream->readLine();		HX_STACK_VAR(tmp2,"tmp2");
					HX_STACK_LINE(152)
					::String s = tmp2;		HX_STACK_VAR(s,"s");
					HX_STACK_LINE(154)
					::String tmp3 = s.substr((int)0,(int)1);		HX_STACK_VAR(tmp3,"tmp3");
					HX_STACK_LINE(154)
					bool tmp4 = (tmp3 != HX_HCSTRING("-","\x2d","\x00","\x00","\x00"));		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(154)
					if ((tmp4)){
						HX_STACK_LINE(156)
						stream->close();
						HX_STACK_LINE(157)
						proc->close();
						HX_STACK_LINE(158)
						::String tmp5 = (HX_HCSTRING("Found haxelib ","\x1f","\xa6","\x4d","\xc9") + s);		HX_STACK_VAR(tmp5,"tmp5");
						HX_STACK_LINE(158)
						::lime::_system::System_obj::loaderTrace(tmp5);
						HX_STACK_LINE(159)
						::String tmp6 = s;		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(159)
						return tmp6;
					}
				}
			}
			}
			catch(Dynamic __e){
				{
					HX_STACK_BEGIN_CATCH
					Dynamic e = __e;{
					}
				}
			}
			HX_STACK_LINE(167)
			stream->close();
			HX_STACK_LINE(168)
			proc->close();
		}
	}
	}
	catch(Dynamic __e){
		{
			HX_STACK_BEGIN_CATCH
			Dynamic e = __e;{
			}
		}
	}
	HX_STACK_LINE(176)
	return HX_HCSTRING("","\x00","\x00","\x00","\x00");
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(System_obj,findHaxeLib,return )

::lime::_system::Display System_obj::getDisplay( int id){
	HX_STACK_FRAME("lime.system.System","getDisplay",0x2e892085,"lime.system.System.getDisplay","lime/system/System.hx",181,0x6434b429)
	HX_STACK_ARG(id,"id")
	HX_STACK_LINE(184)
	int tmp = id;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(184)
	Dynamic tmp1 = ::lime::_system::System_obj::lime_system_get_display(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(184)
	Dynamic displayInfo = tmp1;		HX_STACK_VAR(displayInfo,"displayInfo");
	HX_STACK_LINE(186)
	bool tmp2 = (displayInfo != null());		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(186)
	if ((tmp2)){
		HX_STACK_LINE(188)
		::lime::_system::Display tmp3 = ::lime::_system::Display_obj::__new();		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(188)
		::lime::_system::Display display = tmp3;		HX_STACK_VAR(display,"display");
		HX_STACK_LINE(189)
		display->__FieldRef(HX_HCSTRING("id","\xdb","\x5b","\x00","\x00")) = id;
		HX_STACK_LINE(190)
		display->__FieldRef(HX_HCSTRING("name","\x4b","\x72","\xff","\x48")) = displayInfo->__Field(HX_HCSTRING("name","\x4b","\x72","\xff","\x48"), hx::paccDynamic );
		HX_STACK_LINE(191)
		Float tmp4 = displayInfo->__Field(HX_HCSTRING("bounds","\x75","\x86","\x1d","\x66"), hx::paccDynamic )->__Field(HX_HCSTRING("x","\x78","\x00","\x00","\x00"), hx::paccDynamic );		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(191)
		Float tmp5 = displayInfo->__Field(HX_HCSTRING("bounds","\x75","\x86","\x1d","\x66"), hx::paccDynamic )->__Field(HX_HCSTRING("y","\x79","\x00","\x00","\x00"), hx::paccDynamic );		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(191)
		Float tmp6 = displayInfo->__Field(HX_HCSTRING("bounds","\x75","\x86","\x1d","\x66"), hx::paccDynamic )->__Field(HX_HCSTRING("width","\x06","\xb6","\x62","\xca"), hx::paccDynamic );		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(191)
		Float tmp7 = displayInfo->__Field(HX_HCSTRING("bounds","\x75","\x86","\x1d","\x66"), hx::paccDynamic )->__Field(HX_HCSTRING("height","\xe7","\x07","\x4c","\x02"), hx::paccDynamic );		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(191)
		::lime::math::Rectangle tmp8 = ::lime::math::Rectangle_obj::__new(tmp4,tmp5,tmp6,tmp7);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(191)
		display->__FieldRef(HX_HCSTRING("bounds","\x75","\x86","\x1d","\x66")) = tmp8;
		HX_STACK_LINE(192)
		display->__FieldRef(HX_HCSTRING("supportedModes","\xa2","\xa6","\xb8","\xb7")) = Array_obj< ::Dynamic >::__new();
		HX_STACK_LINE(194)
		::lime::_system::DisplayMode displayMode;		HX_STACK_VAR(displayMode,"displayMode");
		HX_STACK_LINE(196)
		{
			HX_STACK_LINE(196)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(196)
			cpp::ArrayBase _g1;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(196)
			_g1 = hx::TCastToArray(displayInfo->__Field(HX_HCSTRING("supportedModes","\xa2","\xa6","\xb8","\xb7"), hx::paccDynamic ));
			HX_STACK_LINE(196)
			while((true)){
				HX_STACK_LINE(196)
				bool tmp9 = (_g < _g1->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic ));		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(196)
				bool tmp10 = !(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(196)
				if ((tmp10)){
					HX_STACK_LINE(196)
					break;
				}
				HX_STACK_LINE(196)
				Dynamic tmp11 = _g1->__GetItem(_g);		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(196)
				Dynamic mode = tmp11;		HX_STACK_VAR(mode,"mode");
				HX_STACK_LINE(196)
				++(_g);
				HX_STACK_LINE(198)
				::lime::_system::DisplayMode tmp12 = ::lime::_system::DisplayMode_obj::__new(mode->__Field(HX_HCSTRING("width","\x06","\xb6","\x62","\xca"), hx::paccDynamic ),mode->__Field(HX_HCSTRING("height","\xe7","\x07","\x4c","\x02"), hx::paccDynamic ),mode->__Field(HX_HCSTRING("refreshRate","\x5b","\xe2","\x3f","\x40"), hx::paccDynamic ),mode->__Field(HX_HCSTRING("pixelFormat","\x5d","\x72","\x1b","\x6f"), hx::paccDynamic ));		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(198)
				displayMode = tmp12;
				HX_STACK_LINE(199)
				::lime::_system::DisplayMode tmp13 = displayMode;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(199)
				display->__Field(HX_HCSTRING("supportedModes","\xa2","\xa6","\xb8","\xb7"), hx::paccDynamic )->__Field(HX_HCSTRING("push","\xda","\x11","\x61","\x4a"), hx::paccDynamic )(tmp13);
			}
		}
		HX_STACK_LINE(203)
		::lime::_system::DisplayMode tmp9 = display->__Field(HX_HCSTRING("supportedModes","\xa2","\xa6","\xb8","\xb7"), hx::paccDynamic )->__GetItem(displayInfo->__Field(HX_HCSTRING("currentMode","\x3c","\xac","\xf2","\x80"), hx::paccDynamic ));		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(203)
		display->__FieldRef(HX_HCSTRING("currentMode","\x3c","\xac","\xf2","\x80")) = tmp9;
		HX_STACK_LINE(204)
		::lime::_system::Display tmp10 = display;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(204)
		return tmp10;
	}
	HX_STACK_LINE(227)
	return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(System_obj,getDisplay,return )

int System_obj::getTimer( ){
	HX_STACK_FRAME("lime.system.System","getTimer",0xb1bf8f48,"lime.system.System.getTimer","lime/system/System.hx",232,0x6434b429)
	HX_STACK_LINE(239)
	int tmp = ::lime::_system::System_obj::lime_system_get_timer();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(239)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(System_obj,getTimer,return )

Dynamic System_obj::load( ::String library,::String method,hx::Null< int >  __o_args,hx::Null< bool >  __o_lazy){
int args = __o_args.Default(0);
bool lazy = __o_lazy.Default(false);
	HX_STACK_FRAME("lime.system.System","load",0x1dbaa99f,"lime.system.System.load","lime/system/System.hx",251,0x6434b429)
	HX_STACK_ARG(library,"library")
	HX_STACK_ARG(method,"method")
	HX_STACK_ARG(args,"args")
	HX_STACK_ARG(lazy,"lazy")
{
		HX_STACK_LINE(261)
		bool tmp = ::lime::_system::System_obj::disableCFFI;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(261)
		if ((tmp)){

			HX_BEGIN_LOCAL_FUNC_S0(hx::LocalFunc,_Function_2_1)
			int __ArgCount() const { return 1; }
			Dynamic run(cpp::ArrayBase __){
				HX_STACK_FRAME("*","_Function_2_1",0x5201af78,"*._Function_2_1","lime/system/System.hx",263,0x6434b429)
				HX_STACK_ARG(__,"__")
				{
					struct _Function_3_1{
						inline static Dynamic Block( ){
							HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","lime/system/System.hx",263,0x6434b429)
							{
								hx::Anon __result = hx::Anon_obj::Create();
								return __result;
							}
							return null();
						}
					};
					HX_STACK_LINE(263)
					Dynamic tmp1 = _Function_3_1::Block();		HX_STACK_VAR(tmp1,"tmp1");
					HX_STACK_LINE(263)
					return tmp1;
				}
				return null();
			}
			HX_END_LOCAL_FUNC1(return)

			HX_STACK_LINE(263)
			Dynamic tmp1 = ::Reflect_obj::makeVarArgs( Dynamic(new _Function_2_1()));		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(263)
			return tmp1;
		}
		HX_STACK_LINE(267)
		Dynamic result = null();		HX_STACK_VAR(result,"result");
		HX_STACK_LINE(272)
		::haxe::ds::StringMap tmp1 = ::lime::_system::System_obj::__moduleNames;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(272)
		bool tmp2 = (tmp1 == null());		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(272)
		if ((tmp2)){
			HX_STACK_LINE(272)
			::haxe::ds::StringMap tmp3;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(272)
			{
				HX_STACK_LINE(272)
				::haxe::ds::StringMap tmp4 = ::haxe::ds::StringMap_obj::__new();		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(272)
				::haxe::ds::StringMap tmp5 = tmp4;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(272)
				tmp3 = tmp5;
			}
			HX_STACK_LINE(272)
			::lime::_system::System_obj::__moduleNames = tmp3;
		}
		HX_STACK_LINE(274)
		bool tmp3 = lazy;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(274)
		if ((tmp3)){
			HX_STACK_LINE(276)
			::haxe::ds::StringMap tmp4 = ::lime::_system::System_obj::__moduleNames;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(276)
			::String tmp5 = library;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(276)
			::String tmp6 = library;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(276)
			tmp4->set(tmp5,tmp6);
			HX_STACK_LINE(278)
			try
			{
			HX_STACK_CATCHABLE(Dynamic, 0);
			{
				HX_STACK_LINE(283)
				bool tmp7 = (library == HX_HCSTRING("lime-legacy","\xc1","\x7f","\xb9","\x87"));		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(283)
				if ((tmp7)){
					HX_STACK_LINE(283)
					return null();
				}
				HX_STACK_LINE(289)
				::String tmp8 = library;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(289)
				::String tmp9 = method;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(289)
				int tmp10 = args;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(289)
				Dynamic tmp11 = ::cpp::Lib_obj::loadLazy(tmp8,tmp9,tmp10);		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(289)
				result = tmp11;
			}
			}
			catch(Dynamic __e){
				{
					HX_STACK_BEGIN_CATCH
					Dynamic e = __e;{
					}
				}
			}
		}
		else{
			HX_STACK_LINE(301)
			::haxe::ds::StringMap tmp4 = ::lime::_system::System_obj::__moduleNames;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(301)
			::String tmp5 = library;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(301)
			bool tmp6 = tmp4->exists(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(301)
			if ((tmp6)){
				HX_STACK_LINE(304)
				::haxe::ds::StringMap tmp7 = ::lime::_system::System_obj::__moduleNames;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(304)
				::String tmp8 = library;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(304)
				::String tmp9 = tmp7->get(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(304)
				::String tmp10 = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(304)
				::String tmp11 = method;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(304)
				int tmp12 = args;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(304)
				Dynamic tmp13 = ::cpp::Lib_obj::load(tmp10,tmp11,tmp12);		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(304)
				return tmp13;
			}
			HX_STACK_LINE(329)
			::haxe::ds::StringMap tmp7 = ::lime::_system::System_obj::__moduleNames;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(329)
			::String tmp8 = library;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(329)
			::String tmp9 = library;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(329)
			tmp7->set(tmp8,tmp9);
			HX_STACK_LINE(331)
			::String tmp10 = (HX_HCSTRING("./","\x41","\x28","\x00","\x00") + library);		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(331)
			::String tmp11 = library;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(331)
			::String tmp12 = method;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(331)
			int tmp13 = args;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(331)
			Dynamic tmp14 = ::lime::_system::System_obj::tryLoad(tmp10,tmp11,tmp12,tmp13);		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(331)
			result = tmp14;
			HX_STACK_LINE(333)
			bool tmp15 = (result == null());		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(333)
			if ((tmp15)){
				HX_STACK_LINE(335)
				::String tmp16 = (HX_HCSTRING(".\\","\x6e","\x28","\x00","\x00") + library);		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(335)
				::String tmp17 = library;		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(335)
				::String tmp18 = method;		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(335)
				int tmp19 = args;		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(335)
				Dynamic tmp20 = ::lime::_system::System_obj::tryLoad(tmp16,tmp17,tmp18,tmp19);		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(335)
				result = tmp20;
			}
			HX_STACK_LINE(339)
			bool tmp16 = (result == null());		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(339)
			if ((tmp16)){
				HX_STACK_LINE(341)
				::String tmp17 = library;		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(341)
				::String tmp18 = library;		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(341)
				::String tmp19 = method;		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(341)
				int tmp20 = args;		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(341)
				Dynamic tmp21 = ::lime::_system::System_obj::tryLoad(tmp17,tmp18,tmp19,tmp20);		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(341)
				result = tmp21;
			}
			HX_STACK_LINE(345)
			bool tmp17 = (result == null());		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(345)
			if ((tmp17)){
				HX_STACK_LINE(347)
				::String tmp18 = ::lime::_system::System_obj::sysName();		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(347)
				::String tmp19 = tmp18.substr((int)7,null());		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(347)
				::String tmp20 = tmp19.toLowerCase();		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(347)
				bool tmp21 = (tmp20 == HX_HCSTRING("windows","\x83","\xde","\x74","\xe8"));		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(347)
				::String tmp22;		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(347)
				if ((tmp21)){
					HX_STACK_LINE(347)
					tmp22 = HX_HCSTRING("\\","\x5c","\x00","\x00","\x00");
				}
				else{
					HX_STACK_LINE(347)
					tmp22 = HX_HCSTRING("/","\x2f","\x00","\x00","\x00");
				}
				HX_STACK_LINE(347)
				::String slash = tmp22;		HX_STACK_VAR(slash,"slash");
				HX_STACK_LINE(348)
				::String tmp23 = ::lime::_system::System_obj::findHaxeLib(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"));		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(348)
				::String haxelib = tmp23;		HX_STACK_VAR(haxelib,"haxelib");
				HX_STACK_LINE(350)
				bool tmp24 = (haxelib != HX_HCSTRING("","\x00","\x00","\x00","\x00"));		HX_STACK_VAR(tmp24,"tmp24");
				HX_STACK_LINE(350)
				if ((tmp24)){
					HX_STACK_LINE(352)
					::String tmp25 = (haxelib + slash);		HX_STACK_VAR(tmp25,"tmp25");
					HX_STACK_LINE(352)
					::String tmp26 = (tmp25 + HX_HCSTRING("ndll","\x36","\xb8","\x01","\x49"));		HX_STACK_VAR(tmp26,"tmp26");
					HX_STACK_LINE(352)
					::String tmp27 = slash;		HX_STACK_VAR(tmp27,"tmp27");
					HX_STACK_LINE(352)
					::String tmp28 = (tmp26 + tmp27);		HX_STACK_VAR(tmp28,"tmp28");
					HX_STACK_LINE(352)
					::String tmp29 = ::lime::_system::System_obj::sysName();		HX_STACK_VAR(tmp29,"tmp29");
					HX_STACK_LINE(352)
					::String tmp30 = (tmp28 + tmp29);		HX_STACK_VAR(tmp30,"tmp30");
					HX_STACK_LINE(352)
					::String tmp31 = slash;		HX_STACK_VAR(tmp31,"tmp31");
					HX_STACK_LINE(352)
					::String tmp32 = (tmp30 + tmp31);		HX_STACK_VAR(tmp32,"tmp32");
					HX_STACK_LINE(352)
					::String tmp33 = library;		HX_STACK_VAR(tmp33,"tmp33");
					HX_STACK_LINE(352)
					::String tmp34 = (tmp32 + tmp33);		HX_STACK_VAR(tmp34,"tmp34");
					HX_STACK_LINE(352)
					::String tmp35 = library;		HX_STACK_VAR(tmp35,"tmp35");
					HX_STACK_LINE(352)
					::String tmp36 = method;		HX_STACK_VAR(tmp36,"tmp36");
					HX_STACK_LINE(352)
					int tmp37 = args;		HX_STACK_VAR(tmp37,"tmp37");
					HX_STACK_LINE(352)
					Dynamic tmp38 = ::lime::_system::System_obj::tryLoad(tmp34,tmp35,tmp36,tmp37);		HX_STACK_VAR(tmp38,"tmp38");
					HX_STACK_LINE(352)
					result = tmp38;
					HX_STACK_LINE(354)
					bool tmp39 = (result == null());		HX_STACK_VAR(tmp39,"tmp39");
					HX_STACK_LINE(354)
					if ((tmp39)){
						HX_STACK_LINE(356)
						::String tmp40 = (haxelib + slash);		HX_STACK_VAR(tmp40,"tmp40");
						HX_STACK_LINE(356)
						::String tmp41 = (tmp40 + HX_HCSTRING("ndll","\x36","\xb8","\x01","\x49"));		HX_STACK_VAR(tmp41,"tmp41");
						HX_STACK_LINE(356)
						::String tmp42 = slash;		HX_STACK_VAR(tmp42,"tmp42");
						HX_STACK_LINE(356)
						::String tmp43 = (tmp41 + tmp42);		HX_STACK_VAR(tmp43,"tmp43");
						HX_STACK_LINE(356)
						::String tmp44 = ::lime::_system::System_obj::sysName();		HX_STACK_VAR(tmp44,"tmp44");
						HX_STACK_LINE(356)
						::String tmp45 = (tmp43 + tmp44);		HX_STACK_VAR(tmp45,"tmp45");
						HX_STACK_LINE(356)
						::String tmp46 = (tmp45 + HX_HCSTRING("64","\x3e","\x2f","\x00","\x00"));		HX_STACK_VAR(tmp46,"tmp46");
						HX_STACK_LINE(356)
						::String tmp47 = slash;		HX_STACK_VAR(tmp47,"tmp47");
						HX_STACK_LINE(356)
						::String tmp48 = (tmp46 + tmp47);		HX_STACK_VAR(tmp48,"tmp48");
						HX_STACK_LINE(356)
						::String tmp49 = library;		HX_STACK_VAR(tmp49,"tmp49");
						HX_STACK_LINE(356)
						::String tmp50 = (tmp48 + tmp49);		HX_STACK_VAR(tmp50,"tmp50");
						HX_STACK_LINE(356)
						::String tmp51 = library;		HX_STACK_VAR(tmp51,"tmp51");
						HX_STACK_LINE(356)
						::String tmp52 = method;		HX_STACK_VAR(tmp52,"tmp52");
						HX_STACK_LINE(356)
						int tmp53 = args;		HX_STACK_VAR(tmp53,"tmp53");
						HX_STACK_LINE(356)
						Dynamic tmp54 = ::lime::_system::System_obj::tryLoad(tmp50,tmp51,tmp52,tmp53);		HX_STACK_VAR(tmp54,"tmp54");
						HX_STACK_LINE(356)
						result = tmp54;
					}
				}
			}
			HX_STACK_LINE(364)
			Dynamic tmp18 = result;		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(364)
			::String tmp19 = ::Std_obj::string(tmp18);		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(364)
			::String tmp20 = (HX_HCSTRING("Result : ","\xe9","\x19","\x2c","\x14") + tmp19);		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(364)
			::lime::_system::System_obj::loaderTrace(tmp20);
		}
		HX_STACK_LINE(383)
		Dynamic tmp4 = result;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(383)
		return tmp4;
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(System_obj,load,return )

::String System_obj::sysName( ){
	HX_STACK_FRAME("lime.system.System","sysName",0x424b781f,"lime.system.System.sysName","lime/system/System.hx",388,0x6434b429)
	HX_STACK_LINE(394)
	Dynamic tmp = ::cpp::Lib_obj::load(HX_HCSTRING("std","\xa3","\xa8","\x57","\x00"),HX_HCSTRING("sys_string","\x03","\xf9","\xde","\x46"),(int)0);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(394)
	Dynamic sys_string = tmp;		HX_STACK_VAR(sys_string,"sys_string");
	HX_STACK_LINE(395)
	::String tmp1 = sys_string().Cast< ::String >();		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(395)
	return tmp1;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(System_obj,sysName,return )

Dynamic System_obj::tryLoad( ::String name,::String library,::String func,int args){
	HX_STACK_FRAME("lime.system.System","tryLoad",0x12810b28,"lime.system.System.tryLoad","lime/system/System.hx",412,0x6434b429)
	HX_STACK_ARG(name,"name")
	HX_STACK_ARG(library,"library")
	HX_STACK_ARG(func,"func")
	HX_STACK_ARG(args,"args")
	HX_STACK_LINE(416)
	try
	{
	HX_STACK_CATCHABLE(Dynamic, 0);
	{
		HX_STACK_LINE(419)
		::String tmp = name;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(419)
		::String tmp1 = func;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(419)
		int tmp2 = args;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(419)
		Dynamic tmp3 = ::cpp::Lib_obj::load(tmp,tmp1,tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(419)
		Dynamic result = tmp3;		HX_STACK_VAR(result,"result");
		HX_STACK_LINE(428)
		bool tmp4 = (result != null());		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(428)
		if ((tmp4)){
			HX_STACK_LINE(430)
			::String tmp5 = (HX_HCSTRING("Got result ","\xaf","\xe9","\x02","\x45") + name);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(430)
			::lime::_system::System_obj::loaderTrace(tmp5);
			HX_STACK_LINE(431)
			::haxe::ds::StringMap tmp6 = ::lime::_system::System_obj::__moduleNames;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(431)
			::String tmp7 = library;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(431)
			::String tmp8 = name;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(431)
			tmp6->set(tmp7,tmp8);
			HX_STACK_LINE(432)
			Dynamic tmp9 = result;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(432)
			return tmp9;
		}
	}
	}
	catch(Dynamic __e){
		{
			HX_STACK_BEGIN_CATCH
			Dynamic e = __e;{
				HX_STACK_LINE(438)
				::String tmp = (HX_HCSTRING("Failed to load : ","\x1e","\xca","\x38","\x9b") + name);		HX_STACK_VAR(tmp,"tmp");
				HX_STACK_LINE(438)
				::lime::_system::System_obj::loaderTrace(tmp);
			}
		}
	}
	HX_STACK_LINE(444)
	return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(System_obj,tryLoad,return )

Void System_obj::loaderTrace( ::String message){
{
		HX_STACK_FRAME("lime.system.System","loaderTrace",0xe7255319,"lime.system.System.loaderTrace","lime/system/System.hx",449,0x6434b429)
		HX_STACK_ARG(message,"message")
		HX_STACK_LINE(455)
		Dynamic tmp = ::cpp::Lib_obj::load(HX_HCSTRING("std","\xa3","\xa8","\x57","\x00"),HX_HCSTRING("get_env","\x84","\xcc","\xc1","\x26"),(int)1);		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(455)
		Dynamic get_env = tmp;		HX_STACK_VAR(get_env,"get_env");
		HX_STACK_LINE(456)
		Dynamic tmp1 = get_env(HX_HCSTRING("OPENFL_LOAD_DEBUG","\xa9","\x1b","\xff","\x9b"));		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(456)
		bool tmp2 = (tmp1 != null());		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(456)
		bool debug = tmp2;		HX_STACK_VAR(debug,"debug");
		HX_STACK_LINE(464)
		bool tmp3 = debug;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(464)
		if ((tmp3)){
			HX_STACK_LINE(466)
			::String tmp4 = message;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(466)
			::Sys_obj::println(tmp4);
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(System_obj,loaderTrace,(void))

::String System_obj::get_applicationDirectory( ){
	HX_STACK_FRAME("lime.system.System","get_applicationDirectory",0xf6955c7f,"lime.system.System.get_applicationDirectory","lime/system/System.hx",525,0x6434b429)
	HX_STACK_LINE(528)
	::String tmp = ::lime::_system::System_obj::lime_system_get_directory((int)0,null(),null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(528)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(System_obj,get_applicationDirectory,return )

::String System_obj::get_applicationStorageDirectory( ){
	HX_STACK_FRAME("lime.system.System","get_applicationStorageDirectory",0x34818fe0,"lime.system.System.get_applicationStorageDirectory","lime/system/System.hx",546,0x6434b429)
	HX_STACK_LINE(548)
	::String company = HX_HCSTRING("MyCompany","\x11","\xc3","\x2e","\xcc");		HX_STACK_VAR(company,"company");
	HX_STACK_LINE(549)
	::String file = HX_HCSTRING("MyApplication","\x24","\xd3","\xd1","\x1c");		HX_STACK_VAR(file,"file");
	HX_STACK_LINE(552)
	::lime::app::Application tmp = ::lime::app::Application_obj::current;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(552)
	bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(552)
	bool tmp2;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(552)
	if ((tmp1)){
		HX_STACK_LINE(552)
		::lime::app::Application tmp3 = ::lime::app::Application_obj::current;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(552)
		::lime::app::Application tmp4 = tmp3;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(552)
		Dynamic tmp5 = tmp4->config;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(552)
		tmp2 = (tmp5 != null());
	}
	else{
		HX_STACK_LINE(552)
		tmp2 = false;
	}
	HX_STACK_LINE(552)
	if ((tmp2)){
		HX_STACK_LINE(554)
		::lime::app::Application tmp3 = ::lime::app::Application_obj::current;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(554)
		::String tmp4 = tmp3->config->__Field(HX_HCSTRING("company","\x3d","\x15","\x69","\x83"), hx::paccDynamic );		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(554)
		bool tmp5 = (tmp4 != null());		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(554)
		if ((tmp5)){
			HX_STACK_LINE(556)
			::lime::app::Application tmp6 = ::lime::app::Application_obj::current;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(556)
			::String tmp7 = tmp6->config->__Field(HX_HCSTRING("company","\x3d","\x15","\x69","\x83"), hx::paccDynamic );		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(556)
			company = tmp7;
		}
		HX_STACK_LINE(560)
		::lime::app::Application tmp6 = ::lime::app::Application_obj::current;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(560)
		::String tmp7 = tmp6->config->__Field(HX_HCSTRING("file","\x7c","\xce","\xbb","\x43"), hx::paccDynamic );		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(560)
		bool tmp8 = (tmp7 != null());		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(560)
		if ((tmp8)){
			HX_STACK_LINE(562)
			::lime::app::Application tmp9 = ::lime::app::Application_obj::current;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(562)
			::String tmp10 = tmp9->config->__Field(HX_HCSTRING("file","\x7c","\xce","\xbb","\x43"), hx::paccDynamic );		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(562)
			file = tmp10;
		}
	}
	HX_STACK_LINE(570)
	::String tmp3 = company;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(570)
	::String tmp4 = file;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(570)
	::String tmp5 = ::lime::_system::System_obj::lime_system_get_directory((int)1,tmp3,tmp4);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(570)
	return tmp5;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(System_obj,get_applicationStorageDirectory,return )

::String System_obj::get_desktopDirectory( ){
	HX_STACK_FRAME("lime.system.System","get_desktopDirectory",0x483b2773,"lime.system.System.get_desktopDirectory","lime/system/System.hx",588,0x6434b429)
	HX_STACK_LINE(591)
	::String tmp = ::lime::_system::System_obj::lime_system_get_directory((int)2,null(),null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(591)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(System_obj,get_desktopDirectory,return )

::String System_obj::get_documentsDirectory( ){
	HX_STACK_FRAME("lime.system.System","get_documentsDirectory",0x4a6a8557,"lime.system.System.get_documentsDirectory","lime/system/System.hx",609,0x6434b429)
	HX_STACK_LINE(612)
	::String tmp = ::lime::_system::System_obj::lime_system_get_directory((int)3,null(),null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(612)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(System_obj,get_documentsDirectory,return )

::String System_obj::get_fontsDirectory( ){
	HX_STACK_FRAME("lime.system.System","get_fontsDirectory",0x8242b40b,"lime.system.System.get_fontsDirectory","lime/system/System.hx",630,0x6434b429)
	HX_STACK_LINE(633)
	::String tmp = ::lime::_system::System_obj::lime_system_get_directory((int)4,null(),null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(633)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(System_obj,get_fontsDirectory,return )

int System_obj::get_numDisplays( ){
	HX_STACK_FRAME("lime.system.System","get_numDisplays",0x5056f915,"lime.system.System.get_numDisplays","lime/system/System.hx",641,0x6434b429)
	HX_STACK_LINE(644)
	int tmp = ::lime::_system::System_obj::lime_system_get_num_displays();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(644)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(System_obj,get_numDisplays,return )

::String System_obj::get_userDirectory( ){
	HX_STACK_FRAME("lime.system.System","get_userDirectory",0x2b5522e0,"lime.system.System.get_userDirectory","lime/system/System.hx",652,0x6434b429)
	HX_STACK_LINE(655)
	::String tmp = ::lime::_system::System_obj::lime_system_get_directory((int)5,null(),null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(655)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(System_obj,get_userDirectory,return )

::lime::_system::Endian System_obj::get_endianness( ){
	HX_STACK_FRAME("lime.system.System","get_endianness",0x4df50bb4,"lime.system.System.get_endianness","lime/system/System.hx",680,0x6434b429)
	HX_STACK_LINE(680)
	return ::lime::_system::Endian_obj::_LITTLE_ENDIAN;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(System_obj,get_endianness,return )

Dynamic System_obj::lime_system_get_directory;

Dynamic System_obj::lime_system_get_display;

Dynamic System_obj::lime_system_get_num_displays;

Dynamic System_obj::lime_system_get_timer;


System_obj::System_obj()
{
}

bool System_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"exit") ) { outValue = exit_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"load") ) { outValue = load_dyn(); return true;  }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"sysName") ) { outValue = sysName_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"tryLoad") ) { outValue = tryLoad_dyn(); return true;  }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"getTimer") ) { outValue = getTimer_dyn(); return true;  }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"endianness") ) { outValue = inCallProp == hx::paccAlways ? get_endianness() : endianness; return true; }
		if (HX_FIELD_EQ(inName,"getDisplay") ) { outValue = getDisplay_dyn(); return true;  }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"disableCFFI") ) { outValue = disableCFFI; return true;  }
		if (HX_FIELD_EQ(inName,"numDisplays") ) { outValue = inCallProp == hx::paccAlways ? get_numDisplays() : numDisplays; return true; }
		if (HX_FIELD_EQ(inName,"findHaxeLib") ) { outValue = findHaxeLib_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"loaderTrace") ) { outValue = loaderTrace_dyn(); return true;  }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"userDirectory") ) { outValue = inCallProp == hx::paccAlways ? get_userDirectory() : userDirectory; return true; }
		if (HX_FIELD_EQ(inName,"__moduleNames") ) { outValue = __moduleNames; return true;  }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"fontsDirectory") ) { outValue = inCallProp == hx::paccAlways ? get_fontsDirectory() : fontsDirectory; return true; }
		if (HX_FIELD_EQ(inName,"get_endianness") ) { outValue = get_endianness_dyn(); return true;  }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"get_numDisplays") ) { outValue = get_numDisplays_dyn(); return true;  }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"desktopDirectory") ) { outValue = inCallProp == hx::paccAlways ? get_desktopDirectory() : desktopDirectory; return true; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"get_userDirectory") ) { outValue = get_userDirectory_dyn(); return true;  }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"documentsDirectory") ) { outValue = inCallProp == hx::paccAlways ? get_documentsDirectory() : documentsDirectory; return true; }
		if (HX_FIELD_EQ(inName,"get_fontsDirectory") ) { outValue = get_fontsDirectory_dyn(); return true;  }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"applicationDirectory") ) { outValue = inCallProp == hx::paccAlways ? get_applicationDirectory() : applicationDirectory; return true; }
		if (HX_FIELD_EQ(inName,"get_desktopDirectory") ) { outValue = get_desktopDirectory_dyn(); return true;  }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"lime_system_get_timer") ) { outValue = lime_system_get_timer; return true;  }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"get_documentsDirectory") ) { outValue = get_documentsDirectory_dyn(); return true;  }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"lime_system_get_display") ) { outValue = lime_system_get_display; return true;  }
		break;
	case 24:
		if (HX_FIELD_EQ(inName,"get_applicationDirectory") ) { outValue = get_applicationDirectory_dyn(); return true;  }
		break;
	case 25:
		if (HX_FIELD_EQ(inName,"lime_system_get_directory") ) { outValue = lime_system_get_directory; return true;  }
		break;
	case 27:
		if (HX_FIELD_EQ(inName,"applicationStorageDirectory") ) { outValue = inCallProp == hx::paccAlways ? get_applicationStorageDirectory() : applicationStorageDirectory; return true; }
		break;
	case 28:
		if (HX_FIELD_EQ(inName,"lime_system_get_num_displays") ) { outValue = lime_system_get_num_displays; return true;  }
		break;
	case 31:
		if (HX_FIELD_EQ(inName,"get_applicationStorageDirectory") ) { outValue = get_applicationStorageDirectory_dyn(); return true;  }
	}
	return false;
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
static hx::StaticInfo sStaticStorageInfo[] = {
	{hx::fsString,(void *) &System_obj::applicationDirectory,HX_HCSTRING("applicationDirectory","\xfd","\x3c","\x71","\x25")},
	{hx::fsString,(void *) &System_obj::applicationStorageDirectory,HX_HCSTRING("applicationStorageDirectory","\x22","\xdb","\xb5","\xb1")},
	{hx::fsString,(void *) &System_obj::desktopDirectory,HX_HCSTRING("desktopDirectory","\xf1","\x70","\x41","\xaf")},
	{hx::fsBool,(void *) &System_obj::disableCFFI,HX_HCSTRING("disableCFFI","\x8e","\x24","\xb6","\x11")},
	{hx::fsString,(void *) &System_obj::documentsDirectory,HX_HCSTRING("documentsDirectory","\x55","\xaa","\xb4","\x36")},
	{hx::fsObject /*::lime::_system::Endian*/ ,(void *) &System_obj::endianness,HX_HCSTRING("endianness","\xb2","\x02","\xd3","\x4e")},
	{hx::fsString,(void *) &System_obj::fontsDirectory,HX_HCSTRING("fontsDirectory","\x09","\x02","\x1b","\x88")},
	{hx::fsInt,(void *) &System_obj::numDisplays,HX_HCSTRING("numDisplays","\x57","\x20","\xb1","\x11")},
	{hx::fsString,(void *) &System_obj::userDirectory,HX_HCSTRING("userDirectory","\xa2","\x1e","\xf9","\x94")},
	{hx::fsObject /*::haxe::ds::StringMap*/ ,(void *) &System_obj::__moduleNames,HX_HCSTRING("__moduleNames","\x5c","\x9c","\x9c","\x28")},
	{hx::fsObject /*Dynamic*/ ,(void *) &System_obj::lime_system_get_directory,HX_HCSTRING("lime_system_get_directory","\x5e","\x9e","\x04","\x7c")},
	{hx::fsObject /*Dynamic*/ ,(void *) &System_obj::lime_system_get_display,HX_HCSTRING("lime_system_get_display","\xf3","\x47","\x82","\xd2")},
	{hx::fsObject /*Dynamic*/ ,(void *) &System_obj::lime_system_get_num_displays,HX_HCSTRING("lime_system_get_num_displays","\xf9","\x90","\x37","\x4f")},
	{hx::fsObject /*Dynamic*/ ,(void *) &System_obj::lime_system_get_timer,HX_HCSTRING("lime_system_get_timer","\x36","\x5f","\x72","\x67")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(System_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(System_obj::applicationDirectory,"applicationDirectory");
	HX_MARK_MEMBER_NAME(System_obj::applicationStorageDirectory,"applicationStorageDirectory");
	HX_MARK_MEMBER_NAME(System_obj::desktopDirectory,"desktopDirectory");
	HX_MARK_MEMBER_NAME(System_obj::disableCFFI,"disableCFFI");
	HX_MARK_MEMBER_NAME(System_obj::documentsDirectory,"documentsDirectory");
	HX_MARK_MEMBER_NAME(System_obj::endianness,"endianness");
	HX_MARK_MEMBER_NAME(System_obj::fontsDirectory,"fontsDirectory");
	HX_MARK_MEMBER_NAME(System_obj::numDisplays,"numDisplays");
	HX_MARK_MEMBER_NAME(System_obj::userDirectory,"userDirectory");
	HX_MARK_MEMBER_NAME(System_obj::__moduleNames,"__moduleNames");
	HX_MARK_MEMBER_NAME(System_obj::lime_system_get_directory,"lime_system_get_directory");
	HX_MARK_MEMBER_NAME(System_obj::lime_system_get_display,"lime_system_get_display");
	HX_MARK_MEMBER_NAME(System_obj::lime_system_get_num_displays,"lime_system_get_num_displays");
	HX_MARK_MEMBER_NAME(System_obj::lime_system_get_timer,"lime_system_get_timer");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(System_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(System_obj::applicationDirectory,"applicationDirectory");
	HX_VISIT_MEMBER_NAME(System_obj::applicationStorageDirectory,"applicationStorageDirectory");
	HX_VISIT_MEMBER_NAME(System_obj::desktopDirectory,"desktopDirectory");
	HX_VISIT_MEMBER_NAME(System_obj::disableCFFI,"disableCFFI");
	HX_VISIT_MEMBER_NAME(System_obj::documentsDirectory,"documentsDirectory");
	HX_VISIT_MEMBER_NAME(System_obj::endianness,"endianness");
	HX_VISIT_MEMBER_NAME(System_obj::fontsDirectory,"fontsDirectory");
	HX_VISIT_MEMBER_NAME(System_obj::numDisplays,"numDisplays");
	HX_VISIT_MEMBER_NAME(System_obj::userDirectory,"userDirectory");
	HX_VISIT_MEMBER_NAME(System_obj::__moduleNames,"__moduleNames");
	HX_VISIT_MEMBER_NAME(System_obj::lime_system_get_directory,"lime_system_get_directory");
	HX_VISIT_MEMBER_NAME(System_obj::lime_system_get_display,"lime_system_get_display");
	HX_VISIT_MEMBER_NAME(System_obj::lime_system_get_num_displays,"lime_system_get_num_displays");
	HX_VISIT_MEMBER_NAME(System_obj::lime_system_get_timer,"lime_system_get_timer");
};

#endif

hx::Class System_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("applicationDirectory","\xfd","\x3c","\x71","\x25"),
	HX_HCSTRING("applicationStorageDirectory","\x22","\xdb","\xb5","\xb1"),
	HX_HCSTRING("desktopDirectory","\xf1","\x70","\x41","\xaf"),
	HX_HCSTRING("disableCFFI","\x8e","\x24","\xb6","\x11"),
	HX_HCSTRING("documentsDirectory","\x55","\xaa","\xb4","\x36"),
	HX_HCSTRING("endianness","\xb2","\x02","\xd3","\x4e"),
	HX_HCSTRING("fontsDirectory","\x09","\x02","\x1b","\x88"),
	HX_HCSTRING("numDisplays","\x57","\x20","\xb1","\x11"),
	HX_HCSTRING("userDirectory","\xa2","\x1e","\xf9","\x94"),
	HX_HCSTRING("__moduleNames","\x5c","\x9c","\x9c","\x28"),
	HX_HCSTRING("exit","\x1e","\xf7","\x1d","\x43"),
	HX_HCSTRING("findHaxeLib","\x86","\x2f","\x53","\x08"),
	HX_HCSTRING("getDisplay","\x4c","\xb0","\xab","\x0a"),
	HX_HCSTRING("getTimer","\x4f","\xcf","\x0c","\x70"),
	HX_HCSTRING("load","\x26","\x9a","\xb7","\x47"),
	HX_HCSTRING("sysName","\xf8","\x55","\x40","\x7a"),
	HX_HCSTRING("tryLoad","\x01","\xe9","\x75","\x4a"),
	HX_HCSTRING("loaderTrace","\x72","\x91","\x40","\xa9"),
	HX_HCSTRING("get_applicationDirectory","\x86","\x5a","\x0d","\x68"),
	HX_HCSTRING("get_applicationStorageDirectory","\xb9","\x70","\x86","\x8d"),
	HX_HCSTRING("get_desktopDirectory","\xfa","\xd5","\xab","\xcd"),
	HX_HCSTRING("get_documentsDirectory","\x9e","\x23","\x49","\x90"),
	HX_HCSTRING("get_fontsDirectory","\xd2","\xe2","\xb4","\x23"),
	HX_HCSTRING("get_numDisplays","\xee","\xd7","\x92","\xd2"),
	HX_HCSTRING("get_userDirectory","\xf9","\x29","\x69","\x9b"),
	HX_HCSTRING("get_endianness","\xfb","\x8a","\xc8","\xc4"),
	HX_HCSTRING("lime_system_get_directory","\x5e","\x9e","\x04","\x7c"),
	HX_HCSTRING("lime_system_get_display","\xf3","\x47","\x82","\xd2"),
	HX_HCSTRING("lime_system_get_num_displays","\xf9","\x90","\x37","\x4f"),
	HX_HCSTRING("lime_system_get_timer","\x36","\x5f","\x72","\x67"),
	::String(null()) };

void System_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("lime.system.System","\x95","\x83","\xbd","\xac");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &System_obj::__GetStatic;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< System_obj >;
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

void System_obj::__boot()
{
	__moduleNames= null();
	lime_system_get_directory= ::lime::_system::System_obj::load(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_system_get_directory","\x5e","\x9e","\x04","\x7c"),(int)3,null());
	lime_system_get_display= ::lime::_system::System_obj::load(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_system_get_display","\xf3","\x47","\x82","\xd2"),(int)1,null());
	lime_system_get_num_displays= ::lime::_system::System_obj::load(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_system_get_num_displays","\xf9","\x90","\x37","\x4f"),(int)0,null());
	lime_system_get_timer= ::lime::_system::System_obj::load(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_system_get_timer","\x36","\x5f","\x72","\x67"),(int)0,null());
}

} // end namespace lime
} // end namespace system
