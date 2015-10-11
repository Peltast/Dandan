#include <hxcpp.h>

#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
#endif
#ifndef INCLUDED_lime_graphics_Image
#include <lime/graphics/Image.h>
#endif
#ifndef INCLUDED_lime_graphics_ImageBuffer
#include <lime/graphics/ImageBuffer.h>
#endif
#ifndef INCLUDED_lime_graphics_ImageType
#include <lime/graphics/ImageType.h>
#endif
#ifndef INCLUDED_lime_graphics_format_JPEG
#include <lime/graphics/format/JPEG.h>
#endif
#ifndef INCLUDED_lime_system_System
#include <lime/system/System.h>
#endif
#ifndef INCLUDED_lime_utils_ArrayBufferView
#include <lime/utils/ArrayBufferView.h>
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
namespace graphics{
namespace format{

Void JPEG_obj::__construct()
{
	return null();
}

//JPEG_obj::~JPEG_obj() { }

Dynamic JPEG_obj::__CreateEmpty() { return  new JPEG_obj; }
hx::ObjectPtr< JPEG_obj > JPEG_obj::__new()
{  hx::ObjectPtr< JPEG_obj > _result_ = new JPEG_obj();
	_result_->__construct();
	return _result_;}

Dynamic JPEG_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< JPEG_obj > _result_ = new JPEG_obj();
	_result_->__construct();
	return _result_;}

::lime::graphics::Image JPEG_obj::decodeBytes( ::lime::utils::ByteArray bytes,hx::Null< bool >  __o_decodeData){
bool decodeData = __o_decodeData.Default(true);
	HX_STACK_FRAME("lime.graphics.format.JPEG","decodeBytes",0x9c51a384,"lime.graphics.format.JPEG.decodeBytes","lime/graphics/format/JPEG.hx",14,0x0d45bec8)
	HX_STACK_ARG(bytes,"bytes")
	HX_STACK_ARG(decodeData,"decodeData")
{
		HX_STACK_LINE(18)
		::lime::utils::ByteArray tmp = bytes;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(18)
		bool tmp1 = decodeData;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(18)
		Dynamic tmp2 = ::lime::graphics::format::JPEG_obj::lime_jpeg_decode_bytes(tmp,tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(18)
		Dynamic bufferData = tmp2;		HX_STACK_VAR(bufferData,"bufferData");
		HX_STACK_LINE(20)
		bool tmp3 = (bufferData != null());		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(20)
		if ((tmp3)){
			HX_STACK_LINE(22)
			::lime::graphics::ImageBuffer tmp4 = ::lime::graphics::ImageBuffer_obj::__new(bufferData->__Field(HX_HCSTRING("data","\x2a","\x56","\x63","\x42"), hx::paccDynamic ),bufferData->__Field(HX_HCSTRING("width","\x06","\xb6","\x62","\xca"), hx::paccDynamic ),bufferData->__Field(HX_HCSTRING("height","\xe7","\x07","\x4c","\x02"), hx::paccDynamic ),bufferData->__Field(HX_HCSTRING("bpp","\xe2","\xbe","\x4a","\x00"), hx::paccDynamic ),bufferData->__Field(HX_HCSTRING("format","\x37","\x8f","\x8e","\xfd"), hx::paccDynamic ));		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(22)
			::lime::graphics::ImageBuffer buffer = tmp4;		HX_STACK_VAR(buffer,"buffer");
			HX_STACK_LINE(23)
			buffer->transparent = bufferData->__Field(HX_HCSTRING("transparent","\x52","\x2b","\xba","\x22"), hx::paccDynamic );
			HX_STACK_LINE(24)
			::lime::graphics::Image tmp5 = ::lime::graphics::Image_obj::__new(buffer,null(),null(),null(),null(),null(),null());		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(24)
			return tmp5;
		}
		HX_STACK_LINE(30)
		return null();
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(JPEG_obj,decodeBytes,return )

::lime::graphics::Image JPEG_obj::decodeFile( ::String path,hx::Null< bool >  __o_decodeData){
bool decodeData = __o_decodeData.Default(true);
	HX_STACK_FRAME("lime.graphics.format.JPEG","decodeFile",0xcb0bd983,"lime.graphics.format.JPEG.decodeFile","lime/graphics/format/JPEG.hx",35,0x0d45bec8)
	HX_STACK_ARG(path,"path")
	HX_STACK_ARG(decodeData,"decodeData")
{
		HX_STACK_LINE(39)
		::String tmp = path;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(39)
		bool tmp1 = decodeData;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(39)
		Dynamic tmp2 = ::lime::graphics::format::JPEG_obj::lime_jpeg_decode_file(tmp,tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(39)
		Dynamic bufferData = tmp2;		HX_STACK_VAR(bufferData,"bufferData");
		HX_STACK_LINE(41)
		bool tmp3 = (bufferData != null());		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(41)
		if ((tmp3)){
			HX_STACK_LINE(43)
			::lime::graphics::ImageBuffer tmp4 = ::lime::graphics::ImageBuffer_obj::__new(bufferData->__Field(HX_HCSTRING("data","\x2a","\x56","\x63","\x42"), hx::paccDynamic ),bufferData->__Field(HX_HCSTRING("width","\x06","\xb6","\x62","\xca"), hx::paccDynamic ),bufferData->__Field(HX_HCSTRING("height","\xe7","\x07","\x4c","\x02"), hx::paccDynamic ),bufferData->__Field(HX_HCSTRING("bpp","\xe2","\xbe","\x4a","\x00"), hx::paccDynamic ),bufferData->__Field(HX_HCSTRING("format","\x37","\x8f","\x8e","\xfd"), hx::paccDynamic ));		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(43)
			::lime::graphics::ImageBuffer buffer = tmp4;		HX_STACK_VAR(buffer,"buffer");
			HX_STACK_LINE(44)
			buffer->transparent = bufferData->__Field(HX_HCSTRING("transparent","\x52","\x2b","\xba","\x22"), hx::paccDynamic );
			HX_STACK_LINE(45)
			::lime::graphics::Image tmp5 = ::lime::graphics::Image_obj::__new(buffer,null(),null(),null(),null(),null(),null());		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(45)
			return tmp5;
		}
		HX_STACK_LINE(51)
		return null();
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(JPEG_obj,decodeFile,return )

::lime::utils::ByteArray JPEG_obj::encode( ::lime::graphics::Image image,int quality){
	HX_STACK_FRAME("lime.graphics.format.JPEG","encode",0xce6c344f,"lime.graphics.format.JPEG.encode","lime/graphics/format/JPEG.hx",56,0x0d45bec8)
	HX_STACK_ARG(image,"image")
	HX_STACK_ARG(quality,"quality")
	HX_STACK_LINE(58)
	bool tmp = image->get_premultiplied();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(58)
	bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(58)
	bool tmp2;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(58)
	if ((tmp1)){
		HX_STACK_LINE(58)
		int tmp3 = image->get_format();		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(58)
		int tmp4 = tmp3;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(58)
		tmp2 = (tmp4 != (int)0);
	}
	else{
		HX_STACK_LINE(58)
		tmp2 = true;
	}
	HX_STACK_LINE(58)
	if ((tmp2)){
		HX_STACK_LINE(62)
		::lime::graphics::Image tmp3 = image->clone();		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(62)
		image = tmp3;
		HX_STACK_LINE(63)
		image->set_premultiplied(false);
		HX_STACK_LINE(64)
		image->set_format((int)0);
	}
	HX_STACK_LINE(72)
	::lime::graphics::ImageBuffer tmp3 = image->buffer;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(72)
	int tmp4 = quality;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(72)
	Dynamic tmp5 = ::lime::graphics::format::JPEG_obj::lime_image_encode(tmp3,(int)1,tmp4);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(72)
	Dynamic data = tmp5;		HX_STACK_VAR(data,"data");
	HX_STACK_LINE(73)
	::haxe::io::Bytes tmp6 = ::haxe::io::Bytes_obj::__new(data->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic ),data->__Field(HX_HCSTRING("b","\x62","\x00","\x00","\x00"), hx::paccDynamic ));		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(73)
	::haxe::io::Bytes bytes = tmp6;		HX_STACK_VAR(bytes,"bytes");
	HX_STACK_LINE(74)
	::haxe::io::Bytes tmp7 = bytes;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(74)
	::lime::utils::ByteArray tmp8 = ::lime::utils::ByteArray_obj::fromBytes(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(74)
	return tmp8;
	HX_STACK_LINE(78)
	return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(JPEG_obj,encode,return )

Dynamic JPEG_obj::lime_jpeg_decode_bytes;

Dynamic JPEG_obj::lime_jpeg_decode_file;

Dynamic JPEG_obj::lime_image_encode;


JPEG_obj::JPEG_obj()
{
}

bool JPEG_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"encode") ) { outValue = encode_dyn(); return true;  }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"decodeFile") ) { outValue = decodeFile_dyn(); return true;  }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"decodeBytes") ) { outValue = decodeBytes_dyn(); return true;  }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"lime_image_encode") ) { outValue = lime_image_encode; return true;  }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"lime_jpeg_decode_file") ) { outValue = lime_jpeg_decode_file; return true;  }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"lime_jpeg_decode_bytes") ) { outValue = lime_jpeg_decode_bytes; return true;  }
	}
	return false;
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
static hx::StaticInfo sStaticStorageInfo[] = {
	{hx::fsObject /*Dynamic*/ ,(void *) &JPEG_obj::lime_jpeg_decode_bytes,HX_HCSTRING("lime_jpeg_decode_bytes","\xa7","\xff","\x10","\xc9")},
	{hx::fsObject /*Dynamic*/ ,(void *) &JPEG_obj::lime_jpeg_decode_file,HX_HCSTRING("lime_jpeg_decode_file","\xc0","\x92","\xae","\x0c")},
	{hx::fsObject /*Dynamic*/ ,(void *) &JPEG_obj::lime_image_encode,HX_HCSTRING("lime_image_encode","\x64","\x48","\x63","\x9c")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(JPEG_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(JPEG_obj::lime_jpeg_decode_bytes,"lime_jpeg_decode_bytes");
	HX_MARK_MEMBER_NAME(JPEG_obj::lime_jpeg_decode_file,"lime_jpeg_decode_file");
	HX_MARK_MEMBER_NAME(JPEG_obj::lime_image_encode,"lime_image_encode");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(JPEG_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(JPEG_obj::lime_jpeg_decode_bytes,"lime_jpeg_decode_bytes");
	HX_VISIT_MEMBER_NAME(JPEG_obj::lime_jpeg_decode_file,"lime_jpeg_decode_file");
	HX_VISIT_MEMBER_NAME(JPEG_obj::lime_image_encode,"lime_image_encode");
};

#endif

hx::Class JPEG_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("decodeBytes","\x5d","\x94","\xb1","\x85"),
	HX_HCSTRING("decodeFile","\xca","\x86","\x63","\xce"),
	HX_HCSTRING("encode","\x16","\xf2","\xe3","\xf9"),
	HX_HCSTRING("lime_jpeg_decode_bytes","\xa7","\xff","\x10","\xc9"),
	HX_HCSTRING("lime_jpeg_decode_file","\xc0","\x92","\xae","\x0c"),
	HX_HCSTRING("lime_image_encode","\x64","\x48","\x63","\x9c"),
	::String(null()) };

void JPEG_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("lime.graphics.format.JPEG","\x15","\x91","\x5a","\xe7");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &JPEG_obj::__GetStatic;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< JPEG_obj >;
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

void JPEG_obj::__boot()
{
struct _Function_0_1{
	inline static Dynamic Block( ){
		HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","lime/graphics/format/JPEG.hx",91,0x0d45bec8)
		{
			HX_STACK_LINE(91)
			Dynamic tmp = ::lime::_system::System_obj::load(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_jpeg_decode_bytes","\xa7","\xff","\x10","\xc9"),(int)2,null());		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(91)
			return tmp;
		}
		return null();
	}
};
	lime_jpeg_decode_bytes= _Function_0_1::Block();
struct _Function_0_2{
	inline static Dynamic Block( ){
		HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","lime/graphics/format/JPEG.hx",92,0x0d45bec8)
		{
			HX_STACK_LINE(92)
			Dynamic tmp = ::lime::_system::System_obj::load(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_jpeg_decode_file","\xc0","\x92","\xae","\x0c"),(int)2,null());		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(92)
			return tmp;
		}
		return null();
	}
};
	lime_jpeg_decode_file= _Function_0_2::Block();
	lime_image_encode= ::lime::_system::System_obj::load(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_image_encode","\x64","\x48","\x63","\x9c"),(int)3,null());
}

} // end namespace lime
} // end namespace graphics
} // end namespace format
