#include <hxcpp.h>

#ifndef INCLUDED_Reflect
#include <Reflect.h>
#endif
#ifndef INCLUDED_lime__backend_native_NativeApplication
#include <lime/_backend/native/NativeApplication.h>
#endif
#ifndef INCLUDED_lime__backend_native_NativeWindow
#include <lime/_backend/native/NativeWindow.h>
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
#ifndef INCLUDED_lime_graphics_Image
#include <lime/graphics/Image.h>
#endif
#ifndef INCLUDED_lime_graphics_ImageBuffer
#include <lime/graphics/ImageBuffer.h>
#endif
#ifndef INCLUDED_lime_math_Rectangle
#include <lime/math/Rectangle.h>
#endif
#ifndef INCLUDED_lime_math_Vector2
#include <lime/math/Vector2.h>
#endif
#ifndef INCLUDED_lime_system_Display
#include <lime/system/Display.h>
#endif
#ifndef INCLUDED_lime_system_System
#include <lime/system/System.h>
#endif
#ifndef INCLUDED_lime_ui_Window
#include <lime/ui/Window.h>
#endif
namespace lime{
namespace _backend{
namespace native{

Void NativeWindow_obj::__construct(::lime::ui::Window parent)
{
HX_STACK_FRAME("lime._backend.native.NativeWindow","new",0x5ec523d0,"lime._backend.native.NativeWindow.new","lime/_backend/native/NativeWindow.hx",26,0x34b7ce9f)
HX_STACK_THIS(this)
HX_STACK_ARG(parent,"parent")
{
	HX_STACK_LINE(26)
	this->parent = parent;
}
;
	return null();
}

//NativeWindow_obj::~NativeWindow_obj() { }

Dynamic NativeWindow_obj::__CreateEmpty() { return  new NativeWindow_obj; }
hx::ObjectPtr< NativeWindow_obj > NativeWindow_obj::__new(::lime::ui::Window parent)
{  hx::ObjectPtr< NativeWindow_obj > _result_ = new NativeWindow_obj();
	_result_->__construct(parent);
	return _result_;}

Dynamic NativeWindow_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< NativeWindow_obj > _result_ = new NativeWindow_obj();
	_result_->__construct(inArgs[0]);
	return _result_;}

Void NativeWindow_obj::close( ){
{
		HX_STACK_FRAME("lime._backend.native.NativeWindow","close",0x24642728,"lime._backend.native.NativeWindow.close","lime/_backend/native/NativeWindow.hx",31,0x34b7ce9f)
		HX_STACK_THIS(this)
		HX_STACK_LINE(33)
		Dynamic tmp = this->handle;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(33)
		bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(33)
		if ((tmp1)){
			HX_STACK_LINE(35)
			Dynamic tmp2 = this->handle;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(35)
			::lime::_backend::native::NativeWindow_obj::lime_window_close(tmp2);
			HX_STACK_LINE(36)
			this->handle = null();
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(NativeWindow_obj,close,(void))

Void NativeWindow_obj::create( ::lime::app::Application application){
{
		HX_STACK_FRAME("lime._backend.native.NativeWindow","create",0x20fbd98c,"lime._backend.native.NativeWindow.create","lime/_backend/native/NativeWindow.hx",43,0x34b7ce9f)
		HX_STACK_THIS(this)
		HX_STACK_ARG(application,"application")
		HX_STACK_LINE(45)
		::String title = HX_HCSTRING("Lime Application","\xc5","\xb5","\x9d","\xec");		HX_STACK_VAR(title,"title");
		HX_STACK_LINE(46)
		int flags = (int)0;		HX_STACK_VAR(flags,"flags");
		HX_STACK_LINE(48)
		::lime::ui::Window tmp = this->parent;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(48)
		Dynamic tmp1 = tmp->config;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(48)
		bool tmp2 = (tmp1 != null());		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(48)
		if ((tmp2)){
			HX_STACK_LINE(50)
			::lime::ui::Window tmp3 = this->parent;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(50)
			Dynamic tmp4 = tmp3->config;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(50)
			bool tmp5 = ::Reflect_obj::hasField(tmp4,HX_HCSTRING("antialiasing","\xf4","\x16","\xb3","\x48"));		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(50)
			if ((tmp5)){
				HX_STACK_LINE(52)
				::lime::ui::Window tmp6 = this->parent;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(52)
				Dynamic tmp7 = tmp6->config->__Field(HX_HCSTRING("antialiasing","\xf4","\x16","\xb3","\x48"), hx::paccDynamic );		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(52)
				bool tmp8 = (tmp7 >= (int)4);		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(52)
				if ((tmp8)){
					HX_STACK_LINE(54)
					hx::OrEq(flags,(int)96);
				}
				else{
					HX_STACK_LINE(56)
					::lime::ui::Window tmp9 = this->parent;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(56)
					Dynamic tmp10 = tmp9->config->__Field(HX_HCSTRING("antialiasing","\xf4","\x16","\xb3","\x48"), hx::paccDynamic );		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(56)
					bool tmp11 = (tmp10 >= (int)2);		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(56)
					if ((tmp11)){
						HX_STACK_LINE(58)
						hx::OrEq(flags,(int)32);
					}
				}
			}
			HX_STACK_LINE(64)
			::lime::ui::Window tmp6 = this->parent;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(64)
			Dynamic tmp7 = tmp6->config;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(64)
			Dynamic tmp8 = tmp7;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(64)
			bool tmp9 = ::Reflect_obj::hasField(tmp8,HX_HCSTRING("borderless","\x45","\x46","\x71","\x17"));		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(64)
			bool tmp10;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(64)
			if ((tmp9)){
				HX_STACK_LINE(64)
				::lime::ui::Window tmp11 = this->parent;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(64)
				::lime::ui::Window tmp12 = tmp11;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(64)
				tmp10 = tmp12->config->__Field(HX_HCSTRING("borderless","\x45","\x46","\x71","\x17"), hx::paccDynamic );
			}
			else{
				HX_STACK_LINE(64)
				tmp10 = false;
			}
			HX_STACK_LINE(64)
			if ((tmp10)){
				HX_STACK_LINE(64)
				hx::OrEq(flags,(int)2);
			}
			HX_STACK_LINE(65)
			::lime::ui::Window tmp11 = this->parent;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(65)
			Dynamic tmp12 = tmp11->config;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(65)
			Dynamic tmp13 = tmp12;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(65)
			bool tmp14 = ::Reflect_obj::hasField(tmp13,HX_HCSTRING("depthBuffer","\x63","\x46","\x9e","\x52"));		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(65)
			bool tmp15;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(65)
			if ((tmp14)){
				HX_STACK_LINE(65)
				::lime::ui::Window tmp16 = this->parent;		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(65)
				::lime::ui::Window tmp17 = tmp16;		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(65)
				tmp15 = tmp17->config->__Field(HX_HCSTRING("depthBuffer","\x63","\x46","\x9e","\x52"), hx::paccDynamic );
			}
			else{
				HX_STACK_LINE(65)
				tmp15 = false;
			}
			HX_STACK_LINE(65)
			if ((tmp15)){
				HX_STACK_LINE(65)
				hx::OrEq(flags,(int)512);
			}
			HX_STACK_LINE(66)
			::lime::ui::Window tmp16 = this->parent;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(66)
			Dynamic tmp17 = tmp16->config;		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(66)
			Dynamic tmp18 = tmp17;		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(66)
			bool tmp19 = ::Reflect_obj::hasField(tmp18,HX_HCSTRING("fullscreen","\x3b","\x3a","\xb4","\xf9"));		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(66)
			bool tmp20;		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(66)
			if ((tmp19)){
				HX_STACK_LINE(66)
				::lime::ui::Window tmp21 = this->parent;		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(66)
				::lime::ui::Window tmp22 = tmp21;		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(66)
				tmp20 = tmp22->config->__Field(HX_HCSTRING("fullscreen","\x3b","\x3a","\xb4","\xf9"), hx::paccDynamic );
			}
			else{
				HX_STACK_LINE(66)
				tmp20 = false;
			}
			HX_STACK_LINE(66)
			if ((tmp20)){
				HX_STACK_LINE(66)
				hx::OrEq(flags,(int)1);
			}
			HX_STACK_LINE(67)
			::lime::ui::Window tmp21 = this->parent;		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(67)
			Dynamic tmp22 = tmp21->config;		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(67)
			Dynamic tmp23 = tmp22;		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(67)
			bool tmp24 = ::Reflect_obj::hasField(tmp23,HX_HCSTRING("hardware","\xa8","\xe2","\xd3","\x75"));		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(67)
			bool tmp25;		HX_STACK_VAR(tmp25,"tmp25");
			HX_STACK_LINE(67)
			if ((tmp24)){
				HX_STACK_LINE(67)
				::lime::ui::Window tmp26 = this->parent;		HX_STACK_VAR(tmp26,"tmp26");
				HX_STACK_LINE(67)
				::lime::ui::Window tmp27 = tmp26;		HX_STACK_VAR(tmp27,"tmp27");
				HX_STACK_LINE(67)
				tmp25 = tmp27->config->__Field(HX_HCSTRING("hardware","\xa8","\xe2","\xd3","\x75"), hx::paccDynamic );
			}
			else{
				HX_STACK_LINE(67)
				tmp25 = false;
			}
			HX_STACK_LINE(67)
			if ((tmp25)){
				HX_STACK_LINE(67)
				hx::OrEq(flags,(int)8);
			}
			HX_STACK_LINE(68)
			::lime::ui::Window tmp26 = this->parent;		HX_STACK_VAR(tmp26,"tmp26");
			HX_STACK_LINE(68)
			Dynamic tmp27 = tmp26->config;		HX_STACK_VAR(tmp27,"tmp27");
			HX_STACK_LINE(68)
			Dynamic tmp28 = tmp27;		HX_STACK_VAR(tmp28,"tmp28");
			HX_STACK_LINE(68)
			bool tmp29 = ::Reflect_obj::hasField(tmp28,HX_HCSTRING("resizable","\x6b","\x37","\x50","\xa9"));		HX_STACK_VAR(tmp29,"tmp29");
			HX_STACK_LINE(68)
			bool tmp30;		HX_STACK_VAR(tmp30,"tmp30");
			HX_STACK_LINE(68)
			if ((tmp29)){
				HX_STACK_LINE(68)
				::lime::ui::Window tmp31 = this->parent;		HX_STACK_VAR(tmp31,"tmp31");
				HX_STACK_LINE(68)
				::lime::ui::Window tmp32 = tmp31;		HX_STACK_VAR(tmp32,"tmp32");
				HX_STACK_LINE(68)
				tmp30 = tmp32->config->__Field(HX_HCSTRING("resizable","\x6b","\x37","\x50","\xa9"), hx::paccDynamic );
			}
			else{
				HX_STACK_LINE(68)
				tmp30 = false;
			}
			HX_STACK_LINE(68)
			if ((tmp30)){
				HX_STACK_LINE(68)
				hx::OrEq(flags,(int)4);
			}
			HX_STACK_LINE(69)
			::lime::ui::Window tmp31 = this->parent;		HX_STACK_VAR(tmp31,"tmp31");
			HX_STACK_LINE(69)
			Dynamic tmp32 = tmp31->config;		HX_STACK_VAR(tmp32,"tmp32");
			HX_STACK_LINE(69)
			Dynamic tmp33 = tmp32;		HX_STACK_VAR(tmp33,"tmp33");
			HX_STACK_LINE(69)
			bool tmp34 = ::Reflect_obj::hasField(tmp33,HX_HCSTRING("stencilBuffer","\x1c","\x94","\x39","\x31"));		HX_STACK_VAR(tmp34,"tmp34");
			HX_STACK_LINE(69)
			bool tmp35;		HX_STACK_VAR(tmp35,"tmp35");
			HX_STACK_LINE(69)
			if ((tmp34)){
				HX_STACK_LINE(69)
				::lime::ui::Window tmp36 = this->parent;		HX_STACK_VAR(tmp36,"tmp36");
				HX_STACK_LINE(69)
				::lime::ui::Window tmp37 = tmp36;		HX_STACK_VAR(tmp37,"tmp37");
				HX_STACK_LINE(69)
				tmp35 = tmp37->config->__Field(HX_HCSTRING("stencilBuffer","\x1c","\x94","\x39","\x31"), hx::paccDynamic );
			}
			else{
				HX_STACK_LINE(69)
				tmp35 = false;
			}
			HX_STACK_LINE(69)
			if ((tmp35)){
				HX_STACK_LINE(69)
				hx::OrEq(flags,(int)1024);
			}
			HX_STACK_LINE(70)
			::lime::ui::Window tmp36 = this->parent;		HX_STACK_VAR(tmp36,"tmp36");
			HX_STACK_LINE(70)
			Dynamic tmp37 = tmp36->config;		HX_STACK_VAR(tmp37,"tmp37");
			HX_STACK_LINE(70)
			Dynamic tmp38 = tmp37;		HX_STACK_VAR(tmp38,"tmp38");
			HX_STACK_LINE(70)
			bool tmp39 = ::Reflect_obj::hasField(tmp38,HX_HCSTRING("vsync","\xd1","\x2d","\xa8","\x3d"));		HX_STACK_VAR(tmp39,"tmp39");
			HX_STACK_LINE(70)
			bool tmp40;		HX_STACK_VAR(tmp40,"tmp40");
			HX_STACK_LINE(70)
			if ((tmp39)){
				HX_STACK_LINE(70)
				::lime::ui::Window tmp41 = this->parent;		HX_STACK_VAR(tmp41,"tmp41");
				HX_STACK_LINE(70)
				::lime::ui::Window tmp42 = tmp41;		HX_STACK_VAR(tmp42,"tmp42");
				HX_STACK_LINE(70)
				tmp40 = tmp42->config->__Field(HX_HCSTRING("vsync","\xd1","\x2d","\xa8","\x3d"), hx::paccDynamic );
			}
			else{
				HX_STACK_LINE(70)
				tmp40 = false;
			}
			HX_STACK_LINE(70)
			if ((tmp40)){
				HX_STACK_LINE(70)
				hx::OrEq(flags,(int)16);
			}
			HX_STACK_LINE(72)
			::lime::ui::Window tmp41 = this->parent;		HX_STACK_VAR(tmp41,"tmp41");
			HX_STACK_LINE(72)
			Dynamic tmp42 = tmp41->config;		HX_STACK_VAR(tmp42,"tmp42");
			HX_STACK_LINE(72)
			bool tmp43 = ::Reflect_obj::hasField(tmp42,HX_HCSTRING("title","\x98","\x15","\x3b","\x10"));		HX_STACK_VAR(tmp43,"tmp43");
			HX_STACK_LINE(72)
			if ((tmp43)){
				HX_STACK_LINE(74)
				::lime::ui::Window tmp44 = this->parent;		HX_STACK_VAR(tmp44,"tmp44");
				HX_STACK_LINE(74)
				::String tmp45 = tmp44->config->__Field(HX_HCSTRING("title","\x98","\x15","\x3b","\x10"), hx::paccDynamic );		HX_STACK_VAR(tmp45,"tmp45");
				HX_STACK_LINE(74)
				title = tmp45;
			}
		}
		HX_STACK_LINE(80)
		Dynamic tmp3 = application->backend->handle;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(80)
		::lime::ui::Window tmp4 = this->parent;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(80)
		int tmp5 = tmp4->__width;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(80)
		::lime::ui::Window tmp6 = this->parent;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(80)
		int tmp7 = tmp6->__height;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(80)
		int tmp8 = flags;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(80)
		::String tmp9 = title;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(80)
		Dynamic tmp10 = ::lime::_backend::native::NativeWindow_obj::lime_window_create(tmp3,tmp5,tmp7,tmp8,tmp9);		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(80)
		this->handle = tmp10;
		HX_STACK_LINE(82)
		Dynamic tmp11 = this->handle;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(82)
		bool tmp12 = (tmp11 != null());		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(82)
		if ((tmp12)){
			HX_STACK_LINE(84)
			Dynamic tmp13 = this->handle;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(84)
			int tmp14 = ::lime::_backend::native::NativeWindow_obj::lime_window_get_width(tmp13);		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(84)
			::lime::ui::Window tmp15 = this->parent;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(84)
			tmp15->__width = tmp14;
			HX_STACK_LINE(85)
			Dynamic tmp16 = this->handle;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(85)
			int tmp17 = ::lime::_backend::native::NativeWindow_obj::lime_window_get_height(tmp16);		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(85)
			::lime::ui::Window tmp18 = this->parent;		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(85)
			tmp18->__height = tmp17;
			HX_STACK_LINE(86)
			Dynamic tmp19 = this->handle;		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(86)
			int tmp20 = ::lime::_backend::native::NativeWindow_obj::lime_window_get_x(tmp19);		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(86)
			::lime::ui::Window tmp21 = this->parent;		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(86)
			tmp21->__x = tmp20;
			HX_STACK_LINE(87)
			Dynamic tmp22 = this->handle;		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(87)
			int tmp23 = ::lime::_backend::native::NativeWindow_obj::lime_window_get_y(tmp22);		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(87)
			::lime::ui::Window tmp24 = this->parent;		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(87)
			tmp24->__y = tmp23;
			HX_STACK_LINE(88)
			Dynamic tmp25 = this->handle;		HX_STACK_VAR(tmp25,"tmp25");
			HX_STACK_LINE(88)
			int tmp26 = ::lime::_backend::native::NativeWindow_obj::lime_window_get_id(tmp25);		HX_STACK_VAR(tmp26,"tmp26");
			HX_STACK_LINE(88)
			::lime::ui::Window tmp27 = this->parent;		HX_STACK_VAR(tmp27,"tmp27");
			HX_STACK_LINE(88)
			tmp27->id = tmp26;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(NativeWindow_obj,create,(void))

::lime::_system::Display NativeWindow_obj::getDisplay( ){
	HX_STACK_FRAME("lime._backend.native.NativeWindow","getDisplay",0x2d6caadc,"lime._backend.native.NativeWindow.getDisplay","lime/_backend/native/NativeWindow.hx",95,0x34b7ce9f)
	HX_STACK_THIS(this)
	HX_STACK_LINE(97)
	::lime::ui::Window tmp = this->parent;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(97)
	int tmp1 = tmp->__x;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(97)
	::lime::ui::Window tmp2 = this->parent;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(97)
	int tmp3 = tmp2->__width;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(97)
	Float tmp4 = (Float(tmp3) / Float((int)2));		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(97)
	Float tmp5 = (tmp1 + tmp4);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(97)
	::lime::ui::Window tmp6 = this->parent;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(97)
	int tmp7 = tmp6->__y;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(97)
	::lime::ui::Window tmp8 = this->parent;		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(97)
	int tmp9 = tmp8->__height;		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(97)
	Float tmp10 = (Float(tmp9) / Float((int)2));		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(97)
	Float tmp11 = (tmp7 + tmp10);		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(97)
	::lime::math::Vector2 tmp12 = ::lime::math::Vector2_obj::__new(tmp5,tmp11);		HX_STACK_VAR(tmp12,"tmp12");
	HX_STACK_LINE(97)
	::lime::math::Vector2 center = tmp12;		HX_STACK_VAR(center,"center");
	HX_STACK_LINE(98)
	int tmp13 = ::lime::_system::System_obj::get_numDisplays();		HX_STACK_VAR(tmp13,"tmp13");
	HX_STACK_LINE(98)
	int numDisplays = tmp13;		HX_STACK_VAR(numDisplays,"numDisplays");
	HX_STACK_LINE(99)
	::lime::_system::Display display;		HX_STACK_VAR(display,"display");
	HX_STACK_LINE(101)
	{
		HX_STACK_LINE(101)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(101)
		while((true)){
			HX_STACK_LINE(101)
			bool tmp14 = (_g < numDisplays);		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(101)
			bool tmp15 = !(tmp14);		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(101)
			if ((tmp15)){
				HX_STACK_LINE(101)
				break;
			}
			HX_STACK_LINE(101)
			int tmp16 = (_g)++;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(101)
			int i = tmp16;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(103)
			int tmp17 = i;		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(103)
			::lime::_system::Display tmp18 = ::lime::_system::System_obj::getDisplay(tmp17);		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(103)
			display = tmp18;
			HX_STACK_LINE(105)
			::lime::math::Vector2 tmp19 = center;		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(105)
			bool tmp20 = display->__Field(HX_HCSTRING("bounds","\x75","\x86","\x1d","\x66"), hx::paccDynamic )->__Field(HX_HCSTRING("containsPoint","\xb1","\xb9","\xeb","\x92"), hx::paccDynamic )(tmp19);		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(105)
			if ((tmp20)){
				HX_STACK_LINE(107)
				::lime::_system::Display tmp21 = display;		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(107)
				return tmp21;
			}
		}
	}
	HX_STACK_LINE(113)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC0(NativeWindow_obj,getDisplay,return )

bool NativeWindow_obj::getEnableTextEvents( ){
	HX_STACK_FRAME("lime._backend.native.NativeWindow","getEnableTextEvents",0x8c63802f,"lime._backend.native.NativeWindow.getEnableTextEvents","lime/_backend/native/NativeWindow.hx",118,0x34b7ce9f)
	HX_STACK_THIS(this)
	HX_STACK_LINE(120)
	Dynamic tmp = this->handle;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(120)
	bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(120)
	if ((tmp1)){
		HX_STACK_LINE(122)
		Dynamic tmp2 = this->handle;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(122)
		bool tmp3 = ::lime::_backend::native::NativeWindow_obj::lime_window_get_enable_text_events(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(122)
		return tmp3;
	}
	HX_STACK_LINE(126)
	return false;
}


HX_DEFINE_DYNAMIC_FUNC0(NativeWindow_obj,getEnableTextEvents,return )

Void NativeWindow_obj::move( int x,int y){
{
		HX_STACK_FRAME("lime._backend.native.NativeWindow","move",0x8d1891a1,"lime._backend.native.NativeWindow.move","lime/_backend/native/NativeWindow.hx",131,0x34b7ce9f)
		HX_STACK_THIS(this)
		HX_STACK_ARG(x,"x")
		HX_STACK_ARG(y,"y")
		HX_STACK_LINE(133)
		Dynamic tmp = this->handle;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(133)
		bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(133)
		if ((tmp1)){
			HX_STACK_LINE(135)
			Dynamic tmp2 = this->handle;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(135)
			int tmp3 = x;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(135)
			int tmp4 = y;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(135)
			::lime::_backend::native::NativeWindow_obj::lime_window_move(tmp2,tmp3,tmp4);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(NativeWindow_obj,move,(void))

Void NativeWindow_obj::resize( int width,int height){
{
		HX_STACK_FRAME("lime._backend.native.NativeWindow","resize",0xad67cc84,"lime._backend.native.NativeWindow.resize","lime/_backend/native/NativeWindow.hx",142,0x34b7ce9f)
		HX_STACK_THIS(this)
		HX_STACK_ARG(width,"width")
		HX_STACK_ARG(height,"height")
		HX_STACK_LINE(144)
		Dynamic tmp = this->handle;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(144)
		bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(144)
		if ((tmp1)){
			HX_STACK_LINE(146)
			Dynamic tmp2 = this->handle;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(146)
			int tmp3 = width;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(146)
			int tmp4 = height;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(146)
			::lime::_backend::native::NativeWindow_obj::lime_window_resize(tmp2,tmp3,tmp4);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(NativeWindow_obj,resize,(void))

bool NativeWindow_obj::setEnableTextEvents( bool value){
	HX_STACK_FRAME("lime._backend.native.NativeWindow","setEnableTextEvents",0xc900733b,"lime._backend.native.NativeWindow.setEnableTextEvents","lime/_backend/native/NativeWindow.hx",153,0x34b7ce9f)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(155)
	Dynamic tmp = this->handle;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(155)
	bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(155)
	if ((tmp1)){
		HX_STACK_LINE(157)
		Dynamic tmp2 = this->handle;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(157)
		bool tmp3 = value;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(157)
		bool tmp4 = ::lime::_backend::native::NativeWindow_obj::lime_window_set_enable_text_events(tmp2,tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(157)
		return tmp4;
	}
	HX_STACK_LINE(161)
	bool tmp2 = value;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(161)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC1(NativeWindow_obj,setEnableTextEvents,return )

bool NativeWindow_obj::setFullscreen( bool value){
	HX_STACK_FRAME("lime._backend.native.NativeWindow","setFullscreen",0x4ef277ed,"lime._backend.native.NativeWindow.setFullscreen","lime/_backend/native/NativeWindow.hx",166,0x34b7ce9f)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(168)
	Dynamic tmp = this->handle;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(168)
	bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(168)
	if ((tmp1)){
		HX_STACK_LINE(170)
		Dynamic tmp2 = this->handle;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(170)
		bool tmp3 = value;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(170)
		bool tmp4 = ::lime::_backend::native::NativeWindow_obj::lime_window_set_fullscreen(tmp2,tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(170)
		value = tmp4;
		HX_STACK_LINE(172)
		bool tmp5 = value;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(172)
		if ((tmp5)){
			HX_STACK_LINE(174)
			::lime::ui::Window tmp6 = this->parent;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(52)
			cpp::ArrayBase listeners = tmp6->onFullscreen->listeners;		HX_STACK_VAR(listeners,"listeners");
			HX_STACK_LINE(174)
			::lime::ui::Window tmp7 = this->parent;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(53)
			Array< bool > repeat = tmp7->onFullscreen->repeat;		HX_STACK_VAR(repeat,"repeat");
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
					HX_STACK_LINE(174)
					::lime::ui::Window tmp13 = this->parent;		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(62)
					Dynamic tmp14 = listeners->__GetItem(i);		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(62)
					tmp13->onFullscreen->remove(tmp14);
				}
				else{
					HX_STACK_LINE(66)
					(i)++;
				}
			}
		}
	}
	HX_STACK_LINE(180)
	bool tmp2 = value;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(180)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC1(NativeWindow_obj,setFullscreen,return )

Void NativeWindow_obj::setIcon( ::lime::graphics::Image image){
{
		HX_STACK_FRAME("lime._backend.native.NativeWindow","setIcon",0xb52ef3ab,"lime._backend.native.NativeWindow.setIcon","lime/_backend/native/NativeWindow.hx",185,0x34b7ce9f)
		HX_STACK_THIS(this)
		HX_STACK_ARG(image,"image")
		HX_STACK_LINE(187)
		Dynamic tmp = this->handle;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(187)
		bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(187)
		if ((tmp1)){
			HX_STACK_LINE(189)
			Dynamic tmp2 = this->handle;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(189)
			::lime::graphics::ImageBuffer tmp3 = image->buffer;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(189)
			::lime::_backend::native::NativeWindow_obj::lime_window_set_icon(tmp2,tmp3);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(NativeWindow_obj,setIcon,(void))

bool NativeWindow_obj::setMinimized( bool value){
	HX_STACK_FRAME("lime._backend.native.NativeWindow","setMinimized",0x5dce7a14,"lime._backend.native.NativeWindow.setMinimized","lime/_backend/native/NativeWindow.hx",196,0x34b7ce9f)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(198)
	Dynamic tmp = this->handle;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(198)
	bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(198)
	if ((tmp1)){
		HX_STACK_LINE(200)
		Dynamic tmp2 = this->handle;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(200)
		bool tmp3 = value;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(200)
		bool tmp4 = ::lime::_backend::native::NativeWindow_obj::lime_window_set_minimized(tmp2,tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(200)
		return tmp4;
	}
	HX_STACK_LINE(204)
	bool tmp2 = value;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(204)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC1(NativeWindow_obj,setMinimized,return )

::String NativeWindow_obj::setTitle( ::String value){
	HX_STACK_FRAME("lime._backend.native.NativeWindow","setTitle",0x2d49b526,"lime._backend.native.NativeWindow.setTitle","lime/_backend/native/NativeWindow.hx",209,0x34b7ce9f)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(211)
	Dynamic tmp = this->handle;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(211)
	bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(211)
	if ((tmp1)){
		HX_STACK_LINE(213)
		Dynamic tmp2 = this->handle;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(213)
		::String tmp3 = value;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(213)
		::String tmp4 = ::lime::_backend::native::NativeWindow_obj::lime_window_set_title(tmp2,tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(213)
		return tmp4;
	}
	HX_STACK_LINE(217)
	::String tmp2 = value;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(217)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC1(NativeWindow_obj,setTitle,return )

Dynamic NativeWindow_obj::lime_window_close;

Dynamic NativeWindow_obj::lime_window_create;

Dynamic NativeWindow_obj::lime_window_get_enable_text_events;

Dynamic NativeWindow_obj::lime_window_get_height;

Dynamic NativeWindow_obj::lime_window_get_id;

Dynamic NativeWindow_obj::lime_window_get_width;

Dynamic NativeWindow_obj::lime_window_get_x;

Dynamic NativeWindow_obj::lime_window_get_y;

Dynamic NativeWindow_obj::lime_window_move;

Dynamic NativeWindow_obj::lime_window_resize;

Dynamic NativeWindow_obj::lime_window_set_enable_text_events;

Dynamic NativeWindow_obj::lime_window_set_fullscreen;

Dynamic NativeWindow_obj::lime_window_set_icon;

Dynamic NativeWindow_obj::lime_window_set_minimized;

Dynamic NativeWindow_obj::lime_window_set_title;


NativeWindow_obj::NativeWindow_obj()
{
}

void NativeWindow_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(NativeWindow);
	HX_MARK_MEMBER_NAME(handle,"handle");
	HX_MARK_MEMBER_NAME(parent,"parent");
	HX_MARK_END_CLASS();
}

void NativeWindow_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(handle,"handle");
	HX_VISIT_MEMBER_NAME(parent,"parent");
}

Dynamic NativeWindow_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"move") ) { return move_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"close") ) { return close_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"handle") ) { return handle; }
		if (HX_FIELD_EQ(inName,"parent") ) { return parent; }
		if (HX_FIELD_EQ(inName,"create") ) { return create_dyn(); }
		if (HX_FIELD_EQ(inName,"resize") ) { return resize_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"setIcon") ) { return setIcon_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"setTitle") ) { return setTitle_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"getDisplay") ) { return getDisplay_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"setMinimized") ) { return setMinimized_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"setFullscreen") ) { return setFullscreen_dyn(); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"getEnableTextEvents") ) { return getEnableTextEvents_dyn(); }
		if (HX_FIELD_EQ(inName,"setEnableTextEvents") ) { return setEnableTextEvents_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

bool NativeWindow_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 16:
		if (HX_FIELD_EQ(inName,"lime_window_move") ) { outValue = lime_window_move; return true;  }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"lime_window_close") ) { outValue = lime_window_close; return true;  }
		if (HX_FIELD_EQ(inName,"lime_window_get_x") ) { outValue = lime_window_get_x; return true;  }
		if (HX_FIELD_EQ(inName,"lime_window_get_y") ) { outValue = lime_window_get_y; return true;  }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"lime_window_create") ) { outValue = lime_window_create; return true;  }
		if (HX_FIELD_EQ(inName,"lime_window_get_id") ) { outValue = lime_window_get_id; return true;  }
		if (HX_FIELD_EQ(inName,"lime_window_resize") ) { outValue = lime_window_resize; return true;  }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"lime_window_set_icon") ) { outValue = lime_window_set_icon; return true;  }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"lime_window_get_width") ) { outValue = lime_window_get_width; return true;  }
		if (HX_FIELD_EQ(inName,"lime_window_set_title") ) { outValue = lime_window_set_title; return true;  }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"lime_window_get_height") ) { outValue = lime_window_get_height; return true;  }
		break;
	case 25:
		if (HX_FIELD_EQ(inName,"lime_window_set_minimized") ) { outValue = lime_window_set_minimized; return true;  }
		break;
	case 26:
		if (HX_FIELD_EQ(inName,"lime_window_set_fullscreen") ) { outValue = lime_window_set_fullscreen; return true;  }
		break;
	case 34:
		if (HX_FIELD_EQ(inName,"lime_window_get_enable_text_events") ) { outValue = lime_window_get_enable_text_events; return true;  }
		if (HX_FIELD_EQ(inName,"lime_window_set_enable_text_events") ) { outValue = lime_window_set_enable_text_events; return true;  }
	}
	return false;
}

Dynamic NativeWindow_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"handle") ) { handle=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"parent") ) { parent=inValue.Cast< ::lime::ui::Window >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool NativeWindow_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 16:
		if (HX_FIELD_EQ(inName,"lime_window_move") ) { lime_window_move=ioValue.Cast< Dynamic >(); return true; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"lime_window_close") ) { lime_window_close=ioValue.Cast< Dynamic >(); return true; }
		if (HX_FIELD_EQ(inName,"lime_window_get_x") ) { lime_window_get_x=ioValue.Cast< Dynamic >(); return true; }
		if (HX_FIELD_EQ(inName,"lime_window_get_y") ) { lime_window_get_y=ioValue.Cast< Dynamic >(); return true; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"lime_window_create") ) { lime_window_create=ioValue.Cast< Dynamic >(); return true; }
		if (HX_FIELD_EQ(inName,"lime_window_get_id") ) { lime_window_get_id=ioValue.Cast< Dynamic >(); return true; }
		if (HX_FIELD_EQ(inName,"lime_window_resize") ) { lime_window_resize=ioValue.Cast< Dynamic >(); return true; }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"lime_window_set_icon") ) { lime_window_set_icon=ioValue.Cast< Dynamic >(); return true; }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"lime_window_get_width") ) { lime_window_get_width=ioValue.Cast< Dynamic >(); return true; }
		if (HX_FIELD_EQ(inName,"lime_window_set_title") ) { lime_window_set_title=ioValue.Cast< Dynamic >(); return true; }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"lime_window_get_height") ) { lime_window_get_height=ioValue.Cast< Dynamic >(); return true; }
		break;
	case 25:
		if (HX_FIELD_EQ(inName,"lime_window_set_minimized") ) { lime_window_set_minimized=ioValue.Cast< Dynamic >(); return true; }
		break;
	case 26:
		if (HX_FIELD_EQ(inName,"lime_window_set_fullscreen") ) { lime_window_set_fullscreen=ioValue.Cast< Dynamic >(); return true; }
		break;
	case 34:
		if (HX_FIELD_EQ(inName,"lime_window_get_enable_text_events") ) { lime_window_get_enable_text_events=ioValue.Cast< Dynamic >(); return true; }
		if (HX_FIELD_EQ(inName,"lime_window_set_enable_text_events") ) { lime_window_set_enable_text_events=ioValue.Cast< Dynamic >(); return true; }
	}
	return false;
}

void NativeWindow_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("handle","\xa8","\x83","\xfd","\xb7"));
	outFields->push(HX_HCSTRING("parent","\x2a","\x05","\x7e","\xed"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(NativeWindow_obj,handle),HX_HCSTRING("handle","\xa8","\x83","\xfd","\xb7")},
	{hx::fsObject /*::lime::ui::Window*/ ,(int)offsetof(NativeWindow_obj,parent),HX_HCSTRING("parent","\x2a","\x05","\x7e","\xed")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo sStaticStorageInfo[] = {
	{hx::fsObject /*Dynamic*/ ,(void *) &NativeWindow_obj::lime_window_close,HX_HCSTRING("lime_window_close","\x93","\x79","\xb7","\xe8")},
	{hx::fsObject /*Dynamic*/ ,(void *) &NativeWindow_obj::lime_window_create,HX_HCSTRING("lime_window_create","\xc1","\xa4","\x90","\x25")},
	{hx::fsObject /*Dynamic*/ ,(void *) &NativeWindow_obj::lime_window_get_enable_text_events,HX_HCSTRING("lime_window_get_enable_text_events","\xbd","\x19","\xaf","\xda")},
	{hx::fsObject /*Dynamic*/ ,(void *) &NativeWindow_obj::lime_window_get_height,HX_HCSTRING("lime_window_get_height","\xf5","\x7b","\x27","\xd0")},
	{hx::fsObject /*Dynamic*/ ,(void *) &NativeWindow_obj::lime_window_get_id,HX_HCSTRING("lime_window_get_id","\xe9","\x30","\xb1","\x4c")},
	{hx::fsObject /*Dynamic*/ ,(void *) &NativeWindow_obj::lime_window_get_width,HX_HCSTRING("lime_window_get_width","\xb8","\xfd","\x65","\x5f")},
	{hx::fsObject /*Dynamic*/ ,(void *) &NativeWindow_obj::lime_window_get_x,HX_HCSTRING("lime_window_get_x","\x2a","\x07","\xb5","\x31")},
	{hx::fsObject /*Dynamic*/ ,(void *) &NativeWindow_obj::lime_window_get_y,HX_HCSTRING("lime_window_get_y","\x2b","\x07","\xb5","\x31")},
	{hx::fsObject /*Dynamic*/ ,(void *) &NativeWindow_obj::lime_window_move,HX_HCSTRING("lime_window_move","\x96","\xb5","\x64","\x4b")},
	{hx::fsObject /*Dynamic*/ ,(void *) &NativeWindow_obj::lime_window_resize,HX_HCSTRING("lime_window_resize","\xb9","\x97","\xfc","\xb1")},
	{hx::fsObject /*Dynamic*/ ,(void *) &NativeWindow_obj::lime_window_set_enable_text_events,HX_HCSTRING("lime_window_set_enable_text_events","\x31","\x96","\x5a","\x0e")},
	{hx::fsObject /*Dynamic*/ ,(void *) &NativeWindow_obj::lime_window_set_fullscreen,HX_HCSTRING("lime_window_set_fullscreen","\xbd","\xb5","\x15","\xfc")},
	{hx::fsObject /*Dynamic*/ ,(void *) &NativeWindow_obj::lime_window_set_icon,HX_HCSTRING("lime_window_set_icon","\x7b","\xf5","\x6a","\x6e")},
	{hx::fsObject /*Dynamic*/ ,(void *) &NativeWindow_obj::lime_window_set_minimized,HX_HCSTRING("lime_window_set_minimized","\x44","\xe6","\xa9","\x30")},
	{hx::fsObject /*Dynamic*/ ,(void *) &NativeWindow_obj::lime_window_set_title,HX_HCSTRING("lime_window_set_title","\x56","\x49","\x8f","\x88")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("handle","\xa8","\x83","\xfd","\xb7"),
	HX_HCSTRING("parent","\x2a","\x05","\x7e","\xed"),
	HX_HCSTRING("close","\xb8","\x17","\x63","\x48"),
	HX_HCSTRING("create","\xfc","\x66","\x0f","\x7c"),
	HX_HCSTRING("getDisplay","\x4c","\xb0","\xab","\x0a"),
	HX_HCSTRING("getEnableTextEvents","\xbf","\x4c","\x30","\x24"),
	HX_HCSTRING("move","\x11","\xe3","\x60","\x48"),
	HX_HCSTRING("resize","\xf4","\x59","\x7b","\x08"),
	HX_HCSTRING("setEnableTextEvents","\xcb","\x3f","\xcd","\x60"),
	HX_HCSTRING("setFullscreen","\x7d","\x78","\x2c","\x9b"),
	HX_HCSTRING("setIcon","\x3b","\x28","\x37","\x0b"),
	HX_HCSTRING("setMinimized","\x84","\xbb","\xed","\x4c"),
	HX_HCSTRING("setTitle","\x96","\x7e","\x6f","\x1e"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(NativeWindow_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(NativeWindow_obj::lime_window_close,"lime_window_close");
	HX_MARK_MEMBER_NAME(NativeWindow_obj::lime_window_create,"lime_window_create");
	HX_MARK_MEMBER_NAME(NativeWindow_obj::lime_window_get_enable_text_events,"lime_window_get_enable_text_events");
	HX_MARK_MEMBER_NAME(NativeWindow_obj::lime_window_get_height,"lime_window_get_height");
	HX_MARK_MEMBER_NAME(NativeWindow_obj::lime_window_get_id,"lime_window_get_id");
	HX_MARK_MEMBER_NAME(NativeWindow_obj::lime_window_get_width,"lime_window_get_width");
	HX_MARK_MEMBER_NAME(NativeWindow_obj::lime_window_get_x,"lime_window_get_x");
	HX_MARK_MEMBER_NAME(NativeWindow_obj::lime_window_get_y,"lime_window_get_y");
	HX_MARK_MEMBER_NAME(NativeWindow_obj::lime_window_move,"lime_window_move");
	HX_MARK_MEMBER_NAME(NativeWindow_obj::lime_window_resize,"lime_window_resize");
	HX_MARK_MEMBER_NAME(NativeWindow_obj::lime_window_set_enable_text_events,"lime_window_set_enable_text_events");
	HX_MARK_MEMBER_NAME(NativeWindow_obj::lime_window_set_fullscreen,"lime_window_set_fullscreen");
	HX_MARK_MEMBER_NAME(NativeWindow_obj::lime_window_set_icon,"lime_window_set_icon");
	HX_MARK_MEMBER_NAME(NativeWindow_obj::lime_window_set_minimized,"lime_window_set_minimized");
	HX_MARK_MEMBER_NAME(NativeWindow_obj::lime_window_set_title,"lime_window_set_title");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(NativeWindow_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(NativeWindow_obj::lime_window_close,"lime_window_close");
	HX_VISIT_MEMBER_NAME(NativeWindow_obj::lime_window_create,"lime_window_create");
	HX_VISIT_MEMBER_NAME(NativeWindow_obj::lime_window_get_enable_text_events,"lime_window_get_enable_text_events");
	HX_VISIT_MEMBER_NAME(NativeWindow_obj::lime_window_get_height,"lime_window_get_height");
	HX_VISIT_MEMBER_NAME(NativeWindow_obj::lime_window_get_id,"lime_window_get_id");
	HX_VISIT_MEMBER_NAME(NativeWindow_obj::lime_window_get_width,"lime_window_get_width");
	HX_VISIT_MEMBER_NAME(NativeWindow_obj::lime_window_get_x,"lime_window_get_x");
	HX_VISIT_MEMBER_NAME(NativeWindow_obj::lime_window_get_y,"lime_window_get_y");
	HX_VISIT_MEMBER_NAME(NativeWindow_obj::lime_window_move,"lime_window_move");
	HX_VISIT_MEMBER_NAME(NativeWindow_obj::lime_window_resize,"lime_window_resize");
	HX_VISIT_MEMBER_NAME(NativeWindow_obj::lime_window_set_enable_text_events,"lime_window_set_enable_text_events");
	HX_VISIT_MEMBER_NAME(NativeWindow_obj::lime_window_set_fullscreen,"lime_window_set_fullscreen");
	HX_VISIT_MEMBER_NAME(NativeWindow_obj::lime_window_set_icon,"lime_window_set_icon");
	HX_VISIT_MEMBER_NAME(NativeWindow_obj::lime_window_set_minimized,"lime_window_set_minimized");
	HX_VISIT_MEMBER_NAME(NativeWindow_obj::lime_window_set_title,"lime_window_set_title");
};

#endif

hx::Class NativeWindow_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("lime_window_close","\x93","\x79","\xb7","\xe8"),
	HX_HCSTRING("lime_window_create","\xc1","\xa4","\x90","\x25"),
	HX_HCSTRING("lime_window_get_enable_text_events","\xbd","\x19","\xaf","\xda"),
	HX_HCSTRING("lime_window_get_height","\xf5","\x7b","\x27","\xd0"),
	HX_HCSTRING("lime_window_get_id","\xe9","\x30","\xb1","\x4c"),
	HX_HCSTRING("lime_window_get_width","\xb8","\xfd","\x65","\x5f"),
	HX_HCSTRING("lime_window_get_x","\x2a","\x07","\xb5","\x31"),
	HX_HCSTRING("lime_window_get_y","\x2b","\x07","\xb5","\x31"),
	HX_HCSTRING("lime_window_move","\x96","\xb5","\x64","\x4b"),
	HX_HCSTRING("lime_window_resize","\xb9","\x97","\xfc","\xb1"),
	HX_HCSTRING("lime_window_set_enable_text_events","\x31","\x96","\x5a","\x0e"),
	HX_HCSTRING("lime_window_set_fullscreen","\xbd","\xb5","\x15","\xfc"),
	HX_HCSTRING("lime_window_set_icon","\x7b","\xf5","\x6a","\x6e"),
	HX_HCSTRING("lime_window_set_minimized","\x44","\xe6","\xa9","\x30"),
	HX_HCSTRING("lime_window_set_title","\x56","\x49","\x8f","\x88"),
	::String(null()) };

void NativeWindow_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("lime._backend.native.NativeWindow","\xde","\x3b","\x5b","\x7f");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &NativeWindow_obj::__GetStatic;
	__mClass->mSetStaticField = &NativeWindow_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< NativeWindow_obj >;
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

void NativeWindow_obj::__boot()
{
	lime_window_close= ::lime::_system::System_obj::load(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_window_close","\x93","\x79","\xb7","\xe8"),(int)1,null());
	lime_window_create= ::lime::_system::System_obj::load(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_window_create","\xc1","\xa4","\x90","\x25"),(int)5,null());
	lime_window_get_enable_text_events= ::lime::_system::System_obj::load(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_window_get_enable_text_events","\xbd","\x19","\xaf","\xda"),(int)1,null());
	lime_window_get_height= ::lime::_system::System_obj::load(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_window_get_height","\xf5","\x7b","\x27","\xd0"),(int)1,null());
	lime_window_get_id= ::lime::_system::System_obj::load(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_window_get_id","\xe9","\x30","\xb1","\x4c"),(int)1,null());
	lime_window_get_width= ::lime::_system::System_obj::load(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_window_get_width","\xb8","\xfd","\x65","\x5f"),(int)1,null());
	lime_window_get_x= ::lime::_system::System_obj::load(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_window_get_x","\x2a","\x07","\xb5","\x31"),(int)1,null());
	lime_window_get_y= ::lime::_system::System_obj::load(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_window_get_y","\x2b","\x07","\xb5","\x31"),(int)1,null());
	lime_window_move= ::lime::_system::System_obj::load(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_window_move","\x96","\xb5","\x64","\x4b"),(int)3,null());
	lime_window_resize= ::lime::_system::System_obj::load(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_window_resize","\xb9","\x97","\xfc","\xb1"),(int)3,null());
	lime_window_set_enable_text_events= ::lime::_system::System_obj::load(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_window_set_enable_text_events","\x31","\x96","\x5a","\x0e"),(int)2,null());
	lime_window_set_fullscreen= ::lime::_system::System_obj::load(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_window_set_fullscreen","\xbd","\xb5","\x15","\xfc"),(int)2,null());
	lime_window_set_icon= ::lime::_system::System_obj::load(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_window_set_icon","\x7b","\xf5","\x6a","\x6e"),(int)2,null());
	lime_window_set_minimized= ::lime::_system::System_obj::load(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_window_set_minimized","\x44","\xe6","\xa9","\x30"),(int)2,null());
	lime_window_set_title= ::lime::_system::System_obj::load(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_window_set_title","\x56","\x49","\x8f","\x88"),(int)2,null());
}

} // end namespace lime
} // end namespace _backend
} // end namespace native
