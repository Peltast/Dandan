#include <hxcpp.h>

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
#ifndef INCLUDED_lime_graphics_utils_ImageCanvasUtil
#include <lime/graphics/utils/ImageCanvasUtil.h>
#endif
#ifndef INCLUDED_lime_graphics_utils_ImageDataUtil
#include <lime/graphics/utils/ImageDataUtil.h>
#endif
#ifndef INCLUDED_lime_math_Rectangle
#include <lime/math/Rectangle.h>
#endif
#ifndef INCLUDED_lime_math_Vector2
#include <lime/math/Vector2.h>
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
namespace utils{

Void ImageCanvasUtil_obj::__construct()
{
	return null();
}

//ImageCanvasUtil_obj::~ImageCanvasUtil_obj() { }

Dynamic ImageCanvasUtil_obj::__CreateEmpty() { return  new ImageCanvasUtil_obj; }
hx::ObjectPtr< ImageCanvasUtil_obj > ImageCanvasUtil_obj::__new()
{  hx::ObjectPtr< ImageCanvasUtil_obj > _result_ = new ImageCanvasUtil_obj();
	_result_->__construct();
	return _result_;}

Dynamic ImageCanvasUtil_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< ImageCanvasUtil_obj > _result_ = new ImageCanvasUtil_obj();
	_result_->__construct();
	return _result_;}

Void ImageCanvasUtil_obj::colorTransform( ::lime::graphics::Image image,::lime::math::Rectangle rect,::lime::utils::ArrayBufferView colorMatrix){
{
		HX_STACK_FRAME("lime.graphics.utils.ImageCanvasUtil","colorTransform",0x478efac9,"lime.graphics.utils.ImageCanvasUtil.colorTransform","lime/graphics/utils/ImageCanvasUtil.hx",24,0x78efca71)
		HX_STACK_ARG(image,"image")
		HX_STACK_ARG(rect,"rect")
		HX_STACK_ARG(colorMatrix,"colorMatrix")
		HX_STACK_LINE(26)
		::lime::graphics::Image tmp = image;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(26)
		::lime::graphics::utils::ImageCanvasUtil_obj::convertToCanvas(tmp);
		HX_STACK_LINE(27)
		::lime::graphics::Image tmp1 = image;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(27)
		::lime::graphics::utils::ImageCanvasUtil_obj::createImageData(tmp1);
		HX_STACK_LINE(29)
		::lime::graphics::Image tmp2 = image;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(29)
		::lime::math::Rectangle tmp3 = rect;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(29)
		::lime::utils::ArrayBufferView tmp4 = colorMatrix;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(29)
		::lime::graphics::utils::ImageDataUtil_obj::colorTransform(tmp2,tmp3,tmp4);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(ImageCanvasUtil_obj,colorTransform,(void))

Void ImageCanvasUtil_obj::convertToCanvas( ::lime::graphics::Image image){
{
		HX_STACK_FRAME("lime.graphics.utils.ImageCanvasUtil","convertToCanvas",0x7fd81686,"lime.graphics.utils.ImageCanvasUtil.convertToCanvas","lime/graphics/utils/ImageCanvasUtil.hx",34,0x78efca71)
		HX_STACK_ARG(image,"image")
		HX_STACK_LINE(36)
		::lime::graphics::ImageBuffer buffer = image->buffer;		HX_STACK_VAR(buffer,"buffer");
		HX_STACK_LINE(38)
		bool tmp = (buffer->__srcImage != null());		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(38)
		if ((tmp)){
			HX_STACK_LINE(40)
			bool tmp1 = (buffer->__srcCanvas == null());		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(40)
			if ((tmp1)){
				HX_STACK_LINE(42)
				::lime::graphics::Image tmp2 = image;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(42)
				::lime::graphics::utils::ImageCanvasUtil_obj::createCanvas(tmp2,buffer->__srcImage->__Field(HX_HCSTRING("width","\x06","\xb6","\x62","\xca"), hx::paccDynamic ),buffer->__srcImage->__Field(HX_HCSTRING("height","\xe7","\x07","\x4c","\x02"), hx::paccDynamic ));
				HX_STACK_LINE(43)
				buffer->__srcContext->__Field(HX_HCSTRING("drawImage","\xb7","\x54","\x74","\x85"), hx::paccDynamic )(buffer->__srcImage,(int)0,(int)0);
			}
			HX_STACK_LINE(47)
			buffer->__srcImage = null();
		}
		else{
			HX_STACK_LINE(49)
			bool tmp1 = (buffer->data != null());		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(49)
			bool tmp2;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(49)
			if ((tmp1)){
				HX_STACK_LINE(49)
				tmp2 = (buffer->__srcCanvas == null());
			}
			else{
				HX_STACK_LINE(49)
				tmp2 = false;
			}
			HX_STACK_LINE(49)
			if ((tmp2)){
				HX_STACK_LINE(51)
				::lime::graphics::Image tmp3 = image;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(51)
				int tmp4 = buffer->width;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(51)
				int tmp5 = buffer->height;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(51)
				::lime::graphics::utils::ImageCanvasUtil_obj::createCanvas(tmp3,tmp4,tmp5);
				HX_STACK_LINE(52)
				::lime::graphics::Image tmp6 = image;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(52)
				::lime::graphics::utils::ImageCanvasUtil_obj::createImageData(tmp6);
			}
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(ImageCanvasUtil_obj,convertToCanvas,(void))

Void ImageCanvasUtil_obj::convertToData( ::lime::graphics::Image image){
{
		HX_STACK_FRAME("lime.graphics.utils.ImageCanvasUtil","convertToData",0x2b8bb058,"lime.graphics.utils.ImageCanvasUtil.convertToData","lime/graphics/utils/ImageCanvasUtil.hx",59,0x78efca71)
		HX_STACK_ARG(image,"image")
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(ImageCanvasUtil_obj,convertToData,(void))

Void ImageCanvasUtil_obj::copyChannel( ::lime::graphics::Image image,::lime::graphics::Image sourceImage,::lime::math::Rectangle sourceRect,::lime::math::Vector2 destPoint,::lime::graphics::ImageChannel sourceChannel,::lime::graphics::ImageChannel destChannel){
{
		HX_STACK_FRAME("lime.graphics.utils.ImageCanvasUtil","copyChannel",0xbd2cd24e,"lime.graphics.utils.ImageCanvasUtil.copyChannel","lime/graphics/utils/ImageCanvasUtil.hx",77,0x78efca71)
		HX_STACK_ARG(image,"image")
		HX_STACK_ARG(sourceImage,"sourceImage")
		HX_STACK_ARG(sourceRect,"sourceRect")
		HX_STACK_ARG(destPoint,"destPoint")
		HX_STACK_ARG(sourceChannel,"sourceChannel")
		HX_STACK_ARG(destChannel,"destChannel")
		HX_STACK_LINE(79)
		::lime::graphics::Image tmp = sourceImage;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(79)
		::lime::graphics::utils::ImageCanvasUtil_obj::convertToCanvas(tmp);
		HX_STACK_LINE(80)
		::lime::graphics::Image tmp1 = sourceImage;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(80)
		::lime::graphics::utils::ImageCanvasUtil_obj::createImageData(tmp1);
		HX_STACK_LINE(81)
		::lime::graphics::Image tmp2 = image;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(81)
		::lime::graphics::utils::ImageCanvasUtil_obj::convertToCanvas(tmp2);
		HX_STACK_LINE(82)
		::lime::graphics::Image tmp3 = image;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(82)
		::lime::graphics::utils::ImageCanvasUtil_obj::createImageData(tmp3);
		HX_STACK_LINE(84)
		::lime::graphics::Image tmp4 = image;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(84)
		::lime::graphics::Image tmp5 = sourceImage;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(84)
		::lime::math::Rectangle tmp6 = sourceRect;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(84)
		::lime::math::Vector2 tmp7 = destPoint;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(84)
		::lime::graphics::ImageChannel tmp8 = sourceChannel;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(84)
		::lime::graphics::ImageChannel tmp9 = destChannel;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(84)
		::lime::graphics::utils::ImageDataUtil_obj::copyChannel(tmp4,tmp5,tmp6,tmp7,tmp8,tmp9);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC6(ImageCanvasUtil_obj,copyChannel,(void))

Void ImageCanvasUtil_obj::copyPixels( ::lime::graphics::Image image,::lime::graphics::Image sourceImage,::lime::math::Rectangle sourceRect,::lime::math::Vector2 destPoint,::lime::graphics::Image alphaImage,::lime::math::Vector2 alphaPoint,hx::Null< bool >  __o_mergeAlpha){
bool mergeAlpha = __o_mergeAlpha.Default(false);
	HX_STACK_FRAME("lime.graphics.utils.ImageCanvasUtil","copyPixels",0xbf1ad802,"lime.graphics.utils.ImageCanvasUtil.copyPixels","lime/graphics/utils/ImageCanvasUtil.hx",89,0x78efca71)
	HX_STACK_ARG(image,"image")
	HX_STACK_ARG(sourceImage,"sourceImage")
	HX_STACK_ARG(sourceRect,"sourceRect")
	HX_STACK_ARG(destPoint,"destPoint")
	HX_STACK_ARG(alphaImage,"alphaImage")
	HX_STACK_ARG(alphaPoint,"alphaPoint")
	HX_STACK_ARG(mergeAlpha,"mergeAlpha")
{
		HX_STACK_LINE(91)
		bool tmp = (destPoint->x >= image->width);		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(91)
		bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(91)
		bool tmp2;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(91)
		if ((tmp1)){
			HX_STACK_LINE(91)
			tmp2 = (destPoint->y >= image->height);
		}
		else{
			HX_STACK_LINE(91)
			tmp2 = true;
		}
		HX_STACK_LINE(91)
		if ((tmp2)){
			HX_STACK_LINE(93)
			return null();
		}
		HX_STACK_LINE(97)
		bool tmp3 = (alphaImage != null());		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(97)
		bool tmp4;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(97)
		if ((tmp3)){
			HX_STACK_LINE(97)
			tmp4 = alphaImage->get_transparent();
		}
		else{
			HX_STACK_LINE(97)
			tmp4 = false;
		}
		HX_STACK_LINE(97)
		if ((tmp4)){
			HX_STACK_LINE(99)
			bool tmp5 = (alphaPoint == null());		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(99)
			if ((tmp5)){
				HX_STACK_LINE(99)
				::lime::math::Vector2 tmp6 = ::lime::math::Vector2_obj::__new(null(),null());		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(99)
				alphaPoint = tmp6;
			}
			HX_STACK_LINE(103)
			::lime::graphics::Image tmp6 = image->clone();		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(103)
			::lime::graphics::Image tempData = tmp6;		HX_STACK_VAR(tempData,"tempData");
			HX_STACK_LINE(104)
			::lime::graphics::Image tmp7 = alphaImage;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(104)
			::lime::math::Rectangle tmp8 = ::lime::math::Rectangle_obj::__new(alphaPoint->x,alphaPoint->y,sourceRect->width,sourceRect->height);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(104)
			::lime::math::Vector2 tmp9 = ::lime::math::Vector2_obj::__new(sourceRect->x,sourceRect->y);		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(104)
			tempData->copyChannel(tmp7,tmp8,tmp9,::lime::graphics::ImageChannel_obj::ALPHA,::lime::graphics::ImageChannel_obj::ALPHA);
			HX_STACK_LINE(105)
			sourceImage = tempData;
		}
		HX_STACK_LINE(109)
		::lime::graphics::Image tmp5 = image;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(109)
		::lime::graphics::utils::ImageCanvasUtil_obj::sync(tmp5);
		HX_STACK_LINE(111)
		bool tmp6 = mergeAlpha;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(111)
		bool tmp7 = !(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(111)
		if ((tmp7)){
			HX_STACK_LINE(113)
			bool tmp8 = image->get_transparent();		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(113)
			bool tmp9;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(113)
			if ((tmp8)){
				HX_STACK_LINE(113)
				tmp9 = sourceImage->get_transparent();
			}
			else{
				HX_STACK_LINE(113)
				tmp9 = false;
			}
			HX_STACK_LINE(113)
			if ((tmp9)){
				HX_STACK_LINE(115)
				Dynamic tmp10 = image->buffer->__srcContext;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(115)
				tmp10->__Field(HX_HCSTRING("clearRect","\x51","\x35","\x68","\xbf"), hx::paccDynamic )((destPoint->x + image->offsetX),(destPoint->y + image->offsetY),(sourceRect->width + image->offsetX),(sourceRect->height + image->offsetY));
			}
		}
		HX_STACK_LINE(121)
		::lime::graphics::Image tmp8 = sourceImage;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(121)
		::lime::graphics::utils::ImageCanvasUtil_obj::sync(tmp8);
		HX_STACK_LINE(123)
		Dynamic tmp9 = sourceImage->buffer->get_src();		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(123)
		bool tmp10 = (tmp9 != null());		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(123)
		if ((tmp10)){
			HX_STACK_LINE(125)
			Dynamic tmp11 = image->buffer->__srcContext;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(125)
			Float tmp12 = (sourceRect->x + sourceImage->offsetX);		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(125)
			Float tmp13 = (sourceRect->y + sourceImage->offsetY);		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(125)
			Float tmp14 = sourceRect->width;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(125)
			Float tmp15 = sourceRect->height;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(125)
			Float tmp16 = (destPoint->x + image->offsetX);		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(125)
			Float tmp17 = (destPoint->y + image->offsetY);		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(125)
			Float tmp18 = sourceRect->width;		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(125)
			Float tmp19 = sourceRect->height;		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(125)
			tmp11->__Field(HX_HCSTRING("drawImage","\xb7","\x54","\x74","\x85"), hx::paccDynamic )(sourceImage->buffer->get_src(),::Std_obj::_int(tmp12),::Std_obj::_int(tmp13),::Std_obj::_int(tmp14),::Std_obj::_int(tmp15),::Std_obj::_int(tmp16),::Std_obj::_int(tmp17),::Std_obj::_int(tmp18),::Std_obj::_int(tmp19));
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC7(ImageCanvasUtil_obj,copyPixels,(void))

Void ImageCanvasUtil_obj::createCanvas( ::lime::graphics::Image image,int width,int height){
{
		HX_STACK_FRAME("lime.graphics.utils.ImageCanvasUtil","createCanvas",0x3ddb6834,"lime.graphics.utils.ImageCanvasUtil.createCanvas","lime/graphics/utils/ImageCanvasUtil.hx",132,0x78efca71)
		HX_STACK_ARG(image,"image")
		HX_STACK_ARG(width,"width")
		HX_STACK_ARG(height,"height")
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(ImageCanvasUtil_obj,createCanvas,(void))

Void ImageCanvasUtil_obj::createImageData( ::lime::graphics::Image image){
{
		HX_STACK_FRAME("lime.graphics.utils.ImageCanvasUtil","createImageData",0x307c5949,"lime.graphics.utils.ImageCanvasUtil.createImageData","lime/graphics/utils/ImageCanvasUtil.hx",164,0x78efca71)
		HX_STACK_ARG(image,"image")
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(ImageCanvasUtil_obj,createImageData,(void))

Void ImageCanvasUtil_obj::fillRect( ::lime::graphics::Image image,::lime::math::Rectangle rect,int color,int format){
{
		HX_STACK_FRAME("lime.graphics.utils.ImageCanvasUtil","fillRect",0x8e427887,"lime.graphics.utils.ImageCanvasUtil.fillRect","lime/graphics/utils/ImageCanvasUtil.hx",192,0x78efca71)
		HX_STACK_ARG(image,"image")
		HX_STACK_ARG(rect,"rect")
		HX_STACK_ARG(color,"color")
		HX_STACK_ARG(format,"format")
		HX_STACK_LINE(194)
		::lime::graphics::Image tmp = image;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(194)
		::lime::graphics::utils::ImageCanvasUtil_obj::convertToCanvas(tmp);
		HX_STACK_LINE(195)
		::lime::graphics::Image tmp1 = image;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(195)
		::lime::graphics::utils::ImageCanvasUtil_obj::sync(tmp1);
		HX_STACK_LINE(197)
		bool tmp2 = (rect->x == (int)0);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(197)
		bool tmp3 = tmp2;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(197)
		bool tmp4;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(197)
		if ((tmp3)){
			HX_STACK_LINE(197)
			tmp4 = (rect->y == (int)0);
		}
		else{
			HX_STACK_LINE(197)
			tmp4 = false;
		}
		HX_STACK_LINE(197)
		bool tmp5 = tmp4;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(197)
		bool tmp6;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(197)
		if ((tmp5)){
			HX_STACK_LINE(197)
			tmp6 = (rect->width == image->width);
		}
		else{
			HX_STACK_LINE(197)
			tmp6 = false;
		}
		HX_STACK_LINE(197)
		bool tmp7;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(197)
		if ((tmp6)){
			HX_STACK_LINE(197)
			tmp7 = (rect->height == image->height);
		}
		else{
			HX_STACK_LINE(197)
			tmp7 = false;
		}
		HX_STACK_LINE(197)
		if ((tmp7)){
			HX_STACK_LINE(199)
			bool tmp8 = image->get_transparent();		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(199)
			bool tmp9;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(199)
			if ((tmp8)){
				HX_STACK_LINE(199)
				int tmp10 = (int(color) & int((int)255));		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(199)
				int tmp11 = tmp10;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(199)
				tmp9 = (tmp11 == (int)0);
			}
			else{
				HX_STACK_LINE(199)
				tmp9 = false;
			}
			HX_STACK_LINE(199)
			if ((tmp9)){
				HX_STACK_LINE(201)
				int tmp10 = image->buffer->width;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(201)
				Dynamic tmp11 = image->buffer->__srcCanvas;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(201)
				tmp11->__FieldRef(HX_HCSTRING("width","\x06","\xb6","\x62","\xca")) = tmp10;
				HX_STACK_LINE(202)
				return null();
			}
		}
		HX_STACK_LINE(208)
		int r;		HX_STACK_VAR(r,"r");
		HX_STACK_LINE(208)
		int g;		HX_STACK_VAR(g,"g");
		HX_STACK_LINE(208)
		int b;		HX_STACK_VAR(b,"b");
		HX_STACK_LINE(208)
		int a;		HX_STACK_VAR(a,"a");
		HX_STACK_LINE(210)
		bool tmp8 = (format == (int)1);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(210)
		if ((tmp8)){
			HX_STACK_LINE(212)
			int tmp9 = (int(color) >> int((int)16));		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(212)
			int tmp10 = (int(tmp9) & int((int)255));		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(212)
			r = tmp10;
			HX_STACK_LINE(213)
			int tmp11 = (int(color) >> int((int)8));		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(213)
			int tmp12 = (int(tmp11) & int((int)255));		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(213)
			g = tmp12;
			HX_STACK_LINE(214)
			int tmp13 = (int(color) & int((int)255));		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(214)
			b = tmp13;
			HX_STACK_LINE(215)
			bool tmp14 = image->get_transparent();		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(215)
			int tmp15;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(215)
			if ((tmp14)){
				HX_STACK_LINE(215)
				int tmp16 = (int(color) >> int((int)24));		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(215)
				tmp15 = (int(tmp16) & int((int)255));
			}
			else{
				HX_STACK_LINE(215)
				tmp15 = (int)255;
			}
			HX_STACK_LINE(215)
			a = tmp15;
		}
		else{
			HX_STACK_LINE(219)
			int tmp9 = (int(color) >> int((int)24));		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(219)
			int tmp10 = (int(tmp9) & int((int)255));		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(219)
			r = tmp10;
			HX_STACK_LINE(220)
			int tmp11 = (int(color) >> int((int)16));		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(220)
			int tmp12 = (int(tmp11) & int((int)255));		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(220)
			g = tmp12;
			HX_STACK_LINE(221)
			int tmp13 = (int(color) >> int((int)8));		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(221)
			int tmp14 = (int(tmp13) & int((int)255));		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(221)
			b = tmp14;
			HX_STACK_LINE(222)
			bool tmp15 = image->get_transparent();		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(222)
			int tmp16;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(222)
			if ((tmp15)){
				HX_STACK_LINE(222)
				tmp16 = (int(color) & int((int)255));
			}
			else{
				HX_STACK_LINE(222)
				tmp16 = (int)255;
			}
			HX_STACK_LINE(222)
			a = tmp16;
		}
		HX_STACK_LINE(226)
		::String tmp9 = (HX_HCSTRING("rgba(","\xf4","\xcc","\x0d","\xe8") + r);		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(226)
		::String tmp10 = (tmp9 + HX_HCSTRING(", ","\x74","\x26","\x00","\x00"));		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(226)
		int tmp11 = g;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(226)
		::String tmp12 = (tmp10 + tmp11);		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(226)
		::String tmp13 = (tmp12 + HX_HCSTRING(", ","\x74","\x26","\x00","\x00"));		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(226)
		int tmp14 = b;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(226)
		::String tmp15 = (tmp13 + tmp14);		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(226)
		::String tmp16 = (tmp15 + HX_HCSTRING(", ","\x74","\x26","\x00","\x00"));		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(226)
		Float tmp17 = (Float(a) / Float((int)255));		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(226)
		::String tmp18 = (tmp16 + tmp17);		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(226)
		::String tmp19 = (tmp18 + HX_HCSTRING(")","\x29","\x00","\x00","\x00"));		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(226)
		Dynamic tmp20 = image->buffer->__srcContext;		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(226)
		tmp20->__FieldRef(HX_HCSTRING("fillStyle","\xae","\xcb","\xc4","\x52")) = tmp19;
		HX_STACK_LINE(227)
		Dynamic tmp21 = image->buffer->__srcContext;		HX_STACK_VAR(tmp21,"tmp21");
		HX_STACK_LINE(227)
		tmp21->__Field(HX_HCSTRING("fillRect","\x47","\x45","\xb9","\x6c"), hx::paccDynamic )((rect->x + image->offsetX),(rect->y + image->offsetY),(rect->width + image->offsetX),(rect->height + image->offsetY));
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(ImageCanvasUtil_obj,fillRect,(void))

Void ImageCanvasUtil_obj::floodFill( ::lime::graphics::Image image,int x,int y,int color,int format){
{
		HX_STACK_FRAME("lime.graphics.utils.ImageCanvasUtil","floodFill",0x900e2821,"lime.graphics.utils.ImageCanvasUtil.floodFill","lime/graphics/utils/ImageCanvasUtil.hx",232,0x78efca71)
		HX_STACK_ARG(image,"image")
		HX_STACK_ARG(x,"x")
		HX_STACK_ARG(y,"y")
		HX_STACK_ARG(color,"color")
		HX_STACK_ARG(format,"format")
		HX_STACK_LINE(234)
		::lime::graphics::Image tmp = image;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(234)
		::lime::graphics::utils::ImageCanvasUtil_obj::convertToCanvas(tmp);
		HX_STACK_LINE(235)
		::lime::graphics::Image tmp1 = image;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(235)
		::lime::graphics::utils::ImageCanvasUtil_obj::createImageData(tmp1);
		HX_STACK_LINE(237)
		::lime::graphics::Image tmp2 = image;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(237)
		int tmp3 = x;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(237)
		int tmp4 = y;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(237)
		int tmp5 = color;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(237)
		int tmp6 = format;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(237)
		::lime::graphics::utils::ImageDataUtil_obj::floodFill(tmp2,tmp3,tmp4,tmp5,tmp6);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC5(ImageCanvasUtil_obj,floodFill,(void))

int ImageCanvasUtil_obj::getPixel( ::lime::graphics::Image image,int x,int y,int format){
	HX_STACK_FRAME("lime.graphics.utils.ImageCanvasUtil","getPixel",0x44040950,"lime.graphics.utils.ImageCanvasUtil.getPixel","lime/graphics/utils/ImageCanvasUtil.hx",242,0x78efca71)
	HX_STACK_ARG(image,"image")
	HX_STACK_ARG(x,"x")
	HX_STACK_ARG(y,"y")
	HX_STACK_ARG(format,"format")
	HX_STACK_LINE(244)
	::lime::graphics::Image tmp = image;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(244)
	::lime::graphics::utils::ImageCanvasUtil_obj::convertToCanvas(tmp);
	HX_STACK_LINE(245)
	::lime::graphics::Image tmp1 = image;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(245)
	::lime::graphics::utils::ImageCanvasUtil_obj::createImageData(tmp1);
	HX_STACK_LINE(247)
	::lime::graphics::Image tmp2 = image;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(247)
	int tmp3 = x;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(247)
	int tmp4 = y;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(247)
	int tmp5 = format;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(247)
	int tmp6 = ::lime::graphics::utils::ImageDataUtil_obj::getPixel(tmp2,tmp3,tmp4,tmp5);		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(247)
	return tmp6;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(ImageCanvasUtil_obj,getPixel,return )

int ImageCanvasUtil_obj::getPixel32( ::lime::graphics::Image image,int x,int y,int format){
	HX_STACK_FRAME("lime.graphics.utils.ImageCanvasUtil","getPixel32",0x541529ef,"lime.graphics.utils.ImageCanvasUtil.getPixel32","lime/graphics/utils/ImageCanvasUtil.hx",252,0x78efca71)
	HX_STACK_ARG(image,"image")
	HX_STACK_ARG(x,"x")
	HX_STACK_ARG(y,"y")
	HX_STACK_ARG(format,"format")
	HX_STACK_LINE(254)
	::lime::graphics::Image tmp = image;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(254)
	::lime::graphics::utils::ImageCanvasUtil_obj::convertToCanvas(tmp);
	HX_STACK_LINE(255)
	::lime::graphics::Image tmp1 = image;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(255)
	::lime::graphics::utils::ImageCanvasUtil_obj::createImageData(tmp1);
	HX_STACK_LINE(257)
	::lime::graphics::Image tmp2 = image;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(257)
	int tmp3 = x;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(257)
	int tmp4 = y;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(257)
	int tmp5 = format;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(257)
	int tmp6 = ::lime::graphics::utils::ImageDataUtil_obj::getPixel32(tmp2,tmp3,tmp4,tmp5);		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(257)
	return tmp6;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(ImageCanvasUtil_obj,getPixel32,return )

::lime::utils::ByteArray ImageCanvasUtil_obj::getPixels( ::lime::graphics::Image image,::lime::math::Rectangle rect,int format){
	HX_STACK_FRAME("lime.graphics.utils.ImageCanvasUtil","getPixels",0x3f841d23,"lime.graphics.utils.ImageCanvasUtil.getPixels","lime/graphics/utils/ImageCanvasUtil.hx",262,0x78efca71)
	HX_STACK_ARG(image,"image")
	HX_STACK_ARG(rect,"rect")
	HX_STACK_ARG(format,"format")
	HX_STACK_LINE(264)
	::lime::graphics::Image tmp = image;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(264)
	::lime::graphics::utils::ImageCanvasUtil_obj::convertToCanvas(tmp);
	HX_STACK_LINE(265)
	::lime::graphics::Image tmp1 = image;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(265)
	::lime::graphics::utils::ImageCanvasUtil_obj::createImageData(tmp1);
	HX_STACK_LINE(267)
	::lime::graphics::Image tmp2 = image;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(267)
	::lime::math::Rectangle tmp3 = rect;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(267)
	int tmp4 = format;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(267)
	::lime::utils::ByteArray tmp5 = ::lime::graphics::utils::ImageDataUtil_obj::getPixels(tmp2,tmp3,tmp4);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(267)
	return tmp5;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(ImageCanvasUtil_obj,getPixels,return )

Void ImageCanvasUtil_obj::merge( ::lime::graphics::Image image,::lime::graphics::Image sourceImage,::lime::math::Rectangle sourceRect,::lime::math::Vector2 destPoint,int redMultiplier,int greenMultiplier,int blueMultiplier,int alphaMultiplier){
{
		HX_STACK_FRAME("lime.graphics.utils.ImageCanvasUtil","merge",0x36e8e778,"lime.graphics.utils.ImageCanvasUtil.merge","lime/graphics/utils/ImageCanvasUtil.hx",272,0x78efca71)
		HX_STACK_ARG(image,"image")
		HX_STACK_ARG(sourceImage,"sourceImage")
		HX_STACK_ARG(sourceRect,"sourceRect")
		HX_STACK_ARG(destPoint,"destPoint")
		HX_STACK_ARG(redMultiplier,"redMultiplier")
		HX_STACK_ARG(greenMultiplier,"greenMultiplier")
		HX_STACK_ARG(blueMultiplier,"blueMultiplier")
		HX_STACK_ARG(alphaMultiplier,"alphaMultiplier")
		HX_STACK_LINE(274)
		::lime::graphics::Image tmp = sourceImage;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(274)
		::lime::graphics::utils::ImageCanvasUtil_obj::convertToCanvas(tmp);
		HX_STACK_LINE(275)
		::lime::graphics::Image tmp1 = sourceImage;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(275)
		::lime::graphics::utils::ImageCanvasUtil_obj::createImageData(tmp1);
		HX_STACK_LINE(276)
		::lime::graphics::Image tmp2 = image;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(276)
		::lime::graphics::utils::ImageCanvasUtil_obj::convertToCanvas(tmp2);
		HX_STACK_LINE(277)
		::lime::graphics::Image tmp3 = image;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(277)
		::lime::graphics::utils::ImageCanvasUtil_obj::createImageData(tmp3);
		HX_STACK_LINE(279)
		::lime::graphics::Image tmp4 = image;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(279)
		::lime::graphics::Image tmp5 = sourceImage;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(279)
		::lime::math::Rectangle tmp6 = sourceRect;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(279)
		::lime::math::Vector2 tmp7 = destPoint;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(279)
		int tmp8 = redMultiplier;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(279)
		int tmp9 = greenMultiplier;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(279)
		int tmp10 = blueMultiplier;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(279)
		int tmp11 = alphaMultiplier;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(279)
		::lime::graphics::utils::ImageDataUtil_obj::merge(tmp4,tmp5,tmp6,tmp7,tmp8,tmp9,tmp10,tmp11);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC8(ImageCanvasUtil_obj,merge,(void))

Void ImageCanvasUtil_obj::resize( ::lime::graphics::Image image,int newWidth,int newHeight){
{
		HX_STACK_FRAME("lime.graphics.utils.ImageCanvasUtil","resize",0xd5553d34,"lime.graphics.utils.ImageCanvasUtil.resize","lime/graphics/utils/ImageCanvasUtil.hx",284,0x78efca71)
		HX_STACK_ARG(image,"image")
		HX_STACK_ARG(newWidth,"newWidth")
		HX_STACK_ARG(newHeight,"newHeight")
		HX_STACK_LINE(286)
		::lime::graphics::ImageBuffer buffer = image->buffer;		HX_STACK_VAR(buffer,"buffer");
		HX_STACK_LINE(288)
		bool tmp = (buffer->__srcCanvas == null());		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(288)
		if ((tmp)){
			HX_STACK_LINE(290)
			::lime::graphics::Image tmp1 = image;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(290)
			int tmp2 = newWidth;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(290)
			int tmp3 = newHeight;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(290)
			::lime::graphics::utils::ImageCanvasUtil_obj::createCanvas(tmp1,tmp2,tmp3);
			HX_STACK_LINE(291)
			buffer->__srcContext->__Field(HX_HCSTRING("drawImage","\xb7","\x54","\x74","\x85"), hx::paccDynamic )(buffer->get_src(),(int)0,(int)0,newWidth,newHeight);
		}
		else{
			HX_STACK_LINE(295)
			::lime::graphics::Image tmp1 = image;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(295)
			::lime::graphics::utils::ImageCanvasUtil_obj::sync(tmp1);
			HX_STACK_LINE(296)
			Dynamic sourceCanvas = buffer->__srcCanvas;		HX_STACK_VAR(sourceCanvas,"sourceCanvas");
			HX_STACK_LINE(297)
			buffer->__srcCanvas = null();
			HX_STACK_LINE(298)
			::lime::graphics::Image tmp2 = image;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(298)
			int tmp3 = newWidth;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(298)
			int tmp4 = newHeight;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(298)
			::lime::graphics::utils::ImageCanvasUtil_obj::createCanvas(tmp2,tmp3,tmp4);
			HX_STACK_LINE(299)
			buffer->__srcContext->__Field(HX_HCSTRING("drawImage","\xb7","\x54","\x74","\x85"), hx::paccDynamic )(sourceCanvas,(int)0,(int)0,newWidth,newHeight);
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(ImageCanvasUtil_obj,resize,(void))

Void ImageCanvasUtil_obj::scroll( ::lime::graphics::Image image,int x,int y){
{
		HX_STACK_FRAME("lime.graphics.utils.ImageCanvasUtil","scroll",0x143ebb4d,"lime.graphics.utils.ImageCanvasUtil.scroll","lime/graphics/utils/ImageCanvasUtil.hx",306,0x78efca71)
		HX_STACK_ARG(image,"image")
		HX_STACK_ARG(x,"x")
		HX_STACK_ARG(y,"y")
		HX_STACK_LINE(308)
		int tmp = hx::Mod(x,image->width);		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(308)
		bool tmp1 = (tmp == (int)0);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(308)
		bool tmp2;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(308)
		if ((tmp1)){
			HX_STACK_LINE(308)
			int tmp3 = hx::Mod(y,image->height);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(308)
			int tmp4 = tmp3;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(308)
			tmp2 = (tmp4 == (int)0);
		}
		else{
			HX_STACK_LINE(308)
			tmp2 = false;
		}
		HX_STACK_LINE(308)
		if ((tmp2)){
			HX_STACK_LINE(308)
			return null();
		}
		HX_STACK_LINE(310)
		::lime::graphics::Image tmp3 = image;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(310)
		::lime::graphics::utils::ImageCanvasUtil_obj::convertToCanvas(tmp3);
		HX_STACK_LINE(311)
		::lime::graphics::Image tmp4 = image;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(311)
		::lime::graphics::utils::ImageCanvasUtil_obj::sync(tmp4);
		HX_STACK_LINE(313)
		Dynamic tmp5 = image->buffer->__srcContext;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(313)
		tmp5->__Field(HX_HCSTRING("clearRect","\x51","\x35","\x68","\xbf"), hx::paccDynamic )(x,y,image->width,image->height);
		HX_STACK_LINE(314)
		Dynamic tmp6 = image->buffer->__srcContext;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(314)
		tmp6->__Field(HX_HCSTRING("drawImage","\xb7","\x54","\x74","\x85"), hx::paccDynamic )(image->buffer->__srcCanvas,x,y);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(ImageCanvasUtil_obj,scroll,(void))

Void ImageCanvasUtil_obj::setPixel( ::lime::graphics::Image image,int x,int y,int color,int format){
{
		HX_STACK_FRAME("lime.graphics.utils.ImageCanvasUtil","setPixel",0xf26162c4,"lime.graphics.utils.ImageCanvasUtil.setPixel","lime/graphics/utils/ImageCanvasUtil.hx",319,0x78efca71)
		HX_STACK_ARG(image,"image")
		HX_STACK_ARG(x,"x")
		HX_STACK_ARG(y,"y")
		HX_STACK_ARG(color,"color")
		HX_STACK_ARG(format,"format")
		HX_STACK_LINE(321)
		::lime::graphics::Image tmp = image;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(321)
		::lime::graphics::utils::ImageCanvasUtil_obj::convertToCanvas(tmp);
		HX_STACK_LINE(322)
		::lime::graphics::Image tmp1 = image;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(322)
		::lime::graphics::utils::ImageCanvasUtil_obj::createImageData(tmp1);
		HX_STACK_LINE(324)
		::lime::graphics::Image tmp2 = image;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(324)
		int tmp3 = x;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(324)
		int tmp4 = y;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(324)
		int tmp5 = color;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(324)
		int tmp6 = format;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(324)
		::lime::graphics::utils::ImageDataUtil_obj::setPixel(tmp2,tmp3,tmp4,tmp5,tmp6);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC5(ImageCanvasUtil_obj,setPixel,(void))

Void ImageCanvasUtil_obj::setPixel32( ::lime::graphics::Image image,int x,int y,int color,int format){
{
		HX_STACK_FRAME("lime.graphics.utils.ImageCanvasUtil","setPixel32",0x5792c863,"lime.graphics.utils.ImageCanvasUtil.setPixel32","lime/graphics/utils/ImageCanvasUtil.hx",329,0x78efca71)
		HX_STACK_ARG(image,"image")
		HX_STACK_ARG(x,"x")
		HX_STACK_ARG(y,"y")
		HX_STACK_ARG(color,"color")
		HX_STACK_ARG(format,"format")
		HX_STACK_LINE(331)
		::lime::graphics::Image tmp = image;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(331)
		::lime::graphics::utils::ImageCanvasUtil_obj::convertToCanvas(tmp);
		HX_STACK_LINE(332)
		::lime::graphics::Image tmp1 = image;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(332)
		::lime::graphics::utils::ImageCanvasUtil_obj::createImageData(tmp1);
		HX_STACK_LINE(334)
		::lime::graphics::Image tmp2 = image;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(334)
		int tmp3 = x;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(334)
		int tmp4 = y;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(334)
		int tmp5 = color;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(334)
		int tmp6 = format;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(334)
		::lime::graphics::utils::ImageDataUtil_obj::setPixel32(tmp2,tmp3,tmp4,tmp5,tmp6);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC5(ImageCanvasUtil_obj,setPixel32,(void))

Void ImageCanvasUtil_obj::setPixels( ::lime::graphics::Image image,::lime::math::Rectangle rect,::lime::utils::ByteArray byteArray,int format){
{
		HX_STACK_FRAME("lime.graphics.utils.ImageCanvasUtil","setPixels",0x22d5092f,"lime.graphics.utils.ImageCanvasUtil.setPixels","lime/graphics/utils/ImageCanvasUtil.hx",339,0x78efca71)
		HX_STACK_ARG(image,"image")
		HX_STACK_ARG(rect,"rect")
		HX_STACK_ARG(byteArray,"byteArray")
		HX_STACK_ARG(format,"format")
		HX_STACK_LINE(341)
		::lime::graphics::Image tmp = image;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(341)
		::lime::graphics::utils::ImageCanvasUtil_obj::convertToCanvas(tmp);
		HX_STACK_LINE(342)
		::lime::graphics::Image tmp1 = image;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(342)
		::lime::graphics::utils::ImageCanvasUtil_obj::createImageData(tmp1);
		HX_STACK_LINE(344)
		::lime::graphics::Image tmp2 = image;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(344)
		::lime::math::Rectangle tmp3 = rect;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(344)
		::lime::utils::ByteArray tmp4 = byteArray;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(344)
		int tmp5 = format;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(344)
		::lime::graphics::utils::ImageDataUtil_obj::setPixels(tmp2,tmp3,tmp4,tmp5);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(ImageCanvasUtil_obj,setPixels,(void))

Void ImageCanvasUtil_obj::sync( ::lime::graphics::Image image){
{
		HX_STACK_FRAME("lime.graphics.utils.ImageCanvasUtil","sync",0x85fe4d9b,"lime.graphics.utils.ImageCanvasUtil.sync","lime/graphics/utils/ImageCanvasUtil.hx",349,0x78efca71)
		HX_STACK_ARG(image,"image")
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(ImageCanvasUtil_obj,sync,(void))


ImageCanvasUtil_obj::ImageCanvasUtil_obj()
{
}

bool ImageCanvasUtil_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"sync") ) { outValue = sync_dyn(); return true;  }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"merge") ) { outValue = merge_dyn(); return true;  }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"resize") ) { outValue = resize_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"scroll") ) { outValue = scroll_dyn(); return true;  }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"fillRect") ) { outValue = fillRect_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"getPixel") ) { outValue = getPixel_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"setPixel") ) { outValue = setPixel_dyn(); return true;  }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"floodFill") ) { outValue = floodFill_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"getPixels") ) { outValue = getPixels_dyn(); return true;  }
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
		if (HX_FIELD_EQ(inName,"createCanvas") ) { outValue = createCanvas_dyn(); return true;  }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"convertToData") ) { outValue = convertToData_dyn(); return true;  }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"colorTransform") ) { outValue = colorTransform_dyn(); return true;  }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"convertToCanvas") ) { outValue = convertToCanvas_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"createImageData") ) { outValue = createImageData_dyn(); return true;  }
	}
	return false;
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ImageCanvasUtil_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ImageCanvasUtil_obj::__mClass,"__mClass");
};

#endif

hx::Class ImageCanvasUtil_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("colorTransform","\x89","\xd7","\x3f","\xad"),
	HX_HCSTRING("convertToCanvas","\xc6","\x61","\xe8","\x14"),
	HX_HCSTRING("convertToData","\x98","\xab","\x76","\xb3"),
	HX_HCSTRING("copyChannel","\x8e","\x7d","\xe6","\x22"),
	HX_HCSTRING("copyPixels","\xc2","\x54","\x6e","\x42"),
	HX_HCSTRING("createCanvas","\xf4","\x94","\x97","\xda"),
	HX_HCSTRING("createImageData","\x89","\xa4","\x8c","\xc5"),
	HX_HCSTRING("fillRect","\x47","\x45","\xb9","\x6c"),
	HX_HCSTRING("floodFill","\x61","\x83","\x8a","\x59"),
	HX_HCSTRING("getPixel","\x10","\xd6","\x7a","\x22"),
	HX_HCSTRING("getPixel32","\xaf","\xa6","\x68","\xd7"),
	HX_HCSTRING("getPixels","\x63","\x78","\x00","\x09"),
	HX_HCSTRING("merge","\xb8","\xa2","\xc6","\x05"),
	HX_HCSTRING("resize","\xf4","\x59","\x7b","\x08"),
	HX_HCSTRING("scroll","\x0d","\xd8","\x64","\x47"),
	HX_HCSTRING("setPixel","\x84","\x2f","\xd8","\xd0"),
	HX_HCSTRING("setPixel32","\x23","\x45","\xe6","\xda"),
	HX_HCSTRING("setPixels","\x6f","\x64","\x51","\xec"),
	HX_HCSTRING("sync","\x5b","\xba","\x5f","\x4c"),
	::String(null()) };

void ImageCanvasUtil_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("lime.graphics.utils.ImageCanvasUtil","\x2e","\x95","\x3e","\x53");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &ImageCanvasUtil_obj::__GetStatic;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< ImageCanvasUtil_obj >;
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

} // end namespace lime
} // end namespace graphics
} // end namespace utils
