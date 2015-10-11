#include <hxcpp.h>

#include "hxMath.h"
#ifndef INCLUDED_lime_graphics_CanvasRenderContext
#include <lime/graphics/CanvasRenderContext.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_RenderSession
#include <openfl/_internal/renderer/RenderSession.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_canvas_CanvasGraphics
#include <openfl/_internal/renderer/canvas/CanvasGraphics.h>
#endif
#ifndef INCLUDED_openfl_display_BitmapData
#include <openfl/display/BitmapData.h>
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
#ifndef INCLUDED_openfl_display_IBitmapDrawable
#include <openfl/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_openfl_display_InterpolationMethod
#include <openfl/display/InterpolationMethod.h>
#endif
#ifndef INCLUDED_openfl_display_SpreadMethod
#include <openfl/display/SpreadMethod.h>
#endif
#ifndef INCLUDED_openfl_geom_Matrix
#include <openfl/geom/Matrix.h>
#endif
#ifndef INCLUDED_openfl_geom_Rectangle
#include <openfl/geom/Rectangle.h>
#endif
namespace openfl{
namespace _internal{
namespace renderer{
namespace canvas{

Void CanvasGraphics_obj::__construct()
{
	return null();
}

//CanvasGraphics_obj::~CanvasGraphics_obj() { }

Dynamic CanvasGraphics_obj::__CreateEmpty() { return  new CanvasGraphics_obj; }
hx::ObjectPtr< CanvasGraphics_obj > CanvasGraphics_obj::__new()
{  hx::ObjectPtr< CanvasGraphics_obj > _result_ = new CanvasGraphics_obj();
	_result_->__construct();
	return _result_;}

Dynamic CanvasGraphics_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< CanvasGraphics_obj > _result_ = new CanvasGraphics_obj();
	_result_->__construct();
	return _result_;}

Float CanvasGraphics_obj::SIN45;

Float CanvasGraphics_obj::TAN22;

::openfl::display::BitmapData CanvasGraphics_obj::bitmapFill;

::openfl::display::BitmapData CanvasGraphics_obj::bitmapStroke;

bool CanvasGraphics_obj::bitmapRepeat;

::openfl::geom::Rectangle CanvasGraphics_obj::bounds;

Array< ::Dynamic > CanvasGraphics_obj::fillCommands;

::openfl::display::Graphics CanvasGraphics_obj::graphics;

bool CanvasGraphics_obj::hasFill;

bool CanvasGraphics_obj::hasStroke;

::openfl::geom::Matrix CanvasGraphics_obj::inversePendingMatrix;

::openfl::geom::Matrix CanvasGraphics_obj::pendingMatrix;

Array< ::Dynamic > CanvasGraphics_obj::strokeCommands;

Dynamic CanvasGraphics_obj::createBitmapFill( ::openfl::display::BitmapData bitmap,bool bitmapRepeat){
	HX_STACK_FRAME("openfl._internal.renderer.canvas.CanvasGraphics","createBitmapFill",0x2a5c3b1e,"openfl._internal.renderer.canvas.CanvasGraphics.createBitmapFill","openfl/_internal/renderer/canvas/CanvasGraphics.hx",66,0x0b9ff65e)
	HX_STACK_ARG(bitmap,"bitmap")
	HX_STACK_ARG(bitmapRepeat,"bitmapRepeat")
	HX_STACK_LINE(66)
	return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(CanvasGraphics_obj,createBitmapFill,return )

Void CanvasGraphics_obj::createTempPatternCanvas( ::openfl::display::BitmapData bitmap,bool repeat,int width,int height){
{
		HX_STACK_FRAME("openfl._internal.renderer.canvas.CanvasGraphics","createTempPatternCanvas",0x07b48808,"openfl._internal.renderer.canvas.CanvasGraphics.createTempPatternCanvas","openfl/_internal/renderer/canvas/CanvasGraphics.hx",70,0x0b9ff65e)
		HX_STACK_ARG(bitmap,"bitmap")
		HX_STACK_ARG(repeat,"repeat")
		HX_STACK_ARG(width,"width")
		HX_STACK_ARG(height,"height")
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(CanvasGraphics_obj,createTempPatternCanvas,(void))

Void CanvasGraphics_obj::endFill( ){
{
		HX_STACK_FRAME("openfl._internal.renderer.canvas.CanvasGraphics","endFill",0x3478970e,"openfl._internal.renderer.canvas.CanvasGraphics.endFill","openfl/_internal/renderer/canvas/CanvasGraphics.hx",96,0x0b9ff65e)
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(CanvasGraphics_obj,endFill,(void))

Void CanvasGraphics_obj::endStroke( ){
{
		HX_STACK_FRAME("openfl._internal.renderer.canvas.CanvasGraphics","endStroke",0x411cf503,"openfl._internal.renderer.canvas.CanvasGraphics.endStroke","openfl/_internal/renderer/canvas/CanvasGraphics.hx",107,0x0b9ff65e)
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(CanvasGraphics_obj,endStroke,(void))

Void CanvasGraphics_obj::closePath( ){
{
		HX_STACK_FRAME("openfl._internal.renderer.canvas.CanvasGraphics","closePath",0x0426588d,"openfl._internal.renderer.canvas.CanvasGraphics.closePath","openfl/_internal/renderer/canvas/CanvasGraphics.hx",119,0x0b9ff65e)
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(CanvasGraphics_obj,closePath,(void))

Void CanvasGraphics_obj::drawRoundRect( Float x,Float y,Float width,Float height,Float rx,Float ry){
{
		HX_STACK_FRAME("openfl._internal.renderer.canvas.CanvasGraphics","drawRoundRect",0x4e8f7efe,"openfl._internal.renderer.canvas.CanvasGraphics.drawRoundRect","openfl/_internal/renderer/canvas/CanvasGraphics.hx",133,0x0b9ff65e)
		HX_STACK_ARG(x,"x")
		HX_STACK_ARG(y,"y")
		HX_STACK_ARG(width,"width")
		HX_STACK_ARG(height,"height")
		HX_STACK_ARG(rx,"rx")
		HX_STACK_ARG(ry,"ry")
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC6(CanvasGraphics_obj,drawRoundRect,(void))

bool CanvasGraphics_obj::isCCW( Float x1,Float y1,Float x2,Float y2,Float x3,Float y3){
	HX_STACK_FRAME("openfl._internal.renderer.canvas.CanvasGraphics","isCCW",0xce74af1d,"openfl._internal.renderer.canvas.CanvasGraphics.isCCW","openfl/_internal/renderer/canvas/CanvasGraphics.hx",169,0x0b9ff65e)
	HX_STACK_ARG(x1,"x1")
	HX_STACK_ARG(y1,"y1")
	HX_STACK_ARG(x2,"x2")
	HX_STACK_ARG(y2,"y2")
	HX_STACK_ARG(x3,"x3")
	HX_STACK_ARG(y3,"y3")
	HX_STACK_LINE(171)
	Float tmp = (x2 - x1);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(171)
	Float tmp1 = (y3 - y1);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(171)
	Float tmp2 = (tmp * tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(171)
	Float tmp3 = (y2 - y1);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(171)
	Float tmp4 = (x3 - x1);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(171)
	Float tmp5 = (tmp3 * tmp4);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(171)
	Float tmp6 = (tmp2 - tmp5);		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(171)
	bool tmp7 = (tmp6 < (int)0);		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(171)
	return tmp7;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC6(CanvasGraphics_obj,isCCW,return )

Dynamic CanvasGraphics_obj::normalizeUVT( Array< Float > uvt,hx::Null< bool >  __o_skipT){
bool skipT = __o_skipT.Default(false);
	HX_STACK_FRAME("openfl._internal.renderer.canvas.CanvasGraphics","normalizeUVT",0x11b66056,"openfl._internal.renderer.canvas.CanvasGraphics.normalizeUVT","openfl/_internal/renderer/canvas/CanvasGraphics.hx",176,0x0b9ff65e)
	HX_STACK_ARG(uvt,"uvt")
	HX_STACK_ARG(skipT,"skipT")
{
		HX_STACK_LINE(178)
		Float tmp = ::Math_obj::NEGATIVE_INFINITY;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(178)
		Float max = tmp;		HX_STACK_VAR(max,"max");
		HX_STACK_LINE(179)
		Float tmp1 = ::Math_obj::NEGATIVE_INFINITY;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(179)
		Float tmp2 = tmp1;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(180)
		int tmp3 = uvt->length;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(180)
		int len = tmp3;		HX_STACK_VAR(len,"len");
		HX_STACK_LINE(182)
		{
			HX_STACK_LINE(182)
			int _g1 = (int)1;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(182)
			int tmp4 = (len + (int)1);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(182)
			int _g = tmp4;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(182)
			while((true)){
				HX_STACK_LINE(182)
				bool tmp5 = (_g1 < _g);		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(182)
				bool tmp6 = !(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(182)
				if ((tmp6)){
					HX_STACK_LINE(182)
					break;
				}
				HX_STACK_LINE(182)
				int tmp7 = (_g1)++;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(182)
				int t = tmp7;		HX_STACK_VAR(t,"t");
				HX_STACK_LINE(184)
				bool tmp8 = skipT;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(184)
				bool tmp9;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(184)
				if ((tmp8)){
					HX_STACK_LINE(184)
					int tmp10 = hx::Mod(t,(int)3);		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(184)
					int tmp11 = tmp10;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(184)
					tmp9 = (tmp11 == (int)0);
				}
				else{
					HX_STACK_LINE(184)
					tmp9 = false;
				}
				HX_STACK_LINE(184)
				if ((tmp9)){
					HX_STACK_LINE(186)
					continue;
				}
				HX_STACK_LINE(190)
				int tmp10 = (t - (int)1);		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(190)
				Float tmp11 = uvt->__get(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(190)
				tmp2 = ((Dynamic)(tmp11));
				HX_STACK_LINE(192)
				bool tmp12 = (max < tmp2);		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(192)
				if ((tmp12)){
					HX_STACK_LINE(194)
					max = tmp2;
				}
			}
		}
		HX_STACK_LINE(200)
		Array< Float > tmp4;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(200)
		{
			HX_STACK_LINE(200)
			Array< Float > this1;		HX_STACK_VAR(this1,"this1");
			HX_STACK_LINE(200)
			this1 = Array_obj< Float >::__new()->__SetSizeExact(null());
			HX_STACK_LINE(200)
			tmp4 = this1;
		}
		HX_STACK_LINE(200)
		Array< Float > result = tmp4;		HX_STACK_VAR(result,"result");
		HX_STACK_LINE(202)
		{
			HX_STACK_LINE(202)
			int _g1 = (int)1;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(202)
			int tmp5 = (len + (int)1);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(202)
			int _g = tmp5;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(202)
			while((true)){
				HX_STACK_LINE(202)
				bool tmp6 = (_g1 < _g);		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(202)
				bool tmp7 = !(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(202)
				if ((tmp7)){
					HX_STACK_LINE(202)
					break;
				}
				HX_STACK_LINE(202)
				int tmp8 = (_g1)++;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(202)
				int t = tmp8;		HX_STACK_VAR(t,"t");
				HX_STACK_LINE(204)
				bool tmp9 = skipT;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(204)
				bool tmp10;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(204)
				if ((tmp9)){
					HX_STACK_LINE(204)
					int tmp11 = hx::Mod(t,(int)3);		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(204)
					int tmp12 = tmp11;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(204)
					tmp10 = (tmp12 == (int)0);
				}
				else{
					HX_STACK_LINE(204)
					tmp10 = false;
				}
				HX_STACK_LINE(204)
				if ((tmp10)){
					HX_STACK_LINE(206)
					continue;
				}
				HX_STACK_LINE(210)
				int tmp11 = (t - (int)1);		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(210)
				Float tmp12 = uvt->__get(tmp11);		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(210)
				Dynamic tmp13 = ((Dynamic)(tmp12));		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(210)
				Float tmp14 = max;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(210)
				Float tmp15 = (Float(tmp13) / Float(tmp14));		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(210)
				result->push(tmp15);
			}
		}
		struct _Function_1_1{
			inline static Dynamic Block( Array< Float > &result,Float &max){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","openfl/_internal/renderer/canvas/CanvasGraphics.hx",214,0x0b9ff65e)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_HCSTRING("max","\xa4","\x0a","\x53","\x00") , max,false);
					__result->Add(HX_HCSTRING("uvt","\xf3","\x2e","\x59","\x00") , result,false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(214)
		Dynamic tmp5 = _Function_1_1::Block(result,max);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(214)
		return tmp5;
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(CanvasGraphics_obj,normalizeUVT,return )

Void CanvasGraphics_obj::playCommands( Array< ::Dynamic > commands,hx::Null< bool >  __o_stroke){
bool stroke = __o_stroke.Default(false);
	HX_STACK_FRAME("openfl._internal.renderer.canvas.CanvasGraphics","playCommands",0x147605cc,"openfl._internal.renderer.canvas.CanvasGraphics.playCommands","openfl/_internal/renderer/canvas/CanvasGraphics.hx",219,0x0b9ff65e)
	HX_STACK_ARG(commands,"commands")
	HX_STACK_ARG(stroke,"stroke")
{
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(CanvasGraphics_obj,playCommands,(void))

Void CanvasGraphics_obj::createGradientPattern( ::openfl::display::GradientType type,cpp::ArrayBase colors,cpp::ArrayBase alphas,cpp::ArrayBase ratios,::openfl::geom::Matrix matrix,::openfl::display::SpreadMethod spreadMethod,::openfl::display::InterpolationMethod interpolationMethod,Dynamic focalPointRatio){
{
		HX_STACK_FRAME("openfl._internal.renderer.canvas.CanvasGraphics","createGradientPattern",0x6cf339b4,"openfl._internal.renderer.canvas.CanvasGraphics.createGradientPattern","openfl/_internal/renderer/canvas/CanvasGraphics.hx",515,0x0b9ff65e)
		HX_STACK_ARG(type,"type")
		HX_STACK_ARG(colors,"colors")
		HX_STACK_ARG(alphas,"alphas")
		HX_STACK_ARG(ratios,"ratios")
		HX_STACK_ARG(matrix,"matrix")
		HX_STACK_ARG(spreadMethod,"spreadMethod")
		HX_STACK_ARG(interpolationMethod,"interpolationMethod")
		HX_STACK_ARG(focalPointRatio,"focalPointRatio")
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC8(CanvasGraphics_obj,createGradientPattern,(void))

Void CanvasGraphics_obj::render( ::openfl::display::Graphics graphics,::openfl::_internal::renderer::RenderSession renderSession){
{
		HX_STACK_FRAME("openfl._internal.renderer.canvas.CanvasGraphics","render",0x7dc3ee46,"openfl._internal.renderer.canvas.CanvasGraphics.render","openfl/_internal/renderer/canvas/CanvasGraphics.hx",561,0x0b9ff65e)
		HX_STACK_ARG(graphics,"graphics")
		HX_STACK_ARG(renderSession,"renderSession")
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(CanvasGraphics_obj,render,(void))

Void CanvasGraphics_obj::renderMask( ::openfl::display::Graphics graphics,::openfl::_internal::renderer::RenderSession renderSession){
{
		HX_STACK_FRAME("openfl._internal.renderer.canvas.CanvasGraphics","renderMask",0xfa8ef652,"openfl._internal.renderer.canvas.CanvasGraphics.renderMask","openfl/_internal/renderer/canvas/CanvasGraphics.hx",953,0x0b9ff65e)
		HX_STACK_ARG(graphics,"graphics")
		HX_STACK_ARG(renderSession,"renderSession")
		HX_STACK_LINE(955)
		int tmp = graphics->__commands->length;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(955)
		bool tmp1 = (tmp != (int)0);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(955)
		if ((tmp1)){
			HX_STACK_LINE(957)
			::lime::graphics::CanvasRenderContext context = renderSession->context;		HX_STACK_VAR(context,"context");
			HX_STACK_LINE(959)
			Float positionX = ((Float)0.0);		HX_STACK_VAR(positionX,"positionX");
			HX_STACK_LINE(960)
			Float positionY = ((Float)0.0);		HX_STACK_VAR(positionY,"positionY");
			HX_STACK_LINE(962)
			int offsetX = (int)0;		HX_STACK_VAR(offsetX,"offsetX");
			HX_STACK_LINE(963)
			int offsetY = (int)0;		HX_STACK_VAR(offsetY,"offsetY");
			HX_STACK_LINE(965)
			{
				HX_STACK_LINE(965)
				int _g = (int)0;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(965)
				Array< ::Dynamic > _g1 = graphics->__commands;		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(965)
				while((true)){
					HX_STACK_LINE(965)
					bool tmp2 = (_g < _g1->length);		HX_STACK_VAR(tmp2,"tmp2");
					HX_STACK_LINE(965)
					bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
					HX_STACK_LINE(965)
					if ((tmp3)){
						HX_STACK_LINE(965)
						break;
					}
					HX_STACK_LINE(965)
					::openfl::display::DrawCommand tmp4 = _g1->__get(_g).StaticCast< ::openfl::display::DrawCommand >();		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(965)
					::openfl::display::DrawCommand command = tmp4;		HX_STACK_VAR(command,"command");
					HX_STACK_LINE(965)
					++(_g);
					HX_STACK_LINE(967)
					switch( (int)(command->__Index())){
						case (int)3: {
							HX_STACK_LINE(967)
							Float tmp5 = (::openfl::display::DrawCommand(command))->__Param(5);		HX_STACK_VAR(tmp5,"tmp5");
							HX_STACK_LINE(967)
							Float y = tmp5;		HX_STACK_VAR(y,"y");
							HX_STACK_LINE(967)
							Float tmp6 = (::openfl::display::DrawCommand(command))->__Param(4);		HX_STACK_VAR(tmp6,"tmp6");
							HX_STACK_LINE(967)
							Float x = tmp6;		HX_STACK_VAR(x,"x");
							HX_STACK_LINE(967)
							Float tmp7 = (::openfl::display::DrawCommand(command))->__Param(3);		HX_STACK_VAR(tmp7,"tmp7");
							HX_STACK_LINE(967)
							Float cy2 = tmp7;		HX_STACK_VAR(cy2,"cy2");
							HX_STACK_LINE(967)
							Float tmp8 = (::openfl::display::DrawCommand(command))->__Param(2);		HX_STACK_VAR(tmp8,"tmp8");
							HX_STACK_LINE(967)
							Float cy1 = tmp8;		HX_STACK_VAR(cy1,"cy1");
							HX_STACK_LINE(967)
							Float tmp9 = (::openfl::display::DrawCommand(command))->__Param(1);		HX_STACK_VAR(tmp9,"tmp9");
							HX_STACK_LINE(967)
							Float cx2 = tmp9;		HX_STACK_VAR(cx2,"cx2");
							HX_STACK_LINE(967)
							Float tmp10 = (::openfl::display::DrawCommand(command))->__Param(0);		HX_STACK_VAR(tmp10,"tmp10");
							HX_STACK_LINE(967)
							Float cx1 = tmp10;		HX_STACK_VAR(cx1,"cx1");
							HX_STACK_LINE(969)
							{
								HX_STACK_LINE(971)
								Float tmp11 = (cx1 - offsetX);		HX_STACK_VAR(tmp11,"tmp11");
								HX_STACK_LINE(971)
								Float tmp12 = (cy1 - offsetY);		HX_STACK_VAR(tmp12,"tmp12");
								HX_STACK_LINE(971)
								Float tmp13 = (cx2 - offsetX);		HX_STACK_VAR(tmp13,"tmp13");
								HX_STACK_LINE(971)
								Float tmp14 = (cy2 - offsetY);		HX_STACK_VAR(tmp14,"tmp14");
								HX_STACK_LINE(971)
								Float tmp15 = (x - offsetX);		HX_STACK_VAR(tmp15,"tmp15");
								HX_STACK_LINE(971)
								Float tmp16 = (y - offsetY);		HX_STACK_VAR(tmp16,"tmp16");
								HX_STACK_LINE(971)
								context->bezierCurveTo(tmp11,tmp12,tmp13,tmp14,tmp15,tmp16);
								HX_STACK_LINE(972)
								positionX = x;
								HX_STACK_LINE(973)
								positionY = y;
							}
						}
						;break;
						case (int)4: {
							HX_STACK_LINE(967)
							Float tmp5 = (::openfl::display::DrawCommand(command))->__Param(3);		HX_STACK_VAR(tmp5,"tmp5");
							HX_STACK_LINE(967)
							Float y = tmp5;		HX_STACK_VAR(y,"y");
							HX_STACK_LINE(967)
							Float tmp6 = (::openfl::display::DrawCommand(command))->__Param(2);		HX_STACK_VAR(tmp6,"tmp6");
							HX_STACK_LINE(967)
							Float x = tmp6;		HX_STACK_VAR(x,"x");
							HX_STACK_LINE(967)
							Float tmp7 = (::openfl::display::DrawCommand(command))->__Param(1);		HX_STACK_VAR(tmp7,"tmp7");
							HX_STACK_LINE(967)
							Float cy = tmp7;		HX_STACK_VAR(cy,"cy");
							HX_STACK_LINE(967)
							Float tmp8 = (::openfl::display::DrawCommand(command))->__Param(0);		HX_STACK_VAR(tmp8,"tmp8");
							HX_STACK_LINE(967)
							Float cx = tmp8;		HX_STACK_VAR(cx,"cx");
							HX_STACK_LINE(975)
							{
								HX_STACK_LINE(977)
								Float tmp9 = (cx - offsetX);		HX_STACK_VAR(tmp9,"tmp9");
								HX_STACK_LINE(977)
								Float tmp10 = (cy - offsetY);		HX_STACK_VAR(tmp10,"tmp10");
								HX_STACK_LINE(977)
								Float tmp11 = (x - offsetX);		HX_STACK_VAR(tmp11,"tmp11");
								HX_STACK_LINE(977)
								Float tmp12 = (y - offsetY);		HX_STACK_VAR(tmp12,"tmp12");
								HX_STACK_LINE(977)
								context->quadraticCurveTo(tmp9,tmp10,tmp11,tmp12);
								HX_STACK_LINE(978)
								positionX = x;
								HX_STACK_LINE(979)
								positionY = y;
							}
						}
						;break;
						case (int)5: {
							HX_STACK_LINE(967)
							Float tmp5 = (::openfl::display::DrawCommand(command))->__Param(2);		HX_STACK_VAR(tmp5,"tmp5");
							HX_STACK_LINE(967)
							Float radius = tmp5;		HX_STACK_VAR(radius,"radius");
							HX_STACK_LINE(967)
							Float tmp6 = (::openfl::display::DrawCommand(command))->__Param(1);		HX_STACK_VAR(tmp6,"tmp6");
							HX_STACK_LINE(967)
							Float y = tmp6;		HX_STACK_VAR(y,"y");
							HX_STACK_LINE(967)
							Float tmp7 = (::openfl::display::DrawCommand(command))->__Param(0);		HX_STACK_VAR(tmp7,"tmp7");
							HX_STACK_LINE(967)
							Float x = tmp7;		HX_STACK_VAR(x,"x");
							HX_STACK_LINE(981)
							{
								HX_STACK_LINE(983)
								Float tmp8 = (x - offsetX);		HX_STACK_VAR(tmp8,"tmp8");
								HX_STACK_LINE(983)
								Float tmp9 = (y - offsetY);		HX_STACK_VAR(tmp9,"tmp9");
								HX_STACK_LINE(983)
								Float tmp10 = radius;		HX_STACK_VAR(tmp10,"tmp10");
								HX_STACK_LINE(983)
								Float tmp11 = ::Math_obj::PI;		HX_STACK_VAR(tmp11,"tmp11");
								HX_STACK_LINE(983)
								Float tmp12 = (tmp11 * (int)2);		HX_STACK_VAR(tmp12,"tmp12");
								HX_STACK_LINE(983)
								context->arc(tmp8,tmp9,tmp10,(int)0,tmp12,true);
							}
						}
						;break;
						case (int)6: {
							HX_STACK_LINE(967)
							Float tmp5 = (::openfl::display::DrawCommand(command))->__Param(3);		HX_STACK_VAR(tmp5,"tmp5");
							HX_STACK_LINE(967)
							Float height = tmp5;		HX_STACK_VAR(height,"height");
							HX_STACK_LINE(967)
							Float tmp6 = (::openfl::display::DrawCommand(command))->__Param(2);		HX_STACK_VAR(tmp6,"tmp6");
							HX_STACK_LINE(967)
							Float width = tmp6;		HX_STACK_VAR(width,"width");
							HX_STACK_LINE(967)
							Float tmp7 = (::openfl::display::DrawCommand(command))->__Param(1);		HX_STACK_VAR(tmp7,"tmp7");
							HX_STACK_LINE(967)
							Float y = tmp7;		HX_STACK_VAR(y,"y");
							HX_STACK_LINE(967)
							Float tmp8 = (::openfl::display::DrawCommand(command))->__Param(0);		HX_STACK_VAR(tmp8,"tmp8");
							HX_STACK_LINE(967)
							Float x = tmp8;		HX_STACK_VAR(x,"x");
							HX_STACK_LINE(985)
							{
								HX_STACK_LINE(987)
								hx::SubEq(x,offsetX);
								HX_STACK_LINE(988)
								hx::SubEq(y,offsetY);
								HX_STACK_LINE(990)
								Float kappa = ((Float).5522848);		HX_STACK_VAR(kappa,"kappa");
								HX_STACK_LINE(991)
								Float tmp9 = (Float(width) / Float((int)2));		HX_STACK_VAR(tmp9,"tmp9");
								HX_STACK_LINE(991)
								Float tmp10 = kappa;		HX_STACK_VAR(tmp10,"tmp10");
								HX_STACK_LINE(991)
								Float tmp11 = (tmp9 * tmp10);		HX_STACK_VAR(tmp11,"tmp11");
								HX_STACK_LINE(991)
								Float ox = tmp11;		HX_STACK_VAR(ox,"ox");
								HX_STACK_LINE(992)
								Float tmp12 = (Float(height) / Float((int)2));		HX_STACK_VAR(tmp12,"tmp12");
								HX_STACK_LINE(992)
								Float tmp13 = kappa;		HX_STACK_VAR(tmp13,"tmp13");
								HX_STACK_LINE(992)
								Float tmp14 = (tmp12 * tmp13);		HX_STACK_VAR(tmp14,"tmp14");
								HX_STACK_LINE(992)
								Float oy = tmp14;		HX_STACK_VAR(oy,"oy");
								HX_STACK_LINE(993)
								Float tmp15 = (x + width);		HX_STACK_VAR(tmp15,"tmp15");
								HX_STACK_LINE(993)
								Float xe = tmp15;		HX_STACK_VAR(xe,"xe");
								HX_STACK_LINE(994)
								Float tmp16 = (y + height);		HX_STACK_VAR(tmp16,"tmp16");
								HX_STACK_LINE(994)
								Float ye = tmp16;		HX_STACK_VAR(ye,"ye");
								HX_STACK_LINE(995)
								Float tmp17 = x;		HX_STACK_VAR(tmp17,"tmp17");
								HX_STACK_LINE(995)
								Float tmp18 = (Float(width) / Float((int)2));		HX_STACK_VAR(tmp18,"tmp18");
								HX_STACK_LINE(995)
								Float tmp19 = (tmp17 + tmp18);		HX_STACK_VAR(tmp19,"tmp19");
								HX_STACK_LINE(995)
								Float xm = tmp19;		HX_STACK_VAR(xm,"xm");
								HX_STACK_LINE(996)
								Float tmp20 = y;		HX_STACK_VAR(tmp20,"tmp20");
								HX_STACK_LINE(996)
								Float tmp21 = (Float(height) / Float((int)2));		HX_STACK_VAR(tmp21,"tmp21");
								HX_STACK_LINE(996)
								Float tmp22 = (tmp20 + tmp21);		HX_STACK_VAR(tmp22,"tmp22");
								HX_STACK_LINE(996)
								Float ym = tmp22;		HX_STACK_VAR(ym,"ym");
								HX_STACK_LINE(1000)
								Float tmp23 = x;		HX_STACK_VAR(tmp23,"tmp23");
								HX_STACK_LINE(1000)
								Float tmp24 = ym;		HX_STACK_VAR(tmp24,"tmp24");
								HX_STACK_LINE(1000)
								context->moveTo(tmp23,tmp24);
								HX_STACK_LINE(1001)
								Float tmp25 = x;		HX_STACK_VAR(tmp25,"tmp25");
								HX_STACK_LINE(1001)
								Float tmp26 = (ym - oy);		HX_STACK_VAR(tmp26,"tmp26");
								HX_STACK_LINE(1001)
								Float tmp27 = (xm - ox);		HX_STACK_VAR(tmp27,"tmp27");
								HX_STACK_LINE(1001)
								Float tmp28 = y;		HX_STACK_VAR(tmp28,"tmp28");
								HX_STACK_LINE(1001)
								Float tmp29 = xm;		HX_STACK_VAR(tmp29,"tmp29");
								HX_STACK_LINE(1001)
								Float tmp30 = y;		HX_STACK_VAR(tmp30,"tmp30");
								HX_STACK_LINE(1001)
								context->bezierCurveTo(tmp25,tmp26,tmp27,tmp28,tmp29,tmp30);
								HX_STACK_LINE(1002)
								Float tmp31 = (xm + ox);		HX_STACK_VAR(tmp31,"tmp31");
								HX_STACK_LINE(1002)
								Float tmp32 = y;		HX_STACK_VAR(tmp32,"tmp32");
								HX_STACK_LINE(1002)
								Float tmp33 = xe;		HX_STACK_VAR(tmp33,"tmp33");
								HX_STACK_LINE(1002)
								Float tmp34 = (ym - oy);		HX_STACK_VAR(tmp34,"tmp34");
								HX_STACK_LINE(1002)
								Float tmp35 = xe;		HX_STACK_VAR(tmp35,"tmp35");
								HX_STACK_LINE(1002)
								Float tmp36 = ym;		HX_STACK_VAR(tmp36,"tmp36");
								HX_STACK_LINE(1002)
								context->bezierCurveTo(tmp31,tmp32,tmp33,tmp34,tmp35,tmp36);
								HX_STACK_LINE(1003)
								Float tmp37 = xe;		HX_STACK_VAR(tmp37,"tmp37");
								HX_STACK_LINE(1003)
								Float tmp38 = (ym + oy);		HX_STACK_VAR(tmp38,"tmp38");
								HX_STACK_LINE(1003)
								Float tmp39 = (xm + ox);		HX_STACK_VAR(tmp39,"tmp39");
								HX_STACK_LINE(1003)
								Float tmp40 = ye;		HX_STACK_VAR(tmp40,"tmp40");
								HX_STACK_LINE(1003)
								Float tmp41 = xm;		HX_STACK_VAR(tmp41,"tmp41");
								HX_STACK_LINE(1003)
								Float tmp42 = ye;		HX_STACK_VAR(tmp42,"tmp42");
								HX_STACK_LINE(1003)
								context->bezierCurveTo(tmp37,tmp38,tmp39,tmp40,tmp41,tmp42);
								HX_STACK_LINE(1004)
								Float tmp43 = (xm - ox);		HX_STACK_VAR(tmp43,"tmp43");
								HX_STACK_LINE(1004)
								Float tmp44 = ye;		HX_STACK_VAR(tmp44,"tmp44");
								HX_STACK_LINE(1004)
								Float tmp45 = x;		HX_STACK_VAR(tmp45,"tmp45");
								HX_STACK_LINE(1004)
								Float tmp46 = (ym + oy);		HX_STACK_VAR(tmp46,"tmp46");
								HX_STACK_LINE(1004)
								Float tmp47 = x;		HX_STACK_VAR(tmp47,"tmp47");
								HX_STACK_LINE(1004)
								Float tmp48 = ym;		HX_STACK_VAR(tmp48,"tmp48");
								HX_STACK_LINE(1004)
								context->bezierCurveTo(tmp43,tmp44,tmp45,tmp46,tmp47,tmp48);
							}
						}
						;break;
						case (int)7: {
							HX_STACK_LINE(967)
							Float tmp5 = (::openfl::display::DrawCommand(command))->__Param(3);		HX_STACK_VAR(tmp5,"tmp5");
							HX_STACK_LINE(967)
							Float height = tmp5;		HX_STACK_VAR(height,"height");
							HX_STACK_LINE(967)
							Float tmp6 = (::openfl::display::DrawCommand(command))->__Param(2);		HX_STACK_VAR(tmp6,"tmp6");
							HX_STACK_LINE(967)
							Float width = tmp6;		HX_STACK_VAR(width,"width");
							HX_STACK_LINE(967)
							Float tmp7 = (::openfl::display::DrawCommand(command))->__Param(1);		HX_STACK_VAR(tmp7,"tmp7");
							HX_STACK_LINE(967)
							Float y = tmp7;		HX_STACK_VAR(y,"y");
							HX_STACK_LINE(967)
							Float tmp8 = (::openfl::display::DrawCommand(command))->__Param(0);		HX_STACK_VAR(tmp8,"tmp8");
							HX_STACK_LINE(967)
							Float x = tmp8;		HX_STACK_VAR(x,"x");
							HX_STACK_LINE(1007)
							{
								HX_STACK_LINE(1009)
								Float tmp9 = (x - offsetX);		HX_STACK_VAR(tmp9,"tmp9");
								HX_STACK_LINE(1009)
								Float tmp10 = (y - offsetY);		HX_STACK_VAR(tmp10,"tmp10");
								HX_STACK_LINE(1009)
								Float tmp11 = width;		HX_STACK_VAR(tmp11,"tmp11");
								HX_STACK_LINE(1009)
								Float tmp12 = height;		HX_STACK_VAR(tmp12,"tmp12");
								HX_STACK_LINE(1009)
								context->rect(tmp9,tmp10,tmp11,tmp12);
							}
						}
						;break;
						case (int)8: {
							HX_STACK_LINE(967)
							Float tmp5 = (::openfl::display::DrawCommand(command))->__Param(5);		HX_STACK_VAR(tmp5,"tmp5");
							HX_STACK_LINE(967)
							Float ry = tmp5;		HX_STACK_VAR(ry,"ry");
							HX_STACK_LINE(967)
							Float tmp6 = (::openfl::display::DrawCommand(command))->__Param(4);		HX_STACK_VAR(tmp6,"tmp6");
							HX_STACK_LINE(967)
							Float rx = tmp6;		HX_STACK_VAR(rx,"rx");
							HX_STACK_LINE(967)
							Float tmp7 = (::openfl::display::DrawCommand(command))->__Param(3);		HX_STACK_VAR(tmp7,"tmp7");
							HX_STACK_LINE(967)
							Float height = tmp7;		HX_STACK_VAR(height,"height");
							HX_STACK_LINE(967)
							Float tmp8 = (::openfl::display::DrawCommand(command))->__Param(2);		HX_STACK_VAR(tmp8,"tmp8");
							HX_STACK_LINE(967)
							Float width = tmp8;		HX_STACK_VAR(width,"width");
							HX_STACK_LINE(967)
							Float tmp9 = (::openfl::display::DrawCommand(command))->__Param(1);		HX_STACK_VAR(tmp9,"tmp9");
							HX_STACK_LINE(967)
							Float y = tmp9;		HX_STACK_VAR(y,"y");
							HX_STACK_LINE(967)
							Float tmp10 = (::openfl::display::DrawCommand(command))->__Param(0);		HX_STACK_VAR(tmp10,"tmp10");
							HX_STACK_LINE(967)
							Float x = tmp10;		HX_STACK_VAR(x,"x");
							HX_STACK_LINE(1011)
							{
								HX_STACK_LINE(1013)
								Float tmp11 = (x - offsetX);		HX_STACK_VAR(tmp11,"tmp11");
								HX_STACK_LINE(1013)
								Float tmp12 = (y - offsetY);		HX_STACK_VAR(tmp12,"tmp12");
								HX_STACK_LINE(1013)
								Float tmp13 = width;		HX_STACK_VAR(tmp13,"tmp13");
								HX_STACK_LINE(1013)
								Float tmp14 = height;		HX_STACK_VAR(tmp14,"tmp14");
								HX_STACK_LINE(1013)
								Float tmp15 = rx;		HX_STACK_VAR(tmp15,"tmp15");
								HX_STACK_LINE(1013)
								Float tmp16 = ry;		HX_STACK_VAR(tmp16,"tmp16");
								HX_STACK_LINE(1013)
								::openfl::_internal::renderer::canvas::CanvasGraphics_obj::drawRoundRect(tmp11,tmp12,tmp13,tmp14,tmp15,tmp16);
							}
						}
						;break;
						case (int)15: {
							HX_STACK_LINE(967)
							Float tmp5 = (::openfl::display::DrawCommand(command))->__Param(1);		HX_STACK_VAR(tmp5,"tmp5");
							HX_STACK_LINE(967)
							Float y = tmp5;		HX_STACK_VAR(y,"y");
							HX_STACK_LINE(967)
							Float tmp6 = (::openfl::display::DrawCommand(command))->__Param(0);		HX_STACK_VAR(tmp6,"tmp6");
							HX_STACK_LINE(967)
							Float x = tmp6;		HX_STACK_VAR(x,"x");
							HX_STACK_LINE(1015)
							{
								HX_STACK_LINE(1017)
								Float tmp7 = (x - offsetX);		HX_STACK_VAR(tmp7,"tmp7");
								HX_STACK_LINE(1017)
								Float tmp8 = (y - offsetY);		HX_STACK_VAR(tmp8,"tmp8");
								HX_STACK_LINE(1017)
								context->lineTo(tmp7,tmp8);
								HX_STACK_LINE(1018)
								positionX = x;
								HX_STACK_LINE(1019)
								positionY = y;
							}
						}
						;break;
						case (int)16: {
							HX_STACK_LINE(967)
							Float tmp5 = (::openfl::display::DrawCommand(command))->__Param(1);		HX_STACK_VAR(tmp5,"tmp5");
							HX_STACK_LINE(967)
							Float y = tmp5;		HX_STACK_VAR(y,"y");
							HX_STACK_LINE(967)
							Float tmp6 = (::openfl::display::DrawCommand(command))->__Param(0);		HX_STACK_VAR(tmp6,"tmp6");
							HX_STACK_LINE(967)
							Float x = tmp6;		HX_STACK_VAR(x,"x");
							HX_STACK_LINE(1021)
							{
								HX_STACK_LINE(1023)
								Float tmp7 = (x - offsetX);		HX_STACK_VAR(tmp7,"tmp7");
								HX_STACK_LINE(1023)
								Float tmp8 = (y - offsetY);		HX_STACK_VAR(tmp8,"tmp8");
								HX_STACK_LINE(1023)
								context->moveTo(tmp7,tmp8);
								HX_STACK_LINE(1024)
								positionX = x;
								HX_STACK_LINE(1025)
								positionY = y;
							}
						}
						;break;
						default: {
						}
					}
				}
			}
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(CanvasGraphics_obj,renderMask,(void))


CanvasGraphics_obj::CanvasGraphics_obj()
{
}

bool CanvasGraphics_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"SIN45") ) { outValue = SIN45; return true;  }
		if (HX_FIELD_EQ(inName,"TAN22") ) { outValue = TAN22; return true;  }
		if (HX_FIELD_EQ(inName,"isCCW") ) { outValue = isCCW_dyn(); return true;  }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"bounds") ) { outValue = bounds; return true;  }
		if (HX_FIELD_EQ(inName,"render") ) { outValue = render_dyn(); return true;  }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"hasFill") ) { outValue = hasFill; return true;  }
		if (HX_FIELD_EQ(inName,"endFill") ) { outValue = endFill_dyn(); return true;  }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"graphics") ) { outValue = graphics; return true;  }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"hasStroke") ) { outValue = hasStroke; return true;  }
		if (HX_FIELD_EQ(inName,"endStroke") ) { outValue = endStroke_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"closePath") ) { outValue = closePath_dyn(); return true;  }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"bitmapFill") ) { outValue = bitmapFill; return true;  }
		if (HX_FIELD_EQ(inName,"renderMask") ) { outValue = renderMask_dyn(); return true;  }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"bitmapStroke") ) { outValue = bitmapStroke; return true;  }
		if (HX_FIELD_EQ(inName,"bitmapRepeat") ) { outValue = bitmapRepeat; return true;  }
		if (HX_FIELD_EQ(inName,"fillCommands") ) { outValue = fillCommands; return true;  }
		if (HX_FIELD_EQ(inName,"normalizeUVT") ) { outValue = normalizeUVT_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"playCommands") ) { outValue = playCommands_dyn(); return true;  }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"pendingMatrix") ) { outValue = pendingMatrix; return true;  }
		if (HX_FIELD_EQ(inName,"drawRoundRect") ) { outValue = drawRoundRect_dyn(); return true;  }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"strokeCommands") ) { outValue = strokeCommands; return true;  }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"createBitmapFill") ) { outValue = createBitmapFill_dyn(); return true;  }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"inversePendingMatrix") ) { outValue = inversePendingMatrix; return true;  }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"createGradientPattern") ) { outValue = createGradientPattern_dyn(); return true;  }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"createTempPatternCanvas") ) { outValue = createTempPatternCanvas_dyn(); return true;  }
	}
	return false;
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
static hx::StaticInfo sStaticStorageInfo[] = {
	{hx::fsFloat,(void *) &CanvasGraphics_obj::SIN45,HX_HCSTRING("SIN45","\x79","\x16","\xbe","\xfa")},
	{hx::fsFloat,(void *) &CanvasGraphics_obj::TAN22,HX_HCSTRING("TAN22","\x41","\xf4","\xda","\x88")},
	{hx::fsObject /*::openfl::display::BitmapData*/ ,(void *) &CanvasGraphics_obj::bitmapFill,HX_HCSTRING("bitmapFill","\x12","\x2e","\x19","\x35")},
	{hx::fsObject /*::openfl::display::BitmapData*/ ,(void *) &CanvasGraphics_obj::bitmapStroke,HX_HCSTRING("bitmapStroke","\x07","\x55","\x54","\x1c")},
	{hx::fsBool,(void *) &CanvasGraphics_obj::bitmapRepeat,HX_HCSTRING("bitmapRepeat","\xaa","\x38","\x9c","\x11")},
	{hx::fsObject /*::openfl::geom::Rectangle*/ ,(void *) &CanvasGraphics_obj::bounds,HX_HCSTRING("bounds","\x75","\x86","\x1d","\x66")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(void *) &CanvasGraphics_obj::fillCommands,HX_HCSTRING("fillCommands","\x6b","\xf6","\xc9","\xc2")},
	{hx::fsObject /*::openfl::display::Graphics*/ ,(void *) &CanvasGraphics_obj::graphics,HX_HCSTRING("graphics","\xcb","\xf8","\x67","\x12")},
	{hx::fsBool,(void *) &CanvasGraphics_obj::hasFill,HX_HCSTRING("hasFill","\xfd","\xee","\xff","\x12")},
	{hx::fsBool,(void *) &CanvasGraphics_obj::hasStroke,HX_HCSTRING("hasStroke","\xb2","\x66","\x1d","\x52")},
	{hx::fsObject /*::openfl::geom::Matrix*/ ,(void *) &CanvasGraphics_obj::inversePendingMatrix,HX_HCSTRING("inversePendingMatrix","\x28","\x14","\x8c","\xbb")},
	{hx::fsObject /*::openfl::geom::Matrix*/ ,(void *) &CanvasGraphics_obj::pendingMatrix,HX_HCSTRING("pendingMatrix","\xf8","\x9d","\x96","\xb5")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(void *) &CanvasGraphics_obj::strokeCommands,HX_HCSTRING("strokeCommands","\xa0","\x98","\x2a","\x67")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(CanvasGraphics_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(CanvasGraphics_obj::SIN45,"SIN45");
	HX_MARK_MEMBER_NAME(CanvasGraphics_obj::TAN22,"TAN22");
	HX_MARK_MEMBER_NAME(CanvasGraphics_obj::bitmapFill,"bitmapFill");
	HX_MARK_MEMBER_NAME(CanvasGraphics_obj::bitmapStroke,"bitmapStroke");
	HX_MARK_MEMBER_NAME(CanvasGraphics_obj::bitmapRepeat,"bitmapRepeat");
	HX_MARK_MEMBER_NAME(CanvasGraphics_obj::bounds,"bounds");
	HX_MARK_MEMBER_NAME(CanvasGraphics_obj::fillCommands,"fillCommands");
	HX_MARK_MEMBER_NAME(CanvasGraphics_obj::graphics,"graphics");
	HX_MARK_MEMBER_NAME(CanvasGraphics_obj::hasFill,"hasFill");
	HX_MARK_MEMBER_NAME(CanvasGraphics_obj::hasStroke,"hasStroke");
	HX_MARK_MEMBER_NAME(CanvasGraphics_obj::inversePendingMatrix,"inversePendingMatrix");
	HX_MARK_MEMBER_NAME(CanvasGraphics_obj::pendingMatrix,"pendingMatrix");
	HX_MARK_MEMBER_NAME(CanvasGraphics_obj::strokeCommands,"strokeCommands");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(CanvasGraphics_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(CanvasGraphics_obj::SIN45,"SIN45");
	HX_VISIT_MEMBER_NAME(CanvasGraphics_obj::TAN22,"TAN22");
	HX_VISIT_MEMBER_NAME(CanvasGraphics_obj::bitmapFill,"bitmapFill");
	HX_VISIT_MEMBER_NAME(CanvasGraphics_obj::bitmapStroke,"bitmapStroke");
	HX_VISIT_MEMBER_NAME(CanvasGraphics_obj::bitmapRepeat,"bitmapRepeat");
	HX_VISIT_MEMBER_NAME(CanvasGraphics_obj::bounds,"bounds");
	HX_VISIT_MEMBER_NAME(CanvasGraphics_obj::fillCommands,"fillCommands");
	HX_VISIT_MEMBER_NAME(CanvasGraphics_obj::graphics,"graphics");
	HX_VISIT_MEMBER_NAME(CanvasGraphics_obj::hasFill,"hasFill");
	HX_VISIT_MEMBER_NAME(CanvasGraphics_obj::hasStroke,"hasStroke");
	HX_VISIT_MEMBER_NAME(CanvasGraphics_obj::inversePendingMatrix,"inversePendingMatrix");
	HX_VISIT_MEMBER_NAME(CanvasGraphics_obj::pendingMatrix,"pendingMatrix");
	HX_VISIT_MEMBER_NAME(CanvasGraphics_obj::strokeCommands,"strokeCommands");
};

#endif

hx::Class CanvasGraphics_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("SIN45","\x79","\x16","\xbe","\xfa"),
	HX_HCSTRING("TAN22","\x41","\xf4","\xda","\x88"),
	HX_HCSTRING("bitmapFill","\x12","\x2e","\x19","\x35"),
	HX_HCSTRING("bitmapStroke","\x07","\x55","\x54","\x1c"),
	HX_HCSTRING("bitmapRepeat","\xaa","\x38","\x9c","\x11"),
	HX_HCSTRING("bounds","\x75","\x86","\x1d","\x66"),
	HX_HCSTRING("fillCommands","\x6b","\xf6","\xc9","\xc2"),
	HX_HCSTRING("graphics","\xcb","\xf8","\x67","\x12"),
	HX_HCSTRING("hasFill","\xfd","\xee","\xff","\x12"),
	HX_HCSTRING("hasStroke","\xb2","\x66","\x1d","\x52"),
	HX_HCSTRING("inversePendingMatrix","\x28","\x14","\x8c","\xbb"),
	HX_HCSTRING("pendingMatrix","\xf8","\x9d","\x96","\xb5"),
	HX_HCSTRING("strokeCommands","\xa0","\x98","\x2a","\x67"),
	HX_HCSTRING("createBitmapFill","\x2e","\xac","\x46","\x6a"),
	HX_HCSTRING("createTempPatternCanvas","\xf8","\x58","\x91","\xd0"),
	HX_HCSTRING("endFill","\xfe","\x87","\xe0","\x25"),
	HX_HCSTRING("endStroke","\xf3","\x01","\x17","\x51"),
	HX_HCSTRING("closePath","\x7d","\x65","\x20","\x14"),
	HX_HCSTRING("drawRoundRect","\xee","\xc3","\xaa","\xe2"),
	HX_HCSTRING("isCCW","\x0d","\x84","\x49","\xc1"),
	HX_HCSTRING("normalizeUVT","\x66","\x09","\x2f","\x47"),
	HX_HCSTRING("playCommands","\xdc","\xae","\xee","\x49"),
	HX_HCSTRING("createGradientPattern","\xa4","\xee","\x44","\xf6"),
	HX_HCSTRING("render","\x56","\x6b","\x29","\x05"),
	HX_HCSTRING("renderMask","\x62","\x3b","\x60","\xe5"),
	::String(null()) };

void CanvasGraphics_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("openfl._internal.renderer.canvas.CanvasGraphics","\x7e","\xdf","\x3e","\x3c");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &CanvasGraphics_obj::__GetStatic;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< CanvasGraphics_obj >;
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

void CanvasGraphics_obj::__boot()
{
	SIN45= ((Float)0.70710678118654752440084436210485);
	TAN22= ((Float)0.4142135623730950488016887242097);
}

} // end namespace openfl
} // end namespace _internal
} // end namespace renderer
} // end namespace canvas
