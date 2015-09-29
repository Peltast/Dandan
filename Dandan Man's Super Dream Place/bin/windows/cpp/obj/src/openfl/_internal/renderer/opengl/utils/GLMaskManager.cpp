#include <hxcpp.h>

#ifndef INCLUDED_lime_graphics_GLRenderContext
#include <lime/graphics/GLRenderContext.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_AbstractMaskManager
#include <openfl/_internal/renderer/AbstractMaskManager.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_RenderSession
#include <openfl/_internal/renderer/RenderSession.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_opengl_utils_GLMaskManager
#include <openfl/_internal/renderer/opengl/utils/GLMaskManager.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_opengl_utils_StencilManager
#include <openfl/_internal/renderer/opengl/utils/StencilManager.h>
#endif
#ifndef INCLUDED_openfl_display_DisplayObject
#include <openfl/display/DisplayObject.h>
#endif
#ifndef INCLUDED_openfl_display_IBitmapDrawable
#include <openfl/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_openfl_events_EventDispatcher
#include <openfl/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_events_IEventDispatcher
#include <openfl/events/IEventDispatcher.h>
#endif
namespace openfl{
namespace _internal{
namespace renderer{
namespace opengl{
namespace utils{

Void GLMaskManager_obj::__construct(::openfl::_internal::renderer::RenderSession renderSession)
{
HX_STACK_FRAME("openfl._internal.renderer.opengl.utils.GLMaskManager","new",0xe472edcd,"openfl._internal.renderer.opengl.utils.GLMaskManager.new","openfl/_internal/renderer/opengl/utils/GLMaskManager.hx",16,0xb5eaf726)
HX_STACK_THIS(this)
HX_STACK_ARG(renderSession,"renderSession")
{
	HX_STACK_LINE(18)
	::openfl::_internal::renderer::RenderSession tmp = renderSession;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(18)
	super::__construct(tmp);
	HX_STACK_LINE(20)
	::lime::graphics::GLRenderContext tmp1 = renderSession->gl;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(20)
	this->setContext(tmp1);
}
;
	return null();
}

//GLMaskManager_obj::~GLMaskManager_obj() { }

Dynamic GLMaskManager_obj::__CreateEmpty() { return  new GLMaskManager_obj; }
hx::ObjectPtr< GLMaskManager_obj > GLMaskManager_obj::__new(::openfl::_internal::renderer::RenderSession renderSession)
{  hx::ObjectPtr< GLMaskManager_obj > _result_ = new GLMaskManager_obj();
	_result_->__construct(renderSession);
	return _result_;}

Dynamic GLMaskManager_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< GLMaskManager_obj > _result_ = new GLMaskManager_obj();
	_result_->__construct(inArgs[0]);
	return _result_;}

Void GLMaskManager_obj::destroy( ){
{
		HX_STACK_FRAME("openfl._internal.renderer.opengl.utils.GLMaskManager","destroy",0x65a504e7,"openfl._internal.renderer.opengl.utils.GLMaskManager.destroy","openfl/_internal/renderer/opengl/utils/GLMaskManager.hx",27,0xb5eaf726)
		HX_STACK_THIS(this)
		HX_STACK_LINE(27)
		this->gl = null();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(GLMaskManager_obj,destroy,(void))

Void GLMaskManager_obj::pushMask( ::openfl::display::DisplayObject mask){
{
		HX_STACK_FRAME("openfl._internal.renderer.opengl.utils.GLMaskManager","pushMask",0xd1258b59,"openfl._internal.renderer.opengl.utils.GLMaskManager.pushMask","openfl/_internal/renderer/opengl/utils/GLMaskManager.hx",32,0xb5eaf726)
		HX_STACK_THIS(this)
		HX_STACK_ARG(mask,"mask")
		HX_STACK_LINE(34)
		::openfl::_internal::renderer::RenderSession tmp = this->renderSession;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(34)
		::openfl::display::DisplayObject tmp1 = mask;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(34)
		::openfl::_internal::renderer::RenderSession tmp2 = this->renderSession;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(34)
		tmp->stencilManager->pushMask(tmp1,tmp2);
	}
return null();
}


Void GLMaskManager_obj::popMask( ){
{
		HX_STACK_FRAME("openfl._internal.renderer.opengl.utils.GLMaskManager","popMask",0x84303f0a,"openfl._internal.renderer.opengl.utils.GLMaskManager.popMask","openfl/_internal/renderer/opengl/utils/GLMaskManager.hx",39,0xb5eaf726)
		HX_STACK_THIS(this)
		HX_STACK_LINE(41)
		::openfl::_internal::renderer::RenderSession tmp = this->renderSession;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(41)
		::openfl::_internal::renderer::RenderSession tmp1 = this->renderSession;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(41)
		tmp->stencilManager->popMask(null(),tmp1);
	}
return null();
}


Void GLMaskManager_obj::setContext( ::lime::graphics::GLRenderContext gl){
{
		HX_STACK_FRAME("openfl._internal.renderer.opengl.utils.GLMaskManager","setContext",0xeb7fd4a0,"openfl._internal.renderer.opengl.utils.GLMaskManager.setContext","openfl/_internal/renderer/opengl/utils/GLMaskManager.hx",46,0xb5eaf726)
		HX_STACK_THIS(this)
		HX_STACK_ARG(gl,"gl")
		HX_STACK_LINE(48)
		::openfl::_internal::renderer::RenderSession tmp = this->renderSession;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(48)
		bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(48)
		if ((tmp1)){
			HX_STACK_LINE(50)
			::openfl::_internal::renderer::RenderSession tmp2 = this->renderSession;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(50)
			tmp2->gl = gl;
		}
		HX_STACK_LINE(54)
		this->gl = gl;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(GLMaskManager_obj,setContext,(void))


GLMaskManager_obj::GLMaskManager_obj()
{
}

void GLMaskManager_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(GLMaskManager);
	HX_MARK_MEMBER_NAME(gl,"gl");
	::openfl::_internal::renderer::AbstractMaskManager_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void GLMaskManager_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(gl,"gl");
	::openfl::_internal::renderer::AbstractMaskManager_obj::__Visit(HX_VISIT_ARG);
}

Dynamic GLMaskManager_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"gl") ) { return gl; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"destroy") ) { return destroy_dyn(); }
		if (HX_FIELD_EQ(inName,"popMask") ) { return popMask_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"pushMask") ) { return pushMask_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"setContext") ) { return setContext_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic GLMaskManager_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"gl") ) { gl=inValue.Cast< ::lime::graphics::GLRenderContext >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool GLMaskManager_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	return false;
}

void GLMaskManager_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("gl","\x25","\x5a","\x00","\x00"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::lime::graphics::GLRenderContext*/ ,(int)offsetof(GLMaskManager_obj,gl),HX_HCSTRING("gl","\x25","\x5a","\x00","\x00")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("gl","\x25","\x5a","\x00","\x00"),
	HX_HCSTRING("destroy","\xfa","\x2c","\x86","\x24"),
	HX_HCSTRING("pushMask","\xe6","\x73","\x47","\x17"),
	HX_HCSTRING("popMask","\x1d","\x67","\x11","\x43"),
	HX_HCSTRING("setContext","\x6d","\xba","\x56","\x6c"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(GLMaskManager_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(GLMaskManager_obj::__mClass,"__mClass");
};

#endif

hx::Class GLMaskManager_obj::__mClass;

void GLMaskManager_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("openfl._internal.renderer.opengl.utils.GLMaskManager","\x5b","\x03","\x03","\xef");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &GLMaskManager_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< GLMaskManager_obj >;
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
} // end namespace _internal
} // end namespace renderer
} // end namespace opengl
} // end namespace utils
