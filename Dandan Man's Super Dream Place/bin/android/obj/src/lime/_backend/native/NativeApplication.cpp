#include <hxcpp.h>

#ifndef INCLUDED_List
#include <List.h>
#endif
#ifndef INCLUDED_haxe_IMap
#include <haxe/IMap.h>
#endif
#ifndef INCLUDED_haxe_Timer
#include <haxe/Timer.h>
#endif
#ifndef INCLUDED_haxe_ds_IntMap
#include <haxe/ds/IntMap.h>
#endif
#ifndef INCLUDED_lime__backend_native_NativeApplication
#include <lime/_backend/native/NativeApplication.h>
#endif
#ifndef INCLUDED_lime__backend_native_NativeRenderer
#include <lime/_backend/native/NativeRenderer.h>
#endif
#ifndef INCLUDED_lime__backend_native__NativeApplication_ApplicationEventInfo
#include <lime/_backend/native/_NativeApplication/ApplicationEventInfo.h>
#endif
#ifndef INCLUDED_lime__backend_native__NativeApplication_GamepadEventInfo
#include <lime/_backend/native/_NativeApplication/GamepadEventInfo.h>
#endif
#ifndef INCLUDED_lime__backend_native__NativeApplication_KeyEventInfo
#include <lime/_backend/native/_NativeApplication/KeyEventInfo.h>
#endif
#ifndef INCLUDED_lime__backend_native__NativeApplication_MouseEventInfo
#include <lime/_backend/native/_NativeApplication/MouseEventInfo.h>
#endif
#ifndef INCLUDED_lime__backend_native__NativeApplication_RenderEventInfo
#include <lime/_backend/native/_NativeApplication/RenderEventInfo.h>
#endif
#ifndef INCLUDED_lime__backend_native__NativeApplication_TextEventInfo
#include <lime/_backend/native/_NativeApplication/TextEventInfo.h>
#endif
#ifndef INCLUDED_lime__backend_native__NativeApplication_TouchEventInfo
#include <lime/_backend/native/_NativeApplication/TouchEventInfo.h>
#endif
#ifndef INCLUDED_lime__backend_native__NativeApplication_WindowEventInfo
#include <lime/_backend/native/_NativeApplication/WindowEventInfo.h>
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
#ifndef INCLUDED_lime_audio_AudioContext
#include <lime/audio/AudioContext.h>
#endif
#ifndef INCLUDED_lime_audio_AudioManager
#include <lime/audio/AudioManager.h>
#endif
#ifndef INCLUDED_lime_graphics_GLRenderContext
#include <lime/graphics/GLRenderContext.h>
#endif
#ifndef INCLUDED_lime_graphics_RenderContext
#include <lime/graphics/RenderContext.h>
#endif
#ifndef INCLUDED_lime_graphics_Renderer
#include <lime/graphics/Renderer.h>
#endif
#ifndef INCLUDED_lime_system_System
#include <lime/system/System.h>
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
namespace _backend{
namespace native{

Void NativeApplication_obj::__construct(::lime::app::Application parent)
{
HX_STACK_FRAME("lime._backend.native.NativeApplication","new",0xf81a1e94,"lime._backend.native.NativeApplication.new","lime/_backend/native/NativeApplication.hx",28,0xb13849fd)
HX_STACK_THIS(this)
HX_STACK_ARG(parent,"parent")
{
	HX_STACK_LINE(40)
	this->windowEventInfo = ::lime::_backend::native::_NativeApplication::WindowEventInfo_obj::__new(null(),null(),null(),null(),null(),null());
	HX_STACK_LINE(39)
	this->unusedTouchesPool = ::List_obj::__new();
	HX_STACK_LINE(38)
	this->touchEventInfo = ::lime::_backend::native::_NativeApplication::TouchEventInfo_obj::__new(null(),null(),null(),null(),null(),null(),null(),null());
	HX_STACK_LINE(37)
	this->textEventInfo = ::lime::_backend::native::_NativeApplication::TextEventInfo_obj::__new(null(),null(),null(),null(),null());
	HX_STACK_LINE(36)
	this->renderEventInfo = ::lime::_backend::native::_NativeApplication::RenderEventInfo_obj::__new((int)0,null());
	HX_STACK_LINE(35)
	this->mouseEventInfo = ::lime::_backend::native::_NativeApplication::MouseEventInfo_obj::__new(null(),null(),null(),null(),null(),null(),null());
	HX_STACK_LINE(34)
	this->keyEventInfo = ::lime::_backend::native::_NativeApplication::KeyEventInfo_obj::__new(null(),null(),null(),null());
	HX_STACK_LINE(33)
	this->gamepadEventInfo = ::lime::_backend::native::_NativeApplication::GamepadEventInfo_obj::__new(null(),null(),null(),null(),null());
	struct _Function_1_1{
		inline static ::haxe::ds::IntMap Block( ){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","lime/_backend/native/NativeApplication.hx",32,0xb13849fd)
			{
				HX_STACK_LINE(32)
				::haxe::ds::IntMap tmp = ::haxe::ds::IntMap_obj::__new();		HX_STACK_VAR(tmp,"tmp");
				HX_STACK_LINE(32)
				::haxe::ds::IntMap tmp1 = tmp;		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(32)
				return tmp1;
			}
			return null();
		}
	};
	HX_STACK_LINE(32)
	this->currentTouches = _Function_1_1::Block();
	HX_STACK_LINE(31)
	this->applicationEventInfo = ::lime::_backend::native::_NativeApplication::ApplicationEventInfo_obj::__new((int)0,null());
	HX_STACK_LINE(50)
	this->parent = parent;
	HX_STACK_LINE(51)
	this->frameRate = (int)60;
	HX_STACK_LINE(53)
	::lime::audio::AudioManager_obj::init(null());
}
;
	return null();
}

//NativeApplication_obj::~NativeApplication_obj() { }

Dynamic NativeApplication_obj::__CreateEmpty() { return  new NativeApplication_obj; }
hx::ObjectPtr< NativeApplication_obj > NativeApplication_obj::__new(::lime::app::Application parent)
{  hx::ObjectPtr< NativeApplication_obj > _result_ = new NativeApplication_obj();
	_result_->__construct(parent);
	return _result_;}

Dynamic NativeApplication_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< NativeApplication_obj > _result_ = new NativeApplication_obj();
	_result_->__construct(inArgs[0]);
	return _result_;}

Void NativeApplication_obj::create( Dynamic config){
{
		HX_STACK_FRAME("lime._backend.native.NativeApplication","create",0xd50cf148,"lime._backend.native.NativeApplication.create","lime/_backend/native/NativeApplication.hx",58,0xb13849fd)
		HX_STACK_THIS(this)
		HX_STACK_ARG(config,"config")
		HX_STACK_LINE(60)
		Dynamic tmp = ::lime::_backend::native::NativeApplication_obj::lime_application_create(null());		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(60)
		this->handle = tmp;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(NativeApplication_obj,create,(void))

int NativeApplication_obj::exec( ){
	HX_STACK_FRAME("lime._backend.native.NativeApplication","exec",0x18dc12dd,"lime._backend.native.NativeApplication.exec","lime/_backend/native/NativeApplication.hx",65,0xb13849fd)
	HX_STACK_THIS(this)
	HX_STACK_LINE(67)
	Dynamic tmp = this->handleApplicationEvent_dyn();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(67)
	::lime::_backend::native::_NativeApplication::ApplicationEventInfo tmp1 = this->applicationEventInfo;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(67)
	::lime::_backend::native::NativeApplication_obj::lime_application_event_manager_register(tmp,tmp1);
	HX_STACK_LINE(68)
	Dynamic tmp2 = this->handleGamepadEvent_dyn();		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(68)
	::lime::_backend::native::_NativeApplication::GamepadEventInfo tmp3 = this->gamepadEventInfo;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(68)
	::lime::_backend::native::NativeApplication_obj::lime_gamepad_event_manager_register(tmp2,tmp3);
	HX_STACK_LINE(69)
	Dynamic tmp4 = this->handleKeyEvent_dyn();		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(69)
	::lime::_backend::native::_NativeApplication::KeyEventInfo tmp5 = this->keyEventInfo;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(69)
	::lime::_backend::native::NativeApplication_obj::lime_key_event_manager_register(tmp4,tmp5);
	HX_STACK_LINE(70)
	Dynamic tmp6 = this->handleMouseEvent_dyn();		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(70)
	::lime::_backend::native::_NativeApplication::MouseEventInfo tmp7 = this->mouseEventInfo;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(70)
	::lime::_backend::native::NativeApplication_obj::lime_mouse_event_manager_register(tmp6,tmp7);
	HX_STACK_LINE(71)
	Dynamic tmp8 = this->handleRenderEvent_dyn();		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(71)
	::lime::_backend::native::_NativeApplication::RenderEventInfo tmp9 = this->renderEventInfo;		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(71)
	::lime::_backend::native::NativeApplication_obj::lime_render_event_manager_register(tmp8,tmp9);
	HX_STACK_LINE(72)
	Dynamic tmp10 = this->handleTextEvent_dyn();		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(72)
	::lime::_backend::native::_NativeApplication::TextEventInfo tmp11 = this->textEventInfo;		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(72)
	::lime::_backend::native::NativeApplication_obj::lime_text_event_manager_register(tmp10,tmp11);
	HX_STACK_LINE(73)
	Dynamic tmp12 = this->handleTouchEvent_dyn();		HX_STACK_VAR(tmp12,"tmp12");
	HX_STACK_LINE(73)
	::lime::_backend::native::_NativeApplication::TouchEventInfo tmp13 = this->touchEventInfo;		HX_STACK_VAR(tmp13,"tmp13");
	HX_STACK_LINE(73)
	::lime::_backend::native::NativeApplication_obj::lime_touch_event_manager_register(tmp12,tmp13);
	HX_STACK_LINE(74)
	Dynamic tmp14 = this->handleWindowEvent_dyn();		HX_STACK_VAR(tmp14,"tmp14");
	HX_STACK_LINE(74)
	::lime::_backend::native::_NativeApplication::WindowEventInfo tmp15 = this->windowEventInfo;		HX_STACK_VAR(tmp15,"tmp15");
	HX_STACK_LINE(74)
	::lime::_backend::native::NativeApplication_obj::lime_window_event_manager_register(tmp14,tmp15);
	HX_STACK_LINE(100)
	Dynamic tmp16 = this->handle;		HX_STACK_VAR(tmp16,"tmp16");
	HX_STACK_LINE(100)
	int tmp17 = ::lime::_backend::native::NativeApplication_obj::lime_application_exec(tmp16);		HX_STACK_VAR(tmp17,"tmp17");
	HX_STACK_LINE(100)
	int result = tmp17;		HX_STACK_VAR(result,"result");
	HX_STACK_LINE(50)
	{
		HX_STACK_LINE(101)
		::lime::app::Application tmp18 = this->parent;		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(52)
		cpp::ArrayBase listeners = tmp18->onExit->listeners;		HX_STACK_VAR(listeners,"listeners");
		HX_STACK_LINE(101)
		::lime::app::Application tmp19 = this->parent;		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(53)
		Array< bool > repeat = tmp19->onExit->repeat;		HX_STACK_VAR(repeat,"repeat");
		HX_STACK_LINE(54)
		int i = (int)0;		HX_STACK_VAR(i,"i");
		HX_STACK_LINE(56)
		while((true)){
			HX_STACK_LINE(56)
			bool tmp20 = (i < listeners->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic ));		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(56)
			bool tmp21 = !(tmp20);		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(56)
			if ((tmp21)){
				HX_STACK_LINE(56)
				break;
			}
			HX_STACK_LINE(58)
			Dynamic tmp22 = listeners->__GetItem(i);		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(101)
			int tmp23 = result;		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(58)
			tmp22(tmp23).Cast< Void >();
			HX_STACK_LINE(60)
			bool tmp24 = repeat->__get(i);		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(60)
			bool tmp25 = !(tmp24);		HX_STACK_VAR(tmp25,"tmp25");
			HX_STACK_LINE(60)
			if ((tmp25)){
				HX_STACK_LINE(101)
				::lime::app::Application tmp26 = this->parent;		HX_STACK_VAR(tmp26,"tmp26");
				HX_STACK_LINE(62)
				Dynamic tmp27 = listeners->__GetItem(i);		HX_STACK_VAR(tmp27,"tmp27");
				HX_STACK_LINE(62)
				tmp26->onExit->remove(tmp27);
			}
			else{
				HX_STACK_LINE(66)
				(i)++;
			}
		}
	}
	HX_STACK_LINE(103)
	int tmp18 = result;		HX_STACK_VAR(tmp18,"tmp18");
	HX_STACK_LINE(103)
	return tmp18;
}


HX_DEFINE_DYNAMIC_FUNC0(NativeApplication_obj,exec,return )

Void NativeApplication_obj::exit( ){
{
		HX_STACK_FRAME("lime._backend.native.NativeApplication","exit",0x18dc166a,"lime._backend.native.NativeApplication.exit","lime/_backend/native/NativeApplication.hx",116,0xb13849fd)
		HX_STACK_THIS(this)
		HX_STACK_LINE(116)
		::lime::audio::AudioManager_obj::shutdown();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(NativeApplication_obj,exit,(void))

Float NativeApplication_obj::getFrameRate( ){
	HX_STACK_FRAME("lime._backend.native.NativeApplication","getFrameRate",0xe79bf983,"lime._backend.native.NativeApplication.getFrameRate","lime/_backend/native/NativeApplication.hx",121,0xb13849fd)
	HX_STACK_THIS(this)
	HX_STACK_LINE(123)
	Float tmp = this->frameRate;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(123)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(NativeApplication_obj,getFrameRate,return )

Void NativeApplication_obj::handleApplicationEvent( ){
{
		HX_STACK_FRAME("lime._backend.native.NativeApplication","handleApplicationEvent",0x44389cbe,"lime._backend.native.NativeApplication.handleApplicationEvent","lime/_backend/native/NativeApplication.hx",130,0xb13849fd)
		HX_STACK_THIS(this)
		HX_STACK_LINE(130)
		::lime::_backend::native::_NativeApplication::ApplicationEventInfo tmp = this->applicationEventInfo;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(130)
		int _g = tmp->type;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(130)
		int tmp1 = _g;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(130)
		switch( (int)(tmp1)){
			case (int)0: {
				HX_STACK_LINE(134)
				this->updateTimer();
				HX_STACK_LINE(50)
				{
					HX_STACK_LINE(135)
					::lime::app::Application tmp2 = this->parent;		HX_STACK_VAR(tmp2,"tmp2");
					HX_STACK_LINE(52)
					cpp::ArrayBase listeners = tmp2->onUpdate->listeners;		HX_STACK_VAR(listeners,"listeners");
					HX_STACK_LINE(135)
					::lime::app::Application tmp3 = this->parent;		HX_STACK_VAR(tmp3,"tmp3");
					HX_STACK_LINE(53)
					Array< bool > repeat = tmp3->onUpdate->repeat;		HX_STACK_VAR(repeat,"repeat");
					HX_STACK_LINE(54)
					int i = (int)0;		HX_STACK_VAR(i,"i");
					HX_STACK_LINE(56)
					while((true)){
						HX_STACK_LINE(56)
						bool tmp4 = (i < listeners->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic ));		HX_STACK_VAR(tmp4,"tmp4");
						HX_STACK_LINE(56)
						bool tmp5 = !(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
						HX_STACK_LINE(56)
						if ((tmp5)){
							HX_STACK_LINE(56)
							break;
						}
						HX_STACK_LINE(58)
						Dynamic tmp6 = listeners->__GetItem(i);		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(135)
						::lime::_backend::native::_NativeApplication::ApplicationEventInfo tmp7 = this->applicationEventInfo;		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(135)
						int tmp8 = tmp7->deltaTime;		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(58)
						tmp6(tmp8).Cast< Void >();
						HX_STACK_LINE(60)
						bool tmp9 = repeat->__get(i);		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(60)
						bool tmp10 = !(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(60)
						if ((tmp10)){
							HX_STACK_LINE(135)
							::lime::app::Application tmp11 = this->parent;		HX_STACK_VAR(tmp11,"tmp11");
							HX_STACK_LINE(62)
							Dynamic tmp12 = listeners->__GetItem(i);		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(62)
							tmp11->onUpdate->remove(tmp12);
						}
						else{
							HX_STACK_LINE(66)
							(i)++;
						}
					}
				}
			}
			;break;
			case (int)1: {
			}
			;break;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(NativeApplication_obj,handleApplicationEvent,(void))

Void NativeApplication_obj::handleGamepadEvent( ){
{
		HX_STACK_FRAME("lime._backend.native.NativeApplication","handleGamepadEvent",0x54f9e7cd,"lime._backend.native.NativeApplication.handleGamepadEvent","lime/_backend/native/NativeApplication.hx",148,0xb13849fd)
		HX_STACK_THIS(this)
		HX_STACK_LINE(148)
		::lime::_backend::native::_NativeApplication::GamepadEventInfo tmp = this->gamepadEventInfo;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(148)
		int _g = tmp->type;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(148)
		int tmp1 = _g;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(148)
		switch( (int)(tmp1)){
			case (int)0: {
				HX_STACK_LINE(152)
				::haxe::ds::IntMap tmp2 = ::lime::ui::Gamepad_obj::devices;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(152)
				::lime::_backend::native::_NativeApplication::GamepadEventInfo tmp3 = this->gamepadEventInfo;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(152)
				int tmp4 = tmp3->id;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(152)
				::lime::ui::Gamepad tmp5 = tmp2->get(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(152)
				::lime::ui::Gamepad gamepad = tmp5;		HX_STACK_VAR(gamepad,"gamepad");
				HX_STACK_LINE(153)
				bool tmp6 = (gamepad != null());		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(153)
				if ((tmp6)){
					HX_STACK_LINE(52)
					cpp::ArrayBase listeners = gamepad->onAxisMove->listeners;		HX_STACK_VAR(listeners,"listeners");
					HX_STACK_LINE(53)
					Array< bool > repeat = gamepad->onAxisMove->repeat;		HX_STACK_VAR(repeat,"repeat");
					HX_STACK_LINE(54)
					int i = (int)0;		HX_STACK_VAR(i,"i");
					HX_STACK_LINE(56)
					while((true)){
						HX_STACK_LINE(56)
						bool tmp7 = (i < listeners->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic ));		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(56)
						bool tmp8 = !(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(56)
						if ((tmp8)){
							HX_STACK_LINE(56)
							break;
						}
						HX_STACK_LINE(58)
						Dynamic tmp9 = listeners->__GetItem(i);		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(153)
						::lime::_backend::native::_NativeApplication::GamepadEventInfo tmp10 = this->gamepadEventInfo;		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(153)
						int tmp11 = tmp10->axis;		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(153)
						::lime::_backend::native::_NativeApplication::GamepadEventInfo tmp12 = this->gamepadEventInfo;		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(153)
						Float tmp13 = tmp12->value;		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(58)
						tmp9(tmp11,tmp13).Cast< Void >();
						HX_STACK_LINE(60)
						bool tmp14 = repeat->__get(i);		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(60)
						bool tmp15 = !(tmp14);		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(60)
						if ((tmp15)){
							HX_STACK_LINE(62)
							Dynamic tmp16 = listeners->__GetItem(i);		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(62)
							gamepad->onAxisMove->remove(tmp16);
						}
						else{
							HX_STACK_LINE(66)
							(i)++;
						}
					}
				}
			}
			;break;
			case (int)1: {
				HX_STACK_LINE(157)
				::haxe::ds::IntMap tmp2 = ::lime::ui::Gamepad_obj::devices;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(157)
				::lime::_backend::native::_NativeApplication::GamepadEventInfo tmp3 = this->gamepadEventInfo;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(157)
				int tmp4 = tmp3->id;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(157)
				::lime::ui::Gamepad tmp5 = tmp2->get(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(157)
				::lime::ui::Gamepad gamepad = tmp5;		HX_STACK_VAR(gamepad,"gamepad");
				HX_STACK_LINE(158)
				bool tmp6 = (gamepad != null());		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(158)
				if ((tmp6)){
					HX_STACK_LINE(52)
					cpp::ArrayBase listeners = gamepad->onButtonDown->listeners;		HX_STACK_VAR(listeners,"listeners");
					HX_STACK_LINE(53)
					Array< bool > repeat = gamepad->onButtonDown->repeat;		HX_STACK_VAR(repeat,"repeat");
					HX_STACK_LINE(54)
					int i = (int)0;		HX_STACK_VAR(i,"i");
					HX_STACK_LINE(56)
					while((true)){
						HX_STACK_LINE(56)
						bool tmp7 = (i < listeners->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic ));		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(56)
						bool tmp8 = !(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(56)
						if ((tmp8)){
							HX_STACK_LINE(56)
							break;
						}
						HX_STACK_LINE(58)
						Dynamic tmp9 = listeners->__GetItem(i);		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(158)
						::lime::_backend::native::_NativeApplication::GamepadEventInfo tmp10 = this->gamepadEventInfo;		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(158)
						int tmp11 = tmp10->button;		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(58)
						tmp9(tmp11).Cast< Void >();
						HX_STACK_LINE(60)
						bool tmp12 = repeat->__get(i);		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(60)
						bool tmp13 = !(tmp12);		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(60)
						if ((tmp13)){
							HX_STACK_LINE(62)
							Dynamic tmp14 = listeners->__GetItem(i);		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(62)
							gamepad->onButtonDown->remove(tmp14);
						}
						else{
							HX_STACK_LINE(66)
							(i)++;
						}
					}
				}
			}
			;break;
			case (int)2: {
				HX_STACK_LINE(162)
				::haxe::ds::IntMap tmp2 = ::lime::ui::Gamepad_obj::devices;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(162)
				::lime::_backend::native::_NativeApplication::GamepadEventInfo tmp3 = this->gamepadEventInfo;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(162)
				int tmp4 = tmp3->id;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(162)
				::lime::ui::Gamepad tmp5 = tmp2->get(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(162)
				::lime::ui::Gamepad gamepad = tmp5;		HX_STACK_VAR(gamepad,"gamepad");
				HX_STACK_LINE(163)
				bool tmp6 = (gamepad != null());		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(163)
				if ((tmp6)){
					HX_STACK_LINE(52)
					cpp::ArrayBase listeners = gamepad->onButtonUp->listeners;		HX_STACK_VAR(listeners,"listeners");
					HX_STACK_LINE(53)
					Array< bool > repeat = gamepad->onButtonUp->repeat;		HX_STACK_VAR(repeat,"repeat");
					HX_STACK_LINE(54)
					int i = (int)0;		HX_STACK_VAR(i,"i");
					HX_STACK_LINE(56)
					while((true)){
						HX_STACK_LINE(56)
						bool tmp7 = (i < listeners->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic ));		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(56)
						bool tmp8 = !(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(56)
						if ((tmp8)){
							HX_STACK_LINE(56)
							break;
						}
						HX_STACK_LINE(58)
						Dynamic tmp9 = listeners->__GetItem(i);		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(163)
						::lime::_backend::native::_NativeApplication::GamepadEventInfo tmp10 = this->gamepadEventInfo;		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(163)
						int tmp11 = tmp10->button;		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(58)
						tmp9(tmp11).Cast< Void >();
						HX_STACK_LINE(60)
						bool tmp12 = repeat->__get(i);		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(60)
						bool tmp13 = !(tmp12);		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(60)
						if ((tmp13)){
							HX_STACK_LINE(62)
							Dynamic tmp14 = listeners->__GetItem(i);		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(62)
							gamepad->onButtonUp->remove(tmp14);
						}
						else{
							HX_STACK_LINE(66)
							(i)++;
						}
					}
				}
			}
			;break;
			case (int)3: {
				HX_STACK_LINE(167)
				::haxe::ds::IntMap tmp2 = ::lime::ui::Gamepad_obj::devices;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(167)
				::lime::_backend::native::_NativeApplication::GamepadEventInfo tmp3 = this->gamepadEventInfo;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(167)
				int tmp4 = tmp3->id;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(167)
				bool tmp5 = tmp2->exists(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(167)
				bool tmp6 = !(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(167)
				if ((tmp6)){
					HX_STACK_LINE(169)
					::lime::_backend::native::_NativeApplication::GamepadEventInfo tmp7 = this->gamepadEventInfo;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(169)
					int tmp8 = tmp7->id;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(169)
					::lime::ui::Gamepad tmp9 = ::lime::ui::Gamepad_obj::__new(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(169)
					::lime::ui::Gamepad gamepad = tmp9;		HX_STACK_VAR(gamepad,"gamepad");
					HX_STACK_LINE(170)
					::haxe::ds::IntMap tmp10 = ::lime::ui::Gamepad_obj::devices;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(170)
					::lime::_backend::native::_NativeApplication::GamepadEventInfo tmp11 = this->gamepadEventInfo;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(170)
					int tmp12 = tmp11->id;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(170)
					::lime::ui::Gamepad tmp13 = gamepad;		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(170)
					tmp10->set(tmp12,tmp13);
					HX_STACK_LINE(50)
					{
						HX_STACK_LINE(171)
						::lime::app::Event tmp14 = ::lime::ui::Gamepad_obj::onConnect;		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(52)
						cpp::ArrayBase listeners = tmp14->listeners;		HX_STACK_VAR(listeners,"listeners");
						HX_STACK_LINE(171)
						::lime::app::Event tmp15 = ::lime::ui::Gamepad_obj::onConnect;		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(53)
						Array< bool > repeat = tmp15->repeat;		HX_STACK_VAR(repeat,"repeat");
						HX_STACK_LINE(54)
						int i = (int)0;		HX_STACK_VAR(i,"i");
						HX_STACK_LINE(56)
						while((true)){
							HX_STACK_LINE(56)
							bool tmp16 = (i < listeners->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic ));		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(56)
							bool tmp17 = !(tmp16);		HX_STACK_VAR(tmp17,"tmp17");
							HX_STACK_LINE(56)
							if ((tmp17)){
								HX_STACK_LINE(56)
								break;
							}
							HX_STACK_LINE(58)
							Dynamic tmp18 = listeners->__GetItem(i);		HX_STACK_VAR(tmp18,"tmp18");
							HX_STACK_LINE(171)
							::lime::ui::Gamepad tmp19 = gamepad;		HX_STACK_VAR(tmp19,"tmp19");
							HX_STACK_LINE(58)
							tmp18(tmp19).Cast< Void >();
							HX_STACK_LINE(60)
							bool tmp20 = repeat->__get(i);		HX_STACK_VAR(tmp20,"tmp20");
							HX_STACK_LINE(60)
							bool tmp21 = !(tmp20);		HX_STACK_VAR(tmp21,"tmp21");
							HX_STACK_LINE(60)
							if ((tmp21)){
								HX_STACK_LINE(171)
								::lime::app::Event tmp22 = ::lime::ui::Gamepad_obj::onConnect;		HX_STACK_VAR(tmp22,"tmp22");
								HX_STACK_LINE(62)
								Dynamic tmp23 = listeners->__GetItem(i);		HX_STACK_VAR(tmp23,"tmp23");
								HX_STACK_LINE(62)
								tmp22->remove(tmp23);
							}
							else{
								HX_STACK_LINE(66)
								(i)++;
							}
						}
					}
				}
			}
			;break;
			case (int)4: {
				HX_STACK_LINE(177)
				::haxe::ds::IntMap tmp2 = ::lime::ui::Gamepad_obj::devices;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(177)
				::lime::_backend::native::_NativeApplication::GamepadEventInfo tmp3 = this->gamepadEventInfo;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(177)
				int tmp4 = tmp3->id;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(177)
				::lime::ui::Gamepad tmp5 = tmp2->get(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(177)
				::lime::ui::Gamepad gamepad = tmp5;		HX_STACK_VAR(gamepad,"gamepad");
				HX_STACK_LINE(178)
				bool tmp6 = (gamepad != null());		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(178)
				if ((tmp6)){
					HX_STACK_LINE(178)
					gamepad->connected = false;
				}
				HX_STACK_LINE(179)
				::haxe::ds::IntMap tmp7 = ::lime::ui::Gamepad_obj::devices;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(179)
				::lime::_backend::native::_NativeApplication::GamepadEventInfo tmp8 = this->gamepadEventInfo;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(179)
				int tmp9 = tmp8->id;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(179)
				tmp7->remove(tmp9);
				HX_STACK_LINE(180)
				bool tmp10 = (gamepad != null());		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(180)
				if ((tmp10)){
					HX_STACK_LINE(52)
					cpp::ArrayBase listeners = gamepad->onDisconnect->listeners;		HX_STACK_VAR(listeners,"listeners");
					HX_STACK_LINE(53)
					Array< bool > repeat = gamepad->onDisconnect->repeat;		HX_STACK_VAR(repeat,"repeat");
					HX_STACK_LINE(54)
					int i = (int)0;		HX_STACK_VAR(i,"i");
					HX_STACK_LINE(56)
					while((true)){
						HX_STACK_LINE(56)
						bool tmp11 = (i < listeners->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic ));		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(56)
						bool tmp12 = !(tmp11);		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(56)
						if ((tmp12)){
							HX_STACK_LINE(56)
							break;
						}
						HX_STACK_LINE(58)
						Dynamic tmp13 = listeners->__GetItem(i);		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(58)
						tmp13().Cast< Void >();
						HX_STACK_LINE(60)
						bool tmp14 = repeat->__get(i);		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(60)
						bool tmp15 = !(tmp14);		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(60)
						if ((tmp15)){
							HX_STACK_LINE(62)
							Dynamic tmp16 = listeners->__GetItem(i);		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(62)
							gamepad->onDisconnect->remove(tmp16);
						}
						else{
							HX_STACK_LINE(66)
							(i)++;
						}
					}
				}
			}
			;break;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(NativeApplication_obj,handleGamepadEvent,(void))

Void NativeApplication_obj::handleKeyEvent( ){
{
		HX_STACK_FRAME("lime._backend.native.NativeApplication","handleKeyEvent",0xe8484c0f,"lime._backend.native.NativeApplication.handleKeyEvent","lime/_backend/native/NativeApplication.hx",187,0xb13849fd)
		HX_STACK_THIS(this)
		HX_STACK_LINE(189)
		::lime::app::Application tmp = this->parent;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(189)
		::lime::_backend::native::_NativeApplication::KeyEventInfo tmp1 = this->keyEventInfo;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(189)
		int tmp2 = tmp1->windowID;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(189)
		::lime::ui::Window tmp3 = tmp->windowByID->get(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(189)
		::lime::ui::Window window = tmp3;		HX_STACK_VAR(window,"window");
		HX_STACK_LINE(191)
		bool tmp4 = (window != null());		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(191)
		if ((tmp4)){
			HX_STACK_LINE(193)
			::lime::_backend::native::_NativeApplication::KeyEventInfo tmp5 = this->keyEventInfo;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(193)
			int _g = tmp5->type;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(193)
			int tmp6 = _g;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(193)
			switch( (int)(tmp6)){
				case (int)0: {
					HX_STACK_LINE(52)
					cpp::ArrayBase listeners = window->onKeyDown->listeners;		HX_STACK_VAR(listeners,"listeners");
					HX_STACK_LINE(53)
					Array< bool > repeat = window->onKeyDown->repeat;		HX_STACK_VAR(repeat,"repeat");
					HX_STACK_LINE(54)
					int i = (int)0;		HX_STACK_VAR(i,"i");
					HX_STACK_LINE(56)
					while((true)){
						HX_STACK_LINE(56)
						bool tmp7 = (i < listeners->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic ));		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(56)
						bool tmp8 = !(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(56)
						if ((tmp8)){
							HX_STACK_LINE(56)
							break;
						}
						HX_STACK_LINE(58)
						Dynamic tmp9 = listeners->__GetItem(i);		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(197)
						::lime::_backend::native::_NativeApplication::KeyEventInfo tmp10 = this->keyEventInfo;		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(197)
						int tmp11 = tmp10->keyCode;		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(197)
						::lime::_backend::native::_NativeApplication::KeyEventInfo tmp12 = this->keyEventInfo;		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(197)
						int tmp13 = tmp12->modifier;		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(58)
						tmp9(tmp11,tmp13).Cast< Void >();
						HX_STACK_LINE(60)
						bool tmp14 = repeat->__get(i);		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(60)
						bool tmp15 = !(tmp14);		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(60)
						if ((tmp15)){
							HX_STACK_LINE(62)
							Dynamic tmp16 = listeners->__GetItem(i);		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(62)
							window->onKeyDown->remove(tmp16);
						}
						else{
							HX_STACK_LINE(66)
							(i)++;
						}
					}
				}
				;break;
				case (int)1: {
					HX_STACK_LINE(52)
					cpp::ArrayBase listeners = window->onKeyUp->listeners;		HX_STACK_VAR(listeners,"listeners");
					HX_STACK_LINE(53)
					Array< bool > repeat = window->onKeyUp->repeat;		HX_STACK_VAR(repeat,"repeat");
					HX_STACK_LINE(54)
					int i = (int)0;		HX_STACK_VAR(i,"i");
					HX_STACK_LINE(56)
					while((true)){
						HX_STACK_LINE(56)
						bool tmp7 = (i < listeners->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic ));		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(56)
						bool tmp8 = !(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(56)
						if ((tmp8)){
							HX_STACK_LINE(56)
							break;
						}
						HX_STACK_LINE(58)
						Dynamic tmp9 = listeners->__GetItem(i);		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(201)
						::lime::_backend::native::_NativeApplication::KeyEventInfo tmp10 = this->keyEventInfo;		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(201)
						int tmp11 = tmp10->keyCode;		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(201)
						::lime::_backend::native::_NativeApplication::KeyEventInfo tmp12 = this->keyEventInfo;		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(201)
						int tmp13 = tmp12->modifier;		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(58)
						tmp9(tmp11,tmp13).Cast< Void >();
						HX_STACK_LINE(60)
						bool tmp14 = repeat->__get(i);		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(60)
						bool tmp15 = !(tmp14);		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(60)
						if ((tmp15)){
							HX_STACK_LINE(62)
							Dynamic tmp16 = listeners->__GetItem(i);		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(62)
							window->onKeyUp->remove(tmp16);
						}
						else{
							HX_STACK_LINE(66)
							(i)++;
						}
					}
				}
				;break;
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(NativeApplication_obj,handleKeyEvent,(void))

Void NativeApplication_obj::handleMouseEvent( ){
{
		HX_STACK_FRAME("lime._backend.native.NativeApplication","handleMouseEvent",0xe26e46c9,"lime._backend.native.NativeApplication.handleMouseEvent","lime/_backend/native/NativeApplication.hx",210,0xb13849fd)
		HX_STACK_THIS(this)
		HX_STACK_LINE(212)
		::lime::app::Application tmp = this->parent;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(212)
		::lime::_backend::native::_NativeApplication::MouseEventInfo tmp1 = this->mouseEventInfo;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(212)
		int tmp2 = tmp1->windowID;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(212)
		::lime::ui::Window tmp3 = tmp->windowByID->get(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(212)
		::lime::ui::Window window = tmp3;		HX_STACK_VAR(window,"window");
		HX_STACK_LINE(214)
		bool tmp4 = (window != null());		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(214)
		if ((tmp4)){
			HX_STACK_LINE(216)
			::lime::_backend::native::_NativeApplication::MouseEventInfo tmp5 = this->mouseEventInfo;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(216)
			int _g = tmp5->type;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(216)
			int tmp6 = _g;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(216)
			switch( (int)(tmp6)){
				case (int)0: {
					HX_STACK_LINE(52)
					cpp::ArrayBase listeners = window->onMouseDown->listeners;		HX_STACK_VAR(listeners,"listeners");
					HX_STACK_LINE(53)
					Array< bool > repeat = window->onMouseDown->repeat;		HX_STACK_VAR(repeat,"repeat");
					HX_STACK_LINE(54)
					int i = (int)0;		HX_STACK_VAR(i,"i");
					HX_STACK_LINE(56)
					while((true)){
						HX_STACK_LINE(56)
						bool tmp7 = (i < listeners->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic ));		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(56)
						bool tmp8 = !(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(56)
						if ((tmp8)){
							HX_STACK_LINE(56)
							break;
						}
						HX_STACK_LINE(58)
						Dynamic tmp9 = listeners->__GetItem(i);		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(220)
						::lime::_backend::native::_NativeApplication::MouseEventInfo tmp10 = this->mouseEventInfo;		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(220)
						Float tmp11 = tmp10->x;		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(220)
						::lime::_backend::native::_NativeApplication::MouseEventInfo tmp12 = this->mouseEventInfo;		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(220)
						Float tmp13 = tmp12->y;		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(220)
						::lime::_backend::native::_NativeApplication::MouseEventInfo tmp14 = this->mouseEventInfo;		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(220)
						int tmp15 = tmp14->button;		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(58)
						tmp9(tmp11,tmp13,tmp15).Cast< Void >();
						HX_STACK_LINE(60)
						bool tmp16 = repeat->__get(i);		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(60)
						bool tmp17 = !(tmp16);		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(60)
						if ((tmp17)){
							HX_STACK_LINE(62)
							Dynamic tmp18 = listeners->__GetItem(i);		HX_STACK_VAR(tmp18,"tmp18");
							HX_STACK_LINE(62)
							window->onMouseDown->remove(tmp18);
						}
						else{
							HX_STACK_LINE(66)
							(i)++;
						}
					}
				}
				;break;
				case (int)1: {
					HX_STACK_LINE(52)
					cpp::ArrayBase listeners = window->onMouseUp->listeners;		HX_STACK_VAR(listeners,"listeners");
					HX_STACK_LINE(53)
					Array< bool > repeat = window->onMouseUp->repeat;		HX_STACK_VAR(repeat,"repeat");
					HX_STACK_LINE(54)
					int i = (int)0;		HX_STACK_VAR(i,"i");
					HX_STACK_LINE(56)
					while((true)){
						HX_STACK_LINE(56)
						bool tmp7 = (i < listeners->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic ));		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(56)
						bool tmp8 = !(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(56)
						if ((tmp8)){
							HX_STACK_LINE(56)
							break;
						}
						HX_STACK_LINE(58)
						Dynamic tmp9 = listeners->__GetItem(i);		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(224)
						::lime::_backend::native::_NativeApplication::MouseEventInfo tmp10 = this->mouseEventInfo;		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(224)
						Float tmp11 = tmp10->x;		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(224)
						::lime::_backend::native::_NativeApplication::MouseEventInfo tmp12 = this->mouseEventInfo;		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(224)
						Float tmp13 = tmp12->y;		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(224)
						::lime::_backend::native::_NativeApplication::MouseEventInfo tmp14 = this->mouseEventInfo;		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(224)
						int tmp15 = tmp14->button;		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(58)
						tmp9(tmp11,tmp13,tmp15).Cast< Void >();
						HX_STACK_LINE(60)
						bool tmp16 = repeat->__get(i);		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(60)
						bool tmp17 = !(tmp16);		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(60)
						if ((tmp17)){
							HX_STACK_LINE(62)
							Dynamic tmp18 = listeners->__GetItem(i);		HX_STACK_VAR(tmp18,"tmp18");
							HX_STACK_LINE(62)
							window->onMouseUp->remove(tmp18);
						}
						else{
							HX_STACK_LINE(66)
							(i)++;
						}
					}
				}
				;break;
				case (int)2: {
					HX_STACK_LINE(50)
					{
						HX_STACK_LINE(52)
						cpp::ArrayBase listeners = window->onMouseMove->listeners;		HX_STACK_VAR(listeners,"listeners");
						HX_STACK_LINE(53)
						Array< bool > repeat = window->onMouseMove->repeat;		HX_STACK_VAR(repeat,"repeat");
						HX_STACK_LINE(54)
						int i = (int)0;		HX_STACK_VAR(i,"i");
						HX_STACK_LINE(56)
						while((true)){
							HX_STACK_LINE(56)
							bool tmp7 = (i < listeners->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic ));		HX_STACK_VAR(tmp7,"tmp7");
							HX_STACK_LINE(56)
							bool tmp8 = !(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
							HX_STACK_LINE(56)
							if ((tmp8)){
								HX_STACK_LINE(56)
								break;
							}
							HX_STACK_LINE(58)
							Dynamic tmp9 = listeners->__GetItem(i);		HX_STACK_VAR(tmp9,"tmp9");
							HX_STACK_LINE(228)
							::lime::_backend::native::_NativeApplication::MouseEventInfo tmp10 = this->mouseEventInfo;		HX_STACK_VAR(tmp10,"tmp10");
							HX_STACK_LINE(228)
							Float tmp11 = tmp10->x;		HX_STACK_VAR(tmp11,"tmp11");
							HX_STACK_LINE(228)
							::lime::_backend::native::_NativeApplication::MouseEventInfo tmp12 = this->mouseEventInfo;		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(228)
							Float tmp13 = tmp12->y;		HX_STACK_VAR(tmp13,"tmp13");
							HX_STACK_LINE(58)
							tmp9(tmp11,tmp13).Cast< Void >();
							HX_STACK_LINE(60)
							bool tmp14 = repeat->__get(i);		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(60)
							bool tmp15 = !(tmp14);		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(60)
							if ((tmp15)){
								HX_STACK_LINE(62)
								Dynamic tmp16 = listeners->__GetItem(i);		HX_STACK_VAR(tmp16,"tmp16");
								HX_STACK_LINE(62)
								window->onMouseMove->remove(tmp16);
							}
							else{
								HX_STACK_LINE(66)
								(i)++;
							}
						}
					}
					HX_STACK_LINE(50)
					{
						HX_STACK_LINE(52)
						cpp::ArrayBase listeners = window->onMouseMoveRelative->listeners;		HX_STACK_VAR(listeners,"listeners");
						HX_STACK_LINE(53)
						Array< bool > repeat = window->onMouseMoveRelative->repeat;		HX_STACK_VAR(repeat,"repeat");
						HX_STACK_LINE(54)
						int i = (int)0;		HX_STACK_VAR(i,"i");
						HX_STACK_LINE(56)
						while((true)){
							HX_STACK_LINE(56)
							bool tmp7 = (i < listeners->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic ));		HX_STACK_VAR(tmp7,"tmp7");
							HX_STACK_LINE(56)
							bool tmp8 = !(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
							HX_STACK_LINE(56)
							if ((tmp8)){
								HX_STACK_LINE(56)
								break;
							}
							HX_STACK_LINE(58)
							Dynamic tmp9 = listeners->__GetItem(i);		HX_STACK_VAR(tmp9,"tmp9");
							HX_STACK_LINE(229)
							::lime::_backend::native::_NativeApplication::MouseEventInfo tmp10 = this->mouseEventInfo;		HX_STACK_VAR(tmp10,"tmp10");
							HX_STACK_LINE(229)
							Float tmp11 = tmp10->movementX;		HX_STACK_VAR(tmp11,"tmp11");
							HX_STACK_LINE(229)
							::lime::_backend::native::_NativeApplication::MouseEventInfo tmp12 = this->mouseEventInfo;		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(229)
							Float tmp13 = tmp12->movementY;		HX_STACK_VAR(tmp13,"tmp13");
							HX_STACK_LINE(58)
							tmp9(tmp11,tmp13).Cast< Void >();
							HX_STACK_LINE(60)
							bool tmp14 = repeat->__get(i);		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(60)
							bool tmp15 = !(tmp14);		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(60)
							if ((tmp15)){
								HX_STACK_LINE(62)
								Dynamic tmp16 = listeners->__GetItem(i);		HX_STACK_VAR(tmp16,"tmp16");
								HX_STACK_LINE(62)
								window->onMouseMoveRelative->remove(tmp16);
							}
							else{
								HX_STACK_LINE(66)
								(i)++;
							}
						}
					}
				}
				;break;
				case (int)3: {
					HX_STACK_LINE(52)
					cpp::ArrayBase listeners = window->onMouseWheel->listeners;		HX_STACK_VAR(listeners,"listeners");
					HX_STACK_LINE(53)
					Array< bool > repeat = window->onMouseWheel->repeat;		HX_STACK_VAR(repeat,"repeat");
					HX_STACK_LINE(54)
					int i = (int)0;		HX_STACK_VAR(i,"i");
					HX_STACK_LINE(56)
					while((true)){
						HX_STACK_LINE(56)
						bool tmp7 = (i < listeners->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic ));		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(56)
						bool tmp8 = !(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(56)
						if ((tmp8)){
							HX_STACK_LINE(56)
							break;
						}
						HX_STACK_LINE(58)
						Dynamic tmp9 = listeners->__GetItem(i);		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(233)
						::lime::_backend::native::_NativeApplication::MouseEventInfo tmp10 = this->mouseEventInfo;		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(233)
						Float tmp11 = tmp10->x;		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(233)
						::lime::_backend::native::_NativeApplication::MouseEventInfo tmp12 = this->mouseEventInfo;		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(233)
						Float tmp13 = tmp12->y;		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(58)
						tmp9(tmp11,tmp13).Cast< Void >();
						HX_STACK_LINE(60)
						bool tmp14 = repeat->__get(i);		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(60)
						bool tmp15 = !(tmp14);		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(60)
						if ((tmp15)){
							HX_STACK_LINE(62)
							Dynamic tmp16 = listeners->__GetItem(i);		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(62)
							window->onMouseWheel->remove(tmp16);
						}
						else{
							HX_STACK_LINE(66)
							(i)++;
						}
					}
				}
				;break;
				default: {
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(NativeApplication_obj,handleMouseEvent,(void))

Void NativeApplication_obj::handleRenderEvent( ){
{
		HX_STACK_FRAME("lime._backend.native.NativeApplication","handleRenderEvent",0xf3931b50,"lime._backend.native.NativeApplication.handleRenderEvent","lime/_backend/native/NativeApplication.hx",246,0xb13849fd)
		HX_STACK_THIS(this)
		HX_STACK_LINE(246)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(246)
		::lime::app::Application tmp = this->parent;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(246)
		Array< ::Dynamic > _g1 = tmp->renderers;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(246)
		while((true)){
			HX_STACK_LINE(246)
			bool tmp1 = (_g < _g1->length);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(246)
			bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(246)
			if ((tmp2)){
				HX_STACK_LINE(246)
				break;
			}
			HX_STACK_LINE(246)
			::lime::graphics::Renderer tmp3 = _g1->__get(_g).StaticCast< ::lime::graphics::Renderer >();		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(246)
			::lime::graphics::Renderer renderer = tmp3;		HX_STACK_VAR(renderer,"renderer");
			HX_STACK_LINE(246)
			++(_g);
			HX_STACK_LINE(248)
			::lime::app::Application tmp4 = this->parent;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(248)
			tmp4->renderer = renderer;
			HX_STACK_LINE(250)
			{
				HX_STACK_LINE(250)
				::lime::_backend::native::_NativeApplication::RenderEventInfo tmp5 = this->renderEventInfo;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(250)
				int _g2 = tmp5->type;		HX_STACK_VAR(_g2,"_g2");
				HX_STACK_LINE(250)
				int tmp6 = _g2;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(250)
				switch( (int)(tmp6)){
					case (int)0: {
						HX_STACK_LINE(254)
						renderer->render();
						HX_STACK_LINE(50)
						{
							HX_STACK_LINE(52)
							cpp::ArrayBase listeners = renderer->onRender->listeners;		HX_STACK_VAR(listeners,"listeners");
							HX_STACK_LINE(53)
							Array< bool > repeat = renderer->onRender->repeat;		HX_STACK_VAR(repeat,"repeat");
							HX_STACK_LINE(54)
							int i = (int)0;		HX_STACK_VAR(i,"i");
							HX_STACK_LINE(56)
							while((true)){
								HX_STACK_LINE(56)
								bool tmp7 = (i < listeners->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic ));		HX_STACK_VAR(tmp7,"tmp7");
								HX_STACK_LINE(56)
								bool tmp8 = !(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
								HX_STACK_LINE(56)
								if ((tmp8)){
									HX_STACK_LINE(56)
									break;
								}
								HX_STACK_LINE(58)
								Dynamic tmp9 = listeners->__GetItem(i);		HX_STACK_VAR(tmp9,"tmp9");
								HX_STACK_LINE(58)
								tmp9().Cast< Void >();
								HX_STACK_LINE(60)
								bool tmp10 = repeat->__get(i);		HX_STACK_VAR(tmp10,"tmp10");
								HX_STACK_LINE(60)
								bool tmp11 = !(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
								HX_STACK_LINE(60)
								if ((tmp11)){
									HX_STACK_LINE(62)
									Dynamic tmp12 = listeners->__GetItem(i);		HX_STACK_VAR(tmp12,"tmp12");
									HX_STACK_LINE(62)
									renderer->onRender->remove(tmp12);
								}
								else{
									HX_STACK_LINE(66)
									(i)++;
								}
							}
						}
						HX_STACK_LINE(256)
						renderer->flip();
					}
					;break;
					case (int)1: {
						HX_STACK_LINE(260)
						bool tmp7 = renderer->backend->useHardware;		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(260)
						if ((tmp7)){
							HX_STACK_LINE(262)
							renderer->context = null();
							HX_STACK_LINE(50)
							{
								HX_STACK_LINE(52)
								cpp::ArrayBase listeners = renderer->onContextLost->listeners;		HX_STACK_VAR(listeners,"listeners");
								HX_STACK_LINE(53)
								Array< bool > repeat = renderer->onContextLost->repeat;		HX_STACK_VAR(repeat,"repeat");
								HX_STACK_LINE(54)
								int i = (int)0;		HX_STACK_VAR(i,"i");
								HX_STACK_LINE(56)
								while((true)){
									HX_STACK_LINE(56)
									bool tmp8 = (i < listeners->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic ));		HX_STACK_VAR(tmp8,"tmp8");
									HX_STACK_LINE(56)
									bool tmp9 = !(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
									HX_STACK_LINE(56)
									if ((tmp9)){
										HX_STACK_LINE(56)
										break;
									}
									HX_STACK_LINE(58)
									Dynamic tmp10 = listeners->__GetItem(i);		HX_STACK_VAR(tmp10,"tmp10");
									HX_STACK_LINE(58)
									tmp10().Cast< Void >();
									HX_STACK_LINE(60)
									bool tmp11 = repeat->__get(i);		HX_STACK_VAR(tmp11,"tmp11");
									HX_STACK_LINE(60)
									bool tmp12 = !(tmp11);		HX_STACK_VAR(tmp12,"tmp12");
									HX_STACK_LINE(60)
									if ((tmp12)){
										HX_STACK_LINE(62)
										Dynamic tmp13 = listeners->__GetItem(i);		HX_STACK_VAR(tmp13,"tmp13");
										HX_STACK_LINE(62)
										renderer->onContextLost->remove(tmp13);
									}
									else{
										HX_STACK_LINE(66)
										(i)++;
									}
								}
							}
						}
					}
					;break;
					case (int)2: {
						HX_STACK_LINE(269)
						bool tmp7 = renderer->backend->useHardware;		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(269)
						if ((tmp7)){
							HX_STACK_LINE(274)
							::lime::graphics::GLRenderContext tmp8 = ::lime::graphics::GLRenderContext_obj::__new();		HX_STACK_VAR(tmp8,"tmp8");
							HX_STACK_LINE(274)
							::lime::graphics::RenderContext tmp9 = ::lime::graphics::RenderContext_obj::OPENGL(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
							HX_STACK_LINE(274)
							renderer->context = tmp9;
							HX_STACK_LINE(50)
							{
								HX_STACK_LINE(52)
								cpp::ArrayBase listeners = renderer->onContextRestored->listeners;		HX_STACK_VAR(listeners,"listeners");
								HX_STACK_LINE(53)
								Array< bool > repeat = renderer->onContextRestored->repeat;		HX_STACK_VAR(repeat,"repeat");
								HX_STACK_LINE(54)
								int i = (int)0;		HX_STACK_VAR(i,"i");
								HX_STACK_LINE(56)
								while((true)){
									HX_STACK_LINE(56)
									bool tmp10 = (i < listeners->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic ));		HX_STACK_VAR(tmp10,"tmp10");
									HX_STACK_LINE(56)
									bool tmp11 = !(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
									HX_STACK_LINE(56)
									if ((tmp11)){
										HX_STACK_LINE(56)
										break;
									}
									HX_STACK_LINE(58)
									Dynamic tmp12 = listeners->__GetItem(i);		HX_STACK_VAR(tmp12,"tmp12");
									HX_STACK_LINE(277)
									::lime::graphics::RenderContext tmp13 = renderer->context;		HX_STACK_VAR(tmp13,"tmp13");
									HX_STACK_LINE(58)
									tmp12(tmp13).Cast< Void >();
									HX_STACK_LINE(60)
									bool tmp14 = repeat->__get(i);		HX_STACK_VAR(tmp14,"tmp14");
									HX_STACK_LINE(60)
									bool tmp15 = !(tmp14);		HX_STACK_VAR(tmp15,"tmp15");
									HX_STACK_LINE(60)
									if ((tmp15)){
										HX_STACK_LINE(62)
										Dynamic tmp16 = listeners->__GetItem(i);		HX_STACK_VAR(tmp16,"tmp16");
										HX_STACK_LINE(62)
										renderer->onContextRestored->remove(tmp16);
									}
									else{
										HX_STACK_LINE(66)
										(i)++;
									}
								}
							}
						}
					}
					;break;
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(NativeApplication_obj,handleRenderEvent,(void))

Void NativeApplication_obj::handleTextEvent( ){
{
		HX_STACK_FRAME("lime._backend.native.NativeApplication","handleTextEvent",0x373acb99,"lime._backend.native.NativeApplication.handleTextEvent","lime/_backend/native/NativeApplication.hx",288,0xb13849fd)
		HX_STACK_THIS(this)
		HX_STACK_LINE(290)
		::lime::app::Application tmp = this->parent;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(290)
		::lime::_backend::native::_NativeApplication::TextEventInfo tmp1 = this->textEventInfo;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(290)
		int tmp2 = tmp1->windowID;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(290)
		::lime::ui::Window tmp3 = tmp->windowByID->get(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(290)
		::lime::ui::Window window = tmp3;		HX_STACK_VAR(window,"window");
		HX_STACK_LINE(292)
		bool tmp4 = (window != null());		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(292)
		if ((tmp4)){
			HX_STACK_LINE(294)
			::lime::_backend::native::_NativeApplication::TextEventInfo tmp5 = this->textEventInfo;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(294)
			int _g = tmp5->type;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(294)
			int tmp6 = _g;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(294)
			switch( (int)(tmp6)){
				case (int)0: {
					HX_STACK_LINE(52)
					cpp::ArrayBase listeners = window->onTextInput->listeners;		HX_STACK_VAR(listeners,"listeners");
					HX_STACK_LINE(53)
					Array< bool > repeat = window->onTextInput->repeat;		HX_STACK_VAR(repeat,"repeat");
					HX_STACK_LINE(54)
					int i = (int)0;		HX_STACK_VAR(i,"i");
					HX_STACK_LINE(56)
					while((true)){
						HX_STACK_LINE(56)
						bool tmp7 = (i < listeners->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic ));		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(56)
						bool tmp8 = !(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(56)
						if ((tmp8)){
							HX_STACK_LINE(56)
							break;
						}
						HX_STACK_LINE(58)
						Dynamic tmp9 = listeners->__GetItem(i);		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(298)
						::lime::_backend::native::_NativeApplication::TextEventInfo tmp10 = this->textEventInfo;		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(298)
						::String tmp11 = tmp10->text;		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(58)
						tmp9(tmp11).Cast< Void >();
						HX_STACK_LINE(60)
						bool tmp12 = repeat->__get(i);		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(60)
						bool tmp13 = !(tmp12);		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(60)
						if ((tmp13)){
							HX_STACK_LINE(62)
							Dynamic tmp14 = listeners->__GetItem(i);		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(62)
							window->onTextInput->remove(tmp14);
						}
						else{
							HX_STACK_LINE(66)
							(i)++;
						}
					}
				}
				;break;
				case (int)1: {
					HX_STACK_LINE(52)
					cpp::ArrayBase listeners = window->onTextEdit->listeners;		HX_STACK_VAR(listeners,"listeners");
					HX_STACK_LINE(53)
					Array< bool > repeat = window->onTextEdit->repeat;		HX_STACK_VAR(repeat,"repeat");
					HX_STACK_LINE(54)
					int i = (int)0;		HX_STACK_VAR(i,"i");
					HX_STACK_LINE(56)
					while((true)){
						HX_STACK_LINE(56)
						bool tmp7 = (i < listeners->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic ));		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(56)
						bool tmp8 = !(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(56)
						if ((tmp8)){
							HX_STACK_LINE(56)
							break;
						}
						HX_STACK_LINE(58)
						Dynamic tmp9 = listeners->__GetItem(i);		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(302)
						::lime::_backend::native::_NativeApplication::TextEventInfo tmp10 = this->textEventInfo;		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(302)
						::String tmp11 = tmp10->text;		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(302)
						::lime::_backend::native::_NativeApplication::TextEventInfo tmp12 = this->textEventInfo;		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(302)
						int tmp13 = tmp12->start;		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(302)
						::lime::_backend::native::_NativeApplication::TextEventInfo tmp14 = this->textEventInfo;		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(302)
						int tmp15 = tmp14->length;		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(58)
						tmp9(tmp11,tmp13,tmp15).Cast< Void >();
						HX_STACK_LINE(60)
						bool tmp16 = repeat->__get(i);		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(60)
						bool tmp17 = !(tmp16);		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(60)
						if ((tmp17)){
							HX_STACK_LINE(62)
							Dynamic tmp18 = listeners->__GetItem(i);		HX_STACK_VAR(tmp18,"tmp18");
							HX_STACK_LINE(62)
							window->onTextEdit->remove(tmp18);
						}
						else{
							HX_STACK_LINE(66)
							(i)++;
						}
					}
				}
				;break;
				default: {
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(NativeApplication_obj,handleTextEvent,(void))

Void NativeApplication_obj::handleTouchEvent( ){
{
		HX_STACK_FRAME("lime._backend.native.NativeApplication","handleTouchEvent",0xbe3236ef,"lime._backend.native.NativeApplication.handleTouchEvent","lime/_backend/native/NativeApplication.hx",315,0xb13849fd)
		HX_STACK_THIS(this)
		HX_STACK_LINE(315)
		::lime::_backend::native::_NativeApplication::TouchEventInfo tmp = this->touchEventInfo;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(315)
		int _g = tmp->type;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(315)
		int tmp1 = _g;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(315)
		switch( (int)(tmp1)){
			case (int)0: {
				HX_STACK_LINE(319)
				::List tmp2 = this->unusedTouchesPool;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(319)
				::lime::ui::Touch tmp3 = tmp2->pop();		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(319)
				::lime::ui::Touch touch = tmp3;		HX_STACK_VAR(touch,"touch");
				HX_STACK_LINE(321)
				bool tmp4 = (touch == null());		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(321)
				if ((tmp4)){
					HX_STACK_LINE(323)
					::lime::_backend::native::_NativeApplication::TouchEventInfo tmp5 = this->touchEventInfo;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(323)
					Float tmp6 = tmp5->x;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(323)
					::lime::_backend::native::_NativeApplication::TouchEventInfo tmp7 = this->touchEventInfo;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(323)
					Float tmp8 = tmp7->x;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(323)
					::lime::_backend::native::_NativeApplication::TouchEventInfo tmp9 = this->touchEventInfo;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(323)
					int tmp10 = tmp9->id;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(323)
					::lime::_backend::native::_NativeApplication::TouchEventInfo tmp11 = this->touchEventInfo;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(323)
					Float tmp12 = tmp11->dx;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(323)
					::lime::_backend::native::_NativeApplication::TouchEventInfo tmp13 = this->touchEventInfo;		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(323)
					Float tmp14 = tmp13->dy;		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(323)
					::lime::_backend::native::_NativeApplication::TouchEventInfo tmp15 = this->touchEventInfo;		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(323)
					Float tmp16 = tmp15->pressure;		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(323)
					::lime::_backend::native::_NativeApplication::TouchEventInfo tmp17 = this->touchEventInfo;		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(323)
					int tmp18 = tmp17->device;		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(323)
					::lime::ui::Touch tmp19 = ::lime::ui::Touch_obj::__new(tmp6,tmp8,tmp10,tmp12,tmp14,tmp16,tmp18);		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(323)
					touch = tmp19;
				}
				else{
					HX_STACK_LINE(327)
					::lime::_backend::native::_NativeApplication::TouchEventInfo tmp5 = this->touchEventInfo;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(327)
					touch->x = tmp5->x;
					HX_STACK_LINE(328)
					::lime::_backend::native::_NativeApplication::TouchEventInfo tmp6 = this->touchEventInfo;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(328)
					touch->y = tmp6->y;
					HX_STACK_LINE(329)
					::lime::_backend::native::_NativeApplication::TouchEventInfo tmp7 = this->touchEventInfo;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(329)
					touch->id = tmp7->id;
					HX_STACK_LINE(330)
					::lime::_backend::native::_NativeApplication::TouchEventInfo tmp8 = this->touchEventInfo;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(330)
					touch->dx = tmp8->dx;
					HX_STACK_LINE(331)
					::lime::_backend::native::_NativeApplication::TouchEventInfo tmp9 = this->touchEventInfo;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(331)
					touch->dy = tmp9->dy;
					HX_STACK_LINE(332)
					::lime::_backend::native::_NativeApplication::TouchEventInfo tmp10 = this->touchEventInfo;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(332)
					touch->pressure = tmp10->pressure;
					HX_STACK_LINE(333)
					::lime::_backend::native::_NativeApplication::TouchEventInfo tmp11 = this->touchEventInfo;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(333)
					touch->device = tmp11->device;
				}
				HX_STACK_LINE(337)
				::haxe::ds::IntMap tmp5 = this->currentTouches;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(337)
				int tmp6 = touch->id;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(337)
				::lime::ui::Touch tmp7 = touch;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(337)
				tmp5->set(tmp6,tmp7);
				HX_STACK_LINE(50)
				{
					HX_STACK_LINE(339)
					::lime::app::Event tmp8 = ::lime::ui::Touch_obj::onStart;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(52)
					cpp::ArrayBase listeners = tmp8->listeners;		HX_STACK_VAR(listeners,"listeners");
					HX_STACK_LINE(339)
					::lime::app::Event tmp9 = ::lime::ui::Touch_obj::onStart;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(53)
					Array< bool > repeat = tmp9->repeat;		HX_STACK_VAR(repeat,"repeat");
					HX_STACK_LINE(54)
					int i = (int)0;		HX_STACK_VAR(i,"i");
					HX_STACK_LINE(56)
					while((true)){
						HX_STACK_LINE(56)
						bool tmp10 = (i < listeners->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic ));		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(56)
						bool tmp11 = !(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(56)
						if ((tmp11)){
							HX_STACK_LINE(56)
							break;
						}
						HX_STACK_LINE(58)
						Dynamic tmp12 = listeners->__GetItem(i);		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(339)
						::lime::ui::Touch tmp13 = touch;		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(58)
						tmp12(tmp13).Cast< Void >();
						HX_STACK_LINE(60)
						bool tmp14 = repeat->__get(i);		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(60)
						bool tmp15 = !(tmp14);		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(60)
						if ((tmp15)){
							HX_STACK_LINE(339)
							::lime::app::Event tmp16 = ::lime::ui::Touch_obj::onStart;		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(62)
							Dynamic tmp17 = listeners->__GetItem(i);		HX_STACK_VAR(tmp17,"tmp17");
							HX_STACK_LINE(62)
							tmp16->remove(tmp17);
						}
						else{
							HX_STACK_LINE(66)
							(i)++;
						}
					}
				}
			}
			;break;
			case (int)1: {
				HX_STACK_LINE(343)
				::haxe::ds::IntMap tmp2 = this->currentTouches;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(343)
				::lime::_backend::native::_NativeApplication::TouchEventInfo tmp3 = this->touchEventInfo;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(343)
				int tmp4 = tmp3->id;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(343)
				::lime::ui::Touch tmp5 = tmp2->get(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(343)
				::lime::ui::Touch touch = tmp5;		HX_STACK_VAR(touch,"touch");
				HX_STACK_LINE(345)
				bool tmp6 = (touch != null());		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(345)
				if ((tmp6)){
					HX_STACK_LINE(347)
					::lime::_backend::native::_NativeApplication::TouchEventInfo tmp7 = this->touchEventInfo;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(347)
					touch->x = tmp7->x;
					HX_STACK_LINE(348)
					::lime::_backend::native::_NativeApplication::TouchEventInfo tmp8 = this->touchEventInfo;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(348)
					touch->y = tmp8->y;
					HX_STACK_LINE(349)
					::lime::_backend::native::_NativeApplication::TouchEventInfo tmp9 = this->touchEventInfo;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(349)
					touch->dx = tmp9->dx;
					HX_STACK_LINE(350)
					::lime::_backend::native::_NativeApplication::TouchEventInfo tmp10 = this->touchEventInfo;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(350)
					touch->dy = tmp10->dy;
					HX_STACK_LINE(351)
					::lime::_backend::native::_NativeApplication::TouchEventInfo tmp11 = this->touchEventInfo;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(351)
					touch->pressure = tmp11->pressure;
					HX_STACK_LINE(50)
					{
						HX_STACK_LINE(353)
						::lime::app::Event tmp12 = ::lime::ui::Touch_obj::onEnd;		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(52)
						cpp::ArrayBase listeners = tmp12->listeners;		HX_STACK_VAR(listeners,"listeners");
						HX_STACK_LINE(353)
						::lime::app::Event tmp13 = ::lime::ui::Touch_obj::onEnd;		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(53)
						Array< bool > repeat = tmp13->repeat;		HX_STACK_VAR(repeat,"repeat");
						HX_STACK_LINE(54)
						int i = (int)0;		HX_STACK_VAR(i,"i");
						HX_STACK_LINE(56)
						while((true)){
							HX_STACK_LINE(56)
							bool tmp14 = (i < listeners->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic ));		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(56)
							bool tmp15 = !(tmp14);		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(56)
							if ((tmp15)){
								HX_STACK_LINE(56)
								break;
							}
							HX_STACK_LINE(58)
							Dynamic tmp16 = listeners->__GetItem(i);		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(353)
							::lime::ui::Touch tmp17 = touch;		HX_STACK_VAR(tmp17,"tmp17");
							HX_STACK_LINE(58)
							tmp16(tmp17).Cast< Void >();
							HX_STACK_LINE(60)
							bool tmp18 = repeat->__get(i);		HX_STACK_VAR(tmp18,"tmp18");
							HX_STACK_LINE(60)
							bool tmp19 = !(tmp18);		HX_STACK_VAR(tmp19,"tmp19");
							HX_STACK_LINE(60)
							if ((tmp19)){
								HX_STACK_LINE(353)
								::lime::app::Event tmp20 = ::lime::ui::Touch_obj::onEnd;		HX_STACK_VAR(tmp20,"tmp20");
								HX_STACK_LINE(62)
								Dynamic tmp21 = listeners->__GetItem(i);		HX_STACK_VAR(tmp21,"tmp21");
								HX_STACK_LINE(62)
								tmp20->remove(tmp21);
							}
							else{
								HX_STACK_LINE(66)
								(i)++;
							}
						}
					}
					HX_STACK_LINE(355)
					::haxe::ds::IntMap tmp12 = this->currentTouches;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(355)
					::lime::_backend::native::_NativeApplication::TouchEventInfo tmp13 = this->touchEventInfo;		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(355)
					int tmp14 = tmp13->id;		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(355)
					tmp12->remove(tmp14);
					HX_STACK_LINE(356)
					::List tmp15 = this->unusedTouchesPool;		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(356)
					::lime::ui::Touch tmp16 = touch;		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(356)
					tmp15->add(tmp16);
				}
			}
			;break;
			case (int)2: {
				HX_STACK_LINE(362)
				::haxe::ds::IntMap tmp2 = this->currentTouches;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(362)
				::lime::_backend::native::_NativeApplication::TouchEventInfo tmp3 = this->touchEventInfo;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(362)
				int tmp4 = tmp3->id;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(362)
				::lime::ui::Touch tmp5 = tmp2->get(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(362)
				::lime::ui::Touch touch = tmp5;		HX_STACK_VAR(touch,"touch");
				HX_STACK_LINE(364)
				bool tmp6 = (touch != null());		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(364)
				if ((tmp6)){
					HX_STACK_LINE(366)
					::lime::_backend::native::_NativeApplication::TouchEventInfo tmp7 = this->touchEventInfo;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(366)
					touch->x = tmp7->x;
					HX_STACK_LINE(367)
					::lime::_backend::native::_NativeApplication::TouchEventInfo tmp8 = this->touchEventInfo;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(367)
					touch->y = tmp8->y;
					HX_STACK_LINE(368)
					::lime::_backend::native::_NativeApplication::TouchEventInfo tmp9 = this->touchEventInfo;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(368)
					touch->dx = tmp9->dx;
					HX_STACK_LINE(369)
					::lime::_backend::native::_NativeApplication::TouchEventInfo tmp10 = this->touchEventInfo;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(369)
					touch->dy = tmp10->dy;
					HX_STACK_LINE(370)
					::lime::_backend::native::_NativeApplication::TouchEventInfo tmp11 = this->touchEventInfo;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(370)
					touch->pressure = tmp11->pressure;
					HX_STACK_LINE(50)
					{
						HX_STACK_LINE(372)
						::lime::app::Event tmp12 = ::lime::ui::Touch_obj::onMove;		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(52)
						cpp::ArrayBase listeners = tmp12->listeners;		HX_STACK_VAR(listeners,"listeners");
						HX_STACK_LINE(372)
						::lime::app::Event tmp13 = ::lime::ui::Touch_obj::onMove;		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(53)
						Array< bool > repeat = tmp13->repeat;		HX_STACK_VAR(repeat,"repeat");
						HX_STACK_LINE(54)
						int i = (int)0;		HX_STACK_VAR(i,"i");
						HX_STACK_LINE(56)
						while((true)){
							HX_STACK_LINE(56)
							bool tmp14 = (i < listeners->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic ));		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(56)
							bool tmp15 = !(tmp14);		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(56)
							if ((tmp15)){
								HX_STACK_LINE(56)
								break;
							}
							HX_STACK_LINE(58)
							Dynamic tmp16 = listeners->__GetItem(i);		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(372)
							::lime::ui::Touch tmp17 = touch;		HX_STACK_VAR(tmp17,"tmp17");
							HX_STACK_LINE(58)
							tmp16(tmp17).Cast< Void >();
							HX_STACK_LINE(60)
							bool tmp18 = repeat->__get(i);		HX_STACK_VAR(tmp18,"tmp18");
							HX_STACK_LINE(60)
							bool tmp19 = !(tmp18);		HX_STACK_VAR(tmp19,"tmp19");
							HX_STACK_LINE(60)
							if ((tmp19)){
								HX_STACK_LINE(372)
								::lime::app::Event tmp20 = ::lime::ui::Touch_obj::onMove;		HX_STACK_VAR(tmp20,"tmp20");
								HX_STACK_LINE(62)
								Dynamic tmp21 = listeners->__GetItem(i);		HX_STACK_VAR(tmp21,"tmp21");
								HX_STACK_LINE(62)
								tmp20->remove(tmp21);
							}
							else{
								HX_STACK_LINE(66)
								(i)++;
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
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(NativeApplication_obj,handleTouchEvent,(void))

Void NativeApplication_obj::handleWindowEvent( ){
{
		HX_STACK_FRAME("lime._backend.native.NativeApplication","handleWindowEvent",0x18b48476,"lime._backend.native.NativeApplication.handleWindowEvent","lime/_backend/native/NativeApplication.hx",383,0xb13849fd)
		HX_STACK_THIS(this)
		HX_STACK_LINE(385)
		::lime::app::Application tmp = this->parent;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(385)
		::lime::_backend::native::_NativeApplication::WindowEventInfo tmp1 = this->windowEventInfo;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(385)
		int tmp2 = tmp1->windowID;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(385)
		::lime::ui::Window tmp3 = tmp->windowByID->get(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(385)
		::lime::ui::Window window = tmp3;		HX_STACK_VAR(window,"window");
		HX_STACK_LINE(387)
		bool tmp4 = (window != null());		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(387)
		if ((tmp4)){
			HX_STACK_LINE(389)
			::lime::_backend::native::_NativeApplication::WindowEventInfo tmp5 = this->windowEventInfo;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(389)
			int _g = tmp5->type;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(389)
			int tmp6 = _g;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(389)
			switch( (int)(tmp6)){
				case (int)0: {
					HX_STACK_LINE(52)
					cpp::ArrayBase listeners = window->onActivate->listeners;		HX_STACK_VAR(listeners,"listeners");
					HX_STACK_LINE(53)
					Array< bool > repeat = window->onActivate->repeat;		HX_STACK_VAR(repeat,"repeat");
					HX_STACK_LINE(54)
					int i = (int)0;		HX_STACK_VAR(i,"i");
					HX_STACK_LINE(56)
					while((true)){
						HX_STACK_LINE(56)
						bool tmp7 = (i < listeners->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic ));		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(56)
						bool tmp8 = !(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(56)
						if ((tmp8)){
							HX_STACK_LINE(56)
							break;
						}
						HX_STACK_LINE(58)
						Dynamic tmp9 = listeners->__GetItem(i);		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(58)
						tmp9().Cast< Void >();
						HX_STACK_LINE(60)
						bool tmp10 = repeat->__get(i);		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(60)
						bool tmp11 = !(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(60)
						if ((tmp11)){
							HX_STACK_LINE(62)
							Dynamic tmp12 = listeners->__GetItem(i);		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(62)
							window->onActivate->remove(tmp12);
						}
						else{
							HX_STACK_LINE(66)
							(i)++;
						}
					}
				}
				;break;
				case (int)1: {
					HX_STACK_LINE(50)
					{
						HX_STACK_LINE(52)
						cpp::ArrayBase listeners = window->onClose->listeners;		HX_STACK_VAR(listeners,"listeners");
						HX_STACK_LINE(53)
						Array< bool > repeat = window->onClose->repeat;		HX_STACK_VAR(repeat,"repeat");
						HX_STACK_LINE(54)
						int i = (int)0;		HX_STACK_VAR(i,"i");
						HX_STACK_LINE(56)
						while((true)){
							HX_STACK_LINE(56)
							bool tmp7 = (i < listeners->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic ));		HX_STACK_VAR(tmp7,"tmp7");
							HX_STACK_LINE(56)
							bool tmp8 = !(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
							HX_STACK_LINE(56)
							if ((tmp8)){
								HX_STACK_LINE(56)
								break;
							}
							HX_STACK_LINE(58)
							Dynamic tmp9 = listeners->__GetItem(i);		HX_STACK_VAR(tmp9,"tmp9");
							HX_STACK_LINE(58)
							tmp9().Cast< Void >();
							HX_STACK_LINE(60)
							bool tmp10 = repeat->__get(i);		HX_STACK_VAR(tmp10,"tmp10");
							HX_STACK_LINE(60)
							bool tmp11 = !(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
							HX_STACK_LINE(60)
							if ((tmp11)){
								HX_STACK_LINE(62)
								Dynamic tmp12 = listeners->__GetItem(i);		HX_STACK_VAR(tmp12,"tmp12");
								HX_STACK_LINE(62)
								window->onClose->remove(tmp12);
							}
							else{
								HX_STACK_LINE(66)
								(i)++;
							}
						}
					}
					HX_STACK_LINE(398)
					window->close();
				}
				;break;
				case (int)2: {
					HX_STACK_LINE(52)
					cpp::ArrayBase listeners = window->onDeactivate->listeners;		HX_STACK_VAR(listeners,"listeners");
					HX_STACK_LINE(53)
					Array< bool > repeat = window->onDeactivate->repeat;		HX_STACK_VAR(repeat,"repeat");
					HX_STACK_LINE(54)
					int i = (int)0;		HX_STACK_VAR(i,"i");
					HX_STACK_LINE(56)
					while((true)){
						HX_STACK_LINE(56)
						bool tmp7 = (i < listeners->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic ));		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(56)
						bool tmp8 = !(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(56)
						if ((tmp8)){
							HX_STACK_LINE(56)
							break;
						}
						HX_STACK_LINE(58)
						Dynamic tmp9 = listeners->__GetItem(i);		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(58)
						tmp9().Cast< Void >();
						HX_STACK_LINE(60)
						bool tmp10 = repeat->__get(i);		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(60)
						bool tmp11 = !(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(60)
						if ((tmp11)){
							HX_STACK_LINE(62)
							Dynamic tmp12 = listeners->__GetItem(i);		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(62)
							window->onDeactivate->remove(tmp12);
						}
						else{
							HX_STACK_LINE(66)
							(i)++;
						}
					}
				}
				;break;
				case (int)3: {
					HX_STACK_LINE(52)
					cpp::ArrayBase listeners = window->onEnter->listeners;		HX_STACK_VAR(listeners,"listeners");
					HX_STACK_LINE(53)
					Array< bool > repeat = window->onEnter->repeat;		HX_STACK_VAR(repeat,"repeat");
					HX_STACK_LINE(54)
					int i = (int)0;		HX_STACK_VAR(i,"i");
					HX_STACK_LINE(56)
					while((true)){
						HX_STACK_LINE(56)
						bool tmp7 = (i < listeners->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic ));		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(56)
						bool tmp8 = !(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(56)
						if ((tmp8)){
							HX_STACK_LINE(56)
							break;
						}
						HX_STACK_LINE(58)
						Dynamic tmp9 = listeners->__GetItem(i);		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(58)
						tmp9().Cast< Void >();
						HX_STACK_LINE(60)
						bool tmp10 = repeat->__get(i);		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(60)
						bool tmp11 = !(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(60)
						if ((tmp11)){
							HX_STACK_LINE(62)
							Dynamic tmp12 = listeners->__GetItem(i);		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(62)
							window->onEnter->remove(tmp12);
						}
						else{
							HX_STACK_LINE(66)
							(i)++;
						}
					}
				}
				;break;
				case (int)4: {
					HX_STACK_LINE(52)
					cpp::ArrayBase listeners = window->onFocusIn->listeners;		HX_STACK_VAR(listeners,"listeners");
					HX_STACK_LINE(53)
					Array< bool > repeat = window->onFocusIn->repeat;		HX_STACK_VAR(repeat,"repeat");
					HX_STACK_LINE(54)
					int i = (int)0;		HX_STACK_VAR(i,"i");
					HX_STACK_LINE(56)
					while((true)){
						HX_STACK_LINE(56)
						bool tmp7 = (i < listeners->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic ));		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(56)
						bool tmp8 = !(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(56)
						if ((tmp8)){
							HX_STACK_LINE(56)
							break;
						}
						HX_STACK_LINE(58)
						Dynamic tmp9 = listeners->__GetItem(i);		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(58)
						tmp9().Cast< Void >();
						HX_STACK_LINE(60)
						bool tmp10 = repeat->__get(i);		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(60)
						bool tmp11 = !(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(60)
						if ((tmp11)){
							HX_STACK_LINE(62)
							Dynamic tmp12 = listeners->__GetItem(i);		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(62)
							window->onFocusIn->remove(tmp12);
						}
						else{
							HX_STACK_LINE(66)
							(i)++;
						}
					}
				}
				;break;
				case (int)5: {
					HX_STACK_LINE(52)
					cpp::ArrayBase listeners = window->onFocusOut->listeners;		HX_STACK_VAR(listeners,"listeners");
					HX_STACK_LINE(53)
					Array< bool > repeat = window->onFocusOut->repeat;		HX_STACK_VAR(repeat,"repeat");
					HX_STACK_LINE(54)
					int i = (int)0;		HX_STACK_VAR(i,"i");
					HX_STACK_LINE(56)
					while((true)){
						HX_STACK_LINE(56)
						bool tmp7 = (i < listeners->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic ));		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(56)
						bool tmp8 = !(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(56)
						if ((tmp8)){
							HX_STACK_LINE(56)
							break;
						}
						HX_STACK_LINE(58)
						Dynamic tmp9 = listeners->__GetItem(i);		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(58)
						tmp9().Cast< Void >();
						HX_STACK_LINE(60)
						bool tmp10 = repeat->__get(i);		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(60)
						bool tmp11 = !(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(60)
						if ((tmp11)){
							HX_STACK_LINE(62)
							Dynamic tmp12 = listeners->__GetItem(i);		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(62)
							window->onFocusOut->remove(tmp12);
						}
						else{
							HX_STACK_LINE(66)
							(i)++;
						}
					}
				}
				;break;
				case (int)6: {
					HX_STACK_LINE(52)
					cpp::ArrayBase listeners = window->onLeave->listeners;		HX_STACK_VAR(listeners,"listeners");
					HX_STACK_LINE(53)
					Array< bool > repeat = window->onLeave->repeat;		HX_STACK_VAR(repeat,"repeat");
					HX_STACK_LINE(54)
					int i = (int)0;		HX_STACK_VAR(i,"i");
					HX_STACK_LINE(56)
					while((true)){
						HX_STACK_LINE(56)
						bool tmp7 = (i < listeners->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic ));		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(56)
						bool tmp8 = !(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(56)
						if ((tmp8)){
							HX_STACK_LINE(56)
							break;
						}
						HX_STACK_LINE(58)
						Dynamic tmp9 = listeners->__GetItem(i);		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(58)
						tmp9().Cast< Void >();
						HX_STACK_LINE(60)
						bool tmp10 = repeat->__get(i);		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(60)
						bool tmp11 = !(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(60)
						if ((tmp11)){
							HX_STACK_LINE(62)
							Dynamic tmp12 = listeners->__GetItem(i);		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(62)
							window->onLeave->remove(tmp12);
						}
						else{
							HX_STACK_LINE(66)
							(i)++;
						}
					}
				}
				;break;
				case (int)7: {
					HX_STACK_LINE(422)
					window->__minimized = true;
					HX_STACK_LINE(50)
					{
						HX_STACK_LINE(52)
						cpp::ArrayBase listeners = window->onMinimize->listeners;		HX_STACK_VAR(listeners,"listeners");
						HX_STACK_LINE(53)
						Array< bool > repeat = window->onMinimize->repeat;		HX_STACK_VAR(repeat,"repeat");
						HX_STACK_LINE(54)
						int i = (int)0;		HX_STACK_VAR(i,"i");
						HX_STACK_LINE(56)
						while((true)){
							HX_STACK_LINE(56)
							bool tmp7 = (i < listeners->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic ));		HX_STACK_VAR(tmp7,"tmp7");
							HX_STACK_LINE(56)
							bool tmp8 = !(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
							HX_STACK_LINE(56)
							if ((tmp8)){
								HX_STACK_LINE(56)
								break;
							}
							HX_STACK_LINE(58)
							Dynamic tmp9 = listeners->__GetItem(i);		HX_STACK_VAR(tmp9,"tmp9");
							HX_STACK_LINE(58)
							tmp9().Cast< Void >();
							HX_STACK_LINE(60)
							bool tmp10 = repeat->__get(i);		HX_STACK_VAR(tmp10,"tmp10");
							HX_STACK_LINE(60)
							bool tmp11 = !(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
							HX_STACK_LINE(60)
							if ((tmp11)){
								HX_STACK_LINE(62)
								Dynamic tmp12 = listeners->__GetItem(i);		HX_STACK_VAR(tmp12,"tmp12");
								HX_STACK_LINE(62)
								window->onMinimize->remove(tmp12);
							}
							else{
								HX_STACK_LINE(66)
								(i)++;
							}
						}
					}
				}
				;break;
				case (int)8: {
					HX_STACK_LINE(427)
					::lime::_backend::native::_NativeApplication::WindowEventInfo tmp7 = this->windowEventInfo;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(427)
					window->__x = tmp7->x;
					HX_STACK_LINE(428)
					::lime::_backend::native::_NativeApplication::WindowEventInfo tmp8 = this->windowEventInfo;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(428)
					window->__y = tmp8->y;
					HX_STACK_LINE(50)
					{
						HX_STACK_LINE(52)
						cpp::ArrayBase listeners = window->onMove->listeners;		HX_STACK_VAR(listeners,"listeners");
						HX_STACK_LINE(53)
						Array< bool > repeat = window->onMove->repeat;		HX_STACK_VAR(repeat,"repeat");
						HX_STACK_LINE(54)
						int i = (int)0;		HX_STACK_VAR(i,"i");
						HX_STACK_LINE(56)
						while((true)){
							HX_STACK_LINE(56)
							bool tmp9 = (i < listeners->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic ));		HX_STACK_VAR(tmp9,"tmp9");
							HX_STACK_LINE(56)
							bool tmp10 = !(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
							HX_STACK_LINE(56)
							if ((tmp10)){
								HX_STACK_LINE(56)
								break;
							}
							HX_STACK_LINE(58)
							Dynamic tmp11 = listeners->__GetItem(i);		HX_STACK_VAR(tmp11,"tmp11");
							HX_STACK_LINE(429)
							::lime::_backend::native::_NativeApplication::WindowEventInfo tmp12 = this->windowEventInfo;		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(429)
							int tmp13 = tmp12->x;		HX_STACK_VAR(tmp13,"tmp13");
							HX_STACK_LINE(429)
							::lime::_backend::native::_NativeApplication::WindowEventInfo tmp14 = this->windowEventInfo;		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(429)
							int tmp15 = tmp14->y;		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(58)
							tmp11(tmp13,tmp15).Cast< Void >();
							HX_STACK_LINE(60)
							bool tmp16 = repeat->__get(i);		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(60)
							bool tmp17 = !(tmp16);		HX_STACK_VAR(tmp17,"tmp17");
							HX_STACK_LINE(60)
							if ((tmp17)){
								HX_STACK_LINE(62)
								Dynamic tmp18 = listeners->__GetItem(i);		HX_STACK_VAR(tmp18,"tmp18");
								HX_STACK_LINE(62)
								window->onMove->remove(tmp18);
							}
							else{
								HX_STACK_LINE(66)
								(i)++;
							}
						}
					}
				}
				;break;
				case (int)9: {
					HX_STACK_LINE(433)
					::lime::_backend::native::_NativeApplication::WindowEventInfo tmp7 = this->windowEventInfo;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(433)
					window->__width = tmp7->width;
					HX_STACK_LINE(434)
					::lime::_backend::native::_NativeApplication::WindowEventInfo tmp8 = this->windowEventInfo;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(434)
					window->__height = tmp8->height;
					HX_STACK_LINE(50)
					{
						HX_STACK_LINE(52)
						cpp::ArrayBase listeners = window->onResize->listeners;		HX_STACK_VAR(listeners,"listeners");
						HX_STACK_LINE(53)
						Array< bool > repeat = window->onResize->repeat;		HX_STACK_VAR(repeat,"repeat");
						HX_STACK_LINE(54)
						int i = (int)0;		HX_STACK_VAR(i,"i");
						HX_STACK_LINE(56)
						while((true)){
							HX_STACK_LINE(56)
							bool tmp9 = (i < listeners->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic ));		HX_STACK_VAR(tmp9,"tmp9");
							HX_STACK_LINE(56)
							bool tmp10 = !(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
							HX_STACK_LINE(56)
							if ((tmp10)){
								HX_STACK_LINE(56)
								break;
							}
							HX_STACK_LINE(58)
							Dynamic tmp11 = listeners->__GetItem(i);		HX_STACK_VAR(tmp11,"tmp11");
							HX_STACK_LINE(435)
							::lime::_backend::native::_NativeApplication::WindowEventInfo tmp12 = this->windowEventInfo;		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(435)
							int tmp13 = tmp12->width;		HX_STACK_VAR(tmp13,"tmp13");
							HX_STACK_LINE(435)
							::lime::_backend::native::_NativeApplication::WindowEventInfo tmp14 = this->windowEventInfo;		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(435)
							int tmp15 = tmp14->height;		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(58)
							tmp11(tmp13,tmp15).Cast< Void >();
							HX_STACK_LINE(60)
							bool tmp16 = repeat->__get(i);		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(60)
							bool tmp17 = !(tmp16);		HX_STACK_VAR(tmp17,"tmp17");
							HX_STACK_LINE(60)
							if ((tmp17)){
								HX_STACK_LINE(62)
								Dynamic tmp18 = listeners->__GetItem(i);		HX_STACK_VAR(tmp18,"tmp18");
								HX_STACK_LINE(62)
								window->onResize->remove(tmp18);
							}
							else{
								HX_STACK_LINE(66)
								(i)++;
							}
						}
					}
				}
				;break;
				case (int)10: {
					HX_STACK_LINE(439)
					window->__fullscreen = false;
					HX_STACK_LINE(440)
					window->__minimized = false;
					HX_STACK_LINE(50)
					{
						HX_STACK_LINE(52)
						cpp::ArrayBase listeners = window->onRestore->listeners;		HX_STACK_VAR(listeners,"listeners");
						HX_STACK_LINE(53)
						Array< bool > repeat = window->onRestore->repeat;		HX_STACK_VAR(repeat,"repeat");
						HX_STACK_LINE(54)
						int i = (int)0;		HX_STACK_VAR(i,"i");
						HX_STACK_LINE(56)
						while((true)){
							HX_STACK_LINE(56)
							bool tmp7 = (i < listeners->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic ));		HX_STACK_VAR(tmp7,"tmp7");
							HX_STACK_LINE(56)
							bool tmp8 = !(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
							HX_STACK_LINE(56)
							if ((tmp8)){
								HX_STACK_LINE(56)
								break;
							}
							HX_STACK_LINE(58)
							Dynamic tmp9 = listeners->__GetItem(i);		HX_STACK_VAR(tmp9,"tmp9");
							HX_STACK_LINE(58)
							tmp9().Cast< Void >();
							HX_STACK_LINE(60)
							bool tmp10 = repeat->__get(i);		HX_STACK_VAR(tmp10,"tmp10");
							HX_STACK_LINE(60)
							bool tmp11 = !(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
							HX_STACK_LINE(60)
							if ((tmp11)){
								HX_STACK_LINE(62)
								Dynamic tmp12 = listeners->__GetItem(i);		HX_STACK_VAR(tmp12,"tmp12");
								HX_STACK_LINE(62)
								window->onRestore->remove(tmp12);
							}
							else{
								HX_STACK_LINE(66)
								(i)++;
							}
						}
					}
				}
				;break;
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(NativeApplication_obj,handleWindowEvent,(void))

Float NativeApplication_obj::setFrameRate( Float value){
	HX_STACK_FRAME("lime._backend.native.NativeApplication","setFrameRate",0xfc951cf7,"lime._backend.native.NativeApplication.setFrameRate","lime/_backend/native/NativeApplication.hx",450,0xb13849fd)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(452)
	Dynamic tmp = this->handle;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(452)
	Float tmp1 = value;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(452)
	::lime::_backend::native::NativeApplication_obj::lime_application_set_frame_rate(tmp,tmp1);
	HX_STACK_LINE(453)
	Float tmp2 = this->frameRate = value;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(453)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC1(NativeApplication_obj,setFrameRate,return )

Void NativeApplication_obj::updateTimer( ){
{
		HX_STACK_FRAME("lime._backend.native.NativeApplication","updateTimer",0x8a9bcb30,"lime._backend.native.NativeApplication.updateTimer","lime/_backend/native/NativeApplication.hx",458,0xb13849fd)
		HX_STACK_THIS(this)
		HX_STACK_LINE(460)
		int tmp = ::haxe::Timer_obj::sRunningTimers->length;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(460)
		bool tmp1 = (tmp > (int)0);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(460)
		if ((tmp1)){
			HX_STACK_LINE(462)
			int tmp2 = ::lime::_system::System_obj::getTimer();		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(462)
			int currentTime = tmp2;		HX_STACK_VAR(currentTime,"currentTime");
			HX_STACK_LINE(463)
			bool foundNull = false;		HX_STACK_VAR(foundNull,"foundNull");
			HX_STACK_LINE(464)
			::haxe::Timer timer;		HX_STACK_VAR(timer,"timer");
			HX_STACK_LINE(466)
			{
				HX_STACK_LINE(466)
				int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(466)
				int tmp3 = ::haxe::Timer_obj::sRunningTimers->length;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(466)
				int _g = tmp3;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(466)
				while((true)){
					HX_STACK_LINE(466)
					bool tmp4 = (_g1 < _g);		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(466)
					bool tmp5 = !(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(466)
					if ((tmp5)){
						HX_STACK_LINE(466)
						break;
					}
					HX_STACK_LINE(466)
					int tmp6 = (_g1)++;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(466)
					int i = tmp6;		HX_STACK_VAR(i,"i");
					HX_STACK_LINE(468)
					::haxe::Timer tmp7 = ::haxe::Timer_obj::sRunningTimers->__get(i).StaticCast< ::haxe::Timer >();		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(468)
					timer = tmp7;
					HX_STACK_LINE(470)
					bool tmp8 = (timer != null());		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(470)
					if ((tmp8)){
						HX_STACK_LINE(472)
						bool tmp9 = (currentTime >= timer->mFireAt);		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(472)
						if ((tmp9)){
							HX_STACK_LINE(474)
							hx::AddEq(timer->mFireAt,timer->mTime);
							HX_STACK_LINE(475)
							timer->run();
						}
					}
					else{
						HX_STACK_LINE(481)
						foundNull = true;
					}
				}
			}
			HX_STACK_LINE(487)
			bool tmp3 = foundNull;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(487)
			if ((tmp3)){

				HX_BEGIN_LOCAL_FUNC_S0(hx::LocalFunc,_Function_3_1)
				int __ArgCount() const { return 1; }
				bool run(::haxe::Timer val){
					HX_STACK_FRAME("*","_Function_3_1",0x520271b9,"*._Function_3_1","lime/_backend/native/NativeApplication.hx",489,0xb13849fd)
					HX_STACK_ARG(val,"val")
					{
						HX_STACK_LINE(489)
						bool tmp4 = (val != null());		HX_STACK_VAR(tmp4,"tmp4");
						HX_STACK_LINE(489)
						return tmp4;
					}
					return null();
				}
				HX_END_LOCAL_FUNC1(return)

				HX_STACK_LINE(489)
				::haxe::Timer_obj::sRunningTimers = ::haxe::Timer_obj::sRunningTimers->filter( Dynamic(new _Function_3_1()));
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(NativeApplication_obj,updateTimer,(void))

Dynamic NativeApplication_obj::lime_application_create;

Dynamic NativeApplication_obj::lime_application_event_manager_register;

Dynamic NativeApplication_obj::lime_application_exec;

Dynamic NativeApplication_obj::lime_application_init;

Dynamic NativeApplication_obj::lime_application_set_frame_rate;

Dynamic NativeApplication_obj::lime_application_update;

Dynamic NativeApplication_obj::lime_application_quit;

Dynamic NativeApplication_obj::lime_gamepad_event_manager_register;

Dynamic NativeApplication_obj::lime_key_event_manager_register;

Dynamic NativeApplication_obj::lime_mouse_event_manager_register;

Dynamic NativeApplication_obj::lime_render_event_manager_register;

Dynamic NativeApplication_obj::lime_text_event_manager_register;

Dynamic NativeApplication_obj::lime_touch_event_manager_register;

Dynamic NativeApplication_obj::lime_window_event_manager_register;


NativeApplication_obj::NativeApplication_obj()
{
}

void NativeApplication_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(NativeApplication);
	HX_MARK_MEMBER_NAME(applicationEventInfo,"applicationEventInfo");
	HX_MARK_MEMBER_NAME(currentTouches,"currentTouches");
	HX_MARK_MEMBER_NAME(gamepadEventInfo,"gamepadEventInfo");
	HX_MARK_MEMBER_NAME(keyEventInfo,"keyEventInfo");
	HX_MARK_MEMBER_NAME(mouseEventInfo,"mouseEventInfo");
	HX_MARK_MEMBER_NAME(renderEventInfo,"renderEventInfo");
	HX_MARK_MEMBER_NAME(textEventInfo,"textEventInfo");
	HX_MARK_MEMBER_NAME(touchEventInfo,"touchEventInfo");
	HX_MARK_MEMBER_NAME(unusedTouchesPool,"unusedTouchesPool");
	HX_MARK_MEMBER_NAME(windowEventInfo,"windowEventInfo");
	HX_MARK_MEMBER_NAME(handle,"handle");
	HX_MARK_MEMBER_NAME(frameRate,"frameRate");
	HX_MARK_MEMBER_NAME(parent,"parent");
	HX_MARK_END_CLASS();
}

void NativeApplication_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(applicationEventInfo,"applicationEventInfo");
	HX_VISIT_MEMBER_NAME(currentTouches,"currentTouches");
	HX_VISIT_MEMBER_NAME(gamepadEventInfo,"gamepadEventInfo");
	HX_VISIT_MEMBER_NAME(keyEventInfo,"keyEventInfo");
	HX_VISIT_MEMBER_NAME(mouseEventInfo,"mouseEventInfo");
	HX_VISIT_MEMBER_NAME(renderEventInfo,"renderEventInfo");
	HX_VISIT_MEMBER_NAME(textEventInfo,"textEventInfo");
	HX_VISIT_MEMBER_NAME(touchEventInfo,"touchEventInfo");
	HX_VISIT_MEMBER_NAME(unusedTouchesPool,"unusedTouchesPool");
	HX_VISIT_MEMBER_NAME(windowEventInfo,"windowEventInfo");
	HX_VISIT_MEMBER_NAME(handle,"handle");
	HX_VISIT_MEMBER_NAME(frameRate,"frameRate");
	HX_VISIT_MEMBER_NAME(parent,"parent");
}

Dynamic NativeApplication_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"exec") ) { return exec_dyn(); }
		if (HX_FIELD_EQ(inName,"exit") ) { return exit_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"handle") ) { return handle; }
		if (HX_FIELD_EQ(inName,"parent") ) { return parent; }
		if (HX_FIELD_EQ(inName,"create") ) { return create_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"frameRate") ) { return frameRate; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"updateTimer") ) { return updateTimer_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"keyEventInfo") ) { return keyEventInfo; }
		if (HX_FIELD_EQ(inName,"getFrameRate") ) { return getFrameRate_dyn(); }
		if (HX_FIELD_EQ(inName,"setFrameRate") ) { return setFrameRate_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"textEventInfo") ) { return textEventInfo; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"currentTouches") ) { return currentTouches; }
		if (HX_FIELD_EQ(inName,"mouseEventInfo") ) { return mouseEventInfo; }
		if (HX_FIELD_EQ(inName,"touchEventInfo") ) { return touchEventInfo; }
		if (HX_FIELD_EQ(inName,"handleKeyEvent") ) { return handleKeyEvent_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"renderEventInfo") ) { return renderEventInfo; }
		if (HX_FIELD_EQ(inName,"windowEventInfo") ) { return windowEventInfo; }
		if (HX_FIELD_EQ(inName,"handleTextEvent") ) { return handleTextEvent_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"gamepadEventInfo") ) { return gamepadEventInfo; }
		if (HX_FIELD_EQ(inName,"handleMouseEvent") ) { return handleMouseEvent_dyn(); }
		if (HX_FIELD_EQ(inName,"handleTouchEvent") ) { return handleTouchEvent_dyn(); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"unusedTouchesPool") ) { return unusedTouchesPool; }
		if (HX_FIELD_EQ(inName,"handleRenderEvent") ) { return handleRenderEvent_dyn(); }
		if (HX_FIELD_EQ(inName,"handleWindowEvent") ) { return handleWindowEvent_dyn(); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"handleGamepadEvent") ) { return handleGamepadEvent_dyn(); }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"applicationEventInfo") ) { return applicationEventInfo; }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"handleApplicationEvent") ) { return handleApplicationEvent_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

bool NativeApplication_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 21:
		if (HX_FIELD_EQ(inName,"lime_application_exec") ) { outValue = lime_application_exec; return true;  }
		if (HX_FIELD_EQ(inName,"lime_application_init") ) { outValue = lime_application_init; return true;  }
		if (HX_FIELD_EQ(inName,"lime_application_quit") ) { outValue = lime_application_quit; return true;  }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"lime_application_create") ) { outValue = lime_application_create; return true;  }
		if (HX_FIELD_EQ(inName,"lime_application_update") ) { outValue = lime_application_update; return true;  }
		break;
	case 31:
		if (HX_FIELD_EQ(inName,"lime_application_set_frame_rate") ) { outValue = lime_application_set_frame_rate; return true;  }
		if (HX_FIELD_EQ(inName,"lime_key_event_manager_register") ) { outValue = lime_key_event_manager_register; return true;  }
		break;
	case 32:
		if (HX_FIELD_EQ(inName,"lime_text_event_manager_register") ) { outValue = lime_text_event_manager_register; return true;  }
		break;
	case 33:
		if (HX_FIELD_EQ(inName,"lime_mouse_event_manager_register") ) { outValue = lime_mouse_event_manager_register; return true;  }
		if (HX_FIELD_EQ(inName,"lime_touch_event_manager_register") ) { outValue = lime_touch_event_manager_register; return true;  }
		break;
	case 34:
		if (HX_FIELD_EQ(inName,"lime_render_event_manager_register") ) { outValue = lime_render_event_manager_register; return true;  }
		if (HX_FIELD_EQ(inName,"lime_window_event_manager_register") ) { outValue = lime_window_event_manager_register; return true;  }
		break;
	case 35:
		if (HX_FIELD_EQ(inName,"lime_gamepad_event_manager_register") ) { outValue = lime_gamepad_event_manager_register; return true;  }
		break;
	case 39:
		if (HX_FIELD_EQ(inName,"lime_application_event_manager_register") ) { outValue = lime_application_event_manager_register; return true;  }
	}
	return false;
}

Dynamic NativeApplication_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"handle") ) { handle=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"parent") ) { parent=inValue.Cast< ::lime::app::Application >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"frameRate") ) { frameRate=inValue.Cast< Float >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"keyEventInfo") ) { keyEventInfo=inValue.Cast< ::lime::_backend::native::_NativeApplication::KeyEventInfo >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"textEventInfo") ) { textEventInfo=inValue.Cast< ::lime::_backend::native::_NativeApplication::TextEventInfo >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"currentTouches") ) { currentTouches=inValue.Cast< ::haxe::ds::IntMap >(); return inValue; }
		if (HX_FIELD_EQ(inName,"mouseEventInfo") ) { mouseEventInfo=inValue.Cast< ::lime::_backend::native::_NativeApplication::MouseEventInfo >(); return inValue; }
		if (HX_FIELD_EQ(inName,"touchEventInfo") ) { touchEventInfo=inValue.Cast< ::lime::_backend::native::_NativeApplication::TouchEventInfo >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"renderEventInfo") ) { renderEventInfo=inValue.Cast< ::lime::_backend::native::_NativeApplication::RenderEventInfo >(); return inValue; }
		if (HX_FIELD_EQ(inName,"windowEventInfo") ) { windowEventInfo=inValue.Cast< ::lime::_backend::native::_NativeApplication::WindowEventInfo >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"gamepadEventInfo") ) { gamepadEventInfo=inValue.Cast< ::lime::_backend::native::_NativeApplication::GamepadEventInfo >(); return inValue; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"unusedTouchesPool") ) { unusedTouchesPool=inValue.Cast< ::List >(); return inValue; }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"applicationEventInfo") ) { applicationEventInfo=inValue.Cast< ::lime::_backend::native::_NativeApplication::ApplicationEventInfo >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool NativeApplication_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 21:
		if (HX_FIELD_EQ(inName,"lime_application_exec") ) { lime_application_exec=ioValue.Cast< Dynamic >(); return true; }
		if (HX_FIELD_EQ(inName,"lime_application_init") ) { lime_application_init=ioValue.Cast< Dynamic >(); return true; }
		if (HX_FIELD_EQ(inName,"lime_application_quit") ) { lime_application_quit=ioValue.Cast< Dynamic >(); return true; }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"lime_application_create") ) { lime_application_create=ioValue.Cast< Dynamic >(); return true; }
		if (HX_FIELD_EQ(inName,"lime_application_update") ) { lime_application_update=ioValue.Cast< Dynamic >(); return true; }
		break;
	case 31:
		if (HX_FIELD_EQ(inName,"lime_application_set_frame_rate") ) { lime_application_set_frame_rate=ioValue.Cast< Dynamic >(); return true; }
		if (HX_FIELD_EQ(inName,"lime_key_event_manager_register") ) { lime_key_event_manager_register=ioValue.Cast< Dynamic >(); return true; }
		break;
	case 32:
		if (HX_FIELD_EQ(inName,"lime_text_event_manager_register") ) { lime_text_event_manager_register=ioValue.Cast< Dynamic >(); return true; }
		break;
	case 33:
		if (HX_FIELD_EQ(inName,"lime_mouse_event_manager_register") ) { lime_mouse_event_manager_register=ioValue.Cast< Dynamic >(); return true; }
		if (HX_FIELD_EQ(inName,"lime_touch_event_manager_register") ) { lime_touch_event_manager_register=ioValue.Cast< Dynamic >(); return true; }
		break;
	case 34:
		if (HX_FIELD_EQ(inName,"lime_render_event_manager_register") ) { lime_render_event_manager_register=ioValue.Cast< Dynamic >(); return true; }
		if (HX_FIELD_EQ(inName,"lime_window_event_manager_register") ) { lime_window_event_manager_register=ioValue.Cast< Dynamic >(); return true; }
		break;
	case 35:
		if (HX_FIELD_EQ(inName,"lime_gamepad_event_manager_register") ) { lime_gamepad_event_manager_register=ioValue.Cast< Dynamic >(); return true; }
		break;
	case 39:
		if (HX_FIELD_EQ(inName,"lime_application_event_manager_register") ) { lime_application_event_manager_register=ioValue.Cast< Dynamic >(); return true; }
	}
	return false;
}

void NativeApplication_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("applicationEventInfo","\x38","\x8c","\xf4","\x09"));
	outFields->push(HX_HCSTRING("currentTouches","\xb4","\x92","\x8c","\xe6"));
	outFields->push(HX_HCSTRING("gamepadEventInfo","\xc7","\xa4","\x2e","\x4c"));
	outFields->push(HX_HCSTRING("keyEventInfo","\x09","\xec","\x90","\xcc"));
	outFields->push(HX_HCSTRING("mouseEventInfo","\xc3","\x9e","\xa6","\x86"));
	outFields->push(HX_HCSTRING("renderEventInfo","\x72","\x9b","\x70","\xdd"));
	outFields->push(HX_HCSTRING("textEventInfo","\x3b","\xd7","\x5a","\xac"));
	outFields->push(HX_HCSTRING("touchEventInfo","\xe9","\x99","\x5c","\x0c"));
	outFields->push(HX_HCSTRING("unusedTouchesPool","\xf3","\xcf","\xdf","\x11"));
	outFields->push(HX_HCSTRING("windowEventInfo","\x98","\x8f","\x34","\x9b"));
	outFields->push(HX_HCSTRING("handle","\xa8","\x83","\xfd","\xb7"));
	outFields->push(HX_HCSTRING("frameRate","\xad","\x11","\x25","\x39"));
	outFields->push(HX_HCSTRING("parent","\x2a","\x05","\x7e","\xed"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::lime::_backend::native::_NativeApplication::ApplicationEventInfo*/ ,(int)offsetof(NativeApplication_obj,applicationEventInfo),HX_HCSTRING("applicationEventInfo","\x38","\x8c","\xf4","\x09")},
	{hx::fsObject /*::haxe::ds::IntMap*/ ,(int)offsetof(NativeApplication_obj,currentTouches),HX_HCSTRING("currentTouches","\xb4","\x92","\x8c","\xe6")},
	{hx::fsObject /*::lime::_backend::native::_NativeApplication::GamepadEventInfo*/ ,(int)offsetof(NativeApplication_obj,gamepadEventInfo),HX_HCSTRING("gamepadEventInfo","\xc7","\xa4","\x2e","\x4c")},
	{hx::fsObject /*::lime::_backend::native::_NativeApplication::KeyEventInfo*/ ,(int)offsetof(NativeApplication_obj,keyEventInfo),HX_HCSTRING("keyEventInfo","\x09","\xec","\x90","\xcc")},
	{hx::fsObject /*::lime::_backend::native::_NativeApplication::MouseEventInfo*/ ,(int)offsetof(NativeApplication_obj,mouseEventInfo),HX_HCSTRING("mouseEventInfo","\xc3","\x9e","\xa6","\x86")},
	{hx::fsObject /*::lime::_backend::native::_NativeApplication::RenderEventInfo*/ ,(int)offsetof(NativeApplication_obj,renderEventInfo),HX_HCSTRING("renderEventInfo","\x72","\x9b","\x70","\xdd")},
	{hx::fsObject /*::lime::_backend::native::_NativeApplication::TextEventInfo*/ ,(int)offsetof(NativeApplication_obj,textEventInfo),HX_HCSTRING("textEventInfo","\x3b","\xd7","\x5a","\xac")},
	{hx::fsObject /*::lime::_backend::native::_NativeApplication::TouchEventInfo*/ ,(int)offsetof(NativeApplication_obj,touchEventInfo),HX_HCSTRING("touchEventInfo","\xe9","\x99","\x5c","\x0c")},
	{hx::fsObject /*::List*/ ,(int)offsetof(NativeApplication_obj,unusedTouchesPool),HX_HCSTRING("unusedTouchesPool","\xf3","\xcf","\xdf","\x11")},
	{hx::fsObject /*::lime::_backend::native::_NativeApplication::WindowEventInfo*/ ,(int)offsetof(NativeApplication_obj,windowEventInfo),HX_HCSTRING("windowEventInfo","\x98","\x8f","\x34","\x9b")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(NativeApplication_obj,handle),HX_HCSTRING("handle","\xa8","\x83","\xfd","\xb7")},
	{hx::fsFloat,(int)offsetof(NativeApplication_obj,frameRate),HX_HCSTRING("frameRate","\xad","\x11","\x25","\x39")},
	{hx::fsObject /*::lime::app::Application*/ ,(int)offsetof(NativeApplication_obj,parent),HX_HCSTRING("parent","\x2a","\x05","\x7e","\xed")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo sStaticStorageInfo[] = {
	{hx::fsObject /*Dynamic*/ ,(void *) &NativeApplication_obj::lime_application_create,HX_HCSTRING("lime_application_create","\x75","\x25","\x1a","\xbb")},
	{hx::fsObject /*Dynamic*/ ,(void *) &NativeApplication_obj::lime_application_event_manager_register,HX_HCSTRING("lime_application_event_manager_register","\x33","\x3f","\x87","\x01")},
	{hx::fsObject /*Dynamic*/ ,(void *) &NativeApplication_obj::lime_application_exec,HX_HCSTRING("lime_application_exec","\xca","\xf1","\x81","\xe2")},
	{hx::fsObject /*Dynamic*/ ,(void *) &NativeApplication_obj::lime_application_init,HX_HCSTRING("lime_application_init","\x49","\x39","\x1f","\xe5")},
	{hx::fsObject /*Dynamic*/ ,(void *) &NativeApplication_obj::lime_application_set_frame_rate,HX_HCSTRING("lime_application_set_frame_rate","\xa8","\x03","\xd7","\x1d")},
	{hx::fsObject /*Dynamic*/ ,(void *) &NativeApplication_obj::lime_application_update,HX_HCSTRING("lime_application_update","\x82","\x44","\x10","\xc6")},
	{hx::fsObject /*Dynamic*/ ,(void *) &NativeApplication_obj::lime_application_quit,HX_HCSTRING("lime_application_quit","\x08","\x3e","\x6e","\xea")},
	{hx::fsObject /*Dynamic*/ ,(void *) &NativeApplication_obj::lime_gamepad_event_manager_register,HX_HCSTRING("lime_gamepad_event_manager_register","\x02","\xb7","\x1e","\x51")},
	{hx::fsObject /*Dynamic*/ ,(void *) &NativeApplication_obj::lime_key_event_manager_register,HX_HCSTRING("lime_key_event_manager_register","\xc4","\x10","\x76","\x37")},
	{hx::fsObject /*Dynamic*/ ,(void *) &NativeApplication_obj::lime_mouse_event_manager_register,HX_HCSTRING("lime_mouse_event_manager_register","\x7e","\x33","\x83","\xea")},
	{hx::fsObject /*Dynamic*/ ,(void *) &NativeApplication_obj::lime_render_event_manager_register,HX_HCSTRING("lime_render_event_manager_register","\xd9","\x6b","\xed","\xee")},
	{hx::fsObject /*Dynamic*/ ,(void *) &NativeApplication_obj::lime_text_event_manager_register,HX_HCSTRING("lime_text_event_manager_register","\xe2","\x83","\x68","\x5d")},
	{hx::fsObject /*Dynamic*/ ,(void *) &NativeApplication_obj::lime_touch_event_manager_register,HX_HCSTRING("lime_touch_event_manager_register","\x24","\x25","\xf4","\xf5")},
	{hx::fsObject /*Dynamic*/ ,(void *) &NativeApplication_obj::lime_window_event_manager_register,HX_HCSTRING("lime_window_event_manager_register","\x7f","\x16","\x8e","\x0d")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("applicationEventInfo","\x38","\x8c","\xf4","\x09"),
	HX_HCSTRING("currentTouches","\xb4","\x92","\x8c","\xe6"),
	HX_HCSTRING("gamepadEventInfo","\xc7","\xa4","\x2e","\x4c"),
	HX_HCSTRING("keyEventInfo","\x09","\xec","\x90","\xcc"),
	HX_HCSTRING("mouseEventInfo","\xc3","\x9e","\xa6","\x86"),
	HX_HCSTRING("renderEventInfo","\x72","\x9b","\x70","\xdd"),
	HX_HCSTRING("textEventInfo","\x3b","\xd7","\x5a","\xac"),
	HX_HCSTRING("touchEventInfo","\xe9","\x99","\x5c","\x0c"),
	HX_HCSTRING("unusedTouchesPool","\xf3","\xcf","\xdf","\x11"),
	HX_HCSTRING("windowEventInfo","\x98","\x8f","\x34","\x9b"),
	HX_HCSTRING("handle","\xa8","\x83","\xfd","\xb7"),
	HX_HCSTRING("frameRate","\xad","\x11","\x25","\x39"),
	HX_HCSTRING("parent","\x2a","\x05","\x7e","\xed"),
	HX_HCSTRING("create","\xfc","\x66","\x0f","\x7c"),
	HX_HCSTRING("exec","\x91","\xf3","\x1d","\x43"),
	HX_HCSTRING("exit","\x1e","\xf7","\x1d","\x43"),
	HX_HCSTRING("getFrameRate","\x37","\xae","\x7b","\x48"),
	HX_HCSTRING("handleApplicationEvent","\x72","\xba","\xa4","\x11"),
	HX_HCSTRING("handleGamepadEvent","\x81","\x1b","\xb0","\x7b"),
	HX_HCSTRING("handleKeyEvent","\xc3","\x95","\x05","\x08"),
	HX_HCSTRING("handleMouseEvent","\x7d","\x65","\x58","\x63"),
	HX_HCSTRING("handleRenderEvent","\x1c","\xda","\x83","\x3f"),
	HX_HCSTRING("handleTextEvent","\x65","\xff","\x1d","\xdd"),
	HX_HCSTRING("handleTouchEvent","\xa3","\x55","\x1c","\x3f"),
	HX_HCSTRING("handleWindowEvent","\x42","\x43","\xa5","\x64"),
	HX_HCSTRING("setFrameRate","\xab","\xd1","\x74","\x5d"),
	HX_HCSTRING("updateTimer","\xfc","\x28","\xce","\xf5"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(NativeApplication_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(NativeApplication_obj::lime_application_create,"lime_application_create");
	HX_MARK_MEMBER_NAME(NativeApplication_obj::lime_application_event_manager_register,"lime_application_event_manager_register");
	HX_MARK_MEMBER_NAME(NativeApplication_obj::lime_application_exec,"lime_application_exec");
	HX_MARK_MEMBER_NAME(NativeApplication_obj::lime_application_init,"lime_application_init");
	HX_MARK_MEMBER_NAME(NativeApplication_obj::lime_application_set_frame_rate,"lime_application_set_frame_rate");
	HX_MARK_MEMBER_NAME(NativeApplication_obj::lime_application_update,"lime_application_update");
	HX_MARK_MEMBER_NAME(NativeApplication_obj::lime_application_quit,"lime_application_quit");
	HX_MARK_MEMBER_NAME(NativeApplication_obj::lime_gamepad_event_manager_register,"lime_gamepad_event_manager_register");
	HX_MARK_MEMBER_NAME(NativeApplication_obj::lime_key_event_manager_register,"lime_key_event_manager_register");
	HX_MARK_MEMBER_NAME(NativeApplication_obj::lime_mouse_event_manager_register,"lime_mouse_event_manager_register");
	HX_MARK_MEMBER_NAME(NativeApplication_obj::lime_render_event_manager_register,"lime_render_event_manager_register");
	HX_MARK_MEMBER_NAME(NativeApplication_obj::lime_text_event_manager_register,"lime_text_event_manager_register");
	HX_MARK_MEMBER_NAME(NativeApplication_obj::lime_touch_event_manager_register,"lime_touch_event_manager_register");
	HX_MARK_MEMBER_NAME(NativeApplication_obj::lime_window_event_manager_register,"lime_window_event_manager_register");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(NativeApplication_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(NativeApplication_obj::lime_application_create,"lime_application_create");
	HX_VISIT_MEMBER_NAME(NativeApplication_obj::lime_application_event_manager_register,"lime_application_event_manager_register");
	HX_VISIT_MEMBER_NAME(NativeApplication_obj::lime_application_exec,"lime_application_exec");
	HX_VISIT_MEMBER_NAME(NativeApplication_obj::lime_application_init,"lime_application_init");
	HX_VISIT_MEMBER_NAME(NativeApplication_obj::lime_application_set_frame_rate,"lime_application_set_frame_rate");
	HX_VISIT_MEMBER_NAME(NativeApplication_obj::lime_application_update,"lime_application_update");
	HX_VISIT_MEMBER_NAME(NativeApplication_obj::lime_application_quit,"lime_application_quit");
	HX_VISIT_MEMBER_NAME(NativeApplication_obj::lime_gamepad_event_manager_register,"lime_gamepad_event_manager_register");
	HX_VISIT_MEMBER_NAME(NativeApplication_obj::lime_key_event_manager_register,"lime_key_event_manager_register");
	HX_VISIT_MEMBER_NAME(NativeApplication_obj::lime_mouse_event_manager_register,"lime_mouse_event_manager_register");
	HX_VISIT_MEMBER_NAME(NativeApplication_obj::lime_render_event_manager_register,"lime_render_event_manager_register");
	HX_VISIT_MEMBER_NAME(NativeApplication_obj::lime_text_event_manager_register,"lime_text_event_manager_register");
	HX_VISIT_MEMBER_NAME(NativeApplication_obj::lime_touch_event_manager_register,"lime_touch_event_manager_register");
	HX_VISIT_MEMBER_NAME(NativeApplication_obj::lime_window_event_manager_register,"lime_window_event_manager_register");
};

#endif

hx::Class NativeApplication_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("lime_application_create","\x75","\x25","\x1a","\xbb"),
	HX_HCSTRING("lime_application_event_manager_register","\x33","\x3f","\x87","\x01"),
	HX_HCSTRING("lime_application_exec","\xca","\xf1","\x81","\xe2"),
	HX_HCSTRING("lime_application_init","\x49","\x39","\x1f","\xe5"),
	HX_HCSTRING("lime_application_set_frame_rate","\xa8","\x03","\xd7","\x1d"),
	HX_HCSTRING("lime_application_update","\x82","\x44","\x10","\xc6"),
	HX_HCSTRING("lime_application_quit","\x08","\x3e","\x6e","\xea"),
	HX_HCSTRING("lime_gamepad_event_manager_register","\x02","\xb7","\x1e","\x51"),
	HX_HCSTRING("lime_key_event_manager_register","\xc4","\x10","\x76","\x37"),
	HX_HCSTRING("lime_mouse_event_manager_register","\x7e","\x33","\x83","\xea"),
	HX_HCSTRING("lime_render_event_manager_register","\xd9","\x6b","\xed","\xee"),
	HX_HCSTRING("lime_text_event_manager_register","\xe2","\x83","\x68","\x5d"),
	HX_HCSTRING("lime_touch_event_manager_register","\x24","\x25","\xf4","\xf5"),
	HX_HCSTRING("lime_window_event_manager_register","\x7f","\x16","\x8e","\x0d"),
	::String(null()) };

void NativeApplication_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("lime._backend.native.NativeApplication","\xa2","\x84","\xe2","\x94");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &NativeApplication_obj::__GetStatic;
	__mClass->mSetStaticField = &NativeApplication_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< NativeApplication_obj >;
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

void NativeApplication_obj::__boot()
{
	lime_application_create= ::lime::_system::System_obj::load(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_application_create","\x75","\x25","\x1a","\xbb"),(int)1,null());
	lime_application_event_manager_register= ::lime::_system::System_obj::load(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_application_event_manager_register","\x33","\x3f","\x87","\x01"),(int)2,null());
	lime_application_exec= ::lime::_system::System_obj::load(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_application_exec","\xca","\xf1","\x81","\xe2"),(int)1,null());
	lime_application_init= ::lime::_system::System_obj::load(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_application_init","\x49","\x39","\x1f","\xe5"),(int)1,null());
	lime_application_set_frame_rate= ::lime::_system::System_obj::load(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_application_set_frame_rate","\xa8","\x03","\xd7","\x1d"),(int)2,null());
	lime_application_update= ::lime::_system::System_obj::load(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_application_update","\x82","\x44","\x10","\xc6"),(int)1,null());
	lime_application_quit= ::lime::_system::System_obj::load(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_application_quit","\x08","\x3e","\x6e","\xea"),(int)1,null());
	lime_gamepad_event_manager_register= ::lime::_system::System_obj::load(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_gamepad_event_manager_register","\x02","\xb7","\x1e","\x51"),(int)2,null());
	lime_key_event_manager_register= ::lime::_system::System_obj::load(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_key_event_manager_register","\xc4","\x10","\x76","\x37"),(int)2,null());
	lime_mouse_event_manager_register= ::lime::_system::System_obj::load(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_mouse_event_manager_register","\x7e","\x33","\x83","\xea"),(int)2,null());
	lime_render_event_manager_register= ::lime::_system::System_obj::load(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_render_event_manager_register","\xd9","\x6b","\xed","\xee"),(int)2,null());
	lime_text_event_manager_register= ::lime::_system::System_obj::load(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_text_event_manager_register","\xe2","\x83","\x68","\x5d"),(int)2,null());
	lime_touch_event_manager_register= ::lime::_system::System_obj::load(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_touch_event_manager_register","\x24","\x25","\xf4","\xf5"),(int)2,null());
	lime_window_event_manager_register= ::lime::_system::System_obj::load(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_window_event_manager_register","\x7f","\x16","\x8e","\x0d"),(int)2,null());
}

} // end namespace lime
} // end namespace _backend
} // end namespace native
