#include <hxcpp.h>

#ifndef INCLUDED_lime_audio_openal_ALC
#include <lime/audio/openal/ALC.h>
#endif
#ifndef INCLUDED_lime_audio_openal__ALContext_ALContext_Impl_
#include <lime/audio/openal/_ALContext/ALContext_Impl_.h>
#endif
#ifndef INCLUDED_lime_audio_openal__ALDevice_ALDevice_Impl_
#include <lime/audio/openal/_ALDevice/ALDevice_Impl_.h>
#endif
#ifndef INCLUDED_lime_system_System
#include <lime/system/System.h>
#endif
namespace lime{
namespace audio{
namespace openal{

Void ALC_obj::__construct()
{
	return null();
}

//ALC_obj::~ALC_obj() { }

Dynamic ALC_obj::__CreateEmpty() { return  new ALC_obj; }
hx::ObjectPtr< ALC_obj > ALC_obj::__new()
{  hx::ObjectPtr< ALC_obj > _result_ = new ALC_obj();
	_result_->__construct();
	return _result_;}

Dynamic ALC_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< ALC_obj > _result_ = new ALC_obj();
	_result_->__construct();
	return _result_;}

int ALC_obj::FALSE;

int ALC_obj::TRUE;

int ALC_obj::FREQUENCY;

int ALC_obj::REFRESH;

int ALC_obj::SYNC;

int ALC_obj::MONO_SOURCES;

int ALC_obj::STEREO_SOURCES;

int ALC_obj::NO_ERROR;

int ALC_obj::INVALID_DEVICE;

int ALC_obj::INVALID_CONTEXT;

int ALC_obj::INVALID_ENUM;

int ALC_obj::INVALID_VALUE;

int ALC_obj::OUT_OF_MEMORY;

int ALC_obj::ATTRIBUTES_SIZE;

int ALC_obj::ALL_ATTRIBUTES;

int ALC_obj::DEFAULT_DEVICE_SPECIFIER;

int ALC_obj::DEVICE_SPECIFIER;

int ALC_obj::EXTENSIONS;

int ALC_obj::ENUMERATE_ALL_EXT;

int ALC_obj::DEFAULT_ALL_DEVICES_SPECIFIER;

int ALC_obj::ALL_DEVICES_SPECIFIER;

bool ALC_obj::closeDevice( Dynamic device){
	HX_STACK_FRAME("lime.audio.openal.ALC","closeDevice",0xea953e50,"lime.audio.openal.ALC.closeDevice","lime/audio/openal/ALC.hx",33,0x52b9922d)
	HX_STACK_ARG(device,"device")
	HX_STACK_LINE(36)
	Dynamic tmp = device;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(36)
	bool tmp1 = ::lime::audio::openal::ALC_obj::lime_alc_close_device(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(36)
	return tmp1;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(ALC_obj,closeDevice,return )

Dynamic ALC_obj::createContext( Dynamic device,Array< int > attrlist){
	HX_STACK_FRAME("lime.audio.openal.ALC","createContext",0xfb37e6b5,"lime.audio.openal.ALC.createContext","lime/audio/openal/ALC.hx",44,0x52b9922d)
	HX_STACK_ARG(device,"device")
	HX_STACK_ARG(attrlist,"attrlist")
	HX_STACK_LINE(47)
	Dynamic tmp = device;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(47)
	Float tmp1 = ::lime::audio::openal::ALC_obj::lime_alc_create_context(tmp,attrlist);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(47)
	Float handle = tmp1;		HX_STACK_VAR(handle,"handle");
	HX_STACK_LINE(49)
	bool tmp2 = (handle != (int)0);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(49)
	if ((tmp2)){
		HX_STACK_LINE(51)
		Float tmp3 = handle;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(51)
		Dynamic tmp4 = ::lime::audio::openal::_ALContext::ALContext_Impl__obj::_new(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(51)
		return tmp4;
	}
	HX_STACK_LINE(56)
	return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(ALC_obj,createContext,return )

Void ALC_obj::destroyContext( Dynamic context){
{
		HX_STACK_FRAME("lime.audio.openal.ALC","destroyContext",0xda2f6173,"lime.audio.openal.ALC.destroyContext","lime/audio/openal/ALC.hx",61,0x52b9922d)
		HX_STACK_ARG(context,"context")
		HX_STACK_LINE(64)
		Dynamic tmp = context;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(64)
		::lime::audio::openal::ALC_obj::lime_alc_destroy_context(tmp);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(ALC_obj,destroyContext,(void))

Dynamic ALC_obj::getContextsDevice( Dynamic context){
	HX_STACK_FRAME("lime.audio.openal.ALC","getContextsDevice",0x1b703ff2,"lime.audio.openal.ALC.getContextsDevice","lime/audio/openal/ALC.hx",70,0x52b9922d)
	HX_STACK_ARG(context,"context")
	HX_STACK_LINE(73)
	Dynamic tmp = context;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(73)
	Float tmp1 = ::lime::audio::openal::ALC_obj::lime_alc_get_contexts_device(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(73)
	Float handle = tmp1;		HX_STACK_VAR(handle,"handle");
	HX_STACK_LINE(75)
	bool tmp2 = (handle != (int)0);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(75)
	if ((tmp2)){
		HX_STACK_LINE(77)
		Float tmp3 = handle;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(77)
		Dynamic tmp4 = ::lime::audio::openal::_ALDevice::ALDevice_Impl__obj::_new(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(77)
		return tmp4;
	}
	HX_STACK_LINE(82)
	return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(ALC_obj,getContextsDevice,return )

Dynamic ALC_obj::getCurrentContext( ){
	HX_STACK_FRAME("lime.audio.openal.ALC","getCurrentContext",0x185e0b4e,"lime.audio.openal.ALC.getCurrentContext","lime/audio/openal/ALC.hx",87,0x52b9922d)
	HX_STACK_LINE(90)
	Float tmp = ::lime::audio::openal::ALC_obj::lime_alc_get_current_context();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(90)
	Float handle = tmp;		HX_STACK_VAR(handle,"handle");
	HX_STACK_LINE(92)
	bool tmp1 = (handle != (int)0);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(92)
	if ((tmp1)){
		HX_STACK_LINE(94)
		Float tmp2 = handle;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(94)
		Dynamic tmp3 = ::lime::audio::openal::_ALContext::ALContext_Impl__obj::_new(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(94)
		return tmp3;
	}
	HX_STACK_LINE(99)
	return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(ALC_obj,getCurrentContext,return )

int ALC_obj::getError( Dynamic device){
	HX_STACK_FRAME("lime.audio.openal.ALC","getError",0xbf7a3e30,"lime.audio.openal.ALC.getError","lime/audio/openal/ALC.hx",104,0x52b9922d)
	HX_STACK_ARG(device,"device")
	HX_STACK_LINE(107)
	Dynamic tmp = device;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(107)
	int tmp1 = ::lime::audio::openal::ALC_obj::lime_alc_get_error(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(107)
	return tmp1;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(ALC_obj,getError,return )

::String ALC_obj::getErrorString( Dynamic device){
	HX_STACK_FRAME("lime.audio.openal.ALC","getErrorString",0xdb879f21,"lime.audio.openal.ALC.getErrorString","lime/audio/openal/ALC.hx",115,0x52b9922d)
	HX_STACK_ARG(device,"device")
	HX_STACK_LINE(117)
	::String tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(117)
	{
		HX_STACK_LINE(117)
		Dynamic tmp1 = device;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(117)
		int tmp2 = ::lime::audio::openal::ALC_obj::getError(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(117)
		int _g = tmp2;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(117)
		int tmp3 = _g;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(117)
		switch( (int)(tmp3)){
			case (int)40961: {
				HX_STACK_LINE(119)
				tmp = HX_HCSTRING("INVALID_DEVICE: Invalid device (or no device?)","\x8d","\x16","\x8a","\x9d");
			}
			;break;
			case (int)40962: {
				HX_STACK_LINE(120)
				tmp = HX_HCSTRING("INVALID_CONTEXT: Invalid context (or no context?)","\x56","\x39","\x91","\x8b");
			}
			;break;
			case (int)40963: {
				HX_STACK_LINE(121)
				tmp = HX_HCSTRING("INVALID_ENUM: Invalid enum value","\x0a","\xd7","\xdf","\x59");
			}
			;break;
			case (int)40964: {
				HX_STACK_LINE(122)
				tmp = HX_HCSTRING("INVALID_VALUE: Invalid param value","\xa6","\x0e","\x30","\x55");
			}
			;break;
			case (int)40965: {
				HX_STACK_LINE(123)
				tmp = HX_HCSTRING("OUT_OF_MEMORY: OpenAL has run out of memory","\xb0","\xdd","\xfb","\x0a");
			}
			;break;
			default: {
				HX_STACK_LINE(124)
				tmp = HX_HCSTRING("","\x00","\x00","\x00","\x00");
			}
		}
	}
	HX_STACK_LINE(117)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(ALC_obj,getErrorString,return )

Array< int > ALC_obj::getIntegerv( Dynamic device,int param,int size){
	HX_STACK_FRAME("lime.audio.openal.ALC","getIntegerv",0x05eb4790,"lime.audio.openal.ALC.getIntegerv","lime/audio/openal/ALC.hx",131,0x52b9922d)
	HX_STACK_ARG(device,"device")
	HX_STACK_ARG(param,"param")
	HX_STACK_ARG(size,"size")
	HX_STACK_LINE(134)
	Dynamic tmp = device;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(134)
	int tmp1 = param;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(134)
	int tmp2 = size;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(134)
	return ::lime::audio::openal::ALC_obj::lime_alc_get_integerv(tmp,tmp1,tmp2);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(ALC_obj,getIntegerv,return )

::String ALC_obj::getString( Dynamic device,int param){
	HX_STACK_FRAME("lime.audio.openal.ALC","getString",0x8b43d169,"lime.audio.openal.ALC.getString","lime/audio/openal/ALC.hx",142,0x52b9922d)
	HX_STACK_ARG(device,"device")
	HX_STACK_ARG(param,"param")
	HX_STACK_LINE(145)
	Dynamic tmp = device;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(145)
	int tmp1 = param;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(145)
	::String tmp2 = ::lime::audio::openal::ALC_obj::lime_alc_get_string(tmp,tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(145)
	return tmp2;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(ALC_obj,getString,return )

bool ALC_obj::makeContextCurrent( Dynamic context){
	HX_STACK_FRAME("lime.audio.openal.ALC","makeContextCurrent",0x187750f6,"lime.audio.openal.ALC.makeContextCurrent","lime/audio/openal/ALC.hx",153,0x52b9922d)
	HX_STACK_ARG(context,"context")
	HX_STACK_LINE(156)
	Dynamic tmp = context;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(156)
	bool tmp1 = ::lime::audio::openal::ALC_obj::lime_alc_make_context_current(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(156)
	return tmp1;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(ALC_obj,makeContextCurrent,return )

Dynamic ALC_obj::openDevice( ::String deviceName){
	HX_STACK_FRAME("lime.audio.openal.ALC","openDevice",0xc6d29e5e,"lime.audio.openal.ALC.openDevice","lime/audio/openal/ALC.hx",164,0x52b9922d)
	HX_STACK_ARG(deviceName,"deviceName")
	HX_STACK_LINE(167)
	::String tmp = deviceName;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(167)
	Float tmp1 = ::lime::audio::openal::ALC_obj::lime_alc_open_device(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(167)
	Float handle = tmp1;		HX_STACK_VAR(handle,"handle");
	HX_STACK_LINE(169)
	bool tmp2 = (handle != (int)0);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(169)
	if ((tmp2)){
		HX_STACK_LINE(171)
		Float tmp3 = handle;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(171)
		Dynamic tmp4 = ::lime::audio::openal::_ALDevice::ALDevice_Impl__obj::_new(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(171)
		return tmp4;
	}
	HX_STACK_LINE(176)
	return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(ALC_obj,openDevice,return )

Void ALC_obj::processContext( Dynamic context){
{
		HX_STACK_FRAME("lime.audio.openal.ALC","processContext",0x2021b49e,"lime.audio.openal.ALC.processContext","lime/audio/openal/ALC.hx",181,0x52b9922d)
		HX_STACK_ARG(context,"context")
		HX_STACK_LINE(184)
		Dynamic tmp = context;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(184)
		::lime::audio::openal::ALC_obj::lime_alc_process_context(tmp);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(ALC_obj,processContext,(void))

Void ALC_obj::suspendContext( Dynamic context){
{
		HX_STACK_FRAME("lime.audio.openal.ALC","suspendContext",0x53089331,"lime.audio.openal.ALC.suspendContext","lime/audio/openal/ALC.hx",190,0x52b9922d)
		HX_STACK_ARG(context,"context")
		HX_STACK_LINE(193)
		Dynamic tmp = context;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(193)
		::lime::audio::openal::ALC_obj::lime_alc_suspend_context(tmp);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(ALC_obj,suspendContext,(void))

Dynamic ALC_obj::lime_alc_close_device;

Dynamic ALC_obj::lime_alc_create_context;

Dynamic ALC_obj::lime_alc_destroy_context;

Dynamic ALC_obj::lime_alc_get_contexts_device;

Dynamic ALC_obj::lime_alc_get_current_context;

Dynamic ALC_obj::lime_alc_get_error;

Dynamic ALC_obj::lime_alc_get_integerv;

Dynamic ALC_obj::lime_alc_get_string;

Dynamic ALC_obj::lime_alc_make_context_current;

Dynamic ALC_obj::lime_alc_open_device;

Dynamic ALC_obj::lime_alc_process_context;

Dynamic ALC_obj::lime_alc_suspend_context;


ALC_obj::ALC_obj()
{
}

bool ALC_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"getError") ) { outValue = getError_dyn(); return true;  }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"getString") ) { outValue = getString_dyn(); return true;  }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"openDevice") ) { outValue = openDevice_dyn(); return true;  }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"closeDevice") ) { outValue = closeDevice_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"getIntegerv") ) { outValue = getIntegerv_dyn(); return true;  }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"createContext") ) { outValue = createContext_dyn(); return true;  }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"destroyContext") ) { outValue = destroyContext_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"getErrorString") ) { outValue = getErrorString_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"processContext") ) { outValue = processContext_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"suspendContext") ) { outValue = suspendContext_dyn(); return true;  }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"getContextsDevice") ) { outValue = getContextsDevice_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"getCurrentContext") ) { outValue = getCurrentContext_dyn(); return true;  }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"makeContextCurrent") ) { outValue = makeContextCurrent_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"lime_alc_get_error") ) { outValue = lime_alc_get_error; return true;  }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"lime_alc_get_string") ) { outValue = lime_alc_get_string; return true;  }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"lime_alc_open_device") ) { outValue = lime_alc_open_device; return true;  }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"lime_alc_close_device") ) { outValue = lime_alc_close_device; return true;  }
		if (HX_FIELD_EQ(inName,"lime_alc_get_integerv") ) { outValue = lime_alc_get_integerv; return true;  }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"lime_alc_create_context") ) { outValue = lime_alc_create_context; return true;  }
		break;
	case 24:
		if (HX_FIELD_EQ(inName,"lime_alc_destroy_context") ) { outValue = lime_alc_destroy_context; return true;  }
		if (HX_FIELD_EQ(inName,"lime_alc_process_context") ) { outValue = lime_alc_process_context; return true;  }
		if (HX_FIELD_EQ(inName,"lime_alc_suspend_context") ) { outValue = lime_alc_suspend_context; return true;  }
		break;
	case 28:
		if (HX_FIELD_EQ(inName,"lime_alc_get_contexts_device") ) { outValue = lime_alc_get_contexts_device; return true;  }
		if (HX_FIELD_EQ(inName,"lime_alc_get_current_context") ) { outValue = lime_alc_get_current_context; return true;  }
		break;
	case 29:
		if (HX_FIELD_EQ(inName,"lime_alc_make_context_current") ) { outValue = lime_alc_make_context_current; return true;  }
	}
	return false;
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
static hx::StaticInfo sStaticStorageInfo[] = {
	{hx::fsInt,(void *) &ALC_obj::FALSE,HX_HCSTRING("FALSE","\x83","\x6d","\x3d","\x79")},
	{hx::fsInt,(void *) &ALC_obj::TRUE,HX_HCSTRING("TRUE","\x4e","\x6f","\xc4","\x37")},
	{hx::fsInt,(void *) &ALC_obj::FREQUENCY,HX_HCSTRING("FREQUENCY","\x7c","\xf2","\x42","\xb7")},
	{hx::fsInt,(void *) &ALC_obj::REFRESH,HX_HCSTRING("REFRESH","\xbb","\xad","\xf4","\x6c")},
	{hx::fsInt,(void *) &ALC_obj::SYNC,HX_HCSTRING("SYNC","\x5b","\x82","\x20","\x37")},
	{hx::fsInt,(void *) &ALC_obj::MONO_SOURCES,HX_HCSTRING("MONO_SOURCES","\xbc","\x3b","\x3c","\xad")},
	{hx::fsInt,(void *) &ALC_obj::STEREO_SOURCES,HX_HCSTRING("STEREO_SOURCES","\xd1","\x0f","\x99","\x60")},
	{hx::fsInt,(void *) &ALC_obj::NO_ERROR,HX_HCSTRING("NO_ERROR","\xea","\xb5","\x7d","\x2f")},
	{hx::fsInt,(void *) &ALC_obj::INVALID_DEVICE,HX_HCSTRING("INVALID_DEVICE","\x3e","\x84","\xa5","\x93")},
	{hx::fsInt,(void *) &ALC_obj::INVALID_CONTEXT,HX_HCSTRING("INVALID_CONTEXT","\x27","\xa1","\x3c","\xdf")},
	{hx::fsInt,(void *) &ALC_obj::INVALID_ENUM,HX_HCSTRING("INVALID_ENUM","\xa9","\x74","\x70","\x13")},
	{hx::fsInt,(void *) &ALC_obj::INVALID_VALUE,HX_HCSTRING("INVALID_VALUE","\xa9","\xe8","\x26","\xb0")},
	{hx::fsInt,(void *) &ALC_obj::OUT_OF_MEMORY,HX_HCSTRING("OUT_OF_MEMORY","\x18","\xf2","\x97","\xe1")},
	{hx::fsInt,(void *) &ALC_obj::ATTRIBUTES_SIZE,HX_HCSTRING("ATTRIBUTES_SIZE","\x69","\x7c","\x9f","\x17")},
	{hx::fsInt,(void *) &ALC_obj::ALL_ATTRIBUTES,HX_HCSTRING("ALL_ATTRIBUTES","\x95","\xe2","\x00","\x04")},
	{hx::fsInt,(void *) &ALC_obj::DEFAULT_DEVICE_SPECIFIER,HX_HCSTRING("DEFAULT_DEVICE_SPECIFIER","\x93","\xa5","\xbc","\xd9")},
	{hx::fsInt,(void *) &ALC_obj::DEVICE_SPECIFIER,HX_HCSTRING("DEVICE_SPECIFIER","\xf5","\xa8","\x61","\x21")},
	{hx::fsInt,(void *) &ALC_obj::EXTENSIONS,HX_HCSTRING("EXTENSIONS","\x14","\xf0","\x79","\x7b")},
	{hx::fsInt,(void *) &ALC_obj::ENUMERATE_ALL_EXT,HX_HCSTRING("ENUMERATE_ALL_EXT","\x88","\xff","\x7d","\xb7")},
	{hx::fsInt,(void *) &ALC_obj::DEFAULT_ALL_DEVICES_SPECIFIER,HX_HCSTRING("DEFAULT_ALL_DEVICES_SPECIFIER","\xc0","\xd6","\x77","\xd2")},
	{hx::fsInt,(void *) &ALC_obj::ALL_DEVICES_SPECIFIER,HX_HCSTRING("ALL_DEVICES_SPECIFIER","\x1e","\x50","\xc1","\xf5")},
	{hx::fsObject /*Dynamic*/ ,(void *) &ALC_obj::lime_alc_close_device,HX_HCSTRING("lime_alc_close_device","\xee","\x17","\x5c","\xd1")},
	{hx::fsObject /*Dynamic*/ ,(void *) &ALC_obj::lime_alc_create_context,HX_HCSTRING("lime_alc_create_context","\x1d","\x4b","\x86","\xd8")},
	{hx::fsObject /*Dynamic*/ ,(void *) &ALC_obj::lime_alc_destroy_context,HX_HCSTRING("lime_alc_destroy_context","\x99","\xa8","\x9a","\x12")},
	{hx::fsObject /*Dynamic*/ ,(void *) &ALC_obj::lime_alc_get_contexts_device,HX_HCSTRING("lime_alc_get_contexts_device","\xd7","\xe3","\xae","\xe6")},
	{hx::fsObject /*Dynamic*/ ,(void *) &ALC_obj::lime_alc_get_current_context,HX_HCSTRING("lime_alc_get_current_context","\x6f","\x01","\xf1","\x48")},
	{hx::fsObject /*Dynamic*/ ,(void *) &ALC_obj::lime_alc_get_error,HX_HCSTRING("lime_alc_get_error","\x0e","\x4d","\x6e","\x60")},
	{hx::fsObject /*Dynamic*/ ,(void *) &ALC_obj::lime_alc_get_integerv,HX_HCSTRING("lime_alc_get_integerv","\x72","\x57","\x31","\x49")},
	{hx::fsObject /*Dynamic*/ ,(void *) &ALC_obj::lime_alc_get_string,HX_HCSTRING("lime_alc_get_string","\xcb","\xc4","\xdc","\xbf")},
	{hx::fsObject /*Dynamic*/ ,(void *) &ALC_obj::lime_alc_make_context_current,HX_HCSTRING("lime_alc_make_context_current","\x89","\xfe","\x9c","\xca")},
	{hx::fsObject /*Dynamic*/ ,(void *) &ALC_obj::lime_alc_open_device,HX_HCSTRING("lime_alc_open_device","\x5a","\xd6","\x40","\x50")},
	{hx::fsObject /*Dynamic*/ ,(void *) &ALC_obj::lime_alc_process_context,HX_HCSTRING("lime_alc_process_context","\x0e","\x1b","\xb1","\x00")},
	{hx::fsObject /*Dynamic*/ ,(void *) &ALC_obj::lime_alc_suspend_context,HX_HCSTRING("lime_alc_suspend_context","\x1b","\xfd","\xcc","\x57")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ALC_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(ALC_obj::FALSE,"FALSE");
	HX_MARK_MEMBER_NAME(ALC_obj::TRUE,"TRUE");
	HX_MARK_MEMBER_NAME(ALC_obj::FREQUENCY,"FREQUENCY");
	HX_MARK_MEMBER_NAME(ALC_obj::REFRESH,"REFRESH");
	HX_MARK_MEMBER_NAME(ALC_obj::SYNC,"SYNC");
	HX_MARK_MEMBER_NAME(ALC_obj::MONO_SOURCES,"MONO_SOURCES");
	HX_MARK_MEMBER_NAME(ALC_obj::STEREO_SOURCES,"STEREO_SOURCES");
	HX_MARK_MEMBER_NAME(ALC_obj::NO_ERROR,"NO_ERROR");
	HX_MARK_MEMBER_NAME(ALC_obj::INVALID_DEVICE,"INVALID_DEVICE");
	HX_MARK_MEMBER_NAME(ALC_obj::INVALID_CONTEXT,"INVALID_CONTEXT");
	HX_MARK_MEMBER_NAME(ALC_obj::INVALID_ENUM,"INVALID_ENUM");
	HX_MARK_MEMBER_NAME(ALC_obj::INVALID_VALUE,"INVALID_VALUE");
	HX_MARK_MEMBER_NAME(ALC_obj::OUT_OF_MEMORY,"OUT_OF_MEMORY");
	HX_MARK_MEMBER_NAME(ALC_obj::ATTRIBUTES_SIZE,"ATTRIBUTES_SIZE");
	HX_MARK_MEMBER_NAME(ALC_obj::ALL_ATTRIBUTES,"ALL_ATTRIBUTES");
	HX_MARK_MEMBER_NAME(ALC_obj::DEFAULT_DEVICE_SPECIFIER,"DEFAULT_DEVICE_SPECIFIER");
	HX_MARK_MEMBER_NAME(ALC_obj::DEVICE_SPECIFIER,"DEVICE_SPECIFIER");
	HX_MARK_MEMBER_NAME(ALC_obj::EXTENSIONS,"EXTENSIONS");
	HX_MARK_MEMBER_NAME(ALC_obj::ENUMERATE_ALL_EXT,"ENUMERATE_ALL_EXT");
	HX_MARK_MEMBER_NAME(ALC_obj::DEFAULT_ALL_DEVICES_SPECIFIER,"DEFAULT_ALL_DEVICES_SPECIFIER");
	HX_MARK_MEMBER_NAME(ALC_obj::ALL_DEVICES_SPECIFIER,"ALL_DEVICES_SPECIFIER");
	HX_MARK_MEMBER_NAME(ALC_obj::lime_alc_close_device,"lime_alc_close_device");
	HX_MARK_MEMBER_NAME(ALC_obj::lime_alc_create_context,"lime_alc_create_context");
	HX_MARK_MEMBER_NAME(ALC_obj::lime_alc_destroy_context,"lime_alc_destroy_context");
	HX_MARK_MEMBER_NAME(ALC_obj::lime_alc_get_contexts_device,"lime_alc_get_contexts_device");
	HX_MARK_MEMBER_NAME(ALC_obj::lime_alc_get_current_context,"lime_alc_get_current_context");
	HX_MARK_MEMBER_NAME(ALC_obj::lime_alc_get_error,"lime_alc_get_error");
	HX_MARK_MEMBER_NAME(ALC_obj::lime_alc_get_integerv,"lime_alc_get_integerv");
	HX_MARK_MEMBER_NAME(ALC_obj::lime_alc_get_string,"lime_alc_get_string");
	HX_MARK_MEMBER_NAME(ALC_obj::lime_alc_make_context_current,"lime_alc_make_context_current");
	HX_MARK_MEMBER_NAME(ALC_obj::lime_alc_open_device,"lime_alc_open_device");
	HX_MARK_MEMBER_NAME(ALC_obj::lime_alc_process_context,"lime_alc_process_context");
	HX_MARK_MEMBER_NAME(ALC_obj::lime_alc_suspend_context,"lime_alc_suspend_context");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ALC_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(ALC_obj::FALSE,"FALSE");
	HX_VISIT_MEMBER_NAME(ALC_obj::TRUE,"TRUE");
	HX_VISIT_MEMBER_NAME(ALC_obj::FREQUENCY,"FREQUENCY");
	HX_VISIT_MEMBER_NAME(ALC_obj::REFRESH,"REFRESH");
	HX_VISIT_MEMBER_NAME(ALC_obj::SYNC,"SYNC");
	HX_VISIT_MEMBER_NAME(ALC_obj::MONO_SOURCES,"MONO_SOURCES");
	HX_VISIT_MEMBER_NAME(ALC_obj::STEREO_SOURCES,"STEREO_SOURCES");
	HX_VISIT_MEMBER_NAME(ALC_obj::NO_ERROR,"NO_ERROR");
	HX_VISIT_MEMBER_NAME(ALC_obj::INVALID_DEVICE,"INVALID_DEVICE");
	HX_VISIT_MEMBER_NAME(ALC_obj::INVALID_CONTEXT,"INVALID_CONTEXT");
	HX_VISIT_MEMBER_NAME(ALC_obj::INVALID_ENUM,"INVALID_ENUM");
	HX_VISIT_MEMBER_NAME(ALC_obj::INVALID_VALUE,"INVALID_VALUE");
	HX_VISIT_MEMBER_NAME(ALC_obj::OUT_OF_MEMORY,"OUT_OF_MEMORY");
	HX_VISIT_MEMBER_NAME(ALC_obj::ATTRIBUTES_SIZE,"ATTRIBUTES_SIZE");
	HX_VISIT_MEMBER_NAME(ALC_obj::ALL_ATTRIBUTES,"ALL_ATTRIBUTES");
	HX_VISIT_MEMBER_NAME(ALC_obj::DEFAULT_DEVICE_SPECIFIER,"DEFAULT_DEVICE_SPECIFIER");
	HX_VISIT_MEMBER_NAME(ALC_obj::DEVICE_SPECIFIER,"DEVICE_SPECIFIER");
	HX_VISIT_MEMBER_NAME(ALC_obj::EXTENSIONS,"EXTENSIONS");
	HX_VISIT_MEMBER_NAME(ALC_obj::ENUMERATE_ALL_EXT,"ENUMERATE_ALL_EXT");
	HX_VISIT_MEMBER_NAME(ALC_obj::DEFAULT_ALL_DEVICES_SPECIFIER,"DEFAULT_ALL_DEVICES_SPECIFIER");
	HX_VISIT_MEMBER_NAME(ALC_obj::ALL_DEVICES_SPECIFIER,"ALL_DEVICES_SPECIFIER");
	HX_VISIT_MEMBER_NAME(ALC_obj::lime_alc_close_device,"lime_alc_close_device");
	HX_VISIT_MEMBER_NAME(ALC_obj::lime_alc_create_context,"lime_alc_create_context");
	HX_VISIT_MEMBER_NAME(ALC_obj::lime_alc_destroy_context,"lime_alc_destroy_context");
	HX_VISIT_MEMBER_NAME(ALC_obj::lime_alc_get_contexts_device,"lime_alc_get_contexts_device");
	HX_VISIT_MEMBER_NAME(ALC_obj::lime_alc_get_current_context,"lime_alc_get_current_context");
	HX_VISIT_MEMBER_NAME(ALC_obj::lime_alc_get_error,"lime_alc_get_error");
	HX_VISIT_MEMBER_NAME(ALC_obj::lime_alc_get_integerv,"lime_alc_get_integerv");
	HX_VISIT_MEMBER_NAME(ALC_obj::lime_alc_get_string,"lime_alc_get_string");
	HX_VISIT_MEMBER_NAME(ALC_obj::lime_alc_make_context_current,"lime_alc_make_context_current");
	HX_VISIT_MEMBER_NAME(ALC_obj::lime_alc_open_device,"lime_alc_open_device");
	HX_VISIT_MEMBER_NAME(ALC_obj::lime_alc_process_context,"lime_alc_process_context");
	HX_VISIT_MEMBER_NAME(ALC_obj::lime_alc_suspend_context,"lime_alc_suspend_context");
};

#endif

hx::Class ALC_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("FALSE","\x83","\x6d","\x3d","\x79"),
	HX_HCSTRING("TRUE","\x4e","\x6f","\xc4","\x37"),
	HX_HCSTRING("FREQUENCY","\x7c","\xf2","\x42","\xb7"),
	HX_HCSTRING("REFRESH","\xbb","\xad","\xf4","\x6c"),
	HX_HCSTRING("SYNC","\x5b","\x82","\x20","\x37"),
	HX_HCSTRING("MONO_SOURCES","\xbc","\x3b","\x3c","\xad"),
	HX_HCSTRING("STEREO_SOURCES","\xd1","\x0f","\x99","\x60"),
	HX_HCSTRING("NO_ERROR","\xea","\xb5","\x7d","\x2f"),
	HX_HCSTRING("INVALID_DEVICE","\x3e","\x84","\xa5","\x93"),
	HX_HCSTRING("INVALID_CONTEXT","\x27","\xa1","\x3c","\xdf"),
	HX_HCSTRING("INVALID_ENUM","\xa9","\x74","\x70","\x13"),
	HX_HCSTRING("INVALID_VALUE","\xa9","\xe8","\x26","\xb0"),
	HX_HCSTRING("OUT_OF_MEMORY","\x18","\xf2","\x97","\xe1"),
	HX_HCSTRING("ATTRIBUTES_SIZE","\x69","\x7c","\x9f","\x17"),
	HX_HCSTRING("ALL_ATTRIBUTES","\x95","\xe2","\x00","\x04"),
	HX_HCSTRING("DEFAULT_DEVICE_SPECIFIER","\x93","\xa5","\xbc","\xd9"),
	HX_HCSTRING("DEVICE_SPECIFIER","\xf5","\xa8","\x61","\x21"),
	HX_HCSTRING("EXTENSIONS","\x14","\xf0","\x79","\x7b"),
	HX_HCSTRING("ENUMERATE_ALL_EXT","\x88","\xff","\x7d","\xb7"),
	HX_HCSTRING("DEFAULT_ALL_DEVICES_SPECIFIER","\xc0","\xd6","\x77","\xd2"),
	HX_HCSTRING("ALL_DEVICES_SPECIFIER","\x1e","\x50","\xc1","\xf5"),
	HX_HCSTRING("closeDevice","\x6e","\x02","\xc8","\x2b"),
	HX_HCSTRING("createContext","\x53","\x6e","\xba","\x01"),
	HX_HCSTRING("destroyContext","\x15","\x84","\xe3","\x85"),
	HX_HCSTRING("getContextsDevice","\x90","\xee","\x91","\x9c"),
	HX_HCSTRING("getCurrentContext","\xec","\xb9","\x7f","\x99"),
	HX_HCSTRING("getError","\x52","\xdb","\x00","\xd3"),
	HX_HCSTRING("getErrorString","\xc3","\xc1","\x3b","\x87"),
	HX_HCSTRING("getIntegerv","\xae","\x0b","\x1e","\x47"),
	HX_HCSTRING("getString","\x07","\xb2","\x86","\x8d"),
	HX_HCSTRING("makeContextCurrent","\x98","\x6c","\xce","\x94"),
	HX_HCSTRING("openDevice","\x00","\x48","\x14","\xbf"),
	HX_HCSTRING("processContext","\x40","\xd7","\xd5","\xcb"),
	HX_HCSTRING("suspendContext","\xd3","\xb5","\xbc","\xfe"),
	HX_HCSTRING("lime_alc_close_device","\xee","\x17","\x5c","\xd1"),
	HX_HCSTRING("lime_alc_create_context","\x1d","\x4b","\x86","\xd8"),
	HX_HCSTRING("lime_alc_destroy_context","\x99","\xa8","\x9a","\x12"),
	HX_HCSTRING("lime_alc_get_contexts_device","\xd7","\xe3","\xae","\xe6"),
	HX_HCSTRING("lime_alc_get_current_context","\x6f","\x01","\xf1","\x48"),
	HX_HCSTRING("lime_alc_get_error","\x0e","\x4d","\x6e","\x60"),
	HX_HCSTRING("lime_alc_get_integerv","\x72","\x57","\x31","\x49"),
	HX_HCSTRING("lime_alc_get_string","\xcb","\xc4","\xdc","\xbf"),
	HX_HCSTRING("lime_alc_make_context_current","\x89","\xfe","\x9c","\xca"),
	HX_HCSTRING("lime_alc_open_device","\x5a","\xd6","\x40","\x50"),
	HX_HCSTRING("lime_alc_process_context","\x0e","\x1b","\xb1","\x00"),
	HX_HCSTRING("lime_alc_suspend_context","\x1b","\xfd","\xcc","\x57"),
	::String(null()) };

void ALC_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("lime.audio.openal.ALC","\x50","\xd1","\xca","\xf4");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &ALC_obj::__GetStatic;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< ALC_obj >;
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

void ALC_obj::__boot()
{
	FALSE= (int)0;
	TRUE= (int)1;
	FREQUENCY= (int)4103;
	REFRESH= (int)4104;
	SYNC= (int)4105;
	MONO_SOURCES= (int)4112;
	STEREO_SOURCES= (int)4113;
	NO_ERROR= (int)0;
	INVALID_DEVICE= (int)40961;
	INVALID_CONTEXT= (int)40962;
	INVALID_ENUM= (int)40963;
	INVALID_VALUE= (int)40964;
	OUT_OF_MEMORY= (int)40965;
	ATTRIBUTES_SIZE= (int)4098;
	ALL_ATTRIBUTES= (int)4099;
	DEFAULT_DEVICE_SPECIFIER= (int)4100;
	DEVICE_SPECIFIER= (int)4101;
	EXTENSIONS= (int)4102;
	ENUMERATE_ALL_EXT= (int)1;
	DEFAULT_ALL_DEVICES_SPECIFIER= (int)4114;
	ALL_DEVICES_SPECIFIER= (int)4115;
	lime_alc_close_device= ::lime::_system::System_obj::load(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_alc_close_device","\xee","\x17","\x5c","\xd1"),(int)1,null());
	lime_alc_create_context= ::lime::_system::System_obj::load(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_alc_create_context","\x1d","\x4b","\x86","\xd8"),(int)2,null());
	lime_alc_destroy_context= ::lime::_system::System_obj::load(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_alc_destroy_context","\x99","\xa8","\x9a","\x12"),(int)1,null());
	lime_alc_get_contexts_device= ::lime::_system::System_obj::load(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_alc_get_contexts_device","\xd7","\xe3","\xae","\xe6"),(int)1,null());
	lime_alc_get_current_context= ::lime::_system::System_obj::load(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_alc_get_current_context","\x6f","\x01","\xf1","\x48"),(int)0,null());
	lime_alc_get_error= ::lime::_system::System_obj::load(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_alc_get_error","\x0e","\x4d","\x6e","\x60"),(int)1,null());
	lime_alc_get_integerv= ::lime::_system::System_obj::load(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_alc_get_integerv","\x72","\x57","\x31","\x49"),(int)3,null());
	lime_alc_get_string= ::lime::_system::System_obj::load(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_alc_get_string","\xcb","\xc4","\xdc","\xbf"),(int)2,null());
	lime_alc_make_context_current= ::lime::_system::System_obj::load(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_alc_make_context_current","\x89","\xfe","\x9c","\xca"),(int)1,null());
	lime_alc_open_device= ::lime::_system::System_obj::load(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_alc_open_device","\x5a","\xd6","\x40","\x50"),(int)1,null());
	lime_alc_process_context= ::lime::_system::System_obj::load(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_alc_process_context","\x0e","\x1b","\xb1","\x00"),(int)1,null());
	lime_alc_suspend_context= ::lime::_system::System_obj::load(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_alc_suspend_context","\x1b","\xfd","\xcc","\x57"),(int)1,null());
}

} // end namespace lime
} // end namespace audio
} // end namespace openal
