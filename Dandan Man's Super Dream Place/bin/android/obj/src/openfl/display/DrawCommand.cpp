#include <hxcpp.h>

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
#ifndef INCLUDED_openfl_display_GraphicsPathWinding
#include <openfl/display/GraphicsPathWinding.h>
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
namespace openfl{
namespace display{

::openfl::display::DrawCommand  DrawCommand_obj::BeginBitmapFill(::openfl::display::BitmapData bitmap,::openfl::geom::Matrix matrix,bool repeat,bool smooth)
	{ return hx::CreateEnum< DrawCommand_obj >(HX_HCSTRING("BeginBitmapFill","\x7b","\xd1","\x93","\xca"),0,hx::DynamicArray(0,4).Add(bitmap).Add(matrix).Add(repeat).Add(smooth)); }

::openfl::display::DrawCommand  DrawCommand_obj::BeginFill(int color,Float alpha)
	{ return hx::CreateEnum< DrawCommand_obj >(HX_HCSTRING("BeginFill","\x2c","\x8d","\x68","\x2e"),1,hx::DynamicArray(0,2).Add(color).Add(alpha)); }

::openfl::display::DrawCommand  DrawCommand_obj::BeginGradientFill(::openfl::display::GradientType type,cpp::ArrayBase colors,cpp::ArrayBase alphas,cpp::ArrayBase ratios,::openfl::geom::Matrix matrix,::openfl::display::SpreadMethod spreadMethod,::openfl::display::InterpolationMethod interpolationMethod,Dynamic focalPointRatio)
	{ return hx::CreateEnum< DrawCommand_obj >(HX_HCSTRING("BeginGradientFill","\x3c","\xfc","\x88","\xcf"),2,hx::DynamicArray(0,8).Add(type).Add(colors).Add(alphas).Add(ratios).Add(matrix).Add(spreadMethod).Add(interpolationMethod).Add(focalPointRatio)); }

::openfl::display::DrawCommand  DrawCommand_obj::CubicCurveTo(Float controlX1,Float controlY1,Float controlX2,Float controlY2,Float anchorX,Float anchorY)
	{ return hx::CreateEnum< DrawCommand_obj >(HX_HCSTRING("CubicCurveTo","\x00","\x54","\xa2","\xf6"),3,hx::DynamicArray(0,6).Add(controlX1).Add(controlY1).Add(controlX2).Add(controlY2).Add(anchorX).Add(anchorY)); }

::openfl::display::DrawCommand  DrawCommand_obj::CurveTo(Float controlX,Float controlY,Float anchorX,Float anchorY)
	{ return hx::CreateEnum< DrawCommand_obj >(HX_HCSTRING("CurveTo","\xea","\x87","\xd9","\x9b"),4,hx::DynamicArray(0,4).Add(controlX).Add(controlY).Add(anchorX).Add(anchorY)); }

::openfl::display::DrawCommand  DrawCommand_obj::DrawCircle(Float x,Float y,Float radius)
	{ return hx::CreateEnum< DrawCommand_obj >(HX_HCSTRING("DrawCircle","\x54","\xf1","\x81","\x8e"),5,hx::DynamicArray(0,3).Add(x).Add(y).Add(radius)); }

::openfl::display::DrawCommand  DrawCommand_obj::DrawEllipse(Float x,Float y,Float width,Float height)
	{ return hx::CreateEnum< DrawCommand_obj >(HX_HCSTRING("DrawEllipse","\x1a","\x1d","\x01","\x39"),6,hx::DynamicArray(0,4).Add(x).Add(y).Add(width).Add(height)); }

::openfl::display::DrawCommand  DrawCommand_obj::DrawPathC(Array< int > commands,Array< Float > data,::openfl::display::GraphicsPathWinding winding)
	{ return hx::CreateEnum< DrawCommand_obj >(HX_HCSTRING("DrawPathC","\x3a","\x20","\x35","\x27"),17,hx::DynamicArray(0,3).Add(commands).Add(data).Add(winding)); }

::openfl::display::DrawCommand  DrawCommand_obj::DrawRect(Float x,Float y,Float width,Float height)
	{ return hx::CreateEnum< DrawCommand_obj >(HX_HCSTRING("DrawRect","\x68","\xb3","\xc2","\x39"),7,hx::DynamicArray(0,4).Add(x).Add(y).Add(width).Add(height)); }

::openfl::display::DrawCommand  DrawCommand_obj::DrawRoundRect(Float x,Float y,Float width,Float height,Float rx,Float ry)
	{ return hx::CreateEnum< DrawCommand_obj >(HX_HCSTRING("DrawRoundRect","\xce","\x13","\x9b","\x2a"),8,hx::DynamicArray(0,6).Add(x).Add(y).Add(width).Add(height).Add(rx).Add(ry)); }

::openfl::display::DrawCommand  DrawCommand_obj::DrawTiles(::openfl::display::Tilesheet sheet,Array< Float > tileData,bool smooth,int flags,int count)
	{ return hx::CreateEnum< DrawCommand_obj >(HX_HCSTRING("DrawTiles","\xc1","\x12","\x13","\x7a"),9,hx::DynamicArray(0,5).Add(sheet).Add(tileData).Add(smooth).Add(flags).Add(count)); }

::openfl::display::DrawCommand  DrawCommand_obj::DrawTriangles(Array< Float > vertices,Array< int > indices,Array< Float > uvtData,::openfl::display::TriangleCulling culling,Array< int > colors,int blendMode)
	{ return hx::CreateEnum< DrawCommand_obj >(HX_HCSTRING("DrawTriangles","\xe7","\x93","\x58","\x26"),10,hx::DynamicArray(0,6).Add(vertices).Add(indices).Add(uvtData).Add(culling).Add(colors).Add(blendMode)); }

::openfl::display::DrawCommand DrawCommand_obj::EndFill;

::openfl::display::DrawCommand  DrawCommand_obj::LineBitmapStyle(::openfl::display::BitmapData bitmap,::openfl::geom::Matrix matrix,bool repeat,bool smooth)
	{ return hx::CreateEnum< DrawCommand_obj >(HX_HCSTRING("LineBitmapStyle","\x0e","\x47","\xad","\xa5"),13,hx::DynamicArray(0,4).Add(bitmap).Add(matrix).Add(repeat).Add(smooth)); }

::openfl::display::DrawCommand  DrawCommand_obj::LineGradientStyle(::openfl::display::GradientType type,cpp::ArrayBase colors,cpp::ArrayBase alphas,cpp::ArrayBase ratios,::openfl::geom::Matrix matrix,::openfl::display::SpreadMethod spreadMethod,::openfl::display::InterpolationMethod interpolationMethod,Dynamic focalPointRatio)
	{ return hx::CreateEnum< DrawCommand_obj >(HX_HCSTRING("LineGradientStyle","\x6d","\xe4","\x77","\x63"),14,hx::DynamicArray(0,8).Add(type).Add(colors).Add(alphas).Add(ratios).Add(matrix).Add(spreadMethod).Add(interpolationMethod).Add(focalPointRatio)); }

::openfl::display::DrawCommand  DrawCommand_obj::LineStyle(Dynamic thickness,Dynamic color,Dynamic alpha,Dynamic pixelHinting,::openfl::display::LineScaleMode scaleMode,::openfl::display::CapsStyle caps,::openfl::display::JointStyle joints,Dynamic miterLimit)
	{ return hx::CreateEnum< DrawCommand_obj >(HX_HCSTRING("LineStyle","\x7d","\x88","\xeb","\x6c"),12,hx::DynamicArray(0,8).Add(thickness).Add(color).Add(alpha).Add(pixelHinting).Add(scaleMode).Add(caps).Add(joints).Add(miterLimit)); }

::openfl::display::DrawCommand  DrawCommand_obj::LineTo(Float x,Float y)
	{ return hx::CreateEnum< DrawCommand_obj >(HX_HCSTRING("LineTo","\xaf","\xba","\x34","\x21"),15,hx::DynamicArray(0,2).Add(x).Add(y)); }

::openfl::display::DrawCommand  DrawCommand_obj::MoveTo(Float x,Float y)
	{ return hx::CreateEnum< DrawCommand_obj >(HX_HCSTRING("MoveTo","\x0c","\x47","\x41","\x01"),16,hx::DynamicArray(0,2).Add(x).Add(y)); }

::openfl::display::DrawCommand  DrawCommand_obj::OverrideMatrix(::openfl::geom::Matrix matrix)
	{ return hx::CreateEnum< DrawCommand_obj >(HX_HCSTRING("OverrideMatrix","\xcd","\x21","\xff","\x63"),18,hx::DynamicArray(0,1).Add(matrix)); }

HX_DEFINE_CREATE_ENUM(DrawCommand_obj)

int DrawCommand_obj::__FindIndex(::String inName)
{
	if (inName==HX_HCSTRING("BeginBitmapFill","\x7b","\xd1","\x93","\xca")) return 0;
	if (inName==HX_HCSTRING("BeginFill","\x2c","\x8d","\x68","\x2e")) return 1;
	if (inName==HX_HCSTRING("BeginGradientFill","\x3c","\xfc","\x88","\xcf")) return 2;
	if (inName==HX_HCSTRING("CubicCurveTo","\x00","\x54","\xa2","\xf6")) return 3;
	if (inName==HX_HCSTRING("CurveTo","\xea","\x87","\xd9","\x9b")) return 4;
	if (inName==HX_HCSTRING("DrawCircle","\x54","\xf1","\x81","\x8e")) return 5;
	if (inName==HX_HCSTRING("DrawEllipse","\x1a","\x1d","\x01","\x39")) return 6;
	if (inName==HX_HCSTRING("DrawPathC","\x3a","\x20","\x35","\x27")) return 17;
	if (inName==HX_HCSTRING("DrawRect","\x68","\xb3","\xc2","\x39")) return 7;
	if (inName==HX_HCSTRING("DrawRoundRect","\xce","\x13","\x9b","\x2a")) return 8;
	if (inName==HX_HCSTRING("DrawTiles","\xc1","\x12","\x13","\x7a")) return 9;
	if (inName==HX_HCSTRING("DrawTriangles","\xe7","\x93","\x58","\x26")) return 10;
	if (inName==HX_HCSTRING("EndFill","\xde","\xaf","\x31","\xf3")) return 11;
	if (inName==HX_HCSTRING("LineBitmapStyle","\x0e","\x47","\xad","\xa5")) return 13;
	if (inName==HX_HCSTRING("LineGradientStyle","\x6d","\xe4","\x77","\x63")) return 14;
	if (inName==HX_HCSTRING("LineStyle","\x7d","\x88","\xeb","\x6c")) return 12;
	if (inName==HX_HCSTRING("LineTo","\xaf","\xba","\x34","\x21")) return 15;
	if (inName==HX_HCSTRING("MoveTo","\x0c","\x47","\x41","\x01")) return 16;
	if (inName==HX_HCSTRING("OverrideMatrix","\xcd","\x21","\xff","\x63")) return 18;
	return super::__FindIndex(inName);
}

STATIC_HX_DEFINE_DYNAMIC_FUNC4(DrawCommand_obj,BeginBitmapFill,return)

STATIC_HX_DEFINE_DYNAMIC_FUNC2(DrawCommand_obj,BeginFill,return)

STATIC_HX_DEFINE_DYNAMIC_FUNC8(DrawCommand_obj,BeginGradientFill,return)

STATIC_HX_DEFINE_DYNAMIC_FUNC6(DrawCommand_obj,CubicCurveTo,return)

STATIC_HX_DEFINE_DYNAMIC_FUNC4(DrawCommand_obj,CurveTo,return)

STATIC_HX_DEFINE_DYNAMIC_FUNC3(DrawCommand_obj,DrawCircle,return)

STATIC_HX_DEFINE_DYNAMIC_FUNC4(DrawCommand_obj,DrawEllipse,return)

STATIC_HX_DEFINE_DYNAMIC_FUNC3(DrawCommand_obj,DrawPathC,return)

STATIC_HX_DEFINE_DYNAMIC_FUNC4(DrawCommand_obj,DrawRect,return)

STATIC_HX_DEFINE_DYNAMIC_FUNC6(DrawCommand_obj,DrawRoundRect,return)

STATIC_HX_DEFINE_DYNAMIC_FUNC5(DrawCommand_obj,DrawTiles,return)

STATIC_HX_DEFINE_DYNAMIC_FUNC6(DrawCommand_obj,DrawTriangles,return)

STATIC_HX_DEFINE_DYNAMIC_FUNC4(DrawCommand_obj,LineBitmapStyle,return)

STATIC_HX_DEFINE_DYNAMIC_FUNC8(DrawCommand_obj,LineGradientStyle,return)

STATIC_HX_DEFINE_DYNAMIC_FUNC8(DrawCommand_obj,LineStyle,return)

STATIC_HX_DEFINE_DYNAMIC_FUNC2(DrawCommand_obj,LineTo,return)

STATIC_HX_DEFINE_DYNAMIC_FUNC2(DrawCommand_obj,MoveTo,return)

STATIC_HX_DEFINE_DYNAMIC_FUNC1(DrawCommand_obj,OverrideMatrix,return)

int DrawCommand_obj::__FindArgCount(::String inName)
{
	if (inName==HX_HCSTRING("BeginBitmapFill","\x7b","\xd1","\x93","\xca")) return 4;
	if (inName==HX_HCSTRING("BeginFill","\x2c","\x8d","\x68","\x2e")) return 2;
	if (inName==HX_HCSTRING("BeginGradientFill","\x3c","\xfc","\x88","\xcf")) return 8;
	if (inName==HX_HCSTRING("CubicCurveTo","\x00","\x54","\xa2","\xf6")) return 6;
	if (inName==HX_HCSTRING("CurveTo","\xea","\x87","\xd9","\x9b")) return 4;
	if (inName==HX_HCSTRING("DrawCircle","\x54","\xf1","\x81","\x8e")) return 3;
	if (inName==HX_HCSTRING("DrawEllipse","\x1a","\x1d","\x01","\x39")) return 4;
	if (inName==HX_HCSTRING("DrawPathC","\x3a","\x20","\x35","\x27")) return 3;
	if (inName==HX_HCSTRING("DrawRect","\x68","\xb3","\xc2","\x39")) return 4;
	if (inName==HX_HCSTRING("DrawRoundRect","\xce","\x13","\x9b","\x2a")) return 6;
	if (inName==HX_HCSTRING("DrawTiles","\xc1","\x12","\x13","\x7a")) return 5;
	if (inName==HX_HCSTRING("DrawTriangles","\xe7","\x93","\x58","\x26")) return 6;
	if (inName==HX_HCSTRING("EndFill","\xde","\xaf","\x31","\xf3")) return 0;
	if (inName==HX_HCSTRING("LineBitmapStyle","\x0e","\x47","\xad","\xa5")) return 4;
	if (inName==HX_HCSTRING("LineGradientStyle","\x6d","\xe4","\x77","\x63")) return 8;
	if (inName==HX_HCSTRING("LineStyle","\x7d","\x88","\xeb","\x6c")) return 8;
	if (inName==HX_HCSTRING("LineTo","\xaf","\xba","\x34","\x21")) return 2;
	if (inName==HX_HCSTRING("MoveTo","\x0c","\x47","\x41","\x01")) return 2;
	if (inName==HX_HCSTRING("OverrideMatrix","\xcd","\x21","\xff","\x63")) return 1;
	return super::__FindArgCount(inName);
}

Dynamic DrawCommand_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	if (inName==HX_HCSTRING("BeginBitmapFill","\x7b","\xd1","\x93","\xca")) return BeginBitmapFill_dyn();
	if (inName==HX_HCSTRING("BeginFill","\x2c","\x8d","\x68","\x2e")) return BeginFill_dyn();
	if (inName==HX_HCSTRING("BeginGradientFill","\x3c","\xfc","\x88","\xcf")) return BeginGradientFill_dyn();
	if (inName==HX_HCSTRING("CubicCurveTo","\x00","\x54","\xa2","\xf6")) return CubicCurveTo_dyn();
	if (inName==HX_HCSTRING("CurveTo","\xea","\x87","\xd9","\x9b")) return CurveTo_dyn();
	if (inName==HX_HCSTRING("DrawCircle","\x54","\xf1","\x81","\x8e")) return DrawCircle_dyn();
	if (inName==HX_HCSTRING("DrawEllipse","\x1a","\x1d","\x01","\x39")) return DrawEllipse_dyn();
	if (inName==HX_HCSTRING("DrawPathC","\x3a","\x20","\x35","\x27")) return DrawPathC_dyn();
	if (inName==HX_HCSTRING("DrawRect","\x68","\xb3","\xc2","\x39")) return DrawRect_dyn();
	if (inName==HX_HCSTRING("DrawRoundRect","\xce","\x13","\x9b","\x2a")) return DrawRoundRect_dyn();
	if (inName==HX_HCSTRING("DrawTiles","\xc1","\x12","\x13","\x7a")) return DrawTiles_dyn();
	if (inName==HX_HCSTRING("DrawTriangles","\xe7","\x93","\x58","\x26")) return DrawTriangles_dyn();
	if (inName==HX_HCSTRING("EndFill","\xde","\xaf","\x31","\xf3")) return EndFill;
	if (inName==HX_HCSTRING("LineBitmapStyle","\x0e","\x47","\xad","\xa5")) return LineBitmapStyle_dyn();
	if (inName==HX_HCSTRING("LineGradientStyle","\x6d","\xe4","\x77","\x63")) return LineGradientStyle_dyn();
	if (inName==HX_HCSTRING("LineStyle","\x7d","\x88","\xeb","\x6c")) return LineStyle_dyn();
	if (inName==HX_HCSTRING("LineTo","\xaf","\xba","\x34","\x21")) return LineTo_dyn();
	if (inName==HX_HCSTRING("MoveTo","\x0c","\x47","\x41","\x01")) return MoveTo_dyn();
	if (inName==HX_HCSTRING("OverrideMatrix","\xcd","\x21","\xff","\x63")) return OverrideMatrix_dyn();
	return super::__Field(inName,inCallProp);
}

static ::String sStaticFields[] = {
	HX_HCSTRING("BeginBitmapFill","\x7b","\xd1","\x93","\xca"),
	HX_HCSTRING("BeginFill","\x2c","\x8d","\x68","\x2e"),
	HX_HCSTRING("BeginGradientFill","\x3c","\xfc","\x88","\xcf"),
	HX_HCSTRING("CubicCurveTo","\x00","\x54","\xa2","\xf6"),
	HX_HCSTRING("CurveTo","\xea","\x87","\xd9","\x9b"),
	HX_HCSTRING("DrawCircle","\x54","\xf1","\x81","\x8e"),
	HX_HCSTRING("DrawEllipse","\x1a","\x1d","\x01","\x39"),
	HX_HCSTRING("DrawRect","\x68","\xb3","\xc2","\x39"),
	HX_HCSTRING("DrawRoundRect","\xce","\x13","\x9b","\x2a"),
	HX_HCSTRING("DrawTiles","\xc1","\x12","\x13","\x7a"),
	HX_HCSTRING("DrawTriangles","\xe7","\x93","\x58","\x26"),
	HX_HCSTRING("EndFill","\xde","\xaf","\x31","\xf3"),
	HX_HCSTRING("LineStyle","\x7d","\x88","\xeb","\x6c"),
	HX_HCSTRING("LineBitmapStyle","\x0e","\x47","\xad","\xa5"),
	HX_HCSTRING("LineGradientStyle","\x6d","\xe4","\x77","\x63"),
	HX_HCSTRING("LineTo","\xaf","\xba","\x34","\x21"),
	HX_HCSTRING("MoveTo","\x0c","\x47","\x41","\x01"),
	HX_HCSTRING("DrawPathC","\x3a","\x20","\x35","\x27"),
	HX_HCSTRING("OverrideMatrix","\xcd","\x21","\xff","\x63"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(DrawCommand_obj::EndFill,"EndFill");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatic(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(DrawCommand_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(DrawCommand_obj::EndFill,"EndFill");
};
#endif

static ::String sMemberFields[] = { ::String(null()) };
hx::Class DrawCommand_obj::__mClass;

Dynamic __Create_DrawCommand_obj() { return new DrawCommand_obj; }

void DrawCommand_obj::__register()
{

hx::Static(__mClass) = hx::RegisterClass(HX_HCSTRING("openfl.display.DrawCommand","\x7d","\xa5","\x86","\x14"), hx::TCanCast< DrawCommand_obj >,sStaticFields,sMemberFields,
	&__Create_DrawCommand_obj, &__Create,
	&super::__SGetClass(), &CreateDrawCommand_obj, sMarkStatics
#ifdef HXCPP_VISIT_ALLOCS
    , sVisitStatic
#endif
#ifdef HXCPP_SCRIPTABLE
    , 0
#endif
);
}

void DrawCommand_obj::__boot()
{
hx::Static(EndFill) = hx::CreateEnum< DrawCommand_obj >(HX_HCSTRING("EndFill","\xde","\xaf","\x31","\xf3"),11);
}


} // end namespace openfl
} // end namespace display
