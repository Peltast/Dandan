#include <hxcpp.h>

#include "hxMath.h"
#ifndef INCLUDED_lime_graphics_CanvasRenderContext
#include <lime/graphics/CanvasRenderContext.h>
#endif
#ifndef INCLUDED_lime_graphics_cairo_Cairo
#include <lime/graphics/cairo/Cairo.h>
#endif
#ifndef INCLUDED_lime_graphics_cairo__CairoPattern_CairoPattern_Impl_
#include <lime/graphics/cairo/_CairoPattern/CairoPattern_Impl_.h>
#endif
#ifndef INCLUDED_lime_math_Matrix3
#include <lime/math/Matrix3.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_AbstractMaskManager
#include <openfl/_internal/renderer/AbstractMaskManager.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_RenderSession
#include <openfl/_internal/renderer/RenderSession.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_opengl_utils_SpriteBatch
#include <openfl/_internal/renderer/opengl/utils/SpriteBatch.h>
#endif
#ifndef INCLUDED_openfl_display_Bitmap
#include <openfl/display/Bitmap.h>
#endif
#ifndef INCLUDED_openfl_display_BitmapData
#include <openfl/display/BitmapData.h>
#endif
#ifndef INCLUDED_openfl_display_BlendMode
#include <openfl/display/BlendMode.h>
#endif
#ifndef INCLUDED_openfl_display_DisplayObject
#include <openfl/display/DisplayObject.h>
#endif
#ifndef INCLUDED_openfl_display_DrawCommand
#include <openfl/display/DrawCommand.h>
#endif
#ifndef INCLUDED_openfl_display_Graphics
#include <openfl/display/Graphics.h>
#endif
#ifndef INCLUDED_openfl_display_IBitmapDrawable
#include <openfl/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_openfl_display_PixelSnapping
#include <openfl/display/PixelSnapping.h>
#endif
#ifndef INCLUDED_openfl_events_EventDispatcher
#include <openfl/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_events_IEventDispatcher
#include <openfl/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_geom_ColorTransform
#include <openfl/geom/ColorTransform.h>
#endif
#ifndef INCLUDED_openfl_geom_Matrix
#include <openfl/geom/Matrix.h>
#endif
#ifndef INCLUDED_openfl_geom_Rectangle
#include <openfl/geom/Rectangle.h>
#endif
namespace openfl{
namespace display{

Void Bitmap_obj::__construct(::openfl::display::BitmapData bitmapData,::openfl::display::PixelSnapping pixelSnapping,hx::Null< bool >  __o_smoothing)
{
HX_STACK_FRAME("openfl.display.Bitmap","new",0x8bc0314b,"openfl.display.Bitmap.new","openfl/display/Bitmap.hx",96,0x461b2743)
HX_STACK_THIS(this)
HX_STACK_ARG(bitmapData,"bitmapData")
HX_STACK_ARG(pixelSnapping,"pixelSnapping")
HX_STACK_ARG(__o_smoothing,"smoothing")
bool smoothing = __o_smoothing.Default(false);
{
	HX_STACK_LINE(98)
	super::__construct();
	HX_STACK_LINE(100)
	this->bitmapData = bitmapData;
	HX_STACK_LINE(101)
	this->pixelSnapping = pixelSnapping;
	HX_STACK_LINE(102)
	this->smoothing = smoothing;
	HX_STACK_LINE(104)
	bool tmp = (pixelSnapping == null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(104)
	if ((tmp)){
		HX_STACK_LINE(106)
		this->pixelSnapping = ::openfl::display::PixelSnapping_obj::AUTO;
	}
}
;
	return null();
}

//Bitmap_obj::~Bitmap_obj() { }

Dynamic Bitmap_obj::__CreateEmpty() { return  new Bitmap_obj; }
hx::ObjectPtr< Bitmap_obj > Bitmap_obj::__new(::openfl::display::BitmapData bitmapData,::openfl::display::PixelSnapping pixelSnapping,hx::Null< bool >  __o_smoothing)
{  hx::ObjectPtr< Bitmap_obj > _result_ = new Bitmap_obj();
	_result_->__construct(bitmapData,pixelSnapping,__o_smoothing);
	return _result_;}

Dynamic Bitmap_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Bitmap_obj > _result_ = new Bitmap_obj();
	_result_->__construct(inArgs[0],inArgs[1],inArgs[2]);
	return _result_;}

Void Bitmap_obj::__getBounds( ::openfl::geom::Rectangle rect,::openfl::geom::Matrix matrix){
{
		HX_STACK_FRAME("openfl.display.Bitmap","__getBounds",0x13081c76,"openfl.display.Bitmap.__getBounds","openfl/display/Bitmap.hx",113,0x461b2743)
		HX_STACK_THIS(this)
		HX_STACK_ARG(rect,"rect")
		HX_STACK_ARG(matrix,"matrix")
		HX_STACK_LINE(115)
		::openfl::display::BitmapData tmp = this->bitmapData;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(115)
		bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(115)
		if ((tmp1)){
			HX_STACK_LINE(117)
			::openfl::geom::Rectangle tmp2 = ::openfl::geom::Rectangle_obj::__temp;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(117)
			::openfl::geom::Rectangle bounds = tmp2;		HX_STACK_VAR(bounds,"bounds");
			HX_STACK_LINE(118)
			::openfl::display::BitmapData tmp3 = this->bitmapData;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(118)
			int tmp4 = tmp3->width;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(118)
			::openfl::display::BitmapData tmp5 = this->bitmapData;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(118)
			int tmp6 = tmp5->height;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(118)
			bounds->setTo((int)0,(int)0,tmp4,tmp6);
			HX_STACK_LINE(119)
			::openfl::geom::Rectangle tmp7 = bounds;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(119)
			::openfl::geom::Matrix tmp8 = matrix;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(119)
			bounds->__transform(tmp7,tmp8);
			HX_STACK_LINE(121)
			Float tmp9 = bounds->x;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(121)
			Float tmp10 = bounds->y;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(121)
			Float tmp11 = bounds->width;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(121)
			Float tmp12 = bounds->height;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(121)
			rect->__expand(tmp9,tmp10,tmp11,tmp12);
		}
	}
return null();
}


bool Bitmap_obj::__hitTest( Float x,Float y,bool shapeFlag,Array< ::Dynamic > stack,bool interactiveOnly){
	HX_STACK_FRAME("openfl.display.Bitmap","__hitTest",0x80f61450,"openfl.display.Bitmap.__hitTest","openfl/display/Bitmap.hx",128,0x461b2743)
	HX_STACK_THIS(this)
	HX_STACK_ARG(x,"x")
	HX_STACK_ARG(y,"y")
	HX_STACK_ARG(shapeFlag,"shapeFlag")
	HX_STACK_ARG(stack,"stack")
	HX_STACK_ARG(interactiveOnly,"interactiveOnly")
	HX_STACK_LINE(130)
	bool tmp = this->get_visible();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(130)
	bool tmp1 = tmp;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(130)
	bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(130)
	bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(130)
	bool tmp4 = tmp3;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(130)
	bool tmp5;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(130)
	if ((tmp4)){
		HX_STACK_LINE(130)
		tmp5 = this->__isMask;
	}
	else{
		HX_STACK_LINE(130)
		tmp5 = true;
	}
	HX_STACK_LINE(130)
	bool tmp6 = !(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(130)
	bool tmp7;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(130)
	if ((tmp6)){
		HX_STACK_LINE(130)
		::openfl::display::BitmapData tmp8 = this->bitmapData;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(130)
		::openfl::display::BitmapData tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(130)
		tmp7 = (tmp9 == null());
	}
	else{
		HX_STACK_LINE(130)
		tmp7 = true;
	}
	HX_STACK_LINE(130)
	if ((tmp7)){
		HX_STACK_LINE(130)
		return false;
	}
	HX_STACK_LINE(132)
	this->__getTransform();
	HX_STACK_LINE(134)
	Float tmp8;		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(134)
	{
		HX_STACK_LINE(134)
		::openfl::geom::Matrix tmp9 = this->__worldTransform;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(134)
		::openfl::geom::Matrix _this = tmp9;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(134)
		Float tmp10 = (_this->a * _this->d);		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(134)
		Float tmp11 = (_this->b * _this->c);		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(134)
		Float tmp12 = (tmp10 - tmp11);		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(134)
		Float norm = tmp12;		HX_STACK_VAR(norm,"norm");
		HX_STACK_LINE(134)
		bool tmp13 = (norm == (int)0);		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(134)
		if ((tmp13)){
			HX_STACK_LINE(134)
			Float tmp14 = _this->tx;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(134)
			tmp8 = -(tmp14);
		}
		else{
			HX_STACK_LINE(134)
			Float tmp14 = (Float(((Float)1.0)) / Float(norm));		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(134)
			Float tmp15 = _this->c;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(134)
			Float tmp16 = (_this->ty - y);		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(134)
			Float tmp17 = (tmp15 * tmp16);		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(134)
			Float tmp18 = _this->d;		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(134)
			Float tmp19 = (x - _this->tx);		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(134)
			Float tmp20 = (tmp18 * tmp19);		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(134)
			Float tmp21 = (tmp17 + tmp20);		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(134)
			tmp8 = (tmp14 * tmp21);
		}
	}
	HX_STACK_LINE(134)
	Float px = tmp8;		HX_STACK_VAR(px,"px");
	HX_STACK_LINE(135)
	Float tmp9;		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(135)
	{
		HX_STACK_LINE(135)
		::openfl::geom::Matrix tmp10 = this->__worldTransform;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(135)
		::openfl::geom::Matrix _this = tmp10;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(135)
		Float tmp11 = (_this->a * _this->d);		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(135)
		Float tmp12 = (_this->b * _this->c);		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(135)
		Float tmp13 = (tmp11 - tmp12);		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(135)
		Float norm = tmp13;		HX_STACK_VAR(norm,"norm");
		HX_STACK_LINE(135)
		bool tmp14 = (norm == (int)0);		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(135)
		if ((tmp14)){
			HX_STACK_LINE(135)
			Float tmp15 = _this->ty;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(135)
			tmp9 = -(tmp15);
		}
		else{
			HX_STACK_LINE(135)
			Float tmp15 = (Float(((Float)1.0)) / Float(norm));		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(135)
			Float tmp16 = _this->a;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(135)
			Float tmp17 = (y - _this->ty);		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(135)
			Float tmp18 = (tmp16 * tmp17);		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(135)
			Float tmp19 = _this->b;		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(135)
			Float tmp20 = (_this->tx - x);		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(135)
			Float tmp21 = (tmp19 * tmp20);		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(135)
			Float tmp22 = (tmp18 + tmp21);		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(135)
			tmp9 = (tmp15 * tmp22);
		}
	}
	HX_STACK_LINE(135)
	Float py = tmp9;		HX_STACK_VAR(py,"py");
	HX_STACK_LINE(137)
	bool tmp10 = (px > (int)0);		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(137)
	bool tmp11 = tmp10;		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(137)
	bool tmp12;		HX_STACK_VAR(tmp12,"tmp12");
	HX_STACK_LINE(137)
	if ((tmp11)){
		HX_STACK_LINE(137)
		tmp12 = (py > (int)0);
	}
	else{
		HX_STACK_LINE(137)
		tmp12 = false;
	}
	HX_STACK_LINE(137)
	bool tmp13 = tmp12;		HX_STACK_VAR(tmp13,"tmp13");
	HX_STACK_LINE(137)
	bool tmp14;		HX_STACK_VAR(tmp14,"tmp14");
	HX_STACK_LINE(137)
	if ((tmp13)){
		HX_STACK_LINE(137)
		Float tmp15 = px;		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(137)
		::openfl::display::BitmapData tmp16 = this->bitmapData;		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(137)
		::openfl::display::BitmapData tmp17 = tmp16;		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(137)
		::openfl::display::BitmapData tmp18 = tmp17;		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(137)
		int tmp19 = tmp18->width;		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(137)
		tmp14 = (tmp15 <= tmp19);
	}
	else{
		HX_STACK_LINE(137)
		tmp14 = false;
	}
	HX_STACK_LINE(137)
	bool tmp15;		HX_STACK_VAR(tmp15,"tmp15");
	HX_STACK_LINE(137)
	if ((tmp14)){
		HX_STACK_LINE(137)
		Float tmp16 = py;		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(137)
		::openfl::display::BitmapData tmp17 = this->bitmapData;		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(137)
		::openfl::display::BitmapData tmp18 = tmp17;		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(137)
		int tmp19 = tmp18->height;		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(137)
		tmp15 = (tmp16 <= tmp19);
	}
	else{
		HX_STACK_LINE(137)
		tmp15 = false;
	}
	HX_STACK_LINE(137)
	if ((tmp15)){
		HX_STACK_LINE(139)
		bool tmp16 = (stack != null());		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(139)
		bool tmp17;		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(139)
		if ((tmp16)){
			HX_STACK_LINE(139)
			bool tmp18 = interactiveOnly;		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(139)
			bool tmp19 = tmp18;		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(139)
			tmp17 = !(tmp19);
		}
		else{
			HX_STACK_LINE(139)
			tmp17 = false;
		}
		HX_STACK_LINE(139)
		if ((tmp17)){
			HX_STACK_LINE(141)
			stack->push(hx::ObjectPtr<OBJ_>(this));
		}
		HX_STACK_LINE(145)
		return true;
	}
	HX_STACK_LINE(149)
	return false;
}


Void Bitmap_obj::__renderCairo( ::openfl::_internal::renderer::RenderSession renderSession){
{
		HX_STACK_FRAME("openfl.display.Bitmap","__renderCairo",0x941372dd,"openfl.display.Bitmap.__renderCairo","openfl/display/Bitmap.hx",156,0x461b2743)
		HX_STACK_THIS(this)
		HX_STACK_ARG(renderSession,"renderSession")
		HX_STACK_LINE(156)
		bool tmp = this->__renderable;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(156)
		bool tmp1 = tmp;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(156)
		bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(156)
		bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(156)
		bool tmp4;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(156)
		if ((tmp3)){
			HX_STACK_LINE(156)
			Float tmp5 = this->__worldAlpha;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(156)
			Float tmp6 = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(156)
			tmp4 = (tmp6 <= (int)0);
		}
		else{
			HX_STACK_LINE(156)
			tmp4 = true;
		}
		HX_STACK_LINE(156)
		if ((tmp4)){
			HX_STACK_LINE(156)
			Dynamic();
		}
		else{
			HX_STACK_LINE(156)
			::lime::graphics::cairo::Cairo cairo = renderSession->cairo;		HX_STACK_VAR(cairo,"cairo");
			HX_STACK_LINE(156)
			::openfl::display::BitmapData tmp5 = this->bitmapData;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(156)
			bool tmp6 = (tmp5 != null());		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(156)
			bool tmp7;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(156)
			if ((tmp6)){
				HX_STACK_LINE(156)
				::openfl::display::BitmapData tmp8 = this->bitmapData;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(156)
				::openfl::display::BitmapData tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(156)
				tmp7 = tmp9->__isValid;
			}
			else{
				HX_STACK_LINE(156)
				tmp7 = false;
			}
			HX_STACK_LINE(156)
			if ((tmp7)){
				HX_STACK_LINE(156)
				::openfl::display::DisplayObject tmp8 = this->__mask;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(156)
				bool tmp9 = (tmp8 != null());		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(156)
				if ((tmp9)){
					HX_STACK_LINE(156)
					::openfl::display::DisplayObject tmp10 = this->__mask;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(156)
					renderSession->maskManager->pushMask(tmp10);
				}
				HX_STACK_LINE(156)
				::openfl::geom::Matrix tmp10 = this->__worldTransform;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(156)
				::openfl::geom::Matrix transform = tmp10;		HX_STACK_VAR(transform,"transform");
				HX_STACK_LINE(156)
				::openfl::geom::Rectangle tmp11 = this->get_scrollRect();		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(156)
				::openfl::geom::Rectangle scrollRect = tmp11;		HX_STACK_VAR(scrollRect,"scrollRect");
				HX_STACK_LINE(156)
				bool tmp12 = renderSession->roundPixels;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(156)
				if ((tmp12)){
					HX_STACK_LINE(156)
					::lime::math::Matrix3 tmp13 = transform->__toMatrix3();		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(156)
					::lime::math::Matrix3 matrix = tmp13;		HX_STACK_VAR(matrix,"matrix");
					HX_STACK_LINE(156)
					Float tmp14 = matrix->tx;		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(156)
					int tmp15 = ::Math_obj::round(tmp14);		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(156)
					matrix->tx = tmp15;
					HX_STACK_LINE(156)
					Float tmp16 = matrix->ty;		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(156)
					int tmp17 = ::Math_obj::round(tmp16);		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(156)
					matrix->ty = tmp17;
					HX_STACK_LINE(156)
					::lime::math::Matrix3 tmp18 = matrix;		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(156)
					cairo->set_matrix(tmp18);
				}
				else{
					HX_STACK_LINE(156)
					::lime::math::Matrix3 tmp13 = transform->__toMatrix3();		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(156)
					cairo->set_matrix(tmp13);
				}
				HX_STACK_LINE(156)
				::openfl::display::BitmapData tmp13 = this->bitmapData;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(156)
				Dynamic tmp14 = tmp13->getSurface();		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(156)
				Dynamic surface = tmp14;		HX_STACK_VAR(surface,"surface");
				HX_STACK_LINE(156)
				bool tmp15 = (surface != null());		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(156)
				if ((tmp15)){
					HX_STACK_LINE(156)
					Dynamic tmp16 = surface;		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(156)
					Dynamic tmp17 = ::lime::graphics::cairo::_CairoPattern::CairoPattern_Impl__obj::createForSurface(tmp16);		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(156)
					Dynamic pattern = tmp17;		HX_STACK_VAR(pattern,"pattern");
					HX_STACK_LINE(156)
					Dynamic tmp18 = pattern;		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(156)
					bool tmp19 = this->smoothing;		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(156)
					int tmp20;		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(156)
					if ((tmp19)){
						HX_STACK_LINE(156)
						tmp20 = (int)1;
					}
					else{
						HX_STACK_LINE(156)
						tmp20 = (int)3;
					}
					HX_STACK_LINE(156)
					::lime::graphics::cairo::_CairoPattern::CairoPattern_Impl__obj::set_filter(tmp18,tmp20);
					HX_STACK_LINE(156)
					bool tmp21 = (scrollRect != null());		HX_STACK_VAR(tmp21,"tmp21");
					HX_STACK_LINE(156)
					if ((tmp21)){
						HX_STACK_LINE(156)
						cairo->pushGroup();
						HX_STACK_LINE(156)
						Dynamic tmp22 = pattern;		HX_STACK_VAR(tmp22,"tmp22");
						HX_STACK_LINE(156)
						cairo->set_source(tmp22);
						HX_STACK_LINE(156)
						cairo->newPath();
						HX_STACK_LINE(156)
						Float tmp23 = scrollRect->x;		HX_STACK_VAR(tmp23,"tmp23");
						HX_STACK_LINE(156)
						Float tmp24 = scrollRect->y;		HX_STACK_VAR(tmp24,"tmp24");
						HX_STACK_LINE(156)
						Float tmp25 = scrollRect->width;		HX_STACK_VAR(tmp25,"tmp25");
						HX_STACK_LINE(156)
						Float tmp26 = scrollRect->height;		HX_STACK_VAR(tmp26,"tmp26");
						HX_STACK_LINE(156)
						cairo->rectangle(tmp23,tmp24,tmp25,tmp26);
						HX_STACK_LINE(156)
						cairo->fill();
						HX_STACK_LINE(156)
						cairo->popGroupToSource();
					}
					else{
						HX_STACK_LINE(156)
						Dynamic tmp22 = pattern;		HX_STACK_VAR(tmp22,"tmp22");
						HX_STACK_LINE(156)
						cairo->set_source(tmp22);
					}
					HX_STACK_LINE(156)
					Float tmp22 = this->__worldAlpha;		HX_STACK_VAR(tmp22,"tmp22");
					HX_STACK_LINE(156)
					bool tmp23 = (tmp22 == (int)1);		HX_STACK_VAR(tmp23,"tmp23");
					HX_STACK_LINE(156)
					if ((tmp23)){
						HX_STACK_LINE(156)
						cairo->paint();
					}
					else{
						HX_STACK_LINE(156)
						Float tmp24 = this->__worldAlpha;		HX_STACK_VAR(tmp24,"tmp24");
						HX_STACK_LINE(156)
						cairo->paintWithAlpha(tmp24);
					}
					HX_STACK_LINE(156)
					Dynamic tmp24 = pattern;		HX_STACK_VAR(tmp24,"tmp24");
					HX_STACK_LINE(156)
					::lime::graphics::cairo::_CairoPattern::CairoPattern_Impl__obj::destroy(tmp24);
				}
				HX_STACK_LINE(156)
				::openfl::display::DisplayObject tmp16 = this->__mask;		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(156)
				bool tmp17 = (tmp16 != null());		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(156)
				if ((tmp17)){
					HX_STACK_LINE(156)
					renderSession->maskManager->popMask();
				}
			}
		}
	}
return null();
}


Void Bitmap_obj::__renderCairoMask( ::openfl::_internal::renderer::RenderSession renderSession){
{
		HX_STACK_FRAME("openfl.display.Bitmap","__renderCairoMask",0xba721269,"openfl.display.Bitmap.__renderCairoMask","openfl/display/Bitmap.hx",161,0x461b2743)
		HX_STACK_THIS(this)
		HX_STACK_ARG(renderSession,"renderSession")
		HX_STACK_LINE(163)
		Float tmp = this->get_width();		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(163)
		Float tmp1 = this->get_height();		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(163)
		renderSession->cairo->rectangle((int)0,(int)0,tmp,tmp1);
	}
return null();
}


Void Bitmap_obj::__renderCanvas( ::openfl::_internal::renderer::RenderSession renderSession){
{
		HX_STACK_FRAME("openfl.display.Bitmap","__renderCanvas",0x00421ce3,"openfl.display.Bitmap.__renderCanvas","openfl/display/Bitmap.hx",170,0x461b2743)
		HX_STACK_THIS(this)
		HX_STACK_ARG(renderSession,"renderSession")
		HX_STACK_LINE(170)
		Dynamic();
	}
return null();
}


Void Bitmap_obj::__renderCanvasMask( ::openfl::_internal::renderer::RenderSession renderSession){
{
		HX_STACK_FRAME("openfl.display.Bitmap","__renderCanvasMask",0x68a5376f,"openfl.display.Bitmap.__renderCanvasMask","openfl/display/Bitmap.hx",175,0x461b2743)
		HX_STACK_THIS(this)
		HX_STACK_ARG(renderSession,"renderSession")
		HX_STACK_LINE(177)
		Float tmp = this->get_width();		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(177)
		Float tmp1 = this->get_height();		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(177)
		renderSession->context->rect((int)0,(int)0,tmp,tmp1);
	}
return null();
}


Void Bitmap_obj::__renderDOM( ::openfl::_internal::renderer::RenderSession renderSession){
{
		HX_STACK_FRAME("openfl.display.Bitmap","__renderDOM",0xfdebb997,"openfl.display.Bitmap.__renderDOM","openfl/display/Bitmap.hx",184,0x461b2743)
		HX_STACK_THIS(this)
		HX_STACK_ARG(renderSession,"renderSession")
		HX_STACK_LINE(184)
		Dynamic();
	}
return null();
}


Void Bitmap_obj::__renderGL( ::openfl::_internal::renderer::RenderSession renderSession){
{
		HX_STACK_FRAME("openfl.display.Bitmap","__renderGL",0xbc428090,"openfl.display.Bitmap.__renderGL","openfl/display/Bitmap.hx",191,0x461b2743)
		HX_STACK_THIS(this)
		HX_STACK_ARG(renderSession,"renderSession")
		HX_STACK_LINE(191)
		bool tmp = this->__renderable;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(191)
		bool tmp1 = tmp;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(191)
		bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(191)
		bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(191)
		bool tmp4 = tmp3;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(191)
		bool tmp5;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(191)
		if ((tmp4)){
			HX_STACK_LINE(191)
			Float tmp6 = this->__worldAlpha;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(191)
			Float tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(191)
			Float tmp8 = tmp7;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(191)
			tmp5 = (tmp8 <= (int)0);
		}
		else{
			HX_STACK_LINE(191)
			tmp5 = true;
		}
		HX_STACK_LINE(191)
		bool tmp6 = !(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(191)
		bool tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(191)
		bool tmp8;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(191)
		if ((tmp7)){
			HX_STACK_LINE(191)
			::openfl::display::BitmapData tmp9 = this->bitmapData;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(191)
			::openfl::display::BitmapData tmp10 = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(191)
			::openfl::display::BitmapData tmp11 = tmp10;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(191)
			tmp8 = (tmp11 == null());
		}
		else{
			HX_STACK_LINE(191)
			tmp8 = true;
		}
		HX_STACK_LINE(191)
		bool tmp9 = !(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(191)
		bool tmp10;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(191)
		if ((tmp9)){
			HX_STACK_LINE(191)
			::openfl::display::BitmapData tmp11 = this->bitmapData;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(191)
			::openfl::display::BitmapData tmp12 = tmp11;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(191)
			bool tmp13 = tmp12->__isValid;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(191)
			bool tmp14 = tmp13;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(191)
			tmp10 = !(tmp14);
		}
		else{
			HX_STACK_LINE(191)
			tmp10 = true;
		}
		HX_STACK_LINE(191)
		if ((tmp10)){
			HX_STACK_LINE(191)
			Dynamic();
		}
		else{
			HX_STACK_LINE(191)
			::openfl::display::BitmapData tmp11 = this->bitmapData;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(191)
			bool tmp12 = this->smoothing;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(191)
			::openfl::geom::Matrix tmp13 = this->__worldTransform;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(191)
			::openfl::geom::ColorTransform tmp14 = this->__worldColorTransform;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(191)
			Float tmp15 = this->__worldAlpha;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(191)
			::openfl::display::BlendMode tmp16 = this->__blendMode;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(191)
			::openfl::display::PixelSnapping tmp17 = this->pixelSnapping;		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(191)
			renderSession->spriteBatch->renderBitmapData(tmp11,tmp12,tmp13,tmp14,tmp15,tmp16,tmp17,null());
		}
	}
return null();
}


Void Bitmap_obj::__updateMask( ::openfl::display::Graphics maskGraphics){
{
		HX_STACK_FRAME("openfl.display.Bitmap","__updateMask",0x5202506a,"openfl.display.Bitmap.__updateMask","openfl/display/Bitmap.hx",196,0x461b2743)
		HX_STACK_THIS(this)
		HX_STACK_ARG(maskGraphics,"maskGraphics")
		HX_STACK_LINE(198)
		::openfl::geom::Matrix tmp = this->__worldTransform;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(198)
		::openfl::display::DrawCommand tmp1 = ::openfl::display::DrawCommand_obj::OverrideMatrix(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(198)
		maskGraphics->__commands->push(tmp1);
		HX_STACK_LINE(199)
		maskGraphics->beginFill((int)0,null());
		HX_STACK_LINE(200)
		::openfl::display::BitmapData tmp2 = this->bitmapData;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(200)
		int tmp3 = tmp2->width;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(200)
		::openfl::display::BitmapData tmp4 = this->bitmapData;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(200)
		int tmp5 = tmp4->height;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(200)
		maskGraphics->drawRect((int)0,(int)0,tmp3,tmp5);
		HX_STACK_LINE(202)
		bool tmp6 = (maskGraphics->__bounds == null());		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(202)
		if ((tmp6)){
			HX_STACK_LINE(204)
			::openfl::geom::Rectangle tmp7 = ::openfl::geom::Rectangle_obj::__new(null(),null(),null(),null());		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(204)
			maskGraphics->__bounds = tmp7;
		}
		HX_STACK_LINE(208)
		::openfl::geom::Rectangle tmp7 = maskGraphics->__bounds;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(208)
		::openfl::geom::Matrix tmp8 = ::openfl::geom::Matrix_obj::__identity;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(208)
		this->__getBounds(tmp7,tmp8);
		HX_STACK_LINE(210)
		::openfl::display::Graphics tmp9 = maskGraphics;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(210)
		this->super::__updateMask(tmp9);
	}
return null();
}


Float Bitmap_obj::get_height( ){
	HX_STACK_FRAME("openfl.display.Bitmap","get_height",0x5901da25,"openfl.display.Bitmap.get_height","openfl/display/Bitmap.hx",221,0x461b2743)
	HX_STACK_THIS(this)
	HX_STACK_LINE(223)
	::openfl::display::BitmapData tmp = this->bitmapData;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(223)
	bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(223)
	if ((tmp1)){
		HX_STACK_LINE(225)
		::openfl::display::BitmapData tmp2 = this->bitmapData;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(225)
		int tmp3 = tmp2->height;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(225)
		Float tmp4 = this->get_scaleY();		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(225)
		Float tmp5 = (tmp3 * tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(225)
		return tmp5;
	}
	HX_STACK_LINE(229)
	return (int)0;
}


Float Bitmap_obj::set_height( Float value){
	HX_STACK_FRAME("openfl.display.Bitmap","set_height",0x5c7f7899,"openfl.display.Bitmap.set_height","openfl/display/Bitmap.hx",234,0x461b2743)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(236)
	::openfl::display::BitmapData tmp = this->bitmapData;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(236)
	bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(236)
	if ((tmp1)){
		HX_STACK_LINE(238)
		Float tmp2 = value;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(238)
		::openfl::display::BitmapData tmp3 = this->bitmapData;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(238)
		int tmp4 = tmp3->height;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(238)
		Float tmp5 = (Float(tmp2) / Float(tmp4));		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(238)
		this->set_scaleY(tmp5);
		HX_STACK_LINE(239)
		Float tmp6 = value;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(239)
		return tmp6;
	}
	HX_STACK_LINE(243)
	return (int)0;
}


Float Bitmap_obj::get_width( ){
	HX_STACK_FRAME("openfl.display.Bitmap","get_width",0x2b347588,"openfl.display.Bitmap.get_width","openfl/display/Bitmap.hx",248,0x461b2743)
	HX_STACK_THIS(this)
	HX_STACK_LINE(250)
	::openfl::display::BitmapData tmp = this->bitmapData;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(250)
	bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(250)
	if ((tmp1)){
		HX_STACK_LINE(252)
		::openfl::display::BitmapData tmp2 = this->bitmapData;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(252)
		int tmp3 = tmp2->width;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(252)
		Float tmp4 = this->get_scaleX();		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(252)
		Float tmp5 = (tmp3 * tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(252)
		return tmp5;
	}
	HX_STACK_LINE(256)
	return (int)0;
}


Float Bitmap_obj::set_width( Float value){
	HX_STACK_FRAME("openfl.display.Bitmap","set_width",0x0e856194,"openfl.display.Bitmap.set_width","openfl/display/Bitmap.hx",261,0x461b2743)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(263)
	::openfl::display::BitmapData tmp = this->bitmapData;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(263)
	bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(263)
	if ((tmp1)){
		HX_STACK_LINE(265)
		Float tmp2 = value;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(265)
		::openfl::display::BitmapData tmp3 = this->bitmapData;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(265)
		int tmp4 = tmp3->width;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(265)
		Float tmp5 = (Float(tmp2) / Float(tmp4));		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(265)
		this->set_scaleX(tmp5);
		HX_STACK_LINE(266)
		Float tmp6 = value;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(266)
		return tmp6;
	}
	HX_STACK_LINE(270)
	return (int)0;
}



Bitmap_obj::Bitmap_obj()
{
}

void Bitmap_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Bitmap);
	HX_MARK_MEMBER_NAME(bitmapData,"bitmapData");
	HX_MARK_MEMBER_NAME(pixelSnapping,"pixelSnapping");
	HX_MARK_MEMBER_NAME(smoothing,"smoothing");
	::openfl::display::DisplayObject_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void Bitmap_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(bitmapData,"bitmapData");
	HX_VISIT_MEMBER_NAME(pixelSnapping,"pixelSnapping");
	HX_VISIT_MEMBER_NAME(smoothing,"smoothing");
	::openfl::display::DisplayObject_obj::__Visit(HX_VISIT_ARG);
}

Dynamic Bitmap_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 9:
		if (HX_FIELD_EQ(inName,"smoothing") ) { return smoothing; }
		if (HX_FIELD_EQ(inName,"__hitTest") ) { return __hitTest_dyn(); }
		if (HX_FIELD_EQ(inName,"get_width") ) { return get_width_dyn(); }
		if (HX_FIELD_EQ(inName,"set_width") ) { return set_width_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"bitmapData") ) { return bitmapData; }
		if (HX_FIELD_EQ(inName,"__renderGL") ) { return __renderGL_dyn(); }
		if (HX_FIELD_EQ(inName,"get_height") ) { return get_height_dyn(); }
		if (HX_FIELD_EQ(inName,"set_height") ) { return set_height_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"__getBounds") ) { return __getBounds_dyn(); }
		if (HX_FIELD_EQ(inName,"__renderDOM") ) { return __renderDOM_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"__updateMask") ) { return __updateMask_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"pixelSnapping") ) { return pixelSnapping; }
		if (HX_FIELD_EQ(inName,"__renderCairo") ) { return __renderCairo_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"__renderCanvas") ) { return __renderCanvas_dyn(); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"__renderCairoMask") ) { return __renderCairoMask_dyn(); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"__renderCanvasMask") ) { return __renderCanvasMask_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Bitmap_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 9:
		if (HX_FIELD_EQ(inName,"smoothing") ) { smoothing=inValue.Cast< bool >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"bitmapData") ) { bitmapData=inValue.Cast< ::openfl::display::BitmapData >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"pixelSnapping") ) { pixelSnapping=inValue.Cast< ::openfl::display::PixelSnapping >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool Bitmap_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	return false;
}

void Bitmap_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("bitmapData","\xb9","\xb5","\xc0","\x33"));
	outFields->push(HX_HCSTRING("pixelSnapping","\x62","\xae","\xa1","\xb8"));
	outFields->push(HX_HCSTRING("smoothing","\x74","\xd5","\xe1","\x95"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::openfl::display::BitmapData*/ ,(int)offsetof(Bitmap_obj,bitmapData),HX_HCSTRING("bitmapData","\xb9","\xb5","\xc0","\x33")},
	{hx::fsObject /*::openfl::display::PixelSnapping*/ ,(int)offsetof(Bitmap_obj,pixelSnapping),HX_HCSTRING("pixelSnapping","\x62","\xae","\xa1","\xb8")},
	{hx::fsBool,(int)offsetof(Bitmap_obj,smoothing),HX_HCSTRING("smoothing","\x74","\xd5","\xe1","\x95")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("bitmapData","\xb9","\xb5","\xc0","\x33"),
	HX_HCSTRING("pixelSnapping","\x62","\xae","\xa1","\xb8"),
	HX_HCSTRING("smoothing","\x74","\xd5","\xe1","\x95"),
	HX_HCSTRING("__getBounds","\x8b","\x58","\xa0","\x10"),
	HX_HCSTRING("__hitTest","\x25","\xb1","\xcd","\x63"),
	HX_HCSTRING("__renderCairo","\x32","\x9e","\x42","\x55"),
	HX_HCSTRING("__renderCairoMask","\x3e","\x0c","\x22","\x6b"),
	HX_HCSTRING("__renderCanvas","\xee","\xdb","\x58","\x48"),
	HX_HCSTRING("__renderCanvasMask","\xfa","\xd7","\xef","\x51"),
	HX_HCSTRING("__renderDOM","\xac","\xf5","\x83","\xfb"),
	HX_HCSTRING("__renderGL","\x1b","\x1e","\x14","\x56"),
	HX_HCSTRING("__updateMask","\xb5","\xa6","\x9e","\x39"),
	HX_HCSTRING("get_height","\xb0","\x77","\xd3","\xf2"),
	HX_HCSTRING("set_height","\x24","\x16","\x51","\xf6"),
	HX_HCSTRING("get_width","\x5d","\x12","\x0c","\x0e"),
	HX_HCSTRING("set_width","\x69","\xfe","\x5c","\xf1"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Bitmap_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Bitmap_obj::__mClass,"__mClass");
};

#endif

hx::Class Bitmap_obj::__mClass;

void Bitmap_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("openfl.display.Bitmap","\xd9","\x2f","\x4d","\x7b");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &Bitmap_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Bitmap_obj >;
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

} // end namespace openfl
} // end namespace display
