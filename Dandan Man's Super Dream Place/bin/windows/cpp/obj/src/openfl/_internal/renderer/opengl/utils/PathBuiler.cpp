#include <hxcpp.h>

#include "hxMath.h"
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_lime_graphics_GLRenderContext
#include <lime/graphics/GLRenderContext.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_AbstractRenderer
#include <openfl/_internal/renderer/AbstractRenderer.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_GraphicsPaths
#include <openfl/_internal/renderer/GraphicsPaths.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_opengl_GLRenderer
#include <openfl/_internal/renderer/opengl/GLRenderer.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_opengl_utils_DrawPath
#include <openfl/_internal/renderer/opengl/utils/DrawPath.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_opengl_utils_FillType
#include <openfl/_internal/renderer/opengl/utils/FillType.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_opengl_utils_GLStack
#include <openfl/_internal/renderer/opengl/utils/GLStack.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_opengl_utils_GraphicType
#include <openfl/_internal/renderer/opengl/utils/GraphicType.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_opengl_utils_LineStyle
#include <openfl/_internal/renderer/opengl/utils/LineStyle.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_opengl_utils_PathBuiler
#include <openfl/_internal/renderer/opengl/utils/PathBuiler.h>
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
#ifndef INCLUDED_openfl_display_Graphics
#include <openfl/display/Graphics.h>
#endif
#ifndef INCLUDED_openfl_display_GraphicsPathWinding
#include <openfl/display/GraphicsPathWinding.h>
#endif
#ifndef INCLUDED_openfl_display_IBitmapDrawable
#include <openfl/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_openfl_display_JointStyle
#include <openfl/display/JointStyle.h>
#endif
#ifndef INCLUDED_openfl_display_LineScaleMode
#include <openfl/display/LineScaleMode.h>
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
#ifndef INCLUDED_openfl_geom_Rectangle
#include <openfl/geom/Rectangle.h>
#endif
namespace openfl{
namespace _internal{
namespace renderer{
namespace opengl{
namespace utils{

Void PathBuiler_obj::__construct()
{
	return null();
}

//PathBuiler_obj::~PathBuiler_obj() { }

Dynamic PathBuiler_obj::__CreateEmpty() { return  new PathBuiler_obj; }
hx::ObjectPtr< PathBuiler_obj > PathBuiler_obj::__new()
{  hx::ObjectPtr< PathBuiler_obj > _result_ = new PathBuiler_obj();
	_result_->__construct();
	return _result_;}

Dynamic PathBuiler_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< PathBuiler_obj > _result_ = new PathBuiler_obj();
	_result_->__construct();
	return _result_;}

::openfl::_internal::renderer::opengl::utils::DrawPath PathBuiler_obj::__currentPath;

int PathBuiler_obj::__currentWinding;

Array< ::Dynamic > PathBuiler_obj::__drawPaths;

::openfl::_internal::renderer::opengl::utils::LineStyle PathBuiler_obj::__line;

::openfl::_internal::renderer::opengl::utils::FillType PathBuiler_obj::__fill;

int PathBuiler_obj::__fillIndex;

Void PathBuiler_obj::closePath( ){
{
		HX_STACK_FRAME("openfl._internal.renderer.opengl.utils.PathBuiler","closePath",0x65da1ed8,"openfl._internal.renderer.opengl.utils.PathBuiler.closePath","openfl/_internal/renderer/opengl/utils/DrawPath.hx",76,0xf0fd7951)
		HX_STACK_LINE(77)
		::openfl::_internal::renderer::opengl::utils::DrawPath tmp = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentPath;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(77)
		int tmp1 = tmp->points->length;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(77)
		int l = tmp1;		HX_STACK_VAR(l,"l");
		HX_STACK_LINE(78)
		bool tmp2 = (l <= (int)0);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(78)
		if ((tmp2)){
			HX_STACK_LINE(78)
			return null();
		}
		HX_STACK_LINE(80)
		::openfl::_internal::renderer::opengl::utils::DrawPath tmp3 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentPath;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(80)
		::openfl::_internal::renderer::opengl::utils::GraphicType tmp4 = tmp3->type;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(80)
		bool tmp5 = (tmp4 == ::openfl::_internal::renderer::opengl::utils::GraphicType_obj::Polygon);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(80)
		bool tmp6;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(80)
		if ((tmp5)){
			HX_STACK_LINE(80)
			::openfl::_internal::renderer::opengl::utils::DrawPath tmp7 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentPath;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(80)
			::openfl::_internal::renderer::opengl::utils::DrawPath tmp8 = tmp7;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(80)
			::openfl::_internal::renderer::opengl::utils::FillType tmp9 = tmp8->fill;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(80)
			tmp6 = (tmp9 != ::openfl::_internal::renderer::opengl::utils::FillType_obj::None);
		}
		else{
			HX_STACK_LINE(80)
			tmp6 = false;
		}
		HX_STACK_LINE(80)
		if ((tmp6)){
			HX_STACK_LINE(81)
			::openfl::_internal::renderer::opengl::utils::DrawPath tmp7 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentPath;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(81)
			Float tmp8 = tmp7->points->__get((int)0);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(81)
			Float sx = tmp8;		HX_STACK_VAR(sx,"sx");
			HX_STACK_LINE(82)
			::openfl::_internal::renderer::opengl::utils::DrawPath tmp9 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentPath;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(82)
			Float tmp10 = tmp9->points->__get((int)1);		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(82)
			Float sy = tmp10;		HX_STACK_VAR(sy,"sy");
			HX_STACK_LINE(83)
			::openfl::_internal::renderer::opengl::utils::DrawPath tmp11 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentPath;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(83)
			int tmp12 = (l - (int)2);		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(83)
			Float tmp13 = tmp11->points->__get(tmp12);		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(83)
			Float ex = tmp13;		HX_STACK_VAR(ex,"ex");
			HX_STACK_LINE(84)
			::openfl::_internal::renderer::opengl::utils::DrawPath tmp14 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentPath;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(84)
			int tmp15 = (l - (int)1);		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(84)
			Float tmp16 = tmp14->points->__get(tmp15);		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(84)
			Float ey = tmp16;		HX_STACK_VAR(ey,"ey");
			HX_STACK_LINE(86)
			bool tmp17 = (sx == ex);		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(86)
			bool tmp18;		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(86)
			if ((tmp17)){
				HX_STACK_LINE(86)
				tmp18 = (sy == ey);
			}
			else{
				HX_STACK_LINE(86)
				tmp18 = false;
			}
			HX_STACK_LINE(86)
			bool tmp19 = !(tmp18);		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(86)
			if ((tmp19)){
				HX_STACK_LINE(87)
				::openfl::_internal::renderer::opengl::utils::DrawPath tmp20 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentPath;		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(87)
				Array< Float > points = tmp20->points;		HX_STACK_VAR(points,"points");
				HX_STACK_LINE(87)
				bool push_point = true;		HX_STACK_VAR(push_point,"push_point");
				HX_STACK_LINE(87)
				bool tmp21 = (points->length > (int)1);		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(87)
				if ((tmp21)){
					HX_STACK_LINE(87)
					int tmp22 = (points->length - (int)2);		HX_STACK_VAR(tmp22,"tmp22");
					HX_STACK_LINE(87)
					Float tmp23 = points->__get(tmp22);		HX_STACK_VAR(tmp23,"tmp23");
					HX_STACK_LINE(87)
					Float lastX = tmp23;		HX_STACK_VAR(lastX,"lastX");
					HX_STACK_LINE(87)
					int tmp24 = (points->length - (int)1);		HX_STACK_VAR(tmp24,"tmp24");
					HX_STACK_LINE(87)
					Float tmp25 = points->__get(tmp24);		HX_STACK_VAR(tmp25,"tmp25");
					HX_STACK_LINE(87)
					Float lastY = tmp25;		HX_STACK_VAR(lastY,"lastY");
					HX_STACK_LINE(87)
					bool tmp26 = (lastX == sx);		HX_STACK_VAR(tmp26,"tmp26");
					HX_STACK_LINE(87)
					bool tmp27;		HX_STACK_VAR(tmp27,"tmp27");
					HX_STACK_LINE(87)
					if ((tmp26)){
						HX_STACK_LINE(87)
						tmp27 = (lastY == sy);
					}
					else{
						HX_STACK_LINE(87)
						tmp27 = false;
					}
					HX_STACK_LINE(87)
					if ((tmp27)){
						HX_STACK_LINE(87)
						push_point = false;
					}
				}
				HX_STACK_LINE(87)
				bool tmp22 = (push_point == true);		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(87)
				if ((tmp22)){
					HX_STACK_LINE(87)
					::openfl::_internal::renderer::opengl::utils::DrawPath tmp23 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentPath;		HX_STACK_VAR(tmp23,"tmp23");
					HX_STACK_LINE(87)
					Float tmp24 = sx;		HX_STACK_VAR(tmp24,"tmp24");
					HX_STACK_LINE(87)
					tmp23->points->push(tmp24);
					HX_STACK_LINE(87)
					::openfl::_internal::renderer::opengl::utils::DrawPath tmp25 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentPath;		HX_STACK_VAR(tmp25,"tmp25");
					HX_STACK_LINE(87)
					Float tmp26 = sy;		HX_STACK_VAR(tmp26,"tmp26");
					HX_STACK_LINE(87)
					tmp25->points->push(tmp26);
				}
			}
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(PathBuiler_obj,closePath,(void))

Void PathBuiler_obj::endFill( ){
{
		HX_STACK_FRAME("openfl._internal.renderer.opengl.utils.PathBuiler","endFill",0xe6a5a499,"openfl._internal.renderer.opengl.utils.PathBuiler.endFill","openfl/_internal/renderer/opengl/utils/DrawPath.hx",92,0xf0fd7951)
		HX_STACK_LINE(94)
		::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__fill = ::openfl::_internal::renderer::opengl::utils::FillType_obj::None;
		HX_STACK_LINE(95)
		(::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__fillIndex)++;
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(PathBuiler_obj,endFill,(void))

Void PathBuiler_obj::moveTo( Float x,Float y){
{
		HX_STACK_FRAME("openfl._internal.renderer.opengl.utils.PathBuiler","moveTo",0x360182b1,"openfl._internal.renderer.opengl.utils.PathBuiler.moveTo","openfl/_internal/renderer/opengl/utils/DrawPath.hx",99,0xf0fd7951)
		HX_STACK_ARG(x,"x")
		HX_STACK_ARG(y,"y")
		HX_STACK_LINE(101)
		{
			HX_STACK_LINE(101)
			::openfl::_internal::renderer::opengl::utils::DrawPath tmp = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentPath;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(101)
			bool tmp1 = tmp->isRemovable;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(101)
			bool tmp2;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(101)
			if ((tmp1)){
				HX_STACK_LINE(101)
				::openfl::_internal::renderer::opengl::utils::DrawPath tmp3 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentPath;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(101)
				::openfl::_internal::renderer::opengl::utils::DrawPath tmp4 = tmp3;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(101)
				int tmp5 = tmp4->points->length;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(101)
				int tmp6 = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(101)
				tmp2 = (tmp6 == (int)0);
			}
			else{
				HX_STACK_LINE(101)
				tmp2 = false;
			}
			HX_STACK_LINE(101)
			if ((tmp2)){
				HX_STACK_LINE(101)
				::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__drawPaths->pop().StaticCast< ::openfl::_internal::renderer::opengl::utils::DrawPath >();
			}
			else{
				HX_STACK_LINE(101)
				::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::closePath();
			}
		}
		HX_STACK_LINE(102)
		::openfl::_internal::renderer::opengl::utils::DrawPath tmp = ::openfl::_internal::renderer::opengl::utils::DrawPath_obj::__new();		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(102)
		::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentPath = tmp;
		HX_STACK_LINE(103)
		::openfl::_internal::renderer::opengl::utils::DrawPath tmp1 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentPath;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(103)
		::openfl::_internal::renderer::opengl::utils::LineStyle tmp2 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__line;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(103)
		::openfl::_internal::renderer::opengl::utils::FillType tmp3 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__fill;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(103)
		int tmp4 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__fillIndex;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(103)
		int tmp5 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentWinding;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(103)
		tmp1->update(tmp2,tmp3,tmp4,tmp5);
		HX_STACK_LINE(104)
		::openfl::_internal::renderer::opengl::utils::DrawPath tmp6 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentPath;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(104)
		tmp6->type = ::openfl::_internal::renderer::opengl::utils::GraphicType_obj::Polygon;
		HX_STACK_LINE(105)
		::openfl::_internal::renderer::opengl::utils::DrawPath tmp7 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentPath;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(105)
		Float tmp8 = x;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(105)
		tmp7->points->push(tmp8);
		HX_STACK_LINE(106)
		::openfl::_internal::renderer::opengl::utils::DrawPath tmp9 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentPath;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(106)
		Float tmp10 = y;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(106)
		tmp9->points->push(tmp10);
		HX_STACK_LINE(108)
		::openfl::_internal::renderer::opengl::utils::DrawPath tmp11 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentPath;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(108)
		::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__drawPaths->push(tmp11);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(PathBuiler_obj,moveTo,(void))

Void PathBuiler_obj::lineTo( Float x,Float y){
{
		HX_STACK_FRAME("openfl._internal.renderer.opengl.utils.PathBuiler","lineTo",0x55f4f654,"openfl._internal.renderer.opengl.utils.PathBuiler.lineTo","openfl/_internal/renderer/opengl/utils/DrawPath.hx",112,0xf0fd7951)
		HX_STACK_ARG(x,"x")
		HX_STACK_ARG(y,"y")
		HX_STACK_LINE(113)
		::openfl::_internal::renderer::opengl::utils::DrawPath tmp = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentPath;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(113)
		Array< Float > points = tmp->points;		HX_STACK_VAR(points,"points");
		HX_STACK_LINE(114)
		bool push_point = true;		HX_STACK_VAR(push_point,"push_point");
		HX_STACK_LINE(117)
		bool tmp1 = (points->length > (int)1);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(117)
		if ((tmp1)){
			HX_STACK_LINE(118)
			int tmp2 = (points->length - (int)2);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(118)
			Float tmp3 = points->__get(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(118)
			Float lastX = tmp3;		HX_STACK_VAR(lastX,"lastX");
			HX_STACK_LINE(119)
			int tmp4 = (points->length - (int)1);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(119)
			Float tmp5 = points->__get(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(119)
			Float lastY = tmp5;		HX_STACK_VAR(lastY,"lastY");
			HX_STACK_LINE(120)
			bool tmp6 = (lastX == x);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(120)
			bool tmp7;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(120)
			if ((tmp6)){
				HX_STACK_LINE(120)
				tmp7 = (lastY == y);
			}
			else{
				HX_STACK_LINE(120)
				tmp7 = false;
			}
			HX_STACK_LINE(120)
			if ((tmp7)){
				HX_STACK_LINE(121)
				push_point = false;
			}
		}
		HX_STACK_LINE(125)
		bool tmp2 = (push_point == true);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(125)
		if ((tmp2)){
			HX_STACK_LINE(126)
			::openfl::_internal::renderer::opengl::utils::DrawPath tmp3 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentPath;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(126)
			Float tmp4 = x;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(126)
			tmp3->points->push(tmp4);
			HX_STACK_LINE(127)
			::openfl::_internal::renderer::opengl::utils::DrawPath tmp5 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentPath;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(127)
			Float tmp6 = y;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(127)
			tmp5->points->push(tmp6);
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(PathBuiler_obj,lineTo,(void))

Void PathBuiler_obj::curveTo( Float cx,Float cy,Float x,Float y){
{
		HX_STACK_FRAME("openfl._internal.renderer.opengl.utils.PathBuiler","curveTo",0x8f4d7ca5,"openfl._internal.renderer.opengl.utils.PathBuiler.curveTo","openfl/_internal/renderer/opengl/utils/DrawPath.hx",131,0xf0fd7951)
		HX_STACK_ARG(cx,"cx")
		HX_STACK_ARG(cy,"cy")
		HX_STACK_ARG(x,"x")
		HX_STACK_ARG(y,"y")
		HX_STACK_LINE(133)
		::openfl::_internal::renderer::opengl::utils::DrawPath tmp = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentPath;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(133)
		int tmp1 = tmp->points->length;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(133)
		bool tmp2 = (tmp1 == (int)0);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(133)
		if ((tmp2)){
			HX_STACK_LINE(134)
			{
				HX_STACK_LINE(134)
				::openfl::_internal::renderer::opengl::utils::DrawPath tmp3 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentPath;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(134)
				bool tmp4 = tmp3->isRemovable;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(134)
				bool tmp5;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(134)
				if ((tmp4)){
					HX_STACK_LINE(134)
					::openfl::_internal::renderer::opengl::utils::DrawPath tmp6 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentPath;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(134)
					::openfl::_internal::renderer::opengl::utils::DrawPath tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(134)
					int tmp8 = tmp7->points->length;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(134)
					int tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(134)
					tmp5 = (tmp9 == (int)0);
				}
				else{
					HX_STACK_LINE(134)
					tmp5 = false;
				}
				HX_STACK_LINE(134)
				if ((tmp5)){
					HX_STACK_LINE(134)
					::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__drawPaths->pop().StaticCast< ::openfl::_internal::renderer::opengl::utils::DrawPath >();
				}
				else{
					HX_STACK_LINE(134)
					::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::closePath();
				}
			}
			HX_STACK_LINE(134)
			::openfl::_internal::renderer::opengl::utils::DrawPath tmp3 = ::openfl::_internal::renderer::opengl::utils::DrawPath_obj::__new();		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(134)
			::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentPath = tmp3;
			HX_STACK_LINE(134)
			::openfl::_internal::renderer::opengl::utils::DrawPath tmp4 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentPath;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(134)
			::openfl::_internal::renderer::opengl::utils::LineStyle tmp5 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__line;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(134)
			::openfl::_internal::renderer::opengl::utils::FillType tmp6 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__fill;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(134)
			int tmp7 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__fillIndex;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(134)
			int tmp8 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentWinding;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(134)
			tmp4->update(tmp5,tmp6,tmp7,tmp8);
			HX_STACK_LINE(134)
			::openfl::_internal::renderer::opengl::utils::DrawPath tmp9 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentPath;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(134)
			tmp9->type = ::openfl::_internal::renderer::opengl::utils::GraphicType_obj::Polygon;
			HX_STACK_LINE(134)
			::openfl::_internal::renderer::opengl::utils::DrawPath tmp10 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentPath;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(134)
			tmp10->points->push((int)0);
			HX_STACK_LINE(134)
			::openfl::_internal::renderer::opengl::utils::DrawPath tmp11 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentPath;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(134)
			tmp11->points->push((int)0);
			HX_STACK_LINE(134)
			::openfl::_internal::renderer::opengl::utils::DrawPath tmp12 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentPath;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(134)
			::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__drawPaths->push(tmp12);
		}
		HX_STACK_LINE(137)
		::openfl::_internal::renderer::opengl::utils::DrawPath tmp3 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentPath;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(137)
		Float tmp4 = cx;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(137)
		Float tmp5 = cy;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(137)
		Float tmp6 = x;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(137)
		Float tmp7 = y;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(137)
		::openfl::_internal::renderer::GraphicsPaths_obj::curveTo(tmp3->points,tmp4,tmp5,tmp6,tmp7);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(PathBuiler_obj,curveTo,(void))

Void PathBuiler_obj::cubicCurveTo( Float cx,Float cy,Float cx2,Float cy2,Float x,Float y){
{
		HX_STACK_FRAME("openfl._internal.renderer.opengl.utils.PathBuiler","cubicCurveTo",0x7b165965,"openfl._internal.renderer.opengl.utils.PathBuiler.cubicCurveTo","openfl/_internal/renderer/opengl/utils/DrawPath.hx",141,0xf0fd7951)
		HX_STACK_ARG(cx,"cx")
		HX_STACK_ARG(cy,"cy")
		HX_STACK_ARG(cx2,"cx2")
		HX_STACK_ARG(cy2,"cy2")
		HX_STACK_ARG(x,"x")
		HX_STACK_ARG(y,"y")
		HX_STACK_LINE(143)
		::openfl::_internal::renderer::opengl::utils::DrawPath tmp = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentPath;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(143)
		int tmp1 = tmp->points->length;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(143)
		bool tmp2 = (tmp1 == (int)0);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(143)
		if ((tmp2)){
			HX_STACK_LINE(144)
			{
				HX_STACK_LINE(144)
				::openfl::_internal::renderer::opengl::utils::DrawPath tmp3 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentPath;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(144)
				bool tmp4 = tmp3->isRemovable;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(144)
				bool tmp5;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(144)
				if ((tmp4)){
					HX_STACK_LINE(144)
					::openfl::_internal::renderer::opengl::utils::DrawPath tmp6 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentPath;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(144)
					::openfl::_internal::renderer::opengl::utils::DrawPath tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(144)
					int tmp8 = tmp7->points->length;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(144)
					int tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(144)
					tmp5 = (tmp9 == (int)0);
				}
				else{
					HX_STACK_LINE(144)
					tmp5 = false;
				}
				HX_STACK_LINE(144)
				if ((tmp5)){
					HX_STACK_LINE(144)
					::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__drawPaths->pop().StaticCast< ::openfl::_internal::renderer::opengl::utils::DrawPath >();
				}
				else{
					HX_STACK_LINE(144)
					::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::closePath();
				}
			}
			HX_STACK_LINE(144)
			::openfl::_internal::renderer::opengl::utils::DrawPath tmp3 = ::openfl::_internal::renderer::opengl::utils::DrawPath_obj::__new();		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(144)
			::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentPath = tmp3;
			HX_STACK_LINE(144)
			::openfl::_internal::renderer::opengl::utils::DrawPath tmp4 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentPath;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(144)
			::openfl::_internal::renderer::opengl::utils::LineStyle tmp5 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__line;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(144)
			::openfl::_internal::renderer::opengl::utils::FillType tmp6 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__fill;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(144)
			int tmp7 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__fillIndex;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(144)
			int tmp8 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentWinding;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(144)
			tmp4->update(tmp5,tmp6,tmp7,tmp8);
			HX_STACK_LINE(144)
			::openfl::_internal::renderer::opengl::utils::DrawPath tmp9 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentPath;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(144)
			tmp9->type = ::openfl::_internal::renderer::opengl::utils::GraphicType_obj::Polygon;
			HX_STACK_LINE(144)
			::openfl::_internal::renderer::opengl::utils::DrawPath tmp10 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentPath;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(144)
			tmp10->points->push((int)0);
			HX_STACK_LINE(144)
			::openfl::_internal::renderer::opengl::utils::DrawPath tmp11 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentPath;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(144)
			tmp11->points->push((int)0);
			HX_STACK_LINE(144)
			::openfl::_internal::renderer::opengl::utils::DrawPath tmp12 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentPath;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(144)
			::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__drawPaths->push(tmp12);
		}
		HX_STACK_LINE(147)
		{
			HX_STACK_LINE(147)
			::openfl::_internal::renderer::opengl::utils::DrawPath tmp3 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentPath;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(147)
			Array< Float > points = tmp3->points;		HX_STACK_VAR(points,"points");
			HX_STACK_LINE(147)
			int n = (int)20;		HX_STACK_VAR(n,"n");
			HX_STACK_LINE(147)
			Float dt = (int)0;		HX_STACK_VAR(dt,"dt");
			HX_STACK_LINE(147)
			Float dt2 = (int)0;		HX_STACK_VAR(dt2,"dt2");
			HX_STACK_LINE(147)
			Float dt3 = (int)0;		HX_STACK_VAR(dt3,"dt3");
			HX_STACK_LINE(147)
			Float t2 = (int)0;		HX_STACK_VAR(t2,"t2");
			HX_STACK_LINE(147)
			Float t3 = (int)0;		HX_STACK_VAR(t3,"t3");
			HX_STACK_LINE(147)
			int tmp4 = (points->length - (int)2);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(147)
			Float tmp5 = points->__get(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(147)
			Float fromX = tmp5;		HX_STACK_VAR(fromX,"fromX");
			HX_STACK_LINE(147)
			int tmp6 = (points->length - (int)1);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(147)
			Float tmp7 = points->__get(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(147)
			Float fromY = tmp7;		HX_STACK_VAR(fromY,"fromY");
			HX_STACK_LINE(147)
			Float px = (int)0;		HX_STACK_VAR(px,"px");
			HX_STACK_LINE(147)
			Float py = (int)0;		HX_STACK_VAR(py,"py");
			HX_STACK_LINE(147)
			Float tmp8 = (int)0;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(147)
			{
				HX_STACK_LINE(147)
				int _g1 = (int)1;		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(147)
				int tmp9 = (n + (int)1);		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(147)
				int _g = tmp9;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(147)
				while((true)){
					HX_STACK_LINE(147)
					bool tmp10 = (_g1 < _g);		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(147)
					bool tmp11 = !(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(147)
					if ((tmp11)){
						HX_STACK_LINE(147)
						break;
					}
					HX_STACK_LINE(147)
					int tmp12 = (_g1)++;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(147)
					int i = tmp12;		HX_STACK_VAR(i,"i");
					HX_STACK_LINE(147)
					Float tmp13 = (Float(i) / Float(n));		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(147)
					tmp8 = tmp13;
					HX_STACK_LINE(147)
					Float tmp14 = ((int)1 - tmp8);		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(147)
					dt = tmp14;
					HX_STACK_LINE(147)
					Float tmp15 = (dt * dt);		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(147)
					dt2 = tmp15;
					HX_STACK_LINE(147)
					Float tmp16 = (dt2 * dt);		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(147)
					dt3 = tmp16;
					HX_STACK_LINE(147)
					Float tmp17 = (tmp8 * tmp8);		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(147)
					t2 = tmp17;
					HX_STACK_LINE(147)
					Float tmp18 = (t2 * tmp8);		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(147)
					t3 = tmp18;
					HX_STACK_LINE(147)
					Float tmp19 = (dt3 * fromX);		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(147)
					Float tmp20 = ((int)3 * dt2);		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(147)
					Float tmp21 = tmp8;		HX_STACK_VAR(tmp21,"tmp21");
					HX_STACK_LINE(147)
					Float tmp22 = (tmp20 * tmp21);		HX_STACK_VAR(tmp22,"tmp22");
					HX_STACK_LINE(147)
					Float tmp23 = cx;		HX_STACK_VAR(tmp23,"tmp23");
					HX_STACK_LINE(147)
					Float tmp24 = (tmp22 * tmp23);		HX_STACK_VAR(tmp24,"tmp24");
					HX_STACK_LINE(147)
					Float tmp25 = (tmp19 + tmp24);		HX_STACK_VAR(tmp25,"tmp25");
					HX_STACK_LINE(147)
					Float tmp26 = ((int)3 * dt);		HX_STACK_VAR(tmp26,"tmp26");
					HX_STACK_LINE(147)
					Float tmp27 = t2;		HX_STACK_VAR(tmp27,"tmp27");
					HX_STACK_LINE(147)
					Float tmp28 = (tmp26 * tmp27);		HX_STACK_VAR(tmp28,"tmp28");
					HX_STACK_LINE(147)
					Float tmp29 = cx2;		HX_STACK_VAR(tmp29,"tmp29");
					HX_STACK_LINE(147)
					Float tmp30 = (tmp28 * tmp29);		HX_STACK_VAR(tmp30,"tmp30");
					HX_STACK_LINE(147)
					Float tmp31 = (tmp25 + tmp30);		HX_STACK_VAR(tmp31,"tmp31");
					HX_STACK_LINE(147)
					Float tmp32 = (t3 * x);		HX_STACK_VAR(tmp32,"tmp32");
					HX_STACK_LINE(147)
					Float tmp33 = (tmp31 + tmp32);		HX_STACK_VAR(tmp33,"tmp33");
					HX_STACK_LINE(147)
					px = tmp33;
					HX_STACK_LINE(147)
					Float tmp34 = (dt3 * fromY);		HX_STACK_VAR(tmp34,"tmp34");
					HX_STACK_LINE(147)
					Float tmp35 = ((int)3 * dt2);		HX_STACK_VAR(tmp35,"tmp35");
					HX_STACK_LINE(147)
					Float tmp36 = tmp8;		HX_STACK_VAR(tmp36,"tmp36");
					HX_STACK_LINE(147)
					Float tmp37 = (tmp35 * tmp36);		HX_STACK_VAR(tmp37,"tmp37");
					HX_STACK_LINE(147)
					Float tmp38 = cy;		HX_STACK_VAR(tmp38,"tmp38");
					HX_STACK_LINE(147)
					Float tmp39 = (tmp37 * tmp38);		HX_STACK_VAR(tmp39,"tmp39");
					HX_STACK_LINE(147)
					Float tmp40 = (tmp34 + tmp39);		HX_STACK_VAR(tmp40,"tmp40");
					HX_STACK_LINE(147)
					Float tmp41 = ((int)3 * dt);		HX_STACK_VAR(tmp41,"tmp41");
					HX_STACK_LINE(147)
					Float tmp42 = t2;		HX_STACK_VAR(tmp42,"tmp42");
					HX_STACK_LINE(147)
					Float tmp43 = (tmp41 * tmp42);		HX_STACK_VAR(tmp43,"tmp43");
					HX_STACK_LINE(147)
					Float tmp44 = cy2;		HX_STACK_VAR(tmp44,"tmp44");
					HX_STACK_LINE(147)
					Float tmp45 = (tmp43 * tmp44);		HX_STACK_VAR(tmp45,"tmp45");
					HX_STACK_LINE(147)
					Float tmp46 = (tmp40 + tmp45);		HX_STACK_VAR(tmp46,"tmp46");
					HX_STACK_LINE(147)
					Float tmp47 = (t3 * y);		HX_STACK_VAR(tmp47,"tmp47");
					HX_STACK_LINE(147)
					Float tmp48 = (tmp46 + tmp47);		HX_STACK_VAR(tmp48,"tmp48");
					HX_STACK_LINE(147)
					py = tmp48;
					HX_STACK_LINE(147)
					Float tmp49 = px;		HX_STACK_VAR(tmp49,"tmp49");
					HX_STACK_LINE(147)
					points->push(tmp49);
					HX_STACK_LINE(147)
					Float tmp50 = py;		HX_STACK_VAR(tmp50,"tmp50");
					HX_STACK_LINE(147)
					points->push(tmp50);
				}
			}
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC6(PathBuiler_obj,cubicCurveTo,(void))

Void PathBuiler_obj::graphicDataPop( ){
{
		HX_STACK_FRAME("openfl._internal.renderer.opengl.utils.PathBuiler","graphicDataPop",0x871be484,"openfl._internal.renderer.opengl.utils.PathBuiler.graphicDataPop","openfl/_internal/renderer/opengl/utils/DrawPath.hx",151,0xf0fd7951)
		HX_STACK_LINE(153)
		::openfl::_internal::renderer::opengl::utils::DrawPath tmp = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentPath;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(153)
		bool tmp1 = tmp->isRemovable;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(153)
		bool tmp2;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(153)
		if ((tmp1)){
			HX_STACK_LINE(153)
			::openfl::_internal::renderer::opengl::utils::DrawPath tmp3 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentPath;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(153)
			::openfl::_internal::renderer::opengl::utils::DrawPath tmp4 = tmp3;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(153)
			int tmp5 = tmp4->points->length;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(153)
			int tmp6 = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(153)
			tmp2 = (tmp6 == (int)0);
		}
		else{
			HX_STACK_LINE(153)
			tmp2 = false;
		}
		HX_STACK_LINE(153)
		if ((tmp2)){
			HX_STACK_LINE(154)
			::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__drawPaths->pop().StaticCast< ::openfl::_internal::renderer::opengl::utils::DrawPath >();
		}
		else{
			HX_STACK_LINE(156)
			::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::closePath();
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(PathBuiler_obj,graphicDataPop,(void))

::openfl::_internal::renderer::opengl::utils::GLStack PathBuiler_obj::build( ::openfl::display::Graphics graphics,::lime::graphics::GLRenderContext gl){
	HX_STACK_FRAME("openfl._internal.renderer.opengl.utils.PathBuiler","build",0xe0200b09,"openfl._internal.renderer.opengl.utils.PathBuiler.build","openfl/_internal/renderer/opengl/utils/DrawPath.hx",161,0xf0fd7951)
	HX_STACK_ARG(graphics,"graphics")
	HX_STACK_ARG(gl,"gl")
	HX_STACK_LINE(163)
	::openfl::_internal::renderer::opengl::utils::GLStack glStack = null();		HX_STACK_VAR(glStack,"glStack");
	HX_STACK_LINE(164)
	::openfl::geom::Rectangle bounds = graphics->__bounds;		HX_STACK_VAR(bounds,"bounds");
	HX_STACK_LINE(166)
	::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__drawPaths = Array_obj< ::Dynamic >::__new();
	HX_STACK_LINE(167)
	::openfl::_internal::renderer::opengl::utils::DrawPath tmp = ::openfl::_internal::renderer::opengl::utils::DrawPath_obj::__new();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(167)
	::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentPath = tmp;
	HX_STACK_LINE(168)
	::openfl::_internal::renderer::opengl::utils::LineStyle tmp1 = ::openfl::_internal::renderer::opengl::utils::LineStyle_obj::__new();		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(168)
	::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__line = tmp1;
	HX_STACK_LINE(169)
	::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__fill = ::openfl::_internal::renderer::opengl::utils::FillType_obj::None;
	HX_STACK_LINE(170)
	::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__fillIndex = (int)0;
	HX_STACK_LINE(172)
	int tmp2 = ::openfl::_internal::renderer::opengl::GLRenderer_obj::glContextId;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(172)
	::openfl::_internal::renderer::opengl::utils::GLStack tmp3 = graphics->__glStack->__get(tmp2).StaticCast< ::openfl::_internal::renderer::opengl::utils::GLStack >();		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(172)
	glStack = tmp3;
	HX_STACK_LINE(174)
	bool tmp4 = (glStack == null());		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(174)
	if ((tmp4)){
		HX_STACK_LINE(176)
		int tmp5 = ::openfl::_internal::renderer::opengl::GLRenderer_obj::glContextId;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(176)
		::openfl::_internal::renderer::opengl::utils::GLStack tmp6 = ::openfl::_internal::renderer::opengl::utils::GLStack_obj::__new(gl);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(176)
		::openfl::_internal::renderer::opengl::utils::GLStack tmp7 = graphics->__glStack[tmp5] = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(176)
		glStack = tmp7;
	}
	HX_STACK_LINE(180)
	bool tmp5 = graphics->__visible;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(180)
	bool tmp6 = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(180)
	bool tmp7 = !(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(180)
	bool tmp8 = !(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(180)
	bool tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(180)
	bool tmp10;		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(180)
	if ((tmp9)){
		HX_STACK_LINE(180)
		int tmp11 = graphics->__commands->length;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(180)
		int tmp12 = tmp11;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(180)
		int tmp13 = tmp12;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(180)
		tmp10 = (tmp13 == (int)0);
	}
	else{
		HX_STACK_LINE(180)
		tmp10 = true;
	}
	HX_STACK_LINE(180)
	bool tmp11 = !(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(180)
	bool tmp12 = tmp11;		HX_STACK_VAR(tmp12,"tmp12");
	HX_STACK_LINE(180)
	bool tmp13;		HX_STACK_VAR(tmp13,"tmp13");
	HX_STACK_LINE(180)
	if ((tmp12)){
		HX_STACK_LINE(180)
		tmp13 = (bounds == null());
	}
	else{
		HX_STACK_LINE(180)
		tmp13 = true;
	}
	HX_STACK_LINE(180)
	bool tmp14 = !(tmp13);		HX_STACK_VAR(tmp14,"tmp14");
	HX_STACK_LINE(180)
	bool tmp15 = tmp14;		HX_STACK_VAR(tmp15,"tmp15");
	HX_STACK_LINE(180)
	bool tmp16;		HX_STACK_VAR(tmp16,"tmp16");
	HX_STACK_LINE(180)
	if ((tmp15)){
		HX_STACK_LINE(180)
		tmp16 = (bounds->width == (int)0);
	}
	else{
		HX_STACK_LINE(180)
		tmp16 = true;
	}
	HX_STACK_LINE(180)
	bool tmp17 = !(tmp16);		HX_STACK_VAR(tmp17,"tmp17");
	HX_STACK_LINE(180)
	bool tmp18;		HX_STACK_VAR(tmp18,"tmp18");
	HX_STACK_LINE(180)
	if ((tmp17)){
		HX_STACK_LINE(180)
		tmp18 = (bounds->height == (int)0);
	}
	else{
		HX_STACK_LINE(180)
		tmp18 = true;
	}
	HX_STACK_LINE(180)
	if ((tmp18)){
	}
	else{
		HX_STACK_LINE(186)
		{
			HX_STACK_LINE(186)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(186)
			Array< ::Dynamic > _g1 = graphics->__commands;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(186)
			while((true)){
				HX_STACK_LINE(186)
				bool tmp19 = (_g < _g1->length);		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(186)
				bool tmp20 = !(tmp19);		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(186)
				if ((tmp20)){
					HX_STACK_LINE(186)
					break;
				}
				HX_STACK_LINE(186)
				::openfl::display::DrawCommand tmp21 = _g1->__get(_g).StaticCast< ::openfl::display::DrawCommand >();		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(186)
				::openfl::display::DrawCommand command = tmp21;		HX_STACK_VAR(command,"command");
				HX_STACK_LINE(186)
				++(_g);
				HX_STACK_LINE(188)
				switch( (int)(command->__Index())){
					case (int)0: {
						HX_STACK_LINE(188)
						bool tmp22 = (::openfl::display::DrawCommand(command))->__Param(3);		HX_STACK_VAR(tmp22,"tmp22");
						HX_STACK_LINE(188)
						bool smooth = tmp22;		HX_STACK_VAR(smooth,"smooth");
						HX_STACK_LINE(188)
						bool tmp23 = (::openfl::display::DrawCommand(command))->__Param(2);		HX_STACK_VAR(tmp23,"tmp23");
						HX_STACK_LINE(188)
						bool repeat = tmp23;		HX_STACK_VAR(repeat,"repeat");
						HX_STACK_LINE(188)
						::openfl::geom::Matrix tmp24 = (::openfl::display::DrawCommand(command))->__Param(1);		HX_STACK_VAR(tmp24,"tmp24");
						HX_STACK_LINE(188)
						::openfl::geom::Matrix matrix = tmp24;		HX_STACK_VAR(matrix,"matrix");
						HX_STACK_LINE(188)
						::openfl::display::BitmapData tmp25 = (::openfl::display::DrawCommand(command))->__Param(0);		HX_STACK_VAR(tmp25,"tmp25");
						HX_STACK_LINE(188)
						::openfl::display::BitmapData bitmap = tmp25;		HX_STACK_VAR(bitmap,"bitmap");
						HX_STACK_LINE(190)
						{
							HX_STACK_LINE(192)
							::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::endFill();
							HX_STACK_LINE(193)
							bool tmp26 = (bitmap != null());		HX_STACK_VAR(tmp26,"tmp26");
							HX_STACK_LINE(193)
							::openfl::_internal::renderer::opengl::utils::FillType tmp27;		HX_STACK_VAR(tmp27,"tmp27");
							HX_STACK_LINE(193)
							if ((tmp26)){
								HX_STACK_LINE(193)
								::openfl::display::BitmapData tmp28 = bitmap;		HX_STACK_VAR(tmp28,"tmp28");
								HX_STACK_LINE(193)
								::openfl::geom::Matrix tmp29 = matrix;		HX_STACK_VAR(tmp29,"tmp29");
								HX_STACK_LINE(193)
								bool tmp30 = repeat;		HX_STACK_VAR(tmp30,"tmp30");
								HX_STACK_LINE(193)
								bool tmp31 = smooth;		HX_STACK_VAR(tmp31,"tmp31");
								HX_STACK_LINE(193)
								tmp27 = ::openfl::_internal::renderer::opengl::utils::FillType_obj::Texture(tmp28,tmp29,tmp30,tmp31);
							}
							else{
								HX_STACK_LINE(193)
								tmp27 = ::openfl::_internal::renderer::opengl::utils::FillType_obj::None;
							}
							HX_STACK_LINE(193)
							::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__fill = tmp27;
							HX_STACK_LINE(195)
							::openfl::_internal::renderer::opengl::utils::DrawPath tmp28 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentPath;		HX_STACK_VAR(tmp28,"tmp28");
							HX_STACK_LINE(195)
							int tmp29 = tmp28->points->length;		HX_STACK_VAR(tmp29,"tmp29");
							HX_STACK_LINE(195)
							bool tmp30 = (tmp29 == (int)0);		HX_STACK_VAR(tmp30,"tmp30");
							HX_STACK_LINE(195)
							if ((tmp30)){
								HX_STACK_LINE(196)
								{
									HX_STACK_LINE(196)
									::openfl::_internal::renderer::opengl::utils::DrawPath tmp31 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentPath;		HX_STACK_VAR(tmp31,"tmp31");
									HX_STACK_LINE(196)
									bool tmp32 = tmp31->isRemovable;		HX_STACK_VAR(tmp32,"tmp32");
									HX_STACK_LINE(196)
									bool tmp33;		HX_STACK_VAR(tmp33,"tmp33");
									HX_STACK_LINE(196)
									if ((tmp32)){
										HX_STACK_LINE(196)
										::openfl::_internal::renderer::opengl::utils::DrawPath tmp34 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentPath;		HX_STACK_VAR(tmp34,"tmp34");
										HX_STACK_LINE(196)
										::openfl::_internal::renderer::opengl::utils::DrawPath tmp35 = tmp34;		HX_STACK_VAR(tmp35,"tmp35");
										HX_STACK_LINE(196)
										int tmp36 = tmp35->points->length;		HX_STACK_VAR(tmp36,"tmp36");
										HX_STACK_LINE(196)
										int tmp37 = tmp36;		HX_STACK_VAR(tmp37,"tmp37");
										HX_STACK_LINE(196)
										tmp33 = (tmp37 == (int)0);
									}
									else{
										HX_STACK_LINE(196)
										tmp33 = false;
									}
									HX_STACK_LINE(196)
									if ((tmp33)){
										HX_STACK_LINE(196)
										::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__drawPaths->pop().StaticCast< ::openfl::_internal::renderer::opengl::utils::DrawPath >();
									}
									else{
										HX_STACK_LINE(196)
										::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::closePath();
									}
								}
								HX_STACK_LINE(197)
								::openfl::_internal::renderer::opengl::utils::DrawPath tmp31 = ::openfl::_internal::renderer::opengl::utils::DrawPath_obj::__new();		HX_STACK_VAR(tmp31,"tmp31");
								HX_STACK_LINE(197)
								::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentPath = tmp31;
								HX_STACK_LINE(198)
								::openfl::_internal::renderer::opengl::utils::DrawPath tmp32 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentPath;		HX_STACK_VAR(tmp32,"tmp32");
								HX_STACK_LINE(198)
								::openfl::_internal::renderer::opengl::utils::LineStyle tmp33 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__line;		HX_STACK_VAR(tmp33,"tmp33");
								HX_STACK_LINE(198)
								::openfl::_internal::renderer::opengl::utils::FillType tmp34 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__fill;		HX_STACK_VAR(tmp34,"tmp34");
								HX_STACK_LINE(198)
								int tmp35 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__fillIndex;		HX_STACK_VAR(tmp35,"tmp35");
								HX_STACK_LINE(198)
								int tmp36 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentWinding;		HX_STACK_VAR(tmp36,"tmp36");
								HX_STACK_LINE(198)
								tmp32->update(tmp33,tmp34,tmp35,tmp36);
								HX_STACK_LINE(199)
								::openfl::_internal::renderer::opengl::utils::DrawPath tmp37 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentPath;		HX_STACK_VAR(tmp37,"tmp37");
								HX_STACK_LINE(199)
								tmp37->points = Array_obj< Float >::__new();
								HX_STACK_LINE(200)
								::openfl::_internal::renderer::opengl::utils::DrawPath tmp38 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentPath;		HX_STACK_VAR(tmp38,"tmp38");
								HX_STACK_LINE(200)
								tmp38->type = ::openfl::_internal::renderer::opengl::utils::GraphicType_obj::Polygon;
								HX_STACK_LINE(201)
								::openfl::_internal::renderer::opengl::utils::DrawPath tmp39 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentPath;		HX_STACK_VAR(tmp39,"tmp39");
								HX_STACK_LINE(201)
								::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__drawPaths->push(tmp39);
							}
						}
					}
					;break;
					case (int)1: {
						HX_STACK_LINE(188)
						Float tmp22 = (::openfl::display::DrawCommand(command))->__Param(1);		HX_STACK_VAR(tmp22,"tmp22");
						HX_STACK_LINE(188)
						Float alpha = tmp22;		HX_STACK_VAR(alpha,"alpha");
						HX_STACK_LINE(188)
						int tmp23 = (::openfl::display::DrawCommand(command))->__Param(0);		HX_STACK_VAR(tmp23,"tmp23");
						HX_STACK_LINE(188)
						int rgb = tmp23;		HX_STACK_VAR(rgb,"rgb");
						HX_STACK_LINE(204)
						{
							HX_STACK_LINE(206)
							::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::endFill();
							HX_STACK_LINE(207)
							bool tmp24 = (alpha > (int)0);		HX_STACK_VAR(tmp24,"tmp24");
							HX_STACK_LINE(207)
							::openfl::_internal::renderer::opengl::utils::FillType tmp25;		HX_STACK_VAR(tmp25,"tmp25");
							HX_STACK_LINE(207)
							if ((tmp24)){
								HX_STACK_LINE(207)
								int tmp26 = (int(rgb) & int((int)16777215));		HX_STACK_VAR(tmp26,"tmp26");
								HX_STACK_LINE(207)
								Float tmp27 = alpha;		HX_STACK_VAR(tmp27,"tmp27");
								HX_STACK_LINE(207)
								tmp25 = ::openfl::_internal::renderer::opengl::utils::FillType_obj::Color(tmp26,tmp27);
							}
							else{
								HX_STACK_LINE(207)
								tmp25 = ::openfl::_internal::renderer::opengl::utils::FillType_obj::None;
							}
							HX_STACK_LINE(207)
							::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__fill = tmp25;
							HX_STACK_LINE(209)
							::openfl::_internal::renderer::opengl::utils::DrawPath tmp26 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentPath;		HX_STACK_VAR(tmp26,"tmp26");
							HX_STACK_LINE(209)
							int tmp27 = tmp26->points->length;		HX_STACK_VAR(tmp27,"tmp27");
							HX_STACK_LINE(209)
							bool tmp28 = (tmp27 == (int)0);		HX_STACK_VAR(tmp28,"tmp28");
							HX_STACK_LINE(209)
							if ((tmp28)){
								HX_STACK_LINE(210)
								{
									HX_STACK_LINE(210)
									::openfl::_internal::renderer::opengl::utils::DrawPath tmp29 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentPath;		HX_STACK_VAR(tmp29,"tmp29");
									HX_STACK_LINE(210)
									bool tmp30 = tmp29->isRemovable;		HX_STACK_VAR(tmp30,"tmp30");
									HX_STACK_LINE(210)
									bool tmp31;		HX_STACK_VAR(tmp31,"tmp31");
									HX_STACK_LINE(210)
									if ((tmp30)){
										HX_STACK_LINE(210)
										::openfl::_internal::renderer::opengl::utils::DrawPath tmp32 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentPath;		HX_STACK_VAR(tmp32,"tmp32");
										HX_STACK_LINE(210)
										::openfl::_internal::renderer::opengl::utils::DrawPath tmp33 = tmp32;		HX_STACK_VAR(tmp33,"tmp33");
										HX_STACK_LINE(210)
										int tmp34 = tmp33->points->length;		HX_STACK_VAR(tmp34,"tmp34");
										HX_STACK_LINE(210)
										int tmp35 = tmp34;		HX_STACK_VAR(tmp35,"tmp35");
										HX_STACK_LINE(210)
										tmp31 = (tmp35 == (int)0);
									}
									else{
										HX_STACK_LINE(210)
										tmp31 = false;
									}
									HX_STACK_LINE(210)
									if ((tmp31)){
										HX_STACK_LINE(210)
										::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__drawPaths->pop().StaticCast< ::openfl::_internal::renderer::opengl::utils::DrawPath >();
									}
									else{
										HX_STACK_LINE(210)
										::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::closePath();
									}
								}
								HX_STACK_LINE(211)
								::openfl::_internal::renderer::opengl::utils::DrawPath tmp29 = ::openfl::_internal::renderer::opengl::utils::DrawPath_obj::__new();		HX_STACK_VAR(tmp29,"tmp29");
								HX_STACK_LINE(211)
								::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentPath = tmp29;
								HX_STACK_LINE(212)
								::openfl::_internal::renderer::opengl::utils::DrawPath tmp30 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentPath;		HX_STACK_VAR(tmp30,"tmp30");
								HX_STACK_LINE(212)
								::openfl::_internal::renderer::opengl::utils::LineStyle tmp31 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__line;		HX_STACK_VAR(tmp31,"tmp31");
								HX_STACK_LINE(212)
								::openfl::_internal::renderer::opengl::utils::FillType tmp32 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__fill;		HX_STACK_VAR(tmp32,"tmp32");
								HX_STACK_LINE(212)
								int tmp33 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__fillIndex;		HX_STACK_VAR(tmp33,"tmp33");
								HX_STACK_LINE(212)
								int tmp34 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentWinding;		HX_STACK_VAR(tmp34,"tmp34");
								HX_STACK_LINE(212)
								tmp30->update(tmp31,tmp32,tmp33,tmp34);
								HX_STACK_LINE(213)
								::openfl::_internal::renderer::opengl::utils::DrawPath tmp35 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentPath;		HX_STACK_VAR(tmp35,"tmp35");
								HX_STACK_LINE(213)
								tmp35->points = Array_obj< Float >::__new();
								HX_STACK_LINE(214)
								::openfl::_internal::renderer::opengl::utils::DrawPath tmp36 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentPath;		HX_STACK_VAR(tmp36,"tmp36");
								HX_STACK_LINE(214)
								tmp36->type = ::openfl::_internal::renderer::opengl::utils::GraphicType_obj::Polygon;
								HX_STACK_LINE(215)
								::openfl::_internal::renderer::opengl::utils::DrawPath tmp37 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentPath;		HX_STACK_VAR(tmp37,"tmp37");
								HX_STACK_LINE(215)
								::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__drawPaths->push(tmp37);
							}
						}
					}
					;break;
					case (int)3: {
						HX_STACK_LINE(188)
						Float tmp22 = (::openfl::display::DrawCommand(command))->__Param(5);		HX_STACK_VAR(tmp22,"tmp22");
						HX_STACK_LINE(188)
						Float y = tmp22;		HX_STACK_VAR(y,"y");
						HX_STACK_LINE(188)
						Float tmp23 = (::openfl::display::DrawCommand(command))->__Param(4);		HX_STACK_VAR(tmp23,"tmp23");
						HX_STACK_LINE(188)
						Float x = tmp23;		HX_STACK_VAR(x,"x");
						HX_STACK_LINE(188)
						Float tmp24 = (::openfl::display::DrawCommand(command))->__Param(3);		HX_STACK_VAR(tmp24,"tmp24");
						HX_STACK_LINE(188)
						Float cy2 = tmp24;		HX_STACK_VAR(cy2,"cy2");
						HX_STACK_LINE(188)
						Float tmp25 = (::openfl::display::DrawCommand(command))->__Param(2);		HX_STACK_VAR(tmp25,"tmp25");
						HX_STACK_LINE(188)
						Float cx2 = tmp25;		HX_STACK_VAR(cx2,"cx2");
						HX_STACK_LINE(188)
						Float tmp26 = (::openfl::display::DrawCommand(command))->__Param(1);		HX_STACK_VAR(tmp26,"tmp26");
						HX_STACK_LINE(188)
						Float cy = tmp26;		HX_STACK_VAR(cy,"cy");
						HX_STACK_LINE(188)
						Float tmp27 = (::openfl::display::DrawCommand(command))->__Param(0);		HX_STACK_VAR(tmp27,"tmp27");
						HX_STACK_LINE(188)
						Float cx = tmp27;		HX_STACK_VAR(cx,"cx");
						HX_STACK_LINE(220)
						{
							HX_STACK_LINE(220)
							::openfl::_internal::renderer::opengl::utils::DrawPath tmp28 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentPath;		HX_STACK_VAR(tmp28,"tmp28");
							HX_STACK_LINE(220)
							int tmp29 = tmp28->points->length;		HX_STACK_VAR(tmp29,"tmp29");
							HX_STACK_LINE(220)
							bool tmp30 = (tmp29 == (int)0);		HX_STACK_VAR(tmp30,"tmp30");
							HX_STACK_LINE(220)
							if ((tmp30)){
								HX_STACK_LINE(220)
								{
									HX_STACK_LINE(220)
									::openfl::_internal::renderer::opengl::utils::DrawPath tmp31 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentPath;		HX_STACK_VAR(tmp31,"tmp31");
									HX_STACK_LINE(220)
									bool tmp32 = tmp31->isRemovable;		HX_STACK_VAR(tmp32,"tmp32");
									HX_STACK_LINE(220)
									bool tmp33;		HX_STACK_VAR(tmp33,"tmp33");
									HX_STACK_LINE(220)
									if ((tmp32)){
										HX_STACK_LINE(220)
										::openfl::_internal::renderer::opengl::utils::DrawPath tmp34 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentPath;		HX_STACK_VAR(tmp34,"tmp34");
										HX_STACK_LINE(220)
										::openfl::_internal::renderer::opengl::utils::DrawPath tmp35 = tmp34;		HX_STACK_VAR(tmp35,"tmp35");
										HX_STACK_LINE(220)
										int tmp36 = tmp35->points->length;		HX_STACK_VAR(tmp36,"tmp36");
										HX_STACK_LINE(220)
										int tmp37 = tmp36;		HX_STACK_VAR(tmp37,"tmp37");
										HX_STACK_LINE(220)
										tmp33 = (tmp37 == (int)0);
									}
									else{
										HX_STACK_LINE(220)
										tmp33 = false;
									}
									HX_STACK_LINE(220)
									if ((tmp33)){
										HX_STACK_LINE(220)
										::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__drawPaths->pop().StaticCast< ::openfl::_internal::renderer::opengl::utils::DrawPath >();
									}
									else{
										HX_STACK_LINE(220)
										::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::closePath();
									}
								}
								HX_STACK_LINE(220)
								::openfl::_internal::renderer::opengl::utils::DrawPath tmp31 = ::openfl::_internal::renderer::opengl::utils::DrawPath_obj::__new();		HX_STACK_VAR(tmp31,"tmp31");
								HX_STACK_LINE(220)
								::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentPath = tmp31;
								HX_STACK_LINE(220)
								::openfl::_internal::renderer::opengl::utils::DrawPath tmp32 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentPath;		HX_STACK_VAR(tmp32,"tmp32");
								HX_STACK_LINE(220)
								::openfl::_internal::renderer::opengl::utils::LineStyle tmp33 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__line;		HX_STACK_VAR(tmp33,"tmp33");
								HX_STACK_LINE(220)
								::openfl::_internal::renderer::opengl::utils::FillType tmp34 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__fill;		HX_STACK_VAR(tmp34,"tmp34");
								HX_STACK_LINE(220)
								int tmp35 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__fillIndex;		HX_STACK_VAR(tmp35,"tmp35");
								HX_STACK_LINE(220)
								int tmp36 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentWinding;		HX_STACK_VAR(tmp36,"tmp36");
								HX_STACK_LINE(220)
								tmp32->update(tmp33,tmp34,tmp35,tmp36);
								HX_STACK_LINE(220)
								::openfl::_internal::renderer::opengl::utils::DrawPath tmp37 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentPath;		HX_STACK_VAR(tmp37,"tmp37");
								HX_STACK_LINE(220)
								tmp37->type = ::openfl::_internal::renderer::opengl::utils::GraphicType_obj::Polygon;
								HX_STACK_LINE(220)
								::openfl::_internal::renderer::opengl::utils::DrawPath tmp38 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentPath;		HX_STACK_VAR(tmp38,"tmp38");
								HX_STACK_LINE(220)
								tmp38->points->push((int)0);
								HX_STACK_LINE(220)
								::openfl::_internal::renderer::opengl::utils::DrawPath tmp39 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentPath;		HX_STACK_VAR(tmp39,"tmp39");
								HX_STACK_LINE(220)
								tmp39->points->push((int)0);
								HX_STACK_LINE(220)
								::openfl::_internal::renderer::opengl::utils::DrawPath tmp40 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentPath;		HX_STACK_VAR(tmp40,"tmp40");
								HX_STACK_LINE(220)
								::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__drawPaths->push(tmp40);
							}
							HX_STACK_LINE(220)
							{
								HX_STACK_LINE(220)
								::openfl::_internal::renderer::opengl::utils::DrawPath tmp31 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentPath;		HX_STACK_VAR(tmp31,"tmp31");
								HX_STACK_LINE(220)
								Array< Float > points = tmp31->points;		HX_STACK_VAR(points,"points");
								HX_STACK_LINE(220)
								int n = (int)20;		HX_STACK_VAR(n,"n");
								HX_STACK_LINE(220)
								Float dt = (int)0;		HX_STACK_VAR(dt,"dt");
								HX_STACK_LINE(220)
								Float dt2 = (int)0;		HX_STACK_VAR(dt2,"dt2");
								HX_STACK_LINE(220)
								Float dt3 = (int)0;		HX_STACK_VAR(dt3,"dt3");
								HX_STACK_LINE(220)
								Float t2 = (int)0;		HX_STACK_VAR(t2,"t2");
								HX_STACK_LINE(220)
								Float t3 = (int)0;		HX_STACK_VAR(t3,"t3");
								HX_STACK_LINE(220)
								int tmp32 = (points->length - (int)2);		HX_STACK_VAR(tmp32,"tmp32");
								HX_STACK_LINE(220)
								Float tmp33 = points->__get(tmp32);		HX_STACK_VAR(tmp33,"tmp33");
								HX_STACK_LINE(220)
								Float fromX = tmp33;		HX_STACK_VAR(fromX,"fromX");
								HX_STACK_LINE(220)
								int tmp34 = (points->length - (int)1);		HX_STACK_VAR(tmp34,"tmp34");
								HX_STACK_LINE(220)
								Float tmp35 = points->__get(tmp34);		HX_STACK_VAR(tmp35,"tmp35");
								HX_STACK_LINE(220)
								Float fromY = tmp35;		HX_STACK_VAR(fromY,"fromY");
								HX_STACK_LINE(220)
								Float px = (int)0;		HX_STACK_VAR(px,"px");
								HX_STACK_LINE(220)
								Float py = (int)0;		HX_STACK_VAR(py,"py");
								HX_STACK_LINE(220)
								Float tmp36 = (int)0;		HX_STACK_VAR(tmp36,"tmp36");
								HX_STACK_LINE(220)
								{
									HX_STACK_LINE(220)
									int _g11 = (int)1;		HX_STACK_VAR(_g11,"_g11");
									HX_STACK_LINE(220)
									int tmp37 = (n + (int)1);		HX_STACK_VAR(tmp37,"tmp37");
									HX_STACK_LINE(220)
									int _g2 = tmp37;		HX_STACK_VAR(_g2,"_g2");
									HX_STACK_LINE(220)
									while((true)){
										HX_STACK_LINE(220)
										bool tmp38 = (_g11 < _g2);		HX_STACK_VAR(tmp38,"tmp38");
										HX_STACK_LINE(220)
										bool tmp39 = !(tmp38);		HX_STACK_VAR(tmp39,"tmp39");
										HX_STACK_LINE(220)
										if ((tmp39)){
											HX_STACK_LINE(220)
											break;
										}
										HX_STACK_LINE(220)
										int tmp40 = (_g11)++;		HX_STACK_VAR(tmp40,"tmp40");
										HX_STACK_LINE(220)
										int i = tmp40;		HX_STACK_VAR(i,"i");
										HX_STACK_LINE(220)
										Float tmp41 = (Float(i) / Float(n));		HX_STACK_VAR(tmp41,"tmp41");
										HX_STACK_LINE(220)
										tmp36 = tmp41;
										HX_STACK_LINE(220)
										Float tmp42 = ((int)1 - tmp36);		HX_STACK_VAR(tmp42,"tmp42");
										HX_STACK_LINE(220)
										dt = tmp42;
										HX_STACK_LINE(220)
										Float tmp43 = (dt * dt);		HX_STACK_VAR(tmp43,"tmp43");
										HX_STACK_LINE(220)
										dt2 = tmp43;
										HX_STACK_LINE(220)
										Float tmp44 = (dt2 * dt);		HX_STACK_VAR(tmp44,"tmp44");
										HX_STACK_LINE(220)
										dt3 = tmp44;
										HX_STACK_LINE(220)
										Float tmp45 = (tmp36 * tmp36);		HX_STACK_VAR(tmp45,"tmp45");
										HX_STACK_LINE(220)
										t2 = tmp45;
										HX_STACK_LINE(220)
										Float tmp46 = (t2 * tmp36);		HX_STACK_VAR(tmp46,"tmp46");
										HX_STACK_LINE(220)
										t3 = tmp46;
										HX_STACK_LINE(220)
										Float tmp47 = (dt3 * fromX);		HX_STACK_VAR(tmp47,"tmp47");
										HX_STACK_LINE(220)
										Float tmp48 = ((int)3 * dt2);		HX_STACK_VAR(tmp48,"tmp48");
										HX_STACK_LINE(220)
										Float tmp49 = tmp36;		HX_STACK_VAR(tmp49,"tmp49");
										HX_STACK_LINE(220)
										Float tmp50 = (tmp48 * tmp49);		HX_STACK_VAR(tmp50,"tmp50");
										HX_STACK_LINE(220)
										Float tmp51 = cx;		HX_STACK_VAR(tmp51,"tmp51");
										HX_STACK_LINE(220)
										Float tmp52 = (tmp50 * tmp51);		HX_STACK_VAR(tmp52,"tmp52");
										HX_STACK_LINE(220)
										Float tmp53 = (tmp47 + tmp52);		HX_STACK_VAR(tmp53,"tmp53");
										HX_STACK_LINE(220)
										Float tmp54 = ((int)3 * dt);		HX_STACK_VAR(tmp54,"tmp54");
										HX_STACK_LINE(220)
										Float tmp55 = t2;		HX_STACK_VAR(tmp55,"tmp55");
										HX_STACK_LINE(220)
										Float tmp56 = (tmp54 * tmp55);		HX_STACK_VAR(tmp56,"tmp56");
										HX_STACK_LINE(220)
										Float tmp57 = cx2;		HX_STACK_VAR(tmp57,"tmp57");
										HX_STACK_LINE(220)
										Float tmp58 = (tmp56 * tmp57);		HX_STACK_VAR(tmp58,"tmp58");
										HX_STACK_LINE(220)
										Float tmp59 = (tmp53 + tmp58);		HX_STACK_VAR(tmp59,"tmp59");
										HX_STACK_LINE(220)
										Float tmp60 = (t3 * x);		HX_STACK_VAR(tmp60,"tmp60");
										HX_STACK_LINE(220)
										Float tmp61 = (tmp59 + tmp60);		HX_STACK_VAR(tmp61,"tmp61");
										HX_STACK_LINE(220)
										px = tmp61;
										HX_STACK_LINE(220)
										Float tmp62 = (dt3 * fromY);		HX_STACK_VAR(tmp62,"tmp62");
										HX_STACK_LINE(220)
										Float tmp63 = ((int)3 * dt2);		HX_STACK_VAR(tmp63,"tmp63");
										HX_STACK_LINE(220)
										Float tmp64 = tmp36;		HX_STACK_VAR(tmp64,"tmp64");
										HX_STACK_LINE(220)
										Float tmp65 = (tmp63 * tmp64);		HX_STACK_VAR(tmp65,"tmp65");
										HX_STACK_LINE(220)
										Float tmp66 = cy;		HX_STACK_VAR(tmp66,"tmp66");
										HX_STACK_LINE(220)
										Float tmp67 = (tmp65 * tmp66);		HX_STACK_VAR(tmp67,"tmp67");
										HX_STACK_LINE(220)
										Float tmp68 = (tmp62 + tmp67);		HX_STACK_VAR(tmp68,"tmp68");
										HX_STACK_LINE(220)
										Float tmp69 = ((int)3 * dt);		HX_STACK_VAR(tmp69,"tmp69");
										HX_STACK_LINE(220)
										Float tmp70 = t2;		HX_STACK_VAR(tmp70,"tmp70");
										HX_STACK_LINE(220)
										Float tmp71 = (tmp69 * tmp70);		HX_STACK_VAR(tmp71,"tmp71");
										HX_STACK_LINE(220)
										Float tmp72 = cy2;		HX_STACK_VAR(tmp72,"tmp72");
										HX_STACK_LINE(220)
										Float tmp73 = (tmp71 * tmp72);		HX_STACK_VAR(tmp73,"tmp73");
										HX_STACK_LINE(220)
										Float tmp74 = (tmp68 + tmp73);		HX_STACK_VAR(tmp74,"tmp74");
										HX_STACK_LINE(220)
										Float tmp75 = (t3 * y);		HX_STACK_VAR(tmp75,"tmp75");
										HX_STACK_LINE(220)
										Float tmp76 = (tmp74 + tmp75);		HX_STACK_VAR(tmp76,"tmp76");
										HX_STACK_LINE(220)
										py = tmp76;
										HX_STACK_LINE(220)
										Float tmp77 = px;		HX_STACK_VAR(tmp77,"tmp77");
										HX_STACK_LINE(220)
										points->push(tmp77);
										HX_STACK_LINE(220)
										Float tmp78 = py;		HX_STACK_VAR(tmp78,"tmp78");
										HX_STACK_LINE(220)
										points->push(tmp78);
									}
								}
							}
						}
					}
					;break;
					case (int)4: {
						HX_STACK_LINE(188)
						Float tmp22 = (::openfl::display::DrawCommand(command))->__Param(3);		HX_STACK_VAR(tmp22,"tmp22");
						HX_STACK_LINE(188)
						Float y = tmp22;		HX_STACK_VAR(y,"y");
						HX_STACK_LINE(188)
						Float tmp23 = (::openfl::display::DrawCommand(command))->__Param(2);		HX_STACK_VAR(tmp23,"tmp23");
						HX_STACK_LINE(188)
						Float x = tmp23;		HX_STACK_VAR(x,"x");
						HX_STACK_LINE(188)
						Float tmp24 = (::openfl::display::DrawCommand(command))->__Param(1);		HX_STACK_VAR(tmp24,"tmp24");
						HX_STACK_LINE(188)
						Float cy = tmp24;		HX_STACK_VAR(cy,"cy");
						HX_STACK_LINE(188)
						Float tmp25 = (::openfl::display::DrawCommand(command))->__Param(0);		HX_STACK_VAR(tmp25,"tmp25");
						HX_STACK_LINE(188)
						Float cx = tmp25;		HX_STACK_VAR(cx,"cx");
						HX_STACK_LINE(224)
						{
							HX_STACK_LINE(224)
							::openfl::_internal::renderer::opengl::utils::DrawPath tmp26 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentPath;		HX_STACK_VAR(tmp26,"tmp26");
							HX_STACK_LINE(224)
							int tmp27 = tmp26->points->length;		HX_STACK_VAR(tmp27,"tmp27");
							HX_STACK_LINE(224)
							bool tmp28 = (tmp27 == (int)0);		HX_STACK_VAR(tmp28,"tmp28");
							HX_STACK_LINE(224)
							if ((tmp28)){
								HX_STACK_LINE(224)
								{
									HX_STACK_LINE(224)
									::openfl::_internal::renderer::opengl::utils::DrawPath tmp29 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentPath;		HX_STACK_VAR(tmp29,"tmp29");
									HX_STACK_LINE(224)
									bool tmp30 = tmp29->isRemovable;		HX_STACK_VAR(tmp30,"tmp30");
									HX_STACK_LINE(224)
									bool tmp31;		HX_STACK_VAR(tmp31,"tmp31");
									HX_STACK_LINE(224)
									if ((tmp30)){
										HX_STACK_LINE(224)
										::openfl::_internal::renderer::opengl::utils::DrawPath tmp32 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentPath;		HX_STACK_VAR(tmp32,"tmp32");
										HX_STACK_LINE(224)
										::openfl::_internal::renderer::opengl::utils::DrawPath tmp33 = tmp32;		HX_STACK_VAR(tmp33,"tmp33");
										HX_STACK_LINE(224)
										int tmp34 = tmp33->points->length;		HX_STACK_VAR(tmp34,"tmp34");
										HX_STACK_LINE(224)
										int tmp35 = tmp34;		HX_STACK_VAR(tmp35,"tmp35");
										HX_STACK_LINE(224)
										tmp31 = (tmp35 == (int)0);
									}
									else{
										HX_STACK_LINE(224)
										tmp31 = false;
									}
									HX_STACK_LINE(224)
									if ((tmp31)){
										HX_STACK_LINE(224)
										::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__drawPaths->pop().StaticCast< ::openfl::_internal::renderer::opengl::utils::DrawPath >();
									}
									else{
										HX_STACK_LINE(224)
										::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::closePath();
									}
								}
								HX_STACK_LINE(224)
								::openfl::_internal::renderer::opengl::utils::DrawPath tmp29 = ::openfl::_internal::renderer::opengl::utils::DrawPath_obj::__new();		HX_STACK_VAR(tmp29,"tmp29");
								HX_STACK_LINE(224)
								::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentPath = tmp29;
								HX_STACK_LINE(224)
								::openfl::_internal::renderer::opengl::utils::DrawPath tmp30 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentPath;		HX_STACK_VAR(tmp30,"tmp30");
								HX_STACK_LINE(224)
								::openfl::_internal::renderer::opengl::utils::LineStyle tmp31 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__line;		HX_STACK_VAR(tmp31,"tmp31");
								HX_STACK_LINE(224)
								::openfl::_internal::renderer::opengl::utils::FillType tmp32 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__fill;		HX_STACK_VAR(tmp32,"tmp32");
								HX_STACK_LINE(224)
								int tmp33 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__fillIndex;		HX_STACK_VAR(tmp33,"tmp33");
								HX_STACK_LINE(224)
								int tmp34 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentWinding;		HX_STACK_VAR(tmp34,"tmp34");
								HX_STACK_LINE(224)
								tmp30->update(tmp31,tmp32,tmp33,tmp34);
								HX_STACK_LINE(224)
								::openfl::_internal::renderer::opengl::utils::DrawPath tmp35 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentPath;		HX_STACK_VAR(tmp35,"tmp35");
								HX_STACK_LINE(224)
								tmp35->type = ::openfl::_internal::renderer::opengl::utils::GraphicType_obj::Polygon;
								HX_STACK_LINE(224)
								::openfl::_internal::renderer::opengl::utils::DrawPath tmp36 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentPath;		HX_STACK_VAR(tmp36,"tmp36");
								HX_STACK_LINE(224)
								tmp36->points->push((int)0);
								HX_STACK_LINE(224)
								::openfl::_internal::renderer::opengl::utils::DrawPath tmp37 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentPath;		HX_STACK_VAR(tmp37,"tmp37");
								HX_STACK_LINE(224)
								tmp37->points->push((int)0);
								HX_STACK_LINE(224)
								::openfl::_internal::renderer::opengl::utils::DrawPath tmp38 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentPath;		HX_STACK_VAR(tmp38,"tmp38");
								HX_STACK_LINE(224)
								::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__drawPaths->push(tmp38);
							}
							HX_STACK_LINE(224)
							::openfl::_internal::renderer::opengl::utils::DrawPath tmp29 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentPath;		HX_STACK_VAR(tmp29,"tmp29");
							HX_STACK_LINE(224)
							Float tmp30 = cx;		HX_STACK_VAR(tmp30,"tmp30");
							HX_STACK_LINE(224)
							Float tmp31 = cy;		HX_STACK_VAR(tmp31,"tmp31");
							HX_STACK_LINE(224)
							Float tmp32 = x;		HX_STACK_VAR(tmp32,"tmp32");
							HX_STACK_LINE(224)
							Float tmp33 = y;		HX_STACK_VAR(tmp33,"tmp33");
							HX_STACK_LINE(224)
							::openfl::_internal::renderer::GraphicsPaths_obj::curveTo(tmp29->points,tmp30,tmp31,tmp32,tmp33);
						}
					}
					;break;
					case (int)5: {
						HX_STACK_LINE(188)
						Float tmp22 = (::openfl::display::DrawCommand(command))->__Param(2);		HX_STACK_VAR(tmp22,"tmp22");
						HX_STACK_LINE(188)
						Float radius = tmp22;		HX_STACK_VAR(radius,"radius");
						HX_STACK_LINE(188)
						Float tmp23 = (::openfl::display::DrawCommand(command))->__Param(1);		HX_STACK_VAR(tmp23,"tmp23");
						HX_STACK_LINE(188)
						Float y = tmp23;		HX_STACK_VAR(y,"y");
						HX_STACK_LINE(188)
						Float tmp24 = (::openfl::display::DrawCommand(command))->__Param(0);		HX_STACK_VAR(tmp24,"tmp24");
						HX_STACK_LINE(188)
						Float x = tmp24;		HX_STACK_VAR(x,"x");
						HX_STACK_LINE(226)
						{
							HX_STACK_LINE(228)
							{
								HX_STACK_LINE(228)
								::openfl::_internal::renderer::opengl::utils::DrawPath tmp25 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentPath;		HX_STACK_VAR(tmp25,"tmp25");
								HX_STACK_LINE(228)
								bool tmp26 = tmp25->isRemovable;		HX_STACK_VAR(tmp26,"tmp26");
								HX_STACK_LINE(228)
								bool tmp27;		HX_STACK_VAR(tmp27,"tmp27");
								HX_STACK_LINE(228)
								if ((tmp26)){
									HX_STACK_LINE(228)
									::openfl::_internal::renderer::opengl::utils::DrawPath tmp28 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentPath;		HX_STACK_VAR(tmp28,"tmp28");
									HX_STACK_LINE(228)
									::openfl::_internal::renderer::opengl::utils::DrawPath tmp29 = tmp28;		HX_STACK_VAR(tmp29,"tmp29");
									HX_STACK_LINE(228)
									int tmp30 = tmp29->points->length;		HX_STACK_VAR(tmp30,"tmp30");
									HX_STACK_LINE(228)
									int tmp31 = tmp30;		HX_STACK_VAR(tmp31,"tmp31");
									HX_STACK_LINE(228)
									tmp27 = (tmp31 == (int)0);
								}
								else{
									HX_STACK_LINE(228)
									tmp27 = false;
								}
								HX_STACK_LINE(228)
								if ((tmp27)){
									HX_STACK_LINE(228)
									::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__drawPaths->pop().StaticCast< ::openfl::_internal::renderer::opengl::utils::DrawPath >();
								}
								else{
									HX_STACK_LINE(228)
									::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::closePath();
								}
							}
							HX_STACK_LINE(230)
							::openfl::_internal::renderer::opengl::utils::DrawPath tmp25 = ::openfl::_internal::renderer::opengl::utils::DrawPath_obj::__new();		HX_STACK_VAR(tmp25,"tmp25");
							HX_STACK_LINE(230)
							::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentPath = tmp25;
							HX_STACK_LINE(231)
							::openfl::_internal::renderer::opengl::utils::DrawPath tmp26 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentPath;		HX_STACK_VAR(tmp26,"tmp26");
							HX_STACK_LINE(231)
							::openfl::_internal::renderer::opengl::utils::LineStyle tmp27 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__line;		HX_STACK_VAR(tmp27,"tmp27");
							HX_STACK_LINE(231)
							::openfl::_internal::renderer::opengl::utils::FillType tmp28 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__fill;		HX_STACK_VAR(tmp28,"tmp28");
							HX_STACK_LINE(231)
							int tmp29 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__fillIndex;		HX_STACK_VAR(tmp29,"tmp29");
							HX_STACK_LINE(231)
							int tmp30 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentWinding;		HX_STACK_VAR(tmp30,"tmp30");
							HX_STACK_LINE(231)
							tmp26->update(tmp27,tmp28,tmp29,tmp30);
							HX_STACK_LINE(232)
							::openfl::_internal::renderer::opengl::utils::DrawPath tmp31 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentPath;		HX_STACK_VAR(tmp31,"tmp31");
							HX_STACK_LINE(232)
							tmp31->type = ::openfl::_internal::renderer::opengl::utils::GraphicType_obj::Circle;
							HX_STACK_LINE(233)
							::openfl::_internal::renderer::opengl::utils::DrawPath tmp32 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentPath;		HX_STACK_VAR(tmp32,"tmp32");
							HX_STACK_LINE(233)
							tmp32->points = Array_obj< Float >::__new().Add(x).Add(y).Add(radius);
							HX_STACK_LINE(235)
							::openfl::_internal::renderer::opengl::utils::DrawPath tmp33 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentPath;		HX_STACK_VAR(tmp33,"tmp33");
							HX_STACK_LINE(235)
							::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__drawPaths->push(tmp33);
						}
					}
					;break;
					case (int)6: {
						HX_STACK_LINE(188)
						Float tmp22 = (::openfl::display::DrawCommand(command))->__Param(3);		HX_STACK_VAR(tmp22,"tmp22");
						HX_STACK_LINE(188)
						Float height = tmp22;		HX_STACK_VAR(height,"height");
						HX_STACK_LINE(188)
						Float tmp23 = (::openfl::display::DrawCommand(command))->__Param(2);		HX_STACK_VAR(tmp23,"tmp23");
						HX_STACK_LINE(188)
						Float width = tmp23;		HX_STACK_VAR(width,"width");
						HX_STACK_LINE(188)
						Float tmp24 = (::openfl::display::DrawCommand(command))->__Param(1);		HX_STACK_VAR(tmp24,"tmp24");
						HX_STACK_LINE(188)
						Float y = tmp24;		HX_STACK_VAR(y,"y");
						HX_STACK_LINE(188)
						Float tmp25 = (::openfl::display::DrawCommand(command))->__Param(0);		HX_STACK_VAR(tmp25,"tmp25");
						HX_STACK_LINE(188)
						Float x = tmp25;		HX_STACK_VAR(x,"x");
						HX_STACK_LINE(237)
						{
							HX_STACK_LINE(239)
							{
								HX_STACK_LINE(239)
								::openfl::_internal::renderer::opengl::utils::DrawPath tmp26 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentPath;		HX_STACK_VAR(tmp26,"tmp26");
								HX_STACK_LINE(239)
								bool tmp27 = tmp26->isRemovable;		HX_STACK_VAR(tmp27,"tmp27");
								HX_STACK_LINE(239)
								bool tmp28;		HX_STACK_VAR(tmp28,"tmp28");
								HX_STACK_LINE(239)
								if ((tmp27)){
									HX_STACK_LINE(239)
									::openfl::_internal::renderer::opengl::utils::DrawPath tmp29 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentPath;		HX_STACK_VAR(tmp29,"tmp29");
									HX_STACK_LINE(239)
									::openfl::_internal::renderer::opengl::utils::DrawPath tmp30 = tmp29;		HX_STACK_VAR(tmp30,"tmp30");
									HX_STACK_LINE(239)
									int tmp31 = tmp30->points->length;		HX_STACK_VAR(tmp31,"tmp31");
									HX_STACK_LINE(239)
									int tmp32 = tmp31;		HX_STACK_VAR(tmp32,"tmp32");
									HX_STACK_LINE(239)
									tmp28 = (tmp32 == (int)0);
								}
								else{
									HX_STACK_LINE(239)
									tmp28 = false;
								}
								HX_STACK_LINE(239)
								if ((tmp28)){
									HX_STACK_LINE(239)
									::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__drawPaths->pop().StaticCast< ::openfl::_internal::renderer::opengl::utils::DrawPath >();
								}
								else{
									HX_STACK_LINE(239)
									::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::closePath();
								}
							}
							HX_STACK_LINE(241)
							::openfl::_internal::renderer::opengl::utils::DrawPath tmp26 = ::openfl::_internal::renderer::opengl::utils::DrawPath_obj::__new();		HX_STACK_VAR(tmp26,"tmp26");
							HX_STACK_LINE(241)
							::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentPath = tmp26;
							HX_STACK_LINE(242)
							::openfl::_internal::renderer::opengl::utils::DrawPath tmp27 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentPath;		HX_STACK_VAR(tmp27,"tmp27");
							HX_STACK_LINE(242)
							::openfl::_internal::renderer::opengl::utils::LineStyle tmp28 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__line;		HX_STACK_VAR(tmp28,"tmp28");
							HX_STACK_LINE(242)
							::openfl::_internal::renderer::opengl::utils::FillType tmp29 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__fill;		HX_STACK_VAR(tmp29,"tmp29");
							HX_STACK_LINE(242)
							int tmp30 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__fillIndex;		HX_STACK_VAR(tmp30,"tmp30");
							HX_STACK_LINE(242)
							int tmp31 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentWinding;		HX_STACK_VAR(tmp31,"tmp31");
							HX_STACK_LINE(242)
							tmp27->update(tmp28,tmp29,tmp30,tmp31);
							HX_STACK_LINE(243)
							::openfl::_internal::renderer::opengl::utils::DrawPath tmp32 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentPath;		HX_STACK_VAR(tmp32,"tmp32");
							HX_STACK_LINE(243)
							tmp32->type = ::openfl::_internal::renderer::opengl::utils::GraphicType_obj::Ellipse;
							HX_STACK_LINE(244)
							::openfl::_internal::renderer::opengl::utils::DrawPath tmp33 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentPath;		HX_STACK_VAR(tmp33,"tmp33");
							HX_STACK_LINE(244)
							tmp33->points = Array_obj< Float >::__new().Add(x).Add(y).Add(width).Add(height);
							HX_STACK_LINE(246)
							::openfl::_internal::renderer::opengl::utils::DrawPath tmp34 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentPath;		HX_STACK_VAR(tmp34,"tmp34");
							HX_STACK_LINE(246)
							::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__drawPaths->push(tmp34);
						}
					}
					;break;
					case (int)7: {
						HX_STACK_LINE(188)
						Float tmp22 = (::openfl::display::DrawCommand(command))->__Param(3);		HX_STACK_VAR(tmp22,"tmp22");
						HX_STACK_LINE(188)
						Float height = tmp22;		HX_STACK_VAR(height,"height");
						HX_STACK_LINE(188)
						Float tmp23 = (::openfl::display::DrawCommand(command))->__Param(2);		HX_STACK_VAR(tmp23,"tmp23");
						HX_STACK_LINE(188)
						Float width = tmp23;		HX_STACK_VAR(width,"width");
						HX_STACK_LINE(188)
						Float tmp24 = (::openfl::display::DrawCommand(command))->__Param(1);		HX_STACK_VAR(tmp24,"tmp24");
						HX_STACK_LINE(188)
						Float y = tmp24;		HX_STACK_VAR(y,"y");
						HX_STACK_LINE(188)
						Float tmp25 = (::openfl::display::DrawCommand(command))->__Param(0);		HX_STACK_VAR(tmp25,"tmp25");
						HX_STACK_LINE(188)
						Float x = tmp25;		HX_STACK_VAR(x,"x");
						HX_STACK_LINE(248)
						{
							HX_STACK_LINE(250)
							{
								HX_STACK_LINE(250)
								::openfl::_internal::renderer::opengl::utils::DrawPath tmp26 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentPath;		HX_STACK_VAR(tmp26,"tmp26");
								HX_STACK_LINE(250)
								bool tmp27 = tmp26->isRemovable;		HX_STACK_VAR(tmp27,"tmp27");
								HX_STACK_LINE(250)
								bool tmp28;		HX_STACK_VAR(tmp28,"tmp28");
								HX_STACK_LINE(250)
								if ((tmp27)){
									HX_STACK_LINE(250)
									::openfl::_internal::renderer::opengl::utils::DrawPath tmp29 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentPath;		HX_STACK_VAR(tmp29,"tmp29");
									HX_STACK_LINE(250)
									::openfl::_internal::renderer::opengl::utils::DrawPath tmp30 = tmp29;		HX_STACK_VAR(tmp30,"tmp30");
									HX_STACK_LINE(250)
									int tmp31 = tmp30->points->length;		HX_STACK_VAR(tmp31,"tmp31");
									HX_STACK_LINE(250)
									int tmp32 = tmp31;		HX_STACK_VAR(tmp32,"tmp32");
									HX_STACK_LINE(250)
									tmp28 = (tmp32 == (int)0);
								}
								else{
									HX_STACK_LINE(250)
									tmp28 = false;
								}
								HX_STACK_LINE(250)
								if ((tmp28)){
									HX_STACK_LINE(250)
									::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__drawPaths->pop().StaticCast< ::openfl::_internal::renderer::opengl::utils::DrawPath >();
								}
								else{
									HX_STACK_LINE(250)
									::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::closePath();
								}
							}
							HX_STACK_LINE(252)
							::openfl::_internal::renderer::opengl::utils::DrawPath tmp26 = ::openfl::_internal::renderer::opengl::utils::DrawPath_obj::__new();		HX_STACK_VAR(tmp26,"tmp26");
							HX_STACK_LINE(252)
							::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentPath = tmp26;
							HX_STACK_LINE(253)
							::openfl::_internal::renderer::opengl::utils::DrawPath tmp27 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentPath;		HX_STACK_VAR(tmp27,"tmp27");
							HX_STACK_LINE(253)
							::openfl::_internal::renderer::opengl::utils::LineStyle tmp28 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__line;		HX_STACK_VAR(tmp28,"tmp28");
							HX_STACK_LINE(253)
							::openfl::_internal::renderer::opengl::utils::FillType tmp29 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__fill;		HX_STACK_VAR(tmp29,"tmp29");
							HX_STACK_LINE(253)
							int tmp30 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__fillIndex;		HX_STACK_VAR(tmp30,"tmp30");
							HX_STACK_LINE(253)
							int tmp31 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentWinding;		HX_STACK_VAR(tmp31,"tmp31");
							HX_STACK_LINE(253)
							tmp27->update(tmp28,tmp29,tmp30,tmp31);
							HX_STACK_LINE(254)
							::openfl::_internal::renderer::opengl::utils::GraphicType tmp32 = ::openfl::_internal::renderer::opengl::utils::GraphicType_obj::Rectangle(false);		HX_STACK_VAR(tmp32,"tmp32");
							HX_STACK_LINE(254)
							::openfl::_internal::renderer::opengl::utils::DrawPath tmp33 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentPath;		HX_STACK_VAR(tmp33,"tmp33");
							HX_STACK_LINE(254)
							tmp33->type = tmp32;
							HX_STACK_LINE(255)
							::openfl::_internal::renderer::opengl::utils::DrawPath tmp34 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentPath;		HX_STACK_VAR(tmp34,"tmp34");
							HX_STACK_LINE(255)
							tmp34->points = Array_obj< Float >::__new().Add(x).Add(y).Add(width).Add(height);
							HX_STACK_LINE(257)
							::openfl::_internal::renderer::opengl::utils::DrawPath tmp35 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentPath;		HX_STACK_VAR(tmp35,"tmp35");
							HX_STACK_LINE(257)
							::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__drawPaths->push(tmp35);
						}
					}
					;break;
					case (int)8: {
						HX_STACK_LINE(188)
						Float tmp22 = (::openfl::display::DrawCommand(command))->__Param(5);		HX_STACK_VAR(tmp22,"tmp22");
						HX_STACK_LINE(188)
						Float ry = tmp22;		HX_STACK_VAR(ry,"ry");
						HX_STACK_LINE(188)
						Float tmp23 = (::openfl::display::DrawCommand(command))->__Param(4);		HX_STACK_VAR(tmp23,"tmp23");
						HX_STACK_LINE(188)
						Float rx = tmp23;		HX_STACK_VAR(rx,"rx");
						HX_STACK_LINE(188)
						Float tmp24 = (::openfl::display::DrawCommand(command))->__Param(3);		HX_STACK_VAR(tmp24,"tmp24");
						HX_STACK_LINE(188)
						Float height = tmp24;		HX_STACK_VAR(height,"height");
						HX_STACK_LINE(188)
						Float tmp25 = (::openfl::display::DrawCommand(command))->__Param(2);		HX_STACK_VAR(tmp25,"tmp25");
						HX_STACK_LINE(188)
						Float width = tmp25;		HX_STACK_VAR(width,"width");
						HX_STACK_LINE(188)
						Float tmp26 = (::openfl::display::DrawCommand(command))->__Param(1);		HX_STACK_VAR(tmp26,"tmp26");
						HX_STACK_LINE(188)
						Float y = tmp26;		HX_STACK_VAR(y,"y");
						HX_STACK_LINE(188)
						Float tmp27 = (::openfl::display::DrawCommand(command))->__Param(0);		HX_STACK_VAR(tmp27,"tmp27");
						HX_STACK_LINE(188)
						Float x = tmp27;		HX_STACK_VAR(x,"x");
						HX_STACK_LINE(259)
						{
							HX_STACK_LINE(261)
							bool tmp28 = (ry == (int)-1);		HX_STACK_VAR(tmp28,"tmp28");
							HX_STACK_LINE(261)
							if ((tmp28)){
								HX_STACK_LINE(261)
								ry = rx;
							}
							HX_STACK_LINE(263)
							hx::MultEq(rx,((Float)0.5));
							HX_STACK_LINE(264)
							hx::MultEq(ry,((Float)0.5));
							HX_STACK_LINE(266)
							Float tmp29 = rx;		HX_STACK_VAR(tmp29,"tmp29");
							HX_STACK_LINE(266)
							Float tmp30 = (Float(width) / Float((int)2));		HX_STACK_VAR(tmp30,"tmp30");
							HX_STACK_LINE(266)
							bool tmp31 = (tmp29 > tmp30);		HX_STACK_VAR(tmp31,"tmp31");
							HX_STACK_LINE(266)
							if ((tmp31)){
								HX_STACK_LINE(266)
								Float tmp32 = (Float(width) / Float((int)2));		HX_STACK_VAR(tmp32,"tmp32");
								HX_STACK_LINE(266)
								rx = tmp32;
							}
							HX_STACK_LINE(267)
							Float tmp32 = ry;		HX_STACK_VAR(tmp32,"tmp32");
							HX_STACK_LINE(267)
							Float tmp33 = (Float(height) / Float((int)2));		HX_STACK_VAR(tmp33,"tmp33");
							HX_STACK_LINE(267)
							bool tmp34 = (tmp32 > tmp33);		HX_STACK_VAR(tmp34,"tmp34");
							HX_STACK_LINE(267)
							if ((tmp34)){
								HX_STACK_LINE(267)
								Float tmp35 = (Float(height) / Float((int)2));		HX_STACK_VAR(tmp35,"tmp35");
								HX_STACK_LINE(267)
								ry = tmp35;
							}
							HX_STACK_LINE(269)
							{
								HX_STACK_LINE(269)
								::openfl::_internal::renderer::opengl::utils::DrawPath tmp35 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentPath;		HX_STACK_VAR(tmp35,"tmp35");
								HX_STACK_LINE(269)
								bool tmp36 = tmp35->isRemovable;		HX_STACK_VAR(tmp36,"tmp36");
								HX_STACK_LINE(269)
								bool tmp37;		HX_STACK_VAR(tmp37,"tmp37");
								HX_STACK_LINE(269)
								if ((tmp36)){
									HX_STACK_LINE(269)
									::openfl::_internal::renderer::opengl::utils::DrawPath tmp38 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentPath;		HX_STACK_VAR(tmp38,"tmp38");
									HX_STACK_LINE(269)
									::openfl::_internal::renderer::opengl::utils::DrawPath tmp39 = tmp38;		HX_STACK_VAR(tmp39,"tmp39");
									HX_STACK_LINE(269)
									int tmp40 = tmp39->points->length;		HX_STACK_VAR(tmp40,"tmp40");
									HX_STACK_LINE(269)
									int tmp41 = tmp40;		HX_STACK_VAR(tmp41,"tmp41");
									HX_STACK_LINE(269)
									tmp37 = (tmp41 == (int)0);
								}
								else{
									HX_STACK_LINE(269)
									tmp37 = false;
								}
								HX_STACK_LINE(269)
								if ((tmp37)){
									HX_STACK_LINE(269)
									::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__drawPaths->pop().StaticCast< ::openfl::_internal::renderer::opengl::utils::DrawPath >();
								}
								else{
									HX_STACK_LINE(269)
									::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::closePath();
								}
							}
							HX_STACK_LINE(271)
							::openfl::_internal::renderer::opengl::utils::DrawPath tmp35 = ::openfl::_internal::renderer::opengl::utils::DrawPath_obj::__new();		HX_STACK_VAR(tmp35,"tmp35");
							HX_STACK_LINE(271)
							::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentPath = tmp35;
							HX_STACK_LINE(272)
							::openfl::_internal::renderer::opengl::utils::DrawPath tmp36 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentPath;		HX_STACK_VAR(tmp36,"tmp36");
							HX_STACK_LINE(272)
							::openfl::_internal::renderer::opengl::utils::LineStyle tmp37 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__line;		HX_STACK_VAR(tmp37,"tmp37");
							HX_STACK_LINE(272)
							::openfl::_internal::renderer::opengl::utils::FillType tmp38 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__fill;		HX_STACK_VAR(tmp38,"tmp38");
							HX_STACK_LINE(272)
							int tmp39 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__fillIndex;		HX_STACK_VAR(tmp39,"tmp39");
							HX_STACK_LINE(272)
							int tmp40 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentWinding;		HX_STACK_VAR(tmp40,"tmp40");
							HX_STACK_LINE(272)
							tmp36->update(tmp37,tmp38,tmp39,tmp40);
							HX_STACK_LINE(273)
							::openfl::_internal::renderer::opengl::utils::GraphicType tmp41 = ::openfl::_internal::renderer::opengl::utils::GraphicType_obj::Rectangle(true);		HX_STACK_VAR(tmp41,"tmp41");
							HX_STACK_LINE(273)
							::openfl::_internal::renderer::opengl::utils::DrawPath tmp42 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentPath;		HX_STACK_VAR(tmp42,"tmp42");
							HX_STACK_LINE(273)
							tmp42->type = tmp41;
							HX_STACK_LINE(274)
							::openfl::_internal::renderer::opengl::utils::DrawPath tmp43 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentPath;		HX_STACK_VAR(tmp43,"tmp43");
							HX_STACK_LINE(274)
							tmp43->points = Array_obj< Float >::__new().Add(x).Add(y).Add(width).Add(height).Add(rx).Add(ry);
							HX_STACK_LINE(276)
							::openfl::_internal::renderer::opengl::utils::DrawPath tmp44 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentPath;		HX_STACK_VAR(tmp44,"tmp44");
							HX_STACK_LINE(276)
							::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__drawPaths->push(tmp44);
						}
					}
					;break;
					case (int)11: {
						HX_STACK_LINE(280)
						::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::endFill();
					}
					;break;
					case (int)12: {
						HX_STACK_LINE(188)
						Dynamic tmp22 = (::openfl::display::DrawCommand(command))->__Param(7);		HX_STACK_VAR(tmp22,"tmp22");
						HX_STACK_LINE(188)
						Dynamic miterLimit = tmp22;		HX_STACK_VAR(miterLimit,"miterLimit");
						HX_STACK_LINE(188)
						::openfl::display::JointStyle tmp23 = (::openfl::display::DrawCommand(command))->__Param(6);		HX_STACK_VAR(tmp23,"tmp23");
						HX_STACK_LINE(188)
						::openfl::display::JointStyle joints = tmp23;		HX_STACK_VAR(joints,"joints");
						HX_STACK_LINE(188)
						::openfl::display::CapsStyle tmp24 = (::openfl::display::DrawCommand(command))->__Param(5);		HX_STACK_VAR(tmp24,"tmp24");
						HX_STACK_LINE(188)
						::openfl::display::CapsStyle caps = tmp24;		HX_STACK_VAR(caps,"caps");
						HX_STACK_LINE(188)
						::openfl::display::LineScaleMode tmp25 = (::openfl::display::DrawCommand(command))->__Param(4);		HX_STACK_VAR(tmp25,"tmp25");
						HX_STACK_LINE(188)
						::openfl::display::LineScaleMode scaleMode = tmp25;		HX_STACK_VAR(scaleMode,"scaleMode");
						HX_STACK_LINE(188)
						Dynamic tmp26 = (::openfl::display::DrawCommand(command))->__Param(3);		HX_STACK_VAR(tmp26,"tmp26");
						HX_STACK_LINE(188)
						Dynamic pixelHinting = tmp26;		HX_STACK_VAR(pixelHinting,"pixelHinting");
						HX_STACK_LINE(188)
						Dynamic tmp27 = (::openfl::display::DrawCommand(command))->__Param(2);		HX_STACK_VAR(tmp27,"tmp27");
						HX_STACK_LINE(188)
						Dynamic alpha = tmp27;		HX_STACK_VAR(alpha,"alpha");
						HX_STACK_LINE(188)
						Dynamic tmp28 = (::openfl::display::DrawCommand(command))->__Param(1);		HX_STACK_VAR(tmp28,"tmp28");
						HX_STACK_LINE(188)
						Dynamic color = tmp28;		HX_STACK_VAR(color,"color");
						HX_STACK_LINE(188)
						Dynamic tmp29 = (::openfl::display::DrawCommand(command))->__Param(0);		HX_STACK_VAR(tmp29,"tmp29");
						HX_STACK_LINE(188)
						Dynamic thickness = tmp29;		HX_STACK_VAR(thickness,"thickness");
						HX_STACK_LINE(282)
						{
							HX_STACK_LINE(284)
							::openfl::_internal::renderer::opengl::utils::LineStyle tmp30 = ::openfl::_internal::renderer::opengl::utils::LineStyle_obj::__new();		HX_STACK_VAR(tmp30,"tmp30");
							HX_STACK_LINE(284)
							::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__line = tmp30;
							HX_STACK_LINE(286)
							bool tmp31 = (thickness == null());		HX_STACK_VAR(tmp31,"tmp31");
							HX_STACK_LINE(286)
							bool tmp32 = !(tmp31);		HX_STACK_VAR(tmp32,"tmp32");
							HX_STACK_LINE(286)
							bool tmp33 = tmp32;		HX_STACK_VAR(tmp33,"tmp33");
							HX_STACK_LINE(286)
							bool tmp34;		HX_STACK_VAR(tmp34,"tmp34");
							HX_STACK_LINE(286)
							if ((tmp33)){
								HX_STACK_LINE(286)
								Dynamic tmp35 = thickness;		HX_STACK_VAR(tmp35,"tmp35");
								HX_STACK_LINE(286)
								Dynamic tmp36 = tmp35;		HX_STACK_VAR(tmp36,"tmp36");
								HX_STACK_LINE(286)
								Dynamic tmp37 = tmp36;		HX_STACK_VAR(tmp37,"tmp37");
								HX_STACK_LINE(286)
								tmp34 = ::Math_obj::isNaN(tmp37);
							}
							else{
								HX_STACK_LINE(286)
								tmp34 = true;
							}
							HX_STACK_LINE(286)
							bool tmp35 = !(tmp34);		HX_STACK_VAR(tmp35,"tmp35");
							HX_STACK_LINE(286)
							bool tmp36;		HX_STACK_VAR(tmp36,"tmp36");
							HX_STACK_LINE(286)
							if ((tmp35)){
								HX_STACK_LINE(286)
								tmp36 = (thickness < (int)0);
							}
							else{
								HX_STACK_LINE(286)
								tmp36 = true;
							}
							HX_STACK_LINE(286)
							if ((tmp36)){
								HX_STACK_LINE(288)
								::openfl::_internal::renderer::opengl::utils::LineStyle tmp37 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__line;		HX_STACK_VAR(tmp37,"tmp37");
								HX_STACK_LINE(288)
								tmp37->width = (int)0;
							}
							else{
								HX_STACK_LINE(290)
								bool tmp37 = (thickness == (int)0);		HX_STACK_VAR(tmp37,"tmp37");
								HX_STACK_LINE(290)
								if ((tmp37)){
									HX_STACK_LINE(292)
									::openfl::_internal::renderer::opengl::utils::LineStyle tmp38 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__line;		HX_STACK_VAR(tmp38,"tmp38");
									HX_STACK_LINE(292)
									tmp38->width = (int)1;
								}
								else{
									HX_STACK_LINE(296)
									::openfl::_internal::renderer::opengl::utils::LineStyle tmp38 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__line;		HX_STACK_VAR(tmp38,"tmp38");
									HX_STACK_LINE(296)
									tmp38->width = thickness;
								}
							}
							HX_STACK_LINE(300)
							{
								HX_STACK_LINE(300)
								::openfl::_internal::renderer::opengl::utils::DrawPath tmp37 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentPath;		HX_STACK_VAR(tmp37,"tmp37");
								HX_STACK_LINE(300)
								bool tmp38 = tmp37->isRemovable;		HX_STACK_VAR(tmp38,"tmp38");
								HX_STACK_LINE(300)
								bool tmp39;		HX_STACK_VAR(tmp39,"tmp39");
								HX_STACK_LINE(300)
								if ((tmp38)){
									HX_STACK_LINE(300)
									::openfl::_internal::renderer::opengl::utils::DrawPath tmp40 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentPath;		HX_STACK_VAR(tmp40,"tmp40");
									HX_STACK_LINE(300)
									::openfl::_internal::renderer::opengl::utils::DrawPath tmp41 = tmp40;		HX_STACK_VAR(tmp41,"tmp41");
									HX_STACK_LINE(300)
									int tmp42 = tmp41->points->length;		HX_STACK_VAR(tmp42,"tmp42");
									HX_STACK_LINE(300)
									int tmp43 = tmp42;		HX_STACK_VAR(tmp43,"tmp43");
									HX_STACK_LINE(300)
									tmp39 = (tmp43 == (int)0);
								}
								else{
									HX_STACK_LINE(300)
									tmp39 = false;
								}
								HX_STACK_LINE(300)
								if ((tmp39)){
									HX_STACK_LINE(300)
									::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__drawPaths->pop().StaticCast< ::openfl::_internal::renderer::opengl::utils::DrawPath >();
								}
								else{
									HX_STACK_LINE(300)
									::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::closePath();
								}
							}
							HX_STACK_LINE(302)
							bool tmp37 = (color == null());		HX_STACK_VAR(tmp37,"tmp37");
							HX_STACK_LINE(302)
							int tmp38;		HX_STACK_VAR(tmp38,"tmp38");
							HX_STACK_LINE(302)
							if ((tmp37)){
								HX_STACK_LINE(302)
								tmp38 = (int)0;
							}
							else{
								HX_STACK_LINE(302)
								tmp38 = color;
							}
							HX_STACK_LINE(302)
							::openfl::_internal::renderer::opengl::utils::LineStyle tmp39 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__line;		HX_STACK_VAR(tmp39,"tmp39");
							HX_STACK_LINE(302)
							tmp39->color = tmp38;
							HX_STACK_LINE(303)
							bool tmp40 = (alpha == null());		HX_STACK_VAR(tmp40,"tmp40");
							HX_STACK_LINE(303)
							Dynamic tmp41;		HX_STACK_VAR(tmp41,"tmp41");
							HX_STACK_LINE(303)
							if ((tmp40)){
								HX_STACK_LINE(303)
								tmp41 = (int)1;
							}
							else{
								HX_STACK_LINE(303)
								tmp41 = alpha;
							}
							HX_STACK_LINE(303)
							::openfl::_internal::renderer::opengl::utils::LineStyle tmp42 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__line;		HX_STACK_VAR(tmp42,"tmp42");
							HX_STACK_LINE(303)
							tmp42->alpha = tmp41;
							HX_STACK_LINE(304)
							::openfl::_internal::renderer::opengl::utils::LineStyle tmp43 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__line;		HX_STACK_VAR(tmp43,"tmp43");
							HX_STACK_LINE(304)
							tmp43->scaleMode = scaleMode;
							HX_STACK_LINE(305)
							::openfl::_internal::renderer::opengl::utils::LineStyle tmp44 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__line;		HX_STACK_VAR(tmp44,"tmp44");
							HX_STACK_LINE(305)
							tmp44->caps = caps;
							HX_STACK_LINE(306)
							::openfl::_internal::renderer::opengl::utils::LineStyle tmp45 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__line;		HX_STACK_VAR(tmp45,"tmp45");
							HX_STACK_LINE(306)
							tmp45->joints = joints;
							HX_STACK_LINE(307)
							::openfl::_internal::renderer::opengl::utils::LineStyle tmp46 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__line;		HX_STACK_VAR(tmp46,"tmp46");
							HX_STACK_LINE(307)
							tmp46->miterLimit = miterLimit;
							HX_STACK_LINE(309)
							::openfl::_internal::renderer::opengl::utils::DrawPath tmp47 = ::openfl::_internal::renderer::opengl::utils::DrawPath_obj::__new();		HX_STACK_VAR(tmp47,"tmp47");
							HX_STACK_LINE(309)
							::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentPath = tmp47;
							HX_STACK_LINE(310)
							::openfl::_internal::renderer::opengl::utils::DrawPath tmp48 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentPath;		HX_STACK_VAR(tmp48,"tmp48");
							HX_STACK_LINE(310)
							::openfl::_internal::renderer::opengl::utils::LineStyle tmp49 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__line;		HX_STACK_VAR(tmp49,"tmp49");
							HX_STACK_LINE(310)
							::openfl::_internal::renderer::opengl::utils::FillType tmp50 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__fill;		HX_STACK_VAR(tmp50,"tmp50");
							HX_STACK_LINE(310)
							int tmp51 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__fillIndex;		HX_STACK_VAR(tmp51,"tmp51");
							HX_STACK_LINE(310)
							int tmp52 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentWinding;		HX_STACK_VAR(tmp52,"tmp52");
							HX_STACK_LINE(310)
							tmp48->update(tmp49,tmp50,tmp51,tmp52);
							HX_STACK_LINE(311)
							::openfl::_internal::renderer::opengl::utils::DrawPath tmp53 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentPath;		HX_STACK_VAR(tmp53,"tmp53");
							HX_STACK_LINE(311)
							tmp53->points = Array_obj< Float >::__new();
							HX_STACK_LINE(312)
							::openfl::_internal::renderer::opengl::utils::DrawPath tmp54 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentPath;		HX_STACK_VAR(tmp54,"tmp54");
							HX_STACK_LINE(312)
							tmp54->type = ::openfl::_internal::renderer::opengl::utils::GraphicType_obj::Polygon;
							HX_STACK_LINE(314)
							::openfl::_internal::renderer::opengl::utils::DrawPath tmp55 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentPath;		HX_STACK_VAR(tmp55,"tmp55");
							HX_STACK_LINE(314)
							::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__drawPaths->push(tmp55);
						}
					}
					;break;
					case (int)15: {
						HX_STACK_LINE(188)
						Float tmp22 = (::openfl::display::DrawCommand(command))->__Param(1);		HX_STACK_VAR(tmp22,"tmp22");
						HX_STACK_LINE(188)
						Float y = tmp22;		HX_STACK_VAR(y,"y");
						HX_STACK_LINE(188)
						Float tmp23 = (::openfl::display::DrawCommand(command))->__Param(0);		HX_STACK_VAR(tmp23,"tmp23");
						HX_STACK_LINE(188)
						Float x = tmp23;		HX_STACK_VAR(x,"x");
						HX_STACK_LINE(318)
						{
							HX_STACK_LINE(318)
							::openfl::_internal::renderer::opengl::utils::DrawPath tmp24 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentPath;		HX_STACK_VAR(tmp24,"tmp24");
							HX_STACK_LINE(318)
							Array< Float > points = tmp24->points;		HX_STACK_VAR(points,"points");
							HX_STACK_LINE(318)
							bool push_point = true;		HX_STACK_VAR(push_point,"push_point");
							HX_STACK_LINE(318)
							bool tmp25 = (points->length > (int)1);		HX_STACK_VAR(tmp25,"tmp25");
							HX_STACK_LINE(318)
							if ((tmp25)){
								HX_STACK_LINE(318)
								int tmp26 = (points->length - (int)2);		HX_STACK_VAR(tmp26,"tmp26");
								HX_STACK_LINE(318)
								Float tmp27 = points->__get(tmp26);		HX_STACK_VAR(tmp27,"tmp27");
								HX_STACK_LINE(318)
								Float lastX = tmp27;		HX_STACK_VAR(lastX,"lastX");
								HX_STACK_LINE(318)
								int tmp28 = (points->length - (int)1);		HX_STACK_VAR(tmp28,"tmp28");
								HX_STACK_LINE(318)
								Float tmp29 = points->__get(tmp28);		HX_STACK_VAR(tmp29,"tmp29");
								HX_STACK_LINE(318)
								Float lastY = tmp29;		HX_STACK_VAR(lastY,"lastY");
								HX_STACK_LINE(318)
								bool tmp30 = (lastX == x);		HX_STACK_VAR(tmp30,"tmp30");
								HX_STACK_LINE(318)
								bool tmp31;		HX_STACK_VAR(tmp31,"tmp31");
								HX_STACK_LINE(318)
								if ((tmp30)){
									HX_STACK_LINE(318)
									tmp31 = (lastY == y);
								}
								else{
									HX_STACK_LINE(318)
									tmp31 = false;
								}
								HX_STACK_LINE(318)
								if ((tmp31)){
									HX_STACK_LINE(318)
									push_point = false;
								}
							}
							HX_STACK_LINE(318)
							bool tmp26 = (push_point == true);		HX_STACK_VAR(tmp26,"tmp26");
							HX_STACK_LINE(318)
							if ((tmp26)){
								HX_STACK_LINE(318)
								::openfl::_internal::renderer::opengl::utils::DrawPath tmp27 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentPath;		HX_STACK_VAR(tmp27,"tmp27");
								HX_STACK_LINE(318)
								Float tmp28 = x;		HX_STACK_VAR(tmp28,"tmp28");
								HX_STACK_LINE(318)
								tmp27->points->push(tmp28);
								HX_STACK_LINE(318)
								::openfl::_internal::renderer::opengl::utils::DrawPath tmp29 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentPath;		HX_STACK_VAR(tmp29,"tmp29");
								HX_STACK_LINE(318)
								Float tmp30 = y;		HX_STACK_VAR(tmp30,"tmp30");
								HX_STACK_LINE(318)
								tmp29->points->push(tmp30);
							}
						}
					}
					;break;
					case (int)16: {
						HX_STACK_LINE(188)
						Float tmp22 = (::openfl::display::DrawCommand(command))->__Param(1);		HX_STACK_VAR(tmp22,"tmp22");
						HX_STACK_LINE(188)
						Float y = tmp22;		HX_STACK_VAR(y,"y");
						HX_STACK_LINE(188)
						Float tmp23 = (::openfl::display::DrawCommand(command))->__Param(0);		HX_STACK_VAR(tmp23,"tmp23");
						HX_STACK_LINE(188)
						Float x = tmp23;		HX_STACK_VAR(x,"x");
						HX_STACK_LINE(322)
						{
							HX_STACK_LINE(322)
							{
								HX_STACK_LINE(322)
								::openfl::_internal::renderer::opengl::utils::DrawPath tmp24 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentPath;		HX_STACK_VAR(tmp24,"tmp24");
								HX_STACK_LINE(322)
								bool tmp25 = tmp24->isRemovable;		HX_STACK_VAR(tmp25,"tmp25");
								HX_STACK_LINE(322)
								bool tmp26;		HX_STACK_VAR(tmp26,"tmp26");
								HX_STACK_LINE(322)
								if ((tmp25)){
									HX_STACK_LINE(322)
									::openfl::_internal::renderer::opengl::utils::DrawPath tmp27 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentPath;		HX_STACK_VAR(tmp27,"tmp27");
									HX_STACK_LINE(322)
									::openfl::_internal::renderer::opengl::utils::DrawPath tmp28 = tmp27;		HX_STACK_VAR(tmp28,"tmp28");
									HX_STACK_LINE(322)
									int tmp29 = tmp28->points->length;		HX_STACK_VAR(tmp29,"tmp29");
									HX_STACK_LINE(322)
									int tmp30 = tmp29;		HX_STACK_VAR(tmp30,"tmp30");
									HX_STACK_LINE(322)
									tmp26 = (tmp30 == (int)0);
								}
								else{
									HX_STACK_LINE(322)
									tmp26 = false;
								}
								HX_STACK_LINE(322)
								if ((tmp26)){
									HX_STACK_LINE(322)
									::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__drawPaths->pop().StaticCast< ::openfl::_internal::renderer::opengl::utils::DrawPath >();
								}
								else{
									HX_STACK_LINE(322)
									::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::closePath();
								}
							}
							HX_STACK_LINE(322)
							::openfl::_internal::renderer::opengl::utils::DrawPath tmp24 = ::openfl::_internal::renderer::opengl::utils::DrawPath_obj::__new();		HX_STACK_VAR(tmp24,"tmp24");
							HX_STACK_LINE(322)
							::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentPath = tmp24;
							HX_STACK_LINE(322)
							::openfl::_internal::renderer::opengl::utils::DrawPath tmp25 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentPath;		HX_STACK_VAR(tmp25,"tmp25");
							HX_STACK_LINE(322)
							::openfl::_internal::renderer::opengl::utils::LineStyle tmp26 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__line;		HX_STACK_VAR(tmp26,"tmp26");
							HX_STACK_LINE(322)
							::openfl::_internal::renderer::opengl::utils::FillType tmp27 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__fill;		HX_STACK_VAR(tmp27,"tmp27");
							HX_STACK_LINE(322)
							int tmp28 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__fillIndex;		HX_STACK_VAR(tmp28,"tmp28");
							HX_STACK_LINE(322)
							int tmp29 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentWinding;		HX_STACK_VAR(tmp29,"tmp29");
							HX_STACK_LINE(322)
							tmp25->update(tmp26,tmp27,tmp28,tmp29);
							HX_STACK_LINE(322)
							::openfl::_internal::renderer::opengl::utils::DrawPath tmp30 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentPath;		HX_STACK_VAR(tmp30,"tmp30");
							HX_STACK_LINE(322)
							tmp30->type = ::openfl::_internal::renderer::opengl::utils::GraphicType_obj::Polygon;
							HX_STACK_LINE(322)
							::openfl::_internal::renderer::opengl::utils::DrawPath tmp31 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentPath;		HX_STACK_VAR(tmp31,"tmp31");
							HX_STACK_LINE(322)
							Float tmp32 = x;		HX_STACK_VAR(tmp32,"tmp32");
							HX_STACK_LINE(322)
							tmp31->points->push(tmp32);
							HX_STACK_LINE(322)
							::openfl::_internal::renderer::opengl::utils::DrawPath tmp33 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentPath;		HX_STACK_VAR(tmp33,"tmp33");
							HX_STACK_LINE(322)
							Float tmp34 = y;		HX_STACK_VAR(tmp34,"tmp34");
							HX_STACK_LINE(322)
							tmp33->points->push(tmp34);
							HX_STACK_LINE(322)
							::openfl::_internal::renderer::opengl::utils::DrawPath tmp35 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentPath;		HX_STACK_VAR(tmp35,"tmp35");
							HX_STACK_LINE(322)
							::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__drawPaths->push(tmp35);
						}
					}
					;break;
					case (int)10: {
						HX_STACK_LINE(188)
						int tmp22 = (::openfl::display::DrawCommand(command))->__Param(5);		HX_STACK_VAR(tmp22,"tmp22");
						HX_STACK_LINE(188)
						int blendMode = tmp22;		HX_STACK_VAR(blendMode,"blendMode");
						HX_STACK_LINE(188)
						Array< int > tmp23 = (::openfl::display::DrawCommand(command))->__Param(4);		HX_STACK_VAR(tmp23,"tmp23");
						HX_STACK_LINE(188)
						Array< int > colors = tmp23;		HX_STACK_VAR(colors,"colors");
						HX_STACK_LINE(188)
						::openfl::display::TriangleCulling tmp24 = (::openfl::display::DrawCommand(command))->__Param(3);		HX_STACK_VAR(tmp24,"tmp24");
						HX_STACK_LINE(188)
						::openfl::display::TriangleCulling culling = tmp24;		HX_STACK_VAR(culling,"culling");
						HX_STACK_LINE(188)
						Array< Float > tmp25 = (::openfl::display::DrawCommand(command))->__Param(2);		HX_STACK_VAR(tmp25,"tmp25");
						HX_STACK_LINE(188)
						Array< Float > uvtData = tmp25;		HX_STACK_VAR(uvtData,"uvtData");
						HX_STACK_LINE(188)
						Array< int > tmp26 = (::openfl::display::DrawCommand(command))->__Param(1);		HX_STACK_VAR(tmp26,"tmp26");
						HX_STACK_LINE(188)
						Array< int > indices = tmp26;		HX_STACK_VAR(indices,"indices");
						HX_STACK_LINE(188)
						Array< Float > tmp27 = (::openfl::display::DrawCommand(command))->__Param(0);		HX_STACK_VAR(tmp27,"tmp27");
						HX_STACK_LINE(188)
						Array< Float > vertices = tmp27;		HX_STACK_VAR(vertices,"vertices");
						HX_STACK_LINE(324)
						{
							HX_STACK_LINE(326)
							bool tmp28;		HX_STACK_VAR(tmp28,"tmp28");
							HX_STACK_LINE(326)
							{
								HX_STACK_LINE(326)
								::openfl::_internal::renderer::opengl::utils::FillType tmp29 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__fill;		HX_STACK_VAR(tmp29,"tmp29");
								HX_STACK_LINE(326)
								::openfl::_internal::renderer::opengl::utils::FillType _g2 = tmp29;		HX_STACK_VAR(_g2,"_g2");
								HX_STACK_LINE(326)
								switch( (int)(_g2->__Index())){
									case (int)1: {
										HX_STACK_LINE(326)
										tmp28 = true;
									}
									;break;
									default: {
										HX_STACK_LINE(326)
										tmp28 = false;
									}
								}
							}
							HX_STACK_LINE(326)
							bool isColor = tmp28;		HX_STACK_VAR(isColor,"isColor");
							HX_STACK_LINE(327)
							bool tmp29 = isColor;		HX_STACK_VAR(tmp29,"tmp29");
							HX_STACK_LINE(327)
							bool tmp30;		HX_STACK_VAR(tmp30,"tmp30");
							HX_STACK_LINE(327)
							if ((tmp29)){
								HX_STACK_LINE(327)
								tmp30 = (uvtData != null());
							}
							else{
								HX_STACK_LINE(327)
								tmp30 = false;
							}
							HX_STACK_LINE(327)
							if ((tmp30)){
								HX_STACK_LINE(329)
								continue;
							}
							HX_STACK_LINE(332)
							{
								HX_STACK_LINE(332)
								::openfl::_internal::renderer::opengl::utils::DrawPath tmp31 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentPath;		HX_STACK_VAR(tmp31,"tmp31");
								HX_STACK_LINE(332)
								bool tmp32 = tmp31->isRemovable;		HX_STACK_VAR(tmp32,"tmp32");
								HX_STACK_LINE(332)
								bool tmp33;		HX_STACK_VAR(tmp33,"tmp33");
								HX_STACK_LINE(332)
								if ((tmp32)){
									HX_STACK_LINE(332)
									::openfl::_internal::renderer::opengl::utils::DrawPath tmp34 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentPath;		HX_STACK_VAR(tmp34,"tmp34");
									HX_STACK_LINE(332)
									::openfl::_internal::renderer::opengl::utils::DrawPath tmp35 = tmp34;		HX_STACK_VAR(tmp35,"tmp35");
									HX_STACK_LINE(332)
									int tmp36 = tmp35->points->length;		HX_STACK_VAR(tmp36,"tmp36");
									HX_STACK_LINE(332)
									int tmp37 = tmp36;		HX_STACK_VAR(tmp37,"tmp37");
									HX_STACK_LINE(332)
									tmp33 = (tmp37 == (int)0);
								}
								else{
									HX_STACK_LINE(332)
									tmp33 = false;
								}
								HX_STACK_LINE(332)
								if ((tmp33)){
									HX_STACK_LINE(332)
									::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__drawPaths->pop().StaticCast< ::openfl::_internal::renderer::opengl::utils::DrawPath >();
								}
								else{
									HX_STACK_LINE(332)
									::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::closePath();
								}
							}
							HX_STACK_LINE(334)
							::openfl::_internal::renderer::opengl::utils::DrawPath tmp31 = ::openfl::_internal::renderer::opengl::utils::DrawPath_obj::__new();		HX_STACK_VAR(tmp31,"tmp31");
							HX_STACK_LINE(334)
							::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentPath = tmp31;
							HX_STACK_LINE(335)
							::openfl::_internal::renderer::opengl::utils::DrawPath tmp32 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentPath;		HX_STACK_VAR(tmp32,"tmp32");
							HX_STACK_LINE(335)
							::openfl::_internal::renderer::opengl::utils::LineStyle tmp33 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__line;		HX_STACK_VAR(tmp33,"tmp33");
							HX_STACK_LINE(335)
							::openfl::_internal::renderer::opengl::utils::FillType tmp34 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__fill;		HX_STACK_VAR(tmp34,"tmp34");
							HX_STACK_LINE(335)
							int tmp35 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__fillIndex;		HX_STACK_VAR(tmp35,"tmp35");
							HX_STACK_LINE(335)
							int tmp36 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentWinding;		HX_STACK_VAR(tmp36,"tmp36");
							HX_STACK_LINE(335)
							tmp32->update(tmp33,tmp34,tmp35,tmp36);
							HX_STACK_LINE(336)
							bool tmp37 = (uvtData == null());		HX_STACK_VAR(tmp37,"tmp37");
							HX_STACK_LINE(336)
							if ((tmp37)){
								HX_STACK_LINE(337)
								Array< Float > tmp38;		HX_STACK_VAR(tmp38,"tmp38");
								HX_STACK_LINE(337)
								{
									HX_STACK_LINE(337)
									Array< Float > this1;		HX_STACK_VAR(this1,"this1");
									HX_STACK_LINE(337)
									this1 = Array_obj< Float >::__new()->__SetSizeExact(null());
									HX_STACK_LINE(337)
									tmp38 = this1;
								}
								HX_STACK_LINE(337)
								uvtData = tmp38;
								HX_STACK_LINE(338)
								{
									HX_STACK_LINE(338)
									::openfl::_internal::renderer::opengl::utils::FillType tmp39 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__fill;		HX_STACK_VAR(tmp39,"tmp39");
									HX_STACK_LINE(338)
									::openfl::_internal::renderer::opengl::utils::FillType _g2 = tmp39;		HX_STACK_VAR(_g2,"_g2");
									HX_STACK_LINE(338)
									switch( (int)(_g2->__Index())){
										case (int)2: {
											HX_STACK_LINE(338)
											::openfl::display::BitmapData tmp40 = (::openfl::_internal::renderer::opengl::utils::FillType(_g2))->__Param(0);		HX_STACK_VAR(tmp40,"tmp40");
											HX_STACK_LINE(338)
											::openfl::display::BitmapData b = tmp40;		HX_STACK_VAR(b,"b");
											HX_STACK_LINE(340)
											{
												HX_STACK_LINE(340)
												int _g4 = (int)0;		HX_STACK_VAR(_g4,"_g4");
												HX_STACK_LINE(340)
												int tmp41 = vertices->length;		HX_STACK_VAR(tmp41,"tmp41");
												HX_STACK_LINE(340)
												Float tmp42 = (Float(tmp41) / Float((int)2));		HX_STACK_VAR(tmp42,"tmp42");
												HX_STACK_LINE(340)
												int tmp43 = ::Std_obj::_int(tmp42);		HX_STACK_VAR(tmp43,"tmp43");
												HX_STACK_LINE(340)
												int _g3 = tmp43;		HX_STACK_VAR(_g3,"_g3");
												HX_STACK_LINE(340)
												while((true)){
													HX_STACK_LINE(340)
													bool tmp44 = (_g4 < _g3);		HX_STACK_VAR(tmp44,"tmp44");
													HX_STACK_LINE(340)
													bool tmp45 = !(tmp44);		HX_STACK_VAR(tmp45,"tmp45");
													HX_STACK_LINE(340)
													if ((tmp45)){
														HX_STACK_LINE(340)
														break;
													}
													HX_STACK_LINE(340)
													int tmp46 = (_g4)++;		HX_STACK_VAR(tmp46,"tmp46");
													HX_STACK_LINE(340)
													int i = tmp46;		HX_STACK_VAR(i,"i");
													HX_STACK_LINE(341)
													int tmp47 = (i * (int)2);		HX_STACK_VAR(tmp47,"tmp47");
													HX_STACK_LINE(341)
													Float tmp48 = vertices->__get(tmp47);		HX_STACK_VAR(tmp48,"tmp48");
													HX_STACK_LINE(341)
													Dynamic tmp49 = ((Dynamic)(tmp48));		HX_STACK_VAR(tmp49,"tmp49");
													HX_STACK_LINE(341)
													int tmp50 = b->width;		HX_STACK_VAR(tmp50,"tmp50");
													HX_STACK_LINE(341)
													Float tmp51 = (Float(tmp49) / Float(tmp50));		HX_STACK_VAR(tmp51,"tmp51");
													HX_STACK_LINE(341)
													uvtData->push(tmp51);
													HX_STACK_LINE(342)
													int tmp52 = (i * (int)2);		HX_STACK_VAR(tmp52,"tmp52");
													HX_STACK_LINE(342)
													int tmp53 = (tmp52 + (int)1);		HX_STACK_VAR(tmp53,"tmp53");
													HX_STACK_LINE(342)
													Float tmp54 = vertices->__get(tmp53);		HX_STACK_VAR(tmp54,"tmp54");
													HX_STACK_LINE(342)
													Dynamic tmp55 = ((Dynamic)(tmp54));		HX_STACK_VAR(tmp55,"tmp55");
													HX_STACK_LINE(342)
													int tmp56 = b->height;		HX_STACK_VAR(tmp56,"tmp56");
													HX_STACK_LINE(342)
													Float tmp57 = (Float(tmp55) / Float(tmp56));		HX_STACK_VAR(tmp57,"tmp57");
													HX_STACK_LINE(342)
													uvtData->push(tmp57);
												}
											}
										}
										;break;
										default: {
										}
									}
								}
							}
							HX_STACK_LINE(347)
							Array< Float > tmp38 = vertices;		HX_STACK_VAR(tmp38,"tmp38");
							HX_STACK_LINE(347)
							Array< int > tmp39 = indices;		HX_STACK_VAR(tmp39,"tmp39");
							HX_STACK_LINE(347)
							Array< Float > tmp40 = uvtData;		HX_STACK_VAR(tmp40,"tmp40");
							HX_STACK_LINE(347)
							::openfl::display::TriangleCulling tmp41 = culling;		HX_STACK_VAR(tmp41,"tmp41");
							HX_STACK_LINE(347)
							Array< int > tmp42 = colors;		HX_STACK_VAR(tmp42,"tmp42");
							HX_STACK_LINE(347)
							int tmp43 = blendMode;		HX_STACK_VAR(tmp43,"tmp43");
							HX_STACK_LINE(347)
							::openfl::_internal::renderer::opengl::utils::GraphicType tmp44 = ::openfl::_internal::renderer::opengl::utils::GraphicType_obj::DrawTriangles(tmp38,tmp39,tmp40,tmp41,tmp42,tmp43);		HX_STACK_VAR(tmp44,"tmp44");
							HX_STACK_LINE(347)
							::openfl::_internal::renderer::opengl::utils::DrawPath tmp45 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentPath;		HX_STACK_VAR(tmp45,"tmp45");
							HX_STACK_LINE(347)
							tmp45->type = tmp44;
							HX_STACK_LINE(348)
							::openfl::_internal::renderer::opengl::utils::DrawPath tmp46 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentPath;		HX_STACK_VAR(tmp46,"tmp46");
							HX_STACK_LINE(348)
							tmp46->isRemovable = false;
							HX_STACK_LINE(349)
							::openfl::_internal::renderer::opengl::utils::DrawPath tmp47 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentPath;		HX_STACK_VAR(tmp47,"tmp47");
							HX_STACK_LINE(349)
							::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__drawPaths->push(tmp47);
						}
					}
					;break;
					case (int)9: {
						HX_STACK_LINE(188)
						int tmp22 = (::openfl::display::DrawCommand(command))->__Param(4);		HX_STACK_VAR(tmp22,"tmp22");
						HX_STACK_LINE(188)
						int count = tmp22;		HX_STACK_VAR(count,"count");
						HX_STACK_LINE(188)
						int tmp23 = (::openfl::display::DrawCommand(command))->__Param(3);		HX_STACK_VAR(tmp23,"tmp23");
						HX_STACK_LINE(188)
						int flags = tmp23;		HX_STACK_VAR(flags,"flags");
						HX_STACK_LINE(188)
						bool tmp24 = (::openfl::display::DrawCommand(command))->__Param(2);		HX_STACK_VAR(tmp24,"tmp24");
						HX_STACK_LINE(188)
						bool smooth = tmp24;		HX_STACK_VAR(smooth,"smooth");
						HX_STACK_LINE(188)
						Array< Float > tileData = (::openfl::display::DrawCommand(command))->__Param(1);		HX_STACK_VAR(tileData,"tileData");
						HX_STACK_LINE(188)
						::openfl::display::Tilesheet tmp25 = (::openfl::display::DrawCommand(command))->__Param(0);		HX_STACK_VAR(tmp25,"tmp25");
						HX_STACK_LINE(188)
						::openfl::display::Tilesheet sheet = tmp25;		HX_STACK_VAR(sheet,"sheet");
						HX_STACK_LINE(351)
						{
							HX_STACK_LINE(352)
							{
								HX_STACK_LINE(352)
								::openfl::_internal::renderer::opengl::utils::DrawPath tmp26 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentPath;		HX_STACK_VAR(tmp26,"tmp26");
								HX_STACK_LINE(352)
								bool tmp27 = tmp26->isRemovable;		HX_STACK_VAR(tmp27,"tmp27");
								HX_STACK_LINE(352)
								bool tmp28;		HX_STACK_VAR(tmp28,"tmp28");
								HX_STACK_LINE(352)
								if ((tmp27)){
									HX_STACK_LINE(352)
									::openfl::_internal::renderer::opengl::utils::DrawPath tmp29 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentPath;		HX_STACK_VAR(tmp29,"tmp29");
									HX_STACK_LINE(352)
									::openfl::_internal::renderer::opengl::utils::DrawPath tmp30 = tmp29;		HX_STACK_VAR(tmp30,"tmp30");
									HX_STACK_LINE(352)
									int tmp31 = tmp30->points->length;		HX_STACK_VAR(tmp31,"tmp31");
									HX_STACK_LINE(352)
									int tmp32 = tmp31;		HX_STACK_VAR(tmp32,"tmp32");
									HX_STACK_LINE(352)
									tmp28 = (tmp32 == (int)0);
								}
								else{
									HX_STACK_LINE(352)
									tmp28 = false;
								}
								HX_STACK_LINE(352)
								if ((tmp28)){
									HX_STACK_LINE(352)
									::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__drawPaths->pop().StaticCast< ::openfl::_internal::renderer::opengl::utils::DrawPath >();
								}
								else{
									HX_STACK_LINE(352)
									::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::closePath();
								}
							}
							HX_STACK_LINE(354)
							(::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__fillIndex)++;
							HX_STACK_LINE(355)
							::openfl::_internal::renderer::opengl::utils::DrawPath tmp26 = ::openfl::_internal::renderer::opengl::utils::DrawPath_obj::__new();		HX_STACK_VAR(tmp26,"tmp26");
							HX_STACK_LINE(355)
							::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentPath = tmp26;
							HX_STACK_LINE(356)
							::openfl::_internal::renderer::opengl::utils::DrawPath tmp27 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentPath;		HX_STACK_VAR(tmp27,"tmp27");
							HX_STACK_LINE(356)
							::openfl::_internal::renderer::opengl::utils::LineStyle tmp28 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__line;		HX_STACK_VAR(tmp28,"tmp28");
							HX_STACK_LINE(356)
							::openfl::_internal::renderer::opengl::utils::FillType tmp29 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__fill;		HX_STACK_VAR(tmp29,"tmp29");
							HX_STACK_LINE(356)
							int tmp30 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__fillIndex;		HX_STACK_VAR(tmp30,"tmp30");
							HX_STACK_LINE(356)
							int tmp31 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentWinding;		HX_STACK_VAR(tmp31,"tmp31");
							HX_STACK_LINE(356)
							tmp27->update(tmp28,tmp29,tmp30,tmp31);
							HX_STACK_LINE(357)
							::openfl::display::Tilesheet tmp32 = sheet;		HX_STACK_VAR(tmp32,"tmp32");
							HX_STACK_LINE(357)
							bool tmp33 = smooth;		HX_STACK_VAR(tmp33,"tmp33");
							HX_STACK_LINE(357)
							int tmp34 = flags;		HX_STACK_VAR(tmp34,"tmp34");
							HX_STACK_LINE(357)
							int tmp35 = count;		HX_STACK_VAR(tmp35,"tmp35");
							HX_STACK_LINE(357)
							::openfl::_internal::renderer::opengl::utils::GraphicType tmp36 = ::openfl::_internal::renderer::opengl::utils::GraphicType_obj::DrawTiles(tmp32,tileData,tmp33,tmp34,tmp35);		HX_STACK_VAR(tmp36,"tmp36");
							HX_STACK_LINE(357)
							::openfl::_internal::renderer::opengl::utils::DrawPath tmp37 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentPath;		HX_STACK_VAR(tmp37,"tmp37");
							HX_STACK_LINE(357)
							tmp37->type = tmp36;
							HX_STACK_LINE(358)
							::openfl::_internal::renderer::opengl::utils::DrawPath tmp38 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentPath;		HX_STACK_VAR(tmp38,"tmp38");
							HX_STACK_LINE(358)
							tmp38->isRemovable = false;
							HX_STACK_LINE(359)
							::openfl::_internal::renderer::opengl::utils::DrawPath tmp39 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentPath;		HX_STACK_VAR(tmp39,"tmp39");
							HX_STACK_LINE(359)
							::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__drawPaths->push(tmp39);
						}
					}
					;break;
					case (int)17: {
						HX_STACK_LINE(188)
						::openfl::display::GraphicsPathWinding tmp22 = (::openfl::display::DrawCommand(command))->__Param(2);		HX_STACK_VAR(tmp22,"tmp22");
						HX_STACK_LINE(188)
						::openfl::display::GraphicsPathWinding winding = tmp22;		HX_STACK_VAR(winding,"winding");
						HX_STACK_LINE(188)
						Array< Float > tmp23 = (::openfl::display::DrawCommand(command))->__Param(1);		HX_STACK_VAR(tmp23,"tmp23");
						HX_STACK_LINE(188)
						Array< Float > data = tmp23;		HX_STACK_VAR(data,"data");
						HX_STACK_LINE(188)
						Array< int > tmp24 = (::openfl::display::DrawCommand(command))->__Param(0);		HX_STACK_VAR(tmp24,"tmp24");
						HX_STACK_LINE(188)
						Array< int > commands = tmp24;		HX_STACK_VAR(commands,"commands");
						HX_STACK_LINE(362)
						{
							HX_STACK_LINE(363)
							{
								HX_STACK_LINE(363)
								::openfl::_internal::renderer::opengl::utils::DrawPath tmp25 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentPath;		HX_STACK_VAR(tmp25,"tmp25");
								HX_STACK_LINE(363)
								bool tmp26 = tmp25->isRemovable;		HX_STACK_VAR(tmp26,"tmp26");
								HX_STACK_LINE(363)
								bool tmp27;		HX_STACK_VAR(tmp27,"tmp27");
								HX_STACK_LINE(363)
								if ((tmp26)){
									HX_STACK_LINE(363)
									::openfl::_internal::renderer::opengl::utils::DrawPath tmp28 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentPath;		HX_STACK_VAR(tmp28,"tmp28");
									HX_STACK_LINE(363)
									::openfl::_internal::renderer::opengl::utils::DrawPath tmp29 = tmp28;		HX_STACK_VAR(tmp29,"tmp29");
									HX_STACK_LINE(363)
									int tmp30 = tmp29->points->length;		HX_STACK_VAR(tmp30,"tmp30");
									HX_STACK_LINE(363)
									int tmp31 = tmp30;		HX_STACK_VAR(tmp31,"tmp31");
									HX_STACK_LINE(363)
									tmp27 = (tmp31 == (int)0);
								}
								else{
									HX_STACK_LINE(363)
									tmp27 = false;
								}
								HX_STACK_LINE(363)
								if ((tmp27)){
									HX_STACK_LINE(363)
									::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__drawPaths->pop().StaticCast< ::openfl::_internal::renderer::opengl::utils::DrawPath >();
								}
								else{
									HX_STACK_LINE(363)
									::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::closePath();
								}
							}
							HX_STACK_LINE(365)
							::openfl::display::GraphicsPathWinding tmp25 = winding;		HX_STACK_VAR(tmp25,"tmp25");
							HX_STACK_LINE(365)
							::openfl::display::GraphicsPathWinding _switch_1 = (tmp25);
							if (  ( _switch_1==::openfl::display::GraphicsPathWinding_obj::EVEN_ODD)){
								HX_STACK_LINE(367)
								::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentWinding = (int)0;
							}
							else if (  ( _switch_1==::openfl::display::GraphicsPathWinding_obj::NON_ZERO)){
								HX_STACK_LINE(369)
								::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentWinding = (int)1;
							}
							else  {
								HX_STACK_LINE(371)
								::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentWinding = (int)0;
							}
;
;
							HX_STACK_LINE(374)
							int command1;		HX_STACK_VAR(command1,"command1");
							HX_STACK_LINE(375)
							Float cx;		HX_STACK_VAR(cx,"cx");
							HX_STACK_LINE(375)
							Float cy;		HX_STACK_VAR(cy,"cy");
							HX_STACK_LINE(376)
							Float cx2;		HX_STACK_VAR(cx2,"cx2");
							HX_STACK_LINE(376)
							Float cy2;		HX_STACK_VAR(cy2,"cy2");
							HX_STACK_LINE(377)
							Float ax;		HX_STACK_VAR(ax,"ax");
							HX_STACK_LINE(377)
							Float ay;		HX_STACK_VAR(ay,"ay");
							HX_STACK_LINE(378)
							int idx = (int)0;		HX_STACK_VAR(idx,"idx");
							HX_STACK_LINE(379)
							{
								HX_STACK_LINE(379)
								int _g3 = (int)0;		HX_STACK_VAR(_g3,"_g3");
								HX_STACK_LINE(379)
								int tmp26 = commands->length;		HX_STACK_VAR(tmp26,"tmp26");
								HX_STACK_LINE(379)
								int _g2 = tmp26;		HX_STACK_VAR(_g2,"_g2");
								HX_STACK_LINE(379)
								while((true)){
									HX_STACK_LINE(379)
									bool tmp27 = (_g3 < _g2);		HX_STACK_VAR(tmp27,"tmp27");
									HX_STACK_LINE(379)
									bool tmp28 = !(tmp27);		HX_STACK_VAR(tmp28,"tmp28");
									HX_STACK_LINE(379)
									if ((tmp28)){
										HX_STACK_LINE(379)
										break;
									}
									HX_STACK_LINE(379)
									int tmp29 = (_g3)++;		HX_STACK_VAR(tmp29,"tmp29");
									HX_STACK_LINE(379)
									int i = tmp29;		HX_STACK_VAR(i,"i");
									HX_STACK_LINE(380)
									int tmp30 = commands->__get(i);		HX_STACK_VAR(tmp30,"tmp30");
									HX_STACK_LINE(380)
									command1 = ((Dynamic)(tmp30));
									HX_STACK_LINE(381)
									int tmp31 = command1;		HX_STACK_VAR(tmp31,"tmp31");
									HX_STACK_LINE(381)
									switch( (int)(tmp31)){
										case (int)1: {
											HX_STACK_LINE(383)
											Float tmp32 = data->__get(idx);		HX_STACK_VAR(tmp32,"tmp32");
											HX_STACK_LINE(383)
											ax = ((Dynamic)(tmp32));
											HX_STACK_LINE(384)
											int tmp33 = (idx + (int)1);		HX_STACK_VAR(tmp33,"tmp33");
											HX_STACK_LINE(384)
											Float tmp34 = data->__get(tmp33);		HX_STACK_VAR(tmp34,"tmp34");
											HX_STACK_LINE(384)
											ay = ((Dynamic)(tmp34));
											HX_STACK_LINE(385)
											hx::AddEq(idx,(int)2);
											HX_STACK_LINE(386)
											{
												HX_STACK_LINE(386)
												{
													HX_STACK_LINE(386)
													::openfl::_internal::renderer::opengl::utils::DrawPath tmp35 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentPath;		HX_STACK_VAR(tmp35,"tmp35");
													HX_STACK_LINE(386)
													bool tmp36 = tmp35->isRemovable;		HX_STACK_VAR(tmp36,"tmp36");
													HX_STACK_LINE(386)
													bool tmp37;		HX_STACK_VAR(tmp37,"tmp37");
													HX_STACK_LINE(386)
													if ((tmp36)){
														HX_STACK_LINE(386)
														::openfl::_internal::renderer::opengl::utils::DrawPath tmp38 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentPath;		HX_STACK_VAR(tmp38,"tmp38");
														HX_STACK_LINE(386)
														::openfl::_internal::renderer::opengl::utils::DrawPath tmp39 = tmp38;		HX_STACK_VAR(tmp39,"tmp39");
														HX_STACK_LINE(386)
														int tmp40 = tmp39->points->length;		HX_STACK_VAR(tmp40,"tmp40");
														HX_STACK_LINE(386)
														int tmp41 = tmp40;		HX_STACK_VAR(tmp41,"tmp41");
														HX_STACK_LINE(386)
														tmp37 = (tmp41 == (int)0);
													}
													else{
														HX_STACK_LINE(386)
														tmp37 = false;
													}
													HX_STACK_LINE(386)
													if ((tmp37)){
														HX_STACK_LINE(386)
														::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__drawPaths->pop().StaticCast< ::openfl::_internal::renderer::opengl::utils::DrawPath >();
													}
													else{
														HX_STACK_LINE(386)
														::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::closePath();
													}
												}
												HX_STACK_LINE(386)
												::openfl::_internal::renderer::opengl::utils::DrawPath tmp35 = ::openfl::_internal::renderer::opengl::utils::DrawPath_obj::__new();		HX_STACK_VAR(tmp35,"tmp35");
												HX_STACK_LINE(386)
												::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentPath = tmp35;
												HX_STACK_LINE(386)
												::openfl::_internal::renderer::opengl::utils::DrawPath tmp36 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentPath;		HX_STACK_VAR(tmp36,"tmp36");
												HX_STACK_LINE(386)
												::openfl::_internal::renderer::opengl::utils::LineStyle tmp37 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__line;		HX_STACK_VAR(tmp37,"tmp37");
												HX_STACK_LINE(386)
												::openfl::_internal::renderer::opengl::utils::FillType tmp38 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__fill;		HX_STACK_VAR(tmp38,"tmp38");
												HX_STACK_LINE(386)
												int tmp39 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__fillIndex;		HX_STACK_VAR(tmp39,"tmp39");
												HX_STACK_LINE(386)
												int tmp40 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentWinding;		HX_STACK_VAR(tmp40,"tmp40");
												HX_STACK_LINE(386)
												tmp36->update(tmp37,tmp38,tmp39,tmp40);
												HX_STACK_LINE(386)
												::openfl::_internal::renderer::opengl::utils::DrawPath tmp41 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentPath;		HX_STACK_VAR(tmp41,"tmp41");
												HX_STACK_LINE(386)
												tmp41->type = ::openfl::_internal::renderer::opengl::utils::GraphicType_obj::Polygon;
												HX_STACK_LINE(386)
												::openfl::_internal::renderer::opengl::utils::DrawPath tmp42 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentPath;		HX_STACK_VAR(tmp42,"tmp42");
												HX_STACK_LINE(386)
												Float tmp43 = ax;		HX_STACK_VAR(tmp43,"tmp43");
												HX_STACK_LINE(386)
												tmp42->points->push(tmp43);
												HX_STACK_LINE(386)
												::openfl::_internal::renderer::opengl::utils::DrawPath tmp44 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentPath;		HX_STACK_VAR(tmp44,"tmp44");
												HX_STACK_LINE(386)
												Float tmp45 = ay;		HX_STACK_VAR(tmp45,"tmp45");
												HX_STACK_LINE(386)
												tmp44->points->push(tmp45);
												HX_STACK_LINE(386)
												::openfl::_internal::renderer::opengl::utils::DrawPath tmp46 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentPath;		HX_STACK_VAR(tmp46,"tmp46");
												HX_STACK_LINE(386)
												::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__drawPaths->push(tmp46);
											}
										}
										;break;
										case (int)4: {
											HX_STACK_LINE(388)
											int tmp32 = (idx + (int)2);		HX_STACK_VAR(tmp32,"tmp32");
											HX_STACK_LINE(388)
											Float tmp33 = data->__get(tmp32);		HX_STACK_VAR(tmp33,"tmp33");
											HX_STACK_LINE(388)
											ax = ((Dynamic)(tmp33));
											HX_STACK_LINE(389)
											int tmp34 = (idx + (int)3);		HX_STACK_VAR(tmp34,"tmp34");
											HX_STACK_LINE(389)
											Float tmp35 = data->__get(tmp34);		HX_STACK_VAR(tmp35,"tmp35");
											HX_STACK_LINE(389)
											ay = ((Dynamic)(tmp35));
											HX_STACK_LINE(390)
											hx::AddEq(idx,(int)4);
											HX_STACK_LINE(391)
											{
												HX_STACK_LINE(391)
												{
													HX_STACK_LINE(391)
													::openfl::_internal::renderer::opengl::utils::DrawPath tmp36 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentPath;		HX_STACK_VAR(tmp36,"tmp36");
													HX_STACK_LINE(391)
													bool tmp37 = tmp36->isRemovable;		HX_STACK_VAR(tmp37,"tmp37");
													HX_STACK_LINE(391)
													bool tmp38;		HX_STACK_VAR(tmp38,"tmp38");
													HX_STACK_LINE(391)
													if ((tmp37)){
														HX_STACK_LINE(391)
														::openfl::_internal::renderer::opengl::utils::DrawPath tmp39 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentPath;		HX_STACK_VAR(tmp39,"tmp39");
														HX_STACK_LINE(391)
														::openfl::_internal::renderer::opengl::utils::DrawPath tmp40 = tmp39;		HX_STACK_VAR(tmp40,"tmp40");
														HX_STACK_LINE(391)
														int tmp41 = tmp40->points->length;		HX_STACK_VAR(tmp41,"tmp41");
														HX_STACK_LINE(391)
														int tmp42 = tmp41;		HX_STACK_VAR(tmp42,"tmp42");
														HX_STACK_LINE(391)
														tmp38 = (tmp42 == (int)0);
													}
													else{
														HX_STACK_LINE(391)
														tmp38 = false;
													}
													HX_STACK_LINE(391)
													if ((tmp38)){
														HX_STACK_LINE(391)
														::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__drawPaths->pop().StaticCast< ::openfl::_internal::renderer::opengl::utils::DrawPath >();
													}
													else{
														HX_STACK_LINE(391)
														::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::closePath();
													}
												}
												HX_STACK_LINE(391)
												::openfl::_internal::renderer::opengl::utils::DrawPath tmp36 = ::openfl::_internal::renderer::opengl::utils::DrawPath_obj::__new();		HX_STACK_VAR(tmp36,"tmp36");
												HX_STACK_LINE(391)
												::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentPath = tmp36;
												HX_STACK_LINE(391)
												::openfl::_internal::renderer::opengl::utils::DrawPath tmp37 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentPath;		HX_STACK_VAR(tmp37,"tmp37");
												HX_STACK_LINE(391)
												::openfl::_internal::renderer::opengl::utils::LineStyle tmp38 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__line;		HX_STACK_VAR(tmp38,"tmp38");
												HX_STACK_LINE(391)
												::openfl::_internal::renderer::opengl::utils::FillType tmp39 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__fill;		HX_STACK_VAR(tmp39,"tmp39");
												HX_STACK_LINE(391)
												int tmp40 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__fillIndex;		HX_STACK_VAR(tmp40,"tmp40");
												HX_STACK_LINE(391)
												int tmp41 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentWinding;		HX_STACK_VAR(tmp41,"tmp41");
												HX_STACK_LINE(391)
												tmp37->update(tmp38,tmp39,tmp40,tmp41);
												HX_STACK_LINE(391)
												::openfl::_internal::renderer::opengl::utils::DrawPath tmp42 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentPath;		HX_STACK_VAR(tmp42,"tmp42");
												HX_STACK_LINE(391)
												tmp42->type = ::openfl::_internal::renderer::opengl::utils::GraphicType_obj::Polygon;
												HX_STACK_LINE(391)
												::openfl::_internal::renderer::opengl::utils::DrawPath tmp43 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentPath;		HX_STACK_VAR(tmp43,"tmp43");
												HX_STACK_LINE(391)
												Float tmp44 = ax;		HX_STACK_VAR(tmp44,"tmp44");
												HX_STACK_LINE(391)
												tmp43->points->push(tmp44);
												HX_STACK_LINE(391)
												::openfl::_internal::renderer::opengl::utils::DrawPath tmp45 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentPath;		HX_STACK_VAR(tmp45,"tmp45");
												HX_STACK_LINE(391)
												Float tmp46 = ay;		HX_STACK_VAR(tmp46,"tmp46");
												HX_STACK_LINE(391)
												tmp45->points->push(tmp46);
												HX_STACK_LINE(391)
												::openfl::_internal::renderer::opengl::utils::DrawPath tmp47 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentPath;		HX_STACK_VAR(tmp47,"tmp47");
												HX_STACK_LINE(391)
												::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__drawPaths->push(tmp47);
											}
										}
										;break;
										case (int)2: {
											HX_STACK_LINE(393)
											Float tmp32 = data->__get(idx);		HX_STACK_VAR(tmp32,"tmp32");
											HX_STACK_LINE(393)
											ax = ((Dynamic)(tmp32));
											HX_STACK_LINE(394)
											int tmp33 = (idx + (int)1);		HX_STACK_VAR(tmp33,"tmp33");
											HX_STACK_LINE(394)
											Float tmp34 = data->__get(tmp33);		HX_STACK_VAR(tmp34,"tmp34");
											HX_STACK_LINE(394)
											ay = ((Dynamic)(tmp34));
											HX_STACK_LINE(395)
											hx::AddEq(idx,(int)2);
											HX_STACK_LINE(396)
											{
												HX_STACK_LINE(396)
												::openfl::_internal::renderer::opengl::utils::DrawPath tmp35 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentPath;		HX_STACK_VAR(tmp35,"tmp35");
												HX_STACK_LINE(396)
												Array< Float > points = tmp35->points;		HX_STACK_VAR(points,"points");
												HX_STACK_LINE(396)
												bool push_point = true;		HX_STACK_VAR(push_point,"push_point");
												HX_STACK_LINE(396)
												bool tmp36 = (points->length > (int)1);		HX_STACK_VAR(tmp36,"tmp36");
												HX_STACK_LINE(396)
												if ((tmp36)){
													HX_STACK_LINE(396)
													int tmp37 = (points->length - (int)2);		HX_STACK_VAR(tmp37,"tmp37");
													HX_STACK_LINE(396)
													Float tmp38 = points->__get(tmp37);		HX_STACK_VAR(tmp38,"tmp38");
													HX_STACK_LINE(396)
													Float lastX = tmp38;		HX_STACK_VAR(lastX,"lastX");
													HX_STACK_LINE(396)
													int tmp39 = (points->length - (int)1);		HX_STACK_VAR(tmp39,"tmp39");
													HX_STACK_LINE(396)
													Float tmp40 = points->__get(tmp39);		HX_STACK_VAR(tmp40,"tmp40");
													HX_STACK_LINE(396)
													Float lastY = tmp40;		HX_STACK_VAR(lastY,"lastY");
													HX_STACK_LINE(396)
													bool tmp41 = (lastX == ax);		HX_STACK_VAR(tmp41,"tmp41");
													HX_STACK_LINE(396)
													bool tmp42;		HX_STACK_VAR(tmp42,"tmp42");
													HX_STACK_LINE(396)
													if ((tmp41)){
														HX_STACK_LINE(396)
														tmp42 = (lastY == ay);
													}
													else{
														HX_STACK_LINE(396)
														tmp42 = false;
													}
													HX_STACK_LINE(396)
													if ((tmp42)){
														HX_STACK_LINE(396)
														push_point = false;
													}
												}
												HX_STACK_LINE(396)
												bool tmp37 = (push_point == true);		HX_STACK_VAR(tmp37,"tmp37");
												HX_STACK_LINE(396)
												if ((tmp37)){
													HX_STACK_LINE(396)
													::openfl::_internal::renderer::opengl::utils::DrawPath tmp38 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentPath;		HX_STACK_VAR(tmp38,"tmp38");
													HX_STACK_LINE(396)
													Float tmp39 = ax;		HX_STACK_VAR(tmp39,"tmp39");
													HX_STACK_LINE(396)
													tmp38->points->push(tmp39);
													HX_STACK_LINE(396)
													::openfl::_internal::renderer::opengl::utils::DrawPath tmp40 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentPath;		HX_STACK_VAR(tmp40,"tmp40");
													HX_STACK_LINE(396)
													Float tmp41 = ay;		HX_STACK_VAR(tmp41,"tmp41");
													HX_STACK_LINE(396)
													tmp40->points->push(tmp41);
												}
											}
										}
										;break;
										case (int)5: {
											HX_STACK_LINE(398)
											int tmp32 = (idx + (int)2);		HX_STACK_VAR(tmp32,"tmp32");
											HX_STACK_LINE(398)
											Float tmp33 = data->__get(tmp32);		HX_STACK_VAR(tmp33,"tmp33");
											HX_STACK_LINE(398)
											ax = ((Dynamic)(tmp33));
											HX_STACK_LINE(399)
											int tmp34 = (idx + (int)3);		HX_STACK_VAR(tmp34,"tmp34");
											HX_STACK_LINE(399)
											Float tmp35 = data->__get(tmp34);		HX_STACK_VAR(tmp35,"tmp35");
											HX_STACK_LINE(399)
											ay = ((Dynamic)(tmp35));
											HX_STACK_LINE(400)
											hx::AddEq(idx,(int)4);
											HX_STACK_LINE(401)
											{
												HX_STACK_LINE(401)
												::openfl::_internal::renderer::opengl::utils::DrawPath tmp36 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentPath;		HX_STACK_VAR(tmp36,"tmp36");
												HX_STACK_LINE(401)
												Array< Float > points = tmp36->points;		HX_STACK_VAR(points,"points");
												HX_STACK_LINE(401)
												bool push_point = true;		HX_STACK_VAR(push_point,"push_point");
												HX_STACK_LINE(401)
												bool tmp37 = (points->length > (int)1);		HX_STACK_VAR(tmp37,"tmp37");
												HX_STACK_LINE(401)
												if ((tmp37)){
													HX_STACK_LINE(401)
													int tmp38 = (points->length - (int)2);		HX_STACK_VAR(tmp38,"tmp38");
													HX_STACK_LINE(401)
													Float tmp39 = points->__get(tmp38);		HX_STACK_VAR(tmp39,"tmp39");
													HX_STACK_LINE(401)
													Float lastX = tmp39;		HX_STACK_VAR(lastX,"lastX");
													HX_STACK_LINE(401)
													int tmp40 = (points->length - (int)1);		HX_STACK_VAR(tmp40,"tmp40");
													HX_STACK_LINE(401)
													Float tmp41 = points->__get(tmp40);		HX_STACK_VAR(tmp41,"tmp41");
													HX_STACK_LINE(401)
													Float lastY = tmp41;		HX_STACK_VAR(lastY,"lastY");
													HX_STACK_LINE(401)
													bool tmp42 = (lastX == ax);		HX_STACK_VAR(tmp42,"tmp42");
													HX_STACK_LINE(401)
													bool tmp43;		HX_STACK_VAR(tmp43,"tmp43");
													HX_STACK_LINE(401)
													if ((tmp42)){
														HX_STACK_LINE(401)
														tmp43 = (lastY == ay);
													}
													else{
														HX_STACK_LINE(401)
														tmp43 = false;
													}
													HX_STACK_LINE(401)
													if ((tmp43)){
														HX_STACK_LINE(401)
														push_point = false;
													}
												}
												HX_STACK_LINE(401)
												bool tmp38 = (push_point == true);		HX_STACK_VAR(tmp38,"tmp38");
												HX_STACK_LINE(401)
												if ((tmp38)){
													HX_STACK_LINE(401)
													::openfl::_internal::renderer::opengl::utils::DrawPath tmp39 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentPath;		HX_STACK_VAR(tmp39,"tmp39");
													HX_STACK_LINE(401)
													Float tmp40 = ax;		HX_STACK_VAR(tmp40,"tmp40");
													HX_STACK_LINE(401)
													tmp39->points->push(tmp40);
													HX_STACK_LINE(401)
													::openfl::_internal::renderer::opengl::utils::DrawPath tmp41 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentPath;		HX_STACK_VAR(tmp41,"tmp41");
													HX_STACK_LINE(401)
													Float tmp42 = ay;		HX_STACK_VAR(tmp42,"tmp42");
													HX_STACK_LINE(401)
													tmp41->points->push(tmp42);
												}
											}
										}
										;break;
										case (int)3: {
											HX_STACK_LINE(403)
											Float tmp32 = data->__get(idx);		HX_STACK_VAR(tmp32,"tmp32");
											HX_STACK_LINE(403)
											cx = ((Dynamic)(tmp32));
											HX_STACK_LINE(404)
											int tmp33 = (idx + (int)1);		HX_STACK_VAR(tmp33,"tmp33");
											HX_STACK_LINE(404)
											Float tmp34 = data->__get(tmp33);		HX_STACK_VAR(tmp34,"tmp34");
											HX_STACK_LINE(404)
											cy = ((Dynamic)(tmp34));
											HX_STACK_LINE(405)
											int tmp35 = (idx + (int)2);		HX_STACK_VAR(tmp35,"tmp35");
											HX_STACK_LINE(405)
											Float tmp36 = data->__get(tmp35);		HX_STACK_VAR(tmp36,"tmp36");
											HX_STACK_LINE(405)
											ax = ((Dynamic)(tmp36));
											HX_STACK_LINE(406)
											int tmp37 = (idx + (int)3);		HX_STACK_VAR(tmp37,"tmp37");
											HX_STACK_LINE(406)
											Float tmp38 = data->__get(tmp37);		HX_STACK_VAR(tmp38,"tmp38");
											HX_STACK_LINE(406)
											ay = ((Dynamic)(tmp38));
											HX_STACK_LINE(407)
											hx::AddEq(idx,(int)4);
											HX_STACK_LINE(408)
											{
												HX_STACK_LINE(408)
												::openfl::_internal::renderer::opengl::utils::DrawPath tmp39 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentPath;		HX_STACK_VAR(tmp39,"tmp39");
												HX_STACK_LINE(408)
												int tmp40 = tmp39->points->length;		HX_STACK_VAR(tmp40,"tmp40");
												HX_STACK_LINE(408)
												bool tmp41 = (tmp40 == (int)0);		HX_STACK_VAR(tmp41,"tmp41");
												HX_STACK_LINE(408)
												if ((tmp41)){
													HX_STACK_LINE(408)
													{
														HX_STACK_LINE(408)
														::openfl::_internal::renderer::opengl::utils::DrawPath tmp42 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentPath;		HX_STACK_VAR(tmp42,"tmp42");
														HX_STACK_LINE(408)
														bool tmp43 = tmp42->isRemovable;		HX_STACK_VAR(tmp43,"tmp43");
														HX_STACK_LINE(408)
														bool tmp44;		HX_STACK_VAR(tmp44,"tmp44");
														HX_STACK_LINE(408)
														if ((tmp43)){
															HX_STACK_LINE(408)
															::openfl::_internal::renderer::opengl::utils::DrawPath tmp45 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentPath;		HX_STACK_VAR(tmp45,"tmp45");
															HX_STACK_LINE(408)
															::openfl::_internal::renderer::opengl::utils::DrawPath tmp46 = tmp45;		HX_STACK_VAR(tmp46,"tmp46");
															HX_STACK_LINE(408)
															int tmp47 = tmp46->points->length;		HX_STACK_VAR(tmp47,"tmp47");
															HX_STACK_LINE(408)
															int tmp48 = tmp47;		HX_STACK_VAR(tmp48,"tmp48");
															HX_STACK_LINE(408)
															tmp44 = (tmp48 == (int)0);
														}
														else{
															HX_STACK_LINE(408)
															tmp44 = false;
														}
														HX_STACK_LINE(408)
														if ((tmp44)){
															HX_STACK_LINE(408)
															::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__drawPaths->pop().StaticCast< ::openfl::_internal::renderer::opengl::utils::DrawPath >();
														}
														else{
															HX_STACK_LINE(408)
															::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::closePath();
														}
													}
													HX_STACK_LINE(408)
													::openfl::_internal::renderer::opengl::utils::DrawPath tmp42 = ::openfl::_internal::renderer::opengl::utils::DrawPath_obj::__new();		HX_STACK_VAR(tmp42,"tmp42");
													HX_STACK_LINE(408)
													::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentPath = tmp42;
													HX_STACK_LINE(408)
													::openfl::_internal::renderer::opengl::utils::DrawPath tmp43 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentPath;		HX_STACK_VAR(tmp43,"tmp43");
													HX_STACK_LINE(408)
													::openfl::_internal::renderer::opengl::utils::LineStyle tmp44 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__line;		HX_STACK_VAR(tmp44,"tmp44");
													HX_STACK_LINE(408)
													::openfl::_internal::renderer::opengl::utils::FillType tmp45 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__fill;		HX_STACK_VAR(tmp45,"tmp45");
													HX_STACK_LINE(408)
													int tmp46 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__fillIndex;		HX_STACK_VAR(tmp46,"tmp46");
													HX_STACK_LINE(408)
													int tmp47 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentWinding;		HX_STACK_VAR(tmp47,"tmp47");
													HX_STACK_LINE(408)
													tmp43->update(tmp44,tmp45,tmp46,tmp47);
													HX_STACK_LINE(408)
													::openfl::_internal::renderer::opengl::utils::DrawPath tmp48 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentPath;		HX_STACK_VAR(tmp48,"tmp48");
													HX_STACK_LINE(408)
													tmp48->type = ::openfl::_internal::renderer::opengl::utils::GraphicType_obj::Polygon;
													HX_STACK_LINE(408)
													::openfl::_internal::renderer::opengl::utils::DrawPath tmp49 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentPath;		HX_STACK_VAR(tmp49,"tmp49");
													HX_STACK_LINE(408)
													tmp49->points->push((int)0);
													HX_STACK_LINE(408)
													::openfl::_internal::renderer::opengl::utils::DrawPath tmp50 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentPath;		HX_STACK_VAR(tmp50,"tmp50");
													HX_STACK_LINE(408)
													tmp50->points->push((int)0);
													HX_STACK_LINE(408)
													::openfl::_internal::renderer::opengl::utils::DrawPath tmp51 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentPath;		HX_STACK_VAR(tmp51,"tmp51");
													HX_STACK_LINE(408)
													::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__drawPaths->push(tmp51);
												}
												HX_STACK_LINE(408)
												::openfl::_internal::renderer::opengl::utils::DrawPath tmp42 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentPath;		HX_STACK_VAR(tmp42,"tmp42");
												HX_STACK_LINE(408)
												Float tmp43 = cx;		HX_STACK_VAR(tmp43,"tmp43");
												HX_STACK_LINE(408)
												Float tmp44 = cy;		HX_STACK_VAR(tmp44,"tmp44");
												HX_STACK_LINE(408)
												Float tmp45 = ax;		HX_STACK_VAR(tmp45,"tmp45");
												HX_STACK_LINE(408)
												Float tmp46 = ay;		HX_STACK_VAR(tmp46,"tmp46");
												HX_STACK_LINE(408)
												::openfl::_internal::renderer::GraphicsPaths_obj::curveTo(tmp42->points,tmp43,tmp44,tmp45,tmp46);
											}
										}
										;break;
										case (int)6: {
											HX_STACK_LINE(410)
											Float tmp32 = data->__get(idx);		HX_STACK_VAR(tmp32,"tmp32");
											HX_STACK_LINE(410)
											cx = ((Dynamic)(tmp32));
											HX_STACK_LINE(411)
											int tmp33 = (idx + (int)1);		HX_STACK_VAR(tmp33,"tmp33");
											HX_STACK_LINE(411)
											Float tmp34 = data->__get(tmp33);		HX_STACK_VAR(tmp34,"tmp34");
											HX_STACK_LINE(411)
											cy = ((Dynamic)(tmp34));
											HX_STACK_LINE(412)
											int tmp35 = (idx + (int)2);		HX_STACK_VAR(tmp35,"tmp35");
											HX_STACK_LINE(412)
											Float tmp36 = data->__get(tmp35);		HX_STACK_VAR(tmp36,"tmp36");
											HX_STACK_LINE(412)
											cx2 = ((Dynamic)(tmp36));
											HX_STACK_LINE(413)
											int tmp37 = (idx + (int)3);		HX_STACK_VAR(tmp37,"tmp37");
											HX_STACK_LINE(413)
											Float tmp38 = data->__get(tmp37);		HX_STACK_VAR(tmp38,"tmp38");
											HX_STACK_LINE(413)
											cy2 = ((Dynamic)(tmp38));
											HX_STACK_LINE(414)
											int tmp39 = (idx + (int)4);		HX_STACK_VAR(tmp39,"tmp39");
											HX_STACK_LINE(414)
											Float tmp40 = data->__get(tmp39);		HX_STACK_VAR(tmp40,"tmp40");
											HX_STACK_LINE(414)
											ax = ((Dynamic)(tmp40));
											HX_STACK_LINE(415)
											int tmp41 = (idx + (int)5);		HX_STACK_VAR(tmp41,"tmp41");
											HX_STACK_LINE(415)
											Float tmp42 = data->__get(tmp41);		HX_STACK_VAR(tmp42,"tmp42");
											HX_STACK_LINE(415)
											ay = ((Dynamic)(tmp42));
											HX_STACK_LINE(416)
											hx::AddEq(idx,(int)6);
											HX_STACK_LINE(417)
											{
												HX_STACK_LINE(417)
												::openfl::_internal::renderer::opengl::utils::DrawPath tmp43 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentPath;		HX_STACK_VAR(tmp43,"tmp43");
												HX_STACK_LINE(417)
												int tmp44 = tmp43->points->length;		HX_STACK_VAR(tmp44,"tmp44");
												HX_STACK_LINE(417)
												bool tmp45 = (tmp44 == (int)0);		HX_STACK_VAR(tmp45,"tmp45");
												HX_STACK_LINE(417)
												if ((tmp45)){
													HX_STACK_LINE(417)
													{
														HX_STACK_LINE(417)
														::openfl::_internal::renderer::opengl::utils::DrawPath tmp46 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentPath;		HX_STACK_VAR(tmp46,"tmp46");
														HX_STACK_LINE(417)
														bool tmp47 = tmp46->isRemovable;		HX_STACK_VAR(tmp47,"tmp47");
														HX_STACK_LINE(417)
														bool tmp48;		HX_STACK_VAR(tmp48,"tmp48");
														HX_STACK_LINE(417)
														if ((tmp47)){
															HX_STACK_LINE(417)
															::openfl::_internal::renderer::opengl::utils::DrawPath tmp49 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentPath;		HX_STACK_VAR(tmp49,"tmp49");
															HX_STACK_LINE(417)
															::openfl::_internal::renderer::opengl::utils::DrawPath tmp50 = tmp49;		HX_STACK_VAR(tmp50,"tmp50");
															HX_STACK_LINE(417)
															int tmp51 = tmp50->points->length;		HX_STACK_VAR(tmp51,"tmp51");
															HX_STACK_LINE(417)
															int tmp52 = tmp51;		HX_STACK_VAR(tmp52,"tmp52");
															HX_STACK_LINE(417)
															tmp48 = (tmp52 == (int)0);
														}
														else{
															HX_STACK_LINE(417)
															tmp48 = false;
														}
														HX_STACK_LINE(417)
														if ((tmp48)){
															HX_STACK_LINE(417)
															::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__drawPaths->pop().StaticCast< ::openfl::_internal::renderer::opengl::utils::DrawPath >();
														}
														else{
															HX_STACK_LINE(417)
															::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::closePath();
														}
													}
													HX_STACK_LINE(417)
													::openfl::_internal::renderer::opengl::utils::DrawPath tmp46 = ::openfl::_internal::renderer::opengl::utils::DrawPath_obj::__new();		HX_STACK_VAR(tmp46,"tmp46");
													HX_STACK_LINE(417)
													::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentPath = tmp46;
													HX_STACK_LINE(417)
													::openfl::_internal::renderer::opengl::utils::DrawPath tmp47 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentPath;		HX_STACK_VAR(tmp47,"tmp47");
													HX_STACK_LINE(417)
													::openfl::_internal::renderer::opengl::utils::LineStyle tmp48 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__line;		HX_STACK_VAR(tmp48,"tmp48");
													HX_STACK_LINE(417)
													::openfl::_internal::renderer::opengl::utils::FillType tmp49 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__fill;		HX_STACK_VAR(tmp49,"tmp49");
													HX_STACK_LINE(417)
													int tmp50 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__fillIndex;		HX_STACK_VAR(tmp50,"tmp50");
													HX_STACK_LINE(417)
													int tmp51 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentWinding;		HX_STACK_VAR(tmp51,"tmp51");
													HX_STACK_LINE(417)
													tmp47->update(tmp48,tmp49,tmp50,tmp51);
													HX_STACK_LINE(417)
													::openfl::_internal::renderer::opengl::utils::DrawPath tmp52 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentPath;		HX_STACK_VAR(tmp52,"tmp52");
													HX_STACK_LINE(417)
													tmp52->type = ::openfl::_internal::renderer::opengl::utils::GraphicType_obj::Polygon;
													HX_STACK_LINE(417)
													::openfl::_internal::renderer::opengl::utils::DrawPath tmp53 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentPath;		HX_STACK_VAR(tmp53,"tmp53");
													HX_STACK_LINE(417)
													tmp53->points->push((int)0);
													HX_STACK_LINE(417)
													::openfl::_internal::renderer::opengl::utils::DrawPath tmp54 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentPath;		HX_STACK_VAR(tmp54,"tmp54");
													HX_STACK_LINE(417)
													tmp54->points->push((int)0);
													HX_STACK_LINE(417)
													::openfl::_internal::renderer::opengl::utils::DrawPath tmp55 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentPath;		HX_STACK_VAR(tmp55,"tmp55");
													HX_STACK_LINE(417)
													::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__drawPaths->push(tmp55);
												}
												HX_STACK_LINE(417)
												{
													HX_STACK_LINE(417)
													::openfl::_internal::renderer::opengl::utils::DrawPath tmp46 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentPath;		HX_STACK_VAR(tmp46,"tmp46");
													HX_STACK_LINE(417)
													Array< Float > points = tmp46->points;		HX_STACK_VAR(points,"points");
													HX_STACK_LINE(417)
													int n = (int)20;		HX_STACK_VAR(n,"n");
													HX_STACK_LINE(417)
													Float dt = (int)0;		HX_STACK_VAR(dt,"dt");
													HX_STACK_LINE(417)
													Float dt2 = (int)0;		HX_STACK_VAR(dt2,"dt2");
													HX_STACK_LINE(417)
													Float dt3 = (int)0;		HX_STACK_VAR(dt3,"dt3");
													HX_STACK_LINE(417)
													Float t2 = (int)0;		HX_STACK_VAR(t2,"t2");
													HX_STACK_LINE(417)
													Float t3 = (int)0;		HX_STACK_VAR(t3,"t3");
													HX_STACK_LINE(417)
													int tmp47 = (points->length - (int)2);		HX_STACK_VAR(tmp47,"tmp47");
													HX_STACK_LINE(417)
													Float tmp48 = points->__get(tmp47);		HX_STACK_VAR(tmp48,"tmp48");
													HX_STACK_LINE(417)
													Float fromX = tmp48;		HX_STACK_VAR(fromX,"fromX");
													HX_STACK_LINE(417)
													int tmp49 = (points->length - (int)1);		HX_STACK_VAR(tmp49,"tmp49");
													HX_STACK_LINE(417)
													Float tmp50 = points->__get(tmp49);		HX_STACK_VAR(tmp50,"tmp50");
													HX_STACK_LINE(417)
													Float fromY = tmp50;		HX_STACK_VAR(fromY,"fromY");
													HX_STACK_LINE(417)
													Float px = (int)0;		HX_STACK_VAR(px,"px");
													HX_STACK_LINE(417)
													Float py = (int)0;		HX_STACK_VAR(py,"py");
													HX_STACK_LINE(417)
													Float tmp51 = (int)0;		HX_STACK_VAR(tmp51,"tmp51");
													HX_STACK_LINE(417)
													{
														HX_STACK_LINE(417)
														int _g11 = (int)1;		HX_STACK_VAR(_g11,"_g11");
														HX_STACK_LINE(417)
														int tmp52 = (n + (int)1);		HX_STACK_VAR(tmp52,"tmp52");
														HX_STACK_LINE(417)
														int _g4 = tmp52;		HX_STACK_VAR(_g4,"_g4");
														HX_STACK_LINE(417)
														while((true)){
															HX_STACK_LINE(417)
															bool tmp53 = (_g11 < _g4);		HX_STACK_VAR(tmp53,"tmp53");
															HX_STACK_LINE(417)
															bool tmp54 = !(tmp53);		HX_STACK_VAR(tmp54,"tmp54");
															HX_STACK_LINE(417)
															if ((tmp54)){
																HX_STACK_LINE(417)
																break;
															}
															HX_STACK_LINE(417)
															int tmp55 = (_g11)++;		HX_STACK_VAR(tmp55,"tmp55");
															HX_STACK_LINE(417)
															int i1 = tmp55;		HX_STACK_VAR(i1,"i1");
															HX_STACK_LINE(417)
															Float tmp56 = (Float(i1) / Float(n));		HX_STACK_VAR(tmp56,"tmp56");
															HX_STACK_LINE(417)
															tmp51 = tmp56;
															HX_STACK_LINE(417)
															Float tmp57 = ((int)1 - tmp51);		HX_STACK_VAR(tmp57,"tmp57");
															HX_STACK_LINE(417)
															dt = tmp57;
															HX_STACK_LINE(417)
															Float tmp58 = (dt * dt);		HX_STACK_VAR(tmp58,"tmp58");
															HX_STACK_LINE(417)
															dt2 = tmp58;
															HX_STACK_LINE(417)
															Float tmp59 = (dt2 * dt);		HX_STACK_VAR(tmp59,"tmp59");
															HX_STACK_LINE(417)
															dt3 = tmp59;
															HX_STACK_LINE(417)
															Float tmp60 = (tmp51 * tmp51);		HX_STACK_VAR(tmp60,"tmp60");
															HX_STACK_LINE(417)
															t2 = tmp60;
															HX_STACK_LINE(417)
															Float tmp61 = (t2 * tmp51);		HX_STACK_VAR(tmp61,"tmp61");
															HX_STACK_LINE(417)
															t3 = tmp61;
															HX_STACK_LINE(417)
															Float tmp62 = (dt3 * fromX);		HX_STACK_VAR(tmp62,"tmp62");
															HX_STACK_LINE(417)
															Float tmp63 = ((int)3 * dt2);		HX_STACK_VAR(tmp63,"tmp63");
															HX_STACK_LINE(417)
															Float tmp64 = tmp51;		HX_STACK_VAR(tmp64,"tmp64");
															HX_STACK_LINE(417)
															Float tmp65 = (tmp63 * tmp64);		HX_STACK_VAR(tmp65,"tmp65");
															HX_STACK_LINE(417)
															Float tmp66 = cx;		HX_STACK_VAR(tmp66,"tmp66");
															HX_STACK_LINE(417)
															Float tmp67 = (tmp65 * tmp66);		HX_STACK_VAR(tmp67,"tmp67");
															HX_STACK_LINE(417)
															Float tmp68 = (tmp62 + tmp67);		HX_STACK_VAR(tmp68,"tmp68");
															HX_STACK_LINE(417)
															Float tmp69 = ((int)3 * dt);		HX_STACK_VAR(tmp69,"tmp69");
															HX_STACK_LINE(417)
															Float tmp70 = t2;		HX_STACK_VAR(tmp70,"tmp70");
															HX_STACK_LINE(417)
															Float tmp71 = (tmp69 * tmp70);		HX_STACK_VAR(tmp71,"tmp71");
															HX_STACK_LINE(417)
															Float tmp72 = cx2;		HX_STACK_VAR(tmp72,"tmp72");
															HX_STACK_LINE(417)
															Float tmp73 = (tmp71 * tmp72);		HX_STACK_VAR(tmp73,"tmp73");
															HX_STACK_LINE(417)
															Float tmp74 = (tmp68 + tmp73);		HX_STACK_VAR(tmp74,"tmp74");
															HX_STACK_LINE(417)
															Float tmp75 = (t3 * ax);		HX_STACK_VAR(tmp75,"tmp75");
															HX_STACK_LINE(417)
															Float tmp76 = (tmp74 + tmp75);		HX_STACK_VAR(tmp76,"tmp76");
															HX_STACK_LINE(417)
															px = tmp76;
															HX_STACK_LINE(417)
															Float tmp77 = (dt3 * fromY);		HX_STACK_VAR(tmp77,"tmp77");
															HX_STACK_LINE(417)
															Float tmp78 = ((int)3 * dt2);		HX_STACK_VAR(tmp78,"tmp78");
															HX_STACK_LINE(417)
															Float tmp79 = tmp51;		HX_STACK_VAR(tmp79,"tmp79");
															HX_STACK_LINE(417)
															Float tmp80 = (tmp78 * tmp79);		HX_STACK_VAR(tmp80,"tmp80");
															HX_STACK_LINE(417)
															Float tmp81 = cy;		HX_STACK_VAR(tmp81,"tmp81");
															HX_STACK_LINE(417)
															Float tmp82 = (tmp80 * tmp81);		HX_STACK_VAR(tmp82,"tmp82");
															HX_STACK_LINE(417)
															Float tmp83 = (tmp77 + tmp82);		HX_STACK_VAR(tmp83,"tmp83");
															HX_STACK_LINE(417)
															Float tmp84 = ((int)3 * dt);		HX_STACK_VAR(tmp84,"tmp84");
															HX_STACK_LINE(417)
															Float tmp85 = t2;		HX_STACK_VAR(tmp85,"tmp85");
															HX_STACK_LINE(417)
															Float tmp86 = (tmp84 * tmp85);		HX_STACK_VAR(tmp86,"tmp86");
															HX_STACK_LINE(417)
															Float tmp87 = cy2;		HX_STACK_VAR(tmp87,"tmp87");
															HX_STACK_LINE(417)
															Float tmp88 = (tmp86 * tmp87);		HX_STACK_VAR(tmp88,"tmp88");
															HX_STACK_LINE(417)
															Float tmp89 = (tmp83 + tmp88);		HX_STACK_VAR(tmp89,"tmp89");
															HX_STACK_LINE(417)
															Float tmp90 = (t3 * ay);		HX_STACK_VAR(tmp90,"tmp90");
															HX_STACK_LINE(417)
															Float tmp91 = (tmp89 + tmp90);		HX_STACK_VAR(tmp91,"tmp91");
															HX_STACK_LINE(417)
															py = tmp91;
															HX_STACK_LINE(417)
															Float tmp92 = px;		HX_STACK_VAR(tmp92,"tmp92");
															HX_STACK_LINE(417)
															points->push(tmp92);
															HX_STACK_LINE(417)
															Float tmp93 = py;		HX_STACK_VAR(tmp93,"tmp93");
															HX_STACK_LINE(417)
															points->push(tmp93);
														}
													}
												}
											}
										}
										;break;
										default: {
										}
									}
								}
							}
							HX_STACK_LINE(423)
							::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentWinding = (int)0;
						}
					}
					;break;
					case (int)18: {
						HX_STACK_LINE(188)
						::openfl::geom::Matrix tmp22 = (::openfl::display::DrawCommand(command))->__Param(0);		HX_STACK_VAR(tmp22,"tmp22");
						HX_STACK_LINE(188)
						::openfl::geom::Matrix m = tmp22;		HX_STACK_VAR(m,"m");
						HX_STACK_LINE(425)
						{
							HX_STACK_LINE(426)
							{
								HX_STACK_LINE(426)
								::openfl::_internal::renderer::opengl::utils::DrawPath tmp23 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentPath;		HX_STACK_VAR(tmp23,"tmp23");
								HX_STACK_LINE(426)
								bool tmp24 = tmp23->isRemovable;		HX_STACK_VAR(tmp24,"tmp24");
								HX_STACK_LINE(426)
								bool tmp25;		HX_STACK_VAR(tmp25,"tmp25");
								HX_STACK_LINE(426)
								if ((tmp24)){
									HX_STACK_LINE(426)
									::openfl::_internal::renderer::opengl::utils::DrawPath tmp26 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentPath;		HX_STACK_VAR(tmp26,"tmp26");
									HX_STACK_LINE(426)
									::openfl::_internal::renderer::opengl::utils::DrawPath tmp27 = tmp26;		HX_STACK_VAR(tmp27,"tmp27");
									HX_STACK_LINE(426)
									int tmp28 = tmp27->points->length;		HX_STACK_VAR(tmp28,"tmp28");
									HX_STACK_LINE(426)
									int tmp29 = tmp28;		HX_STACK_VAR(tmp29,"tmp29");
									HX_STACK_LINE(426)
									tmp25 = (tmp29 == (int)0);
								}
								else{
									HX_STACK_LINE(426)
									tmp25 = false;
								}
								HX_STACK_LINE(426)
								if ((tmp25)){
									HX_STACK_LINE(426)
									::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__drawPaths->pop().StaticCast< ::openfl::_internal::renderer::opengl::utils::DrawPath >();
								}
								else{
									HX_STACK_LINE(426)
									::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::closePath();
								}
							}
							HX_STACK_LINE(428)
							::openfl::_internal::renderer::opengl::utils::DrawPath tmp23 = ::openfl::_internal::renderer::opengl::utils::DrawPath_obj::__new();		HX_STACK_VAR(tmp23,"tmp23");
							HX_STACK_LINE(428)
							::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentPath = tmp23;
							HX_STACK_LINE(429)
							::openfl::_internal::renderer::opengl::utils::DrawPath tmp24 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentPath;		HX_STACK_VAR(tmp24,"tmp24");
							HX_STACK_LINE(429)
							::openfl::_internal::renderer::opengl::utils::LineStyle tmp25 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__line;		HX_STACK_VAR(tmp25,"tmp25");
							HX_STACK_LINE(429)
							::openfl::_internal::renderer::opengl::utils::FillType tmp26 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__fill;		HX_STACK_VAR(tmp26,"tmp26");
							HX_STACK_LINE(429)
							int tmp27 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__fillIndex;		HX_STACK_VAR(tmp27,"tmp27");
							HX_STACK_LINE(429)
							int tmp28 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentWinding;		HX_STACK_VAR(tmp28,"tmp28");
							HX_STACK_LINE(429)
							tmp24->update(tmp25,tmp26,tmp27,tmp28);
							HX_STACK_LINE(430)
							::openfl::geom::Matrix tmp29 = m;		HX_STACK_VAR(tmp29,"tmp29");
							HX_STACK_LINE(430)
							::openfl::_internal::renderer::opengl::utils::GraphicType tmp30 = ::openfl::_internal::renderer::opengl::utils::GraphicType_obj::OverrideMatrix(tmp29);		HX_STACK_VAR(tmp30,"tmp30");
							HX_STACK_LINE(430)
							::openfl::_internal::renderer::opengl::utils::DrawPath tmp31 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentPath;		HX_STACK_VAR(tmp31,"tmp31");
							HX_STACK_LINE(430)
							tmp31->type = tmp30;
							HX_STACK_LINE(431)
							::openfl::_internal::renderer::opengl::utils::DrawPath tmp32 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentPath;		HX_STACK_VAR(tmp32,"tmp32");
							HX_STACK_LINE(431)
							tmp32->isRemovable = false;
							HX_STACK_LINE(432)
							::openfl::_internal::renderer::opengl::utils::DrawPath tmp33 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentPath;		HX_STACK_VAR(tmp33,"tmp33");
							HX_STACK_LINE(432)
							::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__drawPaths->push(tmp33);
						}
					}
					;break;
					default: {
					}
				}
			}
		}
		HX_STACK_LINE(439)
		::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::closePath();
	}
	HX_STACK_LINE(443)
	graphics->__drawPaths = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__drawPaths;
	HX_STACK_LINE(445)
	::openfl::_internal::renderer::opengl::utils::GLStack tmp19 = glStack;		HX_STACK_VAR(tmp19,"tmp19");
	HX_STACK_LINE(445)
	return tmp19;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(PathBuiler_obj,build,return )


PathBuiler_obj::PathBuiler_obj()
{
}

bool PathBuiler_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"build") ) { outValue = build_dyn(); return true;  }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"__line") ) { outValue = __line; return true;  }
		if (HX_FIELD_EQ(inName,"__fill") ) { outValue = __fill; return true;  }
		if (HX_FIELD_EQ(inName,"moveTo") ) { outValue = moveTo_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"lineTo") ) { outValue = lineTo_dyn(); return true;  }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"endFill") ) { outValue = endFill_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"curveTo") ) { outValue = curveTo_dyn(); return true;  }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"closePath") ) { outValue = closePath_dyn(); return true;  }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"__drawPaths") ) { outValue = __drawPaths; return true;  }
		if (HX_FIELD_EQ(inName,"__fillIndex") ) { outValue = __fillIndex; return true;  }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"cubicCurveTo") ) { outValue = cubicCurveTo_dyn(); return true;  }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"__currentPath") ) { outValue = __currentPath; return true;  }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"graphicDataPop") ) { outValue = graphicDataPop_dyn(); return true;  }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"__currentWinding") ) { outValue = __currentWinding; return true;  }
	}
	return false;
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
static hx::StaticInfo sStaticStorageInfo[] = {
	{hx::fsObject /*::openfl::_internal::renderer::opengl::utils::DrawPath*/ ,(void *) &PathBuiler_obj::__currentPath,HX_HCSTRING("__currentPath","\x5e","\xff","\x5b","\xcb")},
	{hx::fsInt,(void *) &PathBuiler_obj::__currentWinding,HX_HCSTRING("__currentWinding","\x01","\x49","\x44","\x2a")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(void *) &PathBuiler_obj::__drawPaths,HX_HCSTRING("__drawPaths","\x6a","\x89","\x8e","\xb3")},
	{hx::fsObject /*::openfl::_internal::renderer::opengl::utils::LineStyle*/ ,(void *) &PathBuiler_obj::__line,HX_HCSTRING("__line","\x14","\x7b","\xab","\xf6")},
	{hx::fsObject /*::openfl::_internal::renderer::opengl::utils::FillType*/ ,(void *) &PathBuiler_obj::__fill,HX_HCSTRING("__fill","\xa3","\x31","\xb4","\xf2")},
	{hx::fsInt,(void *) &PathBuiler_obj::__fillIndex,HX_HCSTRING("__fillIndex","\x6f","\x0a","\xe8","\xba")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(PathBuiler_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(PathBuiler_obj::__currentPath,"__currentPath");
	HX_MARK_MEMBER_NAME(PathBuiler_obj::__currentWinding,"__currentWinding");
	HX_MARK_MEMBER_NAME(PathBuiler_obj::__drawPaths,"__drawPaths");
	HX_MARK_MEMBER_NAME(PathBuiler_obj::__line,"__line");
	HX_MARK_MEMBER_NAME(PathBuiler_obj::__fill,"__fill");
	HX_MARK_MEMBER_NAME(PathBuiler_obj::__fillIndex,"__fillIndex");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(PathBuiler_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(PathBuiler_obj::__currentPath,"__currentPath");
	HX_VISIT_MEMBER_NAME(PathBuiler_obj::__currentWinding,"__currentWinding");
	HX_VISIT_MEMBER_NAME(PathBuiler_obj::__drawPaths,"__drawPaths");
	HX_VISIT_MEMBER_NAME(PathBuiler_obj::__line,"__line");
	HX_VISIT_MEMBER_NAME(PathBuiler_obj::__fill,"__fill");
	HX_VISIT_MEMBER_NAME(PathBuiler_obj::__fillIndex,"__fillIndex");
};

#endif

hx::Class PathBuiler_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("__currentPath","\x5e","\xff","\x5b","\xcb"),
	HX_HCSTRING("__currentWinding","\x01","\x49","\x44","\x2a"),
	HX_HCSTRING("__drawPaths","\x6a","\x89","\x8e","\xb3"),
	HX_HCSTRING("__line","\x14","\x7b","\xab","\xf6"),
	HX_HCSTRING("__fill","\xa3","\x31","\xb4","\xf2"),
	HX_HCSTRING("__fillIndex","\x6f","\x0a","\xe8","\xba"),
	HX_HCSTRING("closePath","\x7d","\x65","\x20","\x14"),
	HX_HCSTRING("endFill","\xfe","\x87","\xe0","\x25"),
	HX_HCSTRING("moveTo","\xec","\xd2","\xac","\xcc"),
	HX_HCSTRING("lineTo","\x8f","\x46","\xa0","\xec"),
	HX_HCSTRING("curveTo","\x0a","\x60","\x88","\xce"),
	HX_HCSTRING("cubicCurveTo","\xe0","\x07","\x90","\x2e"),
	HX_HCSTRING("graphicDataPop","\xbf","\x67","\x3a","\x4f"),
	HX_HCSTRING("build","\x2e","\xdb","\xea","\xba"),
	::String(null()) };

void PathBuiler_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("openfl._internal.renderer.opengl.utils.PathBuiler","\x09","\xea","\x3d","\x60");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &PathBuiler_obj::__GetStatic;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< PathBuiler_obj >;
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

void PathBuiler_obj::__boot()
{
	__currentWinding= (int)0;
	__fillIndex= (int)0;
}

} // end namespace openfl
} // end namespace _internal
} // end namespace renderer
} // end namespace opengl
} // end namespace utils
