#include <hxcpp.h>

#ifndef INCLUDED_Reflect
#include <Reflect.h>
#endif
#ifndef INCLUDED_haxe_IMap
#include <haxe/IMap.h>
#endif
#ifndef INCLUDED_haxe_ds_IntMap
#include <haxe/ds/IntMap.h>
#endif
#ifndef INCLUDED_lime__backend_native_NativeApplication
#include <lime/_backend/native/NativeApplication.h>
#endif
#ifndef INCLUDED_lime_app_Application
#include <lime/app/Application.h>
#endif
#ifndef INCLUDED_lime_app_Event
#include <lime/app/Event.h>
#endif
#ifndef INCLUDED_lime_app_IModule
#include <lime/app/IModule.h>
#endif
#ifndef INCLUDED_lime_app_Module
#include <lime/app/Module.h>
#endif
#ifndef INCLUDED_lime_app_Preloader
#include <lime/app/Preloader.h>
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

Void Application_obj::__construct()
{
HX_STACK_FRAME("lime.app.Application","new",0x9354427c,"lime.app.Application.new","lime/app/Application.hx",21,0x8bc55476)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(34)
	this->onUpdate = ::lime::app::Event_obj::__new();
	HX_STACK_LINE(47)
	super::__construct();
	HX_STACK_LINE(49)
	::lime::app::Application tmp = ::lime::app::Application_obj::current;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(49)
	bool tmp1 = (tmp == null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(49)
	if ((tmp1)){
		HX_STACK_LINE(51)
		::lime::app::Application_obj::current = hx::ObjectPtr<OBJ_>(this);
	}
	HX_STACK_LINE(55)
	this->modules = Array_obj< ::lime::app::IModule >::__new();
	HX_STACK_LINE(56)
	this->renderers = Array_obj< ::Dynamic >::__new();
	HX_STACK_LINE(57)
	this->windows = Array_obj< ::Dynamic >::__new();
	HX_STACK_LINE(58)
	::haxe::ds::IntMap tmp2;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(58)
	{
		HX_STACK_LINE(58)
		::haxe::ds::IntMap tmp3 = ::haxe::ds::IntMap_obj::__new();		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(58)
		::haxe::ds::IntMap tmp4 = tmp3;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(58)
		tmp2 = tmp4;
	}
	HX_STACK_LINE(58)
	this->windowByID = tmp2;
	HX_STACK_LINE(60)
	::lime::_backend::native::NativeApplication tmp3 = ::lime::_backend::native::NativeApplication_obj::__new(hx::ObjectPtr<OBJ_>(this));		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(60)
	this->backend = tmp3;
	HX_STACK_LINE(62)
	::lime::app::Event tmp4 = this->onExit;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(62)
	Dynamic tmp5 = this->onModuleExit_dyn();		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(62)
	tmp4->add(tmp5,null(),null());
	HX_STACK_LINE(63)
	::lime::app::Event tmp6 = this->onUpdate;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(63)
	Dynamic tmp7 = this->update_dyn();		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(63)
	tmp6->add(tmp7,null(),null());
	HX_STACK_LINE(65)
	::lime::app::Event tmp8 = ::lime::ui::Gamepad_obj::onConnect;		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(65)
	Dynamic tmp9 = this->onGamepadConnect_dyn();		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(65)
	tmp8->add(tmp9,null(),null());
	HX_STACK_LINE(66)
	::lime::app::Event tmp10 = ::lime::ui::Touch_obj::onStart;		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(66)
	Dynamic tmp11 = this->onTouchStart_dyn();		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(66)
	tmp10->add(tmp11,null(),null());
	HX_STACK_LINE(67)
	::lime::app::Event tmp12 = ::lime::ui::Touch_obj::onMove;		HX_STACK_VAR(tmp12,"tmp12");
	HX_STACK_LINE(67)
	Dynamic tmp13 = this->onTouchMove_dyn();		HX_STACK_VAR(tmp13,"tmp13");
	HX_STACK_LINE(67)
	tmp12->add(tmp13,null(),null());
	HX_STACK_LINE(68)
	::lime::app::Event tmp14 = ::lime::ui::Touch_obj::onEnd;		HX_STACK_VAR(tmp14,"tmp14");
	HX_STACK_LINE(68)
	Dynamic tmp15 = this->onTouchEnd_dyn();		HX_STACK_VAR(tmp15,"tmp15");
	HX_STACK_LINE(68)
	tmp14->add(tmp15,null(),null());
}
;
	return null();
}

//Application_obj::~Application_obj() { }

Dynamic Application_obj::__CreateEmpty() { return  new Application_obj; }
hx::ObjectPtr< Application_obj > Application_obj::__new()
{  hx::ObjectPtr< Application_obj > _result_ = new Application_obj();
	_result_->__construct();
	return _result_;}

Dynamic Application_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Application_obj > _result_ = new Application_obj();
	_result_->__construct();
	return _result_;}

Void Application_obj::addModule( ::lime::app::IModule module){
{
		HX_STACK_FRAME("lime.app.Application","addModule",0x673258c9,"lime.app.Application.addModule","lime/app/Application.hx",77,0x8bc55476)
		HX_STACK_THIS(this)
		HX_STACK_ARG(module,"module")
		HX_STACK_LINE(79)
		::lime::app::IModule tmp = module;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(79)
		this->modules->push(tmp);
		HX_STACK_LINE(81)
		int tmp1 = this->windows->length;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(81)
		bool tmp2 = (tmp1 > (int)0);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(81)
		if ((tmp2)){
			HX_STACK_LINE(83)
			{
				HX_STACK_LINE(83)
				int _g = (int)0;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(83)
				Array< ::Dynamic > _g1 = this->windows;		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(83)
				while((true)){
					HX_STACK_LINE(83)
					bool tmp3 = (_g < _g1->length);		HX_STACK_VAR(tmp3,"tmp3");
					HX_STACK_LINE(83)
					bool tmp4 = !(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(83)
					if ((tmp4)){
						HX_STACK_LINE(83)
						break;
					}
					HX_STACK_LINE(83)
					::lime::ui::Window tmp5 = _g1->__get(_g).StaticCast< ::lime::ui::Window >();		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(83)
					::lime::ui::Window window = tmp5;		HX_STACK_VAR(window,"window");
					HX_STACK_LINE(83)
					++(_g);
					HX_STACK_LINE(85)
					::lime::ui::Window tmp6 = window;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(85)
					module->onWindowCreate(tmp6);
				}
			}
			HX_STACK_LINE(89)
			::lime::app::Preloader tmp3 = this->preloader;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(89)
			bool tmp4 = (tmp3 == null());		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(89)
			bool tmp5 = !(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(89)
			bool tmp6;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(89)
			if ((tmp5)){
				HX_STACK_LINE(89)
				::lime::app::Preloader tmp7 = this->preloader;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(89)
				::lime::app::Preloader tmp8 = tmp7;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(89)
				tmp6 = tmp8->complete;
			}
			else{
				HX_STACK_LINE(89)
				tmp6 = true;
			}
			HX_STACK_LINE(89)
			if ((tmp6)){
				HX_STACK_LINE(91)
				module->onPreloadComplete();
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Application_obj,addModule,(void))

Void Application_obj::addRenderer( ::lime::graphics::Renderer renderer){
{
		HX_STACK_FRAME("lime.app.Application","addRenderer",0x0a61eaa0,"lime.app.Application.addRenderer","lime/app/Application.hx",105,0x8bc55476)
		HX_STACK_THIS(this)
		HX_STACK_ARG(renderer,"renderer")
		HX_STACK_LINE(107)
		Dynamic tmp = this->render_dyn();		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(107)
		::lime::graphics::Renderer tmp1 = renderer;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(107)
		Dynamic tmp2;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(107)
		{
			HX_STACK_LINE(107)
			Dynamic f = tmp;		HX_STACK_VAR(f,"f");
			HX_STACK_LINE(107)
			::lime::graphics::Renderer a1 = tmp1;		HX_STACK_VAR(a1,"a1");

			HX_BEGIN_LOCAL_FUNC_S2(hx::LocalFunc,_Function_2_1,::lime::graphics::Renderer,a1,Dynamic,f)
			int __ArgCount() const { return 0; }
			Void run(){
				HX_STACK_FRAME("*","_Function_2_1",0x5201af78,"*._Function_2_1","lime/app/Application.hx",107,0x8bc55476)
				{
					HX_STACK_LINE(107)
					::lime::graphics::Renderer tmp3 = a1;		HX_STACK_VAR(tmp3,"tmp3");
					HX_STACK_LINE(107)
					f(tmp3).Cast< Void >();
				}
				return null();
			}
			HX_END_LOCAL_FUNC0((void))

			HX_STACK_LINE(107)
			tmp2 =  Dynamic(new _Function_2_1(a1,f));
		}
		HX_STACK_LINE(107)
		renderer->onRender->add(tmp2,null(),null());
		HX_STACK_LINE(108)
		Dynamic tmp3 = this->onRenderContextLost_dyn();		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(108)
		::lime::graphics::Renderer tmp4 = renderer;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(108)
		Dynamic tmp5;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(108)
		{
			HX_STACK_LINE(108)
			Dynamic f = tmp3;		HX_STACK_VAR(f,"f");
			HX_STACK_LINE(108)
			::lime::graphics::Renderer a1 = tmp4;		HX_STACK_VAR(a1,"a1");

			HX_BEGIN_LOCAL_FUNC_S2(hx::LocalFunc,_Function_2_1,::lime::graphics::Renderer,a1,Dynamic,f)
			int __ArgCount() const { return 0; }
			Void run(){
				HX_STACK_FRAME("*","_Function_2_1",0x5201af78,"*._Function_2_1","lime/app/Application.hx",108,0x8bc55476)
				{
					HX_STACK_LINE(108)
					::lime::graphics::Renderer tmp6 = a1;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(108)
					f(tmp6).Cast< Void >();
				}
				return null();
			}
			HX_END_LOCAL_FUNC0((void))

			HX_STACK_LINE(108)
			tmp5 =  Dynamic(new _Function_2_1(a1,f));
		}
		HX_STACK_LINE(108)
		renderer->onContextLost->add(tmp5,null(),null());
		HX_STACK_LINE(109)
		Dynamic tmp6 = this->onRenderContextRestored_dyn();		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(109)
		::lime::graphics::Renderer tmp7 = renderer;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(109)
		Dynamic tmp8;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(109)
		{
			HX_STACK_LINE(109)
			Dynamic f = tmp6;		HX_STACK_VAR(f,"f");
			HX_STACK_LINE(109)
			::lime::graphics::Renderer a1 = tmp7;		HX_STACK_VAR(a1,"a1");

			HX_BEGIN_LOCAL_FUNC_S2(hx::LocalFunc,_Function_2_1,::lime::graphics::Renderer,a1,Dynamic,f)
			int __ArgCount() const { return 1; }
			Void run(::lime::graphics::RenderContext a2){
				HX_STACK_FRAME("*","_Function_2_1",0x5201af78,"*._Function_2_1","lime/app/Application.hx",109,0x8bc55476)
				HX_STACK_ARG(a2,"a2")
				{
					HX_STACK_LINE(109)
					::lime::graphics::Renderer tmp9 = a1;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(109)
					::lime::graphics::RenderContext tmp10 = a2;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(109)
					f(tmp9,tmp10).Cast< Void >();
				}
				return null();
			}
			HX_END_LOCAL_FUNC1((void))

			HX_STACK_LINE(109)
			tmp8 =  Dynamic(new _Function_2_1(a1,f));
		}
		HX_STACK_LINE(109)
		renderer->onContextRestored->add(tmp8,null(),null());
		HX_STACK_LINE(111)
		::lime::graphics::Renderer tmp9 = renderer;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(111)
		this->renderers->push(tmp9);
		HX_STACK_LINE(112)
		this->renderer = renderer;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Application_obj,addRenderer,(void))

Void Application_obj::create( Dynamic config){
{
		HX_STACK_FRAME("lime.app.Application","create",0x35e42e60,"lime.app.Application.create","lime/app/Application.hx",123,0x8bc55476)
		HX_STACK_THIS(this)
		HX_STACK_ARG(config,"config")
		HX_STACK_LINE(125)
		this->config = config;
		HX_STACK_LINE(127)
		::lime::_backend::native::NativeApplication tmp = this->backend;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(127)
		Dynamic tmp1 = config;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(127)
		tmp->create(tmp1);
		HX_STACK_LINE(129)
		bool tmp2 = (config != null());		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(129)
		if ((tmp2)){
			HX_STACK_LINE(131)
			Dynamic tmp3 = config;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(131)
			bool tmp4 = ::Reflect_obj::hasField(tmp3,HX_HCSTRING("fps","\xe9","\xc7","\x4d","\x00"));		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(131)
			if ((tmp4)){
				HX_STACK_LINE(133)
				Float value = config->__Field(HX_HCSTRING("fps","\xe9","\xc7","\x4d","\x00"), hx::paccDynamic );		HX_STACK_VAR(value,"value");
				HX_STACK_LINE(133)
				::lime::_backend::native::NativeApplication tmp5 = this->backend;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(133)
				Float tmp6 = value;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(133)
				tmp5->setFrameRate(tmp6);
			}
			HX_STACK_LINE(137)
			Dynamic tmp5 = config;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(137)
			bool tmp6 = ::Reflect_obj::hasField(tmp5,HX_HCSTRING("windows","\x83","\xde","\x74","\xe8"));		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(137)
			if ((tmp6)){
				HX_STACK_LINE(139)
				int _g = (int)0;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(139)
				cpp::ArrayBase _g1 = config->__Field(HX_HCSTRING("windows","\x83","\xde","\x74","\xe8"), hx::paccDynamic );		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(139)
				while((true)){
					HX_STACK_LINE(139)
					bool tmp7 = (_g < _g1->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic ));		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(139)
					bool tmp8 = !(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(139)
					if ((tmp8)){
						HX_STACK_LINE(139)
						break;
					}
					HX_STACK_LINE(139)
					Dynamic tmp9 = _g1->__GetItem(_g);		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(139)
					Dynamic windowConfig = tmp9;		HX_STACK_VAR(windowConfig,"windowConfig");
					HX_STACK_LINE(139)
					++(_g);
					HX_STACK_LINE(141)
					::lime::ui::Window tmp10 = ::lime::ui::Window_obj::__new(windowConfig);		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(141)
					::lime::ui::Window window = tmp10;		HX_STACK_VAR(window,"window");
					HX_STACK_LINE(142)
					::lime::ui::Window tmp11 = window;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(142)
					this->createWindow(tmp11);
				}
			}
			HX_STACK_LINE(152)
			::lime::app::Preloader tmp7 = this->preloader;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(152)
			bool tmp8 = (tmp7 == null());		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(152)
			bool tmp9 = !(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(152)
			bool tmp10;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(152)
			if ((tmp9)){
				HX_STACK_LINE(152)
				::lime::app::Preloader tmp11 = this->preloader;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(152)
				::lime::app::Preloader tmp12 = tmp11;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(152)
				tmp10 = tmp12->complete;
			}
			else{
				HX_STACK_LINE(152)
				tmp10 = true;
			}
			HX_STACK_LINE(152)
			if ((tmp10)){
				HX_STACK_LINE(154)
				this->onPreloadComplete();
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Application_obj,create,(void))

Void Application_obj::createWindow( ::lime::ui::Window window){
{
		HX_STACK_FRAME("lime.app.Application","createWindow",0xb3683e70,"lime.app.Application.createWindow","lime/app/Application.hx",168,0x8bc55476)
		HX_STACK_THIS(this)
		HX_STACK_ARG(window,"window")
		HX_STACK_LINE(170)
		this->window = window;
		HX_STACK_LINE(172)
		Dynamic tmp = this->onWindowActivate_dyn();		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(172)
		::lime::ui::Window tmp1 = window;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(172)
		Dynamic tmp2;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(172)
		{
			HX_STACK_LINE(172)
			Dynamic f = tmp;		HX_STACK_VAR(f,"f");
			HX_STACK_LINE(172)
			::lime::ui::Window a1 = tmp1;		HX_STACK_VAR(a1,"a1");

			HX_BEGIN_LOCAL_FUNC_S2(hx::LocalFunc,_Function_2_1,::lime::ui::Window,a1,Dynamic,f)
			int __ArgCount() const { return 0; }
			Void run(){
				HX_STACK_FRAME("*","_Function_2_1",0x5201af78,"*._Function_2_1","lime/app/Application.hx",172,0x8bc55476)
				{
					HX_STACK_LINE(172)
					::lime::ui::Window tmp3 = a1;		HX_STACK_VAR(tmp3,"tmp3");
					HX_STACK_LINE(172)
					f(tmp3).Cast< Void >();
				}
				return null();
			}
			HX_END_LOCAL_FUNC0((void))

			HX_STACK_LINE(172)
			tmp2 =  Dynamic(new _Function_2_1(a1,f));
		}
		HX_STACK_LINE(172)
		window->onActivate->add(tmp2,null(),null());
		HX_STACK_LINE(173)
		Dynamic tmp3 = this->onWindowClose_dyn();		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(173)
		::lime::ui::Window tmp4 = window;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(173)
		Dynamic tmp5;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(173)
		{
			HX_STACK_LINE(173)
			Dynamic f = tmp3;		HX_STACK_VAR(f,"f");
			HX_STACK_LINE(173)
			::lime::ui::Window a1 = tmp4;		HX_STACK_VAR(a1,"a1");

			HX_BEGIN_LOCAL_FUNC_S2(hx::LocalFunc,_Function_2_1,::lime::ui::Window,a1,Dynamic,f)
			int __ArgCount() const { return 0; }
			Void run(){
				HX_STACK_FRAME("*","_Function_2_1",0x5201af78,"*._Function_2_1","lime/app/Application.hx",173,0x8bc55476)
				{
					HX_STACK_LINE(173)
					::lime::ui::Window tmp6 = a1;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(173)
					f(tmp6).Cast< Void >();
				}
				return null();
			}
			HX_END_LOCAL_FUNC0((void))

			HX_STACK_LINE(173)
			tmp5 =  Dynamic(new _Function_2_1(a1,f));
		}
		HX_STACK_LINE(173)
		window->onClose->add(tmp5,null(),null());
		HX_STACK_LINE(174)
		Dynamic tmp6 = this->onWindowCreate_dyn();		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(174)
		::lime::ui::Window tmp7 = window;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(174)
		Dynamic tmp8;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(174)
		{
			HX_STACK_LINE(174)
			Dynamic f = tmp6;		HX_STACK_VAR(f,"f");
			HX_STACK_LINE(174)
			::lime::ui::Window a1 = tmp7;		HX_STACK_VAR(a1,"a1");

			HX_BEGIN_LOCAL_FUNC_S2(hx::LocalFunc,_Function_2_1,::lime::ui::Window,a1,Dynamic,f)
			int __ArgCount() const { return 0; }
			Void run(){
				HX_STACK_FRAME("*","_Function_2_1",0x5201af78,"*._Function_2_1","lime/app/Application.hx",174,0x8bc55476)
				{
					HX_STACK_LINE(174)
					::lime::ui::Window tmp9 = a1;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(174)
					f(tmp9).Cast< Void >();
				}
				return null();
			}
			HX_END_LOCAL_FUNC0((void))

			HX_STACK_LINE(174)
			tmp8 =  Dynamic(new _Function_2_1(a1,f));
		}
		HX_STACK_LINE(174)
		window->onCreate->add(tmp8,null(),null());
		HX_STACK_LINE(175)
		Dynamic tmp9 = this->onWindowDeactivate_dyn();		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(175)
		::lime::ui::Window tmp10 = window;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(175)
		Dynamic tmp11;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(175)
		{
			HX_STACK_LINE(175)
			Dynamic f = tmp9;		HX_STACK_VAR(f,"f");
			HX_STACK_LINE(175)
			::lime::ui::Window a1 = tmp10;		HX_STACK_VAR(a1,"a1");

			HX_BEGIN_LOCAL_FUNC_S2(hx::LocalFunc,_Function_2_1,::lime::ui::Window,a1,Dynamic,f)
			int __ArgCount() const { return 0; }
			Void run(){
				HX_STACK_FRAME("*","_Function_2_1",0x5201af78,"*._Function_2_1","lime/app/Application.hx",175,0x8bc55476)
				{
					HX_STACK_LINE(175)
					::lime::ui::Window tmp12 = a1;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(175)
					f(tmp12).Cast< Void >();
				}
				return null();
			}
			HX_END_LOCAL_FUNC0((void))

			HX_STACK_LINE(175)
			tmp11 =  Dynamic(new _Function_2_1(a1,f));
		}
		HX_STACK_LINE(175)
		window->onDeactivate->add(tmp11,null(),null());
		HX_STACK_LINE(176)
		Dynamic tmp12 = this->onWindowEnter_dyn();		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(176)
		::lime::ui::Window tmp13 = window;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(176)
		Dynamic tmp14;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(176)
		{
			HX_STACK_LINE(176)
			Dynamic f = tmp12;		HX_STACK_VAR(f,"f");
			HX_STACK_LINE(176)
			::lime::ui::Window a1 = tmp13;		HX_STACK_VAR(a1,"a1");

			HX_BEGIN_LOCAL_FUNC_S2(hx::LocalFunc,_Function_2_1,::lime::ui::Window,a1,Dynamic,f)
			int __ArgCount() const { return 0; }
			Void run(){
				HX_STACK_FRAME("*","_Function_2_1",0x5201af78,"*._Function_2_1","lime/app/Application.hx",176,0x8bc55476)
				{
					HX_STACK_LINE(176)
					::lime::ui::Window tmp15 = a1;		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(176)
					f(tmp15).Cast< Void >();
				}
				return null();
			}
			HX_END_LOCAL_FUNC0((void))

			HX_STACK_LINE(176)
			tmp14 =  Dynamic(new _Function_2_1(a1,f));
		}
		HX_STACK_LINE(176)
		window->onEnter->add(tmp14,null(),null());
		HX_STACK_LINE(177)
		Dynamic tmp15 = this->onWindowFocusIn_dyn();		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(177)
		::lime::ui::Window tmp16 = window;		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(177)
		Dynamic tmp17;		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(177)
		{
			HX_STACK_LINE(177)
			Dynamic f = tmp15;		HX_STACK_VAR(f,"f");
			HX_STACK_LINE(177)
			::lime::ui::Window a1 = tmp16;		HX_STACK_VAR(a1,"a1");

			HX_BEGIN_LOCAL_FUNC_S2(hx::LocalFunc,_Function_2_1,::lime::ui::Window,a1,Dynamic,f)
			int __ArgCount() const { return 0; }
			Void run(){
				HX_STACK_FRAME("*","_Function_2_1",0x5201af78,"*._Function_2_1","lime/app/Application.hx",177,0x8bc55476)
				{
					HX_STACK_LINE(177)
					::lime::ui::Window tmp18 = a1;		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(177)
					f(tmp18).Cast< Void >();
				}
				return null();
			}
			HX_END_LOCAL_FUNC0((void))

			HX_STACK_LINE(177)
			tmp17 =  Dynamic(new _Function_2_1(a1,f));
		}
		HX_STACK_LINE(177)
		window->onFocusIn->add(tmp17,null(),null());
		HX_STACK_LINE(178)
		Dynamic tmp18 = this->onWindowFocusOut_dyn();		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(178)
		::lime::ui::Window tmp19 = window;		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(178)
		Dynamic tmp20;		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(178)
		{
			HX_STACK_LINE(178)
			Dynamic f = tmp18;		HX_STACK_VAR(f,"f");
			HX_STACK_LINE(178)
			::lime::ui::Window a1 = tmp19;		HX_STACK_VAR(a1,"a1");

			HX_BEGIN_LOCAL_FUNC_S2(hx::LocalFunc,_Function_2_1,::lime::ui::Window,a1,Dynamic,f)
			int __ArgCount() const { return 0; }
			Void run(){
				HX_STACK_FRAME("*","_Function_2_1",0x5201af78,"*._Function_2_1","lime/app/Application.hx",178,0x8bc55476)
				{
					HX_STACK_LINE(178)
					::lime::ui::Window tmp21 = a1;		HX_STACK_VAR(tmp21,"tmp21");
					HX_STACK_LINE(178)
					f(tmp21).Cast< Void >();
				}
				return null();
			}
			HX_END_LOCAL_FUNC0((void))

			HX_STACK_LINE(178)
			tmp20 =  Dynamic(new _Function_2_1(a1,f));
		}
		HX_STACK_LINE(178)
		window->onFocusOut->add(tmp20,null(),null());
		HX_STACK_LINE(179)
		Dynamic tmp21 = this->onWindowFullscreen_dyn();		HX_STACK_VAR(tmp21,"tmp21");
		HX_STACK_LINE(179)
		::lime::ui::Window tmp22 = window;		HX_STACK_VAR(tmp22,"tmp22");
		HX_STACK_LINE(179)
		Dynamic tmp23;		HX_STACK_VAR(tmp23,"tmp23");
		HX_STACK_LINE(179)
		{
			HX_STACK_LINE(179)
			Dynamic f = tmp21;		HX_STACK_VAR(f,"f");
			HX_STACK_LINE(179)
			::lime::ui::Window a1 = tmp22;		HX_STACK_VAR(a1,"a1");

			HX_BEGIN_LOCAL_FUNC_S2(hx::LocalFunc,_Function_2_1,::lime::ui::Window,a1,Dynamic,f)
			int __ArgCount() const { return 0; }
			Void run(){
				HX_STACK_FRAME("*","_Function_2_1",0x5201af78,"*._Function_2_1","lime/app/Application.hx",179,0x8bc55476)
				{
					HX_STACK_LINE(179)
					::lime::ui::Window tmp24 = a1;		HX_STACK_VAR(tmp24,"tmp24");
					HX_STACK_LINE(179)
					f(tmp24).Cast< Void >();
				}
				return null();
			}
			HX_END_LOCAL_FUNC0((void))

			HX_STACK_LINE(179)
			tmp23 =  Dynamic(new _Function_2_1(a1,f));
		}
		HX_STACK_LINE(179)
		window->onFullscreen->add(tmp23,null(),null());
		HX_STACK_LINE(180)
		Dynamic tmp24 = this->onKeyDown_dyn();		HX_STACK_VAR(tmp24,"tmp24");
		HX_STACK_LINE(180)
		::lime::ui::Window tmp25 = window;		HX_STACK_VAR(tmp25,"tmp25");
		HX_STACK_LINE(180)
		Dynamic tmp26;		HX_STACK_VAR(tmp26,"tmp26");
		HX_STACK_LINE(180)
		{
			HX_STACK_LINE(180)
			Dynamic f = tmp24;		HX_STACK_VAR(f,"f");
			HX_STACK_LINE(180)
			::lime::ui::Window a1 = tmp25;		HX_STACK_VAR(a1,"a1");

			HX_BEGIN_LOCAL_FUNC_S2(hx::LocalFunc,_Function_2_1,::lime::ui::Window,a1,Dynamic,f)
			int __ArgCount() const { return 2; }
			Void run(int a2,int a3){
				HX_STACK_FRAME("*","_Function_2_1",0x5201af78,"*._Function_2_1","lime/app/Application.hx",180,0x8bc55476)
				HX_STACK_ARG(a2,"a2")
				HX_STACK_ARG(a3,"a3")
				{
					HX_STACK_LINE(180)
					::lime::ui::Window tmp27 = a1;		HX_STACK_VAR(tmp27,"tmp27");
					HX_STACK_LINE(180)
					int tmp28 = a2;		HX_STACK_VAR(tmp28,"tmp28");
					HX_STACK_LINE(180)
					int tmp29 = a3;		HX_STACK_VAR(tmp29,"tmp29");
					HX_STACK_LINE(180)
					f(tmp27,tmp28,tmp29).Cast< Void >();
				}
				return null();
			}
			HX_END_LOCAL_FUNC2((void))

			HX_STACK_LINE(180)
			tmp26 =  Dynamic(new _Function_2_1(a1,f));
		}
		HX_STACK_LINE(180)
		window->onKeyDown->add(tmp26,null(),null());
		HX_STACK_LINE(181)
		Dynamic tmp27 = this->onKeyUp_dyn();		HX_STACK_VAR(tmp27,"tmp27");
		HX_STACK_LINE(181)
		::lime::ui::Window tmp28 = window;		HX_STACK_VAR(tmp28,"tmp28");
		HX_STACK_LINE(181)
		Dynamic tmp29;		HX_STACK_VAR(tmp29,"tmp29");
		HX_STACK_LINE(181)
		{
			HX_STACK_LINE(181)
			Dynamic f = tmp27;		HX_STACK_VAR(f,"f");
			HX_STACK_LINE(181)
			::lime::ui::Window a1 = tmp28;		HX_STACK_VAR(a1,"a1");

			HX_BEGIN_LOCAL_FUNC_S2(hx::LocalFunc,_Function_2_1,::lime::ui::Window,a1,Dynamic,f)
			int __ArgCount() const { return 2; }
			Void run(int a2,int a3){
				HX_STACK_FRAME("*","_Function_2_1",0x5201af78,"*._Function_2_1","lime/app/Application.hx",181,0x8bc55476)
				HX_STACK_ARG(a2,"a2")
				HX_STACK_ARG(a3,"a3")
				{
					HX_STACK_LINE(181)
					::lime::ui::Window tmp30 = a1;		HX_STACK_VAR(tmp30,"tmp30");
					HX_STACK_LINE(181)
					int tmp31 = a2;		HX_STACK_VAR(tmp31,"tmp31");
					HX_STACK_LINE(181)
					int tmp32 = a3;		HX_STACK_VAR(tmp32,"tmp32");
					HX_STACK_LINE(181)
					f(tmp30,tmp31,tmp32).Cast< Void >();
				}
				return null();
			}
			HX_END_LOCAL_FUNC2((void))

			HX_STACK_LINE(181)
			tmp29 =  Dynamic(new _Function_2_1(a1,f));
		}
		HX_STACK_LINE(181)
		window->onKeyUp->add(tmp29,null(),null());
		HX_STACK_LINE(182)
		Dynamic tmp30 = this->onWindowLeave_dyn();		HX_STACK_VAR(tmp30,"tmp30");
		HX_STACK_LINE(182)
		::lime::ui::Window tmp31 = window;		HX_STACK_VAR(tmp31,"tmp31");
		HX_STACK_LINE(182)
		Dynamic tmp32;		HX_STACK_VAR(tmp32,"tmp32");
		HX_STACK_LINE(182)
		{
			HX_STACK_LINE(182)
			Dynamic f = tmp30;		HX_STACK_VAR(f,"f");
			HX_STACK_LINE(182)
			::lime::ui::Window a1 = tmp31;		HX_STACK_VAR(a1,"a1");

			HX_BEGIN_LOCAL_FUNC_S2(hx::LocalFunc,_Function_2_1,::lime::ui::Window,a1,Dynamic,f)
			int __ArgCount() const { return 0; }
			Void run(){
				HX_STACK_FRAME("*","_Function_2_1",0x5201af78,"*._Function_2_1","lime/app/Application.hx",182,0x8bc55476)
				{
					HX_STACK_LINE(182)
					::lime::ui::Window tmp33 = a1;		HX_STACK_VAR(tmp33,"tmp33");
					HX_STACK_LINE(182)
					f(tmp33).Cast< Void >();
				}
				return null();
			}
			HX_END_LOCAL_FUNC0((void))

			HX_STACK_LINE(182)
			tmp32 =  Dynamic(new _Function_2_1(a1,f));
		}
		HX_STACK_LINE(182)
		window->onLeave->add(tmp32,null(),null());
		HX_STACK_LINE(183)
		Dynamic tmp33 = this->onWindowMinimize_dyn();		HX_STACK_VAR(tmp33,"tmp33");
		HX_STACK_LINE(183)
		::lime::ui::Window tmp34 = window;		HX_STACK_VAR(tmp34,"tmp34");
		HX_STACK_LINE(183)
		Dynamic tmp35;		HX_STACK_VAR(tmp35,"tmp35");
		HX_STACK_LINE(183)
		{
			HX_STACK_LINE(183)
			Dynamic f = tmp33;		HX_STACK_VAR(f,"f");
			HX_STACK_LINE(183)
			::lime::ui::Window a1 = tmp34;		HX_STACK_VAR(a1,"a1");

			HX_BEGIN_LOCAL_FUNC_S2(hx::LocalFunc,_Function_2_1,::lime::ui::Window,a1,Dynamic,f)
			int __ArgCount() const { return 0; }
			Void run(){
				HX_STACK_FRAME("*","_Function_2_1",0x5201af78,"*._Function_2_1","lime/app/Application.hx",183,0x8bc55476)
				{
					HX_STACK_LINE(183)
					::lime::ui::Window tmp36 = a1;		HX_STACK_VAR(tmp36,"tmp36");
					HX_STACK_LINE(183)
					f(tmp36).Cast< Void >();
				}
				return null();
			}
			HX_END_LOCAL_FUNC0((void))

			HX_STACK_LINE(183)
			tmp35 =  Dynamic(new _Function_2_1(a1,f));
		}
		HX_STACK_LINE(183)
		window->onMinimize->add(tmp35,null(),null());
		HX_STACK_LINE(184)
		Dynamic tmp36 = this->onMouseDown_dyn();		HX_STACK_VAR(tmp36,"tmp36");
		HX_STACK_LINE(184)
		::lime::ui::Window tmp37 = window;		HX_STACK_VAR(tmp37,"tmp37");
		HX_STACK_LINE(184)
		Dynamic tmp38;		HX_STACK_VAR(tmp38,"tmp38");
		HX_STACK_LINE(184)
		{
			HX_STACK_LINE(184)
			Dynamic f = tmp36;		HX_STACK_VAR(f,"f");
			HX_STACK_LINE(184)
			::lime::ui::Window a1 = tmp37;		HX_STACK_VAR(a1,"a1");

			HX_BEGIN_LOCAL_FUNC_S2(hx::LocalFunc,_Function_2_1,::lime::ui::Window,a1,Dynamic,f)
			int __ArgCount() const { return 3; }
			Void run(Float x,Float y,int a2){
				HX_STACK_FRAME("*","_Function_2_1",0x5201af78,"*._Function_2_1","lime/app/Application.hx",184,0x8bc55476)
				HX_STACK_ARG(x,"x")
				HX_STACK_ARG(y,"y")
				HX_STACK_ARG(a2,"a2")
				{
					HX_STACK_LINE(184)
					::lime::ui::Window tmp39 = a1;		HX_STACK_VAR(tmp39,"tmp39");
					HX_STACK_LINE(184)
					Float tmp40 = x;		HX_STACK_VAR(tmp40,"tmp40");
					HX_STACK_LINE(184)
					Float tmp41 = y;		HX_STACK_VAR(tmp41,"tmp41");
					HX_STACK_LINE(184)
					int tmp42 = a2;		HX_STACK_VAR(tmp42,"tmp42");
					HX_STACK_LINE(184)
					f(tmp39,tmp40,tmp41,tmp42).Cast< Void >();
				}
				return null();
			}
			HX_END_LOCAL_FUNC3((void))

			HX_STACK_LINE(184)
			tmp38 =  Dynamic(new _Function_2_1(a1,f));
		}
		HX_STACK_LINE(184)
		window->onMouseDown->add(tmp38,null(),null());
		HX_STACK_LINE(185)
		Dynamic tmp39 = this->onMouseMove_dyn();		HX_STACK_VAR(tmp39,"tmp39");
		HX_STACK_LINE(185)
		::lime::ui::Window tmp40 = window;		HX_STACK_VAR(tmp40,"tmp40");
		HX_STACK_LINE(185)
		Dynamic tmp41;		HX_STACK_VAR(tmp41,"tmp41");
		HX_STACK_LINE(185)
		{
			HX_STACK_LINE(185)
			Dynamic f = tmp39;		HX_STACK_VAR(f,"f");
			HX_STACK_LINE(185)
			::lime::ui::Window a1 = tmp40;		HX_STACK_VAR(a1,"a1");

			HX_BEGIN_LOCAL_FUNC_S2(hx::LocalFunc,_Function_2_1,::lime::ui::Window,a1,Dynamic,f)
			int __ArgCount() const { return 2; }
			Void run(Float x,Float y){
				HX_STACK_FRAME("*","_Function_2_1",0x5201af78,"*._Function_2_1","lime/app/Application.hx",185,0x8bc55476)
				HX_STACK_ARG(x,"x")
				HX_STACK_ARG(y,"y")
				{
					HX_STACK_LINE(185)
					::lime::ui::Window tmp42 = a1;		HX_STACK_VAR(tmp42,"tmp42");
					HX_STACK_LINE(185)
					Float tmp43 = x;		HX_STACK_VAR(tmp43,"tmp43");
					HX_STACK_LINE(185)
					Float tmp44 = y;		HX_STACK_VAR(tmp44,"tmp44");
					HX_STACK_LINE(185)
					f(tmp42,tmp43,tmp44).Cast< Void >();
				}
				return null();
			}
			HX_END_LOCAL_FUNC2((void))

			HX_STACK_LINE(185)
			tmp41 =  Dynamic(new _Function_2_1(a1,f));
		}
		HX_STACK_LINE(185)
		window->onMouseMove->add(tmp41,null(),null());
		HX_STACK_LINE(186)
		Dynamic tmp42 = this->onMouseMoveRelative_dyn();		HX_STACK_VAR(tmp42,"tmp42");
		HX_STACK_LINE(186)
		::lime::ui::Window tmp43 = window;		HX_STACK_VAR(tmp43,"tmp43");
		HX_STACK_LINE(186)
		Dynamic tmp44;		HX_STACK_VAR(tmp44,"tmp44");
		HX_STACK_LINE(186)
		{
			HX_STACK_LINE(186)
			Dynamic f = tmp42;		HX_STACK_VAR(f,"f");
			HX_STACK_LINE(186)
			::lime::ui::Window a1 = tmp43;		HX_STACK_VAR(a1,"a1");

			HX_BEGIN_LOCAL_FUNC_S2(hx::LocalFunc,_Function_2_1,::lime::ui::Window,a1,Dynamic,f)
			int __ArgCount() const { return 2; }
			Void run(Float x,Float y){
				HX_STACK_FRAME("*","_Function_2_1",0x5201af78,"*._Function_2_1","lime/app/Application.hx",186,0x8bc55476)
				HX_STACK_ARG(x,"x")
				HX_STACK_ARG(y,"y")
				{
					HX_STACK_LINE(186)
					::lime::ui::Window tmp45 = a1;		HX_STACK_VAR(tmp45,"tmp45");
					HX_STACK_LINE(186)
					Float tmp46 = x;		HX_STACK_VAR(tmp46,"tmp46");
					HX_STACK_LINE(186)
					Float tmp47 = y;		HX_STACK_VAR(tmp47,"tmp47");
					HX_STACK_LINE(186)
					f(tmp45,tmp46,tmp47).Cast< Void >();
				}
				return null();
			}
			HX_END_LOCAL_FUNC2((void))

			HX_STACK_LINE(186)
			tmp44 =  Dynamic(new _Function_2_1(a1,f));
		}
		HX_STACK_LINE(186)
		window->onMouseMoveRelative->add(tmp44,null(),null());
		HX_STACK_LINE(187)
		Dynamic tmp45 = this->onMouseUp_dyn();		HX_STACK_VAR(tmp45,"tmp45");
		HX_STACK_LINE(187)
		::lime::ui::Window tmp46 = window;		HX_STACK_VAR(tmp46,"tmp46");
		HX_STACK_LINE(187)
		Dynamic tmp47;		HX_STACK_VAR(tmp47,"tmp47");
		HX_STACK_LINE(187)
		{
			HX_STACK_LINE(187)
			Dynamic f = tmp45;		HX_STACK_VAR(f,"f");
			HX_STACK_LINE(187)
			::lime::ui::Window a1 = tmp46;		HX_STACK_VAR(a1,"a1");

			HX_BEGIN_LOCAL_FUNC_S2(hx::LocalFunc,_Function_2_1,::lime::ui::Window,a1,Dynamic,f)
			int __ArgCount() const { return 3; }
			Void run(Float x,Float y,int a2){
				HX_STACK_FRAME("*","_Function_2_1",0x5201af78,"*._Function_2_1","lime/app/Application.hx",187,0x8bc55476)
				HX_STACK_ARG(x,"x")
				HX_STACK_ARG(y,"y")
				HX_STACK_ARG(a2,"a2")
				{
					HX_STACK_LINE(187)
					::lime::ui::Window tmp48 = a1;		HX_STACK_VAR(tmp48,"tmp48");
					HX_STACK_LINE(187)
					Float tmp49 = x;		HX_STACK_VAR(tmp49,"tmp49");
					HX_STACK_LINE(187)
					Float tmp50 = y;		HX_STACK_VAR(tmp50,"tmp50");
					HX_STACK_LINE(187)
					int tmp51 = a2;		HX_STACK_VAR(tmp51,"tmp51");
					HX_STACK_LINE(187)
					f(tmp48,tmp49,tmp50,tmp51).Cast< Void >();
				}
				return null();
			}
			HX_END_LOCAL_FUNC3((void))

			HX_STACK_LINE(187)
			tmp47 =  Dynamic(new _Function_2_1(a1,f));
		}
		HX_STACK_LINE(187)
		window->onMouseUp->add(tmp47,null(),null());
		HX_STACK_LINE(188)
		Dynamic tmp48 = this->onMouseWheel_dyn();		HX_STACK_VAR(tmp48,"tmp48");
		HX_STACK_LINE(188)
		::lime::ui::Window tmp49 = window;		HX_STACK_VAR(tmp49,"tmp49");
		HX_STACK_LINE(188)
		Dynamic tmp50;		HX_STACK_VAR(tmp50,"tmp50");
		HX_STACK_LINE(188)
		{
			HX_STACK_LINE(188)
			Dynamic f = tmp48;		HX_STACK_VAR(f,"f");
			HX_STACK_LINE(188)
			::lime::ui::Window a1 = tmp49;		HX_STACK_VAR(a1,"a1");

			HX_BEGIN_LOCAL_FUNC_S2(hx::LocalFunc,_Function_2_1,::lime::ui::Window,a1,Dynamic,f)
			int __ArgCount() const { return 2; }
			Void run(Float a2,Float a3){
				HX_STACK_FRAME("*","_Function_2_1",0x5201af78,"*._Function_2_1","lime/app/Application.hx",188,0x8bc55476)
				HX_STACK_ARG(a2,"a2")
				HX_STACK_ARG(a3,"a3")
				{
					HX_STACK_LINE(188)
					::lime::ui::Window tmp51 = a1;		HX_STACK_VAR(tmp51,"tmp51");
					HX_STACK_LINE(188)
					Float tmp52 = a2;		HX_STACK_VAR(tmp52,"tmp52");
					HX_STACK_LINE(188)
					Float tmp53 = a3;		HX_STACK_VAR(tmp53,"tmp53");
					HX_STACK_LINE(188)
					f(tmp51,tmp52,tmp53).Cast< Void >();
				}
				return null();
			}
			HX_END_LOCAL_FUNC2((void))

			HX_STACK_LINE(188)
			tmp50 =  Dynamic(new _Function_2_1(a1,f));
		}
		HX_STACK_LINE(188)
		window->onMouseWheel->add(tmp50,null(),null());
		HX_STACK_LINE(189)
		Dynamic tmp51 = this->onWindowMove_dyn();		HX_STACK_VAR(tmp51,"tmp51");
		HX_STACK_LINE(189)
		::lime::ui::Window tmp52 = window;		HX_STACK_VAR(tmp52,"tmp52");
		HX_STACK_LINE(189)
		Dynamic tmp53;		HX_STACK_VAR(tmp53,"tmp53");
		HX_STACK_LINE(189)
		{
			HX_STACK_LINE(189)
			Dynamic f = tmp51;		HX_STACK_VAR(f,"f");
			HX_STACK_LINE(189)
			::lime::ui::Window a1 = tmp52;		HX_STACK_VAR(a1,"a1");

			HX_BEGIN_LOCAL_FUNC_S2(hx::LocalFunc,_Function_2_1,::lime::ui::Window,a1,Dynamic,f)
			int __ArgCount() const { return 2; }
			Void run(Float x,Float y){
				HX_STACK_FRAME("*","_Function_2_1",0x5201af78,"*._Function_2_1","lime/app/Application.hx",189,0x8bc55476)
				HX_STACK_ARG(x,"x")
				HX_STACK_ARG(y,"y")
				{
					HX_STACK_LINE(189)
					::lime::ui::Window tmp54 = a1;		HX_STACK_VAR(tmp54,"tmp54");
					HX_STACK_LINE(189)
					Float tmp55 = x;		HX_STACK_VAR(tmp55,"tmp55");
					HX_STACK_LINE(189)
					Float tmp56 = y;		HX_STACK_VAR(tmp56,"tmp56");
					HX_STACK_LINE(189)
					f(tmp54,tmp55,tmp56).Cast< Void >();
				}
				return null();
			}
			HX_END_LOCAL_FUNC2((void))

			HX_STACK_LINE(189)
			tmp53 =  Dynamic(new _Function_2_1(a1,f));
		}
		HX_STACK_LINE(189)
		window->onMove->add(tmp53,null(),null());
		HX_STACK_LINE(190)
		Dynamic tmp54 = this->onWindowResize_dyn();		HX_STACK_VAR(tmp54,"tmp54");
		HX_STACK_LINE(190)
		::lime::ui::Window tmp55 = window;		HX_STACK_VAR(tmp55,"tmp55");
		HX_STACK_LINE(190)
		Dynamic tmp56;		HX_STACK_VAR(tmp56,"tmp56");
		HX_STACK_LINE(190)
		{
			HX_STACK_LINE(190)
			Dynamic f = tmp54;		HX_STACK_VAR(f,"f");
			HX_STACK_LINE(190)
			::lime::ui::Window a1 = tmp55;		HX_STACK_VAR(a1,"a1");

			HX_BEGIN_LOCAL_FUNC_S2(hx::LocalFunc,_Function_2_1,::lime::ui::Window,a1,Dynamic,f)
			int __ArgCount() const { return 2; }
			Void run(int a2,int a3){
				HX_STACK_FRAME("*","_Function_2_1",0x5201af78,"*._Function_2_1","lime/app/Application.hx",190,0x8bc55476)
				HX_STACK_ARG(a2,"a2")
				HX_STACK_ARG(a3,"a3")
				{
					HX_STACK_LINE(190)
					::lime::ui::Window tmp57 = a1;		HX_STACK_VAR(tmp57,"tmp57");
					HX_STACK_LINE(190)
					int tmp58 = a2;		HX_STACK_VAR(tmp58,"tmp58");
					HX_STACK_LINE(190)
					int tmp59 = a3;		HX_STACK_VAR(tmp59,"tmp59");
					HX_STACK_LINE(190)
					f(tmp57,tmp58,tmp59).Cast< Void >();
				}
				return null();
			}
			HX_END_LOCAL_FUNC2((void))

			HX_STACK_LINE(190)
			tmp56 =  Dynamic(new _Function_2_1(a1,f));
		}
		HX_STACK_LINE(190)
		window->onResize->add(tmp56,null(),null());
		HX_STACK_LINE(191)
		Dynamic tmp57 = this->onWindowRestore_dyn();		HX_STACK_VAR(tmp57,"tmp57");
		HX_STACK_LINE(191)
		::lime::ui::Window tmp58 = window;		HX_STACK_VAR(tmp58,"tmp58");
		HX_STACK_LINE(191)
		Dynamic tmp59;		HX_STACK_VAR(tmp59,"tmp59");
		HX_STACK_LINE(191)
		{
			HX_STACK_LINE(191)
			Dynamic f = tmp57;		HX_STACK_VAR(f,"f");
			HX_STACK_LINE(191)
			::lime::ui::Window a1 = tmp58;		HX_STACK_VAR(a1,"a1");

			HX_BEGIN_LOCAL_FUNC_S2(hx::LocalFunc,_Function_2_1,::lime::ui::Window,a1,Dynamic,f)
			int __ArgCount() const { return 0; }
			Void run(){
				HX_STACK_FRAME("*","_Function_2_1",0x5201af78,"*._Function_2_1","lime/app/Application.hx",191,0x8bc55476)
				{
					HX_STACK_LINE(191)
					::lime::ui::Window tmp60 = a1;		HX_STACK_VAR(tmp60,"tmp60");
					HX_STACK_LINE(191)
					f(tmp60).Cast< Void >();
				}
				return null();
			}
			HX_END_LOCAL_FUNC0((void))

			HX_STACK_LINE(191)
			tmp59 =  Dynamic(new _Function_2_1(a1,f));
		}
		HX_STACK_LINE(191)
		window->onRestore->add(tmp59,null(),null());
		HX_STACK_LINE(192)
		Dynamic tmp60 = this->onTextEdit_dyn();		HX_STACK_VAR(tmp60,"tmp60");
		HX_STACK_LINE(192)
		::lime::ui::Window tmp61 = window;		HX_STACK_VAR(tmp61,"tmp61");
		HX_STACK_LINE(192)
		Dynamic tmp62;		HX_STACK_VAR(tmp62,"tmp62");
		HX_STACK_LINE(192)
		{
			HX_STACK_LINE(192)
			Dynamic f = tmp60;		HX_STACK_VAR(f,"f");
			HX_STACK_LINE(192)
			::lime::ui::Window a1 = tmp61;		HX_STACK_VAR(a1,"a1");

			HX_BEGIN_LOCAL_FUNC_S2(hx::LocalFunc,_Function_2_1,::lime::ui::Window,a1,Dynamic,f)
			int __ArgCount() const { return 3; }
			Void run(::String a2,int a3,int a4){
				HX_STACK_FRAME("*","_Function_2_1",0x5201af78,"*._Function_2_1","lime/app/Application.hx",192,0x8bc55476)
				HX_STACK_ARG(a2,"a2")
				HX_STACK_ARG(a3,"a3")
				HX_STACK_ARG(a4,"a4")
				{
					HX_STACK_LINE(192)
					::lime::ui::Window tmp63 = a1;		HX_STACK_VAR(tmp63,"tmp63");
					HX_STACK_LINE(192)
					::String tmp64 = a2;		HX_STACK_VAR(tmp64,"tmp64");
					HX_STACK_LINE(192)
					int tmp65 = a3;		HX_STACK_VAR(tmp65,"tmp65");
					HX_STACK_LINE(192)
					int tmp66 = a4;		HX_STACK_VAR(tmp66,"tmp66");
					HX_STACK_LINE(192)
					f(tmp63,tmp64,tmp65,tmp66).Cast< Void >();
				}
				return null();
			}
			HX_END_LOCAL_FUNC3((void))

			HX_STACK_LINE(192)
			tmp62 =  Dynamic(new _Function_2_1(a1,f));
		}
		HX_STACK_LINE(192)
		window->onTextEdit->add(tmp62,null(),null());
		HX_STACK_LINE(193)
		Dynamic tmp63 = this->onTextInput_dyn();		HX_STACK_VAR(tmp63,"tmp63");
		HX_STACK_LINE(193)
		::lime::ui::Window tmp64 = window;		HX_STACK_VAR(tmp64,"tmp64");
		HX_STACK_LINE(193)
		Dynamic tmp65;		HX_STACK_VAR(tmp65,"tmp65");
		HX_STACK_LINE(193)
		{
			HX_STACK_LINE(193)
			Dynamic f = tmp63;		HX_STACK_VAR(f,"f");
			HX_STACK_LINE(193)
			::lime::ui::Window a1 = tmp64;		HX_STACK_VAR(a1,"a1");

			HX_BEGIN_LOCAL_FUNC_S2(hx::LocalFunc,_Function_2_1,::lime::ui::Window,a1,Dynamic,f)
			int __ArgCount() const { return 1; }
			Void run(::String a2){
				HX_STACK_FRAME("*","_Function_2_1",0x5201af78,"*._Function_2_1","lime/app/Application.hx",193,0x8bc55476)
				HX_STACK_ARG(a2,"a2")
				{
					HX_STACK_LINE(193)
					::lime::ui::Window tmp66 = a1;		HX_STACK_VAR(tmp66,"tmp66");
					HX_STACK_LINE(193)
					::String tmp67 = a2;		HX_STACK_VAR(tmp67,"tmp67");
					HX_STACK_LINE(193)
					f(tmp66,tmp67).Cast< Void >();
				}
				return null();
			}
			HX_END_LOCAL_FUNC1((void))

			HX_STACK_LINE(193)
			tmp65 =  Dynamic(new _Function_2_1(a1,f));
		}
		HX_STACK_LINE(193)
		window->onTextInput->add(tmp65,null(),null());
		HX_STACK_LINE(195)
		bool tmp66 = (window->renderer == null());		HX_STACK_VAR(tmp66,"tmp66");
		HX_STACK_LINE(195)
		if ((tmp66)){
			HX_STACK_LINE(197)
			::lime::graphics::Renderer tmp67 = ::lime::graphics::Renderer_obj::__new(window);		HX_STACK_VAR(tmp67,"tmp67");
			HX_STACK_LINE(197)
			::lime::graphics::Renderer renderer = tmp67;		HX_STACK_VAR(renderer,"renderer");
			HX_STACK_LINE(198)
			::lime::graphics::Renderer tmp68 = renderer;		HX_STACK_VAR(tmp68,"tmp68");
			HX_STACK_LINE(198)
			this->addRenderer(tmp68);
		}
		HX_STACK_LINE(202)
		window->create(hx::ObjectPtr<OBJ_>(this));
		HX_STACK_LINE(203)
		::lime::ui::Window tmp67 = window;		HX_STACK_VAR(tmp67,"tmp67");
		HX_STACK_LINE(203)
		this->windows->push(tmp67);
		HX_STACK_LINE(204)
		::haxe::ds::IntMap tmp68 = this->windowByID;		HX_STACK_VAR(tmp68,"tmp68");
		HX_STACK_LINE(204)
		int tmp69 = window->id;		HX_STACK_VAR(tmp69,"tmp69");
		HX_STACK_LINE(204)
		::lime::ui::Window tmp70 = window;		HX_STACK_VAR(tmp70,"tmp70");
		HX_STACK_LINE(204)
		tmp68->set(tmp69,tmp70);
		HX_STACK_LINE(50)
		{
			HX_STACK_LINE(52)
			cpp::ArrayBase listeners = window->onCreate->listeners;		HX_STACK_VAR(listeners,"listeners");
			HX_STACK_LINE(53)
			Array< bool > repeat = window->onCreate->repeat;		HX_STACK_VAR(repeat,"repeat");
			HX_STACK_LINE(54)
			int i = (int)0;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(56)
			while((true)){
				HX_STACK_LINE(56)
				bool tmp71 = (i < listeners->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic ));		HX_STACK_VAR(tmp71,"tmp71");
				HX_STACK_LINE(56)
				bool tmp72 = !(tmp71);		HX_STACK_VAR(tmp72,"tmp72");
				HX_STACK_LINE(56)
				if ((tmp72)){
					HX_STACK_LINE(56)
					break;
				}
				HX_STACK_LINE(58)
				Dynamic tmp73 = listeners->__GetItem(i);		HX_STACK_VAR(tmp73,"tmp73");
				HX_STACK_LINE(58)
				tmp73().Cast< Void >();
				HX_STACK_LINE(60)
				bool tmp74 = repeat->__get(i);		HX_STACK_VAR(tmp74,"tmp74");
				HX_STACK_LINE(60)
				bool tmp75 = !(tmp74);		HX_STACK_VAR(tmp75,"tmp75");
				HX_STACK_LINE(60)
				if ((tmp75)){
					HX_STACK_LINE(62)
					Dynamic tmp76 = listeners->__GetItem(i);		HX_STACK_VAR(tmp76,"tmp76");
					HX_STACK_LINE(62)
					window->onCreate->remove(tmp76);
				}
				else{
					HX_STACK_LINE(66)
					(i)++;
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Application_obj,createWindow,(void))

int Application_obj::exec( ){
	HX_STACK_FRAME("lime.app.Application","exec",0x508159f5,"lime.app.Application.exec","lime/app/Application.hx",217,0x8bc55476)
	HX_STACK_THIS(this)
	HX_STACK_LINE(219)
	::lime::app::Application_obj::current = hx::ObjectPtr<OBJ_>(this);
	HX_STACK_LINE(221)
	::lime::_backend::native::NativeApplication tmp = this->backend;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(221)
	int tmp1 = tmp->exec();		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(221)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(Application_obj,exec,return )

Void Application_obj::onGamepadAxisMove( ::lime::ui::Gamepad gamepad,int axis,Float value){
{
		HX_STACK_FRAME("lime.app.Application","onGamepadAxisMove",0x507e62d0,"lime.app.Application.onGamepadAxisMove","lime/app/Application.hx",228,0x8bc55476)
		HX_STACK_THIS(this)
		HX_STACK_ARG(gamepad,"gamepad")
		HX_STACK_ARG(axis,"axis")
		HX_STACK_ARG(value,"value")
		HX_STACK_LINE(228)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(228)
		Array< ::lime::app::IModule > _g1 = this->modules;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(228)
		while((true)){
			HX_STACK_LINE(228)
			bool tmp = (_g < _g1->length);		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(228)
			bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(228)
			if ((tmp1)){
				HX_STACK_LINE(228)
				break;
			}
			HX_STACK_LINE(228)
			::lime::app::IModule tmp2 = _g1->__get(_g);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(228)
			::lime::app::IModule module = tmp2;		HX_STACK_VAR(module,"module");
			HX_STACK_LINE(228)
			++(_g);
			HX_STACK_LINE(230)
			::lime::ui::Gamepad tmp3 = gamepad;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(230)
			int tmp4 = axis;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(230)
			Float tmp5 = value;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(230)
			module->onGamepadAxisMove(tmp3,tmp4,tmp5);
		}
	}
return null();
}


Void Application_obj::onGamepadButtonDown( ::lime::ui::Gamepad gamepad,int button){
{
		HX_STACK_FRAME("lime.app.Application","onGamepadButtonDown",0x00e65572,"lime.app.Application.onGamepadButtonDown","lime/app/Application.hx",239,0x8bc55476)
		HX_STACK_THIS(this)
		HX_STACK_ARG(gamepad,"gamepad")
		HX_STACK_ARG(button,"button")
		HX_STACK_LINE(239)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(239)
		Array< ::lime::app::IModule > _g1 = this->modules;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(239)
		while((true)){
			HX_STACK_LINE(239)
			bool tmp = (_g < _g1->length);		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(239)
			bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(239)
			if ((tmp1)){
				HX_STACK_LINE(239)
				break;
			}
			HX_STACK_LINE(239)
			::lime::app::IModule tmp2 = _g1->__get(_g);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(239)
			::lime::app::IModule module = tmp2;		HX_STACK_VAR(module,"module");
			HX_STACK_LINE(239)
			++(_g);
			HX_STACK_LINE(241)
			::lime::ui::Gamepad tmp3 = gamepad;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(241)
			int tmp4 = button;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(241)
			module->onGamepadButtonDown(tmp3,tmp4);
		}
	}
return null();
}


Void Application_obj::onGamepadButtonUp( ::lime::ui::Gamepad gamepad,int button){
{
		HX_STACK_FRAME("lime.app.Application","onGamepadButtonUp",0x1cbc5f6b,"lime.app.Application.onGamepadButtonUp","lime/app/Application.hx",250,0x8bc55476)
		HX_STACK_THIS(this)
		HX_STACK_ARG(gamepad,"gamepad")
		HX_STACK_ARG(button,"button")
		HX_STACK_LINE(250)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(250)
		Array< ::lime::app::IModule > _g1 = this->modules;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(250)
		while((true)){
			HX_STACK_LINE(250)
			bool tmp = (_g < _g1->length);		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(250)
			bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(250)
			if ((tmp1)){
				HX_STACK_LINE(250)
				break;
			}
			HX_STACK_LINE(250)
			::lime::app::IModule tmp2 = _g1->__get(_g);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(250)
			::lime::app::IModule module = tmp2;		HX_STACK_VAR(module,"module");
			HX_STACK_LINE(250)
			++(_g);
			HX_STACK_LINE(252)
			::lime::ui::Gamepad tmp3 = gamepad;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(252)
			int tmp4 = button;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(252)
			module->onGamepadButtonUp(tmp3,tmp4);
		}
	}
return null();
}


Void Application_obj::onGamepadConnect( ::lime::ui::Gamepad gamepad){
{
		HX_STACK_FRAME("lime.app.Application","onGamepadConnect",0xf3ecc32c,"lime.app.Application.onGamepadConnect","lime/app/Application.hx",259,0x8bc55476)
		HX_STACK_THIS(this)
		HX_STACK_ARG(gamepad,"gamepad")
		HX_STACK_LINE(261)
		{
			HX_STACK_LINE(261)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(261)
			Array< ::lime::app::IModule > _g1 = this->modules;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(261)
			while((true)){
				HX_STACK_LINE(261)
				bool tmp = (_g < _g1->length);		HX_STACK_VAR(tmp,"tmp");
				HX_STACK_LINE(261)
				bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(261)
				if ((tmp1)){
					HX_STACK_LINE(261)
					break;
				}
				HX_STACK_LINE(261)
				::lime::app::IModule tmp2 = _g1->__get(_g);		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(261)
				::lime::app::IModule module = tmp2;		HX_STACK_VAR(module,"module");
				HX_STACK_LINE(261)
				++(_g);
				HX_STACK_LINE(263)
				::lime::ui::Gamepad tmp3 = gamepad;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(263)
				module->onGamepadConnect(tmp3);
			}
		}
		HX_STACK_LINE(267)
		Dynamic tmp = this->onGamepadAxisMove_dyn();		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(267)
		::lime::ui::Gamepad tmp1 = gamepad;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(267)
		Dynamic tmp2;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(267)
		{
			HX_STACK_LINE(267)
			Dynamic f = tmp;		HX_STACK_VAR(f,"f");
			HX_STACK_LINE(267)
			::lime::ui::Gamepad a1 = tmp1;		HX_STACK_VAR(a1,"a1");

			HX_BEGIN_LOCAL_FUNC_S2(hx::LocalFunc,_Function_2_1,::lime::ui::Gamepad,a1,Dynamic,f)
			int __ArgCount() const { return 2; }
			Void run(int a2,Float a3){
				HX_STACK_FRAME("*","_Function_2_1",0x5201af78,"*._Function_2_1","lime/app/Application.hx",267,0x8bc55476)
				HX_STACK_ARG(a2,"a2")
				HX_STACK_ARG(a3,"a3")
				{
					HX_STACK_LINE(267)
					::lime::ui::Gamepad tmp3 = a1;		HX_STACK_VAR(tmp3,"tmp3");
					HX_STACK_LINE(267)
					int tmp4 = a2;		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(267)
					Float tmp5 = a3;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(267)
					f(tmp3,tmp4,tmp5).Cast< Void >();
				}
				return null();
			}
			HX_END_LOCAL_FUNC2((void))

			HX_STACK_LINE(267)
			tmp2 =  Dynamic(new _Function_2_1(a1,f));
		}
		HX_STACK_LINE(267)
		gamepad->onAxisMove->add(tmp2,null(),null());
		HX_STACK_LINE(268)
		Dynamic tmp3 = this->onGamepadButtonDown_dyn();		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(268)
		::lime::ui::Gamepad tmp4 = gamepad;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(268)
		Dynamic tmp5;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(268)
		{
			HX_STACK_LINE(268)
			Dynamic f = tmp3;		HX_STACK_VAR(f,"f");
			HX_STACK_LINE(268)
			::lime::ui::Gamepad a1 = tmp4;		HX_STACK_VAR(a1,"a1");

			HX_BEGIN_LOCAL_FUNC_S2(hx::LocalFunc,_Function_2_1,::lime::ui::Gamepad,a1,Dynamic,f)
			int __ArgCount() const { return 1; }
			Void run(int a2){
				HX_STACK_FRAME("*","_Function_2_1",0x5201af78,"*._Function_2_1","lime/app/Application.hx",268,0x8bc55476)
				HX_STACK_ARG(a2,"a2")
				{
					HX_STACK_LINE(268)
					::lime::ui::Gamepad tmp6 = a1;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(268)
					int tmp7 = a2;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(268)
					f(tmp6,tmp7).Cast< Void >();
				}
				return null();
			}
			HX_END_LOCAL_FUNC1((void))

			HX_STACK_LINE(268)
			tmp5 =  Dynamic(new _Function_2_1(a1,f));
		}
		HX_STACK_LINE(268)
		gamepad->onButtonDown->add(tmp5,null(),null());
		HX_STACK_LINE(269)
		Dynamic tmp6 = this->onGamepadButtonUp_dyn();		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(269)
		::lime::ui::Gamepad tmp7 = gamepad;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(269)
		Dynamic tmp8;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(269)
		{
			HX_STACK_LINE(269)
			Dynamic f = tmp6;		HX_STACK_VAR(f,"f");
			HX_STACK_LINE(269)
			::lime::ui::Gamepad a1 = tmp7;		HX_STACK_VAR(a1,"a1");

			HX_BEGIN_LOCAL_FUNC_S2(hx::LocalFunc,_Function_2_1,::lime::ui::Gamepad,a1,Dynamic,f)
			int __ArgCount() const { return 1; }
			Void run(int a2){
				HX_STACK_FRAME("*","_Function_2_1",0x5201af78,"*._Function_2_1","lime/app/Application.hx",269,0x8bc55476)
				HX_STACK_ARG(a2,"a2")
				{
					HX_STACK_LINE(269)
					::lime::ui::Gamepad tmp9 = a1;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(269)
					int tmp10 = a2;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(269)
					f(tmp9,tmp10).Cast< Void >();
				}
				return null();
			}
			HX_END_LOCAL_FUNC1((void))

			HX_STACK_LINE(269)
			tmp8 =  Dynamic(new _Function_2_1(a1,f));
		}
		HX_STACK_LINE(269)
		gamepad->onButtonUp->add(tmp8,null(),null());
		HX_STACK_LINE(270)
		Dynamic tmp9 = this->onGamepadDisconnect_dyn();		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(270)
		::lime::ui::Gamepad tmp10 = gamepad;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(270)
		Dynamic tmp11;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(270)
		{
			HX_STACK_LINE(270)
			Dynamic f = tmp9;		HX_STACK_VAR(f,"f");
			HX_STACK_LINE(270)
			::lime::ui::Gamepad a1 = tmp10;		HX_STACK_VAR(a1,"a1");

			HX_BEGIN_LOCAL_FUNC_S2(hx::LocalFunc,_Function_2_1,::lime::ui::Gamepad,a1,Dynamic,f)
			int __ArgCount() const { return 0; }
			Void run(){
				HX_STACK_FRAME("*","_Function_2_1",0x5201af78,"*._Function_2_1","lime/app/Application.hx",270,0x8bc55476)
				{
					HX_STACK_LINE(270)
					::lime::ui::Gamepad tmp12 = a1;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(270)
					f(tmp12).Cast< Void >();
				}
				return null();
			}
			HX_END_LOCAL_FUNC0((void))

			HX_STACK_LINE(270)
			tmp11 =  Dynamic(new _Function_2_1(a1,f));
		}
		HX_STACK_LINE(270)
		gamepad->onDisconnect->add(tmp11,null(),null());
	}
return null();
}


Void Application_obj::onGamepadDisconnect( ::lime::ui::Gamepad gamepad){
{
		HX_STACK_FRAME("lime.app.Application","onGamepadDisconnect",0xbdc6525a,"lime.app.Application.onGamepadDisconnect","lime/app/Application.hx",277,0x8bc55476)
		HX_STACK_THIS(this)
		HX_STACK_ARG(gamepad,"gamepad")
		HX_STACK_LINE(277)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(277)
		Array< ::lime::app::IModule > _g1 = this->modules;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(277)
		while((true)){
			HX_STACK_LINE(277)
			bool tmp = (_g < _g1->length);		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(277)
			bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(277)
			if ((tmp1)){
				HX_STACK_LINE(277)
				break;
			}
			HX_STACK_LINE(277)
			::lime::app::IModule tmp2 = _g1->__get(_g);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(277)
			::lime::app::IModule module = tmp2;		HX_STACK_VAR(module,"module");
			HX_STACK_LINE(277)
			++(_g);
			HX_STACK_LINE(279)
			::lime::ui::Gamepad tmp3 = gamepad;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(279)
			module->onGamepadDisconnect(tmp3);
		}
	}
return null();
}


Void Application_obj::onKeyDown( ::lime::ui::Window window,int keyCode,int modifier){
{
		HX_STACK_FRAME("lime.app.Application","onKeyDown",0x622d115e,"lime.app.Application.onKeyDown","lime/app/Application.hx",288,0x8bc55476)
		HX_STACK_THIS(this)
		HX_STACK_ARG(window,"window")
		HX_STACK_ARG(keyCode,"keyCode")
		HX_STACK_ARG(modifier,"modifier")
		HX_STACK_LINE(288)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(288)
		Array< ::lime::app::IModule > _g1 = this->modules;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(288)
		while((true)){
			HX_STACK_LINE(288)
			bool tmp = (_g < _g1->length);		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(288)
			bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(288)
			if ((tmp1)){
				HX_STACK_LINE(288)
				break;
			}
			HX_STACK_LINE(288)
			::lime::app::IModule tmp2 = _g1->__get(_g);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(288)
			::lime::app::IModule module = tmp2;		HX_STACK_VAR(module,"module");
			HX_STACK_LINE(288)
			++(_g);
			HX_STACK_LINE(290)
			::lime::ui::Window tmp3 = window;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(290)
			int tmp4 = keyCode;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(290)
			int tmp5 = modifier;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(290)
			module->onKeyDown(tmp3,tmp4,tmp5);
		}
	}
return null();
}


Void Application_obj::onKeyUp( ::lime::ui::Window window,int keyCode,int modifier){
{
		HX_STACK_FRAME("lime.app.Application","onKeyUp",0x55960857,"lime.app.Application.onKeyUp","lime/app/Application.hx",299,0x8bc55476)
		HX_STACK_THIS(this)
		HX_STACK_ARG(window,"window")
		HX_STACK_ARG(keyCode,"keyCode")
		HX_STACK_ARG(modifier,"modifier")
		HX_STACK_LINE(299)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(299)
		Array< ::lime::app::IModule > _g1 = this->modules;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(299)
		while((true)){
			HX_STACK_LINE(299)
			bool tmp = (_g < _g1->length);		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(299)
			bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(299)
			if ((tmp1)){
				HX_STACK_LINE(299)
				break;
			}
			HX_STACK_LINE(299)
			::lime::app::IModule tmp2 = _g1->__get(_g);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(299)
			::lime::app::IModule module = tmp2;		HX_STACK_VAR(module,"module");
			HX_STACK_LINE(299)
			++(_g);
			HX_STACK_LINE(301)
			::lime::ui::Window tmp3 = window;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(301)
			int tmp4 = keyCode;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(301)
			int tmp5 = modifier;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(301)
			module->onKeyUp(tmp3,tmp4,tmp5);
		}
	}
return null();
}


Void Application_obj::onModuleExit( int code){
{
		HX_STACK_FRAME("lime.app.Application","onModuleExit",0x4a2a2a4d,"lime.app.Application.onModuleExit","lime/app/Application.hx",308,0x8bc55476)
		HX_STACK_THIS(this)
		HX_STACK_ARG(code,"code")
		HX_STACK_LINE(310)
		{
			HX_STACK_LINE(310)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(310)
			Array< ::lime::app::IModule > _g1 = this->modules;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(310)
			while((true)){
				HX_STACK_LINE(310)
				bool tmp = (_g < _g1->length);		HX_STACK_VAR(tmp,"tmp");
				HX_STACK_LINE(310)
				bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(310)
				if ((tmp1)){
					HX_STACK_LINE(310)
					break;
				}
				HX_STACK_LINE(310)
				::lime::app::IModule tmp2 = _g1->__get(_g);		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(310)
				::lime::app::IModule module = tmp2;		HX_STACK_VAR(module,"module");
				HX_STACK_LINE(310)
				++(_g);
				HX_STACK_LINE(312)
				int tmp3 = code;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(312)
				module->onModuleExit(tmp3);
			}
		}
		HX_STACK_LINE(316)
		::lime::_backend::native::NativeApplication tmp = this->backend;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(316)
		tmp->exit();
	}
return null();
}


Void Application_obj::onMouseDown( ::lime::ui::Window window,Float x,Float y,int button){
{
		HX_STACK_FRAME("lime.app.Application","onMouseDown",0x372f8224,"lime.app.Application.onMouseDown","lime/app/Application.hx",323,0x8bc55476)
		HX_STACK_THIS(this)
		HX_STACK_ARG(window,"window")
		HX_STACK_ARG(x,"x")
		HX_STACK_ARG(y,"y")
		HX_STACK_ARG(button,"button")
		HX_STACK_LINE(323)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(323)
		Array< ::lime::app::IModule > _g1 = this->modules;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(323)
		while((true)){
			HX_STACK_LINE(323)
			bool tmp = (_g < _g1->length);		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(323)
			bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(323)
			if ((tmp1)){
				HX_STACK_LINE(323)
				break;
			}
			HX_STACK_LINE(323)
			::lime::app::IModule tmp2 = _g1->__get(_g);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(323)
			::lime::app::IModule module = tmp2;		HX_STACK_VAR(module,"module");
			HX_STACK_LINE(323)
			++(_g);
			HX_STACK_LINE(325)
			::lime::ui::Window tmp3 = window;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(325)
			Float tmp4 = x;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(325)
			Float tmp5 = y;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(325)
			int tmp6 = button;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(325)
			module->onMouseDown(tmp3,tmp4,tmp5,tmp6);
		}
	}
return null();
}


Void Application_obj::onMouseMove( ::lime::ui::Window window,Float x,Float y){
{
		HX_STACK_FRAME("lime.app.Application","onMouseMove",0x3d226cd3,"lime.app.Application.onMouseMove","lime/app/Application.hx",334,0x8bc55476)
		HX_STACK_THIS(this)
		HX_STACK_ARG(window,"window")
		HX_STACK_ARG(x,"x")
		HX_STACK_ARG(y,"y")
		HX_STACK_LINE(334)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(334)
		Array< ::lime::app::IModule > _g1 = this->modules;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(334)
		while((true)){
			HX_STACK_LINE(334)
			bool tmp = (_g < _g1->length);		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(334)
			bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(334)
			if ((tmp1)){
				HX_STACK_LINE(334)
				break;
			}
			HX_STACK_LINE(334)
			::lime::app::IModule tmp2 = _g1->__get(_g);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(334)
			::lime::app::IModule module = tmp2;		HX_STACK_VAR(module,"module");
			HX_STACK_LINE(334)
			++(_g);
			HX_STACK_LINE(336)
			::lime::ui::Window tmp3 = window;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(336)
			Float tmp4 = x;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(336)
			Float tmp5 = y;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(336)
			module->onMouseMove(tmp3,tmp4,tmp5);
		}
	}
return null();
}


Void Application_obj::onMouseMoveRelative( ::lime::ui::Window window,Float x,Float y){
{
		HX_STACK_FRAME("lime.app.Application","onMouseMoveRelative",0xf3ee70bf,"lime.app.Application.onMouseMoveRelative","lime/app/Application.hx",345,0x8bc55476)
		HX_STACK_THIS(this)
		HX_STACK_ARG(window,"window")
		HX_STACK_ARG(x,"x")
		HX_STACK_ARG(y,"y")
		HX_STACK_LINE(345)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(345)
		Array< ::lime::app::IModule > _g1 = this->modules;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(345)
		while((true)){
			HX_STACK_LINE(345)
			bool tmp = (_g < _g1->length);		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(345)
			bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(345)
			if ((tmp1)){
				HX_STACK_LINE(345)
				break;
			}
			HX_STACK_LINE(345)
			::lime::app::IModule tmp2 = _g1->__get(_g);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(345)
			::lime::app::IModule module = tmp2;		HX_STACK_VAR(module,"module");
			HX_STACK_LINE(345)
			++(_g);
			HX_STACK_LINE(347)
			::lime::ui::Window tmp3 = window;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(347)
			Float tmp4 = x;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(347)
			Float tmp5 = y;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(347)
			module->onMouseMoveRelative(tmp3,tmp4,tmp5);
		}
	}
return null();
}


Void Application_obj::onMouseUp( ::lime::ui::Window window,Float x,Float y,int button){
{
		HX_STACK_FRAME("lime.app.Application","onMouseUp",0x86589b9d,"lime.app.Application.onMouseUp","lime/app/Application.hx",356,0x8bc55476)
		HX_STACK_THIS(this)
		HX_STACK_ARG(window,"window")
		HX_STACK_ARG(x,"x")
		HX_STACK_ARG(y,"y")
		HX_STACK_ARG(button,"button")
		HX_STACK_LINE(356)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(356)
		Array< ::lime::app::IModule > _g1 = this->modules;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(356)
		while((true)){
			HX_STACK_LINE(356)
			bool tmp = (_g < _g1->length);		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(356)
			bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(356)
			if ((tmp1)){
				HX_STACK_LINE(356)
				break;
			}
			HX_STACK_LINE(356)
			::lime::app::IModule tmp2 = _g1->__get(_g);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(356)
			::lime::app::IModule module = tmp2;		HX_STACK_VAR(module,"module");
			HX_STACK_LINE(356)
			++(_g);
			HX_STACK_LINE(358)
			::lime::ui::Window tmp3 = window;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(358)
			Float tmp4 = x;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(358)
			Float tmp5 = y;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(358)
			int tmp6 = button;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(358)
			module->onMouseUp(tmp3,tmp4,tmp5,tmp6);
		}
	}
return null();
}


Void Application_obj::onMouseWheel( ::lime::ui::Window window,Float deltaX,Float deltaY){
{
		HX_STACK_FRAME("lime.app.Application","onMouseWheel",0xfe513499,"lime.app.Application.onMouseWheel","lime/app/Application.hx",367,0x8bc55476)
		HX_STACK_THIS(this)
		HX_STACK_ARG(window,"window")
		HX_STACK_ARG(deltaX,"deltaX")
		HX_STACK_ARG(deltaY,"deltaY")
		HX_STACK_LINE(367)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(367)
		Array< ::lime::app::IModule > _g1 = this->modules;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(367)
		while((true)){
			HX_STACK_LINE(367)
			bool tmp = (_g < _g1->length);		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(367)
			bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(367)
			if ((tmp1)){
				HX_STACK_LINE(367)
				break;
			}
			HX_STACK_LINE(367)
			::lime::app::IModule tmp2 = _g1->__get(_g);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(367)
			::lime::app::IModule module = tmp2;		HX_STACK_VAR(module,"module");
			HX_STACK_LINE(367)
			++(_g);
			HX_STACK_LINE(369)
			::lime::ui::Window tmp3 = window;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(369)
			Float tmp4 = deltaX;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(369)
			Float tmp5 = deltaY;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(369)
			module->onMouseWheel(tmp3,tmp4,tmp5);
		}
	}
return null();
}


Void Application_obj::onPreloadComplete( ){
{
		HX_STACK_FRAME("lime.app.Application","onPreloadComplete",0x8806a25f,"lime.app.Application.onPreloadComplete","lime/app/Application.hx",378,0x8bc55476)
		HX_STACK_THIS(this)
		HX_STACK_LINE(378)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(378)
		Array< ::lime::app::IModule > _g1 = this->modules;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(378)
		while((true)){
			HX_STACK_LINE(378)
			bool tmp = (_g < _g1->length);		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(378)
			bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(378)
			if ((tmp1)){
				HX_STACK_LINE(378)
				break;
			}
			HX_STACK_LINE(378)
			::lime::app::IModule tmp2 = _g1->__get(_g);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(378)
			::lime::app::IModule module = tmp2;		HX_STACK_VAR(module,"module");
			HX_STACK_LINE(378)
			++(_g);
			HX_STACK_LINE(380)
			module->onPreloadComplete();
		}
	}
return null();
}


Void Application_obj::onPreloadProgress( int loaded,int total){
{
		HX_STACK_FRAME("lime.app.Application","onPreloadProgress",0x8e699953,"lime.app.Application.onPreloadProgress","lime/app/Application.hx",389,0x8bc55476)
		HX_STACK_THIS(this)
		HX_STACK_ARG(loaded,"loaded")
		HX_STACK_ARG(total,"total")
		HX_STACK_LINE(389)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(389)
		Array< ::lime::app::IModule > _g1 = this->modules;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(389)
		while((true)){
			HX_STACK_LINE(389)
			bool tmp = (_g < _g1->length);		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(389)
			bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(389)
			if ((tmp1)){
				HX_STACK_LINE(389)
				break;
			}
			HX_STACK_LINE(389)
			::lime::app::IModule tmp2 = _g1->__get(_g);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(389)
			::lime::app::IModule module = tmp2;		HX_STACK_VAR(module,"module");
			HX_STACK_LINE(389)
			++(_g);
			HX_STACK_LINE(391)
			int tmp3 = loaded;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(391)
			int tmp4 = total;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(391)
			module->onPreloadProgress(tmp3,tmp4);
		}
	}
return null();
}


Void Application_obj::onRenderContextLost( ::lime::graphics::Renderer renderer){
{
		HX_STACK_FRAME("lime.app.Application","onRenderContextLost",0xfdd705ba,"lime.app.Application.onRenderContextLost","lime/app/Application.hx",400,0x8bc55476)
		HX_STACK_THIS(this)
		HX_STACK_ARG(renderer,"renderer")
		HX_STACK_LINE(400)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(400)
		Array< ::lime::app::IModule > _g1 = this->modules;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(400)
		while((true)){
			HX_STACK_LINE(400)
			bool tmp = (_g < _g1->length);		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(400)
			bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(400)
			if ((tmp1)){
				HX_STACK_LINE(400)
				break;
			}
			HX_STACK_LINE(400)
			::lime::app::IModule tmp2 = _g1->__get(_g);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(400)
			::lime::app::IModule module = tmp2;		HX_STACK_VAR(module,"module");
			HX_STACK_LINE(400)
			++(_g);
			HX_STACK_LINE(402)
			::lime::graphics::Renderer tmp3 = renderer;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(402)
			module->onRenderContextLost(tmp3);
		}
	}
return null();
}


Void Application_obj::onRenderContextRestored( ::lime::graphics::Renderer renderer,::lime::graphics::RenderContext context){
{
		HX_STACK_FRAME("lime.app.Application","onRenderContextRestored",0x4fd2fc2c,"lime.app.Application.onRenderContextRestored","lime/app/Application.hx",411,0x8bc55476)
		HX_STACK_THIS(this)
		HX_STACK_ARG(renderer,"renderer")
		HX_STACK_ARG(context,"context")
		HX_STACK_LINE(411)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(411)
		Array< ::lime::app::IModule > _g1 = this->modules;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(411)
		while((true)){
			HX_STACK_LINE(411)
			bool tmp = (_g < _g1->length);		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(411)
			bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(411)
			if ((tmp1)){
				HX_STACK_LINE(411)
				break;
			}
			HX_STACK_LINE(411)
			::lime::app::IModule tmp2 = _g1->__get(_g);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(411)
			::lime::app::IModule module = tmp2;		HX_STACK_VAR(module,"module");
			HX_STACK_LINE(411)
			++(_g);
			HX_STACK_LINE(413)
			::lime::graphics::Renderer tmp3 = renderer;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(413)
			::lime::graphics::RenderContext tmp4 = context;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(413)
			module->onRenderContextRestored(tmp3,tmp4);
		}
	}
return null();
}


Void Application_obj::onTextEdit( ::lime::ui::Window window,::String text,int start,int length){
{
		HX_STACK_FRAME("lime.app.Application","onTextEdit",0xa9173afa,"lime.app.Application.onTextEdit","lime/app/Application.hx",422,0x8bc55476)
		HX_STACK_THIS(this)
		HX_STACK_ARG(window,"window")
		HX_STACK_ARG(text,"text")
		HX_STACK_ARG(start,"start")
		HX_STACK_ARG(length,"length")
		HX_STACK_LINE(422)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(422)
		Array< ::lime::app::IModule > _g1 = this->modules;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(422)
		while((true)){
			HX_STACK_LINE(422)
			bool tmp = (_g < _g1->length);		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(422)
			bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(422)
			if ((tmp1)){
				HX_STACK_LINE(422)
				break;
			}
			HX_STACK_LINE(422)
			::lime::app::IModule tmp2 = _g1->__get(_g);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(422)
			::lime::app::IModule module = tmp2;		HX_STACK_VAR(module,"module");
			HX_STACK_LINE(422)
			++(_g);
			HX_STACK_LINE(424)
			::lime::ui::Window tmp3 = window;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(424)
			::String tmp4 = text;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(424)
			int tmp5 = start;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(424)
			int tmp6 = length;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(424)
			module->onTextEdit(tmp3,tmp4,tmp5,tmp6);
		}
	}
return null();
}


Void Application_obj::onTextInput( ::lime::ui::Window window,::String text){
{
		HX_STACK_FRAME("lime.app.Application","onTextInput",0x9f78251a,"lime.app.Application.onTextInput","lime/app/Application.hx",433,0x8bc55476)
		HX_STACK_THIS(this)
		HX_STACK_ARG(window,"window")
		HX_STACK_ARG(text,"text")
		HX_STACK_LINE(433)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(433)
		Array< ::lime::app::IModule > _g1 = this->modules;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(433)
		while((true)){
			HX_STACK_LINE(433)
			bool tmp = (_g < _g1->length);		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(433)
			bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(433)
			if ((tmp1)){
				HX_STACK_LINE(433)
				break;
			}
			HX_STACK_LINE(433)
			::lime::app::IModule tmp2 = _g1->__get(_g);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(433)
			::lime::app::IModule module = tmp2;		HX_STACK_VAR(module,"module");
			HX_STACK_LINE(433)
			++(_g);
			HX_STACK_LINE(435)
			::lime::ui::Window tmp3 = window;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(435)
			::String tmp4 = text;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(435)
			module->onTextInput(tmp3,tmp4);
		}
	}
return null();
}


Void Application_obj::onTouchEnd( ::lime::ui::Touch touch){
{
		HX_STACK_FRAME("lime.app.Application","onTouchEnd",0x6316e2ff,"lime.app.Application.onTouchEnd","lime/app/Application.hx",444,0x8bc55476)
		HX_STACK_THIS(this)
		HX_STACK_ARG(touch,"touch")
		HX_STACK_LINE(444)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(444)
		Array< ::lime::app::IModule > _g1 = this->modules;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(444)
		while((true)){
			HX_STACK_LINE(444)
			bool tmp = (_g < _g1->length);		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(444)
			bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(444)
			if ((tmp1)){
				HX_STACK_LINE(444)
				break;
			}
			HX_STACK_LINE(444)
			::lime::app::IModule tmp2 = _g1->__get(_g);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(444)
			::lime::app::IModule module = tmp2;		HX_STACK_VAR(module,"module");
			HX_STACK_LINE(444)
			++(_g);
			HX_STACK_LINE(446)
			::lime::ui::Touch tmp3 = touch;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(446)
			module->onTouchEnd(tmp3);
		}
	}
return null();
}


Void Application_obj::onTouchMove( ::lime::ui::Touch touch){
{
		HX_STACK_FRAME("lime.app.Application","onTouchMove",0x563a436d,"lime.app.Application.onTouchMove","lime/app/Application.hx",455,0x8bc55476)
		HX_STACK_THIS(this)
		HX_STACK_ARG(touch,"touch")
		HX_STACK_LINE(455)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(455)
		Array< ::lime::app::IModule > _g1 = this->modules;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(455)
		while((true)){
			HX_STACK_LINE(455)
			bool tmp = (_g < _g1->length);		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(455)
			bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(455)
			if ((tmp1)){
				HX_STACK_LINE(455)
				break;
			}
			HX_STACK_LINE(455)
			::lime::app::IModule tmp2 = _g1->__get(_g);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(455)
			::lime::app::IModule module = tmp2;		HX_STACK_VAR(module,"module");
			HX_STACK_LINE(455)
			++(_g);
			HX_STACK_LINE(457)
			::lime::ui::Touch tmp3 = touch;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(457)
			module->onTouchMove(tmp3);
		}
	}
return null();
}


Void Application_obj::onTouchStart( ::lime::ui::Touch touch){
{
		HX_STACK_FRAME("lime.app.Application","onTouchStart",0x94666486,"lime.app.Application.onTouchStart","lime/app/Application.hx",466,0x8bc55476)
		HX_STACK_THIS(this)
		HX_STACK_ARG(touch,"touch")
		HX_STACK_LINE(466)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(466)
		Array< ::lime::app::IModule > _g1 = this->modules;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(466)
		while((true)){
			HX_STACK_LINE(466)
			bool tmp = (_g < _g1->length);		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(466)
			bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(466)
			if ((tmp1)){
				HX_STACK_LINE(466)
				break;
			}
			HX_STACK_LINE(466)
			::lime::app::IModule tmp2 = _g1->__get(_g);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(466)
			::lime::app::IModule module = tmp2;		HX_STACK_VAR(module,"module");
			HX_STACK_LINE(466)
			++(_g);
			HX_STACK_LINE(468)
			::lime::ui::Touch tmp3 = touch;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(468)
			module->onTouchStart(tmp3);
		}
	}
return null();
}


Void Application_obj::onWindowActivate( ::lime::ui::Window window){
{
		HX_STACK_FRAME("lime.app.Application","onWindowActivate",0xf2f355a6,"lime.app.Application.onWindowActivate","lime/app/Application.hx",477,0x8bc55476)
		HX_STACK_THIS(this)
		HX_STACK_ARG(window,"window")
		HX_STACK_LINE(477)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(477)
		Array< ::lime::app::IModule > _g1 = this->modules;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(477)
		while((true)){
			HX_STACK_LINE(477)
			bool tmp = (_g < _g1->length);		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(477)
			bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(477)
			if ((tmp1)){
				HX_STACK_LINE(477)
				break;
			}
			HX_STACK_LINE(477)
			::lime::app::IModule tmp2 = _g1->__get(_g);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(477)
			::lime::app::IModule module = tmp2;		HX_STACK_VAR(module,"module");
			HX_STACK_LINE(477)
			++(_g);
			HX_STACK_LINE(479)
			::lime::ui::Window tmp3 = window;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(479)
			module->onWindowActivate(tmp3);
		}
	}
return null();
}


Void Application_obj::onWindowClose( ::lime::ui::Window window){
{
		HX_STACK_FRAME("lime.app.Application","onWindowClose",0x133677e5,"lime.app.Application.onWindowClose","lime/app/Application.hx",486,0x8bc55476)
		HX_STACK_THIS(this)
		HX_STACK_ARG(window,"window")
		HX_STACK_LINE(488)
		{
			HX_STACK_LINE(488)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(488)
			Array< ::lime::app::IModule > _g1 = this->modules;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(488)
			while((true)){
				HX_STACK_LINE(488)
				bool tmp = (_g < _g1->length);		HX_STACK_VAR(tmp,"tmp");
				HX_STACK_LINE(488)
				bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(488)
				if ((tmp1)){
					HX_STACK_LINE(488)
					break;
				}
				HX_STACK_LINE(488)
				::lime::app::IModule tmp2 = _g1->__get(_g);		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(488)
				::lime::app::IModule module = tmp2;		HX_STACK_VAR(module,"module");
				HX_STACK_LINE(488)
				++(_g);
				HX_STACK_LINE(490)
				::lime::ui::Window tmp3 = window;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(490)
				module->onWindowClose(tmp3);
			}
		}
		HX_STACK_LINE(494)
		::lime::ui::Window tmp = window;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(494)
		this->removeWindow(tmp);
	}
return null();
}


Void Application_obj::onWindowCreate( ::lime::ui::Window window){
{
		HX_STACK_FRAME("lime.app.Application","onWindowCreate",0x2a302e2f,"lime.app.Application.onWindowCreate","lime/app/Application.hx",501,0x8bc55476)
		HX_STACK_THIS(this)
		HX_STACK_ARG(window,"window")
		HX_STACK_LINE(501)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(501)
		Array< ::lime::app::IModule > _g1 = this->modules;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(501)
		while((true)){
			HX_STACK_LINE(501)
			bool tmp = (_g < _g1->length);		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(501)
			bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(501)
			if ((tmp1)){
				HX_STACK_LINE(501)
				break;
			}
			HX_STACK_LINE(501)
			::lime::app::IModule tmp2 = _g1->__get(_g);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(501)
			::lime::app::IModule module = tmp2;		HX_STACK_VAR(module,"module");
			HX_STACK_LINE(501)
			++(_g);
			HX_STACK_LINE(503)
			::lime::ui::Window tmp3 = window;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(503)
			module->onWindowCreate(tmp3);
		}
	}
return null();
}


Void Application_obj::onWindowDeactivate( ::lime::ui::Window window){
{
		HX_STACK_FRAME("lime.app.Application","onWindowDeactivate",0x950138e7,"lime.app.Application.onWindowDeactivate","lime/app/Application.hx",512,0x8bc55476)
		HX_STACK_THIS(this)
		HX_STACK_ARG(window,"window")
		HX_STACK_LINE(512)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(512)
		Array< ::lime::app::IModule > _g1 = this->modules;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(512)
		while((true)){
			HX_STACK_LINE(512)
			bool tmp = (_g < _g1->length);		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(512)
			bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(512)
			if ((tmp1)){
				HX_STACK_LINE(512)
				break;
			}
			HX_STACK_LINE(512)
			::lime::app::IModule tmp2 = _g1->__get(_g);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(512)
			::lime::app::IModule module = tmp2;		HX_STACK_VAR(module,"module");
			HX_STACK_LINE(512)
			++(_g);
			HX_STACK_LINE(514)
			::lime::ui::Window tmp3 = window;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(514)
			module->onWindowDeactivate(tmp3);
		}
	}
return null();
}


Void Application_obj::onWindowEnter( ::lime::ui::Window window){
{
		HX_STACK_FRAME("lime.app.Application","onWindowEnter",0x3b59cd45,"lime.app.Application.onWindowEnter","lime/app/Application.hx",523,0x8bc55476)
		HX_STACK_THIS(this)
		HX_STACK_ARG(window,"window")
		HX_STACK_LINE(523)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(523)
		Array< ::lime::app::IModule > _g1 = this->modules;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(523)
		while((true)){
			HX_STACK_LINE(523)
			bool tmp = (_g < _g1->length);		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(523)
			bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(523)
			if ((tmp1)){
				HX_STACK_LINE(523)
				break;
			}
			HX_STACK_LINE(523)
			::lime::app::IModule tmp2 = _g1->__get(_g);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(523)
			::lime::app::IModule module = tmp2;		HX_STACK_VAR(module,"module");
			HX_STACK_LINE(523)
			++(_g);
			HX_STACK_LINE(525)
			::lime::ui::Window tmp3 = window;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(525)
			module->onWindowEnter(tmp3);
		}
	}
return null();
}


Void Application_obj::onWindowFocusIn( ::lime::ui::Window window){
{
		HX_STACK_FRAME("lime.app.Application","onWindowFocusIn",0xf010cb4a,"lime.app.Application.onWindowFocusIn","lime/app/Application.hx",534,0x8bc55476)
		HX_STACK_THIS(this)
		HX_STACK_ARG(window,"window")
		HX_STACK_LINE(534)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(534)
		Array< ::lime::app::IModule > _g1 = this->modules;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(534)
		while((true)){
			HX_STACK_LINE(534)
			bool tmp = (_g < _g1->length);		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(534)
			bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(534)
			if ((tmp1)){
				HX_STACK_LINE(534)
				break;
			}
			HX_STACK_LINE(534)
			::lime::app::IModule tmp2 = _g1->__get(_g);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(534)
			::lime::app::IModule module = tmp2;		HX_STACK_VAR(module,"module");
			HX_STACK_LINE(534)
			++(_g);
			HX_STACK_LINE(536)
			::lime::ui::Window tmp3 = window;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(536)
			module->onWindowFocusIn(tmp3);
		}
	}
return null();
}


Void Application_obj::onWindowFocusOut( ::lime::ui::Window window){
{
		HX_STACK_FRAME("lime.app.Application","onWindowFocusOut",0x1ea5a989,"lime.app.Application.onWindowFocusOut","lime/app/Application.hx",545,0x8bc55476)
		HX_STACK_THIS(this)
		HX_STACK_ARG(window,"window")
		HX_STACK_LINE(545)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(545)
		Array< ::lime::app::IModule > _g1 = this->modules;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(545)
		while((true)){
			HX_STACK_LINE(545)
			bool tmp = (_g < _g1->length);		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(545)
			bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(545)
			if ((tmp1)){
				HX_STACK_LINE(545)
				break;
			}
			HX_STACK_LINE(545)
			::lime::app::IModule tmp2 = _g1->__get(_g);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(545)
			::lime::app::IModule module = tmp2;		HX_STACK_VAR(module,"module");
			HX_STACK_LINE(545)
			++(_g);
			HX_STACK_LINE(547)
			::lime::ui::Window tmp3 = window;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(547)
			module->onWindowFocusOut(tmp3);
		}
	}
return null();
}


Void Application_obj::onWindowFullscreen( ::lime::ui::Window window){
{
		HX_STACK_FRAME("lime.app.Application","onWindowFullscreen",0x52b416ee,"lime.app.Application.onWindowFullscreen","lime/app/Application.hx",556,0x8bc55476)
		HX_STACK_THIS(this)
		HX_STACK_ARG(window,"window")
		HX_STACK_LINE(556)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(556)
		Array< ::lime::app::IModule > _g1 = this->modules;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(556)
		while((true)){
			HX_STACK_LINE(556)
			bool tmp = (_g < _g1->length);		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(556)
			bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(556)
			if ((tmp1)){
				HX_STACK_LINE(556)
				break;
			}
			HX_STACK_LINE(556)
			::lime::app::IModule tmp2 = _g1->__get(_g);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(556)
			::lime::app::IModule module = tmp2;		HX_STACK_VAR(module,"module");
			HX_STACK_LINE(556)
			++(_g);
			HX_STACK_LINE(558)
			::lime::ui::Window tmp3 = window;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(558)
			module->onWindowFullscreen(tmp3);
		}
	}
return null();
}


Void Application_obj::onWindowLeave( ::lime::ui::Window window){
{
		HX_STACK_FRAME("lime.app.Application","onWindowLeave",0x3d269524,"lime.app.Application.onWindowLeave","lime/app/Application.hx",567,0x8bc55476)
		HX_STACK_THIS(this)
		HX_STACK_ARG(window,"window")
		HX_STACK_LINE(567)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(567)
		Array< ::lime::app::IModule > _g1 = this->modules;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(567)
		while((true)){
			HX_STACK_LINE(567)
			bool tmp = (_g < _g1->length);		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(567)
			bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(567)
			if ((tmp1)){
				HX_STACK_LINE(567)
				break;
			}
			HX_STACK_LINE(567)
			::lime::app::IModule tmp2 = _g1->__get(_g);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(567)
			::lime::app::IModule module = tmp2;		HX_STACK_VAR(module,"module");
			HX_STACK_LINE(567)
			++(_g);
			HX_STACK_LINE(569)
			::lime::ui::Window tmp3 = window;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(569)
			module->onWindowLeave(tmp3);
		}
	}
return null();
}


Void Application_obj::onWindowMinimize( ::lime::ui::Window window){
{
		HX_STACK_FRAME("lime.app.Application","onWindowMinimize",0x2ec07911,"lime.app.Application.onWindowMinimize","lime/app/Application.hx",578,0x8bc55476)
		HX_STACK_THIS(this)
		HX_STACK_ARG(window,"window")
		HX_STACK_LINE(578)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(578)
		Array< ::lime::app::IModule > _g1 = this->modules;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(578)
		while((true)){
			HX_STACK_LINE(578)
			bool tmp = (_g < _g1->length);		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(578)
			bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(578)
			if ((tmp1)){
				HX_STACK_LINE(578)
				break;
			}
			HX_STACK_LINE(578)
			::lime::app::IModule tmp2 = _g1->__get(_g);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(578)
			::lime::app::IModule module = tmp2;		HX_STACK_VAR(module,"module");
			HX_STACK_LINE(578)
			++(_g);
			HX_STACK_LINE(580)
			::lime::ui::Window tmp3 = window;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(580)
			module->onWindowMinimize(tmp3);
		}
	}
return null();
}


Void Application_obj::onWindowMove( ::lime::ui::Window window,Float x,Float y){
{
		HX_STACK_FRAME("lime.app.Application","onWindowMove",0xea016784,"lime.app.Application.onWindowMove","lime/app/Application.hx",589,0x8bc55476)
		HX_STACK_THIS(this)
		HX_STACK_ARG(window,"window")
		HX_STACK_ARG(x,"x")
		HX_STACK_ARG(y,"y")
		HX_STACK_LINE(589)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(589)
		Array< ::lime::app::IModule > _g1 = this->modules;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(589)
		while((true)){
			HX_STACK_LINE(589)
			bool tmp = (_g < _g1->length);		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(589)
			bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(589)
			if ((tmp1)){
				HX_STACK_LINE(589)
				break;
			}
			HX_STACK_LINE(589)
			::lime::app::IModule tmp2 = _g1->__get(_g);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(589)
			::lime::app::IModule module = tmp2;		HX_STACK_VAR(module,"module");
			HX_STACK_LINE(589)
			++(_g);
			HX_STACK_LINE(591)
			::lime::ui::Window tmp3 = window;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(591)
			Float tmp4 = x;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(591)
			Float tmp5 = y;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(591)
			module->onWindowMove(tmp3,tmp4,tmp5);
		}
	}
return null();
}


Void Application_obj::onWindowResize( ::lime::ui::Window window,int width,int height){
{
		HX_STACK_FRAME("lime.app.Application","onWindowResize",0xb69c2127,"lime.app.Application.onWindowResize","lime/app/Application.hx",600,0x8bc55476)
		HX_STACK_THIS(this)
		HX_STACK_ARG(window,"window")
		HX_STACK_ARG(width,"width")
		HX_STACK_ARG(height,"height")
		HX_STACK_LINE(600)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(600)
		Array< ::lime::app::IModule > _g1 = this->modules;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(600)
		while((true)){
			HX_STACK_LINE(600)
			bool tmp = (_g < _g1->length);		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(600)
			bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(600)
			if ((tmp1)){
				HX_STACK_LINE(600)
				break;
			}
			HX_STACK_LINE(600)
			::lime::app::IModule tmp2 = _g1->__get(_g);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(600)
			::lime::app::IModule module = tmp2;		HX_STACK_VAR(module,"module");
			HX_STACK_LINE(600)
			++(_g);
			HX_STACK_LINE(602)
			::lime::ui::Window tmp3 = window;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(602)
			int tmp4 = width;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(602)
			int tmp5 = height;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(602)
			module->onWindowResize(tmp3,tmp4,tmp5);
		}
	}
return null();
}


Void Application_obj::onWindowRestore( ::lime::ui::Window window){
{
		HX_STACK_FRAME("lime.app.Application","onWindowRestore",0x193decbb,"lime.app.Application.onWindowRestore","lime/app/Application.hx",611,0x8bc55476)
		HX_STACK_THIS(this)
		HX_STACK_ARG(window,"window")
		HX_STACK_LINE(611)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(611)
		Array< ::lime::app::IModule > _g1 = this->modules;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(611)
		while((true)){
			HX_STACK_LINE(611)
			bool tmp = (_g < _g1->length);		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(611)
			bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(611)
			if ((tmp1)){
				HX_STACK_LINE(611)
				break;
			}
			HX_STACK_LINE(611)
			::lime::app::IModule tmp2 = _g1->__get(_g);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(611)
			::lime::app::IModule module = tmp2;		HX_STACK_VAR(module,"module");
			HX_STACK_LINE(611)
			++(_g);
			HX_STACK_LINE(613)
			::lime::ui::Window tmp3 = window;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(613)
			module->onWindowRestore(tmp3);
		}
	}
return null();
}


Void Application_obj::removeModule( ::lime::app::IModule module){
{
		HX_STACK_FRAME("lime.app.Application","removeModule",0x6e873a74,"lime.app.Application.removeModule","lime/app/Application.hx",624,0x8bc55476)
		HX_STACK_THIS(this)
		HX_STACK_ARG(module,"module")
		HX_STACK_LINE(626)
		bool tmp = (module != null());		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(626)
		if ((tmp)){
			HX_STACK_LINE(628)
			module->onModuleExit((int)0);
			HX_STACK_LINE(629)
			::lime::app::IModule tmp1 = module;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(629)
			this->modules->remove(tmp1);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Application_obj,removeModule,(void))

Void Application_obj::removeRenderer( ::lime::graphics::Renderer renderer){
{
		HX_STACK_FRAME("lime.app.Application","removeRenderer",0x39f2cd0b,"lime.app.Application.removeRenderer","lime/app/Application.hx",640,0x8bc55476)
		HX_STACK_THIS(this)
		HX_STACK_ARG(renderer,"renderer")
		HX_STACK_LINE(642)
		bool tmp = (renderer != null());		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(642)
		bool tmp1;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(642)
		if ((tmp)){
			HX_STACK_LINE(642)
			::lime::graphics::Renderer tmp2 = renderer;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(642)
			::lime::graphics::Renderer tmp3 = tmp2;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(642)
			int tmp4 = this->renderers->indexOf(tmp3,null());		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(642)
			int tmp5 = tmp4;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(642)
			tmp1 = (tmp5 > (int)-1);
		}
		else{
			HX_STACK_LINE(642)
			tmp1 = false;
		}
		HX_STACK_LINE(642)
		if ((tmp1)){
			HX_STACK_LINE(644)
			::lime::graphics::Renderer tmp2 = renderer;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(644)
			this->renderers->remove(tmp2);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Application_obj,removeRenderer,(void))

Void Application_obj::removeWindow( ::lime::ui::Window window){
{
		HX_STACK_FRAME("lime.app.Application","removeWindow",0x004099b8,"lime.app.Application.removeWindow","lime/app/Application.hx",655,0x8bc55476)
		HX_STACK_THIS(this)
		HX_STACK_ARG(window,"window")
		HX_STACK_LINE(657)
		bool tmp = (window != null());		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(657)
		bool tmp1;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(657)
		if ((tmp)){
			HX_STACK_LINE(657)
			::haxe::ds::IntMap tmp2 = this->windowByID;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(657)
			::haxe::ds::IntMap tmp3 = tmp2;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(657)
			int tmp4 = window->id;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(657)
			int tmp5 = tmp4;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(657)
			tmp1 = tmp3->exists(tmp5);
		}
		else{
			HX_STACK_LINE(657)
			tmp1 = false;
		}
		HX_STACK_LINE(657)
		if ((tmp1)){
			HX_STACK_LINE(659)
			::lime::ui::Window tmp2 = window;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(659)
			this->windows->remove(tmp2);
			HX_STACK_LINE(660)
			::haxe::ds::IntMap tmp3 = this->windowByID;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(660)
			int tmp4 = window->id;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(660)
			tmp3->remove(tmp4);
			HX_STACK_LINE(661)
			window->close();
			HX_STACK_LINE(663)
			::lime::ui::Window tmp5 = this->window;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(663)
			::lime::ui::Window tmp6 = window;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(663)
			bool tmp7 = (tmp5 == tmp6);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(663)
			if ((tmp7)){
				HX_STACK_LINE(665)
				this->window = null();
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Application_obj,removeWindow,(void))

Void Application_obj::render( ::lime::graphics::Renderer renderer){
{
		HX_STACK_FRAME("lime.app.Application","render",0xbefe32ba,"lime.app.Application.render","lime/app/Application.hx",676,0x8bc55476)
		HX_STACK_THIS(this)
		HX_STACK_ARG(renderer,"renderer")
		HX_STACK_LINE(676)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(676)
		Array< ::lime::app::IModule > _g1 = this->modules;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(676)
		while((true)){
			HX_STACK_LINE(676)
			bool tmp = (_g < _g1->length);		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(676)
			bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(676)
			if ((tmp1)){
				HX_STACK_LINE(676)
				break;
			}
			HX_STACK_LINE(676)
			::lime::app::IModule tmp2 = _g1->__get(_g);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(676)
			::lime::app::IModule module = tmp2;		HX_STACK_VAR(module,"module");
			HX_STACK_LINE(676)
			++(_g);
			HX_STACK_LINE(678)
			::lime::graphics::Renderer tmp3 = renderer;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(678)
			module->render(tmp3);
		}
	}
return null();
}


Void Application_obj::setPreloader( ::lime::app::Preloader preloader){
{
		HX_STACK_FRAME("lime.app.Application","setPreloader",0xe5520ed8,"lime.app.Application.setPreloader","lime/app/Application.hx",685,0x8bc55476)
		HX_STACK_THIS(this)
		HX_STACK_ARG(preloader,"preloader")
		HX_STACK_LINE(687)
		::lime::app::Preloader tmp = this->preloader;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(687)
		bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(687)
		if ((tmp1)){
			HX_STACK_LINE(689)
			::lime::app::Preloader tmp2 = this->preloader;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(689)
			Dynamic tmp3 = this->onPreloadProgress_dyn();		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(689)
			tmp2->onProgress->remove(tmp3);
			HX_STACK_LINE(690)
			::lime::app::Preloader tmp4 = this->preloader;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(690)
			Dynamic tmp5 = this->onPreloadComplete_dyn();		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(690)
			tmp4->onComplete->remove(tmp5);
		}
		HX_STACK_LINE(694)
		this->preloader = preloader;
		HX_STACK_LINE(696)
		bool tmp2 = preloader->complete;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(696)
		if ((tmp2)){
			HX_STACK_LINE(698)
			this->onPreloadComplete();
		}
		else{
			HX_STACK_LINE(702)
			Dynamic tmp3 = this->onPreloadProgress_dyn();		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(702)
			preloader->onProgress->add(tmp3,null(),null());
			HX_STACK_LINE(703)
			Dynamic tmp4 = this->onPreloadComplete_dyn();		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(703)
			preloader->onComplete->add(tmp4,null(),null());
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Application_obj,setPreloader,(void))

Void Application_obj::update( int deltaTime){
{
		HX_STACK_FRAME("lime.app.Application","update",0x40da4d6d,"lime.app.Application.update","lime/app/Application.hx",712,0x8bc55476)
		HX_STACK_THIS(this)
		HX_STACK_ARG(deltaTime,"deltaTime")
		HX_STACK_LINE(712)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(712)
		Array< ::lime::app::IModule > _g1 = this->modules;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(712)
		while((true)){
			HX_STACK_LINE(712)
			bool tmp = (_g < _g1->length);		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(712)
			bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(712)
			if ((tmp1)){
				HX_STACK_LINE(712)
				break;
			}
			HX_STACK_LINE(712)
			::lime::app::IModule tmp2 = _g1->__get(_g);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(712)
			::lime::app::IModule module = tmp2;		HX_STACK_VAR(module,"module");
			HX_STACK_LINE(712)
			++(_g);
			HX_STACK_LINE(714)
			int tmp3 = deltaTime;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(714)
			module->update(tmp3);
		}
	}
return null();
}


Float Application_obj::get_frameRate( ){
	HX_STACK_FRAME("lime.app.Application","get_frameRate",0x719f92a0,"lime.app.Application.get_frameRate","lime/app/Application.hx",728,0x8bc55476)
	HX_STACK_THIS(this)
	HX_STACK_LINE(730)
	::lime::_backend::native::NativeApplication tmp = this->backend;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(730)
	Float tmp1 = tmp->getFrameRate();		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(730)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(Application_obj,get_frameRate,return )

Float Application_obj::set_frameRate( Float value){
	HX_STACK_FRAME("lime.app.Application","set_frameRate",0xb6a574ac,"lime.app.Application.set_frameRate","lime/app/Application.hx",735,0x8bc55476)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(737)
	::lime::_backend::native::NativeApplication tmp = this->backend;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(737)
	Float tmp1 = value;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(737)
	Float tmp2 = tmp->setFrameRate(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(737)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC1(Application_obj,set_frameRate,return )

::lime::app::Application Application_obj::current;


Application_obj::Application_obj()
{
}

void Application_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Application);
	HX_MARK_MEMBER_NAME(config,"config");
	HX_MARK_MEMBER_NAME(modules,"modules");
	HX_MARK_MEMBER_NAME(preloader,"preloader");
	HX_MARK_MEMBER_NAME(onUpdate,"onUpdate");
	HX_MARK_MEMBER_NAME(renderer,"renderer");
	HX_MARK_MEMBER_NAME(renderers,"renderers");
	HX_MARK_MEMBER_NAME(window,"window");
	HX_MARK_MEMBER_NAME(windows,"windows");
	HX_MARK_MEMBER_NAME(backend,"backend");
	HX_MARK_MEMBER_NAME(windowByID,"windowByID");
	::lime::app::Module_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void Application_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(config,"config");
	HX_VISIT_MEMBER_NAME(modules,"modules");
	HX_VISIT_MEMBER_NAME(preloader,"preloader");
	HX_VISIT_MEMBER_NAME(onUpdate,"onUpdate");
	HX_VISIT_MEMBER_NAME(renderer,"renderer");
	HX_VISIT_MEMBER_NAME(renderers,"renderers");
	HX_VISIT_MEMBER_NAME(window,"window");
	HX_VISIT_MEMBER_NAME(windows,"windows");
	HX_VISIT_MEMBER_NAME(backend,"backend");
	HX_VISIT_MEMBER_NAME(windowByID,"windowByID");
	::lime::app::Module_obj::__Visit(HX_VISIT_ARG);
}

Dynamic Application_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"exec") ) { return exec_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"config") ) { return config; }
		if (HX_FIELD_EQ(inName,"window") ) { return window; }
		if (HX_FIELD_EQ(inName,"create") ) { return create_dyn(); }
		if (HX_FIELD_EQ(inName,"render") ) { return render_dyn(); }
		if (HX_FIELD_EQ(inName,"update") ) { return update_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"modules") ) { return modules; }
		if (HX_FIELD_EQ(inName,"windows") ) { return windows; }
		if (HX_FIELD_EQ(inName,"backend") ) { return backend; }
		if (HX_FIELD_EQ(inName,"onKeyUp") ) { return onKeyUp_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"onUpdate") ) { return onUpdate; }
		if (HX_FIELD_EQ(inName,"renderer") ) { return renderer; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"frameRate") ) { if (inCallProp == hx::paccAlways) return get_frameRate(); }
		if (HX_FIELD_EQ(inName,"preloader") ) { return preloader; }
		if (HX_FIELD_EQ(inName,"renderers") ) { return renderers; }
		if (HX_FIELD_EQ(inName,"addModule") ) { return addModule_dyn(); }
		if (HX_FIELD_EQ(inName,"onKeyDown") ) { return onKeyDown_dyn(); }
		if (HX_FIELD_EQ(inName,"onMouseUp") ) { return onMouseUp_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"windowByID") ) { return windowByID; }
		if (HX_FIELD_EQ(inName,"onTextEdit") ) { return onTextEdit_dyn(); }
		if (HX_FIELD_EQ(inName,"onTouchEnd") ) { return onTouchEnd_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"addRenderer") ) { return addRenderer_dyn(); }
		if (HX_FIELD_EQ(inName,"onMouseDown") ) { return onMouseDown_dyn(); }
		if (HX_FIELD_EQ(inName,"onMouseMove") ) { return onMouseMove_dyn(); }
		if (HX_FIELD_EQ(inName,"onTextInput") ) { return onTextInput_dyn(); }
		if (HX_FIELD_EQ(inName,"onTouchMove") ) { return onTouchMove_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"createWindow") ) { return createWindow_dyn(); }
		if (HX_FIELD_EQ(inName,"onModuleExit") ) { return onModuleExit_dyn(); }
		if (HX_FIELD_EQ(inName,"onMouseWheel") ) { return onMouseWheel_dyn(); }
		if (HX_FIELD_EQ(inName,"onTouchStart") ) { return onTouchStart_dyn(); }
		if (HX_FIELD_EQ(inName,"onWindowMove") ) { return onWindowMove_dyn(); }
		if (HX_FIELD_EQ(inName,"removeModule") ) { return removeModule_dyn(); }
		if (HX_FIELD_EQ(inName,"removeWindow") ) { return removeWindow_dyn(); }
		if (HX_FIELD_EQ(inName,"setPreloader") ) { return setPreloader_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"onWindowClose") ) { return onWindowClose_dyn(); }
		if (HX_FIELD_EQ(inName,"onWindowEnter") ) { return onWindowEnter_dyn(); }
		if (HX_FIELD_EQ(inName,"onWindowLeave") ) { return onWindowLeave_dyn(); }
		if (HX_FIELD_EQ(inName,"get_frameRate") ) { return get_frameRate_dyn(); }
		if (HX_FIELD_EQ(inName,"set_frameRate") ) { return set_frameRate_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"onWindowCreate") ) { return onWindowCreate_dyn(); }
		if (HX_FIELD_EQ(inName,"onWindowResize") ) { return onWindowResize_dyn(); }
		if (HX_FIELD_EQ(inName,"removeRenderer") ) { return removeRenderer_dyn(); }
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

bool Application_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"current") ) { outValue = current; return true;  }
	}
	return false;
}

Dynamic Application_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"config") ) { config=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"window") ) { window=inValue.Cast< ::lime::ui::Window >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"modules") ) { modules=inValue.Cast< Array< ::lime::app::IModule > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"windows") ) { windows=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"backend") ) { backend=inValue.Cast< ::lime::_backend::native::NativeApplication >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"onUpdate") ) { onUpdate=inValue.Cast< ::lime::app::Event >(); return inValue; }
		if (HX_FIELD_EQ(inName,"renderer") ) { renderer=inValue.Cast< ::lime::graphics::Renderer >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"frameRate") ) { if (inCallProp == hx::paccAlways) return set_frameRate(inValue); }
		if (HX_FIELD_EQ(inName,"preloader") ) { preloader=inValue.Cast< ::lime::app::Preloader >(); return inValue; }
		if (HX_FIELD_EQ(inName,"renderers") ) { renderers=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"windowByID") ) { windowByID=inValue.Cast< ::haxe::ds::IntMap >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool Application_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"current") ) { current=ioValue.Cast< ::lime::app::Application >(); return true; }
	}
	return false;
}

void Application_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("config","\xc2","\x56","\xd2","\xc7"));
	outFields->push(HX_HCSTRING("frameRate","\xad","\x11","\x25","\x39"));
	outFields->push(HX_HCSTRING("modules","\x47","\xe2","\xfa","\xf7"));
	outFields->push(HX_HCSTRING("preloader","\x76","\xe4","\x7b","\x82"));
	outFields->push(HX_HCSTRING("onUpdate","\x88","\x7c","\xb2","\x66"));
	outFields->push(HX_HCSTRING("renderer","\x43","\xc5","\xdb","\xb2"));
	outFields->push(HX_HCSTRING("renderers","\xd0","\xd5","\x70","\xcd"));
	outFields->push(HX_HCSTRING("window","\xf0","\x93","\x8c","\x52"));
	outFields->push(HX_HCSTRING("windows","\x83","\xde","\x74","\xe8"));
	outFields->push(HX_HCSTRING("backend","\x14","\xbc","\x87","\xfb"));
	outFields->push(HX_HCSTRING("windowByID","\x82","\x71","\xf9","\xcb"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(Application_obj,config),HX_HCSTRING("config","\xc2","\x56","\xd2","\xc7")},
	{hx::fsObject /*Array< ::lime::app::IModule >*/ ,(int)offsetof(Application_obj,modules),HX_HCSTRING("modules","\x47","\xe2","\xfa","\xf7")},
	{hx::fsObject /*::lime::app::Preloader*/ ,(int)offsetof(Application_obj,preloader),HX_HCSTRING("preloader","\x76","\xe4","\x7b","\x82")},
	{hx::fsObject /*::lime::app::Event*/ ,(int)offsetof(Application_obj,onUpdate),HX_HCSTRING("onUpdate","\x88","\x7c","\xb2","\x66")},
	{hx::fsObject /*::lime::graphics::Renderer*/ ,(int)offsetof(Application_obj,renderer),HX_HCSTRING("renderer","\x43","\xc5","\xdb","\xb2")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(Application_obj,renderers),HX_HCSTRING("renderers","\xd0","\xd5","\x70","\xcd")},
	{hx::fsObject /*::lime::ui::Window*/ ,(int)offsetof(Application_obj,window),HX_HCSTRING("window","\xf0","\x93","\x8c","\x52")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(Application_obj,windows),HX_HCSTRING("windows","\x83","\xde","\x74","\xe8")},
	{hx::fsObject /*::lime::_backend::native::NativeApplication*/ ,(int)offsetof(Application_obj,backend),HX_HCSTRING("backend","\x14","\xbc","\x87","\xfb")},
	{hx::fsObject /*::haxe::ds::IntMap*/ ,(int)offsetof(Application_obj,windowByID),HX_HCSTRING("windowByID","\x82","\x71","\xf9","\xcb")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo sStaticStorageInfo[] = {
	{hx::fsObject /*::lime::app::Application*/ ,(void *) &Application_obj::current,HX_HCSTRING("current","\x39","\x9c","\xe3","\xcb")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("config","\xc2","\x56","\xd2","\xc7"),
	HX_HCSTRING("modules","\x47","\xe2","\xfa","\xf7"),
	HX_HCSTRING("preloader","\x76","\xe4","\x7b","\x82"),
	HX_HCSTRING("onUpdate","\x88","\x7c","\xb2","\x66"),
	HX_HCSTRING("renderer","\x43","\xc5","\xdb","\xb2"),
	HX_HCSTRING("renderers","\xd0","\xd5","\x70","\xcd"),
	HX_HCSTRING("window","\xf0","\x93","\x8c","\x52"),
	HX_HCSTRING("windows","\x83","\xde","\x74","\xe8"),
	HX_HCSTRING("backend","\x14","\xbc","\x87","\xfb"),
	HX_HCSTRING("windowByID","\x82","\x71","\xf9","\xcb"),
	HX_HCSTRING("addModule","\xad","\x69","\xf7","\x78"),
	HX_HCSTRING("addRenderer","\x84","\xfc","\x37","\xe4"),
	HX_HCSTRING("create","\xfc","\x66","\x0f","\x7c"),
	HX_HCSTRING("createWindow","\x0c","\xd4","\xe1","\x74"),
	HX_HCSTRING("exec","\x91","\xf3","\x1d","\x43"),
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
	HX_HCSTRING("onWindowMinimize","\xad","\x0c","\xab","\x27"),
	HX_HCSTRING("onWindowMove","\x20","\xfd","\x7a","\xab"),
	HX_HCSTRING("onWindowResize","\xc3","\x55","\xdb","\xf9"),
	HX_HCSTRING("onWindowRestore","\x9f","\xc0","\x4c","\xad"),
	HX_HCSTRING("removeModule","\x10","\xd0","\x00","\x30"),
	HX_HCSTRING("removeRenderer","\xa7","\x01","\x32","\x7d"),
	HX_HCSTRING("removeWindow","\x54","\x2f","\xba","\xc1"),
	HX_HCSTRING("render","\x56","\x6b","\x29","\x05"),
	HX_HCSTRING("setPreloader","\x74","\xa4","\xcb","\xa6"),
	HX_HCSTRING("update","\x09","\x86","\x05","\x87"),
	HX_HCSTRING("get_frameRate","\x84","\xe5","\x88","\xfa"),
	HX_HCSTRING("set_frameRate","\x90","\xc7","\x8e","\x3f"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Application_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(Application_obj::current,"current");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Application_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(Application_obj::current,"current");
};

#endif

hx::Class Application_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("current","\x39","\x9c","\xe3","\xcb"),
	::String(null()) };

void Application_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("lime.app.Application","\x8a","\x94","\x72","\x90");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Application_obj::__GetStatic;
	__mClass->mSetStaticField = &Application_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Application_obj >;
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
