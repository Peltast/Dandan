#include <hxcpp.h>

#include "hxMath.h"
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_lime_app_IModule
#include <lime/app/IModule.h>
#endif
#ifndef INCLUDED_lime_graphics_Image
#include <lime/graphics/Image.h>
#endif
#ifndef INCLUDED_lime_graphics_cairo_Cairo
#include <lime/graphics/cairo/Cairo.h>
#endif
#ifndef INCLUDED_openfl_Lib
#include <openfl/Lib.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_opengl_utils_DrawPath
#include <openfl/_internal/renderer/opengl/utils/DrawPath.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_opengl_utils_FilterTexture
#include <openfl/_internal/renderer/opengl/utils/FilterTexture.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_opengl_utils_GLStack
#include <openfl/_internal/renderer/opengl/utils/GLStack.h>
#endif
#ifndef INCLUDED_openfl_display_BitmapData
#include <openfl/display/BitmapData.h>
#endif
#ifndef INCLUDED_openfl_display_CapsStyle
#include <openfl/display/CapsStyle.h>
#endif
#ifndef INCLUDED_openfl_display_DisplayObject
#include <openfl/display/DisplayObject.h>
#endif
#ifndef INCLUDED_openfl_display_DisplayObjectContainer
#include <openfl/display/DisplayObjectContainer.h>
#endif
#ifndef INCLUDED_openfl_display_DrawCommand
#include <openfl/display/DrawCommand.h>
#endif
#ifndef INCLUDED_openfl_display_GradientType
#include <openfl/display/GradientType.h>
#endif
#ifndef INCLUDED_openfl_display_Graphics
#include <openfl/display/Graphics.h>
#endif
#ifndef INCLUDED_openfl_display_GraphicsBitmapFill
#include <openfl/display/GraphicsBitmapFill.h>
#endif
#ifndef INCLUDED_openfl_display_GraphicsEndFill
#include <openfl/display/GraphicsEndFill.h>
#endif
#ifndef INCLUDED_openfl_display_GraphicsGradientFill
#include <openfl/display/GraphicsGradientFill.h>
#endif
#ifndef INCLUDED_openfl_display_GraphicsPath
#include <openfl/display/GraphicsPath.h>
#endif
#ifndef INCLUDED_openfl_display_GraphicsPathWinding
#include <openfl/display/GraphicsPathWinding.h>
#endif
#ifndef INCLUDED_openfl_display_GraphicsSolidFill
#include <openfl/display/GraphicsSolidFill.h>
#endif
#ifndef INCLUDED_openfl_display_GraphicsStroke
#include <openfl/display/GraphicsStroke.h>
#endif
#ifndef INCLUDED_openfl_display_IBitmapDrawable
#include <openfl/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_openfl_display_IGraphicsData
#include <openfl/display/IGraphicsData.h>
#endif
#ifndef INCLUDED_openfl_display_IGraphicsFill
#include <openfl/display/IGraphicsFill.h>
#endif
#ifndef INCLUDED_openfl_display_IGraphicsPath
#include <openfl/display/IGraphicsPath.h>
#endif
#ifndef INCLUDED_openfl_display_IGraphicsStroke
#include <openfl/display/IGraphicsStroke.h>
#endif
#ifndef INCLUDED_openfl_display_InteractiveObject
#include <openfl/display/InteractiveObject.h>
#endif
#ifndef INCLUDED_openfl_display_InterpolationMethod
#include <openfl/display/InterpolationMethod.h>
#endif
#ifndef INCLUDED_openfl_display_JointStyle
#include <openfl/display/JointStyle.h>
#endif
#ifndef INCLUDED_openfl_display_LineScaleMode
#include <openfl/display/LineScaleMode.h>
#endif
#ifndef INCLUDED_openfl_display_MovieClip
#include <openfl/display/MovieClip.h>
#endif
#ifndef INCLUDED_openfl_display_SpreadMethod
#include <openfl/display/SpreadMethod.h>
#endif
#ifndef INCLUDED_openfl_display_Sprite
#include <openfl/display/Sprite.h>
#endif
#ifndef INCLUDED_openfl_display_Stage
#include <openfl/display/Stage.h>
#endif
#ifndef INCLUDED_openfl_display_Tilesheet
#include <openfl/display/Tilesheet.h>
#endif
#ifndef INCLUDED_openfl_display_TriangleCulling
#include <openfl/display/TriangleCulling.h>
#endif
#ifndef INCLUDED_openfl_errors_ArgumentError
#include <openfl/errors/ArgumentError.h>
#endif
#ifndef INCLUDED_openfl_errors_Error
#include <openfl/errors/Error.h>
#endif
#ifndef INCLUDED_openfl_events_EventDispatcher
#include <openfl/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_events_IEventDispatcher
#include <openfl/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_geom_Matrix
#include <openfl/geom/Matrix.h>
#endif
#ifndef INCLUDED_openfl_geom_Rectangle
#include <openfl/geom/Rectangle.h>
#endif
namespace openfl{
namespace display{

Void Graphics_obj::__construct()
{
HX_STACK_FRAME("openfl.display.Graphics","new",0x7fd846a7,"openfl.display.Graphics.new","openfl/display/Graphics.hx",49,0x8d299ce7)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(83)
	this->__visible = true;
	HX_STACK_LINE(76)
	this->__glStack = Array_obj< ::Dynamic >::__new();
	HX_STACK_LINE(75)
	this->__dirty = true;
	HX_STACK_LINE(74)
	this->__commands = Array_obj< ::Dynamic >::__new();
	HX_STACK_LINE(99)
	this->__commands = Array_obj< ::Dynamic >::__new();
	HX_STACK_LINE(100)
	this->__halfStrokeWidth = (int)0;
	HX_STACK_LINE(101)
	this->__positionX = (int)0;
	HX_STACK_LINE(102)
	this->__positionY = (int)0;
	HX_STACK_LINE(103)
	this->__hardware = true;
}
;
	return null();
}

//Graphics_obj::~Graphics_obj() { }

Dynamic Graphics_obj::__CreateEmpty() { return  new Graphics_obj; }
hx::ObjectPtr< Graphics_obj > Graphics_obj::__new()
{  hx::ObjectPtr< Graphics_obj > _result_ = new Graphics_obj();
	_result_->__construct();
	return _result_;}

Dynamic Graphics_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Graphics_obj > _result_ = new Graphics_obj();
	_result_->__construct();
	return _result_;}

Void Graphics_obj::beginBitmapFill( ::openfl::display::BitmapData bitmap,::openfl::geom::Matrix matrix,hx::Null< bool >  __o_repeat,hx::Null< bool >  __o_smooth){
bool repeat = __o_repeat.Default(true);
bool smooth = __o_smooth.Default(false);
	HX_STACK_FRAME("openfl.display.Graphics","beginBitmapFill",0x31c80e62,"openfl.display.Graphics.beginBitmapFill","openfl/display/Graphics.hx",148,0x8d299ce7)
	HX_STACK_THIS(this)
	HX_STACK_ARG(bitmap,"bitmap")
	HX_STACK_ARG(matrix,"matrix")
	HX_STACK_ARG(repeat,"repeat")
	HX_STACK_ARG(smooth,"smooth")
{
		HX_STACK_LINE(150)
		::openfl::display::BitmapData tmp = bitmap;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(150)
		bool tmp1 = (matrix != null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(150)
		::openfl::geom::Matrix tmp2;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(150)
		if ((tmp1)){
			HX_STACK_LINE(150)
			tmp2 = ::openfl::geom::Matrix_obj::__new(matrix->a,matrix->b,matrix->c,matrix->d,matrix->tx,matrix->ty);
		}
		else{
			HX_STACK_LINE(150)
			tmp2 = null();
		}
		HX_STACK_LINE(150)
		bool tmp3 = repeat;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(150)
		bool tmp4 = smooth;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(150)
		::openfl::display::DrawCommand tmp5 = ::openfl::display::DrawCommand_obj::BeginBitmapFill(tmp,tmp2,tmp3,tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(150)
		this->__commands->push(tmp5);
		HX_STACK_LINE(152)
		this->__visible = true;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC4(Graphics_obj,beginBitmapFill,(void))

Void Graphics_obj::beginFill( hx::Null< int >  __o_color,hx::Null< Float >  __o_alpha){
int color = __o_color.Default(0);
Float alpha = __o_alpha.Default(1);
	HX_STACK_FRAME("openfl.display.Graphics","beginFill",0xf44a92d3,"openfl.display.Graphics.beginFill","openfl/display/Graphics.hx",171,0x8d299ce7)
	HX_STACK_THIS(this)
	HX_STACK_ARG(color,"color")
	HX_STACK_ARG(alpha,"alpha")
{
		HX_STACK_LINE(173)
		int tmp = (int(color) & int((int)16777215));		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(173)
		Float tmp1 = alpha;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(173)
		::openfl::display::DrawCommand tmp2 = ::openfl::display::DrawCommand_obj::BeginFill(tmp,tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(173)
		this->__commands->push(tmp2);
		HX_STACK_LINE(175)
		bool tmp3 = (alpha > (int)0);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(175)
		if ((tmp3)){
			HX_STACK_LINE(175)
			this->__visible = true;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Graphics_obj,beginFill,(void))

Void Graphics_obj::beginGradientFill( ::openfl::display::GradientType type,cpp::ArrayBase colors,cpp::ArrayBase alphas,cpp::ArrayBase ratios,::openfl::geom::Matrix matrix,::openfl::display::SpreadMethod spreadMethod,::openfl::display::InterpolationMethod interpolationMethod,Dynamic focalPointRatio){
{
		HX_STACK_FRAME("openfl.display.Graphics","beginGradientFill",0x99f380e3,"openfl.display.Graphics.beginGradientFill","openfl/display/Graphics.hx",245,0x8d299ce7)
		HX_STACK_THIS(this)
		HX_STACK_ARG(type,"type")
		HX_STACK_ARG(colors,"colors")
		HX_STACK_ARG(alphas,"alphas")
		HX_STACK_ARG(ratios,"ratios")
		HX_STACK_ARG(matrix,"matrix")
		HX_STACK_ARG(spreadMethod,"spreadMethod")
		HX_STACK_ARG(interpolationMethod,"interpolationMethod")
		HX_STACK_ARG(focalPointRatio,"focalPointRatio")
		HX_STACK_LINE(247)
		::openfl::display::GradientType tmp = type;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(247)
		::openfl::geom::Matrix tmp1 = matrix;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(247)
		::openfl::display::SpreadMethod tmp2 = spreadMethod;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(247)
		::openfl::display::InterpolationMethod tmp3 = interpolationMethod;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(247)
		Dynamic tmp4 = focalPointRatio;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(247)
		::openfl::display::DrawCommand tmp5 = ::openfl::display::DrawCommand_obj::BeginGradientFill(tmp,colors,alphas,ratios,tmp1,tmp2,tmp3,tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(247)
		this->__commands->push(tmp5);
		HX_STACK_LINE(248)
		this->__hardware = false;
		HX_STACK_LINE(250)
		{
			HX_STACK_LINE(250)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(250)
			while((true)){
				HX_STACK_LINE(250)
				bool tmp6 = (_g < alphas->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic ));		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(250)
				bool tmp7 = !(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(250)
				if ((tmp7)){
					HX_STACK_LINE(250)
					break;
				}
				HX_STACK_LINE(250)
				Dynamic tmp8 = alphas->__GetItem(_g);		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(250)
				Dynamic alpha = tmp8;		HX_STACK_VAR(alpha,"alpha");
				HX_STACK_LINE(250)
				++(_g);
				HX_STACK_LINE(252)
				bool tmp9 = (alpha > (int)0);		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(252)
				if ((tmp9)){
					HX_STACK_LINE(254)
					this->__visible = true;
					HX_STACK_LINE(255)
					break;
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC8(Graphics_obj,beginGradientFill,(void))

Void Graphics_obj::clear( ){
{
		HX_STACK_FRAME("openfl.display.Graphics","clear",0x0a9f4794,"openfl.display.Graphics.clear","openfl/display/Graphics.hx",269,0x8d299ce7)
		HX_STACK_THIS(this)
		HX_STACK_LINE(271)
		this->__commands = Array_obj< ::Dynamic >::__new();
		HX_STACK_LINE(272)
		this->__halfStrokeWidth = (int)0;
		HX_STACK_LINE(274)
		::openfl::geom::Rectangle tmp = this->__bounds;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(274)
		bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(274)
		if ((tmp1)){
			HX_STACK_LINE(276)
			this->set___dirty(true);
			HX_STACK_LINE(277)
			this->__transformDirty = true;
			HX_STACK_LINE(278)
			this->__bounds = null();
		}
		HX_STACK_LINE(282)
		this->__visible = false;
		HX_STACK_LINE(283)
		this->__hardware = true;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Graphics_obj,clear,(void))

Void Graphics_obj::copyFrom( ::openfl::display::Graphics sourceGraphics){
{
		HX_STACK_FRAME("openfl.display.Graphics","copyFrom",0x0a477418,"openfl.display.Graphics.copyFrom","openfl/display/Graphics.hx",292,0x8d299ce7)
		HX_STACK_THIS(this)
		HX_STACK_ARG(sourceGraphics,"sourceGraphics")
		HX_STACK_LINE(294)
		::openfl::geom::Rectangle tmp = sourceGraphics->__bounds->clone();		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(294)
		this->__bounds = tmp;
		HX_STACK_LINE(295)
		this->__commands = sourceGraphics->__commands->copy();
		HX_STACK_LINE(296)
		this->set___dirty(true);
		HX_STACK_LINE(297)
		this->__halfStrokeWidth = sourceGraphics->__halfStrokeWidth;
		HX_STACK_LINE(298)
		this->__positionX = sourceGraphics->__positionX;
		HX_STACK_LINE(299)
		this->__positionY = sourceGraphics->__positionY;
		HX_STACK_LINE(300)
		this->__transformDirty = true;
		HX_STACK_LINE(301)
		this->__visible = sourceGraphics->__visible;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Graphics_obj,copyFrom,(void))

Void Graphics_obj::cubicCurveTo( Float controlX1,Float controlY1,Float controlX2,Float controlY2,Float anchorX,Float anchorY){
{
		HX_STACK_FRAME("openfl.display.Graphics","cubicCurveTo",0x467410b9,"openfl.display.Graphics.cubicCurveTo","openfl/display/Graphics.hx",306,0x8d299ce7)
		HX_STACK_THIS(this)
		HX_STACK_ARG(controlX1,"controlX1")
		HX_STACK_ARG(controlY1,"controlY1")
		HX_STACK_ARG(controlX2,"controlX2")
		HX_STACK_ARG(controlY2,"controlY2")
		HX_STACK_ARG(anchorX,"anchorX")
		HX_STACK_ARG(anchorY,"anchorY")
		HX_STACK_LINE(308)
		Float tmp = this->__positionX;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(308)
		Float tmp1 = this->__halfStrokeWidth;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(308)
		Float tmp2 = (tmp - tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(308)
		Float tmp3 = this->__positionY;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(308)
		Float tmp4 = this->__halfStrokeWidth;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(308)
		Float tmp5 = (tmp3 - tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(308)
		this->__inflateBounds(tmp2,tmp5);
		HX_STACK_LINE(309)
		Float tmp6 = this->__positionX;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(309)
		Float tmp7 = this->__halfStrokeWidth;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(309)
		Float tmp8 = (tmp6 + tmp7);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(309)
		Float tmp9 = this->__positionY;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(309)
		Float tmp10 = this->__halfStrokeWidth;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(309)
		Float tmp11 = (tmp9 + tmp10);		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(309)
		this->__inflateBounds(tmp8,tmp11);
		HX_STACK_LINE(311)
		Float ix1;		HX_STACK_VAR(ix1,"ix1");
		HX_STACK_LINE(311)
		Float iy1;		HX_STACK_VAR(iy1,"iy1");
		HX_STACK_LINE(311)
		Float ix2;		HX_STACK_VAR(ix2,"ix2");
		HX_STACK_LINE(311)
		Float iy2;		HX_STACK_VAR(iy2,"iy2");
		HX_STACK_LINE(313)
		ix1 = anchorX;
		HX_STACK_LINE(314)
		ix2 = anchorX;
		HX_STACK_LINE(316)
		bool tmp12 = (controlX1 < anchorX);		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(316)
		bool tmp13 = tmp12;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(316)
		bool tmp14;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(316)
		if ((tmp13)){
			HX_STACK_LINE(316)
			Float tmp15 = controlX1;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(316)
			Float tmp16 = this->__positionX;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(316)
			Float tmp17 = tmp16;		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(316)
			Float tmp18 = tmp17;		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(316)
			tmp14 = (tmp15 > tmp18);
		}
		else{
			HX_STACK_LINE(316)
			tmp14 = false;
		}
		HX_STACK_LINE(316)
		bool tmp15 = !(tmp14);		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(316)
		bool tmp16 = tmp15;		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(316)
		bool tmp17;		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(316)
		if ((tmp16)){
			HX_STACK_LINE(316)
			bool tmp18 = (controlX1 > anchorX);		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(316)
			bool tmp19 = tmp18;		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(316)
			bool tmp20 = tmp19;		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(316)
			bool tmp21 = tmp20;		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(316)
			bool tmp22 = tmp21;		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(316)
			if ((tmp22)){
				HX_STACK_LINE(316)
				Float tmp23 = controlX1;		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(316)
				Float tmp24 = this->__positionX;		HX_STACK_VAR(tmp24,"tmp24");
				HX_STACK_LINE(316)
				Float tmp25 = tmp24;		HX_STACK_VAR(tmp25,"tmp25");
				HX_STACK_LINE(316)
				Float tmp26 = tmp25;		HX_STACK_VAR(tmp26,"tmp26");
				HX_STACK_LINE(316)
				Float tmp27 = tmp26;		HX_STACK_VAR(tmp27,"tmp27");
				HX_STACK_LINE(316)
				tmp17 = (tmp23 < tmp27);
			}
			else{
				HX_STACK_LINE(316)
				tmp17 = false;
			}
		}
		else{
			HX_STACK_LINE(316)
			tmp17 = true;
		}
		HX_STACK_LINE(316)
		bool tmp18;		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(316)
		if ((tmp17)){
			HX_STACK_LINE(316)
			bool tmp19 = (controlX2 < anchorX);		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(316)
			bool tmp20 = tmp19;		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(316)
			bool tmp21 = tmp20;		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(316)
			bool tmp22;		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(316)
			bool tmp23 = tmp21;		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(316)
			if ((tmp23)){
				HX_STACK_LINE(316)
				Float tmp24 = controlX2;		HX_STACK_VAR(tmp24,"tmp24");
				HX_STACK_LINE(316)
				Float tmp25 = this->__positionX;		HX_STACK_VAR(tmp25,"tmp25");
				HX_STACK_LINE(316)
				Float tmp26 = tmp25;		HX_STACK_VAR(tmp26,"tmp26");
				HX_STACK_LINE(316)
				Float tmp27 = tmp26;		HX_STACK_VAR(tmp27,"tmp27");
				HX_STACK_LINE(316)
				Float tmp28 = tmp27;		HX_STACK_VAR(tmp28,"tmp28");
				HX_STACK_LINE(316)
				bool tmp29 = (tmp24 > tmp28);		HX_STACK_VAR(tmp29,"tmp29");
				HX_STACK_LINE(316)
				tmp22 = tmp29;
			}
			else{
				HX_STACK_LINE(316)
				tmp22 = false;
			}
			HX_STACK_LINE(316)
			bool tmp24 = tmp22;		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(316)
			bool tmp25 = !(tmp24);		HX_STACK_VAR(tmp25,"tmp25");
			HX_STACK_LINE(316)
			bool tmp26 = tmp25;		HX_STACK_VAR(tmp26,"tmp26");
			HX_STACK_LINE(316)
			bool tmp27 = tmp26;		HX_STACK_VAR(tmp27,"tmp27");
			HX_STACK_LINE(316)
			if ((tmp27)){
				HX_STACK_LINE(316)
				bool tmp28 = (controlX2 > anchorX);		HX_STACK_VAR(tmp28,"tmp28");
				HX_STACK_LINE(316)
				bool tmp29 = tmp28;		HX_STACK_VAR(tmp29,"tmp29");
				HX_STACK_LINE(316)
				bool tmp30 = tmp29;		HX_STACK_VAR(tmp30,"tmp30");
				HX_STACK_LINE(316)
				bool tmp31 = tmp30;		HX_STACK_VAR(tmp31,"tmp31");
				HX_STACK_LINE(316)
				bool tmp32 = tmp31;		HX_STACK_VAR(tmp32,"tmp32");
				HX_STACK_LINE(316)
				if ((tmp32)){
					HX_STACK_LINE(316)
					Float tmp33 = controlX2;		HX_STACK_VAR(tmp33,"tmp33");
					HX_STACK_LINE(316)
					Float tmp34 = this->__positionX;		HX_STACK_VAR(tmp34,"tmp34");
					HX_STACK_LINE(316)
					Float tmp35 = tmp34;		HX_STACK_VAR(tmp35,"tmp35");
					HX_STACK_LINE(316)
					Float tmp36 = tmp35;		HX_STACK_VAR(tmp36,"tmp36");
					HX_STACK_LINE(316)
					Float tmp37 = tmp36;		HX_STACK_VAR(tmp37,"tmp37");
					HX_STACK_LINE(316)
					tmp18 = (tmp33 < tmp37);
				}
				else{
					HX_STACK_LINE(316)
					tmp18 = false;
				}
			}
			else{
				HX_STACK_LINE(316)
				tmp18 = true;
			}
		}
		else{
			HX_STACK_LINE(316)
			tmp18 = false;
		}
		HX_STACK_LINE(316)
		bool tmp19 = !(tmp18);		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(316)
		if ((tmp19)){
			HX_STACK_LINE(318)
			Float tmp20 = this->__positionX;		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(318)
			Float tmp21 = ((int)2 * tmp20);		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(318)
			Float tmp22 = ((int)4 * controlX1);		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(318)
			Float tmp23 = (tmp21 - tmp22);		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(318)
			Float tmp24 = ((int)2 * controlX2);		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(318)
			Float tmp25 = (tmp23 + tmp24);		HX_STACK_VAR(tmp25,"tmp25");
			HX_STACK_LINE(318)
			Float u = tmp25;		HX_STACK_VAR(u,"u");
			HX_STACK_LINE(319)
			Float tmp26 = controlX1;		HX_STACK_VAR(tmp26,"tmp26");
			HX_STACK_LINE(319)
			Float tmp27 = this->__positionX;		HX_STACK_VAR(tmp27,"tmp27");
			HX_STACK_LINE(319)
			Float tmp28 = (tmp26 - tmp27);		HX_STACK_VAR(tmp28,"tmp28");
			HX_STACK_LINE(319)
			Float v = tmp28;		HX_STACK_VAR(v,"v");
			HX_STACK_LINE(320)
			Float tmp29 = this->__positionX;		HX_STACK_VAR(tmp29,"tmp29");
			HX_STACK_LINE(320)
			Float tmp30 = -(tmp29);		HX_STACK_VAR(tmp30,"tmp30");
			HX_STACK_LINE(320)
			Float tmp31 = ((int)3 * controlX1);		HX_STACK_VAR(tmp31,"tmp31");
			HX_STACK_LINE(320)
			Float tmp32 = (tmp30 + tmp31);		HX_STACK_VAR(tmp32,"tmp32");
			HX_STACK_LINE(320)
			Float tmp33 = anchorX;		HX_STACK_VAR(tmp33,"tmp33");
			HX_STACK_LINE(320)
			Float tmp34 = (tmp32 + tmp33);		HX_STACK_VAR(tmp34,"tmp34");
			HX_STACK_LINE(320)
			Float tmp35 = ((int)3 * controlX2);		HX_STACK_VAR(tmp35,"tmp35");
			HX_STACK_LINE(320)
			Float tmp36 = (tmp34 - tmp35);		HX_STACK_VAR(tmp36,"tmp36");
			HX_STACK_LINE(320)
			Float w = tmp36;		HX_STACK_VAR(w,"w");
			HX_STACK_LINE(322)
			Float tmp37 = u;		HX_STACK_VAR(tmp37,"tmp37");
			HX_STACK_LINE(322)
			Float tmp38 = -(tmp37);		HX_STACK_VAR(tmp38,"tmp38");
			HX_STACK_LINE(322)
			Float tmp39 = (u * u);		HX_STACK_VAR(tmp39,"tmp39");
			HX_STACK_LINE(322)
			Float tmp40 = ((int)4 * v);		HX_STACK_VAR(tmp40,"tmp40");
			HX_STACK_LINE(322)
			Float tmp41 = w;		HX_STACK_VAR(tmp41,"tmp41");
			HX_STACK_LINE(322)
			Float tmp42 = (tmp40 * tmp41);		HX_STACK_VAR(tmp42,"tmp42");
			HX_STACK_LINE(322)
			Float tmp43 = (tmp39 - tmp42);		HX_STACK_VAR(tmp43,"tmp43");
			HX_STACK_LINE(322)
			Float tmp44 = ::Math_obj::sqrt(tmp43);		HX_STACK_VAR(tmp44,"tmp44");
			HX_STACK_LINE(322)
			Float tmp45 = (tmp38 + tmp44);		HX_STACK_VAR(tmp45,"tmp45");
			HX_STACK_LINE(322)
			Float tmp46 = ((int)2 * w);		HX_STACK_VAR(tmp46,"tmp46");
			HX_STACK_LINE(322)
			Float tmp47 = (Float(tmp45) / Float(tmp46));		HX_STACK_VAR(tmp47,"tmp47");
			HX_STACK_LINE(322)
			Float t1 = tmp47;		HX_STACK_VAR(t1,"t1");
			HX_STACK_LINE(323)
			Float tmp48 = u;		HX_STACK_VAR(tmp48,"tmp48");
			HX_STACK_LINE(323)
			Float tmp49 = -(tmp48);		HX_STACK_VAR(tmp49,"tmp49");
			HX_STACK_LINE(323)
			Float tmp50 = (u * u);		HX_STACK_VAR(tmp50,"tmp50");
			HX_STACK_LINE(323)
			Float tmp51 = ((int)4 * v);		HX_STACK_VAR(tmp51,"tmp51");
			HX_STACK_LINE(323)
			Float tmp52 = w;		HX_STACK_VAR(tmp52,"tmp52");
			HX_STACK_LINE(323)
			Float tmp53 = (tmp51 * tmp52);		HX_STACK_VAR(tmp53,"tmp53");
			HX_STACK_LINE(323)
			Float tmp54 = (tmp50 - tmp53);		HX_STACK_VAR(tmp54,"tmp54");
			HX_STACK_LINE(323)
			Float tmp55 = ::Math_obj::sqrt(tmp54);		HX_STACK_VAR(tmp55,"tmp55");
			HX_STACK_LINE(323)
			Float tmp56 = (tmp49 - tmp55);		HX_STACK_VAR(tmp56,"tmp56");
			HX_STACK_LINE(323)
			Float tmp57 = ((int)2 * w);		HX_STACK_VAR(tmp57,"tmp57");
			HX_STACK_LINE(323)
			Float tmp58 = (Float(tmp56) / Float(tmp57));		HX_STACK_VAR(tmp58,"tmp58");
			HX_STACK_LINE(323)
			Float t2 = tmp58;		HX_STACK_VAR(t2,"t2");
			HX_STACK_LINE(325)
			bool tmp59 = (t1 > (int)0);		HX_STACK_VAR(tmp59,"tmp59");
			HX_STACK_LINE(325)
			bool tmp60;		HX_STACK_VAR(tmp60,"tmp60");
			HX_STACK_LINE(325)
			if ((tmp59)){
				HX_STACK_LINE(325)
				tmp60 = (t1 < (int)1);
			}
			else{
				HX_STACK_LINE(325)
				tmp60 = false;
			}
			HX_STACK_LINE(325)
			if ((tmp60)){
				HX_STACK_LINE(327)
				Float tmp61 = t1;		HX_STACK_VAR(tmp61,"tmp61");
				HX_STACK_LINE(327)
				Float tmp62 = this->__positionX;		HX_STACK_VAR(tmp62,"tmp62");
				HX_STACK_LINE(327)
				Float tmp63 = controlX1;		HX_STACK_VAR(tmp63,"tmp63");
				HX_STACK_LINE(327)
				Float tmp64 = controlX2;		HX_STACK_VAR(tmp64,"tmp64");
				HX_STACK_LINE(327)
				Float tmp65 = anchorX;		HX_STACK_VAR(tmp65,"tmp65");
				HX_STACK_LINE(327)
				Float tmp66 = this->__calculateBezierCubicPoint(tmp61,tmp62,tmp63,tmp64,tmp65);		HX_STACK_VAR(tmp66,"tmp66");
				HX_STACK_LINE(327)
				ix1 = tmp66;
			}
			HX_STACK_LINE(331)
			bool tmp61 = (t2 > (int)0);		HX_STACK_VAR(tmp61,"tmp61");
			HX_STACK_LINE(331)
			bool tmp62;		HX_STACK_VAR(tmp62,"tmp62");
			HX_STACK_LINE(331)
			if ((tmp61)){
				HX_STACK_LINE(331)
				tmp62 = (t2 < (int)1);
			}
			else{
				HX_STACK_LINE(331)
				tmp62 = false;
			}
			HX_STACK_LINE(331)
			if ((tmp62)){
				HX_STACK_LINE(333)
				Float tmp63 = t2;		HX_STACK_VAR(tmp63,"tmp63");
				HX_STACK_LINE(333)
				Float tmp64 = this->__positionX;		HX_STACK_VAR(tmp64,"tmp64");
				HX_STACK_LINE(333)
				Float tmp65 = controlX1;		HX_STACK_VAR(tmp65,"tmp65");
				HX_STACK_LINE(333)
				Float tmp66 = controlX2;		HX_STACK_VAR(tmp66,"tmp66");
				HX_STACK_LINE(333)
				Float tmp67 = anchorX;		HX_STACK_VAR(tmp67,"tmp67");
				HX_STACK_LINE(333)
				Float tmp68 = this->__calculateBezierCubicPoint(tmp63,tmp64,tmp65,tmp66,tmp67);		HX_STACK_VAR(tmp68,"tmp68");
				HX_STACK_LINE(333)
				ix2 = tmp68;
			}
		}
		HX_STACK_LINE(339)
		iy1 = anchorY;
		HX_STACK_LINE(340)
		iy2 = anchorY;
		HX_STACK_LINE(342)
		bool tmp20 = (controlY1 < anchorY);		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(342)
		bool tmp21 = tmp20;		HX_STACK_VAR(tmp21,"tmp21");
		HX_STACK_LINE(342)
		bool tmp22;		HX_STACK_VAR(tmp22,"tmp22");
		HX_STACK_LINE(342)
		if ((tmp21)){
			HX_STACK_LINE(342)
			Float tmp23 = controlY1;		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(342)
			Float tmp24 = this->__positionX;		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(342)
			Float tmp25 = tmp24;		HX_STACK_VAR(tmp25,"tmp25");
			HX_STACK_LINE(342)
			Float tmp26 = tmp25;		HX_STACK_VAR(tmp26,"tmp26");
			HX_STACK_LINE(342)
			tmp22 = (tmp23 > tmp26);
		}
		else{
			HX_STACK_LINE(342)
			tmp22 = false;
		}
		HX_STACK_LINE(342)
		bool tmp23 = !(tmp22);		HX_STACK_VAR(tmp23,"tmp23");
		HX_STACK_LINE(342)
		bool tmp24 = tmp23;		HX_STACK_VAR(tmp24,"tmp24");
		HX_STACK_LINE(342)
		bool tmp25;		HX_STACK_VAR(tmp25,"tmp25");
		HX_STACK_LINE(342)
		if ((tmp24)){
			HX_STACK_LINE(342)
			bool tmp26 = (controlY1 > anchorY);		HX_STACK_VAR(tmp26,"tmp26");
			HX_STACK_LINE(342)
			bool tmp27 = tmp26;		HX_STACK_VAR(tmp27,"tmp27");
			HX_STACK_LINE(342)
			bool tmp28 = tmp27;		HX_STACK_VAR(tmp28,"tmp28");
			HX_STACK_LINE(342)
			bool tmp29 = tmp28;		HX_STACK_VAR(tmp29,"tmp29");
			HX_STACK_LINE(342)
			bool tmp30 = tmp29;		HX_STACK_VAR(tmp30,"tmp30");
			HX_STACK_LINE(342)
			if ((tmp30)){
				HX_STACK_LINE(342)
				Float tmp31 = controlY1;		HX_STACK_VAR(tmp31,"tmp31");
				HX_STACK_LINE(342)
				Float tmp32 = this->__positionX;		HX_STACK_VAR(tmp32,"tmp32");
				HX_STACK_LINE(342)
				Float tmp33 = tmp32;		HX_STACK_VAR(tmp33,"tmp33");
				HX_STACK_LINE(342)
				Float tmp34 = tmp33;		HX_STACK_VAR(tmp34,"tmp34");
				HX_STACK_LINE(342)
				Float tmp35 = tmp34;		HX_STACK_VAR(tmp35,"tmp35");
				HX_STACK_LINE(342)
				tmp25 = (tmp31 < tmp35);
			}
			else{
				HX_STACK_LINE(342)
				tmp25 = false;
			}
		}
		else{
			HX_STACK_LINE(342)
			tmp25 = true;
		}
		HX_STACK_LINE(342)
		bool tmp26;		HX_STACK_VAR(tmp26,"tmp26");
		HX_STACK_LINE(342)
		if ((tmp25)){
			HX_STACK_LINE(342)
			bool tmp27 = (controlY2 < anchorY);		HX_STACK_VAR(tmp27,"tmp27");
			HX_STACK_LINE(342)
			bool tmp28 = tmp27;		HX_STACK_VAR(tmp28,"tmp28");
			HX_STACK_LINE(342)
			bool tmp29 = tmp28;		HX_STACK_VAR(tmp29,"tmp29");
			HX_STACK_LINE(342)
			bool tmp30;		HX_STACK_VAR(tmp30,"tmp30");
			HX_STACK_LINE(342)
			bool tmp31 = tmp29;		HX_STACK_VAR(tmp31,"tmp31");
			HX_STACK_LINE(342)
			if ((tmp31)){
				HX_STACK_LINE(342)
				Float tmp32 = controlY2;		HX_STACK_VAR(tmp32,"tmp32");
				HX_STACK_LINE(342)
				Float tmp33 = this->__positionX;		HX_STACK_VAR(tmp33,"tmp33");
				HX_STACK_LINE(342)
				Float tmp34 = tmp33;		HX_STACK_VAR(tmp34,"tmp34");
				HX_STACK_LINE(342)
				Float tmp35 = tmp34;		HX_STACK_VAR(tmp35,"tmp35");
				HX_STACK_LINE(342)
				Float tmp36 = tmp35;		HX_STACK_VAR(tmp36,"tmp36");
				HX_STACK_LINE(342)
				bool tmp37 = (tmp32 > tmp36);		HX_STACK_VAR(tmp37,"tmp37");
				HX_STACK_LINE(342)
				tmp30 = tmp37;
			}
			else{
				HX_STACK_LINE(342)
				tmp30 = false;
			}
			HX_STACK_LINE(342)
			bool tmp32 = tmp30;		HX_STACK_VAR(tmp32,"tmp32");
			HX_STACK_LINE(342)
			bool tmp33 = !(tmp32);		HX_STACK_VAR(tmp33,"tmp33");
			HX_STACK_LINE(342)
			bool tmp34 = tmp33;		HX_STACK_VAR(tmp34,"tmp34");
			HX_STACK_LINE(342)
			bool tmp35 = tmp34;		HX_STACK_VAR(tmp35,"tmp35");
			HX_STACK_LINE(342)
			if ((tmp35)){
				HX_STACK_LINE(342)
				bool tmp36 = (controlY2 > anchorY);		HX_STACK_VAR(tmp36,"tmp36");
				HX_STACK_LINE(342)
				bool tmp37 = tmp36;		HX_STACK_VAR(tmp37,"tmp37");
				HX_STACK_LINE(342)
				bool tmp38 = tmp37;		HX_STACK_VAR(tmp38,"tmp38");
				HX_STACK_LINE(342)
				bool tmp39 = tmp38;		HX_STACK_VAR(tmp39,"tmp39");
				HX_STACK_LINE(342)
				bool tmp40 = tmp39;		HX_STACK_VAR(tmp40,"tmp40");
				HX_STACK_LINE(342)
				if ((tmp40)){
					HX_STACK_LINE(342)
					Float tmp41 = controlY2;		HX_STACK_VAR(tmp41,"tmp41");
					HX_STACK_LINE(342)
					Float tmp42 = this->__positionX;		HX_STACK_VAR(tmp42,"tmp42");
					HX_STACK_LINE(342)
					Float tmp43 = tmp42;		HX_STACK_VAR(tmp43,"tmp43");
					HX_STACK_LINE(342)
					Float tmp44 = tmp43;		HX_STACK_VAR(tmp44,"tmp44");
					HX_STACK_LINE(342)
					Float tmp45 = tmp44;		HX_STACK_VAR(tmp45,"tmp45");
					HX_STACK_LINE(342)
					tmp26 = (tmp41 < tmp45);
				}
				else{
					HX_STACK_LINE(342)
					tmp26 = false;
				}
			}
			else{
				HX_STACK_LINE(342)
				tmp26 = true;
			}
		}
		else{
			HX_STACK_LINE(342)
			tmp26 = false;
		}
		HX_STACK_LINE(342)
		bool tmp27 = !(tmp26);		HX_STACK_VAR(tmp27,"tmp27");
		HX_STACK_LINE(342)
		if ((tmp27)){
			HX_STACK_LINE(344)
			Float tmp28 = this->__positionX;		HX_STACK_VAR(tmp28,"tmp28");
			HX_STACK_LINE(344)
			Float tmp29 = ((int)2 * tmp28);		HX_STACK_VAR(tmp29,"tmp29");
			HX_STACK_LINE(344)
			Float tmp30 = ((int)4 * controlY1);		HX_STACK_VAR(tmp30,"tmp30");
			HX_STACK_LINE(344)
			Float tmp31 = (tmp29 - tmp30);		HX_STACK_VAR(tmp31,"tmp31");
			HX_STACK_LINE(344)
			Float tmp32 = ((int)2 * controlY2);		HX_STACK_VAR(tmp32,"tmp32");
			HX_STACK_LINE(344)
			Float tmp33 = (tmp31 + tmp32);		HX_STACK_VAR(tmp33,"tmp33");
			HX_STACK_LINE(344)
			Float u = tmp33;		HX_STACK_VAR(u,"u");
			HX_STACK_LINE(345)
			Float tmp34 = controlY1;		HX_STACK_VAR(tmp34,"tmp34");
			HX_STACK_LINE(345)
			Float tmp35 = this->__positionX;		HX_STACK_VAR(tmp35,"tmp35");
			HX_STACK_LINE(345)
			Float tmp36 = (tmp34 - tmp35);		HX_STACK_VAR(tmp36,"tmp36");
			HX_STACK_LINE(345)
			Float v = tmp36;		HX_STACK_VAR(v,"v");
			HX_STACK_LINE(346)
			Float tmp37 = this->__positionX;		HX_STACK_VAR(tmp37,"tmp37");
			HX_STACK_LINE(346)
			Float tmp38 = -(tmp37);		HX_STACK_VAR(tmp38,"tmp38");
			HX_STACK_LINE(346)
			Float tmp39 = ((int)3 * controlY1);		HX_STACK_VAR(tmp39,"tmp39");
			HX_STACK_LINE(346)
			Float tmp40 = (tmp38 + tmp39);		HX_STACK_VAR(tmp40,"tmp40");
			HX_STACK_LINE(346)
			Float tmp41 = anchorY;		HX_STACK_VAR(tmp41,"tmp41");
			HX_STACK_LINE(346)
			Float tmp42 = (tmp40 + tmp41);		HX_STACK_VAR(tmp42,"tmp42");
			HX_STACK_LINE(346)
			Float tmp43 = ((int)3 * controlY2);		HX_STACK_VAR(tmp43,"tmp43");
			HX_STACK_LINE(346)
			Float tmp44 = (tmp42 - tmp43);		HX_STACK_VAR(tmp44,"tmp44");
			HX_STACK_LINE(346)
			Float w = tmp44;		HX_STACK_VAR(w,"w");
			HX_STACK_LINE(348)
			Float tmp45 = u;		HX_STACK_VAR(tmp45,"tmp45");
			HX_STACK_LINE(348)
			Float tmp46 = -(tmp45);		HX_STACK_VAR(tmp46,"tmp46");
			HX_STACK_LINE(348)
			Float tmp47 = (u * u);		HX_STACK_VAR(tmp47,"tmp47");
			HX_STACK_LINE(348)
			Float tmp48 = ((int)4 * v);		HX_STACK_VAR(tmp48,"tmp48");
			HX_STACK_LINE(348)
			Float tmp49 = w;		HX_STACK_VAR(tmp49,"tmp49");
			HX_STACK_LINE(348)
			Float tmp50 = (tmp48 * tmp49);		HX_STACK_VAR(tmp50,"tmp50");
			HX_STACK_LINE(348)
			Float tmp51 = (tmp47 - tmp50);		HX_STACK_VAR(tmp51,"tmp51");
			HX_STACK_LINE(348)
			Float tmp52 = ::Math_obj::sqrt(tmp51);		HX_STACK_VAR(tmp52,"tmp52");
			HX_STACK_LINE(348)
			Float tmp53 = (tmp46 + tmp52);		HX_STACK_VAR(tmp53,"tmp53");
			HX_STACK_LINE(348)
			Float tmp54 = ((int)2 * w);		HX_STACK_VAR(tmp54,"tmp54");
			HX_STACK_LINE(348)
			Float tmp55 = (Float(tmp53) / Float(tmp54));		HX_STACK_VAR(tmp55,"tmp55");
			HX_STACK_LINE(348)
			Float t1 = tmp55;		HX_STACK_VAR(t1,"t1");
			HX_STACK_LINE(349)
			Float tmp56 = u;		HX_STACK_VAR(tmp56,"tmp56");
			HX_STACK_LINE(349)
			Float tmp57 = -(tmp56);		HX_STACK_VAR(tmp57,"tmp57");
			HX_STACK_LINE(349)
			Float tmp58 = (u * u);		HX_STACK_VAR(tmp58,"tmp58");
			HX_STACK_LINE(349)
			Float tmp59 = ((int)4 * v);		HX_STACK_VAR(tmp59,"tmp59");
			HX_STACK_LINE(349)
			Float tmp60 = w;		HX_STACK_VAR(tmp60,"tmp60");
			HX_STACK_LINE(349)
			Float tmp61 = (tmp59 * tmp60);		HX_STACK_VAR(tmp61,"tmp61");
			HX_STACK_LINE(349)
			Float tmp62 = (tmp58 - tmp61);		HX_STACK_VAR(tmp62,"tmp62");
			HX_STACK_LINE(349)
			Float tmp63 = ::Math_obj::sqrt(tmp62);		HX_STACK_VAR(tmp63,"tmp63");
			HX_STACK_LINE(349)
			Float tmp64 = (tmp57 - tmp63);		HX_STACK_VAR(tmp64,"tmp64");
			HX_STACK_LINE(349)
			Float tmp65 = ((int)2 * w);		HX_STACK_VAR(tmp65,"tmp65");
			HX_STACK_LINE(349)
			Float tmp66 = (Float(tmp64) / Float(tmp65));		HX_STACK_VAR(tmp66,"tmp66");
			HX_STACK_LINE(349)
			Float t2 = tmp66;		HX_STACK_VAR(t2,"t2");
			HX_STACK_LINE(351)
			bool tmp67 = (t1 > (int)0);		HX_STACK_VAR(tmp67,"tmp67");
			HX_STACK_LINE(351)
			bool tmp68;		HX_STACK_VAR(tmp68,"tmp68");
			HX_STACK_LINE(351)
			if ((tmp67)){
				HX_STACK_LINE(351)
				tmp68 = (t1 < (int)1);
			}
			else{
				HX_STACK_LINE(351)
				tmp68 = false;
			}
			HX_STACK_LINE(351)
			if ((tmp68)){
				HX_STACK_LINE(353)
				Float tmp69 = t1;		HX_STACK_VAR(tmp69,"tmp69");
				HX_STACK_LINE(353)
				Float tmp70 = this->__positionX;		HX_STACK_VAR(tmp70,"tmp70");
				HX_STACK_LINE(353)
				Float tmp71 = controlY1;		HX_STACK_VAR(tmp71,"tmp71");
				HX_STACK_LINE(353)
				Float tmp72 = controlY2;		HX_STACK_VAR(tmp72,"tmp72");
				HX_STACK_LINE(353)
				Float tmp73 = anchorY;		HX_STACK_VAR(tmp73,"tmp73");
				HX_STACK_LINE(353)
				Float tmp74 = this->__calculateBezierCubicPoint(tmp69,tmp70,tmp71,tmp72,tmp73);		HX_STACK_VAR(tmp74,"tmp74");
				HX_STACK_LINE(353)
				iy1 = tmp74;
			}
			HX_STACK_LINE(357)
			bool tmp69 = (t2 > (int)0);		HX_STACK_VAR(tmp69,"tmp69");
			HX_STACK_LINE(357)
			bool tmp70;		HX_STACK_VAR(tmp70,"tmp70");
			HX_STACK_LINE(357)
			if ((tmp69)){
				HX_STACK_LINE(357)
				tmp70 = (t2 < (int)1);
			}
			else{
				HX_STACK_LINE(357)
				tmp70 = false;
			}
			HX_STACK_LINE(357)
			if ((tmp70)){
				HX_STACK_LINE(359)
				Float tmp71 = t2;		HX_STACK_VAR(tmp71,"tmp71");
				HX_STACK_LINE(359)
				Float tmp72 = this->__positionX;		HX_STACK_VAR(tmp72,"tmp72");
				HX_STACK_LINE(359)
				Float tmp73 = controlY1;		HX_STACK_VAR(tmp73,"tmp73");
				HX_STACK_LINE(359)
				Float tmp74 = controlY2;		HX_STACK_VAR(tmp74,"tmp74");
				HX_STACK_LINE(359)
				Float tmp75 = anchorY;		HX_STACK_VAR(tmp75,"tmp75");
				HX_STACK_LINE(359)
				Float tmp76 = this->__calculateBezierCubicPoint(tmp71,tmp72,tmp73,tmp74,tmp75);		HX_STACK_VAR(tmp76,"tmp76");
				HX_STACK_LINE(359)
				iy2 = tmp76;
			}
		}
		HX_STACK_LINE(365)
		Float tmp28 = ix1;		HX_STACK_VAR(tmp28,"tmp28");
		HX_STACK_LINE(365)
		Float tmp29 = this->__halfStrokeWidth;		HX_STACK_VAR(tmp29,"tmp29");
		HX_STACK_LINE(365)
		Float tmp30 = (tmp28 - tmp29);		HX_STACK_VAR(tmp30,"tmp30");
		HX_STACK_LINE(365)
		Float tmp31 = iy1;		HX_STACK_VAR(tmp31,"tmp31");
		HX_STACK_LINE(365)
		Float tmp32 = this->__halfStrokeWidth;		HX_STACK_VAR(tmp32,"tmp32");
		HX_STACK_LINE(365)
		Float tmp33 = (tmp31 - tmp32);		HX_STACK_VAR(tmp33,"tmp33");
		HX_STACK_LINE(365)
		this->__inflateBounds(tmp30,tmp33);
		HX_STACK_LINE(366)
		Float tmp34 = ix1;		HX_STACK_VAR(tmp34,"tmp34");
		HX_STACK_LINE(366)
		Float tmp35 = this->__halfStrokeWidth;		HX_STACK_VAR(tmp35,"tmp35");
		HX_STACK_LINE(366)
		Float tmp36 = (tmp34 + tmp35);		HX_STACK_VAR(tmp36,"tmp36");
		HX_STACK_LINE(366)
		Float tmp37 = iy1;		HX_STACK_VAR(tmp37,"tmp37");
		HX_STACK_LINE(366)
		Float tmp38 = this->__halfStrokeWidth;		HX_STACK_VAR(tmp38,"tmp38");
		HX_STACK_LINE(366)
		Float tmp39 = (tmp37 + tmp38);		HX_STACK_VAR(tmp39,"tmp39");
		HX_STACK_LINE(366)
		this->__inflateBounds(tmp36,tmp39);
		HX_STACK_LINE(367)
		Float tmp40 = ix2;		HX_STACK_VAR(tmp40,"tmp40");
		HX_STACK_LINE(367)
		Float tmp41 = this->__halfStrokeWidth;		HX_STACK_VAR(tmp41,"tmp41");
		HX_STACK_LINE(367)
		Float tmp42 = (tmp40 - tmp41);		HX_STACK_VAR(tmp42,"tmp42");
		HX_STACK_LINE(367)
		Float tmp43 = iy2;		HX_STACK_VAR(tmp43,"tmp43");
		HX_STACK_LINE(367)
		Float tmp44 = this->__halfStrokeWidth;		HX_STACK_VAR(tmp44,"tmp44");
		HX_STACK_LINE(367)
		Float tmp45 = (tmp43 - tmp44);		HX_STACK_VAR(tmp45,"tmp45");
		HX_STACK_LINE(367)
		this->__inflateBounds(tmp42,tmp45);
		HX_STACK_LINE(368)
		Float tmp46 = ix2;		HX_STACK_VAR(tmp46,"tmp46");
		HX_STACK_LINE(368)
		Float tmp47 = this->__halfStrokeWidth;		HX_STACK_VAR(tmp47,"tmp47");
		HX_STACK_LINE(368)
		Float tmp48 = (tmp46 + tmp47);		HX_STACK_VAR(tmp48,"tmp48");
		HX_STACK_LINE(368)
		Float tmp49 = iy2;		HX_STACK_VAR(tmp49,"tmp49");
		HX_STACK_LINE(368)
		Float tmp50 = this->__halfStrokeWidth;		HX_STACK_VAR(tmp50,"tmp50");
		HX_STACK_LINE(368)
		Float tmp51 = (tmp49 + tmp50);		HX_STACK_VAR(tmp51,"tmp51");
		HX_STACK_LINE(368)
		this->__inflateBounds(tmp48,tmp51);
		HX_STACK_LINE(370)
		this->__positionX = anchorX;
		HX_STACK_LINE(371)
		this->__positionY = anchorY;
		HX_STACK_LINE(373)
		Float tmp52 = controlX1;		HX_STACK_VAR(tmp52,"tmp52");
		HX_STACK_LINE(373)
		Float tmp53 = controlY1;		HX_STACK_VAR(tmp53,"tmp53");
		HX_STACK_LINE(373)
		Float tmp54 = controlX2;		HX_STACK_VAR(tmp54,"tmp54");
		HX_STACK_LINE(373)
		Float tmp55 = controlY2;		HX_STACK_VAR(tmp55,"tmp55");
		HX_STACK_LINE(373)
		Float tmp56 = anchorX;		HX_STACK_VAR(tmp56,"tmp56");
		HX_STACK_LINE(373)
		Float tmp57 = anchorY;		HX_STACK_VAR(tmp57,"tmp57");
		HX_STACK_LINE(373)
		::openfl::display::DrawCommand tmp58 = ::openfl::display::DrawCommand_obj::CubicCurveTo(tmp52,tmp53,tmp54,tmp55,tmp56,tmp57);		HX_STACK_VAR(tmp58,"tmp58");
		HX_STACK_LINE(373)
		this->__commands->push(tmp58);
		HX_STACK_LINE(375)
		this->__hardware = false;
		HX_STACK_LINE(376)
		this->set___dirty(true);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC6(Graphics_obj,cubicCurveTo,(void))

Void Graphics_obj::curveTo( Float controlX,Float controlY,Float anchorX,Float anchorY){
{
		HX_STACK_FRAME("openfl.display.Graphics","curveTo",0x89f305d1,"openfl.display.Graphics.curveTo","openfl/display/Graphics.hx",411,0x8d299ce7)
		HX_STACK_THIS(this)
		HX_STACK_ARG(controlX,"controlX")
		HX_STACK_ARG(controlY,"controlY")
		HX_STACK_ARG(anchorX,"anchorX")
		HX_STACK_ARG(anchorY,"anchorY")
		HX_STACK_LINE(413)
		Float tmp = this->__positionX;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(413)
		Float tmp1 = this->__halfStrokeWidth;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(413)
		Float tmp2 = (tmp - tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(413)
		Float tmp3 = this->__positionY;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(413)
		Float tmp4 = this->__halfStrokeWidth;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(413)
		Float tmp5 = (tmp3 - tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(413)
		this->__inflateBounds(tmp2,tmp5);
		HX_STACK_LINE(414)
		Float tmp6 = this->__positionX;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(414)
		Float tmp7 = this->__halfStrokeWidth;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(414)
		Float tmp8 = (tmp6 + tmp7);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(414)
		Float tmp9 = this->__positionY;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(414)
		Float tmp10 = this->__halfStrokeWidth;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(414)
		Float tmp11 = (tmp9 + tmp10);		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(414)
		this->__inflateBounds(tmp8,tmp11);
		HX_STACK_LINE(416)
		Float ix;		HX_STACK_VAR(ix,"ix");
		HX_STACK_LINE(416)
		Float iy;		HX_STACK_VAR(iy,"iy");
		HX_STACK_LINE(418)
		bool tmp12 = (controlX < anchorX);		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(418)
		bool tmp13 = tmp12;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(418)
		bool tmp14;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(418)
		if ((tmp13)){
			HX_STACK_LINE(418)
			Float tmp15 = controlX;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(418)
			Float tmp16 = this->__positionX;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(418)
			Float tmp17 = tmp16;		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(418)
			Float tmp18 = tmp17;		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(418)
			tmp14 = (tmp15 > tmp18);
		}
		else{
			HX_STACK_LINE(418)
			tmp14 = false;
		}
		HX_STACK_LINE(418)
		bool tmp15 = !(tmp14);		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(418)
		bool tmp16;		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(418)
		if ((tmp15)){
			HX_STACK_LINE(418)
			bool tmp17 = (controlX > anchorX);		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(418)
			bool tmp18 = tmp17;		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(418)
			bool tmp19 = tmp18;		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(418)
			if ((tmp19)){
				HX_STACK_LINE(418)
				Float tmp20 = controlX;		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(418)
				Float tmp21 = this->__positionX;		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(418)
				Float tmp22 = tmp21;		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(418)
				Float tmp23 = tmp22;		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(418)
				tmp16 = (tmp20 < tmp23);
			}
			else{
				HX_STACK_LINE(418)
				tmp16 = false;
			}
		}
		else{
			HX_STACK_LINE(418)
			tmp16 = true;
		}
		HX_STACK_LINE(418)
		if ((tmp16)){
			HX_STACK_LINE(420)
			ix = anchorX;
		}
		else{
			HX_STACK_LINE(424)
			Float tmp17 = this->__positionX;		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(424)
			Float tmp18 = controlX;		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(424)
			Float tmp19 = (tmp17 - tmp18);		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(424)
			Float tmp20 = this->__positionX;		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(424)
			Float tmp21 = ((int)2 * controlX);		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(424)
			Float tmp22 = (tmp20 - tmp21);		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(424)
			Float tmp23 = anchorX;		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(424)
			Float tmp24 = (tmp22 + tmp23);		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(424)
			Float tmp25 = (Float(tmp19) / Float(tmp24));		HX_STACK_VAR(tmp25,"tmp25");
			HX_STACK_LINE(424)
			Float tx = tmp25;		HX_STACK_VAR(tx,"tx");
			HX_STACK_LINE(425)
			Float tmp26 = tx;		HX_STACK_VAR(tmp26,"tmp26");
			HX_STACK_LINE(425)
			Float tmp27 = this->__positionX;		HX_STACK_VAR(tmp27,"tmp27");
			HX_STACK_LINE(425)
			Float tmp28 = controlX;		HX_STACK_VAR(tmp28,"tmp28");
			HX_STACK_LINE(425)
			Float tmp29 = anchorX;		HX_STACK_VAR(tmp29,"tmp29");
			HX_STACK_LINE(425)
			Float tmp30 = this->__calculateBezierQuadPoint(tmp26,tmp27,tmp28,tmp29);		HX_STACK_VAR(tmp30,"tmp30");
			HX_STACK_LINE(425)
			ix = tmp30;
		}
		HX_STACK_LINE(429)
		bool tmp17 = (controlY < anchorY);		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(429)
		bool tmp18 = tmp17;		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(429)
		bool tmp19;		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(429)
		if ((tmp18)){
			HX_STACK_LINE(429)
			Float tmp20 = controlY;		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(429)
			Float tmp21 = this->__positionY;		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(429)
			Float tmp22 = tmp21;		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(429)
			Float tmp23 = tmp22;		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(429)
			tmp19 = (tmp20 > tmp23);
		}
		else{
			HX_STACK_LINE(429)
			tmp19 = false;
		}
		HX_STACK_LINE(429)
		bool tmp20 = !(tmp19);		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(429)
		bool tmp21;		HX_STACK_VAR(tmp21,"tmp21");
		HX_STACK_LINE(429)
		if ((tmp20)){
			HX_STACK_LINE(429)
			bool tmp22 = (controlY > anchorY);		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(429)
			bool tmp23 = tmp22;		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(429)
			bool tmp24 = tmp23;		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(429)
			if ((tmp24)){
				HX_STACK_LINE(429)
				Float tmp25 = controlY;		HX_STACK_VAR(tmp25,"tmp25");
				HX_STACK_LINE(429)
				Float tmp26 = this->__positionY;		HX_STACK_VAR(tmp26,"tmp26");
				HX_STACK_LINE(429)
				Float tmp27 = tmp26;		HX_STACK_VAR(tmp27,"tmp27");
				HX_STACK_LINE(429)
				Float tmp28 = tmp27;		HX_STACK_VAR(tmp28,"tmp28");
				HX_STACK_LINE(429)
				tmp21 = (tmp25 < tmp28);
			}
			else{
				HX_STACK_LINE(429)
				tmp21 = false;
			}
		}
		else{
			HX_STACK_LINE(429)
			tmp21 = true;
		}
		HX_STACK_LINE(429)
		if ((tmp21)){
			HX_STACK_LINE(431)
			iy = anchorY;
		}
		else{
			HX_STACK_LINE(435)
			Float tmp22 = this->__positionY;		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(435)
			Float tmp23 = controlY;		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(435)
			Float tmp24 = (tmp22 - tmp23);		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(435)
			Float tmp25 = this->__positionY;		HX_STACK_VAR(tmp25,"tmp25");
			HX_STACK_LINE(435)
			Float tmp26 = ((int)2 * controlY);		HX_STACK_VAR(tmp26,"tmp26");
			HX_STACK_LINE(435)
			Float tmp27 = (tmp25 - tmp26);		HX_STACK_VAR(tmp27,"tmp27");
			HX_STACK_LINE(435)
			Float tmp28 = anchorY;		HX_STACK_VAR(tmp28,"tmp28");
			HX_STACK_LINE(435)
			Float tmp29 = (tmp27 + tmp28);		HX_STACK_VAR(tmp29,"tmp29");
			HX_STACK_LINE(435)
			Float tmp30 = (Float(tmp24) / Float(tmp29));		HX_STACK_VAR(tmp30,"tmp30");
			HX_STACK_LINE(435)
			Float ty = tmp30;		HX_STACK_VAR(ty,"ty");
			HX_STACK_LINE(436)
			Float tmp31 = ty;		HX_STACK_VAR(tmp31,"tmp31");
			HX_STACK_LINE(436)
			Float tmp32 = this->__positionY;		HX_STACK_VAR(tmp32,"tmp32");
			HX_STACK_LINE(436)
			Float tmp33 = controlY;		HX_STACK_VAR(tmp33,"tmp33");
			HX_STACK_LINE(436)
			Float tmp34 = anchorY;		HX_STACK_VAR(tmp34,"tmp34");
			HX_STACK_LINE(436)
			Float tmp35 = this->__calculateBezierQuadPoint(tmp31,tmp32,tmp33,tmp34);		HX_STACK_VAR(tmp35,"tmp35");
			HX_STACK_LINE(436)
			iy = tmp35;
		}
		HX_STACK_LINE(440)
		Float tmp22 = ix;		HX_STACK_VAR(tmp22,"tmp22");
		HX_STACK_LINE(440)
		Float tmp23 = this->__halfStrokeWidth;		HX_STACK_VAR(tmp23,"tmp23");
		HX_STACK_LINE(440)
		Float tmp24 = (tmp22 - tmp23);		HX_STACK_VAR(tmp24,"tmp24");
		HX_STACK_LINE(440)
		Float tmp25 = iy;		HX_STACK_VAR(tmp25,"tmp25");
		HX_STACK_LINE(440)
		Float tmp26 = this->__halfStrokeWidth;		HX_STACK_VAR(tmp26,"tmp26");
		HX_STACK_LINE(440)
		Float tmp27 = (tmp25 - tmp26);		HX_STACK_VAR(tmp27,"tmp27");
		HX_STACK_LINE(440)
		this->__inflateBounds(tmp24,tmp27);
		HX_STACK_LINE(441)
		Float tmp28 = ix;		HX_STACK_VAR(tmp28,"tmp28");
		HX_STACK_LINE(441)
		Float tmp29 = this->__halfStrokeWidth;		HX_STACK_VAR(tmp29,"tmp29");
		HX_STACK_LINE(441)
		Float tmp30 = (tmp28 + tmp29);		HX_STACK_VAR(tmp30,"tmp30");
		HX_STACK_LINE(441)
		Float tmp31 = iy;		HX_STACK_VAR(tmp31,"tmp31");
		HX_STACK_LINE(441)
		Float tmp32 = this->__halfStrokeWidth;		HX_STACK_VAR(tmp32,"tmp32");
		HX_STACK_LINE(441)
		Float tmp33 = (tmp31 + tmp32);		HX_STACK_VAR(tmp33,"tmp33");
		HX_STACK_LINE(441)
		this->__inflateBounds(tmp30,tmp33);
		HX_STACK_LINE(443)
		this->__positionX = anchorX;
		HX_STACK_LINE(444)
		this->__positionY = anchorY;
		HX_STACK_LINE(446)
		Float tmp34 = controlX;		HX_STACK_VAR(tmp34,"tmp34");
		HX_STACK_LINE(446)
		Float tmp35 = controlY;		HX_STACK_VAR(tmp35,"tmp35");
		HX_STACK_LINE(446)
		Float tmp36 = anchorX;		HX_STACK_VAR(tmp36,"tmp36");
		HX_STACK_LINE(446)
		Float tmp37 = anchorY;		HX_STACK_VAR(tmp37,"tmp37");
		HX_STACK_LINE(446)
		::openfl::display::DrawCommand tmp38 = ::openfl::display::DrawCommand_obj::CurveTo(tmp34,tmp35,tmp36,tmp37);		HX_STACK_VAR(tmp38,"tmp38");
		HX_STACK_LINE(446)
		this->__commands->push(tmp38);
		HX_STACK_LINE(448)
		this->__hardware = false;
		HX_STACK_LINE(449)
		this->set___dirty(true);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC4(Graphics_obj,curveTo,(void))

Void Graphics_obj::drawCircle( Float x,Float y,Float radius){
{
		HX_STACK_FRAME("openfl.display.Graphics","drawCircle",0xee64ddcd,"openfl.display.Graphics.drawCircle","openfl/display/Graphics.hx",468,0x8d299ce7)
		HX_STACK_THIS(this)
		HX_STACK_ARG(x,"x")
		HX_STACK_ARG(y,"y")
		HX_STACK_ARG(radius,"radius")
		HX_STACK_LINE(470)
		bool tmp = (radius <= (int)0);		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(470)
		if ((tmp)){
			HX_STACK_LINE(470)
			return null();
		}
		HX_STACK_LINE(472)
		Float tmp1 = (x - radius);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(472)
		Float tmp2 = this->__halfStrokeWidth;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(472)
		Float tmp3 = (tmp1 - tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(472)
		Float tmp4 = (y - radius);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(472)
		Float tmp5 = this->__halfStrokeWidth;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(472)
		Float tmp6 = (tmp4 - tmp5);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(472)
		this->__inflateBounds(tmp3,tmp6);
		HX_STACK_LINE(473)
		Float tmp7 = (x + radius);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(473)
		Float tmp8 = this->__halfStrokeWidth;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(473)
		Float tmp9 = (tmp7 + tmp8);		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(473)
		Float tmp10 = (y + radius);		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(473)
		Float tmp11 = this->__halfStrokeWidth;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(473)
		Float tmp12 = (tmp10 + tmp11);		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(473)
		this->__inflateBounds(tmp9,tmp12);
		HX_STACK_LINE(475)
		Float tmp13 = x;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(475)
		Float tmp14 = y;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(475)
		Float tmp15 = radius;		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(475)
		::openfl::display::DrawCommand tmp16 = ::openfl::display::DrawCommand_obj::DrawCircle(tmp13,tmp14,tmp15);		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(475)
		this->__commands->push(tmp16);
		HX_STACK_LINE(477)
		this->__hardware = false;
		HX_STACK_LINE(478)
		this->set___dirty(true);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(Graphics_obj,drawCircle,(void))

Void Graphics_obj::drawEllipse( Float x,Float y,Float width,Float height){
{
		HX_STACK_FRAME("openfl.display.Graphics","drawEllipse",0xbfad1a81,"openfl.display.Graphics.drawEllipse","openfl/display/Graphics.hx",499,0x8d299ce7)
		HX_STACK_THIS(this)
		HX_STACK_ARG(x,"x")
		HX_STACK_ARG(y,"y")
		HX_STACK_ARG(width,"width")
		HX_STACK_ARG(height,"height")
		HX_STACK_LINE(501)
		bool tmp = (width <= (int)0);		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(501)
		bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(501)
		bool tmp2;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(501)
		if ((tmp1)){
			HX_STACK_LINE(501)
			tmp2 = (height <= (int)0);
		}
		else{
			HX_STACK_LINE(501)
			tmp2 = true;
		}
		HX_STACK_LINE(501)
		if ((tmp2)){
			HX_STACK_LINE(501)
			return null();
		}
		HX_STACK_LINE(503)
		Float tmp3 = x;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(503)
		Float tmp4 = this->__halfStrokeWidth;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(503)
		Float tmp5 = (tmp3 - tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(503)
		Float tmp6 = y;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(503)
		Float tmp7 = this->__halfStrokeWidth;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(503)
		Float tmp8 = (tmp6 - tmp7);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(503)
		this->__inflateBounds(tmp5,tmp8);
		HX_STACK_LINE(504)
		Float tmp9 = (x + width);		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(504)
		Float tmp10 = this->__halfStrokeWidth;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(504)
		Float tmp11 = (tmp9 + tmp10);		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(504)
		Float tmp12 = (y + height);		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(504)
		Float tmp13 = this->__halfStrokeWidth;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(504)
		Float tmp14 = (tmp12 + tmp13);		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(504)
		this->__inflateBounds(tmp11,tmp14);
		HX_STACK_LINE(506)
		Float tmp15 = x;		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(506)
		Float tmp16 = y;		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(506)
		Float tmp17 = width;		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(506)
		Float tmp18 = height;		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(506)
		::openfl::display::DrawCommand tmp19 = ::openfl::display::DrawCommand_obj::DrawEllipse(tmp15,tmp16,tmp17,tmp18);		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(506)
		this->__commands->push(tmp19);
		HX_STACK_LINE(508)
		this->__hardware = false;
		HX_STACK_LINE(509)
		this->set___dirty(true);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC4(Graphics_obj,drawEllipse,(void))

Void Graphics_obj::drawGraphicsData( Array< ::openfl::display::IGraphicsData > graphicsData){
{
		HX_STACK_FRAME("openfl.display.Graphics","drawGraphicsData",0x60ea9412,"openfl.display.Graphics.drawGraphicsData","openfl/display/Graphics.hx",526,0x8d299ce7)
		HX_STACK_THIS(this)
		HX_STACK_ARG(graphicsData,"graphicsData")
		HX_STACK_LINE(528)
		::openfl::display::GraphicsSolidFill fill;		HX_STACK_VAR(fill,"fill");
		HX_STACK_LINE(529)
		::openfl::display::GraphicsBitmapFill bitmapFill;		HX_STACK_VAR(bitmapFill,"bitmapFill");
		HX_STACK_LINE(530)
		::openfl::display::GraphicsGradientFill gradientFill;		HX_STACK_VAR(gradientFill,"gradientFill");
		HX_STACK_LINE(531)
		::openfl::display::GraphicsStroke stroke;		HX_STACK_VAR(stroke,"stroke");
		HX_STACK_LINE(532)
		::openfl::display::GraphicsPath path;		HX_STACK_VAR(path,"path");
		HX_STACK_LINE(534)
		{
			HX_STACK_LINE(534)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(534)
			while((true)){
				HX_STACK_LINE(534)
				int tmp = _g;		HX_STACK_VAR(tmp,"tmp");
				HX_STACK_LINE(534)
				int tmp1 = graphicsData->length;		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(534)
				bool tmp2 = (tmp < tmp1);		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(534)
				bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(534)
				if ((tmp3)){
					HX_STACK_LINE(534)
					break;
				}
				HX_STACK_LINE(534)
				::openfl::display::IGraphicsData tmp4 = graphicsData->__get(_g);		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(534)
				::openfl::display::IGraphicsData graphics = tmp4;		HX_STACK_VAR(graphics,"graphics");
				HX_STACK_LINE(534)
				++(_g);
				HX_STACK_LINE(536)
				::openfl::display::IGraphicsData tmp5 = graphics;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(536)
				bool tmp6 = ::Std_obj::is(tmp5,hx::ClassOf< ::openfl::display::GraphicsSolidFill >());		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(536)
				if ((tmp6)){
					HX_STACK_LINE(538)
					fill = ((::openfl::display::GraphicsSolidFill)(graphics));
					HX_STACK_LINE(539)
					int tmp7 = fill->color;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(539)
					Float tmp8 = fill->alpha;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(539)
					this->beginFill(tmp7,tmp8);
				}
				else{
					HX_STACK_LINE(541)
					::openfl::display::IGraphicsData tmp7 = graphics;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(541)
					bool tmp8 = ::Std_obj::is(tmp7,hx::ClassOf< ::openfl::display::GraphicsBitmapFill >());		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(541)
					if ((tmp8)){
						HX_STACK_LINE(543)
						bitmapFill = ((::openfl::display::GraphicsBitmapFill)(graphics));
						HX_STACK_LINE(544)
						::openfl::display::BitmapData tmp9 = bitmapFill->bitmapData;		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(544)
						::openfl::geom::Matrix tmp10 = bitmapFill->matrix;		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(544)
						bool tmp11 = bitmapFill->repeat;		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(544)
						bool tmp12 = bitmapFill->smooth;		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(544)
						this->beginBitmapFill(tmp9,tmp10,tmp11,tmp12);
					}
					else{
						HX_STACK_LINE(546)
						::openfl::display::IGraphicsData tmp9 = graphics;		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(546)
						bool tmp10 = ::Std_obj::is(tmp9,hx::ClassOf< ::openfl::display::GraphicsGradientFill >());		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(546)
						if ((tmp10)){
							HX_STACK_LINE(548)
							gradientFill = ((::openfl::display::GraphicsGradientFill)(graphics));
							HX_STACK_LINE(549)
							::openfl::display::GradientType tmp11 = gradientFill->type;		HX_STACK_VAR(tmp11,"tmp11");
							HX_STACK_LINE(549)
							::openfl::geom::Matrix tmp12 = gradientFill->matrix;		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(549)
							::openfl::display::SpreadMethod tmp13 = gradientFill->spreadMethod;		HX_STACK_VAR(tmp13,"tmp13");
							HX_STACK_LINE(549)
							::openfl::display::InterpolationMethod tmp14 = gradientFill->interpolationMethod;		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(549)
							Float tmp15 = gradientFill->focalPointRatio;		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(549)
							this->beginGradientFill(tmp11,gradientFill->colors,gradientFill->alphas,gradientFill->ratios,tmp12,tmp13,tmp14,tmp15);
						}
						else{
							HX_STACK_LINE(551)
							::openfl::display::IGraphicsData tmp11 = graphics;		HX_STACK_VAR(tmp11,"tmp11");
							HX_STACK_LINE(551)
							bool tmp12 = ::Std_obj::is(tmp11,hx::ClassOf< ::openfl::display::GraphicsStroke >());		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(551)
							if ((tmp12)){
								HX_STACK_LINE(553)
								stroke = ((::openfl::display::GraphicsStroke)(graphics));
								HX_STACK_LINE(555)
								::openfl::display::IGraphicsFill tmp13 = stroke->fill;		HX_STACK_VAR(tmp13,"tmp13");
								HX_STACK_LINE(555)
								bool tmp14 = ::Std_obj::is(tmp13,hx::ClassOf< ::openfl::display::GraphicsSolidFill >());		HX_STACK_VAR(tmp14,"tmp14");
								HX_STACK_LINE(555)
								if ((tmp14)){
									HX_STACK_LINE(557)
									fill = ((::openfl::display::GraphicsSolidFill)(stroke->fill));
									HX_STACK_LINE(558)
									Float tmp15 = stroke->thickness;		HX_STACK_VAR(tmp15,"tmp15");
									HX_STACK_LINE(558)
									int tmp16 = fill->color;		HX_STACK_VAR(tmp16,"tmp16");
									HX_STACK_LINE(558)
									Float tmp17 = fill->alpha;		HX_STACK_VAR(tmp17,"tmp17");
									HX_STACK_LINE(558)
									bool tmp18 = stroke->pixelHinting;		HX_STACK_VAR(tmp18,"tmp18");
									HX_STACK_LINE(558)
									::openfl::display::LineScaleMode tmp19 = stroke->scaleMode;		HX_STACK_VAR(tmp19,"tmp19");
									HX_STACK_LINE(558)
									::openfl::display::CapsStyle tmp20 = stroke->caps;		HX_STACK_VAR(tmp20,"tmp20");
									HX_STACK_LINE(558)
									::openfl::display::JointStyle tmp21 = stroke->joints;		HX_STACK_VAR(tmp21,"tmp21");
									HX_STACK_LINE(558)
									Float tmp22 = stroke->miterLimit;		HX_STACK_VAR(tmp22,"tmp22");
									HX_STACK_LINE(558)
									this->lineStyle(tmp15,tmp16,tmp17,tmp18,tmp19,tmp20,tmp21,tmp22);
								}
								else{
									HX_STACK_LINE(562)
									Float tmp15 = stroke->thickness;		HX_STACK_VAR(tmp15,"tmp15");
									HX_STACK_LINE(562)
									bool tmp16 = stroke->pixelHinting;		HX_STACK_VAR(tmp16,"tmp16");
									HX_STACK_LINE(562)
									::openfl::display::LineScaleMode tmp17 = stroke->scaleMode;		HX_STACK_VAR(tmp17,"tmp17");
									HX_STACK_LINE(562)
									::openfl::display::CapsStyle tmp18 = stroke->caps;		HX_STACK_VAR(tmp18,"tmp18");
									HX_STACK_LINE(562)
									::openfl::display::JointStyle tmp19 = stroke->joints;		HX_STACK_VAR(tmp19,"tmp19");
									HX_STACK_LINE(562)
									Float tmp20 = stroke->miterLimit;		HX_STACK_VAR(tmp20,"tmp20");
									HX_STACK_LINE(562)
									this->lineStyle(tmp15,(int)0,(int)1,tmp16,tmp17,tmp18,tmp19,tmp20);
									HX_STACK_LINE(564)
									::openfl::display::IGraphicsFill tmp21 = stroke->fill;		HX_STACK_VAR(tmp21,"tmp21");
									HX_STACK_LINE(564)
									bool tmp22 = ::Std_obj::is(tmp21,hx::ClassOf< ::openfl::display::GraphicsBitmapFill >());		HX_STACK_VAR(tmp22,"tmp22");
									HX_STACK_LINE(564)
									if ((tmp22)){
										HX_STACK_LINE(566)
										bitmapFill = ((::openfl::display::GraphicsBitmapFill)(stroke->fill));
										HX_STACK_LINE(567)
										::openfl::display::BitmapData tmp23 = bitmapFill->bitmapData;		HX_STACK_VAR(tmp23,"tmp23");
										HX_STACK_LINE(567)
										::openfl::geom::Matrix tmp24 = bitmapFill->matrix;		HX_STACK_VAR(tmp24,"tmp24");
										HX_STACK_LINE(567)
										bool tmp25 = bitmapFill->repeat;		HX_STACK_VAR(tmp25,"tmp25");
										HX_STACK_LINE(567)
										bool tmp26 = bitmapFill->smooth;		HX_STACK_VAR(tmp26,"tmp26");
										HX_STACK_LINE(567)
										this->lineBitmapStyle(tmp23,tmp24,tmp25,tmp26);
									}
									else{
										HX_STACK_LINE(569)
										::openfl::display::IGraphicsFill tmp23 = stroke->fill;		HX_STACK_VAR(tmp23,"tmp23");
										HX_STACK_LINE(569)
										bool tmp24 = ::Std_obj::is(tmp23,hx::ClassOf< ::openfl::display::GraphicsGradientFill >());		HX_STACK_VAR(tmp24,"tmp24");
										HX_STACK_LINE(569)
										if ((tmp24)){
											HX_STACK_LINE(571)
											gradientFill = ((::openfl::display::GraphicsGradientFill)(stroke->fill));
											HX_STACK_LINE(572)
											::openfl::display::GradientType tmp25 = gradientFill->type;		HX_STACK_VAR(tmp25,"tmp25");
											HX_STACK_LINE(572)
											::openfl::geom::Matrix tmp26 = gradientFill->matrix;		HX_STACK_VAR(tmp26,"tmp26");
											HX_STACK_LINE(572)
											::openfl::display::SpreadMethod tmp27 = gradientFill->spreadMethod;		HX_STACK_VAR(tmp27,"tmp27");
											HX_STACK_LINE(572)
											::openfl::display::InterpolationMethod tmp28 = gradientFill->interpolationMethod;		HX_STACK_VAR(tmp28,"tmp28");
											HX_STACK_LINE(572)
											Float tmp29 = gradientFill->focalPointRatio;		HX_STACK_VAR(tmp29,"tmp29");
											HX_STACK_LINE(572)
											this->lineGradientStyle(tmp25,gradientFill->colors,gradientFill->alphas,gradientFill->ratios,tmp26,tmp27,tmp28,tmp29);
										}
									}
								}
							}
							else{
								HX_STACK_LINE(578)
								::openfl::display::IGraphicsData tmp13 = graphics;		HX_STACK_VAR(tmp13,"tmp13");
								HX_STACK_LINE(578)
								bool tmp14 = ::Std_obj::is(tmp13,hx::ClassOf< ::openfl::display::GraphicsPath >());		HX_STACK_VAR(tmp14,"tmp14");
								HX_STACK_LINE(578)
								if ((tmp14)){
									HX_STACK_LINE(580)
									path = ((::openfl::display::GraphicsPath)(graphics));
									HX_STACK_LINE(581)
									Array< int > tmp15 = path->commands;		HX_STACK_VAR(tmp15,"tmp15");
									HX_STACK_LINE(581)
									Array< Float > tmp16 = path->data;		HX_STACK_VAR(tmp16,"tmp16");
									HX_STACK_LINE(581)
									::openfl::display::GraphicsPathWinding tmp17 = path->winding;		HX_STACK_VAR(tmp17,"tmp17");
									HX_STACK_LINE(581)
									this->drawPath(tmp15,tmp16,tmp17);
								}
								else{
									HX_STACK_LINE(583)
									::openfl::display::IGraphicsData tmp15 = graphics;		HX_STACK_VAR(tmp15,"tmp15");
									HX_STACK_LINE(583)
									bool tmp16 = ::Std_obj::is(tmp15,hx::ClassOf< ::openfl::display::GraphicsEndFill >());		HX_STACK_VAR(tmp16,"tmp16");
									HX_STACK_LINE(583)
									if ((tmp16)){
										HX_STACK_LINE(585)
										this->endFill();
									}
								}
							}
						}
					}
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Graphics_obj,drawGraphicsData,(void))

Void Graphics_obj::drawPath( Array< int > commands,Array< Float > data,::openfl::display::GraphicsPathWinding winding){
{
		HX_STACK_FRAME("openfl.display.Graphics","drawPath",0xa0a1f822,"openfl.display.Graphics.drawPath","openfl/display/Graphics.hx",639,0x8d299ce7)
		HX_STACK_THIS(this)
		HX_STACK_ARG(commands,"commands")
		HX_STACK_ARG(data,"data")
		HX_STACK_ARG(winding,"winding")
		HX_STACK_LINE(641)
		int dataIndex = (int)0;		HX_STACK_VAR(dataIndex,"dataIndex");
		HX_STACK_LINE(643)
		{
			HX_STACK_LINE(643)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(643)
			while((true)){
				HX_STACK_LINE(643)
				int tmp = _g;		HX_STACK_VAR(tmp,"tmp");
				HX_STACK_LINE(643)
				int tmp1 = commands->length;		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(643)
				bool tmp2 = (tmp < tmp1);		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(643)
				bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(643)
				if ((tmp3)){
					HX_STACK_LINE(643)
					break;
				}
				HX_STACK_LINE(643)
				int tmp4 = commands->__get(_g);		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(643)
				Dynamic command = ((Dynamic)(tmp4));		HX_STACK_VAR(command,"command");
				HX_STACK_LINE(643)
				++(_g);
				HX_STACK_LINE(645)
				bool tmp5 = (command != null());		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(645)
				if ((tmp5)){
					HX_STACK_LINE(645)
					Dynamic tmp6 = command;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(645)
					Dynamic _switch_1 = (tmp6);
					if (  ( _switch_1==(int)1)){
						HX_STACK_LINE(649)
						Float tmp7 = data->__get(dataIndex);		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(649)
						Dynamic tmp8 = ((Dynamic)(tmp7));		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(649)
						int tmp9 = (dataIndex + (int)1);		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(649)
						Float tmp10 = data->__get(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(649)
						Dynamic tmp11 = ((Dynamic)(tmp10));		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(649)
						this->moveTo(tmp8,tmp11);
						HX_STACK_LINE(650)
						hx::AddEq(dataIndex,(int)2);
					}
					else if (  ( _switch_1==(int)2)){
						HX_STACK_LINE(654)
						Float tmp7 = data->__get(dataIndex);		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(654)
						Dynamic tmp8 = ((Dynamic)(tmp7));		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(654)
						int tmp9 = (dataIndex + (int)1);		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(654)
						Float tmp10 = data->__get(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(654)
						Dynamic tmp11 = ((Dynamic)(tmp10));		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(654)
						this->lineTo(tmp8,tmp11);
						HX_STACK_LINE(655)
						hx::AddEq(dataIndex,(int)2);
					}
					else if (  ( _switch_1==(int)4)){
						HX_STACK_LINE(659)
						int tmp7 = (dataIndex + (int)2);		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(659)
						Float tmp8 = data->__get(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(659)
						Dynamic tmp9 = ((Dynamic)(tmp8));		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(659)
						int tmp10 = (dataIndex + (int)3);		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(659)
						Float tmp11 = data->__get(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(659)
						Dynamic tmp12 = ((Dynamic)(tmp11));		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(659)
						this->moveTo(tmp9,tmp12);
						HX_STACK_LINE(659)
						break;
						HX_STACK_LINE(660)
						hx::AddEq(dataIndex,(int)4);
					}
					else if (  ( _switch_1==(int)5)){
						HX_STACK_LINE(664)
						int tmp7 = (dataIndex + (int)2);		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(664)
						Float tmp8 = data->__get(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(664)
						Dynamic tmp9 = ((Dynamic)(tmp8));		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(664)
						int tmp10 = (dataIndex + (int)3);		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(664)
						Float tmp11 = data->__get(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(664)
						Dynamic tmp12 = ((Dynamic)(tmp11));		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(664)
						this->lineTo(tmp9,tmp12);
						HX_STACK_LINE(664)
						break;
						HX_STACK_LINE(665)
						hx::AddEq(dataIndex,(int)4);
					}
					else if (  ( _switch_1==(int)3)){
						HX_STACK_LINE(669)
						Float tmp7 = data->__get(dataIndex);		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(669)
						Dynamic tmp8 = ((Dynamic)(tmp7));		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(669)
						int tmp9 = (dataIndex + (int)1);		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(669)
						Float tmp10 = data->__get(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(669)
						Dynamic tmp11 = ((Dynamic)(tmp10));		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(669)
						int tmp12 = (dataIndex + (int)2);		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(669)
						Float tmp13 = data->__get(tmp12);		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(669)
						Dynamic tmp14 = ((Dynamic)(tmp13));		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(669)
						int tmp15 = (dataIndex + (int)3);		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(669)
						Float tmp16 = data->__get(tmp15);		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(669)
						Dynamic tmp17 = ((Dynamic)(tmp16));		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(669)
						this->curveTo(tmp8,tmp11,tmp14,tmp17);
						HX_STACK_LINE(670)
						hx::AddEq(dataIndex,(int)4);
					}
					else if (  ( _switch_1==(int)6)){
						HX_STACK_LINE(674)
						Float tmp7 = data->__get(dataIndex);		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(674)
						Dynamic tmp8 = ((Dynamic)(tmp7));		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(674)
						int tmp9 = (dataIndex + (int)1);		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(674)
						Float tmp10 = data->__get(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(674)
						Dynamic tmp11 = ((Dynamic)(tmp10));		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(674)
						int tmp12 = (dataIndex + (int)2);		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(674)
						Float tmp13 = data->__get(tmp12);		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(674)
						Dynamic tmp14 = ((Dynamic)(tmp13));		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(674)
						int tmp15 = (dataIndex + (int)3);		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(674)
						Float tmp16 = data->__get(tmp15);		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(674)
						Dynamic tmp17 = ((Dynamic)(tmp16));		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(674)
						int tmp18 = (dataIndex + (int)4);		HX_STACK_VAR(tmp18,"tmp18");
						HX_STACK_LINE(674)
						Float tmp19 = data->__get(tmp18);		HX_STACK_VAR(tmp19,"tmp19");
						HX_STACK_LINE(674)
						Dynamic tmp20 = ((Dynamic)(tmp19));		HX_STACK_VAR(tmp20,"tmp20");
						HX_STACK_LINE(674)
						int tmp21 = (dataIndex + (int)5);		HX_STACK_VAR(tmp21,"tmp21");
						HX_STACK_LINE(674)
						Float tmp22 = data->__get(tmp21);		HX_STACK_VAR(tmp22,"tmp22");
						HX_STACK_LINE(674)
						Dynamic tmp23 = ((Dynamic)(tmp22));		HX_STACK_VAR(tmp23,"tmp23");
						HX_STACK_LINE(674)
						this->cubicCurveTo(tmp8,tmp11,tmp14,tmp17,tmp20,tmp23);
						HX_STACK_LINE(675)
						hx::AddEq(dataIndex,(int)6);
					}
					else  {
					}
;
;
				}
				else{
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(Graphics_obj,drawPath,(void))

Void Graphics_obj::drawRect( Float x,Float y,Float width,Float height){
{
		HX_STACK_FRAME("openfl.display.Graphics","drawRect",0xa1f75fa1,"openfl.display.Graphics.drawRect","openfl/display/Graphics.hx",703,0x8d299ce7)
		HX_STACK_THIS(this)
		HX_STACK_ARG(x,"x")
		HX_STACK_ARG(y,"y")
		HX_STACK_ARG(width,"width")
		HX_STACK_ARG(height,"height")
		HX_STACK_LINE(705)
		bool tmp = (width <= (int)0);		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(705)
		bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(705)
		bool tmp2;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(705)
		if ((tmp1)){
			HX_STACK_LINE(705)
			tmp2 = (height <= (int)0);
		}
		else{
			HX_STACK_LINE(705)
			tmp2 = true;
		}
		HX_STACK_LINE(705)
		if ((tmp2)){
			HX_STACK_LINE(705)
			return null();
		}
		HX_STACK_LINE(707)
		Float tmp3 = x;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(707)
		Float tmp4 = this->__halfStrokeWidth;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(707)
		Float tmp5 = (tmp3 - tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(707)
		Float tmp6 = y;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(707)
		Float tmp7 = this->__halfStrokeWidth;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(707)
		Float tmp8 = (tmp6 - tmp7);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(707)
		this->__inflateBounds(tmp5,tmp8);
		HX_STACK_LINE(708)
		Float tmp9 = (x + width);		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(708)
		Float tmp10 = this->__halfStrokeWidth;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(708)
		Float tmp11 = (tmp9 + tmp10);		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(708)
		Float tmp12 = (y + height);		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(708)
		Float tmp13 = this->__halfStrokeWidth;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(708)
		Float tmp14 = (tmp12 + tmp13);		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(708)
		this->__inflateBounds(tmp11,tmp14);
		HX_STACK_LINE(710)
		Float tmp15 = x;		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(710)
		Float tmp16 = y;		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(710)
		Float tmp17 = width;		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(710)
		Float tmp18 = height;		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(710)
		::openfl::display::DrawCommand tmp19 = ::openfl::display::DrawCommand_obj::DrawRect(tmp15,tmp16,tmp17,tmp18);		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(710)
		this->__commands->push(tmp19);
		HX_STACK_LINE(712)
		this->set___dirty(true);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC4(Graphics_obj,drawRect,(void))

Void Graphics_obj::drawRoundRect( Float x,Float y,Float width,Float height,Float rx,hx::Null< Float >  __o_ry){
Float ry = __o_ry.Default(-1);
	HX_STACK_FRAME("openfl.display.Graphics","drawRoundRect",0xb24e78f5,"openfl.display.Graphics.drawRoundRect","openfl/display/Graphics.hx",743,0x8d299ce7)
	HX_STACK_THIS(this)
	HX_STACK_ARG(x,"x")
	HX_STACK_ARG(y,"y")
	HX_STACK_ARG(width,"width")
	HX_STACK_ARG(height,"height")
	HX_STACK_ARG(rx,"rx")
	HX_STACK_ARG(ry,"ry")
{
		HX_STACK_LINE(745)
		bool tmp = (width <= (int)0);		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(745)
		bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(745)
		bool tmp2;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(745)
		if ((tmp1)){
			HX_STACK_LINE(745)
			tmp2 = (height <= (int)0);
		}
		else{
			HX_STACK_LINE(745)
			tmp2 = true;
		}
		HX_STACK_LINE(745)
		if ((tmp2)){
			HX_STACK_LINE(745)
			return null();
		}
		HX_STACK_LINE(747)
		Float tmp3 = x;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(747)
		Float tmp4 = this->__halfStrokeWidth;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(747)
		Float tmp5 = (tmp3 - tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(747)
		Float tmp6 = y;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(747)
		Float tmp7 = this->__halfStrokeWidth;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(747)
		Float tmp8 = (tmp6 - tmp7);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(747)
		this->__inflateBounds(tmp5,tmp8);
		HX_STACK_LINE(748)
		Float tmp9 = (x + width);		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(748)
		Float tmp10 = this->__halfStrokeWidth;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(748)
		Float tmp11 = (tmp9 + tmp10);		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(748)
		Float tmp12 = (y + height);		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(748)
		Float tmp13 = this->__halfStrokeWidth;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(748)
		Float tmp14 = (tmp12 + tmp13);		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(748)
		this->__inflateBounds(tmp11,tmp14);
		HX_STACK_LINE(750)
		Float tmp15 = x;		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(750)
		Float tmp16 = y;		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(750)
		Float tmp17 = width;		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(750)
		Float tmp18 = height;		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(750)
		Float tmp19 = rx;		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(750)
		Float tmp20 = ry;		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(750)
		::openfl::display::DrawCommand tmp21 = ::openfl::display::DrawCommand_obj::DrawRoundRect(tmp15,tmp16,tmp17,tmp18,tmp19,tmp20);		HX_STACK_VAR(tmp21,"tmp21");
		HX_STACK_LINE(750)
		this->__commands->push(tmp21);
		HX_STACK_LINE(752)
		this->__hardware = false;
		HX_STACK_LINE(753)
		this->set___dirty(true);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC6(Graphics_obj,drawRoundRect,(void))

Void Graphics_obj::drawRoundRectComplex( Float x,Float y,Float width,Float height,Float topLeftRadius,Float topRightRadius,Float bottomLeftRadius,Float bottomRightRadius){
{
		HX_STACK_FRAME("openfl.display.Graphics","drawRoundRectComplex",0x06fa4dbb,"openfl.display.Graphics.drawRoundRectComplex","openfl/display/Graphics.hx",760,0x8d299ce7)
		HX_STACK_THIS(this)
		HX_STACK_ARG(x,"x")
		HX_STACK_ARG(y,"y")
		HX_STACK_ARG(width,"width")
		HX_STACK_ARG(height,"height")
		HX_STACK_ARG(topLeftRadius,"topLeftRadius")
		HX_STACK_ARG(topRightRadius,"topRightRadius")
		HX_STACK_ARG(bottomLeftRadius,"bottomLeftRadius")
		HX_STACK_ARG(bottomRightRadius,"bottomRightRadius")
		HX_STACK_LINE(760)
		::openfl::Lib_obj::notImplemented(HX_HCSTRING("Graphics.drawRoundRectComplex","\x45","\xc0","\x68","\x95"));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC8(Graphics_obj,drawRoundRectComplex,(void))

Void Graphics_obj::drawTiles( ::openfl::display::Tilesheet sheet,Array< Float > tileData,hx::Null< bool >  __o_smooth,hx::Null< int >  __o_flags,hx::Null< int >  __o_count){
bool smooth = __o_smooth.Default(false);
int flags = __o_flags.Default(0);
int count = __o_count.Default(-1);
	HX_STACK_FRAME("openfl.display.Graphics","drawTiles",0x3ff51868,"openfl.display.Graphics.drawTiles","openfl/display/Graphics.hx",765,0x8d299ce7)
	HX_STACK_THIS(this)
	HX_STACK_ARG(sheet,"sheet")
	HX_STACK_ARG(tileData,"tileData")
	HX_STACK_ARG(smooth,"smooth")
	HX_STACK_ARG(flags,"flags")
	HX_STACK_ARG(count,"count")
{
		HX_STACK_LINE(770)
		this->__inflateBounds((int)0,(int)0);
		HX_STACK_LINE(771)
		::openfl::display::MovieClip tmp = ::openfl::Lib_obj::current;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(771)
		int tmp1 = tmp->stage->stageWidth;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(771)
		::openfl::display::MovieClip tmp2 = ::openfl::Lib_obj::current;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(771)
		int tmp3 = tmp2->stage->stageHeight;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(771)
		this->__inflateBounds(tmp1,tmp3);
		HX_STACK_LINE(773)
		::openfl::display::Tilesheet tmp4 = sheet;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(773)
		bool tmp5 = smooth;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(773)
		int tmp6 = flags;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(773)
		int tmp7 = count;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(773)
		::openfl::display::DrawCommand tmp8 = ::openfl::display::DrawCommand_obj::DrawTiles(tmp4,tileData,tmp5,tmp6,tmp7);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(773)
		this->__commands->push(tmp8);
		HX_STACK_LINE(775)
		this->set___dirty(true);
		HX_STACK_LINE(776)
		this->__visible = true;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC5(Graphics_obj,drawTiles,(void))

Void Graphics_obj::drawTriangles( Array< Float > vertices,Array< int > indices,Array< Float > uvtData,::openfl::display::TriangleCulling culling,Array< int > colors,hx::Null< int >  __o_blendMode){
int blendMode = __o_blendMode.Default(0);
	HX_STACK_FRAME("openfl.display.Graphics","drawTriangles",0xae0bf90e,"openfl.display.Graphics.drawTriangles","openfl/display/Graphics.hx",799,0x8d299ce7)
	HX_STACK_THIS(this)
	HX_STACK_ARG(vertices,"vertices")
	HX_STACK_ARG(indices,"indices")
	HX_STACK_ARG(uvtData,"uvtData")
	HX_STACK_ARG(culling,"culling")
	HX_STACK_ARG(colors,"colors")
	HX_STACK_ARG(blendMode,"blendMode")
{
		HX_STACK_LINE(801)
		int tmp = vertices->length;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(801)
		Float tmp1 = (Float(tmp) / Float((int)2));		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(801)
		int tmp2 = ::Std_obj::_int(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(801)
		int vlen = tmp2;		HX_STACK_VAR(vlen,"vlen");
		HX_STACK_LINE(803)
		bool tmp3 = (culling == null());		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(803)
		if ((tmp3)){
			HX_STACK_LINE(805)
			culling = ::openfl::display::TriangleCulling_obj::NONE;
		}
		HX_STACK_LINE(809)
		bool tmp4 = (indices == null());		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(809)
		if ((tmp4)){
			HX_STACK_LINE(811)
			int tmp5 = hx::Mod(vlen,(int)3);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(811)
			bool tmp6 = (tmp5 != (int)0);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(811)
			if ((tmp6)){
				HX_STACK_LINE(813)
				::openfl::errors::ArgumentError tmp7 = ::openfl::errors::ArgumentError_obj::__new(HX_HCSTRING("Not enough vertices to close a triangle.","\xfe","\xc6","\x58","\x0d"));		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(813)
				HX_STACK_DO_THROW(tmp7);
			}
			HX_STACK_LINE(817)
			Array< int > tmp7;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(817)
			{
				HX_STACK_LINE(817)
				Array< int > this1;		HX_STACK_VAR(this1,"this1");
				HX_STACK_LINE(817)
				this1 = Array_obj< int >::__new()->__SetSizeExact(null());
				HX_STACK_LINE(817)
				tmp7 = this1;
			}
			HX_STACK_LINE(817)
			indices = tmp7;
			HX_STACK_LINE(819)
			{
				HX_STACK_LINE(819)
				int _g = (int)0;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(819)
				while((true)){
					HX_STACK_LINE(819)
					bool tmp8 = (_g < vlen);		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(819)
					bool tmp9 = !(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(819)
					if ((tmp9)){
						HX_STACK_LINE(819)
						break;
					}
					HX_STACK_LINE(819)
					int tmp10 = (_g)++;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(819)
					int i = tmp10;		HX_STACK_VAR(i,"i");
					HX_STACK_LINE(821)
					int tmp11 = i;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(821)
					indices->push(tmp11);
				}
			}
		}
		HX_STACK_LINE(827)
		this->__inflateBounds((int)0,(int)0);
		HX_STACK_LINE(829)
		Float tmp5 = ::Math_obj::NEGATIVE_INFINITY;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(829)
		Float tmpx = tmp5;		HX_STACK_VAR(tmpx,"tmpx");
		HX_STACK_LINE(830)
		Float tmp6 = ::Math_obj::NEGATIVE_INFINITY;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(830)
		Float tmpy = tmp6;		HX_STACK_VAR(tmpy,"tmpy");
		HX_STACK_LINE(831)
		Float tmp7 = ::Math_obj::NEGATIVE_INFINITY;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(831)
		Float maxX = tmp7;		HX_STACK_VAR(maxX,"maxX");
		HX_STACK_LINE(832)
		Float tmp8 = ::Math_obj::NEGATIVE_INFINITY;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(832)
		Float maxY = tmp8;		HX_STACK_VAR(maxY,"maxY");
		HX_STACK_LINE(834)
		{
			HX_STACK_LINE(834)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(834)
			while((true)){
				HX_STACK_LINE(834)
				bool tmp9 = (_g < vlen);		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(834)
				bool tmp10 = !(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(834)
				if ((tmp10)){
					HX_STACK_LINE(834)
					break;
				}
				HX_STACK_LINE(834)
				int tmp11 = (_g)++;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(834)
				int i = tmp11;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(836)
				int tmp12 = (i * (int)2);		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(836)
				Float tmp13 = vertices->__get(tmp12);		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(836)
				tmpx = ((Dynamic)(tmp13));
				HX_STACK_LINE(837)
				int tmp14 = (i * (int)2);		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(837)
				int tmp15 = (tmp14 + (int)1);		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(837)
				Float tmp16 = vertices->__get(tmp15);		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(837)
				tmpy = ((Dynamic)(tmp16));
				HX_STACK_LINE(838)
				bool tmp17 = (maxX < tmpx);		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(838)
				if ((tmp17)){
					HX_STACK_LINE(838)
					maxX = tmpx;
				}
				HX_STACK_LINE(839)
				bool tmp18 = (maxY < tmpy);		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(839)
				if ((tmp18)){
					HX_STACK_LINE(839)
					maxY = tmpy;
				}
			}
		}
		HX_STACK_LINE(843)
		Float tmp9 = maxX;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(843)
		Float tmp10 = maxY;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(843)
		this->__inflateBounds(tmp9,tmp10);
		HX_STACK_LINE(844)
		Array< Float > tmp11 = vertices;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(844)
		Array< int > tmp12 = indices;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(844)
		Array< Float > tmp13 = uvtData;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(844)
		::openfl::display::TriangleCulling tmp14 = culling;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(844)
		Array< int > tmp15 = colors;		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(844)
		int tmp16 = blendMode;		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(844)
		::openfl::display::DrawCommand tmp17 = ::openfl::display::DrawCommand_obj::DrawTriangles(tmp11,tmp12,tmp13,tmp14,tmp15,tmp16);		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(844)
		this->__commands->push(tmp17);
		HX_STACK_LINE(846)
		this->set___dirty(true);
		HX_STACK_LINE(847)
		this->__visible = true;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC6(Graphics_obj,drawTriangles,(void))

Void Graphics_obj::endFill( ){
{
		HX_STACK_FRAME("openfl.display.Graphics","endFill",0xe14b2dc5,"openfl.display.Graphics.endFill","openfl/display/Graphics.hx",865,0x8d299ce7)
		HX_STACK_THIS(this)
		HX_STACK_LINE(865)
		this->__commands->push(::openfl::display::DrawCommand_obj::EndFill);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Graphics_obj,endFill,(void))

Void Graphics_obj::lineBitmapStyle( ::openfl::display::BitmapData bitmap,::openfl::geom::Matrix matrix,hx::Null< bool >  __o_repeat,hx::Null< bool >  __o_smooth){
bool repeat = __o_repeat.Default(true);
bool smooth = __o_smooth.Default(false);
	HX_STACK_FRAME("openfl.display.Graphics","lineBitmapStyle",0x0ce183f5,"openfl.display.Graphics.lineBitmapStyle","openfl/display/Graphics.hx",899,0x8d299ce7)
	HX_STACK_THIS(this)
	HX_STACK_ARG(bitmap,"bitmap")
	HX_STACK_ARG(matrix,"matrix")
	HX_STACK_ARG(repeat,"repeat")
	HX_STACK_ARG(smooth,"smooth")
{
		HX_STACK_LINE(901)
		::openfl::display::BitmapData tmp = bitmap;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(901)
		bool tmp1 = (matrix != null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(901)
		::openfl::geom::Matrix tmp2;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(901)
		if ((tmp1)){
			HX_STACK_LINE(901)
			tmp2 = ::openfl::geom::Matrix_obj::__new(matrix->a,matrix->b,matrix->c,matrix->d,matrix->tx,matrix->ty);
		}
		else{
			HX_STACK_LINE(901)
			tmp2 = null();
		}
		HX_STACK_LINE(901)
		bool tmp3 = repeat;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(901)
		bool tmp4 = smooth;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(901)
		::openfl::display::DrawCommand tmp5 = ::openfl::display::DrawCommand_obj::LineBitmapStyle(tmp,tmp2,tmp3,tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(901)
		this->__commands->push(tmp5);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC4(Graphics_obj,lineBitmapStyle,(void))

Void Graphics_obj::lineGradientStyle( ::openfl::display::GradientType type,cpp::ArrayBase colors,cpp::ArrayBase alphas,cpp::ArrayBase ratios,::openfl::geom::Matrix matrix,::openfl::display::SpreadMethod spreadMethod,::openfl::display::InterpolationMethod interpolationMethod,Dynamic focalPointRatio){
{
		HX_STACK_FRAME("openfl.display.Graphics","lineGradientStyle",0x2de26914,"openfl.display.Graphics.lineGradientStyle","openfl/display/Graphics.hx",958,0x8d299ce7)
		HX_STACK_THIS(this)
		HX_STACK_ARG(type,"type")
		HX_STACK_ARG(colors,"colors")
		HX_STACK_ARG(alphas,"alphas")
		HX_STACK_ARG(ratios,"ratios")
		HX_STACK_ARG(matrix,"matrix")
		HX_STACK_ARG(spreadMethod,"spreadMethod")
		HX_STACK_ARG(interpolationMethod,"interpolationMethod")
		HX_STACK_ARG(focalPointRatio,"focalPointRatio")
		HX_STACK_LINE(960)
		::openfl::display::GradientType tmp = type;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(960)
		::openfl::geom::Matrix tmp1 = matrix;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(960)
		::openfl::display::SpreadMethod tmp2 = spreadMethod;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(960)
		::openfl::display::InterpolationMethod tmp3 = interpolationMethod;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(960)
		Dynamic tmp4 = focalPointRatio;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(960)
		::openfl::display::DrawCommand tmp5 = ::openfl::display::DrawCommand_obj::LineGradientStyle(tmp,colors,alphas,ratios,tmp1,tmp2,tmp3,tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(960)
		this->__commands->push(tmp5);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC8(Graphics_obj,lineGradientStyle,(void))

Void Graphics_obj::lineStyle( Dynamic thickness,Dynamic color,Dynamic alpha,Dynamic pixelHinting,::openfl::display::LineScaleMode scaleMode,::openfl::display::CapsStyle caps,::openfl::display::JointStyle joints,Dynamic miterLimit){
{
		HX_STACK_FRAME("openfl.display.Graphics","lineStyle",0x32cd8e24,"openfl.display.Graphics.lineStyle","openfl/display/Graphics.hx",1104,0x8d299ce7)
		HX_STACK_THIS(this)
		HX_STACK_ARG(thickness,"thickness")
		HX_STACK_ARG(color,"color")
		HX_STACK_ARG(alpha,"alpha")
		HX_STACK_ARG(pixelHinting,"pixelHinting")
		HX_STACK_ARG(scaleMode,"scaleMode")
		HX_STACK_ARG(caps,"caps")
		HX_STACK_ARG(joints,"joints")
		HX_STACK_ARG(miterLimit,"miterLimit")
		HX_STACK_LINE(1106)
		Dynamic tmp = thickness;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(1106)
		Float tmp1 = this->__halfStrokeWidth;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(1106)
		bool tmp2 = (tmp > tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(1106)
		Float tmp3;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(1106)
		if ((tmp2)){
			HX_STACK_LINE(1106)
			tmp3 = (Float(thickness) / Float((int)2));
		}
		else{
			HX_STACK_LINE(1106)
			tmp3 = this->__halfStrokeWidth;
		}
		HX_STACK_LINE(1106)
		this->__halfStrokeWidth = tmp3;
		HX_STACK_LINE(1107)
		Dynamic tmp4 = thickness;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(1107)
		Dynamic tmp5 = color;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(1107)
		Dynamic tmp6 = alpha;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(1107)
		Dynamic tmp7 = pixelHinting;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(1107)
		::openfl::display::LineScaleMode tmp8 = scaleMode;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(1107)
		::openfl::display::CapsStyle tmp9 = caps;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(1107)
		::openfl::display::JointStyle tmp10 = joints;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(1107)
		Dynamic tmp11 = miterLimit;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(1107)
		::openfl::display::DrawCommand tmp12 = ::openfl::display::DrawCommand_obj::LineStyle(tmp4,tmp5,tmp6,tmp7,tmp8,tmp9,tmp10,tmp11);		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(1107)
		this->__commands->push(tmp12);
		HX_STACK_LINE(1109)
		bool tmp13 = (thickness != null());		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(1109)
		if ((tmp13)){
			HX_STACK_LINE(1109)
			this->__visible = true;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC8(Graphics_obj,lineStyle,(void))

Void Graphics_obj::lineTo( Float x,Float y){
{
		HX_STACK_FRAME("openfl.display.Graphics","lineTo",0x25b7b6a8,"openfl.display.Graphics.lineTo","openfl/display/Graphics.hx",1130,0x8d299ce7)
		HX_STACK_THIS(this)
		HX_STACK_ARG(x,"x")
		HX_STACK_ARG(y,"y")
		HX_STACK_LINE(1134)
		Float tmp = this->__positionX;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(1134)
		Float tmp1 = this->__halfStrokeWidth;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(1134)
		Float tmp2 = (tmp - tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(1134)
		Float tmp3 = this->__positionY;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(1134)
		Float tmp4 = this->__halfStrokeWidth;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(1134)
		Float tmp5 = (tmp3 - tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(1134)
		this->__inflateBounds(tmp2,tmp5);
		HX_STACK_LINE(1135)
		Float tmp6 = this->__positionX;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(1135)
		Float tmp7 = this->__halfStrokeWidth;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(1135)
		Float tmp8 = (tmp6 + tmp7);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(1135)
		Float tmp9 = this->__positionY;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(1135)
		Float tmp10 = this->__halfStrokeWidth;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(1135)
		Float tmp11 = (tmp9 + tmp10);		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(1135)
		this->__inflateBounds(tmp8,tmp11);
		HX_STACK_LINE(1137)
		this->__positionX = x;
		HX_STACK_LINE(1138)
		this->__positionY = y;
		HX_STACK_LINE(1140)
		Float tmp12 = this->__positionX;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(1140)
		Float tmp13 = this->__halfStrokeWidth;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(1140)
		Float tmp14 = (tmp12 - tmp13);		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(1140)
		Float tmp15 = this->__positionY;		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(1140)
		Float tmp16 = this->__halfStrokeWidth;		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(1140)
		Float tmp17 = (tmp15 - tmp16);		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(1140)
		this->__inflateBounds(tmp14,tmp17);
		HX_STACK_LINE(1141)
		Float tmp18 = this->__positionX;		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(1141)
		Float tmp19 = this->__halfStrokeWidth;		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(1141)
		Float tmp20 = (tmp18 + tmp19);		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(1141)
		Float tmp21 = this->__positionY;		HX_STACK_VAR(tmp21,"tmp21");
		HX_STACK_LINE(1141)
		Float tmp22 = this->__halfStrokeWidth;		HX_STACK_VAR(tmp22,"tmp22");
		HX_STACK_LINE(1141)
		Float tmp23 = (tmp21 + tmp22);		HX_STACK_VAR(tmp23,"tmp23");
		HX_STACK_LINE(1141)
		this->__inflateBounds(tmp20,tmp23);
		HX_STACK_LINE(1143)
		Float tmp24 = x;		HX_STACK_VAR(tmp24,"tmp24");
		HX_STACK_LINE(1143)
		Float tmp25 = y;		HX_STACK_VAR(tmp25,"tmp25");
		HX_STACK_LINE(1143)
		::openfl::display::DrawCommand tmp26 = ::openfl::display::DrawCommand_obj::LineTo(tmp24,tmp25);		HX_STACK_VAR(tmp26,"tmp26");
		HX_STACK_LINE(1143)
		this->__commands->push(tmp26);
		HX_STACK_LINE(1145)
		this->__hardware = false;
		HX_STACK_LINE(1146)
		this->set___dirty(true);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Graphics_obj,lineTo,(void))

Void Graphics_obj::moveTo( Float x,Float y){
{
		HX_STACK_FRAME("openfl.display.Graphics","moveTo",0x05c44305,"openfl.display.Graphics.moveTo","openfl/display/Graphics.hx",1161,0x8d299ce7)
		HX_STACK_THIS(this)
		HX_STACK_ARG(x,"x")
		HX_STACK_ARG(y,"y")
		HX_STACK_LINE(1163)
		this->__positionX = x;
		HX_STACK_LINE(1164)
		this->__positionY = y;
		HX_STACK_LINE(1166)
		Float tmp = x;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(1166)
		Float tmp1 = y;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(1166)
		::openfl::display::DrawCommand tmp2 = ::openfl::display::DrawCommand_obj::MoveTo(tmp,tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(1166)
		this->__commands->push(tmp2);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Graphics_obj,moveTo,(void))

Float Graphics_obj::__calculateBezierCubicPoint( Float t,Float p1,Float p2,Float p3,Float p4){
	HX_STACK_FRAME("openfl.display.Graphics","__calculateBezierCubicPoint",0xb6679552,"openfl.display.Graphics.__calculateBezierCubicPoint","openfl/display/Graphics.hx",1171,0x8d299ce7)
	HX_STACK_THIS(this)
	HX_STACK_ARG(t,"t")
	HX_STACK_ARG(p1,"p1")
	HX_STACK_ARG(p2,"p2")
	HX_STACK_ARG(p3,"p3")
	HX_STACK_ARG(p4,"p4")
	HX_STACK_LINE(1173)
	Float tmp = ((int)1 - t);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1173)
	Float iT = tmp;		HX_STACK_VAR(iT,"iT");
	HX_STACK_LINE(1174)
	Float tmp1 = p1;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(1174)
	Float tmp2 = (iT * iT);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(1174)
	Float tmp3 = iT;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(1174)
	Float tmp4 = (tmp2 * tmp3);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(1174)
	Float tmp5 = (tmp1 * tmp4);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(1174)
	Float tmp6 = ((int)3 * p2);		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(1174)
	Float tmp7 = t;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(1174)
	Float tmp8 = (tmp6 * tmp7);		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(1174)
	Float tmp9 = (iT * iT);		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(1174)
	Float tmp10 = (tmp8 * tmp9);		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(1174)
	Float tmp11 = (tmp5 + tmp10);		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(1174)
	Float tmp12 = ((int)3 * p3);		HX_STACK_VAR(tmp12,"tmp12");
	HX_STACK_LINE(1174)
	Float tmp13 = iT;		HX_STACK_VAR(tmp13,"tmp13");
	HX_STACK_LINE(1174)
	Float tmp14 = (tmp12 * tmp13);		HX_STACK_VAR(tmp14,"tmp14");
	HX_STACK_LINE(1174)
	Float tmp15 = (t * t);		HX_STACK_VAR(tmp15,"tmp15");
	HX_STACK_LINE(1174)
	Float tmp16 = (tmp14 * tmp15);		HX_STACK_VAR(tmp16,"tmp16");
	HX_STACK_LINE(1174)
	Float tmp17 = (tmp11 + tmp16);		HX_STACK_VAR(tmp17,"tmp17");
	HX_STACK_LINE(1174)
	Float tmp18 = p4;		HX_STACK_VAR(tmp18,"tmp18");
	HX_STACK_LINE(1174)
	Float tmp19 = (t * t);		HX_STACK_VAR(tmp19,"tmp19");
	HX_STACK_LINE(1174)
	Float tmp20 = t;		HX_STACK_VAR(tmp20,"tmp20");
	HX_STACK_LINE(1174)
	Float tmp21 = (tmp19 * tmp20);		HX_STACK_VAR(tmp21,"tmp21");
	HX_STACK_LINE(1174)
	Float tmp22 = (tmp18 * tmp21);		HX_STACK_VAR(tmp22,"tmp22");
	HX_STACK_LINE(1174)
	Float tmp23 = (tmp17 + tmp22);		HX_STACK_VAR(tmp23,"tmp23");
	HX_STACK_LINE(1174)
	return tmp23;
}


HX_DEFINE_DYNAMIC_FUNC5(Graphics_obj,__calculateBezierCubicPoint,return )

Float Graphics_obj::__calculateBezierQuadPoint( Float t,Float p1,Float p2,Float p3){
	HX_STACK_FRAME("openfl.display.Graphics","__calculateBezierQuadPoint",0x2414b8dd,"openfl.display.Graphics.__calculateBezierQuadPoint","openfl/display/Graphics.hx",1179,0x8d299ce7)
	HX_STACK_THIS(this)
	HX_STACK_ARG(t,"t")
	HX_STACK_ARG(p1,"p1")
	HX_STACK_ARG(p2,"p2")
	HX_STACK_ARG(p3,"p3")
	HX_STACK_LINE(1181)
	Float tmp = ((int)1 - t);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1181)
	Float iT = tmp;		HX_STACK_VAR(iT,"iT");
	HX_STACK_LINE(1182)
	Float tmp1 = (iT * iT);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(1182)
	Float tmp2 = p1;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(1182)
	Float tmp3 = (tmp1 * tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(1182)
	Float tmp4 = ((int)2 * iT);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(1182)
	Float tmp5 = t;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(1182)
	Float tmp6 = (tmp4 * tmp5);		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(1182)
	Float tmp7 = p2;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(1182)
	Float tmp8 = (tmp6 * tmp7);		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(1182)
	Float tmp9 = (tmp3 + tmp8);		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(1182)
	Float tmp10 = (t * t);		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(1182)
	Float tmp11 = p3;		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(1182)
	Float tmp12 = (tmp10 * tmp11);		HX_STACK_VAR(tmp12,"tmp12");
	HX_STACK_LINE(1182)
	Float tmp13 = (tmp9 + tmp12);		HX_STACK_VAR(tmp13,"tmp13");
	HX_STACK_LINE(1182)
	return tmp13;
}


HX_DEFINE_DYNAMIC_FUNC4(Graphics_obj,__calculateBezierQuadPoint,return )

Void Graphics_obj::__getBounds( ::openfl::geom::Rectangle rect,::openfl::geom::Matrix matrix){
{
		HX_STACK_FRAME("openfl.display.Graphics","__getBounds",0x7b7eedd2,"openfl.display.Graphics.__getBounds","openfl/display/Graphics.hx",1187,0x8d299ce7)
		HX_STACK_THIS(this)
		HX_STACK_ARG(rect,"rect")
		HX_STACK_ARG(matrix,"matrix")
		HX_STACK_LINE(1189)
		::openfl::geom::Rectangle tmp = this->__bounds;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(1189)
		bool tmp1 = (tmp == null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(1189)
		if ((tmp1)){
			HX_STACK_LINE(1189)
			return null();
		}
		HX_STACK_LINE(1191)
		::openfl::geom::Rectangle tmp2 = ::openfl::geom::Rectangle_obj::__temp;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(1191)
		::openfl::geom::Rectangle bounds = tmp2;		HX_STACK_VAR(bounds,"bounds");
		HX_STACK_LINE(1192)
		::openfl::geom::Rectangle tmp3 = this->__bounds;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(1192)
		::openfl::geom::Rectangle tmp4 = bounds;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(1192)
		::openfl::geom::Matrix tmp5 = matrix;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(1192)
		tmp3->__transform(tmp4,tmp5);
		HX_STACK_LINE(1193)
		Float tmp6 = bounds->x;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(1193)
		Float tmp7 = bounds->y;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(1193)
		Float tmp8 = bounds->width;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(1193)
		Float tmp9 = bounds->height;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(1193)
		rect->__expand(tmp6,tmp7,tmp8,tmp9);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Graphics_obj,__getBounds,(void))

bool Graphics_obj::__hitTest( Float x,Float y,bool shapeFlag,::openfl::geom::Matrix matrix){
	HX_STACK_FRAME("openfl.display.Graphics","__hitTest",0xcb8296ac,"openfl.display.Graphics.__hitTest","openfl/display/Graphics.hx",1198,0x8d299ce7)
	HX_STACK_THIS(this)
	HX_STACK_ARG(x,"x")
	HX_STACK_ARG(y,"y")
	HX_STACK_ARG(shapeFlag,"shapeFlag")
	HX_STACK_ARG(matrix,"matrix")
	HX_STACK_LINE(1200)
	::openfl::geom::Rectangle tmp = this->__bounds;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1200)
	bool tmp1 = (tmp == null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(1200)
	if ((tmp1)){
		HX_STACK_LINE(1200)
		return false;
	}
	HX_STACK_LINE(1202)
	Float tmp2;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(1202)
	{
		HX_STACK_LINE(1202)
		Float tmp3 = (matrix->a * matrix->d);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(1202)
		Float tmp4 = (matrix->b * matrix->c);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(1202)
		Float tmp5 = (tmp3 - tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(1202)
		Float norm = tmp5;		HX_STACK_VAR(norm,"norm");
		HX_STACK_LINE(1202)
		bool tmp6 = (norm == (int)0);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(1202)
		if ((tmp6)){
			HX_STACK_LINE(1202)
			Float tmp7 = matrix->tx;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(1202)
			tmp2 = -(tmp7);
		}
		else{
			HX_STACK_LINE(1202)
			Float tmp7 = (Float(((Float)1.0)) / Float(norm));		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(1202)
			Float tmp8 = matrix->c;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(1202)
			Float tmp9 = (matrix->ty - y);		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(1202)
			Float tmp10 = (tmp8 * tmp9);		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(1202)
			Float tmp11 = matrix->d;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(1202)
			Float tmp12 = (x - matrix->tx);		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(1202)
			Float tmp13 = (tmp11 * tmp12);		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(1202)
			Float tmp14 = (tmp10 + tmp13);		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(1202)
			tmp2 = (tmp7 * tmp14);
		}
	}
	HX_STACK_LINE(1202)
	Float px = tmp2;		HX_STACK_VAR(px,"px");
	HX_STACK_LINE(1203)
	Float tmp3;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(1203)
	{
		HX_STACK_LINE(1203)
		Float tmp4 = (matrix->a * matrix->d);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(1203)
		Float tmp5 = (matrix->b * matrix->c);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(1203)
		Float tmp6 = (tmp4 - tmp5);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(1203)
		Float norm = tmp6;		HX_STACK_VAR(norm,"norm");
		HX_STACK_LINE(1203)
		bool tmp7 = (norm == (int)0);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(1203)
		if ((tmp7)){
			HX_STACK_LINE(1203)
			Float tmp8 = matrix->ty;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(1203)
			tmp3 = -(tmp8);
		}
		else{
			HX_STACK_LINE(1203)
			Float tmp8 = (Float(((Float)1.0)) / Float(norm));		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(1203)
			Float tmp9 = matrix->a;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(1203)
			Float tmp10 = (y - matrix->ty);		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(1203)
			Float tmp11 = (tmp9 * tmp10);		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(1203)
			Float tmp12 = matrix->b;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(1203)
			Float tmp13 = (matrix->tx - x);		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(1203)
			Float tmp14 = (tmp12 * tmp13);		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(1203)
			Float tmp15 = (tmp11 + tmp14);		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(1203)
			tmp3 = (tmp8 * tmp15);
		}
	}
	HX_STACK_LINE(1203)
	Float py = tmp3;		HX_STACK_VAR(py,"py");
	HX_STACK_LINE(1205)
	bool tmp4 = (px > (int)0);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(1205)
	bool tmp5 = tmp4;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(1205)
	bool tmp6;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(1205)
	if ((tmp5)){
		HX_STACK_LINE(1205)
		tmp6 = (py > (int)0);
	}
	else{
		HX_STACK_LINE(1205)
		tmp6 = false;
	}
	HX_STACK_LINE(1205)
	bool tmp7;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(1205)
	if ((tmp6)){
		HX_STACK_LINE(1205)
		::openfl::geom::Rectangle tmp8 = this->__bounds;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(1205)
		::openfl::geom::Rectangle tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(1205)
		Float tmp10 = px;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(1205)
		Float tmp11 = py;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(1205)
		Float tmp12 = tmp10;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(1205)
		Float tmp13 = tmp11;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(1205)
		tmp7 = tmp9->contains(tmp12,tmp13);
	}
	else{
		HX_STACK_LINE(1205)
		tmp7 = false;
	}
	HX_STACK_LINE(1205)
	if ((tmp7)){
		HX_STACK_LINE(1207)
		bool tmp8 = shapeFlag;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(1207)
		if ((tmp8)){
			HX_STACK_LINE(1209)
			bool tmp9 = this->__dirty;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(1209)
			if ((tmp9)){
			}
			HX_STACK_LINE(1227)
			::openfl::display::BitmapData tmp10 = this->__bitmap;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(1227)
			bool tmp11 = (tmp10 != null());		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(1227)
			if ((tmp11)){
				HX_STACK_LINE(1232)
				::openfl::display::BitmapData tmp12 = this->__bitmap;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(1232)
				Float tmp13 = px;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(1232)
				::openfl::geom::Rectangle tmp14 = this->__bounds;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(1232)
				Float tmp15 = tmp14->x;		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(1232)
				Float tmp16 = (tmp13 - tmp15);		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(1232)
				int tmp17 = ::Math_obj::round(tmp16);		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(1232)
				Float tmp18 = py;		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(1232)
				::openfl::geom::Rectangle tmp19 = this->__bounds;		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(1232)
				Float tmp20 = tmp19->y;		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(1232)
				Float tmp21 = (tmp18 - tmp20);		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(1232)
				int tmp22 = ::Math_obj::round(tmp21);		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(1232)
				int tmp23 = tmp12->getPixel32(tmp17,tmp22);		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(1232)
				int pixel = tmp23;		HX_STACK_VAR(pixel,"pixel");
				HX_STACK_LINE(1233)
				int tmp24 = (int(pixel) >> int((int)24));		HX_STACK_VAR(tmp24,"tmp24");
				HX_STACK_LINE(1233)
				int tmp25 = (int(tmp24) & int((int)255));		HX_STACK_VAR(tmp25,"tmp25");
				HX_STACK_LINE(1233)
				bool tmp26 = (tmp25 > (int)0);		HX_STACK_VAR(tmp26,"tmp26");
				HX_STACK_LINE(1233)
				return tmp26;
			}
		}
		HX_STACK_LINE(1243)
		return true;
	}
	HX_STACK_LINE(1247)
	return false;
}


HX_DEFINE_DYNAMIC_FUNC4(Graphics_obj,__hitTest,return )

Void Graphics_obj::__inflateBounds( Float x,Float y){
{
		HX_STACK_FRAME("openfl.display.Graphics","__inflateBounds",0x7eaeb403,"openfl.display.Graphics.__inflateBounds","openfl/display/Graphics.hx",1251,0x8d299ce7)
		HX_STACK_THIS(this)
		HX_STACK_ARG(x,"x")
		HX_STACK_ARG(y,"y")
		HX_STACK_LINE(1253)
		::openfl::geom::Rectangle tmp = this->__bounds;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(1253)
		bool tmp1 = (tmp == null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(1253)
		if ((tmp1)){
			HX_STACK_LINE(1255)
			::openfl::geom::Rectangle tmp2 = ::openfl::geom::Rectangle_obj::__new(x,y,(int)0,(int)0);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(1255)
			this->__bounds = tmp2;
			HX_STACK_LINE(1256)
			this->__transformDirty = true;
			HX_STACK_LINE(1257)
			return null();
		}
		HX_STACK_LINE(1261)
		Float tmp2 = x;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(1261)
		::openfl::geom::Rectangle tmp3 = this->__bounds;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(1261)
		Float tmp4 = tmp3->x;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(1261)
		bool tmp5 = (tmp2 < tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(1261)
		if ((tmp5)){
			HX_STACK_LINE(1263)
			::openfl::geom::Rectangle tmp6 = this->__bounds;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(1263)
			Float tmp7 = tmp6->x;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(1263)
			Float tmp8 = x;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(1263)
			Float tmp9 = (tmp7 - tmp8);		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(1263)
			::openfl::geom::Rectangle tmp10 = this->__bounds;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(1263)
			hx::AddEq(tmp10->width,tmp9);
			HX_STACK_LINE(1264)
			::openfl::geom::Rectangle tmp11 = this->__bounds;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(1264)
			tmp11->x = x;
			HX_STACK_LINE(1265)
			this->__transformDirty = true;
		}
		HX_STACK_LINE(1269)
		Float tmp6 = y;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(1269)
		::openfl::geom::Rectangle tmp7 = this->__bounds;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(1269)
		Float tmp8 = tmp7->y;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(1269)
		bool tmp9 = (tmp6 < tmp8);		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(1269)
		if ((tmp9)){
			HX_STACK_LINE(1271)
			::openfl::geom::Rectangle tmp10 = this->__bounds;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(1271)
			Float tmp11 = tmp10->y;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(1271)
			Float tmp12 = y;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(1271)
			Float tmp13 = (tmp11 - tmp12);		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(1271)
			::openfl::geom::Rectangle tmp14 = this->__bounds;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(1271)
			hx::AddEq(tmp14->height,tmp13);
			HX_STACK_LINE(1272)
			::openfl::geom::Rectangle tmp15 = this->__bounds;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(1272)
			tmp15->y = y;
			HX_STACK_LINE(1273)
			this->__transformDirty = true;
		}
		HX_STACK_LINE(1277)
		Float tmp10 = x;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(1277)
		::openfl::geom::Rectangle tmp11 = this->__bounds;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(1277)
		Float tmp12 = tmp11->x;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(1277)
		::openfl::geom::Rectangle tmp13 = this->__bounds;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(1277)
		Float tmp14 = tmp13->width;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(1277)
		Float tmp15 = (tmp12 + tmp14);		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(1277)
		bool tmp16 = (tmp10 > tmp15);		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(1277)
		if ((tmp16)){
			HX_STACK_LINE(1279)
			Float tmp17 = x;		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(1279)
			::openfl::geom::Rectangle tmp18 = this->__bounds;		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(1279)
			Float tmp19 = tmp18->x;		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(1279)
			Float tmp20 = (tmp17 - tmp19);		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(1279)
			::openfl::geom::Rectangle tmp21 = this->__bounds;		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(1279)
			tmp21->width = tmp20;
		}
		HX_STACK_LINE(1283)
		Float tmp17 = y;		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(1283)
		::openfl::geom::Rectangle tmp18 = this->__bounds;		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(1283)
		Float tmp19 = tmp18->y;		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(1283)
		::openfl::geom::Rectangle tmp20 = this->__bounds;		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(1283)
		Float tmp21 = tmp20->height;		HX_STACK_VAR(tmp21,"tmp21");
		HX_STACK_LINE(1283)
		Float tmp22 = (tmp19 + tmp21);		HX_STACK_VAR(tmp22,"tmp22");
		HX_STACK_LINE(1283)
		bool tmp23 = (tmp17 > tmp22);		HX_STACK_VAR(tmp23,"tmp23");
		HX_STACK_LINE(1283)
		if ((tmp23)){
			HX_STACK_LINE(1285)
			Float tmp24 = y;		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(1285)
			::openfl::geom::Rectangle tmp25 = this->__bounds;		HX_STACK_VAR(tmp25,"tmp25");
			HX_STACK_LINE(1285)
			Float tmp26 = tmp25->y;		HX_STACK_VAR(tmp26,"tmp26");
			HX_STACK_LINE(1285)
			Float tmp27 = (tmp24 - tmp26);		HX_STACK_VAR(tmp27,"tmp27");
			HX_STACK_LINE(1285)
			::openfl::geom::Rectangle tmp28 = this->__bounds;		HX_STACK_VAR(tmp28,"tmp28");
			HX_STACK_LINE(1285)
			tmp28->height = tmp27;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Graphics_obj,__inflateBounds,(void))

bool Graphics_obj::set___dirty( bool value){
	HX_STACK_FRAME("openfl.display.Graphics","set___dirty",0x3f74a55c,"openfl.display.Graphics.set___dirty","openfl/display/Graphics.hx",1299,0x8d299ce7)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(1301)
	bool tmp = value;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1301)
	bool tmp1;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(1301)
	if ((tmp)){
		HX_STACK_LINE(1301)
		::openfl::display::DisplayObject tmp2 = this->__owner;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(1301)
		::openfl::display::DisplayObject tmp3 = tmp2;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(1301)
		tmp1 = (tmp3 != null());
	}
	else{
		HX_STACK_LINE(1301)
		tmp1 = false;
	}
	HX_STACK_LINE(1301)
	if ((tmp1)){
		HX_STACK_LINE(1303)
		::openfl::display::DisplayObject tmp2 = this->__owner;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(1303)
		::openfl::display::DisplayObject _this = tmp2;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(1303)
		bool tmp3 = _this->__renderDirty;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(1303)
		bool tmp4 = !(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(1303)
		if ((tmp4)){
			HX_STACK_LINE(1303)
			_this->__renderDirty = true;
			HX_STACK_LINE(1303)
			(::openfl::display::DisplayObject_obj::__worldRenderDirty)++;
		}
	}
	HX_STACK_LINE(1307)
	bool tmp2 = this->__dirty = value;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(1307)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC1(Graphics_obj,set___dirty,return )

int Graphics_obj::TILE_SCALE;

int Graphics_obj::TILE_ROTATION;

int Graphics_obj::TILE_RGB;

int Graphics_obj::TILE_ALPHA;

int Graphics_obj::TILE_TRANS_2x2;

int Graphics_obj::TILE_RECT;

int Graphics_obj::TILE_ORIGIN;

int Graphics_obj::TILE_BLEND_NORMAL;

int Graphics_obj::TILE_BLEND_ADD;

int Graphics_obj::TILE_BLEND_MULTIPLY;

int Graphics_obj::TILE_BLEND_SCREEN;

int Graphics_obj::TILE_BLEND_SUBTRACT;

int Graphics_obj::TILE_BLEND_DARKEN;

int Graphics_obj::TILE_BLEND_LIGHTEN;

int Graphics_obj::TILE_BLEND_OVERLAY;

int Graphics_obj::TILE_BLEND_HARDLIGHT;

int Graphics_obj::TILE_BLEND_DIFFERENCE;

int Graphics_obj::TILE_BLEND_INVERT;


Graphics_obj::Graphics_obj()
{
}

void Graphics_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Graphics);
	HX_MARK_MEMBER_NAME(__hardware,"__hardware");
	HX_MARK_MEMBER_NAME(__bounds,"__bounds");
	HX_MARK_MEMBER_NAME(__commands,"__commands");
	HX_MARK_MEMBER_NAME(__dirty,"__dirty");
	HX_MARK_MEMBER_NAME(__glStack,"__glStack");
	HX_MARK_MEMBER_NAME(__drawPaths,"__drawPaths");
	HX_MARK_MEMBER_NAME(__halfStrokeWidth,"__halfStrokeWidth");
	HX_MARK_MEMBER_NAME(__image,"__image");
	HX_MARK_MEMBER_NAME(__positionX,"__positionX");
	HX_MARK_MEMBER_NAME(__positionY,"__positionY");
	HX_MARK_MEMBER_NAME(__transformDirty,"__transformDirty");
	HX_MARK_MEMBER_NAME(__visible,"__visible");
	HX_MARK_MEMBER_NAME(__cachedTexture,"__cachedTexture");
	HX_MARK_MEMBER_NAME(__owner,"__owner");
	HX_MARK_MEMBER_NAME(__cairo,"__cairo");
	HX_MARK_MEMBER_NAME(__bitmap,"__bitmap");
	HX_MARK_END_CLASS();
}

void Graphics_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(__hardware,"__hardware");
	HX_VISIT_MEMBER_NAME(__bounds,"__bounds");
	HX_VISIT_MEMBER_NAME(__commands,"__commands");
	HX_VISIT_MEMBER_NAME(__dirty,"__dirty");
	HX_VISIT_MEMBER_NAME(__glStack,"__glStack");
	HX_VISIT_MEMBER_NAME(__drawPaths,"__drawPaths");
	HX_VISIT_MEMBER_NAME(__halfStrokeWidth,"__halfStrokeWidth");
	HX_VISIT_MEMBER_NAME(__image,"__image");
	HX_VISIT_MEMBER_NAME(__positionX,"__positionX");
	HX_VISIT_MEMBER_NAME(__positionY,"__positionY");
	HX_VISIT_MEMBER_NAME(__transformDirty,"__transformDirty");
	HX_VISIT_MEMBER_NAME(__visible,"__visible");
	HX_VISIT_MEMBER_NAME(__cachedTexture,"__cachedTexture");
	HX_VISIT_MEMBER_NAME(__owner,"__owner");
	HX_VISIT_MEMBER_NAME(__cairo,"__cairo");
	HX_VISIT_MEMBER_NAME(__bitmap,"__bitmap");
}

Dynamic Graphics_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"clear") ) { return clear_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"lineTo") ) { return lineTo_dyn(); }
		if (HX_FIELD_EQ(inName,"moveTo") ) { return moveTo_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"__dirty") ) { return __dirty; }
		if (HX_FIELD_EQ(inName,"__image") ) { return __image; }
		if (HX_FIELD_EQ(inName,"__owner") ) { return __owner; }
		if (HX_FIELD_EQ(inName,"__cairo") ) { return __cairo; }
		if (HX_FIELD_EQ(inName,"curveTo") ) { return curveTo_dyn(); }
		if (HX_FIELD_EQ(inName,"endFill") ) { return endFill_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"__bounds") ) { return __bounds; }
		if (HX_FIELD_EQ(inName,"__bitmap") ) { return __bitmap; }
		if (HX_FIELD_EQ(inName,"copyFrom") ) { return copyFrom_dyn(); }
		if (HX_FIELD_EQ(inName,"drawPath") ) { return drawPath_dyn(); }
		if (HX_FIELD_EQ(inName,"drawRect") ) { return drawRect_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"__glStack") ) { return __glStack; }
		if (HX_FIELD_EQ(inName,"__visible") ) { return __visible; }
		if (HX_FIELD_EQ(inName,"beginFill") ) { return beginFill_dyn(); }
		if (HX_FIELD_EQ(inName,"drawTiles") ) { return drawTiles_dyn(); }
		if (HX_FIELD_EQ(inName,"lineStyle") ) { return lineStyle_dyn(); }
		if (HX_FIELD_EQ(inName,"__hitTest") ) { return __hitTest_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"__hardware") ) { return __hardware; }
		if (HX_FIELD_EQ(inName,"__commands") ) { return __commands; }
		if (HX_FIELD_EQ(inName,"drawCircle") ) { return drawCircle_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"__drawPaths") ) { return __drawPaths; }
		if (HX_FIELD_EQ(inName,"__positionX") ) { return __positionX; }
		if (HX_FIELD_EQ(inName,"__positionY") ) { return __positionY; }
		if (HX_FIELD_EQ(inName,"drawEllipse") ) { return drawEllipse_dyn(); }
		if (HX_FIELD_EQ(inName,"__getBounds") ) { return __getBounds_dyn(); }
		if (HX_FIELD_EQ(inName,"set___dirty") ) { return set___dirty_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"cubicCurveTo") ) { return cubicCurveTo_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"drawRoundRect") ) { return drawRoundRect_dyn(); }
		if (HX_FIELD_EQ(inName,"drawTriangles") ) { return drawTriangles_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"__cachedTexture") ) { return __cachedTexture; }
		if (HX_FIELD_EQ(inName,"beginBitmapFill") ) { return beginBitmapFill_dyn(); }
		if (HX_FIELD_EQ(inName,"lineBitmapStyle") ) { return lineBitmapStyle_dyn(); }
		if (HX_FIELD_EQ(inName,"__inflateBounds") ) { return __inflateBounds_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"__transformDirty") ) { return __transformDirty; }
		if (HX_FIELD_EQ(inName,"drawGraphicsData") ) { return drawGraphicsData_dyn(); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"__halfStrokeWidth") ) { return __halfStrokeWidth; }
		if (HX_FIELD_EQ(inName,"beginGradientFill") ) { return beginGradientFill_dyn(); }
		if (HX_FIELD_EQ(inName,"lineGradientStyle") ) { return lineGradientStyle_dyn(); }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"drawRoundRectComplex") ) { return drawRoundRectComplex_dyn(); }
		break;
	case 26:
		if (HX_FIELD_EQ(inName,"__calculateBezierQuadPoint") ) { return __calculateBezierQuadPoint_dyn(); }
		break;
	case 27:
		if (HX_FIELD_EQ(inName,"__calculateBezierCubicPoint") ) { return __calculateBezierCubicPoint_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Graphics_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"__dirty") ) { if (inCallProp == hx::paccAlways) return set___dirty(inValue);__dirty=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__image") ) { __image=inValue.Cast< ::lime::graphics::Image >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__owner") ) { __owner=inValue.Cast< ::openfl::display::DisplayObject >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__cairo") ) { __cairo=inValue.Cast< ::lime::graphics::cairo::Cairo >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"__bounds") ) { __bounds=inValue.Cast< ::openfl::geom::Rectangle >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__bitmap") ) { __bitmap=inValue.Cast< ::openfl::display::BitmapData >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"__glStack") ) { __glStack=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__visible") ) { __visible=inValue.Cast< bool >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"__hardware") ) { __hardware=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__commands") ) { __commands=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"__drawPaths") ) { __drawPaths=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__positionX") ) { __positionX=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__positionY") ) { __positionY=inValue.Cast< Float >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"__cachedTexture") ) { __cachedTexture=inValue.Cast< ::openfl::_internal::renderer::opengl::utils::FilterTexture >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"__transformDirty") ) { __transformDirty=inValue.Cast< bool >(); return inValue; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"__halfStrokeWidth") ) { __halfStrokeWidth=inValue.Cast< Float >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool Graphics_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	return false;
}

void Graphics_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("__hardware","\xc8","\x55","\x0c","\x19"));
	outFields->push(HX_HCSTRING("__bounds","\x95","\xf1","\x4c","\x0e"));
	outFields->push(HX_HCSTRING("__commands","\xe8","\x23","\x8e","\x61"));
	outFields->push(HX_HCSTRING("__dirty","\xf2","\xa8","\x2e","\x44"));
	outFields->push(HX_HCSTRING("__glStack","\xc3","\xe7","\x34","\x82"));
	outFields->push(HX_HCSTRING("__drawPaths","\x6a","\x89","\x8e","\xb3"));
	outFields->push(HX_HCSTRING("__halfStrokeWidth","\x1b","\xdd","\x09","\x34"));
	outFields->push(HX_HCSTRING("__image","\x3b","\x78","\xc7","\x27"));
	outFields->push(HX_HCSTRING("__positionX","\x6f","\x3c","\x7e","\xfe"));
	outFields->push(HX_HCSTRING("__positionY","\x70","\x3c","\x7e","\xfe"));
	outFields->push(HX_HCSTRING("__transformDirty","\x26","\xf6","\x91","\x84"));
	outFields->push(HX_HCSTRING("__visible","\x52","\xc9","\x72","\x24"));
	outFields->push(HX_HCSTRING("__cachedTexture","\xf9","\x69","\x14","\x5c"));
	outFields->push(HX_HCSTRING("__owner","\x13","\xf1","\xd4","\xa2"));
	outFields->push(HX_HCSTRING("__cairo","\x68","\x89","\x77","\xab"));
	outFields->push(HX_HCSTRING("__bitmap","\x0f","\x7b","\x3b","\x99"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsBool,(int)offsetof(Graphics_obj,__hardware),HX_HCSTRING("__hardware","\xc8","\x55","\x0c","\x19")},
	{hx::fsObject /*::openfl::geom::Rectangle*/ ,(int)offsetof(Graphics_obj,__bounds),HX_HCSTRING("__bounds","\x95","\xf1","\x4c","\x0e")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(Graphics_obj,__commands),HX_HCSTRING("__commands","\xe8","\x23","\x8e","\x61")},
	{hx::fsBool,(int)offsetof(Graphics_obj,__dirty),HX_HCSTRING("__dirty","\xf2","\xa8","\x2e","\x44")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(Graphics_obj,__glStack),HX_HCSTRING("__glStack","\xc3","\xe7","\x34","\x82")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(Graphics_obj,__drawPaths),HX_HCSTRING("__drawPaths","\x6a","\x89","\x8e","\xb3")},
	{hx::fsFloat,(int)offsetof(Graphics_obj,__halfStrokeWidth),HX_HCSTRING("__halfStrokeWidth","\x1b","\xdd","\x09","\x34")},
	{hx::fsObject /*::lime::graphics::Image*/ ,(int)offsetof(Graphics_obj,__image),HX_HCSTRING("__image","\x3b","\x78","\xc7","\x27")},
	{hx::fsFloat,(int)offsetof(Graphics_obj,__positionX),HX_HCSTRING("__positionX","\x6f","\x3c","\x7e","\xfe")},
	{hx::fsFloat,(int)offsetof(Graphics_obj,__positionY),HX_HCSTRING("__positionY","\x70","\x3c","\x7e","\xfe")},
	{hx::fsBool,(int)offsetof(Graphics_obj,__transformDirty),HX_HCSTRING("__transformDirty","\x26","\xf6","\x91","\x84")},
	{hx::fsBool,(int)offsetof(Graphics_obj,__visible),HX_HCSTRING("__visible","\x52","\xc9","\x72","\x24")},
	{hx::fsObject /*::openfl::_internal::renderer::opengl::utils::FilterTexture*/ ,(int)offsetof(Graphics_obj,__cachedTexture),HX_HCSTRING("__cachedTexture","\xf9","\x69","\x14","\x5c")},
	{hx::fsObject /*::openfl::display::DisplayObject*/ ,(int)offsetof(Graphics_obj,__owner),HX_HCSTRING("__owner","\x13","\xf1","\xd4","\xa2")},
	{hx::fsObject /*::lime::graphics::cairo::Cairo*/ ,(int)offsetof(Graphics_obj,__cairo),HX_HCSTRING("__cairo","\x68","\x89","\x77","\xab")},
	{hx::fsObject /*::openfl::display::BitmapData*/ ,(int)offsetof(Graphics_obj,__bitmap),HX_HCSTRING("__bitmap","\x0f","\x7b","\x3b","\x99")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo sStaticStorageInfo[] = {
	{hx::fsInt,(void *) &Graphics_obj::TILE_SCALE,HX_HCSTRING("TILE_SCALE","\x59","\x77","\x2d","\x62")},
	{hx::fsInt,(void *) &Graphics_obj::TILE_ROTATION,HX_HCSTRING("TILE_ROTATION","\xaf","\x5b","\x7b","\x62")},
	{hx::fsInt,(void *) &Graphics_obj::TILE_RGB,HX_HCSTRING("TILE_RGB","\x1c","\x7e","\xfb","\xfc")},
	{hx::fsInt,(void *) &Graphics_obj::TILE_ALPHA,HX_HCSTRING("TILE_ALPHA","\x2d","\x50","\xf5","\x0a")},
	{hx::fsInt,(void *) &Graphics_obj::TILE_TRANS_2x2,HX_HCSTRING("TILE_TRANS_2x2","\xe4","\x26","\x89","\xb2")},
	{hx::fsInt,(void *) &Graphics_obj::TILE_RECT,HX_HCSTRING("TILE_RECT","\x15","\x57","\x11","\x5f")},
	{hx::fsInt,(void *) &Graphics_obj::TILE_ORIGIN,HX_HCSTRING("TILE_ORIGIN","\x17","\x26","\x76","\x94")},
	{hx::fsInt,(void *) &Graphics_obj::TILE_BLEND_NORMAL,HX_HCSTRING("TILE_BLEND_NORMAL","\xa6","\x02","\x62","\x2c")},
	{hx::fsInt,(void *) &Graphics_obj::TILE_BLEND_ADD,HX_HCSTRING("TILE_BLEND_ADD","\x22","\x74","\xbf","\x89")},
	{hx::fsInt,(void *) &Graphics_obj::TILE_BLEND_MULTIPLY,HX_HCSTRING("TILE_BLEND_MULTIPLY","\x63","\xb4","\x29","\xf2")},
	{hx::fsInt,(void *) &Graphics_obj::TILE_BLEND_SCREEN,HX_HCSTRING("TILE_BLEND_SCREEN","\xeb","\xcb","\x55","\x43")},
	{hx::fsInt,(void *) &Graphics_obj::TILE_BLEND_SUBTRACT,HX_HCSTRING("TILE_BLEND_SUBTRACT","\x53","\x47","\xae","\x4f")},
	{hx::fsInt,(void *) &Graphics_obj::TILE_BLEND_DARKEN,HX_HCSTRING("TILE_BLEND_DARKEN","\xde","\xc6","\x32","\x1d")},
	{hx::fsInt,(void *) &Graphics_obj::TILE_BLEND_LIGHTEN,HX_HCSTRING("TILE_BLEND_LIGHTEN","\x40","\x29","\x69","\x97")},
	{hx::fsInt,(void *) &Graphics_obj::TILE_BLEND_OVERLAY,HX_HCSTRING("TILE_BLEND_OVERLAY","\x11","\x22","\x96","\x26")},
	{hx::fsInt,(void *) &Graphics_obj::TILE_BLEND_HARDLIGHT,HX_HCSTRING("TILE_BLEND_HARDLIGHT","\xcc","\x92","\x06","\xa5")},
	{hx::fsInt,(void *) &Graphics_obj::TILE_BLEND_DIFFERENCE,HX_HCSTRING("TILE_BLEND_DIFFERENCE","\xfc","\x9f","\xb6","\x5c")},
	{hx::fsInt,(void *) &Graphics_obj::TILE_BLEND_INVERT,HX_HCSTRING("TILE_BLEND_INVERT","\x95","\x77","\xd1","\x9b")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("__hardware","\xc8","\x55","\x0c","\x19"),
	HX_HCSTRING("__bounds","\x95","\xf1","\x4c","\x0e"),
	HX_HCSTRING("__commands","\xe8","\x23","\x8e","\x61"),
	HX_HCSTRING("__dirty","\xf2","\xa8","\x2e","\x44"),
	HX_HCSTRING("__glStack","\xc3","\xe7","\x34","\x82"),
	HX_HCSTRING("__drawPaths","\x6a","\x89","\x8e","\xb3"),
	HX_HCSTRING("__halfStrokeWidth","\x1b","\xdd","\x09","\x34"),
	HX_HCSTRING("__image","\x3b","\x78","\xc7","\x27"),
	HX_HCSTRING("__positionX","\x6f","\x3c","\x7e","\xfe"),
	HX_HCSTRING("__positionY","\x70","\x3c","\x7e","\xfe"),
	HX_HCSTRING("__transformDirty","\x26","\xf6","\x91","\x84"),
	HX_HCSTRING("__visible","\x52","\xc9","\x72","\x24"),
	HX_HCSTRING("__cachedTexture","\xf9","\x69","\x14","\x5c"),
	HX_HCSTRING("__owner","\x13","\xf1","\xd4","\xa2"),
	HX_HCSTRING("__cairo","\x68","\x89","\x77","\xab"),
	HX_HCSTRING("__bitmap","\x0f","\x7b","\x3b","\x99"),
	HX_HCSTRING("beginBitmapFill","\x9b","\xc9","\x07","\x6a"),
	HX_HCSTRING("beginFill","\x4c","\xad","\x95","\x8c"),
	HX_HCSTRING("beginGradientFill","\x5c","\x3c","\x03","\x2e"),
	HX_HCSTRING("clear","\x8d","\x71","\x5b","\x48"),
	HX_HCSTRING("copyFrom","\xbf","\x0b","\x61","\xc8"),
	HX_HCSTRING("cubicCurveTo","\xe0","\x07","\x90","\x2e"),
	HX_HCSTRING("curveTo","\x0a","\x60","\x88","\xce"),
	HX_HCSTRING("drawCircle","\x34","\xed","\xd0","\x97"),
	HX_HCSTRING("drawEllipse","\x3a","\x85","\xce","\x54"),
	HX_HCSTRING("drawGraphicsData","\xb9","\xaa","\x6e","\x60"),
	HX_HCSTRING("drawPath","\xc9","\x8f","\xbb","\x5e"),
	HX_HCSTRING("drawRect","\x48","\xf7","\x10","\x60"),
	HX_HCSTRING("drawRoundRect","\xee","\xc3","\xaa","\xe2"),
	HX_HCSTRING("drawRoundRectComplex","\xe2","\x43","\x2c","\x11"),
	HX_HCSTRING("drawTiles","\xe1","\x32","\x40","\xd8"),
	HX_HCSTRING("drawTriangles","\x07","\x44","\x68","\xde"),
	HX_HCSTRING("endFill","\xfe","\x87","\xe0","\x25"),
	HX_HCSTRING("lineBitmapStyle","\x2e","\x3f","\x21","\x45"),
	HX_HCSTRING("lineGradientStyle","\x8d","\x24","\xf2","\xc1"),
	HX_HCSTRING("lineStyle","\x9d","\xa8","\x18","\xcb"),
	HX_HCSTRING("lineTo","\x8f","\x46","\xa0","\xec"),
	HX_HCSTRING("moveTo","\xec","\xd2","\xac","\xcc"),
	HX_HCSTRING("__calculateBezierCubicPoint","\x0b","\xc2","\xaf","\xf4"),
	HX_HCSTRING("__calculateBezierQuadPoint","\x44","\x46","\xe8","\x5e"),
	HX_HCSTRING("__getBounds","\x8b","\x58","\xa0","\x10"),
	HX_HCSTRING("__hitTest","\x25","\xb1","\xcd","\x63"),
	HX_HCSTRING("__inflateBounds","\x3c","\x6f","\xee","\xb6"),
	HX_HCSTRING("set___dirty","\x15","\x10","\x96","\xd4"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Graphics_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(Graphics_obj::TILE_SCALE,"TILE_SCALE");
	HX_MARK_MEMBER_NAME(Graphics_obj::TILE_ROTATION,"TILE_ROTATION");
	HX_MARK_MEMBER_NAME(Graphics_obj::TILE_RGB,"TILE_RGB");
	HX_MARK_MEMBER_NAME(Graphics_obj::TILE_ALPHA,"TILE_ALPHA");
	HX_MARK_MEMBER_NAME(Graphics_obj::TILE_TRANS_2x2,"TILE_TRANS_2x2");
	HX_MARK_MEMBER_NAME(Graphics_obj::TILE_RECT,"TILE_RECT");
	HX_MARK_MEMBER_NAME(Graphics_obj::TILE_ORIGIN,"TILE_ORIGIN");
	HX_MARK_MEMBER_NAME(Graphics_obj::TILE_BLEND_NORMAL,"TILE_BLEND_NORMAL");
	HX_MARK_MEMBER_NAME(Graphics_obj::TILE_BLEND_ADD,"TILE_BLEND_ADD");
	HX_MARK_MEMBER_NAME(Graphics_obj::TILE_BLEND_MULTIPLY,"TILE_BLEND_MULTIPLY");
	HX_MARK_MEMBER_NAME(Graphics_obj::TILE_BLEND_SCREEN,"TILE_BLEND_SCREEN");
	HX_MARK_MEMBER_NAME(Graphics_obj::TILE_BLEND_SUBTRACT,"TILE_BLEND_SUBTRACT");
	HX_MARK_MEMBER_NAME(Graphics_obj::TILE_BLEND_DARKEN,"TILE_BLEND_DARKEN");
	HX_MARK_MEMBER_NAME(Graphics_obj::TILE_BLEND_LIGHTEN,"TILE_BLEND_LIGHTEN");
	HX_MARK_MEMBER_NAME(Graphics_obj::TILE_BLEND_OVERLAY,"TILE_BLEND_OVERLAY");
	HX_MARK_MEMBER_NAME(Graphics_obj::TILE_BLEND_HARDLIGHT,"TILE_BLEND_HARDLIGHT");
	HX_MARK_MEMBER_NAME(Graphics_obj::TILE_BLEND_DIFFERENCE,"TILE_BLEND_DIFFERENCE");
	HX_MARK_MEMBER_NAME(Graphics_obj::TILE_BLEND_INVERT,"TILE_BLEND_INVERT");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Graphics_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(Graphics_obj::TILE_SCALE,"TILE_SCALE");
	HX_VISIT_MEMBER_NAME(Graphics_obj::TILE_ROTATION,"TILE_ROTATION");
	HX_VISIT_MEMBER_NAME(Graphics_obj::TILE_RGB,"TILE_RGB");
	HX_VISIT_MEMBER_NAME(Graphics_obj::TILE_ALPHA,"TILE_ALPHA");
	HX_VISIT_MEMBER_NAME(Graphics_obj::TILE_TRANS_2x2,"TILE_TRANS_2x2");
	HX_VISIT_MEMBER_NAME(Graphics_obj::TILE_RECT,"TILE_RECT");
	HX_VISIT_MEMBER_NAME(Graphics_obj::TILE_ORIGIN,"TILE_ORIGIN");
	HX_VISIT_MEMBER_NAME(Graphics_obj::TILE_BLEND_NORMAL,"TILE_BLEND_NORMAL");
	HX_VISIT_MEMBER_NAME(Graphics_obj::TILE_BLEND_ADD,"TILE_BLEND_ADD");
	HX_VISIT_MEMBER_NAME(Graphics_obj::TILE_BLEND_MULTIPLY,"TILE_BLEND_MULTIPLY");
	HX_VISIT_MEMBER_NAME(Graphics_obj::TILE_BLEND_SCREEN,"TILE_BLEND_SCREEN");
	HX_VISIT_MEMBER_NAME(Graphics_obj::TILE_BLEND_SUBTRACT,"TILE_BLEND_SUBTRACT");
	HX_VISIT_MEMBER_NAME(Graphics_obj::TILE_BLEND_DARKEN,"TILE_BLEND_DARKEN");
	HX_VISIT_MEMBER_NAME(Graphics_obj::TILE_BLEND_LIGHTEN,"TILE_BLEND_LIGHTEN");
	HX_VISIT_MEMBER_NAME(Graphics_obj::TILE_BLEND_OVERLAY,"TILE_BLEND_OVERLAY");
	HX_VISIT_MEMBER_NAME(Graphics_obj::TILE_BLEND_HARDLIGHT,"TILE_BLEND_HARDLIGHT");
	HX_VISIT_MEMBER_NAME(Graphics_obj::TILE_BLEND_DIFFERENCE,"TILE_BLEND_DIFFERENCE");
	HX_VISIT_MEMBER_NAME(Graphics_obj::TILE_BLEND_INVERT,"TILE_BLEND_INVERT");
};

#endif

hx::Class Graphics_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("TILE_SCALE","\x59","\x77","\x2d","\x62"),
	HX_HCSTRING("TILE_ROTATION","\xaf","\x5b","\x7b","\x62"),
	HX_HCSTRING("TILE_RGB","\x1c","\x7e","\xfb","\xfc"),
	HX_HCSTRING("TILE_ALPHA","\x2d","\x50","\xf5","\x0a"),
	HX_HCSTRING("TILE_TRANS_2x2","\xe4","\x26","\x89","\xb2"),
	HX_HCSTRING("TILE_RECT","\x15","\x57","\x11","\x5f"),
	HX_HCSTRING("TILE_ORIGIN","\x17","\x26","\x76","\x94"),
	HX_HCSTRING("TILE_BLEND_NORMAL","\xa6","\x02","\x62","\x2c"),
	HX_HCSTRING("TILE_BLEND_ADD","\x22","\x74","\xbf","\x89"),
	HX_HCSTRING("TILE_BLEND_MULTIPLY","\x63","\xb4","\x29","\xf2"),
	HX_HCSTRING("TILE_BLEND_SCREEN","\xeb","\xcb","\x55","\x43"),
	HX_HCSTRING("TILE_BLEND_SUBTRACT","\x53","\x47","\xae","\x4f"),
	HX_HCSTRING("TILE_BLEND_DARKEN","\xde","\xc6","\x32","\x1d"),
	HX_HCSTRING("TILE_BLEND_LIGHTEN","\x40","\x29","\x69","\x97"),
	HX_HCSTRING("TILE_BLEND_OVERLAY","\x11","\x22","\x96","\x26"),
	HX_HCSTRING("TILE_BLEND_HARDLIGHT","\xcc","\x92","\x06","\xa5"),
	HX_HCSTRING("TILE_BLEND_DIFFERENCE","\xfc","\x9f","\xb6","\x5c"),
	HX_HCSTRING("TILE_BLEND_INVERT","\x95","\x77","\xd1","\x9b"),
	::String(null()) };

void Graphics_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("openfl.display.Graphics","\x35","\x67","\x20","\x87");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &Graphics_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Graphics_obj >;
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

void Graphics_obj::__boot()
{
	TILE_SCALE= (int)1;
	TILE_ROTATION= (int)2;
	TILE_RGB= (int)4;
	TILE_ALPHA= (int)8;
	TILE_TRANS_2x2= (int)16;
	TILE_RECT= (int)32;
	TILE_ORIGIN= (int)64;
	TILE_BLEND_NORMAL= (int)0;
	TILE_BLEND_ADD= (int)65536;
	TILE_BLEND_MULTIPLY= (int)131072;
	TILE_BLEND_SCREEN= (int)262144;
	TILE_BLEND_SUBTRACT= (int)524288;
	TILE_BLEND_DARKEN= (int)1048576;
	TILE_BLEND_LIGHTEN= (int)2097152;
	TILE_BLEND_OVERLAY= (int)4194304;
	TILE_BLEND_HARDLIGHT= (int)8388608;
	TILE_BLEND_DIFFERENCE= (int)16777216;
	TILE_BLEND_INVERT= (int)33554432;
}

} // end namespace openfl
} // end namespace display
