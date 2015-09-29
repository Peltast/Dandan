#include <hxcpp.h>

#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
#endif
#ifndef INCLUDED_haxe_io_Error
#include <haxe/io/Error.h>
#endif
#ifndef INCLUDED_haxe_zip_Compress
#include <haxe/zip/Compress.h>
#endif
#ifndef INCLUDED_haxe_zip_Uncompress
#include <haxe/zip/Uncompress.h>
#endif
#ifndef INCLUDED_lime_system_System
#include <lime/system/System.h>
#endif
#ifndef INCLUDED_lime_utils_ByteArray
#include <lime/utils/ByteArray.h>
#endif
#ifndef INCLUDED_lime_utils_CompressionAlgorithm
#include <lime/utils/CompressionAlgorithm.h>
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
#ifndef INCLUDED_sys_io_File
#include <sys/io/File.h>
#endif
namespace lime{
namespace utils{

Void ByteArray_obj::__construct(hx::Null< int >  __o_size)
{
HX_STACK_FRAME("lime.utils.ByteArray","new",0x0dbc8bed,"lime.utils.ByteArray.new","lime/utils/ByteArray.hx",35,0x2063a1e5)
HX_STACK_THIS(this)
HX_STACK_ARG(__o_size,"size")
int size = __o_size.Default(0);
{
	HX_STACK_LINE(47)
	this->littleEndian = false;
	HX_STACK_LINE(46)
	this->allocated = (int)0;
	HX_STACK_LINE(44)
	this->position = (int)0;
	HX_STACK_LINE(65)
	this->length = (int)0;
	HX_STACK_LINE(66)
	bool tmp = (size > (int)0);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(66)
	if ((tmp)){
		HX_STACK_LINE(73)
		Array< unsigned char > data = Array_obj< unsigned char >::__new();		HX_STACK_VAR(data,"data");
		HX_STACK_LINE(75)
		int tmp1 = size;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(75)
		data->__SetSizeExact(tmp1);
		HX_STACK_LINE(79)
		int tmp2 = size;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(79)
		super::__construct(tmp2,data);
	}
}
;
	return null();
}

//ByteArray_obj::~ByteArray_obj() { }

Dynamic ByteArray_obj::__CreateEmpty() { return  new ByteArray_obj; }
hx::ObjectPtr< ByteArray_obj > ByteArray_obj::__new(hx::Null< int >  __o_size)
{  hx::ObjectPtr< ByteArray_obj > _result_ = new ByteArray_obj();
	_result_->__construct(__o_size);
	return _result_;}

Dynamic ByteArray_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< ByteArray_obj > _result_ = new ByteArray_obj();
	_result_->__construct(inArgs[0]);
	return _result_;}

hx::Object *ByteArray_obj::__ToInterface(const hx::type_info &inType) {
	if (inType==typeid( ::lime::utils::IMemoryRange_obj)) return operator ::lime::utils::IMemoryRange_obj *();
	if (inType==typeid( ::lime::utils::IDataInput_obj)) return operator ::lime::utils::IDataInput_obj *();
	return super::__ToInterface(inType);
}

ByteArray_obj::operator ::lime::utils::IMemoryRange_obj *()
	{ return new ::lime::utils::IMemoryRange_delegate_< ByteArray_obj >(this); }
ByteArray_obj::operator ::lime::utils::IDataInput_obj *()
	{ return new ::lime::utils::IDataInput_delegate_< ByteArray_obj >(this); }
::String ByteArray_obj::asString( ){
	HX_STACK_FRAME("lime.utils.ByteArray","asString",0x166978b6,"lime.utils.ByteArray.asString","lime/utils/ByteArray.hx",89,0x2063a1e5)
	HX_STACK_THIS(this)
	HX_STACK_LINE(91)
	int tmp = this->length;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(91)
	::String tmp1 = this->readUTFBytes(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(91)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(ByteArray_obj,asString,return )

Void ByteArray_obj::checkData( int length){
{
		HX_STACK_FRAME("lime.utils.ByteArray","checkData",0xb6bc825f,"lime.utils.ByteArray.checkData","lime/utils/ByteArray.hx",98,0x2063a1e5)
		HX_STACK_THIS(this)
		HX_STACK_ARG(length,"length")
		HX_STACK_LINE(100)
		int tmp = length;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(100)
		int tmp1 = this->position;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(100)
		int tmp2 = (tmp + tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(100)
		int tmp3 = this->length;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(100)
		bool tmp4 = (tmp2 > tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(100)
		if ((tmp4)){
			HX_STACK_LINE(102)
			this->ThrowEOFi();
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ByteArray_obj,checkData,(void))

Void ByteArray_obj::clear( ){
{
		HX_STACK_FRAME("lime.utils.ByteArray","clear",0x0e13ea5a,"lime.utils.ByteArray.clear","lime/utils/ByteArray.hx",110,0x2063a1e5)
		HX_STACK_THIS(this)
		HX_STACK_LINE(112)
		this->length = (int)0;
		HX_STACK_LINE(113)
		this->position = (int)0;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ByteArray_obj,clear,(void))

Void ByteArray_obj::compress( ::lime::utils::CompressionAlgorithm algorithm){
{
		HX_STACK_FRAME("lime.utils.ByteArray","compress",0xfa228cf5,"lime.utils.ByteArray.compress","lime/utils/ByteArray.hx",118,0x2063a1e5)
		HX_STACK_THIS(this)
		HX_STACK_ARG(algorithm,"algorithm")
		HX_STACK_LINE(124)
		::lime::utils::ByteArray src = hx::ObjectPtr<OBJ_>(this);		HX_STACK_VAR(src,"src");
		HX_STACK_LINE(127)
		bool tmp = (algorithm == null());		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(127)
		if ((tmp)){
			HX_STACK_LINE(129)
			algorithm = ::lime::utils::CompressionAlgorithm_obj::ZLIB;
		}
		HX_STACK_LINE(133)
		::haxe::io::Bytes result;		HX_STACK_VAR(result,"result");
		HX_STACK_LINE(135)
		bool tmp1 = (algorithm == ::lime::utils::CompressionAlgorithm_obj::LZMA);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(135)
		if ((tmp1)){
			HX_STACK_LINE(137)
			::lime::utils::ByteArray tmp2 = src;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(137)
			::lime::utils::ByteArray tmp3 = ::lime::utils::ByteArray_obj::fromBytes(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(137)
			::lime::utils::ByteArray tmp4 = ::lime::utils::LZMA_obj::encode(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(137)
			result = ((::haxe::io::Bytes)(tmp4));
		}
		else{
			HX_STACK_LINE(141)
			bool tmp2 = (algorithm != null());		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(141)
			int tmp3;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(141)
			if ((tmp2)){
				HX_STACK_LINE(141)
				switch( (int)(algorithm->__Index())){
					case (int)0: {
						HX_STACK_LINE(143)
						tmp3 = (int)-15;
					}
					;break;
					case (int)3: {
						HX_STACK_LINE(144)
						tmp3 = (int)31;
					}
					;break;
					default: {
						HX_STACK_LINE(145)
						tmp3 = (int)15;
					}
				}
			}
			else{
				HX_STACK_LINE(145)
				tmp3 = (int)15;
			}
			HX_STACK_LINE(141)
			int windowBits = tmp3;		HX_STACK_VAR(windowBits,"windowBits");
			HX_STACK_LINE(152)
			::lime::utils::ByteArray tmp4 = src;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(152)
			::haxe::io::Bytes tmp5 = ::haxe::zip::Compress_obj::run(tmp4,(int)8);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(152)
			result = tmp5;
		}
		HX_STACK_LINE(157)
		this->b = result->b;
		HX_STACK_LINE(158)
		this->length = result->length;
		HX_STACK_LINE(159)
		int tmp2 = this->length;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(159)
		this->position = tmp2;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ByteArray_obj,compress,(void))

Void ByteArray_obj::deflate( ){
{
		HX_STACK_FRAME("lime.utils.ByteArray","deflate",0xa25c1178,"lime.utils.ByteArray.deflate","lime/utils/ByteArray.hx",170,0x2063a1e5)
		HX_STACK_THIS(this)
		HX_STACK_LINE(170)
		this->compress(::lime::utils::CompressionAlgorithm_obj::DEFLATE);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ByteArray_obj,deflate,(void))

Void ByteArray_obj::ensureElem( int size,bool updateLength){
{
		HX_STACK_FRAME("lime.utils.ByteArray","ensureElem",0x67e83180,"lime.utils.ByteArray.ensureElem","lime/utils/ByteArray.hx",176,0x2063a1e5)
		HX_STACK_THIS(this)
		HX_STACK_ARG(size,"size")
		HX_STACK_ARG(updateLength,"updateLength")
		HX_STACK_LINE(178)
		int tmp = (size + (int)1);		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(178)
		int len = tmp;		HX_STACK_VAR(len,"len");
		HX_STACK_LINE(191)
		bool tmp1 = (this->b == null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(191)
		if ((tmp1)){
			HX_STACK_LINE(192)
			this->b = Array_obj< unsigned char >::__new();
		}
		HX_STACK_LINE(194)
		int tmp2 = this->b->length;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(194)
		int tmp3 = len;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(194)
		bool tmp4 = (tmp2 < tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(194)
		if ((tmp4)){
			HX_STACK_LINE(196)
			int tmp5 = len;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(196)
			this->b->__SetSize(tmp5);
		}
		HX_STACK_LINE(201)
		bool tmp5 = updateLength;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(201)
		bool tmp6;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(201)
		if ((tmp5)){
			HX_STACK_LINE(201)
			int tmp7 = this->length;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(201)
			int tmp8 = tmp7;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(201)
			int tmp9 = len;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(201)
			tmp6 = (tmp8 < tmp9);
		}
		else{
			HX_STACK_LINE(201)
			tmp6 = false;
		}
		HX_STACK_LINE(201)
		if ((tmp6)){
			HX_STACK_LINE(203)
			this->length = len;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(ByteArray_obj,ensureElem,(void))

int ByteArray_obj::getLength( ){
	HX_STACK_FRAME("lime.utils.ByteArray","getLength",0x3bd78169,"lime.utils.ByteArray.getLength","lime/utils/ByteArray.hx",230,0x2063a1e5)
	HX_STACK_THIS(this)
	HX_STACK_LINE(230)
	int tmp = this->length;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(230)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(ByteArray_obj,getLength,return )

::lime::utils::ByteArray ByteArray_obj::getByteBuffer( ){
	HX_STACK_FRAME("lime.utils.ByteArray","getByteBuffer",0x574d302b,"lime.utils.ByteArray.getByteBuffer","lime/utils/ByteArray.hx",231,0x2063a1e5)
	HX_STACK_THIS(this)
	HX_STACK_LINE(231)
	return hx::ObjectPtr<OBJ_>(this);
}


HX_DEFINE_DYNAMIC_FUNC0(ByteArray_obj,getByteBuffer,return )

int ByteArray_obj::getStart( ){
	HX_STACK_FRAME("lime.utils.ByteArray","getStart",0x5a45c93f,"lime.utils.ByteArray.getStart","lime/utils/ByteArray.hx",232,0x2063a1e5)
	HX_STACK_THIS(this)
	HX_STACK_LINE(232)
	return (int)0;
}


HX_DEFINE_DYNAMIC_FUNC0(ByteArray_obj,getStart,return )

Void ByteArray_obj::inflate( ){
{
		HX_STACK_FRAME("lime.utils.ByteArray","inflate",0x0b7da294,"lime.utils.ByteArray.inflate","lime/utils/ByteArray.hx",238,0x2063a1e5)
		HX_STACK_THIS(this)
		HX_STACK_LINE(238)
		this->uncompress(::lime::utils::CompressionAlgorithm_obj::DEFLATE);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ByteArray_obj,inflate,(void))

bool ByteArray_obj::readBoolean( ){
	HX_STACK_FRAME("lime.utils.ByteArray","readBoolean",0x0cfd0e7f,"lime.utils.ByteArray.readBoolean","lime/utils/ByteArray.hx",243,0x2063a1e5)
	HX_STACK_THIS(this)
	HX_STACK_LINE(248)
	int tmp = this->position;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(248)
	int tmp1 = this->length;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(248)
	bool tmp2 = (tmp < tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(248)
	bool tmp3;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(248)
	if ((tmp2)){
		HX_STACK_LINE(248)
		int tmp4;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(248)
		{
			HX_STACK_LINE(248)
			int tmp5 = (this->position)++;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(248)
			int pos = tmp5;		HX_STACK_VAR(pos,"pos");
			HX_STACK_LINE(248)
			tmp4 = this->b->__get(pos);
		}
		HX_STACK_LINE(248)
		tmp3 = (tmp4 != (int)0);
	}
	else{
		HX_STACK_LINE(248)
		int tmp4 = this->ThrowEOFi();		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(248)
		tmp3 = (tmp4 != (int)0);
	}
	HX_STACK_LINE(248)
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC0(ByteArray_obj,readBoolean,return )

int ByteArray_obj::readByte( ){
	HX_STACK_FRAME("lime.utils.ByteArray","readByte",0xdf7e3ed1,"lime.utils.ByteArray.readByte","lime/utils/ByteArray.hx",254,0x2063a1e5)
	HX_STACK_THIS(this)
	HX_STACK_LINE(260)
	int tmp = this->position;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(260)
	int tmp1 = this->length;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(260)
	bool tmp2 = (tmp < tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(260)
	int tmp3;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(260)
	if ((tmp2)){
		HX_STACK_LINE(260)
		int tmp4 = (this->position)++;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(260)
		int pos = tmp4;		HX_STACK_VAR(pos,"pos");
		HX_STACK_LINE(260)
		tmp3 = this->b->__get(pos);
	}
	else{
		HX_STACK_LINE(260)
		tmp3 = this->ThrowEOFi();
	}
	HX_STACK_LINE(260)
	int val = tmp3;		HX_STACK_VAR(val,"val");
	HX_STACK_LINE(261)
	int tmp4 = (int(val) & int((int)128));		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(261)
	bool tmp5 = (tmp4 != (int)0);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(261)
	int tmp6;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(261)
	if ((tmp5)){
		HX_STACK_LINE(261)
		tmp6 = (val - (int)256);
	}
	else{
		HX_STACK_LINE(261)
		tmp6 = val;
	}
	HX_STACK_LINE(261)
	return tmp6;
}


HX_DEFINE_DYNAMIC_FUNC0(ByteArray_obj,readByte,return )

Void ByteArray_obj::readBytes( ::lime::utils::ByteArray bytes,hx::Null< int >  __o_offset,hx::Null< int >  __o_length){
int offset = __o_offset.Default(0);
int length = __o_length.Default(0);
	HX_STACK_FRAME("lime.utils.ByteArray","readBytes",0xaef8b882,"lime.utils.ByteArray.readBytes","lime/utils/ByteArray.hx",267,0x2063a1e5)
	HX_STACK_THIS(this)
	HX_STACK_ARG(bytes,"bytes")
	HX_STACK_ARG(offset,"offset")
	HX_STACK_ARG(length,"length")
{
		HX_STACK_LINE(289)
		bool tmp = (length == (int)0);		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(289)
		if ((tmp)){
			HX_STACK_LINE(289)
			int tmp1 = this->length;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(289)
			int tmp2 = this->position;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(289)
			int tmp3 = (tmp1 - tmp2);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(289)
			length = tmp3;
		}
		HX_STACK_LINE(290)
		int tmp1 = this->position;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(290)
		int tmp2 = length;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(290)
		int tmp3 = (tmp1 + tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(290)
		int tmp4 = this->length;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(290)
		bool tmp5 = (tmp3 > tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(290)
		if ((tmp5)){
			HX_STACK_LINE(290)
			this->ThrowEOFi();
		}
		HX_STACK_LINE(292)
		int tmp6 = bytes->length;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(292)
		int tmp7 = (offset + length);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(292)
		bool tmp8 = (tmp6 < tmp7);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(292)
		if ((tmp8)){
			HX_STACK_LINE(294)
			int tmp9 = (offset + length);		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(294)
			int tmp10 = (tmp9 - (int)1);		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(294)
			bytes->ensureElem(tmp10,true);
		}
		HX_STACK_LINE(301)
		Array< unsigned char > b1 = this->b;		HX_STACK_VAR(b1,"b1");
		HX_STACK_LINE(302)
		Array< unsigned char > b2 = bytes->b;		HX_STACK_VAR(b2,"b2");
		HX_STACK_LINE(303)
		int tmp9 = this->position;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(303)
		int p = tmp9;		HX_STACK_VAR(p,"p");
		HX_STACK_LINE(304)
		{
			HX_STACK_LINE(304)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(304)
			while((true)){
				HX_STACK_LINE(304)
				bool tmp10 = (_g < length);		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(304)
				bool tmp11 = !(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(304)
				if ((tmp11)){
					HX_STACK_LINE(304)
					break;
				}
				HX_STACK_LINE(304)
				int tmp12 = (_g)++;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(304)
				int i = tmp12;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(304)
				int tmp13 = (offset + i);		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(304)
				int tmp14 = (p + i);		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(304)
				unsigned char tmp15 = b1->__get(tmp14);		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(304)
				b2[tmp13] = tmp15;
			}
		}
		HX_STACK_LINE(307)
		hx::AddEq(this->position,length);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(ByteArray_obj,readBytes,(void))

Float ByteArray_obj::readDouble( ){
	HX_STACK_FRAME("lime.utils.ByteArray","readDouble",0x76048f1a,"lime.utils.ByteArray.readDouble","lime/utils/ByteArray.hx",314,0x2063a1e5)
	HX_STACK_THIS(this)
	HX_STACK_LINE(321)
	int tmp = this->position;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(321)
	int tmp1 = (tmp + (int)8);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(321)
	int tmp2 = this->length;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(321)
	bool tmp3 = (tmp1 > tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(321)
	if ((tmp3)){
		HX_STACK_LINE(321)
		this->ThrowEOFi();
	}
	HX_STACK_LINE(322)
	hx::AddEq(this->position,(int)8);
	HX_STACK_LINE(323)
	Float tmp4;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(323)
	{
		HX_STACK_LINE(323)
		int tmp5 = this->position;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(323)
		int tmp6 = (tmp5 - (int)8);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(323)
		int pos = tmp6;		HX_STACK_VAR(pos,"pos");
		HX_STACK_LINE(323)
		bool tmp7 = (pos < (int)0);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(323)
		bool tmp8 = !(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(323)
		bool tmp9;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(323)
		if ((tmp8)){
			HX_STACK_LINE(323)
			int tmp10 = (pos + (int)8);		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(323)
			int tmp11 = tmp10;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(323)
			int tmp12 = this->length;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(323)
			int tmp13 = tmp12;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(323)
			tmp9 = (tmp11 > tmp13);
		}
		else{
			HX_STACK_LINE(323)
			tmp9 = true;
		}
		HX_STACK_LINE(323)
		if ((tmp9)){
			HX_STACK_LINE(323)
			HX_STACK_DO_THROW(::haxe::io::Error_obj::OutsideBounds);
		}
		HX_STACK_LINE(323)
		tmp4 = ::__hxcpp_memory_get_double(this->b,pos);
	}
	HX_STACK_LINE(323)
	return tmp4;
}


HX_DEFINE_DYNAMIC_FUNC0(ByteArray_obj,readDouble,return )

Float ByteArray_obj::readFloat( ){
	HX_STACK_FRAME("lime.utils.ByteArray","readFloat",0xf3f775b3,"lime.utils.ByteArray.readFloat","lime/utils/ByteArray.hx",340,0x2063a1e5)
	HX_STACK_THIS(this)
	HX_STACK_LINE(347)
	int tmp = this->position;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(347)
	int tmp1 = (tmp + (int)4);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(347)
	int tmp2 = this->length;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(347)
	bool tmp3 = (tmp1 > tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(347)
	if ((tmp3)){
		HX_STACK_LINE(347)
		this->ThrowEOFi();
	}
	HX_STACK_LINE(348)
	hx::AddEq(this->position,(int)4);
	HX_STACK_LINE(349)
	Float tmp4;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(349)
	{
		HX_STACK_LINE(349)
		int tmp5 = this->position;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(349)
		int tmp6 = (tmp5 - (int)4);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(349)
		int pos = tmp6;		HX_STACK_VAR(pos,"pos");
		HX_STACK_LINE(349)
		bool tmp7 = (pos < (int)0);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(349)
		bool tmp8 = !(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(349)
		bool tmp9;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(349)
		if ((tmp8)){
			HX_STACK_LINE(349)
			int tmp10 = (pos + (int)4);		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(349)
			int tmp11 = tmp10;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(349)
			int tmp12 = this->length;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(349)
			int tmp13 = tmp12;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(349)
			tmp9 = (tmp11 > tmp13);
		}
		else{
			HX_STACK_LINE(349)
			tmp9 = true;
		}
		HX_STACK_LINE(349)
		if ((tmp9)){
			HX_STACK_LINE(349)
			HX_STACK_DO_THROW(::haxe::io::Error_obj::OutsideBounds);
		}
		HX_STACK_LINE(349)
		tmp4 = ::__hxcpp_memory_get_float(this->b,pos);
	}
	HX_STACK_LINE(349)
	return tmp4;
}


HX_DEFINE_DYNAMIC_FUNC0(ByteArray_obj,readFloat,return )

int ByteArray_obj::readInt( ){
	HX_STACK_FRAME("lime.utils.ByteArray","readInt",0x022bb946,"lime.utils.ByteArray.readInt","lime/utils/ByteArray.hx",355,0x2063a1e5)
	HX_STACK_THIS(this)
	HX_STACK_LINE(362)
	int tmp = this->position;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(362)
	int tmp1 = this->length;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(362)
	bool tmp2 = (tmp < tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(362)
	int tmp3;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(362)
	if ((tmp2)){
		HX_STACK_LINE(362)
		int tmp4 = (this->position)++;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(362)
		int pos = tmp4;		HX_STACK_VAR(pos,"pos");
		HX_STACK_LINE(362)
		tmp3 = this->b->__get(pos);
	}
	else{
		HX_STACK_LINE(362)
		tmp3 = this->ThrowEOFi();
	}
	HX_STACK_LINE(362)
	int ch1 = tmp3;		HX_STACK_VAR(ch1,"ch1");
	HX_STACK_LINE(363)
	int tmp4 = this->position;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(363)
	int tmp5 = this->length;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(363)
	bool tmp6 = (tmp4 < tmp5);		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(363)
	int tmp7;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(363)
	if ((tmp6)){
		HX_STACK_LINE(363)
		int tmp8 = (this->position)++;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(363)
		int pos = tmp8;		HX_STACK_VAR(pos,"pos");
		HX_STACK_LINE(363)
		tmp7 = this->b->__get(pos);
	}
	else{
		HX_STACK_LINE(363)
		tmp7 = this->ThrowEOFi();
	}
	HX_STACK_LINE(363)
	int ch2 = tmp7;		HX_STACK_VAR(ch2,"ch2");
	HX_STACK_LINE(364)
	int tmp8 = this->position;		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(364)
	int tmp9 = this->length;		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(364)
	bool tmp10 = (tmp8 < tmp9);		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(364)
	int tmp11;		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(364)
	if ((tmp10)){
		HX_STACK_LINE(364)
		int tmp12 = (this->position)++;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(364)
		int pos = tmp12;		HX_STACK_VAR(pos,"pos");
		HX_STACK_LINE(364)
		tmp11 = this->b->__get(pos);
	}
	else{
		HX_STACK_LINE(364)
		tmp11 = this->ThrowEOFi();
	}
	HX_STACK_LINE(364)
	int ch3 = tmp11;		HX_STACK_VAR(ch3,"ch3");
	HX_STACK_LINE(365)
	int tmp12 = this->position;		HX_STACK_VAR(tmp12,"tmp12");
	HX_STACK_LINE(365)
	int tmp13 = this->length;		HX_STACK_VAR(tmp13,"tmp13");
	HX_STACK_LINE(365)
	bool tmp14 = (tmp12 < tmp13);		HX_STACK_VAR(tmp14,"tmp14");
	HX_STACK_LINE(365)
	int tmp15;		HX_STACK_VAR(tmp15,"tmp15");
	HX_STACK_LINE(365)
	if ((tmp14)){
		HX_STACK_LINE(365)
		int tmp16 = (this->position)++;		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(365)
		int pos = tmp16;		HX_STACK_VAR(pos,"pos");
		HX_STACK_LINE(365)
		tmp15 = this->b->__get(pos);
	}
	else{
		HX_STACK_LINE(365)
		tmp15 = this->ThrowEOFi();
	}
	HX_STACK_LINE(365)
	int ch4 = tmp15;		HX_STACK_VAR(ch4,"ch4");
	HX_STACK_LINE(366)
	bool tmp16 = this->littleEndian;		HX_STACK_VAR(tmp16,"tmp16");
	HX_STACK_LINE(366)
	int tmp17;		HX_STACK_VAR(tmp17,"tmp17");
	HX_STACK_LINE(366)
	if ((tmp16)){
		HX_STACK_LINE(366)
		int tmp18 = (int(ch4) << int((int)24));		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(366)
		int tmp19 = (int(ch3) << int((int)16));		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(366)
		int tmp20 = (int(tmp18) | int(tmp19));		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(366)
		int tmp21 = (int(ch2) << int((int)8));		HX_STACK_VAR(tmp21,"tmp21");
		HX_STACK_LINE(366)
		int tmp22 = (int(tmp20) | int(tmp21));		HX_STACK_VAR(tmp22,"tmp22");
		HX_STACK_LINE(366)
		int tmp23 = ch1;		HX_STACK_VAR(tmp23,"tmp23");
		HX_STACK_LINE(366)
		tmp17 = (int(tmp22) | int(tmp23));
	}
	else{
		HX_STACK_LINE(366)
		int tmp18 = (int(ch1) << int((int)24));		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(366)
		int tmp19 = (int(ch2) << int((int)16));		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(366)
		int tmp20 = (int(tmp18) | int(tmp19));		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(366)
		int tmp21 = (int(ch3) << int((int)8));		HX_STACK_VAR(tmp21,"tmp21");
		HX_STACK_LINE(366)
		int tmp22 = (int(tmp20) | int(tmp21));		HX_STACK_VAR(tmp22,"tmp22");
		HX_STACK_LINE(366)
		int tmp23 = ch4;		HX_STACK_VAR(tmp23,"tmp23");
		HX_STACK_LINE(366)
		tmp17 = (int(tmp22) | int(tmp23));
	}
	HX_STACK_LINE(366)
	return tmp17;
}


HX_DEFINE_DYNAMIC_FUNC0(ByteArray_obj,readInt,return )

::String ByteArray_obj::readMultiByte( int length,::String charSet){
	HX_STACK_FRAME("lime.utils.ByteArray","readMultiByte",0x680b0db8,"lime.utils.ByteArray.readMultiByte","lime/utils/ByteArray.hx",372,0x2063a1e5)
	HX_STACK_THIS(this)
	HX_STACK_ARG(length,"length")
	HX_STACK_ARG(charSet,"charSet")
	HX_STACK_LINE(374)
	int tmp = length;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(374)
	::String tmp1 = this->readUTFBytes(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(374)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC2(ByteArray_obj,readMultiByte,return )

int ByteArray_obj::readShort( ){
	HX_STACK_FRAME("lime.utils.ByteArray","readShort",0x6d883493,"lime.utils.ByteArray.readShort","lime/utils/ByteArray.hx",379,0x2063a1e5)
	HX_STACK_THIS(this)
	HX_STACK_LINE(386)
	int tmp = this->position;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(386)
	int tmp1 = this->length;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(386)
	bool tmp2 = (tmp < tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(386)
	int tmp3;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(386)
	if ((tmp2)){
		HX_STACK_LINE(386)
		int tmp4 = (this->position)++;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(386)
		int pos = tmp4;		HX_STACK_VAR(pos,"pos");
		HX_STACK_LINE(386)
		tmp3 = this->b->__get(pos);
	}
	else{
		HX_STACK_LINE(386)
		tmp3 = this->ThrowEOFi();
	}
	HX_STACK_LINE(386)
	int ch1 = tmp3;		HX_STACK_VAR(ch1,"ch1");
	HX_STACK_LINE(387)
	int tmp4 = this->position;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(387)
	int tmp5 = this->length;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(387)
	bool tmp6 = (tmp4 < tmp5);		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(387)
	int tmp7;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(387)
	if ((tmp6)){
		HX_STACK_LINE(387)
		int tmp8 = (this->position)++;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(387)
		int pos = tmp8;		HX_STACK_VAR(pos,"pos");
		HX_STACK_LINE(387)
		tmp7 = this->b->__get(pos);
	}
	else{
		HX_STACK_LINE(387)
		tmp7 = this->ThrowEOFi();
	}
	HX_STACK_LINE(387)
	int ch2 = tmp7;		HX_STACK_VAR(ch2,"ch2");
	HX_STACK_LINE(388)
	bool tmp8 = this->littleEndian;		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(388)
	int tmp9;		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(388)
	if ((tmp8)){
		HX_STACK_LINE(388)
		int tmp10 = (int(ch2) << int((int)8));		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(388)
		int tmp11 = ch1;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(388)
		tmp9 = (int(tmp10) | int(tmp11));
	}
	else{
		HX_STACK_LINE(388)
		int tmp10 = (int(ch1) << int((int)8));		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(388)
		int tmp11 = ch2;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(388)
		tmp9 = (int(tmp10) | int(tmp11));
	}
	HX_STACK_LINE(388)
	int val = tmp9;		HX_STACK_VAR(val,"val");
	HX_STACK_LINE(389)
	int tmp10 = (int(val) & int((int)32768));		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(389)
	bool tmp11 = (tmp10 != (int)0);		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(389)
	int tmp12;		HX_STACK_VAR(tmp12,"tmp12");
	HX_STACK_LINE(389)
	if ((tmp11)){
		HX_STACK_LINE(389)
		tmp12 = (val - (int)65536);
	}
	else{
		HX_STACK_LINE(389)
		tmp12 = val;
	}
	HX_STACK_LINE(389)
	return tmp12;
}


HX_DEFINE_DYNAMIC_FUNC0(ByteArray_obj,readShort,return )

int ByteArray_obj::readUnsignedByte( ){
	HX_STACK_FRAME("lime.utils.ByteArray","readUnsignedByte",0x22c35b66,"lime.utils.ByteArray.readUnsignedByte","lime/utils/ByteArray.hx",395,0x2063a1e5)
	HX_STACK_THIS(this)
	HX_STACK_LINE(401)
	int tmp = this->position;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(401)
	int tmp1 = this->length;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(401)
	bool tmp2 = (tmp < tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(401)
	int tmp3;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(401)
	if ((tmp2)){
		HX_STACK_LINE(401)
		int tmp4 = (this->position)++;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(401)
		int pos = tmp4;		HX_STACK_VAR(pos,"pos");
		HX_STACK_LINE(401)
		tmp3 = this->b->__get(pos);
	}
	else{
		HX_STACK_LINE(401)
		tmp3 = this->ThrowEOFi();
	}
	HX_STACK_LINE(401)
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC0(ByteArray_obj,readUnsignedByte,return )

int ByteArray_obj::readUnsignedInt( ){
	HX_STACK_FRAME("lime.utils.ByteArray","readUnsignedInt",0x956a0651,"lime.utils.ByteArray.readUnsignedInt","lime/utils/ByteArray.hx",407,0x2063a1e5)
	HX_STACK_THIS(this)
	HX_STACK_LINE(414)
	int tmp = this->position;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(414)
	int tmp1 = this->length;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(414)
	bool tmp2 = (tmp < tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(414)
	int tmp3;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(414)
	if ((tmp2)){
		HX_STACK_LINE(414)
		int tmp4 = (this->position)++;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(414)
		int pos = tmp4;		HX_STACK_VAR(pos,"pos");
		HX_STACK_LINE(414)
		tmp3 = this->b->__get(pos);
	}
	else{
		HX_STACK_LINE(414)
		tmp3 = this->ThrowEOFi();
	}
	HX_STACK_LINE(414)
	int ch1 = tmp3;		HX_STACK_VAR(ch1,"ch1");
	HX_STACK_LINE(415)
	int tmp4 = this->position;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(415)
	int tmp5 = this->length;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(415)
	bool tmp6 = (tmp4 < tmp5);		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(415)
	int tmp7;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(415)
	if ((tmp6)){
		HX_STACK_LINE(415)
		int tmp8 = (this->position)++;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(415)
		int pos = tmp8;		HX_STACK_VAR(pos,"pos");
		HX_STACK_LINE(415)
		tmp7 = this->b->__get(pos);
	}
	else{
		HX_STACK_LINE(415)
		tmp7 = this->ThrowEOFi();
	}
	HX_STACK_LINE(415)
	int ch2 = tmp7;		HX_STACK_VAR(ch2,"ch2");
	HX_STACK_LINE(416)
	int tmp8 = this->position;		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(416)
	int tmp9 = this->length;		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(416)
	bool tmp10 = (tmp8 < tmp9);		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(416)
	int tmp11;		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(416)
	if ((tmp10)){
		HX_STACK_LINE(416)
		int tmp12 = (this->position)++;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(416)
		int pos = tmp12;		HX_STACK_VAR(pos,"pos");
		HX_STACK_LINE(416)
		tmp11 = this->b->__get(pos);
	}
	else{
		HX_STACK_LINE(416)
		tmp11 = this->ThrowEOFi();
	}
	HX_STACK_LINE(416)
	int ch3 = tmp11;		HX_STACK_VAR(ch3,"ch3");
	HX_STACK_LINE(417)
	int tmp12 = this->position;		HX_STACK_VAR(tmp12,"tmp12");
	HX_STACK_LINE(417)
	int tmp13 = this->length;		HX_STACK_VAR(tmp13,"tmp13");
	HX_STACK_LINE(417)
	bool tmp14 = (tmp12 < tmp13);		HX_STACK_VAR(tmp14,"tmp14");
	HX_STACK_LINE(417)
	int tmp15;		HX_STACK_VAR(tmp15,"tmp15");
	HX_STACK_LINE(417)
	if ((tmp14)){
		HX_STACK_LINE(417)
		int tmp16 = (this->position)++;		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(417)
		int pos = tmp16;		HX_STACK_VAR(pos,"pos");
		HX_STACK_LINE(417)
		tmp15 = this->b->__get(pos);
	}
	else{
		HX_STACK_LINE(417)
		tmp15 = this->ThrowEOFi();
	}
	HX_STACK_LINE(417)
	int ch4 = tmp15;		HX_STACK_VAR(ch4,"ch4");
	HX_STACK_LINE(418)
	bool tmp16 = this->littleEndian;		HX_STACK_VAR(tmp16,"tmp16");
	HX_STACK_LINE(418)
	int tmp17;		HX_STACK_VAR(tmp17,"tmp17");
	HX_STACK_LINE(418)
	if ((tmp16)){
		HX_STACK_LINE(418)
		int tmp18 = (int(ch4) << int((int)24));		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(418)
		int tmp19 = (int(ch3) << int((int)16));		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(418)
		int tmp20 = (int(tmp18) | int(tmp19));		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(418)
		int tmp21 = (int(ch2) << int((int)8));		HX_STACK_VAR(tmp21,"tmp21");
		HX_STACK_LINE(418)
		int tmp22 = (int(tmp20) | int(tmp21));		HX_STACK_VAR(tmp22,"tmp22");
		HX_STACK_LINE(418)
		int tmp23 = ch1;		HX_STACK_VAR(tmp23,"tmp23");
		HX_STACK_LINE(418)
		tmp17 = (int(tmp22) | int(tmp23));
	}
	else{
		HX_STACK_LINE(418)
		int tmp18 = (int(ch1) << int((int)24));		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(418)
		int tmp19 = (int(ch2) << int((int)16));		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(418)
		int tmp20 = (int(tmp18) | int(tmp19));		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(418)
		int tmp21 = (int(ch3) << int((int)8));		HX_STACK_VAR(tmp21,"tmp21");
		HX_STACK_LINE(418)
		int tmp22 = (int(tmp20) | int(tmp21));		HX_STACK_VAR(tmp22,"tmp22");
		HX_STACK_LINE(418)
		int tmp23 = ch4;		HX_STACK_VAR(tmp23,"tmp23");
		HX_STACK_LINE(418)
		tmp17 = (int(tmp22) | int(tmp23));
	}
	HX_STACK_LINE(418)
	return tmp17;
}


HX_DEFINE_DYNAMIC_FUNC0(ByteArray_obj,readUnsignedInt,return )

int ByteArray_obj::readUnsignedShort( ){
	HX_STACK_FRAME("lime.utils.ByteArray","readUnsignedShort",0x06bc1a5e,"lime.utils.ByteArray.readUnsignedShort","lime/utils/ByteArray.hx",424,0x2063a1e5)
	HX_STACK_THIS(this)
	HX_STACK_LINE(431)
	int tmp = this->position;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(431)
	int tmp1 = this->length;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(431)
	bool tmp2 = (tmp < tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(431)
	int tmp3;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(431)
	if ((tmp2)){
		HX_STACK_LINE(431)
		int tmp4 = (this->position)++;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(431)
		int pos = tmp4;		HX_STACK_VAR(pos,"pos");
		HX_STACK_LINE(431)
		tmp3 = this->b->__get(pos);
	}
	else{
		HX_STACK_LINE(431)
		tmp3 = this->ThrowEOFi();
	}
	HX_STACK_LINE(431)
	int ch1 = tmp3;		HX_STACK_VAR(ch1,"ch1");
	HX_STACK_LINE(432)
	int tmp4 = this->position;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(432)
	int tmp5 = this->length;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(432)
	bool tmp6 = (tmp4 < tmp5);		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(432)
	int tmp7;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(432)
	if ((tmp6)){
		HX_STACK_LINE(432)
		int tmp8 = (this->position)++;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(432)
		int pos = tmp8;		HX_STACK_VAR(pos,"pos");
		HX_STACK_LINE(432)
		tmp7 = this->b->__get(pos);
	}
	else{
		HX_STACK_LINE(432)
		tmp7 = this->ThrowEOFi();
	}
	HX_STACK_LINE(432)
	int ch2 = tmp7;		HX_STACK_VAR(ch2,"ch2");
	HX_STACK_LINE(433)
	bool tmp8 = this->littleEndian;		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(433)
	int tmp9;		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(433)
	if ((tmp8)){
		HX_STACK_LINE(433)
		int tmp10 = (int(ch2) << int((int)8));		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(433)
		int tmp11 = ch1;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(433)
		tmp9 = (tmp10 + tmp11);
	}
	else{
		HX_STACK_LINE(433)
		int tmp10 = (int(ch1) << int((int)8));		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(433)
		int tmp11 = ch2;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(433)
		tmp9 = (int(tmp10) | int(tmp11));
	}
	HX_STACK_LINE(433)
	return tmp9;
}


HX_DEFINE_DYNAMIC_FUNC0(ByteArray_obj,readUnsignedShort,return )

::String ByteArray_obj::readUTF( ){
	HX_STACK_FRAME("lime.utils.ByteArray","readUTF",0x0234bd7e,"lime.utils.ByteArray.readUTF","lime/utils/ByteArray.hx",439,0x2063a1e5)
	HX_STACK_THIS(this)
	HX_STACK_LINE(441)
	int tmp = this->readUnsignedShort();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(441)
	int bytesCount = tmp;		HX_STACK_VAR(bytesCount,"bytesCount");
	HX_STACK_LINE(442)
	int tmp1 = bytesCount;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(442)
	::String tmp2 = this->readUTFBytes(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(442)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC0(ByteArray_obj,readUTF,return )

::String ByteArray_obj::readUTFBytes( int len){
	HX_STACK_FRAME("lime.utils.ByteArray","readUTFBytes",0xa63b120d,"lime.utils.ByteArray.readUTFBytes","lime/utils/ByteArray.hx",447,0x2063a1e5)
	HX_STACK_THIS(this)
	HX_STACK_ARG(len,"len")
	HX_STACK_LINE(488)
	int tmp = this->position;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(488)
	int tmp1 = len;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(488)
	int tmp2 = (tmp + tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(488)
	int tmp3 = this->length;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(488)
	bool tmp4 = (tmp2 > tmp3);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(488)
	if ((tmp4)){
		HX_STACK_LINE(490)
		this->ThrowEOFi();
	}
	HX_STACK_LINE(494)
	int tmp5 = this->position;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(494)
	int p = tmp5;		HX_STACK_VAR(p,"p");
	HX_STACK_LINE(495)
	hx::AddEq(this->position,len);
	HX_STACK_LINE(505)
	::String result = HX_HCSTRING("","\x00","\x00","\x00","\x00");		HX_STACK_VAR(result,"result");
	HX_STACK_LINE(506)
	bool tmp6 = (this->b != null());		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(506)
	bool tmp7;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(506)
	if ((tmp6)){
		HX_STACK_LINE(506)
		tmp7 = (len > (int)0);
	}
	else{
		HX_STACK_LINE(506)
		tmp7 = false;
	}
	HX_STACK_LINE(506)
	if ((tmp7)){
		HX_STACK_LINE(507)
		::__hxcpp_string_of_bytes(this->b,result,p,len);
	}
	HX_STACK_LINE(509)
	::String tmp8 = result;		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(509)
	return tmp8;
}


HX_DEFINE_DYNAMIC_FUNC1(ByteArray_obj,readUTFBytes,return )

Void ByteArray_obj::setLength( int length){
{
		HX_STACK_FRAME("lime.utils.ByteArray","setLength",0x1f286d75,"lime.utils.ByteArray.setLength","lime/utils/ByteArray.hx",522,0x2063a1e5)
		HX_STACK_THIS(this)
		HX_STACK_ARG(length,"length")
		HX_STACK_LINE(524)
		bool tmp = (length > (int)0);		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(524)
		if ((tmp)){
			HX_STACK_LINE(525)
			int tmp1 = (length - (int)1);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(525)
			this->ensureElem(tmp1,false);
		}
		HX_STACK_LINE(526)
		this->length = length;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ByteArray_obj,setLength,(void))

::lime::utils::ByteArray ByteArray_obj::slice( int begin,Dynamic inEnd){
	HX_STACK_FRAME("lime.utils.ByteArray","slice",0x44803d1f,"lime.utils.ByteArray.slice","lime/utils/ByteArray.hx",533,0x2063a1e5)
	HX_STACK_THIS(this)
	HX_STACK_ARG(begin,"begin")
	HX_STACK_ARG(inEnd,"inEnd")
	HX_STACK_LINE(535)
	bool tmp = (begin < (int)0);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(535)
	if ((tmp)){
		HX_STACK_LINE(537)
		int tmp1 = this->length;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(537)
		hx::AddEq(begin,tmp1);
		HX_STACK_LINE(538)
		bool tmp2 = (begin < (int)0);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(538)
		if ((tmp2)){
			HX_STACK_LINE(539)
			begin = (int)0;
		}
	}
	HX_STACK_LINE(543)
	bool tmp1 = (inEnd == null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(543)
	int tmp2;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(543)
	if ((tmp1)){
		HX_STACK_LINE(543)
		tmp2 = this->length;
	}
	else{
		HX_STACK_LINE(543)
		tmp2 = inEnd;
	}
	HX_STACK_LINE(543)
	int end = tmp2;		HX_STACK_VAR(end,"end");
	HX_STACK_LINE(545)
	bool tmp3 = (end < (int)0);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(545)
	if ((tmp3)){
		HX_STACK_LINE(547)
		int tmp4 = this->length;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(547)
		hx::AddEq(end,tmp4);
		HX_STACK_LINE(549)
		bool tmp5 = (end < (int)0);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(549)
		if ((tmp5)){
			HX_STACK_LINE(550)
			end = (int)0;
		}
	}
	HX_STACK_LINE(554)
	bool tmp4 = (begin >= end);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(554)
	if ((tmp4)){
		HX_STACK_LINE(555)
		::lime::utils::ByteArray tmp5 = ::lime::utils::ByteArray_obj::__new(null());		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(555)
		return tmp5;
	}
	HX_STACK_LINE(557)
	int tmp5 = (end - begin);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(557)
	::lime::utils::ByteArray tmp6 = ::lime::utils::ByteArray_obj::__new(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(557)
	::lime::utils::ByteArray result = tmp6;		HX_STACK_VAR(result,"result");
	HX_STACK_LINE(559)
	int tmp7 = this->position;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(559)
	int opos = tmp7;		HX_STACK_VAR(opos,"opos");
	HX_STACK_LINE(560)
	int tmp8 = begin;		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(560)
	int tmp9 = (end - begin);		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(560)
	result->blit((int)0,hx::ObjectPtr<OBJ_>(this),tmp8,tmp9);
	HX_STACK_LINE(562)
	::lime::utils::ByteArray tmp10 = result;		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(562)
	return tmp10;
}


HX_DEFINE_DYNAMIC_FUNC2(ByteArray_obj,slice,return )

int ByteArray_obj::ThrowEOFi( ){
	HX_STACK_FRAME("lime.utils.ByteArray","ThrowEOFi",0x2ce113a0,"lime.utils.ByteArray.ThrowEOFi","lime/utils/ByteArray.hx",569,0x2063a1e5)
	HX_STACK_THIS(this)
	HX_STACK_LINE(571)
	HX_STACK_DO_THROW(HX_HCSTRING("new EOFError();","\x4e","\x2c","\xa3","\xf0"));
	HX_STACK_LINE(572)
	return (int)0;
}


HX_DEFINE_DYNAMIC_FUNC0(ByteArray_obj,ThrowEOFi,return )

::String ByteArray_obj::toString( ){
	HX_STACK_FRAME("lime.utils.ByteArray","toString",0xaed215ff,"lime.utils.ByteArray.toString","lime/utils/ByteArray.hx",578,0x2063a1e5)
	HX_STACK_THIS(this)
	HX_STACK_LINE(580)
	int tmp = this->position;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(580)
	int cachePosition = tmp;		HX_STACK_VAR(cachePosition,"cachePosition");
	HX_STACK_LINE(581)
	this->position = (int)0;
	HX_STACK_LINE(582)
	int tmp1 = this->length;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(582)
	::String tmp2 = this->readUTFBytes(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(582)
	::String value = tmp2;		HX_STACK_VAR(value,"value");
	HX_STACK_LINE(583)
	this->position = cachePosition;
	HX_STACK_LINE(584)
	::String tmp3 = value;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(584)
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC0(ByteArray_obj,toString,return )

Void ByteArray_obj::uncompress( ::lime::utils::CompressionAlgorithm algorithm){
{
		HX_STACK_FRAME("lime.utils.ByteArray","uncompress",0x5340af0e,"lime.utils.ByteArray.uncompress","lime/utils/ByteArray.hx",589,0x2063a1e5)
		HX_STACK_THIS(this)
		HX_STACK_ARG(algorithm,"algorithm")
		HX_STACK_LINE(605)
		bool tmp = (algorithm == null());		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(605)
		if ((tmp)){
			HX_STACK_LINE(605)
			algorithm = ::lime::utils::CompressionAlgorithm_obj::GZIP;
		}
		HX_STACK_LINE(610)
		::lime::utils::ByteArray src = hx::ObjectPtr<OBJ_>(this);		HX_STACK_VAR(src,"src");
		HX_STACK_LINE(613)
		::haxe::io::Bytes result;		HX_STACK_VAR(result,"result");
		HX_STACK_LINE(615)
		bool tmp1 = (algorithm == ::lime::utils::CompressionAlgorithm_obj::LZMA);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(615)
		if ((tmp1)){
			HX_STACK_LINE(617)
			::lime::utils::ByteArray tmp2 = src;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(617)
			::lime::utils::ByteArray tmp3 = ::lime::utils::ByteArray_obj::fromBytes(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(617)
			::lime::utils::ByteArray tmp4 = ::lime::utils::LZMA_obj::decode(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(617)
			result = tmp4;
		}
		else{
			HX_STACK_LINE(621)
			bool tmp2 = (algorithm != null());		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(621)
			int tmp3;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(621)
			if ((tmp2)){
				HX_STACK_LINE(621)
				switch( (int)(algorithm->__Index())){
					case (int)0: {
						HX_STACK_LINE(622)
						tmp3 = (int)-15;
					}
					;break;
					case (int)3: {
						HX_STACK_LINE(623)
						tmp3 = (int)31;
					}
					;break;
					default: {
						HX_STACK_LINE(624)
						tmp3 = (int)15;
					}
				}
			}
			else{
				HX_STACK_LINE(624)
				tmp3 = (int)15;
			}
			HX_STACK_LINE(621)
			int windowBits = tmp3;		HX_STACK_VAR(windowBits,"windowBits");
			HX_STACK_LINE(630)
			::lime::utils::ByteArray tmp4 = src;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(630)
			::haxe::io::Bytes tmp5 = ::haxe::zip::Uncompress_obj::run(tmp4,null());		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(630)
			result = tmp5;
		}
		HX_STACK_LINE(635)
		this->b = result->b;
		HX_STACK_LINE(636)
		this->length = result->length;
		HX_STACK_LINE(637)
		this->position = (int)0;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ByteArray_obj,uncompress,(void))

Void ByteArray_obj::write_uncheck( int byte){
{
		HX_STACK_FRAME("lime.utils.ByteArray","write_uncheck",0xb8315afc,"lime.utils.ByteArray.write_uncheck","lime/utils/ByteArray.hx",647,0x2063a1e5)
		HX_STACK_THIS(this)
		HX_STACK_ARG(byte,"byte")
		HX_STACK_LINE(651)
		int tmp = (this->position)++;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(651)
		int tmp1 = byte;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(651)
		this->b->__unsafe_set(tmp,tmp1);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ByteArray_obj,write_uncheck,(void))

Void ByteArray_obj::writeBoolean( bool value){
{
		HX_STACK_FRAME("lime.utils.ByteArray","writeBoolean",0x97597a5c,"lime.utils.ByteArray.writeBoolean","lime/utils/ByteArray.hx",662,0x2063a1e5)
		HX_STACK_THIS(this)
		HX_STACK_ARG(value,"value")
		HX_STACK_LINE(664)
		bool tmp = value;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(664)
		int tmp1;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(664)
		if ((tmp)){
			HX_STACK_LINE(664)
			tmp1 = (int)1;
		}
		else{
			HX_STACK_LINE(664)
			tmp1 = (int)0;
		}
		HX_STACK_LINE(664)
		this->writeByte(tmp1);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ByteArray_obj,writeBoolean,(void))

Void ByteArray_obj::writeByte( int value){
{
		HX_STACK_FRAME("lime.utils.ByteArray","writeByte",0x6a5076d4,"lime.utils.ByteArray.writeByte","lime/utils/ByteArray.hx",669,0x2063a1e5)
		HX_STACK_THIS(this)
		HX_STACK_ARG(value,"value")
		HX_STACK_LINE(677)
		int tmp = this->position;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(677)
		this->ensureElem(tmp,true);
		HX_STACK_LINE(681)
		int tmp1 = (this->position)++;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(681)
		unsigned char tmp2 = (int(value) & int((int)255));		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(681)
		this->b[tmp1] = tmp2;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ByteArray_obj,writeByte,(void))

Void ByteArray_obj::writeBytes( ::haxe::io::Bytes bytes,hx::Null< int >  __o_offset,hx::Null< int >  __o_length){
int offset = __o_offset.Default(0);
int length = __o_length.Default(0);
	HX_STACK_FRAME("lime.utils.ByteArray","writeBytes",0x9c17831f,"lime.utils.ByteArray.writeBytes","lime/utils/ByteArray.hx",688,0x2063a1e5)
	HX_STACK_THIS(this)
	HX_STACK_ARG(bytes,"bytes")
	HX_STACK_ARG(offset,"offset")
	HX_STACK_ARG(length,"length")
{
		HX_STACK_LINE(690)
		bool tmp = (bytes->length == (int)0);		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(690)
		if ((tmp)){
			HX_STACK_LINE(690)
			return null();
		}
		HX_STACK_LINE(698)
		bool tmp1 = (length == (int)0);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(698)
		if ((tmp1)){
			HX_STACK_LINE(698)
			int tmp2 = (bytes->length - offset);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(698)
			length = tmp2;
		}
		HX_STACK_LINE(699)
		int tmp2 = this->position;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(699)
		int tmp3 = tmp2;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(699)
		int tmp4 = length;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(699)
		int tmp5 = (tmp3 + tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(699)
		int tmp6 = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(699)
		int tmp7 = (tmp6 - (int)1);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(699)
		int tmp8 = tmp7;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(699)
		this->ensureElem(tmp8,true);
		HX_STACK_LINE(700)
		int tmp9 = this->position;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(700)
		int opos = tmp9;		HX_STACK_VAR(opos,"opos");
		HX_STACK_LINE(701)
		int tmp10 = this->position;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(701)
		int tmp11 = tmp10;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(701)
		int tmp12 = length;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(701)
		int tmp13 = (tmp11 + tmp12);		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(701)
		this->position = tmp13;
		HX_STACK_LINE(702)
		int tmp14 = opos;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(702)
		::haxe::io::Bytes tmp15 = bytes;		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(702)
		int tmp16 = offset;		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(702)
		int tmp17 = length;		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(702)
		this->blit(tmp14,tmp15,tmp16,tmp17);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(ByteArray_obj,writeBytes,(void))

Void ByteArray_obj::writeDouble( Float x){
{
		HX_STACK_FRAME("lime.utils.ByteArray","writeDouble",0x03d70ddd,"lime.utils.ByteArray.writeDouble","lime/utils/ByteArray.hx",708,0x2063a1e5)
		HX_STACK_THIS(this)
		HX_STACK_ARG(x,"x")
		HX_STACK_LINE(715)
		int tmp = this->position;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(715)
		int tmp1 = (tmp + (int)7);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(715)
		this->ensureElem(tmp1,true);
		HX_STACK_LINE(716)
		int tmp2 = this->position;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(716)
		Float tmp3 = x;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(716)
		this->setDouble(tmp2,tmp3);
		HX_STACK_LINE(717)
		hx::AddEq(this->position,(int)8);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ByteArray_obj,writeDouble,(void))

Void ByteArray_obj::writeFile( ::String path){
{
		HX_STACK_FRAME("lime.utils.ByteArray","writeFile",0x6ce92648,"lime.utils.ByteArray.writeFile","lime/utils/ByteArray.hx",723,0x2063a1e5)
		HX_STACK_THIS(this)
		HX_STACK_ARG(path,"path")
		HX_STACK_LINE(726)
		::String tmp = path;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(726)
		::sys::io::File_obj::saveBytes(tmp,hx::ObjectPtr<OBJ_>(this));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ByteArray_obj,writeFile,(void))

Void ByteArray_obj::writeFloat( Float x){
{
		HX_STACK_FRAME("lime.utils.ByteArray","writeFloat",0xe1164050,"lime.utils.ByteArray.writeFloat","lime/utils/ByteArray.hx",732,0x2063a1e5)
		HX_STACK_THIS(this)
		HX_STACK_ARG(x,"x")
		HX_STACK_LINE(739)
		int tmp = this->position;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(739)
		int tmp1 = (tmp + (int)3);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(739)
		this->ensureElem(tmp1,true);
		HX_STACK_LINE(740)
		int tmp2 = this->position;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(740)
		Float tmp3 = x;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(740)
		this->setFloat(tmp2,tmp3);
		HX_STACK_LINE(741)
		hx::AddEq(this->position,(int)4);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ByteArray_obj,writeFloat,(void))

Void ByteArray_obj::writeInt( int value){
{
		HX_STACK_FRAME("lime.utils.ByteArray","writeInt",0x9a53b2a3,"lime.utils.ByteArray.writeInt","lime/utils/ByteArray.hx",747,0x2063a1e5)
		HX_STACK_THIS(this)
		HX_STACK_ARG(value,"value")
		HX_STACK_LINE(754)
		int tmp = this->position;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(754)
		int tmp1 = (tmp + (int)3);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(754)
		this->ensureElem(tmp1,true);
		HX_STACK_LINE(756)
		bool tmp2 = this->littleEndian;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(756)
		if ((tmp2)){
			HX_STACK_LINE(758)
			{
				HX_STACK_LINE(758)
				int tmp3 = (this->position)++;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(758)
				int tmp4 = value;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(758)
				this->b->__unsafe_set(tmp3,tmp4);
			}
			HX_STACK_LINE(759)
			{
				HX_STACK_LINE(759)
				int tmp3 = (this->position)++;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(759)
				int tmp4 = (int(value) >> int((int)8));		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(759)
				this->b->__unsafe_set(tmp3,tmp4);
			}
			HX_STACK_LINE(760)
			{
				HX_STACK_LINE(760)
				int tmp3 = (this->position)++;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(760)
				int tmp4 = (int(value) >> int((int)16));		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(760)
				this->b->__unsafe_set(tmp3,tmp4);
			}
			HX_STACK_LINE(761)
			{
				HX_STACK_LINE(761)
				int tmp3 = (this->position)++;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(761)
				int tmp4 = (int(value) >> int((int)24));		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(761)
				this->b->__unsafe_set(tmp3,tmp4);
			}
		}
		else{
			HX_STACK_LINE(765)
			{
				HX_STACK_LINE(765)
				int tmp3 = (this->position)++;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(765)
				int tmp4 = (int(value) >> int((int)24));		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(765)
				this->b->__unsafe_set(tmp3,tmp4);
			}
			HX_STACK_LINE(766)
			{
				HX_STACK_LINE(766)
				int tmp3 = (this->position)++;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(766)
				int tmp4 = (int(value) >> int((int)16));		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(766)
				this->b->__unsafe_set(tmp3,tmp4);
			}
			HX_STACK_LINE(767)
			{
				HX_STACK_LINE(767)
				int tmp3 = (this->position)++;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(767)
				int tmp4 = (int(value) >> int((int)8));		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(767)
				this->b->__unsafe_set(tmp3,tmp4);
			}
			HX_STACK_LINE(768)
			{
				HX_STACK_LINE(768)
				int tmp3 = (this->position)++;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(768)
				int tmp4 = value;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(768)
				this->b->__unsafe_set(tmp3,tmp4);
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ByteArray_obj,writeInt,(void))

Void ByteArray_obj::writeShort( int value){
{
		HX_STACK_FRAME("lime.utils.ByteArray","writeShort",0x5aa6ff30,"lime.utils.ByteArray.writeShort","lime/utils/ByteArray.hx",776,0x2063a1e5)
		HX_STACK_THIS(this)
		HX_STACK_ARG(value,"value")
		HX_STACK_LINE(783)
		int tmp = this->position;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(783)
		int tmp1 = (tmp + (int)1);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(783)
		this->ensureElem(tmp1,true);
		HX_STACK_LINE(785)
		bool tmp2 = this->littleEndian;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(785)
		if ((tmp2)){
			HX_STACK_LINE(787)
			{
				HX_STACK_LINE(787)
				int tmp3 = (this->position)++;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(787)
				int tmp4 = value;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(787)
				this->b->__unsafe_set(tmp3,tmp4);
			}
			HX_STACK_LINE(788)
			{
				HX_STACK_LINE(788)
				int tmp3 = (this->position)++;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(788)
				int tmp4 = (int(value) >> int((int)8));		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(788)
				this->b->__unsafe_set(tmp3,tmp4);
			}
		}
		else{
			HX_STACK_LINE(792)
			{
				HX_STACK_LINE(792)
				int tmp3 = (this->position)++;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(792)
				int tmp4 = (int(value) >> int((int)8));		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(792)
				this->b->__unsafe_set(tmp3,tmp4);
			}
			HX_STACK_LINE(793)
			{
				HX_STACK_LINE(793)
				int tmp3 = (this->position)++;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(793)
				int tmp4 = value;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(793)
				this->b->__unsafe_set(tmp3,tmp4);
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ByteArray_obj,writeShort,(void))

Void ByteArray_obj::writeUnsignedInt( int value){
{
		HX_STACK_FRAME("lime.utils.ByteArray","writeUnsignedInt",0x9d6624ae,"lime.utils.ByteArray.writeUnsignedInt","lime/utils/ByteArray.hx",802,0x2063a1e5)
		HX_STACK_THIS(this)
		HX_STACK_ARG(value,"value")
		HX_STACK_LINE(809)
		int tmp = value;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(809)
		this->writeInt(tmp);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ByteArray_obj,writeUnsignedInt,(void))

Void ByteArray_obj::writeUnsignedShort( int value){
{
		HX_STACK_FRAME("lime.utils.ByteArray","writeUnsignedShort",0x1cc249fb,"lime.utils.ByteArray.writeUnsignedShort","lime/utils/ByteArray.hx",815,0x2063a1e5)
		HX_STACK_THIS(this)
		HX_STACK_ARG(value,"value")
		HX_STACK_LINE(822)
		int tmp = value;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(822)
		this->writeShort(tmp);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ByteArray_obj,writeUnsignedShort,(void))

Void ByteArray_obj::writeUTF( ::String value){
{
		HX_STACK_FRAME("lime.utils.ByteArray","writeUTF",0x9a5cb6db,"lime.utils.ByteArray.writeUTF","lime/utils/ByteArray.hx",828,0x2063a1e5)
		HX_STACK_THIS(this)
		HX_STACK_ARG(value,"value")
		HX_STACK_LINE(837)
		::String tmp = value;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(837)
		::haxe::io::Bytes tmp1 = ::haxe::io::Bytes_obj::ofString(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(837)
		::haxe::io::Bytes bytes = tmp1;		HX_STACK_VAR(bytes,"bytes");
		HX_STACK_LINE(839)
		int tmp2 = bytes->length;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(839)
		this->writeShort(tmp2);
		HX_STACK_LINE(840)
		::haxe::io::Bytes tmp3 = bytes;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(840)
		this->writeBytes(tmp3,null(),null());
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ByteArray_obj,writeUTF,(void))

Void ByteArray_obj::writeUTFBytes( ::String value){
{
		HX_STACK_FRAME("lime.utils.ByteArray","writeUTFBytes",0x2cbd0790,"lime.utils.ByteArray.writeUTFBytes","lime/utils/ByteArray.hx",846,0x2063a1e5)
		HX_STACK_THIS(this)
		HX_STACK_ARG(value,"value")
		HX_STACK_LINE(883)
		::String tmp = value;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(883)
		::haxe::io::Bytes tmp1 = ::haxe::io::Bytes_obj::ofString(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(883)
		::haxe::io::Bytes bytes = tmp1;		HX_STACK_VAR(bytes,"bytes");
		HX_STACK_LINE(885)
		::haxe::io::Bytes tmp2 = bytes;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(885)
		this->writeBytes(tmp2,null(),null());
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ByteArray_obj,writeUTFBytes,(void))

Void ByteArray_obj::__fromBytes( ::haxe::io::Bytes bytes){
{
		HX_STACK_FRAME("lime.utils.ByteArray","__fromBytes",0xdc5fcc0e,"lime.utils.ByteArray.__fromBytes","lime/utils/ByteArray.hx",891,0x2063a1e5)
		HX_STACK_THIS(this)
		HX_STACK_ARG(bytes,"bytes")
		HX_STACK_LINE(898)
		this->b = bytes->b;
		HX_STACK_LINE(899)
		this->length = bytes->length;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ByteArray_obj,__fromBytes,(void))

int ByteArray_obj::__get( int pos){
	HX_STACK_FRAME("lime.utils.ByteArray","__get",0xb7e35a43,"lime.utils.ByteArray.__get","lime/utils/ByteArray.hx",918,0x2063a1e5)
	HX_STACK_THIS(this)
	HX_STACK_ARG(pos,"pos")
	HX_STACK_LINE(926)
	int tmp = this->b->__get(pos);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(926)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC1(ByteArray_obj,__get,return )

Dynamic ByteArray_obj::__getNativePointer( ){
	HX_STACK_FRAME("lime.utils.ByteArray","__getNativePointer",0x110c17a3,"lime.utils.ByteArray.__getNativePointer","lime/utils/ByteArray.hx",945,0x2063a1e5)
	HX_STACK_THIS(this)
	HX_STACK_LINE(947)
	Dynamic tmp = ::lime::utils::ByteArray_obj::lime_bytes_get_data_pointer(hx::ObjectPtr<OBJ_>(this));		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(947)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(ByteArray_obj,__getNativePointer,return )

Void ByteArray_obj::__set( int pos,int v){
{
		HX_STACK_FRAME("lime.utils.ByteArray","__set",0xb7ec754f,"lime.utils.ByteArray.__set","lime/utils/ByteArray.hx",1024,0x2063a1e5)
		HX_STACK_THIS(this)
		HX_STACK_ARG(pos,"pos")
		HX_STACK_ARG(v,"v")
		HX_STACK_LINE(1031)
		int tmp = v;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(1031)
		this->b[pos] = tmp;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(ByteArray_obj,__set,(void))

bool ByteArray_obj::get_bigEndian( ){
	HX_STACK_FRAME("lime.utils.ByteArray","get_bigEndian",0x3400371f,"lime.utils.ByteArray.get_bigEndian","lime/utils/ByteArray.hx",1048,0x2063a1e5)
	HX_STACK_THIS(this)
	HX_STACK_LINE(1048)
	bool tmp = this->littleEndian;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1048)
	bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(1048)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(ByteArray_obj,get_bigEndian,return )

bool ByteArray_obj::set_bigEndian( bool value){
	HX_STACK_FRAME("lime.utils.ByteArray","set_bigEndian",0x7906192b,"lime.utils.ByteArray.set_bigEndian","lime/utils/ByteArray.hx",1049,0x2063a1e5)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(1049)
	bool tmp = value;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1049)
	bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(1049)
	this->littleEndian = tmp1;
	HX_STACK_LINE(1049)
	bool tmp2 = value;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(1049)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC1(ByteArray_obj,set_bigEndian,return )

int ByteArray_obj::get_bytesAvailable( ){
	HX_STACK_FRAME("lime.utils.ByteArray","get_bytesAvailable",0x625f77ba,"lime.utils.ByteArray.get_bytesAvailable","lime/utils/ByteArray.hx",1053,0x2063a1e5)
	HX_STACK_THIS(this)
	HX_STACK_LINE(1055)
	int tmp = this->length;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1055)
	int tmp1 = this->position;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(1055)
	int tmp2 = (tmp - tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(1055)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC0(ByteArray_obj,get_bytesAvailable,return )

int ByteArray_obj::get_byteLength( ){
	HX_STACK_FRAME("lime.utils.ByteArray","get_byteLength",0x941c2bea,"lime.utils.ByteArray.get_byteLength","lime/utils/ByteArray.hx",1061,0x2063a1e5)
	HX_STACK_THIS(this)
	HX_STACK_LINE(1063)
	int tmp = this->length;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1063)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(ByteArray_obj,get_byteLength,return )

::String ByteArray_obj::get_endian( ){
	HX_STACK_FRAME("lime.utils.ByteArray","get_endian",0x34cd8877,"lime.utils.ByteArray.get_endian","lime/utils/ByteArray.hx",1069,0x2063a1e5)
	HX_STACK_THIS(this)
	HX_STACK_LINE(1071)
	bool tmp = this->littleEndian;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1071)
	::String tmp1;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(1071)
	if ((tmp)){
		HX_STACK_LINE(1071)
		tmp1 = HX_HCSTRING("littleEndian","\x31","\x2e","\x7b","\x07");
	}
	else{
		HX_STACK_LINE(1071)
		tmp1 = HX_HCSTRING("bigEndian","\x7b","\xd5","\x5a","\x20");
	}
	HX_STACK_LINE(1071)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(ByteArray_obj,get_endian,return )

::String ByteArray_obj::set_endian( ::String endian){
	HX_STACK_FRAME("lime.utils.ByteArray","set_endian",0x384b26eb,"lime.utils.ByteArray.set_endian","lime/utils/ByteArray.hx",1076,0x2063a1e5)
	HX_STACK_THIS(this)
	HX_STACK_ARG(endian,"endian")
	HX_STACK_LINE(1078)
	bool tmp = (endian == HX_HCSTRING("littleEndian","\x31","\x2e","\x7b","\x07"));		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1078)
	this->littleEndian = tmp;
	HX_STACK_LINE(1079)
	::String tmp1 = endian;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(1079)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC1(ByteArray_obj,set_endian,return )

int ByteArray_obj::set_length( int value){
	HX_STACK_FRAME("lime.utils.ByteArray","set_length",0xdcca2336,"lime.utils.ByteArray.set_length","lime/utils/ByteArray.hx",1084,0x2063a1e5)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(1093)
	int tmp = value;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1093)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC1(ByteArray_obj,set_length,return )

::lime::utils::ByteArray ByteArray_obj::fromBytes( ::haxe::io::Bytes bytes){
	HX_STACK_FRAME("lime.utils.ByteArray","fromBytes",0x929a55ee,"lime.utils.ByteArray.fromBytes","lime/utils/ByteArray.hx",220,0x2063a1e5)
	HX_STACK_ARG(bytes,"bytes")
	HX_STACK_LINE(222)
	::lime::utils::ByteArray tmp = ::lime::utils::ByteArray_obj::__new(null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(222)
	::lime::utils::ByteArray result = tmp;		HX_STACK_VAR(result,"result");
	HX_STACK_LINE(223)
	{
		HX_STACK_LINE(223)
		result->b = bytes->b;
		HX_STACK_LINE(223)
		result->length = bytes->length;
	}
	HX_STACK_LINE(224)
	::lime::utils::ByteArray tmp1 = result;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(224)
	return tmp1;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(ByteArray_obj,fromBytes,return )

::lime::utils::ByteArray ByteArray_obj::readFile( ::String path){
	HX_STACK_FRAME("lime.utils.ByteArray","readFile",0xe216ee45,"lime.utils.ByteArray.readFile","lime/utils/ByteArray.hx",329,0x2063a1e5)
	HX_STACK_ARG(path,"path")
	HX_STACK_LINE(332)
	::String tmp = path;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(332)
	Dynamic tmp1 = ::lime::utils::ByteArray_obj::lime_bytes_read_file(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(332)
	Dynamic data = tmp1;		HX_STACK_VAR(data,"data");
	HX_STACK_LINE(333)
	bool tmp2 = (data != null());		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(333)
	if ((tmp2)){
		HX_STACK_LINE(333)
		::haxe::io::Bytes tmp3 = ::haxe::io::Bytes_obj::__new(data->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic ),data->__Field(HX_HCSTRING("b","\x62","\x00","\x00","\x00"), hx::paccDynamic ));		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(333)
		::lime::utils::ByteArray tmp4 = ::lime::utils::ByteArray_obj::fromBytes(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(333)
		return tmp4;
	}
	HX_STACK_LINE(335)
	return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(ByteArray_obj,readFile,return )

::lime::utils::ByteArray ByteArray_obj::__fromNativePointer( Dynamic data,int length){
	HX_STACK_FRAME("lime.utils.ByteArray","__fromNativePointer",0x00ab2e89,"lime.utils.ByteArray.__fromNativePointer","lime/utils/ByteArray.hx",909,0x2063a1e5)
	HX_STACK_ARG(data,"data")
	HX_STACK_ARG(length,"length")
	HX_STACK_LINE(911)
	Dynamic tmp = data;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(911)
	int tmp1 = length;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(911)
	Dynamic tmp2 = ::lime::utils::ByteArray_obj::lime_bytes_from_data_pointer(tmp,tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(911)
	Dynamic bytes = tmp2;		HX_STACK_VAR(bytes,"bytes");
	HX_STACK_LINE(912)
	::haxe::io::Bytes tmp3 = ::haxe::io::Bytes_obj::__new(bytes->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic ),bytes->__Field(HX_HCSTRING("b","\x62","\x00","\x00","\x00"), hx::paccDynamic ));		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(912)
	::lime::utils::ByteArray tmp4 = ::lime::utils::ByteArray_obj::fromBytes(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(912)
	return tmp4;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(ByteArray_obj,__fromNativePointer,return )

Dynamic ByteArray_obj::lime_bytes_from_data_pointer;

Dynamic ByteArray_obj::lime_bytes_get_data_pointer;

Dynamic ByteArray_obj::lime_bytes_read_file;


ByteArray_obj::ByteArray_obj()
{
}

Dynamic ByteArray_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"clear") ) { return clear_dyn(); }
		if (HX_FIELD_EQ(inName,"slice") ) { return slice_dyn(); }
		if (HX_FIELD_EQ(inName,"__get") ) { return __get_dyn(); }
		if (HX_FIELD_EQ(inName,"__set") ) { return __set_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"endian") ) { if (inCallProp == hx::paccAlways) return get_endian(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"deflate") ) { return deflate_dyn(); }
		if (HX_FIELD_EQ(inName,"inflate") ) { return inflate_dyn(); }
		if (HX_FIELD_EQ(inName,"readInt") ) { return readInt_dyn(); }
		if (HX_FIELD_EQ(inName,"readUTF") ) { return readUTF_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"position") ) { return position; }
		if (HX_FIELD_EQ(inName,"asString") ) { return asString_dyn(); }
		if (HX_FIELD_EQ(inName,"compress") ) { return compress_dyn(); }
		if (HX_FIELD_EQ(inName,"getStart") ) { return getStart_dyn(); }
		if (HX_FIELD_EQ(inName,"readByte") ) { return readByte_dyn(); }
		if (HX_FIELD_EQ(inName,"toString") ) { return toString_dyn(); }
		if (HX_FIELD_EQ(inName,"writeInt") ) { return writeInt_dyn(); }
		if (HX_FIELD_EQ(inName,"writeUTF") ) { return writeUTF_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"allocated") ) { return allocated; }
		if (HX_FIELD_EQ(inName,"bigEndian") ) { if (inCallProp == hx::paccAlways) return get_bigEndian(); }
		if (HX_FIELD_EQ(inName,"checkData") ) { return checkData_dyn(); }
		if (HX_FIELD_EQ(inName,"getLength") ) { return getLength_dyn(); }
		if (HX_FIELD_EQ(inName,"readBytes") ) { return readBytes_dyn(); }
		if (HX_FIELD_EQ(inName,"readFloat") ) { return readFloat_dyn(); }
		if (HX_FIELD_EQ(inName,"readShort") ) { return readShort_dyn(); }
		if (HX_FIELD_EQ(inName,"setLength") ) { return setLength_dyn(); }
		if (HX_FIELD_EQ(inName,"ThrowEOFi") ) { return ThrowEOFi_dyn(); }
		if (HX_FIELD_EQ(inName,"writeByte") ) { return writeByte_dyn(); }
		if (HX_FIELD_EQ(inName,"writeFile") ) { return writeFile_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"byteLength") ) { return inCallProp == hx::paccAlways ? get_byteLength() : byteLength; }
		if (HX_FIELD_EQ(inName,"ensureElem") ) { return ensureElem_dyn(); }
		if (HX_FIELD_EQ(inName,"readDouble") ) { return readDouble_dyn(); }
		if (HX_FIELD_EQ(inName,"uncompress") ) { return uncompress_dyn(); }
		if (HX_FIELD_EQ(inName,"writeBytes") ) { return writeBytes_dyn(); }
		if (HX_FIELD_EQ(inName,"writeFloat") ) { return writeFloat_dyn(); }
		if (HX_FIELD_EQ(inName,"writeShort") ) { return writeShort_dyn(); }
		if (HX_FIELD_EQ(inName,"get_endian") ) { return get_endian_dyn(); }
		if (HX_FIELD_EQ(inName,"set_endian") ) { return set_endian_dyn(); }
		if (HX_FIELD_EQ(inName,"set_length") ) { return set_length_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"readBoolean") ) { return readBoolean_dyn(); }
		if (HX_FIELD_EQ(inName,"writeDouble") ) { return writeDouble_dyn(); }
		if (HX_FIELD_EQ(inName,"__fromBytes") ) { return __fromBytes_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"littleEndian") ) { return littleEndian; }
		if (HX_FIELD_EQ(inName,"readUTFBytes") ) { return readUTFBytes_dyn(); }
		if (HX_FIELD_EQ(inName,"writeBoolean") ) { return writeBoolean_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"getByteBuffer") ) { return getByteBuffer_dyn(); }
		if (HX_FIELD_EQ(inName,"readMultiByte") ) { return readMultiByte_dyn(); }
		if (HX_FIELD_EQ(inName,"write_uncheck") ) { return write_uncheck_dyn(); }
		if (HX_FIELD_EQ(inName,"writeUTFBytes") ) { return writeUTFBytes_dyn(); }
		if (HX_FIELD_EQ(inName,"get_bigEndian") ) { return get_bigEndian_dyn(); }
		if (HX_FIELD_EQ(inName,"set_bigEndian") ) { return set_bigEndian_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"bytesAvailable") ) { return inCallProp == hx::paccAlways ? get_bytesAvailable() : bytesAvailable; }
		if (HX_FIELD_EQ(inName,"objectEncoding") ) { return objectEncoding; }
		if (HX_FIELD_EQ(inName,"get_byteLength") ) { return get_byteLength_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"readUnsignedInt") ) { return readUnsignedInt_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"readUnsignedByte") ) { return readUnsignedByte_dyn(); }
		if (HX_FIELD_EQ(inName,"writeUnsignedInt") ) { return writeUnsignedInt_dyn(); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"readUnsignedShort") ) { return readUnsignedShort_dyn(); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"writeUnsignedShort") ) { return writeUnsignedShort_dyn(); }
		if (HX_FIELD_EQ(inName,"__getNativePointer") ) { return __getNativePointer_dyn(); }
		if (HX_FIELD_EQ(inName,"get_bytesAvailable") ) { return get_bytesAvailable_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

bool ByteArray_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"readFile") ) { outValue = readFile_dyn(); return true;  }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"fromBytes") ) { outValue = fromBytes_dyn(); return true;  }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"__fromNativePointer") ) { outValue = __fromNativePointer_dyn(); return true;  }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"lime_bytes_read_file") ) { outValue = lime_bytes_read_file; return true;  }
		break;
	case 27:
		if (HX_FIELD_EQ(inName,"lime_bytes_get_data_pointer") ) { outValue = lime_bytes_get_data_pointer; return true;  }
		break;
	case 28:
		if (HX_FIELD_EQ(inName,"lime_bytes_from_data_pointer") ) { outValue = lime_bytes_from_data_pointer; return true;  }
	}
	return false;
}

Dynamic ByteArray_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"endian") ) { if (inCallProp == hx::paccAlways) return set_endian(inValue); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"position") ) { position=inValue.Cast< int >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"allocated") ) { allocated=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"bigEndian") ) { if (inCallProp == hx::paccAlways) return set_bigEndian(inValue); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"byteLength") ) { byteLength=inValue.Cast< int >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"littleEndian") ) { littleEndian=inValue.Cast< bool >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"bytesAvailable") ) { bytesAvailable=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"objectEncoding") ) { objectEncoding=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool ByteArray_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 20:
		if (HX_FIELD_EQ(inName,"lime_bytes_read_file") ) { lime_bytes_read_file=ioValue.Cast< Dynamic >(); return true; }
		break;
	case 27:
		if (HX_FIELD_EQ(inName,"lime_bytes_get_data_pointer") ) { lime_bytes_get_data_pointer=ioValue.Cast< Dynamic >(); return true; }
		break;
	case 28:
		if (HX_FIELD_EQ(inName,"lime_bytes_from_data_pointer") ) { lime_bytes_from_data_pointer=ioValue.Cast< Dynamic >(); return true; }
	}
	return false;
}

void ByteArray_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("bytesAvailable","\xde","\x4b","\x9d","\x9b"));
	outFields->push(HX_HCSTRING("endian","\x9b","\x98","\x88","\xfa"));
	outFields->push(HX_HCSTRING("objectEncoding","\xb2","\x1e","\x15","\x2a"));
	outFields->push(HX_HCSTRING("position","\xa9","\xa0","\xfa","\xca"));
	outFields->push(HX_HCSTRING("allocated","\x07","\x93","\x8d","\x3c"));
	outFields->push(HX_HCSTRING("littleEndian","\x31","\x2e","\x7b","\x07"));
	outFields->push(HX_HCSTRING("bigEndian","\x7b","\xd5","\x5a","\x20"));
	outFields->push(HX_HCSTRING("byteLength","\x0e","\x1e","\x0c","\x77"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsInt,(int)offsetof(ByteArray_obj,bytesAvailable),HX_HCSTRING("bytesAvailable","\xde","\x4b","\x9d","\x9b")},
	{hx::fsInt,(int)offsetof(ByteArray_obj,objectEncoding),HX_HCSTRING("objectEncoding","\xb2","\x1e","\x15","\x2a")},
	{hx::fsInt,(int)offsetof(ByteArray_obj,position),HX_HCSTRING("position","\xa9","\xa0","\xfa","\xca")},
	{hx::fsInt,(int)offsetof(ByteArray_obj,allocated),HX_HCSTRING("allocated","\x07","\x93","\x8d","\x3c")},
	{hx::fsBool,(int)offsetof(ByteArray_obj,littleEndian),HX_HCSTRING("littleEndian","\x31","\x2e","\x7b","\x07")},
	{hx::fsInt,(int)offsetof(ByteArray_obj,byteLength),HX_HCSTRING("byteLength","\x0e","\x1e","\x0c","\x77")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo sStaticStorageInfo[] = {
	{hx::fsObject /*Dynamic*/ ,(void *) &ByteArray_obj::lime_bytes_from_data_pointer,HX_HCSTRING("lime_bytes_from_data_pointer","\x1f","\x3b","\x02","\x90")},
	{hx::fsObject /*Dynamic*/ ,(void *) &ByteArray_obj::lime_bytes_get_data_pointer,HX_HCSTRING("lime_bytes_get_data_pointer","\xaf","\xff","\x82","\x7b")},
	{hx::fsObject /*Dynamic*/ ,(void *) &ByteArray_obj::lime_bytes_read_file,HX_HCSTRING("lime_bytes_read_file","\xc7","\xb2","\x82","\xba")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("bytesAvailable","\xde","\x4b","\x9d","\x9b"),
	HX_HCSTRING("objectEncoding","\xb2","\x1e","\x15","\x2a"),
	HX_HCSTRING("position","\xa9","\xa0","\xfa","\xca"),
	HX_HCSTRING("allocated","\x07","\x93","\x8d","\x3c"),
	HX_HCSTRING("littleEndian","\x31","\x2e","\x7b","\x07"),
	HX_HCSTRING("byteLength","\x0e","\x1e","\x0c","\x77"),
	HX_HCSTRING("asString","\x63","\x33","\x06","\xa0"),
	HX_HCSTRING("checkData","\x12","\x1f","\x43","\x96"),
	HX_HCSTRING("clear","\x8d","\x71","\x5b","\x48"),
	HX_HCSTRING("compress","\xa2","\x47","\xbf","\x83"),
	HX_HCSTRING("deflate","\x6b","\x0b","\xfa","\xa2"),
	HX_HCSTRING("ensureElem","\x6d","\xb1","\x2a","\x1e"),
	HX_HCSTRING("getLength","\x1c","\x1e","\x5e","\x1b"),
	HX_HCSTRING("getByteBuffer","\x5e","\xa2","\x0b","\x05"),
	HX_HCSTRING("getStart","\xec","\x83","\xe2","\xe3"),
	HX_HCSTRING("inflate","\x87","\x9c","\x1b","\x0c"),
	HX_HCSTRING("readBoolean","\xf2","\x7d","\xea","\xd0"),
	HX_HCSTRING("readByte","\x7e","\xf9","\x1a","\x69"),
	HX_HCSTRING("readBytes","\x35","\x55","\x7f","\x8e"),
	HX_HCSTRING("readDouble","\x07","\x0f","\x47","\x2c"),
	HX_HCSTRING("readFloat","\x66","\x12","\x7e","\xd3"),
	HX_HCSTRING("readInt","\x39","\xb3","\xc9","\x02"),
	HX_HCSTRING("readMultiByte","\xeb","\x7f","\xc9","\x15"),
	HX_HCSTRING("readShort","\x46","\xd1","\x0e","\x4d"),
	HX_HCSTRING("readUnsignedByte","\x13","\x0b","\xce","\x9b"),
	HX_HCSTRING("readUnsignedInt","\x44","\xab","\x4f","\x05"),
	HX_HCSTRING("readUnsignedShort","\x11","\x22","\x0b","\x77"),
	HX_HCSTRING("readUTF","\x71","\xb7","\xd2","\x02"),
	HX_HCSTRING("readUTFBytes","\x3a","\x27","\x0f","\x52"),
	HX_HCSTRING("setLength","\x28","\x0a","\xaf","\xfe"),
	HX_HCSTRING("slice","\x52","\xc4","\xc7","\x7e"),
	HX_HCSTRING("ThrowEOFi","\x53","\xb0","\x67","\x0c"),
	HX_HCSTRING("toString","\xac","\xd0","\x6e","\x38"),
	HX_HCSTRING("uncompress","\xfb","\x2e","\x83","\x09"),
	HX_HCSTRING("write_uncheck","\x2f","\xcd","\xef","\x65"),
	HX_HCSTRING("writeBoolean","\x89","\x8f","\x2d","\x43"),
	HX_HCSTRING("writeByte","\x87","\x13","\xd7","\x49"),
	HX_HCSTRING("writeBytes","\x0c","\x03","\x5a","\x52"),
	HX_HCSTRING("writeDouble","\x50","\x7d","\xc4","\xc7"),
	HX_HCSTRING("writeFile","\xfb","\xc2","\x6f","\x4c"),
	HX_HCSTRING("writeFloat","\x3d","\xc0","\x58","\x97"),
	HX_HCSTRING("writeInt","\x50","\x6d","\xf0","\x23"),
	HX_HCSTRING("writeShort","\x1d","\x7f","\xe9","\x10"),
	HX_HCSTRING("writeUnsignedInt","\x5b","\xd4","\x70","\x16"),
	HX_HCSTRING("writeUnsignedShort","\xe8","\xfe","\x99","\xf1"),
	HX_HCSTRING("writeUTF","\x88","\x71","\xf9","\x23"),
	HX_HCSTRING("writeUTFBytes","\xc3","\x79","\x7b","\xda"),
	HX_HCSTRING("__fromBytes","\x81","\x3b","\x4d","\xa0"),
	HX_HCSTRING("__get","\x76","\xe1","\x2a","\xf2"),
	HX_HCSTRING("__getNativePointer","\x90","\xcc","\xe3","\xe5"),
	HX_HCSTRING("__set","\x82","\xfc","\x33","\xf2"),
	HX_HCSTRING("get_bigEndian","\x52","\xa9","\xbe","\xe1"),
	HX_HCSTRING("set_bigEndian","\x5e","\x8b","\xc4","\x26"),
	HX_HCSTRING("get_bytesAvailable","\xa7","\x2c","\x37","\x37"),
	HX_HCSTRING("get_byteLength","\x57","\xa6","\x01","\xed"),
	HX_HCSTRING("get_endian","\x64","\x08","\x10","\xeb"),
	HX_HCSTRING("set_endian","\xd8","\xa6","\x8d","\xee"),
	HX_HCSTRING("set_length","\x23","\xa3","\x0c","\x93"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ByteArray_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(ByteArray_obj::lime_bytes_from_data_pointer,"lime_bytes_from_data_pointer");
	HX_MARK_MEMBER_NAME(ByteArray_obj::lime_bytes_get_data_pointer,"lime_bytes_get_data_pointer");
	HX_MARK_MEMBER_NAME(ByteArray_obj::lime_bytes_read_file,"lime_bytes_read_file");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ByteArray_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(ByteArray_obj::lime_bytes_from_data_pointer,"lime_bytes_from_data_pointer");
	HX_VISIT_MEMBER_NAME(ByteArray_obj::lime_bytes_get_data_pointer,"lime_bytes_get_data_pointer");
	HX_VISIT_MEMBER_NAME(ByteArray_obj::lime_bytes_read_file,"lime_bytes_read_file");
};

#endif

hx::Class ByteArray_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("fromBytes","\xa1","\xf2","\x20","\x72"),
	HX_HCSTRING("readFile","\xf2","\xa8","\xb3","\x6b"),
	HX_HCSTRING("__fromNativePointer","\xfc","\xc8","\x91","\x68"),
	HX_HCSTRING("lime_bytes_from_data_pointer","\x1f","\x3b","\x02","\x90"),
	HX_HCSTRING("lime_bytes_get_data_pointer","\xaf","\xff","\x82","\x7b"),
	HX_HCSTRING("lime_bytes_read_file","\xc7","\xb2","\x82","\xba"),
	::String(null()) };

void ByteArray_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("lime.utils.ByteArray","\x7b","\x11","\x5b","\x03");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &ByteArray_obj::__GetStatic;
	__mClass->mSetStaticField = &ByteArray_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< ByteArray_obj >;
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

void ByteArray_obj::__boot()
{
	lime_bytes_from_data_pointer= ::lime::_system::System_obj::load(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_bytes_from_data_pointer","\x1f","\x3b","\x02","\x90"),(int)2,null());
	lime_bytes_get_data_pointer= ::lime::_system::System_obj::load(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_bytes_get_data_pointer","\xaf","\xff","\x82","\x7b"),(int)1,null());
	lime_bytes_read_file= ::lime::_system::System_obj::load(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_bytes_read_file","\xc7","\xb2","\x82","\xba"),(int)1,null());
}

} // end namespace lime
} // end namespace utils
