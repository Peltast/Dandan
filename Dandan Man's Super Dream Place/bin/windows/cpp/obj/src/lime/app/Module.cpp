#include <hxcpp.h>

#ifndef INCLUDED_lime_app_Event
#include <lime/app/Event.h>
#endif
#ifndef INCLUDED_lime_app_IModule
#include <lime/app/IModule.h>
#endif
#ifndef INCLUDED_lime_app_Module
#include <lime/app/Module.h>
#endif
#ifndef INCLUDED_lime_graphics_RenderContext
#include <lime/graphics/RenderContext.h>
#endif
#ifndef INCLUDED_lime_graphics_Renderer
#include <lime/graphics/Renderer.h>
#endif
#ifndef INCLUDED_lime_ui_Gamepad
#include <lime/ui/Gamepad.h>
#endif
#ifndef INCLUDED_lime_ui_Touch
#include <lime/ui/Touch.h>
#endif
#ifndef INCLUDED_lime_ui_Window
#include <lime/ui/Window.h>
#endif
namespace lime{
namespace app{

Void Module_obj::__construct()
{
HX_STACK_FRAME("lime.app.Module","new",0x17f937a4,"lime.app.Module.new","lime/app/Module.hx",15,0x653a538a)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(21)
	this->onExit = ::lime::app::Event_obj::__new();
}
;
	return null();
}

//Module_obj::~Module_obj() { }

Dynamic Module_obj::__CreateEmpty() { return  new Module_obj; }
hx::ObjectPtr< Module_obj > Module_obj::__new()
{  hx::ObjectPtr< Module_obj > _result_ = new Module_obj();
	_result_->__construct();
	return _result_;}

Dynamic Module_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Module_obj > _result_ = new Module_obj();
	_result_->__construct();
	return _result_;}

hx::Object *Module_obj::__ToInterface(const hx::type_info &inType) {
	if (inType==typeid( ::lime::app::IModule_obj)) return operator ::lime::app::IModule_obj *();
	return super::__ToInterface(inType);
}

Module_obj::operator ::lime::app::IModule_obj *()
	{ return new ::lime::app::IModule_delegate_< Module_obj >(this); }
Void Module_obj::onGamepadAxisMove( ::lime::ui::Gamepad gamepad,int axis,Float value){
{
		HX_STACK_FRAME("lime.app.Module","onGamepadAxisMove",0x43570df8,"lime.app.Module.onGamepadAxisMove","lime/app/Module.hx",37,0x653a538a)
		HX_STACK_THIS(this)
		HX_STACK_ARG(gamepad,"gamepad")
		HX_STACK_ARG(axis,"axis")
		HX_STACK_ARG(value,"value")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(Module_obj,onGamepadAxisMove,(void))

Void Module_obj::onGamepadButtonDown( ::lime::ui::Gamepad gamepad,int button){
{
		HX_STACK_FRAME("lime.app.Module","onGamepadButtonDown",0xdb9e1a9a,"lime.app.Module.onGamepadButtonDown","lime/app/Module.hx",45,0x653a538a)
		HX_STACK_THIS(this)
		HX_STACK_ARG(gamepad,"gamepad")
		HX_STACK_ARG(button,"button")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Module_obj,onGamepadButtonDown,(void))

Void Module_obj::onGamepadButtonUp( ::lime::ui::Gamepad gamepad,int button){
{
		HX_STACK_FRAME("lime.app.Module","onGamepadButtonUp",0x0f950a93,"lime.app.Module.onGamepadButtonUp","lime/app/Module.hx",53,0x653a538a)
		HX_STACK_THIS(this)
		HX_STACK_ARG(gamepad,"gamepad")
		HX_STACK_ARG(button,"button")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Module_obj,onGamepadButtonUp,(void))

Void Module_obj::onGamepadConnect( ::lime::ui::Gamepad gamepad){
{
		HX_STACK_FRAME("lime.app.Module","onGamepadConnect",0xa4a7b504,"lime.app.Module.onGamepadConnect","lime/app/Module.hx",60,0x653a538a)
		HX_STACK_THIS(this)
		HX_STACK_ARG(gamepad,"gamepad")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Module_obj,onGamepadConnect,(void))

Void Module_obj::onGamepadDisconnect( ::lime::ui::Gamepad gamepad){
{
		HX_STACK_FRAME("lime.app.Module","onGamepadDisconnect",0x987e1782,"lime.app.Module.onGamepadDisconnect","lime/app/Module.hx",67,0x653a538a)
		HX_STACK_THIS(this)
		HX_STACK_ARG(gamepad,"gamepad")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Module_obj,onGamepadDisconnect,(void))

Void Module_obj::onKeyDown( ::lime::ui::Window window,int keyCode,int modifier){
{
		HX_STACK_FRAME("lime.app.Module","onKeyDown",0x83d25486,"lime.app.Module.onKeyDown","lime/app/Module.hx",76,0x653a538a)
		HX_STACK_THIS(this)
		HX_STACK_ARG(window,"window")
		HX_STACK_ARG(keyCode,"keyCode")
		HX_STACK_ARG(modifier,"modifier")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(Module_obj,onKeyDown,(void))

Void Module_obj::onKeyUp( ::lime::ui::Window window,int keyCode,int modifier){
{
		HX_STACK_FRAME("lime.app.Module","onKeyUp",0x3060b17f,"lime.app.Module.onKeyUp","lime/app/Module.hx",85,0x653a538a)
		HX_STACK_THIS(this)
		HX_STACK_ARG(window,"window")
		HX_STACK_ARG(keyCode,"keyCode")
		HX_STACK_ARG(modifier,"modifier")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(Module_obj,onKeyUp,(void))

Void Module_obj::onModuleExit( int code){
{
		HX_STACK_FRAME("lime.app.Module","onModuleExit",0x61615025,"lime.app.Module.onModuleExit","lime/app/Module.hx",91,0x653a538a)
		HX_STACK_THIS(this)
		HX_STACK_ARG(code,"code")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Module_obj,onModuleExit,(void))

Void Module_obj::onMouseDown( ::lime::ui::Window window,Float x,Float y,int button){
{
		HX_STACK_FRAME("lime.app.Module","onMouseDown",0xff09df4c,"lime.app.Module.onMouseDown","lime/app/Module.hx",101,0x653a538a)
		HX_STACK_THIS(this)
		HX_STACK_ARG(window,"window")
		HX_STACK_ARG(x,"x")
		HX_STACK_ARG(y,"y")
		HX_STACK_ARG(button,"button")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC4(Module_obj,onMouseDown,(void))

Void Module_obj::onMouseMove( ::lime::ui::Window window,Float x,Float y){
{
		HX_STACK_FRAME("lime.app.Module","onMouseMove",0x04fcc9fb,"lime.app.Module.onMouseMove","lime/app/Module.hx",111,0x653a538a)
		HX_STACK_THIS(this)
		HX_STACK_ARG(window,"window")
		HX_STACK_ARG(x,"x")
		HX_STACK_ARG(y,"y")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(Module_obj,onMouseMove,(void))

Void Module_obj::onMouseMoveRelative( ::lime::ui::Window window,Float x,Float y){
{
		HX_STACK_FRAME("lime.app.Module","onMouseMoveRelative",0xcea635e7,"lime.app.Module.onMouseMoveRelative","lime/app/Module.hx",121,0x653a538a)
		HX_STACK_THIS(this)
		HX_STACK_ARG(window,"window")
		HX_STACK_ARG(x,"x")
		HX_STACK_ARG(y,"y")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(Module_obj,onMouseMoveRelative,(void))

Void Module_obj::onMouseUp( ::lime::ui::Window window,Float x,Float y,int button){
{
		HX_STACK_FRAME("lime.app.Module","onMouseUp",0xa7fddec5,"lime.app.Module.onMouseUp","lime/app/Module.hx",131,0x653a538a)
		HX_STACK_THIS(this)
		HX_STACK_ARG(window,"window")
		HX_STACK_ARG(x,"x")
		HX_STACK_ARG(y,"y")
		HX_STACK_ARG(button,"button")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC4(Module_obj,onMouseUp,(void))

Void Module_obj::onMouseWheel( ::lime::ui::Window window,Float deltaX,Float deltaY){
{
		HX_STACK_FRAME("lime.app.Module","onMouseWheel",0x15885a71,"lime.app.Module.onMouseWheel","lime/app/Module.hx",140,0x653a538a)
		HX_STACK_THIS(this)
		HX_STACK_ARG(window,"window")
		HX_STACK_ARG(deltaX,"deltaX")
		HX_STACK_ARG(deltaY,"deltaY")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(Module_obj,onMouseWheel,(void))

Void Module_obj::onPreloadComplete( ){
{
		HX_STACK_FRAME("lime.app.Module","onPreloadComplete",0x7adf4d87,"lime.app.Module.onPreloadComplete","lime/app/Module.hx",146,0x653a538a)
		HX_STACK_THIS(this)
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Module_obj,onPreloadComplete,(void))

Void Module_obj::onPreloadProgress( int loaded,int total){
{
		HX_STACK_FRAME("lime.app.Module","onPreloadProgress",0x8142447b,"lime.app.Module.onPreloadProgress","lime/app/Module.hx",154,0x653a538a)
		HX_STACK_THIS(this)
		HX_STACK_ARG(loaded,"loaded")
		HX_STACK_ARG(total,"total")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Module_obj,onPreloadProgress,(void))

Void Module_obj::onRenderContextLost( ::lime::graphics::Renderer renderer){
{
		HX_STACK_FRAME("lime.app.Module","onRenderContextLost",0xd88ecae2,"lime.app.Module.onRenderContextLost","lime/app/Module.hx",161,0x653a538a)
		HX_STACK_THIS(this)
		HX_STACK_ARG(renderer,"renderer")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Module_obj,onRenderContextLost,(void))

Void Module_obj::onRenderContextRestored( ::lime::graphics::Renderer renderer,::lime::graphics::RenderContext context){
{
		HX_STACK_FRAME("lime.app.Module","onRenderContextRestored",0x4a587554,"lime.app.Module.onRenderContextRestored","lime/app/Module.hx",169,0x653a538a)
		HX_STACK_THIS(this)
		HX_STACK_ARG(renderer,"renderer")
		HX_STACK_ARG(context,"context")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Module_obj,onRenderContextRestored,(void))

Void Module_obj::onTextEdit( ::lime::ui::Window window,::String text,int start,int length){
{
		HX_STACK_FRAME("lime.app.Module","onTextEdit",0xf80cbad2,"lime.app.Module.onTextEdit","lime/app/Module.hx",179,0x653a538a)
		HX_STACK_THIS(this)
		HX_STACK_ARG(window,"window")
		HX_STACK_ARG(text,"text")
		HX_STACK_ARG(start,"start")
		HX_STACK_ARG(length,"length")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC4(Module_obj,onTextEdit,(void))

Void Module_obj::onTextInput( ::lime::ui::Window window,::String text){
{
		HX_STACK_FRAME("lime.app.Module","onTextInput",0x67528242,"lime.app.Module.onTextInput","lime/app/Module.hx",187,0x653a538a)
		HX_STACK_THIS(this)
		HX_STACK_ARG(window,"window")
		HX_STACK_ARG(text,"text")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Module_obj,onTextInput,(void))

Void Module_obj::onTouchEnd( ::lime::ui::Touch touch){
{
		HX_STACK_FRAME("lime.app.Module","onTouchEnd",0xb20c62d7,"lime.app.Module.onTouchEnd","lime/app/Module.hx",194,0x653a538a)
		HX_STACK_THIS(this)
		HX_STACK_ARG(touch,"touch")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Module_obj,onTouchEnd,(void))

Void Module_obj::onTouchMove( ::lime::ui::Touch touch){
{
		HX_STACK_FRAME("lime.app.Module","onTouchMove",0x1e14a095,"lime.app.Module.onTouchMove","lime/app/Module.hx",201,0x653a538a)
		HX_STACK_THIS(this)
		HX_STACK_ARG(touch,"touch")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Module_obj,onTouchMove,(void))

Void Module_obj::onTouchStart( ::lime::ui::Touch touch){
{
		HX_STACK_FRAME("lime.app.Module","onTouchStart",0xab9d8a5e,"lime.app.Module.onTouchStart","lime/app/Module.hx",208,0x653a538a)
		HX_STACK_THIS(this)
		HX_STACK_ARG(touch,"touch")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Module_obj,onTouchStart,(void))

Void Module_obj::onWindowActivate( ::lime::ui::Window window){
{
		HX_STACK_FRAME("lime.app.Module","onWindowActivate",0xa3ae477e,"lime.app.Module.onWindowActivate","lime/app/Module.hx",215,0x653a538a)
		HX_STACK_THIS(this)
		HX_STACK_ARG(window,"window")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Module_obj,onWindowActivate,(void))

Void Module_obj::onWindowClose( ::lime::ui::Window window){
{
		HX_STACK_FRAME("lime.app.Module","onWindowClose",0x4c406f0d,"lime.app.Module.onWindowClose","lime/app/Module.hx",222,0x653a538a)
		HX_STACK_THIS(this)
		HX_STACK_ARG(window,"window")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Module_obj,onWindowClose,(void))

Void Module_obj::onWindowCreate( ::lime::ui::Window window){
{
		HX_STACK_FRAME("lime.app.Module","onWindowCreate",0xd9de7a07,"lime.app.Module.onWindowCreate","lime/app/Module.hx",229,0x653a538a)
		HX_STACK_THIS(this)
		HX_STACK_ARG(window,"window")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Module_obj,onWindowCreate,(void))

Void Module_obj::onWindowDeactivate( ::lime::ui::Window window){
{
		HX_STACK_FRAME("lime.app.Module","onWindowDeactivate",0x1fbe50bf,"lime.app.Module.onWindowDeactivate","lime/app/Module.hx",236,0x653a538a)
		HX_STACK_THIS(this)
		HX_STACK_ARG(window,"window")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Module_obj,onWindowDeactivate,(void))

Void Module_obj::onWindowEnter( ::lime::ui::Window window){
{
		HX_STACK_FRAME("lime.app.Module","onWindowEnter",0x7463c46d,"lime.app.Module.onWindowEnter","lime/app/Module.hx",243,0x653a538a)
		HX_STACK_THIS(this)
		HX_STACK_ARG(window,"window")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Module_obj,onWindowEnter,(void))

Void Module_obj::onWindowFocusIn( ::lime::ui::Window window){
{
		HX_STACK_FRAME("lime.app.Module","onWindowFocusIn",0xf8e4dc72,"lime.app.Module.onWindowFocusIn","lime/app/Module.hx",250,0x653a538a)
		HX_STACK_THIS(this)
		HX_STACK_ARG(window,"window")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Module_obj,onWindowFocusIn,(void))

Void Module_obj::onWindowFocusOut( ::lime::ui::Window window){
{
		HX_STACK_FRAME("lime.app.Module","onWindowFocusOut",0xcf609b61,"lime.app.Module.onWindowFocusOut","lime/app/Module.hx",257,0x653a538a)
		HX_STACK_THIS(this)
		HX_STACK_ARG(window,"window")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Module_obj,onWindowFocusOut,(void))

Void Module_obj::onWindowFullscreen( ::lime::ui::Window window){
{
		HX_STACK_FRAME("lime.app.Module","onWindowFullscreen",0xdd712ec6,"lime.app.Module.onWindowFullscreen","lime/app/Module.hx",264,0x653a538a)
		HX_STACK_THIS(this)
		HX_STACK_ARG(window,"window")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Module_obj,onWindowFullscreen,(void))

Void Module_obj::onWindowLeave( ::lime::ui::Window window){
{
		HX_STACK_FRAME("lime.app.Module","onWindowLeave",0x76308c4c,"lime.app.Module.onWindowLeave","lime/app/Module.hx",271,0x653a538a)
		HX_STACK_THIS(this)
		HX_STACK_ARG(window,"window")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Module_obj,onWindowLeave,(void))

Void Module_obj::onWindowMove( ::lime::ui::Window window,Float x,Float y){
{
		HX_STACK_FRAME("lime.app.Module","onWindowMove",0x01388d5c,"lime.app.Module.onWindowMove","lime/app/Module.hx",280,0x653a538a)
		HX_STACK_THIS(this)
		HX_STACK_ARG(window,"window")
		HX_STACK_ARG(x,"x")
		HX_STACK_ARG(y,"y")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(Module_obj,onWindowMove,(void))

Void Module_obj::onWindowMinimize( ::lime::ui::Window window){
{
		HX_STACK_FRAME("lime.app.Module","onWindowMinimize",0xdf7b6ae9,"lime.app.Module.onWindowMinimize","lime/app/Module.hx",287,0x653a538a)
		HX_STACK_THIS(this)
		HX_STACK_ARG(window,"window")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Module_obj,onWindowMinimize,(void))

Void Module_obj::onWindowResize( ::lime::ui::Window window,int width,int height){
{
		HX_STACK_FRAME("lime.app.Module","onWindowResize",0x664a6cff,"lime.app.Module.onWindowResize","lime/app/Module.hx",296,0x653a538a)
		HX_STACK_THIS(this)
		HX_STACK_ARG(window,"window")
		HX_STACK_ARG(width,"width")
		HX_STACK_ARG(height,"height")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(Module_obj,onWindowResize,(void))

Void Module_obj::onWindowRestore( ::lime::ui::Window window){
{
		HX_STACK_FRAME("lime.app.Module","onWindowRestore",0x2211fde3,"lime.app.Module.onWindowRestore","lime/app/Module.hx",303,0x653a538a)
		HX_STACK_THIS(this)
		HX_STACK_ARG(window,"window")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Module_obj,onWindowRestore,(void))

Void Module_obj::render( ::lime::graphics::Renderer renderer){
{
		HX_STACK_FRAME("lime.app.Module","render",0xc490e692,"lime.app.Module.render","lime/app/Module.hx",310,0x653a538a)
		HX_STACK_THIS(this)
		HX_STACK_ARG(renderer,"renderer")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Module_obj,render,(void))

Void Module_obj::update( int deltaTime){
{
		HX_STACK_FRAME("lime.app.Module","update",0x466d0145,"lime.app.Module.update","lime/app/Module.hx",317,0x653a538a)
		HX_STACK_THIS(this)
		HX_STACK_ARG(deltaTime,"deltaTime")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Module_obj,update,(void))


Module_obj::Module_obj()
{
}

void Module_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Module);
	HX_MARK_MEMBER_NAME(onExit,"onExit");
	HX_MARK_END_CLASS();
}

void Module_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(onExit,"onExit");
}

Dynamic Module_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"onExit") ) { return onExit; }
		if (HX_FIELD_EQ(inName,"render") ) { return render_dyn(); }
		if (HX_FIELD_EQ(inName,"update") ) { return update_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"onKeyUp") ) { return onKeyUp_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"onKeyDown") ) { return onKeyDown_dyn(); }
		if (HX_FIELD_EQ(inName,"onMouseUp") ) { return onMouseUp_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"onTextEdit") ) { return onTextEdit_dyn(); }
		if (HX_FIELD_EQ(inName,"onTouchEnd") ) { return onTouchEnd_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"onMouseDown") ) { return onMouseDown_dyn(); }
		if (HX_FIELD_EQ(inName,"onMouseMove") ) { return onMouseMove_dyn(); }
		if (HX_FIELD_EQ(inName,"onTextInput") ) { return onTextInput_dyn(); }
		if (HX_FIELD_EQ(inName,"onTouchMove") ) { return onTouchMove_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"onModuleExit") ) { return onModuleExit_dyn(); }
		if (HX_FIELD_EQ(inName,"onMouseWheel") ) { return onMouseWheel_dyn(); }
		if (HX_FIELD_EQ(inName,"onTouchStart") ) { return onTouchStart_dyn(); }
		if (HX_FIELD_EQ(inName,"onWindowMove") ) { return onWindowMove_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"onWindowClose") ) { return onWindowClose_dyn(); }
		if (HX_FIELD_EQ(inName,"onWindowEnter") ) { return onWindowEnter_dyn(); }
		if (HX_FIELD_EQ(inName,"onWindowLeave") ) { return onWindowLeave_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"onWindowCreate") ) { return onWindowCreate_dyn(); }
		if (HX_FIELD_EQ(inName,"onWindowResize") ) { return onWindowResize_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"onWindowFocusIn") ) { return onWindowFocusIn_dyn(); }
		if (HX_FIELD_EQ(inName,"onWindowRestore") ) { return onWindowRestore_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"onGamepadConnect") ) { return onGamepadConnect_dyn(); }
		if (HX_FIELD_EQ(inName,"onWindowActivate") ) { return onWindowActivate_dyn(); }
		if (HX_FIELD_EQ(inName,"onWindowFocusOut") ) { return onWindowFocusOut_dyn(); }
		if (HX_FIELD_EQ(inName,"onWindowMinimize") ) { return onWindowMinimize_dyn(); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"onGamepadAxisMove") ) { return onGamepadAxisMove_dyn(); }
		if (HX_FIELD_EQ(inName,"onGamepadButtonUp") ) { return onGamepadButtonUp_dyn(); }
		if (HX_FIELD_EQ(inName,"onPreloadComplete") ) { return onPreloadComplete_dyn(); }
		if (HX_FIELD_EQ(inName,"onPreloadProgress") ) { return onPreloadProgress_dyn(); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"onWindowDeactivate") ) { return onWindowDeactivate_dyn(); }
		if (HX_FIELD_EQ(inName,"onWindowFullscreen") ) { return onWindowFullscreen_dyn(); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"onGamepadButtonDown") ) { return onGamepadButtonDown_dyn(); }
		if (HX_FIELD_EQ(inName,"onGamepadDisconnect") ) { return onGamepadDisconnect_dyn(); }
		if (HX_FIELD_EQ(inName,"onMouseMoveRelative") ) { return onMouseMoveRelative_dyn(); }
		if (HX_FIELD_EQ(inName,"onRenderContextLost") ) { return onRenderContextLost_dyn(); }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"onRenderContextRestored") ) { return onRenderContextRestored_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Module_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"onExit") ) { onExit=inValue.Cast< ::lime::app::Event >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool Module_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	return false;
}

void Module_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("onExit","\xdd","\xff","\xa7","\xe5"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::lime::app::Event*/ ,(int)offsetof(Module_obj,onExit),HX_HCSTRING("onExit","\xdd","\xff","\xa7","\xe5")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("onExit","\xdd","\xff","\xa7","\xe5"),
	HX_HCSTRING("onGamepadAxisMove","\xb4","\xf7","\xd4","\x24"),
	HX_HCSTRING("onGamepadButtonDown","\x56","\xeb","\xb6","\x87"),
	HX_HCSTRING("onGamepadButtonUp","\x4f","\xf4","\x12","\xf1"),
	HX_HCSTRING("onGamepadConnect","\xc8","\x56","\xd7","\xec"),
	HX_HCSTRING("onGamepadDisconnect","\x3e","\xe8","\x96","\x44"),
	HX_HCSTRING("onKeyDown","\x42","\x22","\xf2","\x73"),
	HX_HCSTRING("onKeyUp","\x3b","\x58","\x3c","\x75"),
	HX_HCSTRING("onModuleExit","\xe9","\xbf","\xa3","\x0b"),
	HX_HCSTRING("onMouseDown","\x08","\x94","\x05","\x11"),
	HX_HCSTRING("onMouseMove","\xb7","\x7e","\xf8","\x16"),
	HX_HCSTRING("onMouseMoveRelative","\xa3","\x06","\xbf","\x7a"),
	HX_HCSTRING("onMouseUp","\x81","\xac","\x1d","\x98"),
	HX_HCSTRING("onMouseWheel","\x35","\xca","\xca","\xbf"),
	HX_HCSTRING("onPreloadComplete","\x43","\x37","\x5d","\x5c"),
	HX_HCSTRING("onPreloadProgress","\x37","\x2e","\xc0","\x62"),
	HX_HCSTRING("onRenderContextLost","\x9e","\x9b","\xa7","\x84"),
	HX_HCSTRING("onRenderContextRestored","\x10","\x54","\x6e","\x7a"),
	HX_HCSTRING("onTextEdit","\x96","\xf1","\xc0","\x23"),
	HX_HCSTRING("onTextInput","\xfe","\x36","\x4e","\x79"),
	HX_HCSTRING("onTouchEnd","\x9b","\x99","\xc0","\xdd"),
	HX_HCSTRING("onTouchMove","\x51","\x55","\x10","\x30"),
	HX_HCSTRING("onTouchStart","\x22","\xfa","\xdf","\x55"),
	HX_HCSTRING("onWindowActivate","\x42","\xe9","\xdd","\xeb"),
	HX_HCSTRING("onWindowClose","\xc9","\xca","\x1f","\x9c"),
	HX_HCSTRING("onWindowCreate","\xcb","\x62","\x6f","\x6d"),
	HX_HCSTRING("onWindowDeactivate","\x83","\xeb","\x6c","\x8c"),
	HX_HCSTRING("onWindowEnter","\x29","\x20","\x43","\xc4"),
	HX_HCSTRING("onWindowFocusIn","\x2e","\x9f","\x1f","\x84"),
	HX_HCSTRING("onWindowFocusOut","\x25","\x3d","\x90","\x17"),
	HX_HCSTRING("onWindowFullscreen","\x8a","\xc9","\x1f","\x4a"),
	HX_HCSTRING("onWindowLeave","\x08","\xe8","\x0f","\xc6"),
	HX_HCSTRING("onWindowMove","\x20","\xfd","\x7a","\xab"),
	HX_HCSTRING("onWindowMinimize","\xad","\x0c","\xab","\x27"),
	HX_HCSTRING("onWindowResize","\xc3","\x55","\xdb","\xf9"),
	HX_HCSTRING("onWindowRestore","\x9f","\xc0","\x4c","\xad"),
	HX_HCSTRING("render","\x56","\x6b","\x29","\x05"),
	HX_HCSTRING("update","\x09","\x86","\x05","\x87"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Module_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Module_obj::__mClass,"__mClass");
};

#endif

hx::Class Module_obj::__mClass;

void Module_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("lime.app.Module","\xb2","\xd5","\xdb","\x18");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &Module_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Module_obj >;
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
} // end namespace app
