#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_haxe_IMap
#include <haxe/IMap.h>
#endif
#ifndef INCLUDED_haxe_ds_IntMap
#include <haxe/ds/IntMap.h>
#endif
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
#ifndef INCLUDED_lime_math_Vector2
#include <lime/math/Vector2.h>
#endif
#ifndef INCLUDED_lime_system_Endian
#include <lime/system/Endian.h>
#endif
#ifndef INCLUDED_lime_system_System
#include <lime/system/System.h>
#endif
#ifndef INCLUDED_lime_text_Font
#include <lime/text/Font.h>
#endif
#ifndef INCLUDED_lime_text_GlyphMetrics
#include <lime/text/GlyphMetrics.h>
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
#ifndef INCLUDED_lime_utils__ArrayBufferView_TAError
#include <lime/utils/_ArrayBufferView/TAError.h>
#endif
namespace lime{
namespace text{

Void Font_obj::__construct(::String name)
{
HX_STACK_FRAME("lime.text.Font","new",0x97494f29,"lime.text.Font.new","lime/text/Font.hx",39,0x3be57807)
HX_STACK_THIS(this)
HX_STACK_ARG(name,"name")
{
	HX_STACK_LINE(41)
	bool tmp = (name != null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(41)
	if ((tmp)){
		HX_STACK_LINE(43)
		this->name = name;
	}
	HX_STACK_LINE(47)
	::String tmp1 = this->__fontPath;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(47)
	bool tmp2 = (tmp1 != null());		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(47)
	if ((tmp2)){
		HX_STACK_LINE(49)
		::String tmp3 = this->__fontPath;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(49)
		this->__fromFile(tmp3);
	}
}
;
	return null();
}

//Font_obj::~Font_obj() { }

Dynamic Font_obj::__CreateEmpty() { return  new Font_obj; }
hx::ObjectPtr< Font_obj > Font_obj::__new(::String name)
{  hx::ObjectPtr< Font_obj > _result_ = new Font_obj();
	_result_->__construct(name);
	return _result_;}

Dynamic Font_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Font_obj > _result_ = new Font_obj();
	_result_->__construct(inArgs[0]);
	return _result_;}

Dynamic Font_obj::decompose( ){
	HX_STACK_FRAME("lime.text.Font","decompose",0x6e29ff3a,"lime.text.Font.decompose","lime/text/Font.hx",56,0x3be57807)
	HX_STACK_THIS(this)
	HX_STACK_LINE(60)
	Dynamic tmp = this->src;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(60)
	bool tmp1 = (tmp == null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(60)
	if ((tmp1)){
		HX_STACK_LINE(60)
		HX_STACK_DO_THROW(HX_HCSTRING("Uninitialized font handle.","\x3a","\x84","\xab","\x29"));
	}
	HX_STACK_LINE(61)
	Dynamic tmp2 = this->src;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(61)
	int tmp3 = (int)20480;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(61)
	Dynamic tmp4 = ::lime::text::Font_obj::lime_font_outline_decompose(tmp2,tmp3);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(61)
	return tmp4;
}


HX_DEFINE_DYNAMIC_FUNC0(Font_obj,decompose,return )

int Font_obj::getGlyph( ::String character){
	HX_STACK_FRAME("lime.text.Font","getGlyph",0x5bf955cd,"lime.text.Font.getGlyph","lime/text/Font.hx",100,0x3be57807)
	HX_STACK_THIS(this)
	HX_STACK_ARG(character,"character")
	HX_STACK_LINE(103)
	Dynamic tmp = this->src;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(103)
	::String tmp1 = character;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(103)
	int tmp2 = ::lime::text::Font_obj::lime_font_get_glyph_index(tmp,tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(103)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC1(Font_obj,getGlyph,return )

Array< int > Font_obj::getGlyphs( ::String __o_characters){
::String characters = __o_characters.Default(HX_HCSTRING("abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789!@#$%^`'\"/\\&*()[]{}<>|:;_-+=?,. ","\xc1","\xf6","\x34","\x50"));
	HX_STACK_FRAME("lime.text.Font","getGlyphs",0x1e31be06,"lime.text.Font.getGlyphs","lime/text/Font.hx",111,0x3be57807)
	HX_STACK_THIS(this)
	HX_STACK_ARG(characters,"characters")
{
		HX_STACK_LINE(114)
		Dynamic tmp = this->src;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(114)
		::String tmp1 = characters;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(114)
		return ::lime::text::Font_obj::lime_font_get_glyph_indices(tmp,tmp1);
	}
}


HX_DEFINE_DYNAMIC_FUNC1(Font_obj,getGlyphs,return )

::lime::text::GlyphMetrics Font_obj::getGlyphMetrics( int glyph){
	HX_STACK_FRAME("lime.text.Font","getGlyphMetrics",0x8c9677f6,"lime.text.Font.getGlyphMetrics","lime/text/Font.hx",122,0x3be57807)
	HX_STACK_THIS(this)
	HX_STACK_ARG(glyph,"glyph")
	HX_STACK_LINE(125)
	Dynamic tmp = this->src;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(125)
	int tmp1 = glyph;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(125)
	Dynamic tmp2 = ::lime::text::Font_obj::lime_font_get_glyph_metrics(tmp,tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(125)
	Dynamic value = tmp2;		HX_STACK_VAR(value,"value");
	HX_STACK_LINE(126)
	::lime::text::GlyphMetrics tmp3 = ::lime::text::GlyphMetrics_obj::__new();		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(126)
	::lime::text::GlyphMetrics metrics = tmp3;		HX_STACK_VAR(metrics,"metrics");
	HX_STACK_LINE(128)
	::lime::math::Vector2 tmp4 = ::lime::math::Vector2_obj::__new(value->__Field(HX_HCSTRING("horizontalAdvance","\xfe","\x57","\x3e","\xce"), hx::paccDynamic ),value->__Field(HX_HCSTRING("verticalAdvance","\xac","\x8e","\xf7","\x57"), hx::paccDynamic ));		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(128)
	metrics->advance = tmp4;
	HX_STACK_LINE(129)
	metrics->height = value->__Field(HX_HCSTRING("height","\xe7","\x07","\x4c","\x02"), hx::paccDynamic );
	HX_STACK_LINE(130)
	::lime::math::Vector2 tmp5 = ::lime::math::Vector2_obj::__new(value->__Field(HX_HCSTRING("horizontalBearingX","\xae","\x21","\x22","\x6c"), hx::paccDynamic ),value->__Field(HX_HCSTRING("horizontalBearingY","\xaf","\x21","\x22","\x6c"), hx::paccDynamic ));		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(130)
	metrics->horizontalBearing = tmp5;
	HX_STACK_LINE(131)
	::lime::math::Vector2 tmp6 = ::lime::math::Vector2_obj::__new(value->__Field(HX_HCSTRING("verticalBearingX","\x40","\xc3","\x78","\x64"), hx::paccDynamic ),value->__Field(HX_HCSTRING("verticalBearingY","\x41","\xc3","\x78","\x64"), hx::paccDynamic ));		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(131)
	metrics->verticalBearing = tmp6;
	HX_STACK_LINE(133)
	::lime::text::GlyphMetrics tmp7 = metrics;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(133)
	return tmp7;
}


HX_DEFINE_DYNAMIC_FUNC1(Font_obj,getGlyphMetrics,return )

::lime::graphics::Image Font_obj::renderGlyph( int glyph,int fontSize){
	HX_STACK_FRAME("lime.text.Font","renderGlyph",0xe6e51a3f,"lime.text.Font.renderGlyph","lime/text/Font.hx",141,0x3be57807)
	HX_STACK_THIS(this)
	HX_STACK_ARG(glyph,"glyph")
	HX_STACK_ARG(fontSize,"fontSize")
	HX_STACK_LINE(145)
	Dynamic tmp = this->src;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(145)
	int tmp1 = fontSize;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(145)
	::lime::text::Font_obj::lime_font_set_size(tmp,tmp1);
	HX_STACK_LINE(147)
	::lime::utils::ByteArray tmp2 = ::lime::utils::ByteArray_obj::__new(null());		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(147)
	::lime::utils::ByteArray bytes = tmp2;		HX_STACK_VAR(bytes,"bytes");
	HX_STACK_LINE(148)
	{
		HX_STACK_LINE(148)
		::lime::_system::Endian tmp3 = ::lime::_system::System_obj::get_endianness();		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(148)
		bool tmp4 = (tmp3 == ::lime::_system::Endian_obj::_BIG_ENDIAN);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(148)
		::String tmp5;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(148)
		if ((tmp4)){
			HX_STACK_LINE(148)
			tmp5 = HX_HCSTRING("bigEndian","\x7b","\xd5","\x5a","\x20");
		}
		else{
			HX_STACK_LINE(148)
			tmp5 = HX_HCSTRING("littleEndian","\x31","\x2e","\x7b","\x07");
		}
		HX_STACK_LINE(148)
		::String endian = tmp5;		HX_STACK_VAR(endian,"endian");
		HX_STACK_LINE(148)
		bool tmp6 = (endian == HX_HCSTRING("littleEndian","\x31","\x2e","\x7b","\x07"));		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(148)
		bytes->littleEndian = tmp6;
		HX_STACK_LINE(148)
		endian;
	}
	HX_STACK_LINE(150)
	Dynamic tmp3 = this->src;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(150)
	int tmp4 = glyph;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(150)
	::lime::utils::ByteArray tmp5 = bytes;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(150)
	bool tmp6 = ::lime::text::Font_obj::lime_font_render_glyph(tmp3,tmp4,tmp5);		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(150)
	if ((tmp6)){
		HX_STACK_LINE(152)
		bytes->position = (int)0;
		HX_STACK_LINE(154)
		int tmp7 = bytes->readUnsignedInt();		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(154)
		int index = tmp7;		HX_STACK_VAR(index,"index");
		HX_STACK_LINE(155)
		int tmp8 = bytes->readUnsignedInt();		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(155)
		int width = tmp8;		HX_STACK_VAR(width,"width");
		HX_STACK_LINE(156)
		int tmp9 = bytes->readUnsignedInt();		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(156)
		int height = tmp9;		HX_STACK_VAR(height,"height");
		HX_STACK_LINE(157)
		int tmp10 = bytes->readUnsignedInt();		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(157)
		int x = tmp10;		HX_STACK_VAR(x,"x");
		HX_STACK_LINE(158)
		int tmp11 = bytes->readUnsignedInt();		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(158)
		int y = tmp11;		HX_STACK_VAR(y,"y");
		HX_STACK_LINE(160)
		int tmp12 = (width * height);		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(160)
		::lime::utils::ByteArray tmp13 = ::lime::utils::ByteArray_obj::__new(tmp12);		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(160)
		::lime::utils::ByteArray data = tmp13;		HX_STACK_VAR(data,"data");
		HX_STACK_LINE(161)
		::lime::utils::ByteArray tmp14 = data;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(161)
		int tmp15 = (width * height);		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(161)
		bytes->readBytes(tmp14,(int)0,tmp15);
		HX_STACK_LINE(166)
		::lime::utils::ArrayBufferView tmp16;		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(166)
		{
			HX_STACK_LINE(166)
			::lime::utils::ArrayBufferView this1;		HX_STACK_VAR(this1,"this1");
			HX_STACK_LINE(166)
			bool tmp17 = false;		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(166)
			if ((tmp17)){
				HX_STACK_LINE(166)
				::lime::utils::ArrayBufferView tmp18 = ::lime::utils::ArrayBufferView_obj::__new(null(),(int)4);		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(166)
				this1 = tmp18;
			}
			else{
				HX_STACK_LINE(166)
				bool tmp18 = false;		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(166)
				if ((tmp18)){
					HX_STACK_LINE(166)
					::lime::utils::ArrayBufferView tmp19;		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(166)
					{
						HX_STACK_LINE(166)
						::lime::utils::ArrayBufferView tmp20 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)4);		HX_STACK_VAR(tmp20,"tmp20");
						HX_STACK_LINE(166)
						::lime::utils::ArrayBufferView _this = tmp20;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(166)
						_this->byteOffset = (int)0;
						HX_STACK_LINE(166)
						int tmp21 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp21,"tmp21");
						HX_STACK_LINE(166)
						_this->length = tmp21;
						HX_STACK_LINE(166)
						int tmp22 = (_this->length * _this->bytesPerElement);		HX_STACK_VAR(tmp22,"tmp22");
						HX_STACK_LINE(166)
						_this->byteLength = tmp22;
						HX_STACK_LINE(166)
						::haxe::io::Bytes tmp23;		HX_STACK_VAR(tmp23,"tmp23");
						HX_STACK_LINE(166)
						{
							HX_STACK_LINE(166)
							::haxe::io::Bytes this2;		HX_STACK_VAR(this2,"this2");
							HX_STACK_LINE(166)
							int tmp24 = _this->byteLength;		HX_STACK_VAR(tmp24,"tmp24");
							HX_STACK_LINE(166)
							::haxe::io::Bytes tmp25 = ::haxe::io::Bytes_obj::alloc(tmp24);		HX_STACK_VAR(tmp25,"tmp25");
							HX_STACK_LINE(166)
							this2 = tmp25;
							HX_STACK_LINE(166)
							tmp23 = this2;
						}
						HX_STACK_LINE(166)
						_this->buffer = tmp23;
						HX_STACK_LINE(166)
						_this->copyFromArray(((Array< Float >)(null())),null());
						HX_STACK_LINE(166)
						tmp19 = _this;
					}
					HX_STACK_LINE(166)
					this1 = tmp19;
				}
				else{
					HX_STACK_LINE(166)
					bool tmp19 = false;		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(166)
					if ((tmp19)){
						HX_STACK_LINE(166)
						::lime::utils::ArrayBufferView tmp20;		HX_STACK_VAR(tmp20,"tmp20");
						HX_STACK_LINE(166)
						{
							HX_STACK_LINE(166)
							::lime::utils::ArrayBufferView tmp21 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)4);		HX_STACK_VAR(tmp21,"tmp21");
							HX_STACK_LINE(166)
							::lime::utils::ArrayBufferView _this = tmp21;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(166)
							::haxe::io::Bytes tmp22 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp22,"tmp22");
							HX_STACK_LINE(166)
							::haxe::io::Bytes srcData = tmp22;		HX_STACK_VAR(srcData,"srcData");
							HX_STACK_LINE(166)
							int tmp23 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp23,"tmp23");
							HX_STACK_LINE(166)
							int srcLength = tmp23;		HX_STACK_VAR(srcLength,"srcLength");
							HX_STACK_LINE(166)
							int tmp24 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp24,"tmp24");
							HX_STACK_LINE(166)
							int srcByteOffset = tmp24;		HX_STACK_VAR(srcByteOffset,"srcByteOffset");
							HX_STACK_LINE(166)
							int tmp25 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp25,"tmp25");
							HX_STACK_LINE(166)
							int srcElementSize = tmp25;		HX_STACK_VAR(srcElementSize,"srcElementSize");
							HX_STACK_LINE(166)
							int elementSize = _this->bytesPerElement;		HX_STACK_VAR(elementSize,"elementSize");
							HX_STACK_LINE(166)
							int tmp26 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp26,"tmp26");
							HX_STACK_LINE(166)
							int tmp27 = _this->type;		HX_STACK_VAR(tmp27,"tmp27");
							HX_STACK_LINE(166)
							bool tmp28 = (tmp26 == tmp27);		HX_STACK_VAR(tmp28,"tmp28");
							HX_STACK_LINE(166)
							if ((tmp28)){
								HX_STACK_LINE(166)
								int srcLength1 = srcData->length;		HX_STACK_VAR(srcLength1,"srcLength1");
								HX_STACK_LINE(166)
								int tmp29 = (srcLength1 - srcByteOffset);		HX_STACK_VAR(tmp29,"tmp29");
								HX_STACK_LINE(166)
								int cloneLength = tmp29;		HX_STACK_VAR(cloneLength,"cloneLength");
								HX_STACK_LINE(166)
								::haxe::io::Bytes tmp30;		HX_STACK_VAR(tmp30,"tmp30");
								HX_STACK_LINE(166)
								{
									HX_STACK_LINE(166)
									::haxe::io::Bytes this2;		HX_STACK_VAR(this2,"this2");
									HX_STACK_LINE(166)
									int tmp31 = cloneLength;		HX_STACK_VAR(tmp31,"tmp31");
									HX_STACK_LINE(166)
									::haxe::io::Bytes tmp32 = ::haxe::io::Bytes_obj::alloc(tmp31);		HX_STACK_VAR(tmp32,"tmp32");
									HX_STACK_LINE(166)
									this2 = tmp32;
									HX_STACK_LINE(166)
									tmp30 = this2;
								}
								HX_STACK_LINE(166)
								_this->buffer = tmp30;
								HX_STACK_LINE(166)
								::haxe::io::Bytes tmp31 = srcData;		HX_STACK_VAR(tmp31,"tmp31");
								HX_STACK_LINE(166)
								int tmp32 = srcByteOffset;		HX_STACK_VAR(tmp32,"tmp32");
								HX_STACK_LINE(166)
								int tmp33 = cloneLength;		HX_STACK_VAR(tmp33,"tmp33");
								HX_STACK_LINE(166)
								_this->buffer->blit((int)0,tmp31,tmp32,tmp33);
							}
							else{
								HX_STACK_LINE(166)
								HX_STACK_DO_THROW(HX_HCSTRING("unimplemented","\x09","\x2f","\x74","\xb4"));
							}
							HX_STACK_LINE(166)
							int tmp29 = (_this->bytesPerElement * srcLength);		HX_STACK_VAR(tmp29,"tmp29");
							HX_STACK_LINE(166)
							_this->byteLength = tmp29;
							HX_STACK_LINE(166)
							_this->byteOffset = (int)0;
							HX_STACK_LINE(166)
							_this->length = srcLength;
							HX_STACK_LINE(166)
							tmp20 = _this;
						}
						HX_STACK_LINE(166)
						this1 = tmp20;
					}
					else{
						HX_STACK_LINE(166)
						bool tmp20 = (data != null());		HX_STACK_VAR(tmp20,"tmp20");
						HX_STACK_LINE(166)
						if ((tmp20)){
							HX_STACK_LINE(166)
							::lime::utils::ArrayBufferView tmp21;		HX_STACK_VAR(tmp21,"tmp21");
							HX_STACK_LINE(166)
							{
								HX_STACK_LINE(166)
								::lime::utils::ArrayBufferView tmp22 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)4);		HX_STACK_VAR(tmp22,"tmp22");
								HX_STACK_LINE(166)
								::lime::utils::ArrayBufferView _this = tmp22;		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(166)
								bool tmp23 = false;		HX_STACK_VAR(tmp23,"tmp23");
								HX_STACK_LINE(166)
								if ((tmp23)){
									HX_STACK_LINE(166)
									HX_STACK_DO_THROW(::lime::utils::_ArrayBufferView::TAError_obj::RangeError);
								}
								HX_STACK_LINE(166)
								int tmp24 = hx::Mod((int)0,_this->bytesPerElement);		HX_STACK_VAR(tmp24,"tmp24");
								HX_STACK_LINE(166)
								bool tmp25 = (tmp24 != (int)0);		HX_STACK_VAR(tmp25,"tmp25");
								HX_STACK_LINE(166)
								if ((tmp25)){
									HX_STACK_LINE(166)
									HX_STACK_DO_THROW(::lime::utils::_ArrayBufferView::TAError_obj::RangeError);
								}
								HX_STACK_LINE(166)
								int bufferByteLength = data->length;		HX_STACK_VAR(bufferByteLength,"bufferByteLength");
								HX_STACK_LINE(166)
								int elementSize = _this->bytesPerElement;		HX_STACK_VAR(elementSize,"elementSize");
								HX_STACK_LINE(166)
								int newByteLength = bufferByteLength;		HX_STACK_VAR(newByteLength,"newByteLength");
								HX_STACK_LINE(166)
								bool tmp26 = true;		HX_STACK_VAR(tmp26,"tmp26");
								HX_STACK_LINE(166)
								if ((tmp26)){
									HX_STACK_LINE(166)
									int tmp27 = bufferByteLength;		HX_STACK_VAR(tmp27,"tmp27");
									HX_STACK_LINE(166)
									newByteLength = tmp27;
									HX_STACK_LINE(166)
									int tmp28 = hx::Mod(bufferByteLength,_this->bytesPerElement);		HX_STACK_VAR(tmp28,"tmp28");
									HX_STACK_LINE(166)
									bool tmp29 = (tmp28 != (int)0);		HX_STACK_VAR(tmp29,"tmp29");
									HX_STACK_LINE(166)
									if ((tmp29)){
										HX_STACK_LINE(166)
										HX_STACK_DO_THROW(::lime::utils::_ArrayBufferView::TAError_obj::RangeError);
									}
									HX_STACK_LINE(166)
									bool tmp30 = (newByteLength < (int)0);		HX_STACK_VAR(tmp30,"tmp30");
									HX_STACK_LINE(166)
									if ((tmp30)){
										HX_STACK_LINE(166)
										HX_STACK_DO_THROW(::lime::utils::_ArrayBufferView::TAError_obj::RangeError);
									}
								}
								else{
									HX_STACK_LINE(166)
									int tmp27 = (null() * _this->bytesPerElement);		HX_STACK_VAR(tmp27,"tmp27");
									HX_STACK_LINE(166)
									newByteLength = tmp27;
									HX_STACK_LINE(166)
									int tmp28 = newByteLength;		HX_STACK_VAR(tmp28,"tmp28");
									HX_STACK_LINE(166)
									int newRange = tmp28;		HX_STACK_VAR(newRange,"newRange");
									HX_STACK_LINE(166)
									bool tmp29 = (newRange > bufferByteLength);		HX_STACK_VAR(tmp29,"tmp29");
									HX_STACK_LINE(166)
									if ((tmp29)){
										HX_STACK_LINE(166)
										HX_STACK_DO_THROW(::lime::utils::_ArrayBufferView::TAError_obj::RangeError);
									}
								}
								HX_STACK_LINE(166)
								_this->buffer = data;
								HX_STACK_LINE(166)
								_this->byteOffset = (int)0;
								HX_STACK_LINE(166)
								_this->byteLength = newByteLength;
								HX_STACK_LINE(166)
								Float tmp27 = (Float(newByteLength) / Float(_this->bytesPerElement));		HX_STACK_VAR(tmp27,"tmp27");
								HX_STACK_LINE(166)
								int tmp28 = ::Std_obj::_int(tmp27);		HX_STACK_VAR(tmp28,"tmp28");
								HX_STACK_LINE(166)
								_this->length = tmp28;
								HX_STACK_LINE(166)
								tmp21 = _this;
							}
							HX_STACK_LINE(166)
							this1 = tmp21;
						}
						else{
							HX_STACK_LINE(166)
							HX_STACK_DO_THROW(HX_HCSTRING("Invalid constructor arguments for Uint8Array","\x8b","\x64","\x02","\xe4"));
						}
					}
				}
			}
			HX_STACK_LINE(166)
			tmp16 = this1;
		}
		HX_STACK_LINE(166)
		int tmp17 = width;		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(166)
		int tmp18 = height;		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(166)
		::lime::graphics::ImageBuffer tmp19 = ::lime::graphics::ImageBuffer_obj::__new(tmp16,tmp17,tmp18,(int)1,null());		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(166)
		::lime::graphics::ImageBuffer buffer = tmp19;		HX_STACK_VAR(buffer,"buffer");
		HX_STACK_LINE(168)
		::lime::graphics::Image tmp20 = ::lime::graphics::Image_obj::__new(buffer,(int)0,(int)0,width,height,null(),null());		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(168)
		::lime::graphics::Image image = tmp20;		HX_STACK_VAR(image,"image");
		HX_STACK_LINE(169)
		image->x = x;
		HX_STACK_LINE(170)
		image->y = y;
		HX_STACK_LINE(172)
		::lime::graphics::Image tmp21 = image;		HX_STACK_VAR(tmp21,"tmp21");
		HX_STACK_LINE(172)
		return tmp21;
	}
	HX_STACK_LINE(178)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Font_obj,renderGlyph,return )

::haxe::ds::IntMap Font_obj::renderGlyphs( Array< int > glyphs,int fontSize){
	HX_STACK_FRAME("lime.text.Font","renderGlyphs",0x2191dd54,"lime.text.Font.renderGlyphs","lime/text/Font.hx",183,0x3be57807)
	HX_STACK_THIS(this)
	HX_STACK_ARG(glyphs,"glyphs")
	HX_STACK_ARG(fontSize,"fontSize")
	HX_STACK_LINE(187)
	::haxe::ds::IntMap tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(187)
	{
		HX_STACK_LINE(187)
		::haxe::ds::IntMap tmp1 = ::haxe::ds::IntMap_obj::__new();		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(187)
		::haxe::ds::IntMap tmp2 = tmp1;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(187)
		tmp = tmp2;
	}
	HX_STACK_LINE(187)
	::haxe::ds::IntMap uniqueGlyphs = tmp;		HX_STACK_VAR(uniqueGlyphs,"uniqueGlyphs");
	HX_STACK_LINE(189)
	{
		HX_STACK_LINE(189)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(189)
		while((true)){
			HX_STACK_LINE(189)
			bool tmp1 = (_g < glyphs->length);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(189)
			bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(189)
			if ((tmp2)){
				HX_STACK_LINE(189)
				break;
			}
			HX_STACK_LINE(189)
			int tmp3 = glyphs->__get(_g);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(189)
			int glyph = tmp3;		HX_STACK_VAR(glyph,"glyph");
			HX_STACK_LINE(189)
			++(_g);
			HX_STACK_LINE(191)
			int tmp4 = glyph;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(191)
			uniqueGlyphs->set(tmp4,true);
		}
	}
	HX_STACK_LINE(195)
	Array< int > glyphList = Array_obj< int >::__new();		HX_STACK_VAR(glyphList,"glyphList");
	HX_STACK_LINE(197)
	Dynamic tmp1 = uniqueGlyphs->keys();		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(197)
	for(::cpp::FastIterator_obj< int > *__it = ::cpp::CreateFastIterator< int >(tmp1);  __it->hasNext(); ){
		int key = __it->next();
		{
			HX_STACK_LINE(199)
			int tmp2 = key;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(199)
			glyphList->push(tmp2);
		}
;
	}
	HX_STACK_LINE(203)
	Dynamic tmp2 = this->src;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(203)
	int tmp3 = fontSize;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(203)
	::lime::text::Font_obj::lime_font_set_size(tmp2,tmp3);
	HX_STACK_LINE(205)
	::lime::utils::ByteArray tmp4 = ::lime::utils::ByteArray_obj::__new(null());		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(205)
	::lime::utils::ByteArray bytes = tmp4;		HX_STACK_VAR(bytes,"bytes");
	HX_STACK_LINE(206)
	{
		HX_STACK_LINE(206)
		::lime::_system::Endian tmp5 = ::lime::_system::System_obj::get_endianness();		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(206)
		bool tmp6 = (tmp5 == ::lime::_system::Endian_obj::_BIG_ENDIAN);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(206)
		::String tmp7;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(206)
		if ((tmp6)){
			HX_STACK_LINE(206)
			tmp7 = HX_HCSTRING("bigEndian","\x7b","\xd5","\x5a","\x20");
		}
		else{
			HX_STACK_LINE(206)
			tmp7 = HX_HCSTRING("littleEndian","\x31","\x2e","\x7b","\x07");
		}
		HX_STACK_LINE(206)
		::String endian = tmp7;		HX_STACK_VAR(endian,"endian");
		HX_STACK_LINE(206)
		bool tmp8 = (endian == HX_HCSTRING("littleEndian","\x31","\x2e","\x7b","\x07"));		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(206)
		bytes->littleEndian = tmp8;
		HX_STACK_LINE(206)
		endian;
	}
	HX_STACK_LINE(208)
	Dynamic tmp5 = this->src;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(208)
	::lime::utils::ByteArray tmp6 = bytes;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(208)
	bool tmp7 = ::lime::text::Font_obj::lime_font_render_glyphs(tmp5,glyphList,tmp6);		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(208)
	if ((tmp7)){
		HX_STACK_LINE(210)
		bytes->position = (int)0;
		HX_STACK_LINE(212)
		int tmp8 = bytes->readUnsignedInt();		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(212)
		int count = tmp8;		HX_STACK_VAR(count,"count");
		HX_STACK_LINE(214)
		int bufferWidth = (int)128;		HX_STACK_VAR(bufferWidth,"bufferWidth");
		HX_STACK_LINE(215)
		int bufferHeight = (int)128;		HX_STACK_VAR(bufferHeight,"bufferHeight");
		HX_STACK_LINE(216)
		int offsetX = (int)0;		HX_STACK_VAR(offsetX,"offsetX");
		HX_STACK_LINE(217)
		int offsetY = (int)0;		HX_STACK_VAR(offsetY,"offsetY");
		HX_STACK_LINE(218)
		int maxRows = (int)0;		HX_STACK_VAR(maxRows,"maxRows");
		HX_STACK_LINE(220)
		int width;		HX_STACK_VAR(width,"width");
		HX_STACK_LINE(220)
		int height;		HX_STACK_VAR(height,"height");
		HX_STACK_LINE(221)
		int i = (int)0;		HX_STACK_VAR(i,"i");
		HX_STACK_LINE(223)
		while((true)){
			HX_STACK_LINE(223)
			bool tmp9 = (i < count);		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(223)
			bool tmp10 = !(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(223)
			if ((tmp10)){
				HX_STACK_LINE(223)
				break;
			}
			HX_STACK_LINE(225)
			hx::AddEq(bytes->position,(int)4);
			HX_STACK_LINE(226)
			int tmp11 = bytes->readUnsignedInt();		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(226)
			width = tmp11;
			HX_STACK_LINE(227)
			int tmp12 = bytes->readUnsignedInt();		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(227)
			height = tmp12;
			HX_STACK_LINE(228)
			int tmp13 = (int)8;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(228)
			int tmp14 = (width * height);		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(228)
			int tmp15 = (tmp13 + tmp14);		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(228)
			hx::AddEq(bytes->position,tmp15);
			HX_STACK_LINE(230)
			int tmp16 = (offsetX + width);		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(230)
			int tmp17 = bufferWidth;		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(230)
			bool tmp18 = (tmp16 > tmp17);		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(230)
			if ((tmp18)){
				HX_STACK_LINE(232)
				int tmp19 = (maxRows + (int)1);		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(232)
				hx::AddEq(offsetY,tmp19);
				HX_STACK_LINE(233)
				offsetX = (int)0;
				HX_STACK_LINE(234)
				maxRows = (int)0;
			}
			HX_STACK_LINE(238)
			int tmp19 = (offsetY + height);		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(238)
			int tmp20 = bufferHeight;		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(238)
			bool tmp21 = (tmp19 > tmp20);		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(238)
			if ((tmp21)){
				HX_STACK_LINE(240)
				bool tmp22 = (bufferWidth < bufferHeight);		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(240)
				if ((tmp22)){
					HX_STACK_LINE(242)
					hx::MultEq(bufferWidth,(int)2);
				}
				else{
					HX_STACK_LINE(246)
					hx::MultEq(bufferHeight,(int)2);
				}
				HX_STACK_LINE(250)
				offsetX = (int)0;
				HX_STACK_LINE(251)
				offsetY = (int)0;
				HX_STACK_LINE(252)
				maxRows = (int)0;
				HX_STACK_LINE(256)
				bytes->position = (int)4;
				HX_STACK_LINE(257)
				i = (int)0;
				HX_STACK_LINE(258)
				continue;
			}
			HX_STACK_LINE(262)
			int tmp22 = (width + (int)1);		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(262)
			hx::AddEq(offsetX,tmp22);
			HX_STACK_LINE(264)
			bool tmp23 = (height > maxRows);		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(264)
			if ((tmp23)){
				HX_STACK_LINE(266)
				maxRows = height;
			}
			HX_STACK_LINE(270)
			(i)++;
		}
		HX_STACK_LINE(274)
		::haxe::ds::IntMap tmp9;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(274)
		{
			HX_STACK_LINE(274)
			::haxe::ds::IntMap tmp10 = ::haxe::ds::IntMap_obj::__new();		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(274)
			::haxe::ds::IntMap tmp11 = tmp10;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(274)
			tmp9 = tmp11;
		}
		HX_STACK_LINE(274)
		::haxe::ds::IntMap map = tmp9;		HX_STACK_VAR(map,"map");
		HX_STACK_LINE(275)
		::lime::graphics::ImageBuffer tmp10 = ::lime::graphics::ImageBuffer_obj::__new(null(),bufferWidth,bufferHeight,(int)8,null());		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(275)
		::lime::graphics::ImageBuffer buffer = tmp10;		HX_STACK_VAR(buffer,"buffer");
		HX_STACK_LINE(276)
		int tmp11 = (bufferWidth * bufferHeight);		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(276)
		::lime::utils::ByteArray tmp12 = ::lime::utils::ByteArray_obj::__new(tmp11);		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(276)
		::lime::utils::ByteArray data = tmp12;		HX_STACK_VAR(data,"data");
		HX_STACK_LINE(278)
		bytes->position = (int)4;
		HX_STACK_LINE(279)
		offsetX = (int)0;
		HX_STACK_LINE(280)
		offsetY = (int)0;
		HX_STACK_LINE(281)
		maxRows = (int)0;
		HX_STACK_LINE(283)
		int index;		HX_STACK_VAR(index,"index");
		HX_STACK_LINE(283)
		int x;		HX_STACK_VAR(x,"x");
		HX_STACK_LINE(283)
		int y;		HX_STACK_VAR(y,"y");
		HX_STACK_LINE(283)
		::lime::graphics::Image image;		HX_STACK_VAR(image,"image");
		HX_STACK_LINE(285)
		{
			HX_STACK_LINE(285)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(285)
			while((true)){
				HX_STACK_LINE(285)
				bool tmp13 = (_g < count);		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(285)
				bool tmp14 = !(tmp13);		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(285)
				if ((tmp14)){
					HX_STACK_LINE(285)
					break;
				}
				HX_STACK_LINE(285)
				int tmp15 = (_g)++;		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(285)
				int i1 = tmp15;		HX_STACK_VAR(i1,"i1");
				HX_STACK_LINE(287)
				int tmp16 = bytes->readUnsignedInt();		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(287)
				index = tmp16;
				HX_STACK_LINE(288)
				int tmp17 = bytes->readUnsignedInt();		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(288)
				width = tmp17;
				HX_STACK_LINE(289)
				int tmp18 = bytes->readUnsignedInt();		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(289)
				height = tmp18;
				HX_STACK_LINE(290)
				int tmp19 = bytes->readUnsignedInt();		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(290)
				x = tmp19;
				HX_STACK_LINE(291)
				int tmp20 = bytes->readUnsignedInt();		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(291)
				y = tmp20;
				HX_STACK_LINE(293)
				int tmp21 = (offsetX + width);		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(293)
				int tmp22 = bufferWidth;		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(293)
				bool tmp23 = (tmp21 > tmp22);		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(293)
				if ((tmp23)){
					HX_STACK_LINE(295)
					int tmp24 = (maxRows + (int)1);		HX_STACK_VAR(tmp24,"tmp24");
					HX_STACK_LINE(295)
					hx::AddEq(offsetY,tmp24);
					HX_STACK_LINE(296)
					offsetX = (int)0;
					HX_STACK_LINE(297)
					maxRows = (int)0;
				}
				HX_STACK_LINE(301)
				{
					HX_STACK_LINE(301)
					int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
					HX_STACK_LINE(301)
					while((true)){
						HX_STACK_LINE(301)
						bool tmp24 = (_g1 < height);		HX_STACK_VAR(tmp24,"tmp24");
						HX_STACK_LINE(301)
						bool tmp25 = !(tmp24);		HX_STACK_VAR(tmp25,"tmp25");
						HX_STACK_LINE(301)
						if ((tmp25)){
							HX_STACK_LINE(301)
							break;
						}
						HX_STACK_LINE(301)
						int tmp26 = (_g1)++;		HX_STACK_VAR(tmp26,"tmp26");
						HX_STACK_LINE(301)
						int i2 = tmp26;		HX_STACK_VAR(i2,"i2");
						HX_STACK_LINE(303)
						int tmp27 = (i2 + offsetY);		HX_STACK_VAR(tmp27,"tmp27");
						HX_STACK_LINE(303)
						int tmp28 = bufferWidth;		HX_STACK_VAR(tmp28,"tmp28");
						HX_STACK_LINE(303)
						int tmp29 = (tmp27 * tmp28);		HX_STACK_VAR(tmp29,"tmp29");
						HX_STACK_LINE(303)
						int tmp30 = offsetX;		HX_STACK_VAR(tmp30,"tmp30");
						HX_STACK_LINE(303)
						int tmp31 = (tmp29 + tmp30);		HX_STACK_VAR(tmp31,"tmp31");
						HX_STACK_LINE(303)
						data->position = tmp31;
						HX_STACK_LINE(306)
						{
							HX_STACK_LINE(306)
							int _g2 = (int)0;		HX_STACK_VAR(_g2,"_g2");
							HX_STACK_LINE(306)
							while((true)){
								HX_STACK_LINE(306)
								bool tmp32 = (_g2 < width);		HX_STACK_VAR(tmp32,"tmp32");
								HX_STACK_LINE(306)
								bool tmp33 = !(tmp32);		HX_STACK_VAR(tmp33,"tmp33");
								HX_STACK_LINE(306)
								if ((tmp33)){
									HX_STACK_LINE(306)
									break;
								}
								HX_STACK_LINE(306)
								int tmp34 = (_g2)++;		HX_STACK_VAR(tmp34,"tmp34");
								HX_STACK_LINE(306)
								int x1 = tmp34;		HX_STACK_VAR(x1,"x1");
								HX_STACK_LINE(308)
								bool tmp35 = (bytes->position < bytes->length);		HX_STACK_VAR(tmp35,"tmp35");
								HX_STACK_LINE(308)
								int tmp36;		HX_STACK_VAR(tmp36,"tmp36");
								HX_STACK_LINE(308)
								if ((tmp35)){
									HX_STACK_LINE(308)
									int tmp37 = (bytes->position)++;		HX_STACK_VAR(tmp37,"tmp37");
									HX_STACK_LINE(308)
									int pos = tmp37;		HX_STACK_VAR(pos,"pos");
									HX_STACK_LINE(308)
									tmp36 = bytes->b->__get(pos);
								}
								else{
									HX_STACK_LINE(308)
									tmp36 = bytes->ThrowEOFi();
								}
								HX_STACK_LINE(308)
								int byte = tmp36;		HX_STACK_VAR(byte,"byte");
								HX_STACK_LINE(309)
								int tmp37 = byte;		HX_STACK_VAR(tmp37,"tmp37");
								HX_STACK_LINE(309)
								data->writeByte(tmp37);
							}
						}
					}
				}
				HX_STACK_LINE(315)
				::lime::graphics::Image tmp24 = ::lime::graphics::Image_obj::__new(buffer,offsetX,offsetY,width,height,null(),null());		HX_STACK_VAR(tmp24,"tmp24");
				HX_STACK_LINE(315)
				image = tmp24;
				HX_STACK_LINE(316)
				image->x = x;
				HX_STACK_LINE(317)
				image->y = y;
				HX_STACK_LINE(319)
				int tmp25 = index;		HX_STACK_VAR(tmp25,"tmp25");
				HX_STACK_LINE(319)
				::lime::graphics::Image tmp26 = image;		HX_STACK_VAR(tmp26,"tmp26");
				HX_STACK_LINE(319)
				map->set(tmp25,tmp26);
				HX_STACK_LINE(321)
				int tmp27 = (width + (int)1);		HX_STACK_VAR(tmp27,"tmp27");
				HX_STACK_LINE(321)
				hx::AddEq(offsetX,tmp27);
				HX_STACK_LINE(323)
				bool tmp28 = (height > maxRows);		HX_STACK_VAR(tmp28,"tmp28");
				HX_STACK_LINE(323)
				if ((tmp28)){
					HX_STACK_LINE(325)
					maxRows = height;
				}
			}
		}
		HX_STACK_LINE(334)
		::lime::utils::ArrayBufferView tmp13;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(334)
		{
			HX_STACK_LINE(334)
			::lime::utils::ArrayBufferView this1;		HX_STACK_VAR(this1,"this1");
			HX_STACK_LINE(334)
			bool tmp14 = false;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(334)
			if ((tmp14)){
				HX_STACK_LINE(334)
				::lime::utils::ArrayBufferView tmp15 = ::lime::utils::ArrayBufferView_obj::__new(null(),(int)4);		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(334)
				this1 = tmp15;
			}
			else{
				HX_STACK_LINE(334)
				bool tmp15 = false;		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(334)
				if ((tmp15)){
					HX_STACK_LINE(334)
					::lime::utils::ArrayBufferView tmp16;		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(334)
					{
						HX_STACK_LINE(334)
						::lime::utils::ArrayBufferView tmp17 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)4);		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(334)
						::lime::utils::ArrayBufferView _this = tmp17;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(334)
						_this->byteOffset = (int)0;
						HX_STACK_LINE(334)
						int tmp18 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp18,"tmp18");
						HX_STACK_LINE(334)
						_this->length = tmp18;
						HX_STACK_LINE(334)
						int tmp19 = (_this->length * _this->bytesPerElement);		HX_STACK_VAR(tmp19,"tmp19");
						HX_STACK_LINE(334)
						_this->byteLength = tmp19;
						HX_STACK_LINE(334)
						::haxe::io::Bytes tmp20;		HX_STACK_VAR(tmp20,"tmp20");
						HX_STACK_LINE(334)
						{
							HX_STACK_LINE(334)
							::haxe::io::Bytes this2;		HX_STACK_VAR(this2,"this2");
							HX_STACK_LINE(334)
							int tmp21 = _this->byteLength;		HX_STACK_VAR(tmp21,"tmp21");
							HX_STACK_LINE(334)
							::haxe::io::Bytes tmp22 = ::haxe::io::Bytes_obj::alloc(tmp21);		HX_STACK_VAR(tmp22,"tmp22");
							HX_STACK_LINE(334)
							this2 = tmp22;
							HX_STACK_LINE(334)
							tmp20 = this2;
						}
						HX_STACK_LINE(334)
						_this->buffer = tmp20;
						HX_STACK_LINE(334)
						_this->copyFromArray(((Array< Float >)(null())),null());
						HX_STACK_LINE(334)
						tmp16 = _this;
					}
					HX_STACK_LINE(334)
					this1 = tmp16;
				}
				else{
					HX_STACK_LINE(334)
					bool tmp16 = false;		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(334)
					if ((tmp16)){
						HX_STACK_LINE(334)
						::lime::utils::ArrayBufferView tmp17;		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(334)
						{
							HX_STACK_LINE(334)
							::lime::utils::ArrayBufferView tmp18 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)4);		HX_STACK_VAR(tmp18,"tmp18");
							HX_STACK_LINE(334)
							::lime::utils::ArrayBufferView _this = tmp18;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(334)
							::haxe::io::Bytes tmp19 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp19,"tmp19");
							HX_STACK_LINE(334)
							::haxe::io::Bytes srcData = tmp19;		HX_STACK_VAR(srcData,"srcData");
							HX_STACK_LINE(334)
							int tmp20 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp20,"tmp20");
							HX_STACK_LINE(334)
							int srcLength = tmp20;		HX_STACK_VAR(srcLength,"srcLength");
							HX_STACK_LINE(334)
							int tmp21 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp21,"tmp21");
							HX_STACK_LINE(334)
							int srcByteOffset = tmp21;		HX_STACK_VAR(srcByteOffset,"srcByteOffset");
							HX_STACK_LINE(334)
							int tmp22 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp22,"tmp22");
							HX_STACK_LINE(334)
							int srcElementSize = tmp22;		HX_STACK_VAR(srcElementSize,"srcElementSize");
							HX_STACK_LINE(334)
							int elementSize = _this->bytesPerElement;		HX_STACK_VAR(elementSize,"elementSize");
							HX_STACK_LINE(334)
							int tmp23 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp23,"tmp23");
							HX_STACK_LINE(334)
							int tmp24 = _this->type;		HX_STACK_VAR(tmp24,"tmp24");
							HX_STACK_LINE(334)
							bool tmp25 = (tmp23 == tmp24);		HX_STACK_VAR(tmp25,"tmp25");
							HX_STACK_LINE(334)
							if ((tmp25)){
								HX_STACK_LINE(334)
								int srcLength1 = srcData->length;		HX_STACK_VAR(srcLength1,"srcLength1");
								HX_STACK_LINE(334)
								int tmp26 = (srcLength1 - srcByteOffset);		HX_STACK_VAR(tmp26,"tmp26");
								HX_STACK_LINE(334)
								int cloneLength = tmp26;		HX_STACK_VAR(cloneLength,"cloneLength");
								HX_STACK_LINE(334)
								::haxe::io::Bytes tmp27;		HX_STACK_VAR(tmp27,"tmp27");
								HX_STACK_LINE(334)
								{
									HX_STACK_LINE(334)
									::haxe::io::Bytes this2;		HX_STACK_VAR(this2,"this2");
									HX_STACK_LINE(334)
									int tmp28 = cloneLength;		HX_STACK_VAR(tmp28,"tmp28");
									HX_STACK_LINE(334)
									::haxe::io::Bytes tmp29 = ::haxe::io::Bytes_obj::alloc(tmp28);		HX_STACK_VAR(tmp29,"tmp29");
									HX_STACK_LINE(334)
									this2 = tmp29;
									HX_STACK_LINE(334)
									tmp27 = this2;
								}
								HX_STACK_LINE(334)
								_this->buffer = tmp27;
								HX_STACK_LINE(334)
								::haxe::io::Bytes tmp28 = srcData;		HX_STACK_VAR(tmp28,"tmp28");
								HX_STACK_LINE(334)
								int tmp29 = srcByteOffset;		HX_STACK_VAR(tmp29,"tmp29");
								HX_STACK_LINE(334)
								int tmp30 = cloneLength;		HX_STACK_VAR(tmp30,"tmp30");
								HX_STACK_LINE(334)
								_this->buffer->blit((int)0,tmp28,tmp29,tmp30);
							}
							else{
								HX_STACK_LINE(334)
								HX_STACK_DO_THROW(HX_HCSTRING("unimplemented","\x09","\x2f","\x74","\xb4"));
							}
							HX_STACK_LINE(334)
							int tmp26 = (_this->bytesPerElement * srcLength);		HX_STACK_VAR(tmp26,"tmp26");
							HX_STACK_LINE(334)
							_this->byteLength = tmp26;
							HX_STACK_LINE(334)
							_this->byteOffset = (int)0;
							HX_STACK_LINE(334)
							_this->length = srcLength;
							HX_STACK_LINE(334)
							tmp17 = _this;
						}
						HX_STACK_LINE(334)
						this1 = tmp17;
					}
					else{
						HX_STACK_LINE(334)
						bool tmp17 = (data != null());		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(334)
						if ((tmp17)){
							HX_STACK_LINE(334)
							::lime::utils::ArrayBufferView tmp18;		HX_STACK_VAR(tmp18,"tmp18");
							HX_STACK_LINE(334)
							{
								HX_STACK_LINE(334)
								::lime::utils::ArrayBufferView tmp19 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)4);		HX_STACK_VAR(tmp19,"tmp19");
								HX_STACK_LINE(334)
								::lime::utils::ArrayBufferView _this = tmp19;		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(334)
								bool tmp20 = false;		HX_STACK_VAR(tmp20,"tmp20");
								HX_STACK_LINE(334)
								if ((tmp20)){
									HX_STACK_LINE(334)
									HX_STACK_DO_THROW(::lime::utils::_ArrayBufferView::TAError_obj::RangeError);
								}
								HX_STACK_LINE(334)
								int tmp21 = hx::Mod((int)0,_this->bytesPerElement);		HX_STACK_VAR(tmp21,"tmp21");
								HX_STACK_LINE(334)
								bool tmp22 = (tmp21 != (int)0);		HX_STACK_VAR(tmp22,"tmp22");
								HX_STACK_LINE(334)
								if ((tmp22)){
									HX_STACK_LINE(334)
									HX_STACK_DO_THROW(::lime::utils::_ArrayBufferView::TAError_obj::RangeError);
								}
								HX_STACK_LINE(334)
								int bufferByteLength = data->length;		HX_STACK_VAR(bufferByteLength,"bufferByteLength");
								HX_STACK_LINE(334)
								int elementSize = _this->bytesPerElement;		HX_STACK_VAR(elementSize,"elementSize");
								HX_STACK_LINE(334)
								int newByteLength = bufferByteLength;		HX_STACK_VAR(newByteLength,"newByteLength");
								HX_STACK_LINE(334)
								bool tmp23 = true;		HX_STACK_VAR(tmp23,"tmp23");
								HX_STACK_LINE(334)
								if ((tmp23)){
									HX_STACK_LINE(334)
									int tmp24 = bufferByteLength;		HX_STACK_VAR(tmp24,"tmp24");
									HX_STACK_LINE(334)
									newByteLength = tmp24;
									HX_STACK_LINE(334)
									int tmp25 = hx::Mod(bufferByteLength,_this->bytesPerElement);		HX_STACK_VAR(tmp25,"tmp25");
									HX_STACK_LINE(334)
									bool tmp26 = (tmp25 != (int)0);		HX_STACK_VAR(tmp26,"tmp26");
									HX_STACK_LINE(334)
									if ((tmp26)){
										HX_STACK_LINE(334)
										HX_STACK_DO_THROW(::lime::utils::_ArrayBufferView::TAError_obj::RangeError);
									}
									HX_STACK_LINE(334)
									bool tmp27 = (newByteLength < (int)0);		HX_STACK_VAR(tmp27,"tmp27");
									HX_STACK_LINE(334)
									if ((tmp27)){
										HX_STACK_LINE(334)
										HX_STACK_DO_THROW(::lime::utils::_ArrayBufferView::TAError_obj::RangeError);
									}
								}
								else{
									HX_STACK_LINE(334)
									int tmp24 = (null() * _this->bytesPerElement);		HX_STACK_VAR(tmp24,"tmp24");
									HX_STACK_LINE(334)
									newByteLength = tmp24;
									HX_STACK_LINE(334)
									int tmp25 = newByteLength;		HX_STACK_VAR(tmp25,"tmp25");
									HX_STACK_LINE(334)
									int newRange = tmp25;		HX_STACK_VAR(newRange,"newRange");
									HX_STACK_LINE(334)
									bool tmp26 = (newRange > bufferByteLength);		HX_STACK_VAR(tmp26,"tmp26");
									HX_STACK_LINE(334)
									if ((tmp26)){
										HX_STACK_LINE(334)
										HX_STACK_DO_THROW(::lime::utils::_ArrayBufferView::TAError_obj::RangeError);
									}
								}
								HX_STACK_LINE(334)
								_this->buffer = data;
								HX_STACK_LINE(334)
								_this->byteOffset = (int)0;
								HX_STACK_LINE(334)
								_this->byteLength = newByteLength;
								HX_STACK_LINE(334)
								Float tmp24 = (Float(newByteLength) / Float(_this->bytesPerElement));		HX_STACK_VAR(tmp24,"tmp24");
								HX_STACK_LINE(334)
								int tmp25 = ::Std_obj::_int(tmp24);		HX_STACK_VAR(tmp25,"tmp25");
								HX_STACK_LINE(334)
								_this->length = tmp25;
								HX_STACK_LINE(334)
								tmp18 = _this;
							}
							HX_STACK_LINE(334)
							this1 = tmp18;
						}
						else{
							HX_STACK_LINE(334)
							HX_STACK_DO_THROW(HX_HCSTRING("Invalid constructor arguments for Uint8Array","\x8b","\x64","\x02","\xe4"));
						}
					}
				}
			}
			HX_STACK_LINE(334)
			tmp13 = this1;
		}
		HX_STACK_LINE(334)
		buffer->data = tmp13;
		HX_STACK_LINE(337)
		::haxe::ds::IntMap tmp14 = map;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(337)
		return tmp14;
	}
	HX_STACK_LINE(343)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Font_obj,renderGlyphs,return )

Void Font_obj::__fromBytes( ::lime::utils::ByteArray bytes){
{
		HX_STACK_FRAME("lime.text.Font","__fromBytes",0x257c2b4a,"lime.text.Font.__fromBytes","lime/text/Font.hx",347,0x3be57807)
		HX_STACK_THIS(this)
		HX_STACK_ARG(bytes,"bytes")
		HX_STACK_LINE(349)
		this->__fontPath = null();
		HX_STACK_LINE(353)
		Dynamic tmp = ::lime::text::Font_obj::lime_font_load(bytes);		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(353)
		this->src = tmp;
		HX_STACK_LINE(355)
		Dynamic tmp1 = this->src;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(355)
		bool tmp2 = (tmp1 != null());		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(355)
		bool tmp3;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(355)
		if ((tmp2)){
			HX_STACK_LINE(355)
			::String tmp4 = this->name;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(355)
			::String tmp5 = tmp4;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(355)
			tmp3 = (tmp5 == null());
		}
		else{
			HX_STACK_LINE(355)
			tmp3 = false;
		}
		HX_STACK_LINE(355)
		if ((tmp3)){
			HX_STACK_LINE(357)
			Dynamic tmp4 = this->src;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(357)
			::String tmp5 = ::lime::text::Font_obj::lime_font_get_family_name(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(357)
			this->name = tmp5;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Font_obj,__fromBytes,(void))

Void Font_obj::__fromFile( ::String path){
{
		HX_STACK_FRAME("lime.text.Font","__fromFile",0x6331ec7d,"lime.text.Font.__fromFile","lime/text/Font.hx",366,0x3be57807)
		HX_STACK_THIS(this)
		HX_STACK_ARG(path,"path")
		HX_STACK_LINE(368)
		this->__fontPath = path;
		HX_STACK_LINE(372)
		Dynamic tmp = ::lime::text::Font_obj::lime_font_load(this->__fontPath);		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(372)
		this->src = tmp;
		HX_STACK_LINE(374)
		Dynamic tmp1 = this->src;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(374)
		bool tmp2 = (tmp1 != null());		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(374)
		bool tmp3;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(374)
		if ((tmp2)){
			HX_STACK_LINE(374)
			::String tmp4 = this->name;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(374)
			::String tmp5 = tmp4;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(374)
			tmp3 = (tmp5 == null());
		}
		else{
			HX_STACK_LINE(374)
			tmp3 = false;
		}
		HX_STACK_LINE(374)
		if ((tmp3)){
			HX_STACK_LINE(376)
			Dynamic tmp4 = this->src;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(376)
			::String tmp5 = ::lime::text::Font_obj::lime_font_get_family_name(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(376)
			this->name = tmp5;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Font_obj,__fromFile,(void))

int Font_obj::get_ascender( ){
	HX_STACK_FRAME("lime.text.Font","get_ascender",0x190d2c57,"lime.text.Font.get_ascender","lime/text/Font.hx",392,0x3be57807)
	HX_STACK_THIS(this)
	HX_STACK_LINE(395)
	Dynamic tmp = this->src;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(395)
	int tmp1 = ::lime::text::Font_obj::lime_font_get_ascender(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(395)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(Font_obj,get_ascender,return )

int Font_obj::get_descender( ){
	HX_STACK_FRAME("lime.text.Font","get_descender",0xcf2c6cf7,"lime.text.Font.get_descender","lime/text/Font.hx",403,0x3be57807)
	HX_STACK_THIS(this)
	HX_STACK_LINE(406)
	Dynamic tmp = this->src;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(406)
	int tmp1 = ::lime::text::Font_obj::lime_font_get_descender(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(406)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(Font_obj,get_descender,return )

int Font_obj::get_height( ){
	HX_STACK_FRAME("lime.text.Font","get_height",0x11455407,"lime.text.Font.get_height","lime/text/Font.hx",414,0x3be57807)
	HX_STACK_THIS(this)
	HX_STACK_LINE(417)
	Dynamic tmp = this->src;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(417)
	int tmp1 = ::lime::text::Font_obj::lime_font_get_height(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(417)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(Font_obj,get_height,return )

int Font_obj::get_numGlyphs( ){
	HX_STACK_FRAME("lime.text.Font","get_numGlyphs",0x835f4c0d,"lime.text.Font.get_numGlyphs","lime/text/Font.hx",425,0x3be57807)
	HX_STACK_THIS(this)
	HX_STACK_LINE(428)
	Dynamic tmp = this->src;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(428)
	int tmp1 = ::lime::text::Font_obj::lime_font_get_num_glyphs(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(428)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(Font_obj,get_numGlyphs,return )

int Font_obj::get_underlinePosition( ){
	HX_STACK_FRAME("lime.text.Font","get_underlinePosition",0xf48b45b5,"lime.text.Font.get_underlinePosition","lime/text/Font.hx",436,0x3be57807)
	HX_STACK_THIS(this)
	HX_STACK_LINE(439)
	Dynamic tmp = this->src;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(439)
	int tmp1 = ::lime::text::Font_obj::lime_font_get_underline_position(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(439)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(Font_obj,get_underlinePosition,return )

int Font_obj::get_underlineThickness( ){
	HX_STACK_FRAME("lime.text.Font","get_underlineThickness",0x8f66b6e8,"lime.text.Font.get_underlineThickness","lime/text/Font.hx",447,0x3be57807)
	HX_STACK_THIS(this)
	HX_STACK_LINE(450)
	Dynamic tmp = this->src;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(450)
	int tmp1 = ::lime::text::Font_obj::lime_font_get_underline_thickness(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(450)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(Font_obj,get_underlineThickness,return )

int Font_obj::get_unitsPerEM( ){
	HX_STACK_FRAME("lime.text.Font","get_unitsPerEM",0x81c292b6,"lime.text.Font.get_unitsPerEM","lime/text/Font.hx",458,0x3be57807)
	HX_STACK_THIS(this)
	HX_STACK_LINE(461)
	Dynamic tmp = this->src;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(461)
	int tmp1 = ::lime::text::Font_obj::lime_font_get_units_per_em(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(461)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(Font_obj,get_unitsPerEM,return )

::lime::text::Font Font_obj::fromBytes( ::lime::utils::ByteArray bytes){
	HX_STACK_FRAME("lime.text.Font","fromBytes",0x65a32e2a,"lime.text.Font.fromBytes","lime/text/Font.hx",72,0x3be57807)
	HX_STACK_ARG(bytes,"bytes")
	HX_STACK_LINE(74)
	::lime::text::Font tmp = ::lime::text::Font_obj::__new(null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(74)
	::lime::text::Font font = tmp;		HX_STACK_VAR(font,"font");
	HX_STACK_LINE(75)
	::lime::utils::ByteArray tmp1 = bytes;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(75)
	font->__fromBytes(tmp1);
	HX_STACK_LINE(78)
	bool tmp2 = (font->src != null());		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(78)
	::lime::text::Font tmp3;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(78)
	if ((tmp2)){
		HX_STACK_LINE(78)
		tmp3 = font;
	}
	else{
		HX_STACK_LINE(78)
		tmp3 = null();
	}
	HX_STACK_LINE(78)
	return tmp3;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Font_obj,fromBytes,return )

::lime::text::Font Font_obj::fromFile( ::String path){
	HX_STACK_FRAME("lime.text.Font","fromFile",0x07a4e59d,"lime.text.Font.fromFile","lime/text/Font.hx",86,0x3be57807)
	HX_STACK_ARG(path,"path")
	HX_STACK_LINE(88)
	::lime::text::Font tmp = ::lime::text::Font_obj::__new(null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(88)
	::lime::text::Font font = tmp;		HX_STACK_VAR(font,"font");
	HX_STACK_LINE(89)
	::String tmp1 = path;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(89)
	font->__fromFile(tmp1);
	HX_STACK_LINE(92)
	bool tmp2 = (font->src != null());		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(92)
	::lime::text::Font tmp3;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(92)
	if ((tmp2)){
		HX_STACK_LINE(92)
		tmp3 = font;
	}
	else{
		HX_STACK_LINE(92)
		tmp3 = null();
	}
	HX_STACK_LINE(92)
	return tmp3;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Font_obj,fromFile,return )

Dynamic Font_obj::lime_font_get_ascender;

Dynamic Font_obj::lime_font_get_descender;

Dynamic Font_obj::lime_font_get_family_name;

Dynamic Font_obj::lime_font_get_glyph_index;

Dynamic Font_obj::lime_font_get_glyph_indices;

Dynamic Font_obj::lime_font_get_glyph_metrics;

Dynamic Font_obj::lime_font_get_height;

Dynamic Font_obj::lime_font_get_num_glyphs;

Dynamic Font_obj::lime_font_get_underline_position;

Dynamic Font_obj::lime_font_get_underline_thickness;

Dynamic Font_obj::lime_font_get_units_per_em;

Dynamic Font_obj::lime_font_load;

Dynamic Font_obj::lime_font_outline_decompose;

Dynamic Font_obj::lime_font_render_glyph;

Dynamic Font_obj::lime_font_render_glyphs;

Dynamic Font_obj::lime_font_set_size;


Font_obj::Font_obj()
{
}

void Font_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Font);
	HX_MARK_MEMBER_NAME(ascender,"ascender");
	HX_MARK_MEMBER_NAME(descender,"descender");
	HX_MARK_MEMBER_NAME(height,"height");
	HX_MARK_MEMBER_NAME(name,"name");
	HX_MARK_MEMBER_NAME(numGlyphs,"numGlyphs");
	HX_MARK_MEMBER_NAME(src,"src");
	HX_MARK_MEMBER_NAME(underlinePosition,"underlinePosition");
	HX_MARK_MEMBER_NAME(underlineThickness,"underlineThickness");
	HX_MARK_MEMBER_NAME(unitsPerEM,"unitsPerEM");
	HX_MARK_MEMBER_NAME(__fontPath,"__fontPath");
	HX_MARK_END_CLASS();
}

void Font_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(ascender,"ascender");
	HX_VISIT_MEMBER_NAME(descender,"descender");
	HX_VISIT_MEMBER_NAME(height,"height");
	HX_VISIT_MEMBER_NAME(name,"name");
	HX_VISIT_MEMBER_NAME(numGlyphs,"numGlyphs");
	HX_VISIT_MEMBER_NAME(src,"src");
	HX_VISIT_MEMBER_NAME(underlinePosition,"underlinePosition");
	HX_VISIT_MEMBER_NAME(underlineThickness,"underlineThickness");
	HX_VISIT_MEMBER_NAME(unitsPerEM,"unitsPerEM");
	HX_VISIT_MEMBER_NAME(__fontPath,"__fontPath");
}

Dynamic Font_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"src") ) { return src; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"name") ) { return name; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"height") ) { return inCallProp == hx::paccAlways ? get_height() : height; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"ascender") ) { return inCallProp == hx::paccAlways ? get_ascender() : ascender; }
		if (HX_FIELD_EQ(inName,"getGlyph") ) { return getGlyph_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"descender") ) { return inCallProp == hx::paccAlways ? get_descender() : descender; }
		if (HX_FIELD_EQ(inName,"numGlyphs") ) { return inCallProp == hx::paccAlways ? get_numGlyphs() : numGlyphs; }
		if (HX_FIELD_EQ(inName,"decompose") ) { return decompose_dyn(); }
		if (HX_FIELD_EQ(inName,"getGlyphs") ) { return getGlyphs_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"unitsPerEM") ) { return inCallProp == hx::paccAlways ? get_unitsPerEM() : unitsPerEM; }
		if (HX_FIELD_EQ(inName,"__fontPath") ) { return __fontPath; }
		if (HX_FIELD_EQ(inName,"__fromFile") ) { return __fromFile_dyn(); }
		if (HX_FIELD_EQ(inName,"get_height") ) { return get_height_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"renderGlyph") ) { return renderGlyph_dyn(); }
		if (HX_FIELD_EQ(inName,"__fromBytes") ) { return __fromBytes_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"renderGlyphs") ) { return renderGlyphs_dyn(); }
		if (HX_FIELD_EQ(inName,"get_ascender") ) { return get_ascender_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"get_descender") ) { return get_descender_dyn(); }
		if (HX_FIELD_EQ(inName,"get_numGlyphs") ) { return get_numGlyphs_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"get_unitsPerEM") ) { return get_unitsPerEM_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"getGlyphMetrics") ) { return getGlyphMetrics_dyn(); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"underlinePosition") ) { return inCallProp == hx::paccAlways ? get_underlinePosition() : underlinePosition; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"underlineThickness") ) { return inCallProp == hx::paccAlways ? get_underlineThickness() : underlineThickness; }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"get_underlinePosition") ) { return get_underlinePosition_dyn(); }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"get_underlineThickness") ) { return get_underlineThickness_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

bool Font_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"fromFile") ) { outValue = fromFile_dyn(); return true;  }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"fromBytes") ) { outValue = fromBytes_dyn(); return true;  }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"lime_font_load") ) { outValue = lime_font_load; return true;  }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"lime_font_set_size") ) { outValue = lime_font_set_size; return true;  }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"lime_font_get_height") ) { outValue = lime_font_get_height; return true;  }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"lime_font_get_ascender") ) { outValue = lime_font_get_ascender; return true;  }
		if (HX_FIELD_EQ(inName,"lime_font_render_glyph") ) { outValue = lime_font_render_glyph; return true;  }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"lime_font_get_descender") ) { outValue = lime_font_get_descender; return true;  }
		if (HX_FIELD_EQ(inName,"lime_font_render_glyphs") ) { outValue = lime_font_render_glyphs; return true;  }
		break;
	case 24:
		if (HX_FIELD_EQ(inName,"lime_font_get_num_glyphs") ) { outValue = lime_font_get_num_glyphs; return true;  }
		break;
	case 25:
		if (HX_FIELD_EQ(inName,"lime_font_get_family_name") ) { outValue = lime_font_get_family_name; return true;  }
		if (HX_FIELD_EQ(inName,"lime_font_get_glyph_index") ) { outValue = lime_font_get_glyph_index; return true;  }
		break;
	case 26:
		if (HX_FIELD_EQ(inName,"lime_font_get_units_per_em") ) { outValue = lime_font_get_units_per_em; return true;  }
		break;
	case 27:
		if (HX_FIELD_EQ(inName,"lime_font_get_glyph_indices") ) { outValue = lime_font_get_glyph_indices; return true;  }
		if (HX_FIELD_EQ(inName,"lime_font_get_glyph_metrics") ) { outValue = lime_font_get_glyph_metrics; return true;  }
		if (HX_FIELD_EQ(inName,"lime_font_outline_decompose") ) { outValue = lime_font_outline_decompose; return true;  }
		break;
	case 32:
		if (HX_FIELD_EQ(inName,"lime_font_get_underline_position") ) { outValue = lime_font_get_underline_position; return true;  }
		break;
	case 33:
		if (HX_FIELD_EQ(inName,"lime_font_get_underline_thickness") ) { outValue = lime_font_get_underline_thickness; return true;  }
	}
	return false;
}

Dynamic Font_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"src") ) { src=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"name") ) { name=inValue.Cast< ::String >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"height") ) { height=inValue.Cast< int >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"ascender") ) { ascender=inValue.Cast< int >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"descender") ) { descender=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"numGlyphs") ) { numGlyphs=inValue.Cast< int >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"unitsPerEM") ) { unitsPerEM=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__fontPath") ) { __fontPath=inValue.Cast< ::String >(); return inValue; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"underlinePosition") ) { underlinePosition=inValue.Cast< int >(); return inValue; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"underlineThickness") ) { underlineThickness=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool Font_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 14:
		if (HX_FIELD_EQ(inName,"lime_font_load") ) { lime_font_load=ioValue.Cast< Dynamic >(); return true; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"lime_font_set_size") ) { lime_font_set_size=ioValue.Cast< Dynamic >(); return true; }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"lime_font_get_height") ) { lime_font_get_height=ioValue.Cast< Dynamic >(); return true; }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"lime_font_get_ascender") ) { lime_font_get_ascender=ioValue.Cast< Dynamic >(); return true; }
		if (HX_FIELD_EQ(inName,"lime_font_render_glyph") ) { lime_font_render_glyph=ioValue.Cast< Dynamic >(); return true; }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"lime_font_get_descender") ) { lime_font_get_descender=ioValue.Cast< Dynamic >(); return true; }
		if (HX_FIELD_EQ(inName,"lime_font_render_glyphs") ) { lime_font_render_glyphs=ioValue.Cast< Dynamic >(); return true; }
		break;
	case 24:
		if (HX_FIELD_EQ(inName,"lime_font_get_num_glyphs") ) { lime_font_get_num_glyphs=ioValue.Cast< Dynamic >(); return true; }
		break;
	case 25:
		if (HX_FIELD_EQ(inName,"lime_font_get_family_name") ) { lime_font_get_family_name=ioValue.Cast< Dynamic >(); return true; }
		if (HX_FIELD_EQ(inName,"lime_font_get_glyph_index") ) { lime_font_get_glyph_index=ioValue.Cast< Dynamic >(); return true; }
		break;
	case 26:
		if (HX_FIELD_EQ(inName,"lime_font_get_units_per_em") ) { lime_font_get_units_per_em=ioValue.Cast< Dynamic >(); return true; }
		break;
	case 27:
		if (HX_FIELD_EQ(inName,"lime_font_get_glyph_indices") ) { lime_font_get_glyph_indices=ioValue.Cast< Dynamic >(); return true; }
		if (HX_FIELD_EQ(inName,"lime_font_get_glyph_metrics") ) { lime_font_get_glyph_metrics=ioValue.Cast< Dynamic >(); return true; }
		if (HX_FIELD_EQ(inName,"lime_font_outline_decompose") ) { lime_font_outline_decompose=ioValue.Cast< Dynamic >(); return true; }
		break;
	case 32:
		if (HX_FIELD_EQ(inName,"lime_font_get_underline_position") ) { lime_font_get_underline_position=ioValue.Cast< Dynamic >(); return true; }
		break;
	case 33:
		if (HX_FIELD_EQ(inName,"lime_font_get_underline_thickness") ) { lime_font_get_underline_thickness=ioValue.Cast< Dynamic >(); return true; }
	}
	return false;
}

void Font_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("ascender","\x37","\x98","\x10","\x60"));
	outFields->push(HX_HCSTRING("descender","\x17","\x65","\x27","\xab"));
	outFields->push(HX_HCSTRING("height","\xe7","\x07","\x4c","\x02"));
	outFields->push(HX_HCSTRING("name","\x4b","\x72","\xff","\x48"));
	outFields->push(HX_HCSTRING("numGlyphs","\x2d","\x44","\x5a","\x5f"));
	outFields->push(HX_HCSTRING("src","\xe4","\xa6","\x57","\x00"));
	outFields->push(HX_HCSTRING("underlinePosition","\xd5","\x5d","\x6b","\x96"));
	outFields->push(HX_HCSTRING("underlineThickness","\xc8","\xba","\x9b","\x91"));
	outFields->push(HX_HCSTRING("unitsPerEM","\x96","\xb6","\x60","\x21"));
	outFields->push(HX_HCSTRING("__fontPath","\x34","\x76","\x08","\x70"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsInt,(int)offsetof(Font_obj,ascender),HX_HCSTRING("ascender","\x37","\x98","\x10","\x60")},
	{hx::fsInt,(int)offsetof(Font_obj,descender),HX_HCSTRING("descender","\x17","\x65","\x27","\xab")},
	{hx::fsInt,(int)offsetof(Font_obj,height),HX_HCSTRING("height","\xe7","\x07","\x4c","\x02")},
	{hx::fsString,(int)offsetof(Font_obj,name),HX_HCSTRING("name","\x4b","\x72","\xff","\x48")},
	{hx::fsInt,(int)offsetof(Font_obj,numGlyphs),HX_HCSTRING("numGlyphs","\x2d","\x44","\x5a","\x5f")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(Font_obj,src),HX_HCSTRING("src","\xe4","\xa6","\x57","\x00")},
	{hx::fsInt,(int)offsetof(Font_obj,underlinePosition),HX_HCSTRING("underlinePosition","\xd5","\x5d","\x6b","\x96")},
	{hx::fsInt,(int)offsetof(Font_obj,underlineThickness),HX_HCSTRING("underlineThickness","\xc8","\xba","\x9b","\x91")},
	{hx::fsInt,(int)offsetof(Font_obj,unitsPerEM),HX_HCSTRING("unitsPerEM","\x96","\xb6","\x60","\x21")},
	{hx::fsString,(int)offsetof(Font_obj,__fontPath),HX_HCSTRING("__fontPath","\x34","\x76","\x08","\x70")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo sStaticStorageInfo[] = {
	{hx::fsObject /*Dynamic*/ ,(void *) &Font_obj::lime_font_get_ascender,HX_HCSTRING("lime_font_get_ascender","\x06","\xf1","\xb5","\x57")},
	{hx::fsObject /*Dynamic*/ ,(void *) &Font_obj::lime_font_get_descender,HX_HCSTRING("lime_font_get_descender","\x68","\xc1","\x2f","\x64")},
	{hx::fsObject /*Dynamic*/ ,(void *) &Font_obj::lime_font_get_family_name,HX_HCSTRING("lime_font_get_family_name","\x97","\xce","\xb2","\xb4")},
	{hx::fsObject /*Dynamic*/ ,(void *) &Font_obj::lime_font_get_glyph_index,HX_HCSTRING("lime_font_get_glyph_index","\x90","\x3b","\xdd","\xa2")},
	{hx::fsObject /*Dynamic*/ ,(void *) &Font_obj::lime_font_get_glyph_indices,HX_HCSTRING("lime_font_get_glyph_indices","\x25","\x83","\xe4","\x03")},
	{hx::fsObject /*Dynamic*/ ,(void *) &Font_obj::lime_font_get_glyph_metrics,HX_HCSTRING("lime_font_get_glyph_metrics","\x41","\xde","\x64","\x4d")},
	{hx::fsObject /*Dynamic*/ ,(void *) &Font_obj::lime_font_get_height,HX_HCSTRING("lime_font_get_height","\xf6","\x3e","\xaa","\xfc")},
	{hx::fsObject /*Dynamic*/ ,(void *) &Font_obj::lime_font_get_num_glyphs,HX_HCSTRING("lime_font_get_num_glyphs","\xef","\x8b","\xe7","\xad")},
	{hx::fsObject /*Dynamic*/ ,(void *) &Font_obj::lime_font_get_underline_position,HX_HCSTRING("lime_font_get_underline_position","\x0b","\x93","\x8e","\x28")},
	{hx::fsObject /*Dynamic*/ ,(void *) &Font_obj::lime_font_get_underline_thickness,HX_HCSTRING("lime_font_get_underline_thickness","\xd2","\x14","\x47","\xde")},
	{hx::fsObject /*Dynamic*/ ,(void *) &Font_obj::lime_font_get_units_per_em,HX_HCSTRING("lime_font_get_units_per_em","\x29","\x72","\x55","\xdc")},
	{hx::fsObject /*Dynamic*/ ,(void *) &Font_obj::lime_font_load,HX_HCSTRING("lime_font_load","\xec","\x08","\x6e","\x02")},
	{hx::fsObject /*Dynamic*/ ,(void *) &Font_obj::lime_font_outline_decompose,HX_HCSTRING("lime_font_outline_decompose","\xee","\xda","\x88","\x55")},
	{hx::fsObject /*Dynamic*/ ,(void *) &Font_obj::lime_font_render_glyph,HX_HCSTRING("lime_font_render_glyph","\x89","\x79","\x39","\x0f")},
	{hx::fsObject /*Dynamic*/ ,(void *) &Font_obj::lime_font_render_glyphs,HX_HCSTRING("lime_font_render_glyphs","\xca","\xde","\x10","\x43")},
	{hx::fsObject /*Dynamic*/ ,(void *) &Font_obj::lime_font_set_size,HX_HCSTRING("lime_font_set_size","\x84","\xff","\x47","\xdd")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("ascender","\x37","\x98","\x10","\x60"),
	HX_HCSTRING("descender","\x17","\x65","\x27","\xab"),
	HX_HCSTRING("height","\xe7","\x07","\x4c","\x02"),
	HX_HCSTRING("name","\x4b","\x72","\xff","\x48"),
	HX_HCSTRING("numGlyphs","\x2d","\x44","\x5a","\x5f"),
	HX_HCSTRING("src","\xe4","\xa6","\x57","\x00"),
	HX_HCSTRING("underlinePosition","\xd5","\x5d","\x6b","\x96"),
	HX_HCSTRING("underlineThickness","\xc8","\xba","\x9b","\x91"),
	HX_HCSTRING("unitsPerEM","\x96","\xb6","\x60","\x21"),
	HX_HCSTRING("__fontPath","\x34","\x76","\x08","\x70"),
	HX_HCSTRING("decompose","\xb1","\xc3","\xa7","\x7a"),
	HX_HCSTRING("getGlyph","\x36","\x0d","\xdc","\xf5"),
	HX_HCSTRING("getGlyphs","\x7d","\x82","\xaf","\x2a"),
	HX_HCSTRING("getGlyphMetrics","\xad","\x6f","\x39","\x58"),
	HX_HCSTRING("renderGlyph","\x76","\x2a","\xb6","\x61"),
	HX_HCSTRING("renderGlyphs","\x3d","\xfd","\xae","\x1d"),
	HX_HCSTRING("__fromBytes","\x81","\x3b","\x4d","\xa0"),
	HX_HCSTRING("__fromFile","\x26","\x10","\xc0","\x44"),
	HX_HCSTRING("get_ascender","\x40","\x4c","\x2a","\x15"),
	HX_HCSTRING("get_descender","\xee","\x38","\x8b","\x6c"),
	HX_HCSTRING("get_height","\xb0","\x77","\xd3","\xf2"),
	HX_HCSTRING("get_numGlyphs","\x04","\x18","\xbe","\x20"),
	HX_HCSTRING("get_underlinePosition","\xac","\x60","\x19","\x15"),
	HX_HCSTRING("get_underlineThickness","\x11","\x34","\x30","\xeb"),
	HX_HCSTRING("get_unitsPerEM","\xdf","\x3e","\x56","\x97"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Font_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(Font_obj::lime_font_get_ascender,"lime_font_get_ascender");
	HX_MARK_MEMBER_NAME(Font_obj::lime_font_get_descender,"lime_font_get_descender");
	HX_MARK_MEMBER_NAME(Font_obj::lime_font_get_family_name,"lime_font_get_family_name");
	HX_MARK_MEMBER_NAME(Font_obj::lime_font_get_glyph_index,"lime_font_get_glyph_index");
	HX_MARK_MEMBER_NAME(Font_obj::lime_font_get_glyph_indices,"lime_font_get_glyph_indices");
	HX_MARK_MEMBER_NAME(Font_obj::lime_font_get_glyph_metrics,"lime_font_get_glyph_metrics");
	HX_MARK_MEMBER_NAME(Font_obj::lime_font_get_height,"lime_font_get_height");
	HX_MARK_MEMBER_NAME(Font_obj::lime_font_get_num_glyphs,"lime_font_get_num_glyphs");
	HX_MARK_MEMBER_NAME(Font_obj::lime_font_get_underline_position,"lime_font_get_underline_position");
	HX_MARK_MEMBER_NAME(Font_obj::lime_font_get_underline_thickness,"lime_font_get_underline_thickness");
	HX_MARK_MEMBER_NAME(Font_obj::lime_font_get_units_per_em,"lime_font_get_units_per_em");
	HX_MARK_MEMBER_NAME(Font_obj::lime_font_load,"lime_font_load");
	HX_MARK_MEMBER_NAME(Font_obj::lime_font_outline_decompose,"lime_font_outline_decompose");
	HX_MARK_MEMBER_NAME(Font_obj::lime_font_render_glyph,"lime_font_render_glyph");
	HX_MARK_MEMBER_NAME(Font_obj::lime_font_render_glyphs,"lime_font_render_glyphs");
	HX_MARK_MEMBER_NAME(Font_obj::lime_font_set_size,"lime_font_set_size");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Font_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(Font_obj::lime_font_get_ascender,"lime_font_get_ascender");
	HX_VISIT_MEMBER_NAME(Font_obj::lime_font_get_descender,"lime_font_get_descender");
	HX_VISIT_MEMBER_NAME(Font_obj::lime_font_get_family_name,"lime_font_get_family_name");
	HX_VISIT_MEMBER_NAME(Font_obj::lime_font_get_glyph_index,"lime_font_get_glyph_index");
	HX_VISIT_MEMBER_NAME(Font_obj::lime_font_get_glyph_indices,"lime_font_get_glyph_indices");
	HX_VISIT_MEMBER_NAME(Font_obj::lime_font_get_glyph_metrics,"lime_font_get_glyph_metrics");
	HX_VISIT_MEMBER_NAME(Font_obj::lime_font_get_height,"lime_font_get_height");
	HX_VISIT_MEMBER_NAME(Font_obj::lime_font_get_num_glyphs,"lime_font_get_num_glyphs");
	HX_VISIT_MEMBER_NAME(Font_obj::lime_font_get_underline_position,"lime_font_get_underline_position");
	HX_VISIT_MEMBER_NAME(Font_obj::lime_font_get_underline_thickness,"lime_font_get_underline_thickness");
	HX_VISIT_MEMBER_NAME(Font_obj::lime_font_get_units_per_em,"lime_font_get_units_per_em");
	HX_VISIT_MEMBER_NAME(Font_obj::lime_font_load,"lime_font_load");
	HX_VISIT_MEMBER_NAME(Font_obj::lime_font_outline_decompose,"lime_font_outline_decompose");
	HX_VISIT_MEMBER_NAME(Font_obj::lime_font_render_glyph,"lime_font_render_glyph");
	HX_VISIT_MEMBER_NAME(Font_obj::lime_font_render_glyphs,"lime_font_render_glyphs");
	HX_VISIT_MEMBER_NAME(Font_obj::lime_font_set_size,"lime_font_set_size");
};

#endif

hx::Class Font_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("fromBytes","\xa1","\xf2","\x20","\x72"),
	HX_HCSTRING("fromFile","\x06","\x9d","\x87","\xa1"),
	HX_HCSTRING("lime_font_get_ascender","\x06","\xf1","\xb5","\x57"),
	HX_HCSTRING("lime_font_get_descender","\x68","\xc1","\x2f","\x64"),
	HX_HCSTRING("lime_font_get_family_name","\x97","\xce","\xb2","\xb4"),
	HX_HCSTRING("lime_font_get_glyph_index","\x90","\x3b","\xdd","\xa2"),
	HX_HCSTRING("lime_font_get_glyph_indices","\x25","\x83","\xe4","\x03"),
	HX_HCSTRING("lime_font_get_glyph_metrics","\x41","\xde","\x64","\x4d"),
	HX_HCSTRING("lime_font_get_height","\xf6","\x3e","\xaa","\xfc"),
	HX_HCSTRING("lime_font_get_num_glyphs","\xef","\x8b","\xe7","\xad"),
	HX_HCSTRING("lime_font_get_underline_position","\x0b","\x93","\x8e","\x28"),
	HX_HCSTRING("lime_font_get_underline_thickness","\xd2","\x14","\x47","\xde"),
	HX_HCSTRING("lime_font_get_units_per_em","\x29","\x72","\x55","\xdc"),
	HX_HCSTRING("lime_font_load","\xec","\x08","\x6e","\x02"),
	HX_HCSTRING("lime_font_outline_decompose","\xee","\xda","\x88","\x55"),
	HX_HCSTRING("lime_font_render_glyph","\x89","\x79","\x39","\x0f"),
	HX_HCSTRING("lime_font_render_glyphs","\xca","\xde","\x10","\x43"),
	HX_HCSTRING("lime_font_set_size","\x84","\xff","\x47","\xdd"),
	::String(null()) };

void Font_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("lime.text.Font","\xb7","\x86","\x7e","\xd1");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Font_obj::__GetStatic;
	__mClass->mSetStaticField = &Font_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Font_obj >;
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

void Font_obj::__boot()
{
	lime_font_get_ascender= ::lime::_system::System_obj::load(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_font_get_ascender","\x06","\xf1","\xb5","\x57"),(int)1,null());
	lime_font_get_descender= ::lime::_system::System_obj::load(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_font_get_descender","\x68","\xc1","\x2f","\x64"),(int)1,null());
	lime_font_get_family_name= ::lime::_system::System_obj::load(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_font_get_family_name","\x97","\xce","\xb2","\xb4"),(int)1,null());
	lime_font_get_glyph_index= ::lime::_system::System_obj::load(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_font_get_glyph_index","\x90","\x3b","\xdd","\xa2"),(int)2,null());
	lime_font_get_glyph_indices= ::lime::_system::System_obj::load(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_font_get_glyph_indices","\x25","\x83","\xe4","\x03"),(int)2,null());
	lime_font_get_glyph_metrics= ::lime::_system::System_obj::load(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_font_get_glyph_metrics","\x41","\xde","\x64","\x4d"),(int)2,null());
	lime_font_get_height= ::lime::_system::System_obj::load(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_font_get_height","\xf6","\x3e","\xaa","\xfc"),(int)1,null());
	lime_font_get_num_glyphs= ::lime::_system::System_obj::load(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_font_get_num_glyphs","\xef","\x8b","\xe7","\xad"),(int)1,null());
	lime_font_get_underline_position= ::lime::_system::System_obj::load(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_font_get_underline_position","\x0b","\x93","\x8e","\x28"),(int)1,null());
	lime_font_get_underline_thickness= ::lime::_system::System_obj::load(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_font_get_underline_thickness","\xd2","\x14","\x47","\xde"),(int)1,null());
	lime_font_get_units_per_em= ::lime::_system::System_obj::load(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_font_get_units_per_em","\x29","\x72","\x55","\xdc"),(int)1,null());
	lime_font_load= ::lime::_system::System_obj::load(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_font_load","\xec","\x08","\x6e","\x02"),(int)1,null());
	lime_font_outline_decompose= ::lime::_system::System_obj::load(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_font_outline_decompose","\xee","\xda","\x88","\x55"),(int)2,null());
	lime_font_render_glyph= ::lime::_system::System_obj::load(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_font_render_glyph","\x89","\x79","\x39","\x0f"),(int)3,null());
	lime_font_render_glyphs= ::lime::_system::System_obj::load(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_font_render_glyphs","\xca","\xde","\x10","\x43"),(int)3,null());
	lime_font_set_size= ::lime::_system::System_obj::load(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_font_set_size","\x84","\xff","\x47","\xdd"),(int)2,null());
}

} // end namespace lime
} // end namespace text
