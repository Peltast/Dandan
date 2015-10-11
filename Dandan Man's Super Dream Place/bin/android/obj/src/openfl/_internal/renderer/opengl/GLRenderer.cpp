#include <hxcpp.h>

#ifndef INCLUDED_lime_app_IModule
#include <lime/app/IModule.h>
#endif
#ifndef INCLUDED_lime_graphics_GLRenderContext
#include <lime/graphics/GLRenderContext.h>
#endif
#ifndef INCLUDED_lime_graphics_opengl_GL
#include <lime/graphics/opengl/GL.h>
#endif
#ifndef INCLUDED_lime_graphics_opengl_GLFramebuffer
#include <lime/graphics/opengl/GLFramebuffer.h>
#endif
#ifndef INCLUDED_lime_graphics_opengl_GLObject
#include <lime/graphics/opengl/GLObject.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_AbstractMaskManager
#include <openfl/_internal/renderer/AbstractMaskManager.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_AbstractRenderer
#include <openfl/_internal/renderer/AbstractRenderer.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_RenderSession
#include <openfl/_internal/renderer/RenderSession.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_opengl_GLRenderer
#include <openfl/_internal/renderer/opengl/GLRenderer.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_opengl_shaders2_DefaultShader
#include <openfl/_internal/renderer/opengl/shaders2/DefaultShader.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_opengl_shaders2_Shader
#include <openfl/_internal/renderer/opengl/shaders2/Shader.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_opengl_utils_BlendModeManager
#include <openfl/_internal/renderer/opengl/utils/BlendModeManager.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_opengl_utils_FilterManager
#include <openfl/_internal/renderer/opengl/utils/FilterManager.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_opengl_utils_GLMaskManager
#include <openfl/_internal/renderer/opengl/utils/GLMaskManager.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_opengl_utils_ShaderManager
#include <openfl/_internal/renderer/opengl/utils/ShaderManager.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_opengl_utils_SpriteBatch
#include <openfl/_internal/renderer/opengl/utils/SpriteBatch.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_opengl_utils_StencilManager
#include <openfl/_internal/renderer/opengl/utils/StencilManager.h>
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
#ifndef INCLUDED_openfl_display_DisplayObjectContainer
#include <openfl/display/DisplayObjectContainer.h>
#endif
#ifndef INCLUDED_openfl_display_Graphics
#include <openfl/display/Graphics.h>
#endif
#ifndef INCLUDED_openfl_display_IBitmapDrawable
#include <openfl/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_openfl_display_InteractiveObject
#include <openfl/display/InteractiveObject.h>
#endif
#ifndef INCLUDED_openfl_display_PixelSnapping
#include <openfl/display/PixelSnapping.h>
#endif
#ifndef INCLUDED_openfl_display_Stage
#include <openfl/display/Stage.h>
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
#ifndef INCLUDED_openfl_geom_Point
#include <openfl/geom/Point.h>
#endif
#ifndef INCLUDED_openfl_geom_Rectangle
#include <openfl/geom/Rectangle.h>
#endif
namespace openfl{
namespace _internal{
namespace renderer{
namespace opengl{

Void GLRenderer_obj::__construct(hx::Null< int >  __o_width,hx::Null< int >  __o_height,::lime::graphics::GLRenderContext gl,hx::Null< bool >  __o_transparent,hx::Null< bool >  __o_antialias,hx::Null< bool >  __o_preserveDrawingBuffer)
{
HX_STACK_FRAME("openfl._internal.renderer.opengl.GLRenderer","new",0xb6a82d5e,"openfl._internal.renderer.opengl.GLRenderer.new","openfl/_internal/renderer/opengl/GLRenderer.hx",43,0xb2b97130)
HX_STACK_THIS(this)
HX_STACK_ARG(__o_width,"width")
HX_STACK_ARG(__o_height,"height")
HX_STACK_ARG(gl,"gl")
HX_STACK_ARG(__o_transparent,"transparent")
HX_STACK_ARG(__o_antialias,"antialias")
HX_STACK_ARG(__o_preserveDrawingBuffer,"preserveDrawingBuffer")
int width = __o_width.Default(800);
int height = __o_height.Default(600);
bool transparent = __o_transparent.Default(false);
bool antialias = __o_antialias.Default(false);
bool preserveDrawingBuffer = __o_preserveDrawingBuffer.Default(false);
{
	HX_STACK_LINE(71)
	this->vpHeight = (int)0;
	HX_STACK_LINE(70)
	this->vpWidth = (int)0;
	HX_STACK_LINE(69)
	this->vpY = (int)0;
	HX_STACK_LINE(68)
	this->vpX = (int)0;
	HX_STACK_LINE(76)
	int tmp = width;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(76)
	int tmp1 = height;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(76)
	super::__construct(tmp,tmp1);
	HX_STACK_LINE(78)
	this->transparent = transparent;
	HX_STACK_LINE(79)
	this->preserveDrawingBuffer = preserveDrawingBuffer;
	HX_STACK_LINE(80)
	this->width = width;
	HX_STACK_LINE(81)
	this->height = height;
	struct _Function_1_1{
		inline static Dynamic Block( bool &preserveDrawingBuffer,bool &antialias,bool &transparent){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","openfl/_internal/renderer/opengl/GLRenderer.hx",83,0xb2b97130)
			{
				hx::Anon __result = hx::Anon_obj::Create();
				__result->Add(HX_HCSTRING("alpha","\x5e","\xa7","\x96","\x21") , transparent,false);
				__result->Add(HX_HCSTRING("antialias","\xae","\xd6","\xe9","\x75") , antialias,false);
				__result->Add(HX_HCSTRING("premultipliedAlpha","\x28","\x8e","\x5c","\x1a") , transparent,false);
				__result->Add(HX_HCSTRING("stencil","\xfc","\xbd","\x03","\x80") , true,false);
				__result->Add(HX_HCSTRING("preserveDrawingBuffer","\x92","\xbb","\x1e","\x4b") , preserveDrawingBuffer,false);
				return __result;
			}
			return null();
		}
	};
	HX_STACK_LINE(83)
	Dynamic tmp2 = _Function_1_1::Block(preserveDrawingBuffer,antialias,transparent);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(83)
	this->options = tmp2;
	HX_STACK_LINE(91)
	int tmp3 = (::openfl::_internal::renderer::opengl::GLRenderer_obj::glContextId)++;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(91)
	this->_glContextId = tmp3;
	HX_STACK_LINE(92)
	this->gl = gl;
	HX_STACK_LINE(97)
	this->defaultFramebuffer = null();
	HX_STACK_LINE(100)
	int tmp4 = this->_glContextId;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(100)
	::lime::graphics::GLRenderContext tmp5 = gl;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(100)
	::openfl::_internal::renderer::opengl::GLRenderer_obj::glContexts[tmp4] = tmp5;
	HX_STACK_LINE(102)
	::openfl::geom::Matrix tmp6 = ::openfl::geom::Matrix_obj::__new(null(),null(),null(),null(),null(),null());		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(102)
	this->projectionMatrix = tmp6;
	HX_STACK_LINE(104)
	::openfl::geom::Point tmp7 = ::openfl::geom::Point_obj::__new(null(),null());		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(104)
	this->projection = tmp7;
	HX_STACK_LINE(105)
	int tmp8 = this->width;		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(105)
	Float tmp9 = (Float(tmp8) / Float((int)2));		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(105)
	::openfl::geom::Point tmp10 = this->projection;		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(105)
	tmp10->x = tmp9;
	HX_STACK_LINE(106)
	int tmp11 = this->height;		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(106)
	int tmp12 = -(tmp11);		HX_STACK_VAR(tmp12,"tmp12");
	HX_STACK_LINE(106)
	Float tmp13 = (Float(tmp12) / Float((int)2));		HX_STACK_VAR(tmp13,"tmp13");
	HX_STACK_LINE(106)
	::openfl::geom::Point tmp14 = this->projection;		HX_STACK_VAR(tmp14,"tmp14");
	HX_STACK_LINE(106)
	tmp14->y = tmp13;
	HX_STACK_LINE(108)
	::openfl::geom::Point tmp15 = ::openfl::geom::Point_obj::__new((int)0,(int)0);		HX_STACK_VAR(tmp15,"tmp15");
	HX_STACK_LINE(108)
	this->offset = tmp15;
	HX_STACK_LINE(110)
	int tmp16 = this->width;		HX_STACK_VAR(tmp16,"tmp16");
	HX_STACK_LINE(110)
	int tmp17 = this->height;		HX_STACK_VAR(tmp17,"tmp17");
	HX_STACK_LINE(110)
	this->resize(tmp16,tmp17);
	HX_STACK_LINE(111)
	this->contextLost = false;
	HX_STACK_LINE(113)
	::openfl::_internal::renderer::opengl::utils::ShaderManager tmp18 = ::openfl::_internal::renderer::opengl::utils::ShaderManager_obj::__new(gl);		HX_STACK_VAR(tmp18,"tmp18");
	HX_STACK_LINE(113)
	this->shaderManager = tmp18;
	HX_STACK_LINE(114)
	::openfl::_internal::renderer::opengl::utils::SpriteBatch tmp19 = ::openfl::_internal::renderer::opengl::utils::SpriteBatch_obj::__new(gl,null());		HX_STACK_VAR(tmp19,"tmp19");
	HX_STACK_LINE(114)
	this->spriteBatch = tmp19;
	HX_STACK_LINE(115)
	::lime::graphics::GLRenderContext tmp20 = gl;		HX_STACK_VAR(tmp20,"tmp20");
	HX_STACK_LINE(115)
	bool tmp21 = this->transparent;		HX_STACK_VAR(tmp21,"tmp21");
	HX_STACK_LINE(115)
	::openfl::_internal::renderer::opengl::utils::FilterManager tmp22 = ::openfl::_internal::renderer::opengl::utils::FilterManager_obj::__new(tmp20,tmp21);		HX_STACK_VAR(tmp22,"tmp22");
	HX_STACK_LINE(115)
	this->filterManager = tmp22;
	HX_STACK_LINE(116)
	::openfl::_internal::renderer::opengl::utils::StencilManager tmp23 = ::openfl::_internal::renderer::opengl::utils::StencilManager_obj::__new(gl);		HX_STACK_VAR(tmp23,"tmp23");
	HX_STACK_LINE(116)
	this->stencilManager = tmp23;
	HX_STACK_LINE(117)
	::openfl::_internal::renderer::opengl::utils::BlendModeManager tmp24 = ::openfl::_internal::renderer::opengl::utils::BlendModeManager_obj::__new(gl);		HX_STACK_VAR(tmp24,"tmp24");
	HX_STACK_LINE(117)
	this->blendModeManager = tmp24;
	HX_STACK_LINE(119)
	::openfl::_internal::renderer::RenderSession tmp25 = ::openfl::_internal::renderer::RenderSession_obj::__new();		HX_STACK_VAR(tmp25,"tmp25");
	HX_STACK_LINE(119)
	this->renderSession = tmp25;
	HX_STACK_LINE(120)
	::lime::graphics::GLRenderContext tmp26 = this->gl;		HX_STACK_VAR(tmp26,"tmp26");
	HX_STACK_LINE(120)
	::openfl::_internal::renderer::RenderSession tmp27 = this->renderSession;		HX_STACK_VAR(tmp27,"tmp27");
	HX_STACK_LINE(120)
	tmp27->gl = tmp26;
	HX_STACK_LINE(121)
	::openfl::_internal::renderer::RenderSession tmp28 = this->renderSession;		HX_STACK_VAR(tmp28,"tmp28");
	HX_STACK_LINE(121)
	tmp28->drawCount = (int)0;
	HX_STACK_LINE(122)
	::openfl::_internal::renderer::opengl::utils::ShaderManager tmp29 = this->shaderManager;		HX_STACK_VAR(tmp29,"tmp29");
	HX_STACK_LINE(122)
	::openfl::_internal::renderer::RenderSession tmp30 = this->renderSession;		HX_STACK_VAR(tmp30,"tmp30");
	HX_STACK_LINE(122)
	tmp30->shaderManager = tmp29;
	HX_STACK_LINE(123)
	::openfl::_internal::renderer::opengl::utils::GLMaskManager tmp31 = this->maskManager;		HX_STACK_VAR(tmp31,"tmp31");
	HX_STACK_LINE(123)
	::openfl::_internal::renderer::RenderSession tmp32 = this->renderSession;		HX_STACK_VAR(tmp32,"tmp32");
	HX_STACK_LINE(123)
	tmp32->maskManager = tmp31;
	HX_STACK_LINE(124)
	::openfl::_internal::renderer::opengl::utils::FilterManager tmp33 = this->filterManager;		HX_STACK_VAR(tmp33,"tmp33");
	HX_STACK_LINE(124)
	::openfl::_internal::renderer::RenderSession tmp34 = this->renderSession;		HX_STACK_VAR(tmp34,"tmp34");
	HX_STACK_LINE(124)
	tmp34->filterManager = tmp33;
	HX_STACK_LINE(125)
	::openfl::_internal::renderer::opengl::utils::BlendModeManager tmp35 = this->blendModeManager;		HX_STACK_VAR(tmp35,"tmp35");
	HX_STACK_LINE(125)
	::openfl::_internal::renderer::RenderSession tmp36 = this->renderSession;		HX_STACK_VAR(tmp36,"tmp36");
	HX_STACK_LINE(125)
	tmp36->blendModeManager = tmp35;
	HX_STACK_LINE(126)
	::openfl::_internal::renderer::opengl::utils::SpriteBatch tmp37 = this->spriteBatch;		HX_STACK_VAR(tmp37,"tmp37");
	HX_STACK_LINE(126)
	::openfl::_internal::renderer::RenderSession tmp38 = this->renderSession;		HX_STACK_VAR(tmp38,"tmp38");
	HX_STACK_LINE(126)
	tmp38->spriteBatch = tmp37;
	HX_STACK_LINE(127)
	::openfl::_internal::renderer::opengl::utils::StencilManager tmp39 = this->stencilManager;		HX_STACK_VAR(tmp39,"tmp39");
	HX_STACK_LINE(127)
	::openfl::_internal::renderer::RenderSession tmp40 = this->renderSession;		HX_STACK_VAR(tmp40,"tmp40");
	HX_STACK_LINE(127)
	tmp40->stencilManager = tmp39;
	HX_STACK_LINE(128)
	::openfl::_internal::renderer::RenderSession tmp41 = this->renderSession;		HX_STACK_VAR(tmp41,"tmp41");
	HX_STACK_LINE(128)
	tmp41->renderer = hx::ObjectPtr<OBJ_>(this);
	HX_STACK_LINE(129)
	::lime::graphics::opengl::GLFramebuffer tmp42 = this->defaultFramebuffer;		HX_STACK_VAR(tmp42,"tmp42");
	HX_STACK_LINE(129)
	::openfl::_internal::renderer::RenderSession tmp43 = this->renderSession;		HX_STACK_VAR(tmp43,"tmp43");
	HX_STACK_LINE(129)
	tmp43->defaultFramebuffer = tmp42;
	HX_STACK_LINE(130)
	::openfl::geom::Matrix tmp44 = this->projectionMatrix;		HX_STACK_VAR(tmp44,"tmp44");
	HX_STACK_LINE(130)
	::openfl::_internal::renderer::RenderSession tmp45 = this->renderSession;		HX_STACK_VAR(tmp45,"tmp45");
	HX_STACK_LINE(130)
	tmp45->projectionMatrix = tmp44;
	HX_STACK_LINE(132)
	::openfl::_internal::renderer::RenderSession tmp46 = this->renderSession;		HX_STACK_VAR(tmp46,"tmp46");
	HX_STACK_LINE(132)
	::openfl::_internal::renderer::opengl::utils::GLMaskManager tmp47 = ::openfl::_internal::renderer::opengl::utils::GLMaskManager_obj::__new(tmp46);		HX_STACK_VAR(tmp47,"tmp47");
	HX_STACK_LINE(132)
	this->maskManager = tmp47;
	HX_STACK_LINE(133)
	::openfl::_internal::renderer::opengl::utils::GLMaskManager tmp48 = this->maskManager;		HX_STACK_VAR(tmp48,"tmp48");
	HX_STACK_LINE(133)
	::openfl::_internal::renderer::RenderSession tmp49 = this->renderSession;		HX_STACK_VAR(tmp49,"tmp49");
	HX_STACK_LINE(133)
	tmp49->maskManager = tmp48;
	HX_STACK_LINE(135)
	::openfl::_internal::renderer::opengl::utils::ShaderManager tmp50 = this->shaderManager;		HX_STACK_VAR(tmp50,"tmp50");
	HX_STACK_LINE(135)
	::openfl::_internal::renderer::opengl::utils::ShaderManager tmp51 = this->shaderManager;		HX_STACK_VAR(tmp51,"tmp51");
	HX_STACK_LINE(135)
	::openfl::_internal::renderer::opengl::shaders2::DefaultShader tmp52 = tmp51->defaultShader;		HX_STACK_VAR(tmp52,"tmp52");
	HX_STACK_LINE(135)
	tmp50->setShader(tmp52,null());
	HX_STACK_LINE(137)
	{
		HX_STACK_LINE(137)
		int tmp53 = gl->DEPTH_TEST;		HX_STACK_VAR(tmp53,"tmp53");
		HX_STACK_LINE(137)
		::lime::graphics::opengl::GL_obj::lime_gl_disable(tmp53);
	}
	HX_STACK_LINE(138)
	{
		HX_STACK_LINE(138)
		int tmp53 = gl->CULL_FACE;		HX_STACK_VAR(tmp53,"tmp53");
		HX_STACK_LINE(138)
		::lime::graphics::opengl::GL_obj::lime_gl_disable(tmp53);
	}
	HX_STACK_LINE(140)
	{
		HX_STACK_LINE(140)
		int tmp53 = gl->BLEND;		HX_STACK_VAR(tmp53,"tmp53");
		HX_STACK_LINE(140)
		::lime::graphics::opengl::GL_obj::lime_gl_enable(tmp53);
	}
	HX_STACK_LINE(141)
	{
		HX_STACK_LINE(141)
		bool tmp53 = this->transparent;		HX_STACK_VAR(tmp53,"tmp53");
		HX_STACK_LINE(141)
		::lime::graphics::opengl::GL_obj::lime_gl_color_mask(true,true,true,tmp53);
	}
}
;
	return null();
}

//GLRenderer_obj::~GLRenderer_obj() { }

Dynamic GLRenderer_obj::__CreateEmpty() { return  new GLRenderer_obj; }
hx::ObjectPtr< GLRenderer_obj > GLRenderer_obj::__new(hx::Null< int >  __o_width,hx::Null< int >  __o_height,::lime::graphics::GLRenderContext gl,hx::Null< bool >  __o_transparent,hx::Null< bool >  __o_antialias,hx::Null< bool >  __o_preserveDrawingBuffer)
{  hx::ObjectPtr< GLRenderer_obj > _result_ = new GLRenderer_obj();
	_result_->__construct(__o_width,__o_height,gl,__o_transparent,__o_antialias,__o_preserveDrawingBuffer);
	return _result_;}

Dynamic GLRenderer_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< GLRenderer_obj > _result_ = new GLRenderer_obj();
	_result_->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3],inArgs[4],inArgs[5]);
	return _result_;}

Void GLRenderer_obj::destroy( ){
{
		HX_STACK_FRAME("openfl._internal.renderer.opengl.GLRenderer","destroy",0xb1ffe0f8,"openfl._internal.renderer.opengl.GLRenderer.destroy","openfl/_internal/renderer/opengl/GLRenderer.hx",146,0xb2b97130)
		HX_STACK_THIS(this)
		HX_STACK_LINE(151)
		int tmp = this->_glContextId;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(151)
		::openfl::_internal::renderer::opengl::GLRenderer_obj::glContexts[tmp] = null();
		HX_STACK_LINE(153)
		this->projection = null();
		HX_STACK_LINE(154)
		this->offset = null();
		HX_STACK_LINE(156)
		::openfl::_internal::renderer::opengl::utils::ShaderManager tmp1 = this->shaderManager;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(156)
		tmp1->destroy();
		HX_STACK_LINE(157)
		::openfl::_internal::renderer::opengl::utils::SpriteBatch tmp2 = this->spriteBatch;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(157)
		tmp2->destroy();
		HX_STACK_LINE(158)
		::openfl::_internal::renderer::opengl::utils::GLMaskManager tmp3 = this->maskManager;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(158)
		tmp3->destroy();
		HX_STACK_LINE(159)
		::openfl::_internal::renderer::opengl::utils::FilterManager tmp4 = this->filterManager;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(159)
		tmp4->destroy();
		HX_STACK_LINE(161)
		this->shaderManager = null();
		HX_STACK_LINE(162)
		this->spriteBatch = null();
		HX_STACK_LINE(163)
		this->maskManager = null();
		HX_STACK_LINE(164)
		this->filterManager = null();
		HX_STACK_LINE(166)
		this->gl = null();
		HX_STACK_LINE(168)
		this->renderSession = null();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(GLRenderer_obj,destroy,(void))

Void GLRenderer_obj::setViewport( int x,int y,int width,int height){
{
		HX_STACK_FRAME("openfl._internal.renderer.opengl.GLRenderer","setViewport",0x049ca126,"openfl._internal.renderer.opengl.GLRenderer.setViewport","openfl/_internal/renderer/opengl/GLRenderer.hx",172,0xb2b97130)
		HX_STACK_THIS(this)
		HX_STACK_ARG(x,"x")
		HX_STACK_ARG(y,"y")
		HX_STACK_ARG(width,"width")
		HX_STACK_ARG(height,"height")
		HX_STACK_LINE(173)
		int tmp = this->vpX;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(173)
		int tmp1 = x;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(173)
		bool tmp2 = (tmp == tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(173)
		bool tmp3 = tmp2;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(173)
		bool tmp4;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(173)
		if ((tmp3)){
			HX_STACK_LINE(173)
			int tmp5 = this->vpY;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(173)
			int tmp6 = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(173)
			int tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(173)
			int tmp8 = y;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(173)
			tmp4 = (tmp7 == tmp8);
		}
		else{
			HX_STACK_LINE(173)
			tmp4 = false;
		}
		HX_STACK_LINE(173)
		bool tmp5 = tmp4;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(173)
		bool tmp6;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(173)
		if ((tmp5)){
			HX_STACK_LINE(173)
			int tmp7 = this->vpWidth;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(173)
			int tmp8 = tmp7;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(173)
			int tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(173)
			int tmp10 = width;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(173)
			tmp6 = (tmp9 == tmp10);
		}
		else{
			HX_STACK_LINE(173)
			tmp6 = false;
		}
		HX_STACK_LINE(173)
		bool tmp7;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(173)
		if ((tmp6)){
			HX_STACK_LINE(173)
			int tmp8 = this->vpHeight;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(173)
			int tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(173)
			int tmp10 = height;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(173)
			tmp7 = (tmp9 == tmp10);
		}
		else{
			HX_STACK_LINE(173)
			tmp7 = false;
		}
		HX_STACK_LINE(173)
		bool tmp8 = !(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(173)
		if ((tmp8)){
			HX_STACK_LINE(174)
			this->vpX = x;
			HX_STACK_LINE(175)
			this->vpY = y;
			HX_STACK_LINE(176)
			this->vpWidth = width;
			HX_STACK_LINE(177)
			this->vpHeight = height;
			HX_STACK_LINE(178)
			{
				HX_STACK_LINE(178)
				int tmp9 = x;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(178)
				int tmp10 = y;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(178)
				int tmp11 = width;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(178)
				int tmp12 = height;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(178)
				::lime::graphics::opengl::GL_obj::lime_gl_viewport(tmp9,tmp10,tmp11,tmp12);
			}
			HX_STACK_LINE(179)
			int tmp9 = x;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(179)
			int tmp10 = y;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(179)
			int tmp11 = width;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(179)
			int tmp12 = height;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(179)
			this->setOrtho(tmp9,tmp10,tmp11,tmp12);
		}
	}
return null();
}


Void GLRenderer_obj::setOrtho( Float x,Float y,Float width,Float height){
{
		HX_STACK_FRAME("openfl._internal.renderer.opengl.GLRenderer","setOrtho",0x80654a78,"openfl._internal.renderer.opengl.GLRenderer.setOrtho","openfl/_internal/renderer/opengl/GLRenderer.hx",183,0xb2b97130)
		HX_STACK_THIS(this)
		HX_STACK_ARG(x,"x")
		HX_STACK_ARG(y,"y")
		HX_STACK_ARG(width,"width")
		HX_STACK_ARG(height,"height")
		HX_STACK_LINE(184)
		::openfl::geom::Matrix tmp = this->projectionMatrix;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(184)
		::openfl::geom::Matrix o = tmp;		HX_STACK_VAR(o,"o");
		HX_STACK_LINE(185)
		o->identity();
		HX_STACK_LINE(186)
		Float tmp1 = (Float((int)1) / Float(width));		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(186)
		Float tmp2 = (tmp1 * (int)2);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(186)
		o->a = tmp2;
		HX_STACK_LINE(187)
		int tmp3 = (int)-1;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(187)
		Float tmp4 = height;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(187)
		Float tmp5 = (Float(tmp3) / Float(tmp4));		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(187)
		Float tmp6 = (tmp5 * (int)2);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(187)
		o->d = tmp6;
		HX_STACK_LINE(188)
		int tmp7 = (int)-1;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(188)
		Float tmp8 = (x * o->a);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(188)
		Float tmp9 = (tmp7 - tmp8);		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(188)
		o->tx = tmp9;
		HX_STACK_LINE(189)
		Float tmp10 = (y * o->d);		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(189)
		Float tmp11 = ((int)1 - tmp10);		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(189)
		o->ty = tmp11;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC4(GLRenderer_obj,setOrtho,(void))

Void GLRenderer_obj::handleContextLost( Dynamic event){
{
		HX_STACK_FRAME("openfl._internal.renderer.opengl.GLRenderer","handleContextLost",0x032f5229,"openfl._internal.renderer.opengl.GLRenderer.handleContextLost","openfl/_internal/renderer/opengl/GLRenderer.hx",216,0xb2b97130)
		HX_STACK_THIS(this)
		HX_STACK_ARG(event,"event")
		HX_STACK_LINE(218)
		event->__Field(HX_HCSTRING("preventDefault","\xc9","\x2c","\xa5","\x67"), hx::paccDynamic )();
		HX_STACK_LINE(219)
		this->contextLost = true;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(GLRenderer_obj,handleContextLost,(void))

Void GLRenderer_obj::handleContextRestored( ){
{
		HX_STACK_FRAME("openfl._internal.renderer.opengl.GLRenderer","handleContextRestored",0x3ebbac1b,"openfl._internal.renderer.opengl.GLRenderer.handleContextRestored","openfl/_internal/renderer/opengl/GLRenderer.hx",224,0xb2b97130)
		HX_STACK_THIS(this)
		HX_STACK_LINE(244)
		::lime::graphics::GLRenderContext tmp = this->gl;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(244)
		::lime::graphics::GLRenderContext gl = tmp;		HX_STACK_VAR(gl,"gl");
		HX_STACK_LINE(245)
		(::openfl::_internal::renderer::opengl::GLRenderer_obj::glContextId)++;
		HX_STACK_LINE(247)
		::openfl::_internal::renderer::opengl::utils::ShaderManager tmp1 = this->shaderManager;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(247)
		::lime::graphics::GLRenderContext tmp2 = gl;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(247)
		tmp1->setContext(tmp2);
		HX_STACK_LINE(248)
		::openfl::_internal::renderer::opengl::utils::SpriteBatch tmp3 = this->spriteBatch;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(248)
		::lime::graphics::GLRenderContext tmp4 = gl;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(248)
		tmp3->setContext(tmp4);
		HX_STACK_LINE(249)
		::openfl::_internal::renderer::opengl::utils::GLMaskManager tmp5 = this->maskManager;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(249)
		::lime::graphics::GLRenderContext tmp6 = gl;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(249)
		tmp5->setContext(tmp6);
		HX_STACK_LINE(250)
		::openfl::_internal::renderer::opengl::utils::FilterManager tmp7 = this->filterManager;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(250)
		::lime::graphics::GLRenderContext tmp8 = gl;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(250)
		tmp7->setContext(tmp8);
		HX_STACK_LINE(252)
		::openfl::_internal::renderer::RenderSession tmp9 = this->renderSession;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(252)
		tmp9->gl = gl;
		HX_STACK_LINE(257)
		this->defaultFramebuffer = null();
		HX_STACK_LINE(260)
		{
			HX_STACK_LINE(260)
			int tmp10 = gl->DEPTH_TEST;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(260)
			::lime::graphics::opengl::GL_obj::lime_gl_disable(tmp10);
		}
		HX_STACK_LINE(261)
		{
			HX_STACK_LINE(261)
			int tmp10 = gl->CULL_FACE;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(261)
			::lime::graphics::opengl::GL_obj::lime_gl_disable(tmp10);
		}
		HX_STACK_LINE(263)
		{
			HX_STACK_LINE(263)
			int tmp10 = gl->BLEND;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(263)
			::lime::graphics::opengl::GL_obj::lime_gl_enable(tmp10);
		}
		HX_STACK_LINE(264)
		{
			HX_STACK_LINE(264)
			bool tmp10 = this->transparent;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(264)
			::lime::graphics::opengl::GL_obj::lime_gl_color_mask(true,true,true,tmp10);
		}
		HX_STACK_LINE(266)
		int tmp10 = this->width;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(266)
		int tmp11 = this->height;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(266)
		this->setViewport((int)0,(int)0,tmp10,tmp11);
		HX_STACK_LINE(275)
		this->contextLost = false;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(GLRenderer_obj,handleContextRestored,(void))

Void GLRenderer_obj::render( ::openfl::display::Stage stage){
{
		HX_STACK_FRAME("openfl._internal.renderer.opengl.GLRenderer","render",0x72dac118,"openfl._internal.renderer.opengl.GLRenderer.render","openfl/_internal/renderer/opengl/GLRenderer.hx",280,0xb2b97130)
		HX_STACK_THIS(this)
		HX_STACK_ARG(stage,"stage")
		HX_STACK_LINE(282)
		bool tmp = this->contextLost;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(282)
		if ((tmp)){
			HX_STACK_LINE(282)
			return null();
		}
		HX_STACK_LINE(286)
		::lime::graphics::GLRenderContext tmp1 = this->gl;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(286)
		::lime::graphics::GLRenderContext gl = tmp1;		HX_STACK_VAR(gl,"gl");
		HX_STACK_LINE(287)
		int tmp2 = this->width;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(287)
		int tmp3 = this->height;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(287)
		this->setViewport((int)0,(int)0,tmp2,tmp3);
		HX_STACK_LINE(289)
		{
			HX_STACK_LINE(289)
			::lime::graphics::opengl::GLFramebuffer tmp4 = this->defaultFramebuffer;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(289)
			::lime::graphics::opengl::GLFramebuffer framebuffer = tmp4;		HX_STACK_VAR(framebuffer,"framebuffer");
			HX_STACK_LINE(289)
			{
				HX_STACK_LINE(289)
				int tmp5 = gl->FRAMEBUFFER;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(289)
				bool tmp6 = (framebuffer == null());		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(289)
				int tmp7;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(289)
				if ((tmp6)){
					HX_STACK_LINE(289)
					tmp7 = (int)0;
				}
				else{
					HX_STACK_LINE(289)
					tmp7 = framebuffer->id;
				}
				HX_STACK_LINE(289)
				::lime::graphics::opengl::GL_obj::lime_gl_bind_framebuffer(tmp5,tmp7);
			}
		}
		HX_STACK_LINE(291)
		bool tmp4 = this->transparent;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(291)
		if ((tmp4)){
			HX_STACK_LINE(293)
			::lime::graphics::opengl::GL_obj::lime_gl_clear_color((int)0,(int)0,(int)0,(int)0);
		}
		else{
			HX_STACK_LINE(297)
			Float tmp5 = stage->__colorSplit->__get((int)0);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(297)
			Float tmp6 = stage->__colorSplit->__get((int)1);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(297)
			Float tmp7 = stage->__colorSplit->__get((int)2);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(297)
			::lime::graphics::opengl::GL_obj::lime_gl_clear_color(tmp5,tmp6,tmp7,(int)1);
		}
		HX_STACK_LINE(301)
		{
			HX_STACK_LINE(301)
			int tmp5 = gl->COLOR_BUFFER_BIT;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(301)
			::lime::graphics::opengl::GL_obj::lime_gl_clear(tmp5);
		}
		HX_STACK_LINE(302)
		::openfl::display::Stage tmp5 = stage;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(302)
		::openfl::geom::Point tmp6 = this->projection;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(302)
		this->renderDisplayObject(tmp5,tmp6,null());
	}
return null();
}


Void GLRenderer_obj::renderDisplayObject( ::openfl::display::DisplayObject displayObject,::openfl::geom::Point projection,::lime::graphics::opengl::GLFramebuffer buffer){
{
		HX_STACK_FRAME("openfl._internal.renderer.opengl.GLRenderer","renderDisplayObject",0x5792fa69,"openfl._internal.renderer.opengl.GLRenderer.renderDisplayObject","openfl/_internal/renderer/opengl/GLRenderer.hx",330,0xb2b97130)
		HX_STACK_THIS(this)
		HX_STACK_ARG(displayObject,"displayObject")
		HX_STACK_ARG(projection,"projection")
		HX_STACK_ARG(buffer,"buffer")
		HX_STACK_LINE(332)
		::openfl::_internal::renderer::RenderSession tmp = this->renderSession;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(332)
		tmp->blendModeManager->setBlendMode(::openfl::display::BlendMode_obj::NORMAL,null());
		HX_STACK_LINE(334)
		::openfl::_internal::renderer::RenderSession tmp1 = this->renderSession;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(334)
		tmp1->drawCount = (int)0;
		HX_STACK_LINE(335)
		::openfl::_internal::renderer::RenderSession tmp2 = this->renderSession;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(335)
		tmp2->currentBlendMode = null();
		HX_STACK_LINE(337)
		::openfl::_internal::renderer::opengl::utils::SpriteBatch tmp3 = this->spriteBatch;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(337)
		::openfl::_internal::renderer::RenderSession tmp4 = this->renderSession;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(337)
		tmp3->begin(tmp4,null());
		HX_STACK_LINE(338)
		::openfl::_internal::renderer::opengl::utils::FilterManager tmp5 = this->filterManager;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(338)
		::openfl::_internal::renderer::RenderSession tmp6 = this->renderSession;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(338)
		::lime::graphics::opengl::GLFramebuffer tmp7 = buffer;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(338)
		tmp5->begin(tmp6,tmp7);
		HX_STACK_LINE(339)
		::openfl::_internal::renderer::RenderSession tmp8 = this->renderSession;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(339)
		displayObject->__renderGL(tmp8);
		HX_STACK_LINE(341)
		::openfl::_internal::renderer::opengl::utils::SpriteBatch tmp9 = this->spriteBatch;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(341)
		tmp9->finish();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(GLRenderer_obj,renderDisplayObject,(void))

Void GLRenderer_obj::resize( int width,int height){
{
		HX_STACK_FRAME("openfl._internal.renderer.opengl.GLRenderer","resize",0x762cafb6,"openfl._internal.renderer.opengl.GLRenderer.resize","openfl/_internal/renderer/opengl/GLRenderer.hx",346,0xb2b97130)
		HX_STACK_THIS(this)
		HX_STACK_ARG(width,"width")
		HX_STACK_ARG(height,"height")
		HX_STACK_LINE(348)
		this->width = width;
		HX_STACK_LINE(349)
		this->height = height;
		HX_STACK_LINE(351)
		int tmp = width;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(351)
		int tmp1 = height;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(351)
		this->super::resize(tmp,tmp1);
		HX_STACK_LINE(353)
		int tmp2 = width;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(353)
		int tmp3 = height;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(353)
		this->setViewport((int)0,(int)0,tmp2,tmp3);
		HX_STACK_LINE(355)
		Float tmp4 = (Float(width) / Float((int)2));		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(355)
		::openfl::geom::Point tmp5 = this->projection;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(355)
		tmp5->x = tmp4;
		HX_STACK_LINE(356)
		int tmp6 = height;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(356)
		int tmp7 = -(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(356)
		Float tmp8 = (Float(tmp7) / Float((int)2));		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(356)
		::openfl::geom::Point tmp9 = this->projection;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(356)
		tmp9->y = tmp8;
	}
return null();
}


int GLRenderer_obj::glContextId;

Array< ::Dynamic > GLRenderer_obj::glContexts;

Void GLRenderer_obj::renderBitmap( ::openfl::display::DisplayObject shape,::openfl::_internal::renderer::RenderSession renderSession,hx::Null< bool >  __o_smooth){
bool smooth = __o_smooth.Default(true);
	HX_STACK_FRAME("openfl._internal.renderer.opengl.GLRenderer","renderBitmap",0xcc852727,"openfl._internal.renderer.opengl.GLRenderer.renderBitmap","openfl/_internal/renderer/opengl/GLRenderer.hx",307,0xb2b97130)
	HX_STACK_ARG(shape,"shape")
	HX_STACK_ARG(renderSession,"renderSession")
	HX_STACK_ARG(smooth,"smooth")
{
		HX_STACK_LINE(309)
		bool tmp = shape->__renderable;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(309)
		bool tmp1 = tmp;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(309)
		bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(309)
		bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(309)
		bool tmp4;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(309)
		if ((tmp3)){
			HX_STACK_LINE(309)
			tmp4 = (shape->__worldAlpha <= (int)0);
		}
		else{
			HX_STACK_LINE(309)
			tmp4 = true;
		}
		HX_STACK_LINE(309)
		if ((tmp4)){
			HX_STACK_LINE(309)
			return null();
		}
		HX_STACK_LINE(310)
		bool tmp5 = (shape->__graphics == null());		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(310)
		bool tmp6 = !(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(310)
		bool tmp7;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(310)
		if ((tmp6)){
			HX_STACK_LINE(310)
			::openfl::display::BitmapData tmp8 = shape->__graphics->__bitmap;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(310)
			::openfl::display::BitmapData tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(310)
			tmp7 = (tmp9 == null());
		}
		else{
			HX_STACK_LINE(310)
			tmp7 = true;
		}
		HX_STACK_LINE(310)
		if ((tmp7)){
			HX_STACK_LINE(310)
			return null();
		}
		HX_STACK_LINE(312)
		::openfl::geom::Rectangle tmp8 = ::openfl::geom::Rectangle_obj::__temp;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(312)
		::openfl::geom::Rectangle rect = tmp8;		HX_STACK_VAR(rect,"rect");
		HX_STACK_LINE(313)
		::openfl::geom::Matrix tmp9 = ::openfl::geom::Matrix_obj::__temp;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(313)
		::openfl::geom::Matrix matrix = tmp9;		HX_STACK_VAR(matrix,"matrix");
		HX_STACK_LINE(315)
		rect->setEmpty();
		HX_STACK_LINE(316)
		matrix->identity();
		HX_STACK_LINE(318)
		::openfl::geom::Rectangle tmp10 = rect;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(318)
		::openfl::geom::Matrix tmp11 = matrix;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(318)
		shape->__getBounds(tmp10,tmp11);
		HX_STACK_LINE(320)
		::openfl::display::BitmapData tmp12 = shape->__graphics->__bitmap;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(320)
		::openfl::display::BitmapData bitmap = tmp12;		HX_STACK_VAR(bitmap,"bitmap");
		HX_STACK_LINE(322)
		::openfl::geom::Rectangle tmp13 = shape->__graphics->__bounds;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(322)
		Float tmp14 = tmp13->x;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(322)
		::openfl::geom::Rectangle tmp15 = shape->__graphics->__bounds;		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(322)
		Float tmp16 = tmp15->y;		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(322)
		matrix->translate(tmp14,tmp16);
		HX_STACK_LINE(323)
		::openfl::geom::Matrix tmp17 = shape->__worldTransform;		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(323)
		matrix->concat(tmp17);
		HX_STACK_LINE(325)
		::openfl::display::BitmapData tmp18 = bitmap;		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(325)
		bool tmp19 = smooth;		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(325)
		::openfl::geom::Matrix tmp20 = matrix;		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(325)
		::openfl::geom::ColorTransform tmp21 = shape->__worldColorTransform;		HX_STACK_VAR(tmp21,"tmp21");
		HX_STACK_LINE(325)
		Float tmp22 = shape->__worldAlpha;		HX_STACK_VAR(tmp22,"tmp22");
		HX_STACK_LINE(325)
		::openfl::display::BlendMode tmp23 = shape->__blendMode;		HX_STACK_VAR(tmp23,"tmp23");
		HX_STACK_LINE(325)
		renderSession->spriteBatch->renderBitmapData(tmp18,tmp19,tmp20,tmp21,tmp22,tmp23,::openfl::display::PixelSnapping_obj::ALWAYS,null());
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(GLRenderer_obj,renderBitmap,(void))


GLRenderer_obj::GLRenderer_obj()
{
}

void GLRenderer_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(GLRenderer);
	HX_MARK_MEMBER_NAME(blendModeManager,"blendModeManager");
	HX_MARK_MEMBER_NAME(contextLost,"contextLost");
	HX_MARK_MEMBER_NAME(defaultFramebuffer,"defaultFramebuffer");
	HX_MARK_MEMBER_NAME(filterManager,"filterManager");
	HX_MARK_MEMBER_NAME(gl,"gl");
	HX_MARK_MEMBER_NAME(_glContextId,"_glContextId");
	HX_MARK_MEMBER_NAME(maskManager,"maskManager");
	HX_MARK_MEMBER_NAME(offset,"offset");
	HX_MARK_MEMBER_NAME(options,"options");
	HX_MARK_MEMBER_NAME(preserveDrawingBuffer,"preserveDrawingBuffer");
	HX_MARK_MEMBER_NAME(projection,"projection");
	HX_MARK_MEMBER_NAME(shaderManager,"shaderManager");
	HX_MARK_MEMBER_NAME(spriteBatch,"spriteBatch");
	HX_MARK_MEMBER_NAME(stencilManager,"stencilManager");
	HX_MARK_MEMBER_NAME(view,"view");
	HX_MARK_MEMBER_NAME(projectionMatrix,"projectionMatrix");
	HX_MARK_MEMBER_NAME(__stage,"__stage");
	HX_MARK_MEMBER_NAME(vpX,"vpX");
	HX_MARK_MEMBER_NAME(vpY,"vpY");
	HX_MARK_MEMBER_NAME(vpWidth,"vpWidth");
	HX_MARK_MEMBER_NAME(vpHeight,"vpHeight");
	::openfl::_internal::renderer::AbstractRenderer_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void GLRenderer_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(blendModeManager,"blendModeManager");
	HX_VISIT_MEMBER_NAME(contextLost,"contextLost");
	HX_VISIT_MEMBER_NAME(defaultFramebuffer,"defaultFramebuffer");
	HX_VISIT_MEMBER_NAME(filterManager,"filterManager");
	HX_VISIT_MEMBER_NAME(gl,"gl");
	HX_VISIT_MEMBER_NAME(_glContextId,"_glContextId");
	HX_VISIT_MEMBER_NAME(maskManager,"maskManager");
	HX_VISIT_MEMBER_NAME(offset,"offset");
	HX_VISIT_MEMBER_NAME(options,"options");
	HX_VISIT_MEMBER_NAME(preserveDrawingBuffer,"preserveDrawingBuffer");
	HX_VISIT_MEMBER_NAME(projection,"projection");
	HX_VISIT_MEMBER_NAME(shaderManager,"shaderManager");
	HX_VISIT_MEMBER_NAME(spriteBatch,"spriteBatch");
	HX_VISIT_MEMBER_NAME(stencilManager,"stencilManager");
	HX_VISIT_MEMBER_NAME(view,"view");
	HX_VISIT_MEMBER_NAME(projectionMatrix,"projectionMatrix");
	HX_VISIT_MEMBER_NAME(__stage,"__stage");
	HX_VISIT_MEMBER_NAME(vpX,"vpX");
	HX_VISIT_MEMBER_NAME(vpY,"vpY");
	HX_VISIT_MEMBER_NAME(vpWidth,"vpWidth");
	HX_VISIT_MEMBER_NAME(vpHeight,"vpHeight");
	::openfl::_internal::renderer::AbstractRenderer_obj::__Visit(HX_VISIT_ARG);
}

Dynamic GLRenderer_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"gl") ) { return gl; }
		break;
	case 3:
		if (HX_FIELD_EQ(inName,"vpX") ) { return vpX; }
		if (HX_FIELD_EQ(inName,"vpY") ) { return vpY; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"view") ) { return view; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"offset") ) { return offset; }
		if (HX_FIELD_EQ(inName,"render") ) { return render_dyn(); }
		if (HX_FIELD_EQ(inName,"resize") ) { return resize_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"options") ) { return options; }
		if (HX_FIELD_EQ(inName,"__stage") ) { return __stage; }
		if (HX_FIELD_EQ(inName,"vpWidth") ) { return vpWidth; }
		if (HX_FIELD_EQ(inName,"destroy") ) { return destroy_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"vpHeight") ) { return vpHeight; }
		if (HX_FIELD_EQ(inName,"setOrtho") ) { return setOrtho_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"projection") ) { return projection; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"contextLost") ) { return contextLost; }
		if (HX_FIELD_EQ(inName,"maskManager") ) { return maskManager; }
		if (HX_FIELD_EQ(inName,"spriteBatch") ) { return spriteBatch; }
		if (HX_FIELD_EQ(inName,"setViewport") ) { return setViewport_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"_glContextId") ) { return _glContextId; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"filterManager") ) { return filterManager; }
		if (HX_FIELD_EQ(inName,"shaderManager") ) { return shaderManager; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"stencilManager") ) { return stencilManager; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"blendModeManager") ) { return blendModeManager; }
		if (HX_FIELD_EQ(inName,"projectionMatrix") ) { return projectionMatrix; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"handleContextLost") ) { return handleContextLost_dyn(); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"defaultFramebuffer") ) { return defaultFramebuffer; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"renderDisplayObject") ) { return renderDisplayObject_dyn(); }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"preserveDrawingBuffer") ) { return preserveDrawingBuffer; }
		if (HX_FIELD_EQ(inName,"handleContextRestored") ) { return handleContextRestored_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

bool GLRenderer_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 10:
		if (HX_FIELD_EQ(inName,"glContexts") ) { outValue = glContexts; return true;  }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"glContextId") ) { outValue = glContextId; return true;  }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"renderBitmap") ) { outValue = renderBitmap_dyn(); return true;  }
	}
	return false;
}

Dynamic GLRenderer_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"gl") ) { gl=inValue.Cast< ::lime::graphics::GLRenderContext >(); return inValue; }
		break;
	case 3:
		if (HX_FIELD_EQ(inName,"vpX") ) { vpX=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"vpY") ) { vpY=inValue.Cast< int >(); return inValue; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"view") ) { view=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"offset") ) { offset=inValue.Cast< ::openfl::geom::Point >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"options") ) { options=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__stage") ) { __stage=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"vpWidth") ) { vpWidth=inValue.Cast< int >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"vpHeight") ) { vpHeight=inValue.Cast< int >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"projection") ) { projection=inValue.Cast< ::openfl::geom::Point >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"contextLost") ) { contextLost=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"maskManager") ) { maskManager=inValue.Cast< ::openfl::_internal::renderer::opengl::utils::GLMaskManager >(); return inValue; }
		if (HX_FIELD_EQ(inName,"spriteBatch") ) { spriteBatch=inValue.Cast< ::openfl::_internal::renderer::opengl::utils::SpriteBatch >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"_glContextId") ) { _glContextId=inValue.Cast< int >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"filterManager") ) { filterManager=inValue.Cast< ::openfl::_internal::renderer::opengl::utils::FilterManager >(); return inValue; }
		if (HX_FIELD_EQ(inName,"shaderManager") ) { shaderManager=inValue.Cast< ::openfl::_internal::renderer::opengl::utils::ShaderManager >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"stencilManager") ) { stencilManager=inValue.Cast< ::openfl::_internal::renderer::opengl::utils::StencilManager >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"blendModeManager") ) { blendModeManager=inValue.Cast< ::openfl::_internal::renderer::opengl::utils::BlendModeManager >(); return inValue; }
		if (HX_FIELD_EQ(inName,"projectionMatrix") ) { projectionMatrix=inValue.Cast< ::openfl::geom::Matrix >(); return inValue; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"defaultFramebuffer") ) { defaultFramebuffer=inValue.Cast< ::lime::graphics::opengl::GLFramebuffer >(); return inValue; }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"preserveDrawingBuffer") ) { preserveDrawingBuffer=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool GLRenderer_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 10:
		if (HX_FIELD_EQ(inName,"glContexts") ) { glContexts=ioValue.Cast< Array< ::Dynamic > >(); return true; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"glContextId") ) { glContextId=ioValue.Cast< int >(); return true; }
	}
	return false;
}

void GLRenderer_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("blendModeManager","\x79","\xc8","\xec","\x8b"));
	outFields->push(HX_HCSTRING("contextLost","\x73","\x8f","\xbb","\x24"));
	outFields->push(HX_HCSTRING("defaultFramebuffer","\xac","\x79","\x67","\x39"));
	outFields->push(HX_HCSTRING("filterManager","\x95","\x81","\x91","\xd4"));
	outFields->push(HX_HCSTRING("gl","\x25","\x5a","\x00","\x00"));
	outFields->push(HX_HCSTRING("_glContextId","\xc6","\xb6","\xc0","\x17"));
	outFields->push(HX_HCSTRING("maskManager","\xe1","\xae","\x85","\x46"));
	outFields->push(HX_HCSTRING("offset","\x93","\x97","\x3f","\x60"));
	outFields->push(HX_HCSTRING("options","\x5e","\x33","\xfe","\xdf"));
	outFields->push(HX_HCSTRING("preserveDrawingBuffer","\x92","\xbb","\x1e","\x4b"));
	outFields->push(HX_HCSTRING("projection","\x8f","\x88","\x8b","\xc4"));
	outFields->push(HX_HCSTRING("shaderManager","\xc8","\x59","\x62","\x8f"));
	outFields->push(HX_HCSTRING("spriteBatch","\x75","\xc9","\x5d","\xe4"));
	outFields->push(HX_HCSTRING("stencilManager","\xd1","\xf3","\x58","\x43"));
	outFields->push(HX_HCSTRING("view","\x65","\x32","\x4f","\x4e"));
	outFields->push(HX_HCSTRING("projectionMatrix","\x30","\x88","\xbb","\xd0"));
	outFields->push(HX_HCSTRING("__stage","\x9e","\xc3","\x69","\xee"));
	outFields->push(HX_HCSTRING("vpX","\xde","\xeb","\x59","\x00"));
	outFields->push(HX_HCSTRING("vpY","\xdf","\xeb","\x59","\x00"));
	outFields->push(HX_HCSTRING("vpWidth","\x6c","\x4c","\x6d","\x50"));
	outFields->push(HX_HCSTRING("vpHeight","\xc1","\x0a","\x85","\xc5"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::openfl::_internal::renderer::opengl::utils::BlendModeManager*/ ,(int)offsetof(GLRenderer_obj,blendModeManager),HX_HCSTRING("blendModeManager","\x79","\xc8","\xec","\x8b")},
	{hx::fsBool,(int)offsetof(GLRenderer_obj,contextLost),HX_HCSTRING("contextLost","\x73","\x8f","\xbb","\x24")},
	{hx::fsObject /*::lime::graphics::opengl::GLFramebuffer*/ ,(int)offsetof(GLRenderer_obj,defaultFramebuffer),HX_HCSTRING("defaultFramebuffer","\xac","\x79","\x67","\x39")},
	{hx::fsObject /*::openfl::_internal::renderer::opengl::utils::FilterManager*/ ,(int)offsetof(GLRenderer_obj,filterManager),HX_HCSTRING("filterManager","\x95","\x81","\x91","\xd4")},
	{hx::fsObject /*::lime::graphics::GLRenderContext*/ ,(int)offsetof(GLRenderer_obj,gl),HX_HCSTRING("gl","\x25","\x5a","\x00","\x00")},
	{hx::fsInt,(int)offsetof(GLRenderer_obj,_glContextId),HX_HCSTRING("_glContextId","\xc6","\xb6","\xc0","\x17")},
	{hx::fsObject /*::openfl::_internal::renderer::opengl::utils::GLMaskManager*/ ,(int)offsetof(GLRenderer_obj,maskManager),HX_HCSTRING("maskManager","\xe1","\xae","\x85","\x46")},
	{hx::fsObject /*::openfl::geom::Point*/ ,(int)offsetof(GLRenderer_obj,offset),HX_HCSTRING("offset","\x93","\x97","\x3f","\x60")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(GLRenderer_obj,options),HX_HCSTRING("options","\x5e","\x33","\xfe","\xdf")},
	{hx::fsBool,(int)offsetof(GLRenderer_obj,preserveDrawingBuffer),HX_HCSTRING("preserveDrawingBuffer","\x92","\xbb","\x1e","\x4b")},
	{hx::fsObject /*::openfl::geom::Point*/ ,(int)offsetof(GLRenderer_obj,projection),HX_HCSTRING("projection","\x8f","\x88","\x8b","\xc4")},
	{hx::fsObject /*::openfl::_internal::renderer::opengl::utils::ShaderManager*/ ,(int)offsetof(GLRenderer_obj,shaderManager),HX_HCSTRING("shaderManager","\xc8","\x59","\x62","\x8f")},
	{hx::fsObject /*::openfl::_internal::renderer::opengl::utils::SpriteBatch*/ ,(int)offsetof(GLRenderer_obj,spriteBatch),HX_HCSTRING("spriteBatch","\x75","\xc9","\x5d","\xe4")},
	{hx::fsObject /*::openfl::_internal::renderer::opengl::utils::StencilManager*/ ,(int)offsetof(GLRenderer_obj,stencilManager),HX_HCSTRING("stencilManager","\xd1","\xf3","\x58","\x43")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(GLRenderer_obj,view),HX_HCSTRING("view","\x65","\x32","\x4f","\x4e")},
	{hx::fsObject /*::openfl::geom::Matrix*/ ,(int)offsetof(GLRenderer_obj,projectionMatrix),HX_HCSTRING("projectionMatrix","\x30","\x88","\xbb","\xd0")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(GLRenderer_obj,__stage),HX_HCSTRING("__stage","\x9e","\xc3","\x69","\xee")},
	{hx::fsInt,(int)offsetof(GLRenderer_obj,vpX),HX_HCSTRING("vpX","\xde","\xeb","\x59","\x00")},
	{hx::fsInt,(int)offsetof(GLRenderer_obj,vpY),HX_HCSTRING("vpY","\xdf","\xeb","\x59","\x00")},
	{hx::fsInt,(int)offsetof(GLRenderer_obj,vpWidth),HX_HCSTRING("vpWidth","\x6c","\x4c","\x6d","\x50")},
	{hx::fsInt,(int)offsetof(GLRenderer_obj,vpHeight),HX_HCSTRING("vpHeight","\xc1","\x0a","\x85","\xc5")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo sStaticStorageInfo[] = {
	{hx::fsInt,(void *) &GLRenderer_obj::glContextId,HX_HCSTRING("glContextId","\xc5","\x08","\xb7","\xb1")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(void *) &GLRenderer_obj::glContexts,HX_HCSTRING("glContexts","\xe9","\xde","\xab","\x64")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("blendModeManager","\x79","\xc8","\xec","\x8b"),
	HX_HCSTRING("contextLost","\x73","\x8f","\xbb","\x24"),
	HX_HCSTRING("defaultFramebuffer","\xac","\x79","\x67","\x39"),
	HX_HCSTRING("filterManager","\x95","\x81","\x91","\xd4"),
	HX_HCSTRING("gl","\x25","\x5a","\x00","\x00"),
	HX_HCSTRING("_glContextId","\xc6","\xb6","\xc0","\x17"),
	HX_HCSTRING("maskManager","\xe1","\xae","\x85","\x46"),
	HX_HCSTRING("offset","\x93","\x97","\x3f","\x60"),
	HX_HCSTRING("options","\x5e","\x33","\xfe","\xdf"),
	HX_HCSTRING("preserveDrawingBuffer","\x92","\xbb","\x1e","\x4b"),
	HX_HCSTRING("projection","\x8f","\x88","\x8b","\xc4"),
	HX_HCSTRING("shaderManager","\xc8","\x59","\x62","\x8f"),
	HX_HCSTRING("spriteBatch","\x75","\xc9","\x5d","\xe4"),
	HX_HCSTRING("stencilManager","\xd1","\xf3","\x58","\x43"),
	HX_HCSTRING("view","\x65","\x32","\x4f","\x4e"),
	HX_HCSTRING("projectionMatrix","\x30","\x88","\xbb","\xd0"),
	HX_HCSTRING("__stage","\x9e","\xc3","\x69","\xee"),
	HX_HCSTRING("vpX","\xde","\xeb","\x59","\x00"),
	HX_HCSTRING("vpY","\xdf","\xeb","\x59","\x00"),
	HX_HCSTRING("vpWidth","\x6c","\x4c","\x6d","\x50"),
	HX_HCSTRING("vpHeight","\xc1","\x0a","\x85","\xc5"),
	HX_HCSTRING("destroy","\xfa","\x2c","\x86","\x24"),
	HX_HCSTRING("setViewport","\x28","\x16","\x06","\xcd"),
	HX_HCSTRING("setOrtho","\x36","\x80","\x61","\x43"),
	HX_HCSTRING("handleContextLost","\xab","\x74","\xc9","\x22"),
	HX_HCSTRING("handleContextRestored","\x9d","\x37","\x26","\xad"),
	HX_HCSTRING("render","\x56","\x6b","\x29","\x05"),
	HX_HCSTRING("renderDisplayObject","\x6b","\x41","\xdc","\x2b"),
	HX_HCSTRING("resize","\xf4","\x59","\x7b","\x08"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(GLRenderer_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(GLRenderer_obj::glContextId,"glContextId");
	HX_MARK_MEMBER_NAME(GLRenderer_obj::glContexts,"glContexts");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(GLRenderer_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(GLRenderer_obj::glContextId,"glContextId");
	HX_VISIT_MEMBER_NAME(GLRenderer_obj::glContexts,"glContexts");
};

#endif

hx::Class GLRenderer_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("glContextId","\xc5","\x08","\xb7","\xb1"),
	HX_HCSTRING("glContexts","\xe9","\xde","\xab","\x64"),
	HX_HCSTRING("renderBitmap","\xe5","\x13","\x62","\x60"),
	::String(null()) };

void GLRenderer_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("openfl._internal.renderer.opengl.GLRenderer","\x6c","\xe6","\x3a","\x9a");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &GLRenderer_obj::__GetStatic;
	__mClass->mSetStaticField = &GLRenderer_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< GLRenderer_obj >;
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

void GLRenderer_obj::__boot()
{
	glContextId= (int)0;
	glContexts= Array_obj< ::Dynamic >::__new();
}

} // end namespace openfl
} // end namespace _internal
} // end namespace renderer
} // end namespace opengl
