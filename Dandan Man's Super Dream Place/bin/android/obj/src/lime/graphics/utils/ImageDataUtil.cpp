#include <hxcpp.h>

#include "hxMath.h"
#ifndef INCLUDED_Std
#include <Std.h>
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
#ifndef INCLUDED_lime_graphics_ImageChannel
#include <lime/graphics/ImageChannel.h>
#endif
#ifndef INCLUDED_lime_graphics_utils_ImageDataUtil
#include <lime/graphics/utils/ImageDataUtil.h>
#endif
#ifndef INCLUDED_lime_graphics_utils__ImageDataUtil_ImageDataView
#include <lime/graphics/utils/_ImageDataUtil/ImageDataView.h>
#endif
#ifndef INCLUDED_lime_math_Rectangle
#include <lime/math/Rectangle.h>
#endif
#ifndef INCLUDED_lime_math_Vector2
#include <lime/math/Vector2.h>
#endif
#ifndef INCLUDED_lime_math__ColorMatrix_ColorMatrix_Impl_
#include <lime/math/_ColorMatrix/ColorMatrix_Impl_.h>
#endif
#ifndef INCLUDED_lime_math_color__RGBA_RGBA_Impl_
#include <lime/math/color/_RGBA/RGBA_Impl_.h>
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
#ifndef INCLUDED_lime_utils__ArrayBufferView_TAError
#include <lime/utils/_ArrayBufferView/TAError.h>
#endif
namespace lime{
namespace graphics{
namespace utils{

Void ImageDataUtil_obj::__construct()
{
	return null();
}

//ImageDataUtil_obj::~ImageDataUtil_obj() { }

Dynamic ImageDataUtil_obj::__CreateEmpty() { return  new ImageDataUtil_obj; }
hx::ObjectPtr< ImageDataUtil_obj > ImageDataUtil_obj::__new()
{  hx::ObjectPtr< ImageDataUtil_obj > _result_ = new ImageDataUtil_obj();
	_result_->__construct();
	return _result_;}

Dynamic ImageDataUtil_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< ImageDataUtil_obj > _result_ = new ImageDataUtil_obj();
	_result_->__construct();
	return _result_;}

Void ImageDataUtil_obj::colorTransform( ::lime::graphics::Image image,::lime::math::Rectangle rect,::lime::utils::ArrayBufferView colorMatrix){
{
		HX_STACK_FRAME("lime.graphics.utils.ImageDataUtil","colorTransform",0x2c17e9b7,"lime.graphics.utils.ImageDataUtil.colorTransform","lime/graphics/utils/ImageDataUtil.hx",26,0x494d921f)
		HX_STACK_ARG(image,"image")
		HX_STACK_ARG(rect,"rect")
		HX_STACK_ARG(colorMatrix,"colorMatrix")
		HX_STACK_LINE(28)
		::lime::utils::ArrayBufferView tmp = image->buffer->data;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(28)
		::lime::utils::ArrayBufferView data = tmp;		HX_STACK_VAR(data,"data");
		HX_STACK_LINE(29)
		bool tmp1 = (data == null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(29)
		if ((tmp1)){
			HX_STACK_LINE(29)
			return null();
		}
		HX_STACK_LINE(32)
		bool tmp2 = ::lime::_system::System_obj::disableCFFI;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(32)
		bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(32)
		if ((tmp3)){
			HX_STACK_LINE(32)
			::lime::graphics::Image tmp4 = image;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(32)
			::lime::math::Rectangle tmp5 = rect;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(32)
			::lime::utils::ArrayBufferView tmp6 = colorMatrix;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(32)
			::lime::graphics::utils::ImageDataUtil_obj::lime_image_data_util_color_transform(tmp4,tmp5,tmp6);
		}
		else{
			HX_STACK_LINE(36)
			int tmp4 = image->buffer->format;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(36)
			int format = tmp4;		HX_STACK_VAR(format,"format");
			HX_STACK_LINE(37)
			bool tmp5 = image->buffer->premultiplied;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(37)
			bool premultiplied = tmp5;		HX_STACK_VAR(premultiplied,"premultiplied");
			HX_STACK_LINE(39)
			::lime::graphics::utils::_ImageDataUtil::ImageDataView tmp6 = ::lime::graphics::utils::_ImageDataUtil::ImageDataView_obj::__new(image,rect);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(39)
			::lime::graphics::utils::_ImageDataUtil::ImageDataView dataView = tmp6;		HX_STACK_VAR(dataView,"dataView");
			HX_STACK_LINE(41)
			::lime::utils::ArrayBufferView tmp7 = colorMatrix;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(41)
			::lime::utils::ArrayBufferView tmp8 = ::lime::math::_ColorMatrix::ColorMatrix_Impl__obj::getAlphaTable(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(41)
			::lime::utils::ArrayBufferView alphaTable = tmp8;		HX_STACK_VAR(alphaTable,"alphaTable");
			HX_STACK_LINE(42)
			::lime::utils::ArrayBufferView tmp9 = colorMatrix;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(42)
			::lime::utils::ArrayBufferView tmp10 = ::lime::math::_ColorMatrix::ColorMatrix_Impl__obj::getRedTable(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(42)
			::lime::utils::ArrayBufferView redTable = tmp10;		HX_STACK_VAR(redTable,"redTable");
			HX_STACK_LINE(43)
			::lime::utils::ArrayBufferView tmp11 = colorMatrix;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(43)
			::lime::utils::ArrayBufferView tmp12 = ::lime::math::_ColorMatrix::ColorMatrix_Impl__obj::getGreenTable(tmp11);		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(43)
			::lime::utils::ArrayBufferView greenTable = tmp12;		HX_STACK_VAR(greenTable,"greenTable");
			HX_STACK_LINE(44)
			::lime::utils::ArrayBufferView tmp13 = colorMatrix;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(44)
			::lime::utils::ArrayBufferView tmp14 = ::lime::math::_ColorMatrix::ColorMatrix_Impl__obj::getBlueTable(tmp13);		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(44)
			::lime::utils::ArrayBufferView blueTable = tmp14;		HX_STACK_VAR(blueTable,"blueTable");
			HX_STACK_LINE(46)
			int row;		HX_STACK_VAR(row,"row");
			HX_STACK_LINE(46)
			int offset;		HX_STACK_VAR(offset,"offset");
			HX_STACK_LINE(46)
			int pixel;		HX_STACK_VAR(pixel,"pixel");
			HX_STACK_LINE(48)
			{
				HX_STACK_LINE(48)
				int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(48)
				int _g = dataView->height;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(48)
				while((true)){
					HX_STACK_LINE(48)
					bool tmp15 = (_g1 < _g);		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(48)
					bool tmp16 = !(tmp15);		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(48)
					if ((tmp16)){
						HX_STACK_LINE(48)
						break;
					}
					HX_STACK_LINE(48)
					int tmp17 = (_g1)++;		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(48)
					int y = tmp17;		HX_STACK_VAR(y,"y");
					HX_STACK_LINE(50)
					int tmp18 = dataView->offset;		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(50)
					int tmp19 = (dataView->stride * y);		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(50)
					int tmp20 = (tmp18 + tmp19);		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(50)
					row = tmp20;
					HX_STACK_LINE(52)
					{
						HX_STACK_LINE(52)
						int _g3 = (int)0;		HX_STACK_VAR(_g3,"_g3");
						HX_STACK_LINE(52)
						int _g2 = dataView->width;		HX_STACK_VAR(_g2,"_g2");
						HX_STACK_LINE(52)
						while((true)){
							HX_STACK_LINE(52)
							bool tmp21 = (_g3 < _g2);		HX_STACK_VAR(tmp21,"tmp21");
							HX_STACK_LINE(52)
							bool tmp22 = !(tmp21);		HX_STACK_VAR(tmp22,"tmp22");
							HX_STACK_LINE(52)
							if ((tmp22)){
								HX_STACK_LINE(52)
								break;
							}
							HX_STACK_LINE(52)
							int tmp23 = (_g3)++;		HX_STACK_VAR(tmp23,"tmp23");
							HX_STACK_LINE(52)
							int x = tmp23;		HX_STACK_VAR(x,"x");
							HX_STACK_LINE(54)
							int tmp24 = row;		HX_STACK_VAR(tmp24,"tmp24");
							HX_STACK_LINE(54)
							int tmp25 = (x * (int)4);		HX_STACK_VAR(tmp25,"tmp25");
							HX_STACK_LINE(54)
							int tmp26 = (tmp24 + tmp25);		HX_STACK_VAR(tmp26,"tmp26");
							HX_STACK_LINE(54)
							offset = tmp26;
							HX_STACK_LINE(56)
							{
								HX_STACK_LINE(56)
								int tmp27 = format;		HX_STACK_VAR(tmp27,"tmp27");
								HX_STACK_LINE(56)
								switch( (int)(tmp27)){
									case (int)2: {
										HX_STACK_LINE(56)
										int tmp28 = ::__hxcpp_memory_get_byte(data->buffer->b,(data->byteOffset + ((offset + (int)2))));		HX_STACK_VAR(tmp28,"tmp28");
										HX_STACK_LINE(56)
										Dynamic tmp29 = (int(tmp28) & int((int)255));		HX_STACK_VAR(tmp29,"tmp29");
										HX_STACK_LINE(56)
										int r = tmp29;		HX_STACK_VAR(r,"r");
										HX_STACK_LINE(56)
										int tmp30 = ::__hxcpp_memory_get_byte(data->buffer->b,(data->byteOffset + ((offset + (int)1))));		HX_STACK_VAR(tmp30,"tmp30");
										HX_STACK_LINE(56)
										Dynamic tmp31 = (int(tmp30) & int((int)255));		HX_STACK_VAR(tmp31,"tmp31");
										HX_STACK_LINE(56)
										int g = tmp31;		HX_STACK_VAR(g,"g");
										HX_STACK_LINE(56)
										int tmp32 = ::__hxcpp_memory_get_byte(data->buffer->b,(data->byteOffset + offset));		HX_STACK_VAR(tmp32,"tmp32");
										HX_STACK_LINE(56)
										Dynamic tmp33 = (int(tmp32) & int((int)255));		HX_STACK_VAR(tmp33,"tmp33");
										HX_STACK_LINE(56)
										int b = tmp33;		HX_STACK_VAR(b,"b");
										HX_STACK_LINE(56)
										int tmp34 = ::__hxcpp_memory_get_byte(data->buffer->b,(data->byteOffset + ((offset + (int)3))));		HX_STACK_VAR(tmp34,"tmp34");
										HX_STACK_LINE(56)
										Dynamic tmp35 = (int(tmp34) & int((int)255));		HX_STACK_VAR(tmp35,"tmp35");
										HX_STACK_LINE(56)
										int a = tmp35;		HX_STACK_VAR(a,"a");
										HX_STACK_LINE(56)
										int tmp36 = (int(r) & int((int)255));		HX_STACK_VAR(tmp36,"tmp36");
										HX_STACK_LINE(56)
										int tmp37 = (int(tmp36) << int((int)24));		HX_STACK_VAR(tmp37,"tmp37");
										HX_STACK_LINE(56)
										int tmp38 = (int(g) & int((int)255));		HX_STACK_VAR(tmp38,"tmp38");
										HX_STACK_LINE(56)
										int tmp39 = (int(tmp38) << int((int)16));		HX_STACK_VAR(tmp39,"tmp39");
										HX_STACK_LINE(56)
										int tmp40 = (int(tmp37) | int(tmp39));		HX_STACK_VAR(tmp40,"tmp40");
										HX_STACK_LINE(56)
										int tmp41 = (int(b) & int((int)255));		HX_STACK_VAR(tmp41,"tmp41");
										HX_STACK_LINE(56)
										int tmp42 = (int(tmp41) << int((int)8));		HX_STACK_VAR(tmp42,"tmp42");
										HX_STACK_LINE(56)
										int tmp43 = (int(tmp40) | int(tmp42));		HX_STACK_VAR(tmp43,"tmp43");
										HX_STACK_LINE(56)
										int tmp44 = (int(a) & int((int)255));		HX_STACK_VAR(tmp44,"tmp44");
										HX_STACK_LINE(56)
										int tmp45 = (int(tmp43) | int(tmp44));		HX_STACK_VAR(tmp45,"tmp45");
										HX_STACK_LINE(56)
										pixel = tmp45;
									}
									;break;
									case (int)0: {
										HX_STACK_LINE(56)
										int tmp28 = ::__hxcpp_memory_get_byte(data->buffer->b,(data->byteOffset + offset));		HX_STACK_VAR(tmp28,"tmp28");
										HX_STACK_LINE(56)
										Dynamic tmp29 = (int(tmp28) & int((int)255));		HX_STACK_VAR(tmp29,"tmp29");
										HX_STACK_LINE(56)
										int r = tmp29;		HX_STACK_VAR(r,"r");
										HX_STACK_LINE(56)
										int tmp30 = ::__hxcpp_memory_get_byte(data->buffer->b,(data->byteOffset + ((offset + (int)1))));		HX_STACK_VAR(tmp30,"tmp30");
										HX_STACK_LINE(56)
										Dynamic tmp31 = (int(tmp30) & int((int)255));		HX_STACK_VAR(tmp31,"tmp31");
										HX_STACK_LINE(56)
										int g = tmp31;		HX_STACK_VAR(g,"g");
										HX_STACK_LINE(56)
										int tmp32 = ::__hxcpp_memory_get_byte(data->buffer->b,(data->byteOffset + ((offset + (int)2))));		HX_STACK_VAR(tmp32,"tmp32");
										HX_STACK_LINE(56)
										Dynamic tmp33 = (int(tmp32) & int((int)255));		HX_STACK_VAR(tmp33,"tmp33");
										HX_STACK_LINE(56)
										int b = tmp33;		HX_STACK_VAR(b,"b");
										HX_STACK_LINE(56)
										int tmp34 = ::__hxcpp_memory_get_byte(data->buffer->b,(data->byteOffset + ((offset + (int)3))));		HX_STACK_VAR(tmp34,"tmp34");
										HX_STACK_LINE(56)
										Dynamic tmp35 = (int(tmp34) & int((int)255));		HX_STACK_VAR(tmp35,"tmp35");
										HX_STACK_LINE(56)
										int a = tmp35;		HX_STACK_VAR(a,"a");
										HX_STACK_LINE(56)
										int tmp36 = (int(r) & int((int)255));		HX_STACK_VAR(tmp36,"tmp36");
										HX_STACK_LINE(56)
										int tmp37 = (int(tmp36) << int((int)24));		HX_STACK_VAR(tmp37,"tmp37");
										HX_STACK_LINE(56)
										int tmp38 = (int(g) & int((int)255));		HX_STACK_VAR(tmp38,"tmp38");
										HX_STACK_LINE(56)
										int tmp39 = (int(tmp38) << int((int)16));		HX_STACK_VAR(tmp39,"tmp39");
										HX_STACK_LINE(56)
										int tmp40 = (int(tmp37) | int(tmp39));		HX_STACK_VAR(tmp40,"tmp40");
										HX_STACK_LINE(56)
										int tmp41 = (int(b) & int((int)255));		HX_STACK_VAR(tmp41,"tmp41");
										HX_STACK_LINE(56)
										int tmp42 = (int(tmp41) << int((int)8));		HX_STACK_VAR(tmp42,"tmp42");
										HX_STACK_LINE(56)
										int tmp43 = (int(tmp40) | int(tmp42));		HX_STACK_VAR(tmp43,"tmp43");
										HX_STACK_LINE(56)
										int tmp44 = (int(a) & int((int)255));		HX_STACK_VAR(tmp44,"tmp44");
										HX_STACK_LINE(56)
										int tmp45 = (int(tmp43) | int(tmp44));		HX_STACK_VAR(tmp45,"tmp45");
										HX_STACK_LINE(56)
										pixel = tmp45;
									}
									;break;
									case (int)1: {
										HX_STACK_LINE(56)
										int tmp28 = ::__hxcpp_memory_get_byte(data->buffer->b,(data->byteOffset + ((offset + (int)1))));		HX_STACK_VAR(tmp28,"tmp28");
										HX_STACK_LINE(56)
										Dynamic tmp29 = (int(tmp28) & int((int)255));		HX_STACK_VAR(tmp29,"tmp29");
										HX_STACK_LINE(56)
										int r = tmp29;		HX_STACK_VAR(r,"r");
										HX_STACK_LINE(56)
										int tmp30 = ::__hxcpp_memory_get_byte(data->buffer->b,(data->byteOffset + ((offset + (int)2))));		HX_STACK_VAR(tmp30,"tmp30");
										HX_STACK_LINE(56)
										Dynamic tmp31 = (int(tmp30) & int((int)255));		HX_STACK_VAR(tmp31,"tmp31");
										HX_STACK_LINE(56)
										int g = tmp31;		HX_STACK_VAR(g,"g");
										HX_STACK_LINE(56)
										int tmp32 = ::__hxcpp_memory_get_byte(data->buffer->b,(data->byteOffset + ((offset + (int)3))));		HX_STACK_VAR(tmp32,"tmp32");
										HX_STACK_LINE(56)
										Dynamic tmp33 = (int(tmp32) & int((int)255));		HX_STACK_VAR(tmp33,"tmp33");
										HX_STACK_LINE(56)
										int b = tmp33;		HX_STACK_VAR(b,"b");
										HX_STACK_LINE(56)
										int tmp34 = ::__hxcpp_memory_get_byte(data->buffer->b,(data->byteOffset + offset));		HX_STACK_VAR(tmp34,"tmp34");
										HX_STACK_LINE(56)
										Dynamic tmp35 = (int(tmp34) & int((int)255));		HX_STACK_VAR(tmp35,"tmp35");
										HX_STACK_LINE(56)
										int a = tmp35;		HX_STACK_VAR(a,"a");
										HX_STACK_LINE(56)
										int tmp36 = (int(r) & int((int)255));		HX_STACK_VAR(tmp36,"tmp36");
										HX_STACK_LINE(56)
										int tmp37 = (int(tmp36) << int((int)24));		HX_STACK_VAR(tmp37,"tmp37");
										HX_STACK_LINE(56)
										int tmp38 = (int(g) & int((int)255));		HX_STACK_VAR(tmp38,"tmp38");
										HX_STACK_LINE(56)
										int tmp39 = (int(tmp38) << int((int)16));		HX_STACK_VAR(tmp39,"tmp39");
										HX_STACK_LINE(56)
										int tmp40 = (int(tmp37) | int(tmp39));		HX_STACK_VAR(tmp40,"tmp40");
										HX_STACK_LINE(56)
										int tmp41 = (int(b) & int((int)255));		HX_STACK_VAR(tmp41,"tmp41");
										HX_STACK_LINE(56)
										int tmp42 = (int(tmp41) << int((int)8));		HX_STACK_VAR(tmp42,"tmp42");
										HX_STACK_LINE(56)
										int tmp43 = (int(tmp40) | int(tmp42));		HX_STACK_VAR(tmp43,"tmp43");
										HX_STACK_LINE(56)
										int tmp44 = (int(a) & int((int)255));		HX_STACK_VAR(tmp44,"tmp44");
										HX_STACK_LINE(56)
										int tmp45 = (int(tmp43) | int(tmp44));		HX_STACK_VAR(tmp45,"tmp45");
										HX_STACK_LINE(56)
										pixel = tmp45;
									}
									;break;
								}
								HX_STACK_LINE(56)
								bool tmp28 = premultiplied;		HX_STACK_VAR(tmp28,"tmp28");
								HX_STACK_LINE(56)
								if ((tmp28)){
									HX_STACK_LINE(56)
									int tmp29 = (int(pixel) & int((int)255));		HX_STACK_VAR(tmp29,"tmp29");
									HX_STACK_LINE(56)
									bool tmp30 = (tmp29 != (int)0);		HX_STACK_VAR(tmp30,"tmp30");
									HX_STACK_LINE(56)
									bool tmp31;		HX_STACK_VAR(tmp31,"tmp31");
									HX_STACK_LINE(56)
									if ((tmp30)){
										HX_STACK_LINE(56)
										int tmp32 = (int(pixel) & int((int)255));		HX_STACK_VAR(tmp32,"tmp32");
										HX_STACK_LINE(56)
										int tmp33 = tmp32;		HX_STACK_VAR(tmp33,"tmp33");
										HX_STACK_LINE(56)
										tmp31 = (tmp33 != (int)255);
									}
									else{
										HX_STACK_LINE(56)
										tmp31 = false;
									}
									HX_STACK_LINE(56)
									if ((tmp31)){
										HX_STACK_LINE(56)
										int tmp32 = (int(pixel) & int((int)255));		HX_STACK_VAR(tmp32,"tmp32");
										HX_STACK_LINE(56)
										Float tmp33 = (Float(((Float)255.0)) / Float(tmp32));		HX_STACK_VAR(tmp33,"tmp33");
										HX_STACK_LINE(56)
										::lime::math::color::_RGBA::RGBA_Impl__obj::unmult = tmp33;
										HX_STACK_LINE(56)
										{
											HX_STACK_LINE(56)
											Dynamic tmp34;		HX_STACK_VAR(tmp34,"tmp34");
											HX_STACK_LINE(56)
											{
												HX_STACK_LINE(56)
												::lime::utils::ArrayBufferView tmp35 = ::lime::math::color::_RGBA::RGBA_Impl__obj::__clamp;		HX_STACK_VAR(tmp35,"tmp35");
												HX_STACK_LINE(56)
												::lime::utils::ArrayBufferView this1 = tmp35;		HX_STACK_VAR(this1,"this1");
												HX_STACK_LINE(56)
												int tmp36 = (int(pixel) >> int((int)24));		HX_STACK_VAR(tmp36,"tmp36");
												HX_STACK_LINE(56)
												int tmp37 = (int(tmp36) & int((int)255));		HX_STACK_VAR(tmp37,"tmp37");
												HX_STACK_LINE(56)
												Float tmp38 = ::lime::math::color::_RGBA::RGBA_Impl__obj::unmult;		HX_STACK_VAR(tmp38,"tmp38");
												HX_STACK_LINE(56)
												Float tmp39 = (tmp37 * tmp38);		HX_STACK_VAR(tmp39,"tmp39");
												HX_STACK_LINE(56)
												int tmp40 = ::Math_obj::round(tmp39);		HX_STACK_VAR(tmp40,"tmp40");
												HX_STACK_LINE(56)
												int idx = tmp40;		HX_STACK_VAR(idx,"idx");
												HX_STACK_LINE(56)
												int tmp41 = ::__hxcpp_memory_get_byte(this1->buffer->b,(this1->byteOffset + idx));		HX_STACK_VAR(tmp41,"tmp41");
												HX_STACK_LINE(56)
												tmp34 = (int(tmp41) & int((int)255));
											}
											HX_STACK_LINE(56)
											int r = tmp34;		HX_STACK_VAR(r,"r");
											HX_STACK_LINE(56)
											Dynamic tmp35;		HX_STACK_VAR(tmp35,"tmp35");
											HX_STACK_LINE(56)
											{
												HX_STACK_LINE(56)
												::lime::utils::ArrayBufferView tmp36 = ::lime::math::color::_RGBA::RGBA_Impl__obj::__clamp;		HX_STACK_VAR(tmp36,"tmp36");
												HX_STACK_LINE(56)
												::lime::utils::ArrayBufferView this1 = tmp36;		HX_STACK_VAR(this1,"this1");
												HX_STACK_LINE(56)
												int tmp37 = (int(pixel) >> int((int)16));		HX_STACK_VAR(tmp37,"tmp37");
												HX_STACK_LINE(56)
												int tmp38 = (int(tmp37) & int((int)255));		HX_STACK_VAR(tmp38,"tmp38");
												HX_STACK_LINE(56)
												Float tmp39 = ::lime::math::color::_RGBA::RGBA_Impl__obj::unmult;		HX_STACK_VAR(tmp39,"tmp39");
												HX_STACK_LINE(56)
												Float tmp40 = (tmp38 * tmp39);		HX_STACK_VAR(tmp40,"tmp40");
												HX_STACK_LINE(56)
												int tmp41 = ::Math_obj::round(tmp40);		HX_STACK_VAR(tmp41,"tmp41");
												HX_STACK_LINE(56)
												int idx = tmp41;		HX_STACK_VAR(idx,"idx");
												HX_STACK_LINE(56)
												int tmp42 = ::__hxcpp_memory_get_byte(this1->buffer->b,(this1->byteOffset + idx));		HX_STACK_VAR(tmp42,"tmp42");
												HX_STACK_LINE(56)
												tmp35 = (int(tmp42) & int((int)255));
											}
											HX_STACK_LINE(56)
											int g = tmp35;		HX_STACK_VAR(g,"g");
											HX_STACK_LINE(56)
											Dynamic tmp36;		HX_STACK_VAR(tmp36,"tmp36");
											HX_STACK_LINE(56)
											{
												HX_STACK_LINE(56)
												::lime::utils::ArrayBufferView tmp37 = ::lime::math::color::_RGBA::RGBA_Impl__obj::__clamp;		HX_STACK_VAR(tmp37,"tmp37");
												HX_STACK_LINE(56)
												::lime::utils::ArrayBufferView this1 = tmp37;		HX_STACK_VAR(this1,"this1");
												HX_STACK_LINE(56)
												int tmp38 = (int(pixel) >> int((int)8));		HX_STACK_VAR(tmp38,"tmp38");
												HX_STACK_LINE(56)
												int tmp39 = (int(tmp38) & int((int)255));		HX_STACK_VAR(tmp39,"tmp39");
												HX_STACK_LINE(56)
												Float tmp40 = ::lime::math::color::_RGBA::RGBA_Impl__obj::unmult;		HX_STACK_VAR(tmp40,"tmp40");
												HX_STACK_LINE(56)
												Float tmp41 = (tmp39 * tmp40);		HX_STACK_VAR(tmp41,"tmp41");
												HX_STACK_LINE(56)
												int tmp42 = ::Math_obj::round(tmp41);		HX_STACK_VAR(tmp42,"tmp42");
												HX_STACK_LINE(56)
												int idx = tmp42;		HX_STACK_VAR(idx,"idx");
												HX_STACK_LINE(56)
												int tmp43 = ::__hxcpp_memory_get_byte(this1->buffer->b,(this1->byteOffset + idx));		HX_STACK_VAR(tmp43,"tmp43");
												HX_STACK_LINE(56)
												tmp36 = (int(tmp43) & int((int)255));
											}
											HX_STACK_LINE(56)
											int b = tmp36;		HX_STACK_VAR(b,"b");
											HX_STACK_LINE(56)
											int tmp37 = (int(r) & int((int)255));		HX_STACK_VAR(tmp37,"tmp37");
											HX_STACK_LINE(56)
											int tmp38 = (int(tmp37) << int((int)24));		HX_STACK_VAR(tmp38,"tmp38");
											HX_STACK_LINE(56)
											int tmp39 = (int(g) & int((int)255));		HX_STACK_VAR(tmp39,"tmp39");
											HX_STACK_LINE(56)
											int tmp40 = (int(tmp39) << int((int)16));		HX_STACK_VAR(tmp40,"tmp40");
											HX_STACK_LINE(56)
											int tmp41 = (int(tmp38) | int(tmp40));		HX_STACK_VAR(tmp41,"tmp41");
											HX_STACK_LINE(56)
											int tmp42 = (int(b) & int((int)255));		HX_STACK_VAR(tmp42,"tmp42");
											HX_STACK_LINE(56)
											int tmp43 = (int(tmp42) << int((int)8));		HX_STACK_VAR(tmp43,"tmp43");
											HX_STACK_LINE(56)
											int tmp44 = (int(tmp41) | int(tmp43));		HX_STACK_VAR(tmp44,"tmp44");
											HX_STACK_LINE(56)
											int tmp45 = (int(pixel) & int((int)255));		HX_STACK_VAR(tmp45,"tmp45");
											HX_STACK_LINE(56)
											int tmp46 = (int(tmp45) & int((int)255));		HX_STACK_VAR(tmp46,"tmp46");
											HX_STACK_LINE(56)
											int tmp47 = (int(tmp44) | int(tmp46));		HX_STACK_VAR(tmp47,"tmp47");
											HX_STACK_LINE(56)
											pixel = tmp47;
										}
									}
								}
							}
							HX_STACK_LINE(57)
							{
								HX_STACK_LINE(57)
								int tmp27 = ::__hxcpp_memory_get_byte(redTable->buffer->b,(redTable->byteOffset + ((int((int(pixel) >> int((int)24))) & int((int)255)))));		HX_STACK_VAR(tmp27,"tmp27");
								HX_STACK_LINE(57)
								Dynamic tmp28 = (int(tmp27) & int((int)255));		HX_STACK_VAR(tmp28,"tmp28");
								HX_STACK_LINE(57)
								int r = tmp28;		HX_STACK_VAR(r,"r");
								HX_STACK_LINE(57)
								int tmp29 = ::__hxcpp_memory_get_byte(greenTable->buffer->b,(greenTable->byteOffset + ((int((int(pixel) >> int((int)16))) & int((int)255)))));		HX_STACK_VAR(tmp29,"tmp29");
								HX_STACK_LINE(57)
								Dynamic tmp30 = (int(tmp29) & int((int)255));		HX_STACK_VAR(tmp30,"tmp30");
								HX_STACK_LINE(57)
								int g = tmp30;		HX_STACK_VAR(g,"g");
								HX_STACK_LINE(57)
								int tmp31 = ::__hxcpp_memory_get_byte(blueTable->buffer->b,(blueTable->byteOffset + ((int((int(pixel) >> int((int)8))) & int((int)255)))));		HX_STACK_VAR(tmp31,"tmp31");
								HX_STACK_LINE(57)
								Dynamic tmp32 = (int(tmp31) & int((int)255));		HX_STACK_VAR(tmp32,"tmp32");
								HX_STACK_LINE(57)
								int b = tmp32;		HX_STACK_VAR(b,"b");
								HX_STACK_LINE(57)
								int tmp33 = ::__hxcpp_memory_get_byte(alphaTable->buffer->b,(alphaTable->byteOffset + ((int(pixel) & int((int)255)))));		HX_STACK_VAR(tmp33,"tmp33");
								HX_STACK_LINE(57)
								Dynamic tmp34 = (int(tmp33) & int((int)255));		HX_STACK_VAR(tmp34,"tmp34");
								HX_STACK_LINE(57)
								int a = tmp34;		HX_STACK_VAR(a,"a");
								HX_STACK_LINE(57)
								int tmp35 = (int(r) & int((int)255));		HX_STACK_VAR(tmp35,"tmp35");
								HX_STACK_LINE(57)
								int tmp36 = (int(tmp35) << int((int)24));		HX_STACK_VAR(tmp36,"tmp36");
								HX_STACK_LINE(57)
								int tmp37 = (int(g) & int((int)255));		HX_STACK_VAR(tmp37,"tmp37");
								HX_STACK_LINE(57)
								int tmp38 = (int(tmp37) << int((int)16));		HX_STACK_VAR(tmp38,"tmp38");
								HX_STACK_LINE(57)
								int tmp39 = (int(tmp36) | int(tmp38));		HX_STACK_VAR(tmp39,"tmp39");
								HX_STACK_LINE(57)
								int tmp40 = (int(b) & int((int)255));		HX_STACK_VAR(tmp40,"tmp40");
								HX_STACK_LINE(57)
								int tmp41 = (int(tmp40) << int((int)8));		HX_STACK_VAR(tmp41,"tmp41");
								HX_STACK_LINE(57)
								int tmp42 = (int(tmp39) | int(tmp41));		HX_STACK_VAR(tmp42,"tmp42");
								HX_STACK_LINE(57)
								int tmp43 = (int(a) & int((int)255));		HX_STACK_VAR(tmp43,"tmp43");
								HX_STACK_LINE(57)
								int tmp44 = (int(tmp42) | int(tmp43));		HX_STACK_VAR(tmp44,"tmp44");
								HX_STACK_LINE(57)
								pixel = tmp44;
							}
							HX_STACK_LINE(58)
							{
								HX_STACK_LINE(58)
								bool tmp27 = premultiplied;		HX_STACK_VAR(tmp27,"tmp27");
								HX_STACK_LINE(58)
								if ((tmp27)){
									HX_STACK_LINE(58)
									int tmp28 = (int(pixel) & int((int)255));		HX_STACK_VAR(tmp28,"tmp28");
									HX_STACK_LINE(58)
									bool tmp29 = (tmp28 == (int)0);		HX_STACK_VAR(tmp29,"tmp29");
									HX_STACK_LINE(58)
									if ((tmp29)){
										HX_STACK_LINE(58)
										bool tmp30 = (pixel != (int)0);		HX_STACK_VAR(tmp30,"tmp30");
										HX_STACK_LINE(58)
										if ((tmp30)){
											HX_STACK_LINE(58)
											pixel = (int)0;
										}
									}
									else{
										HX_STACK_LINE(58)
										int tmp30 = (int(pixel) & int((int)255));		HX_STACK_VAR(tmp30,"tmp30");
										HX_STACK_LINE(58)
										bool tmp31 = (tmp30 != (int)255);		HX_STACK_VAR(tmp31,"tmp31");
										HX_STACK_LINE(58)
										if ((tmp31)){
											HX_STACK_LINE(58)
											Dynamic tmp32;		HX_STACK_VAR(tmp32,"tmp32");
											HX_STACK_LINE(58)
											{
												HX_STACK_LINE(58)
												::lime::utils::ArrayBufferView tmp33 = ::lime::math::color::_RGBA::RGBA_Impl__obj::__alpha16;		HX_STACK_VAR(tmp33,"tmp33");
												HX_STACK_LINE(58)
												::lime::utils::ArrayBufferView this1 = tmp33;		HX_STACK_VAR(this1,"this1");
												HX_STACK_LINE(58)
												{
													HX_STACK_LINE(58)
													bool littleEndian = true;		HX_STACK_VAR(littleEndian,"littleEndian");
													HX_STACK_LINE(58)
													tmp32 = ::__hxcpp_memory_get_ui32(this1->buffer->b,(this1->byteOffset + (((int(pixel) & int((int)255))) * (int)4)));
												}
											}
											HX_STACK_LINE(58)
											::lime::math::color::_RGBA::RGBA_Impl__obj::a16 = tmp32;
											HX_STACK_LINE(58)
											{
												HX_STACK_LINE(58)
												int tmp33 = (int(pixel) >> int((int)24));		HX_STACK_VAR(tmp33,"tmp33");
												HX_STACK_LINE(58)
												int tmp34 = (int(tmp33) & int((int)255));		HX_STACK_VAR(tmp34,"tmp34");
												HX_STACK_LINE(58)
												int tmp35 = ::lime::math::color::_RGBA::RGBA_Impl__obj::a16;		HX_STACK_VAR(tmp35,"tmp35");
												HX_STACK_LINE(58)
												int tmp36 = (tmp34 * tmp35);		HX_STACK_VAR(tmp36,"tmp36");
												HX_STACK_LINE(58)
												int tmp37 = (int(tmp36) >> int((int)16));		HX_STACK_VAR(tmp37,"tmp37");
												HX_STACK_LINE(58)
												int tmp38 = (int(tmp37) & int((int)255));		HX_STACK_VAR(tmp38,"tmp38");
												HX_STACK_LINE(58)
												int tmp39 = (int(tmp38) << int((int)24));		HX_STACK_VAR(tmp39,"tmp39");
												HX_STACK_LINE(58)
												int tmp40 = (int(pixel) >> int((int)16));		HX_STACK_VAR(tmp40,"tmp40");
												HX_STACK_LINE(58)
												int tmp41 = (int(tmp40) & int((int)255));		HX_STACK_VAR(tmp41,"tmp41");
												HX_STACK_LINE(58)
												int tmp42 = ::lime::math::color::_RGBA::RGBA_Impl__obj::a16;		HX_STACK_VAR(tmp42,"tmp42");
												HX_STACK_LINE(58)
												int tmp43 = (tmp41 * tmp42);		HX_STACK_VAR(tmp43,"tmp43");
												HX_STACK_LINE(58)
												int tmp44 = (int(tmp43) >> int((int)16));		HX_STACK_VAR(tmp44,"tmp44");
												HX_STACK_LINE(58)
												int tmp45 = (int(tmp44) & int((int)255));		HX_STACK_VAR(tmp45,"tmp45");
												HX_STACK_LINE(58)
												int tmp46 = (int(tmp45) << int((int)16));		HX_STACK_VAR(tmp46,"tmp46");
												HX_STACK_LINE(58)
												int tmp47 = (int(tmp39) | int(tmp46));		HX_STACK_VAR(tmp47,"tmp47");
												HX_STACK_LINE(58)
												int tmp48 = (int(pixel) >> int((int)8));		HX_STACK_VAR(tmp48,"tmp48");
												HX_STACK_LINE(58)
												int tmp49 = (int(tmp48) & int((int)255));		HX_STACK_VAR(tmp49,"tmp49");
												HX_STACK_LINE(58)
												int tmp50 = ::lime::math::color::_RGBA::RGBA_Impl__obj::a16;		HX_STACK_VAR(tmp50,"tmp50");
												HX_STACK_LINE(58)
												int tmp51 = (tmp49 * tmp50);		HX_STACK_VAR(tmp51,"tmp51");
												HX_STACK_LINE(58)
												int tmp52 = (int(tmp51) >> int((int)16));		HX_STACK_VAR(tmp52,"tmp52");
												HX_STACK_LINE(58)
												int tmp53 = (int(tmp52) & int((int)255));		HX_STACK_VAR(tmp53,"tmp53");
												HX_STACK_LINE(58)
												int tmp54 = (int(tmp53) << int((int)8));		HX_STACK_VAR(tmp54,"tmp54");
												HX_STACK_LINE(58)
												int tmp55 = (int(tmp47) | int(tmp54));		HX_STACK_VAR(tmp55,"tmp55");
												HX_STACK_LINE(58)
												int tmp56 = (int(pixel) & int((int)255));		HX_STACK_VAR(tmp56,"tmp56");
												HX_STACK_LINE(58)
												int tmp57 = (int(tmp56) & int((int)255));		HX_STACK_VAR(tmp57,"tmp57");
												HX_STACK_LINE(58)
												int tmp58 = (int(tmp55) | int(tmp57));		HX_STACK_VAR(tmp58,"tmp58");
												HX_STACK_LINE(58)
												pixel = tmp58;
											}
										}
									}
								}
								HX_STACK_LINE(58)
								int tmp28 = format;		HX_STACK_VAR(tmp28,"tmp28");
								HX_STACK_LINE(58)
								switch( (int)(tmp28)){
									case (int)2: {
										HX_STACK_LINE(58)
										{
											HX_STACK_LINE(58)
											int tmp29 = (int(pixel) >> int((int)8));		HX_STACK_VAR(tmp29,"tmp29");
											HX_STACK_LINE(58)
											int tmp30 = (int(tmp29) & int((int)255));		HX_STACK_VAR(tmp30,"tmp30");
											HX_STACK_LINE(58)
											int val = tmp30;		HX_STACK_VAR(val,"val");
											HX_STACK_LINE(58)
											{
												HX_STACK_LINE(58)
												::__hxcpp_memory_set_byte(data->buffer->b,(data->byteOffset + offset),val);
												HX_STACK_LINE(58)
												val;
											}
										}
										HX_STACK_LINE(58)
										{
											HX_STACK_LINE(58)
											int tmp29 = (int(pixel) >> int((int)16));		HX_STACK_VAR(tmp29,"tmp29");
											HX_STACK_LINE(58)
											int tmp30 = (int(tmp29) & int((int)255));		HX_STACK_VAR(tmp30,"tmp30");
											HX_STACK_LINE(58)
											int val = tmp30;		HX_STACK_VAR(val,"val");
											HX_STACK_LINE(58)
											{
												HX_STACK_LINE(58)
												::__hxcpp_memory_set_byte(data->buffer->b,(data->byteOffset + ((offset + (int)1))),val);
												HX_STACK_LINE(58)
												val;
											}
										}
										HX_STACK_LINE(58)
										{
											HX_STACK_LINE(58)
											int tmp29 = (int(pixel) >> int((int)24));		HX_STACK_VAR(tmp29,"tmp29");
											HX_STACK_LINE(58)
											int tmp30 = (int(tmp29) & int((int)255));		HX_STACK_VAR(tmp30,"tmp30");
											HX_STACK_LINE(58)
											int val = tmp30;		HX_STACK_VAR(val,"val");
											HX_STACK_LINE(58)
											{
												HX_STACK_LINE(58)
												::__hxcpp_memory_set_byte(data->buffer->b,(data->byteOffset + ((offset + (int)2))),val);
												HX_STACK_LINE(58)
												val;
											}
										}
										HX_STACK_LINE(58)
										{
											HX_STACK_LINE(58)
											int tmp29 = (int(pixel) & int((int)255));		HX_STACK_VAR(tmp29,"tmp29");
											HX_STACK_LINE(58)
											int val = tmp29;		HX_STACK_VAR(val,"val");
											HX_STACK_LINE(58)
											{
												HX_STACK_LINE(58)
												::__hxcpp_memory_set_byte(data->buffer->b,(data->byteOffset + ((offset + (int)3))),val);
												HX_STACK_LINE(58)
												val;
											}
										}
									}
									;break;
									case (int)0: {
										HX_STACK_LINE(58)
										{
											HX_STACK_LINE(58)
											int tmp29 = (int(pixel) >> int((int)24));		HX_STACK_VAR(tmp29,"tmp29");
											HX_STACK_LINE(58)
											int tmp30 = (int(tmp29) & int((int)255));		HX_STACK_VAR(tmp30,"tmp30");
											HX_STACK_LINE(58)
											int val = tmp30;		HX_STACK_VAR(val,"val");
											HX_STACK_LINE(58)
											{
												HX_STACK_LINE(58)
												::__hxcpp_memory_set_byte(data->buffer->b,(data->byteOffset + offset),val);
												HX_STACK_LINE(58)
												val;
											}
										}
										HX_STACK_LINE(58)
										{
											HX_STACK_LINE(58)
											int tmp29 = (int(pixel) >> int((int)16));		HX_STACK_VAR(tmp29,"tmp29");
											HX_STACK_LINE(58)
											int tmp30 = (int(tmp29) & int((int)255));		HX_STACK_VAR(tmp30,"tmp30");
											HX_STACK_LINE(58)
											int val = tmp30;		HX_STACK_VAR(val,"val");
											HX_STACK_LINE(58)
											{
												HX_STACK_LINE(58)
												::__hxcpp_memory_set_byte(data->buffer->b,(data->byteOffset + ((offset + (int)1))),val);
												HX_STACK_LINE(58)
												val;
											}
										}
										HX_STACK_LINE(58)
										{
											HX_STACK_LINE(58)
											int tmp29 = (int(pixel) >> int((int)8));		HX_STACK_VAR(tmp29,"tmp29");
											HX_STACK_LINE(58)
											int tmp30 = (int(tmp29) & int((int)255));		HX_STACK_VAR(tmp30,"tmp30");
											HX_STACK_LINE(58)
											int val = tmp30;		HX_STACK_VAR(val,"val");
											HX_STACK_LINE(58)
											{
												HX_STACK_LINE(58)
												::__hxcpp_memory_set_byte(data->buffer->b,(data->byteOffset + ((offset + (int)2))),val);
												HX_STACK_LINE(58)
												val;
											}
										}
										HX_STACK_LINE(58)
										{
											HX_STACK_LINE(58)
											int tmp29 = (int(pixel) & int((int)255));		HX_STACK_VAR(tmp29,"tmp29");
											HX_STACK_LINE(58)
											int val = tmp29;		HX_STACK_VAR(val,"val");
											HX_STACK_LINE(58)
											{
												HX_STACK_LINE(58)
												::__hxcpp_memory_set_byte(data->buffer->b,(data->byteOffset + ((offset + (int)3))),val);
												HX_STACK_LINE(58)
												val;
											}
										}
									}
									;break;
									case (int)1: {
										HX_STACK_LINE(58)
										{
											HX_STACK_LINE(58)
											int tmp29 = (int(pixel) & int((int)255));		HX_STACK_VAR(tmp29,"tmp29");
											HX_STACK_LINE(58)
											int val = tmp29;		HX_STACK_VAR(val,"val");
											HX_STACK_LINE(58)
											{
												HX_STACK_LINE(58)
												::__hxcpp_memory_set_byte(data->buffer->b,(data->byteOffset + offset),val);
												HX_STACK_LINE(58)
												val;
											}
										}
										HX_STACK_LINE(58)
										{
											HX_STACK_LINE(58)
											int tmp29 = (int(pixel) >> int((int)24));		HX_STACK_VAR(tmp29,"tmp29");
											HX_STACK_LINE(58)
											int tmp30 = (int(tmp29) & int((int)255));		HX_STACK_VAR(tmp30,"tmp30");
											HX_STACK_LINE(58)
											int val = tmp30;		HX_STACK_VAR(val,"val");
											HX_STACK_LINE(58)
											{
												HX_STACK_LINE(58)
												::__hxcpp_memory_set_byte(data->buffer->b,(data->byteOffset + ((offset + (int)1))),val);
												HX_STACK_LINE(58)
												val;
											}
										}
										HX_STACK_LINE(58)
										{
											HX_STACK_LINE(58)
											int tmp29 = (int(pixel) >> int((int)16));		HX_STACK_VAR(tmp29,"tmp29");
											HX_STACK_LINE(58)
											int tmp30 = (int(tmp29) & int((int)255));		HX_STACK_VAR(tmp30,"tmp30");
											HX_STACK_LINE(58)
											int val = tmp30;		HX_STACK_VAR(val,"val");
											HX_STACK_LINE(58)
											{
												HX_STACK_LINE(58)
												::__hxcpp_memory_set_byte(data->buffer->b,(data->byteOffset + ((offset + (int)2))),val);
												HX_STACK_LINE(58)
												val;
											}
										}
										HX_STACK_LINE(58)
										{
											HX_STACK_LINE(58)
											int tmp29 = (int(pixel) >> int((int)8));		HX_STACK_VAR(tmp29,"tmp29");
											HX_STACK_LINE(58)
											int tmp30 = (int(tmp29) & int((int)255));		HX_STACK_VAR(tmp30,"tmp30");
											HX_STACK_LINE(58)
											int val = tmp30;		HX_STACK_VAR(val,"val");
											HX_STACK_LINE(58)
											{
												HX_STACK_LINE(58)
												::__hxcpp_memory_set_byte(data->buffer->b,(data->byteOffset + ((offset + (int)3))),val);
												HX_STACK_LINE(58)
												val;
											}
										}
									}
									;break;
								}
							}
						}
					}
				}
			}
		}
		HX_STACK_LINE(66)
		image->dirty = true;
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(ImageDataUtil_obj,colorTransform,(void))

Void ImageDataUtil_obj::copyChannel( ::lime::graphics::Image image,::lime::graphics::Image sourceImage,::lime::math::Rectangle sourceRect,::lime::math::Vector2 destPoint,::lime::graphics::ImageChannel sourceChannel,::lime::graphics::ImageChannel destChannel){
{
		HX_STACK_FRAME("lime.graphics.utils.ImageDataUtil","copyChannel",0xa41162a0,"lime.graphics.utils.ImageDataUtil.copyChannel","lime/graphics/utils/ImageDataUtil.hx",71,0x494d921f)
		HX_STACK_ARG(image,"image")
		HX_STACK_ARG(sourceImage,"sourceImage")
		HX_STACK_ARG(sourceRect,"sourceRect")
		HX_STACK_ARG(destPoint,"destPoint")
		HX_STACK_ARG(sourceChannel,"sourceChannel")
		HX_STACK_ARG(destChannel,"destChannel")
		HX_STACK_LINE(73)
		int tmp;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(73)
		switch( (int)(destChannel->__Index())){
			case (int)0: {
				HX_STACK_LINE(75)
				tmp = (int)0;
			}
			;break;
			case (int)1: {
				HX_STACK_LINE(76)
				tmp = (int)1;
			}
			;break;
			case (int)2: {
				HX_STACK_LINE(77)
				tmp = (int)2;
			}
			;break;
			case (int)3: {
				HX_STACK_LINE(78)
				tmp = (int)3;
			}
			;break;
		}
		HX_STACK_LINE(73)
		int destIdx = tmp;		HX_STACK_VAR(destIdx,"destIdx");
		HX_STACK_LINE(82)
		int tmp1;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(82)
		switch( (int)(sourceChannel->__Index())){
			case (int)0: {
				HX_STACK_LINE(84)
				tmp1 = (int)0;
			}
			;break;
			case (int)1: {
				HX_STACK_LINE(85)
				tmp1 = (int)1;
			}
			;break;
			case (int)2: {
				HX_STACK_LINE(86)
				tmp1 = (int)2;
			}
			;break;
			case (int)3: {
				HX_STACK_LINE(87)
				tmp1 = (int)3;
			}
			;break;
		}
		HX_STACK_LINE(82)
		int srcIdx = tmp1;		HX_STACK_VAR(srcIdx,"srcIdx");
		HX_STACK_LINE(91)
		::lime::utils::ArrayBufferView tmp2 = sourceImage->buffer->data;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(91)
		::lime::utils::ArrayBufferView srcData = tmp2;		HX_STACK_VAR(srcData,"srcData");
		HX_STACK_LINE(92)
		::lime::utils::ArrayBufferView tmp3 = image->buffer->data;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(92)
		::lime::utils::ArrayBufferView destData = tmp3;		HX_STACK_VAR(destData,"destData");
		HX_STACK_LINE(94)
		bool tmp4 = (srcData == null());		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(94)
		bool tmp5 = !(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(94)
		bool tmp6;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(94)
		if ((tmp5)){
			HX_STACK_LINE(94)
			tmp6 = (destData == null());
		}
		else{
			HX_STACK_LINE(94)
			tmp6 = true;
		}
		HX_STACK_LINE(94)
		if ((tmp6)){
			HX_STACK_LINE(94)
			return null();
		}
		HX_STACK_LINE(97)
		bool tmp7 = ::lime::_system::System_obj::disableCFFI;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(97)
		bool tmp8 = !(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(97)
		if ((tmp8)){
			HX_STACK_LINE(97)
			::lime::graphics::Image tmp9 = image;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(97)
			::lime::graphics::Image tmp10 = sourceImage;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(97)
			::lime::math::Rectangle tmp11 = sourceRect;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(97)
			::lime::math::Vector2 tmp12 = destPoint;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(97)
			int tmp13 = srcIdx;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(97)
			int tmp14 = destIdx;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(97)
			::lime::graphics::utils::ImageDataUtil_obj::lime_image_data_util_copy_channel(tmp9,tmp10,tmp11,tmp12,tmp13,tmp14);
		}
		else{
			HX_STACK_LINE(101)
			::lime::graphics::utils::_ImageDataUtil::ImageDataView tmp9 = ::lime::graphics::utils::_ImageDataUtil::ImageDataView_obj::__new(sourceImage,sourceRect);		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(101)
			::lime::graphics::utils::_ImageDataUtil::ImageDataView srcView = tmp9;		HX_STACK_VAR(srcView,"srcView");
			HX_STACK_LINE(102)
			::lime::graphics::Image tmp10 = image;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(102)
			::lime::math::Rectangle tmp11 = ::lime::math::Rectangle_obj::__new(destPoint->x,destPoint->y,srcView->width,srcView->height);		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(102)
			::lime::graphics::utils::_ImageDataUtil::ImageDataView tmp12 = ::lime::graphics::utils::_ImageDataUtil::ImageDataView_obj::__new(tmp10,tmp11);		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(102)
			::lime::graphics::utils::_ImageDataUtil::ImageDataView destView = tmp12;		HX_STACK_VAR(destView,"destView");
			HX_STACK_LINE(104)
			int tmp13 = sourceImage->buffer->format;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(104)
			int srcFormat = tmp13;		HX_STACK_VAR(srcFormat,"srcFormat");
			HX_STACK_LINE(105)
			int tmp14 = image->buffer->format;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(105)
			int destFormat = tmp14;		HX_STACK_VAR(destFormat,"destFormat");
			HX_STACK_LINE(106)
			bool tmp15 = sourceImage->buffer->premultiplied;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(106)
			bool srcPremultiplied = tmp15;		HX_STACK_VAR(srcPremultiplied,"srcPremultiplied");
			HX_STACK_LINE(107)
			bool tmp16 = image->buffer->premultiplied;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(107)
			bool destPremultiplied = tmp16;		HX_STACK_VAR(destPremultiplied,"destPremultiplied");
			HX_STACK_LINE(109)
			int srcPosition;		HX_STACK_VAR(srcPosition,"srcPosition");
			HX_STACK_LINE(109)
			int destPosition;		HX_STACK_VAR(destPosition,"destPosition");
			HX_STACK_LINE(109)
			int srcPixel;		HX_STACK_VAR(srcPixel,"srcPixel");
			HX_STACK_LINE(109)
			int destPixel;		HX_STACK_VAR(destPixel,"destPixel");
			HX_STACK_LINE(109)
			int value = (int)0;		HX_STACK_VAR(value,"value");
			HX_STACK_LINE(111)
			{
				HX_STACK_LINE(111)
				int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(111)
				int _g = destView->height;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(111)
				while((true)){
					HX_STACK_LINE(111)
					bool tmp17 = (_g1 < _g);		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(111)
					bool tmp18 = !(tmp17);		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(111)
					if ((tmp18)){
						HX_STACK_LINE(111)
						break;
					}
					HX_STACK_LINE(111)
					int tmp19 = (_g1)++;		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(111)
					int y = tmp19;		HX_STACK_VAR(y,"y");
					HX_STACK_LINE(113)
					int tmp20 = srcView->offset;		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(113)
					int tmp21 = (srcView->stride * y);		HX_STACK_VAR(tmp21,"tmp21");
					HX_STACK_LINE(113)
					int tmp22 = (tmp20 + tmp21);		HX_STACK_VAR(tmp22,"tmp22");
					HX_STACK_LINE(113)
					srcPosition = tmp22;
					HX_STACK_LINE(114)
					int tmp23 = destView->offset;		HX_STACK_VAR(tmp23,"tmp23");
					HX_STACK_LINE(114)
					int tmp24 = (destView->stride * y);		HX_STACK_VAR(tmp24,"tmp24");
					HX_STACK_LINE(114)
					int tmp25 = (tmp23 + tmp24);		HX_STACK_VAR(tmp25,"tmp25");
					HX_STACK_LINE(114)
					destPosition = tmp25;
					HX_STACK_LINE(116)
					{
						HX_STACK_LINE(116)
						int _g3 = (int)0;		HX_STACK_VAR(_g3,"_g3");
						HX_STACK_LINE(116)
						int _g2 = destView->width;		HX_STACK_VAR(_g2,"_g2");
						HX_STACK_LINE(116)
						while((true)){
							HX_STACK_LINE(116)
							bool tmp26 = (_g3 < _g2);		HX_STACK_VAR(tmp26,"tmp26");
							HX_STACK_LINE(116)
							bool tmp27 = !(tmp26);		HX_STACK_VAR(tmp27,"tmp27");
							HX_STACK_LINE(116)
							if ((tmp27)){
								HX_STACK_LINE(116)
								break;
							}
							HX_STACK_LINE(116)
							int tmp28 = (_g3)++;		HX_STACK_VAR(tmp28,"tmp28");
							HX_STACK_LINE(116)
							int x = tmp28;		HX_STACK_VAR(x,"x");
							HX_STACK_LINE(118)
							{
								HX_STACK_LINE(118)
								int tmp29 = srcFormat;		HX_STACK_VAR(tmp29,"tmp29");
								HX_STACK_LINE(118)
								switch( (int)(tmp29)){
									case (int)2: {
										HX_STACK_LINE(118)
										int tmp30 = ::__hxcpp_memory_get_byte(srcData->buffer->b,(srcData->byteOffset + ((srcPosition + (int)2))));		HX_STACK_VAR(tmp30,"tmp30");
										HX_STACK_LINE(118)
										Dynamic tmp31 = (int(tmp30) & int((int)255));		HX_STACK_VAR(tmp31,"tmp31");
										HX_STACK_LINE(118)
										int r = tmp31;		HX_STACK_VAR(r,"r");
										HX_STACK_LINE(118)
										int tmp32 = ::__hxcpp_memory_get_byte(srcData->buffer->b,(srcData->byteOffset + ((srcPosition + (int)1))));		HX_STACK_VAR(tmp32,"tmp32");
										HX_STACK_LINE(118)
										Dynamic tmp33 = (int(tmp32) & int((int)255));		HX_STACK_VAR(tmp33,"tmp33");
										HX_STACK_LINE(118)
										int g = tmp33;		HX_STACK_VAR(g,"g");
										HX_STACK_LINE(118)
										int tmp34 = ::__hxcpp_memory_get_byte(srcData->buffer->b,(srcData->byteOffset + srcPosition));		HX_STACK_VAR(tmp34,"tmp34");
										HX_STACK_LINE(118)
										Dynamic tmp35 = (int(tmp34) & int((int)255));		HX_STACK_VAR(tmp35,"tmp35");
										HX_STACK_LINE(118)
										int b = tmp35;		HX_STACK_VAR(b,"b");
										HX_STACK_LINE(118)
										int tmp36 = ::__hxcpp_memory_get_byte(srcData->buffer->b,(srcData->byteOffset + ((srcPosition + (int)3))));		HX_STACK_VAR(tmp36,"tmp36");
										HX_STACK_LINE(118)
										Dynamic tmp37 = (int(tmp36) & int((int)255));		HX_STACK_VAR(tmp37,"tmp37");
										HX_STACK_LINE(118)
										int a = tmp37;		HX_STACK_VAR(a,"a");
										HX_STACK_LINE(118)
										int tmp38 = (int(r) & int((int)255));		HX_STACK_VAR(tmp38,"tmp38");
										HX_STACK_LINE(118)
										int tmp39 = (int(tmp38) << int((int)24));		HX_STACK_VAR(tmp39,"tmp39");
										HX_STACK_LINE(118)
										int tmp40 = (int(g) & int((int)255));		HX_STACK_VAR(tmp40,"tmp40");
										HX_STACK_LINE(118)
										int tmp41 = (int(tmp40) << int((int)16));		HX_STACK_VAR(tmp41,"tmp41");
										HX_STACK_LINE(118)
										int tmp42 = (int(tmp39) | int(tmp41));		HX_STACK_VAR(tmp42,"tmp42");
										HX_STACK_LINE(118)
										int tmp43 = (int(b) & int((int)255));		HX_STACK_VAR(tmp43,"tmp43");
										HX_STACK_LINE(118)
										int tmp44 = (int(tmp43) << int((int)8));		HX_STACK_VAR(tmp44,"tmp44");
										HX_STACK_LINE(118)
										int tmp45 = (int(tmp42) | int(tmp44));		HX_STACK_VAR(tmp45,"tmp45");
										HX_STACK_LINE(118)
										int tmp46 = (int(a) & int((int)255));		HX_STACK_VAR(tmp46,"tmp46");
										HX_STACK_LINE(118)
										int tmp47 = (int(tmp45) | int(tmp46));		HX_STACK_VAR(tmp47,"tmp47");
										HX_STACK_LINE(118)
										srcPixel = tmp47;
									}
									;break;
									case (int)0: {
										HX_STACK_LINE(118)
										int tmp30 = ::__hxcpp_memory_get_byte(srcData->buffer->b,(srcData->byteOffset + srcPosition));		HX_STACK_VAR(tmp30,"tmp30");
										HX_STACK_LINE(118)
										Dynamic tmp31 = (int(tmp30) & int((int)255));		HX_STACK_VAR(tmp31,"tmp31");
										HX_STACK_LINE(118)
										int r = tmp31;		HX_STACK_VAR(r,"r");
										HX_STACK_LINE(118)
										int tmp32 = ::__hxcpp_memory_get_byte(srcData->buffer->b,(srcData->byteOffset + ((srcPosition + (int)1))));		HX_STACK_VAR(tmp32,"tmp32");
										HX_STACK_LINE(118)
										Dynamic tmp33 = (int(tmp32) & int((int)255));		HX_STACK_VAR(tmp33,"tmp33");
										HX_STACK_LINE(118)
										int g = tmp33;		HX_STACK_VAR(g,"g");
										HX_STACK_LINE(118)
										int tmp34 = ::__hxcpp_memory_get_byte(srcData->buffer->b,(srcData->byteOffset + ((srcPosition + (int)2))));		HX_STACK_VAR(tmp34,"tmp34");
										HX_STACK_LINE(118)
										Dynamic tmp35 = (int(tmp34) & int((int)255));		HX_STACK_VAR(tmp35,"tmp35");
										HX_STACK_LINE(118)
										int b = tmp35;		HX_STACK_VAR(b,"b");
										HX_STACK_LINE(118)
										int tmp36 = ::__hxcpp_memory_get_byte(srcData->buffer->b,(srcData->byteOffset + ((srcPosition + (int)3))));		HX_STACK_VAR(tmp36,"tmp36");
										HX_STACK_LINE(118)
										Dynamic tmp37 = (int(tmp36) & int((int)255));		HX_STACK_VAR(tmp37,"tmp37");
										HX_STACK_LINE(118)
										int a = tmp37;		HX_STACK_VAR(a,"a");
										HX_STACK_LINE(118)
										int tmp38 = (int(r) & int((int)255));		HX_STACK_VAR(tmp38,"tmp38");
										HX_STACK_LINE(118)
										int tmp39 = (int(tmp38) << int((int)24));		HX_STACK_VAR(tmp39,"tmp39");
										HX_STACK_LINE(118)
										int tmp40 = (int(g) & int((int)255));		HX_STACK_VAR(tmp40,"tmp40");
										HX_STACK_LINE(118)
										int tmp41 = (int(tmp40) << int((int)16));		HX_STACK_VAR(tmp41,"tmp41");
										HX_STACK_LINE(118)
										int tmp42 = (int(tmp39) | int(tmp41));		HX_STACK_VAR(tmp42,"tmp42");
										HX_STACK_LINE(118)
										int tmp43 = (int(b) & int((int)255));		HX_STACK_VAR(tmp43,"tmp43");
										HX_STACK_LINE(118)
										int tmp44 = (int(tmp43) << int((int)8));		HX_STACK_VAR(tmp44,"tmp44");
										HX_STACK_LINE(118)
										int tmp45 = (int(tmp42) | int(tmp44));		HX_STACK_VAR(tmp45,"tmp45");
										HX_STACK_LINE(118)
										int tmp46 = (int(a) & int((int)255));		HX_STACK_VAR(tmp46,"tmp46");
										HX_STACK_LINE(118)
										int tmp47 = (int(tmp45) | int(tmp46));		HX_STACK_VAR(tmp47,"tmp47");
										HX_STACK_LINE(118)
										srcPixel = tmp47;
									}
									;break;
									case (int)1: {
										HX_STACK_LINE(118)
										int tmp30 = ::__hxcpp_memory_get_byte(srcData->buffer->b,(srcData->byteOffset + ((srcPosition + (int)1))));		HX_STACK_VAR(tmp30,"tmp30");
										HX_STACK_LINE(118)
										Dynamic tmp31 = (int(tmp30) & int((int)255));		HX_STACK_VAR(tmp31,"tmp31");
										HX_STACK_LINE(118)
										int r = tmp31;		HX_STACK_VAR(r,"r");
										HX_STACK_LINE(118)
										int tmp32 = ::__hxcpp_memory_get_byte(srcData->buffer->b,(srcData->byteOffset + ((srcPosition + (int)2))));		HX_STACK_VAR(tmp32,"tmp32");
										HX_STACK_LINE(118)
										Dynamic tmp33 = (int(tmp32) & int((int)255));		HX_STACK_VAR(tmp33,"tmp33");
										HX_STACK_LINE(118)
										int g = tmp33;		HX_STACK_VAR(g,"g");
										HX_STACK_LINE(118)
										int tmp34 = ::__hxcpp_memory_get_byte(srcData->buffer->b,(srcData->byteOffset + ((srcPosition + (int)3))));		HX_STACK_VAR(tmp34,"tmp34");
										HX_STACK_LINE(118)
										Dynamic tmp35 = (int(tmp34) & int((int)255));		HX_STACK_VAR(tmp35,"tmp35");
										HX_STACK_LINE(118)
										int b = tmp35;		HX_STACK_VAR(b,"b");
										HX_STACK_LINE(118)
										int tmp36 = ::__hxcpp_memory_get_byte(srcData->buffer->b,(srcData->byteOffset + srcPosition));		HX_STACK_VAR(tmp36,"tmp36");
										HX_STACK_LINE(118)
										Dynamic tmp37 = (int(tmp36) & int((int)255));		HX_STACK_VAR(tmp37,"tmp37");
										HX_STACK_LINE(118)
										int a = tmp37;		HX_STACK_VAR(a,"a");
										HX_STACK_LINE(118)
										int tmp38 = (int(r) & int((int)255));		HX_STACK_VAR(tmp38,"tmp38");
										HX_STACK_LINE(118)
										int tmp39 = (int(tmp38) << int((int)24));		HX_STACK_VAR(tmp39,"tmp39");
										HX_STACK_LINE(118)
										int tmp40 = (int(g) & int((int)255));		HX_STACK_VAR(tmp40,"tmp40");
										HX_STACK_LINE(118)
										int tmp41 = (int(tmp40) << int((int)16));		HX_STACK_VAR(tmp41,"tmp41");
										HX_STACK_LINE(118)
										int tmp42 = (int(tmp39) | int(tmp41));		HX_STACK_VAR(tmp42,"tmp42");
										HX_STACK_LINE(118)
										int tmp43 = (int(b) & int((int)255));		HX_STACK_VAR(tmp43,"tmp43");
										HX_STACK_LINE(118)
										int tmp44 = (int(tmp43) << int((int)8));		HX_STACK_VAR(tmp44,"tmp44");
										HX_STACK_LINE(118)
										int tmp45 = (int(tmp42) | int(tmp44));		HX_STACK_VAR(tmp45,"tmp45");
										HX_STACK_LINE(118)
										int tmp46 = (int(a) & int((int)255));		HX_STACK_VAR(tmp46,"tmp46");
										HX_STACK_LINE(118)
										int tmp47 = (int(tmp45) | int(tmp46));		HX_STACK_VAR(tmp47,"tmp47");
										HX_STACK_LINE(118)
										srcPixel = tmp47;
									}
									;break;
								}
								HX_STACK_LINE(118)
								bool tmp30 = srcPremultiplied;		HX_STACK_VAR(tmp30,"tmp30");
								HX_STACK_LINE(118)
								if ((tmp30)){
									HX_STACK_LINE(118)
									int tmp31 = (int(srcPixel) & int((int)255));		HX_STACK_VAR(tmp31,"tmp31");
									HX_STACK_LINE(118)
									bool tmp32 = (tmp31 != (int)0);		HX_STACK_VAR(tmp32,"tmp32");
									HX_STACK_LINE(118)
									bool tmp33;		HX_STACK_VAR(tmp33,"tmp33");
									HX_STACK_LINE(118)
									if ((tmp32)){
										HX_STACK_LINE(118)
										int tmp34 = (int(srcPixel) & int((int)255));		HX_STACK_VAR(tmp34,"tmp34");
										HX_STACK_LINE(118)
										int tmp35 = tmp34;		HX_STACK_VAR(tmp35,"tmp35");
										HX_STACK_LINE(118)
										tmp33 = (tmp35 != (int)255);
									}
									else{
										HX_STACK_LINE(118)
										tmp33 = false;
									}
									HX_STACK_LINE(118)
									if ((tmp33)){
										HX_STACK_LINE(118)
										int tmp34 = (int(srcPixel) & int((int)255));		HX_STACK_VAR(tmp34,"tmp34");
										HX_STACK_LINE(118)
										Float tmp35 = (Float(((Float)255.0)) / Float(tmp34));		HX_STACK_VAR(tmp35,"tmp35");
										HX_STACK_LINE(118)
										::lime::math::color::_RGBA::RGBA_Impl__obj::unmult = tmp35;
										HX_STACK_LINE(118)
										{
											HX_STACK_LINE(118)
											Dynamic tmp36;		HX_STACK_VAR(tmp36,"tmp36");
											HX_STACK_LINE(118)
											{
												HX_STACK_LINE(118)
												::lime::utils::ArrayBufferView tmp37 = ::lime::math::color::_RGBA::RGBA_Impl__obj::__clamp;		HX_STACK_VAR(tmp37,"tmp37");
												HX_STACK_LINE(118)
												::lime::utils::ArrayBufferView this1 = tmp37;		HX_STACK_VAR(this1,"this1");
												HX_STACK_LINE(118)
												int tmp38 = (int(srcPixel) >> int((int)24));		HX_STACK_VAR(tmp38,"tmp38");
												HX_STACK_LINE(118)
												int tmp39 = (int(tmp38) & int((int)255));		HX_STACK_VAR(tmp39,"tmp39");
												HX_STACK_LINE(118)
												Float tmp40 = ::lime::math::color::_RGBA::RGBA_Impl__obj::unmult;		HX_STACK_VAR(tmp40,"tmp40");
												HX_STACK_LINE(118)
												Float tmp41 = (tmp39 * tmp40);		HX_STACK_VAR(tmp41,"tmp41");
												HX_STACK_LINE(118)
												int tmp42 = ::Math_obj::round(tmp41);		HX_STACK_VAR(tmp42,"tmp42");
												HX_STACK_LINE(118)
												int idx = tmp42;		HX_STACK_VAR(idx,"idx");
												HX_STACK_LINE(118)
												int tmp43 = ::__hxcpp_memory_get_byte(this1->buffer->b,(this1->byteOffset + idx));		HX_STACK_VAR(tmp43,"tmp43");
												HX_STACK_LINE(118)
												tmp36 = (int(tmp43) & int((int)255));
											}
											HX_STACK_LINE(118)
											int r = tmp36;		HX_STACK_VAR(r,"r");
											HX_STACK_LINE(118)
											Dynamic tmp37;		HX_STACK_VAR(tmp37,"tmp37");
											HX_STACK_LINE(118)
											{
												HX_STACK_LINE(118)
												::lime::utils::ArrayBufferView tmp38 = ::lime::math::color::_RGBA::RGBA_Impl__obj::__clamp;		HX_STACK_VAR(tmp38,"tmp38");
												HX_STACK_LINE(118)
												::lime::utils::ArrayBufferView this1 = tmp38;		HX_STACK_VAR(this1,"this1");
												HX_STACK_LINE(118)
												int tmp39 = (int(srcPixel) >> int((int)16));		HX_STACK_VAR(tmp39,"tmp39");
												HX_STACK_LINE(118)
												int tmp40 = (int(tmp39) & int((int)255));		HX_STACK_VAR(tmp40,"tmp40");
												HX_STACK_LINE(118)
												Float tmp41 = ::lime::math::color::_RGBA::RGBA_Impl__obj::unmult;		HX_STACK_VAR(tmp41,"tmp41");
												HX_STACK_LINE(118)
												Float tmp42 = (tmp40 * tmp41);		HX_STACK_VAR(tmp42,"tmp42");
												HX_STACK_LINE(118)
												int tmp43 = ::Math_obj::round(tmp42);		HX_STACK_VAR(tmp43,"tmp43");
												HX_STACK_LINE(118)
												int idx = tmp43;		HX_STACK_VAR(idx,"idx");
												HX_STACK_LINE(118)
												int tmp44 = ::__hxcpp_memory_get_byte(this1->buffer->b,(this1->byteOffset + idx));		HX_STACK_VAR(tmp44,"tmp44");
												HX_STACK_LINE(118)
												tmp37 = (int(tmp44) & int((int)255));
											}
											HX_STACK_LINE(118)
											int g = tmp37;		HX_STACK_VAR(g,"g");
											HX_STACK_LINE(118)
											Dynamic tmp38;		HX_STACK_VAR(tmp38,"tmp38");
											HX_STACK_LINE(118)
											{
												HX_STACK_LINE(118)
												::lime::utils::ArrayBufferView tmp39 = ::lime::math::color::_RGBA::RGBA_Impl__obj::__clamp;		HX_STACK_VAR(tmp39,"tmp39");
												HX_STACK_LINE(118)
												::lime::utils::ArrayBufferView this1 = tmp39;		HX_STACK_VAR(this1,"this1");
												HX_STACK_LINE(118)
												int tmp40 = (int(srcPixel) >> int((int)8));		HX_STACK_VAR(tmp40,"tmp40");
												HX_STACK_LINE(118)
												int tmp41 = (int(tmp40) & int((int)255));		HX_STACK_VAR(tmp41,"tmp41");
												HX_STACK_LINE(118)
												Float tmp42 = ::lime::math::color::_RGBA::RGBA_Impl__obj::unmult;		HX_STACK_VAR(tmp42,"tmp42");
												HX_STACK_LINE(118)
												Float tmp43 = (tmp41 * tmp42);		HX_STACK_VAR(tmp43,"tmp43");
												HX_STACK_LINE(118)
												int tmp44 = ::Math_obj::round(tmp43);		HX_STACK_VAR(tmp44,"tmp44");
												HX_STACK_LINE(118)
												int idx = tmp44;		HX_STACK_VAR(idx,"idx");
												HX_STACK_LINE(118)
												int tmp45 = ::__hxcpp_memory_get_byte(this1->buffer->b,(this1->byteOffset + idx));		HX_STACK_VAR(tmp45,"tmp45");
												HX_STACK_LINE(118)
												tmp38 = (int(tmp45) & int((int)255));
											}
											HX_STACK_LINE(118)
											int b = tmp38;		HX_STACK_VAR(b,"b");
											HX_STACK_LINE(118)
											int tmp39 = (int(r) & int((int)255));		HX_STACK_VAR(tmp39,"tmp39");
											HX_STACK_LINE(118)
											int tmp40 = (int(tmp39) << int((int)24));		HX_STACK_VAR(tmp40,"tmp40");
											HX_STACK_LINE(118)
											int tmp41 = (int(g) & int((int)255));		HX_STACK_VAR(tmp41,"tmp41");
											HX_STACK_LINE(118)
											int tmp42 = (int(tmp41) << int((int)16));		HX_STACK_VAR(tmp42,"tmp42");
											HX_STACK_LINE(118)
											int tmp43 = (int(tmp40) | int(tmp42));		HX_STACK_VAR(tmp43,"tmp43");
											HX_STACK_LINE(118)
											int tmp44 = (int(b) & int((int)255));		HX_STACK_VAR(tmp44,"tmp44");
											HX_STACK_LINE(118)
											int tmp45 = (int(tmp44) << int((int)8));		HX_STACK_VAR(tmp45,"tmp45");
											HX_STACK_LINE(118)
											int tmp46 = (int(tmp43) | int(tmp45));		HX_STACK_VAR(tmp46,"tmp46");
											HX_STACK_LINE(118)
											int tmp47 = (int(srcPixel) & int((int)255));		HX_STACK_VAR(tmp47,"tmp47");
											HX_STACK_LINE(118)
											int tmp48 = (int(tmp47) & int((int)255));		HX_STACK_VAR(tmp48,"tmp48");
											HX_STACK_LINE(118)
											int tmp49 = (int(tmp46) | int(tmp48));		HX_STACK_VAR(tmp49,"tmp49");
											HX_STACK_LINE(118)
											srcPixel = tmp49;
										}
									}
								}
							}
							HX_STACK_LINE(119)
							{
								HX_STACK_LINE(119)
								int tmp29 = destFormat;		HX_STACK_VAR(tmp29,"tmp29");
								HX_STACK_LINE(119)
								switch( (int)(tmp29)){
									case (int)2: {
										HX_STACK_LINE(119)
										int tmp30 = ::__hxcpp_memory_get_byte(destData->buffer->b,(destData->byteOffset + ((destPosition + (int)2))));		HX_STACK_VAR(tmp30,"tmp30");
										HX_STACK_LINE(119)
										Dynamic tmp31 = (int(tmp30) & int((int)255));		HX_STACK_VAR(tmp31,"tmp31");
										HX_STACK_LINE(119)
										int r = tmp31;		HX_STACK_VAR(r,"r");
										HX_STACK_LINE(119)
										int tmp32 = ::__hxcpp_memory_get_byte(destData->buffer->b,(destData->byteOffset + ((destPosition + (int)1))));		HX_STACK_VAR(tmp32,"tmp32");
										HX_STACK_LINE(119)
										Dynamic tmp33 = (int(tmp32) & int((int)255));		HX_STACK_VAR(tmp33,"tmp33");
										HX_STACK_LINE(119)
										int g = tmp33;		HX_STACK_VAR(g,"g");
										HX_STACK_LINE(119)
										int tmp34 = ::__hxcpp_memory_get_byte(destData->buffer->b,(destData->byteOffset + destPosition));		HX_STACK_VAR(tmp34,"tmp34");
										HX_STACK_LINE(119)
										Dynamic tmp35 = (int(tmp34) & int((int)255));		HX_STACK_VAR(tmp35,"tmp35");
										HX_STACK_LINE(119)
										int b = tmp35;		HX_STACK_VAR(b,"b");
										HX_STACK_LINE(119)
										int tmp36 = ::__hxcpp_memory_get_byte(destData->buffer->b,(destData->byteOffset + ((destPosition + (int)3))));		HX_STACK_VAR(tmp36,"tmp36");
										HX_STACK_LINE(119)
										Dynamic tmp37 = (int(tmp36) & int((int)255));		HX_STACK_VAR(tmp37,"tmp37");
										HX_STACK_LINE(119)
										int a = tmp37;		HX_STACK_VAR(a,"a");
										HX_STACK_LINE(119)
										int tmp38 = (int(r) & int((int)255));		HX_STACK_VAR(tmp38,"tmp38");
										HX_STACK_LINE(119)
										int tmp39 = (int(tmp38) << int((int)24));		HX_STACK_VAR(tmp39,"tmp39");
										HX_STACK_LINE(119)
										int tmp40 = (int(g) & int((int)255));		HX_STACK_VAR(tmp40,"tmp40");
										HX_STACK_LINE(119)
										int tmp41 = (int(tmp40) << int((int)16));		HX_STACK_VAR(tmp41,"tmp41");
										HX_STACK_LINE(119)
										int tmp42 = (int(tmp39) | int(tmp41));		HX_STACK_VAR(tmp42,"tmp42");
										HX_STACK_LINE(119)
										int tmp43 = (int(b) & int((int)255));		HX_STACK_VAR(tmp43,"tmp43");
										HX_STACK_LINE(119)
										int tmp44 = (int(tmp43) << int((int)8));		HX_STACK_VAR(tmp44,"tmp44");
										HX_STACK_LINE(119)
										int tmp45 = (int(tmp42) | int(tmp44));		HX_STACK_VAR(tmp45,"tmp45");
										HX_STACK_LINE(119)
										int tmp46 = (int(a) & int((int)255));		HX_STACK_VAR(tmp46,"tmp46");
										HX_STACK_LINE(119)
										int tmp47 = (int(tmp45) | int(tmp46));		HX_STACK_VAR(tmp47,"tmp47");
										HX_STACK_LINE(119)
										destPixel = tmp47;
									}
									;break;
									case (int)0: {
										HX_STACK_LINE(119)
										int tmp30 = ::__hxcpp_memory_get_byte(destData->buffer->b,(destData->byteOffset + destPosition));		HX_STACK_VAR(tmp30,"tmp30");
										HX_STACK_LINE(119)
										Dynamic tmp31 = (int(tmp30) & int((int)255));		HX_STACK_VAR(tmp31,"tmp31");
										HX_STACK_LINE(119)
										int r = tmp31;		HX_STACK_VAR(r,"r");
										HX_STACK_LINE(119)
										int tmp32 = ::__hxcpp_memory_get_byte(destData->buffer->b,(destData->byteOffset + ((destPosition + (int)1))));		HX_STACK_VAR(tmp32,"tmp32");
										HX_STACK_LINE(119)
										Dynamic tmp33 = (int(tmp32) & int((int)255));		HX_STACK_VAR(tmp33,"tmp33");
										HX_STACK_LINE(119)
										int g = tmp33;		HX_STACK_VAR(g,"g");
										HX_STACK_LINE(119)
										int tmp34 = ::__hxcpp_memory_get_byte(destData->buffer->b,(destData->byteOffset + ((destPosition + (int)2))));		HX_STACK_VAR(tmp34,"tmp34");
										HX_STACK_LINE(119)
										Dynamic tmp35 = (int(tmp34) & int((int)255));		HX_STACK_VAR(tmp35,"tmp35");
										HX_STACK_LINE(119)
										int b = tmp35;		HX_STACK_VAR(b,"b");
										HX_STACK_LINE(119)
										int tmp36 = ::__hxcpp_memory_get_byte(destData->buffer->b,(destData->byteOffset + ((destPosition + (int)3))));		HX_STACK_VAR(tmp36,"tmp36");
										HX_STACK_LINE(119)
										Dynamic tmp37 = (int(tmp36) & int((int)255));		HX_STACK_VAR(tmp37,"tmp37");
										HX_STACK_LINE(119)
										int a = tmp37;		HX_STACK_VAR(a,"a");
										HX_STACK_LINE(119)
										int tmp38 = (int(r) & int((int)255));		HX_STACK_VAR(tmp38,"tmp38");
										HX_STACK_LINE(119)
										int tmp39 = (int(tmp38) << int((int)24));		HX_STACK_VAR(tmp39,"tmp39");
										HX_STACK_LINE(119)
										int tmp40 = (int(g) & int((int)255));		HX_STACK_VAR(tmp40,"tmp40");
										HX_STACK_LINE(119)
										int tmp41 = (int(tmp40) << int((int)16));		HX_STACK_VAR(tmp41,"tmp41");
										HX_STACK_LINE(119)
										int tmp42 = (int(tmp39) | int(tmp41));		HX_STACK_VAR(tmp42,"tmp42");
										HX_STACK_LINE(119)
										int tmp43 = (int(b) & int((int)255));		HX_STACK_VAR(tmp43,"tmp43");
										HX_STACK_LINE(119)
										int tmp44 = (int(tmp43) << int((int)8));		HX_STACK_VAR(tmp44,"tmp44");
										HX_STACK_LINE(119)
										int tmp45 = (int(tmp42) | int(tmp44));		HX_STACK_VAR(tmp45,"tmp45");
										HX_STACK_LINE(119)
										int tmp46 = (int(a) & int((int)255));		HX_STACK_VAR(tmp46,"tmp46");
										HX_STACK_LINE(119)
										int tmp47 = (int(tmp45) | int(tmp46));		HX_STACK_VAR(tmp47,"tmp47");
										HX_STACK_LINE(119)
										destPixel = tmp47;
									}
									;break;
									case (int)1: {
										HX_STACK_LINE(119)
										int tmp30 = ::__hxcpp_memory_get_byte(destData->buffer->b,(destData->byteOffset + ((destPosition + (int)1))));		HX_STACK_VAR(tmp30,"tmp30");
										HX_STACK_LINE(119)
										Dynamic tmp31 = (int(tmp30) & int((int)255));		HX_STACK_VAR(tmp31,"tmp31");
										HX_STACK_LINE(119)
										int r = tmp31;		HX_STACK_VAR(r,"r");
										HX_STACK_LINE(119)
										int tmp32 = ::__hxcpp_memory_get_byte(destData->buffer->b,(destData->byteOffset + ((destPosition + (int)2))));		HX_STACK_VAR(tmp32,"tmp32");
										HX_STACK_LINE(119)
										Dynamic tmp33 = (int(tmp32) & int((int)255));		HX_STACK_VAR(tmp33,"tmp33");
										HX_STACK_LINE(119)
										int g = tmp33;		HX_STACK_VAR(g,"g");
										HX_STACK_LINE(119)
										int tmp34 = ::__hxcpp_memory_get_byte(destData->buffer->b,(destData->byteOffset + ((destPosition + (int)3))));		HX_STACK_VAR(tmp34,"tmp34");
										HX_STACK_LINE(119)
										Dynamic tmp35 = (int(tmp34) & int((int)255));		HX_STACK_VAR(tmp35,"tmp35");
										HX_STACK_LINE(119)
										int b = tmp35;		HX_STACK_VAR(b,"b");
										HX_STACK_LINE(119)
										int tmp36 = ::__hxcpp_memory_get_byte(destData->buffer->b,(destData->byteOffset + destPosition));		HX_STACK_VAR(tmp36,"tmp36");
										HX_STACK_LINE(119)
										Dynamic tmp37 = (int(tmp36) & int((int)255));		HX_STACK_VAR(tmp37,"tmp37");
										HX_STACK_LINE(119)
										int a = tmp37;		HX_STACK_VAR(a,"a");
										HX_STACK_LINE(119)
										int tmp38 = (int(r) & int((int)255));		HX_STACK_VAR(tmp38,"tmp38");
										HX_STACK_LINE(119)
										int tmp39 = (int(tmp38) << int((int)24));		HX_STACK_VAR(tmp39,"tmp39");
										HX_STACK_LINE(119)
										int tmp40 = (int(g) & int((int)255));		HX_STACK_VAR(tmp40,"tmp40");
										HX_STACK_LINE(119)
										int tmp41 = (int(tmp40) << int((int)16));		HX_STACK_VAR(tmp41,"tmp41");
										HX_STACK_LINE(119)
										int tmp42 = (int(tmp39) | int(tmp41));		HX_STACK_VAR(tmp42,"tmp42");
										HX_STACK_LINE(119)
										int tmp43 = (int(b) & int((int)255));		HX_STACK_VAR(tmp43,"tmp43");
										HX_STACK_LINE(119)
										int tmp44 = (int(tmp43) << int((int)8));		HX_STACK_VAR(tmp44,"tmp44");
										HX_STACK_LINE(119)
										int tmp45 = (int(tmp42) | int(tmp44));		HX_STACK_VAR(tmp45,"tmp45");
										HX_STACK_LINE(119)
										int tmp46 = (int(a) & int((int)255));		HX_STACK_VAR(tmp46,"tmp46");
										HX_STACK_LINE(119)
										int tmp47 = (int(tmp45) | int(tmp46));		HX_STACK_VAR(tmp47,"tmp47");
										HX_STACK_LINE(119)
										destPixel = tmp47;
									}
									;break;
								}
								HX_STACK_LINE(119)
								bool tmp30 = destPremultiplied;		HX_STACK_VAR(tmp30,"tmp30");
								HX_STACK_LINE(119)
								if ((tmp30)){
									HX_STACK_LINE(119)
									int tmp31 = (int(destPixel) & int((int)255));		HX_STACK_VAR(tmp31,"tmp31");
									HX_STACK_LINE(119)
									bool tmp32 = (tmp31 != (int)0);		HX_STACK_VAR(tmp32,"tmp32");
									HX_STACK_LINE(119)
									bool tmp33;		HX_STACK_VAR(tmp33,"tmp33");
									HX_STACK_LINE(119)
									if ((tmp32)){
										HX_STACK_LINE(119)
										int tmp34 = (int(destPixel) & int((int)255));		HX_STACK_VAR(tmp34,"tmp34");
										HX_STACK_LINE(119)
										int tmp35 = tmp34;		HX_STACK_VAR(tmp35,"tmp35");
										HX_STACK_LINE(119)
										tmp33 = (tmp35 != (int)255);
									}
									else{
										HX_STACK_LINE(119)
										tmp33 = false;
									}
									HX_STACK_LINE(119)
									if ((tmp33)){
										HX_STACK_LINE(119)
										int tmp34 = (int(destPixel) & int((int)255));		HX_STACK_VAR(tmp34,"tmp34");
										HX_STACK_LINE(119)
										Float tmp35 = (Float(((Float)255.0)) / Float(tmp34));		HX_STACK_VAR(tmp35,"tmp35");
										HX_STACK_LINE(119)
										::lime::math::color::_RGBA::RGBA_Impl__obj::unmult = tmp35;
										HX_STACK_LINE(119)
										{
											HX_STACK_LINE(119)
											Dynamic tmp36;		HX_STACK_VAR(tmp36,"tmp36");
											HX_STACK_LINE(119)
											{
												HX_STACK_LINE(119)
												::lime::utils::ArrayBufferView tmp37 = ::lime::math::color::_RGBA::RGBA_Impl__obj::__clamp;		HX_STACK_VAR(tmp37,"tmp37");
												HX_STACK_LINE(119)
												::lime::utils::ArrayBufferView this1 = tmp37;		HX_STACK_VAR(this1,"this1");
												HX_STACK_LINE(119)
												int tmp38 = (int(destPixel) >> int((int)24));		HX_STACK_VAR(tmp38,"tmp38");
												HX_STACK_LINE(119)
												int tmp39 = (int(tmp38) & int((int)255));		HX_STACK_VAR(tmp39,"tmp39");
												HX_STACK_LINE(119)
												Float tmp40 = ::lime::math::color::_RGBA::RGBA_Impl__obj::unmult;		HX_STACK_VAR(tmp40,"tmp40");
												HX_STACK_LINE(119)
												Float tmp41 = (tmp39 * tmp40);		HX_STACK_VAR(tmp41,"tmp41");
												HX_STACK_LINE(119)
												int tmp42 = ::Math_obj::round(tmp41);		HX_STACK_VAR(tmp42,"tmp42");
												HX_STACK_LINE(119)
												int idx = tmp42;		HX_STACK_VAR(idx,"idx");
												HX_STACK_LINE(119)
												int tmp43 = ::__hxcpp_memory_get_byte(this1->buffer->b,(this1->byteOffset + idx));		HX_STACK_VAR(tmp43,"tmp43");
												HX_STACK_LINE(119)
												tmp36 = (int(tmp43) & int((int)255));
											}
											HX_STACK_LINE(119)
											int r = tmp36;		HX_STACK_VAR(r,"r");
											HX_STACK_LINE(119)
											Dynamic tmp37;		HX_STACK_VAR(tmp37,"tmp37");
											HX_STACK_LINE(119)
											{
												HX_STACK_LINE(119)
												::lime::utils::ArrayBufferView tmp38 = ::lime::math::color::_RGBA::RGBA_Impl__obj::__clamp;		HX_STACK_VAR(tmp38,"tmp38");
												HX_STACK_LINE(119)
												::lime::utils::ArrayBufferView this1 = tmp38;		HX_STACK_VAR(this1,"this1");
												HX_STACK_LINE(119)
												int tmp39 = (int(destPixel) >> int((int)16));		HX_STACK_VAR(tmp39,"tmp39");
												HX_STACK_LINE(119)
												int tmp40 = (int(tmp39) & int((int)255));		HX_STACK_VAR(tmp40,"tmp40");
												HX_STACK_LINE(119)
												Float tmp41 = ::lime::math::color::_RGBA::RGBA_Impl__obj::unmult;		HX_STACK_VAR(tmp41,"tmp41");
												HX_STACK_LINE(119)
												Float tmp42 = (tmp40 * tmp41);		HX_STACK_VAR(tmp42,"tmp42");
												HX_STACK_LINE(119)
												int tmp43 = ::Math_obj::round(tmp42);		HX_STACK_VAR(tmp43,"tmp43");
												HX_STACK_LINE(119)
												int idx = tmp43;		HX_STACK_VAR(idx,"idx");
												HX_STACK_LINE(119)
												int tmp44 = ::__hxcpp_memory_get_byte(this1->buffer->b,(this1->byteOffset + idx));		HX_STACK_VAR(tmp44,"tmp44");
												HX_STACK_LINE(119)
												tmp37 = (int(tmp44) & int((int)255));
											}
											HX_STACK_LINE(119)
											int g = tmp37;		HX_STACK_VAR(g,"g");
											HX_STACK_LINE(119)
											Dynamic tmp38;		HX_STACK_VAR(tmp38,"tmp38");
											HX_STACK_LINE(119)
											{
												HX_STACK_LINE(119)
												::lime::utils::ArrayBufferView tmp39 = ::lime::math::color::_RGBA::RGBA_Impl__obj::__clamp;		HX_STACK_VAR(tmp39,"tmp39");
												HX_STACK_LINE(119)
												::lime::utils::ArrayBufferView this1 = tmp39;		HX_STACK_VAR(this1,"this1");
												HX_STACK_LINE(119)
												int tmp40 = (int(destPixel) >> int((int)8));		HX_STACK_VAR(tmp40,"tmp40");
												HX_STACK_LINE(119)
												int tmp41 = (int(tmp40) & int((int)255));		HX_STACK_VAR(tmp41,"tmp41");
												HX_STACK_LINE(119)
												Float tmp42 = ::lime::math::color::_RGBA::RGBA_Impl__obj::unmult;		HX_STACK_VAR(tmp42,"tmp42");
												HX_STACK_LINE(119)
												Float tmp43 = (tmp41 * tmp42);		HX_STACK_VAR(tmp43,"tmp43");
												HX_STACK_LINE(119)
												int tmp44 = ::Math_obj::round(tmp43);		HX_STACK_VAR(tmp44,"tmp44");
												HX_STACK_LINE(119)
												int idx = tmp44;		HX_STACK_VAR(idx,"idx");
												HX_STACK_LINE(119)
												int tmp45 = ::__hxcpp_memory_get_byte(this1->buffer->b,(this1->byteOffset + idx));		HX_STACK_VAR(tmp45,"tmp45");
												HX_STACK_LINE(119)
												tmp38 = (int(tmp45) & int((int)255));
											}
											HX_STACK_LINE(119)
											int b = tmp38;		HX_STACK_VAR(b,"b");
											HX_STACK_LINE(119)
											int tmp39 = (int(r) & int((int)255));		HX_STACK_VAR(tmp39,"tmp39");
											HX_STACK_LINE(119)
											int tmp40 = (int(tmp39) << int((int)24));		HX_STACK_VAR(tmp40,"tmp40");
											HX_STACK_LINE(119)
											int tmp41 = (int(g) & int((int)255));		HX_STACK_VAR(tmp41,"tmp41");
											HX_STACK_LINE(119)
											int tmp42 = (int(tmp41) << int((int)16));		HX_STACK_VAR(tmp42,"tmp42");
											HX_STACK_LINE(119)
											int tmp43 = (int(tmp40) | int(tmp42));		HX_STACK_VAR(tmp43,"tmp43");
											HX_STACK_LINE(119)
											int tmp44 = (int(b) & int((int)255));		HX_STACK_VAR(tmp44,"tmp44");
											HX_STACK_LINE(119)
											int tmp45 = (int(tmp44) << int((int)8));		HX_STACK_VAR(tmp45,"tmp45");
											HX_STACK_LINE(119)
											int tmp46 = (int(tmp43) | int(tmp45));		HX_STACK_VAR(tmp46,"tmp46");
											HX_STACK_LINE(119)
											int tmp47 = (int(destPixel) & int((int)255));		HX_STACK_VAR(tmp47,"tmp47");
											HX_STACK_LINE(119)
											int tmp48 = (int(tmp47) & int((int)255));		HX_STACK_VAR(tmp48,"tmp48");
											HX_STACK_LINE(119)
											int tmp49 = (int(tmp46) | int(tmp48));		HX_STACK_VAR(tmp49,"tmp49");
											HX_STACK_LINE(119)
											destPixel = tmp49;
										}
									}
								}
							}
							HX_STACK_LINE(121)
							int tmp29 = srcIdx;		HX_STACK_VAR(tmp29,"tmp29");
							HX_STACK_LINE(121)
							switch( (int)(tmp29)){
								case (int)0: {
									HX_STACK_LINE(123)
									int tmp30 = (int(srcPixel) >> int((int)24));		HX_STACK_VAR(tmp30,"tmp30");
									HX_STACK_LINE(123)
									int tmp31 = (int(tmp30) & int((int)255));		HX_STACK_VAR(tmp31,"tmp31");
									HX_STACK_LINE(123)
									value = tmp31;
								}
								;break;
								case (int)1: {
									HX_STACK_LINE(124)
									int tmp30 = (int(srcPixel) >> int((int)16));		HX_STACK_VAR(tmp30,"tmp30");
									HX_STACK_LINE(124)
									int tmp31 = (int(tmp30) & int((int)255));		HX_STACK_VAR(tmp31,"tmp31");
									HX_STACK_LINE(124)
									value = tmp31;
								}
								;break;
								case (int)2: {
									HX_STACK_LINE(125)
									int tmp30 = (int(srcPixel) >> int((int)8));		HX_STACK_VAR(tmp30,"tmp30");
									HX_STACK_LINE(125)
									int tmp31 = (int(tmp30) & int((int)255));		HX_STACK_VAR(tmp31,"tmp31");
									HX_STACK_LINE(125)
									value = tmp31;
								}
								;break;
								case (int)3: {
									HX_STACK_LINE(126)
									int tmp30 = (int(srcPixel) & int((int)255));		HX_STACK_VAR(tmp30,"tmp30");
									HX_STACK_LINE(126)
									value = tmp30;
								}
								;break;
							}
							HX_STACK_LINE(130)
							int tmp30 = destIdx;		HX_STACK_VAR(tmp30,"tmp30");
							HX_STACK_LINE(130)
							switch( (int)(tmp30)){
								case (int)0: {
									HX_STACK_LINE(132)
									{
										HX_STACK_LINE(132)
										int tmp31 = (int(value) & int((int)255));		HX_STACK_VAR(tmp31,"tmp31");
										HX_STACK_LINE(132)
										int tmp32 = (int(tmp31) << int((int)24));		HX_STACK_VAR(tmp32,"tmp32");
										HX_STACK_LINE(132)
										int tmp33 = (int(destPixel) >> int((int)16));		HX_STACK_VAR(tmp33,"tmp33");
										HX_STACK_LINE(132)
										int tmp34 = (int(tmp33) & int((int)255));		HX_STACK_VAR(tmp34,"tmp34");
										HX_STACK_LINE(132)
										int tmp35 = (int(tmp34) & int((int)255));		HX_STACK_VAR(tmp35,"tmp35");
										HX_STACK_LINE(132)
										int tmp36 = (int(tmp35) << int((int)16));		HX_STACK_VAR(tmp36,"tmp36");
										HX_STACK_LINE(132)
										int tmp37 = (int(tmp32) | int(tmp36));		HX_STACK_VAR(tmp37,"tmp37");
										HX_STACK_LINE(132)
										int tmp38 = (int(destPixel) >> int((int)8));		HX_STACK_VAR(tmp38,"tmp38");
										HX_STACK_LINE(132)
										int tmp39 = (int(tmp38) & int((int)255));		HX_STACK_VAR(tmp39,"tmp39");
										HX_STACK_LINE(132)
										int tmp40 = (int(tmp39) & int((int)255));		HX_STACK_VAR(tmp40,"tmp40");
										HX_STACK_LINE(132)
										int tmp41 = (int(tmp40) << int((int)8));		HX_STACK_VAR(tmp41,"tmp41");
										HX_STACK_LINE(132)
										int tmp42 = (int(tmp37) | int(tmp41));		HX_STACK_VAR(tmp42,"tmp42");
										HX_STACK_LINE(132)
										int tmp43 = (int(destPixel) & int((int)255));		HX_STACK_VAR(tmp43,"tmp43");
										HX_STACK_LINE(132)
										int tmp44 = (int(tmp43) & int((int)255));		HX_STACK_VAR(tmp44,"tmp44");
										HX_STACK_LINE(132)
										int tmp45 = (int(tmp42) | int(tmp44));		HX_STACK_VAR(tmp45,"tmp45");
										HX_STACK_LINE(132)
										destPixel = tmp45;
									}
									HX_STACK_LINE(132)
									value;
								}
								;break;
								case (int)1: {
									HX_STACK_LINE(133)
									{
										HX_STACK_LINE(133)
										int tmp31 = (int(destPixel) >> int((int)24));		HX_STACK_VAR(tmp31,"tmp31");
										HX_STACK_LINE(133)
										int tmp32 = (int(tmp31) & int((int)255));		HX_STACK_VAR(tmp32,"tmp32");
										HX_STACK_LINE(133)
										int tmp33 = (int(tmp32) & int((int)255));		HX_STACK_VAR(tmp33,"tmp33");
										HX_STACK_LINE(133)
										int tmp34 = (int(tmp33) << int((int)24));		HX_STACK_VAR(tmp34,"tmp34");
										HX_STACK_LINE(133)
										int tmp35 = (int(value) & int((int)255));		HX_STACK_VAR(tmp35,"tmp35");
										HX_STACK_LINE(133)
										int tmp36 = (int(tmp35) << int((int)16));		HX_STACK_VAR(tmp36,"tmp36");
										HX_STACK_LINE(133)
										int tmp37 = (int(tmp34) | int(tmp36));		HX_STACK_VAR(tmp37,"tmp37");
										HX_STACK_LINE(133)
										int tmp38 = (int(destPixel) >> int((int)8));		HX_STACK_VAR(tmp38,"tmp38");
										HX_STACK_LINE(133)
										int tmp39 = (int(tmp38) & int((int)255));		HX_STACK_VAR(tmp39,"tmp39");
										HX_STACK_LINE(133)
										int tmp40 = (int(tmp39) & int((int)255));		HX_STACK_VAR(tmp40,"tmp40");
										HX_STACK_LINE(133)
										int tmp41 = (int(tmp40) << int((int)8));		HX_STACK_VAR(tmp41,"tmp41");
										HX_STACK_LINE(133)
										int tmp42 = (int(tmp37) | int(tmp41));		HX_STACK_VAR(tmp42,"tmp42");
										HX_STACK_LINE(133)
										int tmp43 = (int(destPixel) & int((int)255));		HX_STACK_VAR(tmp43,"tmp43");
										HX_STACK_LINE(133)
										int tmp44 = (int(tmp43) & int((int)255));		HX_STACK_VAR(tmp44,"tmp44");
										HX_STACK_LINE(133)
										int tmp45 = (int(tmp42) | int(tmp44));		HX_STACK_VAR(tmp45,"tmp45");
										HX_STACK_LINE(133)
										destPixel = tmp45;
									}
									HX_STACK_LINE(133)
									value;
								}
								;break;
								case (int)2: {
									HX_STACK_LINE(134)
									{
										HX_STACK_LINE(134)
										int tmp31 = (int(destPixel) >> int((int)24));		HX_STACK_VAR(tmp31,"tmp31");
										HX_STACK_LINE(134)
										int tmp32 = (int(tmp31) & int((int)255));		HX_STACK_VAR(tmp32,"tmp32");
										HX_STACK_LINE(134)
										int tmp33 = (int(tmp32) & int((int)255));		HX_STACK_VAR(tmp33,"tmp33");
										HX_STACK_LINE(134)
										int tmp34 = (int(tmp33) << int((int)24));		HX_STACK_VAR(tmp34,"tmp34");
										HX_STACK_LINE(134)
										int tmp35 = (int(destPixel) >> int((int)16));		HX_STACK_VAR(tmp35,"tmp35");
										HX_STACK_LINE(134)
										int tmp36 = (int(tmp35) & int((int)255));		HX_STACK_VAR(tmp36,"tmp36");
										HX_STACK_LINE(134)
										int tmp37 = (int(tmp36) & int((int)255));		HX_STACK_VAR(tmp37,"tmp37");
										HX_STACK_LINE(134)
										int tmp38 = (int(tmp37) << int((int)16));		HX_STACK_VAR(tmp38,"tmp38");
										HX_STACK_LINE(134)
										int tmp39 = (int(tmp34) | int(tmp38));		HX_STACK_VAR(tmp39,"tmp39");
										HX_STACK_LINE(134)
										int tmp40 = (int(value) & int((int)255));		HX_STACK_VAR(tmp40,"tmp40");
										HX_STACK_LINE(134)
										int tmp41 = (int(tmp40) << int((int)8));		HX_STACK_VAR(tmp41,"tmp41");
										HX_STACK_LINE(134)
										int tmp42 = (int(tmp39) | int(tmp41));		HX_STACK_VAR(tmp42,"tmp42");
										HX_STACK_LINE(134)
										int tmp43 = (int(destPixel) & int((int)255));		HX_STACK_VAR(tmp43,"tmp43");
										HX_STACK_LINE(134)
										int tmp44 = (int(tmp43) & int((int)255));		HX_STACK_VAR(tmp44,"tmp44");
										HX_STACK_LINE(134)
										int tmp45 = (int(tmp42) | int(tmp44));		HX_STACK_VAR(tmp45,"tmp45");
										HX_STACK_LINE(134)
										destPixel = tmp45;
									}
									HX_STACK_LINE(134)
									value;
								}
								;break;
								case (int)3: {
									HX_STACK_LINE(135)
									{
										HX_STACK_LINE(135)
										int tmp31 = (int(destPixel) >> int((int)24));		HX_STACK_VAR(tmp31,"tmp31");
										HX_STACK_LINE(135)
										int tmp32 = (int(tmp31) & int((int)255));		HX_STACK_VAR(tmp32,"tmp32");
										HX_STACK_LINE(135)
										int tmp33 = (int(tmp32) & int((int)255));		HX_STACK_VAR(tmp33,"tmp33");
										HX_STACK_LINE(135)
										int tmp34 = (int(tmp33) << int((int)24));		HX_STACK_VAR(tmp34,"tmp34");
										HX_STACK_LINE(135)
										int tmp35 = (int(destPixel) >> int((int)16));		HX_STACK_VAR(tmp35,"tmp35");
										HX_STACK_LINE(135)
										int tmp36 = (int(tmp35) & int((int)255));		HX_STACK_VAR(tmp36,"tmp36");
										HX_STACK_LINE(135)
										int tmp37 = (int(tmp36) & int((int)255));		HX_STACK_VAR(tmp37,"tmp37");
										HX_STACK_LINE(135)
										int tmp38 = (int(tmp37) << int((int)16));		HX_STACK_VAR(tmp38,"tmp38");
										HX_STACK_LINE(135)
										int tmp39 = (int(tmp34) | int(tmp38));		HX_STACK_VAR(tmp39,"tmp39");
										HX_STACK_LINE(135)
										int tmp40 = (int(destPixel) >> int((int)8));		HX_STACK_VAR(tmp40,"tmp40");
										HX_STACK_LINE(135)
										int tmp41 = (int(tmp40) & int((int)255));		HX_STACK_VAR(tmp41,"tmp41");
										HX_STACK_LINE(135)
										int tmp42 = (int(tmp41) & int((int)255));		HX_STACK_VAR(tmp42,"tmp42");
										HX_STACK_LINE(135)
										int tmp43 = (int(tmp42) << int((int)8));		HX_STACK_VAR(tmp43,"tmp43");
										HX_STACK_LINE(135)
										int tmp44 = (int(tmp39) | int(tmp43));		HX_STACK_VAR(tmp44,"tmp44");
										HX_STACK_LINE(135)
										int tmp45 = (int(value) & int((int)255));		HX_STACK_VAR(tmp45,"tmp45");
										HX_STACK_LINE(135)
										int tmp46 = (int(tmp44) | int(tmp45));		HX_STACK_VAR(tmp46,"tmp46");
										HX_STACK_LINE(135)
										destPixel = tmp46;
									}
									HX_STACK_LINE(135)
									value;
								}
								;break;
							}
							HX_STACK_LINE(139)
							{
								HX_STACK_LINE(139)
								bool tmp31 = destPremultiplied;		HX_STACK_VAR(tmp31,"tmp31");
								HX_STACK_LINE(139)
								if ((tmp31)){
									HX_STACK_LINE(139)
									int tmp32 = (int(destPixel) & int((int)255));		HX_STACK_VAR(tmp32,"tmp32");
									HX_STACK_LINE(139)
									bool tmp33 = (tmp32 == (int)0);		HX_STACK_VAR(tmp33,"tmp33");
									HX_STACK_LINE(139)
									if ((tmp33)){
										HX_STACK_LINE(139)
										bool tmp34 = (destPixel != (int)0);		HX_STACK_VAR(tmp34,"tmp34");
										HX_STACK_LINE(139)
										if ((tmp34)){
											HX_STACK_LINE(139)
											destPixel = (int)0;
										}
									}
									else{
										HX_STACK_LINE(139)
										int tmp34 = (int(destPixel) & int((int)255));		HX_STACK_VAR(tmp34,"tmp34");
										HX_STACK_LINE(139)
										bool tmp35 = (tmp34 != (int)255);		HX_STACK_VAR(tmp35,"tmp35");
										HX_STACK_LINE(139)
										if ((tmp35)){
											HX_STACK_LINE(139)
											Dynamic tmp36;		HX_STACK_VAR(tmp36,"tmp36");
											HX_STACK_LINE(139)
											{
												HX_STACK_LINE(139)
												::lime::utils::ArrayBufferView tmp37 = ::lime::math::color::_RGBA::RGBA_Impl__obj::__alpha16;		HX_STACK_VAR(tmp37,"tmp37");
												HX_STACK_LINE(139)
												::lime::utils::ArrayBufferView this1 = tmp37;		HX_STACK_VAR(this1,"this1");
												HX_STACK_LINE(139)
												{
													HX_STACK_LINE(139)
													bool littleEndian = true;		HX_STACK_VAR(littleEndian,"littleEndian");
													HX_STACK_LINE(139)
													tmp36 = ::__hxcpp_memory_get_ui32(this1->buffer->b,(this1->byteOffset + (((int(destPixel) & int((int)255))) * (int)4)));
												}
											}
											HX_STACK_LINE(139)
											::lime::math::color::_RGBA::RGBA_Impl__obj::a16 = tmp36;
											HX_STACK_LINE(139)
											{
												HX_STACK_LINE(139)
												int tmp37 = (int(destPixel) >> int((int)24));		HX_STACK_VAR(tmp37,"tmp37");
												HX_STACK_LINE(139)
												int tmp38 = (int(tmp37) & int((int)255));		HX_STACK_VAR(tmp38,"tmp38");
												HX_STACK_LINE(139)
												int tmp39 = ::lime::math::color::_RGBA::RGBA_Impl__obj::a16;		HX_STACK_VAR(tmp39,"tmp39");
												HX_STACK_LINE(139)
												int tmp40 = (tmp38 * tmp39);		HX_STACK_VAR(tmp40,"tmp40");
												HX_STACK_LINE(139)
												int tmp41 = (int(tmp40) >> int((int)16));		HX_STACK_VAR(tmp41,"tmp41");
												HX_STACK_LINE(139)
												int tmp42 = (int(tmp41) & int((int)255));		HX_STACK_VAR(tmp42,"tmp42");
												HX_STACK_LINE(139)
												int tmp43 = (int(tmp42) << int((int)24));		HX_STACK_VAR(tmp43,"tmp43");
												HX_STACK_LINE(139)
												int tmp44 = (int(destPixel) >> int((int)16));		HX_STACK_VAR(tmp44,"tmp44");
												HX_STACK_LINE(139)
												int tmp45 = (int(tmp44) & int((int)255));		HX_STACK_VAR(tmp45,"tmp45");
												HX_STACK_LINE(139)
												int tmp46 = ::lime::math::color::_RGBA::RGBA_Impl__obj::a16;		HX_STACK_VAR(tmp46,"tmp46");
												HX_STACK_LINE(139)
												int tmp47 = (tmp45 * tmp46);		HX_STACK_VAR(tmp47,"tmp47");
												HX_STACK_LINE(139)
												int tmp48 = (int(tmp47) >> int((int)16));		HX_STACK_VAR(tmp48,"tmp48");
												HX_STACK_LINE(139)
												int tmp49 = (int(tmp48) & int((int)255));		HX_STACK_VAR(tmp49,"tmp49");
												HX_STACK_LINE(139)
												int tmp50 = (int(tmp49) << int((int)16));		HX_STACK_VAR(tmp50,"tmp50");
												HX_STACK_LINE(139)
												int tmp51 = (int(tmp43) | int(tmp50));		HX_STACK_VAR(tmp51,"tmp51");
												HX_STACK_LINE(139)
												int tmp52 = (int(destPixel) >> int((int)8));		HX_STACK_VAR(tmp52,"tmp52");
												HX_STACK_LINE(139)
												int tmp53 = (int(tmp52) & int((int)255));		HX_STACK_VAR(tmp53,"tmp53");
												HX_STACK_LINE(139)
												int tmp54 = ::lime::math::color::_RGBA::RGBA_Impl__obj::a16;		HX_STACK_VAR(tmp54,"tmp54");
												HX_STACK_LINE(139)
												int tmp55 = (tmp53 * tmp54);		HX_STACK_VAR(tmp55,"tmp55");
												HX_STACK_LINE(139)
												int tmp56 = (int(tmp55) >> int((int)16));		HX_STACK_VAR(tmp56,"tmp56");
												HX_STACK_LINE(139)
												int tmp57 = (int(tmp56) & int((int)255));		HX_STACK_VAR(tmp57,"tmp57");
												HX_STACK_LINE(139)
												int tmp58 = (int(tmp57) << int((int)8));		HX_STACK_VAR(tmp58,"tmp58");
												HX_STACK_LINE(139)
												int tmp59 = (int(tmp51) | int(tmp58));		HX_STACK_VAR(tmp59,"tmp59");
												HX_STACK_LINE(139)
												int tmp60 = (int(destPixel) & int((int)255));		HX_STACK_VAR(tmp60,"tmp60");
												HX_STACK_LINE(139)
												int tmp61 = (int(tmp60) & int((int)255));		HX_STACK_VAR(tmp61,"tmp61");
												HX_STACK_LINE(139)
												int tmp62 = (int(tmp59) | int(tmp61));		HX_STACK_VAR(tmp62,"tmp62");
												HX_STACK_LINE(139)
												destPixel = tmp62;
											}
										}
									}
								}
								HX_STACK_LINE(139)
								int tmp32 = destFormat;		HX_STACK_VAR(tmp32,"tmp32");
								HX_STACK_LINE(139)
								switch( (int)(tmp32)){
									case (int)2: {
										HX_STACK_LINE(139)
										{
											HX_STACK_LINE(139)
											int tmp33 = (int(destPixel) >> int((int)8));		HX_STACK_VAR(tmp33,"tmp33");
											HX_STACK_LINE(139)
											int tmp34 = (int(tmp33) & int((int)255));		HX_STACK_VAR(tmp34,"tmp34");
											HX_STACK_LINE(139)
											int val = tmp34;		HX_STACK_VAR(val,"val");
											HX_STACK_LINE(139)
											{
												HX_STACK_LINE(139)
												::__hxcpp_memory_set_byte(destData->buffer->b,(destData->byteOffset + destPosition),val);
												HX_STACK_LINE(139)
												val;
											}
										}
										HX_STACK_LINE(139)
										{
											HX_STACK_LINE(139)
											int tmp33 = (int(destPixel) >> int((int)16));		HX_STACK_VAR(tmp33,"tmp33");
											HX_STACK_LINE(139)
											int tmp34 = (int(tmp33) & int((int)255));		HX_STACK_VAR(tmp34,"tmp34");
											HX_STACK_LINE(139)
											int val = tmp34;		HX_STACK_VAR(val,"val");
											HX_STACK_LINE(139)
											{
												HX_STACK_LINE(139)
												::__hxcpp_memory_set_byte(destData->buffer->b,(destData->byteOffset + ((destPosition + (int)1))),val);
												HX_STACK_LINE(139)
												val;
											}
										}
										HX_STACK_LINE(139)
										{
											HX_STACK_LINE(139)
											int tmp33 = (int(destPixel) >> int((int)24));		HX_STACK_VAR(tmp33,"tmp33");
											HX_STACK_LINE(139)
											int tmp34 = (int(tmp33) & int((int)255));		HX_STACK_VAR(tmp34,"tmp34");
											HX_STACK_LINE(139)
											int val = tmp34;		HX_STACK_VAR(val,"val");
											HX_STACK_LINE(139)
											{
												HX_STACK_LINE(139)
												::__hxcpp_memory_set_byte(destData->buffer->b,(destData->byteOffset + ((destPosition + (int)2))),val);
												HX_STACK_LINE(139)
												val;
											}
										}
										HX_STACK_LINE(139)
										{
											HX_STACK_LINE(139)
											int tmp33 = (int(destPixel) & int((int)255));		HX_STACK_VAR(tmp33,"tmp33");
											HX_STACK_LINE(139)
											int val = tmp33;		HX_STACK_VAR(val,"val");
											HX_STACK_LINE(139)
											{
												HX_STACK_LINE(139)
												::__hxcpp_memory_set_byte(destData->buffer->b,(destData->byteOffset + ((destPosition + (int)3))),val);
												HX_STACK_LINE(139)
												val;
											}
										}
									}
									;break;
									case (int)0: {
										HX_STACK_LINE(139)
										{
											HX_STACK_LINE(139)
											int tmp33 = (int(destPixel) >> int((int)24));		HX_STACK_VAR(tmp33,"tmp33");
											HX_STACK_LINE(139)
											int tmp34 = (int(tmp33) & int((int)255));		HX_STACK_VAR(tmp34,"tmp34");
											HX_STACK_LINE(139)
											int val = tmp34;		HX_STACK_VAR(val,"val");
											HX_STACK_LINE(139)
											{
												HX_STACK_LINE(139)
												::__hxcpp_memory_set_byte(destData->buffer->b,(destData->byteOffset + destPosition),val);
												HX_STACK_LINE(139)
												val;
											}
										}
										HX_STACK_LINE(139)
										{
											HX_STACK_LINE(139)
											int tmp33 = (int(destPixel) >> int((int)16));		HX_STACK_VAR(tmp33,"tmp33");
											HX_STACK_LINE(139)
											int tmp34 = (int(tmp33) & int((int)255));		HX_STACK_VAR(tmp34,"tmp34");
											HX_STACK_LINE(139)
											int val = tmp34;		HX_STACK_VAR(val,"val");
											HX_STACK_LINE(139)
											{
												HX_STACK_LINE(139)
												::__hxcpp_memory_set_byte(destData->buffer->b,(destData->byteOffset + ((destPosition + (int)1))),val);
												HX_STACK_LINE(139)
												val;
											}
										}
										HX_STACK_LINE(139)
										{
											HX_STACK_LINE(139)
											int tmp33 = (int(destPixel) >> int((int)8));		HX_STACK_VAR(tmp33,"tmp33");
											HX_STACK_LINE(139)
											int tmp34 = (int(tmp33) & int((int)255));		HX_STACK_VAR(tmp34,"tmp34");
											HX_STACK_LINE(139)
											int val = tmp34;		HX_STACK_VAR(val,"val");
											HX_STACK_LINE(139)
											{
												HX_STACK_LINE(139)
												::__hxcpp_memory_set_byte(destData->buffer->b,(destData->byteOffset + ((destPosition + (int)2))),val);
												HX_STACK_LINE(139)
												val;
											}
										}
										HX_STACK_LINE(139)
										{
											HX_STACK_LINE(139)
											int tmp33 = (int(destPixel) & int((int)255));		HX_STACK_VAR(tmp33,"tmp33");
											HX_STACK_LINE(139)
											int val = tmp33;		HX_STACK_VAR(val,"val");
											HX_STACK_LINE(139)
											{
												HX_STACK_LINE(139)
												::__hxcpp_memory_set_byte(destData->buffer->b,(destData->byteOffset + ((destPosition + (int)3))),val);
												HX_STACK_LINE(139)
												val;
											}
										}
									}
									;break;
									case (int)1: {
										HX_STACK_LINE(139)
										{
											HX_STACK_LINE(139)
											int tmp33 = (int(destPixel) & int((int)255));		HX_STACK_VAR(tmp33,"tmp33");
											HX_STACK_LINE(139)
											int val = tmp33;		HX_STACK_VAR(val,"val");
											HX_STACK_LINE(139)
											{
												HX_STACK_LINE(139)
												::__hxcpp_memory_set_byte(destData->buffer->b,(destData->byteOffset + destPosition),val);
												HX_STACK_LINE(139)
												val;
											}
										}
										HX_STACK_LINE(139)
										{
											HX_STACK_LINE(139)
											int tmp33 = (int(destPixel) >> int((int)24));		HX_STACK_VAR(tmp33,"tmp33");
											HX_STACK_LINE(139)
											int tmp34 = (int(tmp33) & int((int)255));		HX_STACK_VAR(tmp34,"tmp34");
											HX_STACK_LINE(139)
											int val = tmp34;		HX_STACK_VAR(val,"val");
											HX_STACK_LINE(139)
											{
												HX_STACK_LINE(139)
												::__hxcpp_memory_set_byte(destData->buffer->b,(destData->byteOffset + ((destPosition + (int)1))),val);
												HX_STACK_LINE(139)
												val;
											}
										}
										HX_STACK_LINE(139)
										{
											HX_STACK_LINE(139)
											int tmp33 = (int(destPixel) >> int((int)16));		HX_STACK_VAR(tmp33,"tmp33");
											HX_STACK_LINE(139)
											int tmp34 = (int(tmp33) & int((int)255));		HX_STACK_VAR(tmp34,"tmp34");
											HX_STACK_LINE(139)
											int val = tmp34;		HX_STACK_VAR(val,"val");
											HX_STACK_LINE(139)
											{
												HX_STACK_LINE(139)
												::__hxcpp_memory_set_byte(destData->buffer->b,(destData->byteOffset + ((destPosition + (int)2))),val);
												HX_STACK_LINE(139)
												val;
											}
										}
										HX_STACK_LINE(139)
										{
											HX_STACK_LINE(139)
											int tmp33 = (int(destPixel) >> int((int)8));		HX_STACK_VAR(tmp33,"tmp33");
											HX_STACK_LINE(139)
											int tmp34 = (int(tmp33) & int((int)255));		HX_STACK_VAR(tmp34,"tmp34");
											HX_STACK_LINE(139)
											int val = tmp34;		HX_STACK_VAR(val,"val");
											HX_STACK_LINE(139)
											{
												HX_STACK_LINE(139)
												::__hxcpp_memory_set_byte(destData->buffer->b,(destData->byteOffset + ((destPosition + (int)3))),val);
												HX_STACK_LINE(139)
												val;
											}
										}
									}
									;break;
								}
							}
							HX_STACK_LINE(141)
							hx::AddEq(srcPosition,(int)4);
							HX_STACK_LINE(142)
							hx::AddEq(destPosition,(int)4);
						}
					}
				}
			}
		}
		HX_STACK_LINE(150)
		image->dirty = true;
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC6(ImageDataUtil_obj,copyChannel,(void))

Void ImageDataUtil_obj::copyPixels( ::lime::graphics::Image image,::lime::graphics::Image sourceImage,::lime::math::Rectangle sourceRect,::lime::math::Vector2 destPoint,::lime::graphics::Image alphaImage,::lime::math::Vector2 alphaPoint,hx::Null< bool >  __o_mergeAlpha){
bool mergeAlpha = __o_mergeAlpha.Default(false);
	HX_STACK_FRAME("lime.graphics.utils.ImageDataUtil","copyPixels",0x95aa37f0,"lime.graphics.utils.ImageDataUtil.copyPixels","lime/graphics/utils/ImageDataUtil.hx",155,0x494d921f)
	HX_STACK_ARG(image,"image")
	HX_STACK_ARG(sourceImage,"sourceImage")
	HX_STACK_ARG(sourceRect,"sourceRect")
	HX_STACK_ARG(destPoint,"destPoint")
	HX_STACK_ARG(alphaImage,"alphaImage")
	HX_STACK_ARG(alphaPoint,"alphaPoint")
	HX_STACK_ARG(mergeAlpha,"mergeAlpha")
{
		HX_STACK_LINE(158)
		bool tmp = ::lime::_system::System_obj::disableCFFI;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(158)
		bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(158)
		if ((tmp1)){
			HX_STACK_LINE(158)
			::lime::graphics::Image tmp2 = image;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(158)
			::lime::graphics::Image tmp3 = sourceImage;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(158)
			::lime::math::Rectangle tmp4 = sourceRect;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(158)
			::lime::math::Vector2 tmp5 = destPoint;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(158)
			::lime::graphics::Image tmp6 = alphaImage;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(158)
			::lime::math::Vector2 tmp7 = alphaPoint;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(158)
			bool tmp8 = mergeAlpha;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(158)
			::lime::graphics::utils::ImageDataUtil_obj::lime_image_data_util_copy_pixels(tmp2,tmp3,tmp4,tmp5,tmp6,tmp7,tmp8);
		}
		else{
			HX_STACK_LINE(162)
			::lime::utils::ArrayBufferView tmp2 = sourceImage->buffer->data;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(162)
			::lime::utils::ArrayBufferView sourceData = tmp2;		HX_STACK_VAR(sourceData,"sourceData");
			HX_STACK_LINE(163)
			::lime::utils::ArrayBufferView tmp3 = image->buffer->data;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(163)
			::lime::utils::ArrayBufferView destData = tmp3;		HX_STACK_VAR(destData,"destData");
			HX_STACK_LINE(165)
			bool tmp4 = (sourceData == null());		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(165)
			bool tmp5 = !(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(165)
			bool tmp6;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(165)
			if ((tmp5)){
				HX_STACK_LINE(165)
				tmp6 = (destData == null());
			}
			else{
				HX_STACK_LINE(165)
				tmp6 = true;
			}
			HX_STACK_LINE(165)
			if ((tmp6)){
				HX_STACK_LINE(165)
				return null();
			}
			HX_STACK_LINE(167)
			::lime::graphics::utils::_ImageDataUtil::ImageDataView tmp7 = ::lime::graphics::utils::_ImageDataUtil::ImageDataView_obj::__new(sourceImage,sourceRect);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(167)
			::lime::graphics::utils::_ImageDataUtil::ImageDataView sourceView = tmp7;		HX_STACK_VAR(sourceView,"sourceView");
			HX_STACK_LINE(168)
			::lime::graphics::Image tmp8 = image;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(168)
			::lime::math::Rectangle tmp9 = ::lime::math::Rectangle_obj::__new(destPoint->x,destPoint->y,sourceView->width,sourceView->height);		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(168)
			::lime::graphics::utils::_ImageDataUtil::ImageDataView tmp10 = ::lime::graphics::utils::_ImageDataUtil::ImageDataView_obj::__new(tmp8,tmp9);		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(168)
			::lime::graphics::utils::_ImageDataUtil::ImageDataView destView = tmp10;		HX_STACK_VAR(destView,"destView");
			HX_STACK_LINE(170)
			int tmp11 = sourceImage->buffer->format;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(170)
			int sourceFormat = tmp11;		HX_STACK_VAR(sourceFormat,"sourceFormat");
			HX_STACK_LINE(171)
			int tmp12 = image->buffer->format;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(171)
			int destFormat = tmp12;		HX_STACK_VAR(destFormat,"destFormat");
			HX_STACK_LINE(172)
			bool tmp13 = sourceImage->buffer->premultiplied;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(172)
			bool sourcePremultiplied = tmp13;		HX_STACK_VAR(sourcePremultiplied,"sourcePremultiplied");
			HX_STACK_LINE(173)
			bool tmp14 = image->buffer->premultiplied;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(173)
			bool destPremultiplied = tmp14;		HX_STACK_VAR(destPremultiplied,"destPremultiplied");
			HX_STACK_LINE(175)
			int sourcePosition;		HX_STACK_VAR(sourcePosition,"sourcePosition");
			HX_STACK_LINE(175)
			int destPosition;		HX_STACK_VAR(destPosition,"destPosition");
			HX_STACK_LINE(175)
			int sourcePixel;		HX_STACK_VAR(sourcePixel,"sourcePixel");
			HX_STACK_LINE(177)
			bool tmp15 = mergeAlpha;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(177)
			bool tmp16 = tmp15;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(177)
			bool tmp17 = !(tmp16);		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(177)
			bool tmp18 = !(tmp17);		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(177)
			bool tmp19;		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(177)
			if ((tmp18)){
				HX_STACK_LINE(177)
				bool tmp20 = sourceImage->get_transparent();		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(177)
				bool tmp21 = tmp20;		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(177)
				bool tmp22 = tmp21;		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(177)
				tmp19 = !(tmp22);
			}
			else{
				HX_STACK_LINE(177)
				tmp19 = true;
			}
			HX_STACK_LINE(177)
			if ((tmp19)){
				HX_STACK_LINE(179)
				int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(179)
				int _g = destView->height;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(179)
				while((true)){
					HX_STACK_LINE(179)
					bool tmp20 = (_g1 < _g);		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(179)
					bool tmp21 = !(tmp20);		HX_STACK_VAR(tmp21,"tmp21");
					HX_STACK_LINE(179)
					if ((tmp21)){
						HX_STACK_LINE(179)
						break;
					}
					HX_STACK_LINE(179)
					int tmp22 = (_g1)++;		HX_STACK_VAR(tmp22,"tmp22");
					HX_STACK_LINE(179)
					int y = tmp22;		HX_STACK_VAR(y,"y");
					HX_STACK_LINE(181)
					int tmp23 = sourceView->offset;		HX_STACK_VAR(tmp23,"tmp23");
					HX_STACK_LINE(181)
					int tmp24 = (sourceView->stride * y);		HX_STACK_VAR(tmp24,"tmp24");
					HX_STACK_LINE(181)
					int tmp25 = (tmp23 + tmp24);		HX_STACK_VAR(tmp25,"tmp25");
					HX_STACK_LINE(181)
					sourcePosition = tmp25;
					HX_STACK_LINE(182)
					int tmp26 = destView->offset;		HX_STACK_VAR(tmp26,"tmp26");
					HX_STACK_LINE(182)
					int tmp27 = (destView->stride * y);		HX_STACK_VAR(tmp27,"tmp27");
					HX_STACK_LINE(182)
					int tmp28 = (tmp26 + tmp27);		HX_STACK_VAR(tmp28,"tmp28");
					HX_STACK_LINE(182)
					destPosition = tmp28;
					HX_STACK_LINE(184)
					{
						HX_STACK_LINE(184)
						int _g3 = (int)0;		HX_STACK_VAR(_g3,"_g3");
						HX_STACK_LINE(184)
						int _g2 = destView->width;		HX_STACK_VAR(_g2,"_g2");
						HX_STACK_LINE(184)
						while((true)){
							HX_STACK_LINE(184)
							bool tmp29 = (_g3 < _g2);		HX_STACK_VAR(tmp29,"tmp29");
							HX_STACK_LINE(184)
							bool tmp30 = !(tmp29);		HX_STACK_VAR(tmp30,"tmp30");
							HX_STACK_LINE(184)
							if ((tmp30)){
								HX_STACK_LINE(184)
								break;
							}
							HX_STACK_LINE(184)
							int tmp31 = (_g3)++;		HX_STACK_VAR(tmp31,"tmp31");
							HX_STACK_LINE(184)
							int x = tmp31;		HX_STACK_VAR(x,"x");
							HX_STACK_LINE(186)
							{
								HX_STACK_LINE(186)
								int tmp32 = sourceFormat;		HX_STACK_VAR(tmp32,"tmp32");
								HX_STACK_LINE(186)
								switch( (int)(tmp32)){
									case (int)2: {
										HX_STACK_LINE(186)
										int tmp33 = ::__hxcpp_memory_get_byte(sourceData->buffer->b,(sourceData->byteOffset + ((sourcePosition + (int)2))));		HX_STACK_VAR(tmp33,"tmp33");
										HX_STACK_LINE(186)
										Dynamic tmp34 = (int(tmp33) & int((int)255));		HX_STACK_VAR(tmp34,"tmp34");
										HX_STACK_LINE(186)
										int r = tmp34;		HX_STACK_VAR(r,"r");
										HX_STACK_LINE(186)
										int tmp35 = ::__hxcpp_memory_get_byte(sourceData->buffer->b,(sourceData->byteOffset + ((sourcePosition + (int)1))));		HX_STACK_VAR(tmp35,"tmp35");
										HX_STACK_LINE(186)
										Dynamic tmp36 = (int(tmp35) & int((int)255));		HX_STACK_VAR(tmp36,"tmp36");
										HX_STACK_LINE(186)
										int g = tmp36;		HX_STACK_VAR(g,"g");
										HX_STACK_LINE(186)
										int tmp37 = ::__hxcpp_memory_get_byte(sourceData->buffer->b,(sourceData->byteOffset + sourcePosition));		HX_STACK_VAR(tmp37,"tmp37");
										HX_STACK_LINE(186)
										Dynamic tmp38 = (int(tmp37) & int((int)255));		HX_STACK_VAR(tmp38,"tmp38");
										HX_STACK_LINE(186)
										int b = tmp38;		HX_STACK_VAR(b,"b");
										HX_STACK_LINE(186)
										int tmp39 = ::__hxcpp_memory_get_byte(sourceData->buffer->b,(sourceData->byteOffset + ((sourcePosition + (int)3))));		HX_STACK_VAR(tmp39,"tmp39");
										HX_STACK_LINE(186)
										Dynamic tmp40 = (int(tmp39) & int((int)255));		HX_STACK_VAR(tmp40,"tmp40");
										HX_STACK_LINE(186)
										int a = tmp40;		HX_STACK_VAR(a,"a");
										HX_STACK_LINE(186)
										int tmp41 = (int(r) & int((int)255));		HX_STACK_VAR(tmp41,"tmp41");
										HX_STACK_LINE(186)
										int tmp42 = (int(tmp41) << int((int)24));		HX_STACK_VAR(tmp42,"tmp42");
										HX_STACK_LINE(186)
										int tmp43 = (int(g) & int((int)255));		HX_STACK_VAR(tmp43,"tmp43");
										HX_STACK_LINE(186)
										int tmp44 = (int(tmp43) << int((int)16));		HX_STACK_VAR(tmp44,"tmp44");
										HX_STACK_LINE(186)
										int tmp45 = (int(tmp42) | int(tmp44));		HX_STACK_VAR(tmp45,"tmp45");
										HX_STACK_LINE(186)
										int tmp46 = (int(b) & int((int)255));		HX_STACK_VAR(tmp46,"tmp46");
										HX_STACK_LINE(186)
										int tmp47 = (int(tmp46) << int((int)8));		HX_STACK_VAR(tmp47,"tmp47");
										HX_STACK_LINE(186)
										int tmp48 = (int(tmp45) | int(tmp47));		HX_STACK_VAR(tmp48,"tmp48");
										HX_STACK_LINE(186)
										int tmp49 = (int(a) & int((int)255));		HX_STACK_VAR(tmp49,"tmp49");
										HX_STACK_LINE(186)
										int tmp50 = (int(tmp48) | int(tmp49));		HX_STACK_VAR(tmp50,"tmp50");
										HX_STACK_LINE(186)
										sourcePixel = tmp50;
									}
									;break;
									case (int)0: {
										HX_STACK_LINE(186)
										int tmp33 = ::__hxcpp_memory_get_byte(sourceData->buffer->b,(sourceData->byteOffset + sourcePosition));		HX_STACK_VAR(tmp33,"tmp33");
										HX_STACK_LINE(186)
										Dynamic tmp34 = (int(tmp33) & int((int)255));		HX_STACK_VAR(tmp34,"tmp34");
										HX_STACK_LINE(186)
										int r = tmp34;		HX_STACK_VAR(r,"r");
										HX_STACK_LINE(186)
										int tmp35 = ::__hxcpp_memory_get_byte(sourceData->buffer->b,(sourceData->byteOffset + ((sourcePosition + (int)1))));		HX_STACK_VAR(tmp35,"tmp35");
										HX_STACK_LINE(186)
										Dynamic tmp36 = (int(tmp35) & int((int)255));		HX_STACK_VAR(tmp36,"tmp36");
										HX_STACK_LINE(186)
										int g = tmp36;		HX_STACK_VAR(g,"g");
										HX_STACK_LINE(186)
										int tmp37 = ::__hxcpp_memory_get_byte(sourceData->buffer->b,(sourceData->byteOffset + ((sourcePosition + (int)2))));		HX_STACK_VAR(tmp37,"tmp37");
										HX_STACK_LINE(186)
										Dynamic tmp38 = (int(tmp37) & int((int)255));		HX_STACK_VAR(tmp38,"tmp38");
										HX_STACK_LINE(186)
										int b = tmp38;		HX_STACK_VAR(b,"b");
										HX_STACK_LINE(186)
										int tmp39 = ::__hxcpp_memory_get_byte(sourceData->buffer->b,(sourceData->byteOffset + ((sourcePosition + (int)3))));		HX_STACK_VAR(tmp39,"tmp39");
										HX_STACK_LINE(186)
										Dynamic tmp40 = (int(tmp39) & int((int)255));		HX_STACK_VAR(tmp40,"tmp40");
										HX_STACK_LINE(186)
										int a = tmp40;		HX_STACK_VAR(a,"a");
										HX_STACK_LINE(186)
										int tmp41 = (int(r) & int((int)255));		HX_STACK_VAR(tmp41,"tmp41");
										HX_STACK_LINE(186)
										int tmp42 = (int(tmp41) << int((int)24));		HX_STACK_VAR(tmp42,"tmp42");
										HX_STACK_LINE(186)
										int tmp43 = (int(g) & int((int)255));		HX_STACK_VAR(tmp43,"tmp43");
										HX_STACK_LINE(186)
										int tmp44 = (int(tmp43) << int((int)16));		HX_STACK_VAR(tmp44,"tmp44");
										HX_STACK_LINE(186)
										int tmp45 = (int(tmp42) | int(tmp44));		HX_STACK_VAR(tmp45,"tmp45");
										HX_STACK_LINE(186)
										int tmp46 = (int(b) & int((int)255));		HX_STACK_VAR(tmp46,"tmp46");
										HX_STACK_LINE(186)
										int tmp47 = (int(tmp46) << int((int)8));		HX_STACK_VAR(tmp47,"tmp47");
										HX_STACK_LINE(186)
										int tmp48 = (int(tmp45) | int(tmp47));		HX_STACK_VAR(tmp48,"tmp48");
										HX_STACK_LINE(186)
										int tmp49 = (int(a) & int((int)255));		HX_STACK_VAR(tmp49,"tmp49");
										HX_STACK_LINE(186)
										int tmp50 = (int(tmp48) | int(tmp49));		HX_STACK_VAR(tmp50,"tmp50");
										HX_STACK_LINE(186)
										sourcePixel = tmp50;
									}
									;break;
									case (int)1: {
										HX_STACK_LINE(186)
										int tmp33 = ::__hxcpp_memory_get_byte(sourceData->buffer->b,(sourceData->byteOffset + ((sourcePosition + (int)1))));		HX_STACK_VAR(tmp33,"tmp33");
										HX_STACK_LINE(186)
										Dynamic tmp34 = (int(tmp33) & int((int)255));		HX_STACK_VAR(tmp34,"tmp34");
										HX_STACK_LINE(186)
										int r = tmp34;		HX_STACK_VAR(r,"r");
										HX_STACK_LINE(186)
										int tmp35 = ::__hxcpp_memory_get_byte(sourceData->buffer->b,(sourceData->byteOffset + ((sourcePosition + (int)2))));		HX_STACK_VAR(tmp35,"tmp35");
										HX_STACK_LINE(186)
										Dynamic tmp36 = (int(tmp35) & int((int)255));		HX_STACK_VAR(tmp36,"tmp36");
										HX_STACK_LINE(186)
										int g = tmp36;		HX_STACK_VAR(g,"g");
										HX_STACK_LINE(186)
										int tmp37 = ::__hxcpp_memory_get_byte(sourceData->buffer->b,(sourceData->byteOffset + ((sourcePosition + (int)3))));		HX_STACK_VAR(tmp37,"tmp37");
										HX_STACK_LINE(186)
										Dynamic tmp38 = (int(tmp37) & int((int)255));		HX_STACK_VAR(tmp38,"tmp38");
										HX_STACK_LINE(186)
										int b = tmp38;		HX_STACK_VAR(b,"b");
										HX_STACK_LINE(186)
										int tmp39 = ::__hxcpp_memory_get_byte(sourceData->buffer->b,(sourceData->byteOffset + sourcePosition));		HX_STACK_VAR(tmp39,"tmp39");
										HX_STACK_LINE(186)
										Dynamic tmp40 = (int(tmp39) & int((int)255));		HX_STACK_VAR(tmp40,"tmp40");
										HX_STACK_LINE(186)
										int a = tmp40;		HX_STACK_VAR(a,"a");
										HX_STACK_LINE(186)
										int tmp41 = (int(r) & int((int)255));		HX_STACK_VAR(tmp41,"tmp41");
										HX_STACK_LINE(186)
										int tmp42 = (int(tmp41) << int((int)24));		HX_STACK_VAR(tmp42,"tmp42");
										HX_STACK_LINE(186)
										int tmp43 = (int(g) & int((int)255));		HX_STACK_VAR(tmp43,"tmp43");
										HX_STACK_LINE(186)
										int tmp44 = (int(tmp43) << int((int)16));		HX_STACK_VAR(tmp44,"tmp44");
										HX_STACK_LINE(186)
										int tmp45 = (int(tmp42) | int(tmp44));		HX_STACK_VAR(tmp45,"tmp45");
										HX_STACK_LINE(186)
										int tmp46 = (int(b) & int((int)255));		HX_STACK_VAR(tmp46,"tmp46");
										HX_STACK_LINE(186)
										int tmp47 = (int(tmp46) << int((int)8));		HX_STACK_VAR(tmp47,"tmp47");
										HX_STACK_LINE(186)
										int tmp48 = (int(tmp45) | int(tmp47));		HX_STACK_VAR(tmp48,"tmp48");
										HX_STACK_LINE(186)
										int tmp49 = (int(a) & int((int)255));		HX_STACK_VAR(tmp49,"tmp49");
										HX_STACK_LINE(186)
										int tmp50 = (int(tmp48) | int(tmp49));		HX_STACK_VAR(tmp50,"tmp50");
										HX_STACK_LINE(186)
										sourcePixel = tmp50;
									}
									;break;
								}
								HX_STACK_LINE(186)
								bool tmp33 = sourcePremultiplied;		HX_STACK_VAR(tmp33,"tmp33");
								HX_STACK_LINE(186)
								if ((tmp33)){
									HX_STACK_LINE(186)
									int tmp34 = (int(sourcePixel) & int((int)255));		HX_STACK_VAR(tmp34,"tmp34");
									HX_STACK_LINE(186)
									bool tmp35 = (tmp34 != (int)0);		HX_STACK_VAR(tmp35,"tmp35");
									HX_STACK_LINE(186)
									bool tmp36;		HX_STACK_VAR(tmp36,"tmp36");
									HX_STACK_LINE(186)
									if ((tmp35)){
										HX_STACK_LINE(186)
										int tmp37 = (int(sourcePixel) & int((int)255));		HX_STACK_VAR(tmp37,"tmp37");
										HX_STACK_LINE(186)
										int tmp38 = tmp37;		HX_STACK_VAR(tmp38,"tmp38");
										HX_STACK_LINE(186)
										tmp36 = (tmp38 != (int)255);
									}
									else{
										HX_STACK_LINE(186)
										tmp36 = false;
									}
									HX_STACK_LINE(186)
									if ((tmp36)){
										HX_STACK_LINE(186)
										int tmp37 = (int(sourcePixel) & int((int)255));		HX_STACK_VAR(tmp37,"tmp37");
										HX_STACK_LINE(186)
										Float tmp38 = (Float(((Float)255.0)) / Float(tmp37));		HX_STACK_VAR(tmp38,"tmp38");
										HX_STACK_LINE(186)
										::lime::math::color::_RGBA::RGBA_Impl__obj::unmult = tmp38;
										HX_STACK_LINE(186)
										{
											HX_STACK_LINE(186)
											Dynamic tmp39;		HX_STACK_VAR(tmp39,"tmp39");
											HX_STACK_LINE(186)
											{
												HX_STACK_LINE(186)
												::lime::utils::ArrayBufferView tmp40 = ::lime::math::color::_RGBA::RGBA_Impl__obj::__clamp;		HX_STACK_VAR(tmp40,"tmp40");
												HX_STACK_LINE(186)
												::lime::utils::ArrayBufferView this1 = tmp40;		HX_STACK_VAR(this1,"this1");
												HX_STACK_LINE(186)
												int tmp41 = (int(sourcePixel) >> int((int)24));		HX_STACK_VAR(tmp41,"tmp41");
												HX_STACK_LINE(186)
												int tmp42 = (int(tmp41) & int((int)255));		HX_STACK_VAR(tmp42,"tmp42");
												HX_STACK_LINE(186)
												Float tmp43 = ::lime::math::color::_RGBA::RGBA_Impl__obj::unmult;		HX_STACK_VAR(tmp43,"tmp43");
												HX_STACK_LINE(186)
												Float tmp44 = (tmp42 * tmp43);		HX_STACK_VAR(tmp44,"tmp44");
												HX_STACK_LINE(186)
												int tmp45 = ::Math_obj::round(tmp44);		HX_STACK_VAR(tmp45,"tmp45");
												HX_STACK_LINE(186)
												int idx = tmp45;		HX_STACK_VAR(idx,"idx");
												HX_STACK_LINE(186)
												int tmp46 = ::__hxcpp_memory_get_byte(this1->buffer->b,(this1->byteOffset + idx));		HX_STACK_VAR(tmp46,"tmp46");
												HX_STACK_LINE(186)
												tmp39 = (int(tmp46) & int((int)255));
											}
											HX_STACK_LINE(186)
											int r = tmp39;		HX_STACK_VAR(r,"r");
											HX_STACK_LINE(186)
											Dynamic tmp40;		HX_STACK_VAR(tmp40,"tmp40");
											HX_STACK_LINE(186)
											{
												HX_STACK_LINE(186)
												::lime::utils::ArrayBufferView tmp41 = ::lime::math::color::_RGBA::RGBA_Impl__obj::__clamp;		HX_STACK_VAR(tmp41,"tmp41");
												HX_STACK_LINE(186)
												::lime::utils::ArrayBufferView this1 = tmp41;		HX_STACK_VAR(this1,"this1");
												HX_STACK_LINE(186)
												int tmp42 = (int(sourcePixel) >> int((int)16));		HX_STACK_VAR(tmp42,"tmp42");
												HX_STACK_LINE(186)
												int tmp43 = (int(tmp42) & int((int)255));		HX_STACK_VAR(tmp43,"tmp43");
												HX_STACK_LINE(186)
												Float tmp44 = ::lime::math::color::_RGBA::RGBA_Impl__obj::unmult;		HX_STACK_VAR(tmp44,"tmp44");
												HX_STACK_LINE(186)
												Float tmp45 = (tmp43 * tmp44);		HX_STACK_VAR(tmp45,"tmp45");
												HX_STACK_LINE(186)
												int tmp46 = ::Math_obj::round(tmp45);		HX_STACK_VAR(tmp46,"tmp46");
												HX_STACK_LINE(186)
												int idx = tmp46;		HX_STACK_VAR(idx,"idx");
												HX_STACK_LINE(186)
												int tmp47 = ::__hxcpp_memory_get_byte(this1->buffer->b,(this1->byteOffset + idx));		HX_STACK_VAR(tmp47,"tmp47");
												HX_STACK_LINE(186)
												tmp40 = (int(tmp47) & int((int)255));
											}
											HX_STACK_LINE(186)
											int g = tmp40;		HX_STACK_VAR(g,"g");
											HX_STACK_LINE(186)
											Dynamic tmp41;		HX_STACK_VAR(tmp41,"tmp41");
											HX_STACK_LINE(186)
											{
												HX_STACK_LINE(186)
												::lime::utils::ArrayBufferView tmp42 = ::lime::math::color::_RGBA::RGBA_Impl__obj::__clamp;		HX_STACK_VAR(tmp42,"tmp42");
												HX_STACK_LINE(186)
												::lime::utils::ArrayBufferView this1 = tmp42;		HX_STACK_VAR(this1,"this1");
												HX_STACK_LINE(186)
												int tmp43 = (int(sourcePixel) >> int((int)8));		HX_STACK_VAR(tmp43,"tmp43");
												HX_STACK_LINE(186)
												int tmp44 = (int(tmp43) & int((int)255));		HX_STACK_VAR(tmp44,"tmp44");
												HX_STACK_LINE(186)
												Float tmp45 = ::lime::math::color::_RGBA::RGBA_Impl__obj::unmult;		HX_STACK_VAR(tmp45,"tmp45");
												HX_STACK_LINE(186)
												Float tmp46 = (tmp44 * tmp45);		HX_STACK_VAR(tmp46,"tmp46");
												HX_STACK_LINE(186)
												int tmp47 = ::Math_obj::round(tmp46);		HX_STACK_VAR(tmp47,"tmp47");
												HX_STACK_LINE(186)
												int idx = tmp47;		HX_STACK_VAR(idx,"idx");
												HX_STACK_LINE(186)
												int tmp48 = ::__hxcpp_memory_get_byte(this1->buffer->b,(this1->byteOffset + idx));		HX_STACK_VAR(tmp48,"tmp48");
												HX_STACK_LINE(186)
												tmp41 = (int(tmp48) & int((int)255));
											}
											HX_STACK_LINE(186)
											int b = tmp41;		HX_STACK_VAR(b,"b");
											HX_STACK_LINE(186)
											int tmp42 = (int(r) & int((int)255));		HX_STACK_VAR(tmp42,"tmp42");
											HX_STACK_LINE(186)
											int tmp43 = (int(tmp42) << int((int)24));		HX_STACK_VAR(tmp43,"tmp43");
											HX_STACK_LINE(186)
											int tmp44 = (int(g) & int((int)255));		HX_STACK_VAR(tmp44,"tmp44");
											HX_STACK_LINE(186)
											int tmp45 = (int(tmp44) << int((int)16));		HX_STACK_VAR(tmp45,"tmp45");
											HX_STACK_LINE(186)
											int tmp46 = (int(tmp43) | int(tmp45));		HX_STACK_VAR(tmp46,"tmp46");
											HX_STACK_LINE(186)
											int tmp47 = (int(b) & int((int)255));		HX_STACK_VAR(tmp47,"tmp47");
											HX_STACK_LINE(186)
											int tmp48 = (int(tmp47) << int((int)8));		HX_STACK_VAR(tmp48,"tmp48");
											HX_STACK_LINE(186)
											int tmp49 = (int(tmp46) | int(tmp48));		HX_STACK_VAR(tmp49,"tmp49");
											HX_STACK_LINE(186)
											int tmp50 = (int(sourcePixel) & int((int)255));		HX_STACK_VAR(tmp50,"tmp50");
											HX_STACK_LINE(186)
											int tmp51 = (int(tmp50) & int((int)255));		HX_STACK_VAR(tmp51,"tmp51");
											HX_STACK_LINE(186)
											int tmp52 = (int(tmp49) | int(tmp51));		HX_STACK_VAR(tmp52,"tmp52");
											HX_STACK_LINE(186)
											sourcePixel = tmp52;
										}
									}
								}
							}
							HX_STACK_LINE(187)
							{
								HX_STACK_LINE(187)
								bool tmp32 = destPremultiplied;		HX_STACK_VAR(tmp32,"tmp32");
								HX_STACK_LINE(187)
								if ((tmp32)){
									HX_STACK_LINE(187)
									int tmp33 = (int(sourcePixel) & int((int)255));		HX_STACK_VAR(tmp33,"tmp33");
									HX_STACK_LINE(187)
									bool tmp34 = (tmp33 == (int)0);		HX_STACK_VAR(tmp34,"tmp34");
									HX_STACK_LINE(187)
									if ((tmp34)){
										HX_STACK_LINE(187)
										bool tmp35 = (sourcePixel != (int)0);		HX_STACK_VAR(tmp35,"tmp35");
										HX_STACK_LINE(187)
										if ((tmp35)){
											HX_STACK_LINE(187)
											sourcePixel = (int)0;
										}
									}
									else{
										HX_STACK_LINE(187)
										int tmp35 = (int(sourcePixel) & int((int)255));		HX_STACK_VAR(tmp35,"tmp35");
										HX_STACK_LINE(187)
										bool tmp36 = (tmp35 != (int)255);		HX_STACK_VAR(tmp36,"tmp36");
										HX_STACK_LINE(187)
										if ((tmp36)){
											HX_STACK_LINE(187)
											Dynamic tmp37;		HX_STACK_VAR(tmp37,"tmp37");
											HX_STACK_LINE(187)
											{
												HX_STACK_LINE(187)
												::lime::utils::ArrayBufferView tmp38 = ::lime::math::color::_RGBA::RGBA_Impl__obj::__alpha16;		HX_STACK_VAR(tmp38,"tmp38");
												HX_STACK_LINE(187)
												::lime::utils::ArrayBufferView this1 = tmp38;		HX_STACK_VAR(this1,"this1");
												HX_STACK_LINE(187)
												{
													HX_STACK_LINE(187)
													bool littleEndian = true;		HX_STACK_VAR(littleEndian,"littleEndian");
													HX_STACK_LINE(187)
													tmp37 = ::__hxcpp_memory_get_ui32(this1->buffer->b,(this1->byteOffset + (((int(sourcePixel) & int((int)255))) * (int)4)));
												}
											}
											HX_STACK_LINE(187)
											::lime::math::color::_RGBA::RGBA_Impl__obj::a16 = tmp37;
											HX_STACK_LINE(187)
											{
												HX_STACK_LINE(187)
												int tmp38 = (int(sourcePixel) >> int((int)24));		HX_STACK_VAR(tmp38,"tmp38");
												HX_STACK_LINE(187)
												int tmp39 = (int(tmp38) & int((int)255));		HX_STACK_VAR(tmp39,"tmp39");
												HX_STACK_LINE(187)
												int tmp40 = ::lime::math::color::_RGBA::RGBA_Impl__obj::a16;		HX_STACK_VAR(tmp40,"tmp40");
												HX_STACK_LINE(187)
												int tmp41 = (tmp39 * tmp40);		HX_STACK_VAR(tmp41,"tmp41");
												HX_STACK_LINE(187)
												int tmp42 = (int(tmp41) >> int((int)16));		HX_STACK_VAR(tmp42,"tmp42");
												HX_STACK_LINE(187)
												int tmp43 = (int(tmp42) & int((int)255));		HX_STACK_VAR(tmp43,"tmp43");
												HX_STACK_LINE(187)
												int tmp44 = (int(tmp43) << int((int)24));		HX_STACK_VAR(tmp44,"tmp44");
												HX_STACK_LINE(187)
												int tmp45 = (int(sourcePixel) >> int((int)16));		HX_STACK_VAR(tmp45,"tmp45");
												HX_STACK_LINE(187)
												int tmp46 = (int(tmp45) & int((int)255));		HX_STACK_VAR(tmp46,"tmp46");
												HX_STACK_LINE(187)
												int tmp47 = ::lime::math::color::_RGBA::RGBA_Impl__obj::a16;		HX_STACK_VAR(tmp47,"tmp47");
												HX_STACK_LINE(187)
												int tmp48 = (tmp46 * tmp47);		HX_STACK_VAR(tmp48,"tmp48");
												HX_STACK_LINE(187)
												int tmp49 = (int(tmp48) >> int((int)16));		HX_STACK_VAR(tmp49,"tmp49");
												HX_STACK_LINE(187)
												int tmp50 = (int(tmp49) & int((int)255));		HX_STACK_VAR(tmp50,"tmp50");
												HX_STACK_LINE(187)
												int tmp51 = (int(tmp50) << int((int)16));		HX_STACK_VAR(tmp51,"tmp51");
												HX_STACK_LINE(187)
												int tmp52 = (int(tmp44) | int(tmp51));		HX_STACK_VAR(tmp52,"tmp52");
												HX_STACK_LINE(187)
												int tmp53 = (int(sourcePixel) >> int((int)8));		HX_STACK_VAR(tmp53,"tmp53");
												HX_STACK_LINE(187)
												int tmp54 = (int(tmp53) & int((int)255));		HX_STACK_VAR(tmp54,"tmp54");
												HX_STACK_LINE(187)
												int tmp55 = ::lime::math::color::_RGBA::RGBA_Impl__obj::a16;		HX_STACK_VAR(tmp55,"tmp55");
												HX_STACK_LINE(187)
												int tmp56 = (tmp54 * tmp55);		HX_STACK_VAR(tmp56,"tmp56");
												HX_STACK_LINE(187)
												int tmp57 = (int(tmp56) >> int((int)16));		HX_STACK_VAR(tmp57,"tmp57");
												HX_STACK_LINE(187)
												int tmp58 = (int(tmp57) & int((int)255));		HX_STACK_VAR(tmp58,"tmp58");
												HX_STACK_LINE(187)
												int tmp59 = (int(tmp58) << int((int)8));		HX_STACK_VAR(tmp59,"tmp59");
												HX_STACK_LINE(187)
												int tmp60 = (int(tmp52) | int(tmp59));		HX_STACK_VAR(tmp60,"tmp60");
												HX_STACK_LINE(187)
												int tmp61 = (int(sourcePixel) & int((int)255));		HX_STACK_VAR(tmp61,"tmp61");
												HX_STACK_LINE(187)
												int tmp62 = (int(tmp61) & int((int)255));		HX_STACK_VAR(tmp62,"tmp62");
												HX_STACK_LINE(187)
												int tmp63 = (int(tmp60) | int(tmp62));		HX_STACK_VAR(tmp63,"tmp63");
												HX_STACK_LINE(187)
												sourcePixel = tmp63;
											}
										}
									}
								}
								HX_STACK_LINE(187)
								int tmp33 = destFormat;		HX_STACK_VAR(tmp33,"tmp33");
								HX_STACK_LINE(187)
								switch( (int)(tmp33)){
									case (int)2: {
										HX_STACK_LINE(187)
										{
											HX_STACK_LINE(187)
											int tmp34 = (int(sourcePixel) >> int((int)8));		HX_STACK_VAR(tmp34,"tmp34");
											HX_STACK_LINE(187)
											int tmp35 = (int(tmp34) & int((int)255));		HX_STACK_VAR(tmp35,"tmp35");
											HX_STACK_LINE(187)
											int val = tmp35;		HX_STACK_VAR(val,"val");
											HX_STACK_LINE(187)
											{
												HX_STACK_LINE(187)
												::__hxcpp_memory_set_byte(destData->buffer->b,(destData->byteOffset + destPosition),val);
												HX_STACK_LINE(187)
												val;
											}
										}
										HX_STACK_LINE(187)
										{
											HX_STACK_LINE(187)
											int tmp34 = (int(sourcePixel) >> int((int)16));		HX_STACK_VAR(tmp34,"tmp34");
											HX_STACK_LINE(187)
											int tmp35 = (int(tmp34) & int((int)255));		HX_STACK_VAR(tmp35,"tmp35");
											HX_STACK_LINE(187)
											int val = tmp35;		HX_STACK_VAR(val,"val");
											HX_STACK_LINE(187)
											{
												HX_STACK_LINE(187)
												::__hxcpp_memory_set_byte(destData->buffer->b,(destData->byteOffset + ((destPosition + (int)1))),val);
												HX_STACK_LINE(187)
												val;
											}
										}
										HX_STACK_LINE(187)
										{
											HX_STACK_LINE(187)
											int tmp34 = (int(sourcePixel) >> int((int)24));		HX_STACK_VAR(tmp34,"tmp34");
											HX_STACK_LINE(187)
											int tmp35 = (int(tmp34) & int((int)255));		HX_STACK_VAR(tmp35,"tmp35");
											HX_STACK_LINE(187)
											int val = tmp35;		HX_STACK_VAR(val,"val");
											HX_STACK_LINE(187)
											{
												HX_STACK_LINE(187)
												::__hxcpp_memory_set_byte(destData->buffer->b,(destData->byteOffset + ((destPosition + (int)2))),val);
												HX_STACK_LINE(187)
												val;
											}
										}
										HX_STACK_LINE(187)
										{
											HX_STACK_LINE(187)
											int tmp34 = (int(sourcePixel) & int((int)255));		HX_STACK_VAR(tmp34,"tmp34");
											HX_STACK_LINE(187)
											int val = tmp34;		HX_STACK_VAR(val,"val");
											HX_STACK_LINE(187)
											{
												HX_STACK_LINE(187)
												::__hxcpp_memory_set_byte(destData->buffer->b,(destData->byteOffset + ((destPosition + (int)3))),val);
												HX_STACK_LINE(187)
												val;
											}
										}
									}
									;break;
									case (int)0: {
										HX_STACK_LINE(187)
										{
											HX_STACK_LINE(187)
											int tmp34 = (int(sourcePixel) >> int((int)24));		HX_STACK_VAR(tmp34,"tmp34");
											HX_STACK_LINE(187)
											int tmp35 = (int(tmp34) & int((int)255));		HX_STACK_VAR(tmp35,"tmp35");
											HX_STACK_LINE(187)
											int val = tmp35;		HX_STACK_VAR(val,"val");
											HX_STACK_LINE(187)
											{
												HX_STACK_LINE(187)
												::__hxcpp_memory_set_byte(destData->buffer->b,(destData->byteOffset + destPosition),val);
												HX_STACK_LINE(187)
												val;
											}
										}
										HX_STACK_LINE(187)
										{
											HX_STACK_LINE(187)
											int tmp34 = (int(sourcePixel) >> int((int)16));		HX_STACK_VAR(tmp34,"tmp34");
											HX_STACK_LINE(187)
											int tmp35 = (int(tmp34) & int((int)255));		HX_STACK_VAR(tmp35,"tmp35");
											HX_STACK_LINE(187)
											int val = tmp35;		HX_STACK_VAR(val,"val");
											HX_STACK_LINE(187)
											{
												HX_STACK_LINE(187)
												::__hxcpp_memory_set_byte(destData->buffer->b,(destData->byteOffset + ((destPosition + (int)1))),val);
												HX_STACK_LINE(187)
												val;
											}
										}
										HX_STACK_LINE(187)
										{
											HX_STACK_LINE(187)
											int tmp34 = (int(sourcePixel) >> int((int)8));		HX_STACK_VAR(tmp34,"tmp34");
											HX_STACK_LINE(187)
											int tmp35 = (int(tmp34) & int((int)255));		HX_STACK_VAR(tmp35,"tmp35");
											HX_STACK_LINE(187)
											int val = tmp35;		HX_STACK_VAR(val,"val");
											HX_STACK_LINE(187)
											{
												HX_STACK_LINE(187)
												::__hxcpp_memory_set_byte(destData->buffer->b,(destData->byteOffset + ((destPosition + (int)2))),val);
												HX_STACK_LINE(187)
												val;
											}
										}
										HX_STACK_LINE(187)
										{
											HX_STACK_LINE(187)
											int tmp34 = (int(sourcePixel) & int((int)255));		HX_STACK_VAR(tmp34,"tmp34");
											HX_STACK_LINE(187)
											int val = tmp34;		HX_STACK_VAR(val,"val");
											HX_STACK_LINE(187)
											{
												HX_STACK_LINE(187)
												::__hxcpp_memory_set_byte(destData->buffer->b,(destData->byteOffset + ((destPosition + (int)3))),val);
												HX_STACK_LINE(187)
												val;
											}
										}
									}
									;break;
									case (int)1: {
										HX_STACK_LINE(187)
										{
											HX_STACK_LINE(187)
											int tmp34 = (int(sourcePixel) & int((int)255));		HX_STACK_VAR(tmp34,"tmp34");
											HX_STACK_LINE(187)
											int val = tmp34;		HX_STACK_VAR(val,"val");
											HX_STACK_LINE(187)
											{
												HX_STACK_LINE(187)
												::__hxcpp_memory_set_byte(destData->buffer->b,(destData->byteOffset + destPosition),val);
												HX_STACK_LINE(187)
												val;
											}
										}
										HX_STACK_LINE(187)
										{
											HX_STACK_LINE(187)
											int tmp34 = (int(sourcePixel) >> int((int)24));		HX_STACK_VAR(tmp34,"tmp34");
											HX_STACK_LINE(187)
											int tmp35 = (int(tmp34) & int((int)255));		HX_STACK_VAR(tmp35,"tmp35");
											HX_STACK_LINE(187)
											int val = tmp35;		HX_STACK_VAR(val,"val");
											HX_STACK_LINE(187)
											{
												HX_STACK_LINE(187)
												::__hxcpp_memory_set_byte(destData->buffer->b,(destData->byteOffset + ((destPosition + (int)1))),val);
												HX_STACK_LINE(187)
												val;
											}
										}
										HX_STACK_LINE(187)
										{
											HX_STACK_LINE(187)
											int tmp34 = (int(sourcePixel) >> int((int)16));		HX_STACK_VAR(tmp34,"tmp34");
											HX_STACK_LINE(187)
											int tmp35 = (int(tmp34) & int((int)255));		HX_STACK_VAR(tmp35,"tmp35");
											HX_STACK_LINE(187)
											int val = tmp35;		HX_STACK_VAR(val,"val");
											HX_STACK_LINE(187)
											{
												HX_STACK_LINE(187)
												::__hxcpp_memory_set_byte(destData->buffer->b,(destData->byteOffset + ((destPosition + (int)2))),val);
												HX_STACK_LINE(187)
												val;
											}
										}
										HX_STACK_LINE(187)
										{
											HX_STACK_LINE(187)
											int tmp34 = (int(sourcePixel) >> int((int)8));		HX_STACK_VAR(tmp34,"tmp34");
											HX_STACK_LINE(187)
											int tmp35 = (int(tmp34) & int((int)255));		HX_STACK_VAR(tmp35,"tmp35");
											HX_STACK_LINE(187)
											int val = tmp35;		HX_STACK_VAR(val,"val");
											HX_STACK_LINE(187)
											{
												HX_STACK_LINE(187)
												::__hxcpp_memory_set_byte(destData->buffer->b,(destData->byteOffset + ((destPosition + (int)3))),val);
												HX_STACK_LINE(187)
												val;
											}
										}
									}
									;break;
								}
							}
							HX_STACK_LINE(189)
							hx::AddEq(sourcePosition,(int)4);
							HX_STACK_LINE(190)
							hx::AddEq(destPosition,(int)4);
						}
					}
				}
			}
			else{
				HX_STACK_LINE(198)
				Float sourceAlpha;		HX_STACK_VAR(sourceAlpha,"sourceAlpha");
				HX_STACK_LINE(198)
				Float destAlpha;		HX_STACK_VAR(destAlpha,"destAlpha");
				HX_STACK_LINE(198)
				Float oneMinusSourceAlpha;		HX_STACK_VAR(oneMinusSourceAlpha,"oneMinusSourceAlpha");
				HX_STACK_LINE(198)
				Float blendAlpha;		HX_STACK_VAR(blendAlpha,"blendAlpha");
				HX_STACK_LINE(199)
				int destPixel;		HX_STACK_VAR(destPixel,"destPixel");
				HX_STACK_LINE(201)
				bool tmp20 = (alphaImage == null());		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(201)
				if ((tmp20)){
					HX_STACK_LINE(203)
					int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
					HX_STACK_LINE(203)
					int _g = destView->height;		HX_STACK_VAR(_g,"_g");
					HX_STACK_LINE(203)
					while((true)){
						HX_STACK_LINE(203)
						bool tmp21 = (_g1 < _g);		HX_STACK_VAR(tmp21,"tmp21");
						HX_STACK_LINE(203)
						bool tmp22 = !(tmp21);		HX_STACK_VAR(tmp22,"tmp22");
						HX_STACK_LINE(203)
						if ((tmp22)){
							HX_STACK_LINE(203)
							break;
						}
						HX_STACK_LINE(203)
						int tmp23 = (_g1)++;		HX_STACK_VAR(tmp23,"tmp23");
						HX_STACK_LINE(203)
						int y = tmp23;		HX_STACK_VAR(y,"y");
						HX_STACK_LINE(205)
						int tmp24 = sourceView->offset;		HX_STACK_VAR(tmp24,"tmp24");
						HX_STACK_LINE(205)
						int tmp25 = (sourceView->stride * y);		HX_STACK_VAR(tmp25,"tmp25");
						HX_STACK_LINE(205)
						int tmp26 = (tmp24 + tmp25);		HX_STACK_VAR(tmp26,"tmp26");
						HX_STACK_LINE(205)
						sourcePosition = tmp26;
						HX_STACK_LINE(206)
						int tmp27 = destView->offset;		HX_STACK_VAR(tmp27,"tmp27");
						HX_STACK_LINE(206)
						int tmp28 = (destView->stride * y);		HX_STACK_VAR(tmp28,"tmp28");
						HX_STACK_LINE(206)
						int tmp29 = (tmp27 + tmp28);		HX_STACK_VAR(tmp29,"tmp29");
						HX_STACK_LINE(206)
						destPosition = tmp29;
						HX_STACK_LINE(208)
						{
							HX_STACK_LINE(208)
							int _g3 = (int)0;		HX_STACK_VAR(_g3,"_g3");
							HX_STACK_LINE(208)
							int _g2 = destView->width;		HX_STACK_VAR(_g2,"_g2");
							HX_STACK_LINE(208)
							while((true)){
								HX_STACK_LINE(208)
								bool tmp30 = (_g3 < _g2);		HX_STACK_VAR(tmp30,"tmp30");
								HX_STACK_LINE(208)
								bool tmp31 = !(tmp30);		HX_STACK_VAR(tmp31,"tmp31");
								HX_STACK_LINE(208)
								if ((tmp31)){
									HX_STACK_LINE(208)
									break;
								}
								HX_STACK_LINE(208)
								int tmp32 = (_g3)++;		HX_STACK_VAR(tmp32,"tmp32");
								HX_STACK_LINE(208)
								int x = tmp32;		HX_STACK_VAR(x,"x");
								HX_STACK_LINE(210)
								{
									HX_STACK_LINE(210)
									int tmp33 = sourceFormat;		HX_STACK_VAR(tmp33,"tmp33");
									HX_STACK_LINE(210)
									switch( (int)(tmp33)){
										case (int)2: {
											HX_STACK_LINE(210)
											int tmp34 = ::__hxcpp_memory_get_byte(sourceData->buffer->b,(sourceData->byteOffset + ((sourcePosition + (int)2))));		HX_STACK_VAR(tmp34,"tmp34");
											HX_STACK_LINE(210)
											Dynamic tmp35 = (int(tmp34) & int((int)255));		HX_STACK_VAR(tmp35,"tmp35");
											HX_STACK_LINE(210)
											int r = tmp35;		HX_STACK_VAR(r,"r");
											HX_STACK_LINE(210)
											int tmp36 = ::__hxcpp_memory_get_byte(sourceData->buffer->b,(sourceData->byteOffset + ((sourcePosition + (int)1))));		HX_STACK_VAR(tmp36,"tmp36");
											HX_STACK_LINE(210)
											Dynamic tmp37 = (int(tmp36) & int((int)255));		HX_STACK_VAR(tmp37,"tmp37");
											HX_STACK_LINE(210)
											int g = tmp37;		HX_STACK_VAR(g,"g");
											HX_STACK_LINE(210)
											int tmp38 = ::__hxcpp_memory_get_byte(sourceData->buffer->b,(sourceData->byteOffset + sourcePosition));		HX_STACK_VAR(tmp38,"tmp38");
											HX_STACK_LINE(210)
											Dynamic tmp39 = (int(tmp38) & int((int)255));		HX_STACK_VAR(tmp39,"tmp39");
											HX_STACK_LINE(210)
											int b = tmp39;		HX_STACK_VAR(b,"b");
											HX_STACK_LINE(210)
											int tmp40 = ::__hxcpp_memory_get_byte(sourceData->buffer->b,(sourceData->byteOffset + ((sourcePosition + (int)3))));		HX_STACK_VAR(tmp40,"tmp40");
											HX_STACK_LINE(210)
											Dynamic tmp41 = (int(tmp40) & int((int)255));		HX_STACK_VAR(tmp41,"tmp41");
											HX_STACK_LINE(210)
											int a = tmp41;		HX_STACK_VAR(a,"a");
											HX_STACK_LINE(210)
											int tmp42 = (int(r) & int((int)255));		HX_STACK_VAR(tmp42,"tmp42");
											HX_STACK_LINE(210)
											int tmp43 = (int(tmp42) << int((int)24));		HX_STACK_VAR(tmp43,"tmp43");
											HX_STACK_LINE(210)
											int tmp44 = (int(g) & int((int)255));		HX_STACK_VAR(tmp44,"tmp44");
											HX_STACK_LINE(210)
											int tmp45 = (int(tmp44) << int((int)16));		HX_STACK_VAR(tmp45,"tmp45");
											HX_STACK_LINE(210)
											int tmp46 = (int(tmp43) | int(tmp45));		HX_STACK_VAR(tmp46,"tmp46");
											HX_STACK_LINE(210)
											int tmp47 = (int(b) & int((int)255));		HX_STACK_VAR(tmp47,"tmp47");
											HX_STACK_LINE(210)
											int tmp48 = (int(tmp47) << int((int)8));		HX_STACK_VAR(tmp48,"tmp48");
											HX_STACK_LINE(210)
											int tmp49 = (int(tmp46) | int(tmp48));		HX_STACK_VAR(tmp49,"tmp49");
											HX_STACK_LINE(210)
											int tmp50 = (int(a) & int((int)255));		HX_STACK_VAR(tmp50,"tmp50");
											HX_STACK_LINE(210)
											int tmp51 = (int(tmp49) | int(tmp50));		HX_STACK_VAR(tmp51,"tmp51");
											HX_STACK_LINE(210)
											sourcePixel = tmp51;
										}
										;break;
										case (int)0: {
											HX_STACK_LINE(210)
											int tmp34 = ::__hxcpp_memory_get_byte(sourceData->buffer->b,(sourceData->byteOffset + sourcePosition));		HX_STACK_VAR(tmp34,"tmp34");
											HX_STACK_LINE(210)
											Dynamic tmp35 = (int(tmp34) & int((int)255));		HX_STACK_VAR(tmp35,"tmp35");
											HX_STACK_LINE(210)
											int r = tmp35;		HX_STACK_VAR(r,"r");
											HX_STACK_LINE(210)
											int tmp36 = ::__hxcpp_memory_get_byte(sourceData->buffer->b,(sourceData->byteOffset + ((sourcePosition + (int)1))));		HX_STACK_VAR(tmp36,"tmp36");
											HX_STACK_LINE(210)
											Dynamic tmp37 = (int(tmp36) & int((int)255));		HX_STACK_VAR(tmp37,"tmp37");
											HX_STACK_LINE(210)
											int g = tmp37;		HX_STACK_VAR(g,"g");
											HX_STACK_LINE(210)
											int tmp38 = ::__hxcpp_memory_get_byte(sourceData->buffer->b,(sourceData->byteOffset + ((sourcePosition + (int)2))));		HX_STACK_VAR(tmp38,"tmp38");
											HX_STACK_LINE(210)
											Dynamic tmp39 = (int(tmp38) & int((int)255));		HX_STACK_VAR(tmp39,"tmp39");
											HX_STACK_LINE(210)
											int b = tmp39;		HX_STACK_VAR(b,"b");
											HX_STACK_LINE(210)
											int tmp40 = ::__hxcpp_memory_get_byte(sourceData->buffer->b,(sourceData->byteOffset + ((sourcePosition + (int)3))));		HX_STACK_VAR(tmp40,"tmp40");
											HX_STACK_LINE(210)
											Dynamic tmp41 = (int(tmp40) & int((int)255));		HX_STACK_VAR(tmp41,"tmp41");
											HX_STACK_LINE(210)
											int a = tmp41;		HX_STACK_VAR(a,"a");
											HX_STACK_LINE(210)
											int tmp42 = (int(r) & int((int)255));		HX_STACK_VAR(tmp42,"tmp42");
											HX_STACK_LINE(210)
											int tmp43 = (int(tmp42) << int((int)24));		HX_STACK_VAR(tmp43,"tmp43");
											HX_STACK_LINE(210)
											int tmp44 = (int(g) & int((int)255));		HX_STACK_VAR(tmp44,"tmp44");
											HX_STACK_LINE(210)
											int tmp45 = (int(tmp44) << int((int)16));		HX_STACK_VAR(tmp45,"tmp45");
											HX_STACK_LINE(210)
											int tmp46 = (int(tmp43) | int(tmp45));		HX_STACK_VAR(tmp46,"tmp46");
											HX_STACK_LINE(210)
											int tmp47 = (int(b) & int((int)255));		HX_STACK_VAR(tmp47,"tmp47");
											HX_STACK_LINE(210)
											int tmp48 = (int(tmp47) << int((int)8));		HX_STACK_VAR(tmp48,"tmp48");
											HX_STACK_LINE(210)
											int tmp49 = (int(tmp46) | int(tmp48));		HX_STACK_VAR(tmp49,"tmp49");
											HX_STACK_LINE(210)
											int tmp50 = (int(a) & int((int)255));		HX_STACK_VAR(tmp50,"tmp50");
											HX_STACK_LINE(210)
											int tmp51 = (int(tmp49) | int(tmp50));		HX_STACK_VAR(tmp51,"tmp51");
											HX_STACK_LINE(210)
											sourcePixel = tmp51;
										}
										;break;
										case (int)1: {
											HX_STACK_LINE(210)
											int tmp34 = ::__hxcpp_memory_get_byte(sourceData->buffer->b,(sourceData->byteOffset + ((sourcePosition + (int)1))));		HX_STACK_VAR(tmp34,"tmp34");
											HX_STACK_LINE(210)
											Dynamic tmp35 = (int(tmp34) & int((int)255));		HX_STACK_VAR(tmp35,"tmp35");
											HX_STACK_LINE(210)
											int r = tmp35;		HX_STACK_VAR(r,"r");
											HX_STACK_LINE(210)
											int tmp36 = ::__hxcpp_memory_get_byte(sourceData->buffer->b,(sourceData->byteOffset + ((sourcePosition + (int)2))));		HX_STACK_VAR(tmp36,"tmp36");
											HX_STACK_LINE(210)
											Dynamic tmp37 = (int(tmp36) & int((int)255));		HX_STACK_VAR(tmp37,"tmp37");
											HX_STACK_LINE(210)
											int g = tmp37;		HX_STACK_VAR(g,"g");
											HX_STACK_LINE(210)
											int tmp38 = ::__hxcpp_memory_get_byte(sourceData->buffer->b,(sourceData->byteOffset + ((sourcePosition + (int)3))));		HX_STACK_VAR(tmp38,"tmp38");
											HX_STACK_LINE(210)
											Dynamic tmp39 = (int(tmp38) & int((int)255));		HX_STACK_VAR(tmp39,"tmp39");
											HX_STACK_LINE(210)
											int b = tmp39;		HX_STACK_VAR(b,"b");
											HX_STACK_LINE(210)
											int tmp40 = ::__hxcpp_memory_get_byte(sourceData->buffer->b,(sourceData->byteOffset + sourcePosition));		HX_STACK_VAR(tmp40,"tmp40");
											HX_STACK_LINE(210)
											Dynamic tmp41 = (int(tmp40) & int((int)255));		HX_STACK_VAR(tmp41,"tmp41");
											HX_STACK_LINE(210)
											int a = tmp41;		HX_STACK_VAR(a,"a");
											HX_STACK_LINE(210)
											int tmp42 = (int(r) & int((int)255));		HX_STACK_VAR(tmp42,"tmp42");
											HX_STACK_LINE(210)
											int tmp43 = (int(tmp42) << int((int)24));		HX_STACK_VAR(tmp43,"tmp43");
											HX_STACK_LINE(210)
											int tmp44 = (int(g) & int((int)255));		HX_STACK_VAR(tmp44,"tmp44");
											HX_STACK_LINE(210)
											int tmp45 = (int(tmp44) << int((int)16));		HX_STACK_VAR(tmp45,"tmp45");
											HX_STACK_LINE(210)
											int tmp46 = (int(tmp43) | int(tmp45));		HX_STACK_VAR(tmp46,"tmp46");
											HX_STACK_LINE(210)
											int tmp47 = (int(b) & int((int)255));		HX_STACK_VAR(tmp47,"tmp47");
											HX_STACK_LINE(210)
											int tmp48 = (int(tmp47) << int((int)8));		HX_STACK_VAR(tmp48,"tmp48");
											HX_STACK_LINE(210)
											int tmp49 = (int(tmp46) | int(tmp48));		HX_STACK_VAR(tmp49,"tmp49");
											HX_STACK_LINE(210)
											int tmp50 = (int(a) & int((int)255));		HX_STACK_VAR(tmp50,"tmp50");
											HX_STACK_LINE(210)
											int tmp51 = (int(tmp49) | int(tmp50));		HX_STACK_VAR(tmp51,"tmp51");
											HX_STACK_LINE(210)
											sourcePixel = tmp51;
										}
										;break;
									}
									HX_STACK_LINE(210)
									bool tmp34 = sourcePremultiplied;		HX_STACK_VAR(tmp34,"tmp34");
									HX_STACK_LINE(210)
									if ((tmp34)){
										HX_STACK_LINE(210)
										int tmp35 = (int(sourcePixel) & int((int)255));		HX_STACK_VAR(tmp35,"tmp35");
										HX_STACK_LINE(210)
										bool tmp36 = (tmp35 != (int)0);		HX_STACK_VAR(tmp36,"tmp36");
										HX_STACK_LINE(210)
										bool tmp37;		HX_STACK_VAR(tmp37,"tmp37");
										HX_STACK_LINE(210)
										if ((tmp36)){
											HX_STACK_LINE(210)
											int tmp38 = (int(sourcePixel) & int((int)255));		HX_STACK_VAR(tmp38,"tmp38");
											HX_STACK_LINE(210)
											int tmp39 = tmp38;		HX_STACK_VAR(tmp39,"tmp39");
											HX_STACK_LINE(210)
											tmp37 = (tmp39 != (int)255);
										}
										else{
											HX_STACK_LINE(210)
											tmp37 = false;
										}
										HX_STACK_LINE(210)
										if ((tmp37)){
											HX_STACK_LINE(210)
											int tmp38 = (int(sourcePixel) & int((int)255));		HX_STACK_VAR(tmp38,"tmp38");
											HX_STACK_LINE(210)
											Float tmp39 = (Float(((Float)255.0)) / Float(tmp38));		HX_STACK_VAR(tmp39,"tmp39");
											HX_STACK_LINE(210)
											::lime::math::color::_RGBA::RGBA_Impl__obj::unmult = tmp39;
											HX_STACK_LINE(210)
											{
												HX_STACK_LINE(210)
												Dynamic tmp40;		HX_STACK_VAR(tmp40,"tmp40");
												HX_STACK_LINE(210)
												{
													HX_STACK_LINE(210)
													::lime::utils::ArrayBufferView tmp41 = ::lime::math::color::_RGBA::RGBA_Impl__obj::__clamp;		HX_STACK_VAR(tmp41,"tmp41");
													HX_STACK_LINE(210)
													::lime::utils::ArrayBufferView this1 = tmp41;		HX_STACK_VAR(this1,"this1");
													HX_STACK_LINE(210)
													int tmp42 = (int(sourcePixel) >> int((int)24));		HX_STACK_VAR(tmp42,"tmp42");
													HX_STACK_LINE(210)
													int tmp43 = (int(tmp42) & int((int)255));		HX_STACK_VAR(tmp43,"tmp43");
													HX_STACK_LINE(210)
													Float tmp44 = ::lime::math::color::_RGBA::RGBA_Impl__obj::unmult;		HX_STACK_VAR(tmp44,"tmp44");
													HX_STACK_LINE(210)
													Float tmp45 = (tmp43 * tmp44);		HX_STACK_VAR(tmp45,"tmp45");
													HX_STACK_LINE(210)
													int tmp46 = ::Math_obj::round(tmp45);		HX_STACK_VAR(tmp46,"tmp46");
													HX_STACK_LINE(210)
													int idx = tmp46;		HX_STACK_VAR(idx,"idx");
													HX_STACK_LINE(210)
													int tmp47 = ::__hxcpp_memory_get_byte(this1->buffer->b,(this1->byteOffset + idx));		HX_STACK_VAR(tmp47,"tmp47");
													HX_STACK_LINE(210)
													tmp40 = (int(tmp47) & int((int)255));
												}
												HX_STACK_LINE(210)
												int r = tmp40;		HX_STACK_VAR(r,"r");
												HX_STACK_LINE(210)
												Dynamic tmp41;		HX_STACK_VAR(tmp41,"tmp41");
												HX_STACK_LINE(210)
												{
													HX_STACK_LINE(210)
													::lime::utils::ArrayBufferView tmp42 = ::lime::math::color::_RGBA::RGBA_Impl__obj::__clamp;		HX_STACK_VAR(tmp42,"tmp42");
													HX_STACK_LINE(210)
													::lime::utils::ArrayBufferView this1 = tmp42;		HX_STACK_VAR(this1,"this1");
													HX_STACK_LINE(210)
													int tmp43 = (int(sourcePixel) >> int((int)16));		HX_STACK_VAR(tmp43,"tmp43");
													HX_STACK_LINE(210)
													int tmp44 = (int(tmp43) & int((int)255));		HX_STACK_VAR(tmp44,"tmp44");
													HX_STACK_LINE(210)
													Float tmp45 = ::lime::math::color::_RGBA::RGBA_Impl__obj::unmult;		HX_STACK_VAR(tmp45,"tmp45");
													HX_STACK_LINE(210)
													Float tmp46 = (tmp44 * tmp45);		HX_STACK_VAR(tmp46,"tmp46");
													HX_STACK_LINE(210)
													int tmp47 = ::Math_obj::round(tmp46);		HX_STACK_VAR(tmp47,"tmp47");
													HX_STACK_LINE(210)
													int idx = tmp47;		HX_STACK_VAR(idx,"idx");
													HX_STACK_LINE(210)
													int tmp48 = ::__hxcpp_memory_get_byte(this1->buffer->b,(this1->byteOffset + idx));		HX_STACK_VAR(tmp48,"tmp48");
													HX_STACK_LINE(210)
													tmp41 = (int(tmp48) & int((int)255));
												}
												HX_STACK_LINE(210)
												int g = tmp41;		HX_STACK_VAR(g,"g");
												HX_STACK_LINE(210)
												Dynamic tmp42;		HX_STACK_VAR(tmp42,"tmp42");
												HX_STACK_LINE(210)
												{
													HX_STACK_LINE(210)
													::lime::utils::ArrayBufferView tmp43 = ::lime::math::color::_RGBA::RGBA_Impl__obj::__clamp;		HX_STACK_VAR(tmp43,"tmp43");
													HX_STACK_LINE(210)
													::lime::utils::ArrayBufferView this1 = tmp43;		HX_STACK_VAR(this1,"this1");
													HX_STACK_LINE(210)
													int tmp44 = (int(sourcePixel) >> int((int)8));		HX_STACK_VAR(tmp44,"tmp44");
													HX_STACK_LINE(210)
													int tmp45 = (int(tmp44) & int((int)255));		HX_STACK_VAR(tmp45,"tmp45");
													HX_STACK_LINE(210)
													Float tmp46 = ::lime::math::color::_RGBA::RGBA_Impl__obj::unmult;		HX_STACK_VAR(tmp46,"tmp46");
													HX_STACK_LINE(210)
													Float tmp47 = (tmp45 * tmp46);		HX_STACK_VAR(tmp47,"tmp47");
													HX_STACK_LINE(210)
													int tmp48 = ::Math_obj::round(tmp47);		HX_STACK_VAR(tmp48,"tmp48");
													HX_STACK_LINE(210)
													int idx = tmp48;		HX_STACK_VAR(idx,"idx");
													HX_STACK_LINE(210)
													int tmp49 = ::__hxcpp_memory_get_byte(this1->buffer->b,(this1->byteOffset + idx));		HX_STACK_VAR(tmp49,"tmp49");
													HX_STACK_LINE(210)
													tmp42 = (int(tmp49) & int((int)255));
												}
												HX_STACK_LINE(210)
												int b = tmp42;		HX_STACK_VAR(b,"b");
												HX_STACK_LINE(210)
												int tmp43 = (int(r) & int((int)255));		HX_STACK_VAR(tmp43,"tmp43");
												HX_STACK_LINE(210)
												int tmp44 = (int(tmp43) << int((int)24));		HX_STACK_VAR(tmp44,"tmp44");
												HX_STACK_LINE(210)
												int tmp45 = (int(g) & int((int)255));		HX_STACK_VAR(tmp45,"tmp45");
												HX_STACK_LINE(210)
												int tmp46 = (int(tmp45) << int((int)16));		HX_STACK_VAR(tmp46,"tmp46");
												HX_STACK_LINE(210)
												int tmp47 = (int(tmp44) | int(tmp46));		HX_STACK_VAR(tmp47,"tmp47");
												HX_STACK_LINE(210)
												int tmp48 = (int(b) & int((int)255));		HX_STACK_VAR(tmp48,"tmp48");
												HX_STACK_LINE(210)
												int tmp49 = (int(tmp48) << int((int)8));		HX_STACK_VAR(tmp49,"tmp49");
												HX_STACK_LINE(210)
												int tmp50 = (int(tmp47) | int(tmp49));		HX_STACK_VAR(tmp50,"tmp50");
												HX_STACK_LINE(210)
												int tmp51 = (int(sourcePixel) & int((int)255));		HX_STACK_VAR(tmp51,"tmp51");
												HX_STACK_LINE(210)
												int tmp52 = (int(tmp51) & int((int)255));		HX_STACK_VAR(tmp52,"tmp52");
												HX_STACK_LINE(210)
												int tmp53 = (int(tmp50) | int(tmp52));		HX_STACK_VAR(tmp53,"tmp53");
												HX_STACK_LINE(210)
												sourcePixel = tmp53;
											}
										}
									}
								}
								HX_STACK_LINE(211)
								{
									HX_STACK_LINE(211)
									int tmp33 = destFormat;		HX_STACK_VAR(tmp33,"tmp33");
									HX_STACK_LINE(211)
									switch( (int)(tmp33)){
										case (int)2: {
											HX_STACK_LINE(211)
											int tmp34 = ::__hxcpp_memory_get_byte(destData->buffer->b,(destData->byteOffset + ((destPosition + (int)2))));		HX_STACK_VAR(tmp34,"tmp34");
											HX_STACK_LINE(211)
											Dynamic tmp35 = (int(tmp34) & int((int)255));		HX_STACK_VAR(tmp35,"tmp35");
											HX_STACK_LINE(211)
											int r = tmp35;		HX_STACK_VAR(r,"r");
											HX_STACK_LINE(211)
											int tmp36 = ::__hxcpp_memory_get_byte(destData->buffer->b,(destData->byteOffset + ((destPosition + (int)1))));		HX_STACK_VAR(tmp36,"tmp36");
											HX_STACK_LINE(211)
											Dynamic tmp37 = (int(tmp36) & int((int)255));		HX_STACK_VAR(tmp37,"tmp37");
											HX_STACK_LINE(211)
											int g = tmp37;		HX_STACK_VAR(g,"g");
											HX_STACK_LINE(211)
											int tmp38 = ::__hxcpp_memory_get_byte(destData->buffer->b,(destData->byteOffset + destPosition));		HX_STACK_VAR(tmp38,"tmp38");
											HX_STACK_LINE(211)
											Dynamic tmp39 = (int(tmp38) & int((int)255));		HX_STACK_VAR(tmp39,"tmp39");
											HX_STACK_LINE(211)
											int b = tmp39;		HX_STACK_VAR(b,"b");
											HX_STACK_LINE(211)
											int tmp40 = ::__hxcpp_memory_get_byte(destData->buffer->b,(destData->byteOffset + ((destPosition + (int)3))));		HX_STACK_VAR(tmp40,"tmp40");
											HX_STACK_LINE(211)
											Dynamic tmp41 = (int(tmp40) & int((int)255));		HX_STACK_VAR(tmp41,"tmp41");
											HX_STACK_LINE(211)
											int a = tmp41;		HX_STACK_VAR(a,"a");
											HX_STACK_LINE(211)
											int tmp42 = (int(r) & int((int)255));		HX_STACK_VAR(tmp42,"tmp42");
											HX_STACK_LINE(211)
											int tmp43 = (int(tmp42) << int((int)24));		HX_STACK_VAR(tmp43,"tmp43");
											HX_STACK_LINE(211)
											int tmp44 = (int(g) & int((int)255));		HX_STACK_VAR(tmp44,"tmp44");
											HX_STACK_LINE(211)
											int tmp45 = (int(tmp44) << int((int)16));		HX_STACK_VAR(tmp45,"tmp45");
											HX_STACK_LINE(211)
											int tmp46 = (int(tmp43) | int(tmp45));		HX_STACK_VAR(tmp46,"tmp46");
											HX_STACK_LINE(211)
											int tmp47 = (int(b) & int((int)255));		HX_STACK_VAR(tmp47,"tmp47");
											HX_STACK_LINE(211)
											int tmp48 = (int(tmp47) << int((int)8));		HX_STACK_VAR(tmp48,"tmp48");
											HX_STACK_LINE(211)
											int tmp49 = (int(tmp46) | int(tmp48));		HX_STACK_VAR(tmp49,"tmp49");
											HX_STACK_LINE(211)
											int tmp50 = (int(a) & int((int)255));		HX_STACK_VAR(tmp50,"tmp50");
											HX_STACK_LINE(211)
											int tmp51 = (int(tmp49) | int(tmp50));		HX_STACK_VAR(tmp51,"tmp51");
											HX_STACK_LINE(211)
											destPixel = tmp51;
										}
										;break;
										case (int)0: {
											HX_STACK_LINE(211)
											int tmp34 = ::__hxcpp_memory_get_byte(destData->buffer->b,(destData->byteOffset + destPosition));		HX_STACK_VAR(tmp34,"tmp34");
											HX_STACK_LINE(211)
											Dynamic tmp35 = (int(tmp34) & int((int)255));		HX_STACK_VAR(tmp35,"tmp35");
											HX_STACK_LINE(211)
											int r = tmp35;		HX_STACK_VAR(r,"r");
											HX_STACK_LINE(211)
											int tmp36 = ::__hxcpp_memory_get_byte(destData->buffer->b,(destData->byteOffset + ((destPosition + (int)1))));		HX_STACK_VAR(tmp36,"tmp36");
											HX_STACK_LINE(211)
											Dynamic tmp37 = (int(tmp36) & int((int)255));		HX_STACK_VAR(tmp37,"tmp37");
											HX_STACK_LINE(211)
											int g = tmp37;		HX_STACK_VAR(g,"g");
											HX_STACK_LINE(211)
											int tmp38 = ::__hxcpp_memory_get_byte(destData->buffer->b,(destData->byteOffset + ((destPosition + (int)2))));		HX_STACK_VAR(tmp38,"tmp38");
											HX_STACK_LINE(211)
											Dynamic tmp39 = (int(tmp38) & int((int)255));		HX_STACK_VAR(tmp39,"tmp39");
											HX_STACK_LINE(211)
											int b = tmp39;		HX_STACK_VAR(b,"b");
											HX_STACK_LINE(211)
											int tmp40 = ::__hxcpp_memory_get_byte(destData->buffer->b,(destData->byteOffset + ((destPosition + (int)3))));		HX_STACK_VAR(tmp40,"tmp40");
											HX_STACK_LINE(211)
											Dynamic tmp41 = (int(tmp40) & int((int)255));		HX_STACK_VAR(tmp41,"tmp41");
											HX_STACK_LINE(211)
											int a = tmp41;		HX_STACK_VAR(a,"a");
											HX_STACK_LINE(211)
											int tmp42 = (int(r) & int((int)255));		HX_STACK_VAR(tmp42,"tmp42");
											HX_STACK_LINE(211)
											int tmp43 = (int(tmp42) << int((int)24));		HX_STACK_VAR(tmp43,"tmp43");
											HX_STACK_LINE(211)
											int tmp44 = (int(g) & int((int)255));		HX_STACK_VAR(tmp44,"tmp44");
											HX_STACK_LINE(211)
											int tmp45 = (int(tmp44) << int((int)16));		HX_STACK_VAR(tmp45,"tmp45");
											HX_STACK_LINE(211)
											int tmp46 = (int(tmp43) | int(tmp45));		HX_STACK_VAR(tmp46,"tmp46");
											HX_STACK_LINE(211)
											int tmp47 = (int(b) & int((int)255));		HX_STACK_VAR(tmp47,"tmp47");
											HX_STACK_LINE(211)
											int tmp48 = (int(tmp47) << int((int)8));		HX_STACK_VAR(tmp48,"tmp48");
											HX_STACK_LINE(211)
											int tmp49 = (int(tmp46) | int(tmp48));		HX_STACK_VAR(tmp49,"tmp49");
											HX_STACK_LINE(211)
											int tmp50 = (int(a) & int((int)255));		HX_STACK_VAR(tmp50,"tmp50");
											HX_STACK_LINE(211)
											int tmp51 = (int(tmp49) | int(tmp50));		HX_STACK_VAR(tmp51,"tmp51");
											HX_STACK_LINE(211)
											destPixel = tmp51;
										}
										;break;
										case (int)1: {
											HX_STACK_LINE(211)
											int tmp34 = ::__hxcpp_memory_get_byte(destData->buffer->b,(destData->byteOffset + ((destPosition + (int)1))));		HX_STACK_VAR(tmp34,"tmp34");
											HX_STACK_LINE(211)
											Dynamic tmp35 = (int(tmp34) & int((int)255));		HX_STACK_VAR(tmp35,"tmp35");
											HX_STACK_LINE(211)
											int r = tmp35;		HX_STACK_VAR(r,"r");
											HX_STACK_LINE(211)
											int tmp36 = ::__hxcpp_memory_get_byte(destData->buffer->b,(destData->byteOffset + ((destPosition + (int)2))));		HX_STACK_VAR(tmp36,"tmp36");
											HX_STACK_LINE(211)
											Dynamic tmp37 = (int(tmp36) & int((int)255));		HX_STACK_VAR(tmp37,"tmp37");
											HX_STACK_LINE(211)
											int g = tmp37;		HX_STACK_VAR(g,"g");
											HX_STACK_LINE(211)
											int tmp38 = ::__hxcpp_memory_get_byte(destData->buffer->b,(destData->byteOffset + ((destPosition + (int)3))));		HX_STACK_VAR(tmp38,"tmp38");
											HX_STACK_LINE(211)
											Dynamic tmp39 = (int(tmp38) & int((int)255));		HX_STACK_VAR(tmp39,"tmp39");
											HX_STACK_LINE(211)
											int b = tmp39;		HX_STACK_VAR(b,"b");
											HX_STACK_LINE(211)
											int tmp40 = ::__hxcpp_memory_get_byte(destData->buffer->b,(destData->byteOffset + destPosition));		HX_STACK_VAR(tmp40,"tmp40");
											HX_STACK_LINE(211)
											Dynamic tmp41 = (int(tmp40) & int((int)255));		HX_STACK_VAR(tmp41,"tmp41");
											HX_STACK_LINE(211)
											int a = tmp41;		HX_STACK_VAR(a,"a");
											HX_STACK_LINE(211)
											int tmp42 = (int(r) & int((int)255));		HX_STACK_VAR(tmp42,"tmp42");
											HX_STACK_LINE(211)
											int tmp43 = (int(tmp42) << int((int)24));		HX_STACK_VAR(tmp43,"tmp43");
											HX_STACK_LINE(211)
											int tmp44 = (int(g) & int((int)255));		HX_STACK_VAR(tmp44,"tmp44");
											HX_STACK_LINE(211)
											int tmp45 = (int(tmp44) << int((int)16));		HX_STACK_VAR(tmp45,"tmp45");
											HX_STACK_LINE(211)
											int tmp46 = (int(tmp43) | int(tmp45));		HX_STACK_VAR(tmp46,"tmp46");
											HX_STACK_LINE(211)
											int tmp47 = (int(b) & int((int)255));		HX_STACK_VAR(tmp47,"tmp47");
											HX_STACK_LINE(211)
											int tmp48 = (int(tmp47) << int((int)8));		HX_STACK_VAR(tmp48,"tmp48");
											HX_STACK_LINE(211)
											int tmp49 = (int(tmp46) | int(tmp48));		HX_STACK_VAR(tmp49,"tmp49");
											HX_STACK_LINE(211)
											int tmp50 = (int(a) & int((int)255));		HX_STACK_VAR(tmp50,"tmp50");
											HX_STACK_LINE(211)
											int tmp51 = (int(tmp49) | int(tmp50));		HX_STACK_VAR(tmp51,"tmp51");
											HX_STACK_LINE(211)
											destPixel = tmp51;
										}
										;break;
									}
									HX_STACK_LINE(211)
									bool tmp34 = destPremultiplied;		HX_STACK_VAR(tmp34,"tmp34");
									HX_STACK_LINE(211)
									if ((tmp34)){
										HX_STACK_LINE(211)
										int tmp35 = (int(destPixel) & int((int)255));		HX_STACK_VAR(tmp35,"tmp35");
										HX_STACK_LINE(211)
										bool tmp36 = (tmp35 != (int)0);		HX_STACK_VAR(tmp36,"tmp36");
										HX_STACK_LINE(211)
										bool tmp37;		HX_STACK_VAR(tmp37,"tmp37");
										HX_STACK_LINE(211)
										if ((tmp36)){
											HX_STACK_LINE(211)
											int tmp38 = (int(destPixel) & int((int)255));		HX_STACK_VAR(tmp38,"tmp38");
											HX_STACK_LINE(211)
											int tmp39 = tmp38;		HX_STACK_VAR(tmp39,"tmp39");
											HX_STACK_LINE(211)
											tmp37 = (tmp39 != (int)255);
										}
										else{
											HX_STACK_LINE(211)
											tmp37 = false;
										}
										HX_STACK_LINE(211)
										if ((tmp37)){
											HX_STACK_LINE(211)
											int tmp38 = (int(destPixel) & int((int)255));		HX_STACK_VAR(tmp38,"tmp38");
											HX_STACK_LINE(211)
											Float tmp39 = (Float(((Float)255.0)) / Float(tmp38));		HX_STACK_VAR(tmp39,"tmp39");
											HX_STACK_LINE(211)
											::lime::math::color::_RGBA::RGBA_Impl__obj::unmult = tmp39;
											HX_STACK_LINE(211)
											{
												HX_STACK_LINE(211)
												Dynamic tmp40;		HX_STACK_VAR(tmp40,"tmp40");
												HX_STACK_LINE(211)
												{
													HX_STACK_LINE(211)
													::lime::utils::ArrayBufferView tmp41 = ::lime::math::color::_RGBA::RGBA_Impl__obj::__clamp;		HX_STACK_VAR(tmp41,"tmp41");
													HX_STACK_LINE(211)
													::lime::utils::ArrayBufferView this1 = tmp41;		HX_STACK_VAR(this1,"this1");
													HX_STACK_LINE(211)
													int tmp42 = (int(destPixel) >> int((int)24));		HX_STACK_VAR(tmp42,"tmp42");
													HX_STACK_LINE(211)
													int tmp43 = (int(tmp42) & int((int)255));		HX_STACK_VAR(tmp43,"tmp43");
													HX_STACK_LINE(211)
													Float tmp44 = ::lime::math::color::_RGBA::RGBA_Impl__obj::unmult;		HX_STACK_VAR(tmp44,"tmp44");
													HX_STACK_LINE(211)
													Float tmp45 = (tmp43 * tmp44);		HX_STACK_VAR(tmp45,"tmp45");
													HX_STACK_LINE(211)
													int tmp46 = ::Math_obj::round(tmp45);		HX_STACK_VAR(tmp46,"tmp46");
													HX_STACK_LINE(211)
													int idx = tmp46;		HX_STACK_VAR(idx,"idx");
													HX_STACK_LINE(211)
													int tmp47 = ::__hxcpp_memory_get_byte(this1->buffer->b,(this1->byteOffset + idx));		HX_STACK_VAR(tmp47,"tmp47");
													HX_STACK_LINE(211)
													tmp40 = (int(tmp47) & int((int)255));
												}
												HX_STACK_LINE(211)
												int r = tmp40;		HX_STACK_VAR(r,"r");
												HX_STACK_LINE(211)
												Dynamic tmp41;		HX_STACK_VAR(tmp41,"tmp41");
												HX_STACK_LINE(211)
												{
													HX_STACK_LINE(211)
													::lime::utils::ArrayBufferView tmp42 = ::lime::math::color::_RGBA::RGBA_Impl__obj::__clamp;		HX_STACK_VAR(tmp42,"tmp42");
													HX_STACK_LINE(211)
													::lime::utils::ArrayBufferView this1 = tmp42;		HX_STACK_VAR(this1,"this1");
													HX_STACK_LINE(211)
													int tmp43 = (int(destPixel) >> int((int)16));		HX_STACK_VAR(tmp43,"tmp43");
													HX_STACK_LINE(211)
													int tmp44 = (int(tmp43) & int((int)255));		HX_STACK_VAR(tmp44,"tmp44");
													HX_STACK_LINE(211)
													Float tmp45 = ::lime::math::color::_RGBA::RGBA_Impl__obj::unmult;		HX_STACK_VAR(tmp45,"tmp45");
													HX_STACK_LINE(211)
													Float tmp46 = (tmp44 * tmp45);		HX_STACK_VAR(tmp46,"tmp46");
													HX_STACK_LINE(211)
													int tmp47 = ::Math_obj::round(tmp46);		HX_STACK_VAR(tmp47,"tmp47");
													HX_STACK_LINE(211)
													int idx = tmp47;		HX_STACK_VAR(idx,"idx");
													HX_STACK_LINE(211)
													int tmp48 = ::__hxcpp_memory_get_byte(this1->buffer->b,(this1->byteOffset + idx));		HX_STACK_VAR(tmp48,"tmp48");
													HX_STACK_LINE(211)
													tmp41 = (int(tmp48) & int((int)255));
												}
												HX_STACK_LINE(211)
												int g = tmp41;		HX_STACK_VAR(g,"g");
												HX_STACK_LINE(211)
												Dynamic tmp42;		HX_STACK_VAR(tmp42,"tmp42");
												HX_STACK_LINE(211)
												{
													HX_STACK_LINE(211)
													::lime::utils::ArrayBufferView tmp43 = ::lime::math::color::_RGBA::RGBA_Impl__obj::__clamp;		HX_STACK_VAR(tmp43,"tmp43");
													HX_STACK_LINE(211)
													::lime::utils::ArrayBufferView this1 = tmp43;		HX_STACK_VAR(this1,"this1");
													HX_STACK_LINE(211)
													int tmp44 = (int(destPixel) >> int((int)8));		HX_STACK_VAR(tmp44,"tmp44");
													HX_STACK_LINE(211)
													int tmp45 = (int(tmp44) & int((int)255));		HX_STACK_VAR(tmp45,"tmp45");
													HX_STACK_LINE(211)
													Float tmp46 = ::lime::math::color::_RGBA::RGBA_Impl__obj::unmult;		HX_STACK_VAR(tmp46,"tmp46");
													HX_STACK_LINE(211)
													Float tmp47 = (tmp45 * tmp46);		HX_STACK_VAR(tmp47,"tmp47");
													HX_STACK_LINE(211)
													int tmp48 = ::Math_obj::round(tmp47);		HX_STACK_VAR(tmp48,"tmp48");
													HX_STACK_LINE(211)
													int idx = tmp48;		HX_STACK_VAR(idx,"idx");
													HX_STACK_LINE(211)
													int tmp49 = ::__hxcpp_memory_get_byte(this1->buffer->b,(this1->byteOffset + idx));		HX_STACK_VAR(tmp49,"tmp49");
													HX_STACK_LINE(211)
													tmp42 = (int(tmp49) & int((int)255));
												}
												HX_STACK_LINE(211)
												int b = tmp42;		HX_STACK_VAR(b,"b");
												HX_STACK_LINE(211)
												int tmp43 = (int(r) & int((int)255));		HX_STACK_VAR(tmp43,"tmp43");
												HX_STACK_LINE(211)
												int tmp44 = (int(tmp43) << int((int)24));		HX_STACK_VAR(tmp44,"tmp44");
												HX_STACK_LINE(211)
												int tmp45 = (int(g) & int((int)255));		HX_STACK_VAR(tmp45,"tmp45");
												HX_STACK_LINE(211)
												int tmp46 = (int(tmp45) << int((int)16));		HX_STACK_VAR(tmp46,"tmp46");
												HX_STACK_LINE(211)
												int tmp47 = (int(tmp44) | int(tmp46));		HX_STACK_VAR(tmp47,"tmp47");
												HX_STACK_LINE(211)
												int tmp48 = (int(b) & int((int)255));		HX_STACK_VAR(tmp48,"tmp48");
												HX_STACK_LINE(211)
												int tmp49 = (int(tmp48) << int((int)8));		HX_STACK_VAR(tmp49,"tmp49");
												HX_STACK_LINE(211)
												int tmp50 = (int(tmp47) | int(tmp49));		HX_STACK_VAR(tmp50,"tmp50");
												HX_STACK_LINE(211)
												int tmp51 = (int(destPixel) & int((int)255));		HX_STACK_VAR(tmp51,"tmp51");
												HX_STACK_LINE(211)
												int tmp52 = (int(tmp51) & int((int)255));		HX_STACK_VAR(tmp52,"tmp52");
												HX_STACK_LINE(211)
												int tmp53 = (int(tmp50) | int(tmp52));		HX_STACK_VAR(tmp53,"tmp53");
												HX_STACK_LINE(211)
												destPixel = tmp53;
											}
										}
									}
								}
								HX_STACK_LINE(213)
								int tmp33 = (int(sourcePixel) & int((int)255));		HX_STACK_VAR(tmp33,"tmp33");
								HX_STACK_LINE(213)
								Float tmp34 = (Float(tmp33) / Float(((Float)255.0)));		HX_STACK_VAR(tmp34,"tmp34");
								HX_STACK_LINE(213)
								sourceAlpha = tmp34;
								HX_STACK_LINE(214)
								int tmp35 = (int(destPixel) & int((int)255));		HX_STACK_VAR(tmp35,"tmp35");
								HX_STACK_LINE(214)
								Float tmp36 = (Float(tmp35) / Float(((Float)255.0)));		HX_STACK_VAR(tmp36,"tmp36");
								HX_STACK_LINE(214)
								destAlpha = tmp36;
								HX_STACK_LINE(215)
								Float tmp37 = ((int)1 - sourceAlpha);		HX_STACK_VAR(tmp37,"tmp37");
								HX_STACK_LINE(215)
								oneMinusSourceAlpha = tmp37;
								HX_STACK_LINE(216)
								Float tmp38 = sourceAlpha;		HX_STACK_VAR(tmp38,"tmp38");
								HX_STACK_LINE(216)
								Float tmp39 = (destAlpha * oneMinusSourceAlpha);		HX_STACK_VAR(tmp39,"tmp39");
								HX_STACK_LINE(216)
								Float tmp40 = (tmp38 + tmp39);		HX_STACK_VAR(tmp40,"tmp40");
								HX_STACK_LINE(216)
								blendAlpha = tmp40;
								HX_STACK_LINE(218)
								bool tmp41 = (blendAlpha == (int)0);		HX_STACK_VAR(tmp41,"tmp41");
								HX_STACK_LINE(218)
								if ((tmp41)){
									HX_STACK_LINE(220)
									destPixel = (int)0;
								}
								else{
									HX_STACK_LINE(224)
									{
										HX_STACK_LINE(224)
										Dynamic tmp42;		HX_STACK_VAR(tmp42,"tmp42");
										HX_STACK_LINE(224)
										{
											HX_STACK_LINE(224)
											::lime::utils::ArrayBufferView tmp43 = ::lime::math::color::_RGBA::RGBA_Impl__obj::__clamp;		HX_STACK_VAR(tmp43,"tmp43");
											HX_STACK_LINE(224)
											::lime::utils::ArrayBufferView this1 = tmp43;		HX_STACK_VAR(this1,"this1");
											HX_STACK_LINE(224)
											int tmp44 = (int(sourcePixel) >> int((int)24));		HX_STACK_VAR(tmp44,"tmp44");
											HX_STACK_LINE(224)
											int tmp45 = (int(tmp44) & int((int)255));		HX_STACK_VAR(tmp45,"tmp45");
											HX_STACK_LINE(224)
											Float tmp46 = sourceAlpha;		HX_STACK_VAR(tmp46,"tmp46");
											HX_STACK_LINE(224)
											Float tmp47 = (tmp45 * tmp46);		HX_STACK_VAR(tmp47,"tmp47");
											HX_STACK_LINE(224)
											int tmp48 = (int(destPixel) >> int((int)24));		HX_STACK_VAR(tmp48,"tmp48");
											HX_STACK_LINE(224)
											int tmp49 = (int(tmp48) & int((int)255));		HX_STACK_VAR(tmp49,"tmp49");
											HX_STACK_LINE(224)
											Float tmp50 = destAlpha;		HX_STACK_VAR(tmp50,"tmp50");
											HX_STACK_LINE(224)
											Float tmp51 = (tmp49 * tmp50);		HX_STACK_VAR(tmp51,"tmp51");
											HX_STACK_LINE(224)
											Float tmp52 = oneMinusSourceAlpha;		HX_STACK_VAR(tmp52,"tmp52");
											HX_STACK_LINE(224)
											Float tmp53 = (tmp51 * tmp52);		HX_STACK_VAR(tmp53,"tmp53");
											HX_STACK_LINE(224)
											Float tmp54 = (tmp47 + tmp53);		HX_STACK_VAR(tmp54,"tmp54");
											HX_STACK_LINE(224)
											Float tmp55 = blendAlpha;		HX_STACK_VAR(tmp55,"tmp55");
											HX_STACK_LINE(224)
											Float tmp56 = (Float(tmp54) / Float(tmp55));		HX_STACK_VAR(tmp56,"tmp56");
											HX_STACK_LINE(224)
											int tmp57 = ::Math_obj::round(tmp56);		HX_STACK_VAR(tmp57,"tmp57");
											HX_STACK_LINE(224)
											int idx = tmp57;		HX_STACK_VAR(idx,"idx");
											HX_STACK_LINE(224)
											int tmp58 = ::__hxcpp_memory_get_byte(this1->buffer->b,(this1->byteOffset + idx));		HX_STACK_VAR(tmp58,"tmp58");
											HX_STACK_LINE(224)
											tmp42 = (int(tmp58) & int((int)255));
										}
										HX_STACK_LINE(224)
										int value = tmp42;		HX_STACK_VAR(value,"value");
										HX_STACK_LINE(224)
										{
											HX_STACK_LINE(224)
											int tmp43 = (int(value) & int((int)255));		HX_STACK_VAR(tmp43,"tmp43");
											HX_STACK_LINE(224)
											int tmp44 = (int(tmp43) << int((int)24));		HX_STACK_VAR(tmp44,"tmp44");
											HX_STACK_LINE(224)
											int tmp45 = (int(destPixel) >> int((int)16));		HX_STACK_VAR(tmp45,"tmp45");
											HX_STACK_LINE(224)
											int tmp46 = (int(tmp45) & int((int)255));		HX_STACK_VAR(tmp46,"tmp46");
											HX_STACK_LINE(224)
											int tmp47 = (int(tmp46) & int((int)255));		HX_STACK_VAR(tmp47,"tmp47");
											HX_STACK_LINE(224)
											int tmp48 = (int(tmp47) << int((int)16));		HX_STACK_VAR(tmp48,"tmp48");
											HX_STACK_LINE(224)
											int tmp49 = (int(tmp44) | int(tmp48));		HX_STACK_VAR(tmp49,"tmp49");
											HX_STACK_LINE(224)
											int tmp50 = (int(destPixel) >> int((int)8));		HX_STACK_VAR(tmp50,"tmp50");
											HX_STACK_LINE(224)
											int tmp51 = (int(tmp50) & int((int)255));		HX_STACK_VAR(tmp51,"tmp51");
											HX_STACK_LINE(224)
											int tmp52 = (int(tmp51) & int((int)255));		HX_STACK_VAR(tmp52,"tmp52");
											HX_STACK_LINE(224)
											int tmp53 = (int(tmp52) << int((int)8));		HX_STACK_VAR(tmp53,"tmp53");
											HX_STACK_LINE(224)
											int tmp54 = (int(tmp49) | int(tmp53));		HX_STACK_VAR(tmp54,"tmp54");
											HX_STACK_LINE(224)
											int tmp55 = (int(destPixel) & int((int)255));		HX_STACK_VAR(tmp55,"tmp55");
											HX_STACK_LINE(224)
											int tmp56 = (int(tmp55) & int((int)255));		HX_STACK_VAR(tmp56,"tmp56");
											HX_STACK_LINE(224)
											int tmp57 = (int(tmp54) | int(tmp56));		HX_STACK_VAR(tmp57,"tmp57");
											HX_STACK_LINE(224)
											destPixel = tmp57;
										}
										HX_STACK_LINE(224)
										value;
									}
									HX_STACK_LINE(225)
									{
										HX_STACK_LINE(225)
										Dynamic tmp42;		HX_STACK_VAR(tmp42,"tmp42");
										HX_STACK_LINE(225)
										{
											HX_STACK_LINE(225)
											::lime::utils::ArrayBufferView tmp43 = ::lime::math::color::_RGBA::RGBA_Impl__obj::__clamp;		HX_STACK_VAR(tmp43,"tmp43");
											HX_STACK_LINE(225)
											::lime::utils::ArrayBufferView this1 = tmp43;		HX_STACK_VAR(this1,"this1");
											HX_STACK_LINE(225)
											int tmp44 = (int(sourcePixel) >> int((int)16));		HX_STACK_VAR(tmp44,"tmp44");
											HX_STACK_LINE(225)
											int tmp45 = (int(tmp44) & int((int)255));		HX_STACK_VAR(tmp45,"tmp45");
											HX_STACK_LINE(225)
											Float tmp46 = sourceAlpha;		HX_STACK_VAR(tmp46,"tmp46");
											HX_STACK_LINE(225)
											Float tmp47 = (tmp45 * tmp46);		HX_STACK_VAR(tmp47,"tmp47");
											HX_STACK_LINE(225)
											int tmp48 = (int(destPixel) >> int((int)16));		HX_STACK_VAR(tmp48,"tmp48");
											HX_STACK_LINE(225)
											int tmp49 = (int(tmp48) & int((int)255));		HX_STACK_VAR(tmp49,"tmp49");
											HX_STACK_LINE(225)
											Float tmp50 = destAlpha;		HX_STACK_VAR(tmp50,"tmp50");
											HX_STACK_LINE(225)
											Float tmp51 = (tmp49 * tmp50);		HX_STACK_VAR(tmp51,"tmp51");
											HX_STACK_LINE(225)
											Float tmp52 = oneMinusSourceAlpha;		HX_STACK_VAR(tmp52,"tmp52");
											HX_STACK_LINE(225)
											Float tmp53 = (tmp51 * tmp52);		HX_STACK_VAR(tmp53,"tmp53");
											HX_STACK_LINE(225)
											Float tmp54 = (tmp47 + tmp53);		HX_STACK_VAR(tmp54,"tmp54");
											HX_STACK_LINE(225)
											Float tmp55 = blendAlpha;		HX_STACK_VAR(tmp55,"tmp55");
											HX_STACK_LINE(225)
											Float tmp56 = (Float(tmp54) / Float(tmp55));		HX_STACK_VAR(tmp56,"tmp56");
											HX_STACK_LINE(225)
											int tmp57 = ::Math_obj::round(tmp56);		HX_STACK_VAR(tmp57,"tmp57");
											HX_STACK_LINE(225)
											int idx = tmp57;		HX_STACK_VAR(idx,"idx");
											HX_STACK_LINE(225)
											int tmp58 = ::__hxcpp_memory_get_byte(this1->buffer->b,(this1->byteOffset + idx));		HX_STACK_VAR(tmp58,"tmp58");
											HX_STACK_LINE(225)
											tmp42 = (int(tmp58) & int((int)255));
										}
										HX_STACK_LINE(225)
										int value = tmp42;		HX_STACK_VAR(value,"value");
										HX_STACK_LINE(225)
										{
											HX_STACK_LINE(225)
											int tmp43 = (int(destPixel) >> int((int)24));		HX_STACK_VAR(tmp43,"tmp43");
											HX_STACK_LINE(225)
											int tmp44 = (int(tmp43) & int((int)255));		HX_STACK_VAR(tmp44,"tmp44");
											HX_STACK_LINE(225)
											int tmp45 = (int(tmp44) & int((int)255));		HX_STACK_VAR(tmp45,"tmp45");
											HX_STACK_LINE(225)
											int tmp46 = (int(tmp45) << int((int)24));		HX_STACK_VAR(tmp46,"tmp46");
											HX_STACK_LINE(225)
											int tmp47 = (int(value) & int((int)255));		HX_STACK_VAR(tmp47,"tmp47");
											HX_STACK_LINE(225)
											int tmp48 = (int(tmp47) << int((int)16));		HX_STACK_VAR(tmp48,"tmp48");
											HX_STACK_LINE(225)
											int tmp49 = (int(tmp46) | int(tmp48));		HX_STACK_VAR(tmp49,"tmp49");
											HX_STACK_LINE(225)
											int tmp50 = (int(destPixel) >> int((int)8));		HX_STACK_VAR(tmp50,"tmp50");
											HX_STACK_LINE(225)
											int tmp51 = (int(tmp50) & int((int)255));		HX_STACK_VAR(tmp51,"tmp51");
											HX_STACK_LINE(225)
											int tmp52 = (int(tmp51) & int((int)255));		HX_STACK_VAR(tmp52,"tmp52");
											HX_STACK_LINE(225)
											int tmp53 = (int(tmp52) << int((int)8));		HX_STACK_VAR(tmp53,"tmp53");
											HX_STACK_LINE(225)
											int tmp54 = (int(tmp49) | int(tmp53));		HX_STACK_VAR(tmp54,"tmp54");
											HX_STACK_LINE(225)
											int tmp55 = (int(destPixel) & int((int)255));		HX_STACK_VAR(tmp55,"tmp55");
											HX_STACK_LINE(225)
											int tmp56 = (int(tmp55) & int((int)255));		HX_STACK_VAR(tmp56,"tmp56");
											HX_STACK_LINE(225)
											int tmp57 = (int(tmp54) | int(tmp56));		HX_STACK_VAR(tmp57,"tmp57");
											HX_STACK_LINE(225)
											destPixel = tmp57;
										}
										HX_STACK_LINE(225)
										value;
									}
									HX_STACK_LINE(226)
									{
										HX_STACK_LINE(226)
										Dynamic tmp42;		HX_STACK_VAR(tmp42,"tmp42");
										HX_STACK_LINE(226)
										{
											HX_STACK_LINE(226)
											::lime::utils::ArrayBufferView tmp43 = ::lime::math::color::_RGBA::RGBA_Impl__obj::__clamp;		HX_STACK_VAR(tmp43,"tmp43");
											HX_STACK_LINE(226)
											::lime::utils::ArrayBufferView this1 = tmp43;		HX_STACK_VAR(this1,"this1");
											HX_STACK_LINE(226)
											int tmp44 = (int(sourcePixel) >> int((int)8));		HX_STACK_VAR(tmp44,"tmp44");
											HX_STACK_LINE(226)
											int tmp45 = (int(tmp44) & int((int)255));		HX_STACK_VAR(tmp45,"tmp45");
											HX_STACK_LINE(226)
											Float tmp46 = sourceAlpha;		HX_STACK_VAR(tmp46,"tmp46");
											HX_STACK_LINE(226)
											Float tmp47 = (tmp45 * tmp46);		HX_STACK_VAR(tmp47,"tmp47");
											HX_STACK_LINE(226)
											int tmp48 = (int(destPixel) >> int((int)8));		HX_STACK_VAR(tmp48,"tmp48");
											HX_STACK_LINE(226)
											int tmp49 = (int(tmp48) & int((int)255));		HX_STACK_VAR(tmp49,"tmp49");
											HX_STACK_LINE(226)
											Float tmp50 = destAlpha;		HX_STACK_VAR(tmp50,"tmp50");
											HX_STACK_LINE(226)
											Float tmp51 = (tmp49 * tmp50);		HX_STACK_VAR(tmp51,"tmp51");
											HX_STACK_LINE(226)
											Float tmp52 = oneMinusSourceAlpha;		HX_STACK_VAR(tmp52,"tmp52");
											HX_STACK_LINE(226)
											Float tmp53 = (tmp51 * tmp52);		HX_STACK_VAR(tmp53,"tmp53");
											HX_STACK_LINE(226)
											Float tmp54 = (tmp47 + tmp53);		HX_STACK_VAR(tmp54,"tmp54");
											HX_STACK_LINE(226)
											Float tmp55 = blendAlpha;		HX_STACK_VAR(tmp55,"tmp55");
											HX_STACK_LINE(226)
											Float tmp56 = (Float(tmp54) / Float(tmp55));		HX_STACK_VAR(tmp56,"tmp56");
											HX_STACK_LINE(226)
											int tmp57 = ::Math_obj::round(tmp56);		HX_STACK_VAR(tmp57,"tmp57");
											HX_STACK_LINE(226)
											int idx = tmp57;		HX_STACK_VAR(idx,"idx");
											HX_STACK_LINE(226)
											int tmp58 = ::__hxcpp_memory_get_byte(this1->buffer->b,(this1->byteOffset + idx));		HX_STACK_VAR(tmp58,"tmp58");
											HX_STACK_LINE(226)
											tmp42 = (int(tmp58) & int((int)255));
										}
										HX_STACK_LINE(226)
										int value = tmp42;		HX_STACK_VAR(value,"value");
										HX_STACK_LINE(226)
										{
											HX_STACK_LINE(226)
											int tmp43 = (int(destPixel) >> int((int)24));		HX_STACK_VAR(tmp43,"tmp43");
											HX_STACK_LINE(226)
											int tmp44 = (int(tmp43) & int((int)255));		HX_STACK_VAR(tmp44,"tmp44");
											HX_STACK_LINE(226)
											int tmp45 = (int(tmp44) & int((int)255));		HX_STACK_VAR(tmp45,"tmp45");
											HX_STACK_LINE(226)
											int tmp46 = (int(tmp45) << int((int)24));		HX_STACK_VAR(tmp46,"tmp46");
											HX_STACK_LINE(226)
											int tmp47 = (int(destPixel) >> int((int)16));		HX_STACK_VAR(tmp47,"tmp47");
											HX_STACK_LINE(226)
											int tmp48 = (int(tmp47) & int((int)255));		HX_STACK_VAR(tmp48,"tmp48");
											HX_STACK_LINE(226)
											int tmp49 = (int(tmp48) & int((int)255));		HX_STACK_VAR(tmp49,"tmp49");
											HX_STACK_LINE(226)
											int tmp50 = (int(tmp49) << int((int)16));		HX_STACK_VAR(tmp50,"tmp50");
											HX_STACK_LINE(226)
											int tmp51 = (int(tmp46) | int(tmp50));		HX_STACK_VAR(tmp51,"tmp51");
											HX_STACK_LINE(226)
											int tmp52 = (int(value) & int((int)255));		HX_STACK_VAR(tmp52,"tmp52");
											HX_STACK_LINE(226)
											int tmp53 = (int(tmp52) << int((int)8));		HX_STACK_VAR(tmp53,"tmp53");
											HX_STACK_LINE(226)
											int tmp54 = (int(tmp51) | int(tmp53));		HX_STACK_VAR(tmp54,"tmp54");
											HX_STACK_LINE(226)
											int tmp55 = (int(destPixel) & int((int)255));		HX_STACK_VAR(tmp55,"tmp55");
											HX_STACK_LINE(226)
											int tmp56 = (int(tmp55) & int((int)255));		HX_STACK_VAR(tmp56,"tmp56");
											HX_STACK_LINE(226)
											int tmp57 = (int(tmp54) | int(tmp56));		HX_STACK_VAR(tmp57,"tmp57");
											HX_STACK_LINE(226)
											destPixel = tmp57;
										}
										HX_STACK_LINE(226)
										value;
									}
									HX_STACK_LINE(227)
									{
										HX_STACK_LINE(227)
										Dynamic tmp42;		HX_STACK_VAR(tmp42,"tmp42");
										HX_STACK_LINE(227)
										{
											HX_STACK_LINE(227)
											::lime::utils::ArrayBufferView tmp43 = ::lime::math::color::_RGBA::RGBA_Impl__obj::__clamp;		HX_STACK_VAR(tmp43,"tmp43");
											HX_STACK_LINE(227)
											::lime::utils::ArrayBufferView this1 = tmp43;		HX_STACK_VAR(this1,"this1");
											HX_STACK_LINE(227)
											Float tmp44 = (blendAlpha * ((Float)255.0));		HX_STACK_VAR(tmp44,"tmp44");
											HX_STACK_LINE(227)
											int tmp45 = ::Math_obj::round(tmp44);		HX_STACK_VAR(tmp45,"tmp45");
											HX_STACK_LINE(227)
											int idx = tmp45;		HX_STACK_VAR(idx,"idx");
											HX_STACK_LINE(227)
											int tmp46 = ::__hxcpp_memory_get_byte(this1->buffer->b,(this1->byteOffset + idx));		HX_STACK_VAR(tmp46,"tmp46");
											HX_STACK_LINE(227)
											tmp42 = (int(tmp46) & int((int)255));
										}
										HX_STACK_LINE(227)
										int value = tmp42;		HX_STACK_VAR(value,"value");
										HX_STACK_LINE(227)
										{
											HX_STACK_LINE(227)
											int tmp43 = (int(destPixel) >> int((int)24));		HX_STACK_VAR(tmp43,"tmp43");
											HX_STACK_LINE(227)
											int tmp44 = (int(tmp43) & int((int)255));		HX_STACK_VAR(tmp44,"tmp44");
											HX_STACK_LINE(227)
											int tmp45 = (int(tmp44) & int((int)255));		HX_STACK_VAR(tmp45,"tmp45");
											HX_STACK_LINE(227)
											int tmp46 = (int(tmp45) << int((int)24));		HX_STACK_VAR(tmp46,"tmp46");
											HX_STACK_LINE(227)
											int tmp47 = (int(destPixel) >> int((int)16));		HX_STACK_VAR(tmp47,"tmp47");
											HX_STACK_LINE(227)
											int tmp48 = (int(tmp47) & int((int)255));		HX_STACK_VAR(tmp48,"tmp48");
											HX_STACK_LINE(227)
											int tmp49 = (int(tmp48) & int((int)255));		HX_STACK_VAR(tmp49,"tmp49");
											HX_STACK_LINE(227)
											int tmp50 = (int(tmp49) << int((int)16));		HX_STACK_VAR(tmp50,"tmp50");
											HX_STACK_LINE(227)
											int tmp51 = (int(tmp46) | int(tmp50));		HX_STACK_VAR(tmp51,"tmp51");
											HX_STACK_LINE(227)
											int tmp52 = (int(destPixel) >> int((int)8));		HX_STACK_VAR(tmp52,"tmp52");
											HX_STACK_LINE(227)
											int tmp53 = (int(tmp52) & int((int)255));		HX_STACK_VAR(tmp53,"tmp53");
											HX_STACK_LINE(227)
											int tmp54 = (int(tmp53) & int((int)255));		HX_STACK_VAR(tmp54,"tmp54");
											HX_STACK_LINE(227)
											int tmp55 = (int(tmp54) << int((int)8));		HX_STACK_VAR(tmp55,"tmp55");
											HX_STACK_LINE(227)
											int tmp56 = (int(tmp51) | int(tmp55));		HX_STACK_VAR(tmp56,"tmp56");
											HX_STACK_LINE(227)
											int tmp57 = (int(value) & int((int)255));		HX_STACK_VAR(tmp57,"tmp57");
											HX_STACK_LINE(227)
											int tmp58 = (int(tmp56) | int(tmp57));		HX_STACK_VAR(tmp58,"tmp58");
											HX_STACK_LINE(227)
											destPixel = tmp58;
										}
										HX_STACK_LINE(227)
										value;
									}
								}
								HX_STACK_LINE(231)
								{
									HX_STACK_LINE(231)
									bool tmp42 = destPremultiplied;		HX_STACK_VAR(tmp42,"tmp42");
									HX_STACK_LINE(231)
									if ((tmp42)){
										HX_STACK_LINE(231)
										int tmp43 = (int(destPixel) & int((int)255));		HX_STACK_VAR(tmp43,"tmp43");
										HX_STACK_LINE(231)
										bool tmp44 = (tmp43 == (int)0);		HX_STACK_VAR(tmp44,"tmp44");
										HX_STACK_LINE(231)
										if ((tmp44)){
											HX_STACK_LINE(231)
											bool tmp45 = (destPixel != (int)0);		HX_STACK_VAR(tmp45,"tmp45");
											HX_STACK_LINE(231)
											if ((tmp45)){
												HX_STACK_LINE(231)
												destPixel = (int)0;
											}
										}
										else{
											HX_STACK_LINE(231)
											int tmp45 = (int(destPixel) & int((int)255));		HX_STACK_VAR(tmp45,"tmp45");
											HX_STACK_LINE(231)
											bool tmp46 = (tmp45 != (int)255);		HX_STACK_VAR(tmp46,"tmp46");
											HX_STACK_LINE(231)
											if ((tmp46)){
												HX_STACK_LINE(231)
												Dynamic tmp47;		HX_STACK_VAR(tmp47,"tmp47");
												HX_STACK_LINE(231)
												{
													HX_STACK_LINE(231)
													::lime::utils::ArrayBufferView tmp48 = ::lime::math::color::_RGBA::RGBA_Impl__obj::__alpha16;		HX_STACK_VAR(tmp48,"tmp48");
													HX_STACK_LINE(231)
													::lime::utils::ArrayBufferView this1 = tmp48;		HX_STACK_VAR(this1,"this1");
													HX_STACK_LINE(231)
													{
														HX_STACK_LINE(231)
														bool littleEndian = true;		HX_STACK_VAR(littleEndian,"littleEndian");
														HX_STACK_LINE(231)
														tmp47 = ::__hxcpp_memory_get_ui32(this1->buffer->b,(this1->byteOffset + (((int(destPixel) & int((int)255))) * (int)4)));
													}
												}
												HX_STACK_LINE(231)
												::lime::math::color::_RGBA::RGBA_Impl__obj::a16 = tmp47;
												HX_STACK_LINE(231)
												{
													HX_STACK_LINE(231)
													int tmp48 = (int(destPixel) >> int((int)24));		HX_STACK_VAR(tmp48,"tmp48");
													HX_STACK_LINE(231)
													int tmp49 = (int(tmp48) & int((int)255));		HX_STACK_VAR(tmp49,"tmp49");
													HX_STACK_LINE(231)
													int tmp50 = ::lime::math::color::_RGBA::RGBA_Impl__obj::a16;		HX_STACK_VAR(tmp50,"tmp50");
													HX_STACK_LINE(231)
													int tmp51 = (tmp49 * tmp50);		HX_STACK_VAR(tmp51,"tmp51");
													HX_STACK_LINE(231)
													int tmp52 = (int(tmp51) >> int((int)16));		HX_STACK_VAR(tmp52,"tmp52");
													HX_STACK_LINE(231)
													int tmp53 = (int(tmp52) & int((int)255));		HX_STACK_VAR(tmp53,"tmp53");
													HX_STACK_LINE(231)
													int tmp54 = (int(tmp53) << int((int)24));		HX_STACK_VAR(tmp54,"tmp54");
													HX_STACK_LINE(231)
													int tmp55 = (int(destPixel) >> int((int)16));		HX_STACK_VAR(tmp55,"tmp55");
													HX_STACK_LINE(231)
													int tmp56 = (int(tmp55) & int((int)255));		HX_STACK_VAR(tmp56,"tmp56");
													HX_STACK_LINE(231)
													int tmp57 = ::lime::math::color::_RGBA::RGBA_Impl__obj::a16;		HX_STACK_VAR(tmp57,"tmp57");
													HX_STACK_LINE(231)
													int tmp58 = (tmp56 * tmp57);		HX_STACK_VAR(tmp58,"tmp58");
													HX_STACK_LINE(231)
													int tmp59 = (int(tmp58) >> int((int)16));		HX_STACK_VAR(tmp59,"tmp59");
													HX_STACK_LINE(231)
													int tmp60 = (int(tmp59) & int((int)255));		HX_STACK_VAR(tmp60,"tmp60");
													HX_STACK_LINE(231)
													int tmp61 = (int(tmp60) << int((int)16));		HX_STACK_VAR(tmp61,"tmp61");
													HX_STACK_LINE(231)
													int tmp62 = (int(tmp54) | int(tmp61));		HX_STACK_VAR(tmp62,"tmp62");
													HX_STACK_LINE(231)
													int tmp63 = (int(destPixel) >> int((int)8));		HX_STACK_VAR(tmp63,"tmp63");
													HX_STACK_LINE(231)
													int tmp64 = (int(tmp63) & int((int)255));		HX_STACK_VAR(tmp64,"tmp64");
													HX_STACK_LINE(231)
													int tmp65 = ::lime::math::color::_RGBA::RGBA_Impl__obj::a16;		HX_STACK_VAR(tmp65,"tmp65");
													HX_STACK_LINE(231)
													int tmp66 = (tmp64 * tmp65);		HX_STACK_VAR(tmp66,"tmp66");
													HX_STACK_LINE(231)
													int tmp67 = (int(tmp66) >> int((int)16));		HX_STACK_VAR(tmp67,"tmp67");
													HX_STACK_LINE(231)
													int tmp68 = (int(tmp67) & int((int)255));		HX_STACK_VAR(tmp68,"tmp68");
													HX_STACK_LINE(231)
													int tmp69 = (int(tmp68) << int((int)8));		HX_STACK_VAR(tmp69,"tmp69");
													HX_STACK_LINE(231)
													int tmp70 = (int(tmp62) | int(tmp69));		HX_STACK_VAR(tmp70,"tmp70");
													HX_STACK_LINE(231)
													int tmp71 = (int(destPixel) & int((int)255));		HX_STACK_VAR(tmp71,"tmp71");
													HX_STACK_LINE(231)
													int tmp72 = (int(tmp71) & int((int)255));		HX_STACK_VAR(tmp72,"tmp72");
													HX_STACK_LINE(231)
													int tmp73 = (int(tmp70) | int(tmp72));		HX_STACK_VAR(tmp73,"tmp73");
													HX_STACK_LINE(231)
													destPixel = tmp73;
												}
											}
										}
									}
									HX_STACK_LINE(231)
									int tmp43 = destFormat;		HX_STACK_VAR(tmp43,"tmp43");
									HX_STACK_LINE(231)
									switch( (int)(tmp43)){
										case (int)2: {
											HX_STACK_LINE(231)
											{
												HX_STACK_LINE(231)
												int tmp44 = (int(destPixel) >> int((int)8));		HX_STACK_VAR(tmp44,"tmp44");
												HX_STACK_LINE(231)
												int tmp45 = (int(tmp44) & int((int)255));		HX_STACK_VAR(tmp45,"tmp45");
												HX_STACK_LINE(231)
												int val = tmp45;		HX_STACK_VAR(val,"val");
												HX_STACK_LINE(231)
												{
													HX_STACK_LINE(231)
													::__hxcpp_memory_set_byte(destData->buffer->b,(destData->byteOffset + destPosition),val);
													HX_STACK_LINE(231)
													val;
												}
											}
											HX_STACK_LINE(231)
											{
												HX_STACK_LINE(231)
												int tmp44 = (int(destPixel) >> int((int)16));		HX_STACK_VAR(tmp44,"tmp44");
												HX_STACK_LINE(231)
												int tmp45 = (int(tmp44) & int((int)255));		HX_STACK_VAR(tmp45,"tmp45");
												HX_STACK_LINE(231)
												int val = tmp45;		HX_STACK_VAR(val,"val");
												HX_STACK_LINE(231)
												{
													HX_STACK_LINE(231)
													::__hxcpp_memory_set_byte(destData->buffer->b,(destData->byteOffset + ((destPosition + (int)1))),val);
													HX_STACK_LINE(231)
													val;
												}
											}
											HX_STACK_LINE(231)
											{
												HX_STACK_LINE(231)
												int tmp44 = (int(destPixel) >> int((int)24));		HX_STACK_VAR(tmp44,"tmp44");
												HX_STACK_LINE(231)
												int tmp45 = (int(tmp44) & int((int)255));		HX_STACK_VAR(tmp45,"tmp45");
												HX_STACK_LINE(231)
												int val = tmp45;		HX_STACK_VAR(val,"val");
												HX_STACK_LINE(231)
												{
													HX_STACK_LINE(231)
													::__hxcpp_memory_set_byte(destData->buffer->b,(destData->byteOffset + ((destPosition + (int)2))),val);
													HX_STACK_LINE(231)
													val;
												}
											}
											HX_STACK_LINE(231)
											{
												HX_STACK_LINE(231)
												int tmp44 = (int(destPixel) & int((int)255));		HX_STACK_VAR(tmp44,"tmp44");
												HX_STACK_LINE(231)
												int val = tmp44;		HX_STACK_VAR(val,"val");
												HX_STACK_LINE(231)
												{
													HX_STACK_LINE(231)
													::__hxcpp_memory_set_byte(destData->buffer->b,(destData->byteOffset + ((destPosition + (int)3))),val);
													HX_STACK_LINE(231)
													val;
												}
											}
										}
										;break;
										case (int)0: {
											HX_STACK_LINE(231)
											{
												HX_STACK_LINE(231)
												int tmp44 = (int(destPixel) >> int((int)24));		HX_STACK_VAR(tmp44,"tmp44");
												HX_STACK_LINE(231)
												int tmp45 = (int(tmp44) & int((int)255));		HX_STACK_VAR(tmp45,"tmp45");
												HX_STACK_LINE(231)
												int val = tmp45;		HX_STACK_VAR(val,"val");
												HX_STACK_LINE(231)
												{
													HX_STACK_LINE(231)
													::__hxcpp_memory_set_byte(destData->buffer->b,(destData->byteOffset + destPosition),val);
													HX_STACK_LINE(231)
													val;
												}
											}
											HX_STACK_LINE(231)
											{
												HX_STACK_LINE(231)
												int tmp44 = (int(destPixel) >> int((int)16));		HX_STACK_VAR(tmp44,"tmp44");
												HX_STACK_LINE(231)
												int tmp45 = (int(tmp44) & int((int)255));		HX_STACK_VAR(tmp45,"tmp45");
												HX_STACK_LINE(231)
												int val = tmp45;		HX_STACK_VAR(val,"val");
												HX_STACK_LINE(231)
												{
													HX_STACK_LINE(231)
													::__hxcpp_memory_set_byte(destData->buffer->b,(destData->byteOffset + ((destPosition + (int)1))),val);
													HX_STACK_LINE(231)
													val;
												}
											}
											HX_STACK_LINE(231)
											{
												HX_STACK_LINE(231)
												int tmp44 = (int(destPixel) >> int((int)8));		HX_STACK_VAR(tmp44,"tmp44");
												HX_STACK_LINE(231)
												int tmp45 = (int(tmp44) & int((int)255));		HX_STACK_VAR(tmp45,"tmp45");
												HX_STACK_LINE(231)
												int val = tmp45;		HX_STACK_VAR(val,"val");
												HX_STACK_LINE(231)
												{
													HX_STACK_LINE(231)
													::__hxcpp_memory_set_byte(destData->buffer->b,(destData->byteOffset + ((destPosition + (int)2))),val);
													HX_STACK_LINE(231)
													val;
												}
											}
											HX_STACK_LINE(231)
											{
												HX_STACK_LINE(231)
												int tmp44 = (int(destPixel) & int((int)255));		HX_STACK_VAR(tmp44,"tmp44");
												HX_STACK_LINE(231)
												int val = tmp44;		HX_STACK_VAR(val,"val");
												HX_STACK_LINE(231)
												{
													HX_STACK_LINE(231)
													::__hxcpp_memory_set_byte(destData->buffer->b,(destData->byteOffset + ((destPosition + (int)3))),val);
													HX_STACK_LINE(231)
													val;
												}
											}
										}
										;break;
										case (int)1: {
											HX_STACK_LINE(231)
											{
												HX_STACK_LINE(231)
												int tmp44 = (int(destPixel) & int((int)255));		HX_STACK_VAR(tmp44,"tmp44");
												HX_STACK_LINE(231)
												int val = tmp44;		HX_STACK_VAR(val,"val");
												HX_STACK_LINE(231)
												{
													HX_STACK_LINE(231)
													::__hxcpp_memory_set_byte(destData->buffer->b,(destData->byteOffset + destPosition),val);
													HX_STACK_LINE(231)
													val;
												}
											}
											HX_STACK_LINE(231)
											{
												HX_STACK_LINE(231)
												int tmp44 = (int(destPixel) >> int((int)24));		HX_STACK_VAR(tmp44,"tmp44");
												HX_STACK_LINE(231)
												int tmp45 = (int(tmp44) & int((int)255));		HX_STACK_VAR(tmp45,"tmp45");
												HX_STACK_LINE(231)
												int val = tmp45;		HX_STACK_VAR(val,"val");
												HX_STACK_LINE(231)
												{
													HX_STACK_LINE(231)
													::__hxcpp_memory_set_byte(destData->buffer->b,(destData->byteOffset + ((destPosition + (int)1))),val);
													HX_STACK_LINE(231)
													val;
												}
											}
											HX_STACK_LINE(231)
											{
												HX_STACK_LINE(231)
												int tmp44 = (int(destPixel) >> int((int)16));		HX_STACK_VAR(tmp44,"tmp44");
												HX_STACK_LINE(231)
												int tmp45 = (int(tmp44) & int((int)255));		HX_STACK_VAR(tmp45,"tmp45");
												HX_STACK_LINE(231)
												int val = tmp45;		HX_STACK_VAR(val,"val");
												HX_STACK_LINE(231)
												{
													HX_STACK_LINE(231)
													::__hxcpp_memory_set_byte(destData->buffer->b,(destData->byteOffset + ((destPosition + (int)2))),val);
													HX_STACK_LINE(231)
													val;
												}
											}
											HX_STACK_LINE(231)
											{
												HX_STACK_LINE(231)
												int tmp44 = (int(destPixel) >> int((int)8));		HX_STACK_VAR(tmp44,"tmp44");
												HX_STACK_LINE(231)
												int tmp45 = (int(tmp44) & int((int)255));		HX_STACK_VAR(tmp45,"tmp45");
												HX_STACK_LINE(231)
												int val = tmp45;		HX_STACK_VAR(val,"val");
												HX_STACK_LINE(231)
												{
													HX_STACK_LINE(231)
													::__hxcpp_memory_set_byte(destData->buffer->b,(destData->byteOffset + ((destPosition + (int)3))),val);
													HX_STACK_LINE(231)
													val;
												}
											}
										}
										;break;
									}
								}
								HX_STACK_LINE(233)
								hx::AddEq(sourcePosition,(int)4);
								HX_STACK_LINE(234)
								hx::AddEq(destPosition,(int)4);
							}
						}
					}
				}
				else{
					HX_STACK_LINE(242)
					::lime::utils::ArrayBufferView tmp21 = alphaImage->buffer->data;		HX_STACK_VAR(tmp21,"tmp21");
					HX_STACK_LINE(242)
					::lime::utils::ArrayBufferView alphaData = tmp21;		HX_STACK_VAR(alphaData,"alphaData");
					HX_STACK_LINE(243)
					int tmp22 = alphaImage->buffer->format;		HX_STACK_VAR(tmp22,"tmp22");
					HX_STACK_LINE(243)
					int alphaFormat = tmp22;		HX_STACK_VAR(alphaFormat,"alphaFormat");
					HX_STACK_LINE(244)
					bool tmp23 = alphaImage->buffer->premultiplied;		HX_STACK_VAR(tmp23,"tmp23");
					HX_STACK_LINE(244)
					bool alphaPremultiplied = tmp23;		HX_STACK_VAR(alphaPremultiplied,"alphaPremultiplied");
					HX_STACK_LINE(246)
					::lime::graphics::Image tmp24 = alphaImage;		HX_STACK_VAR(tmp24,"tmp24");
					HX_STACK_LINE(246)
					::lime::math::Rectangle tmp25 = ::lime::math::Rectangle_obj::__new(alphaPoint->x,alphaPoint->y,destView->width,destView->height);		HX_STACK_VAR(tmp25,"tmp25");
					HX_STACK_LINE(246)
					::lime::graphics::utils::_ImageDataUtil::ImageDataView tmp26 = ::lime::graphics::utils::_ImageDataUtil::ImageDataView_obj::__new(tmp24,tmp25);		HX_STACK_VAR(tmp26,"tmp26");
					HX_STACK_LINE(246)
					::lime::graphics::utils::_ImageDataUtil::ImageDataView alphaView = tmp26;		HX_STACK_VAR(alphaView,"alphaView");
					HX_STACK_LINE(247)
					int alphaPosition;		HX_STACK_VAR(alphaPosition,"alphaPosition");
					HX_STACK_LINE(247)
					int alphaPixel;		HX_STACK_VAR(alphaPixel,"alphaPixel");
					HX_STACK_LINE(249)
					{
						HX_STACK_LINE(249)
						int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
						HX_STACK_LINE(249)
						int _g = alphaView->height;		HX_STACK_VAR(_g,"_g");
						HX_STACK_LINE(249)
						while((true)){
							HX_STACK_LINE(249)
							bool tmp27 = (_g1 < _g);		HX_STACK_VAR(tmp27,"tmp27");
							HX_STACK_LINE(249)
							bool tmp28 = !(tmp27);		HX_STACK_VAR(tmp28,"tmp28");
							HX_STACK_LINE(249)
							if ((tmp28)){
								HX_STACK_LINE(249)
								break;
							}
							HX_STACK_LINE(249)
							int tmp29 = (_g1)++;		HX_STACK_VAR(tmp29,"tmp29");
							HX_STACK_LINE(249)
							int y = tmp29;		HX_STACK_VAR(y,"y");
							HX_STACK_LINE(251)
							int tmp30 = sourceView->offset;		HX_STACK_VAR(tmp30,"tmp30");
							HX_STACK_LINE(251)
							int tmp31 = (sourceView->stride * y);		HX_STACK_VAR(tmp31,"tmp31");
							HX_STACK_LINE(251)
							int tmp32 = (tmp30 + tmp31);		HX_STACK_VAR(tmp32,"tmp32");
							HX_STACK_LINE(251)
							sourcePosition = tmp32;
							HX_STACK_LINE(252)
							int tmp33 = destView->offset;		HX_STACK_VAR(tmp33,"tmp33");
							HX_STACK_LINE(252)
							int tmp34 = (destView->stride * y);		HX_STACK_VAR(tmp34,"tmp34");
							HX_STACK_LINE(252)
							int tmp35 = (tmp33 + tmp34);		HX_STACK_VAR(tmp35,"tmp35");
							HX_STACK_LINE(252)
							destPosition = tmp35;
							HX_STACK_LINE(253)
							int tmp36 = alphaView->offset;		HX_STACK_VAR(tmp36,"tmp36");
							HX_STACK_LINE(253)
							int tmp37 = (alphaView->stride * y);		HX_STACK_VAR(tmp37,"tmp37");
							HX_STACK_LINE(253)
							int tmp38 = (tmp36 + tmp37);		HX_STACK_VAR(tmp38,"tmp38");
							HX_STACK_LINE(253)
							alphaPosition = tmp38;
							HX_STACK_LINE(255)
							{
								HX_STACK_LINE(255)
								int _g3 = (int)0;		HX_STACK_VAR(_g3,"_g3");
								HX_STACK_LINE(255)
								int _g2 = alphaView->width;		HX_STACK_VAR(_g2,"_g2");
								HX_STACK_LINE(255)
								while((true)){
									HX_STACK_LINE(255)
									bool tmp39 = (_g3 < _g2);		HX_STACK_VAR(tmp39,"tmp39");
									HX_STACK_LINE(255)
									bool tmp40 = !(tmp39);		HX_STACK_VAR(tmp40,"tmp40");
									HX_STACK_LINE(255)
									if ((tmp40)){
										HX_STACK_LINE(255)
										break;
									}
									HX_STACK_LINE(255)
									int tmp41 = (_g3)++;		HX_STACK_VAR(tmp41,"tmp41");
									HX_STACK_LINE(255)
									int x = tmp41;		HX_STACK_VAR(x,"x");
									HX_STACK_LINE(257)
									{
										HX_STACK_LINE(257)
										int tmp42 = sourceFormat;		HX_STACK_VAR(tmp42,"tmp42");
										HX_STACK_LINE(257)
										switch( (int)(tmp42)){
											case (int)2: {
												HX_STACK_LINE(257)
												int tmp43 = ::__hxcpp_memory_get_byte(sourceData->buffer->b,(sourceData->byteOffset + ((sourcePosition + (int)2))));		HX_STACK_VAR(tmp43,"tmp43");
												HX_STACK_LINE(257)
												Dynamic tmp44 = (int(tmp43) & int((int)255));		HX_STACK_VAR(tmp44,"tmp44");
												HX_STACK_LINE(257)
												int r = tmp44;		HX_STACK_VAR(r,"r");
												HX_STACK_LINE(257)
												int tmp45 = ::__hxcpp_memory_get_byte(sourceData->buffer->b,(sourceData->byteOffset + ((sourcePosition + (int)1))));		HX_STACK_VAR(tmp45,"tmp45");
												HX_STACK_LINE(257)
												Dynamic tmp46 = (int(tmp45) & int((int)255));		HX_STACK_VAR(tmp46,"tmp46");
												HX_STACK_LINE(257)
												int g = tmp46;		HX_STACK_VAR(g,"g");
												HX_STACK_LINE(257)
												int tmp47 = ::__hxcpp_memory_get_byte(sourceData->buffer->b,(sourceData->byteOffset + sourcePosition));		HX_STACK_VAR(tmp47,"tmp47");
												HX_STACK_LINE(257)
												Dynamic tmp48 = (int(tmp47) & int((int)255));		HX_STACK_VAR(tmp48,"tmp48");
												HX_STACK_LINE(257)
												int b = tmp48;		HX_STACK_VAR(b,"b");
												HX_STACK_LINE(257)
												int tmp49 = ::__hxcpp_memory_get_byte(sourceData->buffer->b,(sourceData->byteOffset + ((sourcePosition + (int)3))));		HX_STACK_VAR(tmp49,"tmp49");
												HX_STACK_LINE(257)
												Dynamic tmp50 = (int(tmp49) & int((int)255));		HX_STACK_VAR(tmp50,"tmp50");
												HX_STACK_LINE(257)
												int a = tmp50;		HX_STACK_VAR(a,"a");
												HX_STACK_LINE(257)
												int tmp51 = (int(r) & int((int)255));		HX_STACK_VAR(tmp51,"tmp51");
												HX_STACK_LINE(257)
												int tmp52 = (int(tmp51) << int((int)24));		HX_STACK_VAR(tmp52,"tmp52");
												HX_STACK_LINE(257)
												int tmp53 = (int(g) & int((int)255));		HX_STACK_VAR(tmp53,"tmp53");
												HX_STACK_LINE(257)
												int tmp54 = (int(tmp53) << int((int)16));		HX_STACK_VAR(tmp54,"tmp54");
												HX_STACK_LINE(257)
												int tmp55 = (int(tmp52) | int(tmp54));		HX_STACK_VAR(tmp55,"tmp55");
												HX_STACK_LINE(257)
												int tmp56 = (int(b) & int((int)255));		HX_STACK_VAR(tmp56,"tmp56");
												HX_STACK_LINE(257)
												int tmp57 = (int(tmp56) << int((int)8));		HX_STACK_VAR(tmp57,"tmp57");
												HX_STACK_LINE(257)
												int tmp58 = (int(tmp55) | int(tmp57));		HX_STACK_VAR(tmp58,"tmp58");
												HX_STACK_LINE(257)
												int tmp59 = (int(a) & int((int)255));		HX_STACK_VAR(tmp59,"tmp59");
												HX_STACK_LINE(257)
												int tmp60 = (int(tmp58) | int(tmp59));		HX_STACK_VAR(tmp60,"tmp60");
												HX_STACK_LINE(257)
												sourcePixel = tmp60;
											}
											;break;
											case (int)0: {
												HX_STACK_LINE(257)
												int tmp43 = ::__hxcpp_memory_get_byte(sourceData->buffer->b,(sourceData->byteOffset + sourcePosition));		HX_STACK_VAR(tmp43,"tmp43");
												HX_STACK_LINE(257)
												Dynamic tmp44 = (int(tmp43) & int((int)255));		HX_STACK_VAR(tmp44,"tmp44");
												HX_STACK_LINE(257)
												int r = tmp44;		HX_STACK_VAR(r,"r");
												HX_STACK_LINE(257)
												int tmp45 = ::__hxcpp_memory_get_byte(sourceData->buffer->b,(sourceData->byteOffset + ((sourcePosition + (int)1))));		HX_STACK_VAR(tmp45,"tmp45");
												HX_STACK_LINE(257)
												Dynamic tmp46 = (int(tmp45) & int((int)255));		HX_STACK_VAR(tmp46,"tmp46");
												HX_STACK_LINE(257)
												int g = tmp46;		HX_STACK_VAR(g,"g");
												HX_STACK_LINE(257)
												int tmp47 = ::__hxcpp_memory_get_byte(sourceData->buffer->b,(sourceData->byteOffset + ((sourcePosition + (int)2))));		HX_STACK_VAR(tmp47,"tmp47");
												HX_STACK_LINE(257)
												Dynamic tmp48 = (int(tmp47) & int((int)255));		HX_STACK_VAR(tmp48,"tmp48");
												HX_STACK_LINE(257)
												int b = tmp48;		HX_STACK_VAR(b,"b");
												HX_STACK_LINE(257)
												int tmp49 = ::__hxcpp_memory_get_byte(sourceData->buffer->b,(sourceData->byteOffset + ((sourcePosition + (int)3))));		HX_STACK_VAR(tmp49,"tmp49");
												HX_STACK_LINE(257)
												Dynamic tmp50 = (int(tmp49) & int((int)255));		HX_STACK_VAR(tmp50,"tmp50");
												HX_STACK_LINE(257)
												int a = tmp50;		HX_STACK_VAR(a,"a");
												HX_STACK_LINE(257)
												int tmp51 = (int(r) & int((int)255));		HX_STACK_VAR(tmp51,"tmp51");
												HX_STACK_LINE(257)
												int tmp52 = (int(tmp51) << int((int)24));		HX_STACK_VAR(tmp52,"tmp52");
												HX_STACK_LINE(257)
												int tmp53 = (int(g) & int((int)255));		HX_STACK_VAR(tmp53,"tmp53");
												HX_STACK_LINE(257)
												int tmp54 = (int(tmp53) << int((int)16));		HX_STACK_VAR(tmp54,"tmp54");
												HX_STACK_LINE(257)
												int tmp55 = (int(tmp52) | int(tmp54));		HX_STACK_VAR(tmp55,"tmp55");
												HX_STACK_LINE(257)
												int tmp56 = (int(b) & int((int)255));		HX_STACK_VAR(tmp56,"tmp56");
												HX_STACK_LINE(257)
												int tmp57 = (int(tmp56) << int((int)8));		HX_STACK_VAR(tmp57,"tmp57");
												HX_STACK_LINE(257)
												int tmp58 = (int(tmp55) | int(tmp57));		HX_STACK_VAR(tmp58,"tmp58");
												HX_STACK_LINE(257)
												int tmp59 = (int(a) & int((int)255));		HX_STACK_VAR(tmp59,"tmp59");
												HX_STACK_LINE(257)
												int tmp60 = (int(tmp58) | int(tmp59));		HX_STACK_VAR(tmp60,"tmp60");
												HX_STACK_LINE(257)
												sourcePixel = tmp60;
											}
											;break;
											case (int)1: {
												HX_STACK_LINE(257)
												int tmp43 = ::__hxcpp_memory_get_byte(sourceData->buffer->b,(sourceData->byteOffset + ((sourcePosition + (int)1))));		HX_STACK_VAR(tmp43,"tmp43");
												HX_STACK_LINE(257)
												Dynamic tmp44 = (int(tmp43) & int((int)255));		HX_STACK_VAR(tmp44,"tmp44");
												HX_STACK_LINE(257)
												int r = tmp44;		HX_STACK_VAR(r,"r");
												HX_STACK_LINE(257)
												int tmp45 = ::__hxcpp_memory_get_byte(sourceData->buffer->b,(sourceData->byteOffset + ((sourcePosition + (int)2))));		HX_STACK_VAR(tmp45,"tmp45");
												HX_STACK_LINE(257)
												Dynamic tmp46 = (int(tmp45) & int((int)255));		HX_STACK_VAR(tmp46,"tmp46");
												HX_STACK_LINE(257)
												int g = tmp46;		HX_STACK_VAR(g,"g");
												HX_STACK_LINE(257)
												int tmp47 = ::__hxcpp_memory_get_byte(sourceData->buffer->b,(sourceData->byteOffset + ((sourcePosition + (int)3))));		HX_STACK_VAR(tmp47,"tmp47");
												HX_STACK_LINE(257)
												Dynamic tmp48 = (int(tmp47) & int((int)255));		HX_STACK_VAR(tmp48,"tmp48");
												HX_STACK_LINE(257)
												int b = tmp48;		HX_STACK_VAR(b,"b");
												HX_STACK_LINE(257)
												int tmp49 = ::__hxcpp_memory_get_byte(sourceData->buffer->b,(sourceData->byteOffset + sourcePosition));		HX_STACK_VAR(tmp49,"tmp49");
												HX_STACK_LINE(257)
												Dynamic tmp50 = (int(tmp49) & int((int)255));		HX_STACK_VAR(tmp50,"tmp50");
												HX_STACK_LINE(257)
												int a = tmp50;		HX_STACK_VAR(a,"a");
												HX_STACK_LINE(257)
												int tmp51 = (int(r) & int((int)255));		HX_STACK_VAR(tmp51,"tmp51");
												HX_STACK_LINE(257)
												int tmp52 = (int(tmp51) << int((int)24));		HX_STACK_VAR(tmp52,"tmp52");
												HX_STACK_LINE(257)
												int tmp53 = (int(g) & int((int)255));		HX_STACK_VAR(tmp53,"tmp53");
												HX_STACK_LINE(257)
												int tmp54 = (int(tmp53) << int((int)16));		HX_STACK_VAR(tmp54,"tmp54");
												HX_STACK_LINE(257)
												int tmp55 = (int(tmp52) | int(tmp54));		HX_STACK_VAR(tmp55,"tmp55");
												HX_STACK_LINE(257)
												int tmp56 = (int(b) & int((int)255));		HX_STACK_VAR(tmp56,"tmp56");
												HX_STACK_LINE(257)
												int tmp57 = (int(tmp56) << int((int)8));		HX_STACK_VAR(tmp57,"tmp57");
												HX_STACK_LINE(257)
												int tmp58 = (int(tmp55) | int(tmp57));		HX_STACK_VAR(tmp58,"tmp58");
												HX_STACK_LINE(257)
												int tmp59 = (int(a) & int((int)255));		HX_STACK_VAR(tmp59,"tmp59");
												HX_STACK_LINE(257)
												int tmp60 = (int(tmp58) | int(tmp59));		HX_STACK_VAR(tmp60,"tmp60");
												HX_STACK_LINE(257)
												sourcePixel = tmp60;
											}
											;break;
										}
										HX_STACK_LINE(257)
										bool tmp43 = sourcePremultiplied;		HX_STACK_VAR(tmp43,"tmp43");
										HX_STACK_LINE(257)
										if ((tmp43)){
											HX_STACK_LINE(257)
											int tmp44 = (int(sourcePixel) & int((int)255));		HX_STACK_VAR(tmp44,"tmp44");
											HX_STACK_LINE(257)
											bool tmp45 = (tmp44 != (int)0);		HX_STACK_VAR(tmp45,"tmp45");
											HX_STACK_LINE(257)
											bool tmp46;		HX_STACK_VAR(tmp46,"tmp46");
											HX_STACK_LINE(257)
											if ((tmp45)){
												HX_STACK_LINE(257)
												int tmp47 = (int(sourcePixel) & int((int)255));		HX_STACK_VAR(tmp47,"tmp47");
												HX_STACK_LINE(257)
												int tmp48 = tmp47;		HX_STACK_VAR(tmp48,"tmp48");
												HX_STACK_LINE(257)
												tmp46 = (tmp48 != (int)255);
											}
											else{
												HX_STACK_LINE(257)
												tmp46 = false;
											}
											HX_STACK_LINE(257)
											if ((tmp46)){
												HX_STACK_LINE(257)
												int tmp47 = (int(sourcePixel) & int((int)255));		HX_STACK_VAR(tmp47,"tmp47");
												HX_STACK_LINE(257)
												Float tmp48 = (Float(((Float)255.0)) / Float(tmp47));		HX_STACK_VAR(tmp48,"tmp48");
												HX_STACK_LINE(257)
												::lime::math::color::_RGBA::RGBA_Impl__obj::unmult = tmp48;
												HX_STACK_LINE(257)
												{
													HX_STACK_LINE(257)
													Dynamic tmp49;		HX_STACK_VAR(tmp49,"tmp49");
													HX_STACK_LINE(257)
													{
														HX_STACK_LINE(257)
														::lime::utils::ArrayBufferView tmp50 = ::lime::math::color::_RGBA::RGBA_Impl__obj::__clamp;		HX_STACK_VAR(tmp50,"tmp50");
														HX_STACK_LINE(257)
														::lime::utils::ArrayBufferView this1 = tmp50;		HX_STACK_VAR(this1,"this1");
														HX_STACK_LINE(257)
														int tmp51 = (int(sourcePixel) >> int((int)24));		HX_STACK_VAR(tmp51,"tmp51");
														HX_STACK_LINE(257)
														int tmp52 = (int(tmp51) & int((int)255));		HX_STACK_VAR(tmp52,"tmp52");
														HX_STACK_LINE(257)
														Float tmp53 = ::lime::math::color::_RGBA::RGBA_Impl__obj::unmult;		HX_STACK_VAR(tmp53,"tmp53");
														HX_STACK_LINE(257)
														Float tmp54 = (tmp52 * tmp53);		HX_STACK_VAR(tmp54,"tmp54");
														HX_STACK_LINE(257)
														int tmp55 = ::Math_obj::round(tmp54);		HX_STACK_VAR(tmp55,"tmp55");
														HX_STACK_LINE(257)
														int idx = tmp55;		HX_STACK_VAR(idx,"idx");
														HX_STACK_LINE(257)
														int tmp56 = ::__hxcpp_memory_get_byte(this1->buffer->b,(this1->byteOffset + idx));		HX_STACK_VAR(tmp56,"tmp56");
														HX_STACK_LINE(257)
														tmp49 = (int(tmp56) & int((int)255));
													}
													HX_STACK_LINE(257)
													int r = tmp49;		HX_STACK_VAR(r,"r");
													HX_STACK_LINE(257)
													Dynamic tmp50;		HX_STACK_VAR(tmp50,"tmp50");
													HX_STACK_LINE(257)
													{
														HX_STACK_LINE(257)
														::lime::utils::ArrayBufferView tmp51 = ::lime::math::color::_RGBA::RGBA_Impl__obj::__clamp;		HX_STACK_VAR(tmp51,"tmp51");
														HX_STACK_LINE(257)
														::lime::utils::ArrayBufferView this1 = tmp51;		HX_STACK_VAR(this1,"this1");
														HX_STACK_LINE(257)
														int tmp52 = (int(sourcePixel) >> int((int)16));		HX_STACK_VAR(tmp52,"tmp52");
														HX_STACK_LINE(257)
														int tmp53 = (int(tmp52) & int((int)255));		HX_STACK_VAR(tmp53,"tmp53");
														HX_STACK_LINE(257)
														Float tmp54 = ::lime::math::color::_RGBA::RGBA_Impl__obj::unmult;		HX_STACK_VAR(tmp54,"tmp54");
														HX_STACK_LINE(257)
														Float tmp55 = (tmp53 * tmp54);		HX_STACK_VAR(tmp55,"tmp55");
														HX_STACK_LINE(257)
														int tmp56 = ::Math_obj::round(tmp55);		HX_STACK_VAR(tmp56,"tmp56");
														HX_STACK_LINE(257)
														int idx = tmp56;		HX_STACK_VAR(idx,"idx");
														HX_STACK_LINE(257)
														int tmp57 = ::__hxcpp_memory_get_byte(this1->buffer->b,(this1->byteOffset + idx));		HX_STACK_VAR(tmp57,"tmp57");
														HX_STACK_LINE(257)
														tmp50 = (int(tmp57) & int((int)255));
													}
													HX_STACK_LINE(257)
													int g = tmp50;		HX_STACK_VAR(g,"g");
													HX_STACK_LINE(257)
													Dynamic tmp51;		HX_STACK_VAR(tmp51,"tmp51");
													HX_STACK_LINE(257)
													{
														HX_STACK_LINE(257)
														::lime::utils::ArrayBufferView tmp52 = ::lime::math::color::_RGBA::RGBA_Impl__obj::__clamp;		HX_STACK_VAR(tmp52,"tmp52");
														HX_STACK_LINE(257)
														::lime::utils::ArrayBufferView this1 = tmp52;		HX_STACK_VAR(this1,"this1");
														HX_STACK_LINE(257)
														int tmp53 = (int(sourcePixel) >> int((int)8));		HX_STACK_VAR(tmp53,"tmp53");
														HX_STACK_LINE(257)
														int tmp54 = (int(tmp53) & int((int)255));		HX_STACK_VAR(tmp54,"tmp54");
														HX_STACK_LINE(257)
														Float tmp55 = ::lime::math::color::_RGBA::RGBA_Impl__obj::unmult;		HX_STACK_VAR(tmp55,"tmp55");
														HX_STACK_LINE(257)
														Float tmp56 = (tmp54 * tmp55);		HX_STACK_VAR(tmp56,"tmp56");
														HX_STACK_LINE(257)
														int tmp57 = ::Math_obj::round(tmp56);		HX_STACK_VAR(tmp57,"tmp57");
														HX_STACK_LINE(257)
														int idx = tmp57;		HX_STACK_VAR(idx,"idx");
														HX_STACK_LINE(257)
														int tmp58 = ::__hxcpp_memory_get_byte(this1->buffer->b,(this1->byteOffset + idx));		HX_STACK_VAR(tmp58,"tmp58");
														HX_STACK_LINE(257)
														tmp51 = (int(tmp58) & int((int)255));
													}
													HX_STACK_LINE(257)
													int b = tmp51;		HX_STACK_VAR(b,"b");
													HX_STACK_LINE(257)
													int tmp52 = (int(r) & int((int)255));		HX_STACK_VAR(tmp52,"tmp52");
													HX_STACK_LINE(257)
													int tmp53 = (int(tmp52) << int((int)24));		HX_STACK_VAR(tmp53,"tmp53");
													HX_STACK_LINE(257)
													int tmp54 = (int(g) & int((int)255));		HX_STACK_VAR(tmp54,"tmp54");
													HX_STACK_LINE(257)
													int tmp55 = (int(tmp54) << int((int)16));		HX_STACK_VAR(tmp55,"tmp55");
													HX_STACK_LINE(257)
													int tmp56 = (int(tmp53) | int(tmp55));		HX_STACK_VAR(tmp56,"tmp56");
													HX_STACK_LINE(257)
													int tmp57 = (int(b) & int((int)255));		HX_STACK_VAR(tmp57,"tmp57");
													HX_STACK_LINE(257)
													int tmp58 = (int(tmp57) << int((int)8));		HX_STACK_VAR(tmp58,"tmp58");
													HX_STACK_LINE(257)
													int tmp59 = (int(tmp56) | int(tmp58));		HX_STACK_VAR(tmp59,"tmp59");
													HX_STACK_LINE(257)
													int tmp60 = (int(sourcePixel) & int((int)255));		HX_STACK_VAR(tmp60,"tmp60");
													HX_STACK_LINE(257)
													int tmp61 = (int(tmp60) & int((int)255));		HX_STACK_VAR(tmp61,"tmp61");
													HX_STACK_LINE(257)
													int tmp62 = (int(tmp59) | int(tmp61));		HX_STACK_VAR(tmp62,"tmp62");
													HX_STACK_LINE(257)
													sourcePixel = tmp62;
												}
											}
										}
									}
									HX_STACK_LINE(258)
									{
										HX_STACK_LINE(258)
										int tmp42 = destFormat;		HX_STACK_VAR(tmp42,"tmp42");
										HX_STACK_LINE(258)
										switch( (int)(tmp42)){
											case (int)2: {
												HX_STACK_LINE(258)
												int tmp43 = ::__hxcpp_memory_get_byte(destData->buffer->b,(destData->byteOffset + ((destPosition + (int)2))));		HX_STACK_VAR(tmp43,"tmp43");
												HX_STACK_LINE(258)
												Dynamic tmp44 = (int(tmp43) & int((int)255));		HX_STACK_VAR(tmp44,"tmp44");
												HX_STACK_LINE(258)
												int r = tmp44;		HX_STACK_VAR(r,"r");
												HX_STACK_LINE(258)
												int tmp45 = ::__hxcpp_memory_get_byte(destData->buffer->b,(destData->byteOffset + ((destPosition + (int)1))));		HX_STACK_VAR(tmp45,"tmp45");
												HX_STACK_LINE(258)
												Dynamic tmp46 = (int(tmp45) & int((int)255));		HX_STACK_VAR(tmp46,"tmp46");
												HX_STACK_LINE(258)
												int g = tmp46;		HX_STACK_VAR(g,"g");
												HX_STACK_LINE(258)
												int tmp47 = ::__hxcpp_memory_get_byte(destData->buffer->b,(destData->byteOffset + destPosition));		HX_STACK_VAR(tmp47,"tmp47");
												HX_STACK_LINE(258)
												Dynamic tmp48 = (int(tmp47) & int((int)255));		HX_STACK_VAR(tmp48,"tmp48");
												HX_STACK_LINE(258)
												int b = tmp48;		HX_STACK_VAR(b,"b");
												HX_STACK_LINE(258)
												int tmp49 = ::__hxcpp_memory_get_byte(destData->buffer->b,(destData->byteOffset + ((destPosition + (int)3))));		HX_STACK_VAR(tmp49,"tmp49");
												HX_STACK_LINE(258)
												Dynamic tmp50 = (int(tmp49) & int((int)255));		HX_STACK_VAR(tmp50,"tmp50");
												HX_STACK_LINE(258)
												int a = tmp50;		HX_STACK_VAR(a,"a");
												HX_STACK_LINE(258)
												int tmp51 = (int(r) & int((int)255));		HX_STACK_VAR(tmp51,"tmp51");
												HX_STACK_LINE(258)
												int tmp52 = (int(tmp51) << int((int)24));		HX_STACK_VAR(tmp52,"tmp52");
												HX_STACK_LINE(258)
												int tmp53 = (int(g) & int((int)255));		HX_STACK_VAR(tmp53,"tmp53");
												HX_STACK_LINE(258)
												int tmp54 = (int(tmp53) << int((int)16));		HX_STACK_VAR(tmp54,"tmp54");
												HX_STACK_LINE(258)
												int tmp55 = (int(tmp52) | int(tmp54));		HX_STACK_VAR(tmp55,"tmp55");
												HX_STACK_LINE(258)
												int tmp56 = (int(b) & int((int)255));		HX_STACK_VAR(tmp56,"tmp56");
												HX_STACK_LINE(258)
												int tmp57 = (int(tmp56) << int((int)8));		HX_STACK_VAR(tmp57,"tmp57");
												HX_STACK_LINE(258)
												int tmp58 = (int(tmp55) | int(tmp57));		HX_STACK_VAR(tmp58,"tmp58");
												HX_STACK_LINE(258)
												int tmp59 = (int(a) & int((int)255));		HX_STACK_VAR(tmp59,"tmp59");
												HX_STACK_LINE(258)
												int tmp60 = (int(tmp58) | int(tmp59));		HX_STACK_VAR(tmp60,"tmp60");
												HX_STACK_LINE(258)
												destPixel = tmp60;
											}
											;break;
											case (int)0: {
												HX_STACK_LINE(258)
												int tmp43 = ::__hxcpp_memory_get_byte(destData->buffer->b,(destData->byteOffset + destPosition));		HX_STACK_VAR(tmp43,"tmp43");
												HX_STACK_LINE(258)
												Dynamic tmp44 = (int(tmp43) & int((int)255));		HX_STACK_VAR(tmp44,"tmp44");
												HX_STACK_LINE(258)
												int r = tmp44;		HX_STACK_VAR(r,"r");
												HX_STACK_LINE(258)
												int tmp45 = ::__hxcpp_memory_get_byte(destData->buffer->b,(destData->byteOffset + ((destPosition + (int)1))));		HX_STACK_VAR(tmp45,"tmp45");
												HX_STACK_LINE(258)
												Dynamic tmp46 = (int(tmp45) & int((int)255));		HX_STACK_VAR(tmp46,"tmp46");
												HX_STACK_LINE(258)
												int g = tmp46;		HX_STACK_VAR(g,"g");
												HX_STACK_LINE(258)
												int tmp47 = ::__hxcpp_memory_get_byte(destData->buffer->b,(destData->byteOffset + ((destPosition + (int)2))));		HX_STACK_VAR(tmp47,"tmp47");
												HX_STACK_LINE(258)
												Dynamic tmp48 = (int(tmp47) & int((int)255));		HX_STACK_VAR(tmp48,"tmp48");
												HX_STACK_LINE(258)
												int b = tmp48;		HX_STACK_VAR(b,"b");
												HX_STACK_LINE(258)
												int tmp49 = ::__hxcpp_memory_get_byte(destData->buffer->b,(destData->byteOffset + ((destPosition + (int)3))));		HX_STACK_VAR(tmp49,"tmp49");
												HX_STACK_LINE(258)
												Dynamic tmp50 = (int(tmp49) & int((int)255));		HX_STACK_VAR(tmp50,"tmp50");
												HX_STACK_LINE(258)
												int a = tmp50;		HX_STACK_VAR(a,"a");
												HX_STACK_LINE(258)
												int tmp51 = (int(r) & int((int)255));		HX_STACK_VAR(tmp51,"tmp51");
												HX_STACK_LINE(258)
												int tmp52 = (int(tmp51) << int((int)24));		HX_STACK_VAR(tmp52,"tmp52");
												HX_STACK_LINE(258)
												int tmp53 = (int(g) & int((int)255));		HX_STACK_VAR(tmp53,"tmp53");
												HX_STACK_LINE(258)
												int tmp54 = (int(tmp53) << int((int)16));		HX_STACK_VAR(tmp54,"tmp54");
												HX_STACK_LINE(258)
												int tmp55 = (int(tmp52) | int(tmp54));		HX_STACK_VAR(tmp55,"tmp55");
												HX_STACK_LINE(258)
												int tmp56 = (int(b) & int((int)255));		HX_STACK_VAR(tmp56,"tmp56");
												HX_STACK_LINE(258)
												int tmp57 = (int(tmp56) << int((int)8));		HX_STACK_VAR(tmp57,"tmp57");
												HX_STACK_LINE(258)
												int tmp58 = (int(tmp55) | int(tmp57));		HX_STACK_VAR(tmp58,"tmp58");
												HX_STACK_LINE(258)
												int tmp59 = (int(a) & int((int)255));		HX_STACK_VAR(tmp59,"tmp59");
												HX_STACK_LINE(258)
												int tmp60 = (int(tmp58) | int(tmp59));		HX_STACK_VAR(tmp60,"tmp60");
												HX_STACK_LINE(258)
												destPixel = tmp60;
											}
											;break;
											case (int)1: {
												HX_STACK_LINE(258)
												int tmp43 = ::__hxcpp_memory_get_byte(destData->buffer->b,(destData->byteOffset + ((destPosition + (int)1))));		HX_STACK_VAR(tmp43,"tmp43");
												HX_STACK_LINE(258)
												Dynamic tmp44 = (int(tmp43) & int((int)255));		HX_STACK_VAR(tmp44,"tmp44");
												HX_STACK_LINE(258)
												int r = tmp44;		HX_STACK_VAR(r,"r");
												HX_STACK_LINE(258)
												int tmp45 = ::__hxcpp_memory_get_byte(destData->buffer->b,(destData->byteOffset + ((destPosition + (int)2))));		HX_STACK_VAR(tmp45,"tmp45");
												HX_STACK_LINE(258)
												Dynamic tmp46 = (int(tmp45) & int((int)255));		HX_STACK_VAR(tmp46,"tmp46");
												HX_STACK_LINE(258)
												int g = tmp46;		HX_STACK_VAR(g,"g");
												HX_STACK_LINE(258)
												int tmp47 = ::__hxcpp_memory_get_byte(destData->buffer->b,(destData->byteOffset + ((destPosition + (int)3))));		HX_STACK_VAR(tmp47,"tmp47");
												HX_STACK_LINE(258)
												Dynamic tmp48 = (int(tmp47) & int((int)255));		HX_STACK_VAR(tmp48,"tmp48");
												HX_STACK_LINE(258)
												int b = tmp48;		HX_STACK_VAR(b,"b");
												HX_STACK_LINE(258)
												int tmp49 = ::__hxcpp_memory_get_byte(destData->buffer->b,(destData->byteOffset + destPosition));		HX_STACK_VAR(tmp49,"tmp49");
												HX_STACK_LINE(258)
												Dynamic tmp50 = (int(tmp49) & int((int)255));		HX_STACK_VAR(tmp50,"tmp50");
												HX_STACK_LINE(258)
												int a = tmp50;		HX_STACK_VAR(a,"a");
												HX_STACK_LINE(258)
												int tmp51 = (int(r) & int((int)255));		HX_STACK_VAR(tmp51,"tmp51");
												HX_STACK_LINE(258)
												int tmp52 = (int(tmp51) << int((int)24));		HX_STACK_VAR(tmp52,"tmp52");
												HX_STACK_LINE(258)
												int tmp53 = (int(g) & int((int)255));		HX_STACK_VAR(tmp53,"tmp53");
												HX_STACK_LINE(258)
												int tmp54 = (int(tmp53) << int((int)16));		HX_STACK_VAR(tmp54,"tmp54");
												HX_STACK_LINE(258)
												int tmp55 = (int(tmp52) | int(tmp54));		HX_STACK_VAR(tmp55,"tmp55");
												HX_STACK_LINE(258)
												int tmp56 = (int(b) & int((int)255));		HX_STACK_VAR(tmp56,"tmp56");
												HX_STACK_LINE(258)
												int tmp57 = (int(tmp56) << int((int)8));		HX_STACK_VAR(tmp57,"tmp57");
												HX_STACK_LINE(258)
												int tmp58 = (int(tmp55) | int(tmp57));		HX_STACK_VAR(tmp58,"tmp58");
												HX_STACK_LINE(258)
												int tmp59 = (int(a) & int((int)255));		HX_STACK_VAR(tmp59,"tmp59");
												HX_STACK_LINE(258)
												int tmp60 = (int(tmp58) | int(tmp59));		HX_STACK_VAR(tmp60,"tmp60");
												HX_STACK_LINE(258)
												destPixel = tmp60;
											}
											;break;
										}
										HX_STACK_LINE(258)
										bool tmp43 = destPremultiplied;		HX_STACK_VAR(tmp43,"tmp43");
										HX_STACK_LINE(258)
										if ((tmp43)){
											HX_STACK_LINE(258)
											int tmp44 = (int(destPixel) & int((int)255));		HX_STACK_VAR(tmp44,"tmp44");
											HX_STACK_LINE(258)
											bool tmp45 = (tmp44 != (int)0);		HX_STACK_VAR(tmp45,"tmp45");
											HX_STACK_LINE(258)
											bool tmp46;		HX_STACK_VAR(tmp46,"tmp46");
											HX_STACK_LINE(258)
											if ((tmp45)){
												HX_STACK_LINE(258)
												int tmp47 = (int(destPixel) & int((int)255));		HX_STACK_VAR(tmp47,"tmp47");
												HX_STACK_LINE(258)
												int tmp48 = tmp47;		HX_STACK_VAR(tmp48,"tmp48");
												HX_STACK_LINE(258)
												tmp46 = (tmp48 != (int)255);
											}
											else{
												HX_STACK_LINE(258)
												tmp46 = false;
											}
											HX_STACK_LINE(258)
											if ((tmp46)){
												HX_STACK_LINE(258)
												int tmp47 = (int(destPixel) & int((int)255));		HX_STACK_VAR(tmp47,"tmp47");
												HX_STACK_LINE(258)
												Float tmp48 = (Float(((Float)255.0)) / Float(tmp47));		HX_STACK_VAR(tmp48,"tmp48");
												HX_STACK_LINE(258)
												::lime::math::color::_RGBA::RGBA_Impl__obj::unmult = tmp48;
												HX_STACK_LINE(258)
												{
													HX_STACK_LINE(258)
													Dynamic tmp49;		HX_STACK_VAR(tmp49,"tmp49");
													HX_STACK_LINE(258)
													{
														HX_STACK_LINE(258)
														::lime::utils::ArrayBufferView tmp50 = ::lime::math::color::_RGBA::RGBA_Impl__obj::__clamp;		HX_STACK_VAR(tmp50,"tmp50");
														HX_STACK_LINE(258)
														::lime::utils::ArrayBufferView this1 = tmp50;		HX_STACK_VAR(this1,"this1");
														HX_STACK_LINE(258)
														int tmp51 = (int(destPixel) >> int((int)24));		HX_STACK_VAR(tmp51,"tmp51");
														HX_STACK_LINE(258)
														int tmp52 = (int(tmp51) & int((int)255));		HX_STACK_VAR(tmp52,"tmp52");
														HX_STACK_LINE(258)
														Float tmp53 = ::lime::math::color::_RGBA::RGBA_Impl__obj::unmult;		HX_STACK_VAR(tmp53,"tmp53");
														HX_STACK_LINE(258)
														Float tmp54 = (tmp52 * tmp53);		HX_STACK_VAR(tmp54,"tmp54");
														HX_STACK_LINE(258)
														int tmp55 = ::Math_obj::round(tmp54);		HX_STACK_VAR(tmp55,"tmp55");
														HX_STACK_LINE(258)
														int idx = tmp55;		HX_STACK_VAR(idx,"idx");
														HX_STACK_LINE(258)
														int tmp56 = ::__hxcpp_memory_get_byte(this1->buffer->b,(this1->byteOffset + idx));		HX_STACK_VAR(tmp56,"tmp56");
														HX_STACK_LINE(258)
														tmp49 = (int(tmp56) & int((int)255));
													}
													HX_STACK_LINE(258)
													int r = tmp49;		HX_STACK_VAR(r,"r");
													HX_STACK_LINE(258)
													Dynamic tmp50;		HX_STACK_VAR(tmp50,"tmp50");
													HX_STACK_LINE(258)
													{
														HX_STACK_LINE(258)
														::lime::utils::ArrayBufferView tmp51 = ::lime::math::color::_RGBA::RGBA_Impl__obj::__clamp;		HX_STACK_VAR(tmp51,"tmp51");
														HX_STACK_LINE(258)
														::lime::utils::ArrayBufferView this1 = tmp51;		HX_STACK_VAR(this1,"this1");
														HX_STACK_LINE(258)
														int tmp52 = (int(destPixel) >> int((int)16));		HX_STACK_VAR(tmp52,"tmp52");
														HX_STACK_LINE(258)
														int tmp53 = (int(tmp52) & int((int)255));		HX_STACK_VAR(tmp53,"tmp53");
														HX_STACK_LINE(258)
														Float tmp54 = ::lime::math::color::_RGBA::RGBA_Impl__obj::unmult;		HX_STACK_VAR(tmp54,"tmp54");
														HX_STACK_LINE(258)
														Float tmp55 = (tmp53 * tmp54);		HX_STACK_VAR(tmp55,"tmp55");
														HX_STACK_LINE(258)
														int tmp56 = ::Math_obj::round(tmp55);		HX_STACK_VAR(tmp56,"tmp56");
														HX_STACK_LINE(258)
														int idx = tmp56;		HX_STACK_VAR(idx,"idx");
														HX_STACK_LINE(258)
														int tmp57 = ::__hxcpp_memory_get_byte(this1->buffer->b,(this1->byteOffset + idx));		HX_STACK_VAR(tmp57,"tmp57");
														HX_STACK_LINE(258)
														tmp50 = (int(tmp57) & int((int)255));
													}
													HX_STACK_LINE(258)
													int g = tmp50;		HX_STACK_VAR(g,"g");
													HX_STACK_LINE(258)
													Dynamic tmp51;		HX_STACK_VAR(tmp51,"tmp51");
													HX_STACK_LINE(258)
													{
														HX_STACK_LINE(258)
														::lime::utils::ArrayBufferView tmp52 = ::lime::math::color::_RGBA::RGBA_Impl__obj::__clamp;		HX_STACK_VAR(tmp52,"tmp52");
														HX_STACK_LINE(258)
														::lime::utils::ArrayBufferView this1 = tmp52;		HX_STACK_VAR(this1,"this1");
														HX_STACK_LINE(258)
														int tmp53 = (int(destPixel) >> int((int)8));		HX_STACK_VAR(tmp53,"tmp53");
														HX_STACK_LINE(258)
														int tmp54 = (int(tmp53) & int((int)255));		HX_STACK_VAR(tmp54,"tmp54");
														HX_STACK_LINE(258)
														Float tmp55 = ::lime::math::color::_RGBA::RGBA_Impl__obj::unmult;		HX_STACK_VAR(tmp55,"tmp55");
														HX_STACK_LINE(258)
														Float tmp56 = (tmp54 * tmp55);		HX_STACK_VAR(tmp56,"tmp56");
														HX_STACK_LINE(258)
														int tmp57 = ::Math_obj::round(tmp56);		HX_STACK_VAR(tmp57,"tmp57");
														HX_STACK_LINE(258)
														int idx = tmp57;		HX_STACK_VAR(idx,"idx");
														HX_STACK_LINE(258)
														int tmp58 = ::__hxcpp_memory_get_byte(this1->buffer->b,(this1->byteOffset + idx));		HX_STACK_VAR(tmp58,"tmp58");
														HX_STACK_LINE(258)
														tmp51 = (int(tmp58) & int((int)255));
													}
													HX_STACK_LINE(258)
													int b = tmp51;		HX_STACK_VAR(b,"b");
													HX_STACK_LINE(258)
													int tmp52 = (int(r) & int((int)255));		HX_STACK_VAR(tmp52,"tmp52");
													HX_STACK_LINE(258)
													int tmp53 = (int(tmp52) << int((int)24));		HX_STACK_VAR(tmp53,"tmp53");
													HX_STACK_LINE(258)
													int tmp54 = (int(g) & int((int)255));		HX_STACK_VAR(tmp54,"tmp54");
													HX_STACK_LINE(258)
													int tmp55 = (int(tmp54) << int((int)16));		HX_STACK_VAR(tmp55,"tmp55");
													HX_STACK_LINE(258)
													int tmp56 = (int(tmp53) | int(tmp55));		HX_STACK_VAR(tmp56,"tmp56");
													HX_STACK_LINE(258)
													int tmp57 = (int(b) & int((int)255));		HX_STACK_VAR(tmp57,"tmp57");
													HX_STACK_LINE(258)
													int tmp58 = (int(tmp57) << int((int)8));		HX_STACK_VAR(tmp58,"tmp58");
													HX_STACK_LINE(258)
													int tmp59 = (int(tmp56) | int(tmp58));		HX_STACK_VAR(tmp59,"tmp59");
													HX_STACK_LINE(258)
													int tmp60 = (int(destPixel) & int((int)255));		HX_STACK_VAR(tmp60,"tmp60");
													HX_STACK_LINE(258)
													int tmp61 = (int(tmp60) & int((int)255));		HX_STACK_VAR(tmp61,"tmp61");
													HX_STACK_LINE(258)
													int tmp62 = (int(tmp59) | int(tmp61));		HX_STACK_VAR(tmp62,"tmp62");
													HX_STACK_LINE(258)
													destPixel = tmp62;
												}
											}
										}
									}
									HX_STACK_LINE(259)
									{
										HX_STACK_LINE(259)
										int tmp42 = alphaFormat;		HX_STACK_VAR(tmp42,"tmp42");
										HX_STACK_LINE(259)
										switch( (int)(tmp42)){
											case (int)2: {
												HX_STACK_LINE(259)
												int tmp43 = ::__hxcpp_memory_get_byte(alphaData->buffer->b,(alphaData->byteOffset + ((alphaPosition + (int)2))));		HX_STACK_VAR(tmp43,"tmp43");
												HX_STACK_LINE(259)
												Dynamic tmp44 = (int(tmp43) & int((int)255));		HX_STACK_VAR(tmp44,"tmp44");
												HX_STACK_LINE(259)
												int r = tmp44;		HX_STACK_VAR(r,"r");
												HX_STACK_LINE(259)
												int tmp45 = ::__hxcpp_memory_get_byte(alphaData->buffer->b,(alphaData->byteOffset + ((alphaPosition + (int)1))));		HX_STACK_VAR(tmp45,"tmp45");
												HX_STACK_LINE(259)
												Dynamic tmp46 = (int(tmp45) & int((int)255));		HX_STACK_VAR(tmp46,"tmp46");
												HX_STACK_LINE(259)
												int g = tmp46;		HX_STACK_VAR(g,"g");
												HX_STACK_LINE(259)
												int tmp47 = ::__hxcpp_memory_get_byte(alphaData->buffer->b,(alphaData->byteOffset + alphaPosition));		HX_STACK_VAR(tmp47,"tmp47");
												HX_STACK_LINE(259)
												Dynamic tmp48 = (int(tmp47) & int((int)255));		HX_STACK_VAR(tmp48,"tmp48");
												HX_STACK_LINE(259)
												int b = tmp48;		HX_STACK_VAR(b,"b");
												HX_STACK_LINE(259)
												int tmp49 = ::__hxcpp_memory_get_byte(alphaData->buffer->b,(alphaData->byteOffset + ((alphaPosition + (int)3))));		HX_STACK_VAR(tmp49,"tmp49");
												HX_STACK_LINE(259)
												Dynamic tmp50 = (int(tmp49) & int((int)255));		HX_STACK_VAR(tmp50,"tmp50");
												HX_STACK_LINE(259)
												int a = tmp50;		HX_STACK_VAR(a,"a");
												HX_STACK_LINE(259)
												int tmp51 = (int(r) & int((int)255));		HX_STACK_VAR(tmp51,"tmp51");
												HX_STACK_LINE(259)
												int tmp52 = (int(tmp51) << int((int)24));		HX_STACK_VAR(tmp52,"tmp52");
												HX_STACK_LINE(259)
												int tmp53 = (int(g) & int((int)255));		HX_STACK_VAR(tmp53,"tmp53");
												HX_STACK_LINE(259)
												int tmp54 = (int(tmp53) << int((int)16));		HX_STACK_VAR(tmp54,"tmp54");
												HX_STACK_LINE(259)
												int tmp55 = (int(tmp52) | int(tmp54));		HX_STACK_VAR(tmp55,"tmp55");
												HX_STACK_LINE(259)
												int tmp56 = (int(b) & int((int)255));		HX_STACK_VAR(tmp56,"tmp56");
												HX_STACK_LINE(259)
												int tmp57 = (int(tmp56) << int((int)8));		HX_STACK_VAR(tmp57,"tmp57");
												HX_STACK_LINE(259)
												int tmp58 = (int(tmp55) | int(tmp57));		HX_STACK_VAR(tmp58,"tmp58");
												HX_STACK_LINE(259)
												int tmp59 = (int(a) & int((int)255));		HX_STACK_VAR(tmp59,"tmp59");
												HX_STACK_LINE(259)
												int tmp60 = (int(tmp58) | int(tmp59));		HX_STACK_VAR(tmp60,"tmp60");
												HX_STACK_LINE(259)
												alphaPixel = tmp60;
											}
											;break;
											case (int)0: {
												HX_STACK_LINE(259)
												int tmp43 = ::__hxcpp_memory_get_byte(alphaData->buffer->b,(alphaData->byteOffset + alphaPosition));		HX_STACK_VAR(tmp43,"tmp43");
												HX_STACK_LINE(259)
												Dynamic tmp44 = (int(tmp43) & int((int)255));		HX_STACK_VAR(tmp44,"tmp44");
												HX_STACK_LINE(259)
												int r = tmp44;		HX_STACK_VAR(r,"r");
												HX_STACK_LINE(259)
												int tmp45 = ::__hxcpp_memory_get_byte(alphaData->buffer->b,(alphaData->byteOffset + ((alphaPosition + (int)1))));		HX_STACK_VAR(tmp45,"tmp45");
												HX_STACK_LINE(259)
												Dynamic tmp46 = (int(tmp45) & int((int)255));		HX_STACK_VAR(tmp46,"tmp46");
												HX_STACK_LINE(259)
												int g = tmp46;		HX_STACK_VAR(g,"g");
												HX_STACK_LINE(259)
												int tmp47 = ::__hxcpp_memory_get_byte(alphaData->buffer->b,(alphaData->byteOffset + ((alphaPosition + (int)2))));		HX_STACK_VAR(tmp47,"tmp47");
												HX_STACK_LINE(259)
												Dynamic tmp48 = (int(tmp47) & int((int)255));		HX_STACK_VAR(tmp48,"tmp48");
												HX_STACK_LINE(259)
												int b = tmp48;		HX_STACK_VAR(b,"b");
												HX_STACK_LINE(259)
												int tmp49 = ::__hxcpp_memory_get_byte(alphaData->buffer->b,(alphaData->byteOffset + ((alphaPosition + (int)3))));		HX_STACK_VAR(tmp49,"tmp49");
												HX_STACK_LINE(259)
												Dynamic tmp50 = (int(tmp49) & int((int)255));		HX_STACK_VAR(tmp50,"tmp50");
												HX_STACK_LINE(259)
												int a = tmp50;		HX_STACK_VAR(a,"a");
												HX_STACK_LINE(259)
												int tmp51 = (int(r) & int((int)255));		HX_STACK_VAR(tmp51,"tmp51");
												HX_STACK_LINE(259)
												int tmp52 = (int(tmp51) << int((int)24));		HX_STACK_VAR(tmp52,"tmp52");
												HX_STACK_LINE(259)
												int tmp53 = (int(g) & int((int)255));		HX_STACK_VAR(tmp53,"tmp53");
												HX_STACK_LINE(259)
												int tmp54 = (int(tmp53) << int((int)16));		HX_STACK_VAR(tmp54,"tmp54");
												HX_STACK_LINE(259)
												int tmp55 = (int(tmp52) | int(tmp54));		HX_STACK_VAR(tmp55,"tmp55");
												HX_STACK_LINE(259)
												int tmp56 = (int(b) & int((int)255));		HX_STACK_VAR(tmp56,"tmp56");
												HX_STACK_LINE(259)
												int tmp57 = (int(tmp56) << int((int)8));		HX_STACK_VAR(tmp57,"tmp57");
												HX_STACK_LINE(259)
												int tmp58 = (int(tmp55) | int(tmp57));		HX_STACK_VAR(tmp58,"tmp58");
												HX_STACK_LINE(259)
												int tmp59 = (int(a) & int((int)255));		HX_STACK_VAR(tmp59,"tmp59");
												HX_STACK_LINE(259)
												int tmp60 = (int(tmp58) | int(tmp59));		HX_STACK_VAR(tmp60,"tmp60");
												HX_STACK_LINE(259)
												alphaPixel = tmp60;
											}
											;break;
											case (int)1: {
												HX_STACK_LINE(259)
												int tmp43 = ::__hxcpp_memory_get_byte(alphaData->buffer->b,(alphaData->byteOffset + ((alphaPosition + (int)1))));		HX_STACK_VAR(tmp43,"tmp43");
												HX_STACK_LINE(259)
												Dynamic tmp44 = (int(tmp43) & int((int)255));		HX_STACK_VAR(tmp44,"tmp44");
												HX_STACK_LINE(259)
												int r = tmp44;		HX_STACK_VAR(r,"r");
												HX_STACK_LINE(259)
												int tmp45 = ::__hxcpp_memory_get_byte(alphaData->buffer->b,(alphaData->byteOffset + ((alphaPosition + (int)2))));		HX_STACK_VAR(tmp45,"tmp45");
												HX_STACK_LINE(259)
												Dynamic tmp46 = (int(tmp45) & int((int)255));		HX_STACK_VAR(tmp46,"tmp46");
												HX_STACK_LINE(259)
												int g = tmp46;		HX_STACK_VAR(g,"g");
												HX_STACK_LINE(259)
												int tmp47 = ::__hxcpp_memory_get_byte(alphaData->buffer->b,(alphaData->byteOffset + ((alphaPosition + (int)3))));		HX_STACK_VAR(tmp47,"tmp47");
												HX_STACK_LINE(259)
												Dynamic tmp48 = (int(tmp47) & int((int)255));		HX_STACK_VAR(tmp48,"tmp48");
												HX_STACK_LINE(259)
												int b = tmp48;		HX_STACK_VAR(b,"b");
												HX_STACK_LINE(259)
												int tmp49 = ::__hxcpp_memory_get_byte(alphaData->buffer->b,(alphaData->byteOffset + alphaPosition));		HX_STACK_VAR(tmp49,"tmp49");
												HX_STACK_LINE(259)
												Dynamic tmp50 = (int(tmp49) & int((int)255));		HX_STACK_VAR(tmp50,"tmp50");
												HX_STACK_LINE(259)
												int a = tmp50;		HX_STACK_VAR(a,"a");
												HX_STACK_LINE(259)
												int tmp51 = (int(r) & int((int)255));		HX_STACK_VAR(tmp51,"tmp51");
												HX_STACK_LINE(259)
												int tmp52 = (int(tmp51) << int((int)24));		HX_STACK_VAR(tmp52,"tmp52");
												HX_STACK_LINE(259)
												int tmp53 = (int(g) & int((int)255));		HX_STACK_VAR(tmp53,"tmp53");
												HX_STACK_LINE(259)
												int tmp54 = (int(tmp53) << int((int)16));		HX_STACK_VAR(tmp54,"tmp54");
												HX_STACK_LINE(259)
												int tmp55 = (int(tmp52) | int(tmp54));		HX_STACK_VAR(tmp55,"tmp55");
												HX_STACK_LINE(259)
												int tmp56 = (int(b) & int((int)255));		HX_STACK_VAR(tmp56,"tmp56");
												HX_STACK_LINE(259)
												int tmp57 = (int(tmp56) << int((int)8));		HX_STACK_VAR(tmp57,"tmp57");
												HX_STACK_LINE(259)
												int tmp58 = (int(tmp55) | int(tmp57));		HX_STACK_VAR(tmp58,"tmp58");
												HX_STACK_LINE(259)
												int tmp59 = (int(a) & int((int)255));		HX_STACK_VAR(tmp59,"tmp59");
												HX_STACK_LINE(259)
												int tmp60 = (int(tmp58) | int(tmp59));		HX_STACK_VAR(tmp60,"tmp60");
												HX_STACK_LINE(259)
												alphaPixel = tmp60;
											}
											;break;
										}
										HX_STACK_LINE(259)
										bool tmp43 = alphaPremultiplied;		HX_STACK_VAR(tmp43,"tmp43");
										HX_STACK_LINE(259)
										if ((tmp43)){
											HX_STACK_LINE(259)
											int tmp44 = (int(alphaPixel) & int((int)255));		HX_STACK_VAR(tmp44,"tmp44");
											HX_STACK_LINE(259)
											bool tmp45 = (tmp44 != (int)0);		HX_STACK_VAR(tmp45,"tmp45");
											HX_STACK_LINE(259)
											bool tmp46;		HX_STACK_VAR(tmp46,"tmp46");
											HX_STACK_LINE(259)
											if ((tmp45)){
												HX_STACK_LINE(259)
												int tmp47 = (int(alphaPixel) & int((int)255));		HX_STACK_VAR(tmp47,"tmp47");
												HX_STACK_LINE(259)
												int tmp48 = tmp47;		HX_STACK_VAR(tmp48,"tmp48");
												HX_STACK_LINE(259)
												tmp46 = (tmp48 != (int)255);
											}
											else{
												HX_STACK_LINE(259)
												tmp46 = false;
											}
											HX_STACK_LINE(259)
											if ((tmp46)){
												HX_STACK_LINE(259)
												int tmp47 = (int(alphaPixel) & int((int)255));		HX_STACK_VAR(tmp47,"tmp47");
												HX_STACK_LINE(259)
												Float tmp48 = (Float(((Float)255.0)) / Float(tmp47));		HX_STACK_VAR(tmp48,"tmp48");
												HX_STACK_LINE(259)
												::lime::math::color::_RGBA::RGBA_Impl__obj::unmult = tmp48;
												HX_STACK_LINE(259)
												{
													HX_STACK_LINE(259)
													Dynamic tmp49;		HX_STACK_VAR(tmp49,"tmp49");
													HX_STACK_LINE(259)
													{
														HX_STACK_LINE(259)
														::lime::utils::ArrayBufferView tmp50 = ::lime::math::color::_RGBA::RGBA_Impl__obj::__clamp;		HX_STACK_VAR(tmp50,"tmp50");
														HX_STACK_LINE(259)
														::lime::utils::ArrayBufferView this1 = tmp50;		HX_STACK_VAR(this1,"this1");
														HX_STACK_LINE(259)
														int tmp51 = (int(alphaPixel) >> int((int)24));		HX_STACK_VAR(tmp51,"tmp51");
														HX_STACK_LINE(259)
														int tmp52 = (int(tmp51) & int((int)255));		HX_STACK_VAR(tmp52,"tmp52");
														HX_STACK_LINE(259)
														Float tmp53 = ::lime::math::color::_RGBA::RGBA_Impl__obj::unmult;		HX_STACK_VAR(tmp53,"tmp53");
														HX_STACK_LINE(259)
														Float tmp54 = (tmp52 * tmp53);		HX_STACK_VAR(tmp54,"tmp54");
														HX_STACK_LINE(259)
														int tmp55 = ::Math_obj::round(tmp54);		HX_STACK_VAR(tmp55,"tmp55");
														HX_STACK_LINE(259)
														int idx = tmp55;		HX_STACK_VAR(idx,"idx");
														HX_STACK_LINE(259)
														int tmp56 = ::__hxcpp_memory_get_byte(this1->buffer->b,(this1->byteOffset + idx));		HX_STACK_VAR(tmp56,"tmp56");
														HX_STACK_LINE(259)
														tmp49 = (int(tmp56) & int((int)255));
													}
													HX_STACK_LINE(259)
													int r = tmp49;		HX_STACK_VAR(r,"r");
													HX_STACK_LINE(259)
													Dynamic tmp50;		HX_STACK_VAR(tmp50,"tmp50");
													HX_STACK_LINE(259)
													{
														HX_STACK_LINE(259)
														::lime::utils::ArrayBufferView tmp51 = ::lime::math::color::_RGBA::RGBA_Impl__obj::__clamp;		HX_STACK_VAR(tmp51,"tmp51");
														HX_STACK_LINE(259)
														::lime::utils::ArrayBufferView this1 = tmp51;		HX_STACK_VAR(this1,"this1");
														HX_STACK_LINE(259)
														int tmp52 = (int(alphaPixel) >> int((int)16));		HX_STACK_VAR(tmp52,"tmp52");
														HX_STACK_LINE(259)
														int tmp53 = (int(tmp52) & int((int)255));		HX_STACK_VAR(tmp53,"tmp53");
														HX_STACK_LINE(259)
														Float tmp54 = ::lime::math::color::_RGBA::RGBA_Impl__obj::unmult;		HX_STACK_VAR(tmp54,"tmp54");
														HX_STACK_LINE(259)
														Float tmp55 = (tmp53 * tmp54);		HX_STACK_VAR(tmp55,"tmp55");
														HX_STACK_LINE(259)
														int tmp56 = ::Math_obj::round(tmp55);		HX_STACK_VAR(tmp56,"tmp56");
														HX_STACK_LINE(259)
														int idx = tmp56;		HX_STACK_VAR(idx,"idx");
														HX_STACK_LINE(259)
														int tmp57 = ::__hxcpp_memory_get_byte(this1->buffer->b,(this1->byteOffset + idx));		HX_STACK_VAR(tmp57,"tmp57");
														HX_STACK_LINE(259)
														tmp50 = (int(tmp57) & int((int)255));
													}
													HX_STACK_LINE(259)
													int g = tmp50;		HX_STACK_VAR(g,"g");
													HX_STACK_LINE(259)
													Dynamic tmp51;		HX_STACK_VAR(tmp51,"tmp51");
													HX_STACK_LINE(259)
													{
														HX_STACK_LINE(259)
														::lime::utils::ArrayBufferView tmp52 = ::lime::math::color::_RGBA::RGBA_Impl__obj::__clamp;		HX_STACK_VAR(tmp52,"tmp52");
														HX_STACK_LINE(259)
														::lime::utils::ArrayBufferView this1 = tmp52;		HX_STACK_VAR(this1,"this1");
														HX_STACK_LINE(259)
														int tmp53 = (int(alphaPixel) >> int((int)8));		HX_STACK_VAR(tmp53,"tmp53");
														HX_STACK_LINE(259)
														int tmp54 = (int(tmp53) & int((int)255));		HX_STACK_VAR(tmp54,"tmp54");
														HX_STACK_LINE(259)
														Float tmp55 = ::lime::math::color::_RGBA::RGBA_Impl__obj::unmult;		HX_STACK_VAR(tmp55,"tmp55");
														HX_STACK_LINE(259)
														Float tmp56 = (tmp54 * tmp55);		HX_STACK_VAR(tmp56,"tmp56");
														HX_STACK_LINE(259)
														int tmp57 = ::Math_obj::round(tmp56);		HX_STACK_VAR(tmp57,"tmp57");
														HX_STACK_LINE(259)
														int idx = tmp57;		HX_STACK_VAR(idx,"idx");
														HX_STACK_LINE(259)
														int tmp58 = ::__hxcpp_memory_get_byte(this1->buffer->b,(this1->byteOffset + idx));		HX_STACK_VAR(tmp58,"tmp58");
														HX_STACK_LINE(259)
														tmp51 = (int(tmp58) & int((int)255));
													}
													HX_STACK_LINE(259)
													int b = tmp51;		HX_STACK_VAR(b,"b");
													HX_STACK_LINE(259)
													int tmp52 = (int(r) & int((int)255));		HX_STACK_VAR(tmp52,"tmp52");
													HX_STACK_LINE(259)
													int tmp53 = (int(tmp52) << int((int)24));		HX_STACK_VAR(tmp53,"tmp53");
													HX_STACK_LINE(259)
													int tmp54 = (int(g) & int((int)255));		HX_STACK_VAR(tmp54,"tmp54");
													HX_STACK_LINE(259)
													int tmp55 = (int(tmp54) << int((int)16));		HX_STACK_VAR(tmp55,"tmp55");
													HX_STACK_LINE(259)
													int tmp56 = (int(tmp53) | int(tmp55));		HX_STACK_VAR(tmp56,"tmp56");
													HX_STACK_LINE(259)
													int tmp57 = (int(b) & int((int)255));		HX_STACK_VAR(tmp57,"tmp57");
													HX_STACK_LINE(259)
													int tmp58 = (int(tmp57) << int((int)8));		HX_STACK_VAR(tmp58,"tmp58");
													HX_STACK_LINE(259)
													int tmp59 = (int(tmp56) | int(tmp58));		HX_STACK_VAR(tmp59,"tmp59");
													HX_STACK_LINE(259)
													int tmp60 = (int(alphaPixel) & int((int)255));		HX_STACK_VAR(tmp60,"tmp60");
													HX_STACK_LINE(259)
													int tmp61 = (int(tmp60) & int((int)255));		HX_STACK_VAR(tmp61,"tmp61");
													HX_STACK_LINE(259)
													int tmp62 = (int(tmp59) | int(tmp61));		HX_STACK_VAR(tmp62,"tmp62");
													HX_STACK_LINE(259)
													alphaPixel = tmp62;
												}
											}
										}
									}
									HX_STACK_LINE(261)
									int tmp42 = (int(alphaPixel) & int((int)255));		HX_STACK_VAR(tmp42,"tmp42");
									HX_STACK_LINE(261)
									Float tmp43 = (Float(tmp42) / Float((int)255));		HX_STACK_VAR(tmp43,"tmp43");
									HX_STACK_LINE(261)
									sourceAlpha = tmp43;
									HX_STACK_LINE(262)
									int tmp44 = (int(destPixel) & int((int)255));		HX_STACK_VAR(tmp44,"tmp44");
									HX_STACK_LINE(262)
									Float tmp45 = (Float(tmp44) / Float((int)255));		HX_STACK_VAR(tmp45,"tmp45");
									HX_STACK_LINE(262)
									destAlpha = tmp45;
									HX_STACK_LINE(263)
									Float tmp46 = ((int)1 - sourceAlpha);		HX_STACK_VAR(tmp46,"tmp46");
									HX_STACK_LINE(263)
									oneMinusSourceAlpha = tmp46;
									HX_STACK_LINE(264)
									Float tmp47 = sourceAlpha;		HX_STACK_VAR(tmp47,"tmp47");
									HX_STACK_LINE(264)
									Float tmp48 = (destAlpha * oneMinusSourceAlpha);		HX_STACK_VAR(tmp48,"tmp48");
									HX_STACK_LINE(264)
									Float tmp49 = (tmp47 + tmp48);		HX_STACK_VAR(tmp49,"tmp49");
									HX_STACK_LINE(264)
									blendAlpha = tmp49;
									HX_STACK_LINE(266)
									bool tmp50 = (blendAlpha == (int)0);		HX_STACK_VAR(tmp50,"tmp50");
									HX_STACK_LINE(266)
									if ((tmp50)){
										HX_STACK_LINE(268)
										destPixel = (int)0;
									}
									else{
										HX_STACK_LINE(272)
										{
											HX_STACK_LINE(272)
											Dynamic tmp51;		HX_STACK_VAR(tmp51,"tmp51");
											HX_STACK_LINE(272)
											{
												HX_STACK_LINE(272)
												::lime::utils::ArrayBufferView tmp52 = ::lime::math::color::_RGBA::RGBA_Impl__obj::__clamp;		HX_STACK_VAR(tmp52,"tmp52");
												HX_STACK_LINE(272)
												::lime::utils::ArrayBufferView this1 = tmp52;		HX_STACK_VAR(this1,"this1");
												HX_STACK_LINE(272)
												int tmp53 = (int(sourcePixel) >> int((int)24));		HX_STACK_VAR(tmp53,"tmp53");
												HX_STACK_LINE(272)
												int tmp54 = (int(tmp53) & int((int)255));		HX_STACK_VAR(tmp54,"tmp54");
												HX_STACK_LINE(272)
												Float tmp55 = sourceAlpha;		HX_STACK_VAR(tmp55,"tmp55");
												HX_STACK_LINE(272)
												Float tmp56 = (tmp54 * tmp55);		HX_STACK_VAR(tmp56,"tmp56");
												HX_STACK_LINE(272)
												int tmp57 = (int(destPixel) >> int((int)24));		HX_STACK_VAR(tmp57,"tmp57");
												HX_STACK_LINE(272)
												int tmp58 = (int(tmp57) & int((int)255));		HX_STACK_VAR(tmp58,"tmp58");
												HX_STACK_LINE(272)
												Float tmp59 = destAlpha;		HX_STACK_VAR(tmp59,"tmp59");
												HX_STACK_LINE(272)
												Float tmp60 = (tmp58 * tmp59);		HX_STACK_VAR(tmp60,"tmp60");
												HX_STACK_LINE(272)
												Float tmp61 = oneMinusSourceAlpha;		HX_STACK_VAR(tmp61,"tmp61");
												HX_STACK_LINE(272)
												Float tmp62 = (tmp60 * tmp61);		HX_STACK_VAR(tmp62,"tmp62");
												HX_STACK_LINE(272)
												Float tmp63 = (tmp56 + tmp62);		HX_STACK_VAR(tmp63,"tmp63");
												HX_STACK_LINE(272)
												Float tmp64 = blendAlpha;		HX_STACK_VAR(tmp64,"tmp64");
												HX_STACK_LINE(272)
												Float tmp65 = (Float(tmp63) / Float(tmp64));		HX_STACK_VAR(tmp65,"tmp65");
												HX_STACK_LINE(272)
												int tmp66 = ::Math_obj::round(tmp65);		HX_STACK_VAR(tmp66,"tmp66");
												HX_STACK_LINE(272)
												int idx = tmp66;		HX_STACK_VAR(idx,"idx");
												HX_STACK_LINE(272)
												int tmp67 = ::__hxcpp_memory_get_byte(this1->buffer->b,(this1->byteOffset + idx));		HX_STACK_VAR(tmp67,"tmp67");
												HX_STACK_LINE(272)
												tmp51 = (int(tmp67) & int((int)255));
											}
											HX_STACK_LINE(272)
											int value = tmp51;		HX_STACK_VAR(value,"value");
											HX_STACK_LINE(272)
											{
												HX_STACK_LINE(272)
												int tmp52 = (int(value) & int((int)255));		HX_STACK_VAR(tmp52,"tmp52");
												HX_STACK_LINE(272)
												int tmp53 = (int(tmp52) << int((int)24));		HX_STACK_VAR(tmp53,"tmp53");
												HX_STACK_LINE(272)
												int tmp54 = (int(destPixel) >> int((int)16));		HX_STACK_VAR(tmp54,"tmp54");
												HX_STACK_LINE(272)
												int tmp55 = (int(tmp54) & int((int)255));		HX_STACK_VAR(tmp55,"tmp55");
												HX_STACK_LINE(272)
												int tmp56 = (int(tmp55) & int((int)255));		HX_STACK_VAR(tmp56,"tmp56");
												HX_STACK_LINE(272)
												int tmp57 = (int(tmp56) << int((int)16));		HX_STACK_VAR(tmp57,"tmp57");
												HX_STACK_LINE(272)
												int tmp58 = (int(tmp53) | int(tmp57));		HX_STACK_VAR(tmp58,"tmp58");
												HX_STACK_LINE(272)
												int tmp59 = (int(destPixel) >> int((int)8));		HX_STACK_VAR(tmp59,"tmp59");
												HX_STACK_LINE(272)
												int tmp60 = (int(tmp59) & int((int)255));		HX_STACK_VAR(tmp60,"tmp60");
												HX_STACK_LINE(272)
												int tmp61 = (int(tmp60) & int((int)255));		HX_STACK_VAR(tmp61,"tmp61");
												HX_STACK_LINE(272)
												int tmp62 = (int(tmp61) << int((int)8));		HX_STACK_VAR(tmp62,"tmp62");
												HX_STACK_LINE(272)
												int tmp63 = (int(tmp58) | int(tmp62));		HX_STACK_VAR(tmp63,"tmp63");
												HX_STACK_LINE(272)
												int tmp64 = (int(destPixel) & int((int)255));		HX_STACK_VAR(tmp64,"tmp64");
												HX_STACK_LINE(272)
												int tmp65 = (int(tmp64) & int((int)255));		HX_STACK_VAR(tmp65,"tmp65");
												HX_STACK_LINE(272)
												int tmp66 = (int(tmp63) | int(tmp65));		HX_STACK_VAR(tmp66,"tmp66");
												HX_STACK_LINE(272)
												destPixel = tmp66;
											}
											HX_STACK_LINE(272)
											value;
										}
										HX_STACK_LINE(273)
										{
											HX_STACK_LINE(273)
											Dynamic tmp51;		HX_STACK_VAR(tmp51,"tmp51");
											HX_STACK_LINE(273)
											{
												HX_STACK_LINE(273)
												::lime::utils::ArrayBufferView tmp52 = ::lime::math::color::_RGBA::RGBA_Impl__obj::__clamp;		HX_STACK_VAR(tmp52,"tmp52");
												HX_STACK_LINE(273)
												::lime::utils::ArrayBufferView this1 = tmp52;		HX_STACK_VAR(this1,"this1");
												HX_STACK_LINE(273)
												int tmp53 = (int(sourcePixel) >> int((int)16));		HX_STACK_VAR(tmp53,"tmp53");
												HX_STACK_LINE(273)
												int tmp54 = (int(tmp53) & int((int)255));		HX_STACK_VAR(tmp54,"tmp54");
												HX_STACK_LINE(273)
												Float tmp55 = sourceAlpha;		HX_STACK_VAR(tmp55,"tmp55");
												HX_STACK_LINE(273)
												Float tmp56 = (tmp54 * tmp55);		HX_STACK_VAR(tmp56,"tmp56");
												HX_STACK_LINE(273)
												int tmp57 = (int(destPixel) >> int((int)16));		HX_STACK_VAR(tmp57,"tmp57");
												HX_STACK_LINE(273)
												int tmp58 = (int(tmp57) & int((int)255));		HX_STACK_VAR(tmp58,"tmp58");
												HX_STACK_LINE(273)
												Float tmp59 = destAlpha;		HX_STACK_VAR(tmp59,"tmp59");
												HX_STACK_LINE(273)
												Float tmp60 = (tmp58 * tmp59);		HX_STACK_VAR(tmp60,"tmp60");
												HX_STACK_LINE(273)
												Float tmp61 = oneMinusSourceAlpha;		HX_STACK_VAR(tmp61,"tmp61");
												HX_STACK_LINE(273)
												Float tmp62 = (tmp60 * tmp61);		HX_STACK_VAR(tmp62,"tmp62");
												HX_STACK_LINE(273)
												Float tmp63 = (tmp56 + tmp62);		HX_STACK_VAR(tmp63,"tmp63");
												HX_STACK_LINE(273)
												Float tmp64 = blendAlpha;		HX_STACK_VAR(tmp64,"tmp64");
												HX_STACK_LINE(273)
												Float tmp65 = (Float(tmp63) / Float(tmp64));		HX_STACK_VAR(tmp65,"tmp65");
												HX_STACK_LINE(273)
												int tmp66 = ::Math_obj::round(tmp65);		HX_STACK_VAR(tmp66,"tmp66");
												HX_STACK_LINE(273)
												int idx = tmp66;		HX_STACK_VAR(idx,"idx");
												HX_STACK_LINE(273)
												int tmp67 = ::__hxcpp_memory_get_byte(this1->buffer->b,(this1->byteOffset + idx));		HX_STACK_VAR(tmp67,"tmp67");
												HX_STACK_LINE(273)
												tmp51 = (int(tmp67) & int((int)255));
											}
											HX_STACK_LINE(273)
											int value = tmp51;		HX_STACK_VAR(value,"value");
											HX_STACK_LINE(273)
											{
												HX_STACK_LINE(273)
												int tmp52 = (int(destPixel) >> int((int)24));		HX_STACK_VAR(tmp52,"tmp52");
												HX_STACK_LINE(273)
												int tmp53 = (int(tmp52) & int((int)255));		HX_STACK_VAR(tmp53,"tmp53");
												HX_STACK_LINE(273)
												int tmp54 = (int(tmp53) & int((int)255));		HX_STACK_VAR(tmp54,"tmp54");
												HX_STACK_LINE(273)
												int tmp55 = (int(tmp54) << int((int)24));		HX_STACK_VAR(tmp55,"tmp55");
												HX_STACK_LINE(273)
												int tmp56 = (int(value) & int((int)255));		HX_STACK_VAR(tmp56,"tmp56");
												HX_STACK_LINE(273)
												int tmp57 = (int(tmp56) << int((int)16));		HX_STACK_VAR(tmp57,"tmp57");
												HX_STACK_LINE(273)
												int tmp58 = (int(tmp55) | int(tmp57));		HX_STACK_VAR(tmp58,"tmp58");
												HX_STACK_LINE(273)
												int tmp59 = (int(destPixel) >> int((int)8));		HX_STACK_VAR(tmp59,"tmp59");
												HX_STACK_LINE(273)
												int tmp60 = (int(tmp59) & int((int)255));		HX_STACK_VAR(tmp60,"tmp60");
												HX_STACK_LINE(273)
												int tmp61 = (int(tmp60) & int((int)255));		HX_STACK_VAR(tmp61,"tmp61");
												HX_STACK_LINE(273)
												int tmp62 = (int(tmp61) << int((int)8));		HX_STACK_VAR(tmp62,"tmp62");
												HX_STACK_LINE(273)
												int tmp63 = (int(tmp58) | int(tmp62));		HX_STACK_VAR(tmp63,"tmp63");
												HX_STACK_LINE(273)
												int tmp64 = (int(destPixel) & int((int)255));		HX_STACK_VAR(tmp64,"tmp64");
												HX_STACK_LINE(273)
												int tmp65 = (int(tmp64) & int((int)255));		HX_STACK_VAR(tmp65,"tmp65");
												HX_STACK_LINE(273)
												int tmp66 = (int(tmp63) | int(tmp65));		HX_STACK_VAR(tmp66,"tmp66");
												HX_STACK_LINE(273)
												destPixel = tmp66;
											}
											HX_STACK_LINE(273)
											value;
										}
										HX_STACK_LINE(274)
										{
											HX_STACK_LINE(274)
											Dynamic tmp51;		HX_STACK_VAR(tmp51,"tmp51");
											HX_STACK_LINE(274)
											{
												HX_STACK_LINE(274)
												::lime::utils::ArrayBufferView tmp52 = ::lime::math::color::_RGBA::RGBA_Impl__obj::__clamp;		HX_STACK_VAR(tmp52,"tmp52");
												HX_STACK_LINE(274)
												::lime::utils::ArrayBufferView this1 = tmp52;		HX_STACK_VAR(this1,"this1");
												HX_STACK_LINE(274)
												int tmp53 = (int(sourcePixel) >> int((int)8));		HX_STACK_VAR(tmp53,"tmp53");
												HX_STACK_LINE(274)
												int tmp54 = (int(tmp53) & int((int)255));		HX_STACK_VAR(tmp54,"tmp54");
												HX_STACK_LINE(274)
												Float tmp55 = sourceAlpha;		HX_STACK_VAR(tmp55,"tmp55");
												HX_STACK_LINE(274)
												Float tmp56 = (tmp54 * tmp55);		HX_STACK_VAR(tmp56,"tmp56");
												HX_STACK_LINE(274)
												int tmp57 = (int(destPixel) >> int((int)8));		HX_STACK_VAR(tmp57,"tmp57");
												HX_STACK_LINE(274)
												int tmp58 = (int(tmp57) & int((int)255));		HX_STACK_VAR(tmp58,"tmp58");
												HX_STACK_LINE(274)
												Float tmp59 = destAlpha;		HX_STACK_VAR(tmp59,"tmp59");
												HX_STACK_LINE(274)
												Float tmp60 = (tmp58 * tmp59);		HX_STACK_VAR(tmp60,"tmp60");
												HX_STACK_LINE(274)
												Float tmp61 = oneMinusSourceAlpha;		HX_STACK_VAR(tmp61,"tmp61");
												HX_STACK_LINE(274)
												Float tmp62 = (tmp60 * tmp61);		HX_STACK_VAR(tmp62,"tmp62");
												HX_STACK_LINE(274)
												Float tmp63 = (tmp56 + tmp62);		HX_STACK_VAR(tmp63,"tmp63");
												HX_STACK_LINE(274)
												Float tmp64 = blendAlpha;		HX_STACK_VAR(tmp64,"tmp64");
												HX_STACK_LINE(274)
												Float tmp65 = (Float(tmp63) / Float(tmp64));		HX_STACK_VAR(tmp65,"tmp65");
												HX_STACK_LINE(274)
												int tmp66 = ::Math_obj::round(tmp65);		HX_STACK_VAR(tmp66,"tmp66");
												HX_STACK_LINE(274)
												int idx = tmp66;		HX_STACK_VAR(idx,"idx");
												HX_STACK_LINE(274)
												int tmp67 = ::__hxcpp_memory_get_byte(this1->buffer->b,(this1->byteOffset + idx));		HX_STACK_VAR(tmp67,"tmp67");
												HX_STACK_LINE(274)
												tmp51 = (int(tmp67) & int((int)255));
											}
											HX_STACK_LINE(274)
											int value = tmp51;		HX_STACK_VAR(value,"value");
											HX_STACK_LINE(274)
											{
												HX_STACK_LINE(274)
												int tmp52 = (int(destPixel) >> int((int)24));		HX_STACK_VAR(tmp52,"tmp52");
												HX_STACK_LINE(274)
												int tmp53 = (int(tmp52) & int((int)255));		HX_STACK_VAR(tmp53,"tmp53");
												HX_STACK_LINE(274)
												int tmp54 = (int(tmp53) & int((int)255));		HX_STACK_VAR(tmp54,"tmp54");
												HX_STACK_LINE(274)
												int tmp55 = (int(tmp54) << int((int)24));		HX_STACK_VAR(tmp55,"tmp55");
												HX_STACK_LINE(274)
												int tmp56 = (int(destPixel) >> int((int)16));		HX_STACK_VAR(tmp56,"tmp56");
												HX_STACK_LINE(274)
												int tmp57 = (int(tmp56) & int((int)255));		HX_STACK_VAR(tmp57,"tmp57");
												HX_STACK_LINE(274)
												int tmp58 = (int(tmp57) & int((int)255));		HX_STACK_VAR(tmp58,"tmp58");
												HX_STACK_LINE(274)
												int tmp59 = (int(tmp58) << int((int)16));		HX_STACK_VAR(tmp59,"tmp59");
												HX_STACK_LINE(274)
												int tmp60 = (int(tmp55) | int(tmp59));		HX_STACK_VAR(tmp60,"tmp60");
												HX_STACK_LINE(274)
												int tmp61 = (int(value) & int((int)255));		HX_STACK_VAR(tmp61,"tmp61");
												HX_STACK_LINE(274)
												int tmp62 = (int(tmp61) << int((int)8));		HX_STACK_VAR(tmp62,"tmp62");
												HX_STACK_LINE(274)
												int tmp63 = (int(tmp60) | int(tmp62));		HX_STACK_VAR(tmp63,"tmp63");
												HX_STACK_LINE(274)
												int tmp64 = (int(destPixel) & int((int)255));		HX_STACK_VAR(tmp64,"tmp64");
												HX_STACK_LINE(274)
												int tmp65 = (int(tmp64) & int((int)255));		HX_STACK_VAR(tmp65,"tmp65");
												HX_STACK_LINE(274)
												int tmp66 = (int(tmp63) | int(tmp65));		HX_STACK_VAR(tmp66,"tmp66");
												HX_STACK_LINE(274)
												destPixel = tmp66;
											}
											HX_STACK_LINE(274)
											value;
										}
										HX_STACK_LINE(275)
										{
											HX_STACK_LINE(275)
											Dynamic tmp51;		HX_STACK_VAR(tmp51,"tmp51");
											HX_STACK_LINE(275)
											{
												HX_STACK_LINE(275)
												::lime::utils::ArrayBufferView tmp52 = ::lime::math::color::_RGBA::RGBA_Impl__obj::__clamp;		HX_STACK_VAR(tmp52,"tmp52");
												HX_STACK_LINE(275)
												::lime::utils::ArrayBufferView this1 = tmp52;		HX_STACK_VAR(this1,"this1");
												HX_STACK_LINE(275)
												Float tmp53 = (blendAlpha * ((Float)255.0));		HX_STACK_VAR(tmp53,"tmp53");
												HX_STACK_LINE(275)
												int tmp54 = ::Math_obj::round(tmp53);		HX_STACK_VAR(tmp54,"tmp54");
												HX_STACK_LINE(275)
												int idx = tmp54;		HX_STACK_VAR(idx,"idx");
												HX_STACK_LINE(275)
												int tmp55 = ::__hxcpp_memory_get_byte(this1->buffer->b,(this1->byteOffset + idx));		HX_STACK_VAR(tmp55,"tmp55");
												HX_STACK_LINE(275)
												tmp51 = (int(tmp55) & int((int)255));
											}
											HX_STACK_LINE(275)
											int value = tmp51;		HX_STACK_VAR(value,"value");
											HX_STACK_LINE(275)
											{
												HX_STACK_LINE(275)
												int tmp52 = (int(destPixel) >> int((int)24));		HX_STACK_VAR(tmp52,"tmp52");
												HX_STACK_LINE(275)
												int tmp53 = (int(tmp52) & int((int)255));		HX_STACK_VAR(tmp53,"tmp53");
												HX_STACK_LINE(275)
												int tmp54 = (int(tmp53) & int((int)255));		HX_STACK_VAR(tmp54,"tmp54");
												HX_STACK_LINE(275)
												int tmp55 = (int(tmp54) << int((int)24));		HX_STACK_VAR(tmp55,"tmp55");
												HX_STACK_LINE(275)
												int tmp56 = (int(destPixel) >> int((int)16));		HX_STACK_VAR(tmp56,"tmp56");
												HX_STACK_LINE(275)
												int tmp57 = (int(tmp56) & int((int)255));		HX_STACK_VAR(tmp57,"tmp57");
												HX_STACK_LINE(275)
												int tmp58 = (int(tmp57) & int((int)255));		HX_STACK_VAR(tmp58,"tmp58");
												HX_STACK_LINE(275)
												int tmp59 = (int(tmp58) << int((int)16));		HX_STACK_VAR(tmp59,"tmp59");
												HX_STACK_LINE(275)
												int tmp60 = (int(tmp55) | int(tmp59));		HX_STACK_VAR(tmp60,"tmp60");
												HX_STACK_LINE(275)
												int tmp61 = (int(destPixel) >> int((int)8));		HX_STACK_VAR(tmp61,"tmp61");
												HX_STACK_LINE(275)
												int tmp62 = (int(tmp61) & int((int)255));		HX_STACK_VAR(tmp62,"tmp62");
												HX_STACK_LINE(275)
												int tmp63 = (int(tmp62) & int((int)255));		HX_STACK_VAR(tmp63,"tmp63");
												HX_STACK_LINE(275)
												int tmp64 = (int(tmp63) << int((int)8));		HX_STACK_VAR(tmp64,"tmp64");
												HX_STACK_LINE(275)
												int tmp65 = (int(tmp60) | int(tmp64));		HX_STACK_VAR(tmp65,"tmp65");
												HX_STACK_LINE(275)
												int tmp66 = (int(value) & int((int)255));		HX_STACK_VAR(tmp66,"tmp66");
												HX_STACK_LINE(275)
												int tmp67 = (int(tmp65) | int(tmp66));		HX_STACK_VAR(tmp67,"tmp67");
												HX_STACK_LINE(275)
												destPixel = tmp67;
											}
											HX_STACK_LINE(275)
											value;
										}
									}
									HX_STACK_LINE(279)
									{
										HX_STACK_LINE(279)
										bool tmp51 = destPremultiplied;		HX_STACK_VAR(tmp51,"tmp51");
										HX_STACK_LINE(279)
										if ((tmp51)){
											HX_STACK_LINE(279)
											int tmp52 = (int(destPixel) & int((int)255));		HX_STACK_VAR(tmp52,"tmp52");
											HX_STACK_LINE(279)
											bool tmp53 = (tmp52 == (int)0);		HX_STACK_VAR(tmp53,"tmp53");
											HX_STACK_LINE(279)
											if ((tmp53)){
												HX_STACK_LINE(279)
												bool tmp54 = (destPixel != (int)0);		HX_STACK_VAR(tmp54,"tmp54");
												HX_STACK_LINE(279)
												if ((tmp54)){
													HX_STACK_LINE(279)
													destPixel = (int)0;
												}
											}
											else{
												HX_STACK_LINE(279)
												int tmp54 = (int(destPixel) & int((int)255));		HX_STACK_VAR(tmp54,"tmp54");
												HX_STACK_LINE(279)
												bool tmp55 = (tmp54 != (int)255);		HX_STACK_VAR(tmp55,"tmp55");
												HX_STACK_LINE(279)
												if ((tmp55)){
													HX_STACK_LINE(279)
													Dynamic tmp56;		HX_STACK_VAR(tmp56,"tmp56");
													HX_STACK_LINE(279)
													{
														HX_STACK_LINE(279)
														::lime::utils::ArrayBufferView tmp57 = ::lime::math::color::_RGBA::RGBA_Impl__obj::__alpha16;		HX_STACK_VAR(tmp57,"tmp57");
														HX_STACK_LINE(279)
														::lime::utils::ArrayBufferView this1 = tmp57;		HX_STACK_VAR(this1,"this1");
														HX_STACK_LINE(279)
														{
															HX_STACK_LINE(279)
															bool littleEndian = true;		HX_STACK_VAR(littleEndian,"littleEndian");
															HX_STACK_LINE(279)
															tmp56 = ::__hxcpp_memory_get_ui32(this1->buffer->b,(this1->byteOffset + (((int(destPixel) & int((int)255))) * (int)4)));
														}
													}
													HX_STACK_LINE(279)
													::lime::math::color::_RGBA::RGBA_Impl__obj::a16 = tmp56;
													HX_STACK_LINE(279)
													{
														HX_STACK_LINE(279)
														int tmp57 = (int(destPixel) >> int((int)24));		HX_STACK_VAR(tmp57,"tmp57");
														HX_STACK_LINE(279)
														int tmp58 = (int(tmp57) & int((int)255));		HX_STACK_VAR(tmp58,"tmp58");
														HX_STACK_LINE(279)
														int tmp59 = ::lime::math::color::_RGBA::RGBA_Impl__obj::a16;		HX_STACK_VAR(tmp59,"tmp59");
														HX_STACK_LINE(279)
														int tmp60 = (tmp58 * tmp59);		HX_STACK_VAR(tmp60,"tmp60");
														HX_STACK_LINE(279)
														int tmp61 = (int(tmp60) >> int((int)16));		HX_STACK_VAR(tmp61,"tmp61");
														HX_STACK_LINE(279)
														int tmp62 = (int(tmp61) & int((int)255));		HX_STACK_VAR(tmp62,"tmp62");
														HX_STACK_LINE(279)
														int tmp63 = (int(tmp62) << int((int)24));		HX_STACK_VAR(tmp63,"tmp63");
														HX_STACK_LINE(279)
														int tmp64 = (int(destPixel) >> int((int)16));		HX_STACK_VAR(tmp64,"tmp64");
														HX_STACK_LINE(279)
														int tmp65 = (int(tmp64) & int((int)255));		HX_STACK_VAR(tmp65,"tmp65");
														HX_STACK_LINE(279)
														int tmp66 = ::lime::math::color::_RGBA::RGBA_Impl__obj::a16;		HX_STACK_VAR(tmp66,"tmp66");
														HX_STACK_LINE(279)
														int tmp67 = (tmp65 * tmp66);		HX_STACK_VAR(tmp67,"tmp67");
														HX_STACK_LINE(279)
														int tmp68 = (int(tmp67) >> int((int)16));		HX_STACK_VAR(tmp68,"tmp68");
														HX_STACK_LINE(279)
														int tmp69 = (int(tmp68) & int((int)255));		HX_STACK_VAR(tmp69,"tmp69");
														HX_STACK_LINE(279)
														int tmp70 = (int(tmp69) << int((int)16));		HX_STACK_VAR(tmp70,"tmp70");
														HX_STACK_LINE(279)
														int tmp71 = (int(tmp63) | int(tmp70));		HX_STACK_VAR(tmp71,"tmp71");
														HX_STACK_LINE(279)
														int tmp72 = (int(destPixel) >> int((int)8));		HX_STACK_VAR(tmp72,"tmp72");
														HX_STACK_LINE(279)
														int tmp73 = (int(tmp72) & int((int)255));		HX_STACK_VAR(tmp73,"tmp73");
														HX_STACK_LINE(279)
														int tmp74 = ::lime::math::color::_RGBA::RGBA_Impl__obj::a16;		HX_STACK_VAR(tmp74,"tmp74");
														HX_STACK_LINE(279)
														int tmp75 = (tmp73 * tmp74);		HX_STACK_VAR(tmp75,"tmp75");
														HX_STACK_LINE(279)
														int tmp76 = (int(tmp75) >> int((int)16));		HX_STACK_VAR(tmp76,"tmp76");
														HX_STACK_LINE(279)
														int tmp77 = (int(tmp76) & int((int)255));		HX_STACK_VAR(tmp77,"tmp77");
														HX_STACK_LINE(279)
														int tmp78 = (int(tmp77) << int((int)8));		HX_STACK_VAR(tmp78,"tmp78");
														HX_STACK_LINE(279)
														int tmp79 = (int(tmp71) | int(tmp78));		HX_STACK_VAR(tmp79,"tmp79");
														HX_STACK_LINE(279)
														int tmp80 = (int(destPixel) & int((int)255));		HX_STACK_VAR(tmp80,"tmp80");
														HX_STACK_LINE(279)
														int tmp81 = (int(tmp80) & int((int)255));		HX_STACK_VAR(tmp81,"tmp81");
														HX_STACK_LINE(279)
														int tmp82 = (int(tmp79) | int(tmp81));		HX_STACK_VAR(tmp82,"tmp82");
														HX_STACK_LINE(279)
														destPixel = tmp82;
													}
												}
											}
										}
										HX_STACK_LINE(279)
										int tmp52 = destFormat;		HX_STACK_VAR(tmp52,"tmp52");
										HX_STACK_LINE(279)
										switch( (int)(tmp52)){
											case (int)2: {
												HX_STACK_LINE(279)
												{
													HX_STACK_LINE(279)
													int tmp53 = (int(destPixel) >> int((int)8));		HX_STACK_VAR(tmp53,"tmp53");
													HX_STACK_LINE(279)
													int tmp54 = (int(tmp53) & int((int)255));		HX_STACK_VAR(tmp54,"tmp54");
													HX_STACK_LINE(279)
													int val = tmp54;		HX_STACK_VAR(val,"val");
													HX_STACK_LINE(279)
													{
														HX_STACK_LINE(279)
														::__hxcpp_memory_set_byte(destData->buffer->b,(destData->byteOffset + destPosition),val);
														HX_STACK_LINE(279)
														val;
													}
												}
												HX_STACK_LINE(279)
												{
													HX_STACK_LINE(279)
													int tmp53 = (int(destPixel) >> int((int)16));		HX_STACK_VAR(tmp53,"tmp53");
													HX_STACK_LINE(279)
													int tmp54 = (int(tmp53) & int((int)255));		HX_STACK_VAR(tmp54,"tmp54");
													HX_STACK_LINE(279)
													int val = tmp54;		HX_STACK_VAR(val,"val");
													HX_STACK_LINE(279)
													{
														HX_STACK_LINE(279)
														::__hxcpp_memory_set_byte(destData->buffer->b,(destData->byteOffset + ((destPosition + (int)1))),val);
														HX_STACK_LINE(279)
														val;
													}
												}
												HX_STACK_LINE(279)
												{
													HX_STACK_LINE(279)
													int tmp53 = (int(destPixel) >> int((int)24));		HX_STACK_VAR(tmp53,"tmp53");
													HX_STACK_LINE(279)
													int tmp54 = (int(tmp53) & int((int)255));		HX_STACK_VAR(tmp54,"tmp54");
													HX_STACK_LINE(279)
													int val = tmp54;		HX_STACK_VAR(val,"val");
													HX_STACK_LINE(279)
													{
														HX_STACK_LINE(279)
														::__hxcpp_memory_set_byte(destData->buffer->b,(destData->byteOffset + ((destPosition + (int)2))),val);
														HX_STACK_LINE(279)
														val;
													}
												}
												HX_STACK_LINE(279)
												{
													HX_STACK_LINE(279)
													int tmp53 = (int(destPixel) & int((int)255));		HX_STACK_VAR(tmp53,"tmp53");
													HX_STACK_LINE(279)
													int val = tmp53;		HX_STACK_VAR(val,"val");
													HX_STACK_LINE(279)
													{
														HX_STACK_LINE(279)
														::__hxcpp_memory_set_byte(destData->buffer->b,(destData->byteOffset + ((destPosition + (int)3))),val);
														HX_STACK_LINE(279)
														val;
													}
												}
											}
											;break;
											case (int)0: {
												HX_STACK_LINE(279)
												{
													HX_STACK_LINE(279)
													int tmp53 = (int(destPixel) >> int((int)24));		HX_STACK_VAR(tmp53,"tmp53");
													HX_STACK_LINE(279)
													int tmp54 = (int(tmp53) & int((int)255));		HX_STACK_VAR(tmp54,"tmp54");
													HX_STACK_LINE(279)
													int val = tmp54;		HX_STACK_VAR(val,"val");
													HX_STACK_LINE(279)
													{
														HX_STACK_LINE(279)
														::__hxcpp_memory_set_byte(destData->buffer->b,(destData->byteOffset + destPosition),val);
														HX_STACK_LINE(279)
														val;
													}
												}
												HX_STACK_LINE(279)
												{
													HX_STACK_LINE(279)
													int tmp53 = (int(destPixel) >> int((int)16));		HX_STACK_VAR(tmp53,"tmp53");
													HX_STACK_LINE(279)
													int tmp54 = (int(tmp53) & int((int)255));		HX_STACK_VAR(tmp54,"tmp54");
													HX_STACK_LINE(279)
													int val = tmp54;		HX_STACK_VAR(val,"val");
													HX_STACK_LINE(279)
													{
														HX_STACK_LINE(279)
														::__hxcpp_memory_set_byte(destData->buffer->b,(destData->byteOffset + ((destPosition + (int)1))),val);
														HX_STACK_LINE(279)
														val;
													}
												}
												HX_STACK_LINE(279)
												{
													HX_STACK_LINE(279)
													int tmp53 = (int(destPixel) >> int((int)8));		HX_STACK_VAR(tmp53,"tmp53");
													HX_STACK_LINE(279)
													int tmp54 = (int(tmp53) & int((int)255));		HX_STACK_VAR(tmp54,"tmp54");
													HX_STACK_LINE(279)
													int val = tmp54;		HX_STACK_VAR(val,"val");
													HX_STACK_LINE(279)
													{
														HX_STACK_LINE(279)
														::__hxcpp_memory_set_byte(destData->buffer->b,(destData->byteOffset + ((destPosition + (int)2))),val);
														HX_STACK_LINE(279)
														val;
													}
												}
												HX_STACK_LINE(279)
												{
													HX_STACK_LINE(279)
													int tmp53 = (int(destPixel) & int((int)255));		HX_STACK_VAR(tmp53,"tmp53");
													HX_STACK_LINE(279)
													int val = tmp53;		HX_STACK_VAR(val,"val");
													HX_STACK_LINE(279)
													{
														HX_STACK_LINE(279)
														::__hxcpp_memory_set_byte(destData->buffer->b,(destData->byteOffset + ((destPosition + (int)3))),val);
														HX_STACK_LINE(279)
														val;
													}
												}
											}
											;break;
											case (int)1: {
												HX_STACK_LINE(279)
												{
													HX_STACK_LINE(279)
													int tmp53 = (int(destPixel) & int((int)255));		HX_STACK_VAR(tmp53,"tmp53");
													HX_STACK_LINE(279)
													int val = tmp53;		HX_STACK_VAR(val,"val");
													HX_STACK_LINE(279)
													{
														HX_STACK_LINE(279)
														::__hxcpp_memory_set_byte(destData->buffer->b,(destData->byteOffset + destPosition),val);
														HX_STACK_LINE(279)
														val;
													}
												}
												HX_STACK_LINE(279)
												{
													HX_STACK_LINE(279)
													int tmp53 = (int(destPixel) >> int((int)24));		HX_STACK_VAR(tmp53,"tmp53");
													HX_STACK_LINE(279)
													int tmp54 = (int(tmp53) & int((int)255));		HX_STACK_VAR(tmp54,"tmp54");
													HX_STACK_LINE(279)
													int val = tmp54;		HX_STACK_VAR(val,"val");
													HX_STACK_LINE(279)
													{
														HX_STACK_LINE(279)
														::__hxcpp_memory_set_byte(destData->buffer->b,(destData->byteOffset + ((destPosition + (int)1))),val);
														HX_STACK_LINE(279)
														val;
													}
												}
												HX_STACK_LINE(279)
												{
													HX_STACK_LINE(279)
													int tmp53 = (int(destPixel) >> int((int)16));		HX_STACK_VAR(tmp53,"tmp53");
													HX_STACK_LINE(279)
													int tmp54 = (int(tmp53) & int((int)255));		HX_STACK_VAR(tmp54,"tmp54");
													HX_STACK_LINE(279)
													int val = tmp54;		HX_STACK_VAR(val,"val");
													HX_STACK_LINE(279)
													{
														HX_STACK_LINE(279)
														::__hxcpp_memory_set_byte(destData->buffer->b,(destData->byteOffset + ((destPosition + (int)2))),val);
														HX_STACK_LINE(279)
														val;
													}
												}
												HX_STACK_LINE(279)
												{
													HX_STACK_LINE(279)
													int tmp53 = (int(destPixel) >> int((int)8));		HX_STACK_VAR(tmp53,"tmp53");
													HX_STACK_LINE(279)
													int tmp54 = (int(tmp53) & int((int)255));		HX_STACK_VAR(tmp54,"tmp54");
													HX_STACK_LINE(279)
													int val = tmp54;		HX_STACK_VAR(val,"val");
													HX_STACK_LINE(279)
													{
														HX_STACK_LINE(279)
														::__hxcpp_memory_set_byte(destData->buffer->b,(destData->byteOffset + ((destPosition + (int)3))),val);
														HX_STACK_LINE(279)
														val;
													}
												}
											}
											;break;
										}
									}
									HX_STACK_LINE(281)
									hx::AddEq(sourcePosition,(int)4);
									HX_STACK_LINE(282)
									hx::AddEq(destPosition,(int)4);
								}
							}
						}
					}
				}
			}
		}
		HX_STACK_LINE(294)
		image->dirty = true;
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC7(ImageDataUtil_obj,copyPixels,(void))

Void ImageDataUtil_obj::fillRect( ::lime::graphics::Image image,::lime::math::Rectangle rect,int color,int format){
{
		HX_STACK_FRAME("lime.graphics.utils.ImageDataUtil","fillRect",0x163460f5,"lime.graphics.utils.ImageDataUtil.fillRect","lime/graphics/utils/ImageDataUtil.hx",299,0x494d921f)
		HX_STACK_ARG(image,"image")
		HX_STACK_ARG(rect,"rect")
		HX_STACK_ARG(color,"color")
		HX_STACK_ARG(format,"format")
		HX_STACK_LINE(301)
		int fillColor;		HX_STACK_VAR(fillColor,"fillColor");
		HX_STACK_LINE(303)
		int tmp = format;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(303)
		switch( (int)(tmp)){
			case (int)1: {
				HX_STACK_LINE(305)
				int tmp1;		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(305)
				{
					HX_STACK_LINE(305)
					int argb = color;		HX_STACK_VAR(argb,"argb");
					HX_STACK_LINE(305)
					{
						HX_STACK_LINE(305)
						int tmp2;		HX_STACK_VAR(tmp2,"tmp2");
						HX_STACK_LINE(305)
						{
							HX_STACK_LINE(305)
							int rgba = (int)0;		HX_STACK_VAR(rgba,"rgba");
							HX_STACK_LINE(305)
							tmp2 = rgba;
						}
						HX_STACK_LINE(305)
						int rgba = tmp2;		HX_STACK_VAR(rgba,"rgba");
						HX_STACK_LINE(305)
						{
							HX_STACK_LINE(305)
							int tmp3 = (int(argb) >> int((int)16));		HX_STACK_VAR(tmp3,"tmp3");
							HX_STACK_LINE(305)
							int tmp4 = (int(tmp3) & int((int)255));		HX_STACK_VAR(tmp4,"tmp4");
							HX_STACK_LINE(305)
							int tmp5 = (int(tmp4) & int((int)255));		HX_STACK_VAR(tmp5,"tmp5");
							HX_STACK_LINE(305)
							int tmp6 = (int(tmp5) << int((int)24));		HX_STACK_VAR(tmp6,"tmp6");
							HX_STACK_LINE(305)
							int tmp7 = (int(argb) >> int((int)8));		HX_STACK_VAR(tmp7,"tmp7");
							HX_STACK_LINE(305)
							int tmp8 = (int(tmp7) & int((int)255));		HX_STACK_VAR(tmp8,"tmp8");
							HX_STACK_LINE(305)
							int tmp9 = (int(tmp8) & int((int)255));		HX_STACK_VAR(tmp9,"tmp9");
							HX_STACK_LINE(305)
							int tmp10 = (int(tmp9) << int((int)16));		HX_STACK_VAR(tmp10,"tmp10");
							HX_STACK_LINE(305)
							int tmp11 = (int(tmp6) | int(tmp10));		HX_STACK_VAR(tmp11,"tmp11");
							HX_STACK_LINE(305)
							int tmp12 = (int(argb) & int((int)255));		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(305)
							int tmp13 = (int(tmp12) & int((int)255));		HX_STACK_VAR(tmp13,"tmp13");
							HX_STACK_LINE(305)
							int tmp14 = (int(tmp13) << int((int)8));		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(305)
							int tmp15 = (int(tmp11) | int(tmp14));		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(305)
							int tmp16 = (int(argb) >> int((int)24));		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(305)
							int tmp17 = (int(tmp16) & int((int)255));		HX_STACK_VAR(tmp17,"tmp17");
							HX_STACK_LINE(305)
							int tmp18 = (int(tmp17) & int((int)255));		HX_STACK_VAR(tmp18,"tmp18");
							HX_STACK_LINE(305)
							int tmp19 = (int(tmp15) | int(tmp18));		HX_STACK_VAR(tmp19,"tmp19");
							HX_STACK_LINE(305)
							rgba = tmp19;
						}
						HX_STACK_LINE(305)
						tmp1 = rgba;
					}
				}
				HX_STACK_LINE(305)
				fillColor = tmp1;
			}
			;break;
			case (int)2: {
				HX_STACK_LINE(306)
				int tmp1;		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(306)
				{
					HX_STACK_LINE(306)
					int bgra = color;		HX_STACK_VAR(bgra,"bgra");
					HX_STACK_LINE(306)
					{
						HX_STACK_LINE(306)
						int tmp2;		HX_STACK_VAR(tmp2,"tmp2");
						HX_STACK_LINE(306)
						{
							HX_STACK_LINE(306)
							int rgba = (int)0;		HX_STACK_VAR(rgba,"rgba");
							HX_STACK_LINE(306)
							tmp2 = rgba;
						}
						HX_STACK_LINE(306)
						int rgba = tmp2;		HX_STACK_VAR(rgba,"rgba");
						HX_STACK_LINE(306)
						{
							HX_STACK_LINE(306)
							int tmp3 = (int(bgra) >> int((int)8));		HX_STACK_VAR(tmp3,"tmp3");
							HX_STACK_LINE(306)
							int tmp4 = (int(tmp3) & int((int)255));		HX_STACK_VAR(tmp4,"tmp4");
							HX_STACK_LINE(306)
							int tmp5 = (int(tmp4) & int((int)255));		HX_STACK_VAR(tmp5,"tmp5");
							HX_STACK_LINE(306)
							int tmp6 = (int(tmp5) << int((int)24));		HX_STACK_VAR(tmp6,"tmp6");
							HX_STACK_LINE(306)
							int tmp7 = (int(bgra) >> int((int)16));		HX_STACK_VAR(tmp7,"tmp7");
							HX_STACK_LINE(306)
							int tmp8 = (int(tmp7) & int((int)255));		HX_STACK_VAR(tmp8,"tmp8");
							HX_STACK_LINE(306)
							int tmp9 = (int(tmp8) & int((int)255));		HX_STACK_VAR(tmp9,"tmp9");
							HX_STACK_LINE(306)
							int tmp10 = (int(tmp9) << int((int)16));		HX_STACK_VAR(tmp10,"tmp10");
							HX_STACK_LINE(306)
							int tmp11 = (int(tmp6) | int(tmp10));		HX_STACK_VAR(tmp11,"tmp11");
							HX_STACK_LINE(306)
							int tmp12 = (int(bgra) >> int((int)24));		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(306)
							int tmp13 = (int(tmp12) & int((int)255));		HX_STACK_VAR(tmp13,"tmp13");
							HX_STACK_LINE(306)
							int tmp14 = (int(tmp13) & int((int)255));		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(306)
							int tmp15 = (int(tmp14) << int((int)8));		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(306)
							int tmp16 = (int(tmp11) | int(tmp15));		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(306)
							int tmp17 = (int(bgra) & int((int)255));		HX_STACK_VAR(tmp17,"tmp17");
							HX_STACK_LINE(306)
							int tmp18 = (int(tmp17) & int((int)255));		HX_STACK_VAR(tmp18,"tmp18");
							HX_STACK_LINE(306)
							int tmp19 = (int(tmp16) | int(tmp18));		HX_STACK_VAR(tmp19,"tmp19");
							HX_STACK_LINE(306)
							rgba = tmp19;
						}
						HX_STACK_LINE(306)
						tmp1 = rgba;
					}
				}
				HX_STACK_LINE(306)
				fillColor = tmp1;
			}
			;break;
			default: {
				HX_STACK_LINE(307)
				fillColor = color;
			}
		}
		HX_STACK_LINE(311)
		bool tmp1 = image->get_transparent();		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(311)
		bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(311)
		if ((tmp2)){
			HX_STACK_LINE(313)
			{
				HX_STACK_LINE(313)
				int tmp3 = (int(fillColor) >> int((int)24));		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(313)
				int tmp4 = (int(tmp3) & int((int)255));		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(313)
				int tmp5 = (int(tmp4) & int((int)255));		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(313)
				int tmp6 = (int(tmp5) << int((int)24));		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(313)
				int tmp7 = (int(fillColor) >> int((int)16));		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(313)
				int tmp8 = (int(tmp7) & int((int)255));		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(313)
				int tmp9 = (int(tmp8) & int((int)255));		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(313)
				int tmp10 = (int(tmp9) << int((int)16));		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(313)
				int tmp11 = (int(tmp6) | int(tmp10));		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(313)
				int tmp12 = (int(fillColor) >> int((int)8));		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(313)
				int tmp13 = (int(tmp12) & int((int)255));		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(313)
				int tmp14 = (int(tmp13) & int((int)255));		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(313)
				int tmp15 = (int(tmp14) << int((int)8));		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(313)
				int tmp16 = (int(tmp11) | int(tmp15));		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(313)
				int tmp17 = (int)255;		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(313)
				int tmp18 = (int(tmp16) | int(tmp17));		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(313)
				fillColor = tmp18;
			}
			HX_STACK_LINE(313)
			(int)255;
		}
		HX_STACK_LINE(317)
		::lime::utils::ArrayBufferView tmp3 = image->buffer->data;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(317)
		::lime::utils::ArrayBufferView data = tmp3;		HX_STACK_VAR(data,"data");
		HX_STACK_LINE(318)
		bool tmp4 = (data == null());		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(318)
		if ((tmp4)){
			HX_STACK_LINE(318)
			return null();
		}
		HX_STACK_LINE(321)
		bool tmp5 = ::lime::_system::System_obj::disableCFFI;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(321)
		bool tmp6 = !(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(321)
		if ((tmp6)){
			HX_STACK_LINE(321)
			::lime::graphics::Image tmp7 = image;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(321)
			::lime::math::Rectangle tmp8 = rect;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(321)
			int tmp9 = (int(fillColor) >> int((int)16));		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(321)
			int tmp10 = (int(tmp9) & int((int)65535));		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(321)
			int tmp11 = (int(fillColor) & int((int)65535));		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(321)
			::lime::graphics::utils::ImageDataUtil_obj::lime_image_data_util_fill_rect(tmp7,tmp8,tmp10,tmp11);
		}
		else{
			HX_STACK_LINE(325)
			int tmp7 = image->buffer->format;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(325)
			int format1 = tmp7;		HX_STACK_VAR(format1,"format1");
			HX_STACK_LINE(326)
			bool tmp8 = image->buffer->premultiplied;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(326)
			bool premultiplied = tmp8;		HX_STACK_VAR(premultiplied,"premultiplied");
			HX_STACK_LINE(328)
			::lime::graphics::utils::_ImageDataUtil::ImageDataView tmp9 = ::lime::graphics::utils::_ImageDataUtil::ImageDataView_obj::__new(image,rect);		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(328)
			::lime::graphics::utils::_ImageDataUtil::ImageDataView dataView = tmp9;		HX_STACK_VAR(dataView,"dataView");
			HX_STACK_LINE(329)
			int row;		HX_STACK_VAR(row,"row");
			HX_STACK_LINE(331)
			{
				HX_STACK_LINE(331)
				int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(331)
				int _g = dataView->height;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(331)
				while((true)){
					HX_STACK_LINE(331)
					bool tmp10 = (_g1 < _g);		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(331)
					bool tmp11 = !(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(331)
					if ((tmp11)){
						HX_STACK_LINE(331)
						break;
					}
					HX_STACK_LINE(331)
					int tmp12 = (_g1)++;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(331)
					int y = tmp12;		HX_STACK_VAR(y,"y");
					HX_STACK_LINE(333)
					int tmp13 = dataView->offset;		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(333)
					int tmp14 = (dataView->stride * y);		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(333)
					int tmp15 = (tmp13 + tmp14);		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(333)
					row = tmp15;
					HX_STACK_LINE(335)
					{
						HX_STACK_LINE(335)
						int _g3 = (int)0;		HX_STACK_VAR(_g3,"_g3");
						HX_STACK_LINE(335)
						int _g2 = dataView->width;		HX_STACK_VAR(_g2,"_g2");
						HX_STACK_LINE(335)
						while((true)){
							HX_STACK_LINE(335)
							bool tmp16 = (_g3 < _g2);		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(335)
							bool tmp17 = !(tmp16);		HX_STACK_VAR(tmp17,"tmp17");
							HX_STACK_LINE(335)
							if ((tmp17)){
								HX_STACK_LINE(335)
								break;
							}
							HX_STACK_LINE(335)
							int tmp18 = (_g3)++;		HX_STACK_VAR(tmp18,"tmp18");
							HX_STACK_LINE(335)
							int x = tmp18;		HX_STACK_VAR(x,"x");
							HX_STACK_LINE(337)
							{
								HX_STACK_LINE(337)
								int tmp19 = row;		HX_STACK_VAR(tmp19,"tmp19");
								HX_STACK_LINE(337)
								int tmp20 = (x * (int)4);		HX_STACK_VAR(tmp20,"tmp20");
								HX_STACK_LINE(337)
								int tmp21 = (tmp19 + tmp20);		HX_STACK_VAR(tmp21,"tmp21");
								HX_STACK_LINE(337)
								int offset = tmp21;		HX_STACK_VAR(offset,"offset");
								HX_STACK_LINE(337)
								bool tmp22 = premultiplied;		HX_STACK_VAR(tmp22,"tmp22");
								HX_STACK_LINE(337)
								if ((tmp22)){
									HX_STACK_LINE(337)
									int tmp23 = (int(fillColor) & int((int)255));		HX_STACK_VAR(tmp23,"tmp23");
									HX_STACK_LINE(337)
									bool tmp24 = (tmp23 == (int)0);		HX_STACK_VAR(tmp24,"tmp24");
									HX_STACK_LINE(337)
									if ((tmp24)){
										HX_STACK_LINE(337)
										bool tmp25 = (fillColor != (int)0);		HX_STACK_VAR(tmp25,"tmp25");
										HX_STACK_LINE(337)
										if ((tmp25)){
											HX_STACK_LINE(337)
											fillColor = (int)0;
										}
									}
									else{
										HX_STACK_LINE(337)
										int tmp25 = (int(fillColor) & int((int)255));		HX_STACK_VAR(tmp25,"tmp25");
										HX_STACK_LINE(337)
										bool tmp26 = (tmp25 != (int)255);		HX_STACK_VAR(tmp26,"tmp26");
										HX_STACK_LINE(337)
										if ((tmp26)){
											HX_STACK_LINE(337)
											Dynamic tmp27;		HX_STACK_VAR(tmp27,"tmp27");
											HX_STACK_LINE(337)
											{
												HX_STACK_LINE(337)
												::lime::utils::ArrayBufferView tmp28 = ::lime::math::color::_RGBA::RGBA_Impl__obj::__alpha16;		HX_STACK_VAR(tmp28,"tmp28");
												HX_STACK_LINE(337)
												::lime::utils::ArrayBufferView this1 = tmp28;		HX_STACK_VAR(this1,"this1");
												HX_STACK_LINE(337)
												{
													HX_STACK_LINE(337)
													bool littleEndian = true;		HX_STACK_VAR(littleEndian,"littleEndian");
													HX_STACK_LINE(337)
													tmp27 = ::__hxcpp_memory_get_ui32(this1->buffer->b,(this1->byteOffset + (((int(fillColor) & int((int)255))) * (int)4)));
												}
											}
											HX_STACK_LINE(337)
											::lime::math::color::_RGBA::RGBA_Impl__obj::a16 = tmp27;
											HX_STACK_LINE(337)
											{
												HX_STACK_LINE(337)
												int tmp28 = (int(fillColor) >> int((int)24));		HX_STACK_VAR(tmp28,"tmp28");
												HX_STACK_LINE(337)
												int tmp29 = (int(tmp28) & int((int)255));		HX_STACK_VAR(tmp29,"tmp29");
												HX_STACK_LINE(337)
												int tmp30 = ::lime::math::color::_RGBA::RGBA_Impl__obj::a16;		HX_STACK_VAR(tmp30,"tmp30");
												HX_STACK_LINE(337)
												int tmp31 = (tmp29 * tmp30);		HX_STACK_VAR(tmp31,"tmp31");
												HX_STACK_LINE(337)
												int tmp32 = (int(tmp31) >> int((int)16));		HX_STACK_VAR(tmp32,"tmp32");
												HX_STACK_LINE(337)
												int tmp33 = (int(tmp32) & int((int)255));		HX_STACK_VAR(tmp33,"tmp33");
												HX_STACK_LINE(337)
												int tmp34 = (int(tmp33) << int((int)24));		HX_STACK_VAR(tmp34,"tmp34");
												HX_STACK_LINE(337)
												int tmp35 = (int(fillColor) >> int((int)16));		HX_STACK_VAR(tmp35,"tmp35");
												HX_STACK_LINE(337)
												int tmp36 = (int(tmp35) & int((int)255));		HX_STACK_VAR(tmp36,"tmp36");
												HX_STACK_LINE(337)
												int tmp37 = ::lime::math::color::_RGBA::RGBA_Impl__obj::a16;		HX_STACK_VAR(tmp37,"tmp37");
												HX_STACK_LINE(337)
												int tmp38 = (tmp36 * tmp37);		HX_STACK_VAR(tmp38,"tmp38");
												HX_STACK_LINE(337)
												int tmp39 = (int(tmp38) >> int((int)16));		HX_STACK_VAR(tmp39,"tmp39");
												HX_STACK_LINE(337)
												int tmp40 = (int(tmp39) & int((int)255));		HX_STACK_VAR(tmp40,"tmp40");
												HX_STACK_LINE(337)
												int tmp41 = (int(tmp40) << int((int)16));		HX_STACK_VAR(tmp41,"tmp41");
												HX_STACK_LINE(337)
												int tmp42 = (int(tmp34) | int(tmp41));		HX_STACK_VAR(tmp42,"tmp42");
												HX_STACK_LINE(337)
												int tmp43 = (int(fillColor) >> int((int)8));		HX_STACK_VAR(tmp43,"tmp43");
												HX_STACK_LINE(337)
												int tmp44 = (int(tmp43) & int((int)255));		HX_STACK_VAR(tmp44,"tmp44");
												HX_STACK_LINE(337)
												int tmp45 = ::lime::math::color::_RGBA::RGBA_Impl__obj::a16;		HX_STACK_VAR(tmp45,"tmp45");
												HX_STACK_LINE(337)
												int tmp46 = (tmp44 * tmp45);		HX_STACK_VAR(tmp46,"tmp46");
												HX_STACK_LINE(337)
												int tmp47 = (int(tmp46) >> int((int)16));		HX_STACK_VAR(tmp47,"tmp47");
												HX_STACK_LINE(337)
												int tmp48 = (int(tmp47) & int((int)255));		HX_STACK_VAR(tmp48,"tmp48");
												HX_STACK_LINE(337)
												int tmp49 = (int(tmp48) << int((int)8));		HX_STACK_VAR(tmp49,"tmp49");
												HX_STACK_LINE(337)
												int tmp50 = (int(tmp42) | int(tmp49));		HX_STACK_VAR(tmp50,"tmp50");
												HX_STACK_LINE(337)
												int tmp51 = (int(fillColor) & int((int)255));		HX_STACK_VAR(tmp51,"tmp51");
												HX_STACK_LINE(337)
												int tmp52 = (int(tmp51) & int((int)255));		HX_STACK_VAR(tmp52,"tmp52");
												HX_STACK_LINE(337)
												int tmp53 = (int(tmp50) | int(tmp52));		HX_STACK_VAR(tmp53,"tmp53");
												HX_STACK_LINE(337)
												fillColor = tmp53;
											}
										}
									}
								}
								HX_STACK_LINE(337)
								int tmp23 = format1;		HX_STACK_VAR(tmp23,"tmp23");
								HX_STACK_LINE(337)
								switch( (int)(tmp23)){
									case (int)2: {
										HX_STACK_LINE(337)
										{
											HX_STACK_LINE(337)
											int tmp24 = (int(fillColor) >> int((int)8));		HX_STACK_VAR(tmp24,"tmp24");
											HX_STACK_LINE(337)
											int tmp25 = (int(tmp24) & int((int)255));		HX_STACK_VAR(tmp25,"tmp25");
											HX_STACK_LINE(337)
											int val = tmp25;		HX_STACK_VAR(val,"val");
											HX_STACK_LINE(337)
											{
												HX_STACK_LINE(337)
												::__hxcpp_memory_set_byte(data->buffer->b,(data->byteOffset + offset),val);
												HX_STACK_LINE(337)
												val;
											}
										}
										HX_STACK_LINE(337)
										{
											HX_STACK_LINE(337)
											int tmp24 = (int(fillColor) >> int((int)16));		HX_STACK_VAR(tmp24,"tmp24");
											HX_STACK_LINE(337)
											int tmp25 = (int(tmp24) & int((int)255));		HX_STACK_VAR(tmp25,"tmp25");
											HX_STACK_LINE(337)
											int val = tmp25;		HX_STACK_VAR(val,"val");
											HX_STACK_LINE(337)
											{
												HX_STACK_LINE(337)
												::__hxcpp_memory_set_byte(data->buffer->b,(data->byteOffset + ((offset + (int)1))),val);
												HX_STACK_LINE(337)
												val;
											}
										}
										HX_STACK_LINE(337)
										{
											HX_STACK_LINE(337)
											int tmp24 = (int(fillColor) >> int((int)24));		HX_STACK_VAR(tmp24,"tmp24");
											HX_STACK_LINE(337)
											int tmp25 = (int(tmp24) & int((int)255));		HX_STACK_VAR(tmp25,"tmp25");
											HX_STACK_LINE(337)
											int val = tmp25;		HX_STACK_VAR(val,"val");
											HX_STACK_LINE(337)
											{
												HX_STACK_LINE(337)
												::__hxcpp_memory_set_byte(data->buffer->b,(data->byteOffset + ((offset + (int)2))),val);
												HX_STACK_LINE(337)
												val;
											}
										}
										HX_STACK_LINE(337)
										{
											HX_STACK_LINE(337)
											int tmp24 = (int(fillColor) & int((int)255));		HX_STACK_VAR(tmp24,"tmp24");
											HX_STACK_LINE(337)
											int val = tmp24;		HX_STACK_VAR(val,"val");
											HX_STACK_LINE(337)
											{
												HX_STACK_LINE(337)
												::__hxcpp_memory_set_byte(data->buffer->b,(data->byteOffset + ((offset + (int)3))),val);
												HX_STACK_LINE(337)
												val;
											}
										}
									}
									;break;
									case (int)0: {
										HX_STACK_LINE(337)
										{
											HX_STACK_LINE(337)
											int tmp24 = (int(fillColor) >> int((int)24));		HX_STACK_VAR(tmp24,"tmp24");
											HX_STACK_LINE(337)
											int tmp25 = (int(tmp24) & int((int)255));		HX_STACK_VAR(tmp25,"tmp25");
											HX_STACK_LINE(337)
											int val = tmp25;		HX_STACK_VAR(val,"val");
											HX_STACK_LINE(337)
											{
												HX_STACK_LINE(337)
												::__hxcpp_memory_set_byte(data->buffer->b,(data->byteOffset + offset),val);
												HX_STACK_LINE(337)
												val;
											}
										}
										HX_STACK_LINE(337)
										{
											HX_STACK_LINE(337)
											int tmp24 = (int(fillColor) >> int((int)16));		HX_STACK_VAR(tmp24,"tmp24");
											HX_STACK_LINE(337)
											int tmp25 = (int(tmp24) & int((int)255));		HX_STACK_VAR(tmp25,"tmp25");
											HX_STACK_LINE(337)
											int val = tmp25;		HX_STACK_VAR(val,"val");
											HX_STACK_LINE(337)
											{
												HX_STACK_LINE(337)
												::__hxcpp_memory_set_byte(data->buffer->b,(data->byteOffset + ((offset + (int)1))),val);
												HX_STACK_LINE(337)
												val;
											}
										}
										HX_STACK_LINE(337)
										{
											HX_STACK_LINE(337)
											int tmp24 = (int(fillColor) >> int((int)8));		HX_STACK_VAR(tmp24,"tmp24");
											HX_STACK_LINE(337)
											int tmp25 = (int(tmp24) & int((int)255));		HX_STACK_VAR(tmp25,"tmp25");
											HX_STACK_LINE(337)
											int val = tmp25;		HX_STACK_VAR(val,"val");
											HX_STACK_LINE(337)
											{
												HX_STACK_LINE(337)
												::__hxcpp_memory_set_byte(data->buffer->b,(data->byteOffset + ((offset + (int)2))),val);
												HX_STACK_LINE(337)
												val;
											}
										}
										HX_STACK_LINE(337)
										{
											HX_STACK_LINE(337)
											int tmp24 = (int(fillColor) & int((int)255));		HX_STACK_VAR(tmp24,"tmp24");
											HX_STACK_LINE(337)
											int val = tmp24;		HX_STACK_VAR(val,"val");
											HX_STACK_LINE(337)
											{
												HX_STACK_LINE(337)
												::__hxcpp_memory_set_byte(data->buffer->b,(data->byteOffset + ((offset + (int)3))),val);
												HX_STACK_LINE(337)
												val;
											}
										}
									}
									;break;
									case (int)1: {
										HX_STACK_LINE(337)
										{
											HX_STACK_LINE(337)
											int tmp24 = (int(fillColor) & int((int)255));		HX_STACK_VAR(tmp24,"tmp24");
											HX_STACK_LINE(337)
											int val = tmp24;		HX_STACK_VAR(val,"val");
											HX_STACK_LINE(337)
											{
												HX_STACK_LINE(337)
												::__hxcpp_memory_set_byte(data->buffer->b,(data->byteOffset + offset),val);
												HX_STACK_LINE(337)
												val;
											}
										}
										HX_STACK_LINE(337)
										{
											HX_STACK_LINE(337)
											int tmp24 = (int(fillColor) >> int((int)24));		HX_STACK_VAR(tmp24,"tmp24");
											HX_STACK_LINE(337)
											int tmp25 = (int(tmp24) & int((int)255));		HX_STACK_VAR(tmp25,"tmp25");
											HX_STACK_LINE(337)
											int val = tmp25;		HX_STACK_VAR(val,"val");
											HX_STACK_LINE(337)
											{
												HX_STACK_LINE(337)
												::__hxcpp_memory_set_byte(data->buffer->b,(data->byteOffset + ((offset + (int)1))),val);
												HX_STACK_LINE(337)
												val;
											}
										}
										HX_STACK_LINE(337)
										{
											HX_STACK_LINE(337)
											int tmp24 = (int(fillColor) >> int((int)16));		HX_STACK_VAR(tmp24,"tmp24");
											HX_STACK_LINE(337)
											int tmp25 = (int(tmp24) & int((int)255));		HX_STACK_VAR(tmp25,"tmp25");
											HX_STACK_LINE(337)
											int val = tmp25;		HX_STACK_VAR(val,"val");
											HX_STACK_LINE(337)
											{
												HX_STACK_LINE(337)
												::__hxcpp_memory_set_byte(data->buffer->b,(data->byteOffset + ((offset + (int)2))),val);
												HX_STACK_LINE(337)
												val;
											}
										}
										HX_STACK_LINE(337)
										{
											HX_STACK_LINE(337)
											int tmp24 = (int(fillColor) >> int((int)8));		HX_STACK_VAR(tmp24,"tmp24");
											HX_STACK_LINE(337)
											int tmp25 = (int(tmp24) & int((int)255));		HX_STACK_VAR(tmp25,"tmp25");
											HX_STACK_LINE(337)
											int val = tmp25;		HX_STACK_VAR(val,"val");
											HX_STACK_LINE(337)
											{
												HX_STACK_LINE(337)
												::__hxcpp_memory_set_byte(data->buffer->b,(data->byteOffset + ((offset + (int)3))),val);
												HX_STACK_LINE(337)
												val;
											}
										}
									}
									;break;
								}
							}
						}
					}
				}
			}
		}
		HX_STACK_LINE(345)
		image->dirty = true;
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(ImageDataUtil_obj,fillRect,(void))

Void ImageDataUtil_obj::floodFill( ::lime::graphics::Image image,int x,int y,int color,int format){
{
		HX_STACK_FRAME("lime.graphics.utils.ImageDataUtil","floodFill",0xfbc79ff3,"lime.graphics.utils.ImageDataUtil.floodFill","lime/graphics/utils/ImageDataUtil.hx",350,0x494d921f)
		HX_STACK_ARG(image,"image")
		HX_STACK_ARG(x,"x")
		HX_STACK_ARG(y,"y")
		HX_STACK_ARG(color,"color")
		HX_STACK_ARG(format,"format")
		HX_STACK_LINE(352)
		::lime::utils::ArrayBufferView tmp = image->buffer->data;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(352)
		::lime::utils::ArrayBufferView data = tmp;		HX_STACK_VAR(data,"data");
		HX_STACK_LINE(353)
		bool tmp1 = (data == null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(353)
		if ((tmp1)){
			HX_STACK_LINE(353)
			return null();
		}
		HX_STACK_LINE(355)
		bool tmp2 = (format == (int)1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(355)
		if ((tmp2)){
			HX_STACK_LINE(355)
			int tmp3 = (int(color) & int((int)16777215));		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(355)
			int tmp4 = (int(tmp3) << int((int)8));		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(355)
			int tmp5 = (int(color) >> int((int)24));		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(355)
			int tmp6 = (int(tmp5) & int((int)255));		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(355)
			int tmp7 = (int(tmp4) | int(tmp6));		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(355)
			color = tmp7;
		}
		HX_STACK_LINE(358)
		bool tmp3 = ::lime::_system::System_obj::disableCFFI;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(358)
		bool tmp4 = !(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(358)
		if ((tmp4)){
			HX_STACK_LINE(358)
			::lime::graphics::Image tmp5 = image;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(358)
			int tmp6 = x;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(358)
			int tmp7 = y;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(358)
			int tmp8 = (int(color) >> int((int)16));		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(358)
			int tmp9 = (int(tmp8) & int((int)65535));		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(358)
			int tmp10 = (int(color) & int((int)65535));		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(358)
			::lime::graphics::utils::ImageDataUtil_obj::lime_image_data_util_flood_fill(tmp5,tmp6,tmp7,tmp9,tmp10);
		}
		else{
			HX_STACK_LINE(362)
			int tmp5 = image->buffer->format;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(362)
			int format1 = tmp5;		HX_STACK_VAR(format1,"format1");
			HX_STACK_LINE(363)
			bool tmp6 = image->buffer->premultiplied;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(363)
			bool premultiplied = tmp6;		HX_STACK_VAR(premultiplied,"premultiplied");
			HX_STACK_LINE(365)
			int fillColor = color;		HX_STACK_VAR(fillColor,"fillColor");
			HX_STACK_LINE(367)
			int hitColor;		HX_STACK_VAR(hitColor,"hitColor");
			HX_STACK_LINE(368)
			{
				HX_STACK_LINE(368)
				int tmp7 = (y + image->offsetY);		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(368)
				int tmp8 = image->buffer->width;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(368)
				int tmp9 = (tmp8 * (int)4);		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(368)
				int tmp10 = (tmp7 * tmp9);		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(368)
				int tmp11 = (x + image->offsetX);		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(368)
				int tmp12 = (tmp11 * (int)4);		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(368)
				int tmp13 = (tmp10 + tmp12);		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(368)
				int offset = tmp13;		HX_STACK_VAR(offset,"offset");
				HX_STACK_LINE(368)
				int tmp14 = format1;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(368)
				switch( (int)(tmp14)){
					case (int)2: {
						HX_STACK_LINE(368)
						int tmp15 = ::__hxcpp_memory_get_byte(data->buffer->b,(data->byteOffset + ((offset + (int)2))));		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(368)
						Dynamic tmp16 = (int(tmp15) & int((int)255));		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(368)
						int r = tmp16;		HX_STACK_VAR(r,"r");
						HX_STACK_LINE(368)
						int tmp17 = ::__hxcpp_memory_get_byte(data->buffer->b,(data->byteOffset + ((offset + (int)1))));		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(368)
						Dynamic tmp18 = (int(tmp17) & int((int)255));		HX_STACK_VAR(tmp18,"tmp18");
						HX_STACK_LINE(368)
						int g = tmp18;		HX_STACK_VAR(g,"g");
						HX_STACK_LINE(368)
						int tmp19 = ::__hxcpp_memory_get_byte(data->buffer->b,(data->byteOffset + offset));		HX_STACK_VAR(tmp19,"tmp19");
						HX_STACK_LINE(368)
						Dynamic tmp20 = (int(tmp19) & int((int)255));		HX_STACK_VAR(tmp20,"tmp20");
						HX_STACK_LINE(368)
						int b = tmp20;		HX_STACK_VAR(b,"b");
						HX_STACK_LINE(368)
						int tmp21 = ::__hxcpp_memory_get_byte(data->buffer->b,(data->byteOffset + ((offset + (int)3))));		HX_STACK_VAR(tmp21,"tmp21");
						HX_STACK_LINE(368)
						Dynamic tmp22 = (int(tmp21) & int((int)255));		HX_STACK_VAR(tmp22,"tmp22");
						HX_STACK_LINE(368)
						int a = tmp22;		HX_STACK_VAR(a,"a");
						HX_STACK_LINE(368)
						int tmp23 = (int(r) & int((int)255));		HX_STACK_VAR(tmp23,"tmp23");
						HX_STACK_LINE(368)
						int tmp24 = (int(tmp23) << int((int)24));		HX_STACK_VAR(tmp24,"tmp24");
						HX_STACK_LINE(368)
						int tmp25 = (int(g) & int((int)255));		HX_STACK_VAR(tmp25,"tmp25");
						HX_STACK_LINE(368)
						int tmp26 = (int(tmp25) << int((int)16));		HX_STACK_VAR(tmp26,"tmp26");
						HX_STACK_LINE(368)
						int tmp27 = (int(tmp24) | int(tmp26));		HX_STACK_VAR(tmp27,"tmp27");
						HX_STACK_LINE(368)
						int tmp28 = (int(b) & int((int)255));		HX_STACK_VAR(tmp28,"tmp28");
						HX_STACK_LINE(368)
						int tmp29 = (int(tmp28) << int((int)8));		HX_STACK_VAR(tmp29,"tmp29");
						HX_STACK_LINE(368)
						int tmp30 = (int(tmp27) | int(tmp29));		HX_STACK_VAR(tmp30,"tmp30");
						HX_STACK_LINE(368)
						int tmp31 = (int(a) & int((int)255));		HX_STACK_VAR(tmp31,"tmp31");
						HX_STACK_LINE(368)
						int tmp32 = (int(tmp30) | int(tmp31));		HX_STACK_VAR(tmp32,"tmp32");
						HX_STACK_LINE(368)
						hitColor = tmp32;
					}
					;break;
					case (int)0: {
						HX_STACK_LINE(368)
						int tmp15 = ::__hxcpp_memory_get_byte(data->buffer->b,(data->byteOffset + offset));		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(368)
						Dynamic tmp16 = (int(tmp15) & int((int)255));		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(368)
						int r = tmp16;		HX_STACK_VAR(r,"r");
						HX_STACK_LINE(368)
						int tmp17 = ::__hxcpp_memory_get_byte(data->buffer->b,(data->byteOffset + ((offset + (int)1))));		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(368)
						Dynamic tmp18 = (int(tmp17) & int((int)255));		HX_STACK_VAR(tmp18,"tmp18");
						HX_STACK_LINE(368)
						int g = tmp18;		HX_STACK_VAR(g,"g");
						HX_STACK_LINE(368)
						int tmp19 = ::__hxcpp_memory_get_byte(data->buffer->b,(data->byteOffset + ((offset + (int)2))));		HX_STACK_VAR(tmp19,"tmp19");
						HX_STACK_LINE(368)
						Dynamic tmp20 = (int(tmp19) & int((int)255));		HX_STACK_VAR(tmp20,"tmp20");
						HX_STACK_LINE(368)
						int b = tmp20;		HX_STACK_VAR(b,"b");
						HX_STACK_LINE(368)
						int tmp21 = ::__hxcpp_memory_get_byte(data->buffer->b,(data->byteOffset + ((offset + (int)3))));		HX_STACK_VAR(tmp21,"tmp21");
						HX_STACK_LINE(368)
						Dynamic tmp22 = (int(tmp21) & int((int)255));		HX_STACK_VAR(tmp22,"tmp22");
						HX_STACK_LINE(368)
						int a = tmp22;		HX_STACK_VAR(a,"a");
						HX_STACK_LINE(368)
						int tmp23 = (int(r) & int((int)255));		HX_STACK_VAR(tmp23,"tmp23");
						HX_STACK_LINE(368)
						int tmp24 = (int(tmp23) << int((int)24));		HX_STACK_VAR(tmp24,"tmp24");
						HX_STACK_LINE(368)
						int tmp25 = (int(g) & int((int)255));		HX_STACK_VAR(tmp25,"tmp25");
						HX_STACK_LINE(368)
						int tmp26 = (int(tmp25) << int((int)16));		HX_STACK_VAR(tmp26,"tmp26");
						HX_STACK_LINE(368)
						int tmp27 = (int(tmp24) | int(tmp26));		HX_STACK_VAR(tmp27,"tmp27");
						HX_STACK_LINE(368)
						int tmp28 = (int(b) & int((int)255));		HX_STACK_VAR(tmp28,"tmp28");
						HX_STACK_LINE(368)
						int tmp29 = (int(tmp28) << int((int)8));		HX_STACK_VAR(tmp29,"tmp29");
						HX_STACK_LINE(368)
						int tmp30 = (int(tmp27) | int(tmp29));		HX_STACK_VAR(tmp30,"tmp30");
						HX_STACK_LINE(368)
						int tmp31 = (int(a) & int((int)255));		HX_STACK_VAR(tmp31,"tmp31");
						HX_STACK_LINE(368)
						int tmp32 = (int(tmp30) | int(tmp31));		HX_STACK_VAR(tmp32,"tmp32");
						HX_STACK_LINE(368)
						hitColor = tmp32;
					}
					;break;
					case (int)1: {
						HX_STACK_LINE(368)
						int tmp15 = ::__hxcpp_memory_get_byte(data->buffer->b,(data->byteOffset + ((offset + (int)1))));		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(368)
						Dynamic tmp16 = (int(tmp15) & int((int)255));		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(368)
						int r = tmp16;		HX_STACK_VAR(r,"r");
						HX_STACK_LINE(368)
						int tmp17 = ::__hxcpp_memory_get_byte(data->buffer->b,(data->byteOffset + ((offset + (int)2))));		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(368)
						Dynamic tmp18 = (int(tmp17) & int((int)255));		HX_STACK_VAR(tmp18,"tmp18");
						HX_STACK_LINE(368)
						int g = tmp18;		HX_STACK_VAR(g,"g");
						HX_STACK_LINE(368)
						int tmp19 = ::__hxcpp_memory_get_byte(data->buffer->b,(data->byteOffset + ((offset + (int)3))));		HX_STACK_VAR(tmp19,"tmp19");
						HX_STACK_LINE(368)
						Dynamic tmp20 = (int(tmp19) & int((int)255));		HX_STACK_VAR(tmp20,"tmp20");
						HX_STACK_LINE(368)
						int b = tmp20;		HX_STACK_VAR(b,"b");
						HX_STACK_LINE(368)
						int tmp21 = ::__hxcpp_memory_get_byte(data->buffer->b,(data->byteOffset + offset));		HX_STACK_VAR(tmp21,"tmp21");
						HX_STACK_LINE(368)
						Dynamic tmp22 = (int(tmp21) & int((int)255));		HX_STACK_VAR(tmp22,"tmp22");
						HX_STACK_LINE(368)
						int a = tmp22;		HX_STACK_VAR(a,"a");
						HX_STACK_LINE(368)
						int tmp23 = (int(r) & int((int)255));		HX_STACK_VAR(tmp23,"tmp23");
						HX_STACK_LINE(368)
						int tmp24 = (int(tmp23) << int((int)24));		HX_STACK_VAR(tmp24,"tmp24");
						HX_STACK_LINE(368)
						int tmp25 = (int(g) & int((int)255));		HX_STACK_VAR(tmp25,"tmp25");
						HX_STACK_LINE(368)
						int tmp26 = (int(tmp25) << int((int)16));		HX_STACK_VAR(tmp26,"tmp26");
						HX_STACK_LINE(368)
						int tmp27 = (int(tmp24) | int(tmp26));		HX_STACK_VAR(tmp27,"tmp27");
						HX_STACK_LINE(368)
						int tmp28 = (int(b) & int((int)255));		HX_STACK_VAR(tmp28,"tmp28");
						HX_STACK_LINE(368)
						int tmp29 = (int(tmp28) << int((int)8));		HX_STACK_VAR(tmp29,"tmp29");
						HX_STACK_LINE(368)
						int tmp30 = (int(tmp27) | int(tmp29));		HX_STACK_VAR(tmp30,"tmp30");
						HX_STACK_LINE(368)
						int tmp31 = (int(a) & int((int)255));		HX_STACK_VAR(tmp31,"tmp31");
						HX_STACK_LINE(368)
						int tmp32 = (int(tmp30) | int(tmp31));		HX_STACK_VAR(tmp32,"tmp32");
						HX_STACK_LINE(368)
						hitColor = tmp32;
					}
					;break;
				}
				HX_STACK_LINE(368)
				bool tmp15 = premultiplied;		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(368)
				if ((tmp15)){
					HX_STACK_LINE(368)
					int tmp16 = (int(hitColor) & int((int)255));		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(368)
					bool tmp17 = (tmp16 != (int)0);		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(368)
					bool tmp18;		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(368)
					if ((tmp17)){
						HX_STACK_LINE(368)
						int tmp19 = (int(hitColor) & int((int)255));		HX_STACK_VAR(tmp19,"tmp19");
						HX_STACK_LINE(368)
						int tmp20 = tmp19;		HX_STACK_VAR(tmp20,"tmp20");
						HX_STACK_LINE(368)
						tmp18 = (tmp20 != (int)255);
					}
					else{
						HX_STACK_LINE(368)
						tmp18 = false;
					}
					HX_STACK_LINE(368)
					if ((tmp18)){
						HX_STACK_LINE(368)
						int tmp19 = (int(hitColor) & int((int)255));		HX_STACK_VAR(tmp19,"tmp19");
						HX_STACK_LINE(368)
						Float tmp20 = (Float(((Float)255.0)) / Float(tmp19));		HX_STACK_VAR(tmp20,"tmp20");
						HX_STACK_LINE(368)
						::lime::math::color::_RGBA::RGBA_Impl__obj::unmult = tmp20;
						HX_STACK_LINE(368)
						{
							HX_STACK_LINE(368)
							Dynamic tmp21;		HX_STACK_VAR(tmp21,"tmp21");
							HX_STACK_LINE(368)
							{
								HX_STACK_LINE(368)
								::lime::utils::ArrayBufferView tmp22 = ::lime::math::color::_RGBA::RGBA_Impl__obj::__clamp;		HX_STACK_VAR(tmp22,"tmp22");
								HX_STACK_LINE(368)
								::lime::utils::ArrayBufferView this1 = tmp22;		HX_STACK_VAR(this1,"this1");
								HX_STACK_LINE(368)
								int tmp23 = (int(hitColor) >> int((int)24));		HX_STACK_VAR(tmp23,"tmp23");
								HX_STACK_LINE(368)
								int tmp24 = (int(tmp23) & int((int)255));		HX_STACK_VAR(tmp24,"tmp24");
								HX_STACK_LINE(368)
								Float tmp25 = ::lime::math::color::_RGBA::RGBA_Impl__obj::unmult;		HX_STACK_VAR(tmp25,"tmp25");
								HX_STACK_LINE(368)
								Float tmp26 = (tmp24 * tmp25);		HX_STACK_VAR(tmp26,"tmp26");
								HX_STACK_LINE(368)
								int tmp27 = ::Math_obj::round(tmp26);		HX_STACK_VAR(tmp27,"tmp27");
								HX_STACK_LINE(368)
								int idx = tmp27;		HX_STACK_VAR(idx,"idx");
								HX_STACK_LINE(368)
								int tmp28 = ::__hxcpp_memory_get_byte(this1->buffer->b,(this1->byteOffset + idx));		HX_STACK_VAR(tmp28,"tmp28");
								HX_STACK_LINE(368)
								tmp21 = (int(tmp28) & int((int)255));
							}
							HX_STACK_LINE(368)
							int r = tmp21;		HX_STACK_VAR(r,"r");
							HX_STACK_LINE(368)
							Dynamic tmp22;		HX_STACK_VAR(tmp22,"tmp22");
							HX_STACK_LINE(368)
							{
								HX_STACK_LINE(368)
								::lime::utils::ArrayBufferView tmp23 = ::lime::math::color::_RGBA::RGBA_Impl__obj::__clamp;		HX_STACK_VAR(tmp23,"tmp23");
								HX_STACK_LINE(368)
								::lime::utils::ArrayBufferView this1 = tmp23;		HX_STACK_VAR(this1,"this1");
								HX_STACK_LINE(368)
								int tmp24 = (int(hitColor) >> int((int)16));		HX_STACK_VAR(tmp24,"tmp24");
								HX_STACK_LINE(368)
								int tmp25 = (int(tmp24) & int((int)255));		HX_STACK_VAR(tmp25,"tmp25");
								HX_STACK_LINE(368)
								Float tmp26 = ::lime::math::color::_RGBA::RGBA_Impl__obj::unmult;		HX_STACK_VAR(tmp26,"tmp26");
								HX_STACK_LINE(368)
								Float tmp27 = (tmp25 * tmp26);		HX_STACK_VAR(tmp27,"tmp27");
								HX_STACK_LINE(368)
								int tmp28 = ::Math_obj::round(tmp27);		HX_STACK_VAR(tmp28,"tmp28");
								HX_STACK_LINE(368)
								int idx = tmp28;		HX_STACK_VAR(idx,"idx");
								HX_STACK_LINE(368)
								int tmp29 = ::__hxcpp_memory_get_byte(this1->buffer->b,(this1->byteOffset + idx));		HX_STACK_VAR(tmp29,"tmp29");
								HX_STACK_LINE(368)
								tmp22 = (int(tmp29) & int((int)255));
							}
							HX_STACK_LINE(368)
							int g = tmp22;		HX_STACK_VAR(g,"g");
							HX_STACK_LINE(368)
							Dynamic tmp23;		HX_STACK_VAR(tmp23,"tmp23");
							HX_STACK_LINE(368)
							{
								HX_STACK_LINE(368)
								::lime::utils::ArrayBufferView tmp24 = ::lime::math::color::_RGBA::RGBA_Impl__obj::__clamp;		HX_STACK_VAR(tmp24,"tmp24");
								HX_STACK_LINE(368)
								::lime::utils::ArrayBufferView this1 = tmp24;		HX_STACK_VAR(this1,"this1");
								HX_STACK_LINE(368)
								int tmp25 = (int(hitColor) >> int((int)8));		HX_STACK_VAR(tmp25,"tmp25");
								HX_STACK_LINE(368)
								int tmp26 = (int(tmp25) & int((int)255));		HX_STACK_VAR(tmp26,"tmp26");
								HX_STACK_LINE(368)
								Float tmp27 = ::lime::math::color::_RGBA::RGBA_Impl__obj::unmult;		HX_STACK_VAR(tmp27,"tmp27");
								HX_STACK_LINE(368)
								Float tmp28 = (tmp26 * tmp27);		HX_STACK_VAR(tmp28,"tmp28");
								HX_STACK_LINE(368)
								int tmp29 = ::Math_obj::round(tmp28);		HX_STACK_VAR(tmp29,"tmp29");
								HX_STACK_LINE(368)
								int idx = tmp29;		HX_STACK_VAR(idx,"idx");
								HX_STACK_LINE(368)
								int tmp30 = ::__hxcpp_memory_get_byte(this1->buffer->b,(this1->byteOffset + idx));		HX_STACK_VAR(tmp30,"tmp30");
								HX_STACK_LINE(368)
								tmp23 = (int(tmp30) & int((int)255));
							}
							HX_STACK_LINE(368)
							int b = tmp23;		HX_STACK_VAR(b,"b");
							HX_STACK_LINE(368)
							int tmp24 = (int(r) & int((int)255));		HX_STACK_VAR(tmp24,"tmp24");
							HX_STACK_LINE(368)
							int tmp25 = (int(tmp24) << int((int)24));		HX_STACK_VAR(tmp25,"tmp25");
							HX_STACK_LINE(368)
							int tmp26 = (int(g) & int((int)255));		HX_STACK_VAR(tmp26,"tmp26");
							HX_STACK_LINE(368)
							int tmp27 = (int(tmp26) << int((int)16));		HX_STACK_VAR(tmp27,"tmp27");
							HX_STACK_LINE(368)
							int tmp28 = (int(tmp25) | int(tmp27));		HX_STACK_VAR(tmp28,"tmp28");
							HX_STACK_LINE(368)
							int tmp29 = (int(b) & int((int)255));		HX_STACK_VAR(tmp29,"tmp29");
							HX_STACK_LINE(368)
							int tmp30 = (int(tmp29) << int((int)8));		HX_STACK_VAR(tmp30,"tmp30");
							HX_STACK_LINE(368)
							int tmp31 = (int(tmp28) | int(tmp30));		HX_STACK_VAR(tmp31,"tmp31");
							HX_STACK_LINE(368)
							int tmp32 = (int(hitColor) & int((int)255));		HX_STACK_VAR(tmp32,"tmp32");
							HX_STACK_LINE(368)
							int tmp33 = (int(tmp32) & int((int)255));		HX_STACK_VAR(tmp33,"tmp33");
							HX_STACK_LINE(368)
							int tmp34 = (int(tmp31) | int(tmp33));		HX_STACK_VAR(tmp34,"tmp34");
							HX_STACK_LINE(368)
							hitColor = tmp34;
						}
					}
				}
			}
			HX_STACK_LINE(370)
			bool tmp7 = image->get_transparent();		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(370)
			bool tmp8 = !(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(370)
			if ((tmp8)){
				HX_STACK_LINE(372)
				{
					HX_STACK_LINE(372)
					{
						HX_STACK_LINE(372)
						int tmp9 = (int(fillColor) >> int((int)24));		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(372)
						int tmp10 = (int(tmp9) & int((int)255));		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(372)
						int tmp11 = (int(tmp10) & int((int)255));		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(372)
						int tmp12 = (int(tmp11) << int((int)24));		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(372)
						int tmp13 = (int(fillColor) >> int((int)16));		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(372)
						int tmp14 = (int(tmp13) & int((int)255));		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(372)
						int tmp15 = (int(tmp14) & int((int)255));		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(372)
						int tmp16 = (int(tmp15) << int((int)16));		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(372)
						int tmp17 = (int(tmp12) | int(tmp16));		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(372)
						int tmp18 = (int(fillColor) >> int((int)8));		HX_STACK_VAR(tmp18,"tmp18");
						HX_STACK_LINE(372)
						int tmp19 = (int(tmp18) & int((int)255));		HX_STACK_VAR(tmp19,"tmp19");
						HX_STACK_LINE(372)
						int tmp20 = (int(tmp19) & int((int)255));		HX_STACK_VAR(tmp20,"tmp20");
						HX_STACK_LINE(372)
						int tmp21 = (int(tmp20) << int((int)8));		HX_STACK_VAR(tmp21,"tmp21");
						HX_STACK_LINE(372)
						int tmp22 = (int(tmp17) | int(tmp21));		HX_STACK_VAR(tmp22,"tmp22");
						HX_STACK_LINE(372)
						int tmp23 = (int)255;		HX_STACK_VAR(tmp23,"tmp23");
						HX_STACK_LINE(372)
						int tmp24 = (int(tmp22) | int(tmp23));		HX_STACK_VAR(tmp24,"tmp24");
						HX_STACK_LINE(372)
						fillColor = tmp24;
					}
					HX_STACK_LINE(372)
					(int)255;
				}
				HX_STACK_LINE(373)
				{
					HX_STACK_LINE(373)
					{
						HX_STACK_LINE(373)
						int tmp9 = (int(hitColor) >> int((int)24));		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(373)
						int tmp10 = (int(tmp9) & int((int)255));		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(373)
						int tmp11 = (int(tmp10) & int((int)255));		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(373)
						int tmp12 = (int(tmp11) << int((int)24));		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(373)
						int tmp13 = (int(hitColor) >> int((int)16));		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(373)
						int tmp14 = (int(tmp13) & int((int)255));		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(373)
						int tmp15 = (int(tmp14) & int((int)255));		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(373)
						int tmp16 = (int(tmp15) << int((int)16));		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(373)
						int tmp17 = (int(tmp12) | int(tmp16));		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(373)
						int tmp18 = (int(hitColor) >> int((int)8));		HX_STACK_VAR(tmp18,"tmp18");
						HX_STACK_LINE(373)
						int tmp19 = (int(tmp18) & int((int)255));		HX_STACK_VAR(tmp19,"tmp19");
						HX_STACK_LINE(373)
						int tmp20 = (int(tmp19) & int((int)255));		HX_STACK_VAR(tmp20,"tmp20");
						HX_STACK_LINE(373)
						int tmp21 = (int(tmp20) << int((int)8));		HX_STACK_VAR(tmp21,"tmp21");
						HX_STACK_LINE(373)
						int tmp22 = (int(tmp17) | int(tmp21));		HX_STACK_VAR(tmp22,"tmp22");
						HX_STACK_LINE(373)
						int tmp23 = (int)255;		HX_STACK_VAR(tmp23,"tmp23");
						HX_STACK_LINE(373)
						int tmp24 = (int(tmp22) | int(tmp23));		HX_STACK_VAR(tmp24,"tmp24");
						HX_STACK_LINE(373)
						hitColor = tmp24;
					}
					HX_STACK_LINE(373)
					(int)255;
				}
			}
			HX_STACK_LINE(377)
			bool tmp9 = (fillColor == hitColor);		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(377)
			if ((tmp9)){
				HX_STACK_LINE(377)
				return null();
			}
			HX_STACK_LINE(379)
			Array< int > dx = Array_obj< int >::__new().Add((int)0).Add((int)-1).Add((int)1).Add((int)0);		HX_STACK_VAR(dx,"dx");
			HX_STACK_LINE(380)
			Array< int > dy = Array_obj< int >::__new().Add((int)-1).Add((int)0).Add((int)0).Add((int)1);		HX_STACK_VAR(dy,"dy");
			HX_STACK_LINE(382)
			int tmp10 = image->offsetX;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(382)
			int tmp11 = -(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(382)
			int minX = tmp11;		HX_STACK_VAR(minX,"minX");
			HX_STACK_LINE(383)
			int tmp12 = image->offsetY;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(383)
			int tmp13 = -(tmp12);		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(383)
			int minY = tmp13;		HX_STACK_VAR(minY,"minY");
			HX_STACK_LINE(384)
			int tmp14 = (minX + image->width);		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(384)
			int maxX = tmp14;		HX_STACK_VAR(maxX,"maxX");
			HX_STACK_LINE(385)
			int tmp15 = (minY + image->height);		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(385)
			int maxY = tmp15;		HX_STACK_VAR(maxY,"maxY");
			HX_STACK_LINE(387)
			Array< int > queue = Array_obj< int >::__new();		HX_STACK_VAR(queue,"queue");
			HX_STACK_LINE(388)
			int tmp16 = x;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(388)
			queue->push(tmp16);
			HX_STACK_LINE(389)
			int tmp17 = y;		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(389)
			queue->push(tmp17);
			HX_STACK_LINE(391)
			Dynamic curPointX;		HX_STACK_VAR(curPointX,"curPointX");
			HX_STACK_LINE(391)
			Dynamic curPointY;		HX_STACK_VAR(curPointY,"curPointY");
			HX_STACK_LINE(391)
			int nextPointX;		HX_STACK_VAR(nextPointX,"nextPointX");
			HX_STACK_LINE(391)
			int nextPointY;		HX_STACK_VAR(nextPointY,"nextPointY");
			HX_STACK_LINE(391)
			int nextPointOffset;		HX_STACK_VAR(nextPointOffset,"nextPointOffset");
			HX_STACK_LINE(391)
			int readColor;		HX_STACK_VAR(readColor,"readColor");
			HX_STACK_LINE(393)
			while((true)){
				HX_STACK_LINE(393)
				bool tmp18 = (queue->length > (int)0);		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(393)
				bool tmp19 = !(tmp18);		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(393)
				if ((tmp19)){
					HX_STACK_LINE(393)
					break;
				}
				HX_STACK_LINE(395)
				Dynamic tmp20 = queue->pop();		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(395)
				curPointY = tmp20;
				HX_STACK_LINE(396)
				Dynamic tmp21 = queue->pop();		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(396)
				curPointX = tmp21;
				HX_STACK_LINE(398)
				{
					HX_STACK_LINE(398)
					int _g = (int)0;		HX_STACK_VAR(_g,"_g");
					HX_STACK_LINE(398)
					while((true)){
						HX_STACK_LINE(398)
						bool tmp22 = (_g < (int)4);		HX_STACK_VAR(tmp22,"tmp22");
						HX_STACK_LINE(398)
						bool tmp23 = !(tmp22);		HX_STACK_VAR(tmp23,"tmp23");
						HX_STACK_LINE(398)
						if ((tmp23)){
							HX_STACK_LINE(398)
							break;
						}
						HX_STACK_LINE(398)
						int tmp24 = (_g)++;		HX_STACK_VAR(tmp24,"tmp24");
						HX_STACK_LINE(398)
						int i = tmp24;		HX_STACK_VAR(i,"i");
						HX_STACK_LINE(400)
						Dynamic tmp25 = curPointX;		HX_STACK_VAR(tmp25,"tmp25");
						HX_STACK_LINE(400)
						int tmp26 = dx->__get(i);		HX_STACK_VAR(tmp26,"tmp26");
						HX_STACK_LINE(400)
						int tmp27 = (tmp25 + tmp26);		HX_STACK_VAR(tmp27,"tmp27");
						HX_STACK_LINE(400)
						nextPointX = tmp27;
						HX_STACK_LINE(401)
						Dynamic tmp28 = curPointY;		HX_STACK_VAR(tmp28,"tmp28");
						HX_STACK_LINE(401)
						int tmp29 = dy->__get(i);		HX_STACK_VAR(tmp29,"tmp29");
						HX_STACK_LINE(401)
						int tmp30 = (tmp28 + tmp29);		HX_STACK_VAR(tmp30,"tmp30");
						HX_STACK_LINE(401)
						nextPointY = tmp30;
						HX_STACK_LINE(403)
						bool tmp31 = (nextPointX < minX);		HX_STACK_VAR(tmp31,"tmp31");
						HX_STACK_LINE(403)
						bool tmp32 = !(tmp31);		HX_STACK_VAR(tmp32,"tmp32");
						HX_STACK_LINE(403)
						bool tmp33 = tmp32;		HX_STACK_VAR(tmp33,"tmp33");
						HX_STACK_LINE(403)
						bool tmp34;		HX_STACK_VAR(tmp34,"tmp34");
						HX_STACK_LINE(403)
						if ((tmp33)){
							HX_STACK_LINE(403)
							tmp34 = (nextPointY < minY);
						}
						else{
							HX_STACK_LINE(403)
							tmp34 = true;
						}
						HX_STACK_LINE(403)
						bool tmp35 = !(tmp34);		HX_STACK_VAR(tmp35,"tmp35");
						HX_STACK_LINE(403)
						bool tmp36 = tmp35;		HX_STACK_VAR(tmp36,"tmp36");
						HX_STACK_LINE(403)
						bool tmp37;		HX_STACK_VAR(tmp37,"tmp37");
						HX_STACK_LINE(403)
						if ((tmp36)){
							HX_STACK_LINE(403)
							tmp37 = (nextPointX >= maxX);
						}
						else{
							HX_STACK_LINE(403)
							tmp37 = true;
						}
						HX_STACK_LINE(403)
						bool tmp38 = !(tmp37);		HX_STACK_VAR(tmp38,"tmp38");
						HX_STACK_LINE(403)
						bool tmp39;		HX_STACK_VAR(tmp39,"tmp39");
						HX_STACK_LINE(403)
						if ((tmp38)){
							HX_STACK_LINE(403)
							tmp39 = (nextPointY >= maxY);
						}
						else{
							HX_STACK_LINE(403)
							tmp39 = true;
						}
						HX_STACK_LINE(403)
						if ((tmp39)){
							HX_STACK_LINE(405)
							continue;
						}
						HX_STACK_LINE(409)
						int tmp40 = (nextPointY * image->width);		HX_STACK_VAR(tmp40,"tmp40");
						HX_STACK_LINE(409)
						int tmp41 = nextPointX;		HX_STACK_VAR(tmp41,"tmp41");
						HX_STACK_LINE(409)
						int tmp42 = (tmp40 + tmp41);		HX_STACK_VAR(tmp42,"tmp42");
						HX_STACK_LINE(409)
						int tmp43 = (tmp42 * (int)4);		HX_STACK_VAR(tmp43,"tmp43");
						HX_STACK_LINE(409)
						nextPointOffset = tmp43;
						HX_STACK_LINE(410)
						{
							HX_STACK_LINE(410)
							int tmp44 = format1;		HX_STACK_VAR(tmp44,"tmp44");
							HX_STACK_LINE(410)
							switch( (int)(tmp44)){
								case (int)2: {
									HX_STACK_LINE(410)
									int tmp45 = ::__hxcpp_memory_get_byte(data->buffer->b,(data->byteOffset + ((nextPointOffset + (int)2))));		HX_STACK_VAR(tmp45,"tmp45");
									HX_STACK_LINE(410)
									Dynamic tmp46 = (int(tmp45) & int((int)255));		HX_STACK_VAR(tmp46,"tmp46");
									HX_STACK_LINE(410)
									int r = tmp46;		HX_STACK_VAR(r,"r");
									HX_STACK_LINE(410)
									int tmp47 = ::__hxcpp_memory_get_byte(data->buffer->b,(data->byteOffset + ((nextPointOffset + (int)1))));		HX_STACK_VAR(tmp47,"tmp47");
									HX_STACK_LINE(410)
									Dynamic tmp48 = (int(tmp47) & int((int)255));		HX_STACK_VAR(tmp48,"tmp48");
									HX_STACK_LINE(410)
									int g = tmp48;		HX_STACK_VAR(g,"g");
									HX_STACK_LINE(410)
									int tmp49 = ::__hxcpp_memory_get_byte(data->buffer->b,(data->byteOffset + nextPointOffset));		HX_STACK_VAR(tmp49,"tmp49");
									HX_STACK_LINE(410)
									Dynamic tmp50 = (int(tmp49) & int((int)255));		HX_STACK_VAR(tmp50,"tmp50");
									HX_STACK_LINE(410)
									int b = tmp50;		HX_STACK_VAR(b,"b");
									HX_STACK_LINE(410)
									int tmp51 = ::__hxcpp_memory_get_byte(data->buffer->b,(data->byteOffset + ((nextPointOffset + (int)3))));		HX_STACK_VAR(tmp51,"tmp51");
									HX_STACK_LINE(410)
									Dynamic tmp52 = (int(tmp51) & int((int)255));		HX_STACK_VAR(tmp52,"tmp52");
									HX_STACK_LINE(410)
									int a = tmp52;		HX_STACK_VAR(a,"a");
									HX_STACK_LINE(410)
									int tmp53 = (int(r) & int((int)255));		HX_STACK_VAR(tmp53,"tmp53");
									HX_STACK_LINE(410)
									int tmp54 = (int(tmp53) << int((int)24));		HX_STACK_VAR(tmp54,"tmp54");
									HX_STACK_LINE(410)
									int tmp55 = (int(g) & int((int)255));		HX_STACK_VAR(tmp55,"tmp55");
									HX_STACK_LINE(410)
									int tmp56 = (int(tmp55) << int((int)16));		HX_STACK_VAR(tmp56,"tmp56");
									HX_STACK_LINE(410)
									int tmp57 = (int(tmp54) | int(tmp56));		HX_STACK_VAR(tmp57,"tmp57");
									HX_STACK_LINE(410)
									int tmp58 = (int(b) & int((int)255));		HX_STACK_VAR(tmp58,"tmp58");
									HX_STACK_LINE(410)
									int tmp59 = (int(tmp58) << int((int)8));		HX_STACK_VAR(tmp59,"tmp59");
									HX_STACK_LINE(410)
									int tmp60 = (int(tmp57) | int(tmp59));		HX_STACK_VAR(tmp60,"tmp60");
									HX_STACK_LINE(410)
									int tmp61 = (int(a) & int((int)255));		HX_STACK_VAR(tmp61,"tmp61");
									HX_STACK_LINE(410)
									int tmp62 = (int(tmp60) | int(tmp61));		HX_STACK_VAR(tmp62,"tmp62");
									HX_STACK_LINE(410)
									readColor = tmp62;
								}
								;break;
								case (int)0: {
									HX_STACK_LINE(410)
									int tmp45 = ::__hxcpp_memory_get_byte(data->buffer->b,(data->byteOffset + nextPointOffset));		HX_STACK_VAR(tmp45,"tmp45");
									HX_STACK_LINE(410)
									Dynamic tmp46 = (int(tmp45) & int((int)255));		HX_STACK_VAR(tmp46,"tmp46");
									HX_STACK_LINE(410)
									int r = tmp46;		HX_STACK_VAR(r,"r");
									HX_STACK_LINE(410)
									int tmp47 = ::__hxcpp_memory_get_byte(data->buffer->b,(data->byteOffset + ((nextPointOffset + (int)1))));		HX_STACK_VAR(tmp47,"tmp47");
									HX_STACK_LINE(410)
									Dynamic tmp48 = (int(tmp47) & int((int)255));		HX_STACK_VAR(tmp48,"tmp48");
									HX_STACK_LINE(410)
									int g = tmp48;		HX_STACK_VAR(g,"g");
									HX_STACK_LINE(410)
									int tmp49 = ::__hxcpp_memory_get_byte(data->buffer->b,(data->byteOffset + ((nextPointOffset + (int)2))));		HX_STACK_VAR(tmp49,"tmp49");
									HX_STACK_LINE(410)
									Dynamic tmp50 = (int(tmp49) & int((int)255));		HX_STACK_VAR(tmp50,"tmp50");
									HX_STACK_LINE(410)
									int b = tmp50;		HX_STACK_VAR(b,"b");
									HX_STACK_LINE(410)
									int tmp51 = ::__hxcpp_memory_get_byte(data->buffer->b,(data->byteOffset + ((nextPointOffset + (int)3))));		HX_STACK_VAR(tmp51,"tmp51");
									HX_STACK_LINE(410)
									Dynamic tmp52 = (int(tmp51) & int((int)255));		HX_STACK_VAR(tmp52,"tmp52");
									HX_STACK_LINE(410)
									int a = tmp52;		HX_STACK_VAR(a,"a");
									HX_STACK_LINE(410)
									int tmp53 = (int(r) & int((int)255));		HX_STACK_VAR(tmp53,"tmp53");
									HX_STACK_LINE(410)
									int tmp54 = (int(tmp53) << int((int)24));		HX_STACK_VAR(tmp54,"tmp54");
									HX_STACK_LINE(410)
									int tmp55 = (int(g) & int((int)255));		HX_STACK_VAR(tmp55,"tmp55");
									HX_STACK_LINE(410)
									int tmp56 = (int(tmp55) << int((int)16));		HX_STACK_VAR(tmp56,"tmp56");
									HX_STACK_LINE(410)
									int tmp57 = (int(tmp54) | int(tmp56));		HX_STACK_VAR(tmp57,"tmp57");
									HX_STACK_LINE(410)
									int tmp58 = (int(b) & int((int)255));		HX_STACK_VAR(tmp58,"tmp58");
									HX_STACK_LINE(410)
									int tmp59 = (int(tmp58) << int((int)8));		HX_STACK_VAR(tmp59,"tmp59");
									HX_STACK_LINE(410)
									int tmp60 = (int(tmp57) | int(tmp59));		HX_STACK_VAR(tmp60,"tmp60");
									HX_STACK_LINE(410)
									int tmp61 = (int(a) & int((int)255));		HX_STACK_VAR(tmp61,"tmp61");
									HX_STACK_LINE(410)
									int tmp62 = (int(tmp60) | int(tmp61));		HX_STACK_VAR(tmp62,"tmp62");
									HX_STACK_LINE(410)
									readColor = tmp62;
								}
								;break;
								case (int)1: {
									HX_STACK_LINE(410)
									int tmp45 = ::__hxcpp_memory_get_byte(data->buffer->b,(data->byteOffset + ((nextPointOffset + (int)1))));		HX_STACK_VAR(tmp45,"tmp45");
									HX_STACK_LINE(410)
									Dynamic tmp46 = (int(tmp45) & int((int)255));		HX_STACK_VAR(tmp46,"tmp46");
									HX_STACK_LINE(410)
									int r = tmp46;		HX_STACK_VAR(r,"r");
									HX_STACK_LINE(410)
									int tmp47 = ::__hxcpp_memory_get_byte(data->buffer->b,(data->byteOffset + ((nextPointOffset + (int)2))));		HX_STACK_VAR(tmp47,"tmp47");
									HX_STACK_LINE(410)
									Dynamic tmp48 = (int(tmp47) & int((int)255));		HX_STACK_VAR(tmp48,"tmp48");
									HX_STACK_LINE(410)
									int g = tmp48;		HX_STACK_VAR(g,"g");
									HX_STACK_LINE(410)
									int tmp49 = ::__hxcpp_memory_get_byte(data->buffer->b,(data->byteOffset + ((nextPointOffset + (int)3))));		HX_STACK_VAR(tmp49,"tmp49");
									HX_STACK_LINE(410)
									Dynamic tmp50 = (int(tmp49) & int((int)255));		HX_STACK_VAR(tmp50,"tmp50");
									HX_STACK_LINE(410)
									int b = tmp50;		HX_STACK_VAR(b,"b");
									HX_STACK_LINE(410)
									int tmp51 = ::__hxcpp_memory_get_byte(data->buffer->b,(data->byteOffset + nextPointOffset));		HX_STACK_VAR(tmp51,"tmp51");
									HX_STACK_LINE(410)
									Dynamic tmp52 = (int(tmp51) & int((int)255));		HX_STACK_VAR(tmp52,"tmp52");
									HX_STACK_LINE(410)
									int a = tmp52;		HX_STACK_VAR(a,"a");
									HX_STACK_LINE(410)
									int tmp53 = (int(r) & int((int)255));		HX_STACK_VAR(tmp53,"tmp53");
									HX_STACK_LINE(410)
									int tmp54 = (int(tmp53) << int((int)24));		HX_STACK_VAR(tmp54,"tmp54");
									HX_STACK_LINE(410)
									int tmp55 = (int(g) & int((int)255));		HX_STACK_VAR(tmp55,"tmp55");
									HX_STACK_LINE(410)
									int tmp56 = (int(tmp55) << int((int)16));		HX_STACK_VAR(tmp56,"tmp56");
									HX_STACK_LINE(410)
									int tmp57 = (int(tmp54) | int(tmp56));		HX_STACK_VAR(tmp57,"tmp57");
									HX_STACK_LINE(410)
									int tmp58 = (int(b) & int((int)255));		HX_STACK_VAR(tmp58,"tmp58");
									HX_STACK_LINE(410)
									int tmp59 = (int(tmp58) << int((int)8));		HX_STACK_VAR(tmp59,"tmp59");
									HX_STACK_LINE(410)
									int tmp60 = (int(tmp57) | int(tmp59));		HX_STACK_VAR(tmp60,"tmp60");
									HX_STACK_LINE(410)
									int tmp61 = (int(a) & int((int)255));		HX_STACK_VAR(tmp61,"tmp61");
									HX_STACK_LINE(410)
									int tmp62 = (int(tmp60) | int(tmp61));		HX_STACK_VAR(tmp62,"tmp62");
									HX_STACK_LINE(410)
									readColor = tmp62;
								}
								;break;
							}
							HX_STACK_LINE(410)
							bool tmp45 = premultiplied;		HX_STACK_VAR(tmp45,"tmp45");
							HX_STACK_LINE(410)
							if ((tmp45)){
								HX_STACK_LINE(410)
								int tmp46 = (int(readColor) & int((int)255));		HX_STACK_VAR(tmp46,"tmp46");
								HX_STACK_LINE(410)
								bool tmp47 = (tmp46 != (int)0);		HX_STACK_VAR(tmp47,"tmp47");
								HX_STACK_LINE(410)
								bool tmp48;		HX_STACK_VAR(tmp48,"tmp48");
								HX_STACK_LINE(410)
								if ((tmp47)){
									HX_STACK_LINE(410)
									int tmp49 = (int(readColor) & int((int)255));		HX_STACK_VAR(tmp49,"tmp49");
									HX_STACK_LINE(410)
									int tmp50 = tmp49;		HX_STACK_VAR(tmp50,"tmp50");
									HX_STACK_LINE(410)
									tmp48 = (tmp50 != (int)255);
								}
								else{
									HX_STACK_LINE(410)
									tmp48 = false;
								}
								HX_STACK_LINE(410)
								if ((tmp48)){
									HX_STACK_LINE(410)
									int tmp49 = (int(readColor) & int((int)255));		HX_STACK_VAR(tmp49,"tmp49");
									HX_STACK_LINE(410)
									Float tmp50 = (Float(((Float)255.0)) / Float(tmp49));		HX_STACK_VAR(tmp50,"tmp50");
									HX_STACK_LINE(410)
									::lime::math::color::_RGBA::RGBA_Impl__obj::unmult = tmp50;
									HX_STACK_LINE(410)
									{
										HX_STACK_LINE(410)
										Dynamic tmp51;		HX_STACK_VAR(tmp51,"tmp51");
										HX_STACK_LINE(410)
										{
											HX_STACK_LINE(410)
											::lime::utils::ArrayBufferView tmp52 = ::lime::math::color::_RGBA::RGBA_Impl__obj::__clamp;		HX_STACK_VAR(tmp52,"tmp52");
											HX_STACK_LINE(410)
											::lime::utils::ArrayBufferView this1 = tmp52;		HX_STACK_VAR(this1,"this1");
											HX_STACK_LINE(410)
											int tmp53 = (int(readColor) >> int((int)24));		HX_STACK_VAR(tmp53,"tmp53");
											HX_STACK_LINE(410)
											int tmp54 = (int(tmp53) & int((int)255));		HX_STACK_VAR(tmp54,"tmp54");
											HX_STACK_LINE(410)
											Float tmp55 = ::lime::math::color::_RGBA::RGBA_Impl__obj::unmult;		HX_STACK_VAR(tmp55,"tmp55");
											HX_STACK_LINE(410)
											Float tmp56 = (tmp54 * tmp55);		HX_STACK_VAR(tmp56,"tmp56");
											HX_STACK_LINE(410)
											int tmp57 = ::Math_obj::round(tmp56);		HX_STACK_VAR(tmp57,"tmp57");
											HX_STACK_LINE(410)
											int idx = tmp57;		HX_STACK_VAR(idx,"idx");
											HX_STACK_LINE(410)
											int tmp58 = ::__hxcpp_memory_get_byte(this1->buffer->b,(this1->byteOffset + idx));		HX_STACK_VAR(tmp58,"tmp58");
											HX_STACK_LINE(410)
											tmp51 = (int(tmp58) & int((int)255));
										}
										HX_STACK_LINE(410)
										int r = tmp51;		HX_STACK_VAR(r,"r");
										HX_STACK_LINE(410)
										Dynamic tmp52;		HX_STACK_VAR(tmp52,"tmp52");
										HX_STACK_LINE(410)
										{
											HX_STACK_LINE(410)
											::lime::utils::ArrayBufferView tmp53 = ::lime::math::color::_RGBA::RGBA_Impl__obj::__clamp;		HX_STACK_VAR(tmp53,"tmp53");
											HX_STACK_LINE(410)
											::lime::utils::ArrayBufferView this1 = tmp53;		HX_STACK_VAR(this1,"this1");
											HX_STACK_LINE(410)
											int tmp54 = (int(readColor) >> int((int)16));		HX_STACK_VAR(tmp54,"tmp54");
											HX_STACK_LINE(410)
											int tmp55 = (int(tmp54) & int((int)255));		HX_STACK_VAR(tmp55,"tmp55");
											HX_STACK_LINE(410)
											Float tmp56 = ::lime::math::color::_RGBA::RGBA_Impl__obj::unmult;		HX_STACK_VAR(tmp56,"tmp56");
											HX_STACK_LINE(410)
											Float tmp57 = (tmp55 * tmp56);		HX_STACK_VAR(tmp57,"tmp57");
											HX_STACK_LINE(410)
											int tmp58 = ::Math_obj::round(tmp57);		HX_STACK_VAR(tmp58,"tmp58");
											HX_STACK_LINE(410)
											int idx = tmp58;		HX_STACK_VAR(idx,"idx");
											HX_STACK_LINE(410)
											int tmp59 = ::__hxcpp_memory_get_byte(this1->buffer->b,(this1->byteOffset + idx));		HX_STACK_VAR(tmp59,"tmp59");
											HX_STACK_LINE(410)
											tmp52 = (int(tmp59) & int((int)255));
										}
										HX_STACK_LINE(410)
										int g = tmp52;		HX_STACK_VAR(g,"g");
										HX_STACK_LINE(410)
										Dynamic tmp53;		HX_STACK_VAR(tmp53,"tmp53");
										HX_STACK_LINE(410)
										{
											HX_STACK_LINE(410)
											::lime::utils::ArrayBufferView tmp54 = ::lime::math::color::_RGBA::RGBA_Impl__obj::__clamp;		HX_STACK_VAR(tmp54,"tmp54");
											HX_STACK_LINE(410)
											::lime::utils::ArrayBufferView this1 = tmp54;		HX_STACK_VAR(this1,"this1");
											HX_STACK_LINE(410)
											int tmp55 = (int(readColor) >> int((int)8));		HX_STACK_VAR(tmp55,"tmp55");
											HX_STACK_LINE(410)
											int tmp56 = (int(tmp55) & int((int)255));		HX_STACK_VAR(tmp56,"tmp56");
											HX_STACK_LINE(410)
											Float tmp57 = ::lime::math::color::_RGBA::RGBA_Impl__obj::unmult;		HX_STACK_VAR(tmp57,"tmp57");
											HX_STACK_LINE(410)
											Float tmp58 = (tmp56 * tmp57);		HX_STACK_VAR(tmp58,"tmp58");
											HX_STACK_LINE(410)
											int tmp59 = ::Math_obj::round(tmp58);		HX_STACK_VAR(tmp59,"tmp59");
											HX_STACK_LINE(410)
											int idx = tmp59;		HX_STACK_VAR(idx,"idx");
											HX_STACK_LINE(410)
											int tmp60 = ::__hxcpp_memory_get_byte(this1->buffer->b,(this1->byteOffset + idx));		HX_STACK_VAR(tmp60,"tmp60");
											HX_STACK_LINE(410)
											tmp53 = (int(tmp60) & int((int)255));
										}
										HX_STACK_LINE(410)
										int b = tmp53;		HX_STACK_VAR(b,"b");
										HX_STACK_LINE(410)
										int tmp54 = (int(r) & int((int)255));		HX_STACK_VAR(tmp54,"tmp54");
										HX_STACK_LINE(410)
										int tmp55 = (int(tmp54) << int((int)24));		HX_STACK_VAR(tmp55,"tmp55");
										HX_STACK_LINE(410)
										int tmp56 = (int(g) & int((int)255));		HX_STACK_VAR(tmp56,"tmp56");
										HX_STACK_LINE(410)
										int tmp57 = (int(tmp56) << int((int)16));		HX_STACK_VAR(tmp57,"tmp57");
										HX_STACK_LINE(410)
										int tmp58 = (int(tmp55) | int(tmp57));		HX_STACK_VAR(tmp58,"tmp58");
										HX_STACK_LINE(410)
										int tmp59 = (int(b) & int((int)255));		HX_STACK_VAR(tmp59,"tmp59");
										HX_STACK_LINE(410)
										int tmp60 = (int(tmp59) << int((int)8));		HX_STACK_VAR(tmp60,"tmp60");
										HX_STACK_LINE(410)
										int tmp61 = (int(tmp58) | int(tmp60));		HX_STACK_VAR(tmp61,"tmp61");
										HX_STACK_LINE(410)
										int tmp62 = (int(readColor) & int((int)255));		HX_STACK_VAR(tmp62,"tmp62");
										HX_STACK_LINE(410)
										int tmp63 = (int(tmp62) & int((int)255));		HX_STACK_VAR(tmp63,"tmp63");
										HX_STACK_LINE(410)
										int tmp64 = (int(tmp61) | int(tmp63));		HX_STACK_VAR(tmp64,"tmp64");
										HX_STACK_LINE(410)
										readColor = tmp64;
									}
								}
							}
						}
						HX_STACK_LINE(412)
						bool tmp44 = (readColor == hitColor);		HX_STACK_VAR(tmp44,"tmp44");
						HX_STACK_LINE(412)
						if ((tmp44)){
							HX_STACK_LINE(414)
							{
								HX_STACK_LINE(414)
								bool tmp45 = premultiplied;		HX_STACK_VAR(tmp45,"tmp45");
								HX_STACK_LINE(414)
								if ((tmp45)){
									HX_STACK_LINE(414)
									int tmp46 = (int(fillColor) & int((int)255));		HX_STACK_VAR(tmp46,"tmp46");
									HX_STACK_LINE(414)
									bool tmp47 = (tmp46 == (int)0);		HX_STACK_VAR(tmp47,"tmp47");
									HX_STACK_LINE(414)
									if ((tmp47)){
										HX_STACK_LINE(414)
										bool tmp48 = (fillColor != (int)0);		HX_STACK_VAR(tmp48,"tmp48");
										HX_STACK_LINE(414)
										if ((tmp48)){
											HX_STACK_LINE(414)
											fillColor = (int)0;
										}
									}
									else{
										HX_STACK_LINE(414)
										int tmp48 = (int(fillColor) & int((int)255));		HX_STACK_VAR(tmp48,"tmp48");
										HX_STACK_LINE(414)
										bool tmp49 = (tmp48 != (int)255);		HX_STACK_VAR(tmp49,"tmp49");
										HX_STACK_LINE(414)
										if ((tmp49)){
											HX_STACK_LINE(414)
											Dynamic tmp50;		HX_STACK_VAR(tmp50,"tmp50");
											HX_STACK_LINE(414)
											{
												HX_STACK_LINE(414)
												::lime::utils::ArrayBufferView tmp51 = ::lime::math::color::_RGBA::RGBA_Impl__obj::__alpha16;		HX_STACK_VAR(tmp51,"tmp51");
												HX_STACK_LINE(414)
												::lime::utils::ArrayBufferView this1 = tmp51;		HX_STACK_VAR(this1,"this1");
												HX_STACK_LINE(414)
												{
													HX_STACK_LINE(414)
													bool littleEndian = true;		HX_STACK_VAR(littleEndian,"littleEndian");
													HX_STACK_LINE(414)
													tmp50 = ::__hxcpp_memory_get_ui32(this1->buffer->b,(this1->byteOffset + (((int(fillColor) & int((int)255))) * (int)4)));
												}
											}
											HX_STACK_LINE(414)
											::lime::math::color::_RGBA::RGBA_Impl__obj::a16 = tmp50;
											HX_STACK_LINE(414)
											{
												HX_STACK_LINE(414)
												int tmp51 = (int(fillColor) >> int((int)24));		HX_STACK_VAR(tmp51,"tmp51");
												HX_STACK_LINE(414)
												int tmp52 = (int(tmp51) & int((int)255));		HX_STACK_VAR(tmp52,"tmp52");
												HX_STACK_LINE(414)
												int tmp53 = ::lime::math::color::_RGBA::RGBA_Impl__obj::a16;		HX_STACK_VAR(tmp53,"tmp53");
												HX_STACK_LINE(414)
												int tmp54 = (tmp52 * tmp53);		HX_STACK_VAR(tmp54,"tmp54");
												HX_STACK_LINE(414)
												int tmp55 = (int(tmp54) >> int((int)16));		HX_STACK_VAR(tmp55,"tmp55");
												HX_STACK_LINE(414)
												int tmp56 = (int(tmp55) & int((int)255));		HX_STACK_VAR(tmp56,"tmp56");
												HX_STACK_LINE(414)
												int tmp57 = (int(tmp56) << int((int)24));		HX_STACK_VAR(tmp57,"tmp57");
												HX_STACK_LINE(414)
												int tmp58 = (int(fillColor) >> int((int)16));		HX_STACK_VAR(tmp58,"tmp58");
												HX_STACK_LINE(414)
												int tmp59 = (int(tmp58) & int((int)255));		HX_STACK_VAR(tmp59,"tmp59");
												HX_STACK_LINE(414)
												int tmp60 = ::lime::math::color::_RGBA::RGBA_Impl__obj::a16;		HX_STACK_VAR(tmp60,"tmp60");
												HX_STACK_LINE(414)
												int tmp61 = (tmp59 * tmp60);		HX_STACK_VAR(tmp61,"tmp61");
												HX_STACK_LINE(414)
												int tmp62 = (int(tmp61) >> int((int)16));		HX_STACK_VAR(tmp62,"tmp62");
												HX_STACK_LINE(414)
												int tmp63 = (int(tmp62) & int((int)255));		HX_STACK_VAR(tmp63,"tmp63");
												HX_STACK_LINE(414)
												int tmp64 = (int(tmp63) << int((int)16));		HX_STACK_VAR(tmp64,"tmp64");
												HX_STACK_LINE(414)
												int tmp65 = (int(tmp57) | int(tmp64));		HX_STACK_VAR(tmp65,"tmp65");
												HX_STACK_LINE(414)
												int tmp66 = (int(fillColor) >> int((int)8));		HX_STACK_VAR(tmp66,"tmp66");
												HX_STACK_LINE(414)
												int tmp67 = (int(tmp66) & int((int)255));		HX_STACK_VAR(tmp67,"tmp67");
												HX_STACK_LINE(414)
												int tmp68 = ::lime::math::color::_RGBA::RGBA_Impl__obj::a16;		HX_STACK_VAR(tmp68,"tmp68");
												HX_STACK_LINE(414)
												int tmp69 = (tmp67 * tmp68);		HX_STACK_VAR(tmp69,"tmp69");
												HX_STACK_LINE(414)
												int tmp70 = (int(tmp69) >> int((int)16));		HX_STACK_VAR(tmp70,"tmp70");
												HX_STACK_LINE(414)
												int tmp71 = (int(tmp70) & int((int)255));		HX_STACK_VAR(tmp71,"tmp71");
												HX_STACK_LINE(414)
												int tmp72 = (int(tmp71) << int((int)8));		HX_STACK_VAR(tmp72,"tmp72");
												HX_STACK_LINE(414)
												int tmp73 = (int(tmp65) | int(tmp72));		HX_STACK_VAR(tmp73,"tmp73");
												HX_STACK_LINE(414)
												int tmp74 = (int(fillColor) & int((int)255));		HX_STACK_VAR(tmp74,"tmp74");
												HX_STACK_LINE(414)
												int tmp75 = (int(tmp74) & int((int)255));		HX_STACK_VAR(tmp75,"tmp75");
												HX_STACK_LINE(414)
												int tmp76 = (int(tmp73) | int(tmp75));		HX_STACK_VAR(tmp76,"tmp76");
												HX_STACK_LINE(414)
												fillColor = tmp76;
											}
										}
									}
								}
								HX_STACK_LINE(414)
								int tmp46 = format1;		HX_STACK_VAR(tmp46,"tmp46");
								HX_STACK_LINE(414)
								switch( (int)(tmp46)){
									case (int)2: {
										HX_STACK_LINE(414)
										{
											HX_STACK_LINE(414)
											int tmp47 = (int(fillColor) >> int((int)8));		HX_STACK_VAR(tmp47,"tmp47");
											HX_STACK_LINE(414)
											int tmp48 = (int(tmp47) & int((int)255));		HX_STACK_VAR(tmp48,"tmp48");
											HX_STACK_LINE(414)
											int val = tmp48;		HX_STACK_VAR(val,"val");
											HX_STACK_LINE(414)
											{
												HX_STACK_LINE(414)
												::__hxcpp_memory_set_byte(data->buffer->b,(data->byteOffset + nextPointOffset),val);
												HX_STACK_LINE(414)
												val;
											}
										}
										HX_STACK_LINE(414)
										{
											HX_STACK_LINE(414)
											int tmp47 = (int(fillColor) >> int((int)16));		HX_STACK_VAR(tmp47,"tmp47");
											HX_STACK_LINE(414)
											int tmp48 = (int(tmp47) & int((int)255));		HX_STACK_VAR(tmp48,"tmp48");
											HX_STACK_LINE(414)
											int val = tmp48;		HX_STACK_VAR(val,"val");
											HX_STACK_LINE(414)
											{
												HX_STACK_LINE(414)
												::__hxcpp_memory_set_byte(data->buffer->b,(data->byteOffset + ((nextPointOffset + (int)1))),val);
												HX_STACK_LINE(414)
												val;
											}
										}
										HX_STACK_LINE(414)
										{
											HX_STACK_LINE(414)
											int tmp47 = (int(fillColor) >> int((int)24));		HX_STACK_VAR(tmp47,"tmp47");
											HX_STACK_LINE(414)
											int tmp48 = (int(tmp47) & int((int)255));		HX_STACK_VAR(tmp48,"tmp48");
											HX_STACK_LINE(414)
											int val = tmp48;		HX_STACK_VAR(val,"val");
											HX_STACK_LINE(414)
											{
												HX_STACK_LINE(414)
												::__hxcpp_memory_set_byte(data->buffer->b,(data->byteOffset + ((nextPointOffset + (int)2))),val);
												HX_STACK_LINE(414)
												val;
											}
										}
										HX_STACK_LINE(414)
										{
											HX_STACK_LINE(414)
											int tmp47 = (int(fillColor) & int((int)255));		HX_STACK_VAR(tmp47,"tmp47");
											HX_STACK_LINE(414)
											int val = tmp47;		HX_STACK_VAR(val,"val");
											HX_STACK_LINE(414)
											{
												HX_STACK_LINE(414)
												::__hxcpp_memory_set_byte(data->buffer->b,(data->byteOffset + ((nextPointOffset + (int)3))),val);
												HX_STACK_LINE(414)
												val;
											}
										}
									}
									;break;
									case (int)0: {
										HX_STACK_LINE(414)
										{
											HX_STACK_LINE(414)
											int tmp47 = (int(fillColor) >> int((int)24));		HX_STACK_VAR(tmp47,"tmp47");
											HX_STACK_LINE(414)
											int tmp48 = (int(tmp47) & int((int)255));		HX_STACK_VAR(tmp48,"tmp48");
											HX_STACK_LINE(414)
											int val = tmp48;		HX_STACK_VAR(val,"val");
											HX_STACK_LINE(414)
											{
												HX_STACK_LINE(414)
												::__hxcpp_memory_set_byte(data->buffer->b,(data->byteOffset + nextPointOffset),val);
												HX_STACK_LINE(414)
												val;
											}
										}
										HX_STACK_LINE(414)
										{
											HX_STACK_LINE(414)
											int tmp47 = (int(fillColor) >> int((int)16));		HX_STACK_VAR(tmp47,"tmp47");
											HX_STACK_LINE(414)
											int tmp48 = (int(tmp47) & int((int)255));		HX_STACK_VAR(tmp48,"tmp48");
											HX_STACK_LINE(414)
											int val = tmp48;		HX_STACK_VAR(val,"val");
											HX_STACK_LINE(414)
											{
												HX_STACK_LINE(414)
												::__hxcpp_memory_set_byte(data->buffer->b,(data->byteOffset + ((nextPointOffset + (int)1))),val);
												HX_STACK_LINE(414)
												val;
											}
										}
										HX_STACK_LINE(414)
										{
											HX_STACK_LINE(414)
											int tmp47 = (int(fillColor) >> int((int)8));		HX_STACK_VAR(tmp47,"tmp47");
											HX_STACK_LINE(414)
											int tmp48 = (int(tmp47) & int((int)255));		HX_STACK_VAR(tmp48,"tmp48");
											HX_STACK_LINE(414)
											int val = tmp48;		HX_STACK_VAR(val,"val");
											HX_STACK_LINE(414)
											{
												HX_STACK_LINE(414)
												::__hxcpp_memory_set_byte(data->buffer->b,(data->byteOffset + ((nextPointOffset + (int)2))),val);
												HX_STACK_LINE(414)
												val;
											}
										}
										HX_STACK_LINE(414)
										{
											HX_STACK_LINE(414)
											int tmp47 = (int(fillColor) & int((int)255));		HX_STACK_VAR(tmp47,"tmp47");
											HX_STACK_LINE(414)
											int val = tmp47;		HX_STACK_VAR(val,"val");
											HX_STACK_LINE(414)
											{
												HX_STACK_LINE(414)
												::__hxcpp_memory_set_byte(data->buffer->b,(data->byteOffset + ((nextPointOffset + (int)3))),val);
												HX_STACK_LINE(414)
												val;
											}
										}
									}
									;break;
									case (int)1: {
										HX_STACK_LINE(414)
										{
											HX_STACK_LINE(414)
											int tmp47 = (int(fillColor) & int((int)255));		HX_STACK_VAR(tmp47,"tmp47");
											HX_STACK_LINE(414)
											int val = tmp47;		HX_STACK_VAR(val,"val");
											HX_STACK_LINE(414)
											{
												HX_STACK_LINE(414)
												::__hxcpp_memory_set_byte(data->buffer->b,(data->byteOffset + nextPointOffset),val);
												HX_STACK_LINE(414)
												val;
											}
										}
										HX_STACK_LINE(414)
										{
											HX_STACK_LINE(414)
											int tmp47 = (int(fillColor) >> int((int)24));		HX_STACK_VAR(tmp47,"tmp47");
											HX_STACK_LINE(414)
											int tmp48 = (int(tmp47) & int((int)255));		HX_STACK_VAR(tmp48,"tmp48");
											HX_STACK_LINE(414)
											int val = tmp48;		HX_STACK_VAR(val,"val");
											HX_STACK_LINE(414)
											{
												HX_STACK_LINE(414)
												::__hxcpp_memory_set_byte(data->buffer->b,(data->byteOffset + ((nextPointOffset + (int)1))),val);
												HX_STACK_LINE(414)
												val;
											}
										}
										HX_STACK_LINE(414)
										{
											HX_STACK_LINE(414)
											int tmp47 = (int(fillColor) >> int((int)16));		HX_STACK_VAR(tmp47,"tmp47");
											HX_STACK_LINE(414)
											int tmp48 = (int(tmp47) & int((int)255));		HX_STACK_VAR(tmp48,"tmp48");
											HX_STACK_LINE(414)
											int val = tmp48;		HX_STACK_VAR(val,"val");
											HX_STACK_LINE(414)
											{
												HX_STACK_LINE(414)
												::__hxcpp_memory_set_byte(data->buffer->b,(data->byteOffset + ((nextPointOffset + (int)2))),val);
												HX_STACK_LINE(414)
												val;
											}
										}
										HX_STACK_LINE(414)
										{
											HX_STACK_LINE(414)
											int tmp47 = (int(fillColor) >> int((int)8));		HX_STACK_VAR(tmp47,"tmp47");
											HX_STACK_LINE(414)
											int tmp48 = (int(tmp47) & int((int)255));		HX_STACK_VAR(tmp48,"tmp48");
											HX_STACK_LINE(414)
											int val = tmp48;		HX_STACK_VAR(val,"val");
											HX_STACK_LINE(414)
											{
												HX_STACK_LINE(414)
												::__hxcpp_memory_set_byte(data->buffer->b,(data->byteOffset + ((nextPointOffset + (int)3))),val);
												HX_STACK_LINE(414)
												val;
											}
										}
									}
									;break;
								}
							}
							HX_STACK_LINE(416)
							int tmp45 = nextPointX;		HX_STACK_VAR(tmp45,"tmp45");
							HX_STACK_LINE(416)
							queue->push(tmp45);
							HX_STACK_LINE(417)
							int tmp46 = nextPointY;		HX_STACK_VAR(tmp46,"tmp46");
							HX_STACK_LINE(417)
							queue->push(tmp46);
						}
					}
				}
			}
		}
		HX_STACK_LINE(427)
		image->dirty = true;
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC5(ImageDataUtil_obj,floodFill,(void))

::lime::math::Rectangle ImageDataUtil_obj::getColorBoundsRect( ::lime::graphics::Image image,int mask,int color,hx::Null< bool >  __o_findColor,int format){
bool findColor = __o_findColor.Default(true);
	HX_STACK_FRAME("lime.graphics.utils.ImageDataUtil","getColorBoundsRect",0xfea06eb4,"lime.graphics.utils.ImageDataUtil.getColorBoundsRect","lime/graphics/utils/ImageDataUtil.hx",432,0x494d921f)
	HX_STACK_ARG(image,"image")
	HX_STACK_ARG(mask,"mask")
	HX_STACK_ARG(color,"color")
	HX_STACK_ARG(findColor,"findColor")
	HX_STACK_ARG(format,"format")
{
		HX_STACK_LINE(434)
		int tmp = (image->width + (int)1);		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(434)
		int left = tmp;		HX_STACK_VAR(left,"left");
		HX_STACK_LINE(435)
		int right = (int)0;		HX_STACK_VAR(right,"right");
		HX_STACK_LINE(436)
		int tmp1 = (image->height + (int)1);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(436)
		int top = tmp1;		HX_STACK_VAR(top,"top");
		HX_STACK_LINE(437)
		int bottom = (int)0;		HX_STACK_VAR(bottom,"bottom");
		HX_STACK_LINE(439)
		int r;		HX_STACK_VAR(r,"r");
		HX_STACK_LINE(439)
		int g;		HX_STACK_VAR(g,"g");
		HX_STACK_LINE(439)
		int b;		HX_STACK_VAR(b,"b");
		HX_STACK_LINE(439)
		int a;		HX_STACK_VAR(a,"a");
		HX_STACK_LINE(440)
		int mr;		HX_STACK_VAR(mr,"mr");
		HX_STACK_LINE(440)
		int mg;		HX_STACK_VAR(mg,"mg");
		HX_STACK_LINE(440)
		int mb;		HX_STACK_VAR(mb,"mb");
		HX_STACK_LINE(440)
		int ma;		HX_STACK_VAR(ma,"ma");
		HX_STACK_LINE(442)
		bool tmp2 = (format == (int)1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(442)
		if ((tmp2)){
			HX_STACK_LINE(444)
			bool tmp3 = image->get_transparent();		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(444)
			int tmp4;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(444)
			if ((tmp3)){
				HX_STACK_LINE(444)
				int tmp5 = (int(color) >> int((int)24));		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(444)
				tmp4 = (int(tmp5) & int((int)255));
			}
			else{
				HX_STACK_LINE(444)
				tmp4 = (int)255;
			}
			HX_STACK_LINE(444)
			a = tmp4;
			HX_STACK_LINE(445)
			int tmp5 = (int(color) >> int((int)16));		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(445)
			int tmp6 = (int(tmp5) & int((int)255));		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(445)
			r = tmp6;
			HX_STACK_LINE(446)
			int tmp7 = (int(color) >> int((int)8));		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(446)
			int tmp8 = (int(tmp7) & int((int)255));		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(446)
			g = tmp8;
			HX_STACK_LINE(447)
			int tmp9 = (int(color) & int((int)255));		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(447)
			b = tmp9;
			HX_STACK_LINE(449)
			bool tmp10 = image->get_transparent();		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(449)
			int tmp11;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(449)
			if ((tmp10)){
				HX_STACK_LINE(449)
				int tmp12 = (int(mask) >> int((int)24));		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(449)
				tmp11 = (int(tmp12) & int((int)255));
			}
			else{
				HX_STACK_LINE(449)
				tmp11 = (int)255;
			}
			HX_STACK_LINE(449)
			ma = tmp11;
			HX_STACK_LINE(450)
			int tmp12 = (int(mask) >> int((int)16));		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(450)
			int tmp13 = (int(tmp12) & int((int)255));		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(450)
			mr = tmp13;
			HX_STACK_LINE(451)
			int tmp14 = (int(mask) >> int((int)8));		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(451)
			int tmp15 = (int(tmp14) & int((int)255));		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(451)
			mg = tmp15;
			HX_STACK_LINE(452)
			int tmp16 = (int(mask) & int((int)255));		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(452)
			mb = tmp16;
		}
		else{
			HX_STACK_LINE(456)
			int tmp3 = (int(color) >> int((int)24));		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(456)
			int tmp4 = (int(tmp3) & int((int)255));		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(456)
			r = tmp4;
			HX_STACK_LINE(457)
			int tmp5 = (int(color) >> int((int)16));		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(457)
			int tmp6 = (int(tmp5) & int((int)255));		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(457)
			g = tmp6;
			HX_STACK_LINE(458)
			int tmp7 = (int(color) >> int((int)8));		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(458)
			int tmp8 = (int(tmp7) & int((int)255));		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(458)
			b = tmp8;
			HX_STACK_LINE(459)
			bool tmp9 = image->get_transparent();		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(459)
			int tmp10;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(459)
			if ((tmp9)){
				HX_STACK_LINE(459)
				tmp10 = (int(color) & int((int)255));
			}
			else{
				HX_STACK_LINE(459)
				tmp10 = (int)255;
			}
			HX_STACK_LINE(459)
			a = tmp10;
			HX_STACK_LINE(461)
			int tmp11 = (int(mask) >> int((int)24));		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(461)
			int tmp12 = (int(tmp11) & int((int)255));		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(461)
			mr = tmp12;
			HX_STACK_LINE(462)
			int tmp13 = (int(mask) >> int((int)16));		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(462)
			int tmp14 = (int(tmp13) & int((int)255));		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(462)
			mg = tmp14;
			HX_STACK_LINE(463)
			int tmp15 = (int(mask) >> int((int)8));		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(463)
			int tmp16 = (int(tmp15) & int((int)255));		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(463)
			mb = tmp16;
			HX_STACK_LINE(464)
			bool tmp17 = image->get_transparent();		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(464)
			int tmp18;		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(464)
			if ((tmp17)){
				HX_STACK_LINE(464)
				tmp18 = (int(mask) & int((int)255));
			}
			else{
				HX_STACK_LINE(464)
				tmp18 = (int)255;
			}
			HX_STACK_LINE(464)
			ma = tmp18;
		}
		HX_STACK_LINE(468)
		int tmp3 = r;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(468)
		int tmp4 = (int(g) << int((int)8));		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(468)
		int tmp5 = (int(tmp3) | int(tmp4));		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(468)
		int tmp6 = (int(b) << int((int)16));		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(468)
		int tmp7 = (int(tmp5) | int(tmp6));		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(468)
		int tmp8 = (int(a) << int((int)24));		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(468)
		int tmp9 = (int(tmp7) | int(tmp8));		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(468)
		color = tmp9;
		HX_STACK_LINE(469)
		int tmp10 = mr;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(469)
		int tmp11 = (int(mg) << int((int)8));		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(469)
		int tmp12 = (int(tmp10) | int(tmp11));		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(469)
		int tmp13 = (int(mb) << int((int)16));		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(469)
		int tmp14 = (int(tmp12) | int(tmp13));		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(469)
		int tmp15 = (int(mask) << int((int)24));		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(469)
		int tmp16 = (int(tmp14) | int(tmp15));		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(469)
		mask = tmp16;
		HX_STACK_LINE(471)
		int pix;		HX_STACK_VAR(pix,"pix");
		HX_STACK_LINE(473)
		{
			HX_STACK_LINE(473)
			int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(473)
			int _g = image->width;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(473)
			while((true)){
				HX_STACK_LINE(473)
				bool tmp17 = (_g1 < _g);		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(473)
				bool tmp18 = !(tmp17);		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(473)
				if ((tmp18)){
					HX_STACK_LINE(473)
					break;
				}
				HX_STACK_LINE(473)
				int tmp19 = (_g1)++;		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(473)
				int ix = tmp19;		HX_STACK_VAR(ix,"ix");
				HX_STACK_LINE(475)
				bool hit = false;		HX_STACK_VAR(hit,"hit");
				HX_STACK_LINE(477)
				{
					HX_STACK_LINE(477)
					int _g3 = (int)0;		HX_STACK_VAR(_g3,"_g3");
					HX_STACK_LINE(477)
					int _g2 = image->height;		HX_STACK_VAR(_g2,"_g2");
					HX_STACK_LINE(477)
					while((true)){
						HX_STACK_LINE(477)
						bool tmp20 = (_g3 < _g2);		HX_STACK_VAR(tmp20,"tmp20");
						HX_STACK_LINE(477)
						bool tmp21 = !(tmp20);		HX_STACK_VAR(tmp21,"tmp21");
						HX_STACK_LINE(477)
						if ((tmp21)){
							HX_STACK_LINE(477)
							break;
						}
						HX_STACK_LINE(477)
						int tmp22 = (_g3)++;		HX_STACK_VAR(tmp22,"tmp22");
						HX_STACK_LINE(477)
						int iy = tmp22;		HX_STACK_VAR(iy,"iy");
						HX_STACK_LINE(479)
						int tmp23 = ix;		HX_STACK_VAR(tmp23,"tmp23");
						HX_STACK_LINE(479)
						int tmp24 = iy;		HX_STACK_VAR(tmp24,"tmp24");
						HX_STACK_LINE(479)
						int tmp25 = image->getPixel32(tmp23,tmp24,null());		HX_STACK_VAR(tmp25,"tmp25");
						HX_STACK_LINE(479)
						pix = tmp25;
						HX_STACK_LINE(480)
						bool tmp26 = findColor;		HX_STACK_VAR(tmp26,"tmp26");
						HX_STACK_LINE(480)
						bool tmp27;		HX_STACK_VAR(tmp27,"tmp27");
						HX_STACK_LINE(480)
						if ((tmp26)){
							HX_STACK_LINE(480)
							int tmp28 = (int(pix) & int(mask));		HX_STACK_VAR(tmp28,"tmp28");
							HX_STACK_LINE(480)
							int tmp29 = color;		HX_STACK_VAR(tmp29,"tmp29");
							HX_STACK_LINE(480)
							tmp27 = (tmp28 == tmp29);
						}
						else{
							HX_STACK_LINE(480)
							int tmp28 = (int(pix) & int(mask));		HX_STACK_VAR(tmp28,"tmp28");
							HX_STACK_LINE(480)
							int tmp29 = color;		HX_STACK_VAR(tmp29,"tmp29");
							HX_STACK_LINE(480)
							tmp27 = (tmp28 != tmp29);
						}
						HX_STACK_LINE(480)
						hit = tmp27;
						HX_STACK_LINE(482)
						bool tmp28 = hit;		HX_STACK_VAR(tmp28,"tmp28");
						HX_STACK_LINE(482)
						if ((tmp28)){
							HX_STACK_LINE(484)
							bool tmp29 = (ix < left);		HX_STACK_VAR(tmp29,"tmp29");
							HX_STACK_LINE(484)
							if ((tmp29)){
								HX_STACK_LINE(484)
								left = ix;
							}
							HX_STACK_LINE(485)
							break;
						}
					}
				}
				HX_STACK_LINE(491)
				bool tmp20 = hit;		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(491)
				if ((tmp20)){
					HX_STACK_LINE(493)
					break;
				}
			}
		}
		HX_STACK_LINE(499)
		{
			HX_STACK_LINE(499)
			int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(499)
			int _g = image->width;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(499)
			while((true)){
				HX_STACK_LINE(499)
				bool tmp17 = (_g1 < _g);		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(499)
				bool tmp18 = !(tmp17);		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(499)
				if ((tmp18)){
					HX_STACK_LINE(499)
					break;
				}
				HX_STACK_LINE(499)
				int tmp19 = (_g1)++;		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(499)
				int _ix = tmp19;		HX_STACK_VAR(_ix,"_ix");
				HX_STACK_LINE(501)
				int tmp20 = (image->width - (int)1);		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(501)
				int tmp21 = _ix;		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(501)
				int tmp22 = (tmp20 - tmp21);		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(501)
				int ix = tmp22;		HX_STACK_VAR(ix,"ix");
				HX_STACK_LINE(502)
				bool hit = false;		HX_STACK_VAR(hit,"hit");
				HX_STACK_LINE(504)
				{
					HX_STACK_LINE(504)
					int _g3 = (int)0;		HX_STACK_VAR(_g3,"_g3");
					HX_STACK_LINE(504)
					int _g2 = image->height;		HX_STACK_VAR(_g2,"_g2");
					HX_STACK_LINE(504)
					while((true)){
						HX_STACK_LINE(504)
						bool tmp23 = (_g3 < _g2);		HX_STACK_VAR(tmp23,"tmp23");
						HX_STACK_LINE(504)
						bool tmp24 = !(tmp23);		HX_STACK_VAR(tmp24,"tmp24");
						HX_STACK_LINE(504)
						if ((tmp24)){
							HX_STACK_LINE(504)
							break;
						}
						HX_STACK_LINE(504)
						int tmp25 = (_g3)++;		HX_STACK_VAR(tmp25,"tmp25");
						HX_STACK_LINE(504)
						int iy = tmp25;		HX_STACK_VAR(iy,"iy");
						HX_STACK_LINE(506)
						int tmp26 = ix;		HX_STACK_VAR(tmp26,"tmp26");
						HX_STACK_LINE(506)
						int tmp27 = iy;		HX_STACK_VAR(tmp27,"tmp27");
						HX_STACK_LINE(506)
						int tmp28 = image->getPixel32(tmp26,tmp27,null());		HX_STACK_VAR(tmp28,"tmp28");
						HX_STACK_LINE(506)
						pix = tmp28;
						HX_STACK_LINE(507)
						bool tmp29 = findColor;		HX_STACK_VAR(tmp29,"tmp29");
						HX_STACK_LINE(507)
						bool tmp30;		HX_STACK_VAR(tmp30,"tmp30");
						HX_STACK_LINE(507)
						if ((tmp29)){
							HX_STACK_LINE(507)
							int tmp31 = (int(pix) & int(mask));		HX_STACK_VAR(tmp31,"tmp31");
							HX_STACK_LINE(507)
							int tmp32 = color;		HX_STACK_VAR(tmp32,"tmp32");
							HX_STACK_LINE(507)
							tmp30 = (tmp31 == tmp32);
						}
						else{
							HX_STACK_LINE(507)
							int tmp31 = (int(pix) & int(mask));		HX_STACK_VAR(tmp31,"tmp31");
							HX_STACK_LINE(507)
							int tmp32 = color;		HX_STACK_VAR(tmp32,"tmp32");
							HX_STACK_LINE(507)
							tmp30 = (tmp31 != tmp32);
						}
						HX_STACK_LINE(507)
						hit = tmp30;
						HX_STACK_LINE(509)
						bool tmp31 = hit;		HX_STACK_VAR(tmp31,"tmp31");
						HX_STACK_LINE(509)
						if ((tmp31)){
							HX_STACK_LINE(511)
							bool tmp32 = (ix > right);		HX_STACK_VAR(tmp32,"tmp32");
							HX_STACK_LINE(511)
							if ((tmp32)){
								HX_STACK_LINE(511)
								right = ix;
							}
							HX_STACK_LINE(512)
							break;
						}
					}
				}
				HX_STACK_LINE(518)
				bool tmp23 = hit;		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(518)
				if ((tmp23)){
					HX_STACK_LINE(520)
					break;
				}
			}
		}
		HX_STACK_LINE(526)
		{
			HX_STACK_LINE(526)
			int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(526)
			int _g = image->height;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(526)
			while((true)){
				HX_STACK_LINE(526)
				bool tmp17 = (_g1 < _g);		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(526)
				bool tmp18 = !(tmp17);		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(526)
				if ((tmp18)){
					HX_STACK_LINE(526)
					break;
				}
				HX_STACK_LINE(526)
				int tmp19 = (_g1)++;		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(526)
				int iy = tmp19;		HX_STACK_VAR(iy,"iy");
				HX_STACK_LINE(528)
				bool hit = false;		HX_STACK_VAR(hit,"hit");
				HX_STACK_LINE(530)
				{
					HX_STACK_LINE(530)
					int _g3 = (int)0;		HX_STACK_VAR(_g3,"_g3");
					HX_STACK_LINE(530)
					int _g2 = image->width;		HX_STACK_VAR(_g2,"_g2");
					HX_STACK_LINE(530)
					while((true)){
						HX_STACK_LINE(530)
						bool tmp20 = (_g3 < _g2);		HX_STACK_VAR(tmp20,"tmp20");
						HX_STACK_LINE(530)
						bool tmp21 = !(tmp20);		HX_STACK_VAR(tmp21,"tmp21");
						HX_STACK_LINE(530)
						if ((tmp21)){
							HX_STACK_LINE(530)
							break;
						}
						HX_STACK_LINE(530)
						int tmp22 = (_g3)++;		HX_STACK_VAR(tmp22,"tmp22");
						HX_STACK_LINE(530)
						int ix = tmp22;		HX_STACK_VAR(ix,"ix");
						HX_STACK_LINE(532)
						int tmp23 = ix;		HX_STACK_VAR(tmp23,"tmp23");
						HX_STACK_LINE(532)
						int tmp24 = iy;		HX_STACK_VAR(tmp24,"tmp24");
						HX_STACK_LINE(532)
						int tmp25 = image->getPixel32(tmp23,tmp24,null());		HX_STACK_VAR(tmp25,"tmp25");
						HX_STACK_LINE(532)
						pix = tmp25;
						HX_STACK_LINE(533)
						bool tmp26 = findColor;		HX_STACK_VAR(tmp26,"tmp26");
						HX_STACK_LINE(533)
						bool tmp27;		HX_STACK_VAR(tmp27,"tmp27");
						HX_STACK_LINE(533)
						if ((tmp26)){
							HX_STACK_LINE(533)
							int tmp28 = (int(pix) & int(mask));		HX_STACK_VAR(tmp28,"tmp28");
							HX_STACK_LINE(533)
							int tmp29 = color;		HX_STACK_VAR(tmp29,"tmp29");
							HX_STACK_LINE(533)
							tmp27 = (tmp28 == tmp29);
						}
						else{
							HX_STACK_LINE(533)
							int tmp28 = (int(pix) & int(mask));		HX_STACK_VAR(tmp28,"tmp28");
							HX_STACK_LINE(533)
							int tmp29 = color;		HX_STACK_VAR(tmp29,"tmp29");
							HX_STACK_LINE(533)
							tmp27 = (tmp28 != tmp29);
						}
						HX_STACK_LINE(533)
						hit = tmp27;
						HX_STACK_LINE(535)
						bool tmp28 = hit;		HX_STACK_VAR(tmp28,"tmp28");
						HX_STACK_LINE(535)
						if ((tmp28)){
							HX_STACK_LINE(537)
							bool tmp29 = (iy < top);		HX_STACK_VAR(tmp29,"tmp29");
							HX_STACK_LINE(537)
							if ((tmp29)){
								HX_STACK_LINE(537)
								top = iy;
							}
							HX_STACK_LINE(538)
							break;
						}
					}
				}
				HX_STACK_LINE(544)
				bool tmp20 = hit;		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(544)
				if ((tmp20)){
					HX_STACK_LINE(546)
					break;
				}
			}
		}
		HX_STACK_LINE(552)
		{
			HX_STACK_LINE(552)
			int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(552)
			int _g = image->height;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(552)
			while((true)){
				HX_STACK_LINE(552)
				bool tmp17 = (_g1 < _g);		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(552)
				bool tmp18 = !(tmp17);		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(552)
				if ((tmp18)){
					HX_STACK_LINE(552)
					break;
				}
				HX_STACK_LINE(552)
				int tmp19 = (_g1)++;		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(552)
				int _iy = tmp19;		HX_STACK_VAR(_iy,"_iy");
				HX_STACK_LINE(554)
				int tmp20 = (image->height - (int)1);		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(554)
				int tmp21 = _iy;		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(554)
				int tmp22 = (tmp20 - tmp21);		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(554)
				int iy = tmp22;		HX_STACK_VAR(iy,"iy");
				HX_STACK_LINE(555)
				bool hit = false;		HX_STACK_VAR(hit,"hit");
				HX_STACK_LINE(557)
				{
					HX_STACK_LINE(557)
					int _g3 = (int)0;		HX_STACK_VAR(_g3,"_g3");
					HX_STACK_LINE(557)
					int _g2 = image->width;		HX_STACK_VAR(_g2,"_g2");
					HX_STACK_LINE(557)
					while((true)){
						HX_STACK_LINE(557)
						bool tmp23 = (_g3 < _g2);		HX_STACK_VAR(tmp23,"tmp23");
						HX_STACK_LINE(557)
						bool tmp24 = !(tmp23);		HX_STACK_VAR(tmp24,"tmp24");
						HX_STACK_LINE(557)
						if ((tmp24)){
							HX_STACK_LINE(557)
							break;
						}
						HX_STACK_LINE(557)
						int tmp25 = (_g3)++;		HX_STACK_VAR(tmp25,"tmp25");
						HX_STACK_LINE(557)
						int ix = tmp25;		HX_STACK_VAR(ix,"ix");
						HX_STACK_LINE(559)
						int tmp26 = ix;		HX_STACK_VAR(tmp26,"tmp26");
						HX_STACK_LINE(559)
						int tmp27 = iy;		HX_STACK_VAR(tmp27,"tmp27");
						HX_STACK_LINE(559)
						int tmp28 = image->getPixel32(tmp26,tmp27,null());		HX_STACK_VAR(tmp28,"tmp28");
						HX_STACK_LINE(559)
						pix = tmp28;
						HX_STACK_LINE(560)
						bool tmp29 = findColor;		HX_STACK_VAR(tmp29,"tmp29");
						HX_STACK_LINE(560)
						bool tmp30;		HX_STACK_VAR(tmp30,"tmp30");
						HX_STACK_LINE(560)
						if ((tmp29)){
							HX_STACK_LINE(560)
							int tmp31 = (int(pix) & int(mask));		HX_STACK_VAR(tmp31,"tmp31");
							HX_STACK_LINE(560)
							int tmp32 = color;		HX_STACK_VAR(tmp32,"tmp32");
							HX_STACK_LINE(560)
							tmp30 = (tmp31 == tmp32);
						}
						else{
							HX_STACK_LINE(560)
							int tmp31 = (int(pix) & int(mask));		HX_STACK_VAR(tmp31,"tmp31");
							HX_STACK_LINE(560)
							int tmp32 = color;		HX_STACK_VAR(tmp32,"tmp32");
							HX_STACK_LINE(560)
							tmp30 = (tmp31 != tmp32);
						}
						HX_STACK_LINE(560)
						hit = tmp30;
						HX_STACK_LINE(562)
						bool tmp31 = hit;		HX_STACK_VAR(tmp31,"tmp31");
						HX_STACK_LINE(562)
						if ((tmp31)){
							HX_STACK_LINE(564)
							bool tmp32 = (iy > bottom);		HX_STACK_VAR(tmp32,"tmp32");
							HX_STACK_LINE(564)
							if ((tmp32)){
								HX_STACK_LINE(564)
								bottom = iy;
							}
							HX_STACK_LINE(565)
							break;
						}
					}
				}
				HX_STACK_LINE(571)
				bool tmp23 = hit;		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(571)
				if ((tmp23)){
					HX_STACK_LINE(573)
					break;
				}
			}
		}
		HX_STACK_LINE(579)
		int tmp17 = (right - left);		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(579)
		int w = tmp17;		HX_STACK_VAR(w,"w");
		HX_STACK_LINE(580)
		int tmp18 = (bottom - top);		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(580)
		int h = tmp18;		HX_STACK_VAR(h,"h");
		HX_STACK_LINE(582)
		bool tmp19 = (w > (int)0);		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(582)
		if ((tmp19)){
			HX_STACK_LINE(582)
			(w)++;
		}
		HX_STACK_LINE(583)
		bool tmp20 = (h > (int)0);		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(583)
		if ((tmp20)){
			HX_STACK_LINE(583)
			(h)++;
		}
		HX_STACK_LINE(585)
		bool tmp21 = (w < (int)0);		HX_STACK_VAR(tmp21,"tmp21");
		HX_STACK_LINE(585)
		if ((tmp21)){
			HX_STACK_LINE(585)
			w = (int)0;
		}
		HX_STACK_LINE(586)
		bool tmp22 = (h < (int)0);		HX_STACK_VAR(tmp22,"tmp22");
		HX_STACK_LINE(586)
		if ((tmp22)){
			HX_STACK_LINE(586)
			h = (int)0;
		}
		HX_STACK_LINE(588)
		bool tmp23 = (left == right);		HX_STACK_VAR(tmp23,"tmp23");
		HX_STACK_LINE(588)
		if ((tmp23)){
			HX_STACK_LINE(588)
			w = (int)1;
		}
		HX_STACK_LINE(589)
		bool tmp24 = (top == bottom);		HX_STACK_VAR(tmp24,"tmp24");
		HX_STACK_LINE(589)
		if ((tmp24)){
			HX_STACK_LINE(589)
			h = (int)1;
		}
		HX_STACK_LINE(591)
		bool tmp25 = (left > image->width);		HX_STACK_VAR(tmp25,"tmp25");
		HX_STACK_LINE(591)
		if ((tmp25)){
			HX_STACK_LINE(591)
			left = (int)0;
		}
		HX_STACK_LINE(592)
		bool tmp26 = (top > image->height);		HX_STACK_VAR(tmp26,"tmp26");
		HX_STACK_LINE(592)
		if ((tmp26)){
			HX_STACK_LINE(592)
			top = (int)0;
		}
		HX_STACK_LINE(594)
		::lime::math::Rectangle tmp27 = ::lime::math::Rectangle_obj::__new(left,top,w,h);		HX_STACK_VAR(tmp27,"tmp27");
		HX_STACK_LINE(594)
		return tmp27;
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC5(ImageDataUtil_obj,getColorBoundsRect,return )

int ImageDataUtil_obj::getPixel( ::lime::graphics::Image image,int x,int y,int format){
	HX_STACK_FRAME("lime.graphics.utils.ImageDataUtil","getPixel",0xcbf5f1be,"lime.graphics.utils.ImageDataUtil.getPixel","lime/graphics/utils/ImageDataUtil.hx",599,0x494d921f)
	HX_STACK_ARG(image,"image")
	HX_STACK_ARG(x,"x")
	HX_STACK_ARG(y,"y")
	HX_STACK_ARG(format,"format")
	HX_STACK_LINE(601)
	int pixel;		HX_STACK_VAR(pixel,"pixel");
	HX_STACK_LINE(603)
	{
		HX_STACK_LINE(603)
		::lime::utils::ArrayBufferView tmp = image->buffer->data;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(603)
		::lime::utils::ArrayBufferView data = tmp;		HX_STACK_VAR(data,"data");
		HX_STACK_LINE(603)
		int tmp1 = (y + image->offsetY);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(603)
		int tmp2 = ((int)4 * tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(603)
		int tmp3 = image->buffer->width;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(603)
		int tmp4 = (tmp2 * tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(603)
		int tmp5 = (x + image->offsetX);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(603)
		int tmp6 = (tmp5 * (int)4);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(603)
		int tmp7 = (tmp4 + tmp6);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(603)
		int offset = tmp7;		HX_STACK_VAR(offset,"offset");
		HX_STACK_LINE(603)
		int tmp8 = image->buffer->format;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(603)
		switch( (int)(tmp8)){
			case (int)2: {
				HX_STACK_LINE(603)
				int tmp9 = ::__hxcpp_memory_get_byte(data->buffer->b,(data->byteOffset + ((offset + (int)2))));		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(603)
				Dynamic tmp10 = (int(tmp9) & int((int)255));		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(603)
				int r = tmp10;		HX_STACK_VAR(r,"r");
				HX_STACK_LINE(603)
				int tmp11 = ::__hxcpp_memory_get_byte(data->buffer->b,(data->byteOffset + ((offset + (int)1))));		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(603)
				Dynamic tmp12 = (int(tmp11) & int((int)255));		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(603)
				int g = tmp12;		HX_STACK_VAR(g,"g");
				HX_STACK_LINE(603)
				int tmp13 = ::__hxcpp_memory_get_byte(data->buffer->b,(data->byteOffset + offset));		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(603)
				Dynamic tmp14 = (int(tmp13) & int((int)255));		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(603)
				int b = tmp14;		HX_STACK_VAR(b,"b");
				HX_STACK_LINE(603)
				int tmp15 = ::__hxcpp_memory_get_byte(data->buffer->b,(data->byteOffset + ((offset + (int)3))));		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(603)
				Dynamic tmp16 = (int(tmp15) & int((int)255));		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(603)
				int a = tmp16;		HX_STACK_VAR(a,"a");
				HX_STACK_LINE(603)
				int tmp17 = (int(r) & int((int)255));		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(603)
				int tmp18 = (int(tmp17) << int((int)24));		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(603)
				int tmp19 = (int(g) & int((int)255));		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(603)
				int tmp20 = (int(tmp19) << int((int)16));		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(603)
				int tmp21 = (int(tmp18) | int(tmp20));		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(603)
				int tmp22 = (int(b) & int((int)255));		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(603)
				int tmp23 = (int(tmp22) << int((int)8));		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(603)
				int tmp24 = (int(tmp21) | int(tmp23));		HX_STACK_VAR(tmp24,"tmp24");
				HX_STACK_LINE(603)
				int tmp25 = (int(a) & int((int)255));		HX_STACK_VAR(tmp25,"tmp25");
				HX_STACK_LINE(603)
				int tmp26 = (int(tmp24) | int(tmp25));		HX_STACK_VAR(tmp26,"tmp26");
				HX_STACK_LINE(603)
				pixel = tmp26;
			}
			;break;
			case (int)0: {
				HX_STACK_LINE(603)
				int tmp9 = ::__hxcpp_memory_get_byte(data->buffer->b,(data->byteOffset + offset));		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(603)
				Dynamic tmp10 = (int(tmp9) & int((int)255));		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(603)
				int r = tmp10;		HX_STACK_VAR(r,"r");
				HX_STACK_LINE(603)
				int tmp11 = ::__hxcpp_memory_get_byte(data->buffer->b,(data->byteOffset + ((offset + (int)1))));		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(603)
				Dynamic tmp12 = (int(tmp11) & int((int)255));		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(603)
				int g = tmp12;		HX_STACK_VAR(g,"g");
				HX_STACK_LINE(603)
				int tmp13 = ::__hxcpp_memory_get_byte(data->buffer->b,(data->byteOffset + ((offset + (int)2))));		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(603)
				Dynamic tmp14 = (int(tmp13) & int((int)255));		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(603)
				int b = tmp14;		HX_STACK_VAR(b,"b");
				HX_STACK_LINE(603)
				int tmp15 = ::__hxcpp_memory_get_byte(data->buffer->b,(data->byteOffset + ((offset + (int)3))));		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(603)
				Dynamic tmp16 = (int(tmp15) & int((int)255));		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(603)
				int a = tmp16;		HX_STACK_VAR(a,"a");
				HX_STACK_LINE(603)
				int tmp17 = (int(r) & int((int)255));		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(603)
				int tmp18 = (int(tmp17) << int((int)24));		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(603)
				int tmp19 = (int(g) & int((int)255));		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(603)
				int tmp20 = (int(tmp19) << int((int)16));		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(603)
				int tmp21 = (int(tmp18) | int(tmp20));		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(603)
				int tmp22 = (int(b) & int((int)255));		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(603)
				int tmp23 = (int(tmp22) << int((int)8));		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(603)
				int tmp24 = (int(tmp21) | int(tmp23));		HX_STACK_VAR(tmp24,"tmp24");
				HX_STACK_LINE(603)
				int tmp25 = (int(a) & int((int)255));		HX_STACK_VAR(tmp25,"tmp25");
				HX_STACK_LINE(603)
				int tmp26 = (int(tmp24) | int(tmp25));		HX_STACK_VAR(tmp26,"tmp26");
				HX_STACK_LINE(603)
				pixel = tmp26;
			}
			;break;
			case (int)1: {
				HX_STACK_LINE(603)
				int tmp9 = ::__hxcpp_memory_get_byte(data->buffer->b,(data->byteOffset + ((offset + (int)1))));		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(603)
				Dynamic tmp10 = (int(tmp9) & int((int)255));		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(603)
				int r = tmp10;		HX_STACK_VAR(r,"r");
				HX_STACK_LINE(603)
				int tmp11 = ::__hxcpp_memory_get_byte(data->buffer->b,(data->byteOffset + ((offset + (int)2))));		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(603)
				Dynamic tmp12 = (int(tmp11) & int((int)255));		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(603)
				int g = tmp12;		HX_STACK_VAR(g,"g");
				HX_STACK_LINE(603)
				int tmp13 = ::__hxcpp_memory_get_byte(data->buffer->b,(data->byteOffset + ((offset + (int)3))));		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(603)
				Dynamic tmp14 = (int(tmp13) & int((int)255));		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(603)
				int b = tmp14;		HX_STACK_VAR(b,"b");
				HX_STACK_LINE(603)
				int tmp15 = ::__hxcpp_memory_get_byte(data->buffer->b,(data->byteOffset + offset));		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(603)
				Dynamic tmp16 = (int(tmp15) & int((int)255));		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(603)
				int a = tmp16;		HX_STACK_VAR(a,"a");
				HX_STACK_LINE(603)
				int tmp17 = (int(r) & int((int)255));		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(603)
				int tmp18 = (int(tmp17) << int((int)24));		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(603)
				int tmp19 = (int(g) & int((int)255));		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(603)
				int tmp20 = (int(tmp19) << int((int)16));		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(603)
				int tmp21 = (int(tmp18) | int(tmp20));		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(603)
				int tmp22 = (int(b) & int((int)255));		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(603)
				int tmp23 = (int(tmp22) << int((int)8));		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(603)
				int tmp24 = (int(tmp21) | int(tmp23));		HX_STACK_VAR(tmp24,"tmp24");
				HX_STACK_LINE(603)
				int tmp25 = (int(a) & int((int)255));		HX_STACK_VAR(tmp25,"tmp25");
				HX_STACK_LINE(603)
				int tmp26 = (int(tmp24) | int(tmp25));		HX_STACK_VAR(tmp26,"tmp26");
				HX_STACK_LINE(603)
				pixel = tmp26;
			}
			;break;
		}
		HX_STACK_LINE(603)
		bool tmp9 = image->buffer->premultiplied;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(603)
		if ((tmp9)){
			HX_STACK_LINE(603)
			int tmp10 = (int(pixel) & int((int)255));		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(603)
			bool tmp11 = (tmp10 != (int)0);		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(603)
			bool tmp12;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(603)
			if ((tmp11)){
				HX_STACK_LINE(603)
				int tmp13 = (int(pixel) & int((int)255));		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(603)
				int tmp14 = tmp13;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(603)
				tmp12 = (tmp14 != (int)255);
			}
			else{
				HX_STACK_LINE(603)
				tmp12 = false;
			}
			HX_STACK_LINE(603)
			if ((tmp12)){
				HX_STACK_LINE(603)
				int tmp13 = (int(pixel) & int((int)255));		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(603)
				Float tmp14 = (Float(((Float)255.0)) / Float(tmp13));		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(603)
				::lime::math::color::_RGBA::RGBA_Impl__obj::unmult = tmp14;
				HX_STACK_LINE(603)
				{
					HX_STACK_LINE(603)
					Dynamic tmp15;		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(603)
					{
						HX_STACK_LINE(603)
						::lime::utils::ArrayBufferView tmp16 = ::lime::math::color::_RGBA::RGBA_Impl__obj::__clamp;		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(603)
						::lime::utils::ArrayBufferView this1 = tmp16;		HX_STACK_VAR(this1,"this1");
						HX_STACK_LINE(603)
						int tmp17 = (int(pixel) >> int((int)24));		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(603)
						int tmp18 = (int(tmp17) & int((int)255));		HX_STACK_VAR(tmp18,"tmp18");
						HX_STACK_LINE(603)
						Float tmp19 = ::lime::math::color::_RGBA::RGBA_Impl__obj::unmult;		HX_STACK_VAR(tmp19,"tmp19");
						HX_STACK_LINE(603)
						Float tmp20 = (tmp18 * tmp19);		HX_STACK_VAR(tmp20,"tmp20");
						HX_STACK_LINE(603)
						int tmp21 = ::Math_obj::round(tmp20);		HX_STACK_VAR(tmp21,"tmp21");
						HX_STACK_LINE(603)
						int idx = tmp21;		HX_STACK_VAR(idx,"idx");
						HX_STACK_LINE(603)
						int tmp22 = ::__hxcpp_memory_get_byte(this1->buffer->b,(this1->byteOffset + idx));		HX_STACK_VAR(tmp22,"tmp22");
						HX_STACK_LINE(603)
						tmp15 = (int(tmp22) & int((int)255));
					}
					HX_STACK_LINE(603)
					int r = tmp15;		HX_STACK_VAR(r,"r");
					HX_STACK_LINE(603)
					Dynamic tmp16;		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(603)
					{
						HX_STACK_LINE(603)
						::lime::utils::ArrayBufferView tmp17 = ::lime::math::color::_RGBA::RGBA_Impl__obj::__clamp;		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(603)
						::lime::utils::ArrayBufferView this1 = tmp17;		HX_STACK_VAR(this1,"this1");
						HX_STACK_LINE(603)
						int tmp18 = (int(pixel) >> int((int)16));		HX_STACK_VAR(tmp18,"tmp18");
						HX_STACK_LINE(603)
						int tmp19 = (int(tmp18) & int((int)255));		HX_STACK_VAR(tmp19,"tmp19");
						HX_STACK_LINE(603)
						Float tmp20 = ::lime::math::color::_RGBA::RGBA_Impl__obj::unmult;		HX_STACK_VAR(tmp20,"tmp20");
						HX_STACK_LINE(603)
						Float tmp21 = (tmp19 * tmp20);		HX_STACK_VAR(tmp21,"tmp21");
						HX_STACK_LINE(603)
						int tmp22 = ::Math_obj::round(tmp21);		HX_STACK_VAR(tmp22,"tmp22");
						HX_STACK_LINE(603)
						int idx = tmp22;		HX_STACK_VAR(idx,"idx");
						HX_STACK_LINE(603)
						int tmp23 = ::__hxcpp_memory_get_byte(this1->buffer->b,(this1->byteOffset + idx));		HX_STACK_VAR(tmp23,"tmp23");
						HX_STACK_LINE(603)
						tmp16 = (int(tmp23) & int((int)255));
					}
					HX_STACK_LINE(603)
					int g = tmp16;		HX_STACK_VAR(g,"g");
					HX_STACK_LINE(603)
					Dynamic tmp17;		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(603)
					{
						HX_STACK_LINE(603)
						::lime::utils::ArrayBufferView tmp18 = ::lime::math::color::_RGBA::RGBA_Impl__obj::__clamp;		HX_STACK_VAR(tmp18,"tmp18");
						HX_STACK_LINE(603)
						::lime::utils::ArrayBufferView this1 = tmp18;		HX_STACK_VAR(this1,"this1");
						HX_STACK_LINE(603)
						int tmp19 = (int(pixel) >> int((int)8));		HX_STACK_VAR(tmp19,"tmp19");
						HX_STACK_LINE(603)
						int tmp20 = (int(tmp19) & int((int)255));		HX_STACK_VAR(tmp20,"tmp20");
						HX_STACK_LINE(603)
						Float tmp21 = ::lime::math::color::_RGBA::RGBA_Impl__obj::unmult;		HX_STACK_VAR(tmp21,"tmp21");
						HX_STACK_LINE(603)
						Float tmp22 = (tmp20 * tmp21);		HX_STACK_VAR(tmp22,"tmp22");
						HX_STACK_LINE(603)
						int tmp23 = ::Math_obj::round(tmp22);		HX_STACK_VAR(tmp23,"tmp23");
						HX_STACK_LINE(603)
						int idx = tmp23;		HX_STACK_VAR(idx,"idx");
						HX_STACK_LINE(603)
						int tmp24 = ::__hxcpp_memory_get_byte(this1->buffer->b,(this1->byteOffset + idx));		HX_STACK_VAR(tmp24,"tmp24");
						HX_STACK_LINE(603)
						tmp17 = (int(tmp24) & int((int)255));
					}
					HX_STACK_LINE(603)
					int b = tmp17;		HX_STACK_VAR(b,"b");
					HX_STACK_LINE(603)
					int tmp18 = (int(r) & int((int)255));		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(603)
					int tmp19 = (int(tmp18) << int((int)24));		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(603)
					int tmp20 = (int(g) & int((int)255));		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(603)
					int tmp21 = (int(tmp20) << int((int)16));		HX_STACK_VAR(tmp21,"tmp21");
					HX_STACK_LINE(603)
					int tmp22 = (int(tmp19) | int(tmp21));		HX_STACK_VAR(tmp22,"tmp22");
					HX_STACK_LINE(603)
					int tmp23 = (int(b) & int((int)255));		HX_STACK_VAR(tmp23,"tmp23");
					HX_STACK_LINE(603)
					int tmp24 = (int(tmp23) << int((int)8));		HX_STACK_VAR(tmp24,"tmp24");
					HX_STACK_LINE(603)
					int tmp25 = (int(tmp22) | int(tmp24));		HX_STACK_VAR(tmp25,"tmp25");
					HX_STACK_LINE(603)
					int tmp26 = (int(pixel) & int((int)255));		HX_STACK_VAR(tmp26,"tmp26");
					HX_STACK_LINE(603)
					int tmp27 = (int(tmp26) & int((int)255));		HX_STACK_VAR(tmp27,"tmp27");
					HX_STACK_LINE(603)
					int tmp28 = (int(tmp25) | int(tmp27));		HX_STACK_VAR(tmp28,"tmp28");
					HX_STACK_LINE(603)
					pixel = tmp28;
				}
			}
		}
	}
	HX_STACK_LINE(604)
	{
		HX_STACK_LINE(604)
		{
			HX_STACK_LINE(604)
			int tmp = (int(pixel) >> int((int)24));		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(604)
			int tmp1 = (int(tmp) & int((int)255));		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(604)
			int tmp2 = (int(tmp1) & int((int)255));		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(604)
			int tmp3 = (int(tmp2) << int((int)24));		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(604)
			int tmp4 = (int(pixel) >> int((int)16));		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(604)
			int tmp5 = (int(tmp4) & int((int)255));		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(604)
			int tmp6 = (int(tmp5) & int((int)255));		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(604)
			int tmp7 = (int(tmp6) << int((int)16));		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(604)
			int tmp8 = (int(tmp3) | int(tmp7));		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(604)
			int tmp9 = (int(pixel) >> int((int)8));		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(604)
			int tmp10 = (int(tmp9) & int((int)255));		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(604)
			int tmp11 = (int(tmp10) & int((int)255));		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(604)
			int tmp12 = (int(tmp11) << int((int)8));		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(604)
			int tmp13 = (int(tmp8) | int(tmp12));		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(604)
			int tmp14 = (int)0;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(604)
			int tmp15 = (int(tmp13) | int(tmp14));		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(604)
			pixel = tmp15;
		}
		HX_STACK_LINE(604)
		(int)0;
	}
	HX_STACK_LINE(606)
	int tmp = format;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(606)
	switch( (int)(tmp)){
		case (int)1: {
			HX_STACK_LINE(608)
			int tmp1;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(608)
			{
				HX_STACK_LINE(608)
				int tmp2;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(608)
				{
					HX_STACK_LINE(608)
					int argb = (int)0;		HX_STACK_VAR(argb,"argb");
					HX_STACK_LINE(608)
					tmp2 = argb;
				}
				HX_STACK_LINE(608)
				int argb = tmp2;		HX_STACK_VAR(argb,"argb");
				HX_STACK_LINE(608)
				{
					HX_STACK_LINE(608)
					int tmp3 = (int(pixel) & int((int)255));		HX_STACK_VAR(tmp3,"tmp3");
					HX_STACK_LINE(608)
					int tmp4 = (int(tmp3) & int((int)255));		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(608)
					int tmp5 = (int(tmp4) << int((int)24));		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(608)
					int tmp6 = (int(pixel) >> int((int)24));		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(608)
					int tmp7 = (int(tmp6) & int((int)255));		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(608)
					int tmp8 = (int(tmp7) & int((int)255));		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(608)
					int tmp9 = (int(tmp8) << int((int)16));		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(608)
					int tmp10 = (int(tmp5) | int(tmp9));		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(608)
					int tmp11 = (int(pixel) >> int((int)16));		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(608)
					int tmp12 = (int(tmp11) & int((int)255));		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(608)
					int tmp13 = (int(tmp12) & int((int)255));		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(608)
					int tmp14 = (int(tmp13) << int((int)8));		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(608)
					int tmp15 = (int(tmp10) | int(tmp14));		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(608)
					int tmp16 = (int(pixel) >> int((int)8));		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(608)
					int tmp17 = (int(tmp16) & int((int)255));		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(608)
					int tmp18 = (int(tmp17) & int((int)255));		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(608)
					int tmp19 = (int(tmp15) | int(tmp18));		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(608)
					argb = tmp19;
				}
				HX_STACK_LINE(608)
				tmp1 = argb;
			}
			HX_STACK_LINE(608)
			int tmp2 = tmp1;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(608)
			return tmp2;
		}
		;break;
		case (int)2: {
			HX_STACK_LINE(609)
			int tmp1;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(609)
			{
				HX_STACK_LINE(609)
				int tmp2;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(609)
				{
					HX_STACK_LINE(609)
					int bgra = (int)0;		HX_STACK_VAR(bgra,"bgra");
					HX_STACK_LINE(609)
					tmp2 = bgra;
				}
				HX_STACK_LINE(609)
				int bgra = tmp2;		HX_STACK_VAR(bgra,"bgra");
				HX_STACK_LINE(609)
				{
					HX_STACK_LINE(609)
					int tmp3 = (int(pixel) >> int((int)8));		HX_STACK_VAR(tmp3,"tmp3");
					HX_STACK_LINE(609)
					int tmp4 = (int(tmp3) & int((int)255));		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(609)
					int tmp5 = (int(tmp4) & int((int)255));		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(609)
					int tmp6 = (int(tmp5) << int((int)24));		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(609)
					int tmp7 = (int(pixel) >> int((int)16));		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(609)
					int tmp8 = (int(tmp7) & int((int)255));		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(609)
					int tmp9 = (int(tmp8) & int((int)255));		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(609)
					int tmp10 = (int(tmp9) << int((int)16));		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(609)
					int tmp11 = (int(tmp6) | int(tmp10));		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(609)
					int tmp12 = (int(pixel) >> int((int)24));		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(609)
					int tmp13 = (int(tmp12) & int((int)255));		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(609)
					int tmp14 = (int(tmp13) & int((int)255));		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(609)
					int tmp15 = (int(tmp14) << int((int)8));		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(609)
					int tmp16 = (int(tmp11) | int(tmp15));		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(609)
					int tmp17 = (int(pixel) & int((int)255));		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(609)
					int tmp18 = (int(tmp17) & int((int)255));		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(609)
					int tmp19 = (int(tmp16) | int(tmp18));		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(609)
					bgra = tmp19;
				}
				HX_STACK_LINE(609)
				tmp1 = bgra;
			}
			HX_STACK_LINE(609)
			int tmp2 = tmp1;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(609)
			return tmp2;
		}
		;break;
		default: {
			HX_STACK_LINE(610)
			int tmp1 = pixel;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(610)
			return tmp1;
		}
	}
	HX_STACK_LINE(606)
	return (int)0;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(ImageDataUtil_obj,getPixel,return )

int ImageDataUtil_obj::getPixel32( ::lime::graphics::Image image,int x,int y,int format){
	HX_STACK_FRAME("lime.graphics.utils.ImageDataUtil","getPixel32",0x2aa489dd,"lime.graphics.utils.ImageDataUtil.getPixel32","lime/graphics/utils/ImageDataUtil.hx",617,0x494d921f)
	HX_STACK_ARG(image,"image")
	HX_STACK_ARG(x,"x")
	HX_STACK_ARG(y,"y")
	HX_STACK_ARG(format,"format")
	HX_STACK_LINE(619)
	int pixel;		HX_STACK_VAR(pixel,"pixel");
	HX_STACK_LINE(621)
	{
		HX_STACK_LINE(621)
		::lime::utils::ArrayBufferView tmp = image->buffer->data;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(621)
		::lime::utils::ArrayBufferView data = tmp;		HX_STACK_VAR(data,"data");
		HX_STACK_LINE(621)
		int tmp1 = (y + image->offsetY);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(621)
		int tmp2 = ((int)4 * tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(621)
		int tmp3 = image->buffer->width;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(621)
		int tmp4 = (tmp2 * tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(621)
		int tmp5 = (x + image->offsetX);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(621)
		int tmp6 = (tmp5 * (int)4);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(621)
		int tmp7 = (tmp4 + tmp6);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(621)
		int offset = tmp7;		HX_STACK_VAR(offset,"offset");
		HX_STACK_LINE(621)
		int tmp8 = image->buffer->format;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(621)
		switch( (int)(tmp8)){
			case (int)2: {
				HX_STACK_LINE(621)
				int tmp9 = ::__hxcpp_memory_get_byte(data->buffer->b,(data->byteOffset + ((offset + (int)2))));		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(621)
				Dynamic tmp10 = (int(tmp9) & int((int)255));		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(621)
				int r = tmp10;		HX_STACK_VAR(r,"r");
				HX_STACK_LINE(621)
				int tmp11 = ::__hxcpp_memory_get_byte(data->buffer->b,(data->byteOffset + ((offset + (int)1))));		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(621)
				Dynamic tmp12 = (int(tmp11) & int((int)255));		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(621)
				int g = tmp12;		HX_STACK_VAR(g,"g");
				HX_STACK_LINE(621)
				int tmp13 = ::__hxcpp_memory_get_byte(data->buffer->b,(data->byteOffset + offset));		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(621)
				Dynamic tmp14 = (int(tmp13) & int((int)255));		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(621)
				int b = tmp14;		HX_STACK_VAR(b,"b");
				HX_STACK_LINE(621)
				int tmp15 = ::__hxcpp_memory_get_byte(data->buffer->b,(data->byteOffset + ((offset + (int)3))));		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(621)
				Dynamic tmp16 = (int(tmp15) & int((int)255));		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(621)
				int a = tmp16;		HX_STACK_VAR(a,"a");
				HX_STACK_LINE(621)
				int tmp17 = (int(r) & int((int)255));		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(621)
				int tmp18 = (int(tmp17) << int((int)24));		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(621)
				int tmp19 = (int(g) & int((int)255));		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(621)
				int tmp20 = (int(tmp19) << int((int)16));		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(621)
				int tmp21 = (int(tmp18) | int(tmp20));		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(621)
				int tmp22 = (int(b) & int((int)255));		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(621)
				int tmp23 = (int(tmp22) << int((int)8));		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(621)
				int tmp24 = (int(tmp21) | int(tmp23));		HX_STACK_VAR(tmp24,"tmp24");
				HX_STACK_LINE(621)
				int tmp25 = (int(a) & int((int)255));		HX_STACK_VAR(tmp25,"tmp25");
				HX_STACK_LINE(621)
				int tmp26 = (int(tmp24) | int(tmp25));		HX_STACK_VAR(tmp26,"tmp26");
				HX_STACK_LINE(621)
				pixel = tmp26;
			}
			;break;
			case (int)0: {
				HX_STACK_LINE(621)
				int tmp9 = ::__hxcpp_memory_get_byte(data->buffer->b,(data->byteOffset + offset));		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(621)
				Dynamic tmp10 = (int(tmp9) & int((int)255));		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(621)
				int r = tmp10;		HX_STACK_VAR(r,"r");
				HX_STACK_LINE(621)
				int tmp11 = ::__hxcpp_memory_get_byte(data->buffer->b,(data->byteOffset + ((offset + (int)1))));		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(621)
				Dynamic tmp12 = (int(tmp11) & int((int)255));		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(621)
				int g = tmp12;		HX_STACK_VAR(g,"g");
				HX_STACK_LINE(621)
				int tmp13 = ::__hxcpp_memory_get_byte(data->buffer->b,(data->byteOffset + ((offset + (int)2))));		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(621)
				Dynamic tmp14 = (int(tmp13) & int((int)255));		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(621)
				int b = tmp14;		HX_STACK_VAR(b,"b");
				HX_STACK_LINE(621)
				int tmp15 = ::__hxcpp_memory_get_byte(data->buffer->b,(data->byteOffset + ((offset + (int)3))));		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(621)
				Dynamic tmp16 = (int(tmp15) & int((int)255));		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(621)
				int a = tmp16;		HX_STACK_VAR(a,"a");
				HX_STACK_LINE(621)
				int tmp17 = (int(r) & int((int)255));		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(621)
				int tmp18 = (int(tmp17) << int((int)24));		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(621)
				int tmp19 = (int(g) & int((int)255));		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(621)
				int tmp20 = (int(tmp19) << int((int)16));		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(621)
				int tmp21 = (int(tmp18) | int(tmp20));		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(621)
				int tmp22 = (int(b) & int((int)255));		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(621)
				int tmp23 = (int(tmp22) << int((int)8));		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(621)
				int tmp24 = (int(tmp21) | int(tmp23));		HX_STACK_VAR(tmp24,"tmp24");
				HX_STACK_LINE(621)
				int tmp25 = (int(a) & int((int)255));		HX_STACK_VAR(tmp25,"tmp25");
				HX_STACK_LINE(621)
				int tmp26 = (int(tmp24) | int(tmp25));		HX_STACK_VAR(tmp26,"tmp26");
				HX_STACK_LINE(621)
				pixel = tmp26;
			}
			;break;
			case (int)1: {
				HX_STACK_LINE(621)
				int tmp9 = ::__hxcpp_memory_get_byte(data->buffer->b,(data->byteOffset + ((offset + (int)1))));		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(621)
				Dynamic tmp10 = (int(tmp9) & int((int)255));		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(621)
				int r = tmp10;		HX_STACK_VAR(r,"r");
				HX_STACK_LINE(621)
				int tmp11 = ::__hxcpp_memory_get_byte(data->buffer->b,(data->byteOffset + ((offset + (int)2))));		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(621)
				Dynamic tmp12 = (int(tmp11) & int((int)255));		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(621)
				int g = tmp12;		HX_STACK_VAR(g,"g");
				HX_STACK_LINE(621)
				int tmp13 = ::__hxcpp_memory_get_byte(data->buffer->b,(data->byteOffset + ((offset + (int)3))));		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(621)
				Dynamic tmp14 = (int(tmp13) & int((int)255));		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(621)
				int b = tmp14;		HX_STACK_VAR(b,"b");
				HX_STACK_LINE(621)
				int tmp15 = ::__hxcpp_memory_get_byte(data->buffer->b,(data->byteOffset + offset));		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(621)
				Dynamic tmp16 = (int(tmp15) & int((int)255));		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(621)
				int a = tmp16;		HX_STACK_VAR(a,"a");
				HX_STACK_LINE(621)
				int tmp17 = (int(r) & int((int)255));		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(621)
				int tmp18 = (int(tmp17) << int((int)24));		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(621)
				int tmp19 = (int(g) & int((int)255));		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(621)
				int tmp20 = (int(tmp19) << int((int)16));		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(621)
				int tmp21 = (int(tmp18) | int(tmp20));		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(621)
				int tmp22 = (int(b) & int((int)255));		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(621)
				int tmp23 = (int(tmp22) << int((int)8));		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(621)
				int tmp24 = (int(tmp21) | int(tmp23));		HX_STACK_VAR(tmp24,"tmp24");
				HX_STACK_LINE(621)
				int tmp25 = (int(a) & int((int)255));		HX_STACK_VAR(tmp25,"tmp25");
				HX_STACK_LINE(621)
				int tmp26 = (int(tmp24) | int(tmp25));		HX_STACK_VAR(tmp26,"tmp26");
				HX_STACK_LINE(621)
				pixel = tmp26;
			}
			;break;
		}
		HX_STACK_LINE(621)
		bool tmp9 = image->buffer->premultiplied;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(621)
		if ((tmp9)){
			HX_STACK_LINE(621)
			int tmp10 = (int(pixel) & int((int)255));		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(621)
			bool tmp11 = (tmp10 != (int)0);		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(621)
			bool tmp12;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(621)
			if ((tmp11)){
				HX_STACK_LINE(621)
				int tmp13 = (int(pixel) & int((int)255));		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(621)
				int tmp14 = tmp13;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(621)
				tmp12 = (tmp14 != (int)255);
			}
			else{
				HX_STACK_LINE(621)
				tmp12 = false;
			}
			HX_STACK_LINE(621)
			if ((tmp12)){
				HX_STACK_LINE(621)
				int tmp13 = (int(pixel) & int((int)255));		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(621)
				Float tmp14 = (Float(((Float)255.0)) / Float(tmp13));		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(621)
				::lime::math::color::_RGBA::RGBA_Impl__obj::unmult = tmp14;
				HX_STACK_LINE(621)
				{
					HX_STACK_LINE(621)
					Dynamic tmp15;		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(621)
					{
						HX_STACK_LINE(621)
						::lime::utils::ArrayBufferView tmp16 = ::lime::math::color::_RGBA::RGBA_Impl__obj::__clamp;		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(621)
						::lime::utils::ArrayBufferView this1 = tmp16;		HX_STACK_VAR(this1,"this1");
						HX_STACK_LINE(621)
						int tmp17 = (int(pixel) >> int((int)24));		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(621)
						int tmp18 = (int(tmp17) & int((int)255));		HX_STACK_VAR(tmp18,"tmp18");
						HX_STACK_LINE(621)
						Float tmp19 = ::lime::math::color::_RGBA::RGBA_Impl__obj::unmult;		HX_STACK_VAR(tmp19,"tmp19");
						HX_STACK_LINE(621)
						Float tmp20 = (tmp18 * tmp19);		HX_STACK_VAR(tmp20,"tmp20");
						HX_STACK_LINE(621)
						int tmp21 = ::Math_obj::round(tmp20);		HX_STACK_VAR(tmp21,"tmp21");
						HX_STACK_LINE(621)
						int idx = tmp21;		HX_STACK_VAR(idx,"idx");
						HX_STACK_LINE(621)
						int tmp22 = ::__hxcpp_memory_get_byte(this1->buffer->b,(this1->byteOffset + idx));		HX_STACK_VAR(tmp22,"tmp22");
						HX_STACK_LINE(621)
						tmp15 = (int(tmp22) & int((int)255));
					}
					HX_STACK_LINE(621)
					int r = tmp15;		HX_STACK_VAR(r,"r");
					HX_STACK_LINE(621)
					Dynamic tmp16;		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(621)
					{
						HX_STACK_LINE(621)
						::lime::utils::ArrayBufferView tmp17 = ::lime::math::color::_RGBA::RGBA_Impl__obj::__clamp;		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(621)
						::lime::utils::ArrayBufferView this1 = tmp17;		HX_STACK_VAR(this1,"this1");
						HX_STACK_LINE(621)
						int tmp18 = (int(pixel) >> int((int)16));		HX_STACK_VAR(tmp18,"tmp18");
						HX_STACK_LINE(621)
						int tmp19 = (int(tmp18) & int((int)255));		HX_STACK_VAR(tmp19,"tmp19");
						HX_STACK_LINE(621)
						Float tmp20 = ::lime::math::color::_RGBA::RGBA_Impl__obj::unmult;		HX_STACK_VAR(tmp20,"tmp20");
						HX_STACK_LINE(621)
						Float tmp21 = (tmp19 * tmp20);		HX_STACK_VAR(tmp21,"tmp21");
						HX_STACK_LINE(621)
						int tmp22 = ::Math_obj::round(tmp21);		HX_STACK_VAR(tmp22,"tmp22");
						HX_STACK_LINE(621)
						int idx = tmp22;		HX_STACK_VAR(idx,"idx");
						HX_STACK_LINE(621)
						int tmp23 = ::__hxcpp_memory_get_byte(this1->buffer->b,(this1->byteOffset + idx));		HX_STACK_VAR(tmp23,"tmp23");
						HX_STACK_LINE(621)
						tmp16 = (int(tmp23) & int((int)255));
					}
					HX_STACK_LINE(621)
					int g = tmp16;		HX_STACK_VAR(g,"g");
					HX_STACK_LINE(621)
					Dynamic tmp17;		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(621)
					{
						HX_STACK_LINE(621)
						::lime::utils::ArrayBufferView tmp18 = ::lime::math::color::_RGBA::RGBA_Impl__obj::__clamp;		HX_STACK_VAR(tmp18,"tmp18");
						HX_STACK_LINE(621)
						::lime::utils::ArrayBufferView this1 = tmp18;		HX_STACK_VAR(this1,"this1");
						HX_STACK_LINE(621)
						int tmp19 = (int(pixel) >> int((int)8));		HX_STACK_VAR(tmp19,"tmp19");
						HX_STACK_LINE(621)
						int tmp20 = (int(tmp19) & int((int)255));		HX_STACK_VAR(tmp20,"tmp20");
						HX_STACK_LINE(621)
						Float tmp21 = ::lime::math::color::_RGBA::RGBA_Impl__obj::unmult;		HX_STACK_VAR(tmp21,"tmp21");
						HX_STACK_LINE(621)
						Float tmp22 = (tmp20 * tmp21);		HX_STACK_VAR(tmp22,"tmp22");
						HX_STACK_LINE(621)
						int tmp23 = ::Math_obj::round(tmp22);		HX_STACK_VAR(tmp23,"tmp23");
						HX_STACK_LINE(621)
						int idx = tmp23;		HX_STACK_VAR(idx,"idx");
						HX_STACK_LINE(621)
						int tmp24 = ::__hxcpp_memory_get_byte(this1->buffer->b,(this1->byteOffset + idx));		HX_STACK_VAR(tmp24,"tmp24");
						HX_STACK_LINE(621)
						tmp17 = (int(tmp24) & int((int)255));
					}
					HX_STACK_LINE(621)
					int b = tmp17;		HX_STACK_VAR(b,"b");
					HX_STACK_LINE(621)
					int tmp18 = (int(r) & int((int)255));		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(621)
					int tmp19 = (int(tmp18) << int((int)24));		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(621)
					int tmp20 = (int(g) & int((int)255));		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(621)
					int tmp21 = (int(tmp20) << int((int)16));		HX_STACK_VAR(tmp21,"tmp21");
					HX_STACK_LINE(621)
					int tmp22 = (int(tmp19) | int(tmp21));		HX_STACK_VAR(tmp22,"tmp22");
					HX_STACK_LINE(621)
					int tmp23 = (int(b) & int((int)255));		HX_STACK_VAR(tmp23,"tmp23");
					HX_STACK_LINE(621)
					int tmp24 = (int(tmp23) << int((int)8));		HX_STACK_VAR(tmp24,"tmp24");
					HX_STACK_LINE(621)
					int tmp25 = (int(tmp22) | int(tmp24));		HX_STACK_VAR(tmp25,"tmp25");
					HX_STACK_LINE(621)
					int tmp26 = (int(pixel) & int((int)255));		HX_STACK_VAR(tmp26,"tmp26");
					HX_STACK_LINE(621)
					int tmp27 = (int(tmp26) & int((int)255));		HX_STACK_VAR(tmp27,"tmp27");
					HX_STACK_LINE(621)
					int tmp28 = (int(tmp25) | int(tmp27));		HX_STACK_VAR(tmp28,"tmp28");
					HX_STACK_LINE(621)
					pixel = tmp28;
				}
			}
		}
	}
	HX_STACK_LINE(623)
	int tmp = format;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(623)
	switch( (int)(tmp)){
		case (int)1: {
			HX_STACK_LINE(625)
			int tmp1;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(625)
			{
				HX_STACK_LINE(625)
				int tmp2;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(625)
				{
					HX_STACK_LINE(625)
					int argb = (int)0;		HX_STACK_VAR(argb,"argb");
					HX_STACK_LINE(625)
					tmp2 = argb;
				}
				HX_STACK_LINE(625)
				int argb = tmp2;		HX_STACK_VAR(argb,"argb");
				HX_STACK_LINE(625)
				{
					HX_STACK_LINE(625)
					int tmp3 = (int(pixel) & int((int)255));		HX_STACK_VAR(tmp3,"tmp3");
					HX_STACK_LINE(625)
					int tmp4 = (int(tmp3) & int((int)255));		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(625)
					int tmp5 = (int(tmp4) << int((int)24));		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(625)
					int tmp6 = (int(pixel) >> int((int)24));		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(625)
					int tmp7 = (int(tmp6) & int((int)255));		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(625)
					int tmp8 = (int(tmp7) & int((int)255));		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(625)
					int tmp9 = (int(tmp8) << int((int)16));		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(625)
					int tmp10 = (int(tmp5) | int(tmp9));		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(625)
					int tmp11 = (int(pixel) >> int((int)16));		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(625)
					int tmp12 = (int(tmp11) & int((int)255));		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(625)
					int tmp13 = (int(tmp12) & int((int)255));		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(625)
					int tmp14 = (int(tmp13) << int((int)8));		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(625)
					int tmp15 = (int(tmp10) | int(tmp14));		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(625)
					int tmp16 = (int(pixel) >> int((int)8));		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(625)
					int tmp17 = (int(tmp16) & int((int)255));		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(625)
					int tmp18 = (int(tmp17) & int((int)255));		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(625)
					int tmp19 = (int(tmp15) | int(tmp18));		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(625)
					argb = tmp19;
				}
				HX_STACK_LINE(625)
				tmp1 = argb;
			}
			HX_STACK_LINE(625)
			int tmp2 = tmp1;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(625)
			return tmp2;
		}
		;break;
		case (int)2: {
			HX_STACK_LINE(626)
			int tmp1;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(626)
			{
				HX_STACK_LINE(626)
				int tmp2;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(626)
				{
					HX_STACK_LINE(626)
					int bgra = (int)0;		HX_STACK_VAR(bgra,"bgra");
					HX_STACK_LINE(626)
					tmp2 = bgra;
				}
				HX_STACK_LINE(626)
				int bgra = tmp2;		HX_STACK_VAR(bgra,"bgra");
				HX_STACK_LINE(626)
				{
					HX_STACK_LINE(626)
					int tmp3 = (int(pixel) >> int((int)8));		HX_STACK_VAR(tmp3,"tmp3");
					HX_STACK_LINE(626)
					int tmp4 = (int(tmp3) & int((int)255));		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(626)
					int tmp5 = (int(tmp4) & int((int)255));		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(626)
					int tmp6 = (int(tmp5) << int((int)24));		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(626)
					int tmp7 = (int(pixel) >> int((int)16));		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(626)
					int tmp8 = (int(tmp7) & int((int)255));		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(626)
					int tmp9 = (int(tmp8) & int((int)255));		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(626)
					int tmp10 = (int(tmp9) << int((int)16));		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(626)
					int tmp11 = (int(tmp6) | int(tmp10));		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(626)
					int tmp12 = (int(pixel) >> int((int)24));		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(626)
					int tmp13 = (int(tmp12) & int((int)255));		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(626)
					int tmp14 = (int(tmp13) & int((int)255));		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(626)
					int tmp15 = (int(tmp14) << int((int)8));		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(626)
					int tmp16 = (int(tmp11) | int(tmp15));		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(626)
					int tmp17 = (int(pixel) & int((int)255));		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(626)
					int tmp18 = (int(tmp17) & int((int)255));		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(626)
					int tmp19 = (int(tmp16) | int(tmp18));		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(626)
					bgra = tmp19;
				}
				HX_STACK_LINE(626)
				tmp1 = bgra;
			}
			HX_STACK_LINE(626)
			int tmp2 = tmp1;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(626)
			return tmp2;
		}
		;break;
		default: {
			HX_STACK_LINE(627)
			int tmp1 = pixel;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(627)
			return tmp1;
		}
	}
	HX_STACK_LINE(623)
	return (int)0;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(ImageDataUtil_obj,getPixel32,return )

::lime::utils::ByteArray ImageDataUtil_obj::getPixels( ::lime::graphics::Image image,::lime::math::Rectangle rect,int format){
	HX_STACK_FRAME("lime.graphics.utils.ImageDataUtil","getPixels",0xab3d94f5,"lime.graphics.utils.ImageDataUtil.getPixels","lime/graphics/utils/ImageDataUtil.hx",634,0x494d921f)
	HX_STACK_ARG(image,"image")
	HX_STACK_ARG(rect,"rect")
	HX_STACK_ARG(format,"format")
	HX_STACK_LINE(636)
	::lime::utils::ArrayBufferView tmp = image->buffer->data;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(636)
	bool tmp1 = (tmp == null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(636)
	if ((tmp1)){
		HX_STACK_LINE(636)
		return null();
	}
	HX_STACK_LINE(638)
	Float tmp2 = (rect->width * rect->height);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(638)
	int tmp3 = ::Std_obj::_int(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(638)
	int length = tmp3;		HX_STACK_VAR(length,"length");
	HX_STACK_LINE(643)
	int tmp4 = (length * (int)4);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(643)
	::lime::utils::ByteArray tmp5 = ::lime::utils::ByteArray_obj::__new(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(643)
	::lime::utils::ByteArray byteArray = tmp5;		HX_STACK_VAR(byteArray,"byteArray");
	HX_STACK_LINE(644)
	byteArray->position = (int)0;
	HX_STACK_LINE(648)
	bool tmp6 = ::lime::_system::System_obj::disableCFFI;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(648)
	bool tmp7 = !(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(648)
	if ((tmp7)){
		HX_STACK_LINE(648)
		::lime::graphics::Image tmp8 = image;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(648)
		::lime::math::Rectangle tmp9 = rect;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(648)
		int tmp10 = format;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(648)
		::lime::utils::ByteArray tmp11 = byteArray;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(648)
		::lime::graphics::utils::ImageDataUtil_obj::lime_image_data_util_get_pixels(tmp8,tmp9,tmp10,tmp11);
	}
	else{
		HX_STACK_LINE(652)
		::lime::utils::ArrayBufferView tmp8 = image->buffer->data;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(652)
		::lime::utils::ArrayBufferView data = tmp8;		HX_STACK_VAR(data,"data");
		HX_STACK_LINE(653)
		int tmp9 = image->buffer->format;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(653)
		int sourceFormat = tmp9;		HX_STACK_VAR(sourceFormat,"sourceFormat");
		HX_STACK_LINE(654)
		bool tmp10 = image->buffer->premultiplied;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(654)
		bool premultiplied = tmp10;		HX_STACK_VAR(premultiplied,"premultiplied");
		HX_STACK_LINE(656)
		::lime::graphics::utils::_ImageDataUtil::ImageDataView tmp11 = ::lime::graphics::utils::_ImageDataUtil::ImageDataView_obj::__new(image,rect);		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(656)
		::lime::graphics::utils::_ImageDataUtil::ImageDataView dataView = tmp11;		HX_STACK_VAR(dataView,"dataView");
		HX_STACK_LINE(657)
		int position;		HX_STACK_VAR(position,"position");
		HX_STACK_LINE(657)
		int argb;		HX_STACK_VAR(argb,"argb");
		HX_STACK_LINE(657)
		int bgra;		HX_STACK_VAR(bgra,"bgra");
		HX_STACK_LINE(657)
		int pixel;		HX_STACK_VAR(pixel,"pixel");
		HX_STACK_LINE(660)
		int destPosition = (int)0;		HX_STACK_VAR(destPosition,"destPosition");
		HX_STACK_LINE(663)
		{
			HX_STACK_LINE(663)
			int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(663)
			int _g = dataView->height;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(663)
			while((true)){
				HX_STACK_LINE(663)
				bool tmp12 = (_g1 < _g);		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(663)
				bool tmp13 = !(tmp12);		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(663)
				if ((tmp13)){
					HX_STACK_LINE(663)
					break;
				}
				HX_STACK_LINE(663)
				int tmp14 = (_g1)++;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(663)
				int y = tmp14;		HX_STACK_VAR(y,"y");
				HX_STACK_LINE(665)
				int tmp15 = dataView->offset;		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(665)
				int tmp16 = (dataView->stride * y);		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(665)
				int tmp17 = (tmp15 + tmp16);		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(665)
				position = tmp17;
				HX_STACK_LINE(667)
				{
					HX_STACK_LINE(667)
					int _g3 = (int)0;		HX_STACK_VAR(_g3,"_g3");
					HX_STACK_LINE(667)
					int _g2 = dataView->width;		HX_STACK_VAR(_g2,"_g2");
					HX_STACK_LINE(667)
					while((true)){
						HX_STACK_LINE(667)
						bool tmp18 = (_g3 < _g2);		HX_STACK_VAR(tmp18,"tmp18");
						HX_STACK_LINE(667)
						bool tmp19 = !(tmp18);		HX_STACK_VAR(tmp19,"tmp19");
						HX_STACK_LINE(667)
						if ((tmp19)){
							HX_STACK_LINE(667)
							break;
						}
						HX_STACK_LINE(667)
						int tmp20 = (_g3)++;		HX_STACK_VAR(tmp20,"tmp20");
						HX_STACK_LINE(667)
						int x = tmp20;		HX_STACK_VAR(x,"x");
						HX_STACK_LINE(669)
						{
							HX_STACK_LINE(669)
							int tmp21 = sourceFormat;		HX_STACK_VAR(tmp21,"tmp21");
							HX_STACK_LINE(669)
							switch( (int)(tmp21)){
								case (int)2: {
									HX_STACK_LINE(669)
									int tmp22 = ::__hxcpp_memory_get_byte(data->buffer->b,(data->byteOffset + ((position + (int)2))));		HX_STACK_VAR(tmp22,"tmp22");
									HX_STACK_LINE(669)
									Dynamic tmp23 = (int(tmp22) & int((int)255));		HX_STACK_VAR(tmp23,"tmp23");
									HX_STACK_LINE(669)
									int r = tmp23;		HX_STACK_VAR(r,"r");
									HX_STACK_LINE(669)
									int tmp24 = ::__hxcpp_memory_get_byte(data->buffer->b,(data->byteOffset + ((position + (int)1))));		HX_STACK_VAR(tmp24,"tmp24");
									HX_STACK_LINE(669)
									Dynamic tmp25 = (int(tmp24) & int((int)255));		HX_STACK_VAR(tmp25,"tmp25");
									HX_STACK_LINE(669)
									int g = tmp25;		HX_STACK_VAR(g,"g");
									HX_STACK_LINE(669)
									int tmp26 = ::__hxcpp_memory_get_byte(data->buffer->b,(data->byteOffset + position));		HX_STACK_VAR(tmp26,"tmp26");
									HX_STACK_LINE(669)
									Dynamic tmp27 = (int(tmp26) & int((int)255));		HX_STACK_VAR(tmp27,"tmp27");
									HX_STACK_LINE(669)
									int b = tmp27;		HX_STACK_VAR(b,"b");
									HX_STACK_LINE(669)
									int tmp28 = ::__hxcpp_memory_get_byte(data->buffer->b,(data->byteOffset + ((position + (int)3))));		HX_STACK_VAR(tmp28,"tmp28");
									HX_STACK_LINE(669)
									Dynamic tmp29 = (int(tmp28) & int((int)255));		HX_STACK_VAR(tmp29,"tmp29");
									HX_STACK_LINE(669)
									int a = tmp29;		HX_STACK_VAR(a,"a");
									HX_STACK_LINE(669)
									int tmp30 = (int(r) & int((int)255));		HX_STACK_VAR(tmp30,"tmp30");
									HX_STACK_LINE(669)
									int tmp31 = (int(tmp30) << int((int)24));		HX_STACK_VAR(tmp31,"tmp31");
									HX_STACK_LINE(669)
									int tmp32 = (int(g) & int((int)255));		HX_STACK_VAR(tmp32,"tmp32");
									HX_STACK_LINE(669)
									int tmp33 = (int(tmp32) << int((int)16));		HX_STACK_VAR(tmp33,"tmp33");
									HX_STACK_LINE(669)
									int tmp34 = (int(tmp31) | int(tmp33));		HX_STACK_VAR(tmp34,"tmp34");
									HX_STACK_LINE(669)
									int tmp35 = (int(b) & int((int)255));		HX_STACK_VAR(tmp35,"tmp35");
									HX_STACK_LINE(669)
									int tmp36 = (int(tmp35) << int((int)8));		HX_STACK_VAR(tmp36,"tmp36");
									HX_STACK_LINE(669)
									int tmp37 = (int(tmp34) | int(tmp36));		HX_STACK_VAR(tmp37,"tmp37");
									HX_STACK_LINE(669)
									int tmp38 = (int(a) & int((int)255));		HX_STACK_VAR(tmp38,"tmp38");
									HX_STACK_LINE(669)
									int tmp39 = (int(tmp37) | int(tmp38));		HX_STACK_VAR(tmp39,"tmp39");
									HX_STACK_LINE(669)
									pixel = tmp39;
								}
								;break;
								case (int)0: {
									HX_STACK_LINE(669)
									int tmp22 = ::__hxcpp_memory_get_byte(data->buffer->b,(data->byteOffset + position));		HX_STACK_VAR(tmp22,"tmp22");
									HX_STACK_LINE(669)
									Dynamic tmp23 = (int(tmp22) & int((int)255));		HX_STACK_VAR(tmp23,"tmp23");
									HX_STACK_LINE(669)
									int r = tmp23;		HX_STACK_VAR(r,"r");
									HX_STACK_LINE(669)
									int tmp24 = ::__hxcpp_memory_get_byte(data->buffer->b,(data->byteOffset + ((position + (int)1))));		HX_STACK_VAR(tmp24,"tmp24");
									HX_STACK_LINE(669)
									Dynamic tmp25 = (int(tmp24) & int((int)255));		HX_STACK_VAR(tmp25,"tmp25");
									HX_STACK_LINE(669)
									int g = tmp25;		HX_STACK_VAR(g,"g");
									HX_STACK_LINE(669)
									int tmp26 = ::__hxcpp_memory_get_byte(data->buffer->b,(data->byteOffset + ((position + (int)2))));		HX_STACK_VAR(tmp26,"tmp26");
									HX_STACK_LINE(669)
									Dynamic tmp27 = (int(tmp26) & int((int)255));		HX_STACK_VAR(tmp27,"tmp27");
									HX_STACK_LINE(669)
									int b = tmp27;		HX_STACK_VAR(b,"b");
									HX_STACK_LINE(669)
									int tmp28 = ::__hxcpp_memory_get_byte(data->buffer->b,(data->byteOffset + ((position + (int)3))));		HX_STACK_VAR(tmp28,"tmp28");
									HX_STACK_LINE(669)
									Dynamic tmp29 = (int(tmp28) & int((int)255));		HX_STACK_VAR(tmp29,"tmp29");
									HX_STACK_LINE(669)
									int a = tmp29;		HX_STACK_VAR(a,"a");
									HX_STACK_LINE(669)
									int tmp30 = (int(r) & int((int)255));		HX_STACK_VAR(tmp30,"tmp30");
									HX_STACK_LINE(669)
									int tmp31 = (int(tmp30) << int((int)24));		HX_STACK_VAR(tmp31,"tmp31");
									HX_STACK_LINE(669)
									int tmp32 = (int(g) & int((int)255));		HX_STACK_VAR(tmp32,"tmp32");
									HX_STACK_LINE(669)
									int tmp33 = (int(tmp32) << int((int)16));		HX_STACK_VAR(tmp33,"tmp33");
									HX_STACK_LINE(669)
									int tmp34 = (int(tmp31) | int(tmp33));		HX_STACK_VAR(tmp34,"tmp34");
									HX_STACK_LINE(669)
									int tmp35 = (int(b) & int((int)255));		HX_STACK_VAR(tmp35,"tmp35");
									HX_STACK_LINE(669)
									int tmp36 = (int(tmp35) << int((int)8));		HX_STACK_VAR(tmp36,"tmp36");
									HX_STACK_LINE(669)
									int tmp37 = (int(tmp34) | int(tmp36));		HX_STACK_VAR(tmp37,"tmp37");
									HX_STACK_LINE(669)
									int tmp38 = (int(a) & int((int)255));		HX_STACK_VAR(tmp38,"tmp38");
									HX_STACK_LINE(669)
									int tmp39 = (int(tmp37) | int(tmp38));		HX_STACK_VAR(tmp39,"tmp39");
									HX_STACK_LINE(669)
									pixel = tmp39;
								}
								;break;
								case (int)1: {
									HX_STACK_LINE(669)
									int tmp22 = ::__hxcpp_memory_get_byte(data->buffer->b,(data->byteOffset + ((position + (int)1))));		HX_STACK_VAR(tmp22,"tmp22");
									HX_STACK_LINE(669)
									Dynamic tmp23 = (int(tmp22) & int((int)255));		HX_STACK_VAR(tmp23,"tmp23");
									HX_STACK_LINE(669)
									int r = tmp23;		HX_STACK_VAR(r,"r");
									HX_STACK_LINE(669)
									int tmp24 = ::__hxcpp_memory_get_byte(data->buffer->b,(data->byteOffset + ((position + (int)2))));		HX_STACK_VAR(tmp24,"tmp24");
									HX_STACK_LINE(669)
									Dynamic tmp25 = (int(tmp24) & int((int)255));		HX_STACK_VAR(tmp25,"tmp25");
									HX_STACK_LINE(669)
									int g = tmp25;		HX_STACK_VAR(g,"g");
									HX_STACK_LINE(669)
									int tmp26 = ::__hxcpp_memory_get_byte(data->buffer->b,(data->byteOffset + ((position + (int)3))));		HX_STACK_VAR(tmp26,"tmp26");
									HX_STACK_LINE(669)
									Dynamic tmp27 = (int(tmp26) & int((int)255));		HX_STACK_VAR(tmp27,"tmp27");
									HX_STACK_LINE(669)
									int b = tmp27;		HX_STACK_VAR(b,"b");
									HX_STACK_LINE(669)
									int tmp28 = ::__hxcpp_memory_get_byte(data->buffer->b,(data->byteOffset + position));		HX_STACK_VAR(tmp28,"tmp28");
									HX_STACK_LINE(669)
									Dynamic tmp29 = (int(tmp28) & int((int)255));		HX_STACK_VAR(tmp29,"tmp29");
									HX_STACK_LINE(669)
									int a = tmp29;		HX_STACK_VAR(a,"a");
									HX_STACK_LINE(669)
									int tmp30 = (int(r) & int((int)255));		HX_STACK_VAR(tmp30,"tmp30");
									HX_STACK_LINE(669)
									int tmp31 = (int(tmp30) << int((int)24));		HX_STACK_VAR(tmp31,"tmp31");
									HX_STACK_LINE(669)
									int tmp32 = (int(g) & int((int)255));		HX_STACK_VAR(tmp32,"tmp32");
									HX_STACK_LINE(669)
									int tmp33 = (int(tmp32) << int((int)16));		HX_STACK_VAR(tmp33,"tmp33");
									HX_STACK_LINE(669)
									int tmp34 = (int(tmp31) | int(tmp33));		HX_STACK_VAR(tmp34,"tmp34");
									HX_STACK_LINE(669)
									int tmp35 = (int(b) & int((int)255));		HX_STACK_VAR(tmp35,"tmp35");
									HX_STACK_LINE(669)
									int tmp36 = (int(tmp35) << int((int)8));		HX_STACK_VAR(tmp36,"tmp36");
									HX_STACK_LINE(669)
									int tmp37 = (int(tmp34) | int(tmp36));		HX_STACK_VAR(tmp37,"tmp37");
									HX_STACK_LINE(669)
									int tmp38 = (int(a) & int((int)255));		HX_STACK_VAR(tmp38,"tmp38");
									HX_STACK_LINE(669)
									int tmp39 = (int(tmp37) | int(tmp38));		HX_STACK_VAR(tmp39,"tmp39");
									HX_STACK_LINE(669)
									pixel = tmp39;
								}
								;break;
							}
							HX_STACK_LINE(669)
							bool tmp22 = premultiplied;		HX_STACK_VAR(tmp22,"tmp22");
							HX_STACK_LINE(669)
							if ((tmp22)){
								HX_STACK_LINE(669)
								int tmp23 = (int(pixel) & int((int)255));		HX_STACK_VAR(tmp23,"tmp23");
								HX_STACK_LINE(669)
								bool tmp24 = (tmp23 != (int)0);		HX_STACK_VAR(tmp24,"tmp24");
								HX_STACK_LINE(669)
								bool tmp25;		HX_STACK_VAR(tmp25,"tmp25");
								HX_STACK_LINE(669)
								if ((tmp24)){
									HX_STACK_LINE(669)
									int tmp26 = (int(pixel) & int((int)255));		HX_STACK_VAR(tmp26,"tmp26");
									HX_STACK_LINE(669)
									int tmp27 = tmp26;		HX_STACK_VAR(tmp27,"tmp27");
									HX_STACK_LINE(669)
									tmp25 = (tmp27 != (int)255);
								}
								else{
									HX_STACK_LINE(669)
									tmp25 = false;
								}
								HX_STACK_LINE(669)
								if ((tmp25)){
									HX_STACK_LINE(669)
									int tmp26 = (int(pixel) & int((int)255));		HX_STACK_VAR(tmp26,"tmp26");
									HX_STACK_LINE(669)
									Float tmp27 = (Float(((Float)255.0)) / Float(tmp26));		HX_STACK_VAR(tmp27,"tmp27");
									HX_STACK_LINE(669)
									::lime::math::color::_RGBA::RGBA_Impl__obj::unmult = tmp27;
									HX_STACK_LINE(669)
									{
										HX_STACK_LINE(669)
										Dynamic tmp28;		HX_STACK_VAR(tmp28,"tmp28");
										HX_STACK_LINE(669)
										{
											HX_STACK_LINE(669)
											::lime::utils::ArrayBufferView tmp29 = ::lime::math::color::_RGBA::RGBA_Impl__obj::__clamp;		HX_STACK_VAR(tmp29,"tmp29");
											HX_STACK_LINE(669)
											::lime::utils::ArrayBufferView this1 = tmp29;		HX_STACK_VAR(this1,"this1");
											HX_STACK_LINE(669)
											int tmp30 = (int(pixel) >> int((int)24));		HX_STACK_VAR(tmp30,"tmp30");
											HX_STACK_LINE(669)
											int tmp31 = (int(tmp30) & int((int)255));		HX_STACK_VAR(tmp31,"tmp31");
											HX_STACK_LINE(669)
											Float tmp32 = ::lime::math::color::_RGBA::RGBA_Impl__obj::unmult;		HX_STACK_VAR(tmp32,"tmp32");
											HX_STACK_LINE(669)
											Float tmp33 = (tmp31 * tmp32);		HX_STACK_VAR(tmp33,"tmp33");
											HX_STACK_LINE(669)
											int tmp34 = ::Math_obj::round(tmp33);		HX_STACK_VAR(tmp34,"tmp34");
											HX_STACK_LINE(669)
											int idx = tmp34;		HX_STACK_VAR(idx,"idx");
											HX_STACK_LINE(669)
											int tmp35 = ::__hxcpp_memory_get_byte(this1->buffer->b,(this1->byteOffset + idx));		HX_STACK_VAR(tmp35,"tmp35");
											HX_STACK_LINE(669)
											tmp28 = (int(tmp35) & int((int)255));
										}
										HX_STACK_LINE(669)
										int r = tmp28;		HX_STACK_VAR(r,"r");
										HX_STACK_LINE(669)
										Dynamic tmp29;		HX_STACK_VAR(tmp29,"tmp29");
										HX_STACK_LINE(669)
										{
											HX_STACK_LINE(669)
											::lime::utils::ArrayBufferView tmp30 = ::lime::math::color::_RGBA::RGBA_Impl__obj::__clamp;		HX_STACK_VAR(tmp30,"tmp30");
											HX_STACK_LINE(669)
											::lime::utils::ArrayBufferView this1 = tmp30;		HX_STACK_VAR(this1,"this1");
											HX_STACK_LINE(669)
											int tmp31 = (int(pixel) >> int((int)16));		HX_STACK_VAR(tmp31,"tmp31");
											HX_STACK_LINE(669)
											int tmp32 = (int(tmp31) & int((int)255));		HX_STACK_VAR(tmp32,"tmp32");
											HX_STACK_LINE(669)
											Float tmp33 = ::lime::math::color::_RGBA::RGBA_Impl__obj::unmult;		HX_STACK_VAR(tmp33,"tmp33");
											HX_STACK_LINE(669)
											Float tmp34 = (tmp32 * tmp33);		HX_STACK_VAR(tmp34,"tmp34");
											HX_STACK_LINE(669)
											int tmp35 = ::Math_obj::round(tmp34);		HX_STACK_VAR(tmp35,"tmp35");
											HX_STACK_LINE(669)
											int idx = tmp35;		HX_STACK_VAR(idx,"idx");
											HX_STACK_LINE(669)
											int tmp36 = ::__hxcpp_memory_get_byte(this1->buffer->b,(this1->byteOffset + idx));		HX_STACK_VAR(tmp36,"tmp36");
											HX_STACK_LINE(669)
											tmp29 = (int(tmp36) & int((int)255));
										}
										HX_STACK_LINE(669)
										int g = tmp29;		HX_STACK_VAR(g,"g");
										HX_STACK_LINE(669)
										Dynamic tmp30;		HX_STACK_VAR(tmp30,"tmp30");
										HX_STACK_LINE(669)
										{
											HX_STACK_LINE(669)
											::lime::utils::ArrayBufferView tmp31 = ::lime::math::color::_RGBA::RGBA_Impl__obj::__clamp;		HX_STACK_VAR(tmp31,"tmp31");
											HX_STACK_LINE(669)
											::lime::utils::ArrayBufferView this1 = tmp31;		HX_STACK_VAR(this1,"this1");
											HX_STACK_LINE(669)
											int tmp32 = (int(pixel) >> int((int)8));		HX_STACK_VAR(tmp32,"tmp32");
											HX_STACK_LINE(669)
											int tmp33 = (int(tmp32) & int((int)255));		HX_STACK_VAR(tmp33,"tmp33");
											HX_STACK_LINE(669)
											Float tmp34 = ::lime::math::color::_RGBA::RGBA_Impl__obj::unmult;		HX_STACK_VAR(tmp34,"tmp34");
											HX_STACK_LINE(669)
											Float tmp35 = (tmp33 * tmp34);		HX_STACK_VAR(tmp35,"tmp35");
											HX_STACK_LINE(669)
											int tmp36 = ::Math_obj::round(tmp35);		HX_STACK_VAR(tmp36,"tmp36");
											HX_STACK_LINE(669)
											int idx = tmp36;		HX_STACK_VAR(idx,"idx");
											HX_STACK_LINE(669)
											int tmp37 = ::__hxcpp_memory_get_byte(this1->buffer->b,(this1->byteOffset + idx));		HX_STACK_VAR(tmp37,"tmp37");
											HX_STACK_LINE(669)
											tmp30 = (int(tmp37) & int((int)255));
										}
										HX_STACK_LINE(669)
										int b = tmp30;		HX_STACK_VAR(b,"b");
										HX_STACK_LINE(669)
										int tmp31 = (int(r) & int((int)255));		HX_STACK_VAR(tmp31,"tmp31");
										HX_STACK_LINE(669)
										int tmp32 = (int(tmp31) << int((int)24));		HX_STACK_VAR(tmp32,"tmp32");
										HX_STACK_LINE(669)
										int tmp33 = (int(g) & int((int)255));		HX_STACK_VAR(tmp33,"tmp33");
										HX_STACK_LINE(669)
										int tmp34 = (int(tmp33) << int((int)16));		HX_STACK_VAR(tmp34,"tmp34");
										HX_STACK_LINE(669)
										int tmp35 = (int(tmp32) | int(tmp34));		HX_STACK_VAR(tmp35,"tmp35");
										HX_STACK_LINE(669)
										int tmp36 = (int(b) & int((int)255));		HX_STACK_VAR(tmp36,"tmp36");
										HX_STACK_LINE(669)
										int tmp37 = (int(tmp36) << int((int)8));		HX_STACK_VAR(tmp37,"tmp37");
										HX_STACK_LINE(669)
										int tmp38 = (int(tmp35) | int(tmp37));		HX_STACK_VAR(tmp38,"tmp38");
										HX_STACK_LINE(669)
										int tmp39 = (int(pixel) & int((int)255));		HX_STACK_VAR(tmp39,"tmp39");
										HX_STACK_LINE(669)
										int tmp40 = (int(tmp39) & int((int)255));		HX_STACK_VAR(tmp40,"tmp40");
										HX_STACK_LINE(669)
										int tmp41 = (int(tmp38) | int(tmp40));		HX_STACK_VAR(tmp41,"tmp41");
										HX_STACK_LINE(669)
										pixel = tmp41;
									}
								}
							}
						}
						HX_STACK_LINE(671)
						int tmp21 = format;		HX_STACK_VAR(tmp21,"tmp21");
						HX_STACK_LINE(671)
						switch( (int)(tmp21)){
							case (int)1: {
								HX_STACK_LINE(673)
								int tmp22;		HX_STACK_VAR(tmp22,"tmp22");
								HX_STACK_LINE(673)
								{
									HX_STACK_LINE(673)
									int tmp23;		HX_STACK_VAR(tmp23,"tmp23");
									HX_STACK_LINE(673)
									{
										HX_STACK_LINE(673)
										int argb1 = (int)0;		HX_STACK_VAR(argb1,"argb1");
										HX_STACK_LINE(673)
										tmp23 = argb1;
									}
									HX_STACK_LINE(673)
									int argb1 = tmp23;		HX_STACK_VAR(argb1,"argb1");
									HX_STACK_LINE(673)
									{
										HX_STACK_LINE(673)
										int tmp24 = (int(pixel) & int((int)255));		HX_STACK_VAR(tmp24,"tmp24");
										HX_STACK_LINE(673)
										int tmp25 = (int(tmp24) & int((int)255));		HX_STACK_VAR(tmp25,"tmp25");
										HX_STACK_LINE(673)
										int tmp26 = (int(tmp25) << int((int)24));		HX_STACK_VAR(tmp26,"tmp26");
										HX_STACK_LINE(673)
										int tmp27 = (int(pixel) >> int((int)24));		HX_STACK_VAR(tmp27,"tmp27");
										HX_STACK_LINE(673)
										int tmp28 = (int(tmp27) & int((int)255));		HX_STACK_VAR(tmp28,"tmp28");
										HX_STACK_LINE(673)
										int tmp29 = (int(tmp28) & int((int)255));		HX_STACK_VAR(tmp29,"tmp29");
										HX_STACK_LINE(673)
										int tmp30 = (int(tmp29) << int((int)16));		HX_STACK_VAR(tmp30,"tmp30");
										HX_STACK_LINE(673)
										int tmp31 = (int(tmp26) | int(tmp30));		HX_STACK_VAR(tmp31,"tmp31");
										HX_STACK_LINE(673)
										int tmp32 = (int(pixel) >> int((int)16));		HX_STACK_VAR(tmp32,"tmp32");
										HX_STACK_LINE(673)
										int tmp33 = (int(tmp32) & int((int)255));		HX_STACK_VAR(tmp33,"tmp33");
										HX_STACK_LINE(673)
										int tmp34 = (int(tmp33) & int((int)255));		HX_STACK_VAR(tmp34,"tmp34");
										HX_STACK_LINE(673)
										int tmp35 = (int(tmp34) << int((int)8));		HX_STACK_VAR(tmp35,"tmp35");
										HX_STACK_LINE(673)
										int tmp36 = (int(tmp31) | int(tmp35));		HX_STACK_VAR(tmp36,"tmp36");
										HX_STACK_LINE(673)
										int tmp37 = (int(pixel) >> int((int)8));		HX_STACK_VAR(tmp37,"tmp37");
										HX_STACK_LINE(673)
										int tmp38 = (int(tmp37) & int((int)255));		HX_STACK_VAR(tmp38,"tmp38");
										HX_STACK_LINE(673)
										int tmp39 = (int(tmp38) & int((int)255));		HX_STACK_VAR(tmp39,"tmp39");
										HX_STACK_LINE(673)
										int tmp40 = (int(tmp36) | int(tmp39));		HX_STACK_VAR(tmp40,"tmp40");
										HX_STACK_LINE(673)
										argb1 = tmp40;
									}
									HX_STACK_LINE(673)
									tmp22 = argb1;
								}
								HX_STACK_LINE(673)
								argb = tmp22;
								HX_STACK_LINE(673)
								pixel = argb;
							}
							;break;
							case (int)2: {
								HX_STACK_LINE(674)
								int tmp22;		HX_STACK_VAR(tmp22,"tmp22");
								HX_STACK_LINE(674)
								{
									HX_STACK_LINE(674)
									int tmp23;		HX_STACK_VAR(tmp23,"tmp23");
									HX_STACK_LINE(674)
									{
										HX_STACK_LINE(674)
										int bgra1 = (int)0;		HX_STACK_VAR(bgra1,"bgra1");
										HX_STACK_LINE(674)
										tmp23 = bgra1;
									}
									HX_STACK_LINE(674)
									int bgra1 = tmp23;		HX_STACK_VAR(bgra1,"bgra1");
									HX_STACK_LINE(674)
									{
										HX_STACK_LINE(674)
										int tmp24 = (int(pixel) >> int((int)8));		HX_STACK_VAR(tmp24,"tmp24");
										HX_STACK_LINE(674)
										int tmp25 = (int(tmp24) & int((int)255));		HX_STACK_VAR(tmp25,"tmp25");
										HX_STACK_LINE(674)
										int tmp26 = (int(tmp25) & int((int)255));		HX_STACK_VAR(tmp26,"tmp26");
										HX_STACK_LINE(674)
										int tmp27 = (int(tmp26) << int((int)24));		HX_STACK_VAR(tmp27,"tmp27");
										HX_STACK_LINE(674)
										int tmp28 = (int(pixel) >> int((int)16));		HX_STACK_VAR(tmp28,"tmp28");
										HX_STACK_LINE(674)
										int tmp29 = (int(tmp28) & int((int)255));		HX_STACK_VAR(tmp29,"tmp29");
										HX_STACK_LINE(674)
										int tmp30 = (int(tmp29) & int((int)255));		HX_STACK_VAR(tmp30,"tmp30");
										HX_STACK_LINE(674)
										int tmp31 = (int(tmp30) << int((int)16));		HX_STACK_VAR(tmp31,"tmp31");
										HX_STACK_LINE(674)
										int tmp32 = (int(tmp27) | int(tmp31));		HX_STACK_VAR(tmp32,"tmp32");
										HX_STACK_LINE(674)
										int tmp33 = (int(pixel) >> int((int)24));		HX_STACK_VAR(tmp33,"tmp33");
										HX_STACK_LINE(674)
										int tmp34 = (int(tmp33) & int((int)255));		HX_STACK_VAR(tmp34,"tmp34");
										HX_STACK_LINE(674)
										int tmp35 = (int(tmp34) & int((int)255));		HX_STACK_VAR(tmp35,"tmp35");
										HX_STACK_LINE(674)
										int tmp36 = (int(tmp35) << int((int)8));		HX_STACK_VAR(tmp36,"tmp36");
										HX_STACK_LINE(674)
										int tmp37 = (int(tmp32) | int(tmp36));		HX_STACK_VAR(tmp37,"tmp37");
										HX_STACK_LINE(674)
										int tmp38 = (int(pixel) & int((int)255));		HX_STACK_VAR(tmp38,"tmp38");
										HX_STACK_LINE(674)
										int tmp39 = (int(tmp38) & int((int)255));		HX_STACK_VAR(tmp39,"tmp39");
										HX_STACK_LINE(674)
										int tmp40 = (int(tmp37) | int(tmp39));		HX_STACK_VAR(tmp40,"tmp40");
										HX_STACK_LINE(674)
										bgra1 = tmp40;
									}
									HX_STACK_LINE(674)
									tmp22 = bgra1;
								}
								HX_STACK_LINE(674)
								bgra = tmp22;
								HX_STACK_LINE(674)
								pixel = bgra;
							}
							;break;
							default: {
							}
						}
						HX_STACK_LINE(685)
						{
							HX_STACK_LINE(685)
							int tmp22 = (destPosition)++;		HX_STACK_VAR(tmp22,"tmp22");
							HX_STACK_LINE(685)
							int pos = tmp22;		HX_STACK_VAR(pos,"pos");
							HX_STACK_LINE(685)
							int tmp23 = (int(pixel) >> int((int)24));		HX_STACK_VAR(tmp23,"tmp23");
							HX_STACK_LINE(685)
							int tmp24 = (int(tmp23) & int((int)255));		HX_STACK_VAR(tmp24,"tmp24");
							HX_STACK_LINE(685)
							byteArray->b[pos] = tmp24;
						}
						HX_STACK_LINE(686)
						{
							HX_STACK_LINE(686)
							int tmp22 = (destPosition)++;		HX_STACK_VAR(tmp22,"tmp22");
							HX_STACK_LINE(686)
							int pos = tmp22;		HX_STACK_VAR(pos,"pos");
							HX_STACK_LINE(686)
							int tmp23 = (int(pixel) >> int((int)16));		HX_STACK_VAR(tmp23,"tmp23");
							HX_STACK_LINE(686)
							int tmp24 = (int(tmp23) & int((int)255));		HX_STACK_VAR(tmp24,"tmp24");
							HX_STACK_LINE(686)
							byteArray->b[pos] = tmp24;
						}
						HX_STACK_LINE(687)
						{
							HX_STACK_LINE(687)
							int tmp22 = (destPosition)++;		HX_STACK_VAR(tmp22,"tmp22");
							HX_STACK_LINE(687)
							int pos = tmp22;		HX_STACK_VAR(pos,"pos");
							HX_STACK_LINE(687)
							int tmp23 = (int(pixel) >> int((int)8));		HX_STACK_VAR(tmp23,"tmp23");
							HX_STACK_LINE(687)
							int tmp24 = (int(tmp23) & int((int)255));		HX_STACK_VAR(tmp24,"tmp24");
							HX_STACK_LINE(687)
							byteArray->b[pos] = tmp24;
						}
						HX_STACK_LINE(688)
						{
							HX_STACK_LINE(688)
							int tmp22 = (destPosition)++;		HX_STACK_VAR(tmp22,"tmp22");
							HX_STACK_LINE(688)
							int pos = tmp22;		HX_STACK_VAR(pos,"pos");
							HX_STACK_LINE(688)
							int tmp23 = (int(pixel) & int((int)255));		HX_STACK_VAR(tmp23,"tmp23");
							HX_STACK_LINE(688)
							byteArray->b[pos] = tmp23;
						}
						HX_STACK_LINE(691)
						hx::AddEq(position,(int)4);
					}
				}
			}
		}
	}
	HX_STACK_LINE(699)
	byteArray->position = (int)0;
	HX_STACK_LINE(700)
	::lime::utils::ByteArray tmp8 = byteArray;		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(700)
	return tmp8;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(ImageDataUtil_obj,getPixels,return )

Void ImageDataUtil_obj::merge( ::lime::graphics::Image image,::lime::graphics::Image sourceImage,::lime::math::Rectangle sourceRect,::lime::math::Vector2 destPoint,int redMultiplier,int greenMultiplier,int blueMultiplier,int alphaMultiplier){
{
		HX_STACK_FRAME("lime.graphics.utils.ImageDataUtil","merge",0xf0318e4a,"lime.graphics.utils.ImageDataUtil.merge","lime/graphics/utils/ImageDataUtil.hx",705,0x494d921f)
		HX_STACK_ARG(image,"image")
		HX_STACK_ARG(sourceImage,"sourceImage")
		HX_STACK_ARG(sourceRect,"sourceRect")
		HX_STACK_ARG(destPoint,"destPoint")
		HX_STACK_ARG(redMultiplier,"redMultiplier")
		HX_STACK_ARG(greenMultiplier,"greenMultiplier")
		HX_STACK_ARG(blueMultiplier,"blueMultiplier")
		HX_STACK_ARG(alphaMultiplier,"alphaMultiplier")
		HX_STACK_LINE(707)
		::lime::utils::ArrayBufferView tmp = image->buffer->data;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(707)
		bool tmp1 = (tmp == null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(707)
		bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(707)
		bool tmp3;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(707)
		if ((tmp2)){
			HX_STACK_LINE(707)
			::lime::utils::ArrayBufferView tmp4 = sourceImage->buffer->data;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(707)
			::lime::utils::ArrayBufferView tmp5 = tmp4;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(707)
			tmp3 = (tmp5 == null());
		}
		else{
			HX_STACK_LINE(707)
			tmp3 = true;
		}
		HX_STACK_LINE(707)
		if ((tmp3)){
			HX_STACK_LINE(707)
			return null();
		}
		HX_STACK_LINE(710)
		bool tmp4 = ::lime::_system::System_obj::disableCFFI;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(710)
		bool tmp5 = !(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(710)
		if ((tmp5)){
			HX_STACK_LINE(710)
			::lime::graphics::Image tmp6 = image;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(710)
			::lime::graphics::Image tmp7 = sourceImage;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(710)
			::lime::math::Rectangle tmp8 = sourceRect;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(710)
			::lime::math::Vector2 tmp9 = destPoint;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(710)
			int tmp10 = redMultiplier;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(710)
			int tmp11 = greenMultiplier;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(710)
			int tmp12 = blueMultiplier;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(710)
			int tmp13 = alphaMultiplier;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(710)
			::lime::graphics::utils::ImageDataUtil_obj::lime_image_data_util_merge(tmp6,tmp7,tmp8,tmp9,tmp10,tmp11,tmp12,tmp13);
		}
		else{
			HX_STACK_LINE(714)
			::lime::graphics::utils::_ImageDataUtil::ImageDataView tmp6 = ::lime::graphics::utils::_ImageDataUtil::ImageDataView_obj::__new(sourceImage,sourceRect);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(714)
			::lime::graphics::utils::_ImageDataUtil::ImageDataView sourceView = tmp6;		HX_STACK_VAR(sourceView,"sourceView");
			HX_STACK_LINE(715)
			::lime::graphics::Image tmp7 = image;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(715)
			::lime::math::Rectangle tmp8 = ::lime::math::Rectangle_obj::__new(destPoint->x,destPoint->y,sourceView->width,sourceView->height);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(715)
			::lime::graphics::utils::_ImageDataUtil::ImageDataView tmp9 = ::lime::graphics::utils::_ImageDataUtil::ImageDataView_obj::__new(tmp7,tmp8);		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(715)
			::lime::graphics::utils::_ImageDataUtil::ImageDataView destView = tmp9;		HX_STACK_VAR(destView,"destView");
			HX_STACK_LINE(717)
			::lime::utils::ArrayBufferView tmp10 = sourceImage->buffer->data;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(717)
			::lime::utils::ArrayBufferView sourceData = tmp10;		HX_STACK_VAR(sourceData,"sourceData");
			HX_STACK_LINE(718)
			::lime::utils::ArrayBufferView tmp11 = image->buffer->data;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(718)
			::lime::utils::ArrayBufferView destData = tmp11;		HX_STACK_VAR(destData,"destData");
			HX_STACK_LINE(719)
			int tmp12 = sourceImage->buffer->format;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(719)
			int sourceFormat = tmp12;		HX_STACK_VAR(sourceFormat,"sourceFormat");
			HX_STACK_LINE(720)
			int tmp13 = image->buffer->format;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(720)
			int destFormat = tmp13;		HX_STACK_VAR(destFormat,"destFormat");
			HX_STACK_LINE(721)
			bool tmp14 = sourceImage->buffer->premultiplied;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(721)
			bool sourcePremultiplied = tmp14;		HX_STACK_VAR(sourcePremultiplied,"sourcePremultiplied");
			HX_STACK_LINE(722)
			bool tmp15 = image->buffer->premultiplied;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(722)
			bool destPremultiplied = tmp15;		HX_STACK_VAR(destPremultiplied,"destPremultiplied");
			HX_STACK_LINE(724)
			int sourcePosition;		HX_STACK_VAR(sourcePosition,"sourcePosition");
			HX_STACK_LINE(724)
			int destPosition;		HX_STACK_VAR(destPosition,"destPosition");
			HX_STACK_LINE(724)
			int sourcePixel;		HX_STACK_VAR(sourcePixel,"sourcePixel");
			HX_STACK_LINE(724)
			int destPixel;		HX_STACK_VAR(destPixel,"destPixel");
			HX_STACK_LINE(726)
			{
				HX_STACK_LINE(726)
				int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(726)
				int _g = destView->height;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(726)
				while((true)){
					HX_STACK_LINE(726)
					bool tmp16 = (_g1 < _g);		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(726)
					bool tmp17 = !(tmp16);		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(726)
					if ((tmp17)){
						HX_STACK_LINE(726)
						break;
					}
					HX_STACK_LINE(726)
					int tmp18 = (_g1)++;		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(726)
					int y = tmp18;		HX_STACK_VAR(y,"y");
					HX_STACK_LINE(728)
					int tmp19 = sourceView->offset;		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(728)
					int tmp20 = (sourceView->stride * y);		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(728)
					int tmp21 = (tmp19 + tmp20);		HX_STACK_VAR(tmp21,"tmp21");
					HX_STACK_LINE(728)
					sourcePosition = tmp21;
					HX_STACK_LINE(729)
					int tmp22 = destView->offset;		HX_STACK_VAR(tmp22,"tmp22");
					HX_STACK_LINE(729)
					int tmp23 = (destView->stride * y);		HX_STACK_VAR(tmp23,"tmp23");
					HX_STACK_LINE(729)
					int tmp24 = (tmp22 + tmp23);		HX_STACK_VAR(tmp24,"tmp24");
					HX_STACK_LINE(729)
					destPosition = tmp24;
					HX_STACK_LINE(731)
					{
						HX_STACK_LINE(731)
						int _g3 = (int)0;		HX_STACK_VAR(_g3,"_g3");
						HX_STACK_LINE(731)
						int _g2 = destView->width;		HX_STACK_VAR(_g2,"_g2");
						HX_STACK_LINE(731)
						while((true)){
							HX_STACK_LINE(731)
							bool tmp25 = (_g3 < _g2);		HX_STACK_VAR(tmp25,"tmp25");
							HX_STACK_LINE(731)
							bool tmp26 = !(tmp25);		HX_STACK_VAR(tmp26,"tmp26");
							HX_STACK_LINE(731)
							if ((tmp26)){
								HX_STACK_LINE(731)
								break;
							}
							HX_STACK_LINE(731)
							int tmp27 = (_g3)++;		HX_STACK_VAR(tmp27,"tmp27");
							HX_STACK_LINE(731)
							int x = tmp27;		HX_STACK_VAR(x,"x");
							HX_STACK_LINE(733)
							{
								HX_STACK_LINE(733)
								int tmp28 = sourceFormat;		HX_STACK_VAR(tmp28,"tmp28");
								HX_STACK_LINE(733)
								switch( (int)(tmp28)){
									case (int)2: {
										HX_STACK_LINE(733)
										int tmp29 = ::__hxcpp_memory_get_byte(sourceData->buffer->b,(sourceData->byteOffset + ((sourcePosition + (int)2))));		HX_STACK_VAR(tmp29,"tmp29");
										HX_STACK_LINE(733)
										Dynamic tmp30 = (int(tmp29) & int((int)255));		HX_STACK_VAR(tmp30,"tmp30");
										HX_STACK_LINE(733)
										int r = tmp30;		HX_STACK_VAR(r,"r");
										HX_STACK_LINE(733)
										int tmp31 = ::__hxcpp_memory_get_byte(sourceData->buffer->b,(sourceData->byteOffset + ((sourcePosition + (int)1))));		HX_STACK_VAR(tmp31,"tmp31");
										HX_STACK_LINE(733)
										Dynamic tmp32 = (int(tmp31) & int((int)255));		HX_STACK_VAR(tmp32,"tmp32");
										HX_STACK_LINE(733)
										int g = tmp32;		HX_STACK_VAR(g,"g");
										HX_STACK_LINE(733)
										int tmp33 = ::__hxcpp_memory_get_byte(sourceData->buffer->b,(sourceData->byteOffset + sourcePosition));		HX_STACK_VAR(tmp33,"tmp33");
										HX_STACK_LINE(733)
										Dynamic tmp34 = (int(tmp33) & int((int)255));		HX_STACK_VAR(tmp34,"tmp34");
										HX_STACK_LINE(733)
										int b = tmp34;		HX_STACK_VAR(b,"b");
										HX_STACK_LINE(733)
										int tmp35 = ::__hxcpp_memory_get_byte(sourceData->buffer->b,(sourceData->byteOffset + ((sourcePosition + (int)3))));		HX_STACK_VAR(tmp35,"tmp35");
										HX_STACK_LINE(733)
										Dynamic tmp36 = (int(tmp35) & int((int)255));		HX_STACK_VAR(tmp36,"tmp36");
										HX_STACK_LINE(733)
										int a = tmp36;		HX_STACK_VAR(a,"a");
										HX_STACK_LINE(733)
										int tmp37 = (int(r) & int((int)255));		HX_STACK_VAR(tmp37,"tmp37");
										HX_STACK_LINE(733)
										int tmp38 = (int(tmp37) << int((int)24));		HX_STACK_VAR(tmp38,"tmp38");
										HX_STACK_LINE(733)
										int tmp39 = (int(g) & int((int)255));		HX_STACK_VAR(tmp39,"tmp39");
										HX_STACK_LINE(733)
										int tmp40 = (int(tmp39) << int((int)16));		HX_STACK_VAR(tmp40,"tmp40");
										HX_STACK_LINE(733)
										int tmp41 = (int(tmp38) | int(tmp40));		HX_STACK_VAR(tmp41,"tmp41");
										HX_STACK_LINE(733)
										int tmp42 = (int(b) & int((int)255));		HX_STACK_VAR(tmp42,"tmp42");
										HX_STACK_LINE(733)
										int tmp43 = (int(tmp42) << int((int)8));		HX_STACK_VAR(tmp43,"tmp43");
										HX_STACK_LINE(733)
										int tmp44 = (int(tmp41) | int(tmp43));		HX_STACK_VAR(tmp44,"tmp44");
										HX_STACK_LINE(733)
										int tmp45 = (int(a) & int((int)255));		HX_STACK_VAR(tmp45,"tmp45");
										HX_STACK_LINE(733)
										int tmp46 = (int(tmp44) | int(tmp45));		HX_STACK_VAR(tmp46,"tmp46");
										HX_STACK_LINE(733)
										sourcePixel = tmp46;
									}
									;break;
									case (int)0: {
										HX_STACK_LINE(733)
										int tmp29 = ::__hxcpp_memory_get_byte(sourceData->buffer->b,(sourceData->byteOffset + sourcePosition));		HX_STACK_VAR(tmp29,"tmp29");
										HX_STACK_LINE(733)
										Dynamic tmp30 = (int(tmp29) & int((int)255));		HX_STACK_VAR(tmp30,"tmp30");
										HX_STACK_LINE(733)
										int r = tmp30;		HX_STACK_VAR(r,"r");
										HX_STACK_LINE(733)
										int tmp31 = ::__hxcpp_memory_get_byte(sourceData->buffer->b,(sourceData->byteOffset + ((sourcePosition + (int)1))));		HX_STACK_VAR(tmp31,"tmp31");
										HX_STACK_LINE(733)
										Dynamic tmp32 = (int(tmp31) & int((int)255));		HX_STACK_VAR(tmp32,"tmp32");
										HX_STACK_LINE(733)
										int g = tmp32;		HX_STACK_VAR(g,"g");
										HX_STACK_LINE(733)
										int tmp33 = ::__hxcpp_memory_get_byte(sourceData->buffer->b,(sourceData->byteOffset + ((sourcePosition + (int)2))));		HX_STACK_VAR(tmp33,"tmp33");
										HX_STACK_LINE(733)
										Dynamic tmp34 = (int(tmp33) & int((int)255));		HX_STACK_VAR(tmp34,"tmp34");
										HX_STACK_LINE(733)
										int b = tmp34;		HX_STACK_VAR(b,"b");
										HX_STACK_LINE(733)
										int tmp35 = ::__hxcpp_memory_get_byte(sourceData->buffer->b,(sourceData->byteOffset + ((sourcePosition + (int)3))));		HX_STACK_VAR(tmp35,"tmp35");
										HX_STACK_LINE(733)
										Dynamic tmp36 = (int(tmp35) & int((int)255));		HX_STACK_VAR(tmp36,"tmp36");
										HX_STACK_LINE(733)
										int a = tmp36;		HX_STACK_VAR(a,"a");
										HX_STACK_LINE(733)
										int tmp37 = (int(r) & int((int)255));		HX_STACK_VAR(tmp37,"tmp37");
										HX_STACK_LINE(733)
										int tmp38 = (int(tmp37) << int((int)24));		HX_STACK_VAR(tmp38,"tmp38");
										HX_STACK_LINE(733)
										int tmp39 = (int(g) & int((int)255));		HX_STACK_VAR(tmp39,"tmp39");
										HX_STACK_LINE(733)
										int tmp40 = (int(tmp39) << int((int)16));		HX_STACK_VAR(tmp40,"tmp40");
										HX_STACK_LINE(733)
										int tmp41 = (int(tmp38) | int(tmp40));		HX_STACK_VAR(tmp41,"tmp41");
										HX_STACK_LINE(733)
										int tmp42 = (int(b) & int((int)255));		HX_STACK_VAR(tmp42,"tmp42");
										HX_STACK_LINE(733)
										int tmp43 = (int(tmp42) << int((int)8));		HX_STACK_VAR(tmp43,"tmp43");
										HX_STACK_LINE(733)
										int tmp44 = (int(tmp41) | int(tmp43));		HX_STACK_VAR(tmp44,"tmp44");
										HX_STACK_LINE(733)
										int tmp45 = (int(a) & int((int)255));		HX_STACK_VAR(tmp45,"tmp45");
										HX_STACK_LINE(733)
										int tmp46 = (int(tmp44) | int(tmp45));		HX_STACK_VAR(tmp46,"tmp46");
										HX_STACK_LINE(733)
										sourcePixel = tmp46;
									}
									;break;
									case (int)1: {
										HX_STACK_LINE(733)
										int tmp29 = ::__hxcpp_memory_get_byte(sourceData->buffer->b,(sourceData->byteOffset + ((sourcePosition + (int)1))));		HX_STACK_VAR(tmp29,"tmp29");
										HX_STACK_LINE(733)
										Dynamic tmp30 = (int(tmp29) & int((int)255));		HX_STACK_VAR(tmp30,"tmp30");
										HX_STACK_LINE(733)
										int r = tmp30;		HX_STACK_VAR(r,"r");
										HX_STACK_LINE(733)
										int tmp31 = ::__hxcpp_memory_get_byte(sourceData->buffer->b,(sourceData->byteOffset + ((sourcePosition + (int)2))));		HX_STACK_VAR(tmp31,"tmp31");
										HX_STACK_LINE(733)
										Dynamic tmp32 = (int(tmp31) & int((int)255));		HX_STACK_VAR(tmp32,"tmp32");
										HX_STACK_LINE(733)
										int g = tmp32;		HX_STACK_VAR(g,"g");
										HX_STACK_LINE(733)
										int tmp33 = ::__hxcpp_memory_get_byte(sourceData->buffer->b,(sourceData->byteOffset + ((sourcePosition + (int)3))));		HX_STACK_VAR(tmp33,"tmp33");
										HX_STACK_LINE(733)
										Dynamic tmp34 = (int(tmp33) & int((int)255));		HX_STACK_VAR(tmp34,"tmp34");
										HX_STACK_LINE(733)
										int b = tmp34;		HX_STACK_VAR(b,"b");
										HX_STACK_LINE(733)
										int tmp35 = ::__hxcpp_memory_get_byte(sourceData->buffer->b,(sourceData->byteOffset + sourcePosition));		HX_STACK_VAR(tmp35,"tmp35");
										HX_STACK_LINE(733)
										Dynamic tmp36 = (int(tmp35) & int((int)255));		HX_STACK_VAR(tmp36,"tmp36");
										HX_STACK_LINE(733)
										int a = tmp36;		HX_STACK_VAR(a,"a");
										HX_STACK_LINE(733)
										int tmp37 = (int(r) & int((int)255));		HX_STACK_VAR(tmp37,"tmp37");
										HX_STACK_LINE(733)
										int tmp38 = (int(tmp37) << int((int)24));		HX_STACK_VAR(tmp38,"tmp38");
										HX_STACK_LINE(733)
										int tmp39 = (int(g) & int((int)255));		HX_STACK_VAR(tmp39,"tmp39");
										HX_STACK_LINE(733)
										int tmp40 = (int(tmp39) << int((int)16));		HX_STACK_VAR(tmp40,"tmp40");
										HX_STACK_LINE(733)
										int tmp41 = (int(tmp38) | int(tmp40));		HX_STACK_VAR(tmp41,"tmp41");
										HX_STACK_LINE(733)
										int tmp42 = (int(b) & int((int)255));		HX_STACK_VAR(tmp42,"tmp42");
										HX_STACK_LINE(733)
										int tmp43 = (int(tmp42) << int((int)8));		HX_STACK_VAR(tmp43,"tmp43");
										HX_STACK_LINE(733)
										int tmp44 = (int(tmp41) | int(tmp43));		HX_STACK_VAR(tmp44,"tmp44");
										HX_STACK_LINE(733)
										int tmp45 = (int(a) & int((int)255));		HX_STACK_VAR(tmp45,"tmp45");
										HX_STACK_LINE(733)
										int tmp46 = (int(tmp44) | int(tmp45));		HX_STACK_VAR(tmp46,"tmp46");
										HX_STACK_LINE(733)
										sourcePixel = tmp46;
									}
									;break;
								}
								HX_STACK_LINE(733)
								bool tmp29 = sourcePremultiplied;		HX_STACK_VAR(tmp29,"tmp29");
								HX_STACK_LINE(733)
								if ((tmp29)){
									HX_STACK_LINE(733)
									int tmp30 = (int(sourcePixel) & int((int)255));		HX_STACK_VAR(tmp30,"tmp30");
									HX_STACK_LINE(733)
									bool tmp31 = (tmp30 != (int)0);		HX_STACK_VAR(tmp31,"tmp31");
									HX_STACK_LINE(733)
									bool tmp32;		HX_STACK_VAR(tmp32,"tmp32");
									HX_STACK_LINE(733)
									if ((tmp31)){
										HX_STACK_LINE(733)
										int tmp33 = (int(sourcePixel) & int((int)255));		HX_STACK_VAR(tmp33,"tmp33");
										HX_STACK_LINE(733)
										int tmp34 = tmp33;		HX_STACK_VAR(tmp34,"tmp34");
										HX_STACK_LINE(733)
										tmp32 = (tmp34 != (int)255);
									}
									else{
										HX_STACK_LINE(733)
										tmp32 = false;
									}
									HX_STACK_LINE(733)
									if ((tmp32)){
										HX_STACK_LINE(733)
										int tmp33 = (int(sourcePixel) & int((int)255));		HX_STACK_VAR(tmp33,"tmp33");
										HX_STACK_LINE(733)
										Float tmp34 = (Float(((Float)255.0)) / Float(tmp33));		HX_STACK_VAR(tmp34,"tmp34");
										HX_STACK_LINE(733)
										::lime::math::color::_RGBA::RGBA_Impl__obj::unmult = tmp34;
										HX_STACK_LINE(733)
										{
											HX_STACK_LINE(733)
											Dynamic tmp35;		HX_STACK_VAR(tmp35,"tmp35");
											HX_STACK_LINE(733)
											{
												HX_STACK_LINE(733)
												::lime::utils::ArrayBufferView tmp36 = ::lime::math::color::_RGBA::RGBA_Impl__obj::__clamp;		HX_STACK_VAR(tmp36,"tmp36");
												HX_STACK_LINE(733)
												::lime::utils::ArrayBufferView this1 = tmp36;		HX_STACK_VAR(this1,"this1");
												HX_STACK_LINE(733)
												int tmp37 = (int(sourcePixel) >> int((int)24));		HX_STACK_VAR(tmp37,"tmp37");
												HX_STACK_LINE(733)
												int tmp38 = (int(tmp37) & int((int)255));		HX_STACK_VAR(tmp38,"tmp38");
												HX_STACK_LINE(733)
												Float tmp39 = ::lime::math::color::_RGBA::RGBA_Impl__obj::unmult;		HX_STACK_VAR(tmp39,"tmp39");
												HX_STACK_LINE(733)
												Float tmp40 = (tmp38 * tmp39);		HX_STACK_VAR(tmp40,"tmp40");
												HX_STACK_LINE(733)
												int tmp41 = ::Math_obj::round(tmp40);		HX_STACK_VAR(tmp41,"tmp41");
												HX_STACK_LINE(733)
												int idx = tmp41;		HX_STACK_VAR(idx,"idx");
												HX_STACK_LINE(733)
												int tmp42 = ::__hxcpp_memory_get_byte(this1->buffer->b,(this1->byteOffset + idx));		HX_STACK_VAR(tmp42,"tmp42");
												HX_STACK_LINE(733)
												tmp35 = (int(tmp42) & int((int)255));
											}
											HX_STACK_LINE(733)
											int r = tmp35;		HX_STACK_VAR(r,"r");
											HX_STACK_LINE(733)
											Dynamic tmp36;		HX_STACK_VAR(tmp36,"tmp36");
											HX_STACK_LINE(733)
											{
												HX_STACK_LINE(733)
												::lime::utils::ArrayBufferView tmp37 = ::lime::math::color::_RGBA::RGBA_Impl__obj::__clamp;		HX_STACK_VAR(tmp37,"tmp37");
												HX_STACK_LINE(733)
												::lime::utils::ArrayBufferView this1 = tmp37;		HX_STACK_VAR(this1,"this1");
												HX_STACK_LINE(733)
												int tmp38 = (int(sourcePixel) >> int((int)16));		HX_STACK_VAR(tmp38,"tmp38");
												HX_STACK_LINE(733)
												int tmp39 = (int(tmp38) & int((int)255));		HX_STACK_VAR(tmp39,"tmp39");
												HX_STACK_LINE(733)
												Float tmp40 = ::lime::math::color::_RGBA::RGBA_Impl__obj::unmult;		HX_STACK_VAR(tmp40,"tmp40");
												HX_STACK_LINE(733)
												Float tmp41 = (tmp39 * tmp40);		HX_STACK_VAR(tmp41,"tmp41");
												HX_STACK_LINE(733)
												int tmp42 = ::Math_obj::round(tmp41);		HX_STACK_VAR(tmp42,"tmp42");
												HX_STACK_LINE(733)
												int idx = tmp42;		HX_STACK_VAR(idx,"idx");
												HX_STACK_LINE(733)
												int tmp43 = ::__hxcpp_memory_get_byte(this1->buffer->b,(this1->byteOffset + idx));		HX_STACK_VAR(tmp43,"tmp43");
												HX_STACK_LINE(733)
												tmp36 = (int(tmp43) & int((int)255));
											}
											HX_STACK_LINE(733)
											int g = tmp36;		HX_STACK_VAR(g,"g");
											HX_STACK_LINE(733)
											Dynamic tmp37;		HX_STACK_VAR(tmp37,"tmp37");
											HX_STACK_LINE(733)
											{
												HX_STACK_LINE(733)
												::lime::utils::ArrayBufferView tmp38 = ::lime::math::color::_RGBA::RGBA_Impl__obj::__clamp;		HX_STACK_VAR(tmp38,"tmp38");
												HX_STACK_LINE(733)
												::lime::utils::ArrayBufferView this1 = tmp38;		HX_STACK_VAR(this1,"this1");
												HX_STACK_LINE(733)
												int tmp39 = (int(sourcePixel) >> int((int)8));		HX_STACK_VAR(tmp39,"tmp39");
												HX_STACK_LINE(733)
												int tmp40 = (int(tmp39) & int((int)255));		HX_STACK_VAR(tmp40,"tmp40");
												HX_STACK_LINE(733)
												Float tmp41 = ::lime::math::color::_RGBA::RGBA_Impl__obj::unmult;		HX_STACK_VAR(tmp41,"tmp41");
												HX_STACK_LINE(733)
												Float tmp42 = (tmp40 * tmp41);		HX_STACK_VAR(tmp42,"tmp42");
												HX_STACK_LINE(733)
												int tmp43 = ::Math_obj::round(tmp42);		HX_STACK_VAR(tmp43,"tmp43");
												HX_STACK_LINE(733)
												int idx = tmp43;		HX_STACK_VAR(idx,"idx");
												HX_STACK_LINE(733)
												int tmp44 = ::__hxcpp_memory_get_byte(this1->buffer->b,(this1->byteOffset + idx));		HX_STACK_VAR(tmp44,"tmp44");
												HX_STACK_LINE(733)
												tmp37 = (int(tmp44) & int((int)255));
											}
											HX_STACK_LINE(733)
											int b = tmp37;		HX_STACK_VAR(b,"b");
											HX_STACK_LINE(733)
											int tmp38 = (int(r) & int((int)255));		HX_STACK_VAR(tmp38,"tmp38");
											HX_STACK_LINE(733)
											int tmp39 = (int(tmp38) << int((int)24));		HX_STACK_VAR(tmp39,"tmp39");
											HX_STACK_LINE(733)
											int tmp40 = (int(g) & int((int)255));		HX_STACK_VAR(tmp40,"tmp40");
											HX_STACK_LINE(733)
											int tmp41 = (int(tmp40) << int((int)16));		HX_STACK_VAR(tmp41,"tmp41");
											HX_STACK_LINE(733)
											int tmp42 = (int(tmp39) | int(tmp41));		HX_STACK_VAR(tmp42,"tmp42");
											HX_STACK_LINE(733)
											int tmp43 = (int(b) & int((int)255));		HX_STACK_VAR(tmp43,"tmp43");
											HX_STACK_LINE(733)
											int tmp44 = (int(tmp43) << int((int)8));		HX_STACK_VAR(tmp44,"tmp44");
											HX_STACK_LINE(733)
											int tmp45 = (int(tmp42) | int(tmp44));		HX_STACK_VAR(tmp45,"tmp45");
											HX_STACK_LINE(733)
											int tmp46 = (int(sourcePixel) & int((int)255));		HX_STACK_VAR(tmp46,"tmp46");
											HX_STACK_LINE(733)
											int tmp47 = (int(tmp46) & int((int)255));		HX_STACK_VAR(tmp47,"tmp47");
											HX_STACK_LINE(733)
											int tmp48 = (int(tmp45) | int(tmp47));		HX_STACK_VAR(tmp48,"tmp48");
											HX_STACK_LINE(733)
											sourcePixel = tmp48;
										}
									}
								}
							}
							HX_STACK_LINE(734)
							{
								HX_STACK_LINE(734)
								int tmp28 = destFormat;		HX_STACK_VAR(tmp28,"tmp28");
								HX_STACK_LINE(734)
								switch( (int)(tmp28)){
									case (int)2: {
										HX_STACK_LINE(734)
										int tmp29 = ::__hxcpp_memory_get_byte(destData->buffer->b,(destData->byteOffset + ((destPosition + (int)2))));		HX_STACK_VAR(tmp29,"tmp29");
										HX_STACK_LINE(734)
										Dynamic tmp30 = (int(tmp29) & int((int)255));		HX_STACK_VAR(tmp30,"tmp30");
										HX_STACK_LINE(734)
										int r = tmp30;		HX_STACK_VAR(r,"r");
										HX_STACK_LINE(734)
										int tmp31 = ::__hxcpp_memory_get_byte(destData->buffer->b,(destData->byteOffset + ((destPosition + (int)1))));		HX_STACK_VAR(tmp31,"tmp31");
										HX_STACK_LINE(734)
										Dynamic tmp32 = (int(tmp31) & int((int)255));		HX_STACK_VAR(tmp32,"tmp32");
										HX_STACK_LINE(734)
										int g = tmp32;		HX_STACK_VAR(g,"g");
										HX_STACK_LINE(734)
										int tmp33 = ::__hxcpp_memory_get_byte(destData->buffer->b,(destData->byteOffset + destPosition));		HX_STACK_VAR(tmp33,"tmp33");
										HX_STACK_LINE(734)
										Dynamic tmp34 = (int(tmp33) & int((int)255));		HX_STACK_VAR(tmp34,"tmp34");
										HX_STACK_LINE(734)
										int b = tmp34;		HX_STACK_VAR(b,"b");
										HX_STACK_LINE(734)
										int tmp35 = ::__hxcpp_memory_get_byte(destData->buffer->b,(destData->byteOffset + ((destPosition + (int)3))));		HX_STACK_VAR(tmp35,"tmp35");
										HX_STACK_LINE(734)
										Dynamic tmp36 = (int(tmp35) & int((int)255));		HX_STACK_VAR(tmp36,"tmp36");
										HX_STACK_LINE(734)
										int a = tmp36;		HX_STACK_VAR(a,"a");
										HX_STACK_LINE(734)
										int tmp37 = (int(r) & int((int)255));		HX_STACK_VAR(tmp37,"tmp37");
										HX_STACK_LINE(734)
										int tmp38 = (int(tmp37) << int((int)24));		HX_STACK_VAR(tmp38,"tmp38");
										HX_STACK_LINE(734)
										int tmp39 = (int(g) & int((int)255));		HX_STACK_VAR(tmp39,"tmp39");
										HX_STACK_LINE(734)
										int tmp40 = (int(tmp39) << int((int)16));		HX_STACK_VAR(tmp40,"tmp40");
										HX_STACK_LINE(734)
										int tmp41 = (int(tmp38) | int(tmp40));		HX_STACK_VAR(tmp41,"tmp41");
										HX_STACK_LINE(734)
										int tmp42 = (int(b) & int((int)255));		HX_STACK_VAR(tmp42,"tmp42");
										HX_STACK_LINE(734)
										int tmp43 = (int(tmp42) << int((int)8));		HX_STACK_VAR(tmp43,"tmp43");
										HX_STACK_LINE(734)
										int tmp44 = (int(tmp41) | int(tmp43));		HX_STACK_VAR(tmp44,"tmp44");
										HX_STACK_LINE(734)
										int tmp45 = (int(a) & int((int)255));		HX_STACK_VAR(tmp45,"tmp45");
										HX_STACK_LINE(734)
										int tmp46 = (int(tmp44) | int(tmp45));		HX_STACK_VAR(tmp46,"tmp46");
										HX_STACK_LINE(734)
										destPixel = tmp46;
									}
									;break;
									case (int)0: {
										HX_STACK_LINE(734)
										int tmp29 = ::__hxcpp_memory_get_byte(destData->buffer->b,(destData->byteOffset + destPosition));		HX_STACK_VAR(tmp29,"tmp29");
										HX_STACK_LINE(734)
										Dynamic tmp30 = (int(tmp29) & int((int)255));		HX_STACK_VAR(tmp30,"tmp30");
										HX_STACK_LINE(734)
										int r = tmp30;		HX_STACK_VAR(r,"r");
										HX_STACK_LINE(734)
										int tmp31 = ::__hxcpp_memory_get_byte(destData->buffer->b,(destData->byteOffset + ((destPosition + (int)1))));		HX_STACK_VAR(tmp31,"tmp31");
										HX_STACK_LINE(734)
										Dynamic tmp32 = (int(tmp31) & int((int)255));		HX_STACK_VAR(tmp32,"tmp32");
										HX_STACK_LINE(734)
										int g = tmp32;		HX_STACK_VAR(g,"g");
										HX_STACK_LINE(734)
										int tmp33 = ::__hxcpp_memory_get_byte(destData->buffer->b,(destData->byteOffset + ((destPosition + (int)2))));		HX_STACK_VAR(tmp33,"tmp33");
										HX_STACK_LINE(734)
										Dynamic tmp34 = (int(tmp33) & int((int)255));		HX_STACK_VAR(tmp34,"tmp34");
										HX_STACK_LINE(734)
										int b = tmp34;		HX_STACK_VAR(b,"b");
										HX_STACK_LINE(734)
										int tmp35 = ::__hxcpp_memory_get_byte(destData->buffer->b,(destData->byteOffset + ((destPosition + (int)3))));		HX_STACK_VAR(tmp35,"tmp35");
										HX_STACK_LINE(734)
										Dynamic tmp36 = (int(tmp35) & int((int)255));		HX_STACK_VAR(tmp36,"tmp36");
										HX_STACK_LINE(734)
										int a = tmp36;		HX_STACK_VAR(a,"a");
										HX_STACK_LINE(734)
										int tmp37 = (int(r) & int((int)255));		HX_STACK_VAR(tmp37,"tmp37");
										HX_STACK_LINE(734)
										int tmp38 = (int(tmp37) << int((int)24));		HX_STACK_VAR(tmp38,"tmp38");
										HX_STACK_LINE(734)
										int tmp39 = (int(g) & int((int)255));		HX_STACK_VAR(tmp39,"tmp39");
										HX_STACK_LINE(734)
										int tmp40 = (int(tmp39) << int((int)16));		HX_STACK_VAR(tmp40,"tmp40");
										HX_STACK_LINE(734)
										int tmp41 = (int(tmp38) | int(tmp40));		HX_STACK_VAR(tmp41,"tmp41");
										HX_STACK_LINE(734)
										int tmp42 = (int(b) & int((int)255));		HX_STACK_VAR(tmp42,"tmp42");
										HX_STACK_LINE(734)
										int tmp43 = (int(tmp42) << int((int)8));		HX_STACK_VAR(tmp43,"tmp43");
										HX_STACK_LINE(734)
										int tmp44 = (int(tmp41) | int(tmp43));		HX_STACK_VAR(tmp44,"tmp44");
										HX_STACK_LINE(734)
										int tmp45 = (int(a) & int((int)255));		HX_STACK_VAR(tmp45,"tmp45");
										HX_STACK_LINE(734)
										int tmp46 = (int(tmp44) | int(tmp45));		HX_STACK_VAR(tmp46,"tmp46");
										HX_STACK_LINE(734)
										destPixel = tmp46;
									}
									;break;
									case (int)1: {
										HX_STACK_LINE(734)
										int tmp29 = ::__hxcpp_memory_get_byte(destData->buffer->b,(destData->byteOffset + ((destPosition + (int)1))));		HX_STACK_VAR(tmp29,"tmp29");
										HX_STACK_LINE(734)
										Dynamic tmp30 = (int(tmp29) & int((int)255));		HX_STACK_VAR(tmp30,"tmp30");
										HX_STACK_LINE(734)
										int r = tmp30;		HX_STACK_VAR(r,"r");
										HX_STACK_LINE(734)
										int tmp31 = ::__hxcpp_memory_get_byte(destData->buffer->b,(destData->byteOffset + ((destPosition + (int)2))));		HX_STACK_VAR(tmp31,"tmp31");
										HX_STACK_LINE(734)
										Dynamic tmp32 = (int(tmp31) & int((int)255));		HX_STACK_VAR(tmp32,"tmp32");
										HX_STACK_LINE(734)
										int g = tmp32;		HX_STACK_VAR(g,"g");
										HX_STACK_LINE(734)
										int tmp33 = ::__hxcpp_memory_get_byte(destData->buffer->b,(destData->byteOffset + ((destPosition + (int)3))));		HX_STACK_VAR(tmp33,"tmp33");
										HX_STACK_LINE(734)
										Dynamic tmp34 = (int(tmp33) & int((int)255));		HX_STACK_VAR(tmp34,"tmp34");
										HX_STACK_LINE(734)
										int b = tmp34;		HX_STACK_VAR(b,"b");
										HX_STACK_LINE(734)
										int tmp35 = ::__hxcpp_memory_get_byte(destData->buffer->b,(destData->byteOffset + destPosition));		HX_STACK_VAR(tmp35,"tmp35");
										HX_STACK_LINE(734)
										Dynamic tmp36 = (int(tmp35) & int((int)255));		HX_STACK_VAR(tmp36,"tmp36");
										HX_STACK_LINE(734)
										int a = tmp36;		HX_STACK_VAR(a,"a");
										HX_STACK_LINE(734)
										int tmp37 = (int(r) & int((int)255));		HX_STACK_VAR(tmp37,"tmp37");
										HX_STACK_LINE(734)
										int tmp38 = (int(tmp37) << int((int)24));		HX_STACK_VAR(tmp38,"tmp38");
										HX_STACK_LINE(734)
										int tmp39 = (int(g) & int((int)255));		HX_STACK_VAR(tmp39,"tmp39");
										HX_STACK_LINE(734)
										int tmp40 = (int(tmp39) << int((int)16));		HX_STACK_VAR(tmp40,"tmp40");
										HX_STACK_LINE(734)
										int tmp41 = (int(tmp38) | int(tmp40));		HX_STACK_VAR(tmp41,"tmp41");
										HX_STACK_LINE(734)
										int tmp42 = (int(b) & int((int)255));		HX_STACK_VAR(tmp42,"tmp42");
										HX_STACK_LINE(734)
										int tmp43 = (int(tmp42) << int((int)8));		HX_STACK_VAR(tmp43,"tmp43");
										HX_STACK_LINE(734)
										int tmp44 = (int(tmp41) | int(tmp43));		HX_STACK_VAR(tmp44,"tmp44");
										HX_STACK_LINE(734)
										int tmp45 = (int(a) & int((int)255));		HX_STACK_VAR(tmp45,"tmp45");
										HX_STACK_LINE(734)
										int tmp46 = (int(tmp44) | int(tmp45));		HX_STACK_VAR(tmp46,"tmp46");
										HX_STACK_LINE(734)
										destPixel = tmp46;
									}
									;break;
								}
								HX_STACK_LINE(734)
								bool tmp29 = destPremultiplied;		HX_STACK_VAR(tmp29,"tmp29");
								HX_STACK_LINE(734)
								if ((tmp29)){
									HX_STACK_LINE(734)
									int tmp30 = (int(destPixel) & int((int)255));		HX_STACK_VAR(tmp30,"tmp30");
									HX_STACK_LINE(734)
									bool tmp31 = (tmp30 != (int)0);		HX_STACK_VAR(tmp31,"tmp31");
									HX_STACK_LINE(734)
									bool tmp32;		HX_STACK_VAR(tmp32,"tmp32");
									HX_STACK_LINE(734)
									if ((tmp31)){
										HX_STACK_LINE(734)
										int tmp33 = (int(destPixel) & int((int)255));		HX_STACK_VAR(tmp33,"tmp33");
										HX_STACK_LINE(734)
										int tmp34 = tmp33;		HX_STACK_VAR(tmp34,"tmp34");
										HX_STACK_LINE(734)
										tmp32 = (tmp34 != (int)255);
									}
									else{
										HX_STACK_LINE(734)
										tmp32 = false;
									}
									HX_STACK_LINE(734)
									if ((tmp32)){
										HX_STACK_LINE(734)
										int tmp33 = (int(destPixel) & int((int)255));		HX_STACK_VAR(tmp33,"tmp33");
										HX_STACK_LINE(734)
										Float tmp34 = (Float(((Float)255.0)) / Float(tmp33));		HX_STACK_VAR(tmp34,"tmp34");
										HX_STACK_LINE(734)
										::lime::math::color::_RGBA::RGBA_Impl__obj::unmult = tmp34;
										HX_STACK_LINE(734)
										{
											HX_STACK_LINE(734)
											Dynamic tmp35;		HX_STACK_VAR(tmp35,"tmp35");
											HX_STACK_LINE(734)
											{
												HX_STACK_LINE(734)
												::lime::utils::ArrayBufferView tmp36 = ::lime::math::color::_RGBA::RGBA_Impl__obj::__clamp;		HX_STACK_VAR(tmp36,"tmp36");
												HX_STACK_LINE(734)
												::lime::utils::ArrayBufferView this1 = tmp36;		HX_STACK_VAR(this1,"this1");
												HX_STACK_LINE(734)
												int tmp37 = (int(destPixel) >> int((int)24));		HX_STACK_VAR(tmp37,"tmp37");
												HX_STACK_LINE(734)
												int tmp38 = (int(tmp37) & int((int)255));		HX_STACK_VAR(tmp38,"tmp38");
												HX_STACK_LINE(734)
												Float tmp39 = ::lime::math::color::_RGBA::RGBA_Impl__obj::unmult;		HX_STACK_VAR(tmp39,"tmp39");
												HX_STACK_LINE(734)
												Float tmp40 = (tmp38 * tmp39);		HX_STACK_VAR(tmp40,"tmp40");
												HX_STACK_LINE(734)
												int tmp41 = ::Math_obj::round(tmp40);		HX_STACK_VAR(tmp41,"tmp41");
												HX_STACK_LINE(734)
												int idx = tmp41;		HX_STACK_VAR(idx,"idx");
												HX_STACK_LINE(734)
												int tmp42 = ::__hxcpp_memory_get_byte(this1->buffer->b,(this1->byteOffset + idx));		HX_STACK_VAR(tmp42,"tmp42");
												HX_STACK_LINE(734)
												tmp35 = (int(tmp42) & int((int)255));
											}
											HX_STACK_LINE(734)
											int r = tmp35;		HX_STACK_VAR(r,"r");
											HX_STACK_LINE(734)
											Dynamic tmp36;		HX_STACK_VAR(tmp36,"tmp36");
											HX_STACK_LINE(734)
											{
												HX_STACK_LINE(734)
												::lime::utils::ArrayBufferView tmp37 = ::lime::math::color::_RGBA::RGBA_Impl__obj::__clamp;		HX_STACK_VAR(tmp37,"tmp37");
												HX_STACK_LINE(734)
												::lime::utils::ArrayBufferView this1 = tmp37;		HX_STACK_VAR(this1,"this1");
												HX_STACK_LINE(734)
												int tmp38 = (int(destPixel) >> int((int)16));		HX_STACK_VAR(tmp38,"tmp38");
												HX_STACK_LINE(734)
												int tmp39 = (int(tmp38) & int((int)255));		HX_STACK_VAR(tmp39,"tmp39");
												HX_STACK_LINE(734)
												Float tmp40 = ::lime::math::color::_RGBA::RGBA_Impl__obj::unmult;		HX_STACK_VAR(tmp40,"tmp40");
												HX_STACK_LINE(734)
												Float tmp41 = (tmp39 * tmp40);		HX_STACK_VAR(tmp41,"tmp41");
												HX_STACK_LINE(734)
												int tmp42 = ::Math_obj::round(tmp41);		HX_STACK_VAR(tmp42,"tmp42");
												HX_STACK_LINE(734)
												int idx = tmp42;		HX_STACK_VAR(idx,"idx");
												HX_STACK_LINE(734)
												int tmp43 = ::__hxcpp_memory_get_byte(this1->buffer->b,(this1->byteOffset + idx));		HX_STACK_VAR(tmp43,"tmp43");
												HX_STACK_LINE(734)
												tmp36 = (int(tmp43) & int((int)255));
											}
											HX_STACK_LINE(734)
											int g = tmp36;		HX_STACK_VAR(g,"g");
											HX_STACK_LINE(734)
											Dynamic tmp37;		HX_STACK_VAR(tmp37,"tmp37");
											HX_STACK_LINE(734)
											{
												HX_STACK_LINE(734)
												::lime::utils::ArrayBufferView tmp38 = ::lime::math::color::_RGBA::RGBA_Impl__obj::__clamp;		HX_STACK_VAR(tmp38,"tmp38");
												HX_STACK_LINE(734)
												::lime::utils::ArrayBufferView this1 = tmp38;		HX_STACK_VAR(this1,"this1");
												HX_STACK_LINE(734)
												int tmp39 = (int(destPixel) >> int((int)8));		HX_STACK_VAR(tmp39,"tmp39");
												HX_STACK_LINE(734)
												int tmp40 = (int(tmp39) & int((int)255));		HX_STACK_VAR(tmp40,"tmp40");
												HX_STACK_LINE(734)
												Float tmp41 = ::lime::math::color::_RGBA::RGBA_Impl__obj::unmult;		HX_STACK_VAR(tmp41,"tmp41");
												HX_STACK_LINE(734)
												Float tmp42 = (tmp40 * tmp41);		HX_STACK_VAR(tmp42,"tmp42");
												HX_STACK_LINE(734)
												int tmp43 = ::Math_obj::round(tmp42);		HX_STACK_VAR(tmp43,"tmp43");
												HX_STACK_LINE(734)
												int idx = tmp43;		HX_STACK_VAR(idx,"idx");
												HX_STACK_LINE(734)
												int tmp44 = ::__hxcpp_memory_get_byte(this1->buffer->b,(this1->byteOffset + idx));		HX_STACK_VAR(tmp44,"tmp44");
												HX_STACK_LINE(734)
												tmp37 = (int(tmp44) & int((int)255));
											}
											HX_STACK_LINE(734)
											int b = tmp37;		HX_STACK_VAR(b,"b");
											HX_STACK_LINE(734)
											int tmp38 = (int(r) & int((int)255));		HX_STACK_VAR(tmp38,"tmp38");
											HX_STACK_LINE(734)
											int tmp39 = (int(tmp38) << int((int)24));		HX_STACK_VAR(tmp39,"tmp39");
											HX_STACK_LINE(734)
											int tmp40 = (int(g) & int((int)255));		HX_STACK_VAR(tmp40,"tmp40");
											HX_STACK_LINE(734)
											int tmp41 = (int(tmp40) << int((int)16));		HX_STACK_VAR(tmp41,"tmp41");
											HX_STACK_LINE(734)
											int tmp42 = (int(tmp39) | int(tmp41));		HX_STACK_VAR(tmp42,"tmp42");
											HX_STACK_LINE(734)
											int tmp43 = (int(b) & int((int)255));		HX_STACK_VAR(tmp43,"tmp43");
											HX_STACK_LINE(734)
											int tmp44 = (int(tmp43) << int((int)8));		HX_STACK_VAR(tmp44,"tmp44");
											HX_STACK_LINE(734)
											int tmp45 = (int(tmp42) | int(tmp44));		HX_STACK_VAR(tmp45,"tmp45");
											HX_STACK_LINE(734)
											int tmp46 = (int(destPixel) & int((int)255));		HX_STACK_VAR(tmp46,"tmp46");
											HX_STACK_LINE(734)
											int tmp47 = (int(tmp46) & int((int)255));		HX_STACK_VAR(tmp47,"tmp47");
											HX_STACK_LINE(734)
											int tmp48 = (int(tmp45) | int(tmp47));		HX_STACK_VAR(tmp48,"tmp48");
											HX_STACK_LINE(734)
											destPixel = tmp48;
										}
									}
								}
							}
							HX_STACK_LINE(736)
							{
								HX_STACK_LINE(736)
								int tmp28 = (int(sourcePixel) >> int((int)24));		HX_STACK_VAR(tmp28,"tmp28");
								HX_STACK_LINE(736)
								int tmp29 = (int(tmp28) & int((int)255));		HX_STACK_VAR(tmp29,"tmp29");
								HX_STACK_LINE(736)
								int tmp30 = redMultiplier;		HX_STACK_VAR(tmp30,"tmp30");
								HX_STACK_LINE(736)
								int tmp31 = (tmp29 * tmp30);		HX_STACK_VAR(tmp31,"tmp31");
								HX_STACK_LINE(736)
								int tmp32 = (int(destPixel) >> int((int)24));		HX_STACK_VAR(tmp32,"tmp32");
								HX_STACK_LINE(736)
								int tmp33 = (int(tmp32) & int((int)255));		HX_STACK_VAR(tmp33,"tmp33");
								HX_STACK_LINE(736)
								int tmp34 = ((int)256 - redMultiplier);		HX_STACK_VAR(tmp34,"tmp34");
								HX_STACK_LINE(736)
								int tmp35 = (tmp33 * tmp34);		HX_STACK_VAR(tmp35,"tmp35");
								HX_STACK_LINE(736)
								int tmp36 = (tmp31 + tmp35);		HX_STACK_VAR(tmp36,"tmp36");
								HX_STACK_LINE(736)
								Float tmp37 = (Float(tmp36) / Float((int)256));		HX_STACK_VAR(tmp37,"tmp37");
								HX_STACK_LINE(736)
								int tmp38 = ::Std_obj::_int(tmp37);		HX_STACK_VAR(tmp38,"tmp38");
								HX_STACK_LINE(736)
								int value = tmp38;		HX_STACK_VAR(value,"value");
								HX_STACK_LINE(736)
								{
									HX_STACK_LINE(736)
									int tmp39 = (int(value) & int((int)255));		HX_STACK_VAR(tmp39,"tmp39");
									HX_STACK_LINE(736)
									int tmp40 = (int(tmp39) << int((int)24));		HX_STACK_VAR(tmp40,"tmp40");
									HX_STACK_LINE(736)
									int tmp41 = (int(destPixel) >> int((int)16));		HX_STACK_VAR(tmp41,"tmp41");
									HX_STACK_LINE(736)
									int tmp42 = (int(tmp41) & int((int)255));		HX_STACK_VAR(tmp42,"tmp42");
									HX_STACK_LINE(736)
									int tmp43 = (int(tmp42) & int((int)255));		HX_STACK_VAR(tmp43,"tmp43");
									HX_STACK_LINE(736)
									int tmp44 = (int(tmp43) << int((int)16));		HX_STACK_VAR(tmp44,"tmp44");
									HX_STACK_LINE(736)
									int tmp45 = (int(tmp40) | int(tmp44));		HX_STACK_VAR(tmp45,"tmp45");
									HX_STACK_LINE(736)
									int tmp46 = (int(destPixel) >> int((int)8));		HX_STACK_VAR(tmp46,"tmp46");
									HX_STACK_LINE(736)
									int tmp47 = (int(tmp46) & int((int)255));		HX_STACK_VAR(tmp47,"tmp47");
									HX_STACK_LINE(736)
									int tmp48 = (int(tmp47) & int((int)255));		HX_STACK_VAR(tmp48,"tmp48");
									HX_STACK_LINE(736)
									int tmp49 = (int(tmp48) << int((int)8));		HX_STACK_VAR(tmp49,"tmp49");
									HX_STACK_LINE(736)
									int tmp50 = (int(tmp45) | int(tmp49));		HX_STACK_VAR(tmp50,"tmp50");
									HX_STACK_LINE(736)
									int tmp51 = (int(destPixel) & int((int)255));		HX_STACK_VAR(tmp51,"tmp51");
									HX_STACK_LINE(736)
									int tmp52 = (int(tmp51) & int((int)255));		HX_STACK_VAR(tmp52,"tmp52");
									HX_STACK_LINE(736)
									int tmp53 = (int(tmp50) | int(tmp52));		HX_STACK_VAR(tmp53,"tmp53");
									HX_STACK_LINE(736)
									destPixel = tmp53;
								}
								HX_STACK_LINE(736)
								value;
							}
							HX_STACK_LINE(737)
							{
								HX_STACK_LINE(737)
								int tmp28 = (int(sourcePixel) >> int((int)16));		HX_STACK_VAR(tmp28,"tmp28");
								HX_STACK_LINE(737)
								int tmp29 = (int(tmp28) & int((int)255));		HX_STACK_VAR(tmp29,"tmp29");
								HX_STACK_LINE(737)
								int tmp30 = greenMultiplier;		HX_STACK_VAR(tmp30,"tmp30");
								HX_STACK_LINE(737)
								int tmp31 = (tmp29 * tmp30);		HX_STACK_VAR(tmp31,"tmp31");
								HX_STACK_LINE(737)
								int tmp32 = (int(destPixel) >> int((int)16));		HX_STACK_VAR(tmp32,"tmp32");
								HX_STACK_LINE(737)
								int tmp33 = (int(tmp32) & int((int)255));		HX_STACK_VAR(tmp33,"tmp33");
								HX_STACK_LINE(737)
								int tmp34 = ((int)256 - greenMultiplier);		HX_STACK_VAR(tmp34,"tmp34");
								HX_STACK_LINE(737)
								int tmp35 = (tmp33 * tmp34);		HX_STACK_VAR(tmp35,"tmp35");
								HX_STACK_LINE(737)
								int tmp36 = (tmp31 + tmp35);		HX_STACK_VAR(tmp36,"tmp36");
								HX_STACK_LINE(737)
								Float tmp37 = (Float(tmp36) / Float((int)256));		HX_STACK_VAR(tmp37,"tmp37");
								HX_STACK_LINE(737)
								int tmp38 = ::Std_obj::_int(tmp37);		HX_STACK_VAR(tmp38,"tmp38");
								HX_STACK_LINE(737)
								int value = tmp38;		HX_STACK_VAR(value,"value");
								HX_STACK_LINE(737)
								{
									HX_STACK_LINE(737)
									int tmp39 = (int(destPixel) >> int((int)24));		HX_STACK_VAR(tmp39,"tmp39");
									HX_STACK_LINE(737)
									int tmp40 = (int(tmp39) & int((int)255));		HX_STACK_VAR(tmp40,"tmp40");
									HX_STACK_LINE(737)
									int tmp41 = (int(tmp40) & int((int)255));		HX_STACK_VAR(tmp41,"tmp41");
									HX_STACK_LINE(737)
									int tmp42 = (int(tmp41) << int((int)24));		HX_STACK_VAR(tmp42,"tmp42");
									HX_STACK_LINE(737)
									int tmp43 = (int(value) & int((int)255));		HX_STACK_VAR(tmp43,"tmp43");
									HX_STACK_LINE(737)
									int tmp44 = (int(tmp43) << int((int)16));		HX_STACK_VAR(tmp44,"tmp44");
									HX_STACK_LINE(737)
									int tmp45 = (int(tmp42) | int(tmp44));		HX_STACK_VAR(tmp45,"tmp45");
									HX_STACK_LINE(737)
									int tmp46 = (int(destPixel) >> int((int)8));		HX_STACK_VAR(tmp46,"tmp46");
									HX_STACK_LINE(737)
									int tmp47 = (int(tmp46) & int((int)255));		HX_STACK_VAR(tmp47,"tmp47");
									HX_STACK_LINE(737)
									int tmp48 = (int(tmp47) & int((int)255));		HX_STACK_VAR(tmp48,"tmp48");
									HX_STACK_LINE(737)
									int tmp49 = (int(tmp48) << int((int)8));		HX_STACK_VAR(tmp49,"tmp49");
									HX_STACK_LINE(737)
									int tmp50 = (int(tmp45) | int(tmp49));		HX_STACK_VAR(tmp50,"tmp50");
									HX_STACK_LINE(737)
									int tmp51 = (int(destPixel) & int((int)255));		HX_STACK_VAR(tmp51,"tmp51");
									HX_STACK_LINE(737)
									int tmp52 = (int(tmp51) & int((int)255));		HX_STACK_VAR(tmp52,"tmp52");
									HX_STACK_LINE(737)
									int tmp53 = (int(tmp50) | int(tmp52));		HX_STACK_VAR(tmp53,"tmp53");
									HX_STACK_LINE(737)
									destPixel = tmp53;
								}
								HX_STACK_LINE(737)
								value;
							}
							HX_STACK_LINE(738)
							{
								HX_STACK_LINE(738)
								int tmp28 = (int(sourcePixel) >> int((int)8));		HX_STACK_VAR(tmp28,"tmp28");
								HX_STACK_LINE(738)
								int tmp29 = (int(tmp28) & int((int)255));		HX_STACK_VAR(tmp29,"tmp29");
								HX_STACK_LINE(738)
								int tmp30 = blueMultiplier;		HX_STACK_VAR(tmp30,"tmp30");
								HX_STACK_LINE(738)
								int tmp31 = (tmp29 * tmp30);		HX_STACK_VAR(tmp31,"tmp31");
								HX_STACK_LINE(738)
								int tmp32 = (int(destPixel) >> int((int)8));		HX_STACK_VAR(tmp32,"tmp32");
								HX_STACK_LINE(738)
								int tmp33 = (int(tmp32) & int((int)255));		HX_STACK_VAR(tmp33,"tmp33");
								HX_STACK_LINE(738)
								int tmp34 = ((int)256 - blueMultiplier);		HX_STACK_VAR(tmp34,"tmp34");
								HX_STACK_LINE(738)
								int tmp35 = (tmp33 * tmp34);		HX_STACK_VAR(tmp35,"tmp35");
								HX_STACK_LINE(738)
								int tmp36 = (tmp31 + tmp35);		HX_STACK_VAR(tmp36,"tmp36");
								HX_STACK_LINE(738)
								Float tmp37 = (Float(tmp36) / Float((int)256));		HX_STACK_VAR(tmp37,"tmp37");
								HX_STACK_LINE(738)
								int tmp38 = ::Std_obj::_int(tmp37);		HX_STACK_VAR(tmp38,"tmp38");
								HX_STACK_LINE(738)
								int value = tmp38;		HX_STACK_VAR(value,"value");
								HX_STACK_LINE(738)
								{
									HX_STACK_LINE(738)
									int tmp39 = (int(destPixel) >> int((int)24));		HX_STACK_VAR(tmp39,"tmp39");
									HX_STACK_LINE(738)
									int tmp40 = (int(tmp39) & int((int)255));		HX_STACK_VAR(tmp40,"tmp40");
									HX_STACK_LINE(738)
									int tmp41 = (int(tmp40) & int((int)255));		HX_STACK_VAR(tmp41,"tmp41");
									HX_STACK_LINE(738)
									int tmp42 = (int(tmp41) << int((int)24));		HX_STACK_VAR(tmp42,"tmp42");
									HX_STACK_LINE(738)
									int tmp43 = (int(destPixel) >> int((int)16));		HX_STACK_VAR(tmp43,"tmp43");
									HX_STACK_LINE(738)
									int tmp44 = (int(tmp43) & int((int)255));		HX_STACK_VAR(tmp44,"tmp44");
									HX_STACK_LINE(738)
									int tmp45 = (int(tmp44) & int((int)255));		HX_STACK_VAR(tmp45,"tmp45");
									HX_STACK_LINE(738)
									int tmp46 = (int(tmp45) << int((int)16));		HX_STACK_VAR(tmp46,"tmp46");
									HX_STACK_LINE(738)
									int tmp47 = (int(tmp42) | int(tmp46));		HX_STACK_VAR(tmp47,"tmp47");
									HX_STACK_LINE(738)
									int tmp48 = (int(value) & int((int)255));		HX_STACK_VAR(tmp48,"tmp48");
									HX_STACK_LINE(738)
									int tmp49 = (int(tmp48) << int((int)8));		HX_STACK_VAR(tmp49,"tmp49");
									HX_STACK_LINE(738)
									int tmp50 = (int(tmp47) | int(tmp49));		HX_STACK_VAR(tmp50,"tmp50");
									HX_STACK_LINE(738)
									int tmp51 = (int(destPixel) & int((int)255));		HX_STACK_VAR(tmp51,"tmp51");
									HX_STACK_LINE(738)
									int tmp52 = (int(tmp51) & int((int)255));		HX_STACK_VAR(tmp52,"tmp52");
									HX_STACK_LINE(738)
									int tmp53 = (int(tmp50) | int(tmp52));		HX_STACK_VAR(tmp53,"tmp53");
									HX_STACK_LINE(738)
									destPixel = tmp53;
								}
								HX_STACK_LINE(738)
								value;
							}
							HX_STACK_LINE(739)
							{
								HX_STACK_LINE(739)
								int tmp28 = (int(sourcePixel) & int((int)255));		HX_STACK_VAR(tmp28,"tmp28");
								HX_STACK_LINE(739)
								int tmp29 = alphaMultiplier;		HX_STACK_VAR(tmp29,"tmp29");
								HX_STACK_LINE(739)
								int tmp30 = (tmp28 * tmp29);		HX_STACK_VAR(tmp30,"tmp30");
								HX_STACK_LINE(739)
								int tmp31 = (int(destPixel) & int((int)255));		HX_STACK_VAR(tmp31,"tmp31");
								HX_STACK_LINE(739)
								int tmp32 = ((int)256 - alphaMultiplier);		HX_STACK_VAR(tmp32,"tmp32");
								HX_STACK_LINE(739)
								int tmp33 = (tmp31 * tmp32);		HX_STACK_VAR(tmp33,"tmp33");
								HX_STACK_LINE(739)
								int tmp34 = (tmp30 + tmp33);		HX_STACK_VAR(tmp34,"tmp34");
								HX_STACK_LINE(739)
								Float tmp35 = (Float(tmp34) / Float((int)256));		HX_STACK_VAR(tmp35,"tmp35");
								HX_STACK_LINE(739)
								int tmp36 = ::Std_obj::_int(tmp35);		HX_STACK_VAR(tmp36,"tmp36");
								HX_STACK_LINE(739)
								int value = tmp36;		HX_STACK_VAR(value,"value");
								HX_STACK_LINE(739)
								{
									HX_STACK_LINE(739)
									int tmp37 = (int(destPixel) >> int((int)24));		HX_STACK_VAR(tmp37,"tmp37");
									HX_STACK_LINE(739)
									int tmp38 = (int(tmp37) & int((int)255));		HX_STACK_VAR(tmp38,"tmp38");
									HX_STACK_LINE(739)
									int tmp39 = (int(tmp38) & int((int)255));		HX_STACK_VAR(tmp39,"tmp39");
									HX_STACK_LINE(739)
									int tmp40 = (int(tmp39) << int((int)24));		HX_STACK_VAR(tmp40,"tmp40");
									HX_STACK_LINE(739)
									int tmp41 = (int(destPixel) >> int((int)16));		HX_STACK_VAR(tmp41,"tmp41");
									HX_STACK_LINE(739)
									int tmp42 = (int(tmp41) & int((int)255));		HX_STACK_VAR(tmp42,"tmp42");
									HX_STACK_LINE(739)
									int tmp43 = (int(tmp42) & int((int)255));		HX_STACK_VAR(tmp43,"tmp43");
									HX_STACK_LINE(739)
									int tmp44 = (int(tmp43) << int((int)16));		HX_STACK_VAR(tmp44,"tmp44");
									HX_STACK_LINE(739)
									int tmp45 = (int(tmp40) | int(tmp44));		HX_STACK_VAR(tmp45,"tmp45");
									HX_STACK_LINE(739)
									int tmp46 = (int(destPixel) >> int((int)8));		HX_STACK_VAR(tmp46,"tmp46");
									HX_STACK_LINE(739)
									int tmp47 = (int(tmp46) & int((int)255));		HX_STACK_VAR(tmp47,"tmp47");
									HX_STACK_LINE(739)
									int tmp48 = (int(tmp47) & int((int)255));		HX_STACK_VAR(tmp48,"tmp48");
									HX_STACK_LINE(739)
									int tmp49 = (int(tmp48) << int((int)8));		HX_STACK_VAR(tmp49,"tmp49");
									HX_STACK_LINE(739)
									int tmp50 = (int(tmp45) | int(tmp49));		HX_STACK_VAR(tmp50,"tmp50");
									HX_STACK_LINE(739)
									int tmp51 = (int(value) & int((int)255));		HX_STACK_VAR(tmp51,"tmp51");
									HX_STACK_LINE(739)
									int tmp52 = (int(tmp50) | int(tmp51));		HX_STACK_VAR(tmp52,"tmp52");
									HX_STACK_LINE(739)
									destPixel = tmp52;
								}
								HX_STACK_LINE(739)
								value;
							}
							HX_STACK_LINE(741)
							{
								HX_STACK_LINE(741)
								bool tmp28 = destPremultiplied;		HX_STACK_VAR(tmp28,"tmp28");
								HX_STACK_LINE(741)
								if ((tmp28)){
									HX_STACK_LINE(741)
									int tmp29 = (int(destPixel) & int((int)255));		HX_STACK_VAR(tmp29,"tmp29");
									HX_STACK_LINE(741)
									bool tmp30 = (tmp29 == (int)0);		HX_STACK_VAR(tmp30,"tmp30");
									HX_STACK_LINE(741)
									if ((tmp30)){
										HX_STACK_LINE(741)
										bool tmp31 = (destPixel != (int)0);		HX_STACK_VAR(tmp31,"tmp31");
										HX_STACK_LINE(741)
										if ((tmp31)){
											HX_STACK_LINE(741)
											destPixel = (int)0;
										}
									}
									else{
										HX_STACK_LINE(741)
										int tmp31 = (int(destPixel) & int((int)255));		HX_STACK_VAR(tmp31,"tmp31");
										HX_STACK_LINE(741)
										bool tmp32 = (tmp31 != (int)255);		HX_STACK_VAR(tmp32,"tmp32");
										HX_STACK_LINE(741)
										if ((tmp32)){
											HX_STACK_LINE(741)
											Dynamic tmp33;		HX_STACK_VAR(tmp33,"tmp33");
											HX_STACK_LINE(741)
											{
												HX_STACK_LINE(741)
												::lime::utils::ArrayBufferView tmp34 = ::lime::math::color::_RGBA::RGBA_Impl__obj::__alpha16;		HX_STACK_VAR(tmp34,"tmp34");
												HX_STACK_LINE(741)
												::lime::utils::ArrayBufferView this1 = tmp34;		HX_STACK_VAR(this1,"this1");
												HX_STACK_LINE(741)
												{
													HX_STACK_LINE(741)
													bool littleEndian = true;		HX_STACK_VAR(littleEndian,"littleEndian");
													HX_STACK_LINE(741)
													tmp33 = ::__hxcpp_memory_get_ui32(this1->buffer->b,(this1->byteOffset + (((int(destPixel) & int((int)255))) * (int)4)));
												}
											}
											HX_STACK_LINE(741)
											::lime::math::color::_RGBA::RGBA_Impl__obj::a16 = tmp33;
											HX_STACK_LINE(741)
											{
												HX_STACK_LINE(741)
												int tmp34 = (int(destPixel) >> int((int)24));		HX_STACK_VAR(tmp34,"tmp34");
												HX_STACK_LINE(741)
												int tmp35 = (int(tmp34) & int((int)255));		HX_STACK_VAR(tmp35,"tmp35");
												HX_STACK_LINE(741)
												int tmp36 = ::lime::math::color::_RGBA::RGBA_Impl__obj::a16;		HX_STACK_VAR(tmp36,"tmp36");
												HX_STACK_LINE(741)
												int tmp37 = (tmp35 * tmp36);		HX_STACK_VAR(tmp37,"tmp37");
												HX_STACK_LINE(741)
												int tmp38 = (int(tmp37) >> int((int)16));		HX_STACK_VAR(tmp38,"tmp38");
												HX_STACK_LINE(741)
												int tmp39 = (int(tmp38) & int((int)255));		HX_STACK_VAR(tmp39,"tmp39");
												HX_STACK_LINE(741)
												int tmp40 = (int(tmp39) << int((int)24));		HX_STACK_VAR(tmp40,"tmp40");
												HX_STACK_LINE(741)
												int tmp41 = (int(destPixel) >> int((int)16));		HX_STACK_VAR(tmp41,"tmp41");
												HX_STACK_LINE(741)
												int tmp42 = (int(tmp41) & int((int)255));		HX_STACK_VAR(tmp42,"tmp42");
												HX_STACK_LINE(741)
												int tmp43 = ::lime::math::color::_RGBA::RGBA_Impl__obj::a16;		HX_STACK_VAR(tmp43,"tmp43");
												HX_STACK_LINE(741)
												int tmp44 = (tmp42 * tmp43);		HX_STACK_VAR(tmp44,"tmp44");
												HX_STACK_LINE(741)
												int tmp45 = (int(tmp44) >> int((int)16));		HX_STACK_VAR(tmp45,"tmp45");
												HX_STACK_LINE(741)
												int tmp46 = (int(tmp45) & int((int)255));		HX_STACK_VAR(tmp46,"tmp46");
												HX_STACK_LINE(741)
												int tmp47 = (int(tmp46) << int((int)16));		HX_STACK_VAR(tmp47,"tmp47");
												HX_STACK_LINE(741)
												int tmp48 = (int(tmp40) | int(tmp47));		HX_STACK_VAR(tmp48,"tmp48");
												HX_STACK_LINE(741)
												int tmp49 = (int(destPixel) >> int((int)8));		HX_STACK_VAR(tmp49,"tmp49");
												HX_STACK_LINE(741)
												int tmp50 = (int(tmp49) & int((int)255));		HX_STACK_VAR(tmp50,"tmp50");
												HX_STACK_LINE(741)
												int tmp51 = ::lime::math::color::_RGBA::RGBA_Impl__obj::a16;		HX_STACK_VAR(tmp51,"tmp51");
												HX_STACK_LINE(741)
												int tmp52 = (tmp50 * tmp51);		HX_STACK_VAR(tmp52,"tmp52");
												HX_STACK_LINE(741)
												int tmp53 = (int(tmp52) >> int((int)16));		HX_STACK_VAR(tmp53,"tmp53");
												HX_STACK_LINE(741)
												int tmp54 = (int(tmp53) & int((int)255));		HX_STACK_VAR(tmp54,"tmp54");
												HX_STACK_LINE(741)
												int tmp55 = (int(tmp54) << int((int)8));		HX_STACK_VAR(tmp55,"tmp55");
												HX_STACK_LINE(741)
												int tmp56 = (int(tmp48) | int(tmp55));		HX_STACK_VAR(tmp56,"tmp56");
												HX_STACK_LINE(741)
												int tmp57 = (int(destPixel) & int((int)255));		HX_STACK_VAR(tmp57,"tmp57");
												HX_STACK_LINE(741)
												int tmp58 = (int(tmp57) & int((int)255));		HX_STACK_VAR(tmp58,"tmp58");
												HX_STACK_LINE(741)
												int tmp59 = (int(tmp56) | int(tmp58));		HX_STACK_VAR(tmp59,"tmp59");
												HX_STACK_LINE(741)
												destPixel = tmp59;
											}
										}
									}
								}
								HX_STACK_LINE(741)
								int tmp29 = destFormat;		HX_STACK_VAR(tmp29,"tmp29");
								HX_STACK_LINE(741)
								switch( (int)(tmp29)){
									case (int)2: {
										HX_STACK_LINE(741)
										{
											HX_STACK_LINE(741)
											int tmp30 = (int(destPixel) >> int((int)8));		HX_STACK_VAR(tmp30,"tmp30");
											HX_STACK_LINE(741)
											int tmp31 = (int(tmp30) & int((int)255));		HX_STACK_VAR(tmp31,"tmp31");
											HX_STACK_LINE(741)
											int val = tmp31;		HX_STACK_VAR(val,"val");
											HX_STACK_LINE(741)
											{
												HX_STACK_LINE(741)
												::__hxcpp_memory_set_byte(destData->buffer->b,(destData->byteOffset + destPosition),val);
												HX_STACK_LINE(741)
												val;
											}
										}
										HX_STACK_LINE(741)
										{
											HX_STACK_LINE(741)
											int tmp30 = (int(destPixel) >> int((int)16));		HX_STACK_VAR(tmp30,"tmp30");
											HX_STACK_LINE(741)
											int tmp31 = (int(tmp30) & int((int)255));		HX_STACK_VAR(tmp31,"tmp31");
											HX_STACK_LINE(741)
											int val = tmp31;		HX_STACK_VAR(val,"val");
											HX_STACK_LINE(741)
											{
												HX_STACK_LINE(741)
												::__hxcpp_memory_set_byte(destData->buffer->b,(destData->byteOffset + ((destPosition + (int)1))),val);
												HX_STACK_LINE(741)
												val;
											}
										}
										HX_STACK_LINE(741)
										{
											HX_STACK_LINE(741)
											int tmp30 = (int(destPixel) >> int((int)24));		HX_STACK_VAR(tmp30,"tmp30");
											HX_STACK_LINE(741)
											int tmp31 = (int(tmp30) & int((int)255));		HX_STACK_VAR(tmp31,"tmp31");
											HX_STACK_LINE(741)
											int val = tmp31;		HX_STACK_VAR(val,"val");
											HX_STACK_LINE(741)
											{
												HX_STACK_LINE(741)
												::__hxcpp_memory_set_byte(destData->buffer->b,(destData->byteOffset + ((destPosition + (int)2))),val);
												HX_STACK_LINE(741)
												val;
											}
										}
										HX_STACK_LINE(741)
										{
											HX_STACK_LINE(741)
											int tmp30 = (int(destPixel) & int((int)255));		HX_STACK_VAR(tmp30,"tmp30");
											HX_STACK_LINE(741)
											int val = tmp30;		HX_STACK_VAR(val,"val");
											HX_STACK_LINE(741)
											{
												HX_STACK_LINE(741)
												::__hxcpp_memory_set_byte(destData->buffer->b,(destData->byteOffset + ((destPosition + (int)3))),val);
												HX_STACK_LINE(741)
												val;
											}
										}
									}
									;break;
									case (int)0: {
										HX_STACK_LINE(741)
										{
											HX_STACK_LINE(741)
											int tmp30 = (int(destPixel) >> int((int)24));		HX_STACK_VAR(tmp30,"tmp30");
											HX_STACK_LINE(741)
											int tmp31 = (int(tmp30) & int((int)255));		HX_STACK_VAR(tmp31,"tmp31");
											HX_STACK_LINE(741)
											int val = tmp31;		HX_STACK_VAR(val,"val");
											HX_STACK_LINE(741)
											{
												HX_STACK_LINE(741)
												::__hxcpp_memory_set_byte(destData->buffer->b,(destData->byteOffset + destPosition),val);
												HX_STACK_LINE(741)
												val;
											}
										}
										HX_STACK_LINE(741)
										{
											HX_STACK_LINE(741)
											int tmp30 = (int(destPixel) >> int((int)16));		HX_STACK_VAR(tmp30,"tmp30");
											HX_STACK_LINE(741)
											int tmp31 = (int(tmp30) & int((int)255));		HX_STACK_VAR(tmp31,"tmp31");
											HX_STACK_LINE(741)
											int val = tmp31;		HX_STACK_VAR(val,"val");
											HX_STACK_LINE(741)
											{
												HX_STACK_LINE(741)
												::__hxcpp_memory_set_byte(destData->buffer->b,(destData->byteOffset + ((destPosition + (int)1))),val);
												HX_STACK_LINE(741)
												val;
											}
										}
										HX_STACK_LINE(741)
										{
											HX_STACK_LINE(741)
											int tmp30 = (int(destPixel) >> int((int)8));		HX_STACK_VAR(tmp30,"tmp30");
											HX_STACK_LINE(741)
											int tmp31 = (int(tmp30) & int((int)255));		HX_STACK_VAR(tmp31,"tmp31");
											HX_STACK_LINE(741)
											int val = tmp31;		HX_STACK_VAR(val,"val");
											HX_STACK_LINE(741)
											{
												HX_STACK_LINE(741)
												::__hxcpp_memory_set_byte(destData->buffer->b,(destData->byteOffset + ((destPosition + (int)2))),val);
												HX_STACK_LINE(741)
												val;
											}
										}
										HX_STACK_LINE(741)
										{
											HX_STACK_LINE(741)
											int tmp30 = (int(destPixel) & int((int)255));		HX_STACK_VAR(tmp30,"tmp30");
											HX_STACK_LINE(741)
											int val = tmp30;		HX_STACK_VAR(val,"val");
											HX_STACK_LINE(741)
											{
												HX_STACK_LINE(741)
												::__hxcpp_memory_set_byte(destData->buffer->b,(destData->byteOffset + ((destPosition + (int)3))),val);
												HX_STACK_LINE(741)
												val;
											}
										}
									}
									;break;
									case (int)1: {
										HX_STACK_LINE(741)
										{
											HX_STACK_LINE(741)
											int tmp30 = (int(destPixel) & int((int)255));		HX_STACK_VAR(tmp30,"tmp30");
											HX_STACK_LINE(741)
											int val = tmp30;		HX_STACK_VAR(val,"val");
											HX_STACK_LINE(741)
											{
												HX_STACK_LINE(741)
												::__hxcpp_memory_set_byte(destData->buffer->b,(destData->byteOffset + destPosition),val);
												HX_STACK_LINE(741)
												val;
											}
										}
										HX_STACK_LINE(741)
										{
											HX_STACK_LINE(741)
											int tmp30 = (int(destPixel) >> int((int)24));		HX_STACK_VAR(tmp30,"tmp30");
											HX_STACK_LINE(741)
											int tmp31 = (int(tmp30) & int((int)255));		HX_STACK_VAR(tmp31,"tmp31");
											HX_STACK_LINE(741)
											int val = tmp31;		HX_STACK_VAR(val,"val");
											HX_STACK_LINE(741)
											{
												HX_STACK_LINE(741)
												::__hxcpp_memory_set_byte(destData->buffer->b,(destData->byteOffset + ((destPosition + (int)1))),val);
												HX_STACK_LINE(741)
												val;
											}
										}
										HX_STACK_LINE(741)
										{
											HX_STACK_LINE(741)
											int tmp30 = (int(destPixel) >> int((int)16));		HX_STACK_VAR(tmp30,"tmp30");
											HX_STACK_LINE(741)
											int tmp31 = (int(tmp30) & int((int)255));		HX_STACK_VAR(tmp31,"tmp31");
											HX_STACK_LINE(741)
											int val = tmp31;		HX_STACK_VAR(val,"val");
											HX_STACK_LINE(741)
											{
												HX_STACK_LINE(741)
												::__hxcpp_memory_set_byte(destData->buffer->b,(destData->byteOffset + ((destPosition + (int)2))),val);
												HX_STACK_LINE(741)
												val;
											}
										}
										HX_STACK_LINE(741)
										{
											HX_STACK_LINE(741)
											int tmp30 = (int(destPixel) >> int((int)8));		HX_STACK_VAR(tmp30,"tmp30");
											HX_STACK_LINE(741)
											int tmp31 = (int(tmp30) & int((int)255));		HX_STACK_VAR(tmp31,"tmp31");
											HX_STACK_LINE(741)
											int val = tmp31;		HX_STACK_VAR(val,"val");
											HX_STACK_LINE(741)
											{
												HX_STACK_LINE(741)
												::__hxcpp_memory_set_byte(destData->buffer->b,(destData->byteOffset + ((destPosition + (int)3))),val);
												HX_STACK_LINE(741)
												val;
											}
										}
									}
									;break;
								}
							}
							HX_STACK_LINE(743)
							hx::AddEq(sourcePosition,(int)4);
							HX_STACK_LINE(744)
							hx::AddEq(destPosition,(int)4);
						}
					}
				}
			}
		}
		HX_STACK_LINE(752)
		image->dirty = true;
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC8(ImageDataUtil_obj,merge,(void))

Void ImageDataUtil_obj::multiplyAlpha( ::lime::graphics::Image image){
{
		HX_STACK_FRAME("lime.graphics.utils.ImageDataUtil","multiplyAlpha",0xb898c02c,"lime.graphics.utils.ImageDataUtil.multiplyAlpha","lime/graphics/utils/ImageDataUtil.hx",757,0x494d921f)
		HX_STACK_ARG(image,"image")
		HX_STACK_LINE(759)
		::lime::utils::ArrayBufferView tmp = image->buffer->data;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(759)
		::lime::utils::ArrayBufferView data = tmp;		HX_STACK_VAR(data,"data");
		HX_STACK_LINE(760)
		bool tmp1 = (data == null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(760)
		bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(760)
		bool tmp3;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(760)
		if ((tmp2)){
			HX_STACK_LINE(760)
			bool tmp4 = image->buffer->transparent;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(760)
			bool tmp5 = tmp4;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(760)
			bool tmp6 = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(760)
			tmp3 = !(tmp6);
		}
		else{
			HX_STACK_LINE(760)
			tmp3 = true;
		}
		HX_STACK_LINE(760)
		if ((tmp3)){
			HX_STACK_LINE(760)
			return null();
		}
		HX_STACK_LINE(763)
		bool tmp4 = ::lime::_system::System_obj::disableCFFI;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(763)
		bool tmp5 = !(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(763)
		if ((tmp5)){
			HX_STACK_LINE(763)
			::lime::graphics::Image tmp6 = image;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(763)
			::lime::graphics::utils::ImageDataUtil_obj::lime_image_data_util_multiply_alpha(tmp6);
		}
		else{
			HX_STACK_LINE(767)
			int tmp6 = image->buffer->format;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(767)
			int format = tmp6;		HX_STACK_VAR(format,"format");
			HX_STACK_LINE(768)
			int tmp7 = data->length;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(768)
			Float tmp8 = (Float(tmp7) / Float((int)4));		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(768)
			int tmp9 = ::Std_obj::_int(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(768)
			int length = tmp9;		HX_STACK_VAR(length,"length");
			HX_STACK_LINE(769)
			int pixel;		HX_STACK_VAR(pixel,"pixel");
			HX_STACK_LINE(771)
			{
				HX_STACK_LINE(771)
				int _g = (int)0;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(771)
				while((true)){
					HX_STACK_LINE(771)
					bool tmp10 = (_g < length);		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(771)
					bool tmp11 = !(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(771)
					if ((tmp11)){
						HX_STACK_LINE(771)
						break;
					}
					HX_STACK_LINE(771)
					int tmp12 = (_g)++;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(771)
					int i = tmp12;		HX_STACK_VAR(i,"i");
					HX_STACK_LINE(773)
					{
						HX_STACK_LINE(773)
						int tmp13 = (i * (int)4);		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(773)
						int offset = tmp13;		HX_STACK_VAR(offset,"offset");
						HX_STACK_LINE(773)
						int tmp14 = format;		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(773)
						switch( (int)(tmp14)){
							case (int)2: {
								HX_STACK_LINE(773)
								int tmp15 = ::__hxcpp_memory_get_byte(data->buffer->b,(data->byteOffset + ((offset + (int)2))));		HX_STACK_VAR(tmp15,"tmp15");
								HX_STACK_LINE(773)
								Dynamic tmp16 = (int(tmp15) & int((int)255));		HX_STACK_VAR(tmp16,"tmp16");
								HX_STACK_LINE(773)
								int r = tmp16;		HX_STACK_VAR(r,"r");
								HX_STACK_LINE(773)
								int tmp17 = ::__hxcpp_memory_get_byte(data->buffer->b,(data->byteOffset + ((offset + (int)1))));		HX_STACK_VAR(tmp17,"tmp17");
								HX_STACK_LINE(773)
								Dynamic tmp18 = (int(tmp17) & int((int)255));		HX_STACK_VAR(tmp18,"tmp18");
								HX_STACK_LINE(773)
								int g = tmp18;		HX_STACK_VAR(g,"g");
								HX_STACK_LINE(773)
								int tmp19 = ::__hxcpp_memory_get_byte(data->buffer->b,(data->byteOffset + offset));		HX_STACK_VAR(tmp19,"tmp19");
								HX_STACK_LINE(773)
								Dynamic tmp20 = (int(tmp19) & int((int)255));		HX_STACK_VAR(tmp20,"tmp20");
								HX_STACK_LINE(773)
								int b = tmp20;		HX_STACK_VAR(b,"b");
								HX_STACK_LINE(773)
								int tmp21 = ::__hxcpp_memory_get_byte(data->buffer->b,(data->byteOffset + ((offset + (int)3))));		HX_STACK_VAR(tmp21,"tmp21");
								HX_STACK_LINE(773)
								Dynamic tmp22 = (int(tmp21) & int((int)255));		HX_STACK_VAR(tmp22,"tmp22");
								HX_STACK_LINE(773)
								int a = tmp22;		HX_STACK_VAR(a,"a");
								HX_STACK_LINE(773)
								int tmp23 = (int(r) & int((int)255));		HX_STACK_VAR(tmp23,"tmp23");
								HX_STACK_LINE(773)
								int tmp24 = (int(tmp23) << int((int)24));		HX_STACK_VAR(tmp24,"tmp24");
								HX_STACK_LINE(773)
								int tmp25 = (int(g) & int((int)255));		HX_STACK_VAR(tmp25,"tmp25");
								HX_STACK_LINE(773)
								int tmp26 = (int(tmp25) << int((int)16));		HX_STACK_VAR(tmp26,"tmp26");
								HX_STACK_LINE(773)
								int tmp27 = (int(tmp24) | int(tmp26));		HX_STACK_VAR(tmp27,"tmp27");
								HX_STACK_LINE(773)
								int tmp28 = (int(b) & int((int)255));		HX_STACK_VAR(tmp28,"tmp28");
								HX_STACK_LINE(773)
								int tmp29 = (int(tmp28) << int((int)8));		HX_STACK_VAR(tmp29,"tmp29");
								HX_STACK_LINE(773)
								int tmp30 = (int(tmp27) | int(tmp29));		HX_STACK_VAR(tmp30,"tmp30");
								HX_STACK_LINE(773)
								int tmp31 = (int(a) & int((int)255));		HX_STACK_VAR(tmp31,"tmp31");
								HX_STACK_LINE(773)
								int tmp32 = (int(tmp30) | int(tmp31));		HX_STACK_VAR(tmp32,"tmp32");
								HX_STACK_LINE(773)
								pixel = tmp32;
							}
							;break;
							case (int)0: {
								HX_STACK_LINE(773)
								int tmp15 = ::__hxcpp_memory_get_byte(data->buffer->b,(data->byteOffset + offset));		HX_STACK_VAR(tmp15,"tmp15");
								HX_STACK_LINE(773)
								Dynamic tmp16 = (int(tmp15) & int((int)255));		HX_STACK_VAR(tmp16,"tmp16");
								HX_STACK_LINE(773)
								int r = tmp16;		HX_STACK_VAR(r,"r");
								HX_STACK_LINE(773)
								int tmp17 = ::__hxcpp_memory_get_byte(data->buffer->b,(data->byteOffset + ((offset + (int)1))));		HX_STACK_VAR(tmp17,"tmp17");
								HX_STACK_LINE(773)
								Dynamic tmp18 = (int(tmp17) & int((int)255));		HX_STACK_VAR(tmp18,"tmp18");
								HX_STACK_LINE(773)
								int g = tmp18;		HX_STACK_VAR(g,"g");
								HX_STACK_LINE(773)
								int tmp19 = ::__hxcpp_memory_get_byte(data->buffer->b,(data->byteOffset + ((offset + (int)2))));		HX_STACK_VAR(tmp19,"tmp19");
								HX_STACK_LINE(773)
								Dynamic tmp20 = (int(tmp19) & int((int)255));		HX_STACK_VAR(tmp20,"tmp20");
								HX_STACK_LINE(773)
								int b = tmp20;		HX_STACK_VAR(b,"b");
								HX_STACK_LINE(773)
								int tmp21 = ::__hxcpp_memory_get_byte(data->buffer->b,(data->byteOffset + ((offset + (int)3))));		HX_STACK_VAR(tmp21,"tmp21");
								HX_STACK_LINE(773)
								Dynamic tmp22 = (int(tmp21) & int((int)255));		HX_STACK_VAR(tmp22,"tmp22");
								HX_STACK_LINE(773)
								int a = tmp22;		HX_STACK_VAR(a,"a");
								HX_STACK_LINE(773)
								int tmp23 = (int(r) & int((int)255));		HX_STACK_VAR(tmp23,"tmp23");
								HX_STACK_LINE(773)
								int tmp24 = (int(tmp23) << int((int)24));		HX_STACK_VAR(tmp24,"tmp24");
								HX_STACK_LINE(773)
								int tmp25 = (int(g) & int((int)255));		HX_STACK_VAR(tmp25,"tmp25");
								HX_STACK_LINE(773)
								int tmp26 = (int(tmp25) << int((int)16));		HX_STACK_VAR(tmp26,"tmp26");
								HX_STACK_LINE(773)
								int tmp27 = (int(tmp24) | int(tmp26));		HX_STACK_VAR(tmp27,"tmp27");
								HX_STACK_LINE(773)
								int tmp28 = (int(b) & int((int)255));		HX_STACK_VAR(tmp28,"tmp28");
								HX_STACK_LINE(773)
								int tmp29 = (int(tmp28) << int((int)8));		HX_STACK_VAR(tmp29,"tmp29");
								HX_STACK_LINE(773)
								int tmp30 = (int(tmp27) | int(tmp29));		HX_STACK_VAR(tmp30,"tmp30");
								HX_STACK_LINE(773)
								int tmp31 = (int(a) & int((int)255));		HX_STACK_VAR(tmp31,"tmp31");
								HX_STACK_LINE(773)
								int tmp32 = (int(tmp30) | int(tmp31));		HX_STACK_VAR(tmp32,"tmp32");
								HX_STACK_LINE(773)
								pixel = tmp32;
							}
							;break;
							case (int)1: {
								HX_STACK_LINE(773)
								int tmp15 = ::__hxcpp_memory_get_byte(data->buffer->b,(data->byteOffset + ((offset + (int)1))));		HX_STACK_VAR(tmp15,"tmp15");
								HX_STACK_LINE(773)
								Dynamic tmp16 = (int(tmp15) & int((int)255));		HX_STACK_VAR(tmp16,"tmp16");
								HX_STACK_LINE(773)
								int r = tmp16;		HX_STACK_VAR(r,"r");
								HX_STACK_LINE(773)
								int tmp17 = ::__hxcpp_memory_get_byte(data->buffer->b,(data->byteOffset + ((offset + (int)2))));		HX_STACK_VAR(tmp17,"tmp17");
								HX_STACK_LINE(773)
								Dynamic tmp18 = (int(tmp17) & int((int)255));		HX_STACK_VAR(tmp18,"tmp18");
								HX_STACK_LINE(773)
								int g = tmp18;		HX_STACK_VAR(g,"g");
								HX_STACK_LINE(773)
								int tmp19 = ::__hxcpp_memory_get_byte(data->buffer->b,(data->byteOffset + ((offset + (int)3))));		HX_STACK_VAR(tmp19,"tmp19");
								HX_STACK_LINE(773)
								Dynamic tmp20 = (int(tmp19) & int((int)255));		HX_STACK_VAR(tmp20,"tmp20");
								HX_STACK_LINE(773)
								int b = tmp20;		HX_STACK_VAR(b,"b");
								HX_STACK_LINE(773)
								int tmp21 = ::__hxcpp_memory_get_byte(data->buffer->b,(data->byteOffset + offset));		HX_STACK_VAR(tmp21,"tmp21");
								HX_STACK_LINE(773)
								Dynamic tmp22 = (int(tmp21) & int((int)255));		HX_STACK_VAR(tmp22,"tmp22");
								HX_STACK_LINE(773)
								int a = tmp22;		HX_STACK_VAR(a,"a");
								HX_STACK_LINE(773)
								int tmp23 = (int(r) & int((int)255));		HX_STACK_VAR(tmp23,"tmp23");
								HX_STACK_LINE(773)
								int tmp24 = (int(tmp23) << int((int)24));		HX_STACK_VAR(tmp24,"tmp24");
								HX_STACK_LINE(773)
								int tmp25 = (int(g) & int((int)255));		HX_STACK_VAR(tmp25,"tmp25");
								HX_STACK_LINE(773)
								int tmp26 = (int(tmp25) << int((int)16));		HX_STACK_VAR(tmp26,"tmp26");
								HX_STACK_LINE(773)
								int tmp27 = (int(tmp24) | int(tmp26));		HX_STACK_VAR(tmp27,"tmp27");
								HX_STACK_LINE(773)
								int tmp28 = (int(b) & int((int)255));		HX_STACK_VAR(tmp28,"tmp28");
								HX_STACK_LINE(773)
								int tmp29 = (int(tmp28) << int((int)8));		HX_STACK_VAR(tmp29,"tmp29");
								HX_STACK_LINE(773)
								int tmp30 = (int(tmp27) | int(tmp29));		HX_STACK_VAR(tmp30,"tmp30");
								HX_STACK_LINE(773)
								int tmp31 = (int(a) & int((int)255));		HX_STACK_VAR(tmp31,"tmp31");
								HX_STACK_LINE(773)
								int tmp32 = (int(tmp30) | int(tmp31));		HX_STACK_VAR(tmp32,"tmp32");
								HX_STACK_LINE(773)
								pixel = tmp32;
							}
							;break;
						}
						HX_STACK_LINE(773)
						{
						}
					}
					HX_STACK_LINE(774)
					{
						HX_STACK_LINE(774)
						int tmp13 = (i * (int)4);		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(774)
						int offset = tmp13;		HX_STACK_VAR(offset,"offset");
						HX_STACK_LINE(774)
						{
							HX_STACK_LINE(774)
							int tmp14 = (int(pixel) & int((int)255));		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(774)
							bool tmp15 = (tmp14 == (int)0);		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(774)
							if ((tmp15)){
								HX_STACK_LINE(774)
								bool tmp16 = (pixel != (int)0);		HX_STACK_VAR(tmp16,"tmp16");
								HX_STACK_LINE(774)
								if ((tmp16)){
									HX_STACK_LINE(774)
									pixel = (int)0;
								}
							}
							else{
								HX_STACK_LINE(774)
								int tmp16 = (int(pixel) & int((int)255));		HX_STACK_VAR(tmp16,"tmp16");
								HX_STACK_LINE(774)
								bool tmp17 = (tmp16 != (int)255);		HX_STACK_VAR(tmp17,"tmp17");
								HX_STACK_LINE(774)
								if ((tmp17)){
									HX_STACK_LINE(774)
									Dynamic tmp18;		HX_STACK_VAR(tmp18,"tmp18");
									HX_STACK_LINE(774)
									{
										HX_STACK_LINE(774)
										::lime::utils::ArrayBufferView tmp19 = ::lime::math::color::_RGBA::RGBA_Impl__obj::__alpha16;		HX_STACK_VAR(tmp19,"tmp19");
										HX_STACK_LINE(774)
										::lime::utils::ArrayBufferView this1 = tmp19;		HX_STACK_VAR(this1,"this1");
										HX_STACK_LINE(774)
										{
											HX_STACK_LINE(774)
											bool littleEndian = true;		HX_STACK_VAR(littleEndian,"littleEndian");
											HX_STACK_LINE(774)
											tmp18 = ::__hxcpp_memory_get_ui32(this1->buffer->b,(this1->byteOffset + (((int(pixel) & int((int)255))) * (int)4)));
										}
									}
									HX_STACK_LINE(774)
									::lime::math::color::_RGBA::RGBA_Impl__obj::a16 = tmp18;
									HX_STACK_LINE(774)
									{
										HX_STACK_LINE(774)
										int tmp19 = (int(pixel) >> int((int)24));		HX_STACK_VAR(tmp19,"tmp19");
										HX_STACK_LINE(774)
										int tmp20 = (int(tmp19) & int((int)255));		HX_STACK_VAR(tmp20,"tmp20");
										HX_STACK_LINE(774)
										int tmp21 = ::lime::math::color::_RGBA::RGBA_Impl__obj::a16;		HX_STACK_VAR(tmp21,"tmp21");
										HX_STACK_LINE(774)
										int tmp22 = (tmp20 * tmp21);		HX_STACK_VAR(tmp22,"tmp22");
										HX_STACK_LINE(774)
										int tmp23 = (int(tmp22) >> int((int)16));		HX_STACK_VAR(tmp23,"tmp23");
										HX_STACK_LINE(774)
										int tmp24 = (int(tmp23) & int((int)255));		HX_STACK_VAR(tmp24,"tmp24");
										HX_STACK_LINE(774)
										int tmp25 = (int(tmp24) << int((int)24));		HX_STACK_VAR(tmp25,"tmp25");
										HX_STACK_LINE(774)
										int tmp26 = (int(pixel) >> int((int)16));		HX_STACK_VAR(tmp26,"tmp26");
										HX_STACK_LINE(774)
										int tmp27 = (int(tmp26) & int((int)255));		HX_STACK_VAR(tmp27,"tmp27");
										HX_STACK_LINE(774)
										int tmp28 = ::lime::math::color::_RGBA::RGBA_Impl__obj::a16;		HX_STACK_VAR(tmp28,"tmp28");
										HX_STACK_LINE(774)
										int tmp29 = (tmp27 * tmp28);		HX_STACK_VAR(tmp29,"tmp29");
										HX_STACK_LINE(774)
										int tmp30 = (int(tmp29) >> int((int)16));		HX_STACK_VAR(tmp30,"tmp30");
										HX_STACK_LINE(774)
										int tmp31 = (int(tmp30) & int((int)255));		HX_STACK_VAR(tmp31,"tmp31");
										HX_STACK_LINE(774)
										int tmp32 = (int(tmp31) << int((int)16));		HX_STACK_VAR(tmp32,"tmp32");
										HX_STACK_LINE(774)
										int tmp33 = (int(tmp25) | int(tmp32));		HX_STACK_VAR(tmp33,"tmp33");
										HX_STACK_LINE(774)
										int tmp34 = (int(pixel) >> int((int)8));		HX_STACK_VAR(tmp34,"tmp34");
										HX_STACK_LINE(774)
										int tmp35 = (int(tmp34) & int((int)255));		HX_STACK_VAR(tmp35,"tmp35");
										HX_STACK_LINE(774)
										int tmp36 = ::lime::math::color::_RGBA::RGBA_Impl__obj::a16;		HX_STACK_VAR(tmp36,"tmp36");
										HX_STACK_LINE(774)
										int tmp37 = (tmp35 * tmp36);		HX_STACK_VAR(tmp37,"tmp37");
										HX_STACK_LINE(774)
										int tmp38 = (int(tmp37) >> int((int)16));		HX_STACK_VAR(tmp38,"tmp38");
										HX_STACK_LINE(774)
										int tmp39 = (int(tmp38) & int((int)255));		HX_STACK_VAR(tmp39,"tmp39");
										HX_STACK_LINE(774)
										int tmp40 = (int(tmp39) << int((int)8));		HX_STACK_VAR(tmp40,"tmp40");
										HX_STACK_LINE(774)
										int tmp41 = (int(tmp33) | int(tmp40));		HX_STACK_VAR(tmp41,"tmp41");
										HX_STACK_LINE(774)
										int tmp42 = (int(pixel) & int((int)255));		HX_STACK_VAR(tmp42,"tmp42");
										HX_STACK_LINE(774)
										int tmp43 = (int(tmp42) & int((int)255));		HX_STACK_VAR(tmp43,"tmp43");
										HX_STACK_LINE(774)
										int tmp44 = (int(tmp41) | int(tmp43));		HX_STACK_VAR(tmp44,"tmp44");
										HX_STACK_LINE(774)
										pixel = tmp44;
									}
								}
							}
						}
						HX_STACK_LINE(774)
						int tmp14 = format;		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(774)
						switch( (int)(tmp14)){
							case (int)2: {
								HX_STACK_LINE(774)
								{
									HX_STACK_LINE(774)
									int tmp15 = (int(pixel) >> int((int)8));		HX_STACK_VAR(tmp15,"tmp15");
									HX_STACK_LINE(774)
									int tmp16 = (int(tmp15) & int((int)255));		HX_STACK_VAR(tmp16,"tmp16");
									HX_STACK_LINE(774)
									int val = tmp16;		HX_STACK_VAR(val,"val");
									HX_STACK_LINE(774)
									{
										HX_STACK_LINE(774)
										::__hxcpp_memory_set_byte(data->buffer->b,(data->byteOffset + offset),val);
										HX_STACK_LINE(774)
										val;
									}
								}
								HX_STACK_LINE(774)
								{
									HX_STACK_LINE(774)
									int tmp15 = (int(pixel) >> int((int)16));		HX_STACK_VAR(tmp15,"tmp15");
									HX_STACK_LINE(774)
									int tmp16 = (int(tmp15) & int((int)255));		HX_STACK_VAR(tmp16,"tmp16");
									HX_STACK_LINE(774)
									int val = tmp16;		HX_STACK_VAR(val,"val");
									HX_STACK_LINE(774)
									{
										HX_STACK_LINE(774)
										::__hxcpp_memory_set_byte(data->buffer->b,(data->byteOffset + ((offset + (int)1))),val);
										HX_STACK_LINE(774)
										val;
									}
								}
								HX_STACK_LINE(774)
								{
									HX_STACK_LINE(774)
									int tmp15 = (int(pixel) >> int((int)24));		HX_STACK_VAR(tmp15,"tmp15");
									HX_STACK_LINE(774)
									int tmp16 = (int(tmp15) & int((int)255));		HX_STACK_VAR(tmp16,"tmp16");
									HX_STACK_LINE(774)
									int val = tmp16;		HX_STACK_VAR(val,"val");
									HX_STACK_LINE(774)
									{
										HX_STACK_LINE(774)
										::__hxcpp_memory_set_byte(data->buffer->b,(data->byteOffset + ((offset + (int)2))),val);
										HX_STACK_LINE(774)
										val;
									}
								}
								HX_STACK_LINE(774)
								{
									HX_STACK_LINE(774)
									int tmp15 = (int(pixel) & int((int)255));		HX_STACK_VAR(tmp15,"tmp15");
									HX_STACK_LINE(774)
									int val = tmp15;		HX_STACK_VAR(val,"val");
									HX_STACK_LINE(774)
									{
										HX_STACK_LINE(774)
										::__hxcpp_memory_set_byte(data->buffer->b,(data->byteOffset + ((offset + (int)3))),val);
										HX_STACK_LINE(774)
										val;
									}
								}
							}
							;break;
							case (int)0: {
								HX_STACK_LINE(774)
								{
									HX_STACK_LINE(774)
									int tmp15 = (int(pixel) >> int((int)24));		HX_STACK_VAR(tmp15,"tmp15");
									HX_STACK_LINE(774)
									int tmp16 = (int(tmp15) & int((int)255));		HX_STACK_VAR(tmp16,"tmp16");
									HX_STACK_LINE(774)
									int val = tmp16;		HX_STACK_VAR(val,"val");
									HX_STACK_LINE(774)
									{
										HX_STACK_LINE(774)
										::__hxcpp_memory_set_byte(data->buffer->b,(data->byteOffset + offset),val);
										HX_STACK_LINE(774)
										val;
									}
								}
								HX_STACK_LINE(774)
								{
									HX_STACK_LINE(774)
									int tmp15 = (int(pixel) >> int((int)16));		HX_STACK_VAR(tmp15,"tmp15");
									HX_STACK_LINE(774)
									int tmp16 = (int(tmp15) & int((int)255));		HX_STACK_VAR(tmp16,"tmp16");
									HX_STACK_LINE(774)
									int val = tmp16;		HX_STACK_VAR(val,"val");
									HX_STACK_LINE(774)
									{
										HX_STACK_LINE(774)
										::__hxcpp_memory_set_byte(data->buffer->b,(data->byteOffset + ((offset + (int)1))),val);
										HX_STACK_LINE(774)
										val;
									}
								}
								HX_STACK_LINE(774)
								{
									HX_STACK_LINE(774)
									int tmp15 = (int(pixel) >> int((int)8));		HX_STACK_VAR(tmp15,"tmp15");
									HX_STACK_LINE(774)
									int tmp16 = (int(tmp15) & int((int)255));		HX_STACK_VAR(tmp16,"tmp16");
									HX_STACK_LINE(774)
									int val = tmp16;		HX_STACK_VAR(val,"val");
									HX_STACK_LINE(774)
									{
										HX_STACK_LINE(774)
										::__hxcpp_memory_set_byte(data->buffer->b,(data->byteOffset + ((offset + (int)2))),val);
										HX_STACK_LINE(774)
										val;
									}
								}
								HX_STACK_LINE(774)
								{
									HX_STACK_LINE(774)
									int tmp15 = (int(pixel) & int((int)255));		HX_STACK_VAR(tmp15,"tmp15");
									HX_STACK_LINE(774)
									int val = tmp15;		HX_STACK_VAR(val,"val");
									HX_STACK_LINE(774)
									{
										HX_STACK_LINE(774)
										::__hxcpp_memory_set_byte(data->buffer->b,(data->byteOffset + ((offset + (int)3))),val);
										HX_STACK_LINE(774)
										val;
									}
								}
							}
							;break;
							case (int)1: {
								HX_STACK_LINE(774)
								{
									HX_STACK_LINE(774)
									int tmp15 = (int(pixel) & int((int)255));		HX_STACK_VAR(tmp15,"tmp15");
									HX_STACK_LINE(774)
									int val = tmp15;		HX_STACK_VAR(val,"val");
									HX_STACK_LINE(774)
									{
										HX_STACK_LINE(774)
										::__hxcpp_memory_set_byte(data->buffer->b,(data->byteOffset + offset),val);
										HX_STACK_LINE(774)
										val;
									}
								}
								HX_STACK_LINE(774)
								{
									HX_STACK_LINE(774)
									int tmp15 = (int(pixel) >> int((int)24));		HX_STACK_VAR(tmp15,"tmp15");
									HX_STACK_LINE(774)
									int tmp16 = (int(tmp15) & int((int)255));		HX_STACK_VAR(tmp16,"tmp16");
									HX_STACK_LINE(774)
									int val = tmp16;		HX_STACK_VAR(val,"val");
									HX_STACK_LINE(774)
									{
										HX_STACK_LINE(774)
										::__hxcpp_memory_set_byte(data->buffer->b,(data->byteOffset + ((offset + (int)1))),val);
										HX_STACK_LINE(774)
										val;
									}
								}
								HX_STACK_LINE(774)
								{
									HX_STACK_LINE(774)
									int tmp15 = (int(pixel) >> int((int)16));		HX_STACK_VAR(tmp15,"tmp15");
									HX_STACK_LINE(774)
									int tmp16 = (int(tmp15) & int((int)255));		HX_STACK_VAR(tmp16,"tmp16");
									HX_STACK_LINE(774)
									int val = tmp16;		HX_STACK_VAR(val,"val");
									HX_STACK_LINE(774)
									{
										HX_STACK_LINE(774)
										::__hxcpp_memory_set_byte(data->buffer->b,(data->byteOffset + ((offset + (int)2))),val);
										HX_STACK_LINE(774)
										val;
									}
								}
								HX_STACK_LINE(774)
								{
									HX_STACK_LINE(774)
									int tmp15 = (int(pixel) >> int((int)8));		HX_STACK_VAR(tmp15,"tmp15");
									HX_STACK_LINE(774)
									int tmp16 = (int(tmp15) & int((int)255));		HX_STACK_VAR(tmp16,"tmp16");
									HX_STACK_LINE(774)
									int val = tmp16;		HX_STACK_VAR(val,"val");
									HX_STACK_LINE(774)
									{
										HX_STACK_LINE(774)
										::__hxcpp_memory_set_byte(data->buffer->b,(data->byteOffset + ((offset + (int)3))),val);
										HX_STACK_LINE(774)
										val;
									}
								}
							}
							;break;
						}
					}
				}
			}
		}
		HX_STACK_LINE(780)
		image->buffer->premultiplied = true;
		HX_STACK_LINE(781)
		image->dirty = true;
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(ImageDataUtil_obj,multiplyAlpha,(void))

Void ImageDataUtil_obj::resize( ::lime::graphics::Image image,int newWidth,int newHeight){
{
		HX_STACK_FRAME("lime.graphics.utils.ImageDataUtil","resize",0x3b9e8e22,"lime.graphics.utils.ImageDataUtil.resize","lime/graphics/utils/ImageDataUtil.hx",786,0x494d921f)
		HX_STACK_ARG(image,"image")
		HX_STACK_ARG(newWidth,"newWidth")
		HX_STACK_ARG(newHeight,"newHeight")
		HX_STACK_LINE(788)
		::lime::graphics::ImageBuffer buffer = image->buffer;		HX_STACK_VAR(buffer,"buffer");
		HX_STACK_LINE(789)
		bool tmp = (buffer->width == newWidth);		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(789)
		bool tmp1;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(789)
		if ((tmp)){
			HX_STACK_LINE(789)
			tmp1 = (buffer->height == newHeight);
		}
		else{
			HX_STACK_LINE(789)
			tmp1 = false;
		}
		HX_STACK_LINE(789)
		if ((tmp1)){
			HX_STACK_LINE(789)
			return null();
		}
		HX_STACK_LINE(790)
		::lime::utils::ArrayBufferView tmp2;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(790)
		{
			HX_STACK_LINE(790)
			int tmp3 = (newWidth * newHeight);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(790)
			int tmp4 = (tmp3 * (int)4);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(790)
			Dynamic elements = tmp4;		HX_STACK_VAR(elements,"elements");
			HX_STACK_LINE(790)
			::lime::utils::ArrayBufferView this1;		HX_STACK_VAR(this1,"this1");
			HX_STACK_LINE(790)
			bool tmp5 = (elements != null());		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(790)
			if ((tmp5)){
				HX_STACK_LINE(790)
				::lime::utils::ArrayBufferView tmp6 = ::lime::utils::ArrayBufferView_obj::__new(elements,(int)4);		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(790)
				this1 = tmp6;
			}
			else{
				HX_STACK_LINE(790)
				bool tmp6 = false;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(790)
				if ((tmp6)){
					HX_STACK_LINE(790)
					::lime::utils::ArrayBufferView tmp7;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(790)
					{
						HX_STACK_LINE(790)
						::lime::utils::ArrayBufferView tmp8 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)4);		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(790)
						::lime::utils::ArrayBufferView _this = tmp8;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(790)
						_this->byteOffset = (int)0;
						HX_STACK_LINE(790)
						int tmp9 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(790)
						_this->length = tmp9;
						HX_STACK_LINE(790)
						int tmp10 = (_this->length * _this->bytesPerElement);		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(790)
						_this->byteLength = tmp10;
						HX_STACK_LINE(790)
						::haxe::io::Bytes tmp11;		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(790)
						{
							HX_STACK_LINE(790)
							::haxe::io::Bytes this2;		HX_STACK_VAR(this2,"this2");
							HX_STACK_LINE(790)
							int tmp12 = _this->byteLength;		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(790)
							::haxe::io::Bytes tmp13 = ::haxe::io::Bytes_obj::alloc(tmp12);		HX_STACK_VAR(tmp13,"tmp13");
							HX_STACK_LINE(790)
							this2 = tmp13;
							HX_STACK_LINE(790)
							tmp11 = this2;
						}
						HX_STACK_LINE(790)
						_this->buffer = tmp11;
						HX_STACK_LINE(790)
						_this->copyFromArray(((Array< Float >)(null())),null());
						HX_STACK_LINE(790)
						tmp7 = _this;
					}
					HX_STACK_LINE(790)
					this1 = tmp7;
				}
				else{
					HX_STACK_LINE(790)
					bool tmp7 = false;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(790)
					if ((tmp7)){
						HX_STACK_LINE(790)
						::lime::utils::ArrayBufferView tmp8;		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(790)
						{
							HX_STACK_LINE(790)
							::lime::utils::ArrayBufferView tmp9 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)4);		HX_STACK_VAR(tmp9,"tmp9");
							HX_STACK_LINE(790)
							::lime::utils::ArrayBufferView _this = tmp9;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(790)
							::haxe::io::Bytes tmp10 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp10,"tmp10");
							HX_STACK_LINE(790)
							::haxe::io::Bytes srcData = tmp10;		HX_STACK_VAR(srcData,"srcData");
							HX_STACK_LINE(790)
							int tmp11 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp11,"tmp11");
							HX_STACK_LINE(790)
							int srcLength = tmp11;		HX_STACK_VAR(srcLength,"srcLength");
							HX_STACK_LINE(790)
							int tmp12 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(790)
							int srcByteOffset = tmp12;		HX_STACK_VAR(srcByteOffset,"srcByteOffset");
							HX_STACK_LINE(790)
							int tmp13 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp13,"tmp13");
							HX_STACK_LINE(790)
							int srcElementSize = tmp13;		HX_STACK_VAR(srcElementSize,"srcElementSize");
							HX_STACK_LINE(790)
							int elementSize = _this->bytesPerElement;		HX_STACK_VAR(elementSize,"elementSize");
							HX_STACK_LINE(790)
							int tmp14 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(790)
							int tmp15 = _this->type;		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(790)
							bool tmp16 = (tmp14 == tmp15);		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(790)
							if ((tmp16)){
								HX_STACK_LINE(790)
								int srcLength1 = srcData->length;		HX_STACK_VAR(srcLength1,"srcLength1");
								HX_STACK_LINE(790)
								int tmp17 = (srcLength1 - srcByteOffset);		HX_STACK_VAR(tmp17,"tmp17");
								HX_STACK_LINE(790)
								int cloneLength = tmp17;		HX_STACK_VAR(cloneLength,"cloneLength");
								HX_STACK_LINE(790)
								::haxe::io::Bytes tmp18;		HX_STACK_VAR(tmp18,"tmp18");
								HX_STACK_LINE(790)
								{
									HX_STACK_LINE(790)
									::haxe::io::Bytes this2;		HX_STACK_VAR(this2,"this2");
									HX_STACK_LINE(790)
									int tmp19 = cloneLength;		HX_STACK_VAR(tmp19,"tmp19");
									HX_STACK_LINE(790)
									::haxe::io::Bytes tmp20 = ::haxe::io::Bytes_obj::alloc(tmp19);		HX_STACK_VAR(tmp20,"tmp20");
									HX_STACK_LINE(790)
									this2 = tmp20;
									HX_STACK_LINE(790)
									tmp18 = this2;
								}
								HX_STACK_LINE(790)
								_this->buffer = tmp18;
								HX_STACK_LINE(790)
								::haxe::io::Bytes tmp19 = srcData;		HX_STACK_VAR(tmp19,"tmp19");
								HX_STACK_LINE(790)
								int tmp20 = srcByteOffset;		HX_STACK_VAR(tmp20,"tmp20");
								HX_STACK_LINE(790)
								int tmp21 = cloneLength;		HX_STACK_VAR(tmp21,"tmp21");
								HX_STACK_LINE(790)
								_this->buffer->blit((int)0,tmp19,tmp20,tmp21);
							}
							else{
								HX_STACK_LINE(790)
								HX_STACK_DO_THROW(HX_HCSTRING("unimplemented","\x09","\x2f","\x74","\xb4"));
							}
							HX_STACK_LINE(790)
							int tmp17 = (_this->bytesPerElement * srcLength);		HX_STACK_VAR(tmp17,"tmp17");
							HX_STACK_LINE(790)
							_this->byteLength = tmp17;
							HX_STACK_LINE(790)
							_this->byteOffset = (int)0;
							HX_STACK_LINE(790)
							_this->length = srcLength;
							HX_STACK_LINE(790)
							tmp8 = _this;
						}
						HX_STACK_LINE(790)
						this1 = tmp8;
					}
					else{
						HX_STACK_LINE(790)
						bool tmp8 = false;		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(790)
						if ((tmp8)){
							HX_STACK_LINE(790)
							::lime::utils::ArrayBufferView tmp9;		HX_STACK_VAR(tmp9,"tmp9");
							HX_STACK_LINE(790)
							{
								HX_STACK_LINE(790)
								::lime::utils::ArrayBufferView tmp10 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)4);		HX_STACK_VAR(tmp10,"tmp10");
								HX_STACK_LINE(790)
								::lime::utils::ArrayBufferView _this = tmp10;		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(790)
								bool tmp11 = false;		HX_STACK_VAR(tmp11,"tmp11");
								HX_STACK_LINE(790)
								if ((tmp11)){
									HX_STACK_LINE(790)
									HX_STACK_DO_THROW(::lime::utils::_ArrayBufferView::TAError_obj::RangeError);
								}
								HX_STACK_LINE(790)
								int tmp12 = hx::Mod((int)0,_this->bytesPerElement);		HX_STACK_VAR(tmp12,"tmp12");
								HX_STACK_LINE(790)
								bool tmp13 = (tmp12 != (int)0);		HX_STACK_VAR(tmp13,"tmp13");
								HX_STACK_LINE(790)
								if ((tmp13)){
									HX_STACK_LINE(790)
									HX_STACK_DO_THROW(::lime::utils::_ArrayBufferView::TAError_obj::RangeError);
								}
								HX_STACK_LINE(790)
								int tmp14 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp14,"tmp14");
								HX_STACK_LINE(790)
								int bufferByteLength = tmp14;		HX_STACK_VAR(bufferByteLength,"bufferByteLength");
								HX_STACK_LINE(790)
								int elementSize = _this->bytesPerElement;		HX_STACK_VAR(elementSize,"elementSize");
								HX_STACK_LINE(790)
								int newByteLength = bufferByteLength;		HX_STACK_VAR(newByteLength,"newByteLength");
								HX_STACK_LINE(790)
								bool tmp15 = true;		HX_STACK_VAR(tmp15,"tmp15");
								HX_STACK_LINE(790)
								if ((tmp15)){
									HX_STACK_LINE(790)
									int tmp16 = bufferByteLength;		HX_STACK_VAR(tmp16,"tmp16");
									HX_STACK_LINE(790)
									newByteLength = tmp16;
									HX_STACK_LINE(790)
									int tmp17 = hx::Mod(bufferByteLength,_this->bytesPerElement);		HX_STACK_VAR(tmp17,"tmp17");
									HX_STACK_LINE(790)
									bool tmp18 = (tmp17 != (int)0);		HX_STACK_VAR(tmp18,"tmp18");
									HX_STACK_LINE(790)
									if ((tmp18)){
										HX_STACK_LINE(790)
										HX_STACK_DO_THROW(::lime::utils::_ArrayBufferView::TAError_obj::RangeError);
									}
									HX_STACK_LINE(790)
									bool tmp19 = (newByteLength < (int)0);		HX_STACK_VAR(tmp19,"tmp19");
									HX_STACK_LINE(790)
									if ((tmp19)){
										HX_STACK_LINE(790)
										HX_STACK_DO_THROW(::lime::utils::_ArrayBufferView::TAError_obj::RangeError);
									}
								}
								else{
									HX_STACK_LINE(790)
									int tmp16 = (null() * _this->bytesPerElement);		HX_STACK_VAR(tmp16,"tmp16");
									HX_STACK_LINE(790)
									newByteLength = tmp16;
									HX_STACK_LINE(790)
									int tmp17 = newByteLength;		HX_STACK_VAR(tmp17,"tmp17");
									HX_STACK_LINE(790)
									int newRange = tmp17;		HX_STACK_VAR(newRange,"newRange");
									HX_STACK_LINE(790)
									bool tmp18 = (newRange > bufferByteLength);		HX_STACK_VAR(tmp18,"tmp18");
									HX_STACK_LINE(790)
									if ((tmp18)){
										HX_STACK_LINE(790)
										HX_STACK_DO_THROW(::lime::utils::_ArrayBufferView::TAError_obj::RangeError);
									}
								}
								HX_STACK_LINE(790)
								_this->buffer = null();
								HX_STACK_LINE(790)
								_this->byteOffset = (int)0;
								HX_STACK_LINE(790)
								_this->byteLength = newByteLength;
								HX_STACK_LINE(790)
								Float tmp16 = (Float(newByteLength) / Float(_this->bytesPerElement));		HX_STACK_VAR(tmp16,"tmp16");
								HX_STACK_LINE(790)
								int tmp17 = ::Std_obj::_int(tmp16);		HX_STACK_VAR(tmp17,"tmp17");
								HX_STACK_LINE(790)
								_this->length = tmp17;
								HX_STACK_LINE(790)
								tmp9 = _this;
							}
							HX_STACK_LINE(790)
							this1 = tmp9;
						}
						else{
							HX_STACK_LINE(790)
							HX_STACK_DO_THROW(HX_HCSTRING("Invalid constructor arguments for Uint8Array","\x8b","\x64","\x02","\xe4"));
						}
					}
				}
			}
			HX_STACK_LINE(790)
			tmp2 = this1;
		}
		HX_STACK_LINE(790)
		int tmp3 = newWidth;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(790)
		int tmp4 = newHeight;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(790)
		::lime::graphics::ImageBuffer tmp5 = ::lime::graphics::ImageBuffer_obj::__new(tmp2,tmp3,tmp4,null(),null());		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(790)
		::lime::graphics::ImageBuffer newBuffer = tmp5;		HX_STACK_VAR(newBuffer,"newBuffer");
		HX_STACK_LINE(793)
		bool tmp6 = ::lime::_system::System_obj::disableCFFI;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(793)
		bool tmp7 = !(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(793)
		if ((tmp7)){
			HX_STACK_LINE(793)
			::lime::graphics::Image tmp8 = image;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(793)
			::lime::graphics::ImageBuffer tmp9 = newBuffer;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(793)
			int tmp10 = newWidth;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(793)
			int tmp11 = newHeight;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(793)
			::lime::graphics::utils::ImageDataUtil_obj::lime_image_data_util_resize(tmp8,tmp9,tmp10,tmp11);
		}
		else{
			HX_STACK_LINE(797)
			int imageWidth = image->width;		HX_STACK_VAR(imageWidth,"imageWidth");
			HX_STACK_LINE(798)
			int imageHeight = image->height;		HX_STACK_VAR(imageHeight,"imageHeight");
			HX_STACK_LINE(800)
			::lime::utils::ArrayBufferView tmp8 = image->get_data();		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(800)
			::lime::utils::ArrayBufferView data = tmp8;		HX_STACK_VAR(data,"data");
			HX_STACK_LINE(801)
			::lime::utils::ArrayBufferView newData = newBuffer->data;		HX_STACK_VAR(newData,"newData");
			HX_STACK_LINE(802)
			int sourceIndex;		HX_STACK_VAR(sourceIndex,"sourceIndex");
			HX_STACK_LINE(802)
			int sourceIndexX;		HX_STACK_VAR(sourceIndexX,"sourceIndexX");
			HX_STACK_LINE(802)
			int sourceIndexY;		HX_STACK_VAR(sourceIndexY,"sourceIndexY");
			HX_STACK_LINE(802)
			int sourceIndexXY;		HX_STACK_VAR(sourceIndexXY,"sourceIndexXY");
			HX_STACK_LINE(802)
			int index;		HX_STACK_VAR(index,"index");
			HX_STACK_LINE(803)
			int sourceX;		HX_STACK_VAR(sourceX,"sourceX");
			HX_STACK_LINE(803)
			int sourceY;		HX_STACK_VAR(sourceY,"sourceY");
			HX_STACK_LINE(804)
			Float u;		HX_STACK_VAR(u,"u");
			HX_STACK_LINE(804)
			Float v;		HX_STACK_VAR(v,"v");
			HX_STACK_LINE(804)
			Float uRatio;		HX_STACK_VAR(uRatio,"uRatio");
			HX_STACK_LINE(804)
			Float vRatio;		HX_STACK_VAR(vRatio,"vRatio");
			HX_STACK_LINE(804)
			Float uOpposite;		HX_STACK_VAR(uOpposite,"uOpposite");
			HX_STACK_LINE(804)
			Float vOpposite;		HX_STACK_VAR(vOpposite,"vOpposite");
			HX_STACK_LINE(806)
			{
				HX_STACK_LINE(806)
				int _g = (int)0;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(806)
				while((true)){
					HX_STACK_LINE(806)
					bool tmp9 = (_g < newHeight);		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(806)
					bool tmp10 = !(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(806)
					if ((tmp10)){
						HX_STACK_LINE(806)
						break;
					}
					HX_STACK_LINE(806)
					int tmp11 = (_g)++;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(806)
					int y = tmp11;		HX_STACK_VAR(y,"y");
					HX_STACK_LINE(808)
					{
						HX_STACK_LINE(808)
						int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
						HX_STACK_LINE(808)
						while((true)){
							HX_STACK_LINE(808)
							bool tmp12 = (_g1 < newWidth);		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(808)
							bool tmp13 = !(tmp12);		HX_STACK_VAR(tmp13,"tmp13");
							HX_STACK_LINE(808)
							if ((tmp13)){
								HX_STACK_LINE(808)
								break;
							}
							HX_STACK_LINE(808)
							int tmp14 = (_g1)++;		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(808)
							int x = tmp14;		HX_STACK_VAR(x,"x");
							HX_STACK_LINE(812)
							Float tmp15 = (x + ((Float)0.5));		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(812)
							int tmp16 = newWidth;		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(812)
							Float tmp17 = (Float(tmp15) / Float(tmp16));		HX_STACK_VAR(tmp17,"tmp17");
							HX_STACK_LINE(812)
							int tmp18 = imageWidth;		HX_STACK_VAR(tmp18,"tmp18");
							HX_STACK_LINE(812)
							Float tmp19 = (tmp17 * tmp18);		HX_STACK_VAR(tmp19,"tmp19");
							HX_STACK_LINE(812)
							Float tmp20 = (tmp19 - ((Float)0.5));		HX_STACK_VAR(tmp20,"tmp20");
							HX_STACK_LINE(812)
							u = tmp20;
							HX_STACK_LINE(813)
							Float tmp21 = (y + ((Float)0.5));		HX_STACK_VAR(tmp21,"tmp21");
							HX_STACK_LINE(813)
							int tmp22 = newHeight;		HX_STACK_VAR(tmp22,"tmp22");
							HX_STACK_LINE(813)
							Float tmp23 = (Float(tmp21) / Float(tmp22));		HX_STACK_VAR(tmp23,"tmp23");
							HX_STACK_LINE(813)
							int tmp24 = imageHeight;		HX_STACK_VAR(tmp24,"tmp24");
							HX_STACK_LINE(813)
							Float tmp25 = (tmp23 * tmp24);		HX_STACK_VAR(tmp25,"tmp25");
							HX_STACK_LINE(813)
							Float tmp26 = (tmp25 - ((Float)0.5));		HX_STACK_VAR(tmp26,"tmp26");
							HX_STACK_LINE(813)
							v = tmp26;
							HX_STACK_LINE(815)
							Float tmp27 = u;		HX_STACK_VAR(tmp27,"tmp27");
							HX_STACK_LINE(815)
							int tmp28 = ::Std_obj::_int(tmp27);		HX_STACK_VAR(tmp28,"tmp28");
							HX_STACK_LINE(815)
							sourceX = tmp28;
							HX_STACK_LINE(816)
							Float tmp29 = v;		HX_STACK_VAR(tmp29,"tmp29");
							HX_STACK_LINE(816)
							int tmp30 = ::Std_obj::_int(tmp29);		HX_STACK_VAR(tmp30,"tmp30");
							HX_STACK_LINE(816)
							sourceY = tmp30;
							HX_STACK_LINE(818)
							int tmp31 = (sourceY * imageWidth);		HX_STACK_VAR(tmp31,"tmp31");
							HX_STACK_LINE(818)
							int tmp32 = sourceX;		HX_STACK_VAR(tmp32,"tmp32");
							HX_STACK_LINE(818)
							int tmp33 = (tmp31 + tmp32);		HX_STACK_VAR(tmp33,"tmp33");
							HX_STACK_LINE(818)
							int tmp34 = (tmp33 * (int)4);		HX_STACK_VAR(tmp34,"tmp34");
							HX_STACK_LINE(818)
							sourceIndex = tmp34;
							HX_STACK_LINE(819)
							int tmp35 = sourceX;		HX_STACK_VAR(tmp35,"tmp35");
							HX_STACK_LINE(819)
							int tmp36 = (imageWidth - (int)1);		HX_STACK_VAR(tmp36,"tmp36");
							HX_STACK_LINE(819)
							bool tmp37 = (tmp35 < tmp36);		HX_STACK_VAR(tmp37,"tmp37");
							HX_STACK_LINE(819)
							int tmp38;		HX_STACK_VAR(tmp38,"tmp38");
							HX_STACK_LINE(819)
							if ((tmp37)){
								HX_STACK_LINE(819)
								tmp38 = (sourceIndex + (int)4);
							}
							else{
								HX_STACK_LINE(819)
								tmp38 = sourceIndex;
							}
							HX_STACK_LINE(819)
							sourceIndexX = tmp38;
							HX_STACK_LINE(820)
							int tmp39 = sourceY;		HX_STACK_VAR(tmp39,"tmp39");
							HX_STACK_LINE(820)
							int tmp40 = (imageHeight - (int)1);		HX_STACK_VAR(tmp40,"tmp40");
							HX_STACK_LINE(820)
							bool tmp41 = (tmp39 < tmp40);		HX_STACK_VAR(tmp41,"tmp41");
							HX_STACK_LINE(820)
							int tmp42;		HX_STACK_VAR(tmp42,"tmp42");
							HX_STACK_LINE(820)
							if ((tmp41)){
								HX_STACK_LINE(820)
								int tmp43 = sourceIndex;		HX_STACK_VAR(tmp43,"tmp43");
								HX_STACK_LINE(820)
								int tmp44 = (imageWidth * (int)4);		HX_STACK_VAR(tmp44,"tmp44");
								HX_STACK_LINE(820)
								tmp42 = (tmp43 + tmp44);
							}
							else{
								HX_STACK_LINE(820)
								tmp42 = sourceIndex;
							}
							HX_STACK_LINE(820)
							sourceIndexY = tmp42;
							HX_STACK_LINE(821)
							bool tmp43 = (sourceIndexX != sourceIndex);		HX_STACK_VAR(tmp43,"tmp43");
							HX_STACK_LINE(821)
							int tmp44;		HX_STACK_VAR(tmp44,"tmp44");
							HX_STACK_LINE(821)
							if ((tmp43)){
								HX_STACK_LINE(821)
								tmp44 = (sourceIndexY + (int)4);
							}
							else{
								HX_STACK_LINE(821)
								tmp44 = sourceIndexY;
							}
							HX_STACK_LINE(821)
							sourceIndexXY = tmp44;
							HX_STACK_LINE(823)
							int tmp45 = (y * newWidth);		HX_STACK_VAR(tmp45,"tmp45");
							HX_STACK_LINE(823)
							int tmp46 = x;		HX_STACK_VAR(tmp46,"tmp46");
							HX_STACK_LINE(823)
							int tmp47 = (tmp45 + tmp46);		HX_STACK_VAR(tmp47,"tmp47");
							HX_STACK_LINE(823)
							int tmp48 = (tmp47 * (int)4);		HX_STACK_VAR(tmp48,"tmp48");
							HX_STACK_LINE(823)
							index = tmp48;
							HX_STACK_LINE(825)
							Float tmp49 = (u - sourceX);		HX_STACK_VAR(tmp49,"tmp49");
							HX_STACK_LINE(825)
							uRatio = tmp49;
							HX_STACK_LINE(826)
							Float tmp50 = (v - sourceY);		HX_STACK_VAR(tmp50,"tmp50");
							HX_STACK_LINE(826)
							vRatio = tmp50;
							HX_STACK_LINE(827)
							Float tmp51 = ((int)1 - uRatio);		HX_STACK_VAR(tmp51,"tmp51");
							HX_STACK_LINE(827)
							uOpposite = tmp51;
							HX_STACK_LINE(828)
							Float tmp52 = ((int)1 - vRatio);		HX_STACK_VAR(tmp52,"tmp52");
							HX_STACK_LINE(828)
							vOpposite = tmp52;
							HX_STACK_LINE(830)
							{
								HX_STACK_LINE(830)
								Float tmp53;		HX_STACK_VAR(tmp53,"tmp53");
								HX_STACK_LINE(830)
								{
									HX_STACK_LINE(830)
									int tmp54 = ::__hxcpp_memory_get_byte(data->buffer->b,(data->byteOffset + sourceIndex));		HX_STACK_VAR(tmp54,"tmp54");
									HX_STACK_LINE(830)
									Dynamic tmp55 = (int(tmp54) & int((int)255));		HX_STACK_VAR(tmp55,"tmp55");
									HX_STACK_LINE(830)
									int a = tmp55;		HX_STACK_VAR(a,"a");
									HX_STACK_LINE(830)
									Float tmp56;		HX_STACK_VAR(tmp56,"tmp56");
									HX_STACK_LINE(830)
									{
										HX_STACK_LINE(830)
										int _int = a;		HX_STACK_VAR(_int,"int");
										HX_STACK_LINE(830)
										bool tmp57 = (_int < (int)0);		HX_STACK_VAR(tmp57,"tmp57");
										HX_STACK_LINE(830)
										if ((tmp57)){
											HX_STACK_LINE(830)
											tmp56 = (((Float)4294967296.0) + _int);
										}
										else{
											HX_STACK_LINE(830)
											tmp56 = (_int + ((Float)0.0));
										}
									}
									HX_STACK_LINE(830)
									Float tmp57 = uOpposite;		HX_STACK_VAR(tmp57,"tmp57");
									HX_STACK_LINE(830)
									tmp53 = (tmp56 * tmp57);
								}
								HX_STACK_LINE(830)
								Float tmp54;		HX_STACK_VAR(tmp54,"tmp54");
								HX_STACK_LINE(830)
								{
									HX_STACK_LINE(830)
									int tmp55 = ::__hxcpp_memory_get_byte(data->buffer->b,(data->byteOffset + sourceIndexX));		HX_STACK_VAR(tmp55,"tmp55");
									HX_STACK_LINE(830)
									Dynamic tmp56 = (int(tmp55) & int((int)255));		HX_STACK_VAR(tmp56,"tmp56");
									HX_STACK_LINE(830)
									int a = tmp56;		HX_STACK_VAR(a,"a");
									HX_STACK_LINE(830)
									Float tmp57;		HX_STACK_VAR(tmp57,"tmp57");
									HX_STACK_LINE(830)
									{
										HX_STACK_LINE(830)
										int _int = a;		HX_STACK_VAR(_int,"int");
										HX_STACK_LINE(830)
										bool tmp58 = (_int < (int)0);		HX_STACK_VAR(tmp58,"tmp58");
										HX_STACK_LINE(830)
										if ((tmp58)){
											HX_STACK_LINE(830)
											tmp57 = (((Float)4294967296.0) + _int);
										}
										else{
											HX_STACK_LINE(830)
											tmp57 = (_int + ((Float)0.0));
										}
									}
									HX_STACK_LINE(830)
									Float tmp58 = uRatio;		HX_STACK_VAR(tmp58,"tmp58");
									HX_STACK_LINE(830)
									tmp54 = (tmp57 * tmp58);
								}
								HX_STACK_LINE(830)
								Float tmp55 = (tmp53 + tmp54);		HX_STACK_VAR(tmp55,"tmp55");
								HX_STACK_LINE(830)
								Float tmp56 = vOpposite;		HX_STACK_VAR(tmp56,"tmp56");
								HX_STACK_LINE(830)
								Float tmp57 = (tmp55 * tmp56);		HX_STACK_VAR(tmp57,"tmp57");
								HX_STACK_LINE(830)
								Float tmp58;		HX_STACK_VAR(tmp58,"tmp58");
								HX_STACK_LINE(830)
								{
									HX_STACK_LINE(830)
									int tmp59 = ::__hxcpp_memory_get_byte(data->buffer->b,(data->byteOffset + sourceIndexY));		HX_STACK_VAR(tmp59,"tmp59");
									HX_STACK_LINE(830)
									Dynamic tmp60 = (int(tmp59) & int((int)255));		HX_STACK_VAR(tmp60,"tmp60");
									HX_STACK_LINE(830)
									int a = tmp60;		HX_STACK_VAR(a,"a");
									HX_STACK_LINE(830)
									Float tmp61;		HX_STACK_VAR(tmp61,"tmp61");
									HX_STACK_LINE(830)
									{
										HX_STACK_LINE(830)
										int _int = a;		HX_STACK_VAR(_int,"int");
										HX_STACK_LINE(830)
										bool tmp62 = (_int < (int)0);		HX_STACK_VAR(tmp62,"tmp62");
										HX_STACK_LINE(830)
										if ((tmp62)){
											HX_STACK_LINE(830)
											tmp61 = (((Float)4294967296.0) + _int);
										}
										else{
											HX_STACK_LINE(830)
											tmp61 = (_int + ((Float)0.0));
										}
									}
									HX_STACK_LINE(830)
									Float tmp62 = uOpposite;		HX_STACK_VAR(tmp62,"tmp62");
									HX_STACK_LINE(830)
									tmp58 = (tmp61 * tmp62);
								}
								HX_STACK_LINE(830)
								Float tmp59;		HX_STACK_VAR(tmp59,"tmp59");
								HX_STACK_LINE(830)
								{
									HX_STACK_LINE(830)
									int tmp60 = ::__hxcpp_memory_get_byte(data->buffer->b,(data->byteOffset + sourceIndexXY));		HX_STACK_VAR(tmp60,"tmp60");
									HX_STACK_LINE(830)
									Dynamic tmp61 = (int(tmp60) & int((int)255));		HX_STACK_VAR(tmp61,"tmp61");
									HX_STACK_LINE(830)
									int a = tmp61;		HX_STACK_VAR(a,"a");
									HX_STACK_LINE(830)
									Float tmp62;		HX_STACK_VAR(tmp62,"tmp62");
									HX_STACK_LINE(830)
									{
										HX_STACK_LINE(830)
										int _int = a;		HX_STACK_VAR(_int,"int");
										HX_STACK_LINE(830)
										bool tmp63 = (_int < (int)0);		HX_STACK_VAR(tmp63,"tmp63");
										HX_STACK_LINE(830)
										if ((tmp63)){
											HX_STACK_LINE(830)
											tmp62 = (((Float)4294967296.0) + _int);
										}
										else{
											HX_STACK_LINE(830)
											tmp62 = (_int + ((Float)0.0));
										}
									}
									HX_STACK_LINE(830)
									Float tmp63 = uRatio;		HX_STACK_VAR(tmp63,"tmp63");
									HX_STACK_LINE(830)
									tmp59 = (tmp62 * tmp63);
								}
								HX_STACK_LINE(830)
								Float tmp60 = (tmp58 + tmp59);		HX_STACK_VAR(tmp60,"tmp60");
								HX_STACK_LINE(830)
								Float tmp61 = vRatio;		HX_STACK_VAR(tmp61,"tmp61");
								HX_STACK_LINE(830)
								Float tmp62 = (tmp60 * tmp61);		HX_STACK_VAR(tmp62,"tmp62");
								HX_STACK_LINE(830)
								Float tmp63 = (tmp57 + tmp62);		HX_STACK_VAR(tmp63,"tmp63");
								HX_STACK_LINE(830)
								int tmp64 = ::Std_obj::_int(tmp63);		HX_STACK_VAR(tmp64,"tmp64");
								HX_STACK_LINE(830)
								int val = tmp64;		HX_STACK_VAR(val,"val");
								HX_STACK_LINE(830)
								{
									HX_STACK_LINE(830)
									::__hxcpp_memory_set_byte(newData->buffer->b,(newData->byteOffset + index),val);
									HX_STACK_LINE(830)
									val;
								}
							}
							HX_STACK_LINE(831)
							{
								HX_STACK_LINE(831)
								Float tmp53;		HX_STACK_VAR(tmp53,"tmp53");
								HX_STACK_LINE(831)
								{
									HX_STACK_LINE(831)
									int tmp54 = ::__hxcpp_memory_get_byte(data->buffer->b,(data->byteOffset + ((sourceIndex + (int)1))));		HX_STACK_VAR(tmp54,"tmp54");
									HX_STACK_LINE(831)
									Dynamic tmp55 = (int(tmp54) & int((int)255));		HX_STACK_VAR(tmp55,"tmp55");
									HX_STACK_LINE(831)
									int a = tmp55;		HX_STACK_VAR(a,"a");
									HX_STACK_LINE(831)
									Float tmp56;		HX_STACK_VAR(tmp56,"tmp56");
									HX_STACK_LINE(831)
									{
										HX_STACK_LINE(831)
										int _int = a;		HX_STACK_VAR(_int,"int");
										HX_STACK_LINE(831)
										bool tmp57 = (_int < (int)0);		HX_STACK_VAR(tmp57,"tmp57");
										HX_STACK_LINE(831)
										if ((tmp57)){
											HX_STACK_LINE(831)
											tmp56 = (((Float)4294967296.0) + _int);
										}
										else{
											HX_STACK_LINE(831)
											tmp56 = (_int + ((Float)0.0));
										}
									}
									HX_STACK_LINE(831)
									Float tmp57 = uOpposite;		HX_STACK_VAR(tmp57,"tmp57");
									HX_STACK_LINE(831)
									tmp53 = (tmp56 * tmp57);
								}
								HX_STACK_LINE(831)
								Float tmp54;		HX_STACK_VAR(tmp54,"tmp54");
								HX_STACK_LINE(831)
								{
									HX_STACK_LINE(831)
									int tmp55 = ::__hxcpp_memory_get_byte(data->buffer->b,(data->byteOffset + ((sourceIndexX + (int)1))));		HX_STACK_VAR(tmp55,"tmp55");
									HX_STACK_LINE(831)
									Dynamic tmp56 = (int(tmp55) & int((int)255));		HX_STACK_VAR(tmp56,"tmp56");
									HX_STACK_LINE(831)
									int a = tmp56;		HX_STACK_VAR(a,"a");
									HX_STACK_LINE(831)
									Float tmp57;		HX_STACK_VAR(tmp57,"tmp57");
									HX_STACK_LINE(831)
									{
										HX_STACK_LINE(831)
										int _int = a;		HX_STACK_VAR(_int,"int");
										HX_STACK_LINE(831)
										bool tmp58 = (_int < (int)0);		HX_STACK_VAR(tmp58,"tmp58");
										HX_STACK_LINE(831)
										if ((tmp58)){
											HX_STACK_LINE(831)
											tmp57 = (((Float)4294967296.0) + _int);
										}
										else{
											HX_STACK_LINE(831)
											tmp57 = (_int + ((Float)0.0));
										}
									}
									HX_STACK_LINE(831)
									Float tmp58 = uRatio;		HX_STACK_VAR(tmp58,"tmp58");
									HX_STACK_LINE(831)
									tmp54 = (tmp57 * tmp58);
								}
								HX_STACK_LINE(831)
								Float tmp55 = (tmp53 + tmp54);		HX_STACK_VAR(tmp55,"tmp55");
								HX_STACK_LINE(831)
								Float tmp56 = vOpposite;		HX_STACK_VAR(tmp56,"tmp56");
								HX_STACK_LINE(831)
								Float tmp57 = (tmp55 * tmp56);		HX_STACK_VAR(tmp57,"tmp57");
								HX_STACK_LINE(831)
								Float tmp58;		HX_STACK_VAR(tmp58,"tmp58");
								HX_STACK_LINE(831)
								{
									HX_STACK_LINE(831)
									int tmp59 = ::__hxcpp_memory_get_byte(data->buffer->b,(data->byteOffset + ((sourceIndexY + (int)1))));		HX_STACK_VAR(tmp59,"tmp59");
									HX_STACK_LINE(831)
									Dynamic tmp60 = (int(tmp59) & int((int)255));		HX_STACK_VAR(tmp60,"tmp60");
									HX_STACK_LINE(831)
									int a = tmp60;		HX_STACK_VAR(a,"a");
									HX_STACK_LINE(831)
									Float tmp61;		HX_STACK_VAR(tmp61,"tmp61");
									HX_STACK_LINE(831)
									{
										HX_STACK_LINE(831)
										int _int = a;		HX_STACK_VAR(_int,"int");
										HX_STACK_LINE(831)
										bool tmp62 = (_int < (int)0);		HX_STACK_VAR(tmp62,"tmp62");
										HX_STACK_LINE(831)
										if ((tmp62)){
											HX_STACK_LINE(831)
											tmp61 = (((Float)4294967296.0) + _int);
										}
										else{
											HX_STACK_LINE(831)
											tmp61 = (_int + ((Float)0.0));
										}
									}
									HX_STACK_LINE(831)
									Float tmp62 = uOpposite;		HX_STACK_VAR(tmp62,"tmp62");
									HX_STACK_LINE(831)
									tmp58 = (tmp61 * tmp62);
								}
								HX_STACK_LINE(831)
								Float tmp59;		HX_STACK_VAR(tmp59,"tmp59");
								HX_STACK_LINE(831)
								{
									HX_STACK_LINE(831)
									int tmp60 = ::__hxcpp_memory_get_byte(data->buffer->b,(data->byteOffset + ((sourceIndexXY + (int)1))));		HX_STACK_VAR(tmp60,"tmp60");
									HX_STACK_LINE(831)
									Dynamic tmp61 = (int(tmp60) & int((int)255));		HX_STACK_VAR(tmp61,"tmp61");
									HX_STACK_LINE(831)
									int a = tmp61;		HX_STACK_VAR(a,"a");
									HX_STACK_LINE(831)
									Float tmp62;		HX_STACK_VAR(tmp62,"tmp62");
									HX_STACK_LINE(831)
									{
										HX_STACK_LINE(831)
										int _int = a;		HX_STACK_VAR(_int,"int");
										HX_STACK_LINE(831)
										bool tmp63 = (_int < (int)0);		HX_STACK_VAR(tmp63,"tmp63");
										HX_STACK_LINE(831)
										if ((tmp63)){
											HX_STACK_LINE(831)
											tmp62 = (((Float)4294967296.0) + _int);
										}
										else{
											HX_STACK_LINE(831)
											tmp62 = (_int + ((Float)0.0));
										}
									}
									HX_STACK_LINE(831)
									Float tmp63 = uRatio;		HX_STACK_VAR(tmp63,"tmp63");
									HX_STACK_LINE(831)
									tmp59 = (tmp62 * tmp63);
								}
								HX_STACK_LINE(831)
								Float tmp60 = (tmp58 + tmp59);		HX_STACK_VAR(tmp60,"tmp60");
								HX_STACK_LINE(831)
								Float tmp61 = vRatio;		HX_STACK_VAR(tmp61,"tmp61");
								HX_STACK_LINE(831)
								Float tmp62 = (tmp60 * tmp61);		HX_STACK_VAR(tmp62,"tmp62");
								HX_STACK_LINE(831)
								Float tmp63 = (tmp57 + tmp62);		HX_STACK_VAR(tmp63,"tmp63");
								HX_STACK_LINE(831)
								int tmp64 = ::Std_obj::_int(tmp63);		HX_STACK_VAR(tmp64,"tmp64");
								HX_STACK_LINE(831)
								int val = tmp64;		HX_STACK_VAR(val,"val");
								HX_STACK_LINE(831)
								{
									HX_STACK_LINE(831)
									::__hxcpp_memory_set_byte(newData->buffer->b,(newData->byteOffset + ((index + (int)1))),val);
									HX_STACK_LINE(831)
									val;
								}
							}
							HX_STACK_LINE(832)
							{
								HX_STACK_LINE(832)
								Float tmp53;		HX_STACK_VAR(tmp53,"tmp53");
								HX_STACK_LINE(832)
								{
									HX_STACK_LINE(832)
									int tmp54 = ::__hxcpp_memory_get_byte(data->buffer->b,(data->byteOffset + ((sourceIndex + (int)2))));		HX_STACK_VAR(tmp54,"tmp54");
									HX_STACK_LINE(832)
									Dynamic tmp55 = (int(tmp54) & int((int)255));		HX_STACK_VAR(tmp55,"tmp55");
									HX_STACK_LINE(832)
									int a = tmp55;		HX_STACK_VAR(a,"a");
									HX_STACK_LINE(832)
									Float tmp56;		HX_STACK_VAR(tmp56,"tmp56");
									HX_STACK_LINE(832)
									{
										HX_STACK_LINE(832)
										int _int = a;		HX_STACK_VAR(_int,"int");
										HX_STACK_LINE(832)
										bool tmp57 = (_int < (int)0);		HX_STACK_VAR(tmp57,"tmp57");
										HX_STACK_LINE(832)
										if ((tmp57)){
											HX_STACK_LINE(832)
											tmp56 = (((Float)4294967296.0) + _int);
										}
										else{
											HX_STACK_LINE(832)
											tmp56 = (_int + ((Float)0.0));
										}
									}
									HX_STACK_LINE(832)
									Float tmp57 = uOpposite;		HX_STACK_VAR(tmp57,"tmp57");
									HX_STACK_LINE(832)
									tmp53 = (tmp56 * tmp57);
								}
								HX_STACK_LINE(832)
								Float tmp54;		HX_STACK_VAR(tmp54,"tmp54");
								HX_STACK_LINE(832)
								{
									HX_STACK_LINE(832)
									int tmp55 = ::__hxcpp_memory_get_byte(data->buffer->b,(data->byteOffset + ((sourceIndexX + (int)2))));		HX_STACK_VAR(tmp55,"tmp55");
									HX_STACK_LINE(832)
									Dynamic tmp56 = (int(tmp55) & int((int)255));		HX_STACK_VAR(tmp56,"tmp56");
									HX_STACK_LINE(832)
									int a = tmp56;		HX_STACK_VAR(a,"a");
									HX_STACK_LINE(832)
									Float tmp57;		HX_STACK_VAR(tmp57,"tmp57");
									HX_STACK_LINE(832)
									{
										HX_STACK_LINE(832)
										int _int = a;		HX_STACK_VAR(_int,"int");
										HX_STACK_LINE(832)
										bool tmp58 = (_int < (int)0);		HX_STACK_VAR(tmp58,"tmp58");
										HX_STACK_LINE(832)
										if ((tmp58)){
											HX_STACK_LINE(832)
											tmp57 = (((Float)4294967296.0) + _int);
										}
										else{
											HX_STACK_LINE(832)
											tmp57 = (_int + ((Float)0.0));
										}
									}
									HX_STACK_LINE(832)
									Float tmp58 = uRatio;		HX_STACK_VAR(tmp58,"tmp58");
									HX_STACK_LINE(832)
									tmp54 = (tmp57 * tmp58);
								}
								HX_STACK_LINE(832)
								Float tmp55 = (tmp53 + tmp54);		HX_STACK_VAR(tmp55,"tmp55");
								HX_STACK_LINE(832)
								Float tmp56 = vOpposite;		HX_STACK_VAR(tmp56,"tmp56");
								HX_STACK_LINE(832)
								Float tmp57 = (tmp55 * tmp56);		HX_STACK_VAR(tmp57,"tmp57");
								HX_STACK_LINE(832)
								Float tmp58;		HX_STACK_VAR(tmp58,"tmp58");
								HX_STACK_LINE(832)
								{
									HX_STACK_LINE(832)
									int tmp59 = ::__hxcpp_memory_get_byte(data->buffer->b,(data->byteOffset + ((sourceIndexY + (int)2))));		HX_STACK_VAR(tmp59,"tmp59");
									HX_STACK_LINE(832)
									Dynamic tmp60 = (int(tmp59) & int((int)255));		HX_STACK_VAR(tmp60,"tmp60");
									HX_STACK_LINE(832)
									int a = tmp60;		HX_STACK_VAR(a,"a");
									HX_STACK_LINE(832)
									Float tmp61;		HX_STACK_VAR(tmp61,"tmp61");
									HX_STACK_LINE(832)
									{
										HX_STACK_LINE(832)
										int _int = a;		HX_STACK_VAR(_int,"int");
										HX_STACK_LINE(832)
										bool tmp62 = (_int < (int)0);		HX_STACK_VAR(tmp62,"tmp62");
										HX_STACK_LINE(832)
										if ((tmp62)){
											HX_STACK_LINE(832)
											tmp61 = (((Float)4294967296.0) + _int);
										}
										else{
											HX_STACK_LINE(832)
											tmp61 = (_int + ((Float)0.0));
										}
									}
									HX_STACK_LINE(832)
									Float tmp62 = uOpposite;		HX_STACK_VAR(tmp62,"tmp62");
									HX_STACK_LINE(832)
									tmp58 = (tmp61 * tmp62);
								}
								HX_STACK_LINE(832)
								Float tmp59;		HX_STACK_VAR(tmp59,"tmp59");
								HX_STACK_LINE(832)
								{
									HX_STACK_LINE(832)
									int tmp60 = ::__hxcpp_memory_get_byte(data->buffer->b,(data->byteOffset + ((sourceIndexXY + (int)2))));		HX_STACK_VAR(tmp60,"tmp60");
									HX_STACK_LINE(832)
									Dynamic tmp61 = (int(tmp60) & int((int)255));		HX_STACK_VAR(tmp61,"tmp61");
									HX_STACK_LINE(832)
									int a = tmp61;		HX_STACK_VAR(a,"a");
									HX_STACK_LINE(832)
									Float tmp62;		HX_STACK_VAR(tmp62,"tmp62");
									HX_STACK_LINE(832)
									{
										HX_STACK_LINE(832)
										int _int = a;		HX_STACK_VAR(_int,"int");
										HX_STACK_LINE(832)
										bool tmp63 = (_int < (int)0);		HX_STACK_VAR(tmp63,"tmp63");
										HX_STACK_LINE(832)
										if ((tmp63)){
											HX_STACK_LINE(832)
											tmp62 = (((Float)4294967296.0) + _int);
										}
										else{
											HX_STACK_LINE(832)
											tmp62 = (_int + ((Float)0.0));
										}
									}
									HX_STACK_LINE(832)
									Float tmp63 = uRatio;		HX_STACK_VAR(tmp63,"tmp63");
									HX_STACK_LINE(832)
									tmp59 = (tmp62 * tmp63);
								}
								HX_STACK_LINE(832)
								Float tmp60 = (tmp58 + tmp59);		HX_STACK_VAR(tmp60,"tmp60");
								HX_STACK_LINE(832)
								Float tmp61 = vRatio;		HX_STACK_VAR(tmp61,"tmp61");
								HX_STACK_LINE(832)
								Float tmp62 = (tmp60 * tmp61);		HX_STACK_VAR(tmp62,"tmp62");
								HX_STACK_LINE(832)
								Float tmp63 = (tmp57 + tmp62);		HX_STACK_VAR(tmp63,"tmp63");
								HX_STACK_LINE(832)
								int tmp64 = ::Std_obj::_int(tmp63);		HX_STACK_VAR(tmp64,"tmp64");
								HX_STACK_LINE(832)
								int val = tmp64;		HX_STACK_VAR(val,"val");
								HX_STACK_LINE(832)
								{
									HX_STACK_LINE(832)
									::__hxcpp_memory_set_byte(newData->buffer->b,(newData->byteOffset + ((index + (int)2))),val);
									HX_STACK_LINE(832)
									val;
								}
							}
							HX_STACK_LINE(836)
							bool tmp53;		HX_STACK_VAR(tmp53,"tmp53");
							HX_STACK_LINE(836)
							{
								HX_STACK_LINE(836)
								int tmp54 = ::__hxcpp_memory_get_byte(data->buffer->b,(data->byteOffset + ((sourceIndexX + (int)3))));		HX_STACK_VAR(tmp54,"tmp54");
								HX_STACK_LINE(836)
								int tmp55 = tmp54;		HX_STACK_VAR(tmp55,"tmp55");
								HX_STACK_LINE(836)
								Dynamic tmp56 = (int(tmp55) & int((int)255));		HX_STACK_VAR(tmp56,"tmp56");
								HX_STACK_LINE(836)
								Dynamic tmp57 = tmp56;		HX_STACK_VAR(tmp57,"tmp57");
								HX_STACK_LINE(836)
								int a = tmp57;		HX_STACK_VAR(a,"a");
								HX_STACK_LINE(836)
								tmp53 = (a == (int)0);
							}
							HX_STACK_LINE(836)
							bool tmp54 = !(tmp53);		HX_STACK_VAR(tmp54,"tmp54");
							HX_STACK_LINE(836)
							bool tmp55 = tmp54;		HX_STACK_VAR(tmp55,"tmp55");
							HX_STACK_LINE(836)
							bool tmp56;		HX_STACK_VAR(tmp56,"tmp56");
							HX_STACK_LINE(836)
							if ((tmp55)){
								HX_STACK_LINE(836)
								int tmp57 = ::__hxcpp_memory_get_byte(data->buffer->b,(data->byteOffset + ((sourceIndexY + (int)3))));		HX_STACK_VAR(tmp57,"tmp57");
								HX_STACK_LINE(836)
								int tmp58 = tmp57;		HX_STACK_VAR(tmp58,"tmp58");
								HX_STACK_LINE(836)
								int tmp59 = tmp58;		HX_STACK_VAR(tmp59,"tmp59");
								HX_STACK_LINE(836)
								Dynamic tmp60 = (int(tmp59) & int((int)255));		HX_STACK_VAR(tmp60,"tmp60");
								HX_STACK_LINE(836)
								Dynamic tmp61 = tmp60;		HX_STACK_VAR(tmp61,"tmp61");
								HX_STACK_LINE(836)
								Dynamic tmp62 = tmp61;		HX_STACK_VAR(tmp62,"tmp62");
								HX_STACK_LINE(836)
								int a = tmp62;		HX_STACK_VAR(a,"a");
								HX_STACK_LINE(836)
								tmp56 = (a == (int)0);
							}
							else{
								HX_STACK_LINE(836)
								tmp56 = true;
							}
							HX_STACK_LINE(836)
							bool tmp57 = !(tmp56);		HX_STACK_VAR(tmp57,"tmp57");
							HX_STACK_LINE(836)
							bool tmp58;		HX_STACK_VAR(tmp58,"tmp58");
							HX_STACK_LINE(836)
							if ((tmp57)){
								HX_STACK_LINE(836)
								int tmp59 = ::__hxcpp_memory_get_byte(data->buffer->b,(data->byteOffset + ((sourceIndexXY + (int)3))));		HX_STACK_VAR(tmp59,"tmp59");
								HX_STACK_LINE(836)
								int tmp60 = tmp59;		HX_STACK_VAR(tmp60,"tmp60");
								HX_STACK_LINE(836)
								Dynamic tmp61 = (int(tmp60) & int((int)255));		HX_STACK_VAR(tmp61,"tmp61");
								HX_STACK_LINE(836)
								Dynamic tmp62 = tmp61;		HX_STACK_VAR(tmp62,"tmp62");
								HX_STACK_LINE(836)
								int a = tmp62;		HX_STACK_VAR(a,"a");
								HX_STACK_LINE(836)
								tmp58 = (a == (int)0);
							}
							else{
								HX_STACK_LINE(836)
								tmp58 = true;
							}
							HX_STACK_LINE(836)
							if ((tmp58)){
								HX_STACK_LINE(838)
								::__hxcpp_memory_set_byte(newData->buffer->b,(newData->byteOffset + ((index + (int)3))),(int)0);
								HX_STACK_LINE(838)
								(int)0;
							}
							else{
								HX_STACK_LINE(842)
								int tmp59 = ::__hxcpp_memory_get_byte(data->buffer->b,(data->byteOffset + ((sourceIndex + (int)3))));		HX_STACK_VAR(tmp59,"tmp59");
								HX_STACK_LINE(842)
								Dynamic tmp60 = (int(tmp59) & int((int)255));		HX_STACK_VAR(tmp60,"tmp60");
								HX_STACK_LINE(842)
								int val = tmp60;		HX_STACK_VAR(val,"val");
								HX_STACK_LINE(842)
								{
									HX_STACK_LINE(842)
									::__hxcpp_memory_set_byte(newData->buffer->b,(newData->byteOffset + ((index + (int)3))),val);
									HX_STACK_LINE(842)
									val;
								}
							}
						}
					}
				}
			}
		}
		HX_STACK_LINE(852)
		buffer->data = newBuffer->data;
		HX_STACK_LINE(853)
		buffer->width = newWidth;
		HX_STACK_LINE(854)
		buffer->height = newHeight;
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(ImageDataUtil_obj,resize,(void))

Void ImageDataUtil_obj::resizeBuffer( ::lime::graphics::Image image,int newWidth,int newHeight){
{
		HX_STACK_FRAME("lime.graphics.utils.ImageDataUtil","resizeBuffer",0x390004c2,"lime.graphics.utils.ImageDataUtil.resizeBuffer","lime/graphics/utils/ImageDataUtil.hx",859,0x494d921f)
		HX_STACK_ARG(image,"image")
		HX_STACK_ARG(newWidth,"newWidth")
		HX_STACK_ARG(newHeight,"newHeight")
		HX_STACK_LINE(861)
		::lime::graphics::ImageBuffer buffer = image->buffer;		HX_STACK_VAR(buffer,"buffer");
		HX_STACK_LINE(862)
		::lime::utils::ArrayBufferView tmp = image->get_data();		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(862)
		::lime::utils::ArrayBufferView data = tmp;		HX_STACK_VAR(data,"data");
		HX_STACK_LINE(863)
		::lime::utils::ArrayBufferView tmp1;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(863)
		{
			HX_STACK_LINE(863)
			int tmp2 = (newWidth * newHeight);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(863)
			int tmp3 = (tmp2 * (int)4);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(863)
			Dynamic elements = tmp3;		HX_STACK_VAR(elements,"elements");
			HX_STACK_LINE(863)
			::lime::utils::ArrayBufferView this1;		HX_STACK_VAR(this1,"this1");
			HX_STACK_LINE(863)
			bool tmp4 = (elements != null());		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(863)
			if ((tmp4)){
				HX_STACK_LINE(863)
				::lime::utils::ArrayBufferView tmp5 = ::lime::utils::ArrayBufferView_obj::__new(elements,(int)4);		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(863)
				this1 = tmp5;
			}
			else{
				HX_STACK_LINE(863)
				bool tmp5 = false;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(863)
				if ((tmp5)){
					HX_STACK_LINE(863)
					::lime::utils::ArrayBufferView tmp6;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(863)
					{
						HX_STACK_LINE(863)
						::lime::utils::ArrayBufferView tmp7 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)4);		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(863)
						::lime::utils::ArrayBufferView _this = tmp7;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(863)
						_this->byteOffset = (int)0;
						HX_STACK_LINE(863)
						int tmp8 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(863)
						_this->length = tmp8;
						HX_STACK_LINE(863)
						int tmp9 = (_this->length * _this->bytesPerElement);		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(863)
						_this->byteLength = tmp9;
						HX_STACK_LINE(863)
						::haxe::io::Bytes tmp10;		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(863)
						{
							HX_STACK_LINE(863)
							::haxe::io::Bytes this2;		HX_STACK_VAR(this2,"this2");
							HX_STACK_LINE(863)
							int tmp11 = _this->byteLength;		HX_STACK_VAR(tmp11,"tmp11");
							HX_STACK_LINE(863)
							::haxe::io::Bytes tmp12 = ::haxe::io::Bytes_obj::alloc(tmp11);		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(863)
							this2 = tmp12;
							HX_STACK_LINE(863)
							tmp10 = this2;
						}
						HX_STACK_LINE(863)
						_this->buffer = tmp10;
						HX_STACK_LINE(863)
						_this->copyFromArray(((Array< Float >)(null())),null());
						HX_STACK_LINE(863)
						tmp6 = _this;
					}
					HX_STACK_LINE(863)
					this1 = tmp6;
				}
				else{
					HX_STACK_LINE(863)
					bool tmp6 = false;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(863)
					if ((tmp6)){
						HX_STACK_LINE(863)
						::lime::utils::ArrayBufferView tmp7;		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(863)
						{
							HX_STACK_LINE(863)
							::lime::utils::ArrayBufferView tmp8 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)4);		HX_STACK_VAR(tmp8,"tmp8");
							HX_STACK_LINE(863)
							::lime::utils::ArrayBufferView _this = tmp8;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(863)
							::haxe::io::Bytes tmp9 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp9,"tmp9");
							HX_STACK_LINE(863)
							::haxe::io::Bytes srcData = tmp9;		HX_STACK_VAR(srcData,"srcData");
							HX_STACK_LINE(863)
							int tmp10 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp10,"tmp10");
							HX_STACK_LINE(863)
							int srcLength = tmp10;		HX_STACK_VAR(srcLength,"srcLength");
							HX_STACK_LINE(863)
							int tmp11 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp11,"tmp11");
							HX_STACK_LINE(863)
							int srcByteOffset = tmp11;		HX_STACK_VAR(srcByteOffset,"srcByteOffset");
							HX_STACK_LINE(863)
							int tmp12 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(863)
							int srcElementSize = tmp12;		HX_STACK_VAR(srcElementSize,"srcElementSize");
							HX_STACK_LINE(863)
							int elementSize = _this->bytesPerElement;		HX_STACK_VAR(elementSize,"elementSize");
							HX_STACK_LINE(863)
							int tmp13 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp13,"tmp13");
							HX_STACK_LINE(863)
							int tmp14 = _this->type;		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(863)
							bool tmp15 = (tmp13 == tmp14);		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(863)
							if ((tmp15)){
								HX_STACK_LINE(863)
								int srcLength1 = srcData->length;		HX_STACK_VAR(srcLength1,"srcLength1");
								HX_STACK_LINE(863)
								int tmp16 = (srcLength1 - srcByteOffset);		HX_STACK_VAR(tmp16,"tmp16");
								HX_STACK_LINE(863)
								int cloneLength = tmp16;		HX_STACK_VAR(cloneLength,"cloneLength");
								HX_STACK_LINE(863)
								::haxe::io::Bytes tmp17;		HX_STACK_VAR(tmp17,"tmp17");
								HX_STACK_LINE(863)
								{
									HX_STACK_LINE(863)
									::haxe::io::Bytes this2;		HX_STACK_VAR(this2,"this2");
									HX_STACK_LINE(863)
									int tmp18 = cloneLength;		HX_STACK_VAR(tmp18,"tmp18");
									HX_STACK_LINE(863)
									::haxe::io::Bytes tmp19 = ::haxe::io::Bytes_obj::alloc(tmp18);		HX_STACK_VAR(tmp19,"tmp19");
									HX_STACK_LINE(863)
									this2 = tmp19;
									HX_STACK_LINE(863)
									tmp17 = this2;
								}
								HX_STACK_LINE(863)
								_this->buffer = tmp17;
								HX_STACK_LINE(863)
								::haxe::io::Bytes tmp18 = srcData;		HX_STACK_VAR(tmp18,"tmp18");
								HX_STACK_LINE(863)
								int tmp19 = srcByteOffset;		HX_STACK_VAR(tmp19,"tmp19");
								HX_STACK_LINE(863)
								int tmp20 = cloneLength;		HX_STACK_VAR(tmp20,"tmp20");
								HX_STACK_LINE(863)
								_this->buffer->blit((int)0,tmp18,tmp19,tmp20);
							}
							else{
								HX_STACK_LINE(863)
								HX_STACK_DO_THROW(HX_HCSTRING("unimplemented","\x09","\x2f","\x74","\xb4"));
							}
							HX_STACK_LINE(863)
							int tmp16 = (_this->bytesPerElement * srcLength);		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(863)
							_this->byteLength = tmp16;
							HX_STACK_LINE(863)
							_this->byteOffset = (int)0;
							HX_STACK_LINE(863)
							_this->length = srcLength;
							HX_STACK_LINE(863)
							tmp7 = _this;
						}
						HX_STACK_LINE(863)
						this1 = tmp7;
					}
					else{
						HX_STACK_LINE(863)
						bool tmp7 = false;		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(863)
						if ((tmp7)){
							HX_STACK_LINE(863)
							::lime::utils::ArrayBufferView tmp8;		HX_STACK_VAR(tmp8,"tmp8");
							HX_STACK_LINE(863)
							{
								HX_STACK_LINE(863)
								::lime::utils::ArrayBufferView tmp9 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)4);		HX_STACK_VAR(tmp9,"tmp9");
								HX_STACK_LINE(863)
								::lime::utils::ArrayBufferView _this = tmp9;		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(863)
								bool tmp10 = false;		HX_STACK_VAR(tmp10,"tmp10");
								HX_STACK_LINE(863)
								if ((tmp10)){
									HX_STACK_LINE(863)
									HX_STACK_DO_THROW(::lime::utils::_ArrayBufferView::TAError_obj::RangeError);
								}
								HX_STACK_LINE(863)
								int tmp11 = hx::Mod((int)0,_this->bytesPerElement);		HX_STACK_VAR(tmp11,"tmp11");
								HX_STACK_LINE(863)
								bool tmp12 = (tmp11 != (int)0);		HX_STACK_VAR(tmp12,"tmp12");
								HX_STACK_LINE(863)
								if ((tmp12)){
									HX_STACK_LINE(863)
									HX_STACK_DO_THROW(::lime::utils::_ArrayBufferView::TAError_obj::RangeError);
								}
								HX_STACK_LINE(863)
								int tmp13 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp13,"tmp13");
								HX_STACK_LINE(863)
								int bufferByteLength = tmp13;		HX_STACK_VAR(bufferByteLength,"bufferByteLength");
								HX_STACK_LINE(863)
								int elementSize = _this->bytesPerElement;		HX_STACK_VAR(elementSize,"elementSize");
								HX_STACK_LINE(863)
								int newByteLength = bufferByteLength;		HX_STACK_VAR(newByteLength,"newByteLength");
								HX_STACK_LINE(863)
								bool tmp14 = true;		HX_STACK_VAR(tmp14,"tmp14");
								HX_STACK_LINE(863)
								if ((tmp14)){
									HX_STACK_LINE(863)
									int tmp15 = bufferByteLength;		HX_STACK_VAR(tmp15,"tmp15");
									HX_STACK_LINE(863)
									newByteLength = tmp15;
									HX_STACK_LINE(863)
									int tmp16 = hx::Mod(bufferByteLength,_this->bytesPerElement);		HX_STACK_VAR(tmp16,"tmp16");
									HX_STACK_LINE(863)
									bool tmp17 = (tmp16 != (int)0);		HX_STACK_VAR(tmp17,"tmp17");
									HX_STACK_LINE(863)
									if ((tmp17)){
										HX_STACK_LINE(863)
										HX_STACK_DO_THROW(::lime::utils::_ArrayBufferView::TAError_obj::RangeError);
									}
									HX_STACK_LINE(863)
									bool tmp18 = (newByteLength < (int)0);		HX_STACK_VAR(tmp18,"tmp18");
									HX_STACK_LINE(863)
									if ((tmp18)){
										HX_STACK_LINE(863)
										HX_STACK_DO_THROW(::lime::utils::_ArrayBufferView::TAError_obj::RangeError);
									}
								}
								else{
									HX_STACK_LINE(863)
									int tmp15 = (null() * _this->bytesPerElement);		HX_STACK_VAR(tmp15,"tmp15");
									HX_STACK_LINE(863)
									newByteLength = tmp15;
									HX_STACK_LINE(863)
									int tmp16 = newByteLength;		HX_STACK_VAR(tmp16,"tmp16");
									HX_STACK_LINE(863)
									int newRange = tmp16;		HX_STACK_VAR(newRange,"newRange");
									HX_STACK_LINE(863)
									bool tmp17 = (newRange > bufferByteLength);		HX_STACK_VAR(tmp17,"tmp17");
									HX_STACK_LINE(863)
									if ((tmp17)){
										HX_STACK_LINE(863)
										HX_STACK_DO_THROW(::lime::utils::_ArrayBufferView::TAError_obj::RangeError);
									}
								}
								HX_STACK_LINE(863)
								_this->buffer = null();
								HX_STACK_LINE(863)
								_this->byteOffset = (int)0;
								HX_STACK_LINE(863)
								_this->byteLength = newByteLength;
								HX_STACK_LINE(863)
								Float tmp15 = (Float(newByteLength) / Float(_this->bytesPerElement));		HX_STACK_VAR(tmp15,"tmp15");
								HX_STACK_LINE(863)
								int tmp16 = ::Std_obj::_int(tmp15);		HX_STACK_VAR(tmp16,"tmp16");
								HX_STACK_LINE(863)
								_this->length = tmp16;
								HX_STACK_LINE(863)
								tmp8 = _this;
							}
							HX_STACK_LINE(863)
							this1 = tmp8;
						}
						else{
							HX_STACK_LINE(863)
							HX_STACK_DO_THROW(HX_HCSTRING("Invalid constructor arguments for Uint8Array","\x8b","\x64","\x02","\xe4"));
						}
					}
				}
			}
			HX_STACK_LINE(863)
			tmp1 = this1;
		}
		HX_STACK_LINE(863)
		::lime::utils::ArrayBufferView newData = tmp1;		HX_STACK_VAR(newData,"newData");
		HX_STACK_LINE(864)
		int sourceIndex;		HX_STACK_VAR(sourceIndex,"sourceIndex");
		HX_STACK_LINE(864)
		int index;		HX_STACK_VAR(index,"index");
		HX_STACK_LINE(866)
		{
			HX_STACK_LINE(866)
			int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(866)
			int _g = buffer->height;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(866)
			while((true)){
				HX_STACK_LINE(866)
				bool tmp2 = (_g1 < _g);		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(866)
				bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(866)
				if ((tmp3)){
					HX_STACK_LINE(866)
					break;
				}
				HX_STACK_LINE(866)
				int tmp4 = (_g1)++;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(866)
				int y = tmp4;		HX_STACK_VAR(y,"y");
				HX_STACK_LINE(868)
				{
					HX_STACK_LINE(868)
					int _g3 = (int)0;		HX_STACK_VAR(_g3,"_g3");
					HX_STACK_LINE(868)
					int _g2 = buffer->width;		HX_STACK_VAR(_g2,"_g2");
					HX_STACK_LINE(868)
					while((true)){
						HX_STACK_LINE(868)
						bool tmp5 = (_g3 < _g2);		HX_STACK_VAR(tmp5,"tmp5");
						HX_STACK_LINE(868)
						bool tmp6 = !(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(868)
						if ((tmp6)){
							HX_STACK_LINE(868)
							break;
						}
						HX_STACK_LINE(868)
						int tmp7 = (_g3)++;		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(868)
						int x = tmp7;		HX_STACK_VAR(x,"x");
						HX_STACK_LINE(870)
						int tmp8 = (y * buffer->width);		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(870)
						int tmp9 = x;		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(870)
						int tmp10 = (tmp8 + tmp9);		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(870)
						int tmp11 = (tmp10 * (int)4);		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(870)
						sourceIndex = tmp11;
						HX_STACK_LINE(871)
						int tmp12 = (y * newWidth);		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(871)
						int tmp13 = x;		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(871)
						int tmp14 = (tmp12 + tmp13);		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(871)
						int tmp15 = (tmp14 * (int)4);		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(871)
						index = tmp15;
						HX_STACK_LINE(873)
						{
							HX_STACK_LINE(873)
							int tmp16 = ::__hxcpp_memory_get_byte(data->buffer->b,(data->byteOffset + sourceIndex));		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(873)
							Dynamic tmp17 = (int(tmp16) & int((int)255));		HX_STACK_VAR(tmp17,"tmp17");
							HX_STACK_LINE(873)
							int val = tmp17;		HX_STACK_VAR(val,"val");
							HX_STACK_LINE(873)
							{
								HX_STACK_LINE(873)
								::__hxcpp_memory_set_byte(newData->buffer->b,(newData->byteOffset + index),val);
								HX_STACK_LINE(873)
								val;
							}
						}
						HX_STACK_LINE(874)
						{
							HX_STACK_LINE(874)
							int tmp16 = ::__hxcpp_memory_get_byte(data->buffer->b,(data->byteOffset + ((sourceIndex + (int)1))));		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(874)
							Dynamic tmp17 = (int(tmp16) & int((int)255));		HX_STACK_VAR(tmp17,"tmp17");
							HX_STACK_LINE(874)
							int val = tmp17;		HX_STACK_VAR(val,"val");
							HX_STACK_LINE(874)
							{
								HX_STACK_LINE(874)
								::__hxcpp_memory_set_byte(newData->buffer->b,(newData->byteOffset + ((index + (int)1))),val);
								HX_STACK_LINE(874)
								val;
							}
						}
						HX_STACK_LINE(875)
						{
							HX_STACK_LINE(875)
							int tmp16 = ::__hxcpp_memory_get_byte(data->buffer->b,(data->byteOffset + ((sourceIndex + (int)2))));		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(875)
							Dynamic tmp17 = (int(tmp16) & int((int)255));		HX_STACK_VAR(tmp17,"tmp17");
							HX_STACK_LINE(875)
							int val = tmp17;		HX_STACK_VAR(val,"val");
							HX_STACK_LINE(875)
							{
								HX_STACK_LINE(875)
								::__hxcpp_memory_set_byte(newData->buffer->b,(newData->byteOffset + ((index + (int)2))),val);
								HX_STACK_LINE(875)
								val;
							}
						}
						HX_STACK_LINE(876)
						{
							HX_STACK_LINE(876)
							int tmp16 = ::__hxcpp_memory_get_byte(data->buffer->b,(data->byteOffset + ((sourceIndex + (int)3))));		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(876)
							Dynamic tmp17 = (int(tmp16) & int((int)255));		HX_STACK_VAR(tmp17,"tmp17");
							HX_STACK_LINE(876)
							int val = tmp17;		HX_STACK_VAR(val,"val");
							HX_STACK_LINE(876)
							{
								HX_STACK_LINE(876)
								::__hxcpp_memory_set_byte(newData->buffer->b,(newData->byteOffset + ((index + (int)3))),val);
								HX_STACK_LINE(876)
								val;
							}
						}
					}
				}
			}
		}
		HX_STACK_LINE(882)
		buffer->data = newData;
		HX_STACK_LINE(883)
		buffer->width = newWidth;
		HX_STACK_LINE(884)
		buffer->height = newHeight;
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(ImageDataUtil_obj,resizeBuffer,(void))

Void ImageDataUtil_obj::setFormat( ::lime::graphics::Image image,int format){
{
		HX_STACK_FRAME("lime.graphics.utils.ImageDataUtil","setFormat",0xff73210b,"lime.graphics.utils.ImageDataUtil.setFormat","lime/graphics/utils/ImageDataUtil.hx",889,0x494d921f)
		HX_STACK_ARG(image,"image")
		HX_STACK_ARG(format,"format")
		HX_STACK_LINE(891)
		::lime::utils::ArrayBufferView tmp = image->buffer->data;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(891)
		::lime::utils::ArrayBufferView data = tmp;		HX_STACK_VAR(data,"data");
		HX_STACK_LINE(892)
		bool tmp1 = (data == null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(892)
		if ((tmp1)){
			HX_STACK_LINE(892)
			return null();
		}
		HX_STACK_LINE(895)
		bool tmp2 = ::lime::_system::System_obj::disableCFFI;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(895)
		bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(895)
		if ((tmp3)){
			HX_STACK_LINE(895)
			::lime::graphics::Image tmp4 = image;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(895)
			int tmp5 = format;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(895)
			::lime::graphics::utils::ImageDataUtil_obj::lime_image_data_util_set_format(tmp4,tmp5);
		}
		else{
			HX_STACK_LINE(899)
			int index;		HX_STACK_VAR(index,"index");
			HX_STACK_LINE(899)
			Dynamic a16;		HX_STACK_VAR(a16,"a16");
			HX_STACK_LINE(900)
			int tmp4 = data->length;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(900)
			Float tmp5 = (Float(tmp4) / Float((int)4));		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(900)
			int tmp6 = ::Std_obj::_int(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(900)
			int length = tmp6;		HX_STACK_VAR(length,"length");
			HX_STACK_LINE(901)
			int r1;		HX_STACK_VAR(r1,"r1");
			HX_STACK_LINE(901)
			int g1;		HX_STACK_VAR(g1,"g1");
			HX_STACK_LINE(901)
			int b1;		HX_STACK_VAR(b1,"b1");
			HX_STACK_LINE(901)
			int a1;		HX_STACK_VAR(a1,"a1");
			HX_STACK_LINE(901)
			int r2;		HX_STACK_VAR(r2,"r2");
			HX_STACK_LINE(901)
			int g2;		HX_STACK_VAR(g2,"g2");
			HX_STACK_LINE(901)
			int b2;		HX_STACK_VAR(b2,"b2");
			HX_STACK_LINE(901)
			int a2;		HX_STACK_VAR(a2,"a2");
			HX_STACK_LINE(902)
			Dynamic r;		HX_STACK_VAR(r,"r");
			HX_STACK_LINE(902)
			Dynamic g;		HX_STACK_VAR(g,"g");
			HX_STACK_LINE(902)
			Dynamic b;		HX_STACK_VAR(b,"b");
			HX_STACK_LINE(902)
			Dynamic a;		HX_STACK_VAR(a,"a");
			HX_STACK_LINE(904)
			{
				HX_STACK_LINE(904)
				int tmp7 = image->get_format();		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(904)
				int _g = tmp7;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(904)
				int tmp8 = _g;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(904)
				switch( (int)(tmp8)){
					case (int)0: {
						HX_STACK_LINE(908)
						r1 = (int)0;
						HX_STACK_LINE(909)
						g1 = (int)1;
						HX_STACK_LINE(910)
						b1 = (int)2;
						HX_STACK_LINE(911)
						a1 = (int)3;
					}
					;break;
					case (int)1: {
						HX_STACK_LINE(915)
						r1 = (int)1;
						HX_STACK_LINE(916)
						g1 = (int)2;
						HX_STACK_LINE(917)
						b1 = (int)3;
						HX_STACK_LINE(918)
						a1 = (int)0;
					}
					;break;
					case (int)2: {
						HX_STACK_LINE(922)
						r1 = (int)2;
						HX_STACK_LINE(923)
						g1 = (int)1;
						HX_STACK_LINE(924)
						b1 = (int)0;
						HX_STACK_LINE(925)
						a1 = (int)3;
					}
					;break;
				}
			}
			HX_STACK_LINE(929)
			int tmp7 = format;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(929)
			switch( (int)(tmp7)){
				case (int)0: {
					HX_STACK_LINE(933)
					r2 = (int)0;
					HX_STACK_LINE(934)
					g2 = (int)1;
					HX_STACK_LINE(935)
					b2 = (int)2;
					HX_STACK_LINE(936)
					a2 = (int)3;
				}
				;break;
				case (int)1: {
					HX_STACK_LINE(940)
					r2 = (int)1;
					HX_STACK_LINE(941)
					g2 = (int)2;
					HX_STACK_LINE(942)
					b2 = (int)3;
					HX_STACK_LINE(943)
					a2 = (int)0;
				}
				;break;
				case (int)2: {
					HX_STACK_LINE(947)
					r2 = (int)2;
					HX_STACK_LINE(948)
					g2 = (int)1;
					HX_STACK_LINE(949)
					b2 = (int)0;
					HX_STACK_LINE(950)
					a2 = (int)3;
				}
				;break;
			}
			HX_STACK_LINE(954)
			{
				HX_STACK_LINE(954)
				int _g = (int)0;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(954)
				while((true)){
					HX_STACK_LINE(954)
					bool tmp8 = (_g < length);		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(954)
					bool tmp9 = !(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(954)
					if ((tmp9)){
						HX_STACK_LINE(954)
						break;
					}
					HX_STACK_LINE(954)
					int tmp10 = (_g)++;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(954)
					int i = tmp10;		HX_STACK_VAR(i,"i");
					HX_STACK_LINE(956)
					int tmp11 = (i * (int)4);		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(956)
					index = tmp11;
					HX_STACK_LINE(958)
					int tmp12 = ::__hxcpp_memory_get_byte(data->buffer->b,(data->byteOffset + ((index + r1))));		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(958)
					Dynamic tmp13 = (int(tmp12) & int((int)255));		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(958)
					r = tmp13;
					HX_STACK_LINE(959)
					int tmp14 = ::__hxcpp_memory_get_byte(data->buffer->b,(data->byteOffset + ((index + g1))));		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(959)
					Dynamic tmp15 = (int(tmp14) & int((int)255));		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(959)
					g = tmp15;
					HX_STACK_LINE(960)
					int tmp16 = ::__hxcpp_memory_get_byte(data->buffer->b,(data->byteOffset + ((index + b1))));		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(960)
					Dynamic tmp17 = (int(tmp16) & int((int)255));		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(960)
					b = tmp17;
					HX_STACK_LINE(961)
					int tmp18 = ::__hxcpp_memory_get_byte(data->buffer->b,(data->byteOffset + ((index + a1))));		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(961)
					Dynamic tmp19 = (int(tmp18) & int((int)255));		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(961)
					a = tmp19;
					HX_STACK_LINE(963)
					{
						HX_STACK_LINE(963)
						int val = r;		HX_STACK_VAR(val,"val");
						HX_STACK_LINE(963)
						{
							HX_STACK_LINE(963)
							::__hxcpp_memory_set_byte(data->buffer->b,(data->byteOffset + ((index + r2))),val);
							HX_STACK_LINE(963)
							val;
						}
					}
					HX_STACK_LINE(964)
					{
						HX_STACK_LINE(964)
						int val = g;		HX_STACK_VAR(val,"val");
						HX_STACK_LINE(964)
						{
							HX_STACK_LINE(964)
							::__hxcpp_memory_set_byte(data->buffer->b,(data->byteOffset + ((index + g2))),val);
							HX_STACK_LINE(964)
							val;
						}
					}
					HX_STACK_LINE(965)
					{
						HX_STACK_LINE(965)
						int val = b;		HX_STACK_VAR(val,"val");
						HX_STACK_LINE(965)
						{
							HX_STACK_LINE(965)
							::__hxcpp_memory_set_byte(data->buffer->b,(data->byteOffset + ((index + b2))),val);
							HX_STACK_LINE(965)
							val;
						}
					}
					HX_STACK_LINE(966)
					{
						HX_STACK_LINE(966)
						int val = a;		HX_STACK_VAR(val,"val");
						HX_STACK_LINE(966)
						{
							HX_STACK_LINE(966)
							::__hxcpp_memory_set_byte(data->buffer->b,(data->byteOffset + ((index + a2))),val);
							HX_STACK_LINE(966)
							val;
						}
					}
				}
			}
		}
		HX_STACK_LINE(972)
		image->buffer->format = format;
		HX_STACK_LINE(973)
		image->dirty = true;
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(ImageDataUtil_obj,setFormat,(void))

Void ImageDataUtil_obj::setPixel( ::lime::graphics::Image image,int x,int y,int color,int format){
{
		HX_STACK_FRAME("lime.graphics.utils.ImageDataUtil","setPixel",0x7a534b32,"lime.graphics.utils.ImageDataUtil.setPixel","lime/graphics/utils/ImageDataUtil.hx",978,0x494d921f)
		HX_STACK_ARG(image,"image")
		HX_STACK_ARG(x,"x")
		HX_STACK_ARG(y,"y")
		HX_STACK_ARG(color,"color")
		HX_STACK_ARG(format,"format")
		HX_STACK_LINE(980)
		int pixel;		HX_STACK_VAR(pixel,"pixel");
		HX_STACK_LINE(982)
		int tmp = format;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(982)
		switch( (int)(tmp)){
			case (int)1: {
				HX_STACK_LINE(984)
				int tmp1;		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(984)
				{
					HX_STACK_LINE(984)
					int argb = color;		HX_STACK_VAR(argb,"argb");
					HX_STACK_LINE(984)
					{
						HX_STACK_LINE(984)
						int tmp2;		HX_STACK_VAR(tmp2,"tmp2");
						HX_STACK_LINE(984)
						{
							HX_STACK_LINE(984)
							int rgba = (int)0;		HX_STACK_VAR(rgba,"rgba");
							HX_STACK_LINE(984)
							tmp2 = rgba;
						}
						HX_STACK_LINE(984)
						int rgba = tmp2;		HX_STACK_VAR(rgba,"rgba");
						HX_STACK_LINE(984)
						{
							HX_STACK_LINE(984)
							int tmp3 = (int(argb) >> int((int)16));		HX_STACK_VAR(tmp3,"tmp3");
							HX_STACK_LINE(984)
							int tmp4 = (int(tmp3) & int((int)255));		HX_STACK_VAR(tmp4,"tmp4");
							HX_STACK_LINE(984)
							int tmp5 = (int(tmp4) & int((int)255));		HX_STACK_VAR(tmp5,"tmp5");
							HX_STACK_LINE(984)
							int tmp6 = (int(tmp5) << int((int)24));		HX_STACK_VAR(tmp6,"tmp6");
							HX_STACK_LINE(984)
							int tmp7 = (int(argb) >> int((int)8));		HX_STACK_VAR(tmp7,"tmp7");
							HX_STACK_LINE(984)
							int tmp8 = (int(tmp7) & int((int)255));		HX_STACK_VAR(tmp8,"tmp8");
							HX_STACK_LINE(984)
							int tmp9 = (int(tmp8) & int((int)255));		HX_STACK_VAR(tmp9,"tmp9");
							HX_STACK_LINE(984)
							int tmp10 = (int(tmp9) << int((int)16));		HX_STACK_VAR(tmp10,"tmp10");
							HX_STACK_LINE(984)
							int tmp11 = (int(tmp6) | int(tmp10));		HX_STACK_VAR(tmp11,"tmp11");
							HX_STACK_LINE(984)
							int tmp12 = (int(argb) & int((int)255));		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(984)
							int tmp13 = (int(tmp12) & int((int)255));		HX_STACK_VAR(tmp13,"tmp13");
							HX_STACK_LINE(984)
							int tmp14 = (int(tmp13) << int((int)8));		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(984)
							int tmp15 = (int(tmp11) | int(tmp14));		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(984)
							int tmp16 = (int(argb) >> int((int)24));		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(984)
							int tmp17 = (int(tmp16) & int((int)255));		HX_STACK_VAR(tmp17,"tmp17");
							HX_STACK_LINE(984)
							int tmp18 = (int(tmp17) & int((int)255));		HX_STACK_VAR(tmp18,"tmp18");
							HX_STACK_LINE(984)
							int tmp19 = (int(tmp15) | int(tmp18));		HX_STACK_VAR(tmp19,"tmp19");
							HX_STACK_LINE(984)
							rgba = tmp19;
						}
						HX_STACK_LINE(984)
						tmp1 = rgba;
					}
				}
				HX_STACK_LINE(984)
				pixel = tmp1;
			}
			;break;
			case (int)2: {
				HX_STACK_LINE(985)
				int tmp1;		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(985)
				{
					HX_STACK_LINE(985)
					int bgra = color;		HX_STACK_VAR(bgra,"bgra");
					HX_STACK_LINE(985)
					{
						HX_STACK_LINE(985)
						int tmp2;		HX_STACK_VAR(tmp2,"tmp2");
						HX_STACK_LINE(985)
						{
							HX_STACK_LINE(985)
							int rgba = (int)0;		HX_STACK_VAR(rgba,"rgba");
							HX_STACK_LINE(985)
							tmp2 = rgba;
						}
						HX_STACK_LINE(985)
						int rgba = tmp2;		HX_STACK_VAR(rgba,"rgba");
						HX_STACK_LINE(985)
						{
							HX_STACK_LINE(985)
							int tmp3 = (int(bgra) >> int((int)8));		HX_STACK_VAR(tmp3,"tmp3");
							HX_STACK_LINE(985)
							int tmp4 = (int(tmp3) & int((int)255));		HX_STACK_VAR(tmp4,"tmp4");
							HX_STACK_LINE(985)
							int tmp5 = (int(tmp4) & int((int)255));		HX_STACK_VAR(tmp5,"tmp5");
							HX_STACK_LINE(985)
							int tmp6 = (int(tmp5) << int((int)24));		HX_STACK_VAR(tmp6,"tmp6");
							HX_STACK_LINE(985)
							int tmp7 = (int(bgra) >> int((int)16));		HX_STACK_VAR(tmp7,"tmp7");
							HX_STACK_LINE(985)
							int tmp8 = (int(tmp7) & int((int)255));		HX_STACK_VAR(tmp8,"tmp8");
							HX_STACK_LINE(985)
							int tmp9 = (int(tmp8) & int((int)255));		HX_STACK_VAR(tmp9,"tmp9");
							HX_STACK_LINE(985)
							int tmp10 = (int(tmp9) << int((int)16));		HX_STACK_VAR(tmp10,"tmp10");
							HX_STACK_LINE(985)
							int tmp11 = (int(tmp6) | int(tmp10));		HX_STACK_VAR(tmp11,"tmp11");
							HX_STACK_LINE(985)
							int tmp12 = (int(bgra) >> int((int)24));		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(985)
							int tmp13 = (int(tmp12) & int((int)255));		HX_STACK_VAR(tmp13,"tmp13");
							HX_STACK_LINE(985)
							int tmp14 = (int(tmp13) & int((int)255));		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(985)
							int tmp15 = (int(tmp14) << int((int)8));		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(985)
							int tmp16 = (int(tmp11) | int(tmp15));		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(985)
							int tmp17 = (int(bgra) & int((int)255));		HX_STACK_VAR(tmp17,"tmp17");
							HX_STACK_LINE(985)
							int tmp18 = (int(tmp17) & int((int)255));		HX_STACK_VAR(tmp18,"tmp18");
							HX_STACK_LINE(985)
							int tmp19 = (int(tmp16) | int(tmp18));		HX_STACK_VAR(tmp19,"tmp19");
							HX_STACK_LINE(985)
							rgba = tmp19;
						}
						HX_STACK_LINE(985)
						tmp1 = rgba;
					}
				}
				HX_STACK_LINE(985)
				pixel = tmp1;
			}
			;break;
			default: {
				HX_STACK_LINE(986)
				pixel = color;
			}
		}
		HX_STACK_LINE(990)
		{
			HX_STACK_LINE(990)
			{
				HX_STACK_LINE(990)
				int tmp1 = (int(pixel) >> int((int)24));		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(990)
				int tmp2 = (int(tmp1) & int((int)255));		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(990)
				int tmp3 = (int(tmp2) & int((int)255));		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(990)
				int tmp4 = (int(tmp3) << int((int)24));		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(990)
				int tmp5 = (int(pixel) >> int((int)16));		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(990)
				int tmp6 = (int(tmp5) & int((int)255));		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(990)
				int tmp7 = (int(tmp6) & int((int)255));		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(990)
				int tmp8 = (int(tmp7) << int((int)16));		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(990)
				int tmp9 = (int(tmp4) | int(tmp8));		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(990)
				int tmp10 = (int(pixel) >> int((int)8));		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(990)
				int tmp11 = (int(tmp10) & int((int)255));		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(990)
				int tmp12 = (int(tmp11) & int((int)255));		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(990)
				int tmp13 = (int(tmp12) << int((int)8));		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(990)
				int tmp14 = (int(tmp9) | int(tmp13));		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(990)
				int tmp15 = (int)255;		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(990)
				int tmp16 = (int(tmp14) | int(tmp15));		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(990)
				pixel = tmp16;
			}
			HX_STACK_LINE(990)
			(int)255;
		}
		HX_STACK_LINE(991)
		{
			HX_STACK_LINE(991)
			::lime::utils::ArrayBufferView tmp1 = image->buffer->data;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(991)
			::lime::utils::ArrayBufferView data = tmp1;		HX_STACK_VAR(data,"data");
			HX_STACK_LINE(991)
			int tmp2 = (y + image->offsetY);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(991)
			int tmp3 = ((int)4 * tmp2);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(991)
			int tmp4 = image->buffer->width;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(991)
			int tmp5 = (tmp3 * tmp4);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(991)
			int tmp6 = (x + image->offsetX);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(991)
			int tmp7 = (tmp6 * (int)4);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(991)
			int tmp8 = (tmp5 + tmp7);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(991)
			int offset = tmp8;		HX_STACK_VAR(offset,"offset");
			HX_STACK_LINE(991)
			bool tmp9 = image->buffer->premultiplied;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(991)
			if ((tmp9)){
				HX_STACK_LINE(991)
				int tmp10 = (int(pixel) & int((int)255));		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(991)
				bool tmp11 = (tmp10 == (int)0);		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(991)
				if ((tmp11)){
					HX_STACK_LINE(991)
					bool tmp12 = (pixel != (int)0);		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(991)
					if ((tmp12)){
						HX_STACK_LINE(991)
						pixel = (int)0;
					}
				}
				else{
					HX_STACK_LINE(991)
					int tmp12 = (int(pixel) & int((int)255));		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(991)
					bool tmp13 = (tmp12 != (int)255);		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(991)
					if ((tmp13)){
						HX_STACK_LINE(991)
						Dynamic tmp14;		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(991)
						{
							HX_STACK_LINE(991)
							::lime::utils::ArrayBufferView tmp15 = ::lime::math::color::_RGBA::RGBA_Impl__obj::__alpha16;		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(991)
							::lime::utils::ArrayBufferView this1 = tmp15;		HX_STACK_VAR(this1,"this1");
							HX_STACK_LINE(991)
							{
								HX_STACK_LINE(991)
								bool littleEndian = true;		HX_STACK_VAR(littleEndian,"littleEndian");
								HX_STACK_LINE(991)
								tmp14 = ::__hxcpp_memory_get_ui32(this1->buffer->b,(this1->byteOffset + (((int(pixel) & int((int)255))) * (int)4)));
							}
						}
						HX_STACK_LINE(991)
						::lime::math::color::_RGBA::RGBA_Impl__obj::a16 = tmp14;
						HX_STACK_LINE(991)
						{
							HX_STACK_LINE(991)
							int tmp15 = (int(pixel) >> int((int)24));		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(991)
							int tmp16 = (int(tmp15) & int((int)255));		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(991)
							int tmp17 = ::lime::math::color::_RGBA::RGBA_Impl__obj::a16;		HX_STACK_VAR(tmp17,"tmp17");
							HX_STACK_LINE(991)
							int tmp18 = (tmp16 * tmp17);		HX_STACK_VAR(tmp18,"tmp18");
							HX_STACK_LINE(991)
							int tmp19 = (int(tmp18) >> int((int)16));		HX_STACK_VAR(tmp19,"tmp19");
							HX_STACK_LINE(991)
							int tmp20 = (int(tmp19) & int((int)255));		HX_STACK_VAR(tmp20,"tmp20");
							HX_STACK_LINE(991)
							int tmp21 = (int(tmp20) << int((int)24));		HX_STACK_VAR(tmp21,"tmp21");
							HX_STACK_LINE(991)
							int tmp22 = (int(pixel) >> int((int)16));		HX_STACK_VAR(tmp22,"tmp22");
							HX_STACK_LINE(991)
							int tmp23 = (int(tmp22) & int((int)255));		HX_STACK_VAR(tmp23,"tmp23");
							HX_STACK_LINE(991)
							int tmp24 = ::lime::math::color::_RGBA::RGBA_Impl__obj::a16;		HX_STACK_VAR(tmp24,"tmp24");
							HX_STACK_LINE(991)
							int tmp25 = (tmp23 * tmp24);		HX_STACK_VAR(tmp25,"tmp25");
							HX_STACK_LINE(991)
							int tmp26 = (int(tmp25) >> int((int)16));		HX_STACK_VAR(tmp26,"tmp26");
							HX_STACK_LINE(991)
							int tmp27 = (int(tmp26) & int((int)255));		HX_STACK_VAR(tmp27,"tmp27");
							HX_STACK_LINE(991)
							int tmp28 = (int(tmp27) << int((int)16));		HX_STACK_VAR(tmp28,"tmp28");
							HX_STACK_LINE(991)
							int tmp29 = (int(tmp21) | int(tmp28));		HX_STACK_VAR(tmp29,"tmp29");
							HX_STACK_LINE(991)
							int tmp30 = (int(pixel) >> int((int)8));		HX_STACK_VAR(tmp30,"tmp30");
							HX_STACK_LINE(991)
							int tmp31 = (int(tmp30) & int((int)255));		HX_STACK_VAR(tmp31,"tmp31");
							HX_STACK_LINE(991)
							int tmp32 = ::lime::math::color::_RGBA::RGBA_Impl__obj::a16;		HX_STACK_VAR(tmp32,"tmp32");
							HX_STACK_LINE(991)
							int tmp33 = (tmp31 * tmp32);		HX_STACK_VAR(tmp33,"tmp33");
							HX_STACK_LINE(991)
							int tmp34 = (int(tmp33) >> int((int)16));		HX_STACK_VAR(tmp34,"tmp34");
							HX_STACK_LINE(991)
							int tmp35 = (int(tmp34) & int((int)255));		HX_STACK_VAR(tmp35,"tmp35");
							HX_STACK_LINE(991)
							int tmp36 = (int(tmp35) << int((int)8));		HX_STACK_VAR(tmp36,"tmp36");
							HX_STACK_LINE(991)
							int tmp37 = (int(tmp29) | int(tmp36));		HX_STACK_VAR(tmp37,"tmp37");
							HX_STACK_LINE(991)
							int tmp38 = (int(pixel) & int((int)255));		HX_STACK_VAR(tmp38,"tmp38");
							HX_STACK_LINE(991)
							int tmp39 = (int(tmp38) & int((int)255));		HX_STACK_VAR(tmp39,"tmp39");
							HX_STACK_LINE(991)
							int tmp40 = (int(tmp37) | int(tmp39));		HX_STACK_VAR(tmp40,"tmp40");
							HX_STACK_LINE(991)
							pixel = tmp40;
						}
					}
				}
			}
			HX_STACK_LINE(991)
			int tmp10 = image->buffer->format;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(991)
			switch( (int)(tmp10)){
				case (int)2: {
					HX_STACK_LINE(991)
					{
						HX_STACK_LINE(991)
						int tmp11 = (int(pixel) >> int((int)8));		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(991)
						int tmp12 = (int(tmp11) & int((int)255));		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(991)
						int val = tmp12;		HX_STACK_VAR(val,"val");
						HX_STACK_LINE(991)
						{
							HX_STACK_LINE(991)
							::__hxcpp_memory_set_byte(data->buffer->b,(data->byteOffset + offset),val);
							HX_STACK_LINE(991)
							val;
						}
					}
					HX_STACK_LINE(991)
					{
						HX_STACK_LINE(991)
						int tmp11 = (int(pixel) >> int((int)16));		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(991)
						int tmp12 = (int(tmp11) & int((int)255));		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(991)
						int val = tmp12;		HX_STACK_VAR(val,"val");
						HX_STACK_LINE(991)
						{
							HX_STACK_LINE(991)
							::__hxcpp_memory_set_byte(data->buffer->b,(data->byteOffset + ((offset + (int)1))),val);
							HX_STACK_LINE(991)
							val;
						}
					}
					HX_STACK_LINE(991)
					{
						HX_STACK_LINE(991)
						int tmp11 = (int(pixel) >> int((int)24));		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(991)
						int tmp12 = (int(tmp11) & int((int)255));		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(991)
						int val = tmp12;		HX_STACK_VAR(val,"val");
						HX_STACK_LINE(991)
						{
							HX_STACK_LINE(991)
							::__hxcpp_memory_set_byte(data->buffer->b,(data->byteOffset + ((offset + (int)2))),val);
							HX_STACK_LINE(991)
							val;
						}
					}
					HX_STACK_LINE(991)
					{
						HX_STACK_LINE(991)
						int tmp11 = (int(pixel) & int((int)255));		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(991)
						int val = tmp11;		HX_STACK_VAR(val,"val");
						HX_STACK_LINE(991)
						{
							HX_STACK_LINE(991)
							::__hxcpp_memory_set_byte(data->buffer->b,(data->byteOffset + ((offset + (int)3))),val);
							HX_STACK_LINE(991)
							val;
						}
					}
				}
				;break;
				case (int)0: {
					HX_STACK_LINE(991)
					{
						HX_STACK_LINE(991)
						int tmp11 = (int(pixel) >> int((int)24));		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(991)
						int tmp12 = (int(tmp11) & int((int)255));		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(991)
						int val = tmp12;		HX_STACK_VAR(val,"val");
						HX_STACK_LINE(991)
						{
							HX_STACK_LINE(991)
							::__hxcpp_memory_set_byte(data->buffer->b,(data->byteOffset + offset),val);
							HX_STACK_LINE(991)
							val;
						}
					}
					HX_STACK_LINE(991)
					{
						HX_STACK_LINE(991)
						int tmp11 = (int(pixel) >> int((int)16));		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(991)
						int tmp12 = (int(tmp11) & int((int)255));		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(991)
						int val = tmp12;		HX_STACK_VAR(val,"val");
						HX_STACK_LINE(991)
						{
							HX_STACK_LINE(991)
							::__hxcpp_memory_set_byte(data->buffer->b,(data->byteOffset + ((offset + (int)1))),val);
							HX_STACK_LINE(991)
							val;
						}
					}
					HX_STACK_LINE(991)
					{
						HX_STACK_LINE(991)
						int tmp11 = (int(pixel) >> int((int)8));		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(991)
						int tmp12 = (int(tmp11) & int((int)255));		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(991)
						int val = tmp12;		HX_STACK_VAR(val,"val");
						HX_STACK_LINE(991)
						{
							HX_STACK_LINE(991)
							::__hxcpp_memory_set_byte(data->buffer->b,(data->byteOffset + ((offset + (int)2))),val);
							HX_STACK_LINE(991)
							val;
						}
					}
					HX_STACK_LINE(991)
					{
						HX_STACK_LINE(991)
						int tmp11 = (int(pixel) & int((int)255));		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(991)
						int val = tmp11;		HX_STACK_VAR(val,"val");
						HX_STACK_LINE(991)
						{
							HX_STACK_LINE(991)
							::__hxcpp_memory_set_byte(data->buffer->b,(data->byteOffset + ((offset + (int)3))),val);
							HX_STACK_LINE(991)
							val;
						}
					}
				}
				;break;
				case (int)1: {
					HX_STACK_LINE(991)
					{
						HX_STACK_LINE(991)
						int tmp11 = (int(pixel) & int((int)255));		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(991)
						int val = tmp11;		HX_STACK_VAR(val,"val");
						HX_STACK_LINE(991)
						{
							HX_STACK_LINE(991)
							::__hxcpp_memory_set_byte(data->buffer->b,(data->byteOffset + offset),val);
							HX_STACK_LINE(991)
							val;
						}
					}
					HX_STACK_LINE(991)
					{
						HX_STACK_LINE(991)
						int tmp11 = (int(pixel) >> int((int)24));		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(991)
						int tmp12 = (int(tmp11) & int((int)255));		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(991)
						int val = tmp12;		HX_STACK_VAR(val,"val");
						HX_STACK_LINE(991)
						{
							HX_STACK_LINE(991)
							::__hxcpp_memory_set_byte(data->buffer->b,(data->byteOffset + ((offset + (int)1))),val);
							HX_STACK_LINE(991)
							val;
						}
					}
					HX_STACK_LINE(991)
					{
						HX_STACK_LINE(991)
						int tmp11 = (int(pixel) >> int((int)16));		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(991)
						int tmp12 = (int(tmp11) & int((int)255));		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(991)
						int val = tmp12;		HX_STACK_VAR(val,"val");
						HX_STACK_LINE(991)
						{
							HX_STACK_LINE(991)
							::__hxcpp_memory_set_byte(data->buffer->b,(data->byteOffset + ((offset + (int)2))),val);
							HX_STACK_LINE(991)
							val;
						}
					}
					HX_STACK_LINE(991)
					{
						HX_STACK_LINE(991)
						int tmp11 = (int(pixel) >> int((int)8));		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(991)
						int tmp12 = (int(tmp11) & int((int)255));		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(991)
						int val = tmp12;		HX_STACK_VAR(val,"val");
						HX_STACK_LINE(991)
						{
							HX_STACK_LINE(991)
							::__hxcpp_memory_set_byte(data->buffer->b,(data->byteOffset + ((offset + (int)3))),val);
							HX_STACK_LINE(991)
							val;
						}
					}
				}
				;break;
			}
		}
		HX_STACK_LINE(993)
		image->dirty = true;
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC5(ImageDataUtil_obj,setPixel,(void))

Void ImageDataUtil_obj::setPixel32( ::lime::graphics::Image image,int x,int y,int color,int format){
{
		HX_STACK_FRAME("lime.graphics.utils.ImageDataUtil","setPixel32",0x2e222851,"lime.graphics.utils.ImageDataUtil.setPixel32","lime/graphics/utils/ImageDataUtil.hx",998,0x494d921f)
		HX_STACK_ARG(image,"image")
		HX_STACK_ARG(x,"x")
		HX_STACK_ARG(y,"y")
		HX_STACK_ARG(color,"color")
		HX_STACK_ARG(format,"format")
		HX_STACK_LINE(1000)
		int pixel;		HX_STACK_VAR(pixel,"pixel");
		HX_STACK_LINE(1002)
		int tmp = format;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(1002)
		switch( (int)(tmp)){
			case (int)1: {
				HX_STACK_LINE(1004)
				int tmp1;		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(1004)
				{
					HX_STACK_LINE(1004)
					int argb = color;		HX_STACK_VAR(argb,"argb");
					HX_STACK_LINE(1004)
					{
						HX_STACK_LINE(1004)
						int tmp2;		HX_STACK_VAR(tmp2,"tmp2");
						HX_STACK_LINE(1004)
						{
							HX_STACK_LINE(1004)
							int rgba = (int)0;		HX_STACK_VAR(rgba,"rgba");
							HX_STACK_LINE(1004)
							tmp2 = rgba;
						}
						HX_STACK_LINE(1004)
						int rgba = tmp2;		HX_STACK_VAR(rgba,"rgba");
						HX_STACK_LINE(1004)
						{
							HX_STACK_LINE(1004)
							int tmp3 = (int(argb) >> int((int)16));		HX_STACK_VAR(tmp3,"tmp3");
							HX_STACK_LINE(1004)
							int tmp4 = (int(tmp3) & int((int)255));		HX_STACK_VAR(tmp4,"tmp4");
							HX_STACK_LINE(1004)
							int tmp5 = (int(tmp4) & int((int)255));		HX_STACK_VAR(tmp5,"tmp5");
							HX_STACK_LINE(1004)
							int tmp6 = (int(tmp5) << int((int)24));		HX_STACK_VAR(tmp6,"tmp6");
							HX_STACK_LINE(1004)
							int tmp7 = (int(argb) >> int((int)8));		HX_STACK_VAR(tmp7,"tmp7");
							HX_STACK_LINE(1004)
							int tmp8 = (int(tmp7) & int((int)255));		HX_STACK_VAR(tmp8,"tmp8");
							HX_STACK_LINE(1004)
							int tmp9 = (int(tmp8) & int((int)255));		HX_STACK_VAR(tmp9,"tmp9");
							HX_STACK_LINE(1004)
							int tmp10 = (int(tmp9) << int((int)16));		HX_STACK_VAR(tmp10,"tmp10");
							HX_STACK_LINE(1004)
							int tmp11 = (int(tmp6) | int(tmp10));		HX_STACK_VAR(tmp11,"tmp11");
							HX_STACK_LINE(1004)
							int tmp12 = (int(argb) & int((int)255));		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(1004)
							int tmp13 = (int(tmp12) & int((int)255));		HX_STACK_VAR(tmp13,"tmp13");
							HX_STACK_LINE(1004)
							int tmp14 = (int(tmp13) << int((int)8));		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(1004)
							int tmp15 = (int(tmp11) | int(tmp14));		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(1004)
							int tmp16 = (int(argb) >> int((int)24));		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(1004)
							int tmp17 = (int(tmp16) & int((int)255));		HX_STACK_VAR(tmp17,"tmp17");
							HX_STACK_LINE(1004)
							int tmp18 = (int(tmp17) & int((int)255));		HX_STACK_VAR(tmp18,"tmp18");
							HX_STACK_LINE(1004)
							int tmp19 = (int(tmp15) | int(tmp18));		HX_STACK_VAR(tmp19,"tmp19");
							HX_STACK_LINE(1004)
							rgba = tmp19;
						}
						HX_STACK_LINE(1004)
						tmp1 = rgba;
					}
				}
				HX_STACK_LINE(1004)
				pixel = tmp1;
			}
			;break;
			case (int)2: {
				HX_STACK_LINE(1005)
				int tmp1;		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(1005)
				{
					HX_STACK_LINE(1005)
					int bgra = color;		HX_STACK_VAR(bgra,"bgra");
					HX_STACK_LINE(1005)
					{
						HX_STACK_LINE(1005)
						int tmp2;		HX_STACK_VAR(tmp2,"tmp2");
						HX_STACK_LINE(1005)
						{
							HX_STACK_LINE(1005)
							int rgba = (int)0;		HX_STACK_VAR(rgba,"rgba");
							HX_STACK_LINE(1005)
							tmp2 = rgba;
						}
						HX_STACK_LINE(1005)
						int rgba = tmp2;		HX_STACK_VAR(rgba,"rgba");
						HX_STACK_LINE(1005)
						{
							HX_STACK_LINE(1005)
							int tmp3 = (int(bgra) >> int((int)8));		HX_STACK_VAR(tmp3,"tmp3");
							HX_STACK_LINE(1005)
							int tmp4 = (int(tmp3) & int((int)255));		HX_STACK_VAR(tmp4,"tmp4");
							HX_STACK_LINE(1005)
							int tmp5 = (int(tmp4) & int((int)255));		HX_STACK_VAR(tmp5,"tmp5");
							HX_STACK_LINE(1005)
							int tmp6 = (int(tmp5) << int((int)24));		HX_STACK_VAR(tmp6,"tmp6");
							HX_STACK_LINE(1005)
							int tmp7 = (int(bgra) >> int((int)16));		HX_STACK_VAR(tmp7,"tmp7");
							HX_STACK_LINE(1005)
							int tmp8 = (int(tmp7) & int((int)255));		HX_STACK_VAR(tmp8,"tmp8");
							HX_STACK_LINE(1005)
							int tmp9 = (int(tmp8) & int((int)255));		HX_STACK_VAR(tmp9,"tmp9");
							HX_STACK_LINE(1005)
							int tmp10 = (int(tmp9) << int((int)16));		HX_STACK_VAR(tmp10,"tmp10");
							HX_STACK_LINE(1005)
							int tmp11 = (int(tmp6) | int(tmp10));		HX_STACK_VAR(tmp11,"tmp11");
							HX_STACK_LINE(1005)
							int tmp12 = (int(bgra) >> int((int)24));		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(1005)
							int tmp13 = (int(tmp12) & int((int)255));		HX_STACK_VAR(tmp13,"tmp13");
							HX_STACK_LINE(1005)
							int tmp14 = (int(tmp13) & int((int)255));		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(1005)
							int tmp15 = (int(tmp14) << int((int)8));		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(1005)
							int tmp16 = (int(tmp11) | int(tmp15));		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(1005)
							int tmp17 = (int(bgra) & int((int)255));		HX_STACK_VAR(tmp17,"tmp17");
							HX_STACK_LINE(1005)
							int tmp18 = (int(tmp17) & int((int)255));		HX_STACK_VAR(tmp18,"tmp18");
							HX_STACK_LINE(1005)
							int tmp19 = (int(tmp16) | int(tmp18));		HX_STACK_VAR(tmp19,"tmp19");
							HX_STACK_LINE(1005)
							rgba = tmp19;
						}
						HX_STACK_LINE(1005)
						tmp1 = rgba;
					}
				}
				HX_STACK_LINE(1005)
				pixel = tmp1;
			}
			;break;
			default: {
				HX_STACK_LINE(1006)
				pixel = color;
			}
		}
		HX_STACK_LINE(1010)
		bool tmp1 = image->get_transparent();		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(1010)
		bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(1010)
		if ((tmp2)){
			HX_STACK_LINE(1010)
			{
				HX_STACK_LINE(1010)
				int tmp3 = (int(pixel) >> int((int)24));		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(1010)
				int tmp4 = (int(tmp3) & int((int)255));		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(1010)
				int tmp5 = (int(tmp4) & int((int)255));		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(1010)
				int tmp6 = (int(tmp5) << int((int)24));		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(1010)
				int tmp7 = (int(pixel) >> int((int)16));		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(1010)
				int tmp8 = (int(tmp7) & int((int)255));		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(1010)
				int tmp9 = (int(tmp8) & int((int)255));		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(1010)
				int tmp10 = (int(tmp9) << int((int)16));		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(1010)
				int tmp11 = (int(tmp6) | int(tmp10));		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(1010)
				int tmp12 = (int(pixel) >> int((int)8));		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(1010)
				int tmp13 = (int(tmp12) & int((int)255));		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(1010)
				int tmp14 = (int(tmp13) & int((int)255));		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(1010)
				int tmp15 = (int(tmp14) << int((int)8));		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(1010)
				int tmp16 = (int(tmp11) | int(tmp15));		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(1010)
				int tmp17 = (int)255;		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(1010)
				int tmp18 = (int(tmp16) | int(tmp17));		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(1010)
				pixel = tmp18;
			}
			HX_STACK_LINE(1010)
			(int)255;
		}
		HX_STACK_LINE(1011)
		{
			HX_STACK_LINE(1011)
			::lime::utils::ArrayBufferView tmp3 = image->buffer->data;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(1011)
			::lime::utils::ArrayBufferView data = tmp3;		HX_STACK_VAR(data,"data");
			HX_STACK_LINE(1011)
			int tmp4 = (y + image->offsetY);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(1011)
			int tmp5 = ((int)4 * tmp4);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(1011)
			int tmp6 = image->buffer->width;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(1011)
			int tmp7 = (tmp5 * tmp6);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(1011)
			int tmp8 = (x + image->offsetX);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(1011)
			int tmp9 = (tmp8 * (int)4);		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(1011)
			int tmp10 = (tmp7 + tmp9);		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(1011)
			int offset = tmp10;		HX_STACK_VAR(offset,"offset");
			HX_STACK_LINE(1011)
			bool tmp11 = image->buffer->premultiplied;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(1011)
			if ((tmp11)){
				HX_STACK_LINE(1011)
				int tmp12 = (int(pixel) & int((int)255));		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(1011)
				bool tmp13 = (tmp12 == (int)0);		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(1011)
				if ((tmp13)){
					HX_STACK_LINE(1011)
					bool tmp14 = (pixel != (int)0);		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(1011)
					if ((tmp14)){
						HX_STACK_LINE(1011)
						pixel = (int)0;
					}
				}
				else{
					HX_STACK_LINE(1011)
					int tmp14 = (int(pixel) & int((int)255));		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(1011)
					bool tmp15 = (tmp14 != (int)255);		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(1011)
					if ((tmp15)){
						HX_STACK_LINE(1011)
						Dynamic tmp16;		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(1011)
						{
							HX_STACK_LINE(1011)
							::lime::utils::ArrayBufferView tmp17 = ::lime::math::color::_RGBA::RGBA_Impl__obj::__alpha16;		HX_STACK_VAR(tmp17,"tmp17");
							HX_STACK_LINE(1011)
							::lime::utils::ArrayBufferView this1 = tmp17;		HX_STACK_VAR(this1,"this1");
							HX_STACK_LINE(1011)
							{
								HX_STACK_LINE(1011)
								bool littleEndian = true;		HX_STACK_VAR(littleEndian,"littleEndian");
								HX_STACK_LINE(1011)
								tmp16 = ::__hxcpp_memory_get_ui32(this1->buffer->b,(this1->byteOffset + (((int(pixel) & int((int)255))) * (int)4)));
							}
						}
						HX_STACK_LINE(1011)
						::lime::math::color::_RGBA::RGBA_Impl__obj::a16 = tmp16;
						HX_STACK_LINE(1011)
						{
							HX_STACK_LINE(1011)
							int tmp17 = (int(pixel) >> int((int)24));		HX_STACK_VAR(tmp17,"tmp17");
							HX_STACK_LINE(1011)
							int tmp18 = (int(tmp17) & int((int)255));		HX_STACK_VAR(tmp18,"tmp18");
							HX_STACK_LINE(1011)
							int tmp19 = ::lime::math::color::_RGBA::RGBA_Impl__obj::a16;		HX_STACK_VAR(tmp19,"tmp19");
							HX_STACK_LINE(1011)
							int tmp20 = (tmp18 * tmp19);		HX_STACK_VAR(tmp20,"tmp20");
							HX_STACK_LINE(1011)
							int tmp21 = (int(tmp20) >> int((int)16));		HX_STACK_VAR(tmp21,"tmp21");
							HX_STACK_LINE(1011)
							int tmp22 = (int(tmp21) & int((int)255));		HX_STACK_VAR(tmp22,"tmp22");
							HX_STACK_LINE(1011)
							int tmp23 = (int(tmp22) << int((int)24));		HX_STACK_VAR(tmp23,"tmp23");
							HX_STACK_LINE(1011)
							int tmp24 = (int(pixel) >> int((int)16));		HX_STACK_VAR(tmp24,"tmp24");
							HX_STACK_LINE(1011)
							int tmp25 = (int(tmp24) & int((int)255));		HX_STACK_VAR(tmp25,"tmp25");
							HX_STACK_LINE(1011)
							int tmp26 = ::lime::math::color::_RGBA::RGBA_Impl__obj::a16;		HX_STACK_VAR(tmp26,"tmp26");
							HX_STACK_LINE(1011)
							int tmp27 = (tmp25 * tmp26);		HX_STACK_VAR(tmp27,"tmp27");
							HX_STACK_LINE(1011)
							int tmp28 = (int(tmp27) >> int((int)16));		HX_STACK_VAR(tmp28,"tmp28");
							HX_STACK_LINE(1011)
							int tmp29 = (int(tmp28) & int((int)255));		HX_STACK_VAR(tmp29,"tmp29");
							HX_STACK_LINE(1011)
							int tmp30 = (int(tmp29) << int((int)16));		HX_STACK_VAR(tmp30,"tmp30");
							HX_STACK_LINE(1011)
							int tmp31 = (int(tmp23) | int(tmp30));		HX_STACK_VAR(tmp31,"tmp31");
							HX_STACK_LINE(1011)
							int tmp32 = (int(pixel) >> int((int)8));		HX_STACK_VAR(tmp32,"tmp32");
							HX_STACK_LINE(1011)
							int tmp33 = (int(tmp32) & int((int)255));		HX_STACK_VAR(tmp33,"tmp33");
							HX_STACK_LINE(1011)
							int tmp34 = ::lime::math::color::_RGBA::RGBA_Impl__obj::a16;		HX_STACK_VAR(tmp34,"tmp34");
							HX_STACK_LINE(1011)
							int tmp35 = (tmp33 * tmp34);		HX_STACK_VAR(tmp35,"tmp35");
							HX_STACK_LINE(1011)
							int tmp36 = (int(tmp35) >> int((int)16));		HX_STACK_VAR(tmp36,"tmp36");
							HX_STACK_LINE(1011)
							int tmp37 = (int(tmp36) & int((int)255));		HX_STACK_VAR(tmp37,"tmp37");
							HX_STACK_LINE(1011)
							int tmp38 = (int(tmp37) << int((int)8));		HX_STACK_VAR(tmp38,"tmp38");
							HX_STACK_LINE(1011)
							int tmp39 = (int(tmp31) | int(tmp38));		HX_STACK_VAR(tmp39,"tmp39");
							HX_STACK_LINE(1011)
							int tmp40 = (int(pixel) & int((int)255));		HX_STACK_VAR(tmp40,"tmp40");
							HX_STACK_LINE(1011)
							int tmp41 = (int(tmp40) & int((int)255));		HX_STACK_VAR(tmp41,"tmp41");
							HX_STACK_LINE(1011)
							int tmp42 = (int(tmp39) | int(tmp41));		HX_STACK_VAR(tmp42,"tmp42");
							HX_STACK_LINE(1011)
							pixel = tmp42;
						}
					}
				}
			}
			HX_STACK_LINE(1011)
			int tmp12 = image->buffer->format;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(1011)
			switch( (int)(tmp12)){
				case (int)2: {
					HX_STACK_LINE(1011)
					{
						HX_STACK_LINE(1011)
						int tmp13 = (int(pixel) >> int((int)8));		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(1011)
						int tmp14 = (int(tmp13) & int((int)255));		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(1011)
						int val = tmp14;		HX_STACK_VAR(val,"val");
						HX_STACK_LINE(1011)
						{
							HX_STACK_LINE(1011)
							::__hxcpp_memory_set_byte(data->buffer->b,(data->byteOffset + offset),val);
							HX_STACK_LINE(1011)
							val;
						}
					}
					HX_STACK_LINE(1011)
					{
						HX_STACK_LINE(1011)
						int tmp13 = (int(pixel) >> int((int)16));		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(1011)
						int tmp14 = (int(tmp13) & int((int)255));		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(1011)
						int val = tmp14;		HX_STACK_VAR(val,"val");
						HX_STACK_LINE(1011)
						{
							HX_STACK_LINE(1011)
							::__hxcpp_memory_set_byte(data->buffer->b,(data->byteOffset + ((offset + (int)1))),val);
							HX_STACK_LINE(1011)
							val;
						}
					}
					HX_STACK_LINE(1011)
					{
						HX_STACK_LINE(1011)
						int tmp13 = (int(pixel) >> int((int)24));		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(1011)
						int tmp14 = (int(tmp13) & int((int)255));		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(1011)
						int val = tmp14;		HX_STACK_VAR(val,"val");
						HX_STACK_LINE(1011)
						{
							HX_STACK_LINE(1011)
							::__hxcpp_memory_set_byte(data->buffer->b,(data->byteOffset + ((offset + (int)2))),val);
							HX_STACK_LINE(1011)
							val;
						}
					}
					HX_STACK_LINE(1011)
					{
						HX_STACK_LINE(1011)
						int tmp13 = (int(pixel) & int((int)255));		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(1011)
						int val = tmp13;		HX_STACK_VAR(val,"val");
						HX_STACK_LINE(1011)
						{
							HX_STACK_LINE(1011)
							::__hxcpp_memory_set_byte(data->buffer->b,(data->byteOffset + ((offset + (int)3))),val);
							HX_STACK_LINE(1011)
							val;
						}
					}
				}
				;break;
				case (int)0: {
					HX_STACK_LINE(1011)
					{
						HX_STACK_LINE(1011)
						int tmp13 = (int(pixel) >> int((int)24));		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(1011)
						int tmp14 = (int(tmp13) & int((int)255));		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(1011)
						int val = tmp14;		HX_STACK_VAR(val,"val");
						HX_STACK_LINE(1011)
						{
							HX_STACK_LINE(1011)
							::__hxcpp_memory_set_byte(data->buffer->b,(data->byteOffset + offset),val);
							HX_STACK_LINE(1011)
							val;
						}
					}
					HX_STACK_LINE(1011)
					{
						HX_STACK_LINE(1011)
						int tmp13 = (int(pixel) >> int((int)16));		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(1011)
						int tmp14 = (int(tmp13) & int((int)255));		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(1011)
						int val = tmp14;		HX_STACK_VAR(val,"val");
						HX_STACK_LINE(1011)
						{
							HX_STACK_LINE(1011)
							::__hxcpp_memory_set_byte(data->buffer->b,(data->byteOffset + ((offset + (int)1))),val);
							HX_STACK_LINE(1011)
							val;
						}
					}
					HX_STACK_LINE(1011)
					{
						HX_STACK_LINE(1011)
						int tmp13 = (int(pixel) >> int((int)8));		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(1011)
						int tmp14 = (int(tmp13) & int((int)255));		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(1011)
						int val = tmp14;		HX_STACK_VAR(val,"val");
						HX_STACK_LINE(1011)
						{
							HX_STACK_LINE(1011)
							::__hxcpp_memory_set_byte(data->buffer->b,(data->byteOffset + ((offset + (int)2))),val);
							HX_STACK_LINE(1011)
							val;
						}
					}
					HX_STACK_LINE(1011)
					{
						HX_STACK_LINE(1011)
						int tmp13 = (int(pixel) & int((int)255));		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(1011)
						int val = tmp13;		HX_STACK_VAR(val,"val");
						HX_STACK_LINE(1011)
						{
							HX_STACK_LINE(1011)
							::__hxcpp_memory_set_byte(data->buffer->b,(data->byteOffset + ((offset + (int)3))),val);
							HX_STACK_LINE(1011)
							val;
						}
					}
				}
				;break;
				case (int)1: {
					HX_STACK_LINE(1011)
					{
						HX_STACK_LINE(1011)
						int tmp13 = (int(pixel) & int((int)255));		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(1011)
						int val = tmp13;		HX_STACK_VAR(val,"val");
						HX_STACK_LINE(1011)
						{
							HX_STACK_LINE(1011)
							::__hxcpp_memory_set_byte(data->buffer->b,(data->byteOffset + offset),val);
							HX_STACK_LINE(1011)
							val;
						}
					}
					HX_STACK_LINE(1011)
					{
						HX_STACK_LINE(1011)
						int tmp13 = (int(pixel) >> int((int)24));		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(1011)
						int tmp14 = (int(tmp13) & int((int)255));		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(1011)
						int val = tmp14;		HX_STACK_VAR(val,"val");
						HX_STACK_LINE(1011)
						{
							HX_STACK_LINE(1011)
							::__hxcpp_memory_set_byte(data->buffer->b,(data->byteOffset + ((offset + (int)1))),val);
							HX_STACK_LINE(1011)
							val;
						}
					}
					HX_STACK_LINE(1011)
					{
						HX_STACK_LINE(1011)
						int tmp13 = (int(pixel) >> int((int)16));		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(1011)
						int tmp14 = (int(tmp13) & int((int)255));		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(1011)
						int val = tmp14;		HX_STACK_VAR(val,"val");
						HX_STACK_LINE(1011)
						{
							HX_STACK_LINE(1011)
							::__hxcpp_memory_set_byte(data->buffer->b,(data->byteOffset + ((offset + (int)2))),val);
							HX_STACK_LINE(1011)
							val;
						}
					}
					HX_STACK_LINE(1011)
					{
						HX_STACK_LINE(1011)
						int tmp13 = (int(pixel) >> int((int)8));		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(1011)
						int tmp14 = (int(tmp13) & int((int)255));		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(1011)
						int val = tmp14;		HX_STACK_VAR(val,"val");
						HX_STACK_LINE(1011)
						{
							HX_STACK_LINE(1011)
							::__hxcpp_memory_set_byte(data->buffer->b,(data->byteOffset + ((offset + (int)3))),val);
							HX_STACK_LINE(1011)
							val;
						}
					}
				}
				;break;
			}
		}
		HX_STACK_LINE(1013)
		image->dirty = true;
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC5(ImageDataUtil_obj,setPixel32,(void))

Void ImageDataUtil_obj::setPixels( ::lime::graphics::Image image,::lime::math::Rectangle rect,::lime::utils::ByteArray byteArray,int format){
{
		HX_STACK_FRAME("lime.graphics.utils.ImageDataUtil","setPixels",0x8e8e8101,"lime.graphics.utils.ImageDataUtil.setPixels","lime/graphics/utils/ImageDataUtil.hx",1018,0x494d921f)
		HX_STACK_ARG(image,"image")
		HX_STACK_ARG(rect,"rect")
		HX_STACK_ARG(byteArray,"byteArray")
		HX_STACK_ARG(format,"format")
		HX_STACK_LINE(1020)
		::lime::utils::ArrayBufferView tmp = image->buffer->data;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(1020)
		bool tmp1 = (tmp == null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(1020)
		if ((tmp1)){
			HX_STACK_LINE(1020)
			return null();
		}
		HX_STACK_LINE(1023)
		bool tmp2 = ::lime::_system::System_obj::disableCFFI;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(1023)
		bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(1023)
		if ((tmp3)){
			HX_STACK_LINE(1023)
			::lime::graphics::Image tmp4 = image;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(1023)
			::lime::math::Rectangle tmp5 = rect;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(1023)
			::lime::utils::ByteArray tmp6 = byteArray;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(1023)
			int tmp7 = format;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(1023)
			::lime::graphics::utils::ImageDataUtil_obj::lime_image_data_util_set_pixels(tmp4,tmp5,tmp6,tmp7);
		}
		else{
			HX_STACK_LINE(1027)
			::lime::utils::ArrayBufferView tmp4 = image->buffer->data;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(1027)
			::lime::utils::ArrayBufferView data = tmp4;		HX_STACK_VAR(data,"data");
			HX_STACK_LINE(1028)
			int tmp5 = image->buffer->format;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(1028)
			int sourceFormat = tmp5;		HX_STACK_VAR(sourceFormat,"sourceFormat");
			HX_STACK_LINE(1029)
			bool tmp6 = image->buffer->premultiplied;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(1029)
			bool premultiplied = tmp6;		HX_STACK_VAR(premultiplied,"premultiplied");
			HX_STACK_LINE(1030)
			::lime::graphics::utils::_ImageDataUtil::ImageDataView tmp7 = ::lime::graphics::utils::_ImageDataUtil::ImageDataView_obj::__new(image,rect);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(1030)
			::lime::graphics::utils::_ImageDataUtil::ImageDataView dataView = tmp7;		HX_STACK_VAR(dataView,"dataView");
			HX_STACK_LINE(1031)
			int row;		HX_STACK_VAR(row,"row");
			HX_STACK_LINE(1031)
			int color;		HX_STACK_VAR(color,"color");
			HX_STACK_LINE(1031)
			int pixel;		HX_STACK_VAR(pixel,"pixel");
			HX_STACK_LINE(1032)
			bool tmp8 = image->get_transparent();		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(1032)
			bool transparent = tmp8;		HX_STACK_VAR(transparent,"transparent");
			HX_STACK_LINE(1034)
			{
				HX_STACK_LINE(1034)
				int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(1034)
				int _g = dataView->height;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(1034)
				while((true)){
					HX_STACK_LINE(1034)
					bool tmp9 = (_g1 < _g);		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(1034)
					bool tmp10 = !(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(1034)
					if ((tmp10)){
						HX_STACK_LINE(1034)
						break;
					}
					HX_STACK_LINE(1034)
					int tmp11 = (_g1)++;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(1034)
					int y = tmp11;		HX_STACK_VAR(y,"y");
					HX_STACK_LINE(1036)
					int tmp12 = dataView->offset;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(1036)
					int tmp13 = (dataView->stride * y);		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(1036)
					int tmp14 = (tmp12 + tmp13);		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(1036)
					row = tmp14;
					HX_STACK_LINE(1038)
					{
						HX_STACK_LINE(1038)
						int _g3 = (int)0;		HX_STACK_VAR(_g3,"_g3");
						HX_STACK_LINE(1038)
						int _g2 = dataView->width;		HX_STACK_VAR(_g2,"_g2");
						HX_STACK_LINE(1038)
						while((true)){
							HX_STACK_LINE(1038)
							bool tmp15 = (_g3 < _g2);		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(1038)
							bool tmp16 = !(tmp15);		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(1038)
							if ((tmp16)){
								HX_STACK_LINE(1038)
								break;
							}
							HX_STACK_LINE(1038)
							int tmp17 = (_g3)++;		HX_STACK_VAR(tmp17,"tmp17");
							HX_STACK_LINE(1038)
							int x = tmp17;		HX_STACK_VAR(x,"x");
							HX_STACK_LINE(1040)
							int tmp18 = byteArray->readUnsignedInt();		HX_STACK_VAR(tmp18,"tmp18");
							HX_STACK_LINE(1040)
							color = tmp18;
							HX_STACK_LINE(1042)
							int tmp19 = format;		HX_STACK_VAR(tmp19,"tmp19");
							HX_STACK_LINE(1042)
							switch( (int)(tmp19)){
								case (int)1: {
									HX_STACK_LINE(1044)
									int tmp20;		HX_STACK_VAR(tmp20,"tmp20");
									HX_STACK_LINE(1044)
									{
										HX_STACK_LINE(1044)
										int argb = color;		HX_STACK_VAR(argb,"argb");
										HX_STACK_LINE(1044)
										{
											HX_STACK_LINE(1044)
											int tmp21;		HX_STACK_VAR(tmp21,"tmp21");
											HX_STACK_LINE(1044)
											{
												HX_STACK_LINE(1044)
												int rgba = (int)0;		HX_STACK_VAR(rgba,"rgba");
												HX_STACK_LINE(1044)
												tmp21 = rgba;
											}
											HX_STACK_LINE(1044)
											int rgba = tmp21;		HX_STACK_VAR(rgba,"rgba");
											HX_STACK_LINE(1044)
											{
												HX_STACK_LINE(1044)
												int tmp22 = (int(argb) >> int((int)16));		HX_STACK_VAR(tmp22,"tmp22");
												HX_STACK_LINE(1044)
												int tmp23 = (int(tmp22) & int((int)255));		HX_STACK_VAR(tmp23,"tmp23");
												HX_STACK_LINE(1044)
												int tmp24 = (int(tmp23) & int((int)255));		HX_STACK_VAR(tmp24,"tmp24");
												HX_STACK_LINE(1044)
												int tmp25 = (int(tmp24) << int((int)24));		HX_STACK_VAR(tmp25,"tmp25");
												HX_STACK_LINE(1044)
												int tmp26 = (int(argb) >> int((int)8));		HX_STACK_VAR(tmp26,"tmp26");
												HX_STACK_LINE(1044)
												int tmp27 = (int(tmp26) & int((int)255));		HX_STACK_VAR(tmp27,"tmp27");
												HX_STACK_LINE(1044)
												int tmp28 = (int(tmp27) & int((int)255));		HX_STACK_VAR(tmp28,"tmp28");
												HX_STACK_LINE(1044)
												int tmp29 = (int(tmp28) << int((int)16));		HX_STACK_VAR(tmp29,"tmp29");
												HX_STACK_LINE(1044)
												int tmp30 = (int(tmp25) | int(tmp29));		HX_STACK_VAR(tmp30,"tmp30");
												HX_STACK_LINE(1044)
												int tmp31 = (int(argb) & int((int)255));		HX_STACK_VAR(tmp31,"tmp31");
												HX_STACK_LINE(1044)
												int tmp32 = (int(tmp31) & int((int)255));		HX_STACK_VAR(tmp32,"tmp32");
												HX_STACK_LINE(1044)
												int tmp33 = (int(tmp32) << int((int)8));		HX_STACK_VAR(tmp33,"tmp33");
												HX_STACK_LINE(1044)
												int tmp34 = (int(tmp30) | int(tmp33));		HX_STACK_VAR(tmp34,"tmp34");
												HX_STACK_LINE(1044)
												int tmp35 = (int(argb) >> int((int)24));		HX_STACK_VAR(tmp35,"tmp35");
												HX_STACK_LINE(1044)
												int tmp36 = (int(tmp35) & int((int)255));		HX_STACK_VAR(tmp36,"tmp36");
												HX_STACK_LINE(1044)
												int tmp37 = (int(tmp36) & int((int)255));		HX_STACK_VAR(tmp37,"tmp37");
												HX_STACK_LINE(1044)
												int tmp38 = (int(tmp34) | int(tmp37));		HX_STACK_VAR(tmp38,"tmp38");
												HX_STACK_LINE(1044)
												rgba = tmp38;
											}
											HX_STACK_LINE(1044)
											tmp20 = rgba;
										}
									}
									HX_STACK_LINE(1044)
									pixel = tmp20;
								}
								;break;
								case (int)2: {
									HX_STACK_LINE(1045)
									int tmp20;		HX_STACK_VAR(tmp20,"tmp20");
									HX_STACK_LINE(1045)
									{
										HX_STACK_LINE(1045)
										int bgra = color;		HX_STACK_VAR(bgra,"bgra");
										HX_STACK_LINE(1045)
										{
											HX_STACK_LINE(1045)
											int tmp21;		HX_STACK_VAR(tmp21,"tmp21");
											HX_STACK_LINE(1045)
											{
												HX_STACK_LINE(1045)
												int rgba = (int)0;		HX_STACK_VAR(rgba,"rgba");
												HX_STACK_LINE(1045)
												tmp21 = rgba;
											}
											HX_STACK_LINE(1045)
											int rgba = tmp21;		HX_STACK_VAR(rgba,"rgba");
											HX_STACK_LINE(1045)
											{
												HX_STACK_LINE(1045)
												int tmp22 = (int(bgra) >> int((int)8));		HX_STACK_VAR(tmp22,"tmp22");
												HX_STACK_LINE(1045)
												int tmp23 = (int(tmp22) & int((int)255));		HX_STACK_VAR(tmp23,"tmp23");
												HX_STACK_LINE(1045)
												int tmp24 = (int(tmp23) & int((int)255));		HX_STACK_VAR(tmp24,"tmp24");
												HX_STACK_LINE(1045)
												int tmp25 = (int(tmp24) << int((int)24));		HX_STACK_VAR(tmp25,"tmp25");
												HX_STACK_LINE(1045)
												int tmp26 = (int(bgra) >> int((int)16));		HX_STACK_VAR(tmp26,"tmp26");
												HX_STACK_LINE(1045)
												int tmp27 = (int(tmp26) & int((int)255));		HX_STACK_VAR(tmp27,"tmp27");
												HX_STACK_LINE(1045)
												int tmp28 = (int(tmp27) & int((int)255));		HX_STACK_VAR(tmp28,"tmp28");
												HX_STACK_LINE(1045)
												int tmp29 = (int(tmp28) << int((int)16));		HX_STACK_VAR(tmp29,"tmp29");
												HX_STACK_LINE(1045)
												int tmp30 = (int(tmp25) | int(tmp29));		HX_STACK_VAR(tmp30,"tmp30");
												HX_STACK_LINE(1045)
												int tmp31 = (int(bgra) >> int((int)24));		HX_STACK_VAR(tmp31,"tmp31");
												HX_STACK_LINE(1045)
												int tmp32 = (int(tmp31) & int((int)255));		HX_STACK_VAR(tmp32,"tmp32");
												HX_STACK_LINE(1045)
												int tmp33 = (int(tmp32) & int((int)255));		HX_STACK_VAR(tmp33,"tmp33");
												HX_STACK_LINE(1045)
												int tmp34 = (int(tmp33) << int((int)8));		HX_STACK_VAR(tmp34,"tmp34");
												HX_STACK_LINE(1045)
												int tmp35 = (int(tmp30) | int(tmp34));		HX_STACK_VAR(tmp35,"tmp35");
												HX_STACK_LINE(1045)
												int tmp36 = (int(bgra) & int((int)255));		HX_STACK_VAR(tmp36,"tmp36");
												HX_STACK_LINE(1045)
												int tmp37 = (int(tmp36) & int((int)255));		HX_STACK_VAR(tmp37,"tmp37");
												HX_STACK_LINE(1045)
												int tmp38 = (int(tmp35) | int(tmp37));		HX_STACK_VAR(tmp38,"tmp38");
												HX_STACK_LINE(1045)
												rgba = tmp38;
											}
											HX_STACK_LINE(1045)
											tmp20 = rgba;
										}
									}
									HX_STACK_LINE(1045)
									pixel = tmp20;
								}
								;break;
								default: {
									HX_STACK_LINE(1046)
									pixel = color;
								}
							}
							HX_STACK_LINE(1050)
							bool tmp20 = transparent;		HX_STACK_VAR(tmp20,"tmp20");
							HX_STACK_LINE(1050)
							bool tmp21 = !(tmp20);		HX_STACK_VAR(tmp21,"tmp21");
							HX_STACK_LINE(1050)
							if ((tmp21)){
								HX_STACK_LINE(1050)
								{
									HX_STACK_LINE(1050)
									int tmp22 = (int(pixel) >> int((int)24));		HX_STACK_VAR(tmp22,"tmp22");
									HX_STACK_LINE(1050)
									int tmp23 = (int(tmp22) & int((int)255));		HX_STACK_VAR(tmp23,"tmp23");
									HX_STACK_LINE(1050)
									int tmp24 = (int(tmp23) & int((int)255));		HX_STACK_VAR(tmp24,"tmp24");
									HX_STACK_LINE(1050)
									int tmp25 = (int(tmp24) << int((int)24));		HX_STACK_VAR(tmp25,"tmp25");
									HX_STACK_LINE(1050)
									int tmp26 = (int(pixel) >> int((int)16));		HX_STACK_VAR(tmp26,"tmp26");
									HX_STACK_LINE(1050)
									int tmp27 = (int(tmp26) & int((int)255));		HX_STACK_VAR(tmp27,"tmp27");
									HX_STACK_LINE(1050)
									int tmp28 = (int(tmp27) & int((int)255));		HX_STACK_VAR(tmp28,"tmp28");
									HX_STACK_LINE(1050)
									int tmp29 = (int(tmp28) << int((int)16));		HX_STACK_VAR(tmp29,"tmp29");
									HX_STACK_LINE(1050)
									int tmp30 = (int(tmp25) | int(tmp29));		HX_STACK_VAR(tmp30,"tmp30");
									HX_STACK_LINE(1050)
									int tmp31 = (int(pixel) >> int((int)8));		HX_STACK_VAR(tmp31,"tmp31");
									HX_STACK_LINE(1050)
									int tmp32 = (int(tmp31) & int((int)255));		HX_STACK_VAR(tmp32,"tmp32");
									HX_STACK_LINE(1050)
									int tmp33 = (int(tmp32) & int((int)255));		HX_STACK_VAR(tmp33,"tmp33");
									HX_STACK_LINE(1050)
									int tmp34 = (int(tmp33) << int((int)8));		HX_STACK_VAR(tmp34,"tmp34");
									HX_STACK_LINE(1050)
									int tmp35 = (int(tmp30) | int(tmp34));		HX_STACK_VAR(tmp35,"tmp35");
									HX_STACK_LINE(1050)
									int tmp36 = (int)255;		HX_STACK_VAR(tmp36,"tmp36");
									HX_STACK_LINE(1050)
									int tmp37 = (int(tmp35) | int(tmp36));		HX_STACK_VAR(tmp37,"tmp37");
									HX_STACK_LINE(1050)
									pixel = tmp37;
								}
								HX_STACK_LINE(1050)
								(int)255;
							}
							HX_STACK_LINE(1051)
							{
								HX_STACK_LINE(1051)
								int tmp22 = row;		HX_STACK_VAR(tmp22,"tmp22");
								HX_STACK_LINE(1051)
								int tmp23 = (x * (int)4);		HX_STACK_VAR(tmp23,"tmp23");
								HX_STACK_LINE(1051)
								int tmp24 = (tmp22 + tmp23);		HX_STACK_VAR(tmp24,"tmp24");
								HX_STACK_LINE(1051)
								int offset = tmp24;		HX_STACK_VAR(offset,"offset");
								HX_STACK_LINE(1051)
								bool tmp25 = premultiplied;		HX_STACK_VAR(tmp25,"tmp25");
								HX_STACK_LINE(1051)
								if ((tmp25)){
									HX_STACK_LINE(1051)
									int tmp26 = (int(pixel) & int((int)255));		HX_STACK_VAR(tmp26,"tmp26");
									HX_STACK_LINE(1051)
									bool tmp27 = (tmp26 == (int)0);		HX_STACK_VAR(tmp27,"tmp27");
									HX_STACK_LINE(1051)
									if ((tmp27)){
										HX_STACK_LINE(1051)
										bool tmp28 = (pixel != (int)0);		HX_STACK_VAR(tmp28,"tmp28");
										HX_STACK_LINE(1051)
										if ((tmp28)){
											HX_STACK_LINE(1051)
											pixel = (int)0;
										}
									}
									else{
										HX_STACK_LINE(1051)
										int tmp28 = (int(pixel) & int((int)255));		HX_STACK_VAR(tmp28,"tmp28");
										HX_STACK_LINE(1051)
										bool tmp29 = (tmp28 != (int)255);		HX_STACK_VAR(tmp29,"tmp29");
										HX_STACK_LINE(1051)
										if ((tmp29)){
											HX_STACK_LINE(1051)
											Dynamic tmp30;		HX_STACK_VAR(tmp30,"tmp30");
											HX_STACK_LINE(1051)
											{
												HX_STACK_LINE(1051)
												::lime::utils::ArrayBufferView tmp31 = ::lime::math::color::_RGBA::RGBA_Impl__obj::__alpha16;		HX_STACK_VAR(tmp31,"tmp31");
												HX_STACK_LINE(1051)
												::lime::utils::ArrayBufferView this1 = tmp31;		HX_STACK_VAR(this1,"this1");
												HX_STACK_LINE(1051)
												{
													HX_STACK_LINE(1051)
													bool littleEndian = true;		HX_STACK_VAR(littleEndian,"littleEndian");
													HX_STACK_LINE(1051)
													tmp30 = ::__hxcpp_memory_get_ui32(this1->buffer->b,(this1->byteOffset + (((int(pixel) & int((int)255))) * (int)4)));
												}
											}
											HX_STACK_LINE(1051)
											::lime::math::color::_RGBA::RGBA_Impl__obj::a16 = tmp30;
											HX_STACK_LINE(1051)
											{
												HX_STACK_LINE(1051)
												int tmp31 = (int(pixel) >> int((int)24));		HX_STACK_VAR(tmp31,"tmp31");
												HX_STACK_LINE(1051)
												int tmp32 = (int(tmp31) & int((int)255));		HX_STACK_VAR(tmp32,"tmp32");
												HX_STACK_LINE(1051)
												int tmp33 = ::lime::math::color::_RGBA::RGBA_Impl__obj::a16;		HX_STACK_VAR(tmp33,"tmp33");
												HX_STACK_LINE(1051)
												int tmp34 = (tmp32 * tmp33);		HX_STACK_VAR(tmp34,"tmp34");
												HX_STACK_LINE(1051)
												int tmp35 = (int(tmp34) >> int((int)16));		HX_STACK_VAR(tmp35,"tmp35");
												HX_STACK_LINE(1051)
												int tmp36 = (int(tmp35) & int((int)255));		HX_STACK_VAR(tmp36,"tmp36");
												HX_STACK_LINE(1051)
												int tmp37 = (int(tmp36) << int((int)24));		HX_STACK_VAR(tmp37,"tmp37");
												HX_STACK_LINE(1051)
												int tmp38 = (int(pixel) >> int((int)16));		HX_STACK_VAR(tmp38,"tmp38");
												HX_STACK_LINE(1051)
												int tmp39 = (int(tmp38) & int((int)255));		HX_STACK_VAR(tmp39,"tmp39");
												HX_STACK_LINE(1051)
												int tmp40 = ::lime::math::color::_RGBA::RGBA_Impl__obj::a16;		HX_STACK_VAR(tmp40,"tmp40");
												HX_STACK_LINE(1051)
												int tmp41 = (tmp39 * tmp40);		HX_STACK_VAR(tmp41,"tmp41");
												HX_STACK_LINE(1051)
												int tmp42 = (int(tmp41) >> int((int)16));		HX_STACK_VAR(tmp42,"tmp42");
												HX_STACK_LINE(1051)
												int tmp43 = (int(tmp42) & int((int)255));		HX_STACK_VAR(tmp43,"tmp43");
												HX_STACK_LINE(1051)
												int tmp44 = (int(tmp43) << int((int)16));		HX_STACK_VAR(tmp44,"tmp44");
												HX_STACK_LINE(1051)
												int tmp45 = (int(tmp37) | int(tmp44));		HX_STACK_VAR(tmp45,"tmp45");
												HX_STACK_LINE(1051)
												int tmp46 = (int(pixel) >> int((int)8));		HX_STACK_VAR(tmp46,"tmp46");
												HX_STACK_LINE(1051)
												int tmp47 = (int(tmp46) & int((int)255));		HX_STACK_VAR(tmp47,"tmp47");
												HX_STACK_LINE(1051)
												int tmp48 = ::lime::math::color::_RGBA::RGBA_Impl__obj::a16;		HX_STACK_VAR(tmp48,"tmp48");
												HX_STACK_LINE(1051)
												int tmp49 = (tmp47 * tmp48);		HX_STACK_VAR(tmp49,"tmp49");
												HX_STACK_LINE(1051)
												int tmp50 = (int(tmp49) >> int((int)16));		HX_STACK_VAR(tmp50,"tmp50");
												HX_STACK_LINE(1051)
												int tmp51 = (int(tmp50) & int((int)255));		HX_STACK_VAR(tmp51,"tmp51");
												HX_STACK_LINE(1051)
												int tmp52 = (int(tmp51) << int((int)8));		HX_STACK_VAR(tmp52,"tmp52");
												HX_STACK_LINE(1051)
												int tmp53 = (int(tmp45) | int(tmp52));		HX_STACK_VAR(tmp53,"tmp53");
												HX_STACK_LINE(1051)
												int tmp54 = (int(pixel) & int((int)255));		HX_STACK_VAR(tmp54,"tmp54");
												HX_STACK_LINE(1051)
												int tmp55 = (int(tmp54) & int((int)255));		HX_STACK_VAR(tmp55,"tmp55");
												HX_STACK_LINE(1051)
												int tmp56 = (int(tmp53) | int(tmp55));		HX_STACK_VAR(tmp56,"tmp56");
												HX_STACK_LINE(1051)
												pixel = tmp56;
											}
										}
									}
								}
								HX_STACK_LINE(1051)
								int tmp26 = sourceFormat;		HX_STACK_VAR(tmp26,"tmp26");
								HX_STACK_LINE(1051)
								switch( (int)(tmp26)){
									case (int)2: {
										HX_STACK_LINE(1051)
										{
											HX_STACK_LINE(1051)
											int tmp27 = (int(pixel) >> int((int)8));		HX_STACK_VAR(tmp27,"tmp27");
											HX_STACK_LINE(1051)
											int tmp28 = (int(tmp27) & int((int)255));		HX_STACK_VAR(tmp28,"tmp28");
											HX_STACK_LINE(1051)
											int val = tmp28;		HX_STACK_VAR(val,"val");
											HX_STACK_LINE(1051)
											{
												HX_STACK_LINE(1051)
												::__hxcpp_memory_set_byte(data->buffer->b,(data->byteOffset + offset),val);
												HX_STACK_LINE(1051)
												val;
											}
										}
										HX_STACK_LINE(1051)
										{
											HX_STACK_LINE(1051)
											int tmp27 = (int(pixel) >> int((int)16));		HX_STACK_VAR(tmp27,"tmp27");
											HX_STACK_LINE(1051)
											int tmp28 = (int(tmp27) & int((int)255));		HX_STACK_VAR(tmp28,"tmp28");
											HX_STACK_LINE(1051)
											int val = tmp28;		HX_STACK_VAR(val,"val");
											HX_STACK_LINE(1051)
											{
												HX_STACK_LINE(1051)
												::__hxcpp_memory_set_byte(data->buffer->b,(data->byteOffset + ((offset + (int)1))),val);
												HX_STACK_LINE(1051)
												val;
											}
										}
										HX_STACK_LINE(1051)
										{
											HX_STACK_LINE(1051)
											int tmp27 = (int(pixel) >> int((int)24));		HX_STACK_VAR(tmp27,"tmp27");
											HX_STACK_LINE(1051)
											int tmp28 = (int(tmp27) & int((int)255));		HX_STACK_VAR(tmp28,"tmp28");
											HX_STACK_LINE(1051)
											int val = tmp28;		HX_STACK_VAR(val,"val");
											HX_STACK_LINE(1051)
											{
												HX_STACK_LINE(1051)
												::__hxcpp_memory_set_byte(data->buffer->b,(data->byteOffset + ((offset + (int)2))),val);
												HX_STACK_LINE(1051)
												val;
											}
										}
										HX_STACK_LINE(1051)
										{
											HX_STACK_LINE(1051)
											int tmp27 = (int(pixel) & int((int)255));		HX_STACK_VAR(tmp27,"tmp27");
											HX_STACK_LINE(1051)
											int val = tmp27;		HX_STACK_VAR(val,"val");
											HX_STACK_LINE(1051)
											{
												HX_STACK_LINE(1051)
												::__hxcpp_memory_set_byte(data->buffer->b,(data->byteOffset + ((offset + (int)3))),val);
												HX_STACK_LINE(1051)
												val;
											}
										}
									}
									;break;
									case (int)0: {
										HX_STACK_LINE(1051)
										{
											HX_STACK_LINE(1051)
											int tmp27 = (int(pixel) >> int((int)24));		HX_STACK_VAR(tmp27,"tmp27");
											HX_STACK_LINE(1051)
											int tmp28 = (int(tmp27) & int((int)255));		HX_STACK_VAR(tmp28,"tmp28");
											HX_STACK_LINE(1051)
											int val = tmp28;		HX_STACK_VAR(val,"val");
											HX_STACK_LINE(1051)
											{
												HX_STACK_LINE(1051)
												::__hxcpp_memory_set_byte(data->buffer->b,(data->byteOffset + offset),val);
												HX_STACK_LINE(1051)
												val;
											}
										}
										HX_STACK_LINE(1051)
										{
											HX_STACK_LINE(1051)
											int tmp27 = (int(pixel) >> int((int)16));		HX_STACK_VAR(tmp27,"tmp27");
											HX_STACK_LINE(1051)
											int tmp28 = (int(tmp27) & int((int)255));		HX_STACK_VAR(tmp28,"tmp28");
											HX_STACK_LINE(1051)
											int val = tmp28;		HX_STACK_VAR(val,"val");
											HX_STACK_LINE(1051)
											{
												HX_STACK_LINE(1051)
												::__hxcpp_memory_set_byte(data->buffer->b,(data->byteOffset + ((offset + (int)1))),val);
												HX_STACK_LINE(1051)
												val;
											}
										}
										HX_STACK_LINE(1051)
										{
											HX_STACK_LINE(1051)
											int tmp27 = (int(pixel) >> int((int)8));		HX_STACK_VAR(tmp27,"tmp27");
											HX_STACK_LINE(1051)
											int tmp28 = (int(tmp27) & int((int)255));		HX_STACK_VAR(tmp28,"tmp28");
											HX_STACK_LINE(1051)
											int val = tmp28;		HX_STACK_VAR(val,"val");
											HX_STACK_LINE(1051)
											{
												HX_STACK_LINE(1051)
												::__hxcpp_memory_set_byte(data->buffer->b,(data->byteOffset + ((offset + (int)2))),val);
												HX_STACK_LINE(1051)
												val;
											}
										}
										HX_STACK_LINE(1051)
										{
											HX_STACK_LINE(1051)
											int tmp27 = (int(pixel) & int((int)255));		HX_STACK_VAR(tmp27,"tmp27");
											HX_STACK_LINE(1051)
											int val = tmp27;		HX_STACK_VAR(val,"val");
											HX_STACK_LINE(1051)
											{
												HX_STACK_LINE(1051)
												::__hxcpp_memory_set_byte(data->buffer->b,(data->byteOffset + ((offset + (int)3))),val);
												HX_STACK_LINE(1051)
												val;
											}
										}
									}
									;break;
									case (int)1: {
										HX_STACK_LINE(1051)
										{
											HX_STACK_LINE(1051)
											int tmp27 = (int(pixel) & int((int)255));		HX_STACK_VAR(tmp27,"tmp27");
											HX_STACK_LINE(1051)
											int val = tmp27;		HX_STACK_VAR(val,"val");
											HX_STACK_LINE(1051)
											{
												HX_STACK_LINE(1051)
												::__hxcpp_memory_set_byte(data->buffer->b,(data->byteOffset + offset),val);
												HX_STACK_LINE(1051)
												val;
											}
										}
										HX_STACK_LINE(1051)
										{
											HX_STACK_LINE(1051)
											int tmp27 = (int(pixel) >> int((int)24));		HX_STACK_VAR(tmp27,"tmp27");
											HX_STACK_LINE(1051)
											int tmp28 = (int(tmp27) & int((int)255));		HX_STACK_VAR(tmp28,"tmp28");
											HX_STACK_LINE(1051)
											int val = tmp28;		HX_STACK_VAR(val,"val");
											HX_STACK_LINE(1051)
											{
												HX_STACK_LINE(1051)
												::__hxcpp_memory_set_byte(data->buffer->b,(data->byteOffset + ((offset + (int)1))),val);
												HX_STACK_LINE(1051)
												val;
											}
										}
										HX_STACK_LINE(1051)
										{
											HX_STACK_LINE(1051)
											int tmp27 = (int(pixel) >> int((int)16));		HX_STACK_VAR(tmp27,"tmp27");
											HX_STACK_LINE(1051)
											int tmp28 = (int(tmp27) & int((int)255));		HX_STACK_VAR(tmp28,"tmp28");
											HX_STACK_LINE(1051)
											int val = tmp28;		HX_STACK_VAR(val,"val");
											HX_STACK_LINE(1051)
											{
												HX_STACK_LINE(1051)
												::__hxcpp_memory_set_byte(data->buffer->b,(data->byteOffset + ((offset + (int)2))),val);
												HX_STACK_LINE(1051)
												val;
											}
										}
										HX_STACK_LINE(1051)
										{
											HX_STACK_LINE(1051)
											int tmp27 = (int(pixel) >> int((int)8));		HX_STACK_VAR(tmp27,"tmp27");
											HX_STACK_LINE(1051)
											int tmp28 = (int(tmp27) & int((int)255));		HX_STACK_VAR(tmp28,"tmp28");
											HX_STACK_LINE(1051)
											int val = tmp28;		HX_STACK_VAR(val,"val");
											HX_STACK_LINE(1051)
											{
												HX_STACK_LINE(1051)
												::__hxcpp_memory_set_byte(data->buffer->b,(data->byteOffset + ((offset + (int)3))),val);
												HX_STACK_LINE(1051)
												val;
											}
										}
									}
									;break;
								}
							}
						}
					}
				}
			}
		}
		HX_STACK_LINE(1059)
		image->dirty = true;
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(ImageDataUtil_obj,setPixels,(void))

Void ImageDataUtil_obj::unmultiplyAlpha( ::lime::graphics::Image image){
{
		HX_STACK_FRAME("lime.graphics.utils.ImageDataUtil","unmultiplyAlpha",0xa6ce9eb3,"lime.graphics.utils.ImageDataUtil.unmultiplyAlpha","lime/graphics/utils/ImageDataUtil.hx",1064,0x494d921f)
		HX_STACK_ARG(image,"image")
		HX_STACK_LINE(1066)
		::lime::utils::ArrayBufferView tmp = image->buffer->data;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(1066)
		::lime::utils::ArrayBufferView data = tmp;		HX_STACK_VAR(data,"data");
		HX_STACK_LINE(1067)
		bool tmp1 = (data == null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(1067)
		if ((tmp1)){
			HX_STACK_LINE(1067)
			return null();
		}
		HX_STACK_LINE(1070)
		bool tmp2 = ::lime::_system::System_obj::disableCFFI;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(1070)
		bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(1070)
		if ((tmp3)){
			HX_STACK_LINE(1070)
			::lime::graphics::Image tmp4 = image;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(1070)
			::lime::graphics::utils::ImageDataUtil_obj::lime_image_data_util_unmultiply_alpha(tmp4);
		}
		else{
			HX_STACK_LINE(1074)
			int tmp4 = image->buffer->format;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(1074)
			int format = tmp4;		HX_STACK_VAR(format,"format");
			HX_STACK_LINE(1075)
			int tmp5 = data->length;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(1075)
			Float tmp6 = (Float(tmp5) / Float((int)4));		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(1075)
			int tmp7 = ::Std_obj::_int(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(1075)
			int length = tmp7;		HX_STACK_VAR(length,"length");
			HX_STACK_LINE(1076)
			int pixel;		HX_STACK_VAR(pixel,"pixel");
			HX_STACK_LINE(1078)
			{
				HX_STACK_LINE(1078)
				int _g = (int)0;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(1078)
				while((true)){
					HX_STACK_LINE(1078)
					bool tmp8 = (_g < length);		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(1078)
					bool tmp9 = !(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(1078)
					if ((tmp9)){
						HX_STACK_LINE(1078)
						break;
					}
					HX_STACK_LINE(1078)
					int tmp10 = (_g)++;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(1078)
					int i = tmp10;		HX_STACK_VAR(i,"i");
					HX_STACK_LINE(1080)
					{
						HX_STACK_LINE(1080)
						int tmp11 = (i * (int)4);		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(1080)
						int offset = tmp11;		HX_STACK_VAR(offset,"offset");
						HX_STACK_LINE(1080)
						int tmp12 = format;		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(1080)
						switch( (int)(tmp12)){
							case (int)2: {
								HX_STACK_LINE(1080)
								int tmp13 = ::__hxcpp_memory_get_byte(data->buffer->b,(data->byteOffset + ((offset + (int)2))));		HX_STACK_VAR(tmp13,"tmp13");
								HX_STACK_LINE(1080)
								Dynamic tmp14 = (int(tmp13) & int((int)255));		HX_STACK_VAR(tmp14,"tmp14");
								HX_STACK_LINE(1080)
								int r = tmp14;		HX_STACK_VAR(r,"r");
								HX_STACK_LINE(1080)
								int tmp15 = ::__hxcpp_memory_get_byte(data->buffer->b,(data->byteOffset + ((offset + (int)1))));		HX_STACK_VAR(tmp15,"tmp15");
								HX_STACK_LINE(1080)
								Dynamic tmp16 = (int(tmp15) & int((int)255));		HX_STACK_VAR(tmp16,"tmp16");
								HX_STACK_LINE(1080)
								int g = tmp16;		HX_STACK_VAR(g,"g");
								HX_STACK_LINE(1080)
								int tmp17 = ::__hxcpp_memory_get_byte(data->buffer->b,(data->byteOffset + offset));		HX_STACK_VAR(tmp17,"tmp17");
								HX_STACK_LINE(1080)
								Dynamic tmp18 = (int(tmp17) & int((int)255));		HX_STACK_VAR(tmp18,"tmp18");
								HX_STACK_LINE(1080)
								int b = tmp18;		HX_STACK_VAR(b,"b");
								HX_STACK_LINE(1080)
								int tmp19 = ::__hxcpp_memory_get_byte(data->buffer->b,(data->byteOffset + ((offset + (int)3))));		HX_STACK_VAR(tmp19,"tmp19");
								HX_STACK_LINE(1080)
								Dynamic tmp20 = (int(tmp19) & int((int)255));		HX_STACK_VAR(tmp20,"tmp20");
								HX_STACK_LINE(1080)
								int a = tmp20;		HX_STACK_VAR(a,"a");
								HX_STACK_LINE(1080)
								int tmp21 = (int(r) & int((int)255));		HX_STACK_VAR(tmp21,"tmp21");
								HX_STACK_LINE(1080)
								int tmp22 = (int(tmp21) << int((int)24));		HX_STACK_VAR(tmp22,"tmp22");
								HX_STACK_LINE(1080)
								int tmp23 = (int(g) & int((int)255));		HX_STACK_VAR(tmp23,"tmp23");
								HX_STACK_LINE(1080)
								int tmp24 = (int(tmp23) << int((int)16));		HX_STACK_VAR(tmp24,"tmp24");
								HX_STACK_LINE(1080)
								int tmp25 = (int(tmp22) | int(tmp24));		HX_STACK_VAR(tmp25,"tmp25");
								HX_STACK_LINE(1080)
								int tmp26 = (int(b) & int((int)255));		HX_STACK_VAR(tmp26,"tmp26");
								HX_STACK_LINE(1080)
								int tmp27 = (int(tmp26) << int((int)8));		HX_STACK_VAR(tmp27,"tmp27");
								HX_STACK_LINE(1080)
								int tmp28 = (int(tmp25) | int(tmp27));		HX_STACK_VAR(tmp28,"tmp28");
								HX_STACK_LINE(1080)
								int tmp29 = (int(a) & int((int)255));		HX_STACK_VAR(tmp29,"tmp29");
								HX_STACK_LINE(1080)
								int tmp30 = (int(tmp28) | int(tmp29));		HX_STACK_VAR(tmp30,"tmp30");
								HX_STACK_LINE(1080)
								pixel = tmp30;
							}
							;break;
							case (int)0: {
								HX_STACK_LINE(1080)
								int tmp13 = ::__hxcpp_memory_get_byte(data->buffer->b,(data->byteOffset + offset));		HX_STACK_VAR(tmp13,"tmp13");
								HX_STACK_LINE(1080)
								Dynamic tmp14 = (int(tmp13) & int((int)255));		HX_STACK_VAR(tmp14,"tmp14");
								HX_STACK_LINE(1080)
								int r = tmp14;		HX_STACK_VAR(r,"r");
								HX_STACK_LINE(1080)
								int tmp15 = ::__hxcpp_memory_get_byte(data->buffer->b,(data->byteOffset + ((offset + (int)1))));		HX_STACK_VAR(tmp15,"tmp15");
								HX_STACK_LINE(1080)
								Dynamic tmp16 = (int(tmp15) & int((int)255));		HX_STACK_VAR(tmp16,"tmp16");
								HX_STACK_LINE(1080)
								int g = tmp16;		HX_STACK_VAR(g,"g");
								HX_STACK_LINE(1080)
								int tmp17 = ::__hxcpp_memory_get_byte(data->buffer->b,(data->byteOffset + ((offset + (int)2))));		HX_STACK_VAR(tmp17,"tmp17");
								HX_STACK_LINE(1080)
								Dynamic tmp18 = (int(tmp17) & int((int)255));		HX_STACK_VAR(tmp18,"tmp18");
								HX_STACK_LINE(1080)
								int b = tmp18;		HX_STACK_VAR(b,"b");
								HX_STACK_LINE(1080)
								int tmp19 = ::__hxcpp_memory_get_byte(data->buffer->b,(data->byteOffset + ((offset + (int)3))));		HX_STACK_VAR(tmp19,"tmp19");
								HX_STACK_LINE(1080)
								Dynamic tmp20 = (int(tmp19) & int((int)255));		HX_STACK_VAR(tmp20,"tmp20");
								HX_STACK_LINE(1080)
								int a = tmp20;		HX_STACK_VAR(a,"a");
								HX_STACK_LINE(1080)
								int tmp21 = (int(r) & int((int)255));		HX_STACK_VAR(tmp21,"tmp21");
								HX_STACK_LINE(1080)
								int tmp22 = (int(tmp21) << int((int)24));		HX_STACK_VAR(tmp22,"tmp22");
								HX_STACK_LINE(1080)
								int tmp23 = (int(g) & int((int)255));		HX_STACK_VAR(tmp23,"tmp23");
								HX_STACK_LINE(1080)
								int tmp24 = (int(tmp23) << int((int)16));		HX_STACK_VAR(tmp24,"tmp24");
								HX_STACK_LINE(1080)
								int tmp25 = (int(tmp22) | int(tmp24));		HX_STACK_VAR(tmp25,"tmp25");
								HX_STACK_LINE(1080)
								int tmp26 = (int(b) & int((int)255));		HX_STACK_VAR(tmp26,"tmp26");
								HX_STACK_LINE(1080)
								int tmp27 = (int(tmp26) << int((int)8));		HX_STACK_VAR(tmp27,"tmp27");
								HX_STACK_LINE(1080)
								int tmp28 = (int(tmp25) | int(tmp27));		HX_STACK_VAR(tmp28,"tmp28");
								HX_STACK_LINE(1080)
								int tmp29 = (int(a) & int((int)255));		HX_STACK_VAR(tmp29,"tmp29");
								HX_STACK_LINE(1080)
								int tmp30 = (int(tmp28) | int(tmp29));		HX_STACK_VAR(tmp30,"tmp30");
								HX_STACK_LINE(1080)
								pixel = tmp30;
							}
							;break;
							case (int)1: {
								HX_STACK_LINE(1080)
								int tmp13 = ::__hxcpp_memory_get_byte(data->buffer->b,(data->byteOffset + ((offset + (int)1))));		HX_STACK_VAR(tmp13,"tmp13");
								HX_STACK_LINE(1080)
								Dynamic tmp14 = (int(tmp13) & int((int)255));		HX_STACK_VAR(tmp14,"tmp14");
								HX_STACK_LINE(1080)
								int r = tmp14;		HX_STACK_VAR(r,"r");
								HX_STACK_LINE(1080)
								int tmp15 = ::__hxcpp_memory_get_byte(data->buffer->b,(data->byteOffset + ((offset + (int)2))));		HX_STACK_VAR(tmp15,"tmp15");
								HX_STACK_LINE(1080)
								Dynamic tmp16 = (int(tmp15) & int((int)255));		HX_STACK_VAR(tmp16,"tmp16");
								HX_STACK_LINE(1080)
								int g = tmp16;		HX_STACK_VAR(g,"g");
								HX_STACK_LINE(1080)
								int tmp17 = ::__hxcpp_memory_get_byte(data->buffer->b,(data->byteOffset + ((offset + (int)3))));		HX_STACK_VAR(tmp17,"tmp17");
								HX_STACK_LINE(1080)
								Dynamic tmp18 = (int(tmp17) & int((int)255));		HX_STACK_VAR(tmp18,"tmp18");
								HX_STACK_LINE(1080)
								int b = tmp18;		HX_STACK_VAR(b,"b");
								HX_STACK_LINE(1080)
								int tmp19 = ::__hxcpp_memory_get_byte(data->buffer->b,(data->byteOffset + offset));		HX_STACK_VAR(tmp19,"tmp19");
								HX_STACK_LINE(1080)
								Dynamic tmp20 = (int(tmp19) & int((int)255));		HX_STACK_VAR(tmp20,"tmp20");
								HX_STACK_LINE(1080)
								int a = tmp20;		HX_STACK_VAR(a,"a");
								HX_STACK_LINE(1080)
								int tmp21 = (int(r) & int((int)255));		HX_STACK_VAR(tmp21,"tmp21");
								HX_STACK_LINE(1080)
								int tmp22 = (int(tmp21) << int((int)24));		HX_STACK_VAR(tmp22,"tmp22");
								HX_STACK_LINE(1080)
								int tmp23 = (int(g) & int((int)255));		HX_STACK_VAR(tmp23,"tmp23");
								HX_STACK_LINE(1080)
								int tmp24 = (int(tmp23) << int((int)16));		HX_STACK_VAR(tmp24,"tmp24");
								HX_STACK_LINE(1080)
								int tmp25 = (int(tmp22) | int(tmp24));		HX_STACK_VAR(tmp25,"tmp25");
								HX_STACK_LINE(1080)
								int tmp26 = (int(b) & int((int)255));		HX_STACK_VAR(tmp26,"tmp26");
								HX_STACK_LINE(1080)
								int tmp27 = (int(tmp26) << int((int)8));		HX_STACK_VAR(tmp27,"tmp27");
								HX_STACK_LINE(1080)
								int tmp28 = (int(tmp25) | int(tmp27));		HX_STACK_VAR(tmp28,"tmp28");
								HX_STACK_LINE(1080)
								int tmp29 = (int(a) & int((int)255));		HX_STACK_VAR(tmp29,"tmp29");
								HX_STACK_LINE(1080)
								int tmp30 = (int(tmp28) | int(tmp29));		HX_STACK_VAR(tmp30,"tmp30");
								HX_STACK_LINE(1080)
								pixel = tmp30;
							}
							;break;
						}
						HX_STACK_LINE(1080)
						{
							HX_STACK_LINE(1080)
							int tmp13 = (int(pixel) & int((int)255));		HX_STACK_VAR(tmp13,"tmp13");
							HX_STACK_LINE(1080)
							bool tmp14 = (tmp13 != (int)0);		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(1080)
							bool tmp15;		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(1080)
							if ((tmp14)){
								HX_STACK_LINE(1080)
								int tmp16 = (int(pixel) & int((int)255));		HX_STACK_VAR(tmp16,"tmp16");
								HX_STACK_LINE(1080)
								int tmp17 = tmp16;		HX_STACK_VAR(tmp17,"tmp17");
								HX_STACK_LINE(1080)
								tmp15 = (tmp17 != (int)255);
							}
							else{
								HX_STACK_LINE(1080)
								tmp15 = false;
							}
							HX_STACK_LINE(1080)
							if ((tmp15)){
								HX_STACK_LINE(1080)
								int tmp16 = (int(pixel) & int((int)255));		HX_STACK_VAR(tmp16,"tmp16");
								HX_STACK_LINE(1080)
								Float tmp17 = (Float(((Float)255.0)) / Float(tmp16));		HX_STACK_VAR(tmp17,"tmp17");
								HX_STACK_LINE(1080)
								::lime::math::color::_RGBA::RGBA_Impl__obj::unmult = tmp17;
								HX_STACK_LINE(1080)
								{
									HX_STACK_LINE(1080)
									Dynamic tmp18;		HX_STACK_VAR(tmp18,"tmp18");
									HX_STACK_LINE(1080)
									{
										HX_STACK_LINE(1080)
										::lime::utils::ArrayBufferView tmp19 = ::lime::math::color::_RGBA::RGBA_Impl__obj::__clamp;		HX_STACK_VAR(tmp19,"tmp19");
										HX_STACK_LINE(1080)
										::lime::utils::ArrayBufferView this1 = tmp19;		HX_STACK_VAR(this1,"this1");
										HX_STACK_LINE(1080)
										int tmp20 = (int(pixel) >> int((int)24));		HX_STACK_VAR(tmp20,"tmp20");
										HX_STACK_LINE(1080)
										int tmp21 = (int(tmp20) & int((int)255));		HX_STACK_VAR(tmp21,"tmp21");
										HX_STACK_LINE(1080)
										Float tmp22 = ::lime::math::color::_RGBA::RGBA_Impl__obj::unmult;		HX_STACK_VAR(tmp22,"tmp22");
										HX_STACK_LINE(1080)
										Float tmp23 = (tmp21 * tmp22);		HX_STACK_VAR(tmp23,"tmp23");
										HX_STACK_LINE(1080)
										int tmp24 = ::Math_obj::round(tmp23);		HX_STACK_VAR(tmp24,"tmp24");
										HX_STACK_LINE(1080)
										int idx = tmp24;		HX_STACK_VAR(idx,"idx");
										HX_STACK_LINE(1080)
										int tmp25 = ::__hxcpp_memory_get_byte(this1->buffer->b,(this1->byteOffset + idx));		HX_STACK_VAR(tmp25,"tmp25");
										HX_STACK_LINE(1080)
										tmp18 = (int(tmp25) & int((int)255));
									}
									HX_STACK_LINE(1080)
									int r = tmp18;		HX_STACK_VAR(r,"r");
									HX_STACK_LINE(1080)
									Dynamic tmp19;		HX_STACK_VAR(tmp19,"tmp19");
									HX_STACK_LINE(1080)
									{
										HX_STACK_LINE(1080)
										::lime::utils::ArrayBufferView tmp20 = ::lime::math::color::_RGBA::RGBA_Impl__obj::__clamp;		HX_STACK_VAR(tmp20,"tmp20");
										HX_STACK_LINE(1080)
										::lime::utils::ArrayBufferView this1 = tmp20;		HX_STACK_VAR(this1,"this1");
										HX_STACK_LINE(1080)
										int tmp21 = (int(pixel) >> int((int)16));		HX_STACK_VAR(tmp21,"tmp21");
										HX_STACK_LINE(1080)
										int tmp22 = (int(tmp21) & int((int)255));		HX_STACK_VAR(tmp22,"tmp22");
										HX_STACK_LINE(1080)
										Float tmp23 = ::lime::math::color::_RGBA::RGBA_Impl__obj::unmult;		HX_STACK_VAR(tmp23,"tmp23");
										HX_STACK_LINE(1080)
										Float tmp24 = (tmp22 * tmp23);		HX_STACK_VAR(tmp24,"tmp24");
										HX_STACK_LINE(1080)
										int tmp25 = ::Math_obj::round(tmp24);		HX_STACK_VAR(tmp25,"tmp25");
										HX_STACK_LINE(1080)
										int idx = tmp25;		HX_STACK_VAR(idx,"idx");
										HX_STACK_LINE(1080)
										int tmp26 = ::__hxcpp_memory_get_byte(this1->buffer->b,(this1->byteOffset + idx));		HX_STACK_VAR(tmp26,"tmp26");
										HX_STACK_LINE(1080)
										tmp19 = (int(tmp26) & int((int)255));
									}
									HX_STACK_LINE(1080)
									int g = tmp19;		HX_STACK_VAR(g,"g");
									HX_STACK_LINE(1080)
									Dynamic tmp20;		HX_STACK_VAR(tmp20,"tmp20");
									HX_STACK_LINE(1080)
									{
										HX_STACK_LINE(1080)
										::lime::utils::ArrayBufferView tmp21 = ::lime::math::color::_RGBA::RGBA_Impl__obj::__clamp;		HX_STACK_VAR(tmp21,"tmp21");
										HX_STACK_LINE(1080)
										::lime::utils::ArrayBufferView this1 = tmp21;		HX_STACK_VAR(this1,"this1");
										HX_STACK_LINE(1080)
										int tmp22 = (int(pixel) >> int((int)8));		HX_STACK_VAR(tmp22,"tmp22");
										HX_STACK_LINE(1080)
										int tmp23 = (int(tmp22) & int((int)255));		HX_STACK_VAR(tmp23,"tmp23");
										HX_STACK_LINE(1080)
										Float tmp24 = ::lime::math::color::_RGBA::RGBA_Impl__obj::unmult;		HX_STACK_VAR(tmp24,"tmp24");
										HX_STACK_LINE(1080)
										Float tmp25 = (tmp23 * tmp24);		HX_STACK_VAR(tmp25,"tmp25");
										HX_STACK_LINE(1080)
										int tmp26 = ::Math_obj::round(tmp25);		HX_STACK_VAR(tmp26,"tmp26");
										HX_STACK_LINE(1080)
										int idx = tmp26;		HX_STACK_VAR(idx,"idx");
										HX_STACK_LINE(1080)
										int tmp27 = ::__hxcpp_memory_get_byte(this1->buffer->b,(this1->byteOffset + idx));		HX_STACK_VAR(tmp27,"tmp27");
										HX_STACK_LINE(1080)
										tmp20 = (int(tmp27) & int((int)255));
									}
									HX_STACK_LINE(1080)
									int b = tmp20;		HX_STACK_VAR(b,"b");
									HX_STACK_LINE(1080)
									int tmp21 = (int(r) & int((int)255));		HX_STACK_VAR(tmp21,"tmp21");
									HX_STACK_LINE(1080)
									int tmp22 = (int(tmp21) << int((int)24));		HX_STACK_VAR(tmp22,"tmp22");
									HX_STACK_LINE(1080)
									int tmp23 = (int(g) & int((int)255));		HX_STACK_VAR(tmp23,"tmp23");
									HX_STACK_LINE(1080)
									int tmp24 = (int(tmp23) << int((int)16));		HX_STACK_VAR(tmp24,"tmp24");
									HX_STACK_LINE(1080)
									int tmp25 = (int(tmp22) | int(tmp24));		HX_STACK_VAR(tmp25,"tmp25");
									HX_STACK_LINE(1080)
									int tmp26 = (int(b) & int((int)255));		HX_STACK_VAR(tmp26,"tmp26");
									HX_STACK_LINE(1080)
									int tmp27 = (int(tmp26) << int((int)8));		HX_STACK_VAR(tmp27,"tmp27");
									HX_STACK_LINE(1080)
									int tmp28 = (int(tmp25) | int(tmp27));		HX_STACK_VAR(tmp28,"tmp28");
									HX_STACK_LINE(1080)
									int tmp29 = (int(pixel) & int((int)255));		HX_STACK_VAR(tmp29,"tmp29");
									HX_STACK_LINE(1080)
									int tmp30 = (int(tmp29) & int((int)255));		HX_STACK_VAR(tmp30,"tmp30");
									HX_STACK_LINE(1080)
									int tmp31 = (int(tmp28) | int(tmp30));		HX_STACK_VAR(tmp31,"tmp31");
									HX_STACK_LINE(1080)
									pixel = tmp31;
								}
							}
						}
					}
					HX_STACK_LINE(1081)
					{
						HX_STACK_LINE(1081)
						int tmp11 = (i * (int)4);		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(1081)
						int offset = tmp11;		HX_STACK_VAR(offset,"offset");
						HX_STACK_LINE(1081)
						int tmp12 = format;		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(1081)
						switch( (int)(tmp12)){
							case (int)2: {
								HX_STACK_LINE(1081)
								{
									HX_STACK_LINE(1081)
									int tmp13 = (int(pixel) >> int((int)8));		HX_STACK_VAR(tmp13,"tmp13");
									HX_STACK_LINE(1081)
									int tmp14 = (int(tmp13) & int((int)255));		HX_STACK_VAR(tmp14,"tmp14");
									HX_STACK_LINE(1081)
									int val = tmp14;		HX_STACK_VAR(val,"val");
									HX_STACK_LINE(1081)
									{
										HX_STACK_LINE(1081)
										::__hxcpp_memory_set_byte(data->buffer->b,(data->byteOffset + offset),val);
										HX_STACK_LINE(1081)
										val;
									}
								}
								HX_STACK_LINE(1081)
								{
									HX_STACK_LINE(1081)
									int tmp13 = (int(pixel) >> int((int)16));		HX_STACK_VAR(tmp13,"tmp13");
									HX_STACK_LINE(1081)
									int tmp14 = (int(tmp13) & int((int)255));		HX_STACK_VAR(tmp14,"tmp14");
									HX_STACK_LINE(1081)
									int val = tmp14;		HX_STACK_VAR(val,"val");
									HX_STACK_LINE(1081)
									{
										HX_STACK_LINE(1081)
										::__hxcpp_memory_set_byte(data->buffer->b,(data->byteOffset + ((offset + (int)1))),val);
										HX_STACK_LINE(1081)
										val;
									}
								}
								HX_STACK_LINE(1081)
								{
									HX_STACK_LINE(1081)
									int tmp13 = (int(pixel) >> int((int)24));		HX_STACK_VAR(tmp13,"tmp13");
									HX_STACK_LINE(1081)
									int tmp14 = (int(tmp13) & int((int)255));		HX_STACK_VAR(tmp14,"tmp14");
									HX_STACK_LINE(1081)
									int val = tmp14;		HX_STACK_VAR(val,"val");
									HX_STACK_LINE(1081)
									{
										HX_STACK_LINE(1081)
										::__hxcpp_memory_set_byte(data->buffer->b,(data->byteOffset + ((offset + (int)2))),val);
										HX_STACK_LINE(1081)
										val;
									}
								}
								HX_STACK_LINE(1081)
								{
									HX_STACK_LINE(1081)
									int tmp13 = (int(pixel) & int((int)255));		HX_STACK_VAR(tmp13,"tmp13");
									HX_STACK_LINE(1081)
									int val = tmp13;		HX_STACK_VAR(val,"val");
									HX_STACK_LINE(1081)
									{
										HX_STACK_LINE(1081)
										::__hxcpp_memory_set_byte(data->buffer->b,(data->byteOffset + ((offset + (int)3))),val);
										HX_STACK_LINE(1081)
										val;
									}
								}
							}
							;break;
							case (int)0: {
								HX_STACK_LINE(1081)
								{
									HX_STACK_LINE(1081)
									int tmp13 = (int(pixel) >> int((int)24));		HX_STACK_VAR(tmp13,"tmp13");
									HX_STACK_LINE(1081)
									int tmp14 = (int(tmp13) & int((int)255));		HX_STACK_VAR(tmp14,"tmp14");
									HX_STACK_LINE(1081)
									int val = tmp14;		HX_STACK_VAR(val,"val");
									HX_STACK_LINE(1081)
									{
										HX_STACK_LINE(1081)
										::__hxcpp_memory_set_byte(data->buffer->b,(data->byteOffset + offset),val);
										HX_STACK_LINE(1081)
										val;
									}
								}
								HX_STACK_LINE(1081)
								{
									HX_STACK_LINE(1081)
									int tmp13 = (int(pixel) >> int((int)16));		HX_STACK_VAR(tmp13,"tmp13");
									HX_STACK_LINE(1081)
									int tmp14 = (int(tmp13) & int((int)255));		HX_STACK_VAR(tmp14,"tmp14");
									HX_STACK_LINE(1081)
									int val = tmp14;		HX_STACK_VAR(val,"val");
									HX_STACK_LINE(1081)
									{
										HX_STACK_LINE(1081)
										::__hxcpp_memory_set_byte(data->buffer->b,(data->byteOffset + ((offset + (int)1))),val);
										HX_STACK_LINE(1081)
										val;
									}
								}
								HX_STACK_LINE(1081)
								{
									HX_STACK_LINE(1081)
									int tmp13 = (int(pixel) >> int((int)8));		HX_STACK_VAR(tmp13,"tmp13");
									HX_STACK_LINE(1081)
									int tmp14 = (int(tmp13) & int((int)255));		HX_STACK_VAR(tmp14,"tmp14");
									HX_STACK_LINE(1081)
									int val = tmp14;		HX_STACK_VAR(val,"val");
									HX_STACK_LINE(1081)
									{
										HX_STACK_LINE(1081)
										::__hxcpp_memory_set_byte(data->buffer->b,(data->byteOffset + ((offset + (int)2))),val);
										HX_STACK_LINE(1081)
										val;
									}
								}
								HX_STACK_LINE(1081)
								{
									HX_STACK_LINE(1081)
									int tmp13 = (int(pixel) & int((int)255));		HX_STACK_VAR(tmp13,"tmp13");
									HX_STACK_LINE(1081)
									int val = tmp13;		HX_STACK_VAR(val,"val");
									HX_STACK_LINE(1081)
									{
										HX_STACK_LINE(1081)
										::__hxcpp_memory_set_byte(data->buffer->b,(data->byteOffset + ((offset + (int)3))),val);
										HX_STACK_LINE(1081)
										val;
									}
								}
							}
							;break;
							case (int)1: {
								HX_STACK_LINE(1081)
								{
									HX_STACK_LINE(1081)
									int tmp13 = (int(pixel) & int((int)255));		HX_STACK_VAR(tmp13,"tmp13");
									HX_STACK_LINE(1081)
									int val = tmp13;		HX_STACK_VAR(val,"val");
									HX_STACK_LINE(1081)
									{
										HX_STACK_LINE(1081)
										::__hxcpp_memory_set_byte(data->buffer->b,(data->byteOffset + offset),val);
										HX_STACK_LINE(1081)
										val;
									}
								}
								HX_STACK_LINE(1081)
								{
									HX_STACK_LINE(1081)
									int tmp13 = (int(pixel) >> int((int)24));		HX_STACK_VAR(tmp13,"tmp13");
									HX_STACK_LINE(1081)
									int tmp14 = (int(tmp13) & int((int)255));		HX_STACK_VAR(tmp14,"tmp14");
									HX_STACK_LINE(1081)
									int val = tmp14;		HX_STACK_VAR(val,"val");
									HX_STACK_LINE(1081)
									{
										HX_STACK_LINE(1081)
										::__hxcpp_memory_set_byte(data->buffer->b,(data->byteOffset + ((offset + (int)1))),val);
										HX_STACK_LINE(1081)
										val;
									}
								}
								HX_STACK_LINE(1081)
								{
									HX_STACK_LINE(1081)
									int tmp13 = (int(pixel) >> int((int)16));		HX_STACK_VAR(tmp13,"tmp13");
									HX_STACK_LINE(1081)
									int tmp14 = (int(tmp13) & int((int)255));		HX_STACK_VAR(tmp14,"tmp14");
									HX_STACK_LINE(1081)
									int val = tmp14;		HX_STACK_VAR(val,"val");
									HX_STACK_LINE(1081)
									{
										HX_STACK_LINE(1081)
										::__hxcpp_memory_set_byte(data->buffer->b,(data->byteOffset + ((offset + (int)2))),val);
										HX_STACK_LINE(1081)
										val;
									}
								}
								HX_STACK_LINE(1081)
								{
									HX_STACK_LINE(1081)
									int tmp13 = (int(pixel) >> int((int)8));		HX_STACK_VAR(tmp13,"tmp13");
									HX_STACK_LINE(1081)
									int tmp14 = (int(tmp13) & int((int)255));		HX_STACK_VAR(tmp14,"tmp14");
									HX_STACK_LINE(1081)
									int val = tmp14;		HX_STACK_VAR(val,"val");
									HX_STACK_LINE(1081)
									{
										HX_STACK_LINE(1081)
										::__hxcpp_memory_set_byte(data->buffer->b,(data->byteOffset + ((offset + (int)3))),val);
										HX_STACK_LINE(1081)
										val;
									}
								}
							}
							;break;
						}
					}
				}
			}
		}
		HX_STACK_LINE(1087)
		image->buffer->premultiplied = false;
		HX_STACK_LINE(1088)
		image->dirty = true;
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(ImageDataUtil_obj,unmultiplyAlpha,(void))

Dynamic ImageDataUtil_obj::lime_image_data_util_color_transform;

Dynamic ImageDataUtil_obj::lime_image_data_util_copy_channel;

Dynamic ImageDataUtil_obj::lime_image_data_util_copy_pixels;

Dynamic ImageDataUtil_obj::lime_image_data_util_fill_rect;

Dynamic ImageDataUtil_obj::lime_image_data_util_flood_fill;

Dynamic ImageDataUtil_obj::lime_image_data_util_get_pixels;

Dynamic ImageDataUtil_obj::lime_image_data_util_merge;

Dynamic ImageDataUtil_obj::lime_image_data_util_multiply_alpha;

Dynamic ImageDataUtil_obj::lime_image_data_util_resize;

Dynamic ImageDataUtil_obj::lime_image_data_util_set_format;

Dynamic ImageDataUtil_obj::lime_image_data_util_set_pixels;

Dynamic ImageDataUtil_obj::lime_image_data_util_unmultiply_alpha;


ImageDataUtil_obj::ImageDataUtil_obj()
{
}

bool ImageDataUtil_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"merge") ) { outValue = merge_dyn(); return true;  }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"resize") ) { outValue = resize_dyn(); return true;  }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"fillRect") ) { outValue = fillRect_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"getPixel") ) { outValue = getPixel_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"setPixel") ) { outValue = setPixel_dyn(); return true;  }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"floodFill") ) { outValue = floodFill_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"getPixels") ) { outValue = getPixels_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"setFormat") ) { outValue = setFormat_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"setPixels") ) { outValue = setPixels_dyn(); return true;  }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"copyPixels") ) { outValue = copyPixels_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"getPixel32") ) { outValue = getPixel32_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"setPixel32") ) { outValue = setPixel32_dyn(); return true;  }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"copyChannel") ) { outValue = copyChannel_dyn(); return true;  }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"resizeBuffer") ) { outValue = resizeBuffer_dyn(); return true;  }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"multiplyAlpha") ) { outValue = multiplyAlpha_dyn(); return true;  }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"colorTransform") ) { outValue = colorTransform_dyn(); return true;  }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"unmultiplyAlpha") ) { outValue = unmultiplyAlpha_dyn(); return true;  }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"getColorBoundsRect") ) { outValue = getColorBoundsRect_dyn(); return true;  }
		break;
	case 26:
		if (HX_FIELD_EQ(inName,"lime_image_data_util_merge") ) { outValue = lime_image_data_util_merge; return true;  }
		break;
	case 27:
		if (HX_FIELD_EQ(inName,"lime_image_data_util_resize") ) { outValue = lime_image_data_util_resize; return true;  }
		break;
	case 30:
		if (HX_FIELD_EQ(inName,"lime_image_data_util_fill_rect") ) { outValue = lime_image_data_util_fill_rect; return true;  }
		break;
	case 31:
		if (HX_FIELD_EQ(inName,"lime_image_data_util_flood_fill") ) { outValue = lime_image_data_util_flood_fill; return true;  }
		if (HX_FIELD_EQ(inName,"lime_image_data_util_get_pixels") ) { outValue = lime_image_data_util_get_pixels; return true;  }
		if (HX_FIELD_EQ(inName,"lime_image_data_util_set_format") ) { outValue = lime_image_data_util_set_format; return true;  }
		if (HX_FIELD_EQ(inName,"lime_image_data_util_set_pixels") ) { outValue = lime_image_data_util_set_pixels; return true;  }
		break;
	case 32:
		if (HX_FIELD_EQ(inName,"lime_image_data_util_copy_pixels") ) { outValue = lime_image_data_util_copy_pixels; return true;  }
		break;
	case 33:
		if (HX_FIELD_EQ(inName,"lime_image_data_util_copy_channel") ) { outValue = lime_image_data_util_copy_channel; return true;  }
		break;
	case 35:
		if (HX_FIELD_EQ(inName,"lime_image_data_util_multiply_alpha") ) { outValue = lime_image_data_util_multiply_alpha; return true;  }
		break;
	case 36:
		if (HX_FIELD_EQ(inName,"lime_image_data_util_color_transform") ) { outValue = lime_image_data_util_color_transform; return true;  }
		break;
	case 37:
		if (HX_FIELD_EQ(inName,"lime_image_data_util_unmultiply_alpha") ) { outValue = lime_image_data_util_unmultiply_alpha; return true;  }
	}
	return false;
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
static hx::StaticInfo sStaticStorageInfo[] = {
	{hx::fsObject /*Dynamic*/ ,(void *) &ImageDataUtil_obj::lime_image_data_util_color_transform,HX_HCSTRING("lime_image_data_util_color_transform","\xba","\xcc","\x96","\x40")},
	{hx::fsObject /*Dynamic*/ ,(void *) &ImageDataUtil_obj::lime_image_data_util_copy_channel,HX_HCSTRING("lime_image_data_util_copy_channel","\x4f","\x54","\x36","\xa5")},
	{hx::fsObject /*Dynamic*/ ,(void *) &ImageDataUtil_obj::lime_image_data_util_copy_pixels,HX_HCSTRING("lime_image_data_util_copy_pixels","\x21","\x51","\x7b","\xab")},
	{hx::fsObject /*Dynamic*/ ,(void *) &ImageDataUtil_obj::lime_image_data_util_fill_rect,HX_HCSTRING("lime_image_data_util_fill_rect","\x8a","\x8c","\xa4","\x8e")},
	{hx::fsObject /*Dynamic*/ ,(void *) &ImageDataUtil_obj::lime_image_data_util_flood_fill,HX_HCSTRING("lime_image_data_util_flood_fill","\xba","\xe7","\x5b","\xf2")},
	{hx::fsObject /*Dynamic*/ ,(void *) &ImageDataUtil_obj::lime_image_data_util_get_pixels,HX_HCSTRING("lime_image_data_util_get_pixels","\xcc","\x3e","\xde","\x0c")},
	{hx::fsObject /*Dynamic*/ ,(void *) &ImageDataUtil_obj::lime_image_data_util_merge,HX_HCSTRING("lime_image_data_util_merge","\xa2","\xd2","\xb1","\xf7")},
	{hx::fsObject /*Dynamic*/ ,(void *) &ImageDataUtil_obj::lime_image_data_util_multiply_alpha,HX_HCSTRING("lime_image_data_util_multiply_alpha","\x99","\x86","\xad","\x5d")},
	{hx::fsObject /*Dynamic*/ ,(void *) &ImageDataUtil_obj::lime_image_data_util_resize,HX_HCSTRING("lime_image_data_util_resize","\xca","\x16","\x5a","\xc4")},
	{hx::fsObject /*Dynamic*/ ,(void *) &ImageDataUtil_obj::lime_image_data_util_set_format,HX_HCSTRING("lime_image_data_util_set_format","\x4a","\x7d","\x40","\x81")},
	{hx::fsObject /*Dynamic*/ ,(void *) &ImageDataUtil_obj::lime_image_data_util_set_pixels,HX_HCSTRING("lime_image_data_util_set_pixels","\x40","\xdd","\x5b","\x10")},
	{hx::fsObject /*Dynamic*/ ,(void *) &ImageDataUtil_obj::lime_image_data_util_unmultiply_alpha,HX_HCSTRING("lime_image_data_util_unmultiply_alpha","\x32","\xd8","\x15","\x90")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ImageDataUtil_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(ImageDataUtil_obj::lime_image_data_util_color_transform,"lime_image_data_util_color_transform");
	HX_MARK_MEMBER_NAME(ImageDataUtil_obj::lime_image_data_util_copy_channel,"lime_image_data_util_copy_channel");
	HX_MARK_MEMBER_NAME(ImageDataUtil_obj::lime_image_data_util_copy_pixels,"lime_image_data_util_copy_pixels");
	HX_MARK_MEMBER_NAME(ImageDataUtil_obj::lime_image_data_util_fill_rect,"lime_image_data_util_fill_rect");
	HX_MARK_MEMBER_NAME(ImageDataUtil_obj::lime_image_data_util_flood_fill,"lime_image_data_util_flood_fill");
	HX_MARK_MEMBER_NAME(ImageDataUtil_obj::lime_image_data_util_get_pixels,"lime_image_data_util_get_pixels");
	HX_MARK_MEMBER_NAME(ImageDataUtil_obj::lime_image_data_util_merge,"lime_image_data_util_merge");
	HX_MARK_MEMBER_NAME(ImageDataUtil_obj::lime_image_data_util_multiply_alpha,"lime_image_data_util_multiply_alpha");
	HX_MARK_MEMBER_NAME(ImageDataUtil_obj::lime_image_data_util_resize,"lime_image_data_util_resize");
	HX_MARK_MEMBER_NAME(ImageDataUtil_obj::lime_image_data_util_set_format,"lime_image_data_util_set_format");
	HX_MARK_MEMBER_NAME(ImageDataUtil_obj::lime_image_data_util_set_pixels,"lime_image_data_util_set_pixels");
	HX_MARK_MEMBER_NAME(ImageDataUtil_obj::lime_image_data_util_unmultiply_alpha,"lime_image_data_util_unmultiply_alpha");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ImageDataUtil_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(ImageDataUtil_obj::lime_image_data_util_color_transform,"lime_image_data_util_color_transform");
	HX_VISIT_MEMBER_NAME(ImageDataUtil_obj::lime_image_data_util_copy_channel,"lime_image_data_util_copy_channel");
	HX_VISIT_MEMBER_NAME(ImageDataUtil_obj::lime_image_data_util_copy_pixels,"lime_image_data_util_copy_pixels");
	HX_VISIT_MEMBER_NAME(ImageDataUtil_obj::lime_image_data_util_fill_rect,"lime_image_data_util_fill_rect");
	HX_VISIT_MEMBER_NAME(ImageDataUtil_obj::lime_image_data_util_flood_fill,"lime_image_data_util_flood_fill");
	HX_VISIT_MEMBER_NAME(ImageDataUtil_obj::lime_image_data_util_get_pixels,"lime_image_data_util_get_pixels");
	HX_VISIT_MEMBER_NAME(ImageDataUtil_obj::lime_image_data_util_merge,"lime_image_data_util_merge");
	HX_VISIT_MEMBER_NAME(ImageDataUtil_obj::lime_image_data_util_multiply_alpha,"lime_image_data_util_multiply_alpha");
	HX_VISIT_MEMBER_NAME(ImageDataUtil_obj::lime_image_data_util_resize,"lime_image_data_util_resize");
	HX_VISIT_MEMBER_NAME(ImageDataUtil_obj::lime_image_data_util_set_format,"lime_image_data_util_set_format");
	HX_VISIT_MEMBER_NAME(ImageDataUtil_obj::lime_image_data_util_set_pixels,"lime_image_data_util_set_pixels");
	HX_VISIT_MEMBER_NAME(ImageDataUtil_obj::lime_image_data_util_unmultiply_alpha,"lime_image_data_util_unmultiply_alpha");
};

#endif

hx::Class ImageDataUtil_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("colorTransform","\x89","\xd7","\x3f","\xad"),
	HX_HCSTRING("copyChannel","\x8e","\x7d","\xe6","\x22"),
	HX_HCSTRING("copyPixels","\xc2","\x54","\x6e","\x42"),
	HX_HCSTRING("fillRect","\x47","\x45","\xb9","\x6c"),
	HX_HCSTRING("floodFill","\x61","\x83","\x8a","\x59"),
	HX_HCSTRING("getColorBoundsRect","\x86","\xad","\xe8","\x80"),
	HX_HCSTRING("getPixel","\x10","\xd6","\x7a","\x22"),
	HX_HCSTRING("getPixel32","\xaf","\xa6","\x68","\xd7"),
	HX_HCSTRING("getPixels","\x63","\x78","\x00","\x09"),
	HX_HCSTRING("merge","\xb8","\xa2","\xc6","\x05"),
	HX_HCSTRING("multiplyAlpha","\x9a","\xf2","\x1c","\x6b"),
	HX_HCSTRING("resize","\xf4","\x59","\x7b","\x08"),
	HX_HCSTRING("resizeBuffer","\x14","\x7a","\xa2","\xb4"),
	HX_HCSTRING("setFormat","\x79","\x04","\x36","\x5d"),
	HX_HCSTRING("setPixel","\x84","\x2f","\xd8","\xd0"),
	HX_HCSTRING("setPixel32","\x23","\x45","\xe6","\xda"),
	HX_HCSTRING("setPixels","\x6f","\x64","\x51","\xec"),
	HX_HCSTRING("unmultiplyAlpha","\xa1","\xc8","\x96","\x28"),
	HX_HCSTRING("lime_image_data_util_color_transform","\xba","\xcc","\x96","\x40"),
	HX_HCSTRING("lime_image_data_util_copy_channel","\x4f","\x54","\x36","\xa5"),
	HX_HCSTRING("lime_image_data_util_copy_pixels","\x21","\x51","\x7b","\xab"),
	HX_HCSTRING("lime_image_data_util_fill_rect","\x8a","\x8c","\xa4","\x8e"),
	HX_HCSTRING("lime_image_data_util_flood_fill","\xba","\xe7","\x5b","\xf2"),
	HX_HCSTRING("lime_image_data_util_get_pixels","\xcc","\x3e","\xde","\x0c"),
	HX_HCSTRING("lime_image_data_util_merge","\xa2","\xd2","\xb1","\xf7"),
	HX_HCSTRING("lime_image_data_util_multiply_alpha","\x99","\x86","\xad","\x5d"),
	HX_HCSTRING("lime_image_data_util_resize","\xca","\x16","\x5a","\xc4"),
	HX_HCSTRING("lime_image_data_util_set_format","\x4a","\x7d","\x40","\x81"),
	HX_HCSTRING("lime_image_data_util_set_pixels","\x40","\xdd","\x5b","\x10"),
	HX_HCSTRING("lime_image_data_util_unmultiply_alpha","\x32","\xd8","\x15","\x90"),
	::String(null()) };

void ImageDataUtil_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("lime.graphics.utils.ImageDataUtil","\x80","\x72","\x23","\xf0");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &ImageDataUtil_obj::__GetStatic;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< ImageDataUtil_obj >;
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

void ImageDataUtil_obj::__boot()
{
	lime_image_data_util_color_transform= ::lime::_system::System_obj::load(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_image_data_util_color_transform","\xba","\xcc","\x96","\x40"),(int)3,null());
	lime_image_data_util_copy_channel= ::lime::_system::System_obj::load(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_image_data_util_copy_channel","\x4f","\x54","\x36","\xa5"),(int)-1,null());
	lime_image_data_util_copy_pixels= ::lime::_system::System_obj::load(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_image_data_util_copy_pixels","\x21","\x51","\x7b","\xab"),(int)-1,null());
	lime_image_data_util_fill_rect= ::lime::_system::System_obj::load(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_image_data_util_fill_rect","\x8a","\x8c","\xa4","\x8e"),(int)4,null());
	lime_image_data_util_flood_fill= ::lime::_system::System_obj::load(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_image_data_util_flood_fill","\xba","\xe7","\x5b","\xf2"),(int)5,null());
	lime_image_data_util_get_pixels= ::lime::_system::System_obj::load(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_image_data_util_get_pixels","\xcc","\x3e","\xde","\x0c"),(int)4,null());
	lime_image_data_util_merge= ::lime::_system::System_obj::load(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_image_data_util_merge","\xa2","\xd2","\xb1","\xf7"),(int)-1,null());
	lime_image_data_util_multiply_alpha= ::lime::_system::System_obj::load(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_image_data_util_multiply_alpha","\x99","\x86","\xad","\x5d"),(int)1,null());
	lime_image_data_util_resize= ::lime::_system::System_obj::load(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_image_data_util_resize","\xca","\x16","\x5a","\xc4"),(int)4,null());
	lime_image_data_util_set_format= ::lime::_system::System_obj::load(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_image_data_util_set_format","\x4a","\x7d","\x40","\x81"),(int)2,null());
	lime_image_data_util_set_pixels= ::lime::_system::System_obj::load(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_image_data_util_set_pixels","\x40","\xdd","\x5b","\x10"),(int)4,null());
	lime_image_data_util_unmultiply_alpha= ::lime::_system::System_obj::load(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_image_data_util_unmultiply_alpha","\x32","\xd8","\x15","\x90"),(int)1,null());
}

} // end namespace lime
} // end namespace graphics
} // end namespace utils
