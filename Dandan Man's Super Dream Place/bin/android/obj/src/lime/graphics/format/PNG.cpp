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
#ifndef INCLUDED_lime_graphics_format_PNG
#include <lime/graphics/format/PNG.h>
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

Void PNG_obj::__construct()
{
	return null();
}

//PNG_obj::~PNG_obj() { }

Dynamic PNG_obj::__CreateEmpty() { return  new PNG_obj; }
hx::ObjectPtr< PNG_obj > PNG_obj::__new()
{  hx::ObjectPtr< PNG_obj > _result_ = new PNG_obj();
	_result_->__construct();
	return _result_;}

Dynamic PNG_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< PNG_obj > _result_ = new PNG_obj();
	_result_->__construct();
	return _result_;}

::lime::graphics::Image PNG_obj::decodeBytes( ::lime::utils::ByteArray bytes,hx::Null< bool >  __o_decodeData){
bool decodeData = __o_decodeData.Default(true);
	HX_STACK_FRAME("lime.graphics.format.PNG","decodeBytes",0x72bcffab,"lime.graphics.format.PNG.decodeBytes","lime/graphics/format/PNG.hx",21,0x0cfd2463)
	HX_STACK_ARG(bytes,"bytes")
	HX_STACK_ARG(decodeData,"decodeData")
{
		HX_STACK_LINE(25)
		::lime::utils::ByteArray tmp = bytes;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(25)
		bool tmp1 = decodeData;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(25)
		Dynamic tmp2 = ::lime::graphics::format::PNG_obj::lime_png_decode_bytes(tmp,tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(25)
		Dynamic bufferData = tmp2;		HX_STACK_VAR(bufferData,"bufferData");
		HX_STACK_LINE(27)
		bool tmp3 = (bufferData != null());		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(27)
		if ((tmp3)){
			HX_STACK_LINE(29)
			::lime::graphics::ImageBuffer tmp4 = ::lime::graphics::ImageBuffer_obj::__new(bufferData->__Field(HX_HCSTRING("data","\x2a","\x56","\x63","\x42"), hx::paccDynamic ),bufferData->__Field(HX_HCSTRING("width","\x06","\xb6","\x62","\xca"), hx::paccDynamic ),bufferData->__Field(HX_HCSTRING("height","\xe7","\x07","\x4c","\x02"), hx::paccDynamic ),bufferData->__Field(HX_HCSTRING("bpp","\xe2","\xbe","\x4a","\x00"), hx::paccDynamic ),bufferData->__Field(HX_HCSTRING("format","\x37","\x8f","\x8e","\xfd"), hx::paccDynamic ));		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(29)
			::lime::graphics::ImageBuffer buffer = tmp4;		HX_STACK_VAR(buffer,"buffer");
			HX_STACK_LINE(30)
			buffer->transparent = bufferData->__Field(HX_HCSTRING("transparent","\x52","\x2b","\xba","\x22"), hx::paccDynamic );
			HX_STACK_LINE(31)
			::lime::graphics::Image tmp5 = ::lime::graphics::Image_obj::__new(buffer,null(),null(),null(),null(),null(),null());		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(31)
			return tmp5;
		}
		HX_STACK_LINE(37)
		return null();
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(PNG_obj,decodeBytes,return )

::lime::graphics::Image PNG_obj::decodeFile( ::String path,hx::Null< bool >  __o_decodeData){
bool decodeData = __o_decodeData.Default(true);
	HX_STACK_FRAME("lime.graphics.format.PNG","decodeFile",0xa9917f3c,"lime.graphics.format.PNG.decodeFile","lime/graphics/format/PNG.hx",42,0x0cfd2463)
	HX_STACK_ARG(path,"path")
	HX_STACK_ARG(decodeData,"decodeData")
{
		HX_STACK_LINE(46)
		::String tmp = path;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(46)
		bool tmp1 = decodeData;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(46)
		Dynamic tmp2 = ::lime::graphics::format::PNG_obj::lime_png_decode_file(tmp,tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(46)
		Dynamic bufferData = tmp2;		HX_STACK_VAR(bufferData,"bufferData");
		HX_STACK_LINE(48)
		bool tmp3 = (bufferData != null());		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(48)
		if ((tmp3)){
			HX_STACK_LINE(50)
			::lime::graphics::ImageBuffer tmp4 = ::lime::graphics::ImageBuffer_obj::__new(bufferData->__Field(HX_HCSTRING("data","\x2a","\x56","\x63","\x42"), hx::paccDynamic ),bufferData->__Field(HX_HCSTRING("width","\x06","\xb6","\x62","\xca"), hx::paccDynamic ),bufferData->__Field(HX_HCSTRING("height","\xe7","\x07","\x4c","\x02"), hx::paccDynamic ),bufferData->__Field(HX_HCSTRING("bpp","\xe2","\xbe","\x4a","\x00"), hx::paccDynamic ),bufferData->__Field(HX_HCSTRING("format","\x37","\x8f","\x8e","\xfd"), hx::paccDynamic ));		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(50)
			::lime::graphics::ImageBuffer buffer = tmp4;		HX_STACK_VAR(buffer,"buffer");
			HX_STACK_LINE(51)
			buffer->transparent = bufferData->__Field(HX_HCSTRING("transparent","\x52","\x2b","\xba","\x22"), hx::paccDynamic );
			HX_STACK_LINE(52)
			::lime::graphics::Image tmp5 = ::lime::graphics::Image_obj::__new(buffer,null(),null(),null(),null(),null(),null());		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(52)
			return tmp5;
		}
		HX_STACK_LINE(58)
		return null();
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(PNG_obj,decodeFile,return )

::lime::utils::ByteArray PNG_obj::encode( ::lime::graphics::Image image){
	HX_STACK_FRAME("lime.graphics.format.PNG","encode",0x30ec4988,"lime.graphics.format.PNG.encode","lime/graphics/format/PNG.hx",63,0x0cfd2463)
	HX_STACK_ARG(image,"image")
	HX_STACK_LINE(65)
	bool tmp = image->get_premultiplied();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(65)
	bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(65)
	bool tmp2;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(65)
	if ((tmp1)){
		HX_STACK_LINE(65)
		int tmp3 = image->get_format();		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(65)
		int tmp4 = tmp3;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(65)
		tmp2 = (tmp4 != (int)0);
	}
	else{
		HX_STACK_LINE(65)
		tmp2 = true;
	}
	HX_STACK_LINE(65)
	if ((tmp2)){
		HX_STACK_LINE(69)
		::lime::graphics::Image tmp3 = image->clone();		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(69)
		image = tmp3;
		HX_STACK_LINE(70)
		image->set_premultiplied(false);
		HX_STACK_LINE(71)
		image->set_format((int)0);
	}
	HX_STACK_LINE(79)
	bool tmp3 = ::lime::_system::System_obj::disableCFFI;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(79)
	bool tmp4 = !(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(79)
	if ((tmp4)){
		HX_STACK_LINE(81)
		::lime::graphics::ImageBuffer tmp5 = image->buffer;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(81)
		Dynamic tmp6 = ::lime::graphics::format::PNG_obj::lime_image_encode(tmp5,(int)0,(int)0);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(81)
		Dynamic data = tmp6;		HX_STACK_VAR(data,"data");
		HX_STACK_LINE(82)
		::haxe::io::Bytes tmp7 = ::haxe::io::Bytes_obj::__new(data->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic ),data->__Field(HX_HCSTRING("b","\x62","\x00","\x00","\x00"), hx::paccDynamic ));		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(82)
		::haxe::io::Bytes bytes = tmp7;		HX_STACK_VAR(bytes,"bytes");
		HX_STACK_LINE(83)
		::haxe::io::Bytes tmp8 = bytes;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(83)
		::lime::utils::ByteArray tmp9 = ::lime::utils::ByteArray_obj::fromBytes(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(83)
		return tmp9;
	}
	HX_STACK_LINE(135)
	return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(PNG_obj,encode,return )

Dynamic PNG_obj::lime_png_decode_bytes;

Dynamic PNG_obj::lime_png_decode_file;

Dynamic PNG_obj::lime_image_encode;


PNG_obj::PNG_obj()
{
}

bool PNG_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
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
	case 20:
		if (HX_FIELD_EQ(inName,"lime_png_decode_file") ) { outValue = lime_png_decode_file; return true;  }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"lime_png_decode_bytes") ) { outValue = lime_png_decode_bytes; return true;  }
	}
	return false;
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
static hx::StaticInfo sStaticStorageInfo[] = {
	{hx::fsObject /*Dynamic*/ ,(void *) &PNG_obj::lime_png_decode_bytes,HX_HCSTRING("lime_png_decode_bytes","\x9a","\x13","\x98","\x26")},
	{hx::fsObject /*Dynamic*/ ,(void *) &PNG_obj::lime_png_decode_file,HX_HCSTRING("lime_png_decode_file","\x2d","\x7e","\x35","\x25")},
	{hx::fsObject /*Dynamic*/ ,(void *) &PNG_obj::lime_image_encode,HX_HCSTRING("lime_image_encode","\x64","\x48","\x63","\x9c")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(PNG_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(PNG_obj::lime_png_decode_bytes,"lime_png_decode_bytes");
	HX_MARK_MEMBER_NAME(PNG_obj::lime_png_decode_file,"lime_png_decode_file");
	HX_MARK_MEMBER_NAME(PNG_obj::lime_image_encode,"lime_image_encode");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(PNG_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(PNG_obj::lime_png_decode_bytes,"lime_png_decode_bytes");
	HX_VISIT_MEMBER_NAME(PNG_obj::lime_png_decode_file,"lime_png_decode_file");
	HX_VISIT_MEMBER_NAME(PNG_obj::lime_image_encode,"lime_image_encode");
};

#endif

hx::Class PNG_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("decodeBytes","\x5d","\x94","\xb1","\x85"),
	HX_HCSTRING("decodeFile","\xca","\x86","\x63","\xce"),
	HX_HCSTRING("encode","\x16","\xf2","\xe3","\xf9"),
	HX_HCSTRING("lime_png_decode_bytes","\x9a","\x13","\x98","\x26"),
	HX_HCSTRING("lime_png_decode_file","\x2d","\x7e","\x35","\x25"),
	HX_HCSTRING("lime_image_encode","\x64","\x48","\x63","\x9c"),
	::String(null()) };

void PNG_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("lime.graphics.format.PNG","\xbc","\x8e","\xac","\x4b");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &PNG_obj::__GetStatic;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< PNG_obj >;
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

void PNG_obj::__boot()
{
struct _Function_0_1{
	inline static Dynamic Block( ){
		HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","lime/graphics/format/PNG.hx",148,0x0cfd2463)
		{
			HX_STACK_LINE(148)
			Dynamic tmp = ::lime::_system::System_obj::load(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_png_decode_bytes","\x9a","\x13","\x98","\x26"),(int)2,null());		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(148)
			return tmp;
		}
		return null();
	}
};
	lime_png_decode_bytes= _Function_0_1::Block();
	lime_png_decode_file= ::lime::_system::System_obj::load(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_png_decode_file","\x2d","\x7e","\x35","\x25"),(int)2,null());
	lime_image_encode= ::lime::_system::System_obj::load(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_image_encode","\x64","\x48","\x63","\x9c"),(int)3,null());
}

} // end namespace lime
} // end namespace graphics
} // end namespace format
