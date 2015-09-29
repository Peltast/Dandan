#include <hxcpp.h>

#include "hxMath.h"
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_lime_graphics_Image
#include <lime/graphics/Image.h>
#endif
#ifndef INCLUDED_lime_graphics_cairo_Cairo
#include <lime/graphics/cairo/Cairo.h>
#endif
#ifndef INCLUDED_lime_graphics_cairo__CairoImageSurface_CairoImageSurface_Impl_
#include <lime/graphics/cairo/_CairoImageSurface/CairoImageSurface_Impl_.h>
#endif
#ifndef INCLUDED_lime_graphics_cairo__CairoPattern_CairoPattern_Impl_
#include <lime/graphics/cairo/_CairoPattern/CairoPattern_Impl_.h>
#endif
#ifndef INCLUDED_lime_graphics_cairo__CairoSurface_CairoSurface_Impl_
#include <lime/graphics/cairo/_CairoSurface/CairoSurface_Impl_.h>
#endif
#ifndef INCLUDED_lime_math_Matrix3
#include <lime/math/Matrix3.h>
#endif
#ifndef INCLUDED_lime_math_Vector2
#include <lime/math/Vector2.h>
#endif
#ifndef INCLUDED_openfl_Lib
#include <openfl/Lib.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_RenderSession
#include <openfl/_internal/renderer/RenderSession.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_cairo_CairoGraphics
#include <openfl/_internal/renderer/cairo/CairoGraphics.h>
#endif
#ifndef INCLUDED_openfl_display_BitmapData
#include <openfl/display/BitmapData.h>
#endif
#ifndef INCLUDED_openfl_display_CapsStyle
#include <openfl/display/CapsStyle.h>
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
#ifndef INCLUDED_openfl_display_JointStyle
#include <openfl/display/JointStyle.h>
#endif
#ifndef INCLUDED_openfl_display_LineScaleMode
#include <openfl/display/LineScaleMode.h>
#endif
#ifndef INCLUDED_openfl_display_SpreadMethod
#include <openfl/display/SpreadMethod.h>
#endif
#ifndef INCLUDED_openfl_display_Tilesheet
#include <openfl/display/Tilesheet.h>
#endif
#ifndef INCLUDED_openfl_display_TriangleCulling
#include <openfl/display/TriangleCulling.h>
#endif
#ifndef INCLUDED_openfl_geom_Matrix
#include <openfl/geom/Matrix.h>
#endif
#ifndef INCLUDED_openfl_geom_Point
#include <openfl/geom/Point.h>
#endif
#ifndef INCLUDED_openfl_geom_Rectangle
#include <openfl/geom/Rectangle.h>
#endif
namespace openfl{
namespace _internal{
namespace renderer{
namespace cairo{

Void CairoGraphics_obj::__construct()
{
	return null();
}

//CairoGraphics_obj::~CairoGraphics_obj() { }

Dynamic CairoGraphics_obj::__CreateEmpty() { return  new CairoGraphics_obj; }
hx::ObjectPtr< CairoGraphics_obj > CairoGraphics_obj::__new()
{  hx::ObjectPtr< CairoGraphics_obj > _result_ = new CairoGraphics_obj();
	_result_->__construct();
	return _result_;}

Dynamic CairoGraphics_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< CairoGraphics_obj > _result_ = new CairoGraphics_obj();
	_result_->__construct();
	return _result_;}

Float CairoGraphics_obj::SIN45;

Float CairoGraphics_obj::TAN22;

::openfl::display::BitmapData CairoGraphics_obj::bitmapFill;

bool CairoGraphics_obj::bitmapRepeat;

::openfl::geom::Rectangle CairoGraphics_obj::bounds;

::lime::graphics::cairo::Cairo CairoGraphics_obj::cairo;

Array< ::Dynamic > CairoGraphics_obj::fillCommands;

Dynamic CairoGraphics_obj::fillPattern;

::openfl::geom::Matrix CairoGraphics_obj::fillPatternMatrix;

::openfl::display::Graphics CairoGraphics_obj::graphics;

bool CairoGraphics_obj::hasFill;

bool CairoGraphics_obj::hasStroke;

::openfl::geom::Matrix CairoGraphics_obj::inversePendingMatrix;

::openfl::geom::Matrix CairoGraphics_obj::pendingMatrix;

Array< ::Dynamic > CairoGraphics_obj::strokeCommands;

Dynamic CairoGraphics_obj::strokePattern;

Void CairoGraphics_obj::drawRoundRect( Float x,Float y,Float width,Float height,Float rx,Float ry){
{
		HX_STACK_FRAME("openfl._internal.renderer.cairo.CairoGraphics","drawRoundRect",0xa42fd4f2,"openfl._internal.renderer.cairo.CairoGraphics.drawRoundRect","openfl/_internal/renderer/cairo/CairoGraphics.hx",54,0x744ae94c)
		HX_STACK_ARG(x,"x")
		HX_STACK_ARG(y,"y")
		HX_STACK_ARG(width,"width")
		HX_STACK_ARG(height,"height")
		HX_STACK_ARG(rx,"rx")
		HX_STACK_ARG(ry,"ry")
		HX_STACK_LINE(56)
		bool tmp = (ry == (int)-1);		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(56)
		if ((tmp)){
			HX_STACK_LINE(56)
			ry = rx;
		}
		HX_STACK_LINE(58)
		hx::MultEq(rx,((Float)0.5));
		HX_STACK_LINE(59)
		hx::MultEq(ry,((Float)0.5));
		HX_STACK_LINE(61)
		Float tmp1 = rx;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(61)
		Float tmp2 = (Float(width) / Float((int)2));		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(61)
		bool tmp3 = (tmp1 > tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(61)
		if ((tmp3)){
			HX_STACK_LINE(61)
			Float tmp4 = (Float(width) / Float((int)2));		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(61)
			rx = tmp4;
		}
		HX_STACK_LINE(62)
		Float tmp4 = ry;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(62)
		Float tmp5 = (Float(height) / Float((int)2));		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(62)
		bool tmp6 = (tmp4 > tmp5);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(62)
		if ((tmp6)){
			HX_STACK_LINE(62)
			Float tmp7 = (Float(height) / Float((int)2));		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(62)
			ry = tmp7;
		}
		HX_STACK_LINE(64)
		Float tmp7 = (x + width);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(64)
		Float xe = tmp7;		HX_STACK_VAR(xe,"xe");
		HX_STACK_LINE(65)
		Float tmp8 = (y + height);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(65)
		Float ye = tmp8;		HX_STACK_VAR(ye,"ye");
		HX_STACK_LINE(66)
		Float tmp9 = rx;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(66)
		Float tmp10 = -(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(66)
		Float tmp11 = rx;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(66)
		Float tmp12 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::SIN45;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(66)
		Float tmp13 = (tmp11 * tmp12);		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(66)
		Float tmp14 = (tmp10 + tmp13);		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(66)
		Float cx1 = tmp14;		HX_STACK_VAR(cx1,"cx1");
		HX_STACK_LINE(67)
		Float tmp15 = rx;		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(67)
		Float tmp16 = -(tmp15);		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(67)
		Float tmp17 = rx;		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(67)
		Float tmp18 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::TAN22;		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(67)
		Float tmp19 = (tmp17 * tmp18);		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(67)
		Float tmp20 = (tmp16 + tmp19);		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(67)
		Float cx2 = tmp20;		HX_STACK_VAR(cx2,"cx2");
		HX_STACK_LINE(68)
		Float tmp21 = ry;		HX_STACK_VAR(tmp21,"tmp21");
		HX_STACK_LINE(68)
		Float tmp22 = -(tmp21);		HX_STACK_VAR(tmp22,"tmp22");
		HX_STACK_LINE(68)
		Float tmp23 = ry;		HX_STACK_VAR(tmp23,"tmp23");
		HX_STACK_LINE(68)
		Float tmp24 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::SIN45;		HX_STACK_VAR(tmp24,"tmp24");
		HX_STACK_LINE(68)
		Float tmp25 = (tmp23 * tmp24);		HX_STACK_VAR(tmp25,"tmp25");
		HX_STACK_LINE(68)
		Float tmp26 = (tmp22 + tmp25);		HX_STACK_VAR(tmp26,"tmp26");
		HX_STACK_LINE(68)
		Float cy1 = tmp26;		HX_STACK_VAR(cy1,"cy1");
		HX_STACK_LINE(69)
		Float tmp27 = ry;		HX_STACK_VAR(tmp27,"tmp27");
		HX_STACK_LINE(69)
		Float tmp28 = -(tmp27);		HX_STACK_VAR(tmp28,"tmp28");
		HX_STACK_LINE(69)
		Float tmp29 = ry;		HX_STACK_VAR(tmp29,"tmp29");
		HX_STACK_LINE(69)
		Float tmp30 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::TAN22;		HX_STACK_VAR(tmp30,"tmp30");
		HX_STACK_LINE(69)
		Float tmp31 = (tmp29 * tmp30);		HX_STACK_VAR(tmp31,"tmp31");
		HX_STACK_LINE(69)
		Float tmp32 = (tmp28 + tmp31);		HX_STACK_VAR(tmp32,"tmp32");
		HX_STACK_LINE(69)
		Float cy2 = tmp32;		HX_STACK_VAR(cy2,"cy2");
		HX_STACK_LINE(71)
		::lime::graphics::cairo::Cairo tmp33 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::cairo;		HX_STACK_VAR(tmp33,"tmp33");
		HX_STACK_LINE(71)
		Float tmp34 = xe;		HX_STACK_VAR(tmp34,"tmp34");
		HX_STACK_LINE(71)
		Float tmp35 = (ye - ry);		HX_STACK_VAR(tmp35,"tmp35");
		HX_STACK_LINE(71)
		tmp33->moveTo(tmp34,tmp35);
		HX_STACK_LINE(72)
		Float tmp36 = xe;		HX_STACK_VAR(tmp36,"tmp36");
		HX_STACK_LINE(72)
		Float tmp37 = (ye + cy2);		HX_STACK_VAR(tmp37,"tmp37");
		HX_STACK_LINE(72)
		Float tmp38 = (xe + cx1);		HX_STACK_VAR(tmp38,"tmp38");
		HX_STACK_LINE(72)
		Float tmp39 = (ye + cy1);		HX_STACK_VAR(tmp39,"tmp39");
		HX_STACK_LINE(72)
		::openfl::_internal::renderer::cairo::CairoGraphics_obj::quadraticCurveTo(tmp36,tmp37,tmp38,tmp39);
		HX_STACK_LINE(73)
		Float tmp40 = (xe + cx2);		HX_STACK_VAR(tmp40,"tmp40");
		HX_STACK_LINE(73)
		Float tmp41 = ye;		HX_STACK_VAR(tmp41,"tmp41");
		HX_STACK_LINE(73)
		Float tmp42 = (xe - rx);		HX_STACK_VAR(tmp42,"tmp42");
		HX_STACK_LINE(73)
		Float tmp43 = ye;		HX_STACK_VAR(tmp43,"tmp43");
		HX_STACK_LINE(73)
		::openfl::_internal::renderer::cairo::CairoGraphics_obj::quadraticCurveTo(tmp40,tmp41,tmp42,tmp43);
		HX_STACK_LINE(74)
		::lime::graphics::cairo::Cairo tmp44 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::cairo;		HX_STACK_VAR(tmp44,"tmp44");
		HX_STACK_LINE(74)
		Float tmp45 = (x + rx);		HX_STACK_VAR(tmp45,"tmp45");
		HX_STACK_LINE(74)
		Float tmp46 = ye;		HX_STACK_VAR(tmp46,"tmp46");
		HX_STACK_LINE(74)
		tmp44->lineTo(tmp45,tmp46);
		HX_STACK_LINE(75)
		Float tmp47 = (x - cx2);		HX_STACK_VAR(tmp47,"tmp47");
		HX_STACK_LINE(75)
		Float tmp48 = ye;		HX_STACK_VAR(tmp48,"tmp48");
		HX_STACK_LINE(75)
		Float tmp49 = (x - cx1);		HX_STACK_VAR(tmp49,"tmp49");
		HX_STACK_LINE(75)
		Float tmp50 = (ye + cy1);		HX_STACK_VAR(tmp50,"tmp50");
		HX_STACK_LINE(75)
		::openfl::_internal::renderer::cairo::CairoGraphics_obj::quadraticCurveTo(tmp47,tmp48,tmp49,tmp50);
		HX_STACK_LINE(76)
		Float tmp51 = x;		HX_STACK_VAR(tmp51,"tmp51");
		HX_STACK_LINE(76)
		Float tmp52 = (ye + cy2);		HX_STACK_VAR(tmp52,"tmp52");
		HX_STACK_LINE(76)
		Float tmp53 = x;		HX_STACK_VAR(tmp53,"tmp53");
		HX_STACK_LINE(76)
		Float tmp54 = (ye - ry);		HX_STACK_VAR(tmp54,"tmp54");
		HX_STACK_LINE(76)
		::openfl::_internal::renderer::cairo::CairoGraphics_obj::quadraticCurveTo(tmp51,tmp52,tmp53,tmp54);
		HX_STACK_LINE(77)
		::lime::graphics::cairo::Cairo tmp55 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::cairo;		HX_STACK_VAR(tmp55,"tmp55");
		HX_STACK_LINE(77)
		Float tmp56 = x;		HX_STACK_VAR(tmp56,"tmp56");
		HX_STACK_LINE(77)
		Float tmp57 = (y + ry);		HX_STACK_VAR(tmp57,"tmp57");
		HX_STACK_LINE(77)
		tmp55->lineTo(tmp56,tmp57);
		HX_STACK_LINE(78)
		Float tmp58 = x;		HX_STACK_VAR(tmp58,"tmp58");
		HX_STACK_LINE(78)
		Float tmp59 = (y - cy2);		HX_STACK_VAR(tmp59,"tmp59");
		HX_STACK_LINE(78)
		Float tmp60 = (x - cx1);		HX_STACK_VAR(tmp60,"tmp60");
		HX_STACK_LINE(78)
		Float tmp61 = (y - cy1);		HX_STACK_VAR(tmp61,"tmp61");
		HX_STACK_LINE(78)
		::openfl::_internal::renderer::cairo::CairoGraphics_obj::quadraticCurveTo(tmp58,tmp59,tmp60,tmp61);
		HX_STACK_LINE(79)
		Float tmp62 = (x - cx2);		HX_STACK_VAR(tmp62,"tmp62");
		HX_STACK_LINE(79)
		Float tmp63 = y;		HX_STACK_VAR(tmp63,"tmp63");
		HX_STACK_LINE(79)
		Float tmp64 = (x + rx);		HX_STACK_VAR(tmp64,"tmp64");
		HX_STACK_LINE(79)
		Float tmp65 = y;		HX_STACK_VAR(tmp65,"tmp65");
		HX_STACK_LINE(79)
		::openfl::_internal::renderer::cairo::CairoGraphics_obj::quadraticCurveTo(tmp62,tmp63,tmp64,tmp65);
		HX_STACK_LINE(80)
		::lime::graphics::cairo::Cairo tmp66 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::cairo;		HX_STACK_VAR(tmp66,"tmp66");
		HX_STACK_LINE(80)
		Float tmp67 = (xe - rx);		HX_STACK_VAR(tmp67,"tmp67");
		HX_STACK_LINE(80)
		Float tmp68 = y;		HX_STACK_VAR(tmp68,"tmp68");
		HX_STACK_LINE(80)
		tmp66->lineTo(tmp67,tmp68);
		HX_STACK_LINE(81)
		Float tmp69 = (xe + cx2);		HX_STACK_VAR(tmp69,"tmp69");
		HX_STACK_LINE(81)
		Float tmp70 = y;		HX_STACK_VAR(tmp70,"tmp70");
		HX_STACK_LINE(81)
		Float tmp71 = (xe + cx1);		HX_STACK_VAR(tmp71,"tmp71");
		HX_STACK_LINE(81)
		Float tmp72 = (y - cy1);		HX_STACK_VAR(tmp72,"tmp72");
		HX_STACK_LINE(81)
		::openfl::_internal::renderer::cairo::CairoGraphics_obj::quadraticCurveTo(tmp69,tmp70,tmp71,tmp72);
		HX_STACK_LINE(82)
		Float tmp73 = xe;		HX_STACK_VAR(tmp73,"tmp73");
		HX_STACK_LINE(82)
		Float tmp74 = (y - cy2);		HX_STACK_VAR(tmp74,"tmp74");
		HX_STACK_LINE(82)
		Float tmp75 = xe;		HX_STACK_VAR(tmp75,"tmp75");
		HX_STACK_LINE(82)
		Float tmp76 = (y + ry);		HX_STACK_VAR(tmp76,"tmp76");
		HX_STACK_LINE(82)
		::openfl::_internal::renderer::cairo::CairoGraphics_obj::quadraticCurveTo(tmp73,tmp74,tmp75,tmp76);
		HX_STACK_LINE(83)
		::lime::graphics::cairo::Cairo tmp77 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::cairo;		HX_STACK_VAR(tmp77,"tmp77");
		HX_STACK_LINE(83)
		Float tmp78 = xe;		HX_STACK_VAR(tmp78,"tmp78");
		HX_STACK_LINE(83)
		Float tmp79 = (ye - ry);		HX_STACK_VAR(tmp79,"tmp79");
		HX_STACK_LINE(83)
		tmp77->lineTo(tmp78,tmp79);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC6(CairoGraphics_obj,drawRoundRect,(void))

Void CairoGraphics_obj::endFill( ){
{
		HX_STACK_FRAME("openfl._internal.renderer.cairo.CairoGraphics","endFill",0x21233e02,"openfl._internal.renderer.cairo.CairoGraphics.endFill","openfl/_internal/renderer/cairo/CairoGraphics.hx",88,0x744ae94c)
		HX_STACK_LINE(90)
		::lime::graphics::cairo::Cairo tmp = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::cairo;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(90)
		tmp->newPath();
		HX_STACK_LINE(91)
		::openfl::_internal::renderer::cairo::CairoGraphics_obj::playCommands(::openfl::_internal::renderer::cairo::CairoGraphics_obj::fillCommands,false);
		HX_STACK_LINE(92)
		::openfl::_internal::renderer::cairo::CairoGraphics_obj::fillCommands = Array_obj< ::Dynamic >::__new();
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(CairoGraphics_obj,endFill,(void))

Void CairoGraphics_obj::endStroke( ){
{
		HX_STACK_FRAME("openfl._internal.renderer.cairo.CairoGraphics","endStroke",0xaaf640f7,"openfl._internal.renderer.cairo.CairoGraphics.endStroke","openfl/_internal/renderer/cairo/CairoGraphics.hx",97,0x744ae94c)
		HX_STACK_LINE(99)
		::lime::graphics::cairo::Cairo tmp = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::cairo;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(99)
		tmp->newPath();
		HX_STACK_LINE(100)
		::openfl::_internal::renderer::cairo::CairoGraphics_obj::playCommands(::openfl::_internal::renderer::cairo::CairoGraphics_obj::strokeCommands,true);
		HX_STACK_LINE(101)
		::lime::graphics::cairo::Cairo tmp1 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::cairo;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(101)
		tmp1->closePath();
		HX_STACK_LINE(102)
		::openfl::_internal::renderer::cairo::CairoGraphics_obj::strokeCommands = Array_obj< ::Dynamic >::__new();
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(CairoGraphics_obj,endStroke,(void))

Void CairoGraphics_obj::closePath( ){
{
		HX_STACK_FRAME("openfl._internal.renderer.cairo.CairoGraphics","closePath",0x6dffa481,"openfl._internal.renderer.cairo.CairoGraphics.closePath","openfl/_internal/renderer/cairo/CairoGraphics.hx",107,0x744ae94c)
		HX_STACK_LINE(109)
		Dynamic tmp = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::strokePattern;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(109)
		bool tmp1 = (tmp == null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(109)
		if ((tmp1)){
			HX_STACK_LINE(111)
			return null();
		}
		HX_STACK_LINE(115)
		::lime::graphics::cairo::Cairo tmp2 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::cairo;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(115)
		tmp2->closePath();
		HX_STACK_LINE(116)
		::lime::graphics::cairo::Cairo tmp3 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::cairo;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(116)
		Dynamic tmp4 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::strokePattern;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(116)
		tmp3->set_source(tmp4);
		HX_STACK_LINE(117)
		::lime::graphics::cairo::Cairo tmp5 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::cairo;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(117)
		tmp5->strokePreserve();
		HX_STACK_LINE(118)
		::lime::graphics::cairo::Cairo tmp6 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::cairo;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(118)
		tmp6->newPath();
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(CairoGraphics_obj,closePath,(void))

Dynamic CairoGraphics_obj::createGradientPattern( ::openfl::display::GradientType type,cpp::ArrayBase colors,cpp::ArrayBase alphas,cpp::ArrayBase ratios,::openfl::geom::Matrix matrix,::openfl::display::SpreadMethod spreadMethod,::openfl::display::InterpolationMethod interpolationMethod,Dynamic focalPointRatio){
	HX_STACK_FRAME("openfl._internal.renderer.cairo.CairoGraphics","createGradientPattern",0x9888a3a8,"openfl._internal.renderer.cairo.CairoGraphics.createGradientPattern","openfl/_internal/renderer/cairo/CairoGraphics.hx",123,0x744ae94c)
	HX_STACK_ARG(type,"type")
	HX_STACK_ARG(colors,"colors")
	HX_STACK_ARG(alphas,"alphas")
	HX_STACK_ARG(ratios,"ratios")
	HX_STACK_ARG(matrix,"matrix")
	HX_STACK_ARG(spreadMethod,"spreadMethod")
	HX_STACK_ARG(interpolationMethod,"interpolationMethod")
	HX_STACK_ARG(focalPointRatio,"focalPointRatio")
	HX_STACK_LINE(125)
	Dynamic pattern = null();		HX_STACK_VAR(pattern,"pattern");
	HX_STACK_LINE(127)
	switch( (int)(type->__Index())){
		case (int)0: {
			HX_STACK_LINE(131)
			bool tmp = (matrix == null());		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(131)
			if ((tmp)){
				HX_STACK_LINE(131)
				::openfl::geom::Matrix tmp1 = ::openfl::geom::Matrix_obj::__new(null(),null(),null(),null(),null(),null());		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(131)
				matrix = tmp1;
			}
			HX_STACK_LINE(133)
			::openfl::geom::Point tmp1 = ::openfl::geom::Point_obj::__new(((Float)1638.4),(int)0);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(133)
			::openfl::geom::Point tmp2 = matrix->transformPoint(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(133)
			::openfl::geom::Point point = tmp2;		HX_STACK_VAR(point,"point");
			HX_STACK_LINE(135)
			Float tmp3 = matrix->tx;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(135)
			::openfl::display::Graphics tmp4 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::graphics;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(135)
			Float tmp5 = tmp4->__bounds->x;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(135)
			Float tmp6 = (tmp3 + tmp5);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(135)
			Float x = tmp6;		HX_STACK_VAR(x,"x");
			HX_STACK_LINE(136)
			Float tmp7 = matrix->ty;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(136)
			::openfl::display::Graphics tmp8 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::graphics;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(136)
			Float tmp9 = tmp8->__bounds->y;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(136)
			Float tmp10 = (tmp7 + tmp9);		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(136)
			Float y = tmp10;		HX_STACK_VAR(y,"y");
			HX_STACK_LINE(138)
			Float tmp11 = x;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(138)
			Float tmp12 = y;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(138)
			Float tmp13 = x;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(138)
			Float tmp14 = y;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(138)
			Float tmp15 = (point->x - matrix->tx);		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(138)
			Float tmp16 = (Float(tmp15) / Float((int)2));		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(138)
			Dynamic tmp17 = ::lime::graphics::cairo::_CairoPattern::CairoPattern_Impl__obj::createRadial(tmp11,tmp12,(int)0,tmp13,tmp14,tmp16);		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(138)
			pattern = tmp17;
		}
		;break;
		case (int)1: {
			HX_STACK_LINE(142)
			bool tmp = (matrix == null());		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(142)
			if ((tmp)){
				HX_STACK_LINE(142)
				::openfl::geom::Matrix tmp1 = ::openfl::geom::Matrix_obj::__new(null(),null(),null(),null(),null(),null());		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(142)
				matrix = tmp1;
			}
			HX_STACK_LINE(144)
			::openfl::geom::Point tmp1 = ::openfl::geom::Point_obj::__new(((Float)-819.2),(int)0);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(144)
			::openfl::geom::Point tmp2 = matrix->transformPoint(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(144)
			::openfl::geom::Point point1 = tmp2;		HX_STACK_VAR(point1,"point1");
			HX_STACK_LINE(145)
			::openfl::geom::Point tmp3 = ::openfl::geom::Point_obj::__new(((Float)819.2),(int)0);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(145)
			::openfl::geom::Point tmp4 = matrix->transformPoint(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(145)
			::openfl::geom::Point point2 = tmp4;		HX_STACK_VAR(point2,"point2");
			HX_STACK_LINE(147)
			::openfl::display::Graphics tmp5 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::graphics;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(147)
			Float tmp6 = tmp5->__bounds->x;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(147)
			hx::AddEq(point1->x,tmp6);
			HX_STACK_LINE(148)
			::openfl::display::Graphics tmp7 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::graphics;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(148)
			Float tmp8 = tmp7->__bounds->x;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(148)
			hx::AddEq(point2->x,tmp8);
			HX_STACK_LINE(149)
			::openfl::display::Graphics tmp9 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::graphics;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(149)
			Float tmp10 = tmp9->__bounds->y;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(149)
			hx::AddEq(point1->y,tmp10);
			HX_STACK_LINE(150)
			::openfl::display::Graphics tmp11 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::graphics;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(150)
			Float tmp12 = tmp11->__bounds->y;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(150)
			hx::AddEq(point2->y,tmp12);
			HX_STACK_LINE(152)
			Float tmp13 = point1->x;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(152)
			Float tmp14 = point1->y;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(152)
			Float tmp15 = point2->x;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(152)
			Float tmp16 = point2->y;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(152)
			Dynamic tmp17 = ::lime::graphics::cairo::_CairoPattern::CairoPattern_Impl__obj::createLinear(tmp13,tmp14,tmp15,tmp16);		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(152)
			pattern = tmp17;
		}
		;break;
	}
	HX_STACK_LINE(156)
	{
		HX_STACK_LINE(156)
		int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(156)
		int _g = colors->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(156)
		while((true)){
			HX_STACK_LINE(156)
			bool tmp = (_g1 < _g);		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(156)
			bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(156)
			if ((tmp1)){
				HX_STACK_LINE(156)
				break;
			}
			HX_STACK_LINE(156)
			int tmp2 = (_g1)++;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(156)
			int i = tmp2;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(158)
			Dynamic tmp3 = colors->__GetItem(i);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(158)
			int rgb = tmp3;		HX_STACK_VAR(rgb,"rgb");
			HX_STACK_LINE(159)
			Dynamic tmp4 = alphas->__GetItem(i);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(159)
			Float alpha = tmp4;		HX_STACK_VAR(alpha,"alpha");
			HX_STACK_LINE(160)
			int tmp5 = (int(rgb) & int((int)16711680));		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(160)
			int tmp6 = hx::UShr(tmp5,(int)16);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(160)
			Float tmp7 = (Float(tmp6) / Float((int)255));		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(160)
			Float r = tmp7;		HX_STACK_VAR(r,"r");
			HX_STACK_LINE(161)
			int tmp8 = (int(rgb) & int((int)65280));		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(161)
			int tmp9 = hx::UShr(tmp8,(int)8);		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(161)
			Float tmp10 = (Float(tmp9) / Float((int)255));		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(161)
			Float g = tmp10;		HX_STACK_VAR(g,"g");
			HX_STACK_LINE(162)
			int tmp11 = (int(rgb) & int((int)255));		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(162)
			Float tmp12 = (Float(tmp11) / Float((int)255));		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(162)
			Float b = tmp12;		HX_STACK_VAR(b,"b");
			HX_STACK_LINE(164)
			Dynamic tmp13 = ratios->__GetItem(i);		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(164)
			Float tmp14 = (Float(tmp13) / Float((int)255));		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(164)
			Float ratio = tmp14;		HX_STACK_VAR(ratio,"ratio");
			HX_STACK_LINE(165)
			bool tmp15 = (ratio < (int)0);		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(165)
			if ((tmp15)){
				HX_STACK_LINE(165)
				ratio = (int)0;
			}
			HX_STACK_LINE(166)
			bool tmp16 = (ratio > (int)1);		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(166)
			if ((tmp16)){
				HX_STACK_LINE(166)
				ratio = (int)1;
			}
			HX_STACK_LINE(168)
			Dynamic tmp17 = pattern;		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(168)
			Float tmp18 = ratio;		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(168)
			Float tmp19 = r;		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(168)
			Float tmp20 = g;		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(168)
			Float tmp21 = b;		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(168)
			Float tmp22 = alpha;		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(168)
			::lime::graphics::cairo::_CairoPattern::CairoPattern_Impl__obj::addColorStopRGBA(tmp17,tmp18,tmp19,tmp20,tmp21,tmp22);
		}
	}
	HX_STACK_LINE(172)
	Dynamic tmp = pattern;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(172)
	::lime::math::Matrix3 tmp1 = ::lime::graphics::cairo::_CairoPattern::CairoPattern_Impl__obj::get_matrix(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(172)
	::lime::math::Matrix3 mat = tmp1;		HX_STACK_VAR(mat,"mat");
	HX_STACK_LINE(174)
	::openfl::geom::Rectangle tmp2 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::bounds;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(174)
	mat->tx = tmp2->x;
	HX_STACK_LINE(175)
	::openfl::geom::Rectangle tmp3 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::bounds;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(175)
	mat->ty = tmp3->y;
	HX_STACK_LINE(177)
	Dynamic tmp4 = pattern;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(177)
	::lime::math::Matrix3 tmp5 = mat;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(177)
	::lime::graphics::cairo::_CairoPattern::CairoPattern_Impl__obj::set_matrix(tmp4,tmp5);
	HX_STACK_LINE(179)
	Dynamic tmp6 = pattern;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(179)
	return tmp6;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC8(CairoGraphics_obj,createGradientPattern,return )

Dynamic CairoGraphics_obj::createImagePattern( ::openfl::display::BitmapData bitmapFill,::openfl::geom::Matrix matrix,bool bitmapRepeat){
	HX_STACK_FRAME("openfl._internal.renderer.cairo.CairoGraphics","createImagePattern",0x42487dcd,"openfl._internal.renderer.cairo.CairoGraphics.createImagePattern","openfl/_internal/renderer/cairo/CairoGraphics.hx",184,0x744ae94c)
	HX_STACK_ARG(bitmapFill,"bitmapFill")
	HX_STACK_ARG(matrix,"matrix")
	HX_STACK_ARG(bitmapRepeat,"bitmapRepeat")
	HX_STACK_LINE(186)
	Dynamic tmp = bitmapFill->getSurface();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(186)
	Dynamic tmp1 = ::lime::graphics::cairo::_CairoPattern::CairoPattern_Impl__obj::createForSurface(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(186)
	Dynamic pattern = tmp1;		HX_STACK_VAR(pattern,"pattern");
	HX_STACK_LINE(188)
	bool tmp2 = bitmapRepeat;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(188)
	if ((tmp2)){
		HX_STACK_LINE(190)
		Dynamic tmp3 = pattern;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(190)
		::lime::graphics::cairo::_CairoPattern::CairoPattern_Impl__obj::set_extend(tmp3,(int)1);
	}
	HX_STACK_LINE(194)
	::openfl::_internal::renderer::cairo::CairoGraphics_obj::fillPatternMatrix = matrix;
	HX_STACK_LINE(196)
	Dynamic tmp3 = pattern;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(196)
	return tmp3;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(CairoGraphics_obj,createImagePattern,return )

bool CairoGraphics_obj::isCCW( Float x1,Float y1,Float x2,Float y2,Float x3,Float y3){
	HX_STACK_FRAME("openfl._internal.renderer.cairo.CairoGraphics","isCCW",0x5353f111,"openfl._internal.renderer.cairo.CairoGraphics.isCCW","openfl/_internal/renderer/cairo/CairoGraphics.hx",201,0x744ae94c)
	HX_STACK_ARG(x1,"x1")
	HX_STACK_ARG(y1,"y1")
	HX_STACK_ARG(x2,"x2")
	HX_STACK_ARG(y2,"y2")
	HX_STACK_ARG(x3,"x3")
	HX_STACK_ARG(y3,"y3")
	HX_STACK_LINE(203)
	Float tmp = (x2 - x1);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(203)
	Float tmp1 = (y3 - y1);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(203)
	Float tmp2 = (tmp * tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(203)
	Float tmp3 = (y2 - y1);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(203)
	Float tmp4 = (x3 - x1);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(203)
	Float tmp5 = (tmp3 * tmp4);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(203)
	Float tmp6 = (tmp2 - tmp5);		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(203)
	bool tmp7 = (tmp6 < (int)0);		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(203)
	return tmp7;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC6(CairoGraphics_obj,isCCW,return )

Dynamic CairoGraphics_obj::normalizeUVT( Array< Float > uvt,hx::Null< bool >  __o_skipT){
bool skipT = __o_skipT.Default(false);
	HX_STACK_FRAME("openfl._internal.renderer.cairo.CairoGraphics","normalizeUVT",0xc9c604e2,"openfl._internal.renderer.cairo.CairoGraphics.normalizeUVT","openfl/_internal/renderer/cairo/CairoGraphics.hx",208,0x744ae94c)
	HX_STACK_ARG(uvt,"uvt")
	HX_STACK_ARG(skipT,"skipT")
{
		HX_STACK_LINE(210)
		Float tmp = ::Math_obj::NEGATIVE_INFINITY;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(210)
		Float max = tmp;		HX_STACK_VAR(max,"max");
		HX_STACK_LINE(211)
		Float tmp1 = ::Math_obj::NEGATIVE_INFINITY;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(211)
		Float tmp2 = tmp1;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(212)
		int tmp3 = uvt->length;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(212)
		int len = tmp3;		HX_STACK_VAR(len,"len");
		HX_STACK_LINE(214)
		{
			HX_STACK_LINE(214)
			int _g1 = (int)1;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(214)
			int tmp4 = (len + (int)1);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(214)
			int _g = tmp4;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(214)
			while((true)){
				HX_STACK_LINE(214)
				bool tmp5 = (_g1 < _g);		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(214)
				bool tmp6 = !(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(214)
				if ((tmp6)){
					HX_STACK_LINE(214)
					break;
				}
				HX_STACK_LINE(214)
				int tmp7 = (_g1)++;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(214)
				int t = tmp7;		HX_STACK_VAR(t,"t");
				HX_STACK_LINE(216)
				bool tmp8 = skipT;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(216)
				bool tmp9;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(216)
				if ((tmp8)){
					HX_STACK_LINE(216)
					int tmp10 = hx::Mod(t,(int)3);		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(216)
					int tmp11 = tmp10;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(216)
					tmp9 = (tmp11 == (int)0);
				}
				else{
					HX_STACK_LINE(216)
					tmp9 = false;
				}
				HX_STACK_LINE(216)
				if ((tmp9)){
					HX_STACK_LINE(218)
					continue;
				}
				HX_STACK_LINE(222)
				int tmp10 = (t - (int)1);		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(222)
				Float tmp11 = uvt->__get(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(222)
				tmp2 = ((Dynamic)(tmp11));
				HX_STACK_LINE(224)
				bool tmp12 = (max < tmp2);		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(224)
				if ((tmp12)){
					HX_STACK_LINE(226)
					max = tmp2;
				}
			}
		}
		HX_STACK_LINE(232)
		Array< Float > tmp4;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(232)
		{
			HX_STACK_LINE(232)
			Array< Float > this1;		HX_STACK_VAR(this1,"this1");
			HX_STACK_LINE(232)
			this1 = Array_obj< Float >::__new()->__SetSizeExact(null());
			HX_STACK_LINE(232)
			tmp4 = this1;
		}
		HX_STACK_LINE(232)
		Array< Float > result = tmp4;		HX_STACK_VAR(result,"result");
		HX_STACK_LINE(234)
		{
			HX_STACK_LINE(234)
			int _g1 = (int)1;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(234)
			int tmp5 = (len + (int)1);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(234)
			int _g = tmp5;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(234)
			while((true)){
				HX_STACK_LINE(234)
				bool tmp6 = (_g1 < _g);		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(234)
				bool tmp7 = !(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(234)
				if ((tmp7)){
					HX_STACK_LINE(234)
					break;
				}
				HX_STACK_LINE(234)
				int tmp8 = (_g1)++;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(234)
				int t = tmp8;		HX_STACK_VAR(t,"t");
				HX_STACK_LINE(236)
				bool tmp9 = skipT;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(236)
				bool tmp10;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(236)
				if ((tmp9)){
					HX_STACK_LINE(236)
					int tmp11 = hx::Mod(t,(int)3);		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(236)
					int tmp12 = tmp11;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(236)
					tmp10 = (tmp12 == (int)0);
				}
				else{
					HX_STACK_LINE(236)
					tmp10 = false;
				}
				HX_STACK_LINE(236)
				if ((tmp10)){
					HX_STACK_LINE(238)
					continue;
				}
				HX_STACK_LINE(242)
				int tmp11 = (t - (int)1);		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(242)
				Float tmp12 = uvt->__get(tmp11);		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(242)
				Dynamic tmp13 = ((Dynamic)(tmp12));		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(242)
				Float tmp14 = max;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(242)
				Float tmp15 = (Float(tmp13) / Float(tmp14));		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(242)
				result->push(tmp15);
			}
		}
		struct _Function_1_1{
			inline static Dynamic Block( Array< Float > &result,Float &max){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","openfl/_internal/renderer/cairo/CairoGraphics.hx",246,0x744ae94c)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_HCSTRING("max","\xa4","\x0a","\x53","\x00") , max,false);
					__result->Add(HX_HCSTRING("uvt","\xf3","\x2e","\x59","\x00") , result,false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(246)
		Dynamic tmp5 = _Function_1_1::Block(result,max);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(246)
		return tmp5;
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(CairoGraphics_obj,normalizeUVT,return )

Void CairoGraphics_obj::playCommands( Array< ::Dynamic > commands,hx::Null< bool >  __o_stroke){
bool stroke = __o_stroke.Default(false);
	HX_STACK_FRAME("openfl._internal.renderer.cairo.CairoGraphics","playCommands",0xcc85aa58,"openfl._internal.renderer.cairo.CairoGraphics.playCommands","openfl/_internal/renderer/cairo/CairoGraphics.hx",251,0x744ae94c)
	HX_STACK_ARG(commands,"commands")
	HX_STACK_ARG(stroke,"stroke")
{
		HX_STACK_LINE(253)
		::openfl::display::Graphics tmp = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::graphics;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(253)
		::openfl::_internal::renderer::cairo::CairoGraphics_obj::bounds = tmp->__bounds;
		HX_STACK_LINE(255)
		::openfl::geom::Rectangle tmp1 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::bounds;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(255)
		Float offsetX = tmp1->x;		HX_STACK_VAR(offsetX,"offsetX");
		HX_STACK_LINE(256)
		::openfl::geom::Rectangle tmp2 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::bounds;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(256)
		Float offsetY = tmp2->y;		HX_STACK_VAR(offsetY,"offsetY");
		HX_STACK_LINE(258)
		Float positionX = ((Float)0.0);		HX_STACK_VAR(positionX,"positionX");
		HX_STACK_LINE(259)
		Float positionY = ((Float)0.0);		HX_STACK_VAR(positionY,"positionY");
		HX_STACK_LINE(261)
		bool closeGap = false;		HX_STACK_VAR(closeGap,"closeGap");
		HX_STACK_LINE(262)
		Float startX = ((Float)0.0);		HX_STACK_VAR(startX,"startX");
		HX_STACK_LINE(263)
		Float startY = ((Float)0.0);		HX_STACK_VAR(startY,"startY");
		HX_STACK_LINE(265)
		::lime::graphics::cairo::Cairo tmp3 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::cairo;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(265)
		tmp3->set_fillRule((int)1);
		HX_STACK_LINE(266)
		::lime::graphics::cairo::Cairo tmp4 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::cairo;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(266)
		tmp4->set_antialias((int)3);
		HX_STACK_LINE(268)
		bool hasPath = false;		HX_STACK_VAR(hasPath,"hasPath");
		HX_STACK_LINE(270)
		{
			HX_STACK_LINE(270)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(270)
			while((true)){
				HX_STACK_LINE(270)
				bool tmp5 = (_g < commands->length);		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(270)
				bool tmp6 = !(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(270)
				if ((tmp6)){
					HX_STACK_LINE(270)
					break;
				}
				HX_STACK_LINE(270)
				::openfl::display::DrawCommand tmp7 = commands->__get(_g).StaticCast< ::openfl::display::DrawCommand >();		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(270)
				::openfl::display::DrawCommand command = tmp7;		HX_STACK_VAR(command,"command");
				HX_STACK_LINE(270)
				++(_g);
				HX_STACK_LINE(272)
				int _switch_1 = (command->__Index());
				if (  ( _switch_1==(int)3)){
					HX_STACK_LINE(272)
					Float tmp8 = (::openfl::display::DrawCommand(command))->__Param(5);		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(272)
					Float y = tmp8;		HX_STACK_VAR(y,"y");
					HX_STACK_LINE(272)
					Float tmp9 = (::openfl::display::DrawCommand(command))->__Param(4);		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(272)
					Float x = tmp9;		HX_STACK_VAR(x,"x");
					HX_STACK_LINE(272)
					Float tmp10 = (::openfl::display::DrawCommand(command))->__Param(3);		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(272)
					Float cy2 = tmp10;		HX_STACK_VAR(cy2,"cy2");
					HX_STACK_LINE(272)
					Float tmp11 = (::openfl::display::DrawCommand(command))->__Param(2);		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(272)
					Float cx2 = tmp11;		HX_STACK_VAR(cx2,"cx2");
					HX_STACK_LINE(272)
					Float tmp12 = (::openfl::display::DrawCommand(command))->__Param(1);		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(272)
					Float cy1 = tmp12;		HX_STACK_VAR(cy1,"cy1");
					HX_STACK_LINE(272)
					Float tmp13 = (::openfl::display::DrawCommand(command))->__Param(0);		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(272)
					Float cx1 = tmp13;		HX_STACK_VAR(cx1,"cx1");
					HX_STACK_LINE(274)
					{
						HX_STACK_LINE(276)
						hasPath = true;
						HX_STACK_LINE(277)
						::lime::graphics::cairo::Cairo tmp14 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::cairo;		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(277)
						Float tmp15 = (cx1 - offsetX);		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(277)
						Float tmp16 = (cy1 - offsetY);		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(277)
						Float tmp17 = (cx2 - offsetX);		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(277)
						Float tmp18 = (cy2 - offsetY);		HX_STACK_VAR(tmp18,"tmp18");
						HX_STACK_LINE(277)
						Float tmp19 = (x - offsetX);		HX_STACK_VAR(tmp19,"tmp19");
						HX_STACK_LINE(277)
						Float tmp20 = (y - offsetY);		HX_STACK_VAR(tmp20,"tmp20");
						HX_STACK_LINE(277)
						tmp14->curveTo(tmp15,tmp16,tmp17,tmp18,tmp19,tmp20);
					}
				}
				else if (  ( _switch_1==(int)4)){
					HX_STACK_LINE(272)
					Float tmp8 = (::openfl::display::DrawCommand(command))->__Param(3);		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(272)
					Float y = tmp8;		HX_STACK_VAR(y,"y");
					HX_STACK_LINE(272)
					Float tmp9 = (::openfl::display::DrawCommand(command))->__Param(2);		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(272)
					Float x = tmp9;		HX_STACK_VAR(x,"x");
					HX_STACK_LINE(272)
					Float tmp10 = (::openfl::display::DrawCommand(command))->__Param(1);		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(272)
					Float cy = tmp10;		HX_STACK_VAR(cy,"cy");
					HX_STACK_LINE(272)
					Float tmp11 = (::openfl::display::DrawCommand(command))->__Param(0);		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(272)
					Float cx = tmp11;		HX_STACK_VAR(cx,"cx");
					HX_STACK_LINE(279)
					{
						HX_STACK_LINE(281)
						hasPath = true;
						HX_STACK_LINE(282)
						Float tmp12 = (cx - offsetX);		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(282)
						Float tmp13 = (cy - offsetY);		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(282)
						Float tmp14 = (x - offsetX);		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(282)
						Float tmp15 = (y - offsetY);		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(282)
						::openfl::_internal::renderer::cairo::CairoGraphics_obj::quadraticCurveTo(tmp12,tmp13,tmp14,tmp15);
					}
				}
				else if (  ( _switch_1==(int)5)){
					HX_STACK_LINE(272)
					Float tmp8 = (::openfl::display::DrawCommand(command))->__Param(2);		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(272)
					Float radius = tmp8;		HX_STACK_VAR(radius,"radius");
					HX_STACK_LINE(272)
					Float tmp9 = (::openfl::display::DrawCommand(command))->__Param(1);		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(272)
					Float y = tmp9;		HX_STACK_VAR(y,"y");
					HX_STACK_LINE(272)
					Float tmp10 = (::openfl::display::DrawCommand(command))->__Param(0);		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(272)
					Float x = tmp10;		HX_STACK_VAR(x,"x");
					HX_STACK_LINE(284)
					{
						HX_STACK_LINE(286)
						hasPath = true;
						HX_STACK_LINE(287)
						::lime::graphics::cairo::Cairo tmp11 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::cairo;		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(287)
						Float tmp12 = (x - offsetX);		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(287)
						Float tmp13 = radius;		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(287)
						Float tmp14 = (tmp12 + tmp13);		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(287)
						Float tmp15 = (y - offsetY);		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(287)
						tmp11->moveTo(tmp14,tmp15);
						HX_STACK_LINE(288)
						::lime::graphics::cairo::Cairo tmp16 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::cairo;		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(288)
						Float tmp17 = (x - offsetX);		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(288)
						Float tmp18 = (y - offsetY);		HX_STACK_VAR(tmp18,"tmp18");
						HX_STACK_LINE(288)
						Float tmp19 = radius;		HX_STACK_VAR(tmp19,"tmp19");
						HX_STACK_LINE(288)
						Float tmp20 = ::Math_obj::PI;		HX_STACK_VAR(tmp20,"tmp20");
						HX_STACK_LINE(288)
						Float tmp21 = (tmp20 * (int)2);		HX_STACK_VAR(tmp21,"tmp21");
						HX_STACK_LINE(288)
						tmp16->arc(tmp17,tmp18,tmp19,(int)0,tmp21);
					}
				}
				else if (  ( _switch_1==(int)7)){
					HX_STACK_LINE(272)
					Float tmp8 = (::openfl::display::DrawCommand(command))->__Param(3);		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(272)
					Float height = tmp8;		HX_STACK_VAR(height,"height");
					HX_STACK_LINE(272)
					Float tmp9 = (::openfl::display::DrawCommand(command))->__Param(2);		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(272)
					Float width = tmp9;		HX_STACK_VAR(width,"width");
					HX_STACK_LINE(272)
					Float tmp10 = (::openfl::display::DrawCommand(command))->__Param(1);		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(272)
					Float y = tmp10;		HX_STACK_VAR(y,"y");
					HX_STACK_LINE(272)
					Float tmp11 = (::openfl::display::DrawCommand(command))->__Param(0);		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(272)
					Float x = tmp11;		HX_STACK_VAR(x,"x");
					HX_STACK_LINE(290)
					{
						HX_STACK_LINE(292)
						hasPath = true;
						HX_STACK_LINE(293)
						::lime::graphics::cairo::Cairo tmp12 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::cairo;		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(293)
						Float tmp13 = (x - offsetX);		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(293)
						Float tmp14 = (y - offsetY);		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(293)
						Float tmp15 = width;		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(293)
						Float tmp16 = height;		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(293)
						tmp12->rectangle(tmp13,tmp14,tmp15,tmp16);
					}
				}
				else if (  ( _switch_1==(int)6)){
					HX_STACK_LINE(272)
					Float tmp8 = (::openfl::display::DrawCommand(command))->__Param(3);		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(272)
					Float height = tmp8;		HX_STACK_VAR(height,"height");
					HX_STACK_LINE(272)
					Float tmp9 = (::openfl::display::DrawCommand(command))->__Param(2);		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(272)
					Float width = tmp9;		HX_STACK_VAR(width,"width");
					HX_STACK_LINE(272)
					Float tmp10 = (::openfl::display::DrawCommand(command))->__Param(1);		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(272)
					Float y = tmp10;		HX_STACK_VAR(y,"y");
					HX_STACK_LINE(272)
					Float tmp11 = (::openfl::display::DrawCommand(command))->__Param(0);		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(272)
					Float x = tmp11;		HX_STACK_VAR(x,"x");
					HX_STACK_LINE(295)
					{
						HX_STACK_LINE(297)
						hasPath = true;
						HX_STACK_LINE(299)
						hx::SubEq(x,offsetX);
						HX_STACK_LINE(300)
						hx::SubEq(y,offsetY);
						HX_STACK_LINE(302)
						Float kappa = ((Float).5522848);		HX_STACK_VAR(kappa,"kappa");
						HX_STACK_LINE(303)
						Float tmp12 = (Float(width) / Float((int)2));		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(303)
						Float tmp13 = kappa;		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(303)
						Float tmp14 = (tmp12 * tmp13);		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(303)
						Float ox = tmp14;		HX_STACK_VAR(ox,"ox");
						HX_STACK_LINE(304)
						Float tmp15 = (Float(height) / Float((int)2));		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(304)
						Float tmp16 = kappa;		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(304)
						Float tmp17 = (tmp15 * tmp16);		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(304)
						Float oy = tmp17;		HX_STACK_VAR(oy,"oy");
						HX_STACK_LINE(305)
						Float tmp18 = (x + width);		HX_STACK_VAR(tmp18,"tmp18");
						HX_STACK_LINE(305)
						Float xe = tmp18;		HX_STACK_VAR(xe,"xe");
						HX_STACK_LINE(306)
						Float tmp19 = (y + height);		HX_STACK_VAR(tmp19,"tmp19");
						HX_STACK_LINE(306)
						Float ye = tmp19;		HX_STACK_VAR(ye,"ye");
						HX_STACK_LINE(307)
						Float tmp20 = x;		HX_STACK_VAR(tmp20,"tmp20");
						HX_STACK_LINE(307)
						Float tmp21 = (Float(width) / Float((int)2));		HX_STACK_VAR(tmp21,"tmp21");
						HX_STACK_LINE(307)
						Float tmp22 = (tmp20 + tmp21);		HX_STACK_VAR(tmp22,"tmp22");
						HX_STACK_LINE(307)
						Float xm = tmp22;		HX_STACK_VAR(xm,"xm");
						HX_STACK_LINE(308)
						Float tmp23 = y;		HX_STACK_VAR(tmp23,"tmp23");
						HX_STACK_LINE(308)
						Float tmp24 = (Float(height) / Float((int)2));		HX_STACK_VAR(tmp24,"tmp24");
						HX_STACK_LINE(308)
						Float tmp25 = (tmp23 + tmp24);		HX_STACK_VAR(tmp25,"tmp25");
						HX_STACK_LINE(308)
						Float ym = tmp25;		HX_STACK_VAR(ym,"ym");
						HX_STACK_LINE(310)
						::lime::graphics::cairo::Cairo tmp26 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::cairo;		HX_STACK_VAR(tmp26,"tmp26");
						HX_STACK_LINE(310)
						Float tmp27 = x;		HX_STACK_VAR(tmp27,"tmp27");
						HX_STACK_LINE(310)
						Float tmp28 = ym;		HX_STACK_VAR(tmp28,"tmp28");
						HX_STACK_LINE(310)
						tmp26->moveTo(tmp27,tmp28);
						HX_STACK_LINE(311)
						::lime::graphics::cairo::Cairo tmp29 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::cairo;		HX_STACK_VAR(tmp29,"tmp29");
						HX_STACK_LINE(311)
						Float tmp30 = x;		HX_STACK_VAR(tmp30,"tmp30");
						HX_STACK_LINE(311)
						Float tmp31 = (ym - oy);		HX_STACK_VAR(tmp31,"tmp31");
						HX_STACK_LINE(311)
						Float tmp32 = (xm - ox);		HX_STACK_VAR(tmp32,"tmp32");
						HX_STACK_LINE(311)
						Float tmp33 = y;		HX_STACK_VAR(tmp33,"tmp33");
						HX_STACK_LINE(311)
						Float tmp34 = xm;		HX_STACK_VAR(tmp34,"tmp34");
						HX_STACK_LINE(311)
						Float tmp35 = y;		HX_STACK_VAR(tmp35,"tmp35");
						HX_STACK_LINE(311)
						tmp29->curveTo(tmp30,tmp31,tmp32,tmp33,tmp34,tmp35);
						HX_STACK_LINE(312)
						::lime::graphics::cairo::Cairo tmp36 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::cairo;		HX_STACK_VAR(tmp36,"tmp36");
						HX_STACK_LINE(312)
						Float tmp37 = (xm + ox);		HX_STACK_VAR(tmp37,"tmp37");
						HX_STACK_LINE(312)
						Float tmp38 = y;		HX_STACK_VAR(tmp38,"tmp38");
						HX_STACK_LINE(312)
						Float tmp39 = xe;		HX_STACK_VAR(tmp39,"tmp39");
						HX_STACK_LINE(312)
						Float tmp40 = (ym - oy);		HX_STACK_VAR(tmp40,"tmp40");
						HX_STACK_LINE(312)
						Float tmp41 = xe;		HX_STACK_VAR(tmp41,"tmp41");
						HX_STACK_LINE(312)
						Float tmp42 = ym;		HX_STACK_VAR(tmp42,"tmp42");
						HX_STACK_LINE(312)
						tmp36->curveTo(tmp37,tmp38,tmp39,tmp40,tmp41,tmp42);
						HX_STACK_LINE(313)
						::lime::graphics::cairo::Cairo tmp43 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::cairo;		HX_STACK_VAR(tmp43,"tmp43");
						HX_STACK_LINE(313)
						Float tmp44 = xe;		HX_STACK_VAR(tmp44,"tmp44");
						HX_STACK_LINE(313)
						Float tmp45 = (ym + oy);		HX_STACK_VAR(tmp45,"tmp45");
						HX_STACK_LINE(313)
						Float tmp46 = (xm + ox);		HX_STACK_VAR(tmp46,"tmp46");
						HX_STACK_LINE(313)
						Float tmp47 = ye;		HX_STACK_VAR(tmp47,"tmp47");
						HX_STACK_LINE(313)
						Float tmp48 = xm;		HX_STACK_VAR(tmp48,"tmp48");
						HX_STACK_LINE(313)
						Float tmp49 = ye;		HX_STACK_VAR(tmp49,"tmp49");
						HX_STACK_LINE(313)
						tmp43->curveTo(tmp44,tmp45,tmp46,tmp47,tmp48,tmp49);
						HX_STACK_LINE(314)
						::lime::graphics::cairo::Cairo tmp50 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::cairo;		HX_STACK_VAR(tmp50,"tmp50");
						HX_STACK_LINE(314)
						Float tmp51 = (xm - ox);		HX_STACK_VAR(tmp51,"tmp51");
						HX_STACK_LINE(314)
						Float tmp52 = ye;		HX_STACK_VAR(tmp52,"tmp52");
						HX_STACK_LINE(314)
						Float tmp53 = x;		HX_STACK_VAR(tmp53,"tmp53");
						HX_STACK_LINE(314)
						Float tmp54 = (ym + oy);		HX_STACK_VAR(tmp54,"tmp54");
						HX_STACK_LINE(314)
						Float tmp55 = x;		HX_STACK_VAR(tmp55,"tmp55");
						HX_STACK_LINE(314)
						Float tmp56 = ym;		HX_STACK_VAR(tmp56,"tmp56");
						HX_STACK_LINE(314)
						tmp50->curveTo(tmp51,tmp52,tmp53,tmp54,tmp55,tmp56);
					}
				}
				else if (  ( _switch_1==(int)8)){
					HX_STACK_LINE(272)
					Float tmp8 = (::openfl::display::DrawCommand(command))->__Param(5);		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(272)
					Float ry = tmp8;		HX_STACK_VAR(ry,"ry");
					HX_STACK_LINE(272)
					Float tmp9 = (::openfl::display::DrawCommand(command))->__Param(4);		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(272)
					Float rx = tmp9;		HX_STACK_VAR(rx,"rx");
					HX_STACK_LINE(272)
					Float tmp10 = (::openfl::display::DrawCommand(command))->__Param(3);		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(272)
					Float height = tmp10;		HX_STACK_VAR(height,"height");
					HX_STACK_LINE(272)
					Float tmp11 = (::openfl::display::DrawCommand(command))->__Param(2);		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(272)
					Float width = tmp11;		HX_STACK_VAR(width,"width");
					HX_STACK_LINE(272)
					Float tmp12 = (::openfl::display::DrawCommand(command))->__Param(1);		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(272)
					Float y = tmp12;		HX_STACK_VAR(y,"y");
					HX_STACK_LINE(272)
					Float tmp13 = (::openfl::display::DrawCommand(command))->__Param(0);		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(272)
					Float x = tmp13;		HX_STACK_VAR(x,"x");
					HX_STACK_LINE(316)
					{
						HX_STACK_LINE(318)
						hasPath = true;
						HX_STACK_LINE(319)
						Float tmp14 = (x - offsetX);		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(319)
						Float tmp15 = (y - offsetY);		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(319)
						Float tmp16 = width;		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(319)
						Float tmp17 = height;		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(319)
						Float tmp18 = rx;		HX_STACK_VAR(tmp18,"tmp18");
						HX_STACK_LINE(319)
						Float tmp19 = ry;		HX_STACK_VAR(tmp19,"tmp19");
						HX_STACK_LINE(319)
						::openfl::_internal::renderer::cairo::CairoGraphics_obj::drawRoundRect(tmp14,tmp15,tmp16,tmp17,tmp18,tmp19);
					}
				}
				else if (  ( _switch_1==(int)15)){
					HX_STACK_LINE(272)
					Float tmp8 = (::openfl::display::DrawCommand(command))->__Param(1);		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(272)
					Float y = tmp8;		HX_STACK_VAR(y,"y");
					HX_STACK_LINE(272)
					Float tmp9 = (::openfl::display::DrawCommand(command))->__Param(0);		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(272)
					Float x = tmp9;		HX_STACK_VAR(x,"x");
					HX_STACK_LINE(321)
					{
						HX_STACK_LINE(323)
						hasPath = true;
						HX_STACK_LINE(324)
						::lime::graphics::cairo::Cairo tmp10 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::cairo;		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(324)
						Float tmp11 = (x - offsetX);		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(324)
						Float tmp12 = (y - offsetY);		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(324)
						tmp10->lineTo(tmp11,tmp12);
						HX_STACK_LINE(326)
						positionX = x;
						HX_STACK_LINE(327)
						positionY = y;
					}
				}
				else if (  ( _switch_1==(int)16)){
					HX_STACK_LINE(272)
					Float tmp8 = (::openfl::display::DrawCommand(command))->__Param(1);		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(272)
					Float y = tmp8;		HX_STACK_VAR(y,"y");
					HX_STACK_LINE(272)
					Float tmp9 = (::openfl::display::DrawCommand(command))->__Param(0);		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(272)
					Float x = tmp9;		HX_STACK_VAR(x,"x");
					HX_STACK_LINE(329)
					{
						HX_STACK_LINE(331)
						::lime::graphics::cairo::Cairo tmp10 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::cairo;		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(331)
						Float tmp11 = (x - offsetX);		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(331)
						Float tmp12 = (y - offsetY);		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(331)
						tmp10->moveTo(tmp11,tmp12);
						HX_STACK_LINE(333)
						positionX = x;
						HX_STACK_LINE(334)
						positionY = y;
						HX_STACK_LINE(336)
						closeGap = true;
						HX_STACK_LINE(337)
						startX = x;
						HX_STACK_LINE(338)
						startY = y;
					}
				}
				else if (  ( _switch_1==(int)12)){
					HX_STACK_LINE(272)
					Dynamic tmp8 = (::openfl::display::DrawCommand(command))->__Param(7);		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(272)
					Dynamic miterLimit = tmp8;		HX_STACK_VAR(miterLimit,"miterLimit");
					HX_STACK_LINE(272)
					::openfl::display::JointStyle tmp9 = (::openfl::display::DrawCommand(command))->__Param(6);		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(272)
					::openfl::display::JointStyle joints = tmp9;		HX_STACK_VAR(joints,"joints");
					HX_STACK_LINE(272)
					::openfl::display::CapsStyle tmp10 = (::openfl::display::DrawCommand(command))->__Param(5);		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(272)
					::openfl::display::CapsStyle caps = tmp10;		HX_STACK_VAR(caps,"caps");
					HX_STACK_LINE(272)
					::openfl::display::LineScaleMode tmp11 = (::openfl::display::DrawCommand(command))->__Param(4);		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(272)
					::openfl::display::LineScaleMode scaleMode = tmp11;		HX_STACK_VAR(scaleMode,"scaleMode");
					HX_STACK_LINE(272)
					Dynamic tmp12 = (::openfl::display::DrawCommand(command))->__Param(3);		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(272)
					Dynamic pixelHinting = tmp12;		HX_STACK_VAR(pixelHinting,"pixelHinting");
					HX_STACK_LINE(272)
					Dynamic tmp13 = (::openfl::display::DrawCommand(command))->__Param(2);		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(272)
					Dynamic alpha = tmp13;		HX_STACK_VAR(alpha,"alpha");
					HX_STACK_LINE(272)
					Dynamic tmp14 = (::openfl::display::DrawCommand(command))->__Param(1);		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(272)
					Dynamic color = tmp14;		HX_STACK_VAR(color,"color");
					HX_STACK_LINE(272)
					Dynamic tmp15 = (::openfl::display::DrawCommand(command))->__Param(0);		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(272)
					Dynamic thickness = tmp15;		HX_STACK_VAR(thickness,"thickness");
					HX_STACK_LINE(340)
					{
						HX_STACK_LINE(342)
						bool tmp16 = stroke;		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(342)
						bool tmp17;		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(342)
						if ((tmp16)){
							HX_STACK_LINE(342)
							tmp17 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::hasStroke;
						}
						else{
							HX_STACK_LINE(342)
							tmp17 = false;
						}
						HX_STACK_LINE(342)
						if ((tmp17)){
							HX_STACK_LINE(344)
							::openfl::_internal::renderer::cairo::CairoGraphics_obj::closePath();
						}
						HX_STACK_LINE(347)
						::lime::graphics::cairo::Cairo tmp18 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::cairo;		HX_STACK_VAR(tmp18,"tmp18");
						HX_STACK_LINE(347)
						Float tmp19 = (positionX - offsetX);		HX_STACK_VAR(tmp19,"tmp19");
						HX_STACK_LINE(347)
						Float tmp20 = (positionY - offsetY);		HX_STACK_VAR(tmp20,"tmp20");
						HX_STACK_LINE(347)
						tmp18->moveTo(tmp19,tmp20);
						HX_STACK_LINE(349)
						bool tmp21 = (thickness == null());		HX_STACK_VAR(tmp21,"tmp21");
						HX_STACK_LINE(349)
						if ((tmp21)){
							HX_STACK_LINE(351)
							::openfl::_internal::renderer::cairo::CairoGraphics_obj::hasStroke = false;
						}
						else{
							HX_STACK_LINE(355)
							::openfl::_internal::renderer::cairo::CairoGraphics_obj::hasStroke = true;
							HX_STACK_LINE(357)
							::lime::graphics::cairo::Cairo tmp22 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::cairo;		HX_STACK_VAR(tmp22,"tmp22");
							HX_STACK_LINE(357)
							Dynamic tmp23 = thickness;		HX_STACK_VAR(tmp23,"tmp23");
							HX_STACK_LINE(357)
							tmp22->set_lineWidth(tmp23);
							HX_STACK_LINE(359)
							bool tmp24 = (joints == null());		HX_STACK_VAR(tmp24,"tmp24");
							HX_STACK_LINE(359)
							if ((tmp24)){
								HX_STACK_LINE(361)
								::lime::graphics::cairo::Cairo tmp25 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::cairo;		HX_STACK_VAR(tmp25,"tmp25");
								HX_STACK_LINE(361)
								tmp25->set_lineJoin((int)1);
							}
							else{
								HX_STACK_LINE(365)
								::lime::graphics::cairo::Cairo tmp25 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::cairo;		HX_STACK_VAR(tmp25,"tmp25");
								HX_STACK_LINE(365)
								int tmp26;		HX_STACK_VAR(tmp26,"tmp26");
								HX_STACK_LINE(365)
								switch( (int)(joints->__Index())){
									case (int)0: {
										HX_STACK_LINE(367)
										tmp26 = (int)0;
									}
									;break;
									case (int)2: {
										HX_STACK_LINE(368)
										tmp26 = (int)2;
									}
									;break;
									default: {
										HX_STACK_LINE(369)
										tmp26 = (int)1;
									}
								}
								HX_STACK_LINE(365)
								tmp25->set_lineJoin(tmp26);
							}
							HX_STACK_LINE(375)
							bool tmp25 = (caps == null());		HX_STACK_VAR(tmp25,"tmp25");
							HX_STACK_LINE(375)
							if ((tmp25)){
								HX_STACK_LINE(377)
								::lime::graphics::cairo::Cairo tmp26 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::cairo;		HX_STACK_VAR(tmp26,"tmp26");
								HX_STACK_LINE(377)
								tmp26->set_lineCap((int)1);
							}
							else{
								HX_STACK_LINE(381)
								::lime::graphics::cairo::Cairo tmp26 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::cairo;		HX_STACK_VAR(tmp26,"tmp26");
								HX_STACK_LINE(381)
								int tmp27;		HX_STACK_VAR(tmp27,"tmp27");
								HX_STACK_LINE(381)
								switch( (int)(caps->__Index())){
									case (int)0: {
										HX_STACK_LINE(383)
										tmp27 = (int)0;
									}
									;break;
									case (int)2: {
										HX_STACK_LINE(384)
										tmp27 = (int)2;
									}
									;break;
									default: {
										HX_STACK_LINE(385)
										tmp27 = (int)1;
									}
								}
								HX_STACK_LINE(381)
								tmp26->set_lineCap(tmp27);
							}
							HX_STACK_LINE(391)
							::lime::graphics::cairo::Cairo tmp26 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::cairo;		HX_STACK_VAR(tmp26,"tmp26");
							HX_STACK_LINE(391)
							bool tmp27 = (miterLimit == null());		HX_STACK_VAR(tmp27,"tmp27");
							HX_STACK_LINE(391)
							Float tmp28;		HX_STACK_VAR(tmp28,"tmp28");
							HX_STACK_LINE(391)
							if ((tmp27)){
								HX_STACK_LINE(391)
								tmp28 = (int)3;
							}
							else{
								HX_STACK_LINE(391)
								tmp28 = miterLimit;
							}
							HX_STACK_LINE(391)
							tmp26->set_miterLimit(tmp28);
							HX_STACK_LINE(393)
							bool tmp29 = (color != null());		HX_STACK_VAR(tmp29,"tmp29");
							HX_STACK_LINE(393)
							if ((tmp29)){
								HX_STACK_LINE(395)
								int tmp30 = (int(color) & int((int)16711680));		HX_STACK_VAR(tmp30,"tmp30");
								HX_STACK_LINE(395)
								int tmp31 = hx::UShr(tmp30,(int)16);		HX_STACK_VAR(tmp31,"tmp31");
								HX_STACK_LINE(395)
								Float tmp32 = (Float(tmp31) / Float((int)255));		HX_STACK_VAR(tmp32,"tmp32");
								HX_STACK_LINE(395)
								Float r = tmp32;		HX_STACK_VAR(r,"r");
								HX_STACK_LINE(396)
								int tmp33 = (int(color) & int((int)65280));		HX_STACK_VAR(tmp33,"tmp33");
								HX_STACK_LINE(396)
								int tmp34 = hx::UShr(tmp33,(int)8);		HX_STACK_VAR(tmp34,"tmp34");
								HX_STACK_LINE(396)
								Float tmp35 = (Float(tmp34) / Float((int)255));		HX_STACK_VAR(tmp35,"tmp35");
								HX_STACK_LINE(396)
								Float g = tmp35;		HX_STACK_VAR(g,"g");
								HX_STACK_LINE(397)
								int tmp36 = (int(color) & int((int)255));		HX_STACK_VAR(tmp36,"tmp36");
								HX_STACK_LINE(397)
								Float tmp37 = (Float(tmp36) / Float((int)255));		HX_STACK_VAR(tmp37,"tmp37");
								HX_STACK_LINE(397)
								Float b = tmp37;		HX_STACK_VAR(b,"b");
								HX_STACK_LINE(399)
								Dynamic tmp38 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::strokePattern;		HX_STACK_VAR(tmp38,"tmp38");
								HX_STACK_LINE(399)
								bool tmp39 = (tmp38 != null());		HX_STACK_VAR(tmp39,"tmp39");
								HX_STACK_LINE(399)
								if ((tmp39)){
									HX_STACK_LINE(401)
									Dynamic tmp40 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::strokePattern;		HX_STACK_VAR(tmp40,"tmp40");
									HX_STACK_LINE(401)
									::lime::graphics::cairo::_CairoPattern::CairoPattern_Impl__obj::destroy(tmp40);
								}
								HX_STACK_LINE(405)
								bool tmp40 = (alpha == (int)1);		HX_STACK_VAR(tmp40,"tmp40");
								HX_STACK_LINE(405)
								bool tmp41 = !(tmp40);		HX_STACK_VAR(tmp41,"tmp41");
								HX_STACK_LINE(405)
								bool tmp42;		HX_STACK_VAR(tmp42,"tmp42");
								HX_STACK_LINE(405)
								if ((tmp41)){
									HX_STACK_LINE(405)
									tmp42 = (alpha == null());
								}
								else{
									HX_STACK_LINE(405)
									tmp42 = true;
								}
								HX_STACK_LINE(405)
								if ((tmp42)){
									HX_STACK_LINE(407)
									Float tmp43 = r;		HX_STACK_VAR(tmp43,"tmp43");
									HX_STACK_LINE(407)
									Float tmp44 = g;		HX_STACK_VAR(tmp44,"tmp44");
									HX_STACK_LINE(407)
									Float tmp45 = b;		HX_STACK_VAR(tmp45,"tmp45");
									HX_STACK_LINE(407)
									Dynamic tmp46 = ::lime::graphics::cairo::_CairoPattern::CairoPattern_Impl__obj::createRGB(tmp43,tmp44,tmp45);		HX_STACK_VAR(tmp46,"tmp46");
									HX_STACK_LINE(407)
									::openfl::_internal::renderer::cairo::CairoGraphics_obj::strokePattern = tmp46;
								}
								else{
									HX_STACK_LINE(411)
									Float tmp43 = r;		HX_STACK_VAR(tmp43,"tmp43");
									HX_STACK_LINE(411)
									Float tmp44 = g;		HX_STACK_VAR(tmp44,"tmp44");
									HX_STACK_LINE(411)
									Float tmp45 = b;		HX_STACK_VAR(tmp45,"tmp45");
									HX_STACK_LINE(411)
									Dynamic tmp46 = alpha;		HX_STACK_VAR(tmp46,"tmp46");
									HX_STACK_LINE(411)
									Dynamic tmp47 = ::lime::graphics::cairo::_CairoPattern::CairoPattern_Impl__obj::createRGBA(tmp43,tmp44,tmp45,tmp46);		HX_STACK_VAR(tmp47,"tmp47");
									HX_STACK_LINE(411)
									::openfl::_internal::renderer::cairo::CairoGraphics_obj::strokePattern = tmp47;
								}
							}
						}
					}
				}
				else if (  ( _switch_1==(int)14)){
					HX_STACK_LINE(272)
					Dynamic tmp8 = (::openfl::display::DrawCommand(command))->__Param(7);		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(272)
					Dynamic focalPointRatio = tmp8;		HX_STACK_VAR(focalPointRatio,"focalPointRatio");
					HX_STACK_LINE(272)
					::openfl::display::InterpolationMethod tmp9 = (::openfl::display::DrawCommand(command))->__Param(6);		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(272)
					::openfl::display::InterpolationMethod interpolationMethod = tmp9;		HX_STACK_VAR(interpolationMethod,"interpolationMethod");
					HX_STACK_LINE(272)
					::openfl::display::SpreadMethod tmp10 = (::openfl::display::DrawCommand(command))->__Param(5);		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(272)
					::openfl::display::SpreadMethod spreadMethod = tmp10;		HX_STACK_VAR(spreadMethod,"spreadMethod");
					HX_STACK_LINE(272)
					::openfl::geom::Matrix tmp11 = (::openfl::display::DrawCommand(command))->__Param(4);		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(272)
					::openfl::geom::Matrix matrix = tmp11;		HX_STACK_VAR(matrix,"matrix");
					HX_STACK_LINE(272)
					cpp::ArrayBase ratios = (::openfl::display::DrawCommand(command))->__Param(3);		HX_STACK_VAR(ratios,"ratios");
					HX_STACK_LINE(272)
					cpp::ArrayBase alphas = (::openfl::display::DrawCommand(command))->__Param(2);		HX_STACK_VAR(alphas,"alphas");
					HX_STACK_LINE(272)
					cpp::ArrayBase colors = (::openfl::display::DrawCommand(command))->__Param(1);		HX_STACK_VAR(colors,"colors");
					HX_STACK_LINE(272)
					::openfl::display::GradientType tmp12 = (::openfl::display::DrawCommand(command))->__Param(0);		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(272)
					::openfl::display::GradientType type = tmp12;		HX_STACK_VAR(type,"type");
					HX_STACK_LINE(419)
					{
						HX_STACK_LINE(421)
						bool tmp13 = stroke;		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(421)
						bool tmp14;		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(421)
						if ((tmp13)){
							HX_STACK_LINE(421)
							tmp14 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::hasStroke;
						}
						else{
							HX_STACK_LINE(421)
							tmp14 = false;
						}
						HX_STACK_LINE(421)
						if ((tmp14)){
							HX_STACK_LINE(423)
							::openfl::_internal::renderer::cairo::CairoGraphics_obj::closePath();
						}
						HX_STACK_LINE(427)
						Dynamic tmp15 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::strokePattern;		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(427)
						bool tmp16 = (tmp15 != null());		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(427)
						if ((tmp16)){
							HX_STACK_LINE(429)
							Dynamic tmp17 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::strokePattern;		HX_STACK_VAR(tmp17,"tmp17");
							HX_STACK_LINE(429)
							::lime::graphics::cairo::_CairoPattern::CairoPattern_Impl__obj::destroy(tmp17);
						}
						HX_STACK_LINE(433)
						::lime::graphics::cairo::Cairo tmp17 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::cairo;		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(433)
						Float tmp18 = (positionX - offsetX);		HX_STACK_VAR(tmp18,"tmp18");
						HX_STACK_LINE(433)
						Float tmp19 = (positionY - offsetY);		HX_STACK_VAR(tmp19,"tmp19");
						HX_STACK_LINE(433)
						tmp17->moveTo(tmp18,tmp19);
						HX_STACK_LINE(434)
						::openfl::display::GradientType tmp20 = type;		HX_STACK_VAR(tmp20,"tmp20");
						HX_STACK_LINE(434)
						::openfl::geom::Matrix tmp21 = matrix;		HX_STACK_VAR(tmp21,"tmp21");
						HX_STACK_LINE(434)
						::openfl::display::SpreadMethod tmp22 = spreadMethod;		HX_STACK_VAR(tmp22,"tmp22");
						HX_STACK_LINE(434)
						::openfl::display::InterpolationMethod tmp23 = interpolationMethod;		HX_STACK_VAR(tmp23,"tmp23");
						HX_STACK_LINE(434)
						Dynamic tmp24 = focalPointRatio;		HX_STACK_VAR(tmp24,"tmp24");
						HX_STACK_LINE(434)
						Dynamic tmp25 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::createGradientPattern(tmp20,colors,alphas,ratios,tmp21,tmp22,tmp23,tmp24);		HX_STACK_VAR(tmp25,"tmp25");
						HX_STACK_LINE(434)
						::openfl::_internal::renderer::cairo::CairoGraphics_obj::strokePattern = tmp25;
						HX_STACK_LINE(436)
						::openfl::_internal::renderer::cairo::CairoGraphics_obj::hasStroke = true;
					}
				}
				else if (  ( _switch_1==(int)13)){
					HX_STACK_LINE(272)
					bool tmp8 = (::openfl::display::DrawCommand(command))->__Param(3);		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(272)
					bool smooth = tmp8;		HX_STACK_VAR(smooth,"smooth");
					HX_STACK_LINE(272)
					bool tmp9 = (::openfl::display::DrawCommand(command))->__Param(2);		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(272)
					bool repeat = tmp9;		HX_STACK_VAR(repeat,"repeat");
					HX_STACK_LINE(272)
					::openfl::geom::Matrix tmp10 = (::openfl::display::DrawCommand(command))->__Param(1);		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(272)
					::openfl::geom::Matrix matrix = tmp10;		HX_STACK_VAR(matrix,"matrix");
					HX_STACK_LINE(272)
					::openfl::display::BitmapData tmp11 = (::openfl::display::DrawCommand(command))->__Param(0);		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(272)
					::openfl::display::BitmapData bitmap = tmp11;		HX_STACK_VAR(bitmap,"bitmap");
					HX_STACK_LINE(438)
					{
						HX_STACK_LINE(440)
						bool tmp12 = stroke;		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(440)
						bool tmp13;		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(440)
						if ((tmp12)){
							HX_STACK_LINE(440)
							tmp13 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::hasStroke;
						}
						else{
							HX_STACK_LINE(440)
							tmp13 = false;
						}
						HX_STACK_LINE(440)
						if ((tmp13)){
							HX_STACK_LINE(442)
							::openfl::_internal::renderer::cairo::CairoGraphics_obj::closePath();
						}
						HX_STACK_LINE(446)
						Dynamic tmp14 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::strokePattern;		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(446)
						bool tmp15 = (tmp14 != null());		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(446)
						if ((tmp15)){
							HX_STACK_LINE(448)
							Dynamic tmp16 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::strokePattern;		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(448)
							::lime::graphics::cairo::_CairoPattern::CairoPattern_Impl__obj::destroy(tmp16);
						}
						HX_STACK_LINE(452)
						::lime::graphics::cairo::Cairo tmp16 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::cairo;		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(452)
						Float tmp17 = (positionX - offsetX);		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(452)
						Float tmp18 = (positionY - offsetY);		HX_STACK_VAR(tmp18,"tmp18");
						HX_STACK_LINE(452)
						tmp16->moveTo(tmp17,tmp18);
						HX_STACK_LINE(453)
						::openfl::display::BitmapData tmp19 = bitmap;		HX_STACK_VAR(tmp19,"tmp19");
						HX_STACK_LINE(453)
						::openfl::geom::Matrix tmp20 = matrix;		HX_STACK_VAR(tmp20,"tmp20");
						HX_STACK_LINE(453)
						bool tmp21 = repeat;		HX_STACK_VAR(tmp21,"tmp21");
						HX_STACK_LINE(453)
						Dynamic tmp22 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::createImagePattern(tmp19,tmp20,tmp21);		HX_STACK_VAR(tmp22,"tmp22");
						HX_STACK_LINE(453)
						::openfl::_internal::renderer::cairo::CairoGraphics_obj::strokePattern = tmp22;
						HX_STACK_LINE(455)
						::openfl::_internal::renderer::cairo::CairoGraphics_obj::hasStroke = true;
					}
				}
				else if (  ( _switch_1==(int)0)){
					HX_STACK_LINE(272)
					bool tmp8 = (::openfl::display::DrawCommand(command))->__Param(3);		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(272)
					bool smooth = tmp8;		HX_STACK_VAR(smooth,"smooth");
					HX_STACK_LINE(272)
					bool tmp9 = (::openfl::display::DrawCommand(command))->__Param(2);		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(272)
					bool repeat = tmp9;		HX_STACK_VAR(repeat,"repeat");
					HX_STACK_LINE(272)
					::openfl::geom::Matrix tmp10 = (::openfl::display::DrawCommand(command))->__Param(1);		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(272)
					::openfl::geom::Matrix matrix = tmp10;		HX_STACK_VAR(matrix,"matrix");
					HX_STACK_LINE(272)
					::openfl::display::BitmapData tmp11 = (::openfl::display::DrawCommand(command))->__Param(0);		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(272)
					::openfl::display::BitmapData bitmap = tmp11;		HX_STACK_VAR(bitmap,"bitmap");
					HX_STACK_LINE(457)
					{
						HX_STACK_LINE(459)
						Dynamic tmp12 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::fillPattern;		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(459)
						bool tmp13 = (tmp12 != null());		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(459)
						if ((tmp13)){
							HX_STACK_LINE(461)
							Dynamic tmp14 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::fillPattern;		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(461)
							::lime::graphics::cairo::_CairoPattern::CairoPattern_Impl__obj::destroy(tmp14);
						}
						HX_STACK_LINE(465)
						::openfl::display::BitmapData tmp14 = bitmap;		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(465)
						::openfl::geom::Matrix tmp15 = matrix;		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(465)
						bool tmp16 = repeat;		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(465)
						Dynamic tmp17 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::createImagePattern(tmp14,tmp15,tmp16);		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(465)
						::openfl::_internal::renderer::cairo::CairoGraphics_obj::fillPattern = tmp17;
						HX_STACK_LINE(467)
						::openfl::_internal::renderer::cairo::CairoGraphics_obj::bitmapFill = bitmap;
						HX_STACK_LINE(468)
						::openfl::_internal::renderer::cairo::CairoGraphics_obj::bitmapRepeat = repeat;
						HX_STACK_LINE(470)
						::openfl::_internal::renderer::cairo::CairoGraphics_obj::hasFill = true;
					}
				}
				else if (  ( _switch_1==(int)1)){
					HX_STACK_LINE(272)
					Float tmp8 = (::openfl::display::DrawCommand(command))->__Param(1);		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(272)
					Float alpha = tmp8;		HX_STACK_VAR(alpha,"alpha");
					HX_STACK_LINE(272)
					int tmp9 = (::openfl::display::DrawCommand(command))->__Param(0);		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(272)
					int rgb = tmp9;		HX_STACK_VAR(rgb,"rgb");
					HX_STACK_LINE(472)
					{
						HX_STACK_LINE(474)
						bool tmp10 = (alpha < ((Float)0.005));		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(474)
						if ((tmp10)){
							HX_STACK_LINE(476)
							::openfl::_internal::renderer::cairo::CairoGraphics_obj::hasFill = false;
						}
						else{
							HX_STACK_LINE(480)
							Dynamic tmp11 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::fillPattern;		HX_STACK_VAR(tmp11,"tmp11");
							HX_STACK_LINE(480)
							bool tmp12 = (tmp11 != null());		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(480)
							if ((tmp12)){
								HX_STACK_LINE(482)
								Dynamic tmp13 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::fillPattern;		HX_STACK_VAR(tmp13,"tmp13");
								HX_STACK_LINE(482)
								::lime::graphics::cairo::_CairoPattern::CairoPattern_Impl__obj::destroy(tmp13);
								HX_STACK_LINE(483)
								::openfl::_internal::renderer::cairo::CairoGraphics_obj::fillPatternMatrix = null();
							}
							HX_STACK_LINE(487)
							int tmp13 = (int(rgb) & int((int)16711680));		HX_STACK_VAR(tmp13,"tmp13");
							HX_STACK_LINE(487)
							int tmp14 = hx::UShr(tmp13,(int)16);		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(487)
							Float tmp15 = (Float(tmp14) / Float((int)255));		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(487)
							int tmp16 = (int(rgb) & int((int)65280));		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(487)
							int tmp17 = hx::UShr(tmp16,(int)8);		HX_STACK_VAR(tmp17,"tmp17");
							HX_STACK_LINE(487)
							Float tmp18 = (Float(tmp17) / Float((int)255));		HX_STACK_VAR(tmp18,"tmp18");
							HX_STACK_LINE(487)
							int tmp19 = (int(rgb) & int((int)255));		HX_STACK_VAR(tmp19,"tmp19");
							HX_STACK_LINE(487)
							Float tmp20 = (Float(tmp19) / Float((int)255));		HX_STACK_VAR(tmp20,"tmp20");
							HX_STACK_LINE(487)
							Float tmp21 = alpha;		HX_STACK_VAR(tmp21,"tmp21");
							HX_STACK_LINE(487)
							Dynamic tmp22 = ::lime::graphics::cairo::_CairoPattern::CairoPattern_Impl__obj::createRGBA(tmp15,tmp18,tmp20,tmp21);		HX_STACK_VAR(tmp22,"tmp22");
							HX_STACK_LINE(487)
							::openfl::_internal::renderer::cairo::CairoGraphics_obj::fillPattern = tmp22;
							HX_STACK_LINE(488)
							::openfl::_internal::renderer::cairo::CairoGraphics_obj::hasFill = true;
						}
						HX_STACK_LINE(492)
						::openfl::_internal::renderer::cairo::CairoGraphics_obj::bitmapFill = null();
					}
				}
				else if (  ( _switch_1==(int)2)){
					HX_STACK_LINE(272)
					Dynamic tmp8 = (::openfl::display::DrawCommand(command))->__Param(7);		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(272)
					Dynamic focalPointRatio = tmp8;		HX_STACK_VAR(focalPointRatio,"focalPointRatio");
					HX_STACK_LINE(272)
					::openfl::display::InterpolationMethod tmp9 = (::openfl::display::DrawCommand(command))->__Param(6);		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(272)
					::openfl::display::InterpolationMethod interpolationMethod = tmp9;		HX_STACK_VAR(interpolationMethod,"interpolationMethod");
					HX_STACK_LINE(272)
					::openfl::display::SpreadMethod tmp10 = (::openfl::display::DrawCommand(command))->__Param(5);		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(272)
					::openfl::display::SpreadMethod spreadMethod = tmp10;		HX_STACK_VAR(spreadMethod,"spreadMethod");
					HX_STACK_LINE(272)
					::openfl::geom::Matrix tmp11 = (::openfl::display::DrawCommand(command))->__Param(4);		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(272)
					::openfl::geom::Matrix matrix = tmp11;		HX_STACK_VAR(matrix,"matrix");
					HX_STACK_LINE(272)
					cpp::ArrayBase ratios = (::openfl::display::DrawCommand(command))->__Param(3);		HX_STACK_VAR(ratios,"ratios");
					HX_STACK_LINE(272)
					cpp::ArrayBase alphas = (::openfl::display::DrawCommand(command))->__Param(2);		HX_STACK_VAR(alphas,"alphas");
					HX_STACK_LINE(272)
					cpp::ArrayBase colors = (::openfl::display::DrawCommand(command))->__Param(1);		HX_STACK_VAR(colors,"colors");
					HX_STACK_LINE(272)
					::openfl::display::GradientType tmp12 = (::openfl::display::DrawCommand(command))->__Param(0);		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(272)
					::openfl::display::GradientType type = tmp12;		HX_STACK_VAR(type,"type");
					HX_STACK_LINE(494)
					{
						HX_STACK_LINE(496)
						Dynamic tmp13 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::fillPattern;		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(496)
						bool tmp14 = (tmp13 != null());		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(496)
						if ((tmp14)){
							HX_STACK_LINE(498)
							Dynamic tmp15 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::fillPattern;		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(498)
							::lime::graphics::cairo::_CairoPattern::CairoPattern_Impl__obj::destroy(tmp15);
							HX_STACK_LINE(499)
							::openfl::_internal::renderer::cairo::CairoGraphics_obj::fillPatternMatrix = null();
						}
						HX_STACK_LINE(503)
						::openfl::display::GradientType tmp15 = type;		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(503)
						::openfl::geom::Matrix tmp16 = matrix;		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(503)
						::openfl::display::SpreadMethod tmp17 = spreadMethod;		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(503)
						::openfl::display::InterpolationMethod tmp18 = interpolationMethod;		HX_STACK_VAR(tmp18,"tmp18");
						HX_STACK_LINE(503)
						Dynamic tmp19 = focalPointRatio;		HX_STACK_VAR(tmp19,"tmp19");
						HX_STACK_LINE(503)
						Dynamic tmp20 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::createGradientPattern(tmp15,colors,alphas,ratios,tmp16,tmp17,tmp18,tmp19);		HX_STACK_VAR(tmp20,"tmp20");
						HX_STACK_LINE(503)
						::openfl::_internal::renderer::cairo::CairoGraphics_obj::fillPattern = tmp20;
						HX_STACK_LINE(505)
						::openfl::_internal::renderer::cairo::CairoGraphics_obj::hasFill = true;
						HX_STACK_LINE(506)
						::openfl::_internal::renderer::cairo::CairoGraphics_obj::bitmapFill = null();
					}
				}
				else if (  ( _switch_1==(int)10)){
					HX_STACK_LINE(272)
					::openfl::display::TriangleCulling tmp8 = (::openfl::display::DrawCommand(command))->__Param(3);		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(272)
					::openfl::display::TriangleCulling culling = tmp8;		HX_STACK_VAR(culling,"culling");
					HX_STACK_LINE(272)
					Array< Float > tmp9 = (::openfl::display::DrawCommand(command))->__Param(2);		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(272)
					Array< Float > uvtData = tmp9;		HX_STACK_VAR(uvtData,"uvtData");
					HX_STACK_LINE(272)
					Array< int > tmp10 = (::openfl::display::DrawCommand(command))->__Param(1);		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(272)
					Array< int > indices = tmp10;		HX_STACK_VAR(indices,"indices");
					HX_STACK_LINE(272)
					Array< Float > tmp11 = (::openfl::display::DrawCommand(command))->__Param(0);		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(272)
					Array< Float > vertices = tmp11;		HX_STACK_VAR(vertices,"vertices");
					HX_STACK_LINE(508)
					{
						HX_STACK_LINE(510)
						Array< Float > v = vertices;		HX_STACK_VAR(v,"v");
						HX_STACK_LINE(511)
						Array< int > ind = indices;		HX_STACK_VAR(ind,"ind");
						HX_STACK_LINE(512)
						Array< Float > uvt = uvtData;		HX_STACK_VAR(uvt,"uvt");
						HX_STACK_LINE(513)
						::openfl::display::BitmapData tmp12 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::bitmapFill;		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(513)
						bool tmp13 = (tmp12 == null());		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(513)
						bool colorFill = tmp13;		HX_STACK_VAR(colorFill,"colorFill");
						HX_STACK_LINE(515)
						bool tmp14 = colorFill;		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(515)
						bool tmp15;		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(515)
						if ((tmp14)){
							HX_STACK_LINE(515)
							tmp15 = (uvt != null());
						}
						else{
							HX_STACK_LINE(515)
							tmp15 = false;
						}
						HX_STACK_LINE(515)
						if ((tmp15)){
							HX_STACK_LINE(517)
							break;
						}
						HX_STACK_LINE(520)
						int width = (int)0;		HX_STACK_VAR(width,"width");
						HX_STACK_LINE(521)
						int height = (int)0;		HX_STACK_VAR(height,"height");
						HX_STACK_LINE(523)
						bool tmp16 = colorFill;		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(523)
						bool tmp17 = !(tmp16);		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(523)
						if ((tmp17)){
							HX_STACK_LINE(527)
							bool tmp18 = (uvtData == null());		HX_STACK_VAR(tmp18,"tmp18");
							HX_STACK_LINE(527)
							if ((tmp18)){
								HX_STACK_LINE(529)
								Array< Float > tmp19;		HX_STACK_VAR(tmp19,"tmp19");
								HX_STACK_LINE(529)
								{
									HX_STACK_LINE(529)
									Array< Float > this1;		HX_STACK_VAR(this1,"this1");
									HX_STACK_LINE(529)
									this1 = Array_obj< Float >::__new()->__SetSizeExact(null());
									HX_STACK_LINE(529)
									tmp19 = this1;
								}
								HX_STACK_LINE(529)
								uvtData = tmp19;
								HX_STACK_LINE(531)
								{
									HX_STACK_LINE(531)
									int _g2 = (int)0;		HX_STACK_VAR(_g2,"_g2");
									HX_STACK_LINE(531)
									int tmp20 = v->length;		HX_STACK_VAR(tmp20,"tmp20");
									HX_STACK_LINE(531)
									Float tmp21 = (Float(tmp20) / Float((int)2));		HX_STACK_VAR(tmp21,"tmp21");
									HX_STACK_LINE(531)
									int tmp22 = ::Std_obj::_int(tmp21);		HX_STACK_VAR(tmp22,"tmp22");
									HX_STACK_LINE(531)
									int _g1 = tmp22;		HX_STACK_VAR(_g1,"_g1");
									HX_STACK_LINE(531)
									while((true)){
										HX_STACK_LINE(531)
										bool tmp23 = (_g2 < _g1);		HX_STACK_VAR(tmp23,"tmp23");
										HX_STACK_LINE(531)
										bool tmp24 = !(tmp23);		HX_STACK_VAR(tmp24,"tmp24");
										HX_STACK_LINE(531)
										if ((tmp24)){
											HX_STACK_LINE(531)
											break;
										}
										HX_STACK_LINE(531)
										int tmp25 = (_g2)++;		HX_STACK_VAR(tmp25,"tmp25");
										HX_STACK_LINE(531)
										int i = tmp25;		HX_STACK_VAR(i,"i");
										HX_STACK_LINE(533)
										int tmp26 = (i * (int)2);		HX_STACK_VAR(tmp26,"tmp26");
										HX_STACK_LINE(533)
										Float tmp27 = v->__get(tmp26);		HX_STACK_VAR(tmp27,"tmp27");
										HX_STACK_LINE(533)
										Dynamic tmp28 = ((Dynamic)(tmp27));		HX_STACK_VAR(tmp28,"tmp28");
										HX_STACK_LINE(533)
										::openfl::display::BitmapData tmp29 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::bitmapFill;		HX_STACK_VAR(tmp29,"tmp29");
										HX_STACK_LINE(533)
										int tmp30 = tmp29->width;		HX_STACK_VAR(tmp30,"tmp30");
										HX_STACK_LINE(533)
										Float tmp31 = (Float(tmp28) / Float(tmp30));		HX_STACK_VAR(tmp31,"tmp31");
										HX_STACK_LINE(533)
										uvtData->push(tmp31);
										HX_STACK_LINE(534)
										int tmp32 = (i * (int)2);		HX_STACK_VAR(tmp32,"tmp32");
										HX_STACK_LINE(534)
										int tmp33 = (tmp32 + (int)1);		HX_STACK_VAR(tmp33,"tmp33");
										HX_STACK_LINE(534)
										Float tmp34 = v->__get(tmp33);		HX_STACK_VAR(tmp34,"tmp34");
										HX_STACK_LINE(534)
										Dynamic tmp35 = ((Dynamic)(tmp34));		HX_STACK_VAR(tmp35,"tmp35");
										HX_STACK_LINE(534)
										::openfl::display::BitmapData tmp36 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::bitmapFill;		HX_STACK_VAR(tmp36,"tmp36");
										HX_STACK_LINE(534)
										int tmp37 = tmp36->height;		HX_STACK_VAR(tmp37,"tmp37");
										HX_STACK_LINE(534)
										Float tmp38 = (Float(tmp35) / Float(tmp37));		HX_STACK_VAR(tmp38,"tmp38");
										HX_STACK_LINE(534)
										uvtData->push(tmp38);
									}
								}
							}
							HX_STACK_LINE(540)
							int tmp19 = uvtData->length;		HX_STACK_VAR(tmp19,"tmp19");
							HX_STACK_LINE(540)
							int tmp20 = v->length;		HX_STACK_VAR(tmp20,"tmp20");
							HX_STACK_LINE(540)
							bool tmp21 = (tmp19 != tmp20);		HX_STACK_VAR(tmp21,"tmp21");
							HX_STACK_LINE(540)
							bool skipT = tmp21;		HX_STACK_VAR(skipT,"skipT");
							HX_STACK_LINE(541)
							Array< Float > tmp22 = uvtData;		HX_STACK_VAR(tmp22,"tmp22");
							HX_STACK_LINE(541)
							bool tmp23 = skipT;		HX_STACK_VAR(tmp23,"tmp23");
							HX_STACK_LINE(541)
							Dynamic tmp24 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::normalizeUVT(tmp22,tmp23);		HX_STACK_VAR(tmp24,"tmp24");
							HX_STACK_LINE(541)
							Dynamic normalizedUVT = tmp24;		HX_STACK_VAR(normalizedUVT,"normalizedUVT");
							HX_STACK_LINE(542)
							Float maxUVT = normalizedUVT->__Field(HX_HCSTRING("max","\xa4","\x0a","\x53","\x00"), hx::paccDynamic );		HX_STACK_VAR(maxUVT,"maxUVT");
							HX_STACK_LINE(543)
							uvt = normalizedUVT->__Field(HX_HCSTRING("uvt","\xf3","\x2e","\x59","\x00"), hx::paccDynamic );
							HX_STACK_LINE(545)
							bool tmp25 = (maxUVT > (int)1);		HX_STACK_VAR(tmp25,"tmp25");
							HX_STACK_LINE(545)
							if ((tmp25)){
								HX_STACK_LINE(546)
								::openfl::geom::Rectangle tmp26 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::bounds;		HX_STACK_VAR(tmp26,"tmp26");
								HX_STACK_LINE(546)
								Float tmp27 = tmp26->width;		HX_STACK_VAR(tmp27,"tmp27");
								HX_STACK_LINE(546)
								int tmp28 = ::Std_obj::_int(tmp27);		HX_STACK_VAR(tmp28,"tmp28");
								HX_STACK_LINE(546)
								width = tmp28;
								HX_STACK_LINE(547)
								::openfl::geom::Rectangle tmp29 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::bounds;		HX_STACK_VAR(tmp29,"tmp29");
								HX_STACK_LINE(547)
								Float tmp30 = tmp29->height;		HX_STACK_VAR(tmp30,"tmp30");
								HX_STACK_LINE(547)
								int tmp31 = ::Std_obj::_int(tmp30);		HX_STACK_VAR(tmp31,"tmp31");
								HX_STACK_LINE(547)
								height = tmp31;
							}
							else{
								HX_STACK_LINE(552)
								::openfl::display::BitmapData tmp26 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::bitmapFill;		HX_STACK_VAR(tmp26,"tmp26");
								HX_STACK_LINE(552)
								width = tmp26->width;
								HX_STACK_LINE(553)
								::openfl::display::BitmapData tmp27 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::bitmapFill;		HX_STACK_VAR(tmp27,"tmp27");
								HX_STACK_LINE(553)
								height = tmp27->height;
							}
						}
						HX_STACK_LINE(558)
						int i = (int)0;		HX_STACK_VAR(i,"i");
						HX_STACK_LINE(559)
						int tmp18 = ind->length;		HX_STACK_VAR(tmp18,"tmp18");
						HX_STACK_LINE(559)
						int l = tmp18;		HX_STACK_VAR(l,"l");
						HX_STACK_LINE(561)
						int a;		HX_STACK_VAR(a,"a");
						HX_STACK_LINE(561)
						int b;		HX_STACK_VAR(b,"b");
						HX_STACK_LINE(561)
						int c;		HX_STACK_VAR(c,"c");
						HX_STACK_LINE(562)
						int iax;		HX_STACK_VAR(iax,"iax");
						HX_STACK_LINE(562)
						int iay;		HX_STACK_VAR(iay,"iay");
						HX_STACK_LINE(562)
						int ibx;		HX_STACK_VAR(ibx,"ibx");
						HX_STACK_LINE(562)
						int iby;		HX_STACK_VAR(iby,"iby");
						HX_STACK_LINE(562)
						int icx;		HX_STACK_VAR(icx,"icx");
						HX_STACK_LINE(562)
						int icy;		HX_STACK_VAR(icy,"icy");
						HX_STACK_LINE(563)
						Float x1;		HX_STACK_VAR(x1,"x1");
						HX_STACK_LINE(563)
						Float y1;		HX_STACK_VAR(y1,"y1");
						HX_STACK_LINE(563)
						Float x2;		HX_STACK_VAR(x2,"x2");
						HX_STACK_LINE(563)
						Float y2;		HX_STACK_VAR(y2,"y2");
						HX_STACK_LINE(563)
						Float x3;		HX_STACK_VAR(x3,"x3");
						HX_STACK_LINE(563)
						Float y3;		HX_STACK_VAR(y3,"y3");
						HX_STACK_LINE(564)
						Float uvx1;		HX_STACK_VAR(uvx1,"uvx1");
						HX_STACK_LINE(564)
						Float uvy1;		HX_STACK_VAR(uvy1,"uvy1");
						HX_STACK_LINE(564)
						Float uvx2;		HX_STACK_VAR(uvx2,"uvx2");
						HX_STACK_LINE(564)
						Float uvy2;		HX_STACK_VAR(uvy2,"uvy2");
						HX_STACK_LINE(564)
						Float uvx3;		HX_STACK_VAR(uvx3,"uvx3");
						HX_STACK_LINE(564)
						Float uvy3;		HX_STACK_VAR(uvy3,"uvy3");
						HX_STACK_LINE(565)
						Float denom;		HX_STACK_VAR(denom,"denom");
						HX_STACK_LINE(566)
						Float t1;		HX_STACK_VAR(t1,"t1");
						HX_STACK_LINE(566)
						Float t2;		HX_STACK_VAR(t2,"t2");
						HX_STACK_LINE(566)
						Float t3;		HX_STACK_VAR(t3,"t3");
						HX_STACK_LINE(566)
						Float t4;		HX_STACK_VAR(t4,"t4");
						HX_STACK_LINE(567)
						Float dx;		HX_STACK_VAR(dx,"dx");
						HX_STACK_LINE(567)
						Float dy;		HX_STACK_VAR(dy,"dy");
						HX_STACK_LINE(569)
						::lime::graphics::cairo::Cairo tmp19 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::cairo;		HX_STACK_VAR(tmp19,"tmp19");
						HX_STACK_LINE(569)
						tmp19->set_antialias((int)1);
						HX_STACK_LINE(571)
						while((true)){
							HX_STACK_LINE(571)
							bool tmp20 = (i < l);		HX_STACK_VAR(tmp20,"tmp20");
							HX_STACK_LINE(571)
							bool tmp21 = !(tmp20);		HX_STACK_VAR(tmp21,"tmp21");
							HX_STACK_LINE(571)
							if ((tmp21)){
								HX_STACK_LINE(571)
								break;
							}
							HX_STACK_LINE(573)
							a = i;
							HX_STACK_LINE(574)
							int tmp22 = (i + (int)1);		HX_STACK_VAR(tmp22,"tmp22");
							HX_STACK_LINE(574)
							b = tmp22;
							HX_STACK_LINE(575)
							int tmp23 = (i + (int)2);		HX_STACK_VAR(tmp23,"tmp23");
							HX_STACK_LINE(575)
							c = tmp23;
							HX_STACK_LINE(577)
							int tmp24 = ind->__get(a);		HX_STACK_VAR(tmp24,"tmp24");
							HX_STACK_LINE(577)
							Dynamic tmp25 = ((Dynamic)(tmp24));		HX_STACK_VAR(tmp25,"tmp25");
							HX_STACK_LINE(577)
							int tmp26 = (tmp25 * (int)2);		HX_STACK_VAR(tmp26,"tmp26");
							HX_STACK_LINE(577)
							iax = tmp26;
							HX_STACK_LINE(578)
							int tmp27 = ind->__get(a);		HX_STACK_VAR(tmp27,"tmp27");
							HX_STACK_LINE(578)
							Dynamic tmp28 = ((Dynamic)(tmp27));		HX_STACK_VAR(tmp28,"tmp28");
							HX_STACK_LINE(578)
							int tmp29 = (tmp28 * (int)2);		HX_STACK_VAR(tmp29,"tmp29");
							HX_STACK_LINE(578)
							int tmp30 = (tmp29 + (int)1);		HX_STACK_VAR(tmp30,"tmp30");
							HX_STACK_LINE(578)
							iay = tmp30;
							HX_STACK_LINE(579)
							int tmp31 = ind->__get(b);		HX_STACK_VAR(tmp31,"tmp31");
							HX_STACK_LINE(579)
							Dynamic tmp32 = ((Dynamic)(tmp31));		HX_STACK_VAR(tmp32,"tmp32");
							HX_STACK_LINE(579)
							int tmp33 = (tmp32 * (int)2);		HX_STACK_VAR(tmp33,"tmp33");
							HX_STACK_LINE(579)
							ibx = tmp33;
							HX_STACK_LINE(580)
							int tmp34 = ind->__get(b);		HX_STACK_VAR(tmp34,"tmp34");
							HX_STACK_LINE(580)
							Dynamic tmp35 = ((Dynamic)(tmp34));		HX_STACK_VAR(tmp35,"tmp35");
							HX_STACK_LINE(580)
							int tmp36 = (tmp35 * (int)2);		HX_STACK_VAR(tmp36,"tmp36");
							HX_STACK_LINE(580)
							int tmp37 = (tmp36 + (int)1);		HX_STACK_VAR(tmp37,"tmp37");
							HX_STACK_LINE(580)
							iby = tmp37;
							HX_STACK_LINE(581)
							int tmp38 = ind->__get(c);		HX_STACK_VAR(tmp38,"tmp38");
							HX_STACK_LINE(581)
							Dynamic tmp39 = ((Dynamic)(tmp38));		HX_STACK_VAR(tmp39,"tmp39");
							HX_STACK_LINE(581)
							int tmp40 = (tmp39 * (int)2);		HX_STACK_VAR(tmp40,"tmp40");
							HX_STACK_LINE(581)
							icx = tmp40;
							HX_STACK_LINE(582)
							int tmp41 = ind->__get(c);		HX_STACK_VAR(tmp41,"tmp41");
							HX_STACK_LINE(582)
							Dynamic tmp42 = ((Dynamic)(tmp41));		HX_STACK_VAR(tmp42,"tmp42");
							HX_STACK_LINE(582)
							int tmp43 = (tmp42 * (int)2);		HX_STACK_VAR(tmp43,"tmp43");
							HX_STACK_LINE(582)
							int tmp44 = (tmp43 + (int)1);		HX_STACK_VAR(tmp44,"tmp44");
							HX_STACK_LINE(582)
							icy = tmp44;
							HX_STACK_LINE(584)
							Float tmp45 = v->__get(iax);		HX_STACK_VAR(tmp45,"tmp45");
							HX_STACK_LINE(584)
							x1 = ((Dynamic)(tmp45));
							HX_STACK_LINE(585)
							Float tmp46 = v->__get(iay);		HX_STACK_VAR(tmp46,"tmp46");
							HX_STACK_LINE(585)
							y1 = ((Dynamic)(tmp46));
							HX_STACK_LINE(586)
							Float tmp47 = v->__get(ibx);		HX_STACK_VAR(tmp47,"tmp47");
							HX_STACK_LINE(586)
							x2 = ((Dynamic)(tmp47));
							HX_STACK_LINE(587)
							Float tmp48 = v->__get(iby);		HX_STACK_VAR(tmp48,"tmp48");
							HX_STACK_LINE(587)
							y2 = ((Dynamic)(tmp48));
							HX_STACK_LINE(588)
							Float tmp49 = v->__get(icx);		HX_STACK_VAR(tmp49,"tmp49");
							HX_STACK_LINE(588)
							x3 = ((Dynamic)(tmp49));
							HX_STACK_LINE(589)
							Float tmp50 = v->__get(icy);		HX_STACK_VAR(tmp50,"tmp50");
							HX_STACK_LINE(589)
							y3 = ((Dynamic)(tmp50));
							HX_STACK_LINE(591)
							switch( (int)(culling->__Index())){
								case (int)2: {
									HX_STACK_LINE(595)
									Float tmp51 = (x2 - x1);		HX_STACK_VAR(tmp51,"tmp51");
									HX_STACK_LINE(595)
									Float tmp52 = (y3 - y1);		HX_STACK_VAR(tmp52,"tmp52");
									HX_STACK_LINE(595)
									Float tmp53 = (tmp51 * tmp52);		HX_STACK_VAR(tmp53,"tmp53");
									HX_STACK_LINE(595)
									Float tmp54 = (y2 - y1);		HX_STACK_VAR(tmp54,"tmp54");
									HX_STACK_LINE(595)
									Float tmp55 = (x3 - x1);		HX_STACK_VAR(tmp55,"tmp55");
									HX_STACK_LINE(595)
									Float tmp56 = (tmp54 * tmp55);		HX_STACK_VAR(tmp56,"tmp56");
									HX_STACK_LINE(595)
									Float tmp57 = (tmp53 - tmp56);		HX_STACK_VAR(tmp57,"tmp57");
									HX_STACK_LINE(595)
									bool tmp58 = (tmp57 < (int)0);		HX_STACK_VAR(tmp58,"tmp58");
									HX_STACK_LINE(595)
									bool tmp59 = !(tmp58);		HX_STACK_VAR(tmp59,"tmp59");
									HX_STACK_LINE(595)
									if ((tmp59)){
										HX_STACK_LINE(597)
										hx::AddEq(i,(int)3);
										HX_STACK_LINE(598)
										continue;
									}
								}
								;break;
								case (int)0: {
									HX_STACK_LINE(604)
									Float tmp51 = (x2 - x1);		HX_STACK_VAR(tmp51,"tmp51");
									HX_STACK_LINE(604)
									Float tmp52 = (y3 - y1);		HX_STACK_VAR(tmp52,"tmp52");
									HX_STACK_LINE(604)
									Float tmp53 = (tmp51 * tmp52);		HX_STACK_VAR(tmp53,"tmp53");
									HX_STACK_LINE(604)
									Float tmp54 = (y2 - y1);		HX_STACK_VAR(tmp54,"tmp54");
									HX_STACK_LINE(604)
									Float tmp55 = (x3 - x1);		HX_STACK_VAR(tmp55,"tmp55");
									HX_STACK_LINE(604)
									Float tmp56 = (tmp54 * tmp55);		HX_STACK_VAR(tmp56,"tmp56");
									HX_STACK_LINE(604)
									Float tmp57 = (tmp53 - tmp56);		HX_STACK_VAR(tmp57,"tmp57");
									HX_STACK_LINE(604)
									bool tmp58 = (tmp57 < (int)0);		HX_STACK_VAR(tmp58,"tmp58");
									HX_STACK_LINE(604)
									if ((tmp58)){
										HX_STACK_LINE(606)
										hx::AddEq(i,(int)3);
										HX_STACK_LINE(607)
										continue;
									}
								}
								;break;
								default: {
								}
							}
							HX_STACK_LINE(615)
							bool tmp51 = colorFill;		HX_STACK_VAR(tmp51,"tmp51");
							HX_STACK_LINE(615)
							if ((tmp51)){
								HX_STACK_LINE(617)
								::lime::graphics::cairo::Cairo tmp52 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::cairo;		HX_STACK_VAR(tmp52,"tmp52");
								HX_STACK_LINE(617)
								tmp52->newPath();
								HX_STACK_LINE(618)
								::lime::graphics::cairo::Cairo tmp53 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::cairo;		HX_STACK_VAR(tmp53,"tmp53");
								HX_STACK_LINE(618)
								Float tmp54 = x1;		HX_STACK_VAR(tmp54,"tmp54");
								HX_STACK_LINE(618)
								Float tmp55 = y1;		HX_STACK_VAR(tmp55,"tmp55");
								HX_STACK_LINE(618)
								tmp53->moveTo(tmp54,tmp55);
								HX_STACK_LINE(619)
								::lime::graphics::cairo::Cairo tmp56 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::cairo;		HX_STACK_VAR(tmp56,"tmp56");
								HX_STACK_LINE(619)
								Float tmp57 = x2;		HX_STACK_VAR(tmp57,"tmp57");
								HX_STACK_LINE(619)
								Float tmp58 = y2;		HX_STACK_VAR(tmp58,"tmp58");
								HX_STACK_LINE(619)
								tmp56->lineTo(tmp57,tmp58);
								HX_STACK_LINE(620)
								::lime::graphics::cairo::Cairo tmp59 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::cairo;		HX_STACK_VAR(tmp59,"tmp59");
								HX_STACK_LINE(620)
								Float tmp60 = x3;		HX_STACK_VAR(tmp60,"tmp60");
								HX_STACK_LINE(620)
								Float tmp61 = y3;		HX_STACK_VAR(tmp61,"tmp61");
								HX_STACK_LINE(620)
								tmp59->lineTo(tmp60,tmp61);
								HX_STACK_LINE(621)
								::lime::graphics::cairo::Cairo tmp62 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::cairo;		HX_STACK_VAR(tmp62,"tmp62");
								HX_STACK_LINE(621)
								tmp62->closePath();
								HX_STACK_LINE(622)
								::lime::graphics::cairo::Cairo tmp63 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::cairo;		HX_STACK_VAR(tmp63,"tmp63");
								HX_STACK_LINE(622)
								tmp63->fillPreserve();
								HX_STACK_LINE(623)
								hx::AddEq(i,(int)3);
								HX_STACK_LINE(624)
								continue;
							}
							HX_STACK_LINE(628)
							::lime::graphics::cairo::Cairo tmp52 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::cairo;		HX_STACK_VAR(tmp52,"tmp52");
							HX_STACK_LINE(628)
							tmp52->identityMatrix();
							HX_STACK_LINE(631)
							::lime::graphics::cairo::Cairo tmp53 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::cairo;		HX_STACK_VAR(tmp53,"tmp53");
							HX_STACK_LINE(631)
							tmp53->newPath();
							HX_STACK_LINE(632)
							::lime::graphics::cairo::Cairo tmp54 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::cairo;		HX_STACK_VAR(tmp54,"tmp54");
							HX_STACK_LINE(632)
							Float tmp55 = x1;		HX_STACK_VAR(tmp55,"tmp55");
							HX_STACK_LINE(632)
							Float tmp56 = y1;		HX_STACK_VAR(tmp56,"tmp56");
							HX_STACK_LINE(632)
							tmp54->moveTo(tmp55,tmp56);
							HX_STACK_LINE(633)
							::lime::graphics::cairo::Cairo tmp57 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::cairo;		HX_STACK_VAR(tmp57,"tmp57");
							HX_STACK_LINE(633)
							Float tmp58 = x2;		HX_STACK_VAR(tmp58,"tmp58");
							HX_STACK_LINE(633)
							Float tmp59 = y2;		HX_STACK_VAR(tmp59,"tmp59");
							HX_STACK_LINE(633)
							tmp57->lineTo(tmp58,tmp59);
							HX_STACK_LINE(634)
							::lime::graphics::cairo::Cairo tmp60 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::cairo;		HX_STACK_VAR(tmp60,"tmp60");
							HX_STACK_LINE(634)
							Float tmp61 = x3;		HX_STACK_VAR(tmp61,"tmp61");
							HX_STACK_LINE(634)
							Float tmp62 = y3;		HX_STACK_VAR(tmp62,"tmp62");
							HX_STACK_LINE(634)
							tmp60->lineTo(tmp61,tmp62);
							HX_STACK_LINE(635)
							::lime::graphics::cairo::Cairo tmp63 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::cairo;		HX_STACK_VAR(tmp63,"tmp63");
							HX_STACK_LINE(635)
							tmp63->closePath();
							HX_STACK_LINE(638)
							Float tmp64 = uvt->__get(iax);		HX_STACK_VAR(tmp64,"tmp64");
							HX_STACK_LINE(638)
							Dynamic tmp65 = ((Dynamic)(tmp64));		HX_STACK_VAR(tmp65,"tmp65");
							HX_STACK_LINE(638)
							int tmp66 = width;		HX_STACK_VAR(tmp66,"tmp66");
							HX_STACK_LINE(638)
							Float tmp67 = (tmp65 * tmp66);		HX_STACK_VAR(tmp67,"tmp67");
							HX_STACK_LINE(638)
							uvx1 = tmp67;
							HX_STACK_LINE(639)
							Float tmp68 = uvt->__get(ibx);		HX_STACK_VAR(tmp68,"tmp68");
							HX_STACK_LINE(639)
							Dynamic tmp69 = ((Dynamic)(tmp68));		HX_STACK_VAR(tmp69,"tmp69");
							HX_STACK_LINE(639)
							int tmp70 = width;		HX_STACK_VAR(tmp70,"tmp70");
							HX_STACK_LINE(639)
							Float tmp71 = (tmp69 * tmp70);		HX_STACK_VAR(tmp71,"tmp71");
							HX_STACK_LINE(639)
							uvx2 = tmp71;
							HX_STACK_LINE(640)
							Float tmp72 = uvt->__get(icx);		HX_STACK_VAR(tmp72,"tmp72");
							HX_STACK_LINE(640)
							Dynamic tmp73 = ((Dynamic)(tmp72));		HX_STACK_VAR(tmp73,"tmp73");
							HX_STACK_LINE(640)
							int tmp74 = width;		HX_STACK_VAR(tmp74,"tmp74");
							HX_STACK_LINE(640)
							Float tmp75 = (tmp73 * tmp74);		HX_STACK_VAR(tmp75,"tmp75");
							HX_STACK_LINE(640)
							uvx3 = tmp75;
							HX_STACK_LINE(641)
							Float tmp76 = uvt->__get(iay);		HX_STACK_VAR(tmp76,"tmp76");
							HX_STACK_LINE(641)
							Dynamic tmp77 = ((Dynamic)(tmp76));		HX_STACK_VAR(tmp77,"tmp77");
							HX_STACK_LINE(641)
							int tmp78 = height;		HX_STACK_VAR(tmp78,"tmp78");
							HX_STACK_LINE(641)
							Float tmp79 = (tmp77 * tmp78);		HX_STACK_VAR(tmp79,"tmp79");
							HX_STACK_LINE(641)
							uvy1 = tmp79;
							HX_STACK_LINE(642)
							Float tmp80 = uvt->__get(iby);		HX_STACK_VAR(tmp80,"tmp80");
							HX_STACK_LINE(642)
							Dynamic tmp81 = ((Dynamic)(tmp80));		HX_STACK_VAR(tmp81,"tmp81");
							HX_STACK_LINE(642)
							int tmp82 = height;		HX_STACK_VAR(tmp82,"tmp82");
							HX_STACK_LINE(642)
							Float tmp83 = (tmp81 * tmp82);		HX_STACK_VAR(tmp83,"tmp83");
							HX_STACK_LINE(642)
							uvy2 = tmp83;
							HX_STACK_LINE(643)
							Float tmp84 = uvt->__get(icy);		HX_STACK_VAR(tmp84,"tmp84");
							HX_STACK_LINE(643)
							Dynamic tmp85 = ((Dynamic)(tmp84));		HX_STACK_VAR(tmp85,"tmp85");
							HX_STACK_LINE(643)
							int tmp86 = height;		HX_STACK_VAR(tmp86,"tmp86");
							HX_STACK_LINE(643)
							Float tmp87 = (tmp85 * tmp86);		HX_STACK_VAR(tmp87,"tmp87");
							HX_STACK_LINE(643)
							uvy3 = tmp87;
							HX_STACK_LINE(645)
							Float tmp88 = uvx1;		HX_STACK_VAR(tmp88,"tmp88");
							HX_STACK_LINE(645)
							Float tmp89 = (uvy3 - uvy2);		HX_STACK_VAR(tmp89,"tmp89");
							HX_STACK_LINE(645)
							Float tmp90 = (tmp88 * tmp89);		HX_STACK_VAR(tmp90,"tmp90");
							HX_STACK_LINE(645)
							Float tmp91 = (uvx2 * uvy3);		HX_STACK_VAR(tmp91,"tmp91");
							HX_STACK_LINE(645)
							Float tmp92 = (tmp90 - tmp91);		HX_STACK_VAR(tmp92,"tmp92");
							HX_STACK_LINE(645)
							Float tmp93 = (uvx3 * uvy2);		HX_STACK_VAR(tmp93,"tmp93");
							HX_STACK_LINE(645)
							Float tmp94 = (tmp92 + tmp93);		HX_STACK_VAR(tmp94,"tmp94");
							HX_STACK_LINE(645)
							Float tmp95 = (uvx2 - uvx3);		HX_STACK_VAR(tmp95,"tmp95");
							HX_STACK_LINE(645)
							Float tmp96 = uvy1;		HX_STACK_VAR(tmp96,"tmp96");
							HX_STACK_LINE(645)
							Float tmp97 = (tmp95 * tmp96);		HX_STACK_VAR(tmp97,"tmp97");
							HX_STACK_LINE(645)
							Float tmp98 = (tmp94 + tmp97);		HX_STACK_VAR(tmp98,"tmp98");
							HX_STACK_LINE(645)
							denom = tmp98;
							HX_STACK_LINE(647)
							bool tmp99 = (denom == (int)0);		HX_STACK_VAR(tmp99,"tmp99");
							HX_STACK_LINE(647)
							if ((tmp99)){
								HX_STACK_LINE(649)
								hx::AddEq(i,(int)3);
								HX_STACK_LINE(650)
								continue;
							}
							HX_STACK_LINE(654)
							Float tmp100 = uvy1;		HX_STACK_VAR(tmp100,"tmp100");
							HX_STACK_LINE(654)
							Float tmp101 = (x3 - x2);		HX_STACK_VAR(tmp101,"tmp101");
							HX_STACK_LINE(654)
							Float tmp102 = (tmp100 * tmp101);		HX_STACK_VAR(tmp102,"tmp102");
							HX_STACK_LINE(654)
							Float tmp103 = (uvy2 * x3);		HX_STACK_VAR(tmp103,"tmp103");
							HX_STACK_LINE(654)
							Float tmp104 = (tmp102 - tmp103);		HX_STACK_VAR(tmp104,"tmp104");
							HX_STACK_LINE(654)
							Float tmp105 = (uvy3 * x2);		HX_STACK_VAR(tmp105,"tmp105");
							HX_STACK_LINE(654)
							Float tmp106 = (tmp104 + tmp105);		HX_STACK_VAR(tmp106,"tmp106");
							HX_STACK_LINE(654)
							Float tmp107 = (uvy2 - uvy3);		HX_STACK_VAR(tmp107,"tmp107");
							HX_STACK_LINE(654)
							Float tmp108 = x1;		HX_STACK_VAR(tmp108,"tmp108");
							HX_STACK_LINE(654)
							Float tmp109 = (tmp107 * tmp108);		HX_STACK_VAR(tmp109,"tmp109");
							HX_STACK_LINE(654)
							Float tmp110 = (tmp106 + tmp109);		HX_STACK_VAR(tmp110,"tmp110");
							HX_STACK_LINE(654)
							Float tmp111 = -(tmp110);		HX_STACK_VAR(tmp111,"tmp111");
							HX_STACK_LINE(654)
							Float tmp112 = denom;		HX_STACK_VAR(tmp112,"tmp112");
							HX_STACK_LINE(654)
							Float tmp113 = (Float(tmp111) / Float(tmp112));		HX_STACK_VAR(tmp113,"tmp113");
							HX_STACK_LINE(654)
							t1 = tmp113;
							HX_STACK_LINE(655)
							Float tmp114 = (uvy2 * y3);		HX_STACK_VAR(tmp114,"tmp114");
							HX_STACK_LINE(655)
							Float tmp115 = uvy1;		HX_STACK_VAR(tmp115,"tmp115");
							HX_STACK_LINE(655)
							Float tmp116 = (y2 - y3);		HX_STACK_VAR(tmp116,"tmp116");
							HX_STACK_LINE(655)
							Float tmp117 = (tmp115 * tmp116);		HX_STACK_VAR(tmp117,"tmp117");
							HX_STACK_LINE(655)
							Float tmp118 = (tmp114 + tmp117);		HX_STACK_VAR(tmp118,"tmp118");
							HX_STACK_LINE(655)
							Float tmp119 = (uvy3 * y2);		HX_STACK_VAR(tmp119,"tmp119");
							HX_STACK_LINE(655)
							Float tmp120 = (tmp118 - tmp119);		HX_STACK_VAR(tmp120,"tmp120");
							HX_STACK_LINE(655)
							Float tmp121 = (uvy3 - uvy2);		HX_STACK_VAR(tmp121,"tmp121");
							HX_STACK_LINE(655)
							Float tmp122 = y1;		HX_STACK_VAR(tmp122,"tmp122");
							HX_STACK_LINE(655)
							Float tmp123 = (tmp121 * tmp122);		HX_STACK_VAR(tmp123,"tmp123");
							HX_STACK_LINE(655)
							Float tmp124 = (tmp120 + tmp123);		HX_STACK_VAR(tmp124,"tmp124");
							HX_STACK_LINE(655)
							Float tmp125 = denom;		HX_STACK_VAR(tmp125,"tmp125");
							HX_STACK_LINE(655)
							Float tmp126 = (Float(tmp124) / Float(tmp125));		HX_STACK_VAR(tmp126,"tmp126");
							HX_STACK_LINE(655)
							t2 = tmp126;
							HX_STACK_LINE(656)
							Float tmp127 = uvx1;		HX_STACK_VAR(tmp127,"tmp127");
							HX_STACK_LINE(656)
							Float tmp128 = (x3 - x2);		HX_STACK_VAR(tmp128,"tmp128");
							HX_STACK_LINE(656)
							Float tmp129 = (tmp127 * tmp128);		HX_STACK_VAR(tmp129,"tmp129");
							HX_STACK_LINE(656)
							Float tmp130 = (uvx2 * x3);		HX_STACK_VAR(tmp130,"tmp130");
							HX_STACK_LINE(656)
							Float tmp131 = (tmp129 - tmp130);		HX_STACK_VAR(tmp131,"tmp131");
							HX_STACK_LINE(656)
							Float tmp132 = (uvx3 * x2);		HX_STACK_VAR(tmp132,"tmp132");
							HX_STACK_LINE(656)
							Float tmp133 = (tmp131 + tmp132);		HX_STACK_VAR(tmp133,"tmp133");
							HX_STACK_LINE(656)
							Float tmp134 = (uvx2 - uvx3);		HX_STACK_VAR(tmp134,"tmp134");
							HX_STACK_LINE(656)
							Float tmp135 = x1;		HX_STACK_VAR(tmp135,"tmp135");
							HX_STACK_LINE(656)
							Float tmp136 = (tmp134 * tmp135);		HX_STACK_VAR(tmp136,"tmp136");
							HX_STACK_LINE(656)
							Float tmp137 = (tmp133 + tmp136);		HX_STACK_VAR(tmp137,"tmp137");
							HX_STACK_LINE(656)
							Float tmp138 = denom;		HX_STACK_VAR(tmp138,"tmp138");
							HX_STACK_LINE(656)
							Float tmp139 = (Float(tmp137) / Float(tmp138));		HX_STACK_VAR(tmp139,"tmp139");
							HX_STACK_LINE(656)
							t3 = tmp139;
							HX_STACK_LINE(657)
							Float tmp140 = (uvx2 * y3);		HX_STACK_VAR(tmp140,"tmp140");
							HX_STACK_LINE(657)
							Float tmp141 = uvx1;		HX_STACK_VAR(tmp141,"tmp141");
							HX_STACK_LINE(657)
							Float tmp142 = (y2 - y3);		HX_STACK_VAR(tmp142,"tmp142");
							HX_STACK_LINE(657)
							Float tmp143 = (tmp141 * tmp142);		HX_STACK_VAR(tmp143,"tmp143");
							HX_STACK_LINE(657)
							Float tmp144 = (tmp140 + tmp143);		HX_STACK_VAR(tmp144,"tmp144");
							HX_STACK_LINE(657)
							Float tmp145 = (uvx3 * y2);		HX_STACK_VAR(tmp145,"tmp145");
							HX_STACK_LINE(657)
							Float tmp146 = (tmp144 - tmp145);		HX_STACK_VAR(tmp146,"tmp146");
							HX_STACK_LINE(657)
							Float tmp147 = (uvx3 - uvx2);		HX_STACK_VAR(tmp147,"tmp147");
							HX_STACK_LINE(657)
							Float tmp148 = y1;		HX_STACK_VAR(tmp148,"tmp148");
							HX_STACK_LINE(657)
							Float tmp149 = (tmp147 * tmp148);		HX_STACK_VAR(tmp149,"tmp149");
							HX_STACK_LINE(657)
							Float tmp150 = (tmp146 + tmp149);		HX_STACK_VAR(tmp150,"tmp150");
							HX_STACK_LINE(657)
							Float tmp151 = -(tmp150);		HX_STACK_VAR(tmp151,"tmp151");
							HX_STACK_LINE(657)
							Float tmp152 = denom;		HX_STACK_VAR(tmp152,"tmp152");
							HX_STACK_LINE(657)
							Float tmp153 = (Float(tmp151) / Float(tmp152));		HX_STACK_VAR(tmp153,"tmp153");
							HX_STACK_LINE(657)
							t4 = tmp153;
							HX_STACK_LINE(658)
							Float tmp154 = uvx1;		HX_STACK_VAR(tmp154,"tmp154");
							HX_STACK_LINE(658)
							Float tmp155 = (uvy3 * x2);		HX_STACK_VAR(tmp155,"tmp155");
							HX_STACK_LINE(658)
							Float tmp156 = (uvy2 * x3);		HX_STACK_VAR(tmp156,"tmp156");
							HX_STACK_LINE(658)
							Float tmp157 = (tmp155 - tmp156);		HX_STACK_VAR(tmp157,"tmp157");
							HX_STACK_LINE(658)
							Float tmp158 = (tmp154 * tmp157);		HX_STACK_VAR(tmp158,"tmp158");
							HX_STACK_LINE(658)
							Float tmp159 = uvy1;		HX_STACK_VAR(tmp159,"tmp159");
							HX_STACK_LINE(658)
							Float tmp160 = (uvx2 * x3);		HX_STACK_VAR(tmp160,"tmp160");
							HX_STACK_LINE(658)
							Float tmp161 = (uvx3 * x2);		HX_STACK_VAR(tmp161,"tmp161");
							HX_STACK_LINE(658)
							Float tmp162 = (tmp160 - tmp161);		HX_STACK_VAR(tmp162,"tmp162");
							HX_STACK_LINE(658)
							Float tmp163 = (tmp159 * tmp162);		HX_STACK_VAR(tmp163,"tmp163");
							HX_STACK_LINE(658)
							Float tmp164 = (tmp158 + tmp163);		HX_STACK_VAR(tmp164,"tmp164");
							HX_STACK_LINE(658)
							Float tmp165 = (uvx3 * uvy2);		HX_STACK_VAR(tmp165,"tmp165");
							HX_STACK_LINE(658)
							Float tmp166 = (uvx2 * uvy3);		HX_STACK_VAR(tmp166,"tmp166");
							HX_STACK_LINE(658)
							Float tmp167 = (tmp165 - tmp166);		HX_STACK_VAR(tmp167,"tmp167");
							HX_STACK_LINE(658)
							Float tmp168 = x1;		HX_STACK_VAR(tmp168,"tmp168");
							HX_STACK_LINE(658)
							Float tmp169 = (tmp167 * tmp168);		HX_STACK_VAR(tmp169,"tmp169");
							HX_STACK_LINE(658)
							Float tmp170 = (tmp164 + tmp169);		HX_STACK_VAR(tmp170,"tmp170");
							HX_STACK_LINE(658)
							Float tmp171 = denom;		HX_STACK_VAR(tmp171,"tmp171");
							HX_STACK_LINE(658)
							Float tmp172 = (Float(tmp170) / Float(tmp171));		HX_STACK_VAR(tmp172,"tmp172");
							HX_STACK_LINE(658)
							dx = tmp172;
							HX_STACK_LINE(659)
							Float tmp173 = uvx1;		HX_STACK_VAR(tmp173,"tmp173");
							HX_STACK_LINE(659)
							Float tmp174 = (uvy3 * y2);		HX_STACK_VAR(tmp174,"tmp174");
							HX_STACK_LINE(659)
							Float tmp175 = (uvy2 * y3);		HX_STACK_VAR(tmp175,"tmp175");
							HX_STACK_LINE(659)
							Float tmp176 = (tmp174 - tmp175);		HX_STACK_VAR(tmp176,"tmp176");
							HX_STACK_LINE(659)
							Float tmp177 = (tmp173 * tmp176);		HX_STACK_VAR(tmp177,"tmp177");
							HX_STACK_LINE(659)
							Float tmp178 = uvy1;		HX_STACK_VAR(tmp178,"tmp178");
							HX_STACK_LINE(659)
							Float tmp179 = (uvx2 * y3);		HX_STACK_VAR(tmp179,"tmp179");
							HX_STACK_LINE(659)
							Float tmp180 = (uvx3 * y2);		HX_STACK_VAR(tmp180,"tmp180");
							HX_STACK_LINE(659)
							Float tmp181 = (tmp179 - tmp180);		HX_STACK_VAR(tmp181,"tmp181");
							HX_STACK_LINE(659)
							Float tmp182 = (tmp178 * tmp181);		HX_STACK_VAR(tmp182,"tmp182");
							HX_STACK_LINE(659)
							Float tmp183 = (tmp177 + tmp182);		HX_STACK_VAR(tmp183,"tmp183");
							HX_STACK_LINE(659)
							Float tmp184 = (uvx3 * uvy2);		HX_STACK_VAR(tmp184,"tmp184");
							HX_STACK_LINE(659)
							Float tmp185 = (uvx2 * uvy3);		HX_STACK_VAR(tmp185,"tmp185");
							HX_STACK_LINE(659)
							Float tmp186 = (tmp184 - tmp185);		HX_STACK_VAR(tmp186,"tmp186");
							HX_STACK_LINE(659)
							Float tmp187 = y1;		HX_STACK_VAR(tmp187,"tmp187");
							HX_STACK_LINE(659)
							Float tmp188 = (tmp186 * tmp187);		HX_STACK_VAR(tmp188,"tmp188");
							HX_STACK_LINE(659)
							Float tmp189 = (tmp183 + tmp188);		HX_STACK_VAR(tmp189,"tmp189");
							HX_STACK_LINE(659)
							Float tmp190 = denom;		HX_STACK_VAR(tmp190,"tmp190");
							HX_STACK_LINE(659)
							Float tmp191 = (Float(tmp189) / Float(tmp190));		HX_STACK_VAR(tmp191,"tmp191");
							HX_STACK_LINE(659)
							dy = tmp191;
							HX_STACK_LINE(661)
							::lime::math::Matrix3 tmp192 = ::lime::math::Matrix3_obj::__new(t1,t2,t3,t4,dx,dy);		HX_STACK_VAR(tmp192,"tmp192");
							HX_STACK_LINE(661)
							::lime::math::Matrix3 matrix = tmp192;		HX_STACK_VAR(matrix,"matrix");
							HX_STACK_LINE(662)
							::lime::graphics::cairo::Cairo tmp193 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::cairo;		HX_STACK_VAR(tmp193,"tmp193");
							HX_STACK_LINE(662)
							::lime::math::Matrix3 tmp194 = matrix;		HX_STACK_VAR(tmp194,"tmp194");
							HX_STACK_LINE(662)
							tmp193->set_matrix(tmp194);
							HX_STACK_LINE(663)
							::lime::graphics::cairo::Cairo tmp195 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::cairo;		HX_STACK_VAR(tmp195,"tmp195");
							HX_STACK_LINE(663)
							Dynamic tmp196 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::fillPattern;		HX_STACK_VAR(tmp196,"tmp196");
							HX_STACK_LINE(663)
							tmp195->set_source(tmp196);
							HX_STACK_LINE(664)
							::lime::graphics::cairo::Cairo tmp197 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::cairo;		HX_STACK_VAR(tmp197,"tmp197");
							HX_STACK_LINE(664)
							tmp197->fill();
							HX_STACK_LINE(666)
							hx::AddEq(i,(int)3);
						}
					}
				}
				else if (  ( _switch_1==(int)9)){
					HX_STACK_LINE(272)
					int tmp8 = (::openfl::display::DrawCommand(command))->__Param(4);		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(272)
					int count = tmp8;		HX_STACK_VAR(count,"count");
					HX_STACK_LINE(272)
					int tmp9 = (::openfl::display::DrawCommand(command))->__Param(3);		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(272)
					int flags = tmp9;		HX_STACK_VAR(flags,"flags");
					HX_STACK_LINE(272)
					bool tmp10 = (::openfl::display::DrawCommand(command))->__Param(2);		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(272)
					bool smooth = tmp10;		HX_STACK_VAR(smooth,"smooth");
					HX_STACK_LINE(272)
					Array< Float > tileData = (::openfl::display::DrawCommand(command))->__Param(1);		HX_STACK_VAR(tileData,"tileData");
					HX_STACK_LINE(272)
					::openfl::display::Tilesheet tmp11 = (::openfl::display::DrawCommand(command))->__Param(0);		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(272)
					::openfl::display::Tilesheet sheet = tmp11;		HX_STACK_VAR(sheet,"sheet");
					HX_STACK_LINE(670)
					{
						HX_STACK_LINE(672)
						int tmp12 = (int(flags) & int((int)1));		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(672)
						bool tmp13 = (tmp12 > (int)0);		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(672)
						bool useScale = tmp13;		HX_STACK_VAR(useScale,"useScale");
						HX_STACK_LINE(673)
						int tmp14 = (int(flags) & int((int)2));		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(673)
						bool tmp15 = (tmp14 > (int)0);		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(673)
						bool useRotation = tmp15;		HX_STACK_VAR(useRotation,"useRotation");
						HX_STACK_LINE(674)
						int tmp16 = (int(flags) & int((int)16));		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(674)
						bool tmp17 = (tmp16 > (int)0);		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(674)
						bool useTransform = tmp17;		HX_STACK_VAR(useTransform,"useTransform");
						HX_STACK_LINE(675)
						int tmp18 = (int(flags) & int((int)4));		HX_STACK_VAR(tmp18,"tmp18");
						HX_STACK_LINE(675)
						bool tmp19 = (tmp18 > (int)0);		HX_STACK_VAR(tmp19,"tmp19");
						HX_STACK_LINE(675)
						bool useRGB = tmp19;		HX_STACK_VAR(useRGB,"useRGB");
						HX_STACK_LINE(676)
						int tmp20 = (int(flags) & int((int)8));		HX_STACK_VAR(tmp20,"tmp20");
						HX_STACK_LINE(676)
						bool tmp21 = (tmp20 > (int)0);		HX_STACK_VAR(tmp21,"tmp21");
						HX_STACK_LINE(676)
						bool useAlpha = tmp21;		HX_STACK_VAR(useAlpha,"useAlpha");
						HX_STACK_LINE(677)
						int tmp22 = (int(flags) & int((int)32));		HX_STACK_VAR(tmp22,"tmp22");
						HX_STACK_LINE(677)
						bool tmp23 = (tmp22 > (int)0);		HX_STACK_VAR(tmp23,"tmp23");
						HX_STACK_LINE(677)
						bool useRect = tmp23;		HX_STACK_VAR(useRect,"useRect");
						HX_STACK_LINE(678)
						int tmp24 = (int(flags) & int((int)64));		HX_STACK_VAR(tmp24,"tmp24");
						HX_STACK_LINE(678)
						bool tmp25 = (tmp24 > (int)0);		HX_STACK_VAR(tmp25,"tmp25");
						HX_STACK_LINE(678)
						bool useOrigin = tmp25;		HX_STACK_VAR(useOrigin,"useOrigin");
						HX_STACK_LINE(679)
						int tmp26 = (int(flags) & int((int)65536));		HX_STACK_VAR(tmp26,"tmp26");
						HX_STACK_LINE(679)
						bool tmp27 = (tmp26 > (int)0);		HX_STACK_VAR(tmp27,"tmp27");
						HX_STACK_LINE(679)
						bool useBlendAdd = tmp27;		HX_STACK_VAR(useBlendAdd,"useBlendAdd");
						HX_STACK_LINE(680)
						int tmp28 = (int(flags) & int((int)4194304));		HX_STACK_VAR(tmp28,"tmp28");
						HX_STACK_LINE(680)
						bool tmp29 = (tmp28 > (int)0);		HX_STACK_VAR(tmp29,"tmp29");
						HX_STACK_LINE(680)
						bool useBlendOverlay = tmp29;		HX_STACK_VAR(useBlendOverlay,"useBlendOverlay");
						HX_STACK_LINE(682)
						bool tmp30 = useTransform;		HX_STACK_VAR(tmp30,"tmp30");
						HX_STACK_LINE(682)
						if ((tmp30)){
							HX_STACK_LINE(682)
							useScale = false;
							HX_STACK_LINE(682)
							useRotation = false;
						}
						HX_STACK_LINE(684)
						int scaleIndex = (int)0;		HX_STACK_VAR(scaleIndex,"scaleIndex");
						HX_STACK_LINE(685)
						int rotationIndex = (int)0;		HX_STACK_VAR(rotationIndex,"rotationIndex");
						HX_STACK_LINE(686)
						int rgbIndex = (int)0;		HX_STACK_VAR(rgbIndex,"rgbIndex");
						HX_STACK_LINE(687)
						int alphaIndex = (int)0;		HX_STACK_VAR(alphaIndex,"alphaIndex");
						HX_STACK_LINE(688)
						int transformIndex = (int)0;		HX_STACK_VAR(transformIndex,"transformIndex");
						HX_STACK_LINE(690)
						int numValues = (int)3;		HX_STACK_VAR(numValues,"numValues");
						HX_STACK_LINE(692)
						bool tmp31 = useRect;		HX_STACK_VAR(tmp31,"tmp31");
						HX_STACK_LINE(692)
						if ((tmp31)){
							HX_STACK_LINE(692)
							bool tmp32 = useOrigin;		HX_STACK_VAR(tmp32,"tmp32");
							HX_STACK_LINE(692)
							int tmp33;		HX_STACK_VAR(tmp33,"tmp33");
							HX_STACK_LINE(692)
							if ((tmp32)){
								HX_STACK_LINE(692)
								tmp33 = (int)8;
							}
							else{
								HX_STACK_LINE(692)
								tmp33 = (int)6;
							}
							HX_STACK_LINE(692)
							numValues = tmp33;
						}
						HX_STACK_LINE(693)
						bool tmp32 = useScale;		HX_STACK_VAR(tmp32,"tmp32");
						HX_STACK_LINE(693)
						if ((tmp32)){
							HX_STACK_LINE(693)
							scaleIndex = numValues;
							HX_STACK_LINE(693)
							(numValues)++;
						}
						HX_STACK_LINE(694)
						bool tmp33 = useRotation;		HX_STACK_VAR(tmp33,"tmp33");
						HX_STACK_LINE(694)
						if ((tmp33)){
							HX_STACK_LINE(694)
							rotationIndex = numValues;
							HX_STACK_LINE(694)
							(numValues)++;
						}
						HX_STACK_LINE(695)
						bool tmp34 = useTransform;		HX_STACK_VAR(tmp34,"tmp34");
						HX_STACK_LINE(695)
						if ((tmp34)){
							HX_STACK_LINE(695)
							transformIndex = numValues;
							HX_STACK_LINE(695)
							hx::AddEq(numValues,(int)4);
						}
						HX_STACK_LINE(696)
						bool tmp35 = useRGB;		HX_STACK_VAR(tmp35,"tmp35");
						HX_STACK_LINE(696)
						if ((tmp35)){
							HX_STACK_LINE(696)
							rgbIndex = numValues;
							HX_STACK_LINE(696)
							hx::AddEq(numValues,(int)3);
						}
						HX_STACK_LINE(697)
						bool tmp36 = useAlpha;		HX_STACK_VAR(tmp36,"tmp36");
						HX_STACK_LINE(697)
						if ((tmp36)){
							HX_STACK_LINE(697)
							alphaIndex = numValues;
							HX_STACK_LINE(697)
							(numValues)++;
						}
						HX_STACK_LINE(699)
						int totalCount = tileData->length;		HX_STACK_VAR(totalCount,"totalCount");
						HX_STACK_LINE(700)
						bool tmp37 = (count >= (int)0);		HX_STACK_VAR(tmp37,"tmp37");
						HX_STACK_LINE(700)
						bool tmp38;		HX_STACK_VAR(tmp38,"tmp38");
						HX_STACK_LINE(700)
						if ((tmp37)){
							HX_STACK_LINE(700)
							tmp38 = (totalCount > count);
						}
						else{
							HX_STACK_LINE(700)
							tmp38 = false;
						}
						HX_STACK_LINE(700)
						if ((tmp38)){
							HX_STACK_LINE(700)
							totalCount = count;
						}
						HX_STACK_LINE(701)
						Float tmp39 = (Float(totalCount) / Float(numValues));		HX_STACK_VAR(tmp39,"tmp39");
						HX_STACK_LINE(701)
						int tmp40 = ::Std_obj::_int(tmp39);		HX_STACK_VAR(tmp40,"tmp40");
						HX_STACK_LINE(701)
						int itemCount = tmp40;		HX_STACK_VAR(itemCount,"itemCount");
						HX_STACK_LINE(702)
						int index = (int)0;		HX_STACK_VAR(index,"index");
						HX_STACK_LINE(704)
						::openfl::geom::Rectangle rect = null();		HX_STACK_VAR(rect,"rect");
						HX_STACK_LINE(705)
						::openfl::geom::Point center = null();		HX_STACK_VAR(center,"center");
						HX_STACK_LINE(706)
						int previousTileID = (int)-1;		HX_STACK_VAR(previousTileID,"previousTileID");
						HX_STACK_LINE(708)
						Dynamic surface;		HX_STACK_VAR(surface,"surface");
						HX_STACK_LINE(709)
						sheet->__bitmap->__sync();
						HX_STACK_LINE(710)
						Dynamic tmp41 = sheet->__bitmap->getSurface();		HX_STACK_VAR(tmp41,"tmp41");
						HX_STACK_LINE(710)
						surface = tmp41;
						HX_STACK_LINE(712)
						bool tmp42 = useBlendAdd;		HX_STACK_VAR(tmp42,"tmp42");
						HX_STACK_LINE(712)
						if ((tmp42)){
							HX_STACK_LINE(714)
							::lime::graphics::cairo::Cairo tmp43 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::cairo;		HX_STACK_VAR(tmp43,"tmp43");
							HX_STACK_LINE(714)
							tmp43->set_operator((int)12);
						}
						HX_STACK_LINE(718)
						bool tmp43 = useBlendOverlay;		HX_STACK_VAR(tmp43,"tmp43");
						HX_STACK_LINE(718)
						if ((tmp43)){
							HX_STACK_LINE(720)
							::lime::graphics::cairo::Cairo tmp44 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::cairo;		HX_STACK_VAR(tmp44,"tmp44");
							HX_STACK_LINE(720)
							tmp44->set_operator((int)16);
						}
						HX_STACK_LINE(724)
						while((true)){
							HX_STACK_LINE(724)
							bool tmp44 = (index < totalCount);		HX_STACK_VAR(tmp44,"tmp44");
							HX_STACK_LINE(724)
							bool tmp45 = !(tmp44);		HX_STACK_VAR(tmp45,"tmp45");
							HX_STACK_LINE(724)
							if ((tmp45)){
								HX_STACK_LINE(724)
								break;
							}
							HX_STACK_LINE(740)
							int tmp46 = (index + (int)2);		HX_STACK_VAR(tmp46,"tmp46");
							HX_STACK_LINE(740)
							Float tmp47 = tileData->__get(tmp46);		HX_STACK_VAR(tmp47,"tmp47");
							HX_STACK_LINE(740)
							int tmp48 = ::Std_obj::_int(tmp47);		HX_STACK_VAR(tmp48,"tmp48");
							HX_STACK_LINE(740)
							int i = tmp48;		HX_STACK_VAR(i,"i");
							HX_STACK_LINE(744)
							bool tmp49 = useRect;		HX_STACK_VAR(tmp49,"tmp49");
							HX_STACK_LINE(744)
							bool tmp50 = !(tmp49);		HX_STACK_VAR(tmp50,"tmp50");
							HX_STACK_LINE(744)
							int tmp51;		HX_STACK_VAR(tmp51,"tmp51");
							HX_STACK_LINE(744)
							if ((tmp50)){
								HX_STACK_LINE(744)
								tmp51 = i;
							}
							else{
								HX_STACK_LINE(744)
								tmp51 = (int)-1;
							}
							HX_STACK_LINE(744)
							int tileID = tmp51;		HX_STACK_VAR(tileID,"tileID");
							HX_STACK_LINE(746)
							bool tmp52 = useRect;		HX_STACK_VAR(tmp52,"tmp52");
							HX_STACK_LINE(746)
							bool tmp53 = tmp52;		HX_STACK_VAR(tmp53,"tmp53");
							HX_STACK_LINE(746)
							bool tmp54 = !(tmp53);		HX_STACK_VAR(tmp54,"tmp54");
							HX_STACK_LINE(746)
							bool tmp55;		HX_STACK_VAR(tmp55,"tmp55");
							HX_STACK_LINE(746)
							if ((tmp54)){
								HX_STACK_LINE(746)
								tmp55 = (tileID != previousTileID);
							}
							else{
								HX_STACK_LINE(746)
								tmp55 = false;
							}
							HX_STACK_LINE(746)
							if ((tmp55)){
								HX_STACK_LINE(748)
								::openfl::geom::Rectangle tmp56 = sheet->__tileRects->__get(tileID).StaticCast< ::openfl::geom::Rectangle >();		HX_STACK_VAR(tmp56,"tmp56");
								HX_STACK_LINE(748)
								rect = tmp56;
								HX_STACK_LINE(749)
								::openfl::geom::Point tmp57 = sheet->__centerPoints->__get(tileID).StaticCast< ::openfl::geom::Point >();		HX_STACK_VAR(tmp57,"tmp57");
								HX_STACK_LINE(749)
								center = tmp57;
								HX_STACK_LINE(751)
								previousTileID = tileID;
							}
							else{
								HX_STACK_LINE(753)
								bool tmp56 = useRect;		HX_STACK_VAR(tmp56,"tmp56");
								HX_STACK_LINE(753)
								if ((tmp56)){
									HX_STACK_LINE(755)
									rect = sheet->__rectTile;
									HX_STACK_LINE(756)
									int tmp57 = (index + (int)2);		HX_STACK_VAR(tmp57,"tmp57");
									HX_STACK_LINE(756)
									Float tmp58 = tileData->__get(tmp57);		HX_STACK_VAR(tmp58,"tmp58");
									HX_STACK_LINE(756)
									int tmp59 = (index + (int)3);		HX_STACK_VAR(tmp59,"tmp59");
									HX_STACK_LINE(756)
									Float tmp60 = tileData->__get(tmp59);		HX_STACK_VAR(tmp60,"tmp60");
									HX_STACK_LINE(756)
									int tmp61 = (index + (int)4);		HX_STACK_VAR(tmp61,"tmp61");
									HX_STACK_LINE(756)
									Float tmp62 = tileData->__get(tmp61);		HX_STACK_VAR(tmp62,"tmp62");
									HX_STACK_LINE(756)
									int tmp63 = (index + (int)5);		HX_STACK_VAR(tmp63,"tmp63");
									HX_STACK_LINE(756)
									Float tmp64 = tileData->__get(tmp63);		HX_STACK_VAR(tmp64,"tmp64");
									HX_STACK_LINE(756)
									rect->setTo(tmp58,tmp60,tmp62,tmp64);
									HX_STACK_LINE(757)
									center = sheet->__point;
									HX_STACK_LINE(759)
									bool tmp65 = useOrigin;		HX_STACK_VAR(tmp65,"tmp65");
									HX_STACK_LINE(759)
									if ((tmp65)){
										HX_STACK_LINE(761)
										int tmp66 = (index + (int)6);		HX_STACK_VAR(tmp66,"tmp66");
										HX_STACK_LINE(761)
										Float tmp67 = tileData->__get(tmp66);		HX_STACK_VAR(tmp67,"tmp67");
										HX_STACK_LINE(761)
										center->x = tmp67;
										HX_STACK_LINE(761)
										int tmp68 = (index + (int)7);		HX_STACK_VAR(tmp68,"tmp68");
										HX_STACK_LINE(761)
										Float tmp69 = tileData->__get(tmp68);		HX_STACK_VAR(tmp69,"tmp69");
										HX_STACK_LINE(761)
										center->y = tmp69;
									}
									else{
										HX_STACK_LINE(765)
										center->x = (int)0;
										HX_STACK_LINE(765)
										center->y = (int)0;
									}
								}
							}
							HX_STACK_LINE(771)
							bool tmp56 = (rect != null());		HX_STACK_VAR(tmp56,"tmp56");
							HX_STACK_LINE(771)
							bool tmp57 = tmp56;		HX_STACK_VAR(tmp57,"tmp57");
							HX_STACK_LINE(771)
							bool tmp58;		HX_STACK_VAR(tmp58,"tmp58");
							HX_STACK_LINE(771)
							if ((tmp57)){
								HX_STACK_LINE(771)
								tmp58 = (rect->width > (int)0);
							}
							else{
								HX_STACK_LINE(771)
								tmp58 = false;
							}
							HX_STACK_LINE(771)
							bool tmp59 = tmp58;		HX_STACK_VAR(tmp59,"tmp59");
							HX_STACK_LINE(771)
							bool tmp60;		HX_STACK_VAR(tmp60,"tmp60");
							HX_STACK_LINE(771)
							if ((tmp59)){
								HX_STACK_LINE(771)
								tmp60 = (rect->height > (int)0);
							}
							else{
								HX_STACK_LINE(771)
								tmp60 = false;
							}
							HX_STACK_LINE(771)
							bool tmp61;		HX_STACK_VAR(tmp61,"tmp61");
							HX_STACK_LINE(771)
							if ((tmp60)){
								HX_STACK_LINE(771)
								tmp61 = (center != null());
							}
							else{
								HX_STACK_LINE(771)
								tmp61 = false;
							}
							HX_STACK_LINE(771)
							if ((tmp61)){
								HX_STACK_LINE(775)
								::lime::graphics::cairo::Cairo tmp62 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::cairo;		HX_STACK_VAR(tmp62,"tmp62");
								HX_STACK_LINE(775)
								tmp62->identityMatrix();
								HX_STACK_LINE(777)
								bool tmp63 = useTransform;		HX_STACK_VAR(tmp63,"tmp63");
								HX_STACK_LINE(777)
								if ((tmp63)){
									HX_STACK_LINE(779)
									int tmp64 = (index + transformIndex);		HX_STACK_VAR(tmp64,"tmp64");
									HX_STACK_LINE(779)
									Float tmp65 = tileData->__get(tmp64);		HX_STACK_VAR(tmp65,"tmp65");
									HX_STACK_LINE(779)
									int tmp66 = (index + transformIndex);		HX_STACK_VAR(tmp66,"tmp66");
									HX_STACK_LINE(779)
									int tmp67 = (tmp66 + (int)1);		HX_STACK_VAR(tmp67,"tmp67");
									HX_STACK_LINE(779)
									Float tmp68 = tileData->__get(tmp67);		HX_STACK_VAR(tmp68,"tmp68");
									HX_STACK_LINE(779)
									int tmp69 = (index + transformIndex);		HX_STACK_VAR(tmp69,"tmp69");
									HX_STACK_LINE(779)
									int tmp70 = (tmp69 + (int)2);		HX_STACK_VAR(tmp70,"tmp70");
									HX_STACK_LINE(779)
									Float tmp71 = tileData->__get(tmp70);		HX_STACK_VAR(tmp71,"tmp71");
									HX_STACK_LINE(779)
									int tmp72 = (index + transformIndex);		HX_STACK_VAR(tmp72,"tmp72");
									HX_STACK_LINE(779)
									int tmp73 = (tmp72 + (int)3);		HX_STACK_VAR(tmp73,"tmp73");
									HX_STACK_LINE(779)
									Float tmp74 = tileData->__get(tmp73);		HX_STACK_VAR(tmp74,"tmp74");
									HX_STACK_LINE(779)
									::lime::math::Matrix3 tmp75 = ::lime::math::Matrix3_obj::__new(tmp65,tmp68,tmp71,tmp74,(int)0,(int)0);		HX_STACK_VAR(tmp75,"tmp75");
									HX_STACK_LINE(779)
									::lime::math::Matrix3 matrix = tmp75;		HX_STACK_VAR(matrix,"matrix");
									HX_STACK_LINE(780)
									::lime::graphics::cairo::Cairo tmp76 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::cairo;		HX_STACK_VAR(tmp76,"tmp76");
									HX_STACK_LINE(780)
									::lime::math::Matrix3 tmp77 = matrix;		HX_STACK_VAR(tmp77,"tmp77");
									HX_STACK_LINE(780)
									tmp76->set_matrix(tmp77);
								}
								HX_STACK_LINE(784)
								::lime::graphics::cairo::Cairo tmp64 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::cairo;		HX_STACK_VAR(tmp64,"tmp64");
								HX_STACK_LINE(784)
								Float tmp65 = tileData->__get(index);		HX_STACK_VAR(tmp65,"tmp65");
								HX_STACK_LINE(784)
								int tmp66 = (index + (int)1);		HX_STACK_VAR(tmp66,"tmp66");
								HX_STACK_LINE(784)
								Float tmp67 = tileData->__get(tmp66);		HX_STACK_VAR(tmp67,"tmp67");
								HX_STACK_LINE(784)
								tmp64->translate(tmp65,tmp67);
								HX_STACK_LINE(786)
								bool tmp68 = useRotation;		HX_STACK_VAR(tmp68,"tmp68");
								HX_STACK_LINE(786)
								if ((tmp68)){
									HX_STACK_LINE(788)
									::lime::graphics::cairo::Cairo tmp69 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::cairo;		HX_STACK_VAR(tmp69,"tmp69");
									HX_STACK_LINE(788)
									int tmp70 = (index + rotationIndex);		HX_STACK_VAR(tmp70,"tmp70");
									HX_STACK_LINE(788)
									Float tmp71 = tileData->__get(tmp70);		HX_STACK_VAR(tmp71,"tmp71");
									HX_STACK_LINE(788)
									tmp69->rotate(tmp71);
								}
								HX_STACK_LINE(792)
								bool tmp69 = useScale;		HX_STACK_VAR(tmp69,"tmp69");
								HX_STACK_LINE(792)
								if ((tmp69)){
									HX_STACK_LINE(794)
									int tmp70 = (index + scaleIndex);		HX_STACK_VAR(tmp70,"tmp70");
									HX_STACK_LINE(794)
									Float tmp71 = tileData->__get(tmp70);		HX_STACK_VAR(tmp71,"tmp71");
									HX_STACK_LINE(794)
									Float scale = tmp71;		HX_STACK_VAR(scale,"scale");
									HX_STACK_LINE(795)
									::lime::graphics::cairo::Cairo tmp72 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::cairo;		HX_STACK_VAR(tmp72,"tmp72");
									HX_STACK_LINE(795)
									Float tmp73 = scale;		HX_STACK_VAR(tmp73,"tmp73");
									HX_STACK_LINE(795)
									Float tmp74 = scale;		HX_STACK_VAR(tmp74,"tmp74");
									HX_STACK_LINE(795)
									tmp72->scale(tmp73,tmp74);
								}
								HX_STACK_LINE(799)
								::lime::graphics::cairo::Cairo tmp70 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::cairo;		HX_STACK_VAR(tmp70,"tmp70");
								HX_STACK_LINE(799)
								Dynamic tmp71 = surface;		HX_STACK_VAR(tmp71,"tmp71");
								HX_STACK_LINE(799)
								tmp70->setSourceSurface(tmp71,(int)0,(int)0);
								HX_STACK_LINE(801)
								bool tmp72 = useAlpha;		HX_STACK_VAR(tmp72,"tmp72");
								HX_STACK_LINE(801)
								if ((tmp72)){
									HX_STACK_LINE(803)
									::lime::graphics::cairo::Cairo tmp73 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::cairo;		HX_STACK_VAR(tmp73,"tmp73");
									HX_STACK_LINE(803)
									int tmp74 = (index + alphaIndex);		HX_STACK_VAR(tmp74,"tmp74");
									HX_STACK_LINE(803)
									Float tmp75 = tileData->__get(tmp74);		HX_STACK_VAR(tmp75,"tmp75");
									HX_STACK_LINE(803)
									tmp73->paintWithAlpha(tmp75);
								}
								else{
									HX_STACK_LINE(807)
									::lime::graphics::cairo::Cairo tmp73 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::cairo;		HX_STACK_VAR(tmp73,"tmp73");
									HX_STACK_LINE(807)
									tmp73->paint();
								}
							}
							HX_STACK_LINE(815)
							hx::AddEq(index,numValues);
						}
						HX_STACK_LINE(819)
						bool tmp44 = useBlendAdd;		HX_STACK_VAR(tmp44,"tmp44");
						HX_STACK_LINE(819)
						bool tmp45 = !(tmp44);		HX_STACK_VAR(tmp45,"tmp45");
						HX_STACK_LINE(819)
						bool tmp46;		HX_STACK_VAR(tmp46,"tmp46");
						HX_STACK_LINE(819)
						if ((tmp45)){
							HX_STACK_LINE(819)
							tmp46 = useBlendOverlay;
						}
						else{
							HX_STACK_LINE(819)
							tmp46 = true;
						}
						HX_STACK_LINE(819)
						if ((tmp46)){
							HX_STACK_LINE(821)
							::lime::graphics::cairo::Cairo tmp47 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::cairo;		HX_STACK_VAR(tmp47,"tmp47");
							HX_STACK_LINE(821)
							tmp47->set_operator((int)2);
						}
					}
				}
				else  {
				}
;
;
			}
		}
		HX_STACK_LINE(832)
		bool tmp5 = hasPath;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(832)
		if ((tmp5)){
			HX_STACK_LINE(834)
			bool tmp6 = stroke;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(834)
			bool tmp7;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(834)
			if ((tmp6)){
				HX_STACK_LINE(834)
				tmp7 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::hasStroke;
			}
			else{
				HX_STACK_LINE(834)
				tmp7 = false;
			}
			HX_STACK_LINE(834)
			if ((tmp7)){
				HX_STACK_LINE(836)
				bool tmp8 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::hasFill;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(836)
				bool tmp9;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(836)
				if ((tmp8)){
					HX_STACK_LINE(836)
					tmp9 = closeGap;
				}
				else{
					HX_STACK_LINE(836)
					tmp9 = false;
				}
				HX_STACK_LINE(836)
				if ((tmp9)){
					HX_STACK_LINE(838)
					::lime::graphics::cairo::Cairo tmp10 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::cairo;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(838)
					Float tmp11 = (startX - offsetX);		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(838)
					Float tmp12 = (startY - offsetY);		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(838)
					tmp10->lineTo(tmp11,tmp12);
				}
				HX_STACK_LINE(842)
				::lime::graphics::cairo::Cairo tmp10 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::cairo;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(842)
				Dynamic tmp11 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::strokePattern;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(842)
				tmp10->set_source(tmp11);
				HX_STACK_LINE(843)
				::lime::graphics::cairo::Cairo tmp12 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::cairo;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(843)
				tmp12->strokePreserve();
			}
			HX_STACK_LINE(847)
			bool tmp8 = stroke;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(847)
			bool tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(847)
			bool tmp10 = !(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(847)
			bool tmp11;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(847)
			if ((tmp10)){
				HX_STACK_LINE(847)
				tmp11 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::hasFill;
			}
			else{
				HX_STACK_LINE(847)
				tmp11 = false;
			}
			HX_STACK_LINE(847)
			if ((tmp11)){
				HX_STACK_LINE(849)
				::lime::graphics::cairo::Cairo tmp12 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::cairo;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(849)
				::openfl::geom::Rectangle tmp13 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::bounds;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(849)
				Float tmp14 = tmp13->x;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(849)
				Float tmp15 = -(tmp14);		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(849)
				::openfl::geom::Rectangle tmp16 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::bounds;		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(849)
				Float tmp17 = tmp16->y;		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(849)
				Float tmp18 = -(tmp17);		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(849)
				tmp12->translate(tmp15,tmp18);
				HX_STACK_LINE(851)
				::openfl::geom::Matrix tmp19 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::fillPatternMatrix;		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(851)
				bool tmp20 = (tmp19 != null());		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(851)
				if ((tmp20)){
					HX_STACK_LINE(853)
					::openfl::geom::Matrix tmp21;		HX_STACK_VAR(tmp21,"tmp21");
					HX_STACK_LINE(853)
					{
						HX_STACK_LINE(853)
						::openfl::geom::Matrix tmp22 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::fillPatternMatrix;		HX_STACK_VAR(tmp22,"tmp22");
						HX_STACK_LINE(853)
						::openfl::geom::Matrix _this = tmp22;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(853)
						tmp21 = ::openfl::geom::Matrix_obj::__new(_this->a,_this->b,_this->c,_this->d,_this->tx,_this->ty);
					}
					HX_STACK_LINE(853)
					::openfl::geom::Matrix matrix = tmp21;		HX_STACK_VAR(matrix,"matrix");
					HX_STACK_LINE(854)
					matrix->invert();
					HX_STACK_LINE(856)
					::openfl::geom::Matrix tmp22 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::pendingMatrix;		HX_STACK_VAR(tmp22,"tmp22");
					HX_STACK_LINE(856)
					bool tmp23 = (tmp22 != null());		HX_STACK_VAR(tmp23,"tmp23");
					HX_STACK_LINE(856)
					if ((tmp23)){
						HX_STACK_LINE(858)
						::openfl::geom::Matrix tmp24 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::pendingMatrix;		HX_STACK_VAR(tmp24,"tmp24");
						HX_STACK_LINE(858)
						matrix->concat(tmp24);
					}
					HX_STACK_LINE(862)
					Dynamic tmp24 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::fillPattern;		HX_STACK_VAR(tmp24,"tmp24");
					HX_STACK_LINE(862)
					::lime::math::Matrix3 tmp25 = matrix->__toMatrix3();		HX_STACK_VAR(tmp25,"tmp25");
					HX_STACK_LINE(862)
					::lime::graphics::cairo::_CairoPattern::CairoPattern_Impl__obj::set_matrix(tmp24,tmp25);
				}
				HX_STACK_LINE(866)
				::lime::graphics::cairo::Cairo tmp21 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::cairo;		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(866)
				Dynamic tmp22 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::fillPattern;		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(866)
				tmp21->set_source(tmp22);
				HX_STACK_LINE(868)
				::openfl::geom::Matrix tmp23 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::pendingMatrix;		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(868)
				bool tmp24 = (tmp23 != null());		HX_STACK_VAR(tmp24,"tmp24");
				HX_STACK_LINE(868)
				if ((tmp24)){
					HX_STACK_LINE(870)
					::lime::graphics::cairo::Cairo tmp25 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::cairo;		HX_STACK_VAR(tmp25,"tmp25");
					HX_STACK_LINE(870)
					::openfl::geom::Matrix tmp26 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::pendingMatrix;		HX_STACK_VAR(tmp26,"tmp26");
					HX_STACK_LINE(870)
					::lime::math::Matrix3 tmp27 = tmp26->__toMatrix3();		HX_STACK_VAR(tmp27,"tmp27");
					HX_STACK_LINE(870)
					tmp25->transform(tmp27);
					HX_STACK_LINE(871)
					::lime::graphics::cairo::Cairo tmp28 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::cairo;		HX_STACK_VAR(tmp28,"tmp28");
					HX_STACK_LINE(871)
					tmp28->fillPreserve();
					HX_STACK_LINE(872)
					::lime::graphics::cairo::Cairo tmp29 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::cairo;		HX_STACK_VAR(tmp29,"tmp29");
					HX_STACK_LINE(872)
					::openfl::geom::Matrix tmp30 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::inversePendingMatrix;		HX_STACK_VAR(tmp30,"tmp30");
					HX_STACK_LINE(872)
					::lime::math::Matrix3 tmp31 = tmp30->__toMatrix3();		HX_STACK_VAR(tmp31,"tmp31");
					HX_STACK_LINE(872)
					tmp29->transform(tmp31);
				}
				else{
					HX_STACK_LINE(876)
					::lime::graphics::cairo::Cairo tmp25 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::cairo;		HX_STACK_VAR(tmp25,"tmp25");
					HX_STACK_LINE(876)
					tmp25->fillPreserve();
				}
				HX_STACK_LINE(880)
				::lime::graphics::cairo::Cairo tmp25 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::cairo;		HX_STACK_VAR(tmp25,"tmp25");
				HX_STACK_LINE(880)
				::openfl::geom::Rectangle tmp26 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::bounds;		HX_STACK_VAR(tmp26,"tmp26");
				HX_STACK_LINE(880)
				Float tmp27 = tmp26->x;		HX_STACK_VAR(tmp27,"tmp27");
				HX_STACK_LINE(880)
				::openfl::geom::Rectangle tmp28 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::bounds;		HX_STACK_VAR(tmp28,"tmp28");
				HX_STACK_LINE(880)
				Float tmp29 = tmp28->y;		HX_STACK_VAR(tmp29,"tmp29");
				HX_STACK_LINE(880)
				tmp25->translate(tmp27,tmp29);
				HX_STACK_LINE(881)
				::lime::graphics::cairo::Cairo tmp30 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::cairo;		HX_STACK_VAR(tmp30,"tmp30");
				HX_STACK_LINE(881)
				tmp30->closePath();
			}
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(CairoGraphics_obj,playCommands,(void))

Void CairoGraphics_obj::quadraticCurveTo( Float cx,Float cy,Float x,Float y){
{
		HX_STACK_FRAME("openfl._internal.renderer.cairo.CairoGraphics","quadraticCurveTo",0x01a3b18e,"openfl._internal.renderer.cairo.CairoGraphics.quadraticCurveTo","openfl/_internal/renderer/cairo/CairoGraphics.hx",890,0x744ae94c)
		HX_STACK_ARG(cx,"cx")
		HX_STACK_ARG(cy,"cy")
		HX_STACK_ARG(x,"x")
		HX_STACK_ARG(y,"y")
		HX_STACK_LINE(892)
		::lime::math::Vector2 current = null();		HX_STACK_VAR(current,"current");
		HX_STACK_LINE(894)
		::lime::graphics::cairo::Cairo tmp = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::cairo;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(894)
		bool tmp1 = tmp->get_hasCurrentPoint();		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(894)
		bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(894)
		if ((tmp2)){
			HX_STACK_LINE(896)
			::lime::graphics::cairo::Cairo tmp3 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::cairo;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(896)
			Float tmp4 = cx;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(896)
			Float tmp5 = cy;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(896)
			tmp3->moveTo(tmp4,tmp5);
			HX_STACK_LINE(897)
			::lime::math::Vector2 tmp6 = ::lime::math::Vector2_obj::__new(cx,cy);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(897)
			current = tmp6;
		}
		else{
			HX_STACK_LINE(901)
			::lime::graphics::cairo::Cairo tmp3 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::cairo;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(901)
			::lime::math::Vector2 tmp4 = tmp3->get_currentPoint();		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(901)
			current = tmp4;
		}
		HX_STACK_LINE(905)
		Float tmp3 = current->x;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(905)
		Float tmp4 = ((Float)0.66666666666666663);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(905)
		Float tmp5 = (cx - current->x);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(905)
		Float tmp6 = (tmp4 * tmp5);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(905)
		Float tmp7 = (tmp3 + tmp6);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(905)
		Float cx1 = tmp7;		HX_STACK_VAR(cx1,"cx1");
		HX_STACK_LINE(906)
		Float tmp8 = current->y;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(906)
		Float tmp9 = ((Float)0.66666666666666663);		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(906)
		Float tmp10 = (cy - current->y);		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(906)
		Float tmp11 = (tmp9 * tmp10);		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(906)
		Float tmp12 = (tmp8 + tmp11);		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(906)
		Float cy1 = tmp12;		HX_STACK_VAR(cy1,"cy1");
		HX_STACK_LINE(907)
		Float tmp13 = x;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(907)
		Float tmp14 = ((Float)0.66666666666666663);		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(907)
		Float tmp15 = (cx - x);		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(907)
		Float tmp16 = (tmp14 * tmp15);		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(907)
		Float tmp17 = (tmp13 + tmp16);		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(907)
		Float cx2 = tmp17;		HX_STACK_VAR(cx2,"cx2");
		HX_STACK_LINE(908)
		Float tmp18 = y;		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(908)
		Float tmp19 = ((Float)0.66666666666666663);		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(908)
		Float tmp20 = (cy - y);		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(908)
		Float tmp21 = (tmp19 * tmp20);		HX_STACK_VAR(tmp21,"tmp21");
		HX_STACK_LINE(908)
		Float tmp22 = (tmp18 + tmp21);		HX_STACK_VAR(tmp22,"tmp22");
		HX_STACK_LINE(908)
		Float cy2 = tmp22;		HX_STACK_VAR(cy2,"cy2");
		HX_STACK_LINE(910)
		::lime::graphics::cairo::Cairo tmp23 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::cairo;		HX_STACK_VAR(tmp23,"tmp23");
		HX_STACK_LINE(910)
		Float tmp24 = cx1;		HX_STACK_VAR(tmp24,"tmp24");
		HX_STACK_LINE(910)
		Float tmp25 = cy1;		HX_STACK_VAR(tmp25,"tmp25");
		HX_STACK_LINE(910)
		Float tmp26 = cx2;		HX_STACK_VAR(tmp26,"tmp26");
		HX_STACK_LINE(910)
		Float tmp27 = cy2;		HX_STACK_VAR(tmp27,"tmp27");
		HX_STACK_LINE(910)
		Float tmp28 = x;		HX_STACK_VAR(tmp28,"tmp28");
		HX_STACK_LINE(910)
		Float tmp29 = y;		HX_STACK_VAR(tmp29,"tmp29");
		HX_STACK_LINE(910)
		tmp23->curveTo(tmp24,tmp25,tmp26,tmp27,tmp28,tmp29);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(CairoGraphics_obj,quadraticCurveTo,(void))

Void CairoGraphics_obj::render( ::openfl::display::Graphics graphics,::openfl::_internal::renderer::RenderSession renderSession){
{
		HX_STACK_FRAME("openfl._internal.renderer.cairo.CairoGraphics","render",0x3c3e61d2,"openfl._internal.renderer.cairo.CairoGraphics.render","openfl/_internal/renderer/cairo/CairoGraphics.hx",915,0x744ae94c)
		HX_STACK_ARG(graphics,"graphics")
		HX_STACK_ARG(renderSession,"renderSession")
		HX_STACK_LINE(918)
		::openfl::_internal::renderer::cairo::CairoGraphics_obj::graphics = graphics;
		HX_STACK_LINE(920)
		bool tmp = graphics->__dirty;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(920)
		bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(920)
		if ((tmp1)){
			HX_STACK_LINE(920)
			return null();
		}
		HX_STACK_LINE(922)
		::openfl::_internal::renderer::cairo::CairoGraphics_obj::bounds = graphics->__bounds;
		HX_STACK_LINE(924)
		bool tmp2 = graphics->__visible;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(924)
		bool tmp3 = tmp2;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(924)
		bool tmp4 = !(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(924)
		bool tmp5 = !(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(924)
		bool tmp6 = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(924)
		bool tmp7;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(924)
		if ((tmp6)){
			HX_STACK_LINE(924)
			int tmp8 = graphics->__commands->length;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(924)
			int tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(924)
			int tmp10 = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(924)
			tmp7 = (tmp10 == (int)0);
		}
		else{
			HX_STACK_LINE(924)
			tmp7 = true;
		}
		HX_STACK_LINE(924)
		bool tmp8 = !(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(924)
		bool tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(924)
		bool tmp10;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(924)
		if ((tmp9)){
			HX_STACK_LINE(924)
			::openfl::geom::Rectangle tmp11 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::bounds;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(924)
			::openfl::geom::Rectangle tmp12 = tmp11;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(924)
			::openfl::geom::Rectangle tmp13 = tmp12;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(924)
			tmp10 = (tmp13 == null());
		}
		else{
			HX_STACK_LINE(924)
			tmp10 = true;
		}
		HX_STACK_LINE(924)
		bool tmp11 = !(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(924)
		bool tmp12 = tmp11;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(924)
		bool tmp13;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(924)
		if ((tmp12)){
			HX_STACK_LINE(924)
			::openfl::geom::Rectangle tmp14 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::bounds;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(924)
			::openfl::geom::Rectangle tmp15 = tmp14;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(924)
			::openfl::geom::Rectangle tmp16 = tmp15;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(924)
			Float tmp17 = tmp16->width;		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(924)
			tmp13 = (tmp17 == (int)0);
		}
		else{
			HX_STACK_LINE(924)
			tmp13 = true;
		}
		HX_STACK_LINE(924)
		bool tmp14 = !(tmp13);		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(924)
		bool tmp15;		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(924)
		if ((tmp14)){
			HX_STACK_LINE(924)
			::openfl::geom::Rectangle tmp16 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::bounds;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(924)
			::openfl::geom::Rectangle tmp17 = tmp16;		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(924)
			Float tmp18 = tmp17->height;		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(924)
			tmp15 = (tmp18 == (int)0);
		}
		else{
			HX_STACK_LINE(924)
			tmp15 = true;
		}
		HX_STACK_LINE(924)
		if ((tmp15)){
			HX_STACK_LINE(926)
			bool tmp16 = (graphics->__cairo != null());		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(926)
			if ((tmp16)){
				HX_STACK_LINE(928)
				graphics->__cairo->destroy();
				HX_STACK_LINE(929)
				graphics->__cairo = null();
			}
		}
		else{
			HX_STACK_LINE(935)
			bool tmp16 = (graphics->__cairo != null());		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(935)
			if ((tmp16)){
				HX_STACK_LINE(937)
				Dynamic tmp17 = graphics->__cairo->get_target();		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(937)
				Dynamic surface = tmp17;		HX_STACK_VAR(surface,"surface");
				HX_STACK_LINE(939)
				::openfl::geom::Rectangle tmp18 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::bounds;		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(939)
				Float tmp19 = tmp18->width;		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(939)
				Dynamic tmp20 = surface;		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(939)
				int tmp21 = ::lime::graphics::cairo::_CairoImageSurface::CairoImageSurface_Impl__obj::get_width(tmp20);		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(939)
				bool tmp22 = (tmp19 != tmp21);		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(939)
				bool tmp23 = !(tmp22);		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(939)
				bool tmp24;		HX_STACK_VAR(tmp24,"tmp24");
				HX_STACK_LINE(939)
				if ((tmp23)){
					HX_STACK_LINE(939)
					::openfl::geom::Rectangle tmp25 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::bounds;		HX_STACK_VAR(tmp25,"tmp25");
					HX_STACK_LINE(939)
					::openfl::geom::Rectangle tmp26 = tmp25;		HX_STACK_VAR(tmp26,"tmp26");
					HX_STACK_LINE(939)
					Float tmp27 = tmp26->height;		HX_STACK_VAR(tmp27,"tmp27");
					HX_STACK_LINE(939)
					Dynamic tmp28 = surface;		HX_STACK_VAR(tmp28,"tmp28");
					HX_STACK_LINE(939)
					Dynamic tmp29 = tmp28;		HX_STACK_VAR(tmp29,"tmp29");
					HX_STACK_LINE(939)
					int tmp30 = ::lime::graphics::cairo::_CairoImageSurface::CairoImageSurface_Impl__obj::get_height(tmp29);		HX_STACK_VAR(tmp30,"tmp30");
					HX_STACK_LINE(939)
					int tmp31 = tmp30;		HX_STACK_VAR(tmp31,"tmp31");
					HX_STACK_LINE(939)
					tmp24 = (tmp27 != tmp31);
				}
				else{
					HX_STACK_LINE(939)
					tmp24 = true;
				}
				HX_STACK_LINE(939)
				if ((tmp24)){
					HX_STACK_LINE(941)
					graphics->__cairo->destroy();
					HX_STACK_LINE(942)
					graphics->__cairo = null();
				}
			}
			HX_STACK_LINE(948)
			bool tmp17 = (graphics->__cairo == null());		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(948)
			if ((tmp17)){
				HX_STACK_LINE(950)
				::openfl::geom::Rectangle tmp18 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::bounds;		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(950)
				Float tmp19 = tmp18->width;		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(950)
				int tmp20 = ::Math_obj::floor(tmp19);		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(950)
				::openfl::geom::Rectangle tmp21 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::bounds;		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(950)
				Float tmp22 = tmp21->height;		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(950)
				int tmp23 = ::Math_obj::floor(tmp22);		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(950)
				::openfl::display::BitmapData tmp24 = ::openfl::display::BitmapData_obj::__new(tmp20,tmp23,true,null());		HX_STACK_VAR(tmp24,"tmp24");
				HX_STACK_LINE(950)
				::openfl::display::BitmapData bitmap = tmp24;		HX_STACK_VAR(bitmap,"bitmap");
				HX_STACK_LINE(951)
				Dynamic tmp25 = bitmap->getSurface();		HX_STACK_VAR(tmp25,"tmp25");
				HX_STACK_LINE(951)
				Dynamic surface = tmp25;		HX_STACK_VAR(surface,"surface");
				HX_STACK_LINE(952)
				::lime::graphics::cairo::Cairo tmp26 = ::lime::graphics::cairo::Cairo_obj::__new(surface);		HX_STACK_VAR(tmp26,"tmp26");
				HX_STACK_LINE(952)
				graphics->__cairo = tmp26;
				HX_STACK_LINE(953)
				Dynamic tmp27 = surface;		HX_STACK_VAR(tmp27,"tmp27");
				HX_STACK_LINE(953)
				::lime::graphics::cairo::_CairoSurface::CairoSurface_Impl__obj::destroy(tmp27);
				HX_STACK_LINE(955)
				graphics->__bitmap = bitmap;
			}
			HX_STACK_LINE(959)
			::openfl::_internal::renderer::cairo::CairoGraphics_obj::cairo = graphics->__cairo;
			HX_STACK_LINE(961)
			::lime::graphics::cairo::Cairo tmp18 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::cairo;		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(961)
			tmp18->set_operator((int)1);
			HX_STACK_LINE(962)
			::lime::graphics::cairo::Cairo tmp19 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::cairo;		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(962)
			tmp19->setSourceRGBA((int)1,(int)1,(int)1,(int)0);
			HX_STACK_LINE(963)
			::lime::graphics::cairo::Cairo tmp20 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::cairo;		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(963)
			tmp20->paint();
			HX_STACK_LINE(964)
			::lime::graphics::cairo::Cairo tmp21 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::cairo;		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(964)
			tmp21->set_operator((int)2);
			HX_STACK_LINE(966)
			::openfl::_internal::renderer::cairo::CairoGraphics_obj::fillCommands = Array_obj< ::Dynamic >::__new();
			HX_STACK_LINE(967)
			::openfl::_internal::renderer::cairo::CairoGraphics_obj::strokeCommands = Array_obj< ::Dynamic >::__new();
			HX_STACK_LINE(969)
			::openfl::_internal::renderer::cairo::CairoGraphics_obj::hasFill = false;
			HX_STACK_LINE(970)
			::openfl::_internal::renderer::cairo::CairoGraphics_obj::hasStroke = false;
			HX_STACK_LINE(972)
			::openfl::_internal::renderer::cairo::CairoGraphics_obj::fillPattern = null();
			HX_STACK_LINE(973)
			::openfl::_internal::renderer::cairo::CairoGraphics_obj::strokePattern = null();
			HX_STACK_LINE(975)
			{
				HX_STACK_LINE(975)
				int _g = (int)0;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(975)
				Array< ::Dynamic > _g1 = graphics->__commands;		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(975)
				while((true)){
					HX_STACK_LINE(975)
					bool tmp22 = (_g < _g1->length);		HX_STACK_VAR(tmp22,"tmp22");
					HX_STACK_LINE(975)
					bool tmp23 = !(tmp22);		HX_STACK_VAR(tmp23,"tmp23");
					HX_STACK_LINE(975)
					if ((tmp23)){
						HX_STACK_LINE(975)
						break;
					}
					HX_STACK_LINE(975)
					::openfl::display::DrawCommand tmp24 = _g1->__get(_g).StaticCast< ::openfl::display::DrawCommand >();		HX_STACK_VAR(tmp24,"tmp24");
					HX_STACK_LINE(975)
					::openfl::display::DrawCommand command = tmp24;		HX_STACK_VAR(command,"command");
					HX_STACK_LINE(975)
					++(_g);
					HX_STACK_LINE(977)
					switch( (int)(command->__Index())){
						case (int)3: case (int)4: case (int)15: case (int)16: {
							HX_STACK_LINE(981)
							::openfl::display::DrawCommand tmp25 = command;		HX_STACK_VAR(tmp25,"tmp25");
							HX_STACK_LINE(981)
							::openfl::_internal::renderer::cairo::CairoGraphics_obj::fillCommands->push(tmp25);
							HX_STACK_LINE(982)
							::openfl::display::DrawCommand tmp26 = command;		HX_STACK_VAR(tmp26,"tmp26");
							HX_STACK_LINE(982)
							::openfl::_internal::renderer::cairo::CairoGraphics_obj::strokeCommands->push(tmp26);
						}
						;break;
						case (int)11: {
							HX_STACK_LINE(986)
							::openfl::_internal::renderer::cairo::CairoGraphics_obj::endFill();
							HX_STACK_LINE(987)
							::openfl::_internal::renderer::cairo::CairoGraphics_obj::endStroke();
							HX_STACK_LINE(988)
							::openfl::_internal::renderer::cairo::CairoGraphics_obj::hasFill = false;
							HX_STACK_LINE(989)
							::openfl::_internal::renderer::cairo::CairoGraphics_obj::bitmapFill = null();
						}
						;break;
						case (int)12: case (int)14: case (int)13: {
							HX_STACK_LINE(993)
							::openfl::display::DrawCommand tmp25 = command;		HX_STACK_VAR(tmp25,"tmp25");
							HX_STACK_LINE(993)
							::openfl::_internal::renderer::cairo::CairoGraphics_obj::strokeCommands->push(tmp25);
						}
						;break;
						case (int)0: case (int)1: case (int)2: {
							HX_STACK_LINE(997)
							::openfl::_internal::renderer::cairo::CairoGraphics_obj::endFill();
							HX_STACK_LINE(998)
							::openfl::_internal::renderer::cairo::CairoGraphics_obj::endStroke();
							HX_STACK_LINE(1000)
							::openfl::display::DrawCommand tmp25 = command;		HX_STACK_VAR(tmp25,"tmp25");
							HX_STACK_LINE(1000)
							::openfl::_internal::renderer::cairo::CairoGraphics_obj::fillCommands->push(tmp25);
							HX_STACK_LINE(1001)
							::openfl::display::DrawCommand tmp26 = command;		HX_STACK_VAR(tmp26,"tmp26");
							HX_STACK_LINE(1001)
							::openfl::_internal::renderer::cairo::CairoGraphics_obj::strokeCommands->push(tmp26);
						}
						;break;
						case (int)5: case (int)6: case (int)7: case (int)8: {
							HX_STACK_LINE(1005)
							::openfl::display::DrawCommand tmp25 = command;		HX_STACK_VAR(tmp25,"tmp25");
							HX_STACK_LINE(1005)
							::openfl::_internal::renderer::cairo::CairoGraphics_obj::fillCommands->push(tmp25);
							HX_STACK_LINE(1006)
							::openfl::display::DrawCommand tmp26 = command;		HX_STACK_VAR(tmp26,"tmp26");
							HX_STACK_LINE(1006)
							::openfl::_internal::renderer::cairo::CairoGraphics_obj::strokeCommands->push(tmp26);
						}
						;break;
						case (int)9: case (int)10: {
							HX_STACK_LINE(1010)
							::openfl::display::DrawCommand tmp25 = command;		HX_STACK_VAR(tmp25,"tmp25");
							HX_STACK_LINE(1010)
							::openfl::_internal::renderer::cairo::CairoGraphics_obj::fillCommands->push(tmp25);
						}
						;break;
						default: {
							HX_STACK_LINE(1014)
							::openfl::Lib_obj::notImplemented(HX_HCSTRING("CairoGraphics","\x53","\xfd","\x12","\x0a"));
						}
					}
				}
			}
			HX_STACK_LINE(1020)
			int tmp22 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::fillCommands->length;		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(1020)
			bool tmp23 = (tmp22 > (int)0);		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(1020)
			if ((tmp23)){
				HX_STACK_LINE(1022)
				::openfl::_internal::renderer::cairo::CairoGraphics_obj::endFill();
			}
			HX_STACK_LINE(1026)
			int tmp24 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::strokeCommands->length;		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(1026)
			bool tmp25 = (tmp24 > (int)0);		HX_STACK_VAR(tmp25,"tmp25");
			HX_STACK_LINE(1026)
			if ((tmp25)){
				HX_STACK_LINE(1028)
				::openfl::_internal::renderer::cairo::CairoGraphics_obj::endStroke();
			}
			HX_STACK_LINE(1032)
			::lime::graphics::Image tmp26 = graphics->__bitmap->__image;		HX_STACK_VAR(tmp26,"tmp26");
			HX_STACK_LINE(1032)
			tmp26->dirty = true;
		}
		HX_STACK_LINE(1036)
		graphics->set___dirty(false);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(CairoGraphics_obj,render,(void))

Void CairoGraphics_obj::renderMask( ::openfl::display::Graphics graphics,::openfl::_internal::renderer::RenderSession renderSession){
{
		HX_STACK_FRAME("openfl._internal.renderer.cairo.CairoGraphics","renderMask",0x2ed81fde,"openfl._internal.renderer.cairo.CairoGraphics.renderMask","openfl/_internal/renderer/cairo/CairoGraphics.hx",1043,0x744ae94c)
		HX_STACK_ARG(graphics,"graphics")
		HX_STACK_ARG(renderSession,"renderSession")
		HX_STACK_LINE(1045)
		int tmp = graphics->__commands->length;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(1045)
		bool tmp1 = (tmp != (int)0);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(1045)
		if ((tmp1)){
			HX_STACK_LINE(1047)
			::lime::graphics::cairo::Cairo cairo = renderSession->cairo;		HX_STACK_VAR(cairo,"cairo");
			HX_STACK_LINE(1049)
			Float positionX = ((Float)0.0);		HX_STACK_VAR(positionX,"positionX");
			HX_STACK_LINE(1050)
			Float positionY = ((Float)0.0);		HX_STACK_VAR(positionY,"positionY");
			HX_STACK_LINE(1052)
			int offsetX = (int)0;		HX_STACK_VAR(offsetX,"offsetX");
			HX_STACK_LINE(1053)
			int offsetY = (int)0;		HX_STACK_VAR(offsetY,"offsetY");
			HX_STACK_LINE(1055)
			{
				HX_STACK_LINE(1055)
				int _g = (int)0;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(1055)
				Array< ::Dynamic > _g1 = graphics->__commands;		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(1055)
				while((true)){
					HX_STACK_LINE(1055)
					bool tmp2 = (_g < _g1->length);		HX_STACK_VAR(tmp2,"tmp2");
					HX_STACK_LINE(1055)
					bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
					HX_STACK_LINE(1055)
					if ((tmp3)){
						HX_STACK_LINE(1055)
						break;
					}
					HX_STACK_LINE(1055)
					::openfl::display::DrawCommand tmp4 = _g1->__get(_g).StaticCast< ::openfl::display::DrawCommand >();		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(1055)
					::openfl::display::DrawCommand command = tmp4;		HX_STACK_VAR(command,"command");
					HX_STACK_LINE(1055)
					++(_g);
					HX_STACK_LINE(1057)
					switch( (int)(command->__Index())){
						case (int)3: {
							HX_STACK_LINE(1057)
							Float tmp5 = (::openfl::display::DrawCommand(command))->__Param(5);		HX_STACK_VAR(tmp5,"tmp5");
							HX_STACK_LINE(1057)
							Float y = tmp5;		HX_STACK_VAR(y,"y");
							HX_STACK_LINE(1057)
							Float tmp6 = (::openfl::display::DrawCommand(command))->__Param(4);		HX_STACK_VAR(tmp6,"tmp6");
							HX_STACK_LINE(1057)
							Float x = tmp6;		HX_STACK_VAR(x,"x");
							HX_STACK_LINE(1057)
							Float tmp7 = (::openfl::display::DrawCommand(command))->__Param(3);		HX_STACK_VAR(tmp7,"tmp7");
							HX_STACK_LINE(1057)
							Float cy2 = tmp7;		HX_STACK_VAR(cy2,"cy2");
							HX_STACK_LINE(1057)
							Float tmp8 = (::openfl::display::DrawCommand(command))->__Param(2);		HX_STACK_VAR(tmp8,"tmp8");
							HX_STACK_LINE(1057)
							Float cy1 = tmp8;		HX_STACK_VAR(cy1,"cy1");
							HX_STACK_LINE(1057)
							Float tmp9 = (::openfl::display::DrawCommand(command))->__Param(1);		HX_STACK_VAR(tmp9,"tmp9");
							HX_STACK_LINE(1057)
							Float cx2 = tmp9;		HX_STACK_VAR(cx2,"cx2");
							HX_STACK_LINE(1057)
							Float tmp10 = (::openfl::display::DrawCommand(command))->__Param(0);		HX_STACK_VAR(tmp10,"tmp10");
							HX_STACK_LINE(1057)
							Float cx1 = tmp10;		HX_STACK_VAR(cx1,"cx1");
							HX_STACK_LINE(1059)
							{
								HX_STACK_LINE(1061)
								Float tmp11 = (cx1 - offsetX);		HX_STACK_VAR(tmp11,"tmp11");
								HX_STACK_LINE(1061)
								Float tmp12 = (cy1 - offsetY);		HX_STACK_VAR(tmp12,"tmp12");
								HX_STACK_LINE(1061)
								Float tmp13 = (cx2 - offsetX);		HX_STACK_VAR(tmp13,"tmp13");
								HX_STACK_LINE(1061)
								Float tmp14 = (cy2 - offsetY);		HX_STACK_VAR(tmp14,"tmp14");
								HX_STACK_LINE(1061)
								Float tmp15 = (x - offsetX);		HX_STACK_VAR(tmp15,"tmp15");
								HX_STACK_LINE(1061)
								Float tmp16 = (y - offsetY);		HX_STACK_VAR(tmp16,"tmp16");
								HX_STACK_LINE(1061)
								cairo->curveTo(tmp11,tmp12,tmp13,tmp14,tmp15,tmp16);
								HX_STACK_LINE(1062)
								positionX = x;
								HX_STACK_LINE(1063)
								positionY = y;
							}
						}
						;break;
						case (int)4: {
							HX_STACK_LINE(1057)
							Float tmp5 = (::openfl::display::DrawCommand(command))->__Param(3);		HX_STACK_VAR(tmp5,"tmp5");
							HX_STACK_LINE(1057)
							Float y = tmp5;		HX_STACK_VAR(y,"y");
							HX_STACK_LINE(1057)
							Float tmp6 = (::openfl::display::DrawCommand(command))->__Param(2);		HX_STACK_VAR(tmp6,"tmp6");
							HX_STACK_LINE(1057)
							Float x = tmp6;		HX_STACK_VAR(x,"x");
							HX_STACK_LINE(1057)
							Float tmp7 = (::openfl::display::DrawCommand(command))->__Param(1);		HX_STACK_VAR(tmp7,"tmp7");
							HX_STACK_LINE(1057)
							Float cy = tmp7;		HX_STACK_VAR(cy,"cy");
							HX_STACK_LINE(1057)
							Float tmp8 = (::openfl::display::DrawCommand(command))->__Param(0);		HX_STACK_VAR(tmp8,"tmp8");
							HX_STACK_LINE(1057)
							Float cx = tmp8;		HX_STACK_VAR(cx,"cx");
							HX_STACK_LINE(1065)
							{
								HX_STACK_LINE(1067)
								Float tmp9 = (cx - offsetX);		HX_STACK_VAR(tmp9,"tmp9");
								HX_STACK_LINE(1067)
								Float tmp10 = (cy - offsetY);		HX_STACK_VAR(tmp10,"tmp10");
								HX_STACK_LINE(1067)
								Float tmp11 = (x - offsetX);		HX_STACK_VAR(tmp11,"tmp11");
								HX_STACK_LINE(1067)
								Float tmp12 = (y - offsetY);		HX_STACK_VAR(tmp12,"tmp12");
								HX_STACK_LINE(1067)
								::openfl::_internal::renderer::cairo::CairoGraphics_obj::quadraticCurveTo(tmp9,tmp10,tmp11,tmp12);
								HX_STACK_LINE(1068)
								positionX = x;
								HX_STACK_LINE(1069)
								positionY = y;
							}
						}
						;break;
						case (int)5: {
							HX_STACK_LINE(1057)
							Float tmp5 = (::openfl::display::DrawCommand(command))->__Param(2);		HX_STACK_VAR(tmp5,"tmp5");
							HX_STACK_LINE(1057)
							Float radius = tmp5;		HX_STACK_VAR(radius,"radius");
							HX_STACK_LINE(1057)
							Float tmp6 = (::openfl::display::DrawCommand(command))->__Param(1);		HX_STACK_VAR(tmp6,"tmp6");
							HX_STACK_LINE(1057)
							Float y = tmp6;		HX_STACK_VAR(y,"y");
							HX_STACK_LINE(1057)
							Float tmp7 = (::openfl::display::DrawCommand(command))->__Param(0);		HX_STACK_VAR(tmp7,"tmp7");
							HX_STACK_LINE(1057)
							Float x = tmp7;		HX_STACK_VAR(x,"x");
							HX_STACK_LINE(1071)
							{
								HX_STACK_LINE(1073)
								Float tmp8 = (x - offsetX);		HX_STACK_VAR(tmp8,"tmp8");
								HX_STACK_LINE(1073)
								Float tmp9 = (y - offsetY);		HX_STACK_VAR(tmp9,"tmp9");
								HX_STACK_LINE(1073)
								Float tmp10 = radius;		HX_STACK_VAR(tmp10,"tmp10");
								HX_STACK_LINE(1073)
								Float tmp11 = ::Math_obj::PI;		HX_STACK_VAR(tmp11,"tmp11");
								HX_STACK_LINE(1073)
								Float tmp12 = (tmp11 * (int)2);		HX_STACK_VAR(tmp12,"tmp12");
								HX_STACK_LINE(1073)
								cairo->arc(tmp8,tmp9,tmp10,(int)0,tmp12);
							}
						}
						;break;
						case (int)6: {
							HX_STACK_LINE(1057)
							Float tmp5 = (::openfl::display::DrawCommand(command))->__Param(3);		HX_STACK_VAR(tmp5,"tmp5");
							HX_STACK_LINE(1057)
							Float height = tmp5;		HX_STACK_VAR(height,"height");
							HX_STACK_LINE(1057)
							Float tmp6 = (::openfl::display::DrawCommand(command))->__Param(2);		HX_STACK_VAR(tmp6,"tmp6");
							HX_STACK_LINE(1057)
							Float width = tmp6;		HX_STACK_VAR(width,"width");
							HX_STACK_LINE(1057)
							Float tmp7 = (::openfl::display::DrawCommand(command))->__Param(1);		HX_STACK_VAR(tmp7,"tmp7");
							HX_STACK_LINE(1057)
							Float y = tmp7;		HX_STACK_VAR(y,"y");
							HX_STACK_LINE(1057)
							Float tmp8 = (::openfl::display::DrawCommand(command))->__Param(0);		HX_STACK_VAR(tmp8,"tmp8");
							HX_STACK_LINE(1057)
							Float x = tmp8;		HX_STACK_VAR(x,"x");
							HX_STACK_LINE(1075)
							{
								HX_STACK_LINE(1077)
								hx::SubEq(x,offsetX);
								HX_STACK_LINE(1078)
								hx::SubEq(y,offsetY);
								HX_STACK_LINE(1080)
								Float kappa = ((Float).5522848);		HX_STACK_VAR(kappa,"kappa");
								HX_STACK_LINE(1081)
								Float tmp9 = (Float(width) / Float((int)2));		HX_STACK_VAR(tmp9,"tmp9");
								HX_STACK_LINE(1081)
								Float tmp10 = kappa;		HX_STACK_VAR(tmp10,"tmp10");
								HX_STACK_LINE(1081)
								Float tmp11 = (tmp9 * tmp10);		HX_STACK_VAR(tmp11,"tmp11");
								HX_STACK_LINE(1081)
								Float ox = tmp11;		HX_STACK_VAR(ox,"ox");
								HX_STACK_LINE(1082)
								Float tmp12 = (Float(height) / Float((int)2));		HX_STACK_VAR(tmp12,"tmp12");
								HX_STACK_LINE(1082)
								Float tmp13 = kappa;		HX_STACK_VAR(tmp13,"tmp13");
								HX_STACK_LINE(1082)
								Float tmp14 = (tmp12 * tmp13);		HX_STACK_VAR(tmp14,"tmp14");
								HX_STACK_LINE(1082)
								Float oy = tmp14;		HX_STACK_VAR(oy,"oy");
								HX_STACK_LINE(1083)
								Float tmp15 = (x + width);		HX_STACK_VAR(tmp15,"tmp15");
								HX_STACK_LINE(1083)
								Float xe = tmp15;		HX_STACK_VAR(xe,"xe");
								HX_STACK_LINE(1084)
								Float tmp16 = (y + height);		HX_STACK_VAR(tmp16,"tmp16");
								HX_STACK_LINE(1084)
								Float ye = tmp16;		HX_STACK_VAR(ye,"ye");
								HX_STACK_LINE(1085)
								Float tmp17 = x;		HX_STACK_VAR(tmp17,"tmp17");
								HX_STACK_LINE(1085)
								Float tmp18 = (Float(width) / Float((int)2));		HX_STACK_VAR(tmp18,"tmp18");
								HX_STACK_LINE(1085)
								Float tmp19 = (tmp17 + tmp18);		HX_STACK_VAR(tmp19,"tmp19");
								HX_STACK_LINE(1085)
								Float xm = tmp19;		HX_STACK_VAR(xm,"xm");
								HX_STACK_LINE(1086)
								Float tmp20 = y;		HX_STACK_VAR(tmp20,"tmp20");
								HX_STACK_LINE(1086)
								Float tmp21 = (Float(height) / Float((int)2));		HX_STACK_VAR(tmp21,"tmp21");
								HX_STACK_LINE(1086)
								Float tmp22 = (tmp20 + tmp21);		HX_STACK_VAR(tmp22,"tmp22");
								HX_STACK_LINE(1086)
								Float ym = tmp22;		HX_STACK_VAR(ym,"ym");
								HX_STACK_LINE(1090)
								Float tmp23 = x;		HX_STACK_VAR(tmp23,"tmp23");
								HX_STACK_LINE(1090)
								Float tmp24 = ym;		HX_STACK_VAR(tmp24,"tmp24");
								HX_STACK_LINE(1090)
								cairo->moveTo(tmp23,tmp24);
								HX_STACK_LINE(1091)
								Float tmp25 = x;		HX_STACK_VAR(tmp25,"tmp25");
								HX_STACK_LINE(1091)
								Float tmp26 = (ym - oy);		HX_STACK_VAR(tmp26,"tmp26");
								HX_STACK_LINE(1091)
								Float tmp27 = (xm - ox);		HX_STACK_VAR(tmp27,"tmp27");
								HX_STACK_LINE(1091)
								Float tmp28 = y;		HX_STACK_VAR(tmp28,"tmp28");
								HX_STACK_LINE(1091)
								Float tmp29 = xm;		HX_STACK_VAR(tmp29,"tmp29");
								HX_STACK_LINE(1091)
								Float tmp30 = y;		HX_STACK_VAR(tmp30,"tmp30");
								HX_STACK_LINE(1091)
								cairo->curveTo(tmp25,tmp26,tmp27,tmp28,tmp29,tmp30);
								HX_STACK_LINE(1092)
								Float tmp31 = (xm + ox);		HX_STACK_VAR(tmp31,"tmp31");
								HX_STACK_LINE(1092)
								Float tmp32 = y;		HX_STACK_VAR(tmp32,"tmp32");
								HX_STACK_LINE(1092)
								Float tmp33 = xe;		HX_STACK_VAR(tmp33,"tmp33");
								HX_STACK_LINE(1092)
								Float tmp34 = (ym - oy);		HX_STACK_VAR(tmp34,"tmp34");
								HX_STACK_LINE(1092)
								Float tmp35 = xe;		HX_STACK_VAR(tmp35,"tmp35");
								HX_STACK_LINE(1092)
								Float tmp36 = ym;		HX_STACK_VAR(tmp36,"tmp36");
								HX_STACK_LINE(1092)
								cairo->curveTo(tmp31,tmp32,tmp33,tmp34,tmp35,tmp36);
								HX_STACK_LINE(1093)
								Float tmp37 = xe;		HX_STACK_VAR(tmp37,"tmp37");
								HX_STACK_LINE(1093)
								Float tmp38 = (ym + oy);		HX_STACK_VAR(tmp38,"tmp38");
								HX_STACK_LINE(1093)
								Float tmp39 = (xm + ox);		HX_STACK_VAR(tmp39,"tmp39");
								HX_STACK_LINE(1093)
								Float tmp40 = ye;		HX_STACK_VAR(tmp40,"tmp40");
								HX_STACK_LINE(1093)
								Float tmp41 = xm;		HX_STACK_VAR(tmp41,"tmp41");
								HX_STACK_LINE(1093)
								Float tmp42 = ye;		HX_STACK_VAR(tmp42,"tmp42");
								HX_STACK_LINE(1093)
								cairo->curveTo(tmp37,tmp38,tmp39,tmp40,tmp41,tmp42);
								HX_STACK_LINE(1094)
								Float tmp43 = (xm - ox);		HX_STACK_VAR(tmp43,"tmp43");
								HX_STACK_LINE(1094)
								Float tmp44 = ye;		HX_STACK_VAR(tmp44,"tmp44");
								HX_STACK_LINE(1094)
								Float tmp45 = x;		HX_STACK_VAR(tmp45,"tmp45");
								HX_STACK_LINE(1094)
								Float tmp46 = (ym + oy);		HX_STACK_VAR(tmp46,"tmp46");
								HX_STACK_LINE(1094)
								Float tmp47 = x;		HX_STACK_VAR(tmp47,"tmp47");
								HX_STACK_LINE(1094)
								Float tmp48 = ym;		HX_STACK_VAR(tmp48,"tmp48");
								HX_STACK_LINE(1094)
								cairo->curveTo(tmp43,tmp44,tmp45,tmp46,tmp47,tmp48);
							}
						}
						;break;
						case (int)7: {
							HX_STACK_LINE(1057)
							Float tmp5 = (::openfl::display::DrawCommand(command))->__Param(3);		HX_STACK_VAR(tmp5,"tmp5");
							HX_STACK_LINE(1057)
							Float height = tmp5;		HX_STACK_VAR(height,"height");
							HX_STACK_LINE(1057)
							Float tmp6 = (::openfl::display::DrawCommand(command))->__Param(2);		HX_STACK_VAR(tmp6,"tmp6");
							HX_STACK_LINE(1057)
							Float width = tmp6;		HX_STACK_VAR(width,"width");
							HX_STACK_LINE(1057)
							Float tmp7 = (::openfl::display::DrawCommand(command))->__Param(1);		HX_STACK_VAR(tmp7,"tmp7");
							HX_STACK_LINE(1057)
							Float y = tmp7;		HX_STACK_VAR(y,"y");
							HX_STACK_LINE(1057)
							Float tmp8 = (::openfl::display::DrawCommand(command))->__Param(0);		HX_STACK_VAR(tmp8,"tmp8");
							HX_STACK_LINE(1057)
							Float x = tmp8;		HX_STACK_VAR(x,"x");
							HX_STACK_LINE(1097)
							{
								HX_STACK_LINE(1099)
								Float tmp9 = (x - offsetX);		HX_STACK_VAR(tmp9,"tmp9");
								HX_STACK_LINE(1099)
								Float tmp10 = (y - offsetY);		HX_STACK_VAR(tmp10,"tmp10");
								HX_STACK_LINE(1099)
								Float tmp11 = width;		HX_STACK_VAR(tmp11,"tmp11");
								HX_STACK_LINE(1099)
								Float tmp12 = height;		HX_STACK_VAR(tmp12,"tmp12");
								HX_STACK_LINE(1099)
								cairo->rectangle(tmp9,tmp10,tmp11,tmp12);
							}
						}
						;break;
						case (int)8: {
							HX_STACK_LINE(1057)
							Float tmp5 = (::openfl::display::DrawCommand(command))->__Param(5);		HX_STACK_VAR(tmp5,"tmp5");
							HX_STACK_LINE(1057)
							Float ry = tmp5;		HX_STACK_VAR(ry,"ry");
							HX_STACK_LINE(1057)
							Float tmp6 = (::openfl::display::DrawCommand(command))->__Param(4);		HX_STACK_VAR(tmp6,"tmp6");
							HX_STACK_LINE(1057)
							Float rx = tmp6;		HX_STACK_VAR(rx,"rx");
							HX_STACK_LINE(1057)
							Float tmp7 = (::openfl::display::DrawCommand(command))->__Param(3);		HX_STACK_VAR(tmp7,"tmp7");
							HX_STACK_LINE(1057)
							Float height = tmp7;		HX_STACK_VAR(height,"height");
							HX_STACK_LINE(1057)
							Float tmp8 = (::openfl::display::DrawCommand(command))->__Param(2);		HX_STACK_VAR(tmp8,"tmp8");
							HX_STACK_LINE(1057)
							Float width = tmp8;		HX_STACK_VAR(width,"width");
							HX_STACK_LINE(1057)
							Float tmp9 = (::openfl::display::DrawCommand(command))->__Param(1);		HX_STACK_VAR(tmp9,"tmp9");
							HX_STACK_LINE(1057)
							Float y = tmp9;		HX_STACK_VAR(y,"y");
							HX_STACK_LINE(1057)
							Float tmp10 = (::openfl::display::DrawCommand(command))->__Param(0);		HX_STACK_VAR(tmp10,"tmp10");
							HX_STACK_LINE(1057)
							Float x = tmp10;		HX_STACK_VAR(x,"x");
							HX_STACK_LINE(1101)
							{
								HX_STACK_LINE(1103)
								Float tmp11 = (x - offsetX);		HX_STACK_VAR(tmp11,"tmp11");
								HX_STACK_LINE(1103)
								Float tmp12 = (y - offsetY);		HX_STACK_VAR(tmp12,"tmp12");
								HX_STACK_LINE(1103)
								Float tmp13 = width;		HX_STACK_VAR(tmp13,"tmp13");
								HX_STACK_LINE(1103)
								Float tmp14 = height;		HX_STACK_VAR(tmp14,"tmp14");
								HX_STACK_LINE(1103)
								Float tmp15 = rx;		HX_STACK_VAR(tmp15,"tmp15");
								HX_STACK_LINE(1103)
								Float tmp16 = ry;		HX_STACK_VAR(tmp16,"tmp16");
								HX_STACK_LINE(1103)
								::openfl::_internal::renderer::cairo::CairoGraphics_obj::drawRoundRect(tmp11,tmp12,tmp13,tmp14,tmp15,tmp16);
							}
						}
						;break;
						case (int)15: {
							HX_STACK_LINE(1057)
							Float tmp5 = (::openfl::display::DrawCommand(command))->__Param(1);		HX_STACK_VAR(tmp5,"tmp5");
							HX_STACK_LINE(1057)
							Float y = tmp5;		HX_STACK_VAR(y,"y");
							HX_STACK_LINE(1057)
							Float tmp6 = (::openfl::display::DrawCommand(command))->__Param(0);		HX_STACK_VAR(tmp6,"tmp6");
							HX_STACK_LINE(1057)
							Float x = tmp6;		HX_STACK_VAR(x,"x");
							HX_STACK_LINE(1105)
							{
								HX_STACK_LINE(1107)
								Float tmp7 = (x - offsetX);		HX_STACK_VAR(tmp7,"tmp7");
								HX_STACK_LINE(1107)
								Float tmp8 = (y - offsetY);		HX_STACK_VAR(tmp8,"tmp8");
								HX_STACK_LINE(1107)
								cairo->lineTo(tmp7,tmp8);
								HX_STACK_LINE(1108)
								positionX = x;
								HX_STACK_LINE(1109)
								positionY = y;
							}
						}
						;break;
						case (int)16: {
							HX_STACK_LINE(1057)
							Float tmp5 = (::openfl::display::DrawCommand(command))->__Param(1);		HX_STACK_VAR(tmp5,"tmp5");
							HX_STACK_LINE(1057)
							Float y = tmp5;		HX_STACK_VAR(y,"y");
							HX_STACK_LINE(1057)
							Float tmp6 = (::openfl::display::DrawCommand(command))->__Param(0);		HX_STACK_VAR(tmp6,"tmp6");
							HX_STACK_LINE(1057)
							Float x = tmp6;		HX_STACK_VAR(x,"x");
							HX_STACK_LINE(1111)
							{
								HX_STACK_LINE(1113)
								Float tmp7 = (x - offsetX);		HX_STACK_VAR(tmp7,"tmp7");
								HX_STACK_LINE(1113)
								Float tmp8 = (y - offsetY);		HX_STACK_VAR(tmp8,"tmp8");
								HX_STACK_LINE(1113)
								cairo->moveTo(tmp7,tmp8);
								HX_STACK_LINE(1114)
								positionX = x;
								HX_STACK_LINE(1115)
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


STATIC_HX_DEFINE_DYNAMIC_FUNC2(CairoGraphics_obj,renderMask,(void))


CairoGraphics_obj::CairoGraphics_obj()
{
}

bool CairoGraphics_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"SIN45") ) { outValue = SIN45; return true;  }
		if (HX_FIELD_EQ(inName,"TAN22") ) { outValue = TAN22; return true;  }
		if (HX_FIELD_EQ(inName,"cairo") ) { outValue = cairo; return true;  }
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
	case 11:
		if (HX_FIELD_EQ(inName,"fillPattern") ) { outValue = fillPattern; return true;  }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"bitmapRepeat") ) { outValue = bitmapRepeat; return true;  }
		if (HX_FIELD_EQ(inName,"fillCommands") ) { outValue = fillCommands; return true;  }
		if (HX_FIELD_EQ(inName,"normalizeUVT") ) { outValue = normalizeUVT_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"playCommands") ) { outValue = playCommands_dyn(); return true;  }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"pendingMatrix") ) { outValue = pendingMatrix; return true;  }
		if (HX_FIELD_EQ(inName,"strokePattern") ) { outValue = strokePattern; return true;  }
		if (HX_FIELD_EQ(inName,"drawRoundRect") ) { outValue = drawRoundRect_dyn(); return true;  }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"strokeCommands") ) { outValue = strokeCommands; return true;  }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"quadraticCurveTo") ) { outValue = quadraticCurveTo_dyn(); return true;  }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"fillPatternMatrix") ) { outValue = fillPatternMatrix; return true;  }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"createImagePattern") ) { outValue = createImagePattern_dyn(); return true;  }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"inversePendingMatrix") ) { outValue = inversePendingMatrix; return true;  }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"createGradientPattern") ) { outValue = createGradientPattern_dyn(); return true;  }
	}
	return false;
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
static hx::StaticInfo sStaticStorageInfo[] = {
	{hx::fsFloat,(void *) &CairoGraphics_obj::SIN45,HX_HCSTRING("SIN45","\x79","\x16","\xbe","\xfa")},
	{hx::fsFloat,(void *) &CairoGraphics_obj::TAN22,HX_HCSTRING("TAN22","\x41","\xf4","\xda","\x88")},
	{hx::fsObject /*::openfl::display::BitmapData*/ ,(void *) &CairoGraphics_obj::bitmapFill,HX_HCSTRING("bitmapFill","\x12","\x2e","\x19","\x35")},
	{hx::fsBool,(void *) &CairoGraphics_obj::bitmapRepeat,HX_HCSTRING("bitmapRepeat","\xaa","\x38","\x9c","\x11")},
	{hx::fsObject /*::openfl::geom::Rectangle*/ ,(void *) &CairoGraphics_obj::bounds,HX_HCSTRING("bounds","\x75","\x86","\x1d","\x66")},
	{hx::fsObject /*::lime::graphics::cairo::Cairo*/ ,(void *) &CairoGraphics_obj::cairo,HX_HCSTRING("cairo","\x88","\x30","\x19","\x41")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(void *) &CairoGraphics_obj::fillCommands,HX_HCSTRING("fillCommands","\x6b","\xf6","\xc9","\xc2")},
	{hx::fsObject /*Dynamic*/ ,(void *) &CairoGraphics_obj::fillPattern,HX_HCSTRING("fillPattern","\x0d","\x86","\x12","\x35")},
	{hx::fsObject /*::openfl::geom::Matrix*/ ,(void *) &CairoGraphics_obj::fillPatternMatrix,HX_HCSTRING("fillPatternMatrix","\x2e","\xb8","\xae","\x97")},
	{hx::fsObject /*::openfl::display::Graphics*/ ,(void *) &CairoGraphics_obj::graphics,HX_HCSTRING("graphics","\xcb","\xf8","\x67","\x12")},
	{hx::fsBool,(void *) &CairoGraphics_obj::hasFill,HX_HCSTRING("hasFill","\xfd","\xee","\xff","\x12")},
	{hx::fsBool,(void *) &CairoGraphics_obj::hasStroke,HX_HCSTRING("hasStroke","\xb2","\x66","\x1d","\x52")},
	{hx::fsObject /*::openfl::geom::Matrix*/ ,(void *) &CairoGraphics_obj::inversePendingMatrix,HX_HCSTRING("inversePendingMatrix","\x28","\x14","\x8c","\xbb")},
	{hx::fsObject /*::openfl::geom::Matrix*/ ,(void *) &CairoGraphics_obj::pendingMatrix,HX_HCSTRING("pendingMatrix","\xf8","\x9d","\x96","\xb5")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(void *) &CairoGraphics_obj::strokeCommands,HX_HCSTRING("strokeCommands","\xa0","\x98","\x2a","\x67")},
	{hx::fsObject /*Dynamic*/ ,(void *) &CairoGraphics_obj::strokePattern,HX_HCSTRING("strokePattern","\x78","\xe1","\x21","\x7e")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(CairoGraphics_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(CairoGraphics_obj::SIN45,"SIN45");
	HX_MARK_MEMBER_NAME(CairoGraphics_obj::TAN22,"TAN22");
	HX_MARK_MEMBER_NAME(CairoGraphics_obj::bitmapFill,"bitmapFill");
	HX_MARK_MEMBER_NAME(CairoGraphics_obj::bitmapRepeat,"bitmapRepeat");
	HX_MARK_MEMBER_NAME(CairoGraphics_obj::bounds,"bounds");
	HX_MARK_MEMBER_NAME(CairoGraphics_obj::cairo,"cairo");
	HX_MARK_MEMBER_NAME(CairoGraphics_obj::fillCommands,"fillCommands");
	HX_MARK_MEMBER_NAME(CairoGraphics_obj::fillPattern,"fillPattern");
	HX_MARK_MEMBER_NAME(CairoGraphics_obj::fillPatternMatrix,"fillPatternMatrix");
	HX_MARK_MEMBER_NAME(CairoGraphics_obj::graphics,"graphics");
	HX_MARK_MEMBER_NAME(CairoGraphics_obj::hasFill,"hasFill");
	HX_MARK_MEMBER_NAME(CairoGraphics_obj::hasStroke,"hasStroke");
	HX_MARK_MEMBER_NAME(CairoGraphics_obj::inversePendingMatrix,"inversePendingMatrix");
	HX_MARK_MEMBER_NAME(CairoGraphics_obj::pendingMatrix,"pendingMatrix");
	HX_MARK_MEMBER_NAME(CairoGraphics_obj::strokeCommands,"strokeCommands");
	HX_MARK_MEMBER_NAME(CairoGraphics_obj::strokePattern,"strokePattern");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(CairoGraphics_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(CairoGraphics_obj::SIN45,"SIN45");
	HX_VISIT_MEMBER_NAME(CairoGraphics_obj::TAN22,"TAN22");
	HX_VISIT_MEMBER_NAME(CairoGraphics_obj::bitmapFill,"bitmapFill");
	HX_VISIT_MEMBER_NAME(CairoGraphics_obj::bitmapRepeat,"bitmapRepeat");
	HX_VISIT_MEMBER_NAME(CairoGraphics_obj::bounds,"bounds");
	HX_VISIT_MEMBER_NAME(CairoGraphics_obj::cairo,"cairo");
	HX_VISIT_MEMBER_NAME(CairoGraphics_obj::fillCommands,"fillCommands");
	HX_VISIT_MEMBER_NAME(CairoGraphics_obj::fillPattern,"fillPattern");
	HX_VISIT_MEMBER_NAME(CairoGraphics_obj::fillPatternMatrix,"fillPatternMatrix");
	HX_VISIT_MEMBER_NAME(CairoGraphics_obj::graphics,"graphics");
	HX_VISIT_MEMBER_NAME(CairoGraphics_obj::hasFill,"hasFill");
	HX_VISIT_MEMBER_NAME(CairoGraphics_obj::hasStroke,"hasStroke");
	HX_VISIT_MEMBER_NAME(CairoGraphics_obj::inversePendingMatrix,"inversePendingMatrix");
	HX_VISIT_MEMBER_NAME(CairoGraphics_obj::pendingMatrix,"pendingMatrix");
	HX_VISIT_MEMBER_NAME(CairoGraphics_obj::strokeCommands,"strokeCommands");
	HX_VISIT_MEMBER_NAME(CairoGraphics_obj::strokePattern,"strokePattern");
};

#endif

hx::Class CairoGraphics_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("SIN45","\x79","\x16","\xbe","\xfa"),
	HX_HCSTRING("TAN22","\x41","\xf4","\xda","\x88"),
	HX_HCSTRING("bitmapFill","\x12","\x2e","\x19","\x35"),
	HX_HCSTRING("bitmapRepeat","\xaa","\x38","\x9c","\x11"),
	HX_HCSTRING("bounds","\x75","\x86","\x1d","\x66"),
	HX_HCSTRING("cairo","\x88","\x30","\x19","\x41"),
	HX_HCSTRING("fillCommands","\x6b","\xf6","\xc9","\xc2"),
	HX_HCSTRING("fillPattern","\x0d","\x86","\x12","\x35"),
	HX_HCSTRING("fillPatternMatrix","\x2e","\xb8","\xae","\x97"),
	HX_HCSTRING("graphics","\xcb","\xf8","\x67","\x12"),
	HX_HCSTRING("hasFill","\xfd","\xee","\xff","\x12"),
	HX_HCSTRING("hasStroke","\xb2","\x66","\x1d","\x52"),
	HX_HCSTRING("inversePendingMatrix","\x28","\x14","\x8c","\xbb"),
	HX_HCSTRING("pendingMatrix","\xf8","\x9d","\x96","\xb5"),
	HX_HCSTRING("strokeCommands","\xa0","\x98","\x2a","\x67"),
	HX_HCSTRING("strokePattern","\x78","\xe1","\x21","\x7e"),
	HX_HCSTRING("drawRoundRect","\xee","\xc3","\xaa","\xe2"),
	HX_HCSTRING("endFill","\xfe","\x87","\xe0","\x25"),
	HX_HCSTRING("endStroke","\xf3","\x01","\x17","\x51"),
	HX_HCSTRING("closePath","\x7d","\x65","\x20","\x14"),
	HX_HCSTRING("createGradientPattern","\xa4","\xee","\x44","\xf6"),
	HX_HCSTRING("createImagePattern","\x51","\xbd","\x5d","\xfb"),
	HX_HCSTRING("isCCW","\x0d","\x84","\x49","\xc1"),
	HX_HCSTRING("normalizeUVT","\x66","\x09","\x2f","\x47"),
	HX_HCSTRING("playCommands","\xdc","\xae","\xee","\x49"),
	HX_HCSTRING("quadraticCurveTo","\x12","\x48","\xc3","\x82"),
	HX_HCSTRING("render","\x56","\x6b","\x29","\x05"),
	HX_HCSTRING("renderMask","\x62","\x3b","\x60","\xe5"),
	::String(null()) };

void CairoGraphics_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("openfl._internal.renderer.cairo.CairoGraphics","\x72","\x72","\xef","\x3c");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &CairoGraphics_obj::__GetStatic;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< CairoGraphics_obj >;
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

void CairoGraphics_obj::__boot()
{
	SIN45= ((Float)0.70710678118654752440084436210485);
	TAN22= ((Float)0.4142135623730950488016887242097);
}

} // end namespace openfl
} // end namespace _internal
} // end namespace renderer
} // end namespace cairo
