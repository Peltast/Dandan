#include <hxcpp.h>

#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
#endif
#ifndef INCLUDED_lime_audio_AudioBuffer
#include <lime/audio/AudioBuffer.h>
#endif
#ifndef INCLUDED_lime_system_System
#include <lime/system/System.h>
#endif
#ifndef INCLUDED_lime_utils_ByteArray
#include <lime/utils/ByteArray.h>
#endif
#ifndef INCLUDED_lime_utils_IDataInput
#include <lime/utils/IDataInput.h>
#endif
#ifndef INCLUDED_lime_utils_IMemoryRange
#include <lime/utils/IMemoryRange.h>
#endif
namespace lime{
namespace audio{

Void AudioBuffer_obj::__construct()
{
HX_STACK_FRAME("lime.audio.AudioBuffer","new",0x54859e97,"lime.audio.AudioBuffer.new","lime/audio/AudioBuffer.hx",41,0x5fb686fb)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(41)
	this->id = (int)0;
}
;
	return null();
}

//AudioBuffer_obj::~AudioBuffer_obj() { }

Dynamic AudioBuffer_obj::__CreateEmpty() { return  new AudioBuffer_obj; }
hx::ObjectPtr< AudioBuffer_obj > AudioBuffer_obj::__new()
{  hx::ObjectPtr< AudioBuffer_obj > _result_ = new AudioBuffer_obj();
	_result_->__construct();
	return _result_;}

Dynamic AudioBuffer_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< AudioBuffer_obj > _result_ = new AudioBuffer_obj();
	_result_->__construct();
	return _result_;}

Void AudioBuffer_obj::dispose( ){
{
		HX_STACK_FRAME("lime.audio.AudioBuffer","dispose",0xb2873656,"lime.audio.AudioBuffer.dispose","lime/audio/AudioBuffer.hx",46,0x5fb686fb)
		HX_STACK_THIS(this)
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(AudioBuffer_obj,dispose,(void))

::lime::audio::AudioBuffer AudioBuffer_obj::fromBytes( ::lime::utils::ByteArray bytes){
	HX_STACK_FRAME("lime.audio.AudioBuffer","fromBytes",0xb5bdc418,"lime.audio.AudioBuffer.fromBytes","lime/audio/AudioBuffer.hx",61,0x5fb686fb)
	HX_STACK_ARG(bytes,"bytes")
	HX_STACK_LINE(84)
	Dynamic tmp = ::lime::audio::AudioBuffer_obj::lime_audio_load(bytes);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(84)
	Dynamic data = tmp;		HX_STACK_VAR(data,"data");
	HX_STACK_LINE(86)
	bool tmp1 = (data != null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(86)
	if ((tmp1)){
		HX_STACK_LINE(88)
		::lime::audio::AudioBuffer tmp2 = ::lime::audio::AudioBuffer_obj::__new();		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(88)
		::lime::audio::AudioBuffer audioBuffer = tmp2;		HX_STACK_VAR(audioBuffer,"audioBuffer");
		HX_STACK_LINE(89)
		audioBuffer->bitsPerSample = data->__Field(HX_HCSTRING("bitsPerSample","\x01","\x01","\x36","\xc4"), hx::paccDynamic );
		HX_STACK_LINE(90)
		audioBuffer->channels = data->__Field(HX_HCSTRING("channels","\x50","\xaa","\xee","\x6a"), hx::paccDynamic );
		HX_STACK_LINE(91)
		int tmp3 = data->__Field(HX_HCSTRING("data","\x2a","\x56","\x63","\x42"), hx::paccDynamic )->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(91)
		::haxe::io::Bytes tmp4 = ::haxe::io::Bytes_obj::__new(tmp3,data->__Field(HX_HCSTRING("data","\x2a","\x56","\x63","\x42"), hx::paccDynamic )->__Field(HX_HCSTRING("b","\x62","\x00","\x00","\x00"), hx::paccDynamic ));		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(91)
		::lime::utils::ByteArray tmp5 = ::lime::utils::ByteArray_obj::fromBytes(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(91)
		audioBuffer->data = tmp5;
		HX_STACK_LINE(92)
		audioBuffer->sampleRate = data->__Field(HX_HCSTRING("sampleRate","\x2a","\x3c","\x4c","\x67"), hx::paccDynamic );
		HX_STACK_LINE(93)
		::lime::audio::AudioBuffer tmp6 = audioBuffer;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(93)
		return tmp6;
	}
	HX_STACK_LINE(99)
	return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(AudioBuffer_obj,fromBytes,return )

::lime::audio::AudioBuffer AudioBuffer_obj::fromFile( ::String path){
	HX_STACK_FRAME("lime.audio.AudioBuffer","fromFile",0xfdabe76f,"lime.audio.AudioBuffer.fromFile","lime/audio/AudioBuffer.hx",104,0x5fb686fb)
	HX_STACK_ARG(path,"path")
	HX_STACK_LINE(124)
	Dynamic tmp = ::lime::audio::AudioBuffer_obj::lime_audio_load(path);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(124)
	Dynamic data = tmp;		HX_STACK_VAR(data,"data");
	HX_STACK_LINE(126)
	bool tmp1 = (data != null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(126)
	if ((tmp1)){
		HX_STACK_LINE(128)
		::lime::audio::AudioBuffer tmp2 = ::lime::audio::AudioBuffer_obj::__new();		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(128)
		::lime::audio::AudioBuffer audioBuffer = tmp2;		HX_STACK_VAR(audioBuffer,"audioBuffer");
		HX_STACK_LINE(129)
		audioBuffer->bitsPerSample = data->__Field(HX_HCSTRING("bitsPerSample","\x01","\x01","\x36","\xc4"), hx::paccDynamic );
		HX_STACK_LINE(130)
		audioBuffer->channels = data->__Field(HX_HCSTRING("channels","\x50","\xaa","\xee","\x6a"), hx::paccDynamic );
		HX_STACK_LINE(131)
		int tmp3 = data->__Field(HX_HCSTRING("data","\x2a","\x56","\x63","\x42"), hx::paccDynamic )->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(131)
		::haxe::io::Bytes tmp4 = ::haxe::io::Bytes_obj::__new(tmp3,data->__Field(HX_HCSTRING("data","\x2a","\x56","\x63","\x42"), hx::paccDynamic )->__Field(HX_HCSTRING("b","\x62","\x00","\x00","\x00"), hx::paccDynamic ));		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(131)
		::lime::utils::ByteArray tmp5 = ::lime::utils::ByteArray_obj::fromBytes(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(131)
		audioBuffer->data = tmp5;
		HX_STACK_LINE(132)
		audioBuffer->sampleRate = data->__Field(HX_HCSTRING("sampleRate","\x2a","\x3c","\x4c","\x67"), hx::paccDynamic );
		HX_STACK_LINE(133)
		::lime::audio::AudioBuffer tmp6 = audioBuffer;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(133)
		return tmp6;
	}
	HX_STACK_LINE(139)
	return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(AudioBuffer_obj,fromFile,return )

Void AudioBuffer_obj::fromURL( ::String url,Dynamic handler){
{
		HX_STACK_FRAME("lime.audio.AudioBuffer","fromURL",0x4f3e95dc,"lime.audio.AudioBuffer.fromURL","lime/audio/AudioBuffer.hx",144,0x5fb686fb)
		HX_STACK_ARG(url,"url")
		HX_STACK_ARG(handler,"handler")
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(AudioBuffer_obj,fromURL,(void))

Dynamic AudioBuffer_obj::lime_audio_load;


AudioBuffer_obj::AudioBuffer_obj()
{
}

void AudioBuffer_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(AudioBuffer);
	HX_MARK_MEMBER_NAME(bitsPerSample,"bitsPerSample");
	HX_MARK_MEMBER_NAME(channels,"channels");
	HX_MARK_MEMBER_NAME(data,"data");
	HX_MARK_MEMBER_NAME(id,"id");
	HX_MARK_MEMBER_NAME(sampleRate,"sampleRate");
	HX_MARK_MEMBER_NAME(src,"src");
	HX_MARK_END_CLASS();
}

void AudioBuffer_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(bitsPerSample,"bitsPerSample");
	HX_VISIT_MEMBER_NAME(channels,"channels");
	HX_VISIT_MEMBER_NAME(data,"data");
	HX_VISIT_MEMBER_NAME(id,"id");
	HX_VISIT_MEMBER_NAME(sampleRate,"sampleRate");
	HX_VISIT_MEMBER_NAME(src,"src");
}

Dynamic AudioBuffer_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"id") ) { return id; }
		break;
	case 3:
		if (HX_FIELD_EQ(inName,"src") ) { return src; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"data") ) { return data; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"dispose") ) { return dispose_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"channels") ) { return channels; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"sampleRate") ) { return sampleRate; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"bitsPerSample") ) { return bitsPerSample; }
	}
	return super::__Field(inName,inCallProp);
}

bool AudioBuffer_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"fromURL") ) { outValue = fromURL_dyn(); return true;  }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"fromFile") ) { outValue = fromFile_dyn(); return true;  }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"fromBytes") ) { outValue = fromBytes_dyn(); return true;  }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"lime_audio_load") ) { outValue = lime_audio_load; return true;  }
	}
	return false;
}

Dynamic AudioBuffer_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"id") ) { id=inValue.Cast< int >(); return inValue; }
		break;
	case 3:
		if (HX_FIELD_EQ(inName,"src") ) { src=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"data") ) { data=inValue.Cast< ::lime::utils::ByteArray >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"channels") ) { channels=inValue.Cast< int >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"sampleRate") ) { sampleRate=inValue.Cast< int >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"bitsPerSample") ) { bitsPerSample=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool AudioBuffer_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 15:
		if (HX_FIELD_EQ(inName,"lime_audio_load") ) { lime_audio_load=ioValue.Cast< Dynamic >(); return true; }
	}
	return false;
}

void AudioBuffer_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("bitsPerSample","\x01","\x01","\x36","\xc4"));
	outFields->push(HX_HCSTRING("channels","\x50","\xaa","\xee","\x6a"));
	outFields->push(HX_HCSTRING("data","\x2a","\x56","\x63","\x42"));
	outFields->push(HX_HCSTRING("id","\xdb","\x5b","\x00","\x00"));
	outFields->push(HX_HCSTRING("sampleRate","\x2a","\x3c","\x4c","\x67"));
	outFields->push(HX_HCSTRING("src","\xe4","\xa6","\x57","\x00"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsInt,(int)offsetof(AudioBuffer_obj,bitsPerSample),HX_HCSTRING("bitsPerSample","\x01","\x01","\x36","\xc4")},
	{hx::fsInt,(int)offsetof(AudioBuffer_obj,channels),HX_HCSTRING("channels","\x50","\xaa","\xee","\x6a")},
	{hx::fsObject /*::lime::utils::ByteArray*/ ,(int)offsetof(AudioBuffer_obj,data),HX_HCSTRING("data","\x2a","\x56","\x63","\x42")},
	{hx::fsInt,(int)offsetof(AudioBuffer_obj,id),HX_HCSTRING("id","\xdb","\x5b","\x00","\x00")},
	{hx::fsInt,(int)offsetof(AudioBuffer_obj,sampleRate),HX_HCSTRING("sampleRate","\x2a","\x3c","\x4c","\x67")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(AudioBuffer_obj,src),HX_HCSTRING("src","\xe4","\xa6","\x57","\x00")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo sStaticStorageInfo[] = {
	{hx::fsObject /*Dynamic*/ ,(void *) &AudioBuffer_obj::lime_audio_load,HX_HCSTRING("lime_audio_load","\x99","\x89","\x38","\x30")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("bitsPerSample","\x01","\x01","\x36","\xc4"),
	HX_HCSTRING("channels","\x50","\xaa","\xee","\x6a"),
	HX_HCSTRING("data","\x2a","\x56","\x63","\x42"),
	HX_HCSTRING("id","\xdb","\x5b","\x00","\x00"),
	HX_HCSTRING("sampleRate","\x2a","\x3c","\x4c","\x67"),
	HX_HCSTRING("src","\xe4","\xa6","\x57","\x00"),
	HX_HCSTRING("dispose","\x9f","\x80","\x4c","\xbb"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(AudioBuffer_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(AudioBuffer_obj::lime_audio_load,"lime_audio_load");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(AudioBuffer_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(AudioBuffer_obj::lime_audio_load,"lime_audio_load");
};

#endif

hx::Class AudioBuffer_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("fromBytes","\xa1","\xf2","\x20","\x72"),
	HX_HCSTRING("fromFile","\x06","\x9d","\x87","\xa1"),
	HX_HCSTRING("fromURL","\x25","\xe0","\x03","\x58"),
	HX_HCSTRING("lime_audio_load","\x99","\x89","\x38","\x30"),
	::String(null()) };

void AudioBuffer_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("lime.audio.AudioBuffer","\x25","\x07","\x67","\x5a");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &AudioBuffer_obj::__GetStatic;
	__mClass->mSetStaticField = &AudioBuffer_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< AudioBuffer_obj >;
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

void AudioBuffer_obj::__boot()
{
	lime_audio_load= ::lime::_system::System_obj::load(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_audio_load","\x99","\x89","\x38","\x30"),(int)1,null());
}

} // end namespace lime
} // end namespace audio
