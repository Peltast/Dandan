#include <hxcpp.h>

#ifndef INCLUDED_DefaultAssetLibrary
#include <DefaultAssetLibrary.h>
#endif
#ifndef INCLUDED_Type
#include <Type.h>
#endif
#ifndef INCLUDED_haxe_IMap
#include <haxe/IMap.h>
#endif
#ifndef INCLUDED_haxe_Log
#include <haxe/Log.h>
#endif
#ifndef INCLUDED_haxe_ds_StringMap
#include <haxe/ds/StringMap.h>
#endif
#ifndef INCLUDED_haxe_format_JsonParser
#include <haxe/format/JsonParser.h>
#endif
#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
#endif
#ifndef INCLUDED_lime_AssetCache
#include <lime/AssetCache.h>
#endif
#ifndef INCLUDED_lime_AssetLibrary
#include <lime/AssetLibrary.h>
#endif
#ifndef INCLUDED_lime_Assets
#include <lime/Assets.h>
#endif
#ifndef INCLUDED_lime_audio_AudioBuffer
#include <lime/audio/AudioBuffer.h>
#endif
#ifndef INCLUDED_lime_graphics_Image
#include <lime/graphics/Image.h>
#endif
#ifndef INCLUDED_lime_text_Font
#include <lime/text/Font.h>
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

Void Assets_obj::__construct()
{
	return null();
}

//Assets_obj::~Assets_obj() { }

Dynamic Assets_obj::__CreateEmpty() { return  new Assets_obj; }
hx::ObjectPtr< Assets_obj > Assets_obj::__new()
{  hx::ObjectPtr< Assets_obj > _result_ = new Assets_obj();
	_result_->__construct();
	return _result_;}

Dynamic Assets_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Assets_obj > _result_ = new Assets_obj();
	_result_->__construct();
	return _result_;}

::lime::AssetCache Assets_obj::cache;

::haxe::ds::StringMap Assets_obj::libraries;

bool Assets_obj::initialized;

bool Assets_obj::exists( ::String id,::String type){
	HX_STACK_FRAME("lime.Assets","exists",0x8a084f2e,"lime.Assets.exists","lime/Assets.hx",40,0x48c77341)
	HX_STACK_ARG(id,"id")
	HX_STACK_ARG(type,"type")
	HX_STACK_LINE(42)
	::lime::Assets_obj::initialize();
	HX_STACK_LINE(46)
	bool tmp = (type == null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(46)
	if ((tmp)){
		HX_STACK_LINE(48)
		type = HX_HCSTRING("BINARY","\x01","\x68","\x8e","\x9f");
	}
	HX_STACK_LINE(52)
	int tmp1 = id.indexOf(HX_HCSTRING(":","\x3a","\x00","\x00","\x00"),null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(52)
	::String tmp2 = id.substring((int)0,tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(52)
	::String libraryName = tmp2;		HX_STACK_VAR(libraryName,"libraryName");
	HX_STACK_LINE(53)
	int tmp3 = id.indexOf(HX_HCSTRING(":","\x3a","\x00","\x00","\x00"),null());		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(53)
	int tmp4 = (tmp3 + (int)1);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(53)
	::String tmp5 = id.substr(tmp4,null());		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(53)
	::String symbolName = tmp5;		HX_STACK_VAR(symbolName,"symbolName");
	HX_STACK_LINE(54)
	::String tmp6 = libraryName;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(54)
	::lime::AssetLibrary tmp7 = ::lime::Assets_obj::getLibrary(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(54)
	::lime::AssetLibrary library = tmp7;		HX_STACK_VAR(library,"library");
	HX_STACK_LINE(56)
	bool tmp8 = (library != null());		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(56)
	if ((tmp8)){
		HX_STACK_LINE(58)
		::String tmp9 = symbolName;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(58)
		::String tmp10 = type;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(58)
		bool tmp11 = library->exists(tmp9,tmp10);		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(58)
		return tmp11;
	}
	HX_STACK_LINE(64)
	return false;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Assets_obj,exists,return )

::lime::audio::AudioBuffer Assets_obj::getAudioBuffer( ::String id,hx::Null< bool >  __o_useCache){
bool useCache = __o_useCache.Default(true);
	HX_STACK_FRAME("lime.Assets","getAudioBuffer",0x1f7814d2,"lime.Assets.getAudioBuffer","lime/Assets.hx",75,0x48c77341)
	HX_STACK_ARG(id,"id")
	HX_STACK_ARG(useCache,"useCache")
{
		HX_STACK_LINE(77)
		::lime::Assets_obj::initialize();
		HX_STACK_LINE(81)
		bool tmp = useCache;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(81)
		bool tmp1 = tmp;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(81)
		bool tmp2;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(81)
		if ((tmp1)){
			HX_STACK_LINE(81)
			::lime::AssetCache tmp3 = ::lime::Assets_obj::cache;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(81)
			::lime::AssetCache tmp4 = tmp3;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(81)
			::lime::AssetCache tmp5 = tmp4;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(81)
			tmp2 = tmp5->enabled;
		}
		else{
			HX_STACK_LINE(81)
			tmp2 = false;
		}
		HX_STACK_LINE(81)
		bool tmp3;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(81)
		if ((tmp2)){
			HX_STACK_LINE(81)
			::lime::AssetCache tmp4 = ::lime::Assets_obj::cache;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(81)
			::lime::AssetCache tmp5 = tmp4;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(81)
			::String tmp6 = id;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(81)
			::String tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(81)
			tmp3 = tmp5->audio->exists(tmp7);
		}
		else{
			HX_STACK_LINE(81)
			tmp3 = false;
		}
		HX_STACK_LINE(81)
		if ((tmp3)){
			HX_STACK_LINE(83)
			::lime::AssetCache tmp4 = ::lime::Assets_obj::cache;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(83)
			::String tmp5 = id;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(83)
			::lime::audio::AudioBuffer tmp6 = tmp4->audio->get(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(83)
			::lime::audio::AudioBuffer audio = tmp6;		HX_STACK_VAR(audio,"audio");
			HX_STACK_LINE(85)
			::lime::audio::AudioBuffer tmp7 = audio;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(85)
			bool tmp8 = ::lime::Assets_obj::isValidAudio(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(85)
			if ((tmp8)){
				HX_STACK_LINE(87)
				::lime::audio::AudioBuffer tmp9 = audio;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(87)
				return tmp9;
			}
		}
		HX_STACK_LINE(93)
		int tmp4 = id.indexOf(HX_HCSTRING(":","\x3a","\x00","\x00","\x00"),null());		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(93)
		::String tmp5 = id.substring((int)0,tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(93)
		::String libraryName = tmp5;		HX_STACK_VAR(libraryName,"libraryName");
		HX_STACK_LINE(94)
		int tmp6 = id.indexOf(HX_HCSTRING(":","\x3a","\x00","\x00","\x00"),null());		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(94)
		int tmp7 = (tmp6 + (int)1);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(94)
		::String tmp8 = id.substr(tmp7,null());		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(94)
		::String symbolName = tmp8;		HX_STACK_VAR(symbolName,"symbolName");
		HX_STACK_LINE(95)
		::String tmp9 = libraryName;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(95)
		::lime::AssetLibrary tmp10 = ::lime::Assets_obj::getLibrary(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(95)
		::lime::AssetLibrary library = tmp10;		HX_STACK_VAR(library,"library");
		HX_STACK_LINE(97)
		bool tmp11 = (library != null());		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(97)
		if ((tmp11)){
			HX_STACK_LINE(99)
			::String tmp12 = symbolName;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(99)
			bool tmp13 = library->exists(tmp12,HX_HCSTRING("SOUND","\xaf","\xc4","\xba","\xfe"));		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(99)
			if ((tmp13)){
				HX_STACK_LINE(101)
				::String tmp14 = symbolName;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(101)
				bool tmp15 = library->isLocal(tmp14,HX_HCSTRING("SOUND","\xaf","\xc4","\xba","\xfe"));		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(101)
				if ((tmp15)){
					HX_STACK_LINE(103)
					::String tmp16 = symbolName;		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(103)
					::lime::audio::AudioBuffer tmp17 = library->getAudioBuffer(tmp16);		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(103)
					::lime::audio::AudioBuffer audio = tmp17;		HX_STACK_VAR(audio,"audio");
					HX_STACK_LINE(105)
					bool tmp18 = useCache;		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(105)
					bool tmp19;		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(105)
					if ((tmp18)){
						HX_STACK_LINE(105)
						::lime::AssetCache tmp20 = ::lime::Assets_obj::cache;		HX_STACK_VAR(tmp20,"tmp20");
						HX_STACK_LINE(105)
						::lime::AssetCache tmp21 = tmp20;		HX_STACK_VAR(tmp21,"tmp21");
						HX_STACK_LINE(105)
						tmp19 = tmp21->enabled;
					}
					else{
						HX_STACK_LINE(105)
						tmp19 = false;
					}
					HX_STACK_LINE(105)
					if ((tmp19)){
						HX_STACK_LINE(107)
						::lime::AssetCache tmp20 = ::lime::Assets_obj::cache;		HX_STACK_VAR(tmp20,"tmp20");
						HX_STACK_LINE(107)
						::String tmp21 = id;		HX_STACK_VAR(tmp21,"tmp21");
						HX_STACK_LINE(107)
						::lime::audio::AudioBuffer tmp22 = audio;		HX_STACK_VAR(tmp22,"tmp22");
						HX_STACK_LINE(107)
						tmp20->audio->set(tmp21,tmp22);
					}
					HX_STACK_LINE(111)
					::lime::audio::AudioBuffer tmp20 = audio;		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(111)
					return tmp20;
				}
				else{
					HX_STACK_LINE(115)
					::String tmp16 = (HX_HCSTRING("[Assets] Audio asset \"","\x07","\x8c","\xae","\x7b") + id);		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(115)
					::String tmp17 = (tmp16 + HX_HCSTRING("\" exists, but only asynchronously","\xdc","\xca","\xf2","\xdd"));		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(115)
					Dynamic tmp18 = hx::SourceInfo(HX_HCSTRING("Assets.hx","\xfb","\xcd","\xc6","\x67"),115,HX_HCSTRING("lime.Assets","\xdc","\x38","\x84","\x97"),HX_HCSTRING("getAudioBuffer","\x80","\x41","\xe3","\x26"));		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(115)
					::haxe::Log_obj::trace(tmp17,tmp18);
				}
			}
			else{
				HX_STACK_LINE(121)
				::String tmp14 = (HX_HCSTRING("[Assets] There is no audio asset with an ID of \"","\x65","\x50","\xb8","\x55") + id);		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(121)
				::String tmp15 = (tmp14 + HX_HCSTRING("\"","\x22","\x00","\x00","\x00"));		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(121)
				Dynamic tmp16 = hx::SourceInfo(HX_HCSTRING("Assets.hx","\xfb","\xcd","\xc6","\x67"),121,HX_HCSTRING("lime.Assets","\xdc","\x38","\x84","\x97"),HX_HCSTRING("getAudioBuffer","\x80","\x41","\xe3","\x26"));		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(121)
				::haxe::Log_obj::trace(tmp15,tmp16);
			}
		}
		else{
			HX_STACK_LINE(127)
			::String tmp12 = (HX_HCSTRING("[Assets] There is no asset library named \"","\xa0","\xb4","\x0a","\xcd") + libraryName);		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(127)
			::String tmp13 = (tmp12 + HX_HCSTRING("\"","\x22","\x00","\x00","\x00"));		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(127)
			Dynamic tmp14 = hx::SourceInfo(HX_HCSTRING("Assets.hx","\xfb","\xcd","\xc6","\x67"),127,HX_HCSTRING("lime.Assets","\xdc","\x38","\x84","\x97"),HX_HCSTRING("getAudioBuffer","\x80","\x41","\xe3","\x26"));		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(127)
			::haxe::Log_obj::trace(tmp13,tmp14);
		}
		HX_STACK_LINE(133)
		return null();
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Assets_obj,getAudioBuffer,return )

::lime::utils::ByteArray Assets_obj::getBytes( ::String id){
	HX_STACK_FRAME("lime.Assets","getBytes",0xe703c1c7,"lime.Assets.getBytes","lime/Assets.hx",144,0x48c77341)
	HX_STACK_ARG(id,"id")
	HX_STACK_LINE(146)
	::lime::Assets_obj::initialize();
	HX_STACK_LINE(150)
	int tmp = id.indexOf(HX_HCSTRING(":","\x3a","\x00","\x00","\x00"),null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(150)
	::String tmp1 = id.substring((int)0,tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(150)
	::String libraryName = tmp1;		HX_STACK_VAR(libraryName,"libraryName");
	HX_STACK_LINE(151)
	int tmp2 = id.indexOf(HX_HCSTRING(":","\x3a","\x00","\x00","\x00"),null());		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(151)
	int tmp3 = (tmp2 + (int)1);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(151)
	::String tmp4 = id.substr(tmp3,null());		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(151)
	::String symbolName = tmp4;		HX_STACK_VAR(symbolName,"symbolName");
	HX_STACK_LINE(152)
	::String tmp5 = libraryName;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(152)
	::lime::AssetLibrary tmp6 = ::lime::Assets_obj::getLibrary(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(152)
	::lime::AssetLibrary library = tmp6;		HX_STACK_VAR(library,"library");
	HX_STACK_LINE(154)
	bool tmp7 = (library != null());		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(154)
	if ((tmp7)){
		HX_STACK_LINE(156)
		::String tmp8 = symbolName;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(156)
		bool tmp9 = library->exists(tmp8,HX_HCSTRING("BINARY","\x01","\x68","\x8e","\x9f"));		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(156)
		if ((tmp9)){
			HX_STACK_LINE(158)
			::String tmp10 = symbolName;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(158)
			bool tmp11 = library->isLocal(tmp10,HX_HCSTRING("BINARY","\x01","\x68","\x8e","\x9f"));		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(158)
			if ((tmp11)){
				HX_STACK_LINE(160)
				::String tmp12 = symbolName;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(160)
				::lime::utils::ByteArray tmp13 = library->getBytes(tmp12);		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(160)
				return tmp13;
			}
			else{
				HX_STACK_LINE(164)
				::String tmp12 = (HX_HCSTRING("[Assets] String or ByteArray asset \"","\x34","\xd1","\x9b","\x45") + id);		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(164)
				::String tmp13 = (tmp12 + HX_HCSTRING("\" exists, but only asynchronously","\xdc","\xca","\xf2","\xdd"));		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(164)
				Dynamic tmp14 = hx::SourceInfo(HX_HCSTRING("Assets.hx","\xfb","\xcd","\xc6","\x67"),164,HX_HCSTRING("lime.Assets","\xdc","\x38","\x84","\x97"),HX_HCSTRING("getBytes","\xf5","\x17","\x6f","\x1d"));		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(164)
				::haxe::Log_obj::trace(tmp13,tmp14);
			}
		}
		else{
			HX_STACK_LINE(170)
			::String tmp10 = (HX_HCSTRING("[Assets] There is no String or ByteArray asset with an ID of \"","\x72","\x73","\xb6","\x09") + id);		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(170)
			::String tmp11 = (tmp10 + HX_HCSTRING("\"","\x22","\x00","\x00","\x00"));		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(170)
			Dynamic tmp12 = hx::SourceInfo(HX_HCSTRING("Assets.hx","\xfb","\xcd","\xc6","\x67"),170,HX_HCSTRING("lime.Assets","\xdc","\x38","\x84","\x97"),HX_HCSTRING("getBytes","\xf5","\x17","\x6f","\x1d"));		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(170)
			::haxe::Log_obj::trace(tmp11,tmp12);
		}
	}
	else{
		HX_STACK_LINE(176)
		::String tmp8 = (HX_HCSTRING("[Assets] There is no asset library named \"","\xa0","\xb4","\x0a","\xcd") + libraryName);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(176)
		::String tmp9 = (tmp8 + HX_HCSTRING("\"","\x22","\x00","\x00","\x00"));		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(176)
		Dynamic tmp10 = hx::SourceInfo(HX_HCSTRING("Assets.hx","\xfb","\xcd","\xc6","\x67"),176,HX_HCSTRING("lime.Assets","\xdc","\x38","\x84","\x97"),HX_HCSTRING("getBytes","\xf5","\x17","\x6f","\x1d"));		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(176)
		::haxe::Log_obj::trace(tmp9,tmp10);
	}
	HX_STACK_LINE(182)
	return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Assets_obj,getBytes,return )

::lime::text::Font Assets_obj::getFont( ::String id,hx::Null< bool >  __o_useCache){
bool useCache = __o_useCache.Default(true);
	HX_STACK_FRAME("lime.Assets","getFont",0x2f4603f3,"lime.Assets.getFont","lime/Assets.hx",193,0x48c77341)
	HX_STACK_ARG(id,"id")
	HX_STACK_ARG(useCache,"useCache")
{
		HX_STACK_LINE(195)
		::lime::Assets_obj::initialize();
		HX_STACK_LINE(199)
		bool tmp = useCache;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(199)
		bool tmp1 = tmp;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(199)
		bool tmp2;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(199)
		if ((tmp1)){
			HX_STACK_LINE(199)
			::lime::AssetCache tmp3 = ::lime::Assets_obj::cache;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(199)
			::lime::AssetCache tmp4 = tmp3;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(199)
			::lime::AssetCache tmp5 = tmp4;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(199)
			tmp2 = tmp5->enabled;
		}
		else{
			HX_STACK_LINE(199)
			tmp2 = false;
		}
		HX_STACK_LINE(199)
		bool tmp3;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(199)
		if ((tmp2)){
			HX_STACK_LINE(199)
			::lime::AssetCache tmp4 = ::lime::Assets_obj::cache;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(199)
			::lime::AssetCache tmp5 = tmp4;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(199)
			::String tmp6 = id;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(199)
			::String tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(199)
			tmp3 = tmp5->font->exists(tmp7);
		}
		else{
			HX_STACK_LINE(199)
			tmp3 = false;
		}
		HX_STACK_LINE(199)
		if ((tmp3)){
			HX_STACK_LINE(201)
			::lime::AssetCache tmp4 = ::lime::Assets_obj::cache;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(201)
			::String tmp5 = id;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(201)
			Dynamic tmp6 = tmp4->font->get(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(201)
			Dynamic tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(201)
			return tmp7;
		}
		HX_STACK_LINE(205)
		int tmp4 = id.indexOf(HX_HCSTRING(":","\x3a","\x00","\x00","\x00"),null());		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(205)
		::String tmp5 = id.substring((int)0,tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(205)
		::String libraryName = tmp5;		HX_STACK_VAR(libraryName,"libraryName");
		HX_STACK_LINE(206)
		int tmp6 = id.indexOf(HX_HCSTRING(":","\x3a","\x00","\x00","\x00"),null());		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(206)
		int tmp7 = (tmp6 + (int)1);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(206)
		::String tmp8 = id.substr(tmp7,null());		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(206)
		::String symbolName = tmp8;		HX_STACK_VAR(symbolName,"symbolName");
		HX_STACK_LINE(207)
		::String tmp9 = libraryName;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(207)
		::lime::AssetLibrary tmp10 = ::lime::Assets_obj::getLibrary(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(207)
		::lime::AssetLibrary library = tmp10;		HX_STACK_VAR(library,"library");
		HX_STACK_LINE(209)
		bool tmp11 = (library != null());		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(209)
		if ((tmp11)){
			HX_STACK_LINE(211)
			::String tmp12 = symbolName;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(211)
			bool tmp13 = library->exists(tmp12,HX_HCSTRING("FONT","\xcf","\x25","\x81","\x2e"));		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(211)
			if ((tmp13)){
				HX_STACK_LINE(213)
				::String tmp14 = symbolName;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(213)
				bool tmp15 = library->isLocal(tmp14,HX_HCSTRING("FONT","\xcf","\x25","\x81","\x2e"));		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(213)
				if ((tmp15)){
					HX_STACK_LINE(215)
					::String tmp16 = symbolName;		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(215)
					::lime::text::Font tmp17 = library->getFont(tmp16);		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(215)
					::lime::text::Font font = tmp17;		HX_STACK_VAR(font,"font");
					HX_STACK_LINE(217)
					bool tmp18 = useCache;		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(217)
					bool tmp19;		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(217)
					if ((tmp18)){
						HX_STACK_LINE(217)
						::lime::AssetCache tmp20 = ::lime::Assets_obj::cache;		HX_STACK_VAR(tmp20,"tmp20");
						HX_STACK_LINE(217)
						::lime::AssetCache tmp21 = tmp20;		HX_STACK_VAR(tmp21,"tmp21");
						HX_STACK_LINE(217)
						tmp19 = tmp21->enabled;
					}
					else{
						HX_STACK_LINE(217)
						tmp19 = false;
					}
					HX_STACK_LINE(217)
					if ((tmp19)){
						HX_STACK_LINE(219)
						::lime::AssetCache tmp20 = ::lime::Assets_obj::cache;		HX_STACK_VAR(tmp20,"tmp20");
						HX_STACK_LINE(219)
						::String tmp21 = id;		HX_STACK_VAR(tmp21,"tmp21");
						HX_STACK_LINE(219)
						::lime::text::Font tmp22 = font;		HX_STACK_VAR(tmp22,"tmp22");
						HX_STACK_LINE(219)
						tmp20->font->set(tmp21,tmp22);
					}
					HX_STACK_LINE(223)
					::lime::text::Font tmp20 = font;		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(223)
					return tmp20;
				}
				else{
					HX_STACK_LINE(227)
					::String tmp16 = (HX_HCSTRING("[Assets] Font asset \"","\x22","\x94","\xa9","\xe6") + id);		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(227)
					::String tmp17 = (tmp16 + HX_HCSTRING("\" exists, but only asynchronously","\xdc","\xca","\xf2","\xdd"));		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(227)
					Dynamic tmp18 = hx::SourceInfo(HX_HCSTRING("Assets.hx","\xfb","\xcd","\xc6","\x67"),227,HX_HCSTRING("lime.Assets","\xdc","\x38","\x84","\x97"),HX_HCSTRING("getFont","\x85","\x0d","\x43","\x16"));		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(227)
					::haxe::Log_obj::trace(tmp17,tmp18);
				}
			}
			else{
				HX_STACK_LINE(233)
				::String tmp14 = (HX_HCSTRING("[Assets] There is no Font asset with an ID of \"","\x8a","\x40","\xc3","\xf6") + id);		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(233)
				::String tmp15 = (tmp14 + HX_HCSTRING("\"","\x22","\x00","\x00","\x00"));		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(233)
				Dynamic tmp16 = hx::SourceInfo(HX_HCSTRING("Assets.hx","\xfb","\xcd","\xc6","\x67"),233,HX_HCSTRING("lime.Assets","\xdc","\x38","\x84","\x97"),HX_HCSTRING("getFont","\x85","\x0d","\x43","\x16"));		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(233)
				::haxe::Log_obj::trace(tmp15,tmp16);
			}
		}
		else{
			HX_STACK_LINE(239)
			::String tmp12 = (HX_HCSTRING("[Assets] There is no asset library named \"","\xa0","\xb4","\x0a","\xcd") + libraryName);		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(239)
			::String tmp13 = (tmp12 + HX_HCSTRING("\"","\x22","\x00","\x00","\x00"));		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(239)
			Dynamic tmp14 = hx::SourceInfo(HX_HCSTRING("Assets.hx","\xfb","\xcd","\xc6","\x67"),239,HX_HCSTRING("lime.Assets","\xdc","\x38","\x84","\x97"),HX_HCSTRING("getFont","\x85","\x0d","\x43","\x16"));		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(239)
			::haxe::Log_obj::trace(tmp13,tmp14);
		}
		HX_STACK_LINE(245)
		return null();
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Assets_obj,getFont,return )

::lime::graphics::Image Assets_obj::getImage( ::String id,hx::Null< bool >  __o_useCache){
bool useCache = __o_useCache.Default(true);
	HX_STACK_FRAME("lime.Assets","getImage",0xe6d4d8b7,"lime.Assets.getImage","lime/Assets.hx",257,0x48c77341)
	HX_STACK_ARG(id,"id")
	HX_STACK_ARG(useCache,"useCache")
{
		HX_STACK_LINE(259)
		::lime::Assets_obj::initialize();
		HX_STACK_LINE(263)
		bool tmp = useCache;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(263)
		bool tmp1 = tmp;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(263)
		bool tmp2;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(263)
		if ((tmp1)){
			HX_STACK_LINE(263)
			::lime::AssetCache tmp3 = ::lime::Assets_obj::cache;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(263)
			::lime::AssetCache tmp4 = tmp3;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(263)
			::lime::AssetCache tmp5 = tmp4;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(263)
			tmp2 = tmp5->enabled;
		}
		else{
			HX_STACK_LINE(263)
			tmp2 = false;
		}
		HX_STACK_LINE(263)
		bool tmp3;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(263)
		if ((tmp2)){
			HX_STACK_LINE(263)
			::lime::AssetCache tmp4 = ::lime::Assets_obj::cache;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(263)
			::lime::AssetCache tmp5 = tmp4;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(263)
			::String tmp6 = id;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(263)
			::String tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(263)
			tmp3 = tmp5->image->exists(tmp7);
		}
		else{
			HX_STACK_LINE(263)
			tmp3 = false;
		}
		HX_STACK_LINE(263)
		if ((tmp3)){
			HX_STACK_LINE(265)
			::lime::AssetCache tmp4 = ::lime::Assets_obj::cache;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(265)
			::String tmp5 = id;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(265)
			::lime::graphics::Image tmp6 = tmp4->image->get(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(265)
			::lime::graphics::Image image = tmp6;		HX_STACK_VAR(image,"image");
			HX_STACK_LINE(267)
			::lime::graphics::Image tmp7 = image;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(267)
			bool tmp8 = ::lime::Assets_obj::isValidImage(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(267)
			if ((tmp8)){
				HX_STACK_LINE(269)
				::lime::graphics::Image tmp9 = image;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(269)
				return tmp9;
			}
		}
		HX_STACK_LINE(275)
		int tmp4 = id.indexOf(HX_HCSTRING(":","\x3a","\x00","\x00","\x00"),null());		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(275)
		::String tmp5 = id.substring((int)0,tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(275)
		::String libraryName = tmp5;		HX_STACK_VAR(libraryName,"libraryName");
		HX_STACK_LINE(276)
		int tmp6 = id.indexOf(HX_HCSTRING(":","\x3a","\x00","\x00","\x00"),null());		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(276)
		int tmp7 = (tmp6 + (int)1);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(276)
		::String tmp8 = id.substr(tmp7,null());		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(276)
		::String symbolName = tmp8;		HX_STACK_VAR(symbolName,"symbolName");
		HX_STACK_LINE(277)
		::String tmp9 = libraryName;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(277)
		::lime::AssetLibrary tmp10 = ::lime::Assets_obj::getLibrary(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(277)
		::lime::AssetLibrary library = tmp10;		HX_STACK_VAR(library,"library");
		HX_STACK_LINE(279)
		bool tmp11 = (library != null());		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(279)
		if ((tmp11)){
			HX_STACK_LINE(281)
			::String tmp12 = symbolName;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(281)
			bool tmp13 = library->exists(tmp12,HX_HCSTRING("IMAGE","\x3b","\x57","\x57","\x3b"));		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(281)
			if ((tmp13)){
				HX_STACK_LINE(283)
				::String tmp14 = symbolName;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(283)
				bool tmp15 = library->isLocal(tmp14,HX_HCSTRING("IMAGE","\x3b","\x57","\x57","\x3b"));		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(283)
				if ((tmp15)){
					HX_STACK_LINE(285)
					::String tmp16 = symbolName;		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(285)
					::lime::graphics::Image tmp17 = library->getImage(tmp16);		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(285)
					::lime::graphics::Image image = tmp17;		HX_STACK_VAR(image,"image");
					HX_STACK_LINE(287)
					bool tmp18 = useCache;		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(287)
					bool tmp19;		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(287)
					if ((tmp18)){
						HX_STACK_LINE(287)
						::lime::AssetCache tmp20 = ::lime::Assets_obj::cache;		HX_STACK_VAR(tmp20,"tmp20");
						HX_STACK_LINE(287)
						::lime::AssetCache tmp21 = tmp20;		HX_STACK_VAR(tmp21,"tmp21");
						HX_STACK_LINE(287)
						tmp19 = tmp21->enabled;
					}
					else{
						HX_STACK_LINE(287)
						tmp19 = false;
					}
					HX_STACK_LINE(287)
					if ((tmp19)){
						HX_STACK_LINE(289)
						::lime::AssetCache tmp20 = ::lime::Assets_obj::cache;		HX_STACK_VAR(tmp20,"tmp20");
						HX_STACK_LINE(289)
						::String tmp21 = id;		HX_STACK_VAR(tmp21,"tmp21");
						HX_STACK_LINE(289)
						::lime::graphics::Image tmp22 = image;		HX_STACK_VAR(tmp22,"tmp22");
						HX_STACK_LINE(289)
						tmp20->image->set(tmp21,tmp22);
					}
					HX_STACK_LINE(293)
					::lime::graphics::Image tmp20 = image;		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(293)
					return tmp20;
				}
				else{
					HX_STACK_LINE(297)
					::String tmp16 = (HX_HCSTRING("[Assets] Image asset \"","\x8c","\xbf","\x18","\x5b") + id);		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(297)
					::String tmp17 = (tmp16 + HX_HCSTRING("\" exists, but only asynchronously","\xdc","\xca","\xf2","\xdd"));		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(297)
					Dynamic tmp18 = hx::SourceInfo(HX_HCSTRING("Assets.hx","\xfb","\xcd","\xc6","\x67"),297,HX_HCSTRING("lime.Assets","\xdc","\x38","\x84","\x97"),HX_HCSTRING("getImage","\xe5","\x2e","\x40","\x1d"));		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(297)
					::haxe::Log_obj::trace(tmp17,tmp18);
				}
			}
			else{
				HX_STACK_LINE(303)
				::String tmp14 = (HX_HCSTRING("[Assets] There is no Image asset with an ID of \"","\x8a","\x1a","\x98","\x70") + id);		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(303)
				::String tmp15 = (tmp14 + HX_HCSTRING("\"","\x22","\x00","\x00","\x00"));		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(303)
				Dynamic tmp16 = hx::SourceInfo(HX_HCSTRING("Assets.hx","\xfb","\xcd","\xc6","\x67"),303,HX_HCSTRING("lime.Assets","\xdc","\x38","\x84","\x97"),HX_HCSTRING("getImage","\xe5","\x2e","\x40","\x1d"));		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(303)
				::haxe::Log_obj::trace(tmp15,tmp16);
			}
		}
		else{
			HX_STACK_LINE(309)
			::String tmp12 = (HX_HCSTRING("[Assets] There is no asset library named \"","\xa0","\xb4","\x0a","\xcd") + libraryName);		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(309)
			::String tmp13 = (tmp12 + HX_HCSTRING("\"","\x22","\x00","\x00","\x00"));		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(309)
			Dynamic tmp14 = hx::SourceInfo(HX_HCSTRING("Assets.hx","\xfb","\xcd","\xc6","\x67"),309,HX_HCSTRING("lime.Assets","\xdc","\x38","\x84","\x97"),HX_HCSTRING("getImage","\xe5","\x2e","\x40","\x1d"));		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(309)
			::haxe::Log_obj::trace(tmp13,tmp14);
		}
		HX_STACK_LINE(315)
		return null();
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Assets_obj,getImage,return )

::lime::AssetLibrary Assets_obj::getLibrary( ::String name){
	HX_STACK_FRAME("lime.Assets","getLibrary",0x6641ef57,"lime.Assets.getLibrary","lime/Assets.hx",320,0x48c77341)
	HX_STACK_ARG(name,"name")
	HX_STACK_LINE(322)
	bool tmp = (name == null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(322)
	bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(322)
	bool tmp2;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(322)
	if ((tmp1)){
		HX_STACK_LINE(322)
		tmp2 = (name == HX_HCSTRING("","\x00","\x00","\x00","\x00"));
	}
	else{
		HX_STACK_LINE(322)
		tmp2 = true;
	}
	HX_STACK_LINE(322)
	if ((tmp2)){
		HX_STACK_LINE(324)
		name = HX_HCSTRING("default","\xc1","\xd8","\xc3","\x9b");
	}
	HX_STACK_LINE(328)
	::haxe::ds::StringMap tmp3 = ::lime::Assets_obj::libraries;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(328)
	::String tmp4 = name;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(328)
	::lime::AssetLibrary tmp5 = tmp3->get(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(328)
	::lime::AssetLibrary tmp6 = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(328)
	return tmp6;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Assets_obj,getLibrary,return )

::String Assets_obj::getPath( ::String id){
	HX_STACK_FRAME("lime.Assets","getPath",0x35d78bc9,"lime.Assets.getPath","lime/Assets.hx",408,0x48c77341)
	HX_STACK_ARG(id,"id")
	HX_STACK_LINE(410)
	::lime::Assets_obj::initialize();
	HX_STACK_LINE(414)
	int tmp = id.indexOf(HX_HCSTRING(":","\x3a","\x00","\x00","\x00"),null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(414)
	::String tmp1 = id.substring((int)0,tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(414)
	::String libraryName = tmp1;		HX_STACK_VAR(libraryName,"libraryName");
	HX_STACK_LINE(415)
	int tmp2 = id.indexOf(HX_HCSTRING(":","\x3a","\x00","\x00","\x00"),null());		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(415)
	int tmp3 = (tmp2 + (int)1);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(415)
	::String tmp4 = id.substr(tmp3,null());		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(415)
	::String symbolName = tmp4;		HX_STACK_VAR(symbolName,"symbolName");
	HX_STACK_LINE(416)
	::String tmp5 = libraryName;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(416)
	::lime::AssetLibrary tmp6 = ::lime::Assets_obj::getLibrary(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(416)
	::lime::AssetLibrary library = tmp6;		HX_STACK_VAR(library,"library");
	HX_STACK_LINE(418)
	bool tmp7 = (library != null());		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(418)
	if ((tmp7)){
		HX_STACK_LINE(420)
		::String tmp8 = symbolName;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(420)
		bool tmp9 = library->exists(tmp8,null());		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(420)
		if ((tmp9)){
			HX_STACK_LINE(422)
			::String tmp10 = symbolName;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(422)
			::String tmp11 = library->getPath(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(422)
			return tmp11;
		}
		else{
			HX_STACK_LINE(426)
			::String tmp10 = (HX_HCSTRING("[Assets] There is no asset with an ID of \"","\xaf","\xc3","\xed","\x11") + id);		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(426)
			::String tmp11 = (tmp10 + HX_HCSTRING("\"","\x22","\x00","\x00","\x00"));		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(426)
			Dynamic tmp12 = hx::SourceInfo(HX_HCSTRING("Assets.hx","\xfb","\xcd","\xc6","\x67"),426,HX_HCSTRING("lime.Assets","\xdc","\x38","\x84","\x97"),HX_HCSTRING("getPath","\x5b","\x95","\xd4","\x1c"));		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(426)
			::haxe::Log_obj::trace(tmp11,tmp12);
		}
	}
	else{
		HX_STACK_LINE(432)
		::String tmp8 = (HX_HCSTRING("[Assets] There is no asset library named \"","\xa0","\xb4","\x0a","\xcd") + libraryName);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(432)
		::String tmp9 = (tmp8 + HX_HCSTRING("\"","\x22","\x00","\x00","\x00"));		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(432)
		Dynamic tmp10 = hx::SourceInfo(HX_HCSTRING("Assets.hx","\xfb","\xcd","\xc6","\x67"),432,HX_HCSTRING("lime.Assets","\xdc","\x38","\x84","\x97"),HX_HCSTRING("getPath","\x5b","\x95","\xd4","\x1c"));		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(432)
		::haxe::Log_obj::trace(tmp9,tmp10);
	}
	HX_STACK_LINE(438)
	return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Assets_obj,getPath,return )

::String Assets_obj::getText( ::String id){
	HX_STACK_FRAME("lime.Assets","getText",0x387f72d1,"lime.Assets.getText","lime/Assets.hx",449,0x48c77341)
	HX_STACK_ARG(id,"id")
	HX_STACK_LINE(451)
	::lime::Assets_obj::initialize();
	HX_STACK_LINE(455)
	int tmp = id.indexOf(HX_HCSTRING(":","\x3a","\x00","\x00","\x00"),null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(455)
	::String tmp1 = id.substring((int)0,tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(455)
	::String libraryName = tmp1;		HX_STACK_VAR(libraryName,"libraryName");
	HX_STACK_LINE(456)
	int tmp2 = id.indexOf(HX_HCSTRING(":","\x3a","\x00","\x00","\x00"),null());		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(456)
	int tmp3 = (tmp2 + (int)1);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(456)
	::String tmp4 = id.substr(tmp3,null());		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(456)
	::String symbolName = tmp4;		HX_STACK_VAR(symbolName,"symbolName");
	HX_STACK_LINE(457)
	::String tmp5 = libraryName;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(457)
	::lime::AssetLibrary tmp6 = ::lime::Assets_obj::getLibrary(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(457)
	::lime::AssetLibrary library = tmp6;		HX_STACK_VAR(library,"library");
	HX_STACK_LINE(459)
	bool tmp7 = (library != null());		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(459)
	if ((tmp7)){
		HX_STACK_LINE(461)
		::String tmp8 = symbolName;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(461)
		bool tmp9 = library->exists(tmp8,HX_HCSTRING("TEXT","\xad","\x94","\xba","\x37"));		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(461)
		if ((tmp9)){
			HX_STACK_LINE(463)
			::String tmp10 = symbolName;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(463)
			bool tmp11 = library->isLocal(tmp10,HX_HCSTRING("TEXT","\xad","\x94","\xba","\x37"));		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(463)
			if ((tmp11)){
				HX_STACK_LINE(465)
				::String tmp12 = symbolName;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(465)
				::String tmp13 = library->getText(tmp12);		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(465)
				return tmp13;
			}
			else{
				HX_STACK_LINE(469)
				::String tmp12 = (HX_HCSTRING("[Assets] String asset \"","\x64","\x53","\x3d","\x14") + id);		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(469)
				::String tmp13 = (tmp12 + HX_HCSTRING("\" exists, but only asynchronously","\xdc","\xca","\xf2","\xdd"));		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(469)
				Dynamic tmp14 = hx::SourceInfo(HX_HCSTRING("Assets.hx","\xfb","\xcd","\xc6","\x67"),469,HX_HCSTRING("lime.Assets","\xdc","\x38","\x84","\x97"),HX_HCSTRING("getText","\x63","\x7c","\x7c","\x1f"));		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(469)
				::haxe::Log_obj::trace(tmp13,tmp14);
			}
		}
		else{
			HX_STACK_LINE(475)
			::String tmp10 = (HX_HCSTRING("[Assets] There is no String asset with an ID of \"","\x8c","\x62","\xe6","\x40") + id);		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(475)
			::String tmp11 = (tmp10 + HX_HCSTRING("\"","\x22","\x00","\x00","\x00"));		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(475)
			Dynamic tmp12 = hx::SourceInfo(HX_HCSTRING("Assets.hx","\xfb","\xcd","\xc6","\x67"),475,HX_HCSTRING("lime.Assets","\xdc","\x38","\x84","\x97"),HX_HCSTRING("getText","\x63","\x7c","\x7c","\x1f"));		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(475)
			::haxe::Log_obj::trace(tmp11,tmp12);
		}
	}
	else{
		HX_STACK_LINE(481)
		::String tmp8 = (HX_HCSTRING("[Assets] There is no asset library named \"","\xa0","\xb4","\x0a","\xcd") + libraryName);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(481)
		::String tmp9 = (tmp8 + HX_HCSTRING("\"","\x22","\x00","\x00","\x00"));		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(481)
		Dynamic tmp10 = hx::SourceInfo(HX_HCSTRING("Assets.hx","\xfb","\xcd","\xc6","\x67"),481,HX_HCSTRING("lime.Assets","\xdc","\x38","\x84","\x97"),HX_HCSTRING("getText","\x63","\x7c","\x7c","\x1f"));		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(481)
		::haxe::Log_obj::trace(tmp9,tmp10);
	}
	HX_STACK_LINE(487)
	return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Assets_obj,getText,return )

Void Assets_obj::initialize( ){
{
		HX_STACK_FRAME("lime.Assets","initialize",0xc42b73a2,"lime.Assets.initialize","lime/Assets.hx",492,0x48c77341)
		HX_STACK_LINE(494)
		bool tmp = ::lime::Assets_obj::initialized;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(494)
		bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(494)
		if ((tmp1)){
			HX_STACK_LINE(498)
			::DefaultAssetLibrary tmp2 = ::DefaultAssetLibrary_obj::__new();		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(498)
			::lime::Assets_obj::registerLibrary(HX_HCSTRING("default","\xc1","\xd8","\xc3","\x9b"),tmp2);
			HX_STACK_LINE(502)
			::lime::Assets_obj::initialized = true;
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Assets_obj,initialize,(void))

bool Assets_obj::isLocal( ::String id,::String type,hx::Null< bool >  __o_useCache){
bool useCache = __o_useCache.Default(true);
	HX_STACK_FRAME("lime.Assets","isLocal",0x2e79638f,"lime.Assets.isLocal","lime/Assets.hx",509,0x48c77341)
	HX_STACK_ARG(id,"id")
	HX_STACK_ARG(type,"type")
	HX_STACK_ARG(useCache,"useCache")
{
		HX_STACK_LINE(511)
		::lime::Assets_obj::initialize();
		HX_STACK_LINE(515)
		bool tmp = useCache;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(515)
		bool tmp1;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(515)
		if ((tmp)){
			HX_STACK_LINE(515)
			::lime::AssetCache tmp2 = ::lime::Assets_obj::cache;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(515)
			::lime::AssetCache tmp3 = tmp2;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(515)
			tmp1 = tmp3->enabled;
		}
		else{
			HX_STACK_LINE(515)
			tmp1 = false;
		}
		HX_STACK_LINE(515)
		if ((tmp1)){
			HX_STACK_LINE(517)
			bool tmp2 = (type == HX_HCSTRING("IMAGE","\x3b","\x57","\x57","\x3b"));		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(517)
			bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(517)
			bool tmp4;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(517)
			if ((tmp3)){
				HX_STACK_LINE(517)
				tmp4 = (type == null());
			}
			else{
				HX_STACK_LINE(517)
				tmp4 = true;
			}
			HX_STACK_LINE(517)
			if ((tmp4)){
				HX_STACK_LINE(519)
				::lime::AssetCache tmp5 = ::lime::Assets_obj::cache;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(519)
				::String tmp6 = id;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(519)
				bool tmp7 = tmp5->image->exists(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(519)
				if ((tmp7)){
					HX_STACK_LINE(519)
					return true;
				}
			}
			HX_STACK_LINE(523)
			bool tmp5 = (type == HX_HCSTRING("FONT","\xcf","\x25","\x81","\x2e"));		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(523)
			bool tmp6 = !(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(523)
			bool tmp7;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(523)
			if ((tmp6)){
				HX_STACK_LINE(523)
				tmp7 = (type == null());
			}
			else{
				HX_STACK_LINE(523)
				tmp7 = true;
			}
			HX_STACK_LINE(523)
			if ((tmp7)){
				HX_STACK_LINE(525)
				::lime::AssetCache tmp8 = ::lime::Assets_obj::cache;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(525)
				::String tmp9 = id;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(525)
				bool tmp10 = tmp8->font->exists(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(525)
				if ((tmp10)){
					HX_STACK_LINE(525)
					return true;
				}
			}
			HX_STACK_LINE(529)
			bool tmp8 = (type == HX_HCSTRING("SOUND","\xaf","\xc4","\xba","\xfe"));		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(529)
			bool tmp9 = !(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(529)
			bool tmp10 = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(529)
			bool tmp11;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(529)
			if ((tmp10)){
				HX_STACK_LINE(529)
				tmp11 = (type == HX_HCSTRING("MUSIC","\x85","\x08","\x49","\x8e"));
			}
			else{
				HX_STACK_LINE(529)
				tmp11 = true;
			}
			HX_STACK_LINE(529)
			bool tmp12 = !(tmp11);		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(529)
			bool tmp13;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(529)
			if ((tmp12)){
				HX_STACK_LINE(529)
				tmp13 = (type == null());
			}
			else{
				HX_STACK_LINE(529)
				tmp13 = true;
			}
			HX_STACK_LINE(529)
			if ((tmp13)){
				HX_STACK_LINE(531)
				::lime::AssetCache tmp14 = ::lime::Assets_obj::cache;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(531)
				::String tmp15 = id;		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(531)
				bool tmp16 = tmp14->audio->exists(tmp15);		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(531)
				if ((tmp16)){
					HX_STACK_LINE(531)
					return true;
				}
			}
		}
		HX_STACK_LINE(537)
		int tmp2 = id.indexOf(HX_HCSTRING(":","\x3a","\x00","\x00","\x00"),null());		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(537)
		::String tmp3 = id.substring((int)0,tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(537)
		::String libraryName = tmp3;		HX_STACK_VAR(libraryName,"libraryName");
		HX_STACK_LINE(538)
		int tmp4 = id.indexOf(HX_HCSTRING(":","\x3a","\x00","\x00","\x00"),null());		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(538)
		int tmp5 = (tmp4 + (int)1);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(538)
		::String tmp6 = id.substr(tmp5,null());		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(538)
		::String symbolName = tmp6;		HX_STACK_VAR(symbolName,"symbolName");
		HX_STACK_LINE(539)
		::String tmp7 = libraryName;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(539)
		::lime::AssetLibrary tmp8 = ::lime::Assets_obj::getLibrary(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(539)
		::lime::AssetLibrary library = tmp8;		HX_STACK_VAR(library,"library");
		HX_STACK_LINE(541)
		bool tmp9 = (library != null());		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(541)
		if ((tmp9)){
			HX_STACK_LINE(543)
			::String tmp10 = symbolName;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(543)
			::String tmp11 = type;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(543)
			bool tmp12 = library->isLocal(tmp10,tmp11);		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(543)
			return tmp12;
		}
		HX_STACK_LINE(549)
		return false;
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(Assets_obj,isLocal,return )

bool Assets_obj::isValidAudio( ::lime::audio::AudioBuffer buffer){
	HX_STACK_FRAME("lime.Assets","isValidAudio",0x0da20596,"lime.Assets.isValidAudio","lime/Assets.hx",554,0x48c77341)
	HX_STACK_ARG(buffer,"buffer")
	HX_STACK_LINE(558)
	bool tmp = (buffer != null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(558)
	return tmp;
	HX_STACK_LINE(563)
	return true;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Assets_obj,isValidAudio,return )

bool Assets_obj::isValidImage( ::lime::graphics::Image buffer){
	HX_STACK_FRAME("lime.Assets","isValidImage",0xa38aac1b,"lime.Assets.isValidImage","lime/Assets.hx",568,0x48c77341)
	HX_STACK_ARG(buffer,"buffer")
	HX_STACK_LINE(573)
	bool tmp = (buffer != null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(573)
	return tmp;
	HX_STACK_LINE(592)
	return true;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Assets_obj,isValidImage,return )

Array< ::String > Assets_obj::list( ::String type){
	HX_STACK_FRAME("lime.Assets","list",0x60d5f530,"lime.Assets.list","lime/Assets.hx",597,0x48c77341)
	HX_STACK_ARG(type,"type")
	HX_STACK_LINE(599)
	::lime::Assets_obj::initialize();
	HX_STACK_LINE(601)
	Array< ::String > items = Array_obj< ::String >::__new();		HX_STACK_VAR(items,"items");
	HX_STACK_LINE(603)
	::haxe::ds::StringMap tmp = ::lime::Assets_obj::libraries;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(603)
	Dynamic tmp1 = tmp->iterator();		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(603)
	for(::cpp::FastIterator_obj< ::lime::AssetLibrary > *__it = ::cpp::CreateFastIterator< ::lime::AssetLibrary >(tmp1);  __it->hasNext(); ){
		::lime::AssetLibrary library = __it->next();
		{
			HX_STACK_LINE(605)
			::String tmp2 = type;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(605)
			Array< ::String > libraryItems = library->list(tmp2);		HX_STACK_VAR(libraryItems,"libraryItems");
			HX_STACK_LINE(607)
			bool tmp3 = (libraryItems != null());		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(607)
			if ((tmp3)){
				HX_STACK_LINE(609)
				items = items->concat(libraryItems);
			}
		}
;
	}
	HX_STACK_LINE(615)
	return items;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Assets_obj,list,return )

Void Assets_obj::loadAudioBuffer( ::String id,Dynamic handler,hx::Null< bool >  __o_useCache){
bool useCache = __o_useCache.Default(true);
	HX_STACK_FRAME("lime.Assets","loadAudioBuffer",0x6d20865e,"lime.Assets.loadAudioBuffer","lime/Assets.hx",620,0x48c77341)
	HX_STACK_ARG(id,"id")
	HX_STACK_ARG(handler,"handler")
	HX_STACK_ARG(useCache,"useCache")
{
		HX_STACK_LINE(622)
		::lime::Assets_obj::initialize();
		HX_STACK_LINE(626)
		bool tmp = useCache;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(626)
		bool tmp1 = tmp;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(626)
		bool tmp2;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(626)
		if ((tmp1)){
			HX_STACK_LINE(626)
			::lime::AssetCache tmp3 = ::lime::Assets_obj::cache;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(626)
			::lime::AssetCache tmp4 = tmp3;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(626)
			::lime::AssetCache tmp5 = tmp4;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(626)
			tmp2 = tmp5->enabled;
		}
		else{
			HX_STACK_LINE(626)
			tmp2 = false;
		}
		HX_STACK_LINE(626)
		bool tmp3;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(626)
		if ((tmp2)){
			HX_STACK_LINE(626)
			::lime::AssetCache tmp4 = ::lime::Assets_obj::cache;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(626)
			::lime::AssetCache tmp5 = tmp4;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(626)
			::String tmp6 = id;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(626)
			::String tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(626)
			tmp3 = tmp5->audio->exists(tmp7);
		}
		else{
			HX_STACK_LINE(626)
			tmp3 = false;
		}
		HX_STACK_LINE(626)
		if ((tmp3)){
			HX_STACK_LINE(628)
			::lime::AssetCache tmp4 = ::lime::Assets_obj::cache;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(628)
			::String tmp5 = id;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(628)
			::lime::audio::AudioBuffer tmp6 = tmp4->audio->get(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(628)
			::lime::audio::AudioBuffer audio = tmp6;		HX_STACK_VAR(audio,"audio");
			HX_STACK_LINE(630)
			::lime::audio::AudioBuffer tmp7 = audio;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(630)
			bool tmp8 = ::lime::Assets_obj::isValidAudio(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(630)
			if ((tmp8)){
				HX_STACK_LINE(632)
				::lime::audio::AudioBuffer tmp9 = audio;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(632)
				handler(tmp9).Cast< Void >();
				HX_STACK_LINE(633)
				return null();
			}
		}
		HX_STACK_LINE(639)
		int tmp4 = id.indexOf(HX_HCSTRING(":","\x3a","\x00","\x00","\x00"),null());		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(639)
		::String tmp5 = id.substring((int)0,tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(639)
		::String libraryName = tmp5;		HX_STACK_VAR(libraryName,"libraryName");
		HX_STACK_LINE(640)
		int tmp6 = id.indexOf(HX_HCSTRING(":","\x3a","\x00","\x00","\x00"),null());		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(640)
		int tmp7 = (tmp6 + (int)1);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(640)
		::String tmp8 = id.substr(tmp7,null());		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(640)
		::String symbolName = tmp8;		HX_STACK_VAR(symbolName,"symbolName");
		HX_STACK_LINE(641)
		::String tmp9 = libraryName;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(641)
		::lime::AssetLibrary tmp10 = ::lime::Assets_obj::getLibrary(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(641)
		::lime::AssetLibrary library = tmp10;		HX_STACK_VAR(library,"library");
		HX_STACK_LINE(643)
		bool tmp11 = (library != null());		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(643)
		if ((tmp11)){
			HX_STACK_LINE(645)
			::String tmp12 = symbolName;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(645)
			bool tmp13 = library->exists(tmp12,HX_HCSTRING("SOUND","\xaf","\xc4","\xba","\xfe"));		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(645)
			if ((tmp13)){
				HX_STACK_LINE(647)
				bool tmp14 = useCache;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(647)
				bool tmp15;		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(647)
				if ((tmp14)){
					HX_STACK_LINE(647)
					::lime::AssetCache tmp16 = ::lime::Assets_obj::cache;		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(647)
					::lime::AssetCache tmp17 = tmp16;		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(647)
					tmp15 = tmp17->enabled;
				}
				else{
					HX_STACK_LINE(647)
					tmp15 = false;
				}
				HX_STACK_LINE(647)
				if ((tmp15)){
					HX_STACK_LINE(649)
					::String tmp16 = symbolName;		HX_STACK_VAR(tmp16,"tmp16");

					HX_BEGIN_LOCAL_FUNC_S2(hx::LocalFunc,_Function_4_1,Dynamic,handler,::String,id)
					int __ArgCount() const { return 1; }
					Void run(Dynamic audio){
						HX_STACK_FRAME("*","_Function_4_1",0x520333fa,"*._Function_4_1","lime/Assets.hx",649,0x48c77341)
						HX_STACK_ARG(audio,"audio")
						{
							HX_STACK_LINE(651)
							{
								HX_STACK_LINE(651)
								::lime::audio::AudioBuffer value = audio;		HX_STACK_VAR(value,"value");
								HX_STACK_LINE(651)
								::lime::AssetCache tmp17 = ::lime::Assets_obj::cache;		HX_STACK_VAR(tmp17,"tmp17");
								HX_STACK_LINE(651)
								::String tmp18 = id;		HX_STACK_VAR(tmp18,"tmp18");
								HX_STACK_LINE(651)
								::lime::audio::AudioBuffer tmp19 = value;		HX_STACK_VAR(tmp19,"tmp19");
								HX_STACK_LINE(651)
								tmp17->audio->set(tmp18,tmp19);
							}
							HX_STACK_LINE(652)
							Dynamic tmp17 = audio;		HX_STACK_VAR(tmp17,"tmp17");
							HX_STACK_LINE(652)
							handler(tmp17).Cast< Void >();
						}
						return null();
					}
					HX_END_LOCAL_FUNC1((void))

					HX_STACK_LINE(649)
					library->loadAudioBuffer(tmp16, Dynamic(new _Function_4_1(handler,id)));
				}
				else{
					HX_STACK_LINE(658)
					::String tmp16 = symbolName;		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(658)
					Dynamic tmp17 = handler;		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(658)
					library->loadAudioBuffer(tmp16,tmp17);
				}
				HX_STACK_LINE(662)
				return null();
			}
			else{
				HX_STACK_LINE(666)
				::String tmp14 = (HX_HCSTRING("[Assets] There is no audio asset with an ID of \"","\x65","\x50","\xb8","\x55") + id);		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(666)
				::String tmp15 = (tmp14 + HX_HCSTRING("\"","\x22","\x00","\x00","\x00"));		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(666)
				Dynamic tmp16 = hx::SourceInfo(HX_HCSTRING("Assets.hx","\xfb","\xcd","\xc6","\x67"),666,HX_HCSTRING("lime.Assets","\xdc","\x38","\x84","\x97"),HX_HCSTRING("loadAudioBuffer","\xf0","\x71","\x7c","\xe3"));		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(666)
				::haxe::Log_obj::trace(tmp15,tmp16);
			}
		}
		else{
			HX_STACK_LINE(672)
			::String tmp12 = (HX_HCSTRING("[Assets] There is no asset library named \"","\xa0","\xb4","\x0a","\xcd") + libraryName);		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(672)
			::String tmp13 = (tmp12 + HX_HCSTRING("\"","\x22","\x00","\x00","\x00"));		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(672)
			Dynamic tmp14 = hx::SourceInfo(HX_HCSTRING("Assets.hx","\xfb","\xcd","\xc6","\x67"),672,HX_HCSTRING("lime.Assets","\xdc","\x38","\x84","\x97"),HX_HCSTRING("loadAudioBuffer","\xf0","\x71","\x7c","\xe3"));		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(672)
			::haxe::Log_obj::trace(tmp13,tmp14);
		}
		HX_STACK_LINE(678)
		handler(null()).Cast< Void >();
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(Assets_obj,loadAudioBuffer,(void))

Void Assets_obj::loadBytes( ::String id,Dynamic handler){
{
		HX_STACK_FRAME("lime.Assets","loadBytes",0x714f4253,"lime.Assets.loadBytes","lime/Assets.hx",683,0x48c77341)
		HX_STACK_ARG(id,"id")
		HX_STACK_ARG(handler,"handler")
		HX_STACK_LINE(685)
		::lime::Assets_obj::initialize();
		HX_STACK_LINE(689)
		int tmp = id.indexOf(HX_HCSTRING(":","\x3a","\x00","\x00","\x00"),null());		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(689)
		::String tmp1 = id.substring((int)0,tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(689)
		::String libraryName = tmp1;		HX_STACK_VAR(libraryName,"libraryName");
		HX_STACK_LINE(690)
		int tmp2 = id.indexOf(HX_HCSTRING(":","\x3a","\x00","\x00","\x00"),null());		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(690)
		int tmp3 = (tmp2 + (int)1);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(690)
		::String tmp4 = id.substr(tmp3,null());		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(690)
		::String symbolName = tmp4;		HX_STACK_VAR(symbolName,"symbolName");
		HX_STACK_LINE(691)
		::String tmp5 = libraryName;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(691)
		::lime::AssetLibrary tmp6 = ::lime::Assets_obj::getLibrary(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(691)
		::lime::AssetLibrary library = tmp6;		HX_STACK_VAR(library,"library");
		HX_STACK_LINE(693)
		bool tmp7 = (library != null());		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(693)
		if ((tmp7)){
			HX_STACK_LINE(695)
			::String tmp8 = symbolName;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(695)
			bool tmp9 = library->exists(tmp8,HX_HCSTRING("BINARY","\x01","\x68","\x8e","\x9f"));		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(695)
			if ((tmp9)){
				HX_STACK_LINE(697)
				::String tmp10 = symbolName;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(697)
				Dynamic tmp11 = handler;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(697)
				library->loadBytes(tmp10,tmp11);
				HX_STACK_LINE(698)
				return null();
			}
			else{
				HX_STACK_LINE(702)
				::String tmp10 = (HX_HCSTRING("[Assets] There is no String or ByteArray asset with an ID of \"","\x72","\x73","\xb6","\x09") + id);		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(702)
				::String tmp11 = (tmp10 + HX_HCSTRING("\"","\x22","\x00","\x00","\x00"));		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(702)
				Dynamic tmp12 = hx::SourceInfo(HX_HCSTRING("Assets.hx","\xfb","\xcd","\xc6","\x67"),702,HX_HCSTRING("lime.Assets","\xdc","\x38","\x84","\x97"),HX_HCSTRING("loadBytes","\x65","\x54","\xcf","\xd8"));		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(702)
				::haxe::Log_obj::trace(tmp11,tmp12);
			}
		}
		else{
			HX_STACK_LINE(708)
			::String tmp8 = (HX_HCSTRING("[Assets] There is no asset library named \"","\xa0","\xb4","\x0a","\xcd") + libraryName);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(708)
			::String tmp9 = (tmp8 + HX_HCSTRING("\"","\x22","\x00","\x00","\x00"));		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(708)
			Dynamic tmp10 = hx::SourceInfo(HX_HCSTRING("Assets.hx","\xfb","\xcd","\xc6","\x67"),708,HX_HCSTRING("lime.Assets","\xdc","\x38","\x84","\x97"),HX_HCSTRING("loadBytes","\x65","\x54","\xcf","\xd8"));		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(708)
			::haxe::Log_obj::trace(tmp9,tmp10);
		}
		HX_STACK_LINE(714)
		handler(null()).Cast< Void >();
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Assets_obj,loadBytes,(void))

Void Assets_obj::loadImage( ::String id,Dynamic handler,hx::Null< bool >  __o_useCache){
bool useCache = __o_useCache.Default(true);
	HX_STACK_FRAME("lime.Assets","loadImage",0x71205943,"lime.Assets.loadImage","lime/Assets.hx",719,0x48c77341)
	HX_STACK_ARG(id,"id")
	HX_STACK_ARG(handler,"handler")
	HX_STACK_ARG(useCache,"useCache")
{
		HX_STACK_LINE(721)
		::lime::Assets_obj::initialize();
		HX_STACK_LINE(725)
		bool tmp = useCache;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(725)
		bool tmp1 = tmp;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(725)
		bool tmp2;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(725)
		if ((tmp1)){
			HX_STACK_LINE(725)
			::lime::AssetCache tmp3 = ::lime::Assets_obj::cache;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(725)
			::lime::AssetCache tmp4 = tmp3;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(725)
			::lime::AssetCache tmp5 = tmp4;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(725)
			tmp2 = tmp5->enabled;
		}
		else{
			HX_STACK_LINE(725)
			tmp2 = false;
		}
		HX_STACK_LINE(725)
		bool tmp3;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(725)
		if ((tmp2)){
			HX_STACK_LINE(725)
			::lime::AssetCache tmp4 = ::lime::Assets_obj::cache;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(725)
			::lime::AssetCache tmp5 = tmp4;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(725)
			::String tmp6 = id;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(725)
			::String tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(725)
			tmp3 = tmp5->image->exists(tmp7);
		}
		else{
			HX_STACK_LINE(725)
			tmp3 = false;
		}
		HX_STACK_LINE(725)
		if ((tmp3)){
			HX_STACK_LINE(727)
			::lime::AssetCache tmp4 = ::lime::Assets_obj::cache;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(727)
			::String tmp5 = id;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(727)
			::lime::graphics::Image tmp6 = tmp4->image->get(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(727)
			::lime::graphics::Image image = tmp6;		HX_STACK_VAR(image,"image");
			HX_STACK_LINE(729)
			::lime::graphics::Image tmp7 = image;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(729)
			bool tmp8 = ::lime::Assets_obj::isValidImage(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(729)
			if ((tmp8)){
				HX_STACK_LINE(731)
				::lime::graphics::Image tmp9 = image;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(731)
				handler(tmp9).Cast< Void >();
				HX_STACK_LINE(732)
				return null();
			}
		}
		HX_STACK_LINE(738)
		int tmp4 = id.indexOf(HX_HCSTRING(":","\x3a","\x00","\x00","\x00"),null());		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(738)
		::String tmp5 = id.substring((int)0,tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(738)
		::String libraryName = tmp5;		HX_STACK_VAR(libraryName,"libraryName");
		HX_STACK_LINE(739)
		int tmp6 = id.indexOf(HX_HCSTRING(":","\x3a","\x00","\x00","\x00"),null());		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(739)
		int tmp7 = (tmp6 + (int)1);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(739)
		::String tmp8 = id.substr(tmp7,null());		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(739)
		::String symbolName = tmp8;		HX_STACK_VAR(symbolName,"symbolName");
		HX_STACK_LINE(740)
		::String tmp9 = libraryName;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(740)
		::lime::AssetLibrary tmp10 = ::lime::Assets_obj::getLibrary(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(740)
		::lime::AssetLibrary library = tmp10;		HX_STACK_VAR(library,"library");
		HX_STACK_LINE(742)
		bool tmp11 = (library != null());		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(742)
		if ((tmp11)){
			HX_STACK_LINE(744)
			::String tmp12 = symbolName;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(744)
			bool tmp13 = library->exists(tmp12,HX_HCSTRING("IMAGE","\x3b","\x57","\x57","\x3b"));		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(744)
			if ((tmp13)){
				HX_STACK_LINE(746)
				bool tmp14 = useCache;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(746)
				bool tmp15;		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(746)
				if ((tmp14)){
					HX_STACK_LINE(746)
					::lime::AssetCache tmp16 = ::lime::Assets_obj::cache;		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(746)
					::lime::AssetCache tmp17 = tmp16;		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(746)
					tmp15 = tmp17->enabled;
				}
				else{
					HX_STACK_LINE(746)
					tmp15 = false;
				}
				HX_STACK_LINE(746)
				if ((tmp15)){
					HX_STACK_LINE(748)
					::String tmp16 = symbolName;		HX_STACK_VAR(tmp16,"tmp16");

					HX_BEGIN_LOCAL_FUNC_S2(hx::LocalFunc,_Function_4_1,Dynamic,handler,::String,id)
					int __ArgCount() const { return 1; }
					Void run(::lime::graphics::Image image){
						HX_STACK_FRAME("*","_Function_4_1",0x520333fa,"*._Function_4_1","lime/Assets.hx",748,0x48c77341)
						HX_STACK_ARG(image,"image")
						{
							HX_STACK_LINE(750)
							::lime::AssetCache tmp17 = ::lime::Assets_obj::cache;		HX_STACK_VAR(tmp17,"tmp17");
							HX_STACK_LINE(750)
							::String tmp18 = id;		HX_STACK_VAR(tmp18,"tmp18");
							HX_STACK_LINE(750)
							::lime::graphics::Image tmp19 = image;		HX_STACK_VAR(tmp19,"tmp19");
							HX_STACK_LINE(750)
							tmp17->image->set(tmp18,tmp19);
							HX_STACK_LINE(751)
							::lime::graphics::Image tmp20 = image;		HX_STACK_VAR(tmp20,"tmp20");
							HX_STACK_LINE(751)
							handler(tmp20).Cast< Void >();
						}
						return null();
					}
					HX_END_LOCAL_FUNC1((void))

					HX_STACK_LINE(748)
					library->loadImage(tmp16, Dynamic(new _Function_4_1(handler,id)));
				}
				else{
					HX_STACK_LINE(757)
					::String tmp16 = symbolName;		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(757)
					Dynamic tmp17 = handler;		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(757)
					library->loadImage(tmp16,tmp17);
				}
				HX_STACK_LINE(761)
				return null();
			}
			else{
				HX_STACK_LINE(765)
				::String tmp14 = (HX_HCSTRING("[Assets] There is no Image asset with an ID of \"","\x8a","\x1a","\x98","\x70") + id);		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(765)
				::String tmp15 = (tmp14 + HX_HCSTRING("\"","\x22","\x00","\x00","\x00"));		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(765)
				Dynamic tmp16 = hx::SourceInfo(HX_HCSTRING("Assets.hx","\xfb","\xcd","\xc6","\x67"),765,HX_HCSTRING("lime.Assets","\xdc","\x38","\x84","\x97"),HX_HCSTRING("loadImage","\x55","\x6b","\xa0","\xd8"));		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(765)
				::haxe::Log_obj::trace(tmp15,tmp16);
			}
		}
		else{
			HX_STACK_LINE(771)
			::String tmp12 = (HX_HCSTRING("[Assets] There is no asset library named \"","\xa0","\xb4","\x0a","\xcd") + libraryName);		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(771)
			::String tmp13 = (tmp12 + HX_HCSTRING("\"","\x22","\x00","\x00","\x00"));		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(771)
			Dynamic tmp14 = hx::SourceInfo(HX_HCSTRING("Assets.hx","\xfb","\xcd","\xc6","\x67"),771,HX_HCSTRING("lime.Assets","\xdc","\x38","\x84","\x97"),HX_HCSTRING("loadImage","\x55","\x6b","\xa0","\xd8"));		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(771)
			::haxe::Log_obj::trace(tmp13,tmp14);
		}
		HX_STACK_LINE(777)
		handler(null()).Cast< Void >();
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(Assets_obj,loadImage,(void))

Void Assets_obj::loadLibrary( ::String name,Dynamic handler){
{
		HX_STACK_FRAME("lime.Assets","loadLibrary",0xbad7aae3,"lime.Assets.loadLibrary","lime/Assets.hx",782,0x48c77341)
		HX_STACK_ARG(name,"name")
		HX_STACK_ARG(handler,"handler")
		HX_STACK_LINE(784)
		::lime::Assets_obj::initialize();
		HX_STACK_LINE(788)
		::String tmp = (HX_HCSTRING("libraries/","\xf6","\xc5","\x4d","\xc0") + name);		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(788)
		::String tmp1 = (tmp + HX_HCSTRING(".json","\x56","\xf1","\xd6","\xc2"));		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(788)
		::String tmp2 = ::lime::Assets_obj::getText(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(788)
		::String data = tmp2;		HX_STACK_VAR(data,"data");
		HX_STACK_LINE(790)
		bool tmp3 = (data != null());		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(790)
		bool tmp4;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(790)
		if ((tmp3)){
			HX_STACK_LINE(790)
			tmp4 = (data != HX_HCSTRING("","\x00","\x00","\x00","\x00"));
		}
		else{
			HX_STACK_LINE(790)
			tmp4 = false;
		}
		HX_STACK_LINE(790)
		if ((tmp4)){
			HX_STACK_LINE(792)
			::haxe::format::JsonParser tmp5 = ::haxe::format::JsonParser_obj::__new(data);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(792)
			Dynamic tmp6 = tmp5->parseRec();		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(792)
			Dynamic info = tmp6;		HX_STACK_VAR(info,"info");
			HX_STACK_LINE(793)
			::String tmp7 = info->__Field(HX_HCSTRING("type","\xba","\xf2","\x08","\x4d"), hx::paccDynamic );		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(793)
			::hx::Class tmp8 = ::Type_obj::resolveClass(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(793)
			::lime::AssetLibrary tmp9 = ::Type_obj::createInstance(tmp8,info->__Field(HX_HCSTRING("args","\x5d","\x8d","\x74","\x40"), hx::paccDynamic ));		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(793)
			::lime::AssetLibrary library = tmp9;		HX_STACK_VAR(library,"library");
			HX_STACK_LINE(794)
			::haxe::ds::StringMap tmp10 = ::lime::Assets_obj::libraries;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(794)
			::String tmp11 = name;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(794)
			::lime::AssetLibrary tmp12 = library;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(794)
			tmp10->set(tmp11,tmp12);
			HX_STACK_LINE(795)
			Dynamic tmp13 = ::lime::Assets_obj::library_onEvent_dyn();		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(795)
			library->eventCallback = tmp13;
			HX_STACK_LINE(796)
			Dynamic tmp14 = handler;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(796)
			library->load(tmp14);
		}
		else{
			HX_STACK_LINE(800)
			::String tmp5 = (HX_HCSTRING("[Assets] There is no asset library named \"","\xa0","\xb4","\x0a","\xcd") + name);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(800)
			::String tmp6 = (tmp5 + HX_HCSTRING("\"","\x22","\x00","\x00","\x00"));		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(800)
			Dynamic tmp7 = hx::SourceInfo(HX_HCSTRING("Assets.hx","\xfb","\xcd","\xc6","\x67"),800,HX_HCSTRING("lime.Assets","\xdc","\x38","\x84","\x97"),HX_HCSTRING("loadLibrary","\x75","\xe5","\x0d","\x10"));		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(800)
			::haxe::Log_obj::trace(tmp6,tmp7);
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Assets_obj,loadLibrary,(void))

Void Assets_obj::loadText( ::String id,Dynamic handler){
{
		HX_STACK_FRAME("lime.Assets","loadText",0x872e47c5,"lime.Assets.loadText","lime/Assets.hx",872,0x48c77341)
		HX_STACK_ARG(id,"id")
		HX_STACK_ARG(handler,"handler")
		HX_STACK_LINE(874)
		::lime::Assets_obj::initialize();
		HX_STACK_LINE(878)
		int tmp = id.indexOf(HX_HCSTRING(":","\x3a","\x00","\x00","\x00"),null());		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(878)
		::String tmp1 = id.substring((int)0,tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(878)
		::String libraryName = tmp1;		HX_STACK_VAR(libraryName,"libraryName");
		HX_STACK_LINE(879)
		int tmp2 = id.indexOf(HX_HCSTRING(":","\x3a","\x00","\x00","\x00"),null());		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(879)
		int tmp3 = (tmp2 + (int)1);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(879)
		::String tmp4 = id.substr(tmp3,null());		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(879)
		::String symbolName = tmp4;		HX_STACK_VAR(symbolName,"symbolName");
		HX_STACK_LINE(880)
		::String tmp5 = libraryName;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(880)
		::lime::AssetLibrary tmp6 = ::lime::Assets_obj::getLibrary(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(880)
		::lime::AssetLibrary library = tmp6;		HX_STACK_VAR(library,"library");
		HX_STACK_LINE(882)
		bool tmp7 = (library != null());		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(882)
		if ((tmp7)){
			HX_STACK_LINE(884)
			::String tmp8 = symbolName;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(884)
			bool tmp9 = library->exists(tmp8,HX_HCSTRING("TEXT","\xad","\x94","\xba","\x37"));		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(884)
			if ((tmp9)){
				HX_STACK_LINE(886)
				::String tmp10 = symbolName;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(886)
				Dynamic tmp11 = handler;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(886)
				library->loadText(tmp10,tmp11);
				HX_STACK_LINE(887)
				return null();
			}
			else{
				HX_STACK_LINE(891)
				::String tmp10 = (HX_HCSTRING("[Assets] There is no String asset with an ID of \"","\x8c","\x62","\xe6","\x40") + id);		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(891)
				::String tmp11 = (tmp10 + HX_HCSTRING("\"","\x22","\x00","\x00","\x00"));		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(891)
				Dynamic tmp12 = hx::SourceInfo(HX_HCSTRING("Assets.hx","\xfb","\xcd","\xc6","\x67"),891,HX_HCSTRING("lime.Assets","\xdc","\x38","\x84","\x97"),HX_HCSTRING("loadText","\xf3","\x9d","\x99","\xbd"));		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(891)
				::haxe::Log_obj::trace(tmp11,tmp12);
			}
		}
		else{
			HX_STACK_LINE(897)
			::String tmp8 = (HX_HCSTRING("[Assets] There is no asset library named \"","\xa0","\xb4","\x0a","\xcd") + libraryName);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(897)
			::String tmp9 = (tmp8 + HX_HCSTRING("\"","\x22","\x00","\x00","\x00"));		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(897)
			Dynamic tmp10 = hx::SourceInfo(HX_HCSTRING("Assets.hx","\xfb","\xcd","\xc6","\x67"),897,HX_HCSTRING("lime.Assets","\xdc","\x38","\x84","\x97"),HX_HCSTRING("loadText","\xf3","\x9d","\x99","\xbd"));		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(897)
			::haxe::Log_obj::trace(tmp9,tmp10);
		}
		HX_STACK_LINE(903)
		handler(null()).Cast< Void >();
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Assets_obj,loadText,(void))

Void Assets_obj::registerLibrary( ::String name,::lime::AssetLibrary library){
{
		HX_STACK_FRAME("lime.Assets","registerLibrary",0x7c289f46,"lime.Assets.registerLibrary","lime/Assets.hx",908,0x48c77341)
		HX_STACK_ARG(name,"name")
		HX_STACK_ARG(library,"library")
		HX_STACK_LINE(910)
		::haxe::ds::StringMap tmp = ::lime::Assets_obj::libraries;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(910)
		::String tmp1 = name;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(910)
		bool tmp2 = tmp->exists(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(910)
		if ((tmp2)){
			HX_STACK_LINE(912)
			::String tmp3 = name;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(912)
			::lime::Assets_obj::unloadLibrary(tmp3);
		}
		HX_STACK_LINE(916)
		bool tmp3 = (library != null());		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(916)
		if ((tmp3)){
			HX_STACK_LINE(918)
			Dynamic tmp4 = ::lime::Assets_obj::library_onEvent_dyn();		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(918)
			library->eventCallback = tmp4;
		}
		HX_STACK_LINE(922)
		::haxe::ds::StringMap tmp4 = ::lime::Assets_obj::libraries;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(922)
		::String tmp5 = name;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(922)
		::lime::AssetLibrary tmp6 = library;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(922)
		tmp4->set(tmp5,tmp6);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Assets_obj,registerLibrary,(void))

Void Assets_obj::unloadLibrary( ::String name){
{
		HX_STACK_FRAME("lime.Assets","unloadLibrary",0x7620d8aa,"lime.Assets.unloadLibrary","lime/Assets.hx",927,0x48c77341)
		HX_STACK_ARG(name,"name")
		HX_STACK_LINE(929)
		::lime::Assets_obj::initialize();
		HX_STACK_LINE(933)
		::haxe::ds::StringMap tmp = ::lime::Assets_obj::libraries;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(933)
		::String tmp1 = name;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(933)
		::lime::AssetLibrary tmp2 = tmp->get(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(933)
		::lime::AssetLibrary library = tmp2;		HX_STACK_VAR(library,"library");
		HX_STACK_LINE(935)
		bool tmp3 = (library != null());		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(935)
		if ((tmp3)){
			HX_STACK_LINE(937)
			::lime::AssetCache tmp4 = ::lime::Assets_obj::cache;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(937)
			::String tmp5 = (name + HX_HCSTRING(":","\x3a","\x00","\x00","\x00"));		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(937)
			tmp4->clear(tmp5);
			HX_STACK_LINE(938)
			library->unload();
			HX_STACK_LINE(939)
			library->eventCallback = null();
		}
		HX_STACK_LINE(943)
		::haxe::ds::StringMap tmp4 = ::lime::Assets_obj::libraries;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(943)
		::String tmp5 = name;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(943)
		tmp4->remove(tmp5);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Assets_obj,unloadLibrary,(void))

Void Assets_obj::library_onEvent( ::lime::AssetLibrary library,::String type){
{
		HX_STACK_FRAME("lime.Assets","library_onEvent",0xa716ee65,"lime.Assets.library_onEvent","lime/Assets.hx",957,0x48c77341)
		HX_STACK_ARG(library,"library")
		HX_STACK_ARG(type,"type")
		HX_STACK_LINE(959)
		bool tmp = (type == HX_HCSTRING("change","\x70","\x91","\x72","\xb7"));		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(959)
		if ((tmp)){
			HX_STACK_LINE(961)
			::lime::AssetCache tmp1 = ::lime::Assets_obj::cache;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(961)
			tmp1->clear(null());
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Assets_obj,library_onEvent,(void))


Assets_obj::Assets_obj()
{
}

bool Assets_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"list") ) { outValue = list_dyn(); return true;  }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"cache") ) { outValue = cache; return true;  }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"exists") ) { outValue = exists_dyn(); return true;  }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"getFont") ) { outValue = getFont_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"getPath") ) { outValue = getPath_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"getText") ) { outValue = getText_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"isLocal") ) { outValue = isLocal_dyn(); return true;  }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"getBytes") ) { outValue = getBytes_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"getImage") ) { outValue = getImage_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"loadText") ) { outValue = loadText_dyn(); return true;  }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"libraries") ) { outValue = libraries; return true;  }
		if (HX_FIELD_EQ(inName,"loadBytes") ) { outValue = loadBytes_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"loadImage") ) { outValue = loadImage_dyn(); return true;  }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"getLibrary") ) { outValue = getLibrary_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"initialize") ) { outValue = initialize_dyn(); return true;  }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"initialized") ) { outValue = initialized; return true;  }
		if (HX_FIELD_EQ(inName,"loadLibrary") ) { outValue = loadLibrary_dyn(); return true;  }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"isValidAudio") ) { outValue = isValidAudio_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"isValidImage") ) { outValue = isValidImage_dyn(); return true;  }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"unloadLibrary") ) { outValue = unloadLibrary_dyn(); return true;  }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"getAudioBuffer") ) { outValue = getAudioBuffer_dyn(); return true;  }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"loadAudioBuffer") ) { outValue = loadAudioBuffer_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"registerLibrary") ) { outValue = registerLibrary_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"library_onEvent") ) { outValue = library_onEvent_dyn(); return true;  }
	}
	return false;
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
static hx::StaticInfo sStaticStorageInfo[] = {
	{hx::fsObject /*::lime::AssetCache*/ ,(void *) &Assets_obj::cache,HX_HCSTRING("cache","\x42","\x9a","\x14","\x41")},
	{hx::fsObject /*::haxe::ds::StringMap*/ ,(void *) &Assets_obj::libraries,HX_HCSTRING("libraries","\x19","\x50","\xf8","\x18")},
	{hx::fsBool,(void *) &Assets_obj::initialized,HX_HCSTRING("initialized","\x14","\xf5","\x0f","\x37")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Assets_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(Assets_obj::cache,"cache");
	HX_MARK_MEMBER_NAME(Assets_obj::libraries,"libraries");
	HX_MARK_MEMBER_NAME(Assets_obj::initialized,"initialized");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Assets_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(Assets_obj::cache,"cache");
	HX_VISIT_MEMBER_NAME(Assets_obj::libraries,"libraries");
	HX_VISIT_MEMBER_NAME(Assets_obj::initialized,"initialized");
};

#endif

hx::Class Assets_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("cache","\x42","\x9a","\x14","\x41"),
	HX_HCSTRING("libraries","\x19","\x50","\xf8","\x18"),
	HX_HCSTRING("initialized","\x14","\xf5","\x0f","\x37"),
	HX_HCSTRING("exists","\xdc","\x1d","\xe0","\xbf"),
	HX_HCSTRING("getAudioBuffer","\x80","\x41","\xe3","\x26"),
	HX_HCSTRING("getBytes","\xf5","\x17","\x6f","\x1d"),
	HX_HCSTRING("getFont","\x85","\x0d","\x43","\x16"),
	HX_HCSTRING("getImage","\xe5","\x2e","\x40","\x1d"),
	HX_HCSTRING("getLibrary","\x05","\xad","\xd1","\x8e"),
	HX_HCSTRING("getPath","\x5b","\x95","\xd4","\x1c"),
	HX_HCSTRING("getText","\x63","\x7c","\x7c","\x1f"),
	HX_HCSTRING("initialize","\x50","\x31","\xbb","\xec"),
	HX_HCSTRING("isLocal","\x21","\x6d","\x76","\x15"),
	HX_HCSTRING("isValidAudio","\xc4","\x0a","\xdf","\x47"),
	HX_HCSTRING("isValidImage","\x49","\xb1","\xc7","\xdd"),
	HX_HCSTRING("list","\x5e","\x1c","\xb3","\x47"),
	HX_HCSTRING("loadAudioBuffer","\xf0","\x71","\x7c","\xe3"),
	HX_HCSTRING("loadBytes","\x65","\x54","\xcf","\xd8"),
	HX_HCSTRING("loadImage","\x55","\x6b","\xa0","\xd8"),
	HX_HCSTRING("loadLibrary","\x75","\xe5","\x0d","\x10"),
	HX_HCSTRING("loadText","\xf3","\x9d","\x99","\xbd"),
	HX_HCSTRING("registerLibrary","\xd8","\x8a","\x84","\xf2"),
	HX_HCSTRING("unloadLibrary","\xbc","\x5b","\x48","\x31"),
	HX_HCSTRING("library_onEvent","\xf7","\xd9","\x72","\x1d"),
	::String(null()) };

void Assets_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("lime.Assets","\xdc","\x38","\x84","\x97");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Assets_obj::__GetStatic;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< Assets_obj >;
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

void Assets_obj::__boot()
{
	cache= ::lime::AssetCache_obj::__new();
struct _Function_0_1{
	inline static ::haxe::ds::StringMap Block( ){
		HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","lime/Assets.hx",35,0x48c77341)
		{
			HX_STACK_LINE(35)
			::haxe::ds::StringMap tmp = ::haxe::ds::StringMap_obj::__new();		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(35)
			::haxe::ds::StringMap tmp1 = tmp;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(35)
			return tmp1;
		}
		return null();
	}
};
	libraries= _Function_0_1::Block();
	initialized= false;
}

} // end namespace lime
