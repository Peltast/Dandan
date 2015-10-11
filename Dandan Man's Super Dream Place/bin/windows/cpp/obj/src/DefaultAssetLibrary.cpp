#include <hxcpp.h>

#ifndef INCLUDED_Date
#include <Date.h>
#endif
#ifndef INCLUDED_DefaultAssetLibrary
#include <DefaultAssetLibrary.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_Sys
#include <Sys.h>
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
#ifndef INCLUDED_haxe_Timer
#include <haxe/Timer.h>
#endif
#ifndef INCLUDED_haxe_Unserializer
#include <haxe/Unserializer.h>
#endif
#ifndef INCLUDED_haxe_ds_StringMap
#include <haxe/ds/StringMap.h>
#endif
#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
#endif
#ifndef INCLUDED_lime_AssetLibrary
#include <lime/AssetLibrary.h>
#endif
#ifndef INCLUDED_lime_app_Event
#include <lime/app/Event.h>
#endif
#ifndef INCLUDED_lime_audio_AudioBuffer
#include <lime/audio/AudioBuffer.h>
#endif
#ifndef INCLUDED_lime_graphics_Image
#include <lime/graphics/Image.h>
#endif
#ifndef INCLUDED_lime_system_ThreadPool
#include <lime/system/ThreadPool.h>
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
#ifndef INCLUDED_sys_FileSystem
#include <sys/FileSystem.h>
#endif

Void DefaultAssetLibrary_obj::__construct()
{
HX_STACK_FRAME("DefaultAssetLibrary","new",0xbc37e41e,"DefaultAssetLibrary.new","DefaultAssetLibrary.hx",35,0x0fc48912)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(40)
	this->type = ::haxe::ds::StringMap_obj::__new();
	HX_STACK_LINE(39)
	this->path = ::haxe::ds::StringMap_obj::__new();
	HX_STACK_LINE(38)
	this->className = ::haxe::ds::StringMap_obj::__new();
	HX_STACK_LINE(47)
	::DefaultAssetLibrary _g = hx::ObjectPtr<OBJ_>(this);		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(49)
	super::__construct();
	HX_STACK_LINE(424)
	bool useManifest = false;		HX_STACK_VAR(useManifest,"useManifest");
	HX_STACK_LINE(425)
	useManifest = true;
	HX_STACK_LINE(426)
	useManifest = true;
	HX_STACK_LINE(427)
	useManifest = true;
	HX_STACK_LINE(428)
	useManifest = true;
	HX_STACK_LINE(429)
	useManifest = true;
	HX_STACK_LINE(430)
	useManifest = true;
	HX_STACK_LINE(431)
	useManifest = true;
	HX_STACK_LINE(432)
	useManifest = true;
	HX_STACK_LINE(433)
	useManifest = true;
	HX_STACK_LINE(434)
	useManifest = true;
	HX_STACK_LINE(435)
	useManifest = true;
	HX_STACK_LINE(436)
	useManifest = true;
	HX_STACK_LINE(437)
	useManifest = true;
	HX_STACK_LINE(438)
	useManifest = true;
	HX_STACK_LINE(439)
	useManifest = true;
	HX_STACK_LINE(440)
	useManifest = true;
	HX_STACK_LINE(441)
	useManifest = true;
	HX_STACK_LINE(442)
	useManifest = true;
	HX_STACK_LINE(443)
	useManifest = true;
	HX_STACK_LINE(444)
	useManifest = true;
	HX_STACK_LINE(445)
	useManifest = true;
	HX_STACK_LINE(446)
	useManifest = true;
	HX_STACK_LINE(447)
	useManifest = true;
	HX_STACK_LINE(448)
	useManifest = true;
	HX_STACK_LINE(449)
	useManifest = true;
	HX_STACK_LINE(450)
	useManifest = true;
	HX_STACK_LINE(451)
	useManifest = true;
	HX_STACK_LINE(452)
	useManifest = true;
	HX_STACK_LINE(453)
	useManifest = true;
	HX_STACK_LINE(454)
	useManifest = true;
	HX_STACK_LINE(455)
	useManifest = true;
	HX_STACK_LINE(456)
	useManifest = true;
	HX_STACK_LINE(457)
	useManifest = true;
	HX_STACK_LINE(458)
	useManifest = true;
	HX_STACK_LINE(459)
	useManifest = true;
	HX_STACK_LINE(460)
	useManifest = true;
	HX_STACK_LINE(461)
	useManifest = true;
	HX_STACK_LINE(462)
	useManifest = true;
	HX_STACK_LINE(463)
	useManifest = true;
	HX_STACK_LINE(464)
	useManifest = true;
	HX_STACK_LINE(465)
	useManifest = true;
	HX_STACK_LINE(466)
	useManifest = true;
	HX_STACK_LINE(467)
	useManifest = true;
	HX_STACK_LINE(468)
	useManifest = true;
	HX_STACK_LINE(469)
	useManifest = true;
	HX_STACK_LINE(470)
	useManifest = true;
	HX_STACK_LINE(471)
	useManifest = true;
	HX_STACK_LINE(472)
	useManifest = true;
	HX_STACK_LINE(473)
	useManifest = true;
	HX_STACK_LINE(474)
	useManifest = true;
	HX_STACK_LINE(475)
	useManifest = true;
	HX_STACK_LINE(476)
	useManifest = true;
	HX_STACK_LINE(477)
	useManifest = true;
	HX_STACK_LINE(478)
	useManifest = true;
	HX_STACK_LINE(479)
	useManifest = true;
	HX_STACK_LINE(480)
	useManifest = true;
	HX_STACK_LINE(481)
	useManifest = true;
	HX_STACK_LINE(482)
	useManifest = true;
	HX_STACK_LINE(485)
	bool tmp = useManifest;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(485)
	if ((tmp)){
		HX_STACK_LINE(487)
		this->loadManifest();
		HX_STACK_LINE(489)
		int tmp1 = ::Sys_obj::args()->indexOf(HX_HCSTRING("-livereload","\xb2","\x45","\x9f","\x14"),null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(489)
		bool tmp2 = (tmp1 > (int)-1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(489)
		if ((tmp2)){
			HX_STACK_LINE(491)
			::String tmp3 = ::sys::FileSystem_obj::fullPath(HX_HCSTRING("manifest","\xaf","\xfb","\x29","\xd0"));		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(491)
			::String path = tmp3;		HX_STACK_VAR(path,"path");
			HX_STACK_LINE(492)
			::String tmp4 = path;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(492)
			Dynamic tmp5 = ::sys::FileSystem_obj::stat(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(492)
			Float tmp6 = tmp5->__Field(HX_HCSTRING("mtime","\xfa","\x06","\xaa","\x0f"), hx::paccDynamic )->__Field(HX_HCSTRING("getTime","\xc3","\x7b","\x7f","\x1f"), hx::paccDynamic )();		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(492)
			this->lastModified = tmp6;
			HX_STACK_LINE(494)
			::haxe::Timer tmp7 = ::haxe::Timer_obj::__new((int)2000);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(494)
			this->timer = tmp7;
			HX_STACK_LINE(495)
			::haxe::Timer tmp8 = this->timer;		HX_STACK_VAR(tmp8,"tmp8");

			HX_BEGIN_LOCAL_FUNC_S2(hx::LocalFunc,_Function_3_1,::DefaultAssetLibrary,_g,::String,path)
			int __ArgCount() const { return 0; }
			Void run(){
				HX_STACK_FRAME("*","_Function_3_1",0x520271b9,"*._Function_3_1","DefaultAssetLibrary.hx",495,0x0fc48912)
				{
					HX_STACK_LINE(497)
					::String tmp9 = path;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(497)
					Dynamic tmp10 = ::sys::FileSystem_obj::stat(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(497)
					Float tmp11 = tmp10->__Field(HX_HCSTRING("mtime","\xfa","\x06","\xaa","\x0f"), hx::paccDynamic )->__Field(HX_HCSTRING("getTime","\xc3","\x7b","\x7f","\x1f"), hx::paccDynamic )();		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(497)
					Float modified = tmp11;		HX_STACK_VAR(modified,"modified");
					HX_STACK_LINE(499)
					bool tmp12 = (modified > _g->lastModified);		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(499)
					if ((tmp12)){
						HX_STACK_LINE(501)
						_g->lastModified = modified;
						HX_STACK_LINE(502)
						_g->loadManifest();
						HX_STACK_LINE(504)
						bool tmp13 = (_g->eventCallback != null());		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(504)
						if ((tmp13)){
							HX_STACK_LINE(506)
							_g->eventCallback(_g,HX_HCSTRING("change","\x70","\x91","\x72","\xb7"));
						}
					}
				}
				return null();
			}
			HX_END_LOCAL_FUNC0((void))

			HX_STACK_LINE(495)
			tmp8->run =  Dynamic(new _Function_3_1(_g,path));
		}
	}
}
;
	return null();
}

//DefaultAssetLibrary_obj::~DefaultAssetLibrary_obj() { }

Dynamic DefaultAssetLibrary_obj::__CreateEmpty() { return  new DefaultAssetLibrary_obj; }
hx::ObjectPtr< DefaultAssetLibrary_obj > DefaultAssetLibrary_obj::__new()
{  hx::ObjectPtr< DefaultAssetLibrary_obj > _result_ = new DefaultAssetLibrary_obj();
	_result_->__construct();
	return _result_;}

Dynamic DefaultAssetLibrary_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< DefaultAssetLibrary_obj > _result_ = new DefaultAssetLibrary_obj();
	_result_->__construct();
	return _result_;}

Void DefaultAssetLibrary_obj::createThreadPool( ){
{
		HX_STACK_FRAME("DefaultAssetLibrary","createThreadPool",0x7ac2c064,"DefaultAssetLibrary.createThreadPool","DefaultAssetLibrary.hx",528,0x0fc48912)
		HX_STACK_THIS(this)
		HX_STACK_LINE(528)
		::DefaultAssetLibrary _g = hx::ObjectPtr<OBJ_>(this);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(530)
		::lime::_system::ThreadPool tmp = ::lime::_system::ThreadPool_obj::__new((int)0,(int)2);		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(530)
		this->threadPool = tmp;
		HX_STACK_LINE(531)
		::lime::_system::ThreadPool tmp1 = this->threadPool;		HX_STACK_VAR(tmp1,"tmp1");

		HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_1_1,::DefaultAssetLibrary,_g)
		int __ArgCount() const { return 2; }
		Void run(::String id,Dynamic data){
			HX_STACK_FRAME("*","_Function_1_1",0x5200ed37,"*._Function_1_1","DefaultAssetLibrary.hx",531,0x0fc48912)
			HX_STACK_ARG(id,"id")
			HX_STACK_ARG(data,"data")
			{
				HX_STACK_LINE(533)
				::String tmp2 = id;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(533)
				Dynamic tmp3 = data->__Field(HX_HCSTRING("getMethod","\x17","\x80","\xb1","\x85"), hx::paccDynamic )(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(533)
				data->__FieldRef(HX_HCSTRING("result","\xdd","\x68","\x84","\x08")) = tmp3;
				HX_STACK_LINE(534)
				::String tmp4 = data->__Field(HX_HCSTRING("handler","\xca","\xaf","\xd5","\x45"), hx::paccDynamic );		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(534)
				Dynamic tmp5 = data;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(534)
				_g->threadPool->__Field(HX_HCSTRING("sendComplete","\x21","\xd2","\x84","\xc0"), hx::paccDynamic )(tmp4,tmp5);
			}
			return null();
		}
		HX_END_LOCAL_FUNC2((void))

		HX_STACK_LINE(531)
		tmp1->__Field(HX_HCSTRING("doWork","\xfc","\xa6","\x00","\x1f"), hx::paccDynamic )->__Field(HX_HCSTRING("add","\x21","\xf2","\x49","\x00"), hx::paccDynamic )( Dynamic(new _Function_1_1(_g)),null(),null());
		HX_STACK_LINE(537)
		::lime::_system::ThreadPool tmp2 = this->threadPool;		HX_STACK_VAR(tmp2,"tmp2");

		HX_BEGIN_LOCAL_FUNC_S0(hx::LocalFunc,_Function_1_2)
		int __ArgCount() const { return 2; }
		Void run(::String id,Dynamic data){
			HX_STACK_FRAME("*","_Function_1_2",0x5200ed38,"*._Function_1_2","DefaultAssetLibrary.hx",537,0x0fc48912)
			HX_STACK_ARG(id,"id")
			HX_STACK_ARG(data,"data")
			{
				HX_STACK_LINE(539)
				Dynamic tmp3 = data->__Field(HX_HCSTRING("result","\xdd","\x68","\x84","\x08"), hx::paccDynamic );		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(539)
				data->__Field(HX_HCSTRING("handler","\xca","\xaf","\xd5","\x45"), hx::paccDynamic )(tmp3);
			}
			return null();
		}
		HX_END_LOCAL_FUNC2((void))

		HX_STACK_LINE(537)
		tmp2->__Field(HX_HCSTRING("onComplete","\xf8","\xd4","\x7e","\x5d"), hx::paccDynamic )->__Field(HX_HCSTRING("add","\x21","\xf2","\x49","\x00"), hx::paccDynamic )( Dynamic(new _Function_1_2()),null(),null());
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(DefaultAssetLibrary_obj,createThreadPool,(void))

bool DefaultAssetLibrary_obj::exists( ::String id,::String type){
	HX_STACK_FRAME("DefaultAssetLibrary","exists",0x972074de,"DefaultAssetLibrary.exists","DefaultAssetLibrary.hx",546,0x0fc48912)
	HX_STACK_THIS(this)
	HX_STACK_ARG(id,"id")
	HX_STACK_ARG(type,"type")
	HX_STACK_LINE(548)
	bool tmp = (type != null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(548)
	::String tmp1;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(548)
	if ((tmp)){
		HX_STACK_LINE(548)
		tmp1 = hx::TCast< ::String >::cast(type);
	}
	else{
		HX_STACK_LINE(548)
		tmp1 = null();
	}
	HX_STACK_LINE(548)
	::String requestedType = tmp1;		HX_STACK_VAR(requestedType,"requestedType");
	HX_STACK_LINE(549)
	::haxe::ds::StringMap tmp2 = this->type;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(549)
	::String tmp3 = id;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(549)
	::String tmp4 = tmp2->get(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(549)
	::String assetType = tmp4;		HX_STACK_VAR(assetType,"assetType");
	HX_STACK_LINE(551)
	bool tmp5 = (assetType != null());		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(551)
	if ((tmp5)){
		HX_STACK_LINE(553)
		bool tmp6 = (assetType == requestedType);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(553)
		bool tmp7 = !(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(553)
		bool tmp8;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(553)
		if ((tmp7)){
			HX_STACK_LINE(553)
			bool tmp9 = (requestedType == HX_HCSTRING("SOUND","\xaf","\xc4","\xba","\xfe"));		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(553)
			bool tmp10 = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(553)
			bool tmp11 = tmp10;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(553)
			bool tmp12 = !(tmp11);		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(553)
			bool tmp13 = tmp12;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(553)
			bool tmp14 = tmp13;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(553)
			bool tmp15;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(553)
			bool tmp16 = tmp14;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(553)
			if ((tmp16)){
				HX_STACK_LINE(553)
				bool tmp17 = (requestedType == HX_HCSTRING("MUSIC","\x85","\x08","\x49","\x8e"));		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(553)
				tmp15 = tmp17;
			}
			else{
				HX_STACK_LINE(553)
				tmp15 = true;
			}
			HX_STACK_LINE(553)
			bool tmp17 = tmp15;		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(553)
			if ((tmp17)){
				HX_STACK_LINE(553)
				bool tmp18 = (assetType == HX_HCSTRING("MUSIC","\x85","\x08","\x49","\x8e"));		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(553)
				bool tmp19 = tmp18;		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(553)
				bool tmp20 = tmp19;		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(553)
				bool tmp21 = tmp20;		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(553)
				bool tmp22 = tmp21;		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(553)
				bool tmp23 = !(tmp22);		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(553)
				bool tmp24 = tmp23;		HX_STACK_VAR(tmp24,"tmp24");
				HX_STACK_LINE(553)
				bool tmp25 = tmp24;		HX_STACK_VAR(tmp25,"tmp25");
				HX_STACK_LINE(553)
				bool tmp26 = tmp25;		HX_STACK_VAR(tmp26,"tmp26");
				HX_STACK_LINE(553)
				bool tmp27 = tmp26;		HX_STACK_VAR(tmp27,"tmp27");
				HX_STACK_LINE(553)
				if ((tmp27)){
					HX_STACK_LINE(553)
					tmp8 = (assetType == HX_HCSTRING("SOUND","\xaf","\xc4","\xba","\xfe"));
				}
				else{
					HX_STACK_LINE(553)
					tmp8 = true;
				}
			}
			else{
				HX_STACK_LINE(553)
				tmp8 = false;
			}
		}
		else{
			HX_STACK_LINE(553)
			tmp8 = true;
		}
		HX_STACK_LINE(553)
		if ((tmp8)){
			HX_STACK_LINE(555)
			return true;
		}
		HX_STACK_LINE(573)
		bool tmp9 = (requestedType == HX_HCSTRING("BINARY","\x01","\x68","\x8e","\x9f"));		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(573)
		bool tmp10 = !(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(573)
		bool tmp11 = tmp10;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(573)
		bool tmp12;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(573)
		if ((tmp11)){
			HX_STACK_LINE(573)
			tmp12 = (requestedType == null());
		}
		else{
			HX_STACK_LINE(573)
			tmp12 = true;
		}
		HX_STACK_LINE(573)
		bool tmp13 = !(tmp12);		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(573)
		bool tmp14;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(573)
		if ((tmp13)){
			HX_STACK_LINE(573)
			bool tmp15 = (assetType == HX_HCSTRING("BINARY","\x01","\x68","\x8e","\x9f"));		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(573)
			bool tmp16 = tmp15;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(573)
			bool tmp17 = tmp16;		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(573)
			if ((tmp17)){
				HX_STACK_LINE(573)
				tmp14 = (requestedType == HX_HCSTRING("TEXT","\xad","\x94","\xba","\x37"));
			}
			else{
				HX_STACK_LINE(573)
				tmp14 = false;
			}
		}
		else{
			HX_STACK_LINE(573)
			tmp14 = true;
		}
		HX_STACK_LINE(573)
		if ((tmp14)){
			HX_STACK_LINE(575)
			return true;
		}
	}
	HX_STACK_LINE(583)
	return false;
}


::lime::audio::AudioBuffer DefaultAssetLibrary_obj::getAudioBuffer( ::String id){
	HX_STACK_FRAME("DefaultAssetLibrary","getAudioBuffer",0xeeb56a82,"DefaultAssetLibrary.getAudioBuffer","DefaultAssetLibrary.hx",588,0x0fc48912)
	HX_STACK_THIS(this)
	HX_STACK_ARG(id,"id")
	HX_STACK_LINE(603)
	::haxe::ds::StringMap tmp = this->className;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(603)
	::String tmp1 = id;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(603)
	bool tmp2 = tmp->exists(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(603)
	if ((tmp2)){
		HX_STACK_LINE(603)
		::haxe::ds::StringMap tmp3 = this->className;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(603)
		::String tmp4 = id;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(603)
		Dynamic tmp5 = tmp3->get(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(603)
		Dynamic tmp6 = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(603)
		Dynamic tmp7 = ::Type_obj::createInstance(tmp6,cpp::ArrayBase_obj::__new());		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(603)
		::lime::utils::ByteArray tmp8;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(603)
		tmp8 = hx::TCast< ::lime::utils::ByteArray >::cast(tmp7);
		HX_STACK_LINE(603)
		::lime::audio::AudioBuffer tmp9 = ::lime::audio::AudioBuffer_obj::fromBytes(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(603)
		return tmp9;
	}
	else{
		HX_STACK_LINE(604)
		::haxe::ds::StringMap tmp3 = this->path;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(604)
		::String tmp4 = id;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(604)
		::String tmp5 = tmp3->get(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(604)
		::String tmp6 = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(604)
		::lime::audio::AudioBuffer tmp7 = ::lime::audio::AudioBuffer_obj::fromFile(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(604)
		return tmp7;
	}
	HX_STACK_LINE(603)
	return null();
}


::lime::utils::ByteArray DefaultAssetLibrary_obj::getBytes( ::String id){
	HX_STACK_FRAME("DefaultAssetLibrary","getBytes",0x86b4b377,"DefaultAssetLibrary.getBytes","DefaultAssetLibrary.hx",611,0x0fc48912)
	HX_STACK_THIS(this)
	HX_STACK_ARG(id,"id")
	HX_STACK_LINE(674)
	::haxe::ds::StringMap tmp = this->className;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(674)
	::String tmp1 = id;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(674)
	bool tmp2 = tmp->exists(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(674)
	if ((tmp2)){
		HX_STACK_LINE(674)
		::haxe::ds::StringMap tmp3 = this->className;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(674)
		::String tmp4 = id;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(674)
		Dynamic tmp5 = tmp3->get(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(674)
		Dynamic tmp6 = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(674)
		Dynamic tmp7 = ::Type_obj::createInstance(tmp6,cpp::ArrayBase_obj::__new());		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(674)
		::lime::utils::ByteArray tmp8;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(674)
		tmp8 = hx::TCast< ::lime::utils::ByteArray >::cast(tmp7);
		HX_STACK_LINE(674)
		return tmp8;
	}
	else{
		HX_STACK_LINE(675)
		::haxe::ds::StringMap tmp3 = this->path;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(675)
		::String tmp4 = id;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(675)
		::String tmp5 = tmp3->get(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(675)
		::String tmp6 = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(675)
		::lime::utils::ByteArray tmp7 = ::lime::utils::ByteArray_obj::readFile(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(675)
		return tmp7;
	}
	HX_STACK_LINE(674)
	return null();
}


::lime::text::Font DefaultAssetLibrary_obj::getFont( ::String id){
	HX_STACK_FRAME("DefaultAssetLibrary","getFont",0x974ed843,"DefaultAssetLibrary.getFont","DefaultAssetLibrary.hx",682,0x0fc48912)
	HX_STACK_THIS(this)
	HX_STACK_ARG(id,"id")
	HX_STACK_LINE(698)
	::haxe::ds::StringMap tmp = this->className;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(698)
	::String tmp1 = id;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(698)
	bool tmp2 = tmp->exists(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(698)
	if ((tmp2)){
		HX_STACK_LINE(700)
		::haxe::ds::StringMap tmp3 = this->className;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(700)
		::String tmp4 = id;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(700)
		Dynamic tmp5 = tmp3->get(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(700)
		Dynamic fontClass = tmp5;		HX_STACK_VAR(fontClass,"fontClass");
		HX_STACK_LINE(701)
		Dynamic tmp6 = fontClass;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(701)
		Dynamic tmp7 = ::Type_obj::createInstance(tmp6,cpp::ArrayBase_obj::__new());		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(701)
		::lime::text::Font tmp8;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(701)
		tmp8 = hx::TCast< ::lime::text::Font >::cast(tmp7);
		HX_STACK_LINE(701)
		return tmp8;
	}
	else{
		HX_STACK_LINE(705)
		::haxe::ds::StringMap tmp3 = this->path;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(705)
		::String tmp4 = id;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(705)
		::String tmp5 = tmp3->get(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(705)
		::String tmp6 = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(705)
		::lime::text::Font tmp7 = ::lime::text::Font_obj::fromFile(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(705)
		return tmp7;
	}
	HX_STACK_LINE(698)
	return null();
}


::lime::graphics::Image DefaultAssetLibrary_obj::getImage( ::String id){
	HX_STACK_FRAME("DefaultAssetLibrary","getImage",0x8685ca67,"DefaultAssetLibrary.getImage","DefaultAssetLibrary.hx",714,0x0fc48912)
	HX_STACK_THIS(this)
	HX_STACK_ARG(id,"id")
	HX_STACK_LINE(726)
	::haxe::ds::StringMap tmp = this->className;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(726)
	::String tmp1 = id;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(726)
	bool tmp2 = tmp->exists(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(726)
	if ((tmp2)){
		HX_STACK_LINE(728)
		::haxe::ds::StringMap tmp3 = this->className;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(728)
		::String tmp4 = id;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(728)
		Dynamic tmp5 = tmp3->get(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(728)
		Dynamic fontClass = tmp5;		HX_STACK_VAR(fontClass,"fontClass");
		HX_STACK_LINE(729)
		Dynamic tmp6 = fontClass;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(729)
		Dynamic tmp7 = ::Type_obj::createInstance(tmp6,cpp::ArrayBase_obj::__new());		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(729)
		::lime::graphics::Image tmp8;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(729)
		tmp8 = hx::TCast< ::lime::graphics::Image >::cast(tmp7);
		HX_STACK_LINE(729)
		return tmp8;
	}
	else{
		HX_STACK_LINE(733)
		::haxe::ds::StringMap tmp3 = this->path;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(733)
		::String tmp4 = id;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(733)
		::String tmp5 = tmp3->get(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(733)
		::String tmp6 = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(733)
		::lime::graphics::Image tmp7 = ::lime::graphics::Image_obj::fromFile(tmp6,null(),null());		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(733)
		return tmp7;
	}
	HX_STACK_LINE(726)
	return null();
}


::String DefaultAssetLibrary_obj::getPath( ::String id){
	HX_STACK_FRAME("DefaultAssetLibrary","getPath",0x9de06019,"DefaultAssetLibrary.getPath","DefaultAssetLibrary.hx",772,0x0fc48912)
	HX_STACK_THIS(this)
	HX_STACK_ARG(id,"id")
	HX_STACK_LINE(780)
	::haxe::ds::StringMap tmp = this->path;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(780)
	::String tmp1 = id;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(780)
	::String tmp2 = tmp->get(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(780)
	::String tmp3 = tmp2;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(780)
	return tmp3;
}


::String DefaultAssetLibrary_obj::getText( ::String id){
	HX_STACK_FRAME("DefaultAssetLibrary","getText",0xa0884721,"DefaultAssetLibrary.getText","DefaultAssetLibrary.hx",787,0x0fc48912)
	HX_STACK_THIS(this)
	HX_STACK_ARG(id,"id")
	HX_STACK_LINE(828)
	::String tmp = id;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(828)
	::lime::utils::ByteArray tmp1 = this->getBytes(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(828)
	::lime::utils::ByteArray bytes = tmp1;		HX_STACK_VAR(bytes,"bytes");
	HX_STACK_LINE(830)
	bool tmp2 = (bytes == null());		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(830)
	if ((tmp2)){
		HX_STACK_LINE(832)
		return null();
	}
	else{
		HX_STACK_LINE(836)
		int tmp3 = bytes->length;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(836)
		::String tmp4 = bytes->readUTFBytes(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(836)
		return tmp4;
	}
	HX_STACK_LINE(830)
	return null();
}


bool DefaultAssetLibrary_obj::isLocal( ::String id,::String type){
	HX_STACK_FRAME("DefaultAssetLibrary","isLocal",0x968237df,"DefaultAssetLibrary.isLocal","DefaultAssetLibrary.hx",845,0x0fc48912)
	HX_STACK_THIS(this)
	HX_STACK_ARG(id,"id")
	HX_STACK_ARG(type,"type")
	HX_STACK_LINE(847)
	bool tmp = (type != null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(847)
	::String tmp1;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(847)
	if ((tmp)){
		HX_STACK_LINE(847)
		tmp1 = hx::TCast< ::String >::cast(type);
	}
	else{
		HX_STACK_LINE(847)
		tmp1 = null();
	}
	HX_STACK_LINE(847)
	::String requestedType = tmp1;		HX_STACK_VAR(requestedType,"requestedType");
	HX_STACK_LINE(859)
	return true;
}


Array< ::String > DefaultAssetLibrary_obj::list( ::String type){
	HX_STACK_FRAME("DefaultAssetLibrary","list",0xf3604ee0,"DefaultAssetLibrary.list","DefaultAssetLibrary.hx",864,0x0fc48912)
	HX_STACK_THIS(this)
	HX_STACK_ARG(type,"type")
	HX_STACK_LINE(866)
	bool tmp = (type != null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(866)
	::String tmp1;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(866)
	if ((tmp)){
		HX_STACK_LINE(866)
		tmp1 = hx::TCast< ::String >::cast(type);
	}
	else{
		HX_STACK_LINE(866)
		tmp1 = null();
	}
	HX_STACK_LINE(866)
	::String requestedType = tmp1;		HX_STACK_VAR(requestedType,"requestedType");
	HX_STACK_LINE(867)
	Array< ::String > items = Array_obj< ::String >::__new();		HX_STACK_VAR(items,"items");
	HX_STACK_LINE(869)
	::haxe::ds::StringMap tmp2 = this->type;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(869)
	Dynamic tmp3 = tmp2->keys();		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(869)
	for(::cpp::FastIterator_obj< ::String > *__it = ::cpp::CreateFastIterator< ::String >(tmp3);  __it->hasNext(); ){
		::String id = __it->next();
		{
			HX_STACK_LINE(871)
			bool tmp4 = (requestedType == null());		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(871)
			bool tmp5 = !(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(871)
			bool tmp6;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(871)
			if ((tmp5)){
				HX_STACK_LINE(871)
				::String tmp7 = id;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(871)
				::String tmp8 = type;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(871)
				::String tmp9 = tmp7;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(871)
				::String tmp10 = tmp8;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(871)
				tmp6 = this->exists(tmp9,tmp10);
			}
			else{
				HX_STACK_LINE(871)
				tmp6 = true;
			}
			HX_STACK_LINE(871)
			if ((tmp6)){
				HX_STACK_LINE(873)
				::String tmp7 = id;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(873)
				items->push(tmp7);
			}
		}
;
	}
	HX_STACK_LINE(879)
	return items;
}


Void DefaultAssetLibrary_obj::loadAudioBuffer( ::String id,Dynamic handler){
{
		HX_STACK_FRAME("DefaultAssetLibrary","loadAudioBuffer",0xf38e2aae,"DefaultAssetLibrary.loadAudioBuffer","DefaultAssetLibrary.hx",884,0x0fc48912)
		HX_STACK_THIS(this)
		HX_STACK_ARG(id,"id")
		HX_STACK_ARG(handler,"handler")
		HX_STACK_LINE(909)
		::String tmp = id;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(909)
		::lime::audio::AudioBuffer tmp1 = this->getAudioBuffer(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(909)
		handler(tmp1).Cast< Void >();
	}
return null();
}


Void DefaultAssetLibrary_obj::loadBytes( ::String id,Dynamic handler){
{
		HX_STACK_FRAME("DefaultAssetLibrary","loadBytes",0x8c71caa3,"DefaultAssetLibrary.loadBytes","DefaultAssetLibrary.hx",916,0x0fc48912)
		HX_STACK_THIS(this)
		HX_STACK_ARG(id,"id")
		HX_STACK_ARG(handler,"handler")
		HX_STACK_LINE(962)
		::lime::_system::ThreadPool tmp = this->threadPool;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(962)
		bool tmp1 = (tmp == null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(962)
		if ((tmp1)){
			HX_STACK_LINE(964)
			this->createThreadPool();
		}
		HX_STACK_LINE(968)
		::lime::_system::ThreadPool tmp2 = this->threadPool;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(968)
		::String tmp3 = id;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(968)
		Dynamic tmp4 = handler;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(968)
		Dynamic tmp5 = this->getBytes_dyn();		HX_STACK_VAR(tmp5,"tmp5");
		struct _Function_1_1{
			inline static Dynamic Block( Dynamic &tmp5,Dynamic &tmp4){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","DefaultAssetLibrary.hx",968,0x0fc48912)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_HCSTRING("handler","\xca","\xaf","\xd5","\x45") , tmp4,false);
					__result->Add(HX_HCSTRING("getMethod","\x17","\x80","\xb1","\x85") , tmp5,false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(968)
		Dynamic tmp6 = _Function_1_1::Block(tmp5,tmp4);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(968)
		tmp2->__Field(HX_HCSTRING("queue","\x91","\x8d","\xea","\x5d"), hx::paccDynamic )(tmp3,tmp6);
	}
return null();
}


Void DefaultAssetLibrary_obj::loadImage( ::String id,Dynamic handler){
{
		HX_STACK_FRAME("DefaultAssetLibrary","loadImage",0x8c42e193,"DefaultAssetLibrary.loadImage","DefaultAssetLibrary.hx",975,0x0fc48912)
		HX_STACK_THIS(this)
		HX_STACK_ARG(id,"id")
		HX_STACK_ARG(handler,"handler")
		HX_STACK_LINE(1016)
		::lime::_system::ThreadPool tmp = this->threadPool;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(1016)
		bool tmp1 = (tmp == null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(1016)
		if ((tmp1)){
			HX_STACK_LINE(1018)
			this->createThreadPool();
		}
		HX_STACK_LINE(1022)
		::lime::_system::ThreadPool tmp2 = this->threadPool;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(1022)
		::String tmp3 = id;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(1022)
		Dynamic tmp4 = handler;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(1022)
		Dynamic tmp5 = this->getImage_dyn();		HX_STACK_VAR(tmp5,"tmp5");
		struct _Function_1_1{
			inline static Dynamic Block( Dynamic &tmp5,Dynamic &tmp4){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","DefaultAssetLibrary.hx",1022,0x0fc48912)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_HCSTRING("handler","\xca","\xaf","\xd5","\x45") , tmp4,false);
					__result->Add(HX_HCSTRING("getMethod","\x17","\x80","\xb1","\x85") , tmp5,false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(1022)
		Dynamic tmp6 = _Function_1_1::Block(tmp5,tmp4);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(1022)
		tmp2->__Field(HX_HCSTRING("queue","\x91","\x8d","\xea","\x5d"), hx::paccDynamic )(tmp3,tmp6);
	}
return null();
}


Void DefaultAssetLibrary_obj::loadManifest( ){
{
		HX_STACK_FRAME("DefaultAssetLibrary","loadManifest",0x6f596c77,"DefaultAssetLibrary.loadManifest","DefaultAssetLibrary.hx",1032,0x0fc48912)
		HX_STACK_THIS(this)
		HX_STACK_LINE(1032)
		try
		{
		HX_STACK_CATCHABLE(Dynamic, 0);
		{
			HX_STACK_LINE(1045)
			::lime::utils::ByteArray tmp = ::lime::utils::ByteArray_obj::readFile(HX_HCSTRING("manifest","\xaf","\xfb","\x29","\xd0"));		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(1045)
			::lime::utils::ByteArray bytes = tmp;		HX_STACK_VAR(bytes,"bytes");
			HX_STACK_LINE(1048)
			bool tmp1 = (bytes != null());		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(1048)
			if ((tmp1)){
				HX_STACK_LINE(1050)
				bytes->position = (int)0;
				HX_STACK_LINE(1052)
				bool tmp2 = (bytes->length > (int)0);		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(1052)
				if ((tmp2)){
					HX_STACK_LINE(1054)
					int tmp3 = bytes->length;		HX_STACK_VAR(tmp3,"tmp3");
					HX_STACK_LINE(1054)
					::String tmp4 = bytes->readUTFBytes(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(1054)
					::String data = tmp4;		HX_STACK_VAR(data,"data");
					HX_STACK_LINE(1056)
					bool tmp5 = (data != null());		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(1056)
					bool tmp6;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(1056)
					if ((tmp5)){
						HX_STACK_LINE(1056)
						tmp6 = (data.length > (int)0);
					}
					else{
						HX_STACK_LINE(1056)
						tmp6 = false;
					}
					HX_STACK_LINE(1056)
					if ((tmp6)){
						HX_STACK_LINE(1058)
						::String tmp7 = data;		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(1058)
						Dynamic tmp8 = ::haxe::Unserializer_obj::run(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(1058)
						cpp::ArrayBase manifest = tmp8;		HX_STACK_VAR(manifest,"manifest");
						HX_STACK_LINE(1060)
						{
							HX_STACK_LINE(1060)
							int _g = (int)0;		HX_STACK_VAR(_g,"_g");
							HX_STACK_LINE(1060)
							while((true)){
								HX_STACK_LINE(1060)
								bool tmp9 = (_g < manifest->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic ));		HX_STACK_VAR(tmp9,"tmp9");
								HX_STACK_LINE(1060)
								bool tmp10 = !(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
								HX_STACK_LINE(1060)
								if ((tmp10)){
									HX_STACK_LINE(1060)
									break;
								}
								HX_STACK_LINE(1060)
								Dynamic tmp11 = manifest->__GetItem(_g);		HX_STACK_VAR(tmp11,"tmp11");
								HX_STACK_LINE(1060)
								Dynamic asset = tmp11;		HX_STACK_VAR(asset,"asset");
								HX_STACK_LINE(1060)
								++(_g);
								HX_STACK_LINE(1062)
								bool tmp12;		HX_STACK_VAR(tmp12,"tmp12");
								HX_STACK_LINE(1062)
								{
									HX_STACK_LINE(1062)
									::String key = asset->__Field(HX_HCSTRING("id","\xdb","\x5b","\x00","\x00"), hx::paccDynamic );		HX_STACK_VAR(key,"key");
									HX_STACK_LINE(1062)
									::haxe::ds::StringMap tmp13 = this->className;		HX_STACK_VAR(tmp13,"tmp13");
									HX_STACK_LINE(1062)
									::String tmp14 = key;		HX_STACK_VAR(tmp14,"tmp14");
									HX_STACK_LINE(1062)
									tmp12 = tmp13->exists(tmp14);
								}
								HX_STACK_LINE(1062)
								bool tmp13 = !(tmp12);		HX_STACK_VAR(tmp13,"tmp13");
								HX_STACK_LINE(1062)
								if ((tmp13)){
									HX_STACK_LINE(1067)
									{
										HX_STACK_LINE(1067)
										::String key = asset->__Field(HX_HCSTRING("id","\xdb","\x5b","\x00","\x00"), hx::paccDynamic );		HX_STACK_VAR(key,"key");
										HX_STACK_LINE(1067)
										::String value = asset->__Field(HX_HCSTRING("path","\xa5","\xe5","\x51","\x4a"), hx::paccDynamic );		HX_STACK_VAR(value,"value");
										HX_STACK_LINE(1067)
										::haxe::ds::StringMap tmp14 = this->path;		HX_STACK_VAR(tmp14,"tmp14");
										HX_STACK_LINE(1067)
										::String tmp15 = key;		HX_STACK_VAR(tmp15,"tmp15");
										HX_STACK_LINE(1067)
										::String tmp16 = value;		HX_STACK_VAR(tmp16,"tmp16");
										HX_STACK_LINE(1067)
										tmp14->set(tmp15,tmp16);
									}
									HX_STACK_LINE(1069)
									{
										HX_STACK_LINE(1069)
										::String key = asset->__Field(HX_HCSTRING("id","\xdb","\x5b","\x00","\x00"), hx::paccDynamic );		HX_STACK_VAR(key,"key");
										HX_STACK_LINE(1069)
										::String tmp14;		HX_STACK_VAR(tmp14,"tmp14");
										HX_STACK_LINE(1069)
										tmp14 = hx::TCast< ::String >::cast(asset->__Field(HX_HCSTRING("type","\xba","\xf2","\x08","\x4d"), hx::paccDynamic ));
										HX_STACK_LINE(1069)
										::String value = tmp14;		HX_STACK_VAR(value,"value");
										HX_STACK_LINE(1069)
										::haxe::ds::StringMap tmp15 = this->type;		HX_STACK_VAR(tmp15,"tmp15");
										HX_STACK_LINE(1069)
										::String tmp16 = key;		HX_STACK_VAR(tmp16,"tmp16");
										HX_STACK_LINE(1069)
										::String tmp17 = value;		HX_STACK_VAR(tmp17,"tmp17");
										HX_STACK_LINE(1069)
										tmp15->set(tmp16,tmp17);
									}
								}
							}
						}
					}
				}
			}
			else{
				HX_STACK_LINE(1081)
				Dynamic tmp2 = hx::SourceInfo(HX_HCSTRING("DefaultAssetLibrary.hx","\x12","\x89","\xc4","\x0f"),1081,HX_HCSTRING("DefaultAssetLibrary","\x2c","\x3d","\x78","\x3a"),HX_HCSTRING("loadManifest","\xf5","\xe7","\x92","\x89"));		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(1081)
				::haxe::Log_obj::trace(HX_HCSTRING("Warning: Could not load asset manifest (bytes was null)","\x83","\x9c","\x5b","\x2e"),tmp2);
			}
		}
		}
		catch(Dynamic __e){
			{
				HX_STACK_BEGIN_CATCH
				Dynamic e = __e;{
					HX_STACK_LINE(1087)
					Dynamic tmp = e;		HX_STACK_VAR(tmp,"tmp");
					HX_STACK_LINE(1087)
					::String tmp1 = ::Std_obj::string(tmp);		HX_STACK_VAR(tmp1,"tmp1");
					HX_STACK_LINE(1087)
					::String tmp2 = (HX_HCSTRING("Warning: Could not load asset manifest (","\x73","\x7e","\xfd","\x21") + tmp1);		HX_STACK_VAR(tmp2,"tmp2");
					HX_STACK_LINE(1087)
					::String tmp3 = (tmp2 + HX_HCSTRING(")","\x29","\x00","\x00","\x00"));		HX_STACK_VAR(tmp3,"tmp3");
					HX_STACK_LINE(1087)
					Dynamic tmp4 = hx::SourceInfo(HX_HCSTRING("DefaultAssetLibrary.hx","\x12","\x89","\xc4","\x0f"),1087,HX_HCSTRING("DefaultAssetLibrary","\x2c","\x3d","\x78","\x3a"),HX_HCSTRING("loadManifest","\xf5","\xe7","\x92","\x89"));		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(1087)
					::haxe::Log_obj::trace(tmp3,tmp4);
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(DefaultAssetLibrary_obj,loadManifest,(void))

Void DefaultAssetLibrary_obj::loadText( ::String id,Dynamic handler){
{
		HX_STACK_FRAME("DefaultAssetLibrary","loadText",0x26df3975,"DefaultAssetLibrary.loadText","DefaultAssetLibrary.hx",1124,0x0fc48912)
		HX_STACK_THIS(this)
		HX_STACK_ARG(id,"id")
		HX_STACK_ARG(handler,"handler")

		HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_1_1,Dynamic,handler)
		int __ArgCount() const { return 1; }
		Void run(::lime::utils::ByteArray bytes){
			HX_STACK_FRAME("*","_Function_1_1",0x5200ed37,"*._Function_1_1","DefaultAssetLibrary.hx",1147,0x0fc48912)
			HX_STACK_ARG(bytes,"bytes")
			{
				HX_STACK_LINE(1149)
				bool tmp = (bytes == null());		HX_STACK_VAR(tmp,"tmp");
				HX_STACK_LINE(1149)
				if ((tmp)){
					HX_STACK_LINE(1151)
					handler(null()).Cast< Void >();
				}
				else{
					HX_STACK_LINE(1155)
					int tmp1 = bytes->length;		HX_STACK_VAR(tmp1,"tmp1");
					HX_STACK_LINE(1155)
					::String tmp2 = bytes->readUTFBytes(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
					HX_STACK_LINE(1155)
					handler(tmp2).Cast< Void >();
				}
			}
			return null();
		}
		HX_END_LOCAL_FUNC1((void))

		HX_STACK_LINE(1147)
		Dynamic callback =  Dynamic(new _Function_1_1(handler));		HX_STACK_VAR(callback,"callback");
		HX_STACK_LINE(1161)
		::String tmp = id;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(1161)
		Dynamic tmp1 = callback;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(1161)
		this->loadBytes(tmp,tmp1);
	}
return null();
}



DefaultAssetLibrary_obj::DefaultAssetLibrary_obj()
{
}

void DefaultAssetLibrary_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(DefaultAssetLibrary);
	HX_MARK_MEMBER_NAME(className,"className");
	HX_MARK_MEMBER_NAME(path,"path");
	HX_MARK_MEMBER_NAME(type,"type");
	HX_MARK_MEMBER_NAME(lastModified,"lastModified");
	HX_MARK_MEMBER_NAME(threadPool,"threadPool");
	HX_MARK_MEMBER_NAME(timer,"timer");
	::lime::AssetLibrary_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void DefaultAssetLibrary_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(className,"className");
	HX_VISIT_MEMBER_NAME(path,"path");
	HX_VISIT_MEMBER_NAME(type,"type");
	HX_VISIT_MEMBER_NAME(lastModified,"lastModified");
	HX_VISIT_MEMBER_NAME(threadPool,"threadPool");
	HX_VISIT_MEMBER_NAME(timer,"timer");
	::lime::AssetLibrary_obj::__Visit(HX_VISIT_ARG);
}

Dynamic DefaultAssetLibrary_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"path") ) { return path; }
		if (HX_FIELD_EQ(inName,"type") ) { return type; }
		if (HX_FIELD_EQ(inName,"list") ) { return list_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"timer") ) { return timer; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"exists") ) { return exists_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"getFont") ) { return getFont_dyn(); }
		if (HX_FIELD_EQ(inName,"getPath") ) { return getPath_dyn(); }
		if (HX_FIELD_EQ(inName,"getText") ) { return getText_dyn(); }
		if (HX_FIELD_EQ(inName,"isLocal") ) { return isLocal_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"getBytes") ) { return getBytes_dyn(); }
		if (HX_FIELD_EQ(inName,"getImage") ) { return getImage_dyn(); }
		if (HX_FIELD_EQ(inName,"loadText") ) { return loadText_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"className") ) { return className; }
		if (HX_FIELD_EQ(inName,"loadBytes") ) { return loadBytes_dyn(); }
		if (HX_FIELD_EQ(inName,"loadImage") ) { return loadImage_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"threadPool") ) { return threadPool; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"lastModified") ) { return lastModified; }
		if (HX_FIELD_EQ(inName,"loadManifest") ) { return loadManifest_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"getAudioBuffer") ) { return getAudioBuffer_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"loadAudioBuffer") ) { return loadAudioBuffer_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"createThreadPool") ) { return createThreadPool_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic DefaultAssetLibrary_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"path") ) { path=inValue.Cast< ::haxe::ds::StringMap >(); return inValue; }
		if (HX_FIELD_EQ(inName,"type") ) { type=inValue.Cast< ::haxe::ds::StringMap >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"timer") ) { timer=inValue.Cast< ::haxe::Timer >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"className") ) { className=inValue.Cast< ::haxe::ds::StringMap >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"threadPool") ) { threadPool=inValue.Cast< ::lime::_system::ThreadPool >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"lastModified") ) { lastModified=inValue.Cast< Float >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool DefaultAssetLibrary_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	return false;
}

void DefaultAssetLibrary_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("className","\xa3","\x92","\x3d","\xdc"));
	outFields->push(HX_HCSTRING("path","\xa5","\xe5","\x51","\x4a"));
	outFields->push(HX_HCSTRING("type","\xba","\xf2","\x08","\x4d"));
	outFields->push(HX_HCSTRING("lastModified","\xbf","\xe7","\x59","\x78"));
	outFields->push(HX_HCSTRING("threadPool","\xc6","\x54","\x25","\x46"));
	outFields->push(HX_HCSTRING("timer","\xc5","\xbf","\x35","\x10"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::haxe::ds::StringMap*/ ,(int)offsetof(DefaultAssetLibrary_obj,className),HX_HCSTRING("className","\xa3","\x92","\x3d","\xdc")},
	{hx::fsObject /*::haxe::ds::StringMap*/ ,(int)offsetof(DefaultAssetLibrary_obj,path),HX_HCSTRING("path","\xa5","\xe5","\x51","\x4a")},
	{hx::fsObject /*::haxe::ds::StringMap*/ ,(int)offsetof(DefaultAssetLibrary_obj,type),HX_HCSTRING("type","\xba","\xf2","\x08","\x4d")},
	{hx::fsFloat,(int)offsetof(DefaultAssetLibrary_obj,lastModified),HX_HCSTRING("lastModified","\xbf","\xe7","\x59","\x78")},
	{hx::fsObject /*::lime::_system::ThreadPool*/ ,(int)offsetof(DefaultAssetLibrary_obj,threadPool),HX_HCSTRING("threadPool","\xc6","\x54","\x25","\x46")},
	{hx::fsObject /*::haxe::Timer*/ ,(int)offsetof(DefaultAssetLibrary_obj,timer),HX_HCSTRING("timer","\xc5","\xbf","\x35","\x10")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("className","\xa3","\x92","\x3d","\xdc"),
	HX_HCSTRING("path","\xa5","\xe5","\x51","\x4a"),
	HX_HCSTRING("type","\xba","\xf2","\x08","\x4d"),
	HX_HCSTRING("lastModified","\xbf","\xe7","\x59","\x78"),
	HX_HCSTRING("threadPool","\xc6","\x54","\x25","\x46"),
	HX_HCSTRING("timer","\xc5","\xbf","\x35","\x10"),
	HX_HCSTRING("createThreadPool","\xe2","\xd2","\x52","\x7b"),
	HX_HCSTRING("exists","\xdc","\x1d","\xe0","\xbf"),
	HX_HCSTRING("getAudioBuffer","\x80","\x41","\xe3","\x26"),
	HX_HCSTRING("getBytes","\xf5","\x17","\x6f","\x1d"),
	HX_HCSTRING("getFont","\x85","\x0d","\x43","\x16"),
	HX_HCSTRING("getImage","\xe5","\x2e","\x40","\x1d"),
	HX_HCSTRING("getPath","\x5b","\x95","\xd4","\x1c"),
	HX_HCSTRING("getText","\x63","\x7c","\x7c","\x1f"),
	HX_HCSTRING("isLocal","\x21","\x6d","\x76","\x15"),
	HX_HCSTRING("list","\x5e","\x1c","\xb3","\x47"),
	HX_HCSTRING("loadAudioBuffer","\xf0","\x71","\x7c","\xe3"),
	HX_HCSTRING("loadBytes","\x65","\x54","\xcf","\xd8"),
	HX_HCSTRING("loadImage","\x55","\x6b","\xa0","\xd8"),
	HX_HCSTRING("loadManifest","\xf5","\xe7","\x92","\x89"),
	HX_HCSTRING("loadText","\xf3","\x9d","\x99","\xbd"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(DefaultAssetLibrary_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(DefaultAssetLibrary_obj::__mClass,"__mClass");
};

#endif

hx::Class DefaultAssetLibrary_obj::__mClass;

void DefaultAssetLibrary_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("DefaultAssetLibrary","\x2c","\x3d","\x78","\x3a");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &DefaultAssetLibrary_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< DefaultAssetLibrary_obj >;
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

