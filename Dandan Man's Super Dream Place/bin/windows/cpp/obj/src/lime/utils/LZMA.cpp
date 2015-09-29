#include <hxcpp.h>

#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
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
#ifndef INCLUDED_lime_utils_LZMA
#include <lime/utils/LZMA.h>
#endif
namespace lime{
namespace utils{

Void LZMA_obj::__construct()
{
	return null();
}

//LZMA_obj::~LZMA_obj() { }

Dynamic LZMA_obj::__CreateEmpty() { return  new LZMA_obj; }
hx::ObjectPtr< LZMA_obj > LZMA_obj::__new()
{  hx::ObjectPtr< LZMA_obj > _result_ = new LZMA_obj();
	_result_->__construct();
	return _result_;}

Dynamic LZMA_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< LZMA_obj > _result_ = new LZMA_obj();
	_result_->__construct();
	return _result_;}

::lime::utils::ByteArray LZMA_obj::decode( ::lime::utils::ByteArray bytes){
	HX_STACK_FRAME("lime.utils.LZMA","decode",0x452a0d64,"lime.utils.LZMA.decode","lime/utils/LZMA.hx",11,0x8b46fdc4)
	HX_STACK_ARG(bytes,"bytes")
	HX_STACK_LINE(14)
	::lime::utils::ByteArray tmp = bytes;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(14)
	Dynamic tmp1 = ::lime::utils::LZMA_obj::lime_lzma_decode(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(14)
	Dynamic data = tmp1;		HX_STACK_VAR(data,"data");
	HX_STACK_LINE(15)
	::haxe::io::Bytes tmp2 = ::haxe::io::Bytes_obj::__new(data->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic ),data->__Field(HX_HCSTRING("b","\x62","\x00","\x00","\x00"), hx::paccDynamic ));		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(15)
	::lime::utils::ByteArray tmp3 = ::lime::utils::ByteArray_obj::fromBytes(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(15)
	return tmp3;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(LZMA_obj,decode,return )

::lime::utils::ByteArray LZMA_obj::encode( ::lime::utils::ByteArray bytes){
	HX_STACK_FRAME("lime.utils.LZMA","encode",0xda20a24c,"lime.utils.LZMA.encode","lime/utils/LZMA.hx",23,0x8b46fdc4)
	HX_STACK_ARG(bytes,"bytes")
	HX_STACK_LINE(26)
	::lime::utils::ByteArray tmp = bytes;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(26)
	Dynamic tmp1 = ::lime::utils::LZMA_obj::lime_lzma_encode(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(26)
	Dynamic data = tmp1;		HX_STACK_VAR(data,"data");
	HX_STACK_LINE(27)
	::haxe::io::Bytes tmp2 = ::haxe::io::Bytes_obj::__new(data->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic ),data->__Field(HX_HCSTRING("b","\x62","\x00","\x00","\x00"), hx::paccDynamic ));		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(27)
	::lime::utils::ByteArray tmp3 = ::lime::utils::ByteArray_obj::fromBytes(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(27)
	return tmp3;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(LZMA_obj,encode,return )

Dynamic LZMA_obj::lime_lzma_decode;

Dynamic LZMA_obj::lime_lzma_encode;


LZMA_obj::LZMA_obj()
{
}

bool LZMA_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"decode") ) { outValue = decode_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"encode") ) { outValue = encode_dyn(); return true;  }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"lime_lzma_decode") ) { outValue = lime_lzma_decode; return true;  }
		if (HX_FIELD_EQ(inName,"lime_lzma_encode") ) { outValue = lime_lzma_encode; return true;  }
	}
	return false;
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
static hx::StaticInfo sStaticStorageInfo[] = {
	{hx::fsObject /*Dynamic*/ ,(void *) &LZMA_obj::lime_lzma_decode,HX_HCSTRING("lime_lzma_decode","\x41","\x52","\xeb","\x43")},
	{hx::fsObject /*Dynamic*/ ,(void *) &LZMA_obj::lime_lzma_encode,HX_HCSTRING("lime_lzma_encode","\x29","\xe7","\xe1","\xd8")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(LZMA_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(LZMA_obj::lime_lzma_decode,"lime_lzma_decode");
	HX_MARK_MEMBER_NAME(LZMA_obj::lime_lzma_encode,"lime_lzma_encode");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(LZMA_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(LZMA_obj::lime_lzma_decode,"lime_lzma_decode");
	HX_VISIT_MEMBER_NAME(LZMA_obj::lime_lzma_encode,"lime_lzma_encode");
};

#endif

hx::Class LZMA_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("decode","\x2e","\x5d","\xed","\x64"),
	HX_HCSTRING("encode","\x16","\xf2","\xe3","\xf9"),
	HX_HCSTRING("lime_lzma_decode","\x41","\x52","\xeb","\x43"),
	HX_HCSTRING("lime_lzma_encode","\x29","\xe7","\xe1","\xd8"),
	::String(null()) };

void LZMA_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("lime.utils.LZMA","\x78","\xc5","\xd6","\xa0");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &LZMA_obj::__GetStatic;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< LZMA_obj >;
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

void LZMA_obj::__boot()
{
	lime_lzma_decode= ::lime::_system::System_obj::load(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_lzma_decode","\x41","\x52","\xeb","\x43"),(int)1,null());
	lime_lzma_encode= ::lime::_system::System_obj::load(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_lzma_encode","\x29","\xe7","\xe1","\xd8"),(int)1,null());
}

} // end namespace lime
} // end namespace utils
