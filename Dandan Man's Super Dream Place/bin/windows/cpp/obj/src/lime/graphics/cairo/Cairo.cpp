#include <hxcpp.h>

#ifndef INCLUDED_lime_graphics_cairo_Cairo
#include <lime/graphics/cairo/Cairo.h>
#endif
#ifndef INCLUDED_lime_graphics_cairo_CairoFont
#include <lime/graphics/cairo/CairoFont.h>
#endif
#ifndef INCLUDED_lime_graphics_cairo_CairoFontOptions
#include <lime/graphics/cairo/CairoFontOptions.h>
#endif
#ifndef INCLUDED_lime_math_Matrix3
#include <lime/math/Matrix3.h>
#endif
#ifndef INCLUDED_lime_math_Vector2
#include <lime/math/Vector2.h>
#endif
#ifndef INCLUDED_lime_system_System
#include <lime/system/System.h>
#endif
namespace lime{
namespace graphics{
namespace cairo{

Void Cairo_obj::__construct(Dynamic surface)
{
HX_STACK_FRAME("lime.graphics.cairo.Cairo","new",0x5bfa2aca,"lime.graphics.cairo.Cairo.new","lime/graphics/cairo/Cairo.hx",37,0x0918a4c7)
HX_STACK_THIS(this)
HX_STACK_ARG(surface,"surface")
{
	HX_STACK_LINE(39)
	bool tmp = (surface != null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(39)
	if ((tmp)){
		HX_STACK_LINE(42)
		Dynamic tmp1 = surface;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(42)
		Dynamic tmp2 = ::lime::graphics::cairo::Cairo_obj::lime_cairo_create(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(42)
		this->handle = tmp2;
	}
}
;
	return null();
}

//Cairo_obj::~Cairo_obj() { }

Dynamic Cairo_obj::__CreateEmpty() { return  new Cairo_obj; }
hx::ObjectPtr< Cairo_obj > Cairo_obj::__new(Dynamic surface)
{  hx::ObjectPtr< Cairo_obj > _result_ = new Cairo_obj();
	_result_->__construct(surface);
	return _result_;}

Dynamic Cairo_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Cairo_obj > _result_ = new Cairo_obj();
	_result_->__construct(inArgs[0]);
	return _result_;}

Void Cairo_obj::recreate( Dynamic surface){
{
		HX_STACK_FRAME("lime.graphics.cairo.Cairo","recreate",0x8765b845,"lime.graphics.cairo.Cairo.recreate","lime/graphics/cairo/Cairo.hx",49,0x0918a4c7)
		HX_STACK_THIS(this)
		HX_STACK_ARG(surface,"surface")
		HX_STACK_LINE(52)
		this->destroy();
		HX_STACK_LINE(53)
		Dynamic tmp = surface;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(53)
		Dynamic tmp1 = ::lime::graphics::cairo::Cairo_obj::lime_cairo_create(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(53)
		this->handle = tmp1;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Cairo_obj,recreate,(void))

Void Cairo_obj::arc( Float xc,Float yc,Float radius,Float angle1,Float angle2){
{
		HX_STACK_FRAME("lime.graphics.cairo.Cairo","arc",0x5bf058bc,"lime.graphics.cairo.Cairo.arc","lime/graphics/cairo/Cairo.hx",58,0x0918a4c7)
		HX_STACK_THIS(this)
		HX_STACK_ARG(xc,"xc")
		HX_STACK_ARG(yc,"yc")
		HX_STACK_ARG(radius,"radius")
		HX_STACK_ARG(angle1,"angle1")
		HX_STACK_ARG(angle2,"angle2")
		HX_STACK_LINE(61)
		Dynamic tmp = this->handle;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(61)
		Float tmp1 = xc;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(61)
		Float tmp2 = yc;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(61)
		Float tmp3 = radius;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(61)
		Float tmp4 = angle1;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(61)
		Float tmp5 = angle2;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(61)
		::lime::graphics::cairo::Cairo_obj::lime_cairo_arc(tmp,tmp1,tmp2,tmp3,tmp4,tmp5);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC5(Cairo_obj,arc,(void))

Void Cairo_obj::arcNegative( Float xc,Float yc,Float radius,Float angle1,Float angle2){
{
		HX_STACK_FRAME("lime.graphics.cairo.Cairo","arcNegative",0xdc455751,"lime.graphics.cairo.Cairo.arcNegative","lime/graphics/cairo/Cairo.hx",67,0x0918a4c7)
		HX_STACK_THIS(this)
		HX_STACK_ARG(xc,"xc")
		HX_STACK_ARG(yc,"yc")
		HX_STACK_ARG(radius,"radius")
		HX_STACK_ARG(angle1,"angle1")
		HX_STACK_ARG(angle2,"angle2")
		HX_STACK_LINE(70)
		Dynamic tmp = this->handle;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(70)
		Float tmp1 = xc;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(70)
		Float tmp2 = yc;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(70)
		Float tmp3 = radius;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(70)
		Float tmp4 = angle1;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(70)
		Float tmp5 = angle2;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(70)
		::lime::graphics::cairo::Cairo_obj::lime_cairo_arc_negative(tmp,tmp1,tmp2,tmp3,tmp4,tmp5);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC5(Cairo_obj,arcNegative,(void))

Void Cairo_obj::clip( ){
{
		HX_STACK_FRAME("lime.graphics.cairo.Cairo","clip",0x17ab3126,"lime.graphics.cairo.Cairo.clip","lime/graphics/cairo/Cairo.hx",76,0x0918a4c7)
		HX_STACK_THIS(this)
		HX_STACK_LINE(79)
		Dynamic tmp = this->handle;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(79)
		::lime::graphics::cairo::Cairo_obj::lime_cairo_clip(tmp);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Cairo_obj,clip,(void))

Void Cairo_obj::clipExtents( Float x1,Float y1,Float x2,Float y2){
{
		HX_STACK_FRAME("lime.graphics.cairo.Cairo","clipExtents",0x66b7e2c3,"lime.graphics.cairo.Cairo.clipExtents","lime/graphics/cairo/Cairo.hx",85,0x0918a4c7)
		HX_STACK_THIS(this)
		HX_STACK_ARG(x1,"x1")
		HX_STACK_ARG(y1,"y1")
		HX_STACK_ARG(x2,"x2")
		HX_STACK_ARG(y2,"y2")
		HX_STACK_LINE(88)
		Dynamic tmp = this->handle;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(88)
		Float tmp1 = x1;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(88)
		Float tmp2 = y1;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(88)
		Float tmp3 = x2;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(88)
		Float tmp4 = y2;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(88)
		::lime::graphics::cairo::Cairo_obj::lime_cairo_clip_extents(tmp,tmp1,tmp2,tmp3,tmp4);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC4(Cairo_obj,clipExtents,(void))

Void Cairo_obj::clipPreserve( ){
{
		HX_STACK_FRAME("lime.graphics.cairo.Cairo","clipPreserve",0x0025ef12,"lime.graphics.cairo.Cairo.clipPreserve","lime/graphics/cairo/Cairo.hx",94,0x0918a4c7)
		HX_STACK_THIS(this)
		HX_STACK_LINE(97)
		Dynamic tmp = this->handle;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(97)
		::lime::graphics::cairo::Cairo_obj::lime_cairo_clip_preserve(tmp);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Cairo_obj,clipPreserve,(void))

Void Cairo_obj::closePath( ){
{
		HX_STACK_FRAME("lime.graphics.cairo.Cairo","closePath",0x73e96b67,"lime.graphics.cairo.Cairo.closePath","lime/graphics/cairo/Cairo.hx",103,0x0918a4c7)
		HX_STACK_THIS(this)
		HX_STACK_LINE(106)
		Dynamic tmp = this->handle;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(106)
		::lime::graphics::cairo::Cairo_obj::lime_cairo_close_path(tmp);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Cairo_obj,closePath,(void))

Void Cairo_obj::copyPage( ){
{
		HX_STACK_FRAME("lime.graphics.cairo.Cairo","copyPage",0xf9d7e5fa,"lime.graphics.cairo.Cairo.copyPage","lime/graphics/cairo/Cairo.hx",112,0x0918a4c7)
		HX_STACK_THIS(this)
		HX_STACK_LINE(115)
		Dynamic tmp = this->handle;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(115)
		::lime::graphics::cairo::Cairo_obj::lime_cairo_copy_page(tmp);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Cairo_obj,copyPage,(void))

Void Cairo_obj::curveTo( Float x1,Float y1,Float x2,Float y2,Float x3,Float y3){
{
		HX_STACK_FRAME("lime.graphics.cairo.Cairo","curveTo",0x0ddd3774,"lime.graphics.cairo.Cairo.curveTo","lime/graphics/cairo/Cairo.hx",121,0x0918a4c7)
		HX_STACK_THIS(this)
		HX_STACK_ARG(x1,"x1")
		HX_STACK_ARG(y1,"y1")
		HX_STACK_ARG(x2,"x2")
		HX_STACK_ARG(y2,"y2")
		HX_STACK_ARG(x3,"x3")
		HX_STACK_ARG(y3,"y3")
		HX_STACK_LINE(124)
		Dynamic tmp = this->handle;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(124)
		Float tmp1 = x1;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(124)
		Float tmp2 = y1;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(124)
		Float tmp3 = x2;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(124)
		Float tmp4 = y2;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(124)
		Float tmp5 = x3;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(124)
		Float tmp6 = y3;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(124)
		::lime::graphics::cairo::Cairo_obj::lime_cairo_curve_to(tmp,tmp1,tmp2,tmp3,tmp4,tmp5,tmp6);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC6(Cairo_obj,curveTo,(void))

Void Cairo_obj::destroy( ){
{
		HX_STACK_FRAME("lime.graphics.cairo.Cairo","destroy",0x63db0464,"lime.graphics.cairo.Cairo.destroy","lime/graphics/cairo/Cairo.hx",130,0x0918a4c7)
		HX_STACK_THIS(this)
		HX_STACK_LINE(133)
		Dynamic tmp = this->handle;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(133)
		::lime::graphics::cairo::Cairo_obj::lime_cairo_destroy(tmp);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Cairo_obj,destroy,(void))

Void Cairo_obj::fill( ){
{
		HX_STACK_FRAME("lime.graphics.cairo.Cairo","fill",0x19a490d9,"lime.graphics.cairo.Cairo.fill","lime/graphics/cairo/Cairo.hx",139,0x0918a4c7)
		HX_STACK_THIS(this)
		HX_STACK_LINE(142)
		Dynamic tmp = this->handle;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(142)
		::lime::graphics::cairo::Cairo_obj::lime_cairo_fill(tmp);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Cairo_obj,fill,(void))

Void Cairo_obj::fillExtents( Float x1,Float y1,Float x2,Float y2){
{
		HX_STACK_FRAME("lime.graphics.cairo.Cairo","fillExtents",0x3c7e2f70,"lime.graphics.cairo.Cairo.fillExtents","lime/graphics/cairo/Cairo.hx",148,0x0918a4c7)
		HX_STACK_THIS(this)
		HX_STACK_ARG(x1,"x1")
		HX_STACK_ARG(y1,"y1")
		HX_STACK_ARG(x2,"x2")
		HX_STACK_ARG(y2,"y2")
		HX_STACK_LINE(151)
		Float tmp = x1;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(151)
		Float tmp1 = y1;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(151)
		Float tmp2 = x2;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(151)
		Float tmp3 = y2;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(151)
		::lime::graphics::cairo::Cairo_obj::lime_cairo_fill_extents(tmp,tmp1,tmp2,tmp3);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC4(Cairo_obj,fillExtents,(void))

Void Cairo_obj::fillPreserve( ){
{
		HX_STACK_FRAME("lime.graphics.cairo.Cairo","fillPreserve",0x37e2b9c5,"lime.graphics.cairo.Cairo.fillPreserve","lime/graphics/cairo/Cairo.hx",157,0x0918a4c7)
		HX_STACK_THIS(this)
		HX_STACK_LINE(160)
		Dynamic tmp = this->handle;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(160)
		::lime::graphics::cairo::Cairo_obj::lime_cairo_fill_preserve(tmp);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Cairo_obj,fillPreserve,(void))

Void Cairo_obj::identityMatrix( ){
{
		HX_STACK_FRAME("lime.graphics.cairo.Cairo","identityMatrix",0xb1e7bbf5,"lime.graphics.cairo.Cairo.identityMatrix","lime/graphics/cairo/Cairo.hx",166,0x0918a4c7)
		HX_STACK_THIS(this)
		HX_STACK_LINE(169)
		Dynamic tmp = this->handle;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(169)
		::lime::graphics::cairo::Cairo_obj::lime_cairo_identity_matrix(tmp);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Cairo_obj,identityMatrix,(void))

bool Cairo_obj::inClip( Float x,Float y){
	HX_STACK_FRAME("lime.graphics.cairo.Cairo","inClip",0x3186d12b,"lime.graphics.cairo.Cairo.inClip","lime/graphics/cairo/Cairo.hx",175,0x0918a4c7)
	HX_STACK_THIS(this)
	HX_STACK_ARG(x,"x")
	HX_STACK_ARG(y,"y")
	HX_STACK_LINE(178)
	Float tmp = x;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(178)
	Float tmp1 = y;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(178)
	bool tmp2 = ::lime::graphics::cairo::Cairo_obj::lime_cairo_in_clip(tmp,tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(178)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC2(Cairo_obj,inClip,return )

bool Cairo_obj::inFill( Float x,Float y){
	HX_STACK_FRAME("lime.graphics.cairo.Cairo","inFill",0x338030de,"lime.graphics.cairo.Cairo.inFill","lime/graphics/cairo/Cairo.hx",186,0x0918a4c7)
	HX_STACK_THIS(this)
	HX_STACK_ARG(x,"x")
	HX_STACK_ARG(y,"y")
	HX_STACK_LINE(189)
	Float tmp = x;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(189)
	Float tmp1 = y;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(189)
	bool tmp2 = ::lime::graphics::cairo::Cairo_obj::lime_cairo_in_fill(tmp,tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(189)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC2(Cairo_obj,inFill,return )

bool Cairo_obj::inStroke( Float x,Float y){
	HX_STACK_FRAME("lime.graphics.cairo.Cairo","inStroke",0xc49aa2d3,"lime.graphics.cairo.Cairo.inStroke","lime/graphics/cairo/Cairo.hx",197,0x0918a4c7)
	HX_STACK_THIS(this)
	HX_STACK_ARG(x,"x")
	HX_STACK_ARG(y,"y")
	HX_STACK_LINE(200)
	Float tmp = x;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(200)
	Float tmp1 = y;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(200)
	bool tmp2 = ::lime::graphics::cairo::Cairo_obj::lime_cairo_in_stroke(tmp,tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(200)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC2(Cairo_obj,inStroke,return )

Void Cairo_obj::lineTo( Float x,Float y){
{
		HX_STACK_FRAME("lime.graphics.cairo.Cairo","lineTo",0x9ffeca65,"lime.graphics.cairo.Cairo.lineTo","lime/graphics/cairo/Cairo.hx",208,0x0918a4c7)
		HX_STACK_THIS(this)
		HX_STACK_ARG(x,"x")
		HX_STACK_ARG(y,"y")
		HX_STACK_LINE(211)
		Dynamic tmp = this->handle;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(211)
		Float tmp1 = x;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(211)
		Float tmp2 = y;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(211)
		::lime::graphics::cairo::Cairo_obj::lime_cairo_line_to(tmp,tmp1,tmp2);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Cairo_obj,lineTo,(void))

Void Cairo_obj::moveTo( Float x,Float y){
{
		HX_STACK_FRAME("lime.graphics.cairo.Cairo","moveTo",0x800b56c2,"lime.graphics.cairo.Cairo.moveTo","lime/graphics/cairo/Cairo.hx",217,0x0918a4c7)
		HX_STACK_THIS(this)
		HX_STACK_ARG(x,"x")
		HX_STACK_ARG(y,"y")
		HX_STACK_LINE(220)
		Dynamic tmp = this->handle;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(220)
		Float tmp1 = x;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(220)
		Float tmp2 = y;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(220)
		::lime::graphics::cairo::Cairo_obj::lime_cairo_move_to(tmp,tmp1,tmp2);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Cairo_obj,moveTo,(void))

Void Cairo_obj::mask( Dynamic pattern){
{
		HX_STACK_FRAME("lime.graphics.cairo.Cairo","mask",0x1e3f0342,"lime.graphics.cairo.Cairo.mask","lime/graphics/cairo/Cairo.hx",226,0x0918a4c7)
		HX_STACK_THIS(this)
		HX_STACK_ARG(pattern,"pattern")
		HX_STACK_LINE(229)
		Dynamic tmp = this->handle;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(229)
		Dynamic tmp1 = pattern;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(229)
		::lime::graphics::cairo::Cairo_obj::lime_cairo_mask(tmp,tmp1);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Cairo_obj,mask,(void))

Void Cairo_obj::maskSurface( Dynamic surface,Float x,Float y){
{
		HX_STACK_FRAME("lime.graphics.cairo.Cairo","maskSurface",0x3893570b,"lime.graphics.cairo.Cairo.maskSurface","lime/graphics/cairo/Cairo.hx",235,0x0918a4c7)
		HX_STACK_THIS(this)
		HX_STACK_ARG(surface,"surface")
		HX_STACK_ARG(x,"x")
		HX_STACK_ARG(y,"y")
		HX_STACK_LINE(238)
		Dynamic tmp = surface;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(238)
		Float tmp1 = x;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(238)
		Float tmp2 = y;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(238)
		::lime::graphics::cairo::Cairo_obj::lime_cairo_mask_surface(tmp,tmp1,tmp2);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(Cairo_obj,maskSurface,(void))

Void Cairo_obj::newPath( ){
{
		HX_STACK_FRAME("lime.graphics.cairo.Cairo","newPath",0x3973698f,"lime.graphics.cairo.Cairo.newPath","lime/graphics/cairo/Cairo.hx",244,0x0918a4c7)
		HX_STACK_THIS(this)
		HX_STACK_LINE(247)
		Dynamic tmp = this->handle;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(247)
		::lime::graphics::cairo::Cairo_obj::lime_cairo_new_path(tmp);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Cairo_obj,newPath,(void))

Void Cairo_obj::paint( ){
{
		HX_STACK_FRAME("lime.graphics.cairo.Cairo","paint",0x13100088,"lime.graphics.cairo.Cairo.paint","lime/graphics/cairo/Cairo.hx",253,0x0918a4c7)
		HX_STACK_THIS(this)
		HX_STACK_LINE(256)
		Dynamic tmp = this->handle;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(256)
		::lime::graphics::cairo::Cairo_obj::lime_cairo_paint(tmp);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Cairo_obj,paint,(void))

Void Cairo_obj::paintWithAlpha( Float alpha){
{
		HX_STACK_FRAME("lime.graphics.cairo.Cairo","paintWithAlpha",0x79d699d0,"lime.graphics.cairo.Cairo.paintWithAlpha","lime/graphics/cairo/Cairo.hx",262,0x0918a4c7)
		HX_STACK_THIS(this)
		HX_STACK_ARG(alpha,"alpha")
		HX_STACK_LINE(265)
		Dynamic tmp = this->handle;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(265)
		Float tmp1 = alpha;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(265)
		::lime::graphics::cairo::Cairo_obj::lime_cairo_paint_with_alpha(tmp,tmp1);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Cairo_obj,paintWithAlpha,(void))

Dynamic Cairo_obj::popGroup( ){
	HX_STACK_FRAME("lime.graphics.cairo.Cairo","popGroup",0x2de29d44,"lime.graphics.cairo.Cairo.popGroup","lime/graphics/cairo/Cairo.hx",271,0x0918a4c7)
	HX_STACK_THIS(this)
	HX_STACK_LINE(274)
	Dynamic tmp = this->handle;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(274)
	Dynamic tmp1 = ::lime::graphics::cairo::Cairo_obj::lime_cairo_pop_group(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(274)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(Cairo_obj,popGroup,return )

Void Cairo_obj::popGroupToSource( ){
{
		HX_STACK_FRAME("lime.graphics.cairo.Cairo","popGroupToSource",0x2889961a,"lime.graphics.cairo.Cairo.popGroupToSource","lime/graphics/cairo/Cairo.hx",282,0x0918a4c7)
		HX_STACK_THIS(this)
		HX_STACK_LINE(285)
		Dynamic tmp = this->handle;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(285)
		::lime::graphics::cairo::Cairo_obj::lime_cairo_pop_group_to_source(tmp);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Cairo_obj,popGroupToSource,(void))

Void Cairo_obj::pushGroup( ){
{
		HX_STACK_FRAME("lime.graphics.cairo.Cairo","pushGroup",0x3dd920ef,"lime.graphics.cairo.Cairo.pushGroup","lime/graphics/cairo/Cairo.hx",291,0x0918a4c7)
		HX_STACK_THIS(this)
		HX_STACK_LINE(294)
		Dynamic tmp = this->handle;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(294)
		::lime::graphics::cairo::Cairo_obj::lime_cairo_push_group(tmp);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Cairo_obj,pushGroup,(void))

Void Cairo_obj::pushGroupWithContent( int content){
{
		HX_STACK_FRAME("lime.graphics.cairo.Cairo","pushGroupWithContent",0x80fe7b24,"lime.graphics.cairo.Cairo.pushGroupWithContent","lime/graphics/cairo/Cairo.hx",300,0x0918a4c7)
		HX_STACK_THIS(this)
		HX_STACK_ARG(content,"content")
		HX_STACK_LINE(303)
		Dynamic tmp = this->handle;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(303)
		int tmp1 = content;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(303)
		::lime::graphics::cairo::Cairo_obj::lime_cairo_push_group_with_content(tmp,tmp1);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Cairo_obj,pushGroupWithContent,(void))

Void Cairo_obj::rectangle( Float x,Float y,Float width,Float height){
{
		HX_STACK_FRAME("lime.graphics.cairo.Cairo","rectangle",0x7945da19,"lime.graphics.cairo.Cairo.rectangle","lime/graphics/cairo/Cairo.hx",309,0x0918a4c7)
		HX_STACK_THIS(this)
		HX_STACK_ARG(x,"x")
		HX_STACK_ARG(y,"y")
		HX_STACK_ARG(width,"width")
		HX_STACK_ARG(height,"height")
		HX_STACK_LINE(312)
		Dynamic tmp = this->handle;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(312)
		Float tmp1 = x;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(312)
		Float tmp2 = y;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(312)
		Float tmp3 = width;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(312)
		Float tmp4 = height;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(312)
		::lime::graphics::cairo::Cairo_obj::lime_cairo_rectangle(tmp,tmp1,tmp2,tmp3,tmp4);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC4(Cairo_obj,rectangle,(void))

Void Cairo_obj::reference( ){
{
		HX_STACK_FRAME("lime.graphics.cairo.Cairo","reference",0xba8e0db5,"lime.graphics.cairo.Cairo.reference","lime/graphics/cairo/Cairo.hx",318,0x0918a4c7)
		HX_STACK_THIS(this)
		HX_STACK_LINE(321)
		Dynamic tmp = this->handle;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(321)
		::lime::graphics::cairo::Cairo_obj::lime_cairo_reference(tmp);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Cairo_obj,reference,(void))

Void Cairo_obj::relCurveTo( Float dx1,Float dy1,Float dx2,Float dy2,Float dx3,Float dy3){
{
		HX_STACK_FRAME("lime.graphics.cairo.Cairo","relCurveTo",0x07a5a287,"lime.graphics.cairo.Cairo.relCurveTo","lime/graphics/cairo/Cairo.hx",327,0x0918a4c7)
		HX_STACK_THIS(this)
		HX_STACK_ARG(dx1,"dx1")
		HX_STACK_ARG(dy1,"dy1")
		HX_STACK_ARG(dx2,"dx2")
		HX_STACK_ARG(dy2,"dy2")
		HX_STACK_ARG(dx3,"dx3")
		HX_STACK_ARG(dy3,"dy3")
		HX_STACK_LINE(330)
		Dynamic tmp = this->handle;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(330)
		Float tmp1 = dx1;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(330)
		Float tmp2 = dy1;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(330)
		Float tmp3 = dx2;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(330)
		Float tmp4 = dy2;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(330)
		Float tmp5 = dx3;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(330)
		Float tmp6 = dy3;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(330)
		::lime::graphics::cairo::Cairo_obj::lime_cairo_rel_curve_to(tmp,tmp1,tmp2,tmp3,tmp4,tmp5,tmp6);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC6(Cairo_obj,relCurveTo,(void))

Void Cairo_obj::relLineTo( Float dx,Float dy){
{
		HX_STACK_FRAME("lime.graphics.cairo.Cairo","relLineTo",0x8c73a2b2,"lime.graphics.cairo.Cairo.relLineTo","lime/graphics/cairo/Cairo.hx",336,0x0918a4c7)
		HX_STACK_THIS(this)
		HX_STACK_ARG(dx,"dx")
		HX_STACK_ARG(dy,"dy")
		HX_STACK_LINE(339)
		Dynamic tmp = this->handle;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(339)
		Float tmp1 = dx;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(339)
		Float tmp2 = dy;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(339)
		::lime::graphics::cairo::Cairo_obj::lime_cairo_rel_line_to(tmp,tmp1,tmp2);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Cairo_obj,relLineTo,(void))

Void Cairo_obj::relMoveTo( Float dx,Float dy){
{
		HX_STACK_FRAME("lime.graphics.cairo.Cairo","relMoveTo",0x6c802f0f,"lime.graphics.cairo.Cairo.relMoveTo","lime/graphics/cairo/Cairo.hx",345,0x0918a4c7)
		HX_STACK_THIS(this)
		HX_STACK_ARG(dx,"dx")
		HX_STACK_ARG(dy,"dy")
		HX_STACK_LINE(348)
		Dynamic tmp = this->handle;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(348)
		Float tmp1 = dx;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(348)
		Float tmp2 = dy;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(348)
		::lime::graphics::cairo::Cairo_obj::lime_cairo_rel_move_to(tmp,tmp1,tmp2);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Cairo_obj,relMoveTo,(void))

Void Cairo_obj::resetClip( ){
{
		HX_STACK_FRAME("lime.graphics.cairo.Cairo","resetClip",0xe7777e29,"lime.graphics.cairo.Cairo.resetClip","lime/graphics/cairo/Cairo.hx",354,0x0918a4c7)
		HX_STACK_THIS(this)
		HX_STACK_LINE(357)
		Dynamic tmp = this->handle;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(357)
		::lime::graphics::cairo::Cairo_obj::lime_cairo_reset_clip(tmp);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Cairo_obj,resetClip,(void))

Void Cairo_obj::restore( ){
{
		HX_STACK_FRAME("lime.graphics.cairo.Cairo","restore",0xaa053eb8,"lime.graphics.cairo.Cairo.restore","lime/graphics/cairo/Cairo.hx",363,0x0918a4c7)
		HX_STACK_THIS(this)
		HX_STACK_LINE(366)
		Dynamic tmp = this->handle;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(366)
		::lime::graphics::cairo::Cairo_obj::lime_cairo_restore(tmp);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Cairo_obj,restore,(void))

Void Cairo_obj::save( ){
{
		HX_STACK_FRAME("lime.graphics.cairo.Cairo","save",0x22364d93,"lime.graphics.cairo.Cairo.save","lime/graphics/cairo/Cairo.hx",372,0x0918a4c7)
		HX_STACK_THIS(this)
		HX_STACK_LINE(375)
		Dynamic tmp = this->handle;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(375)
		::lime::graphics::cairo::Cairo_obj::lime_cairo_save(tmp);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Cairo_obj,save,(void))

Void Cairo_obj::setFontFace( ::lime::graphics::cairo::CairoFont face){
{
		HX_STACK_FRAME("lime.graphics.cairo.Cairo","setFontFace",0x9f1a7038,"lime.graphics.cairo.Cairo.setFontFace","lime/graphics/cairo/Cairo.hx",380,0x0918a4c7)
		HX_STACK_THIS(this)
		HX_STACK_ARG(face,"face")
		HX_STACK_LINE(383)
		Dynamic tmp = this->handle;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(383)
		Dynamic tmp1 = face->handle;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(383)
		::lime::graphics::cairo::Cairo_obj::lime_cairo_set_font_face(tmp,tmp1);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Cairo_obj,setFontFace,(void))

Void Cairo_obj::setFontSize( Float size){
{
		HX_STACK_FRAME("lime.graphics.cairo.Cairo","setFontSize",0xa7b85c5c,"lime.graphics.cairo.Cairo.setFontSize","lime/graphics/cairo/Cairo.hx",387,0x0918a4c7)
		HX_STACK_THIS(this)
		HX_STACK_ARG(size,"size")
		HX_STACK_LINE(390)
		Dynamic tmp = this->handle;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(390)
		Float tmp1 = size;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(390)
		::lime::graphics::cairo::Cairo_obj::lime_cairo_set_font_size(tmp,tmp1);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Cairo_obj,setFontSize,(void))

::lime::graphics::cairo::CairoFontOptions Cairo_obj::getFontOptions( ){
	HX_STACK_FRAME("lime.graphics.cairo.Cairo","getFontOptions",0x9c54822f,"lime.graphics.cairo.Cairo.getFontOptions","lime/graphics/cairo/Cairo.hx",394,0x0918a4c7)
	HX_STACK_THIS(this)
	HX_STACK_LINE(397)
	Dynamic tmp = this->handle;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(397)
	::lime::graphics::cairo::CairoFontOptions tmp1 = ::lime::graphics::cairo::CairoFontOptions_obj::__new(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(397)
	return tmp1;
	HX_STACK_LINE(400)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Cairo_obj,getFontOptions,return )

::lime::graphics::cairo::CairoFontOptions Cairo_obj::setFontOptions( ::lime::graphics::cairo::CairoFontOptions value){
	HX_STACK_FRAME("lime.graphics.cairo.Cairo","setFontOptions",0xbc746aa3,"lime.graphics.cairo.Cairo.setFontOptions","lime/graphics/cairo/Cairo.hx",405,0x0918a4c7)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(408)
	Dynamic tmp = this->handle;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(408)
	Dynamic tmp1 = value->handle;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(408)
	::lime::graphics::cairo::Cairo_obj::lime_cairo_set_font_options(tmp,tmp1);
	HX_STACK_LINE(411)
	::lime::graphics::cairo::CairoFontOptions tmp2 = value;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(411)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC1(Cairo_obj,setFontOptions,return )

Void Cairo_obj::setSourceRGB( Float r,Float g,Float b){
{
		HX_STACK_FRAME("lime.graphics.cairo.Cairo","setSourceRGB",0x59e04946,"lime.graphics.cairo.Cairo.setSourceRGB","lime/graphics/cairo/Cairo.hx",416,0x0918a4c7)
		HX_STACK_THIS(this)
		HX_STACK_ARG(r,"r")
		HX_STACK_ARG(g,"g")
		HX_STACK_ARG(b,"b")
		HX_STACK_LINE(419)
		Dynamic tmp = this->handle;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(419)
		Float tmp1 = r;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(419)
		Float tmp2 = g;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(419)
		Float tmp3 = b;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(419)
		::lime::graphics::cairo::Cairo_obj::lime_cairo_set_source_rgb(tmp,tmp1,tmp2,tmp3);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(Cairo_obj,setSourceRGB,(void))

Void Cairo_obj::setSourceRGBA( Float r,Float g,Float b,Float a){
{
		HX_STACK_FRAME("lime.graphics.cairo.Cairo","setSourceRGBA",0x4a5fd43b,"lime.graphics.cairo.Cairo.setSourceRGBA","lime/graphics/cairo/Cairo.hx",425,0x0918a4c7)
		HX_STACK_THIS(this)
		HX_STACK_ARG(r,"r")
		HX_STACK_ARG(g,"g")
		HX_STACK_ARG(b,"b")
		HX_STACK_ARG(a,"a")
		HX_STACK_LINE(428)
		Dynamic tmp = this->handle;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(428)
		Float tmp1 = r;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(428)
		Float tmp2 = g;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(428)
		Float tmp3 = b;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(428)
		Float tmp4 = a;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(428)
		::lime::graphics::cairo::Cairo_obj::lime_cairo_set_source_rgba(tmp,tmp1,tmp2,tmp3,tmp4);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC4(Cairo_obj,setSourceRGBA,(void))

Void Cairo_obj::setSourceSurface( Dynamic surface,Float x,Float y){
{
		HX_STACK_FRAME("lime.graphics.cairo.Cairo","setSourceSurface",0xcd3700e6,"lime.graphics.cairo.Cairo.setSourceSurface","lime/graphics/cairo/Cairo.hx",434,0x0918a4c7)
		HX_STACK_THIS(this)
		HX_STACK_ARG(surface,"surface")
		HX_STACK_ARG(x,"x")
		HX_STACK_ARG(y,"y")
		HX_STACK_LINE(437)
		Dynamic tmp = this->handle;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(437)
		Dynamic tmp1 = surface;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(437)
		Float tmp2 = x;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(437)
		Float tmp3 = y;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(437)
		::lime::graphics::cairo::Cairo_obj::lime_cairo_set_source_surface(tmp,tmp1,tmp2,tmp3);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(Cairo_obj,setSourceSurface,(void))

Void Cairo_obj::showPage( ){
{
		HX_STACK_FRAME("lime.graphics.cairo.Cairo","showPage",0xdcc04342,"lime.graphics.cairo.Cairo.showPage","lime/graphics/cairo/Cairo.hx",443,0x0918a4c7)
		HX_STACK_THIS(this)
		HX_STACK_LINE(446)
		Dynamic tmp = this->handle;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(446)
		::lime::graphics::cairo::Cairo_obj::lime_cairo_show_page(tmp);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Cairo_obj,showPage,(void))

Void Cairo_obj::showText( ::String utf8){
{
		HX_STACK_FRAME("lime.graphics.cairo.Cairo","showText",0xdf6835a0,"lime.graphics.cairo.Cairo.showText","lime/graphics/cairo/Cairo.hx",451,0x0918a4c7)
		HX_STACK_THIS(this)
		HX_STACK_ARG(utf8,"utf8")
		HX_STACK_LINE(454)
		Dynamic tmp = this->handle;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(454)
		::String tmp1 = utf8;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(454)
		::lime::graphics::cairo::Cairo_obj::lime_cairo_show_text(tmp,tmp1);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Cairo_obj,showText,(void))

int Cairo_obj::status( ){
	HX_STACK_FRAME("lime.graphics.cairo.Cairo","status",0xb95a6b08,"lime.graphics.cairo.Cairo.status","lime/graphics/cairo/Cairo.hx",460,0x0918a4c7)
	HX_STACK_THIS(this)
	HX_STACK_LINE(463)
	Dynamic tmp = this->handle;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(463)
	int tmp1 = ::lime::graphics::cairo::Cairo_obj::lime_cairo_status(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(463)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(Cairo_obj,status,return )

Void Cairo_obj::stroke( ){
{
		HX_STACK_FRAME("lime.graphics.cairo.Cairo","stroke",0xc493378e,"lime.graphics.cairo.Cairo.stroke","lime/graphics/cairo/Cairo.hx",471,0x0918a4c7)
		HX_STACK_THIS(this)
		HX_STACK_LINE(474)
		Dynamic tmp = this->handle;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(474)
		::lime::graphics::cairo::Cairo_obj::lime_cairo_stroke(tmp);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Cairo_obj,stroke,(void))

Void Cairo_obj::strokeExtents( Float x1,Float y1,Float x2,Float y2){
{
		HX_STACK_FRAME("lime.graphics.cairo.Cairo","strokeExtents",0x11faf95b,"lime.graphics.cairo.Cairo.strokeExtents","lime/graphics/cairo/Cairo.hx",480,0x0918a4c7)
		HX_STACK_THIS(this)
		HX_STACK_ARG(x1,"x1")
		HX_STACK_ARG(y1,"y1")
		HX_STACK_ARG(x2,"x2")
		HX_STACK_ARG(y2,"y2")
		HX_STACK_LINE(483)
		Dynamic tmp = this->handle;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(483)
		Float tmp1 = x1;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(483)
		Float tmp2 = y1;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(483)
		Float tmp3 = x2;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(483)
		Float tmp4 = y2;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(483)
		::lime::graphics::cairo::Cairo_obj::lime_cairo_stroke_extents(tmp,tmp1,tmp2,tmp3,tmp4);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC4(Cairo_obj,strokeExtents,(void))

Void Cairo_obj::strokePreserve( ){
{
		HX_STACK_FRAME("lime.graphics.cairo.Cairo","strokePreserve",0x2f969d7a,"lime.graphics.cairo.Cairo.strokePreserve","lime/graphics/cairo/Cairo.hx",489,0x0918a4c7)
		HX_STACK_THIS(this)
		HX_STACK_LINE(492)
		Dynamic tmp = this->handle;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(492)
		::lime::graphics::cairo::Cairo_obj::lime_cairo_stroke_preserve(tmp);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Cairo_obj,strokePreserve,(void))

Void Cairo_obj::transform( ::lime::math::Matrix3 matrix){
{
		HX_STACK_FRAME("lime.graphics.cairo.Cairo","transform",0xa55c3356,"lime.graphics.cairo.Cairo.transform","lime/graphics/cairo/Cairo.hx",498,0x0918a4c7)
		HX_STACK_THIS(this)
		HX_STACK_ARG(matrix,"matrix")
		HX_STACK_LINE(501)
		Dynamic tmp = this->handle;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(501)
		::lime::math::Matrix3 tmp1 = matrix;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(501)
		::lime::graphics::cairo::Cairo_obj::lime_cairo_transform(tmp,tmp1);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Cairo_obj,transform,(void))

Void Cairo_obj::rotate( Float amount){
{
		HX_STACK_FRAME("lime.graphics.cairo.Cairo","rotate",0x7e7eca31,"lime.graphics.cairo.Cairo.rotate","lime/graphics/cairo/Cairo.hx",506,0x0918a4c7)
		HX_STACK_THIS(this)
		HX_STACK_ARG(amount,"amount")
		HX_STACK_LINE(509)
		Dynamic tmp = this->handle;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(509)
		Float tmp1 = amount;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(509)
		::lime::graphics::cairo::Cairo_obj::lime_cairo_rotate(tmp,tmp1);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Cairo_obj,rotate,(void))

Void Cairo_obj::scale( Float x,Float y){
{
		HX_STACK_FRAME("lime.graphics.cairo.Cairo","scale",0xce901774,"lime.graphics.cairo.Cairo.scale","lime/graphics/cairo/Cairo.hx",514,0x0918a4c7)
		HX_STACK_THIS(this)
		HX_STACK_ARG(x,"x")
		HX_STACK_ARG(y,"y")
		HX_STACK_LINE(517)
		Dynamic tmp = this->handle;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(517)
		Float tmp1 = x;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(517)
		Float tmp2 = y;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(517)
		::lime::graphics::cairo::Cairo_obj::lime_cairo_scale(tmp,tmp1,tmp2);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Cairo_obj,scale,(void))

Void Cairo_obj::translate( Float x,Float y){
{
		HX_STACK_FRAME("lime.graphics.cairo.Cairo","translate",0xa948dd38,"lime.graphics.cairo.Cairo.translate","lime/graphics/cairo/Cairo.hx",523,0x0918a4c7)
		HX_STACK_THIS(this)
		HX_STACK_ARG(x,"x")
		HX_STACK_ARG(y,"y")
		HX_STACK_LINE(526)
		Dynamic tmp = this->handle;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(526)
		Float tmp1 = x;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(526)
		Float tmp2 = y;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(526)
		::lime::graphics::cairo::Cairo_obj::lime_cairo_translate(tmp,tmp1,tmp2);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Cairo_obj,translate,(void))

int Cairo_obj::get_antialias( ){
	HX_STACK_FRAME("lime.graphics.cairo.Cairo","get_antialias",0x6c40ed6f,"lime.graphics.cairo.Cairo.get_antialias","lime/graphics/cairo/Cairo.hx",541,0x0918a4c7)
	HX_STACK_THIS(this)
	HX_STACK_LINE(544)
	Dynamic tmp = this->handle;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(544)
	int tmp1 = ::lime::graphics::cairo::Cairo_obj::lime_cairo_get_antialias(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(544)
	return tmp1;
	HX_STACK_LINE(547)
	return (int)0;
}


HX_DEFINE_DYNAMIC_FUNC0(Cairo_obj,get_antialias,return )

int Cairo_obj::set_antialias( int value){
	HX_STACK_FRAME("lime.graphics.cairo.Cairo","set_antialias",0xb146cf7b,"lime.graphics.cairo.Cairo.set_antialias","lime/graphics/cairo/Cairo.hx",552,0x0918a4c7)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(555)
	Dynamic tmp = this->handle;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(555)
	int tmp1 = value;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(555)
	::lime::graphics::cairo::Cairo_obj::lime_cairo_set_antialias(tmp,tmp1);
	HX_STACK_LINE(558)
	int tmp2 = value;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(558)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC1(Cairo_obj,set_antialias,return )

::lime::math::Vector2 Cairo_obj::get_currentPoint( ){
	HX_STACK_FRAME("lime.graphics.cairo.Cairo","get_currentPoint",0x71e87136,"lime.graphics.cairo.Cairo.get_currentPoint","lime/graphics/cairo/Cairo.hx",563,0x0918a4c7)
	HX_STACK_THIS(this)
	HX_STACK_LINE(566)
	Dynamic tmp = this->handle;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(566)
	Dynamic tmp1 = ::lime::graphics::cairo::Cairo_obj::lime_cairo_get_current_point(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(566)
	Dynamic vec = tmp1;		HX_STACK_VAR(vec,"vec");
	HX_STACK_LINE(567)
	::lime::math::Vector2 tmp2 = ::lime::math::Vector2_obj::__new(vec->__Field(HX_HCSTRING("x","\x78","\x00","\x00","\x00"), hx::paccDynamic ),vec->__Field(HX_HCSTRING("y","\x79","\x00","\x00","\x00"), hx::paccDynamic ));		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(567)
	return tmp2;
	HX_STACK_LINE(570)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Cairo_obj,get_currentPoint,return )

Array< Float > Cairo_obj::get_dash( ){
	HX_STACK_FRAME("lime.graphics.cairo.Cairo","get_dash",0xed05b631,"lime.graphics.cairo.Cairo.get_dash","lime/graphics/cairo/Cairo.hx",575,0x0918a4c7)
	HX_STACK_THIS(this)
	HX_STACK_LINE(578)
	Dynamic tmp = this->handle;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(578)
	return ::lime::graphics::cairo::Cairo_obj::lime_cairo_get_dash(tmp);
	HX_STACK_LINE(581)
	return Array_obj< Float >::__new();
}


HX_DEFINE_DYNAMIC_FUNC0(Cairo_obj,get_dash,return )

Array< Float > Cairo_obj::set_dash( Array< Float > value){
	HX_STACK_FRAME("lime.graphics.cairo.Cairo","set_dash",0x9b630fa5,"lime.graphics.cairo.Cairo.set_dash","lime/graphics/cairo/Cairo.hx",586,0x0918a4c7)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(589)
	Dynamic tmp = this->handle;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(589)
	::lime::graphics::cairo::Cairo_obj::lime_cairo_set_dash(tmp,value);
	HX_STACK_LINE(592)
	return value;
}


HX_DEFINE_DYNAMIC_FUNC1(Cairo_obj,set_dash,return )

int Cairo_obj::get_dashCount( ){
	HX_STACK_FRAME("lime.graphics.cairo.Cairo","get_dashCount",0x2993ecde,"lime.graphics.cairo.Cairo.get_dashCount","lime/graphics/cairo/Cairo.hx",597,0x0918a4c7)
	HX_STACK_THIS(this)
	HX_STACK_LINE(600)
	Dynamic tmp = this->handle;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(600)
	int tmp1 = ::lime::graphics::cairo::Cairo_obj::lime_cairo_get_dash_count(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(600)
	return tmp1;
	HX_STACK_LINE(603)
	return (int)0;
}


HX_DEFINE_DYNAMIC_FUNC0(Cairo_obj,get_dashCount,return )

int Cairo_obj::get_fillRule( ){
	HX_STACK_FRAME("lime.graphics.cairo.Cairo","get_fillRule",0xee732d7e,"lime.graphics.cairo.Cairo.get_fillRule","lime/graphics/cairo/Cairo.hx",608,0x0918a4c7)
	HX_STACK_THIS(this)
	HX_STACK_LINE(611)
	Dynamic tmp = this->handle;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(611)
	int tmp1 = ::lime::graphics::cairo::Cairo_obj::lime_cairo_get_fill_rule(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(611)
	return tmp1;
	HX_STACK_LINE(614)
	return (int)0;
}


HX_DEFINE_DYNAMIC_FUNC0(Cairo_obj,get_fillRule,return )

int Cairo_obj::set_fillRule( int value){
	HX_STACK_FRAME("lime.graphics.cairo.Cairo","set_fillRule",0x036c50f2,"lime.graphics.cairo.Cairo.set_fillRule","lime/graphics/cairo/Cairo.hx",619,0x0918a4c7)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(622)
	Dynamic tmp = this->handle;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(622)
	int tmp1 = value;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(622)
	::lime::graphics::cairo::Cairo_obj::lime_cairo_set_fill_rule(tmp,tmp1);
	HX_STACK_LINE(625)
	int tmp2 = value;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(625)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC1(Cairo_obj,set_fillRule,return )

Dynamic Cairo_obj::get_groupTarget( ){
	HX_STACK_FRAME("lime.graphics.cairo.Cairo","get_groupTarget",0x8da19cf1,"lime.graphics.cairo.Cairo.get_groupTarget","lime/graphics/cairo/Cairo.hx",630,0x0918a4c7)
	HX_STACK_THIS(this)
	HX_STACK_LINE(633)
	Dynamic tmp = this->handle;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(633)
	Dynamic tmp1 = ::lime::graphics::cairo::Cairo_obj::lime_cairo_get_group_target(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(633)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(Cairo_obj,get_groupTarget,return )

bool Cairo_obj::get_hasCurrentPoint( ){
	HX_STACK_FRAME("lime.graphics.cairo.Cairo","get_hasCurrentPoint",0x7885e152,"lime.graphics.cairo.Cairo.get_hasCurrentPoint","lime/graphics/cairo/Cairo.hx",641,0x0918a4c7)
	HX_STACK_THIS(this)
	HX_STACK_LINE(644)
	Dynamic tmp = this->handle;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(644)
	bool tmp1 = ::lime::graphics::cairo::Cairo_obj::lime_cairo_has_current_point(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(644)
	return tmp1;
	HX_STACK_LINE(647)
	return false;
}


HX_DEFINE_DYNAMIC_FUNC0(Cairo_obj,get_hasCurrentPoint,return )

int Cairo_obj::get_lineCap( ){
	HX_STACK_FRAME("lime.graphics.cairo.Cairo","get_lineCap",0x4e10b8ff,"lime.graphics.cairo.Cairo.get_lineCap","lime/graphics/cairo/Cairo.hx",652,0x0918a4c7)
	HX_STACK_THIS(this)
	HX_STACK_LINE(655)
	Dynamic tmp = this->handle;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(655)
	int tmp1 = ::lime::graphics::cairo::Cairo_obj::lime_cairo_get_line_cap(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(655)
	return tmp1;
	HX_STACK_LINE(658)
	return (int)0;
}


HX_DEFINE_DYNAMIC_FUNC0(Cairo_obj,get_lineCap,return )

int Cairo_obj::set_lineCap( int value){
	HX_STACK_FRAME("lime.graphics.cairo.Cairo","set_lineCap",0x587dc00b,"lime.graphics.cairo.Cairo.set_lineCap","lime/graphics/cairo/Cairo.hx",663,0x0918a4c7)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(666)
	Dynamic tmp = this->handle;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(666)
	int tmp1 = value;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(666)
	::lime::graphics::cairo::Cairo_obj::lime_cairo_set_line_cap(tmp,tmp1);
	HX_STACK_LINE(669)
	int tmp2 = value;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(669)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC1(Cairo_obj,set_lineCap,return )

int Cairo_obj::get_lineJoin( ){
	HX_STACK_FRAME("lime.graphics.cairo.Cairo","get_lineJoin",0x053c3e5d,"lime.graphics.cairo.Cairo.get_lineJoin","lime/graphics/cairo/Cairo.hx",674,0x0918a4c7)
	HX_STACK_THIS(this)
	HX_STACK_LINE(677)
	Dynamic tmp = this->handle;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(677)
	int tmp1 = ::lime::graphics::cairo::Cairo_obj::lime_cairo_get_line_join(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(677)
	return tmp1;
	HX_STACK_LINE(680)
	return (int)0;
}


HX_DEFINE_DYNAMIC_FUNC0(Cairo_obj,get_lineJoin,return )

int Cairo_obj::set_lineJoin( int value){
	HX_STACK_FRAME("lime.graphics.cairo.Cairo","set_lineJoin",0x1a3561d1,"lime.graphics.cairo.Cairo.set_lineJoin","lime/graphics/cairo/Cairo.hx",685,0x0918a4c7)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(688)
	Dynamic tmp = this->handle;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(688)
	int tmp1 = value;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(688)
	::lime::graphics::cairo::Cairo_obj::lime_cairo_set_line_join(tmp,tmp1);
	HX_STACK_LINE(691)
	int tmp2 = value;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(691)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC1(Cairo_obj,set_lineJoin,return )

Float Cairo_obj::get_lineWidth( ){
	HX_STACK_FRAME("lime.graphics.cairo.Cairo","get_lineWidth",0x07b4d033,"lime.graphics.cairo.Cairo.get_lineWidth","lime/graphics/cairo/Cairo.hx",696,0x0918a4c7)
	HX_STACK_THIS(this)
	HX_STACK_LINE(699)
	Dynamic tmp = this->handle;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(699)
	Float tmp1 = ::lime::graphics::cairo::Cairo_obj::lime_cairo_get_line_width(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(699)
	return tmp1;
	HX_STACK_LINE(702)
	return (int)0;
}


HX_DEFINE_DYNAMIC_FUNC0(Cairo_obj,get_lineWidth,return )

Float Cairo_obj::set_lineWidth( Float value){
	HX_STACK_FRAME("lime.graphics.cairo.Cairo","set_lineWidth",0x4cbab23f,"lime.graphics.cairo.Cairo.set_lineWidth","lime/graphics/cairo/Cairo.hx",707,0x0918a4c7)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(710)
	Dynamic tmp = this->handle;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(710)
	Float tmp1 = value;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(710)
	::lime::graphics::cairo::Cairo_obj::lime_cairo_set_line_width(tmp,tmp1);
	HX_STACK_LINE(713)
	Float tmp2 = value;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(713)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC1(Cairo_obj,set_lineWidth,return )

::lime::math::Matrix3 Cairo_obj::get_matrix( ){
	HX_STACK_FRAME("lime.graphics.cairo.Cairo","get_matrix",0x1c6bcce0,"lime.graphics.cairo.Cairo.get_matrix","lime/graphics/cairo/Cairo.hx",718,0x0918a4c7)
	HX_STACK_THIS(this)
	HX_STACK_LINE(721)
	Dynamic tmp = this->handle;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(721)
	Dynamic tmp1 = ::lime::graphics::cairo::Cairo_obj::lime_cairo_get_matrix(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(721)
	Dynamic m = tmp1;		HX_STACK_VAR(m,"m");
	HX_STACK_LINE(722)
	::lime::math::Matrix3 tmp2 = ::lime::math::Matrix3_obj::__new(m->__Field(HX_HCSTRING("a","\x61","\x00","\x00","\x00"), hx::paccDynamic ),m->__Field(HX_HCSTRING("b","\x62","\x00","\x00","\x00"), hx::paccDynamic ),m->__Field(HX_HCSTRING("c","\x63","\x00","\x00","\x00"), hx::paccDynamic ),m->__Field(HX_HCSTRING("d","\x64","\x00","\x00","\x00"), hx::paccDynamic ),m->__Field(HX_HCSTRING("tx","\x84","\x65","\x00","\x00"), hx::paccDynamic ),m->__Field(HX_HCSTRING("ty","\x85","\x65","\x00","\x00"), hx::paccDynamic ));		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(722)
	return tmp2;
	HX_STACK_LINE(725)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Cairo_obj,get_matrix,return )

::lime::math::Matrix3 Cairo_obj::set_matrix( ::lime::math::Matrix3 value){
	HX_STACK_FRAME("lime.graphics.cairo.Cairo","set_matrix",0x1fe96b54,"lime.graphics.cairo.Cairo.set_matrix","lime/graphics/cairo/Cairo.hx",730,0x0918a4c7)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(733)
	Dynamic tmp = this->handle;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(733)
	::lime::math::Matrix3 tmp1 = value;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(733)
	::lime::graphics::cairo::Cairo_obj::lime_cairo_set_matrix(tmp,tmp1);
	HX_STACK_LINE(736)
	::lime::math::Matrix3 tmp2 = value;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(736)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC1(Cairo_obj,set_matrix,return )

Float Cairo_obj::get_miterLimit( ){
	HX_STACK_FRAME("lime.graphics.cairo.Cairo","get_miterLimit",0xea472f15,"lime.graphics.cairo.Cairo.get_miterLimit","lime/graphics/cairo/Cairo.hx",741,0x0918a4c7)
	HX_STACK_THIS(this)
	HX_STACK_LINE(744)
	Dynamic tmp = this->handle;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(744)
	Float tmp1 = ::lime::graphics::cairo::Cairo_obj::lime_cairo_get_miter_limit(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(744)
	return tmp1;
	HX_STACK_LINE(747)
	return (int)0;
}


HX_DEFINE_DYNAMIC_FUNC0(Cairo_obj,get_miterLimit,return )

Float Cairo_obj::set_miterLimit( Float value){
	HX_STACK_FRAME("lime.graphics.cairo.Cairo","set_miterLimit",0x0a671789,"lime.graphics.cairo.Cairo.set_miterLimit","lime/graphics/cairo/Cairo.hx",752,0x0918a4c7)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(755)
	Dynamic tmp = this->handle;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(755)
	Float tmp1 = value;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(755)
	::lime::graphics::cairo::Cairo_obj::lime_cairo_set_miter_limit(tmp,tmp1);
	HX_STACK_LINE(758)
	Float tmp2 = value;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(758)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC1(Cairo_obj,set_miterLimit,return )

int Cairo_obj::get_operator( ){
	HX_STACK_FRAME("lime.graphics.cairo.Cairo","get_operator",0xc620d803,"lime.graphics.cairo.Cairo.get_operator","lime/graphics/cairo/Cairo.hx",763,0x0918a4c7)
	HX_STACK_THIS(this)
	HX_STACK_LINE(766)
	Dynamic tmp = this->handle;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(766)
	int tmp1 = ::lime::graphics::cairo::Cairo_obj::lime_cairo_get_operator(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(766)
	return tmp1;
	HX_STACK_LINE(769)
	return (int)0;
}


HX_DEFINE_DYNAMIC_FUNC0(Cairo_obj,get_operator,return )

int Cairo_obj::set_operator( int value){
	HX_STACK_FRAME("lime.graphics.cairo.Cairo","set_operator",0xdb19fb77,"lime.graphics.cairo.Cairo.set_operator","lime/graphics/cairo/Cairo.hx",774,0x0918a4c7)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(777)
	Dynamic tmp = this->handle;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(777)
	int tmp1 = value;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(777)
	::lime::graphics::cairo::Cairo_obj::lime_cairo_set_operator(tmp,tmp1);
	HX_STACK_LINE(780)
	int tmp2 = value;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(780)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC1(Cairo_obj,set_operator,return )

int Cairo_obj::get_referenceCount( ){
	HX_STACK_FRAME("lime.graphics.cairo.Cairo","get_referenceCount",0xb5be5aa3,"lime.graphics.cairo.Cairo.get_referenceCount","lime/graphics/cairo/Cairo.hx",785,0x0918a4c7)
	HX_STACK_THIS(this)
	HX_STACK_LINE(788)
	int tmp = ::lime::graphics::cairo::Cairo_obj::lime_cairo_get_reference_count();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(788)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(Cairo_obj,get_referenceCount,return )

Dynamic Cairo_obj::get_source( ){
	HX_STACK_FRAME("lime.graphics.cairo.Cairo","get_source",0x92d5477a,"lime.graphics.cairo.Cairo.get_source","lime/graphics/cairo/Cairo.hx",796,0x0918a4c7)
	HX_STACK_THIS(this)
	HX_STACK_LINE(799)
	Dynamic tmp = this->handle;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(799)
	Dynamic tmp1 = ::lime::graphics::cairo::Cairo_obj::lime_cairo_get_source(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(799)
	return tmp1;
	HX_STACK_LINE(802)
	return ((Dynamic)((int)0));
}


HX_DEFINE_DYNAMIC_FUNC0(Cairo_obj,get_source,return )

Dynamic Cairo_obj::set_source( Dynamic value){
	HX_STACK_FRAME("lime.graphics.cairo.Cairo","set_source",0x9652e5ee,"lime.graphics.cairo.Cairo.set_source","lime/graphics/cairo/Cairo.hx",807,0x0918a4c7)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(810)
	Dynamic tmp = this->handle;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(810)
	Dynamic tmp1 = value;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(810)
	::lime::graphics::cairo::Cairo_obj::lime_cairo_set_source(tmp,tmp1);
	HX_STACK_LINE(813)
	Dynamic tmp2 = value;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(813)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC1(Cairo_obj,set_source,return )

Dynamic Cairo_obj::get_target( ){
	HX_STACK_FRAME("lime.graphics.cairo.Cairo","get_target",0xe79089f0,"lime.graphics.cairo.Cairo.get_target","lime/graphics/cairo/Cairo.hx",818,0x0918a4c7)
	HX_STACK_THIS(this)
	HX_STACK_LINE(821)
	Dynamic tmp = this->handle;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(821)
	Dynamic tmp1 = ::lime::graphics::cairo::Cairo_obj::lime_cairo_get_target(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(821)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(Cairo_obj,get_target,return )

Float Cairo_obj::get_tolerance( ){
	HX_STACK_FRAME("lime.graphics.cairo.Cairo","get_tolerance",0x29d353ce,"lime.graphics.cairo.Cairo.get_tolerance","lime/graphics/cairo/Cairo.hx",829,0x0918a4c7)
	HX_STACK_THIS(this)
	HX_STACK_LINE(832)
	Float tmp = ::lime::graphics::cairo::Cairo_obj::lime_cairo_get_tolerance();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(832)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(Cairo_obj,get_tolerance,return )

Float Cairo_obj::set_tolerance( Float value){
	HX_STACK_FRAME("lime.graphics.cairo.Cairo","set_tolerance",0x6ed935da,"lime.graphics.cairo.Cairo.set_tolerance","lime/graphics/cairo/Cairo.hx",840,0x0918a4c7)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(843)
	Float tmp = value;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(843)
	::lime::graphics::cairo::Cairo_obj::lime_cairo_set_tolerance(tmp);
	HX_STACK_LINE(846)
	Float tmp1 = value;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(846)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC1(Cairo_obj,set_tolerance,return )

int Cairo_obj::version;

::String Cairo_obj::versionString;

int Cairo_obj::get_version( ){
	HX_STACK_FRAME("lime.graphics.cairo.Cairo","get_version",0xab721b99,"lime.graphics.cairo.Cairo.get_version","lime/graphics/cairo/Cairo.hx",851,0x0918a4c7)
	HX_STACK_LINE(854)
	int tmp = ::lime::graphics::cairo::Cairo_obj::lime_cairo_version();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(854)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Cairo_obj,get_version,return )

::String Cairo_obj::get_versionString( ){
	HX_STACK_FRAME("lime.graphics.cairo.Cairo","get_versionString",0xb090f14a,"lime.graphics.cairo.Cairo.get_versionString","lime/graphics/cairo/Cairo.hx",862,0x0918a4c7)
	HX_STACK_LINE(865)
	::String tmp = ::lime::graphics::cairo::Cairo_obj::lime_cairo_version_string();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(865)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Cairo_obj,get_versionString,return )

Dynamic Cairo_obj::lime_cairo_arc;

Dynamic Cairo_obj::lime_cairo_arc_negative;

Dynamic Cairo_obj::lime_cairo_clip;

Dynamic Cairo_obj::lime_cairo_clip_preserve;

Dynamic Cairo_obj::lime_cairo_clip_extents;

Dynamic Cairo_obj::lime_cairo_close_path;

Dynamic Cairo_obj::lime_cairo_copy_page;

Dynamic Cairo_obj::lime_cairo_create;

Dynamic Cairo_obj::lime_cairo_curve_to;

Dynamic Cairo_obj::lime_cairo_destroy;

Dynamic Cairo_obj::lime_cairo_fill;

Dynamic Cairo_obj::lime_cairo_fill_extents;

Dynamic Cairo_obj::lime_cairo_fill_preserve;

Dynamic Cairo_obj::lime_cairo_get_antialias;

Dynamic Cairo_obj::lime_cairo_get_current_point;

Dynamic Cairo_obj::lime_cairo_get_dash;

Dynamic Cairo_obj::lime_cairo_get_dash_count;

Dynamic Cairo_obj::lime_cairo_get_fill_rule;

Dynamic Cairo_obj::lime_cairo_get_group_target;

Dynamic Cairo_obj::lime_cairo_get_line_cap;

Dynamic Cairo_obj::lime_cairo_get_line_join;

Dynamic Cairo_obj::lime_cairo_get_line_width;

Dynamic Cairo_obj::lime_cairo_get_matrix;

Dynamic Cairo_obj::lime_cairo_get_miter_limit;

Dynamic Cairo_obj::lime_cairo_get_operator;

Dynamic Cairo_obj::lime_cairo_get_reference_count;

Dynamic Cairo_obj::lime_cairo_get_source;

Dynamic Cairo_obj::lime_cairo_get_target;

Dynamic Cairo_obj::lime_cairo_get_tolerance;

Dynamic Cairo_obj::lime_cairo_has_current_point;

Dynamic Cairo_obj::lime_cairo_identity_matrix;

Dynamic Cairo_obj::lime_cairo_in_clip;

Dynamic Cairo_obj::lime_cairo_in_fill;

Dynamic Cairo_obj::lime_cairo_in_stroke;

Dynamic Cairo_obj::lime_cairo_line_to;

Dynamic Cairo_obj::lime_cairo_mask;

Dynamic Cairo_obj::lime_cairo_mask_surface;

Dynamic Cairo_obj::lime_cairo_move_to;

Dynamic Cairo_obj::lime_cairo_new_path;

Dynamic Cairo_obj::lime_cairo_paint;

Dynamic Cairo_obj::lime_cairo_paint_with_alpha;

Dynamic Cairo_obj::lime_cairo_pop_group;

Dynamic Cairo_obj::lime_cairo_pop_group_to_source;

Dynamic Cairo_obj::lime_cairo_push_group;

Dynamic Cairo_obj::lime_cairo_push_group_with_content;

Dynamic Cairo_obj::lime_cairo_rectangle;

Dynamic Cairo_obj::lime_cairo_reference;

Dynamic Cairo_obj::lime_cairo_rel_curve_to;

Dynamic Cairo_obj::lime_cairo_rel_line_to;

Dynamic Cairo_obj::lime_cairo_rel_move_to;

Dynamic Cairo_obj::lime_cairo_reset_clip;

Dynamic Cairo_obj::lime_cairo_restore;

Dynamic Cairo_obj::lime_cairo_save;

Dynamic Cairo_obj::lime_cairo_set_antialias;

Dynamic Cairo_obj::lime_cairo_set_dash;

Dynamic Cairo_obj::lime_cairo_set_font_face;

Dynamic Cairo_obj::lime_cairo_set_font_size;

Dynamic Cairo_obj::lime_cairo_set_fill_rule;

Dynamic Cairo_obj::lime_cairo_set_font_options;

Dynamic Cairo_obj::lime_cairo_get_font_options;

Dynamic Cairo_obj::lime_cairo_set_line_cap;

Dynamic Cairo_obj::lime_cairo_set_line_join;

Dynamic Cairo_obj::lime_cairo_set_line_width;

Dynamic Cairo_obj::lime_cairo_set_matrix;

Dynamic Cairo_obj::lime_cairo_set_miter_limit;

Dynamic Cairo_obj::lime_cairo_set_operator;

Dynamic Cairo_obj::lime_cairo_set_source;

Dynamic Cairo_obj::lime_cairo_set_source_rgb;

Dynamic Cairo_obj::lime_cairo_set_source_rgba;

Dynamic Cairo_obj::lime_cairo_set_source_surface;

Dynamic Cairo_obj::lime_cairo_set_tolerance;

Dynamic Cairo_obj::lime_cairo_show_page;

Dynamic Cairo_obj::lime_cairo_show_text;

Dynamic Cairo_obj::lime_cairo_status;

Dynamic Cairo_obj::lime_cairo_stroke;

Dynamic Cairo_obj::lime_cairo_stroke_extents;

Dynamic Cairo_obj::lime_cairo_stroke_preserve;

Dynamic Cairo_obj::lime_cairo_transform;

Dynamic Cairo_obj::lime_cairo_rotate;

Dynamic Cairo_obj::lime_cairo_scale;

Dynamic Cairo_obj::lime_cairo_translate;

Dynamic Cairo_obj::lime_cairo_version;

Dynamic Cairo_obj::lime_cairo_version_string;


Cairo_obj::Cairo_obj()
{
}

void Cairo_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Cairo);
	HX_MARK_MEMBER_NAME(target,"target");
	HX_MARK_MEMBER_NAME(userData,"userData");
	HX_MARK_MEMBER_NAME(handle,"handle");
	HX_MARK_END_CLASS();
}

void Cairo_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(target,"target");
	HX_VISIT_MEMBER_NAME(userData,"userData");
	HX_VISIT_MEMBER_NAME(handle,"handle");
}

Dynamic Cairo_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"arc") ) { return arc_dyn(); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"dash") ) { if (inCallProp == hx::paccAlways) return get_dash(); }
		if (HX_FIELD_EQ(inName,"clip") ) { return clip_dyn(); }
		if (HX_FIELD_EQ(inName,"fill") ) { return fill_dyn(); }
		if (HX_FIELD_EQ(inName,"mask") ) { return mask_dyn(); }
		if (HX_FIELD_EQ(inName,"save") ) { return save_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"paint") ) { return paint_dyn(); }
		if (HX_FIELD_EQ(inName,"scale") ) { return scale_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"matrix") ) { if (inCallProp == hx::paccAlways) return get_matrix(); }
		if (HX_FIELD_EQ(inName,"source") ) { if (inCallProp == hx::paccAlways) return get_source(); }
		if (HX_FIELD_EQ(inName,"target") ) { return inCallProp == hx::paccAlways ? get_target() : target; }
		if (HX_FIELD_EQ(inName,"handle") ) { return handle; }
		if (HX_FIELD_EQ(inName,"inClip") ) { return inClip_dyn(); }
		if (HX_FIELD_EQ(inName,"inFill") ) { return inFill_dyn(); }
		if (HX_FIELD_EQ(inName,"lineTo") ) { return lineTo_dyn(); }
		if (HX_FIELD_EQ(inName,"moveTo") ) { return moveTo_dyn(); }
		if (HX_FIELD_EQ(inName,"status") ) { return status_dyn(); }
		if (HX_FIELD_EQ(inName,"stroke") ) { return stroke_dyn(); }
		if (HX_FIELD_EQ(inName,"rotate") ) { return rotate_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"lineCap") ) { if (inCallProp == hx::paccAlways) return get_lineCap(); }
		if (HX_FIELD_EQ(inName,"curveTo") ) { return curveTo_dyn(); }
		if (HX_FIELD_EQ(inName,"destroy") ) { return destroy_dyn(); }
		if (HX_FIELD_EQ(inName,"newPath") ) { return newPath_dyn(); }
		if (HX_FIELD_EQ(inName,"restore") ) { return restore_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"fillRule") ) { if (inCallProp == hx::paccAlways) return get_fillRule(); }
		if (HX_FIELD_EQ(inName,"lineJoin") ) { if (inCallProp == hx::paccAlways) return get_lineJoin(); }
		if (HX_FIELD_EQ(inName,"operator") ) { if (inCallProp == hx::paccAlways) return get_operator(); }
		if (HX_FIELD_EQ(inName,"userData") ) { return userData; }
		if (HX_FIELD_EQ(inName,"recreate") ) { return recreate_dyn(); }
		if (HX_FIELD_EQ(inName,"copyPage") ) { return copyPage_dyn(); }
		if (HX_FIELD_EQ(inName,"inStroke") ) { return inStroke_dyn(); }
		if (HX_FIELD_EQ(inName,"popGroup") ) { return popGroup_dyn(); }
		if (HX_FIELD_EQ(inName,"showPage") ) { return showPage_dyn(); }
		if (HX_FIELD_EQ(inName,"showText") ) { return showText_dyn(); }
		if (HX_FIELD_EQ(inName,"get_dash") ) { return get_dash_dyn(); }
		if (HX_FIELD_EQ(inName,"set_dash") ) { return set_dash_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"antialias") ) { if (inCallProp == hx::paccAlways) return get_antialias(); }
		if (HX_FIELD_EQ(inName,"dashCount") ) { if (inCallProp == hx::paccAlways) return get_dashCount(); }
		if (HX_FIELD_EQ(inName,"lineWidth") ) { if (inCallProp == hx::paccAlways) return get_lineWidth(); }
		if (HX_FIELD_EQ(inName,"tolerance") ) { if (inCallProp == hx::paccAlways) return get_tolerance(); }
		if (HX_FIELD_EQ(inName,"closePath") ) { return closePath_dyn(); }
		if (HX_FIELD_EQ(inName,"pushGroup") ) { return pushGroup_dyn(); }
		if (HX_FIELD_EQ(inName,"rectangle") ) { return rectangle_dyn(); }
		if (HX_FIELD_EQ(inName,"reference") ) { return reference_dyn(); }
		if (HX_FIELD_EQ(inName,"relLineTo") ) { return relLineTo_dyn(); }
		if (HX_FIELD_EQ(inName,"relMoveTo") ) { return relMoveTo_dyn(); }
		if (HX_FIELD_EQ(inName,"resetClip") ) { return resetClip_dyn(); }
		if (HX_FIELD_EQ(inName,"transform") ) { return transform_dyn(); }
		if (HX_FIELD_EQ(inName,"translate") ) { return translate_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"miterLimit") ) { if (inCallProp == hx::paccAlways) return get_miterLimit(); }
		if (HX_FIELD_EQ(inName,"relCurveTo") ) { return relCurveTo_dyn(); }
		if (HX_FIELD_EQ(inName,"get_matrix") ) { return get_matrix_dyn(); }
		if (HX_FIELD_EQ(inName,"set_matrix") ) { return set_matrix_dyn(); }
		if (HX_FIELD_EQ(inName,"get_source") ) { return get_source_dyn(); }
		if (HX_FIELD_EQ(inName,"set_source") ) { return set_source_dyn(); }
		if (HX_FIELD_EQ(inName,"get_target") ) { return get_target_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"groupTarget") ) { if (inCallProp == hx::paccAlways) return get_groupTarget(); }
		if (HX_FIELD_EQ(inName,"arcNegative") ) { return arcNegative_dyn(); }
		if (HX_FIELD_EQ(inName,"clipExtents") ) { return clipExtents_dyn(); }
		if (HX_FIELD_EQ(inName,"fillExtents") ) { return fillExtents_dyn(); }
		if (HX_FIELD_EQ(inName,"maskSurface") ) { return maskSurface_dyn(); }
		if (HX_FIELD_EQ(inName,"setFontFace") ) { return setFontFace_dyn(); }
		if (HX_FIELD_EQ(inName,"setFontSize") ) { return setFontSize_dyn(); }
		if (HX_FIELD_EQ(inName,"get_lineCap") ) { return get_lineCap_dyn(); }
		if (HX_FIELD_EQ(inName,"set_lineCap") ) { return set_lineCap_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"currentPoint") ) { if (inCallProp == hx::paccAlways) return get_currentPoint(); }
		if (HX_FIELD_EQ(inName,"clipPreserve") ) { return clipPreserve_dyn(); }
		if (HX_FIELD_EQ(inName,"fillPreserve") ) { return fillPreserve_dyn(); }
		if (HX_FIELD_EQ(inName,"setSourceRGB") ) { return setSourceRGB_dyn(); }
		if (HX_FIELD_EQ(inName,"get_fillRule") ) { return get_fillRule_dyn(); }
		if (HX_FIELD_EQ(inName,"set_fillRule") ) { return set_fillRule_dyn(); }
		if (HX_FIELD_EQ(inName,"get_lineJoin") ) { return get_lineJoin_dyn(); }
		if (HX_FIELD_EQ(inName,"set_lineJoin") ) { return set_lineJoin_dyn(); }
		if (HX_FIELD_EQ(inName,"get_operator") ) { return get_operator_dyn(); }
		if (HX_FIELD_EQ(inName,"set_operator") ) { return set_operator_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"setSourceRGBA") ) { return setSourceRGBA_dyn(); }
		if (HX_FIELD_EQ(inName,"strokeExtents") ) { return strokeExtents_dyn(); }
		if (HX_FIELD_EQ(inName,"get_antialias") ) { return get_antialias_dyn(); }
		if (HX_FIELD_EQ(inName,"set_antialias") ) { return set_antialias_dyn(); }
		if (HX_FIELD_EQ(inName,"get_dashCount") ) { return get_dashCount_dyn(); }
		if (HX_FIELD_EQ(inName,"get_lineWidth") ) { return get_lineWidth_dyn(); }
		if (HX_FIELD_EQ(inName,"set_lineWidth") ) { return set_lineWidth_dyn(); }
		if (HX_FIELD_EQ(inName,"get_tolerance") ) { return get_tolerance_dyn(); }
		if (HX_FIELD_EQ(inName,"set_tolerance") ) { return set_tolerance_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"referenceCount") ) { if (inCallProp == hx::paccAlways) return get_referenceCount(); }
		if (HX_FIELD_EQ(inName,"identityMatrix") ) { return identityMatrix_dyn(); }
		if (HX_FIELD_EQ(inName,"paintWithAlpha") ) { return paintWithAlpha_dyn(); }
		if (HX_FIELD_EQ(inName,"getFontOptions") ) { return getFontOptions_dyn(); }
		if (HX_FIELD_EQ(inName,"setFontOptions") ) { return setFontOptions_dyn(); }
		if (HX_FIELD_EQ(inName,"strokePreserve") ) { return strokePreserve_dyn(); }
		if (HX_FIELD_EQ(inName,"get_miterLimit") ) { return get_miterLimit_dyn(); }
		if (HX_FIELD_EQ(inName,"set_miterLimit") ) { return set_miterLimit_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"hasCurrentPoint") ) { if (inCallProp == hx::paccAlways) return get_hasCurrentPoint(); }
		if (HX_FIELD_EQ(inName,"get_groupTarget") ) { return get_groupTarget_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"popGroupToSource") ) { return popGroupToSource_dyn(); }
		if (HX_FIELD_EQ(inName,"setSourceSurface") ) { return setSourceSurface_dyn(); }
		if (HX_FIELD_EQ(inName,"get_currentPoint") ) { return get_currentPoint_dyn(); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"get_referenceCount") ) { return get_referenceCount_dyn(); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"get_hasCurrentPoint") ) { return get_hasCurrentPoint_dyn(); }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"pushGroupWithContent") ) { return pushGroupWithContent_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

bool Cairo_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"version") ) { outValue = inCallProp == hx::paccAlways ? get_version() : version; return true; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"get_version") ) { outValue = get_version_dyn(); return true;  }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"versionString") ) { outValue = inCallProp == hx::paccAlways ? get_versionString() : versionString; return true; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"lime_cairo_arc") ) { outValue = lime_cairo_arc; return true;  }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"lime_cairo_clip") ) { outValue = lime_cairo_clip; return true;  }
		if (HX_FIELD_EQ(inName,"lime_cairo_fill") ) { outValue = lime_cairo_fill; return true;  }
		if (HX_FIELD_EQ(inName,"lime_cairo_mask") ) { outValue = lime_cairo_mask; return true;  }
		if (HX_FIELD_EQ(inName,"lime_cairo_save") ) { outValue = lime_cairo_save; return true;  }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"lime_cairo_paint") ) { outValue = lime_cairo_paint; return true;  }
		if (HX_FIELD_EQ(inName,"lime_cairo_scale") ) { outValue = lime_cairo_scale; return true;  }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"get_versionString") ) { outValue = get_versionString_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"lime_cairo_create") ) { outValue = lime_cairo_create; return true;  }
		if (HX_FIELD_EQ(inName,"lime_cairo_status") ) { outValue = lime_cairo_status; return true;  }
		if (HX_FIELD_EQ(inName,"lime_cairo_stroke") ) { outValue = lime_cairo_stroke; return true;  }
		if (HX_FIELD_EQ(inName,"lime_cairo_rotate") ) { outValue = lime_cairo_rotate; return true;  }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"lime_cairo_destroy") ) { outValue = lime_cairo_destroy; return true;  }
		if (HX_FIELD_EQ(inName,"lime_cairo_in_clip") ) { outValue = lime_cairo_in_clip; return true;  }
		if (HX_FIELD_EQ(inName,"lime_cairo_in_fill") ) { outValue = lime_cairo_in_fill; return true;  }
		if (HX_FIELD_EQ(inName,"lime_cairo_line_to") ) { outValue = lime_cairo_line_to; return true;  }
		if (HX_FIELD_EQ(inName,"lime_cairo_move_to") ) { outValue = lime_cairo_move_to; return true;  }
		if (HX_FIELD_EQ(inName,"lime_cairo_restore") ) { outValue = lime_cairo_restore; return true;  }
		if (HX_FIELD_EQ(inName,"lime_cairo_version") ) { outValue = lime_cairo_version; return true;  }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"lime_cairo_curve_to") ) { outValue = lime_cairo_curve_to; return true;  }
		if (HX_FIELD_EQ(inName,"lime_cairo_get_dash") ) { outValue = lime_cairo_get_dash; return true;  }
		if (HX_FIELD_EQ(inName,"lime_cairo_new_path") ) { outValue = lime_cairo_new_path; return true;  }
		if (HX_FIELD_EQ(inName,"lime_cairo_set_dash") ) { outValue = lime_cairo_set_dash; return true;  }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"lime_cairo_copy_page") ) { outValue = lime_cairo_copy_page; return true;  }
		if (HX_FIELD_EQ(inName,"lime_cairo_in_stroke") ) { outValue = lime_cairo_in_stroke; return true;  }
		if (HX_FIELD_EQ(inName,"lime_cairo_pop_group") ) { outValue = lime_cairo_pop_group; return true;  }
		if (HX_FIELD_EQ(inName,"lime_cairo_rectangle") ) { outValue = lime_cairo_rectangle; return true;  }
		if (HX_FIELD_EQ(inName,"lime_cairo_reference") ) { outValue = lime_cairo_reference; return true;  }
		if (HX_FIELD_EQ(inName,"lime_cairo_show_page") ) { outValue = lime_cairo_show_page; return true;  }
		if (HX_FIELD_EQ(inName,"lime_cairo_show_text") ) { outValue = lime_cairo_show_text; return true;  }
		if (HX_FIELD_EQ(inName,"lime_cairo_transform") ) { outValue = lime_cairo_transform; return true;  }
		if (HX_FIELD_EQ(inName,"lime_cairo_translate") ) { outValue = lime_cairo_translate; return true;  }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"lime_cairo_close_path") ) { outValue = lime_cairo_close_path; return true;  }
		if (HX_FIELD_EQ(inName,"lime_cairo_get_matrix") ) { outValue = lime_cairo_get_matrix; return true;  }
		if (HX_FIELD_EQ(inName,"lime_cairo_get_source") ) { outValue = lime_cairo_get_source; return true;  }
		if (HX_FIELD_EQ(inName,"lime_cairo_get_target") ) { outValue = lime_cairo_get_target; return true;  }
		if (HX_FIELD_EQ(inName,"lime_cairo_push_group") ) { outValue = lime_cairo_push_group; return true;  }
		if (HX_FIELD_EQ(inName,"lime_cairo_reset_clip") ) { outValue = lime_cairo_reset_clip; return true;  }
		if (HX_FIELD_EQ(inName,"lime_cairo_set_matrix") ) { outValue = lime_cairo_set_matrix; return true;  }
		if (HX_FIELD_EQ(inName,"lime_cairo_set_source") ) { outValue = lime_cairo_set_source; return true;  }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"lime_cairo_rel_line_to") ) { outValue = lime_cairo_rel_line_to; return true;  }
		if (HX_FIELD_EQ(inName,"lime_cairo_rel_move_to") ) { outValue = lime_cairo_rel_move_to; return true;  }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"lime_cairo_arc_negative") ) { outValue = lime_cairo_arc_negative; return true;  }
		if (HX_FIELD_EQ(inName,"lime_cairo_clip_extents") ) { outValue = lime_cairo_clip_extents; return true;  }
		if (HX_FIELD_EQ(inName,"lime_cairo_fill_extents") ) { outValue = lime_cairo_fill_extents; return true;  }
		if (HX_FIELD_EQ(inName,"lime_cairo_get_line_cap") ) { outValue = lime_cairo_get_line_cap; return true;  }
		if (HX_FIELD_EQ(inName,"lime_cairo_get_operator") ) { outValue = lime_cairo_get_operator; return true;  }
		if (HX_FIELD_EQ(inName,"lime_cairo_mask_surface") ) { outValue = lime_cairo_mask_surface; return true;  }
		if (HX_FIELD_EQ(inName,"lime_cairo_rel_curve_to") ) { outValue = lime_cairo_rel_curve_to; return true;  }
		if (HX_FIELD_EQ(inName,"lime_cairo_set_line_cap") ) { outValue = lime_cairo_set_line_cap; return true;  }
		if (HX_FIELD_EQ(inName,"lime_cairo_set_operator") ) { outValue = lime_cairo_set_operator; return true;  }
		break;
	case 24:
		if (HX_FIELD_EQ(inName,"lime_cairo_clip_preserve") ) { outValue = lime_cairo_clip_preserve; return true;  }
		if (HX_FIELD_EQ(inName,"lime_cairo_fill_preserve") ) { outValue = lime_cairo_fill_preserve; return true;  }
		if (HX_FIELD_EQ(inName,"lime_cairo_get_antialias") ) { outValue = lime_cairo_get_antialias; return true;  }
		if (HX_FIELD_EQ(inName,"lime_cairo_get_fill_rule") ) { outValue = lime_cairo_get_fill_rule; return true;  }
		if (HX_FIELD_EQ(inName,"lime_cairo_get_line_join") ) { outValue = lime_cairo_get_line_join; return true;  }
		if (HX_FIELD_EQ(inName,"lime_cairo_get_tolerance") ) { outValue = lime_cairo_get_tolerance; return true;  }
		if (HX_FIELD_EQ(inName,"lime_cairo_set_antialias") ) { outValue = lime_cairo_set_antialias; return true;  }
		if (HX_FIELD_EQ(inName,"lime_cairo_set_font_face") ) { outValue = lime_cairo_set_font_face; return true;  }
		if (HX_FIELD_EQ(inName,"lime_cairo_set_font_size") ) { outValue = lime_cairo_set_font_size; return true;  }
		if (HX_FIELD_EQ(inName,"lime_cairo_set_fill_rule") ) { outValue = lime_cairo_set_fill_rule; return true;  }
		if (HX_FIELD_EQ(inName,"lime_cairo_set_line_join") ) { outValue = lime_cairo_set_line_join; return true;  }
		if (HX_FIELD_EQ(inName,"lime_cairo_set_tolerance") ) { outValue = lime_cairo_set_tolerance; return true;  }
		break;
	case 25:
		if (HX_FIELD_EQ(inName,"lime_cairo_get_dash_count") ) { outValue = lime_cairo_get_dash_count; return true;  }
		if (HX_FIELD_EQ(inName,"lime_cairo_get_line_width") ) { outValue = lime_cairo_get_line_width; return true;  }
		if (HX_FIELD_EQ(inName,"lime_cairo_set_line_width") ) { outValue = lime_cairo_set_line_width; return true;  }
		if (HX_FIELD_EQ(inName,"lime_cairo_set_source_rgb") ) { outValue = lime_cairo_set_source_rgb; return true;  }
		if (HX_FIELD_EQ(inName,"lime_cairo_stroke_extents") ) { outValue = lime_cairo_stroke_extents; return true;  }
		if (HX_FIELD_EQ(inName,"lime_cairo_version_string") ) { outValue = lime_cairo_version_string; return true;  }
		break;
	case 26:
		if (HX_FIELD_EQ(inName,"lime_cairo_get_miter_limit") ) { outValue = lime_cairo_get_miter_limit; return true;  }
		if (HX_FIELD_EQ(inName,"lime_cairo_identity_matrix") ) { outValue = lime_cairo_identity_matrix; return true;  }
		if (HX_FIELD_EQ(inName,"lime_cairo_set_miter_limit") ) { outValue = lime_cairo_set_miter_limit; return true;  }
		if (HX_FIELD_EQ(inName,"lime_cairo_set_source_rgba") ) { outValue = lime_cairo_set_source_rgba; return true;  }
		if (HX_FIELD_EQ(inName,"lime_cairo_stroke_preserve") ) { outValue = lime_cairo_stroke_preserve; return true;  }
		break;
	case 27:
		if (HX_FIELD_EQ(inName,"lime_cairo_get_group_target") ) { outValue = lime_cairo_get_group_target; return true;  }
		if (HX_FIELD_EQ(inName,"lime_cairo_paint_with_alpha") ) { outValue = lime_cairo_paint_with_alpha; return true;  }
		if (HX_FIELD_EQ(inName,"lime_cairo_set_font_options") ) { outValue = lime_cairo_set_font_options; return true;  }
		if (HX_FIELD_EQ(inName,"lime_cairo_get_font_options") ) { outValue = lime_cairo_get_font_options; return true;  }
		break;
	case 28:
		if (HX_FIELD_EQ(inName,"lime_cairo_get_current_point") ) { outValue = lime_cairo_get_current_point; return true;  }
		if (HX_FIELD_EQ(inName,"lime_cairo_has_current_point") ) { outValue = lime_cairo_has_current_point; return true;  }
		break;
	case 29:
		if (HX_FIELD_EQ(inName,"lime_cairo_set_source_surface") ) { outValue = lime_cairo_set_source_surface; return true;  }
		break;
	case 30:
		if (HX_FIELD_EQ(inName,"lime_cairo_get_reference_count") ) { outValue = lime_cairo_get_reference_count; return true;  }
		if (HX_FIELD_EQ(inName,"lime_cairo_pop_group_to_source") ) { outValue = lime_cairo_pop_group_to_source; return true;  }
		break;
	case 34:
		if (HX_FIELD_EQ(inName,"lime_cairo_push_group_with_content") ) { outValue = lime_cairo_push_group_with_content; return true;  }
	}
	return false;
}

Dynamic Cairo_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"dash") ) { if (inCallProp == hx::paccAlways) return set_dash(inValue); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"matrix") ) { if (inCallProp == hx::paccAlways) return set_matrix(inValue); }
		if (HX_FIELD_EQ(inName,"source") ) { if (inCallProp == hx::paccAlways) return set_source(inValue); }
		if (HX_FIELD_EQ(inName,"target") ) { target=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"handle") ) { handle=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"lineCap") ) { if (inCallProp == hx::paccAlways) return set_lineCap(inValue); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"fillRule") ) { if (inCallProp == hx::paccAlways) return set_fillRule(inValue); }
		if (HX_FIELD_EQ(inName,"lineJoin") ) { if (inCallProp == hx::paccAlways) return set_lineJoin(inValue); }
		if (HX_FIELD_EQ(inName,"operator") ) { if (inCallProp == hx::paccAlways) return set_operator(inValue); }
		if (HX_FIELD_EQ(inName,"userData") ) { userData=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"antialias") ) { if (inCallProp == hx::paccAlways) return set_antialias(inValue); }
		if (HX_FIELD_EQ(inName,"lineWidth") ) { if (inCallProp == hx::paccAlways) return set_lineWidth(inValue); }
		if (HX_FIELD_EQ(inName,"tolerance") ) { if (inCallProp == hx::paccAlways) return set_tolerance(inValue); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"miterLimit") ) { if (inCallProp == hx::paccAlways) return set_miterLimit(inValue); }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool Cairo_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"version") ) { version=ioValue.Cast< int >(); return true; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"versionString") ) { versionString=ioValue.Cast< ::String >(); return true; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"lime_cairo_arc") ) { lime_cairo_arc=ioValue.Cast< Dynamic >(); return true; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"lime_cairo_clip") ) { lime_cairo_clip=ioValue.Cast< Dynamic >(); return true; }
		if (HX_FIELD_EQ(inName,"lime_cairo_fill") ) { lime_cairo_fill=ioValue.Cast< Dynamic >(); return true; }
		if (HX_FIELD_EQ(inName,"lime_cairo_mask") ) { lime_cairo_mask=ioValue.Cast< Dynamic >(); return true; }
		if (HX_FIELD_EQ(inName,"lime_cairo_save") ) { lime_cairo_save=ioValue.Cast< Dynamic >(); return true; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"lime_cairo_paint") ) { lime_cairo_paint=ioValue.Cast< Dynamic >(); return true; }
		if (HX_FIELD_EQ(inName,"lime_cairo_scale") ) { lime_cairo_scale=ioValue.Cast< Dynamic >(); return true; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"lime_cairo_create") ) { lime_cairo_create=ioValue.Cast< Dynamic >(); return true; }
		if (HX_FIELD_EQ(inName,"lime_cairo_status") ) { lime_cairo_status=ioValue.Cast< Dynamic >(); return true; }
		if (HX_FIELD_EQ(inName,"lime_cairo_stroke") ) { lime_cairo_stroke=ioValue.Cast< Dynamic >(); return true; }
		if (HX_FIELD_EQ(inName,"lime_cairo_rotate") ) { lime_cairo_rotate=ioValue.Cast< Dynamic >(); return true; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"lime_cairo_destroy") ) { lime_cairo_destroy=ioValue.Cast< Dynamic >(); return true; }
		if (HX_FIELD_EQ(inName,"lime_cairo_in_clip") ) { lime_cairo_in_clip=ioValue.Cast< Dynamic >(); return true; }
		if (HX_FIELD_EQ(inName,"lime_cairo_in_fill") ) { lime_cairo_in_fill=ioValue.Cast< Dynamic >(); return true; }
		if (HX_FIELD_EQ(inName,"lime_cairo_line_to") ) { lime_cairo_line_to=ioValue.Cast< Dynamic >(); return true; }
		if (HX_FIELD_EQ(inName,"lime_cairo_move_to") ) { lime_cairo_move_to=ioValue.Cast< Dynamic >(); return true; }
		if (HX_FIELD_EQ(inName,"lime_cairo_restore") ) { lime_cairo_restore=ioValue.Cast< Dynamic >(); return true; }
		if (HX_FIELD_EQ(inName,"lime_cairo_version") ) { lime_cairo_version=ioValue.Cast< Dynamic >(); return true; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"lime_cairo_curve_to") ) { lime_cairo_curve_to=ioValue.Cast< Dynamic >(); return true; }
		if (HX_FIELD_EQ(inName,"lime_cairo_get_dash") ) { lime_cairo_get_dash=ioValue.Cast< Dynamic >(); return true; }
		if (HX_FIELD_EQ(inName,"lime_cairo_new_path") ) { lime_cairo_new_path=ioValue.Cast< Dynamic >(); return true; }
		if (HX_FIELD_EQ(inName,"lime_cairo_set_dash") ) { lime_cairo_set_dash=ioValue.Cast< Dynamic >(); return true; }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"lime_cairo_copy_page") ) { lime_cairo_copy_page=ioValue.Cast< Dynamic >(); return true; }
		if (HX_FIELD_EQ(inName,"lime_cairo_in_stroke") ) { lime_cairo_in_stroke=ioValue.Cast< Dynamic >(); return true; }
		if (HX_FIELD_EQ(inName,"lime_cairo_pop_group") ) { lime_cairo_pop_group=ioValue.Cast< Dynamic >(); return true; }
		if (HX_FIELD_EQ(inName,"lime_cairo_rectangle") ) { lime_cairo_rectangle=ioValue.Cast< Dynamic >(); return true; }
		if (HX_FIELD_EQ(inName,"lime_cairo_reference") ) { lime_cairo_reference=ioValue.Cast< Dynamic >(); return true; }
		if (HX_FIELD_EQ(inName,"lime_cairo_show_page") ) { lime_cairo_show_page=ioValue.Cast< Dynamic >(); return true; }
		if (HX_FIELD_EQ(inName,"lime_cairo_show_text") ) { lime_cairo_show_text=ioValue.Cast< Dynamic >(); return true; }
		if (HX_FIELD_EQ(inName,"lime_cairo_transform") ) { lime_cairo_transform=ioValue.Cast< Dynamic >(); return true; }
		if (HX_FIELD_EQ(inName,"lime_cairo_translate") ) { lime_cairo_translate=ioValue.Cast< Dynamic >(); return true; }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"lime_cairo_close_path") ) { lime_cairo_close_path=ioValue.Cast< Dynamic >(); return true; }
		if (HX_FIELD_EQ(inName,"lime_cairo_get_matrix") ) { lime_cairo_get_matrix=ioValue.Cast< Dynamic >(); return true; }
		if (HX_FIELD_EQ(inName,"lime_cairo_get_source") ) { lime_cairo_get_source=ioValue.Cast< Dynamic >(); return true; }
		if (HX_FIELD_EQ(inName,"lime_cairo_get_target") ) { lime_cairo_get_target=ioValue.Cast< Dynamic >(); return true; }
		if (HX_FIELD_EQ(inName,"lime_cairo_push_group") ) { lime_cairo_push_group=ioValue.Cast< Dynamic >(); return true; }
		if (HX_FIELD_EQ(inName,"lime_cairo_reset_clip") ) { lime_cairo_reset_clip=ioValue.Cast< Dynamic >(); return true; }
		if (HX_FIELD_EQ(inName,"lime_cairo_set_matrix") ) { lime_cairo_set_matrix=ioValue.Cast< Dynamic >(); return true; }
		if (HX_FIELD_EQ(inName,"lime_cairo_set_source") ) { lime_cairo_set_source=ioValue.Cast< Dynamic >(); return true; }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"lime_cairo_rel_line_to") ) { lime_cairo_rel_line_to=ioValue.Cast< Dynamic >(); return true; }
		if (HX_FIELD_EQ(inName,"lime_cairo_rel_move_to") ) { lime_cairo_rel_move_to=ioValue.Cast< Dynamic >(); return true; }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"lime_cairo_arc_negative") ) { lime_cairo_arc_negative=ioValue.Cast< Dynamic >(); return true; }
		if (HX_FIELD_EQ(inName,"lime_cairo_clip_extents") ) { lime_cairo_clip_extents=ioValue.Cast< Dynamic >(); return true; }
		if (HX_FIELD_EQ(inName,"lime_cairo_fill_extents") ) { lime_cairo_fill_extents=ioValue.Cast< Dynamic >(); return true; }
		if (HX_FIELD_EQ(inName,"lime_cairo_get_line_cap") ) { lime_cairo_get_line_cap=ioValue.Cast< Dynamic >(); return true; }
		if (HX_FIELD_EQ(inName,"lime_cairo_get_operator") ) { lime_cairo_get_operator=ioValue.Cast< Dynamic >(); return true; }
		if (HX_FIELD_EQ(inName,"lime_cairo_mask_surface") ) { lime_cairo_mask_surface=ioValue.Cast< Dynamic >(); return true; }
		if (HX_FIELD_EQ(inName,"lime_cairo_rel_curve_to") ) { lime_cairo_rel_curve_to=ioValue.Cast< Dynamic >(); return true; }
		if (HX_FIELD_EQ(inName,"lime_cairo_set_line_cap") ) { lime_cairo_set_line_cap=ioValue.Cast< Dynamic >(); return true; }
		if (HX_FIELD_EQ(inName,"lime_cairo_set_operator") ) { lime_cairo_set_operator=ioValue.Cast< Dynamic >(); return true; }
		break;
	case 24:
		if (HX_FIELD_EQ(inName,"lime_cairo_clip_preserve") ) { lime_cairo_clip_preserve=ioValue.Cast< Dynamic >(); return true; }
		if (HX_FIELD_EQ(inName,"lime_cairo_fill_preserve") ) { lime_cairo_fill_preserve=ioValue.Cast< Dynamic >(); return true; }
		if (HX_FIELD_EQ(inName,"lime_cairo_get_antialias") ) { lime_cairo_get_antialias=ioValue.Cast< Dynamic >(); return true; }
		if (HX_FIELD_EQ(inName,"lime_cairo_get_fill_rule") ) { lime_cairo_get_fill_rule=ioValue.Cast< Dynamic >(); return true; }
		if (HX_FIELD_EQ(inName,"lime_cairo_get_line_join") ) { lime_cairo_get_line_join=ioValue.Cast< Dynamic >(); return true; }
		if (HX_FIELD_EQ(inName,"lime_cairo_get_tolerance") ) { lime_cairo_get_tolerance=ioValue.Cast< Dynamic >(); return true; }
		if (HX_FIELD_EQ(inName,"lime_cairo_set_antialias") ) { lime_cairo_set_antialias=ioValue.Cast< Dynamic >(); return true; }
		if (HX_FIELD_EQ(inName,"lime_cairo_set_font_face") ) { lime_cairo_set_font_face=ioValue.Cast< Dynamic >(); return true; }
		if (HX_FIELD_EQ(inName,"lime_cairo_set_font_size") ) { lime_cairo_set_font_size=ioValue.Cast< Dynamic >(); return true; }
		if (HX_FIELD_EQ(inName,"lime_cairo_set_fill_rule") ) { lime_cairo_set_fill_rule=ioValue.Cast< Dynamic >(); return true; }
		if (HX_FIELD_EQ(inName,"lime_cairo_set_line_join") ) { lime_cairo_set_line_join=ioValue.Cast< Dynamic >(); return true; }
		if (HX_FIELD_EQ(inName,"lime_cairo_set_tolerance") ) { lime_cairo_set_tolerance=ioValue.Cast< Dynamic >(); return true; }
		break;
	case 25:
		if (HX_FIELD_EQ(inName,"lime_cairo_get_dash_count") ) { lime_cairo_get_dash_count=ioValue.Cast< Dynamic >(); return true; }
		if (HX_FIELD_EQ(inName,"lime_cairo_get_line_width") ) { lime_cairo_get_line_width=ioValue.Cast< Dynamic >(); return true; }
		if (HX_FIELD_EQ(inName,"lime_cairo_set_line_width") ) { lime_cairo_set_line_width=ioValue.Cast< Dynamic >(); return true; }
		if (HX_FIELD_EQ(inName,"lime_cairo_set_source_rgb") ) { lime_cairo_set_source_rgb=ioValue.Cast< Dynamic >(); return true; }
		if (HX_FIELD_EQ(inName,"lime_cairo_stroke_extents") ) { lime_cairo_stroke_extents=ioValue.Cast< Dynamic >(); return true; }
		if (HX_FIELD_EQ(inName,"lime_cairo_version_string") ) { lime_cairo_version_string=ioValue.Cast< Dynamic >(); return true; }
		break;
	case 26:
		if (HX_FIELD_EQ(inName,"lime_cairo_get_miter_limit") ) { lime_cairo_get_miter_limit=ioValue.Cast< Dynamic >(); return true; }
		if (HX_FIELD_EQ(inName,"lime_cairo_identity_matrix") ) { lime_cairo_identity_matrix=ioValue.Cast< Dynamic >(); return true; }
		if (HX_FIELD_EQ(inName,"lime_cairo_set_miter_limit") ) { lime_cairo_set_miter_limit=ioValue.Cast< Dynamic >(); return true; }
		if (HX_FIELD_EQ(inName,"lime_cairo_set_source_rgba") ) { lime_cairo_set_source_rgba=ioValue.Cast< Dynamic >(); return true; }
		if (HX_FIELD_EQ(inName,"lime_cairo_stroke_preserve") ) { lime_cairo_stroke_preserve=ioValue.Cast< Dynamic >(); return true; }
		break;
	case 27:
		if (HX_FIELD_EQ(inName,"lime_cairo_get_group_target") ) { lime_cairo_get_group_target=ioValue.Cast< Dynamic >(); return true; }
		if (HX_FIELD_EQ(inName,"lime_cairo_paint_with_alpha") ) { lime_cairo_paint_with_alpha=ioValue.Cast< Dynamic >(); return true; }
		if (HX_FIELD_EQ(inName,"lime_cairo_set_font_options") ) { lime_cairo_set_font_options=ioValue.Cast< Dynamic >(); return true; }
		if (HX_FIELD_EQ(inName,"lime_cairo_get_font_options") ) { lime_cairo_get_font_options=ioValue.Cast< Dynamic >(); return true; }
		break;
	case 28:
		if (HX_FIELD_EQ(inName,"lime_cairo_get_current_point") ) { lime_cairo_get_current_point=ioValue.Cast< Dynamic >(); return true; }
		if (HX_FIELD_EQ(inName,"lime_cairo_has_current_point") ) { lime_cairo_has_current_point=ioValue.Cast< Dynamic >(); return true; }
		break;
	case 29:
		if (HX_FIELD_EQ(inName,"lime_cairo_set_source_surface") ) { lime_cairo_set_source_surface=ioValue.Cast< Dynamic >(); return true; }
		break;
	case 30:
		if (HX_FIELD_EQ(inName,"lime_cairo_get_reference_count") ) { lime_cairo_get_reference_count=ioValue.Cast< Dynamic >(); return true; }
		if (HX_FIELD_EQ(inName,"lime_cairo_pop_group_to_source") ) { lime_cairo_pop_group_to_source=ioValue.Cast< Dynamic >(); return true; }
		break;
	case 34:
		if (HX_FIELD_EQ(inName,"lime_cairo_push_group_with_content") ) { lime_cairo_push_group_with_content=ioValue.Cast< Dynamic >(); return true; }
	}
	return false;
}

void Cairo_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("antialias","\xae","\xd6","\xe9","\x75"));
	outFields->push(HX_HCSTRING("currentPoint","\x57","\x99","\x9b","\x0d"));
	outFields->push(HX_HCSTRING("dash","\x52","\x55","\x63","\x42"));
	outFields->push(HX_HCSTRING("dashCount","\x1d","\xd6","\x3c","\x33"));
	outFields->push(HX_HCSTRING("fillRule","\x1f","\x71","\xc5","\x6c"));
	outFields->push(HX_HCSTRING("groupTarget","\xf0","\x93","\x46","\x02"));
	outFields->push(HX_HCSTRING("hasCurrentPoint","\xd1","\xc3","\x0b","\x75"));
	outFields->push(HX_HCSTRING("lineCap","\x7e","\x84","\x90","\x1f"));
	outFields->push(HX_HCSTRING("lineJoin","\xfe","\x81","\x8e","\x83"));
	outFields->push(HX_HCSTRING("lineWidth","\x72","\xb9","\x5d","\x11"));
	outFields->push(HX_HCSTRING("matrix","\x41","\x36","\xc8","\xbb"));
	outFields->push(HX_HCSTRING("miterLimit","\xf6","\x5c","\x6a","\x54"));
	outFields->push(HX_HCSTRING("operator","\xa4","\x1b","\x73","\x44"));
	outFields->push(HX_HCSTRING("referenceCount","\x04","\x8d","\xa4","\x02"));
	outFields->push(HX_HCSTRING("source","\xdb","\xb0","\x31","\x32"));
	outFields->push(HX_HCSTRING("target","\x51","\xf3","\xec","\x86"));
	outFields->push(HX_HCSTRING("tolerance","\x0d","\x3d","\x7c","\x33"));
	outFields->push(HX_HCSTRING("userData","\x15","\x96","\x28","\x05"));
	outFields->push(HX_HCSTRING("handle","\xa8","\x83","\xfd","\xb7"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(Cairo_obj,target),HX_HCSTRING("target","\x51","\xf3","\xec","\x86")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(Cairo_obj,userData),HX_HCSTRING("userData","\x15","\x96","\x28","\x05")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(Cairo_obj,handle),HX_HCSTRING("handle","\xa8","\x83","\xfd","\xb7")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo sStaticStorageInfo[] = {
	{hx::fsInt,(void *) &Cairo_obj::version,HX_HCSTRING("version","\x18","\xe7","\xf1","\x7c")},
	{hx::fsString,(void *) &Cairo_obj::versionString,HX_HCSTRING("versionString","\x09","\xe6","\xa0","\x51")},
	{hx::fsObject /*Dynamic*/ ,(void *) &Cairo_obj::lime_cairo_arc,HX_HCSTRING("lime_cairo_arc","\xf1","\x76","\xfc","\xf9")},
	{hx::fsObject /*Dynamic*/ ,(void *) &Cairo_obj::lime_cairo_arc_negative,HX_HCSTRING("lime_cairo_arc_negative","\xc3","\xc0","\xb7","\xd8")},
	{hx::fsObject /*Dynamic*/ ,(void *) &Cairo_obj::lime_cairo_clip,HX_HCSTRING("lime_cairo_clip","\x51","\x81","\x39","\xc4")},
	{hx::fsObject /*Dynamic*/ ,(void *) &Cairo_obj::lime_cairo_clip_preserve,HX_HCSTRING("lime_cairo_clip_preserve","\xba","\xaf","\x0e","\x79")},
	{hx::fsObject /*Dynamic*/ ,(void *) &Cairo_obj::lime_cairo_clip_extents,HX_HCSTRING("lime_cairo_clip_extents","\x1b","\xef","\x99","\x33")},
	{hx::fsObject /*Dynamic*/ ,(void *) &Cairo_obj::lime_cairo_close_path,HX_HCSTRING("lime_cairo_close_path","\x0d","\x58","\x78","\xe1")},
	{hx::fsObject /*Dynamic*/ ,(void *) &Cairo_obj::lime_cairo_copy_page,HX_HCSTRING("lime_cairo_copy_page","\x38","\xe4","\xe1","\x1e")},
	{hx::fsObject /*Dynamic*/ ,(void *) &Cairo_obj::lime_cairo_create,HX_HCSTRING("lime_cairo_create","\xbd","\xdb","\x50","\xd8")},
	{hx::fsObject /*Dynamic*/ ,(void *) &Cairo_obj::lime_cairo_curve_to,HX_HCSTRING("lime_cairo_curve_to","\x4c","\xed","\xec","\xef")},
	{hx::fsObject /*Dynamic*/ ,(void *) &Cairo_obj::lime_cairo_destroy,HX_HCSTRING("lime_cairo_destroy","\x19","\xe1","\x8a","\x81")},
	{hx::fsObject /*Dynamic*/ ,(void *) &Cairo_obj::lime_cairo_fill,HX_HCSTRING("lime_cairo_fill","\x04","\xe1","\x32","\xc6")},
	{hx::fsObject /*Dynamic*/ ,(void *) &Cairo_obj::lime_cairo_fill_extents,HX_HCSTRING("lime_cairo_fill_extents","\xce","\xb9","\x56","\x6b")},
	{hx::fsObject /*Dynamic*/ ,(void *) &Cairo_obj::lime_cairo_fill_preserve,HX_HCSTRING("lime_cairo_fill_preserve","\xa7","\x41","\x83","\x06")},
	{hx::fsObject /*Dynamic*/ ,(void *) &Cairo_obj::lime_cairo_get_antialias,HX_HCSTRING("lime_cairo_get_antialias","\xe4","\xbf","\xea","\x4f")},
	{hx::fsObject /*Dynamic*/ ,(void *) &Cairo_obj::lime_cairo_get_current_point,HX_HCSTRING("lime_cairo_get_current_point","\xc0","\xc4","\x0b","\xc0")},
	{hx::fsObject /*Dynamic*/ ,(void *) &Cairo_obj::lime_cairo_get_dash,HX_HCSTRING("lime_cairo_get_dash","\xdc","\xf7","\x36","\xc9")},
	{hx::fsObject /*Dynamic*/ ,(void *) &Cairo_obj::lime_cairo_get_dash_count,HX_HCSTRING("lime_cairo_get_dash_count","\xec","\xd0","\x06","\xce")},
	{hx::fsObject /*Dynamic*/ ,(void *) &Cairo_obj::lime_cairo_get_fill_rule,HX_HCSTRING("lime_cairo_get_fill_rule","\xae","\x34","\x3f","\x14")},
	{hx::fsObject /*Dynamic*/ ,(void *) &Cairo_obj::lime_cairo_get_group_target,HX_HCSTRING("lime_cairo_get_group_target","\x1b","\x04","\x8e","\x27")},
	{hx::fsObject /*Dynamic*/ ,(void *) &Cairo_obj::lime_cairo_get_line_cap,HX_HCSTRING("lime_cairo_get_line_cap","\x91","\x8a","\xff","\xdc")},
	{hx::fsObject /*Dynamic*/ ,(void *) &Cairo_obj::lime_cairo_get_line_join,HX_HCSTRING("lime_cairo_get_line_join","\x8b","\xcc","\x44","\x87")},
	{hx::fsObject /*Dynamic*/ ,(void *) &Cairo_obj::lime_cairo_get_line_width,HX_HCSTRING("lime_cairo_get_line_width","\x45","\xaa","\x28","\x4d")},
	{hx::fsObject /*Dynamic*/ ,(void *) &Cairo_obj::lime_cairo_get_matrix,HX_HCSTRING("lime_cairo_get_matrix","\x4b","\x0f","\xb1","\x58")},
	{hx::fsObject /*Dynamic*/ ,(void *) &Cairo_obj::lime_cairo_get_miter_limit,HX_HCSTRING("lime_cairo_get_miter_limit","\xf7","\xda","\xf6","\xe3")},
	{hx::fsObject /*Dynamic*/ ,(void *) &Cairo_obj::lime_cairo_get_operator,HX_HCSTRING("lime_cairo_get_operator","\x2e","\xcb","\x0b","\x90")},
	{hx::fsObject /*Dynamic*/ ,(void *) &Cairo_obj::lime_cairo_get_reference_count,HX_HCSTRING("lime_cairo_get_reference_count","\xd1","\xb3","\x30","\xbb")},
	{hx::fsObject /*Dynamic*/ ,(void *) &Cairo_obj::lime_cairo_get_source,HX_HCSTRING("lime_cairo_get_source","\xe5","\x89","\x1a","\xcf")},
	{hx::fsObject /*Dynamic*/ ,(void *) &Cairo_obj::lime_cairo_get_target,HX_HCSTRING("lime_cairo_get_target","\x5b","\xcc","\xd5","\x23")},
	{hx::fsObject /*Dynamic*/ ,(void *) &Cairo_obj::lime_cairo_get_tolerance,HX_HCSTRING("lime_cairo_get_tolerance","\x43","\x26","\x7d","\x0d")},
	{hx::fsObject /*Dynamic*/ ,(void *) &Cairo_obj::lime_cairo_has_current_point,HX_HCSTRING("lime_cairo_has_current_point","\x84","\x52","\x43","\x91")},
	{hx::fsObject /*Dynamic*/ ,(void *) &Cairo_obj::lime_cairo_identity_matrix,HX_HCSTRING("lime_cairo_identity_matrix","\x81","\xb1","\xfe","\x41")},
	{hx::fsObject /*Dynamic*/ ,(void *) &Cairo_obj::lime_cairo_in_clip,HX_HCSTRING("lime_cairo_in_clip","\xc9","\xa4","\x67","\x5b")},
	{hx::fsObject /*Dynamic*/ ,(void *) &Cairo_obj::lime_cairo_in_fill,HX_HCSTRING("lime_cairo_in_fill","\x7c","\x04","\x61","\x5d")},
	{hx::fsObject /*Dynamic*/ ,(void *) &Cairo_obj::lime_cairo_in_stroke,HX_HCSTRING("lime_cairo_in_stroke","\xf1","\x19","\x0e","\xc7")},
	{hx::fsObject /*Dynamic*/ ,(void *) &Cairo_obj::lime_cairo_line_to,HX_HCSTRING("lime_cairo_line_to","\x45","\x88","\xaa","\x7c")},
	{hx::fsObject /*Dynamic*/ ,(void *) &Cairo_obj::lime_cairo_mask,HX_HCSTRING("lime_cairo_mask","\x6d","\x53","\xcd","\xca")},
	{hx::fsObject /*Dynamic*/ ,(void *) &Cairo_obj::lime_cairo_mask_surface,HX_HCSTRING("lime_cairo_mask_surface","\x1b","\xc8","\xa3","\x8c")},
	{hx::fsObject /*Dynamic*/ ,(void *) &Cairo_obj::lime_cairo_move_to,HX_HCSTRING("lime_cairo_move_to","\x48","\xcd","\x98","\xa7")},
	{hx::fsObject /*Dynamic*/ ,(void *) &Cairo_obj::lime_cairo_new_path,HX_HCSTRING("lime_cairo_new_path","\x25","\xbc","\x98","\x94")},
	{hx::fsObject /*Dynamic*/ ,(void *) &Cairo_obj::lime_cairo_paint,HX_HCSTRING("lime_cairo_paint","\xfd","\xd5","\x07","\x63")},
	{hx::fsObject /*Dynamic*/ ,(void *) &Cairo_obj::lime_cairo_paint_with_alpha,HX_HCSTRING("lime_cairo_paint_with_alpha","\x67","\x1b","\xfb","\x63")},
	{hx::fsObject /*Dynamic*/ ,(void *) &Cairo_obj::lime_cairo_pop_group,HX_HCSTRING("lime_cairo_pop_group","\xb0","\x94","\x6e","\x0c")},
	{hx::fsObject /*Dynamic*/ ,(void *) &Cairo_obj::lime_cairo_pop_group_to_source,HX_HCSTRING("lime_cairo_pop_group_to_source","\xd0","\x9e","\x67","\xaf")},
	{hx::fsObject /*Dynamic*/ ,(void *) &Cairo_obj::lime_cairo_push_group,HX_HCSTRING("lime_cairo_push_group","\x1b","\x55","\x88","\x61")},
	{hx::fsObject /*Dynamic*/ ,(void *) &Cairo_obj::lime_cairo_push_group_with_content,HX_HCSTRING("lime_cairo_push_group_with_content","\xa4","\xbb","\x13","\xd3")},
	{hx::fsObject /*Dynamic*/ ,(void *) &Cairo_obj::lime_cairo_rectangle,HX_HCSTRING("lime_cairo_rectangle","\x0e","\x0e","\x2e","\x48")},
	{hx::fsObject /*Dynamic*/ ,(void *) &Cairo_obj::lime_cairo_reference,HX_HCSTRING("lime_cairo_reference","\xaa","\x41","\x76","\x89")},
	{hx::fsObject /*Dynamic*/ ,(void *) &Cairo_obj::lime_cairo_rel_curve_to,HX_HCSTRING("lime_cairo_rel_curve_to","\xb2","\xac","\x52","\x05")},
	{hx::fsObject /*Dynamic*/ ,(void *) &Cairo_obj::lime_cairo_rel_line_to,HX_HCSTRING("lime_cairo_rel_line_to","\x9f","\x37","\x7e","\xc0")},
	{hx::fsObject /*Dynamic*/ ,(void *) &Cairo_obj::lime_cairo_rel_move_to,HX_HCSTRING("lime_cairo_rel_move_to","\xa2","\x7c","\x6c","\xeb")},
	{hx::fsObject /*Dynamic*/ ,(void *) &Cairo_obj::lime_cairo_reset_clip,HX_HCSTRING("lime_cairo_reset_clip","\xc1","\xbb","\xa3","\xf6")},
	{hx::fsObject /*Dynamic*/ ,(void *) &Cairo_obj::lime_cairo_restore,HX_HCSTRING("lime_cairo_restore","\x6d","\x1b","\xb5","\xc7")},
	{hx::fsObject /*Dynamic*/ ,(void *) &Cairo_obj::lime_cairo_save,HX_HCSTRING("lime_cairo_save","\xbe","\x9d","\xc4","\xce")},
	{hx::fsObject /*Dynamic*/ ,(void *) &Cairo_obj::lime_cairo_set_antialias,HX_HCSTRING("lime_cairo_set_antialias","\xf0","\xa1","\xf0","\x94")},
	{hx::fsObject /*Dynamic*/ ,(void *) &Cairo_obj::lime_cairo_set_dash,HX_HCSTRING("lime_cairo_set_dash","\x50","\x51","\x94","\x77")},
	{hx::fsObject /*Dynamic*/ ,(void *) &Cairo_obj::lime_cairo_set_font_face,HX_HCSTRING("lime_cairo_set_font_face","\x8f","\xcf","\x7b","\x2e")},
	{hx::fsObject /*Dynamic*/ ,(void *) &Cairo_obj::lime_cairo_set_font_size,HX_HCSTRING("lime_cairo_set_font_size","\xb3","\xbb","\x19","\x37")},
	{hx::fsObject /*Dynamic*/ ,(void *) &Cairo_obj::lime_cairo_set_fill_rule,HX_HCSTRING("lime_cairo_set_fill_rule","\xba","\x16","\x45","\x59")},
	{hx::fsObject /*Dynamic*/ ,(void *) &Cairo_obj::lime_cairo_set_font_options,HX_HCSTRING("lime_cairo_set_font_options","\xac","\xfb","\x79","\x44")},
	{hx::fsObject /*Dynamic*/ ,(void *) &Cairo_obj::lime_cairo_get_font_options,HX_HCSTRING("lime_cairo_get_font_options","\x38","\x0e","\x38","\xee")},
	{hx::fsObject /*Dynamic*/ ,(void *) &Cairo_obj::lime_cairo_set_line_cap,HX_HCSTRING("lime_cairo_set_line_cap","\x05","\xae","\xf8","\xf1")},
	{hx::fsObject /*Dynamic*/ ,(void *) &Cairo_obj::lime_cairo_set_line_join,HX_HCSTRING("lime_cairo_set_line_join","\x97","\xae","\x4a","\xcc")},
	{hx::fsObject /*Dynamic*/ ,(void *) &Cairo_obj::lime_cairo_set_line_width,HX_HCSTRING("lime_cairo_set_line_width","\xb9","\x92","\x48","\x6d")},
	{hx::fsObject /*Dynamic*/ ,(void *) &Cairo_obj::lime_cairo_set_matrix,HX_HCSTRING("lime_cairo_set_matrix","\xbf","\xad","\x2e","\x5c")},
	{hx::fsObject /*Dynamic*/ ,(void *) &Cairo_obj::lime_cairo_set_miter_limit,HX_HCSTRING("lime_cairo_set_miter_limit","\x03","\x58","\xc2","\xdf")},
	{hx::fsObject /*Dynamic*/ ,(void *) &Cairo_obj::lime_cairo_set_operator,HX_HCSTRING("lime_cairo_set_operator","\xa2","\xee","\x04","\xa5")},
	{hx::fsObject /*Dynamic*/ ,(void *) &Cairo_obj::lime_cairo_set_source,HX_HCSTRING("lime_cairo_set_source","\x59","\x28","\x98","\xd2")},
	{hx::fsObject /*Dynamic*/ ,(void *) &Cairo_obj::lime_cairo_set_source_rgb,HX_HCSTRING("lime_cairo_set_source_rgb","\xe7","\xe8","\x97","\x83")},
	{hx::fsObject /*Dynamic*/ ,(void *) &Cairo_obj::lime_cairo_set_source_rgba,HX_HCSTRING("lime_cairo_set_source_rgba","\x9a","\xe1","\x53","\xa1")},
	{hx::fsObject /*Dynamic*/ ,(void *) &Cairo_obj::lime_cairo_set_source_surface,HX_HCSTRING("lime_cairo_set_source_surface","\x07","\x69","\xef","\xcf")},
	{hx::fsObject /*Dynamic*/ ,(void *) &Cairo_obj::lime_cairo_set_tolerance,HX_HCSTRING("lime_cairo_set_tolerance","\x4f","\x08","\x83","\x52")},
	{hx::fsObject /*Dynamic*/ ,(void *) &Cairo_obj::lime_cairo_show_page,HX_HCSTRING("lime_cairo_show_page","\xf0","\x25","\x4b","\xc7")},
	{hx::fsObject /*Dynamic*/ ,(void *) &Cairo_obj::lime_cairo_show_text,HX_HCSTRING("lime_cairo_show_text","\x4e","\x18","\xf3","\xc9")},
	{hx::fsObject /*Dynamic*/ ,(void *) &Cairo_obj::lime_cairo_status,HX_HCSTRING("lime_cairo_status","\xf3","\x5b","\x3d","\x62")},
	{hx::fsObject /*Dynamic*/ ,(void *) &Cairo_obj::lime_cairo_stroke,HX_HCSTRING("lime_cairo_stroke","\x79","\x28","\x76","\x6d")},
	{hx::fsObject /*Dynamic*/ ,(void *) &Cairo_obj::lime_cairo_stroke_extents,HX_HCSTRING("lime_cairo_stroke_extents","\x43","\xfe","\x0d","\xea")},
	{hx::fsObject /*Dynamic*/ ,(void *) &Cairo_obj::lime_cairo_stroke_preserve,HX_HCSTRING("lime_cairo_stroke_preserve","\x92","\xe3","\x27","\x68")},
	{hx::fsObject /*Dynamic*/ ,(void *) &Cairo_obj::lime_cairo_transform,HX_HCSTRING("lime_cairo_transform","\x4b","\x67","\x44","\x74")},
	{hx::fsObject /*Dynamic*/ ,(void *) &Cairo_obj::lime_cairo_rotate,HX_HCSTRING("lime_cairo_rotate","\x1c","\xbb","\x61","\x27")},
	{hx::fsObject /*Dynamic*/ ,(void *) &Cairo_obj::lime_cairo_scale,HX_HCSTRING("lime_cairo_scale","\xe9","\xec","\x87","\x1e")},
	{hx::fsObject /*Dynamic*/ ,(void *) &Cairo_obj::lime_cairo_translate,HX_HCSTRING("lime_cairo_translate","\x2d","\x11","\x31","\x78")},
	{hx::fsObject /*Dynamic*/ ,(void *) &Cairo_obj::lime_cairo_version,HX_HCSTRING("lime_cairo_version","\x37","\x9b","\xf6","\xd9")},
	{hx::fsObject /*Dynamic*/ ,(void *) &Cairo_obj::lime_cairo_version_string,HX_HCSTRING("lime_cairo_version_string","\x19","\x84","\x60","\x45")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("target","\x51","\xf3","\xec","\x86"),
	HX_HCSTRING("userData","\x15","\x96","\x28","\x05"),
	HX_HCSTRING("handle","\xa8","\x83","\xfd","\xb7"),
	HX_HCSTRING("recreate","\xef","\x12","\x7e","\x5c"),
	HX_HCSTRING("arc","\x52","\xfe","\x49","\x00"),
	HX_HCSTRING("arcNegative","\xe7","\x82","\xbf","\x33"),
	HX_HCSTRING("clip","\xd0","\x6e","\xc2","\x41"),
	HX_HCSTRING("clipExtents","\x59","\x0e","\x32","\xbe"),
	HX_HCSTRING("clipPreserve","\xbc","\xe6","\x91","\x33"),
	HX_HCSTRING("closePath","\x7d","\x65","\x20","\x14"),
	HX_HCSTRING("copyPage","\xa4","\x40","\xf0","\xce"),
	HX_HCSTRING("curveTo","\x0a","\x60","\x88","\xce"),
	HX_HCSTRING("destroy","\xfa","\x2c","\x86","\x24"),
	HX_HCSTRING("fill","\x83","\xce","\xbb","\x43"),
	HX_HCSTRING("fillExtents","\x06","\x5b","\xf8","\x93"),
	HX_HCSTRING("fillPreserve","\x6f","\xb1","\x4e","\x6b"),
	HX_HCSTRING("identityMatrix","\x1f","\x72","\x00","\x92"),
	HX_HCSTRING("inClip","\x55","\x4d","\x28","\x7e"),
	HX_HCSTRING("inFill","\x08","\xad","\x21","\x80"),
	HX_HCSTRING("inStroke","\x7d","\xfd","\xb2","\x99"),
	HX_HCSTRING("lineTo","\x8f","\x46","\xa0","\xec"),
	HX_HCSTRING("moveTo","\xec","\xd2","\xac","\xcc"),
	HX_HCSTRING("mask","\xec","\x40","\x56","\x48"),
	HX_HCSTRING("maskSurface","\xa1","\x82","\x0d","\x90"),
	HX_HCSTRING("newPath","\x25","\x92","\x1e","\xfa"),
	HX_HCSTRING("paint","\x9e","\xb7","\x4e","\xbd"),
	HX_HCSTRING("paintWithAlpha","\xfa","\x4f","\xef","\x59"),
	HX_HCSTRING("popGroup","\xee","\xf7","\xfa","\x02"),
	HX_HCSTRING("popGroupToSource","\xc4","\xaa","\xdb","\xc8"),
	HX_HCSTRING("pushGroup","\x05","\x1b","\x10","\xde"),
	HX_HCSTRING("pushGroupWithContent","\xce","\x2c","\x09","\x98"),
	HX_HCSTRING("rectangle","\x2f","\xd4","\x7c","\x19"),
	HX_HCSTRING("reference","\xcb","\x07","\xc5","\x5a"),
	HX_HCSTRING("relCurveTo","\xb1","\x7b","\x89","\x97"),
	HX_HCSTRING("relLineTo","\xc8","\x9c","\xaa","\x2c"),
	HX_HCSTRING("relMoveTo","\x25","\x29","\xb7","\x0c"),
	HX_HCSTRING("resetClip","\x3f","\x78","\xae","\x87"),
	HX_HCSTRING("restore","\x4e","\x67","\xb0","\x6a"),
	HX_HCSTRING("save","\x3d","\x8b","\x4d","\x4c"),
	HX_HCSTRING("setFontFace","\xce","\x9b","\x94","\xf6"),
	HX_HCSTRING("setFontSize","\xf2","\x87","\x32","\xff"),
	HX_HCSTRING("getFontOptions","\x59","\x38","\x6d","\x7c"),
	HX_HCSTRING("setFontOptions","\xcd","\x20","\x8d","\x9c"),
	HX_HCSTRING("setSourceRGB","\xf0","\x40","\x4c","\x8d"),
	HX_HCSTRING("setSourceRGBA","\x51","\x91","\x6c","\x15"),
	HX_HCSTRING("setSourceSurface","\x90","\x15","\x89","\x6d"),
	HX_HCSTRING("showPage","\xec","\x9d","\xd8","\xb1"),
	HX_HCSTRING("showText","\x4a","\x90","\x80","\xb4"),
	HX_HCSTRING("status","\x32","\xe7","\xfb","\x05"),
	HX_HCSTRING("stroke","\xb8","\xb3","\x34","\x11"),
	HX_HCSTRING("strokeExtents","\x71","\xb6","\x07","\xdd"),
	HX_HCSTRING("strokePreserve","\xa4","\x53","\xaf","\x0f"),
	HX_HCSTRING("transform","\x6c","\x2d","\x93","\x45"),
	HX_HCSTRING("rotate","\x5b","\x46","\x20","\xcb"),
	HX_HCSTRING("scale","\x8a","\xce","\xce","\x78"),
	HX_HCSTRING("translate","\x4e","\xd7","\x7f","\x49"),
	HX_HCSTRING("get_antialias","\x85","\xaa","\x4d","\x37"),
	HX_HCSTRING("set_antialias","\x91","\x8c","\x53","\x7c"),
	HX_HCSTRING("get_currentPoint","\xe0","\x85","\x3a","\x12"),
	HX_HCSTRING("get_dash","\xdb","\x10","\x1e","\xc2"),
	HX_HCSTRING("set_dash","\x4f","\x6a","\x7b","\x70"),
	HX_HCSTRING("get_dashCount","\xf4","\xa9","\xa0","\xf4"),
	HX_HCSTRING("get_fillRule","\x28","\x25","\xdf","\x21"),
	HX_HCSTRING("set_fillRule","\x9c","\x48","\xd8","\x36"),
	HX_HCSTRING("get_groupTarget","\x87","\x4b","\x28","\xc3"),
	HX_HCSTRING("get_hasCurrentPoint","\xe8","\x92","\x16","\x00"),
	HX_HCSTRING("get_lineCap","\x95","\xe4","\x8a","\xa5"),
	HX_HCSTRING("set_lineCap","\xa1","\xeb","\xf7","\xaf"),
	HX_HCSTRING("get_lineJoin","\x07","\x36","\xa8","\x38"),
	HX_HCSTRING("set_lineJoin","\x7b","\x59","\xa1","\x4d"),
	HX_HCSTRING("get_lineWidth","\x49","\x8d","\xc1","\xd2"),
	HX_HCSTRING("set_lineWidth","\x55","\x6f","\xc7","\x17"),
	HX_HCSTRING("get_matrix","\x0a","\xa6","\x4f","\xac"),
	HX_HCSTRING("set_matrix","\x7e","\x44","\xcd","\xaf"),
	HX_HCSTRING("get_miterLimit","\x3f","\xe5","\x5f","\xca"),
	HX_HCSTRING("set_miterLimit","\xb3","\xcd","\x7f","\xea"),
	HX_HCSTRING("get_operator","\xad","\xcf","\x8c","\xf9"),
	HX_HCSTRING("set_operator","\x21","\xf3","\x85","\x0e"),
	HX_HCSTRING("get_referenceCount","\xcd","\x6d","\x3e","\x9e"),
	HX_HCSTRING("get_source","\xa4","\x20","\xb9","\x22"),
	HX_HCSTRING("set_source","\x18","\xbf","\x36","\x26"),
	HX_HCSTRING("get_target","\x1a","\x63","\x74","\x77"),
	HX_HCSTRING("get_tolerance","\xe4","\x10","\xe0","\xf4"),
	HX_HCSTRING("set_tolerance","\xf0","\xf2","\xe5","\x39"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Cairo_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(Cairo_obj::version,"version");
	HX_MARK_MEMBER_NAME(Cairo_obj::versionString,"versionString");
	HX_MARK_MEMBER_NAME(Cairo_obj::lime_cairo_arc,"lime_cairo_arc");
	HX_MARK_MEMBER_NAME(Cairo_obj::lime_cairo_arc_negative,"lime_cairo_arc_negative");
	HX_MARK_MEMBER_NAME(Cairo_obj::lime_cairo_clip,"lime_cairo_clip");
	HX_MARK_MEMBER_NAME(Cairo_obj::lime_cairo_clip_preserve,"lime_cairo_clip_preserve");
	HX_MARK_MEMBER_NAME(Cairo_obj::lime_cairo_clip_extents,"lime_cairo_clip_extents");
	HX_MARK_MEMBER_NAME(Cairo_obj::lime_cairo_close_path,"lime_cairo_close_path");
	HX_MARK_MEMBER_NAME(Cairo_obj::lime_cairo_copy_page,"lime_cairo_copy_page");
	HX_MARK_MEMBER_NAME(Cairo_obj::lime_cairo_create,"lime_cairo_create");
	HX_MARK_MEMBER_NAME(Cairo_obj::lime_cairo_curve_to,"lime_cairo_curve_to");
	HX_MARK_MEMBER_NAME(Cairo_obj::lime_cairo_destroy,"lime_cairo_destroy");
	HX_MARK_MEMBER_NAME(Cairo_obj::lime_cairo_fill,"lime_cairo_fill");
	HX_MARK_MEMBER_NAME(Cairo_obj::lime_cairo_fill_extents,"lime_cairo_fill_extents");
	HX_MARK_MEMBER_NAME(Cairo_obj::lime_cairo_fill_preserve,"lime_cairo_fill_preserve");
	HX_MARK_MEMBER_NAME(Cairo_obj::lime_cairo_get_antialias,"lime_cairo_get_antialias");
	HX_MARK_MEMBER_NAME(Cairo_obj::lime_cairo_get_current_point,"lime_cairo_get_current_point");
	HX_MARK_MEMBER_NAME(Cairo_obj::lime_cairo_get_dash,"lime_cairo_get_dash");
	HX_MARK_MEMBER_NAME(Cairo_obj::lime_cairo_get_dash_count,"lime_cairo_get_dash_count");
	HX_MARK_MEMBER_NAME(Cairo_obj::lime_cairo_get_fill_rule,"lime_cairo_get_fill_rule");
	HX_MARK_MEMBER_NAME(Cairo_obj::lime_cairo_get_group_target,"lime_cairo_get_group_target");
	HX_MARK_MEMBER_NAME(Cairo_obj::lime_cairo_get_line_cap,"lime_cairo_get_line_cap");
	HX_MARK_MEMBER_NAME(Cairo_obj::lime_cairo_get_line_join,"lime_cairo_get_line_join");
	HX_MARK_MEMBER_NAME(Cairo_obj::lime_cairo_get_line_width,"lime_cairo_get_line_width");
	HX_MARK_MEMBER_NAME(Cairo_obj::lime_cairo_get_matrix,"lime_cairo_get_matrix");
	HX_MARK_MEMBER_NAME(Cairo_obj::lime_cairo_get_miter_limit,"lime_cairo_get_miter_limit");
	HX_MARK_MEMBER_NAME(Cairo_obj::lime_cairo_get_operator,"lime_cairo_get_operator");
	HX_MARK_MEMBER_NAME(Cairo_obj::lime_cairo_get_reference_count,"lime_cairo_get_reference_count");
	HX_MARK_MEMBER_NAME(Cairo_obj::lime_cairo_get_source,"lime_cairo_get_source");
	HX_MARK_MEMBER_NAME(Cairo_obj::lime_cairo_get_target,"lime_cairo_get_target");
	HX_MARK_MEMBER_NAME(Cairo_obj::lime_cairo_get_tolerance,"lime_cairo_get_tolerance");
	HX_MARK_MEMBER_NAME(Cairo_obj::lime_cairo_has_current_point,"lime_cairo_has_current_point");
	HX_MARK_MEMBER_NAME(Cairo_obj::lime_cairo_identity_matrix,"lime_cairo_identity_matrix");
	HX_MARK_MEMBER_NAME(Cairo_obj::lime_cairo_in_clip,"lime_cairo_in_clip");
	HX_MARK_MEMBER_NAME(Cairo_obj::lime_cairo_in_fill,"lime_cairo_in_fill");
	HX_MARK_MEMBER_NAME(Cairo_obj::lime_cairo_in_stroke,"lime_cairo_in_stroke");
	HX_MARK_MEMBER_NAME(Cairo_obj::lime_cairo_line_to,"lime_cairo_line_to");
	HX_MARK_MEMBER_NAME(Cairo_obj::lime_cairo_mask,"lime_cairo_mask");
	HX_MARK_MEMBER_NAME(Cairo_obj::lime_cairo_mask_surface,"lime_cairo_mask_surface");
	HX_MARK_MEMBER_NAME(Cairo_obj::lime_cairo_move_to,"lime_cairo_move_to");
	HX_MARK_MEMBER_NAME(Cairo_obj::lime_cairo_new_path,"lime_cairo_new_path");
	HX_MARK_MEMBER_NAME(Cairo_obj::lime_cairo_paint,"lime_cairo_paint");
	HX_MARK_MEMBER_NAME(Cairo_obj::lime_cairo_paint_with_alpha,"lime_cairo_paint_with_alpha");
	HX_MARK_MEMBER_NAME(Cairo_obj::lime_cairo_pop_group,"lime_cairo_pop_group");
	HX_MARK_MEMBER_NAME(Cairo_obj::lime_cairo_pop_group_to_source,"lime_cairo_pop_group_to_source");
	HX_MARK_MEMBER_NAME(Cairo_obj::lime_cairo_push_group,"lime_cairo_push_group");
	HX_MARK_MEMBER_NAME(Cairo_obj::lime_cairo_push_group_with_content,"lime_cairo_push_group_with_content");
	HX_MARK_MEMBER_NAME(Cairo_obj::lime_cairo_rectangle,"lime_cairo_rectangle");
	HX_MARK_MEMBER_NAME(Cairo_obj::lime_cairo_reference,"lime_cairo_reference");
	HX_MARK_MEMBER_NAME(Cairo_obj::lime_cairo_rel_curve_to,"lime_cairo_rel_curve_to");
	HX_MARK_MEMBER_NAME(Cairo_obj::lime_cairo_rel_line_to,"lime_cairo_rel_line_to");
	HX_MARK_MEMBER_NAME(Cairo_obj::lime_cairo_rel_move_to,"lime_cairo_rel_move_to");
	HX_MARK_MEMBER_NAME(Cairo_obj::lime_cairo_reset_clip,"lime_cairo_reset_clip");
	HX_MARK_MEMBER_NAME(Cairo_obj::lime_cairo_restore,"lime_cairo_restore");
	HX_MARK_MEMBER_NAME(Cairo_obj::lime_cairo_save,"lime_cairo_save");
	HX_MARK_MEMBER_NAME(Cairo_obj::lime_cairo_set_antialias,"lime_cairo_set_antialias");
	HX_MARK_MEMBER_NAME(Cairo_obj::lime_cairo_set_dash,"lime_cairo_set_dash");
	HX_MARK_MEMBER_NAME(Cairo_obj::lime_cairo_set_font_face,"lime_cairo_set_font_face");
	HX_MARK_MEMBER_NAME(Cairo_obj::lime_cairo_set_font_size,"lime_cairo_set_font_size");
	HX_MARK_MEMBER_NAME(Cairo_obj::lime_cairo_set_fill_rule,"lime_cairo_set_fill_rule");
	HX_MARK_MEMBER_NAME(Cairo_obj::lime_cairo_set_font_options,"lime_cairo_set_font_options");
	HX_MARK_MEMBER_NAME(Cairo_obj::lime_cairo_get_font_options,"lime_cairo_get_font_options");
	HX_MARK_MEMBER_NAME(Cairo_obj::lime_cairo_set_line_cap,"lime_cairo_set_line_cap");
	HX_MARK_MEMBER_NAME(Cairo_obj::lime_cairo_set_line_join,"lime_cairo_set_line_join");
	HX_MARK_MEMBER_NAME(Cairo_obj::lime_cairo_set_line_width,"lime_cairo_set_line_width");
	HX_MARK_MEMBER_NAME(Cairo_obj::lime_cairo_set_matrix,"lime_cairo_set_matrix");
	HX_MARK_MEMBER_NAME(Cairo_obj::lime_cairo_set_miter_limit,"lime_cairo_set_miter_limit");
	HX_MARK_MEMBER_NAME(Cairo_obj::lime_cairo_set_operator,"lime_cairo_set_operator");
	HX_MARK_MEMBER_NAME(Cairo_obj::lime_cairo_set_source,"lime_cairo_set_source");
	HX_MARK_MEMBER_NAME(Cairo_obj::lime_cairo_set_source_rgb,"lime_cairo_set_source_rgb");
	HX_MARK_MEMBER_NAME(Cairo_obj::lime_cairo_set_source_rgba,"lime_cairo_set_source_rgba");
	HX_MARK_MEMBER_NAME(Cairo_obj::lime_cairo_set_source_surface,"lime_cairo_set_source_surface");
	HX_MARK_MEMBER_NAME(Cairo_obj::lime_cairo_set_tolerance,"lime_cairo_set_tolerance");
	HX_MARK_MEMBER_NAME(Cairo_obj::lime_cairo_show_page,"lime_cairo_show_page");
	HX_MARK_MEMBER_NAME(Cairo_obj::lime_cairo_show_text,"lime_cairo_show_text");
	HX_MARK_MEMBER_NAME(Cairo_obj::lime_cairo_status,"lime_cairo_status");
	HX_MARK_MEMBER_NAME(Cairo_obj::lime_cairo_stroke,"lime_cairo_stroke");
	HX_MARK_MEMBER_NAME(Cairo_obj::lime_cairo_stroke_extents,"lime_cairo_stroke_extents");
	HX_MARK_MEMBER_NAME(Cairo_obj::lime_cairo_stroke_preserve,"lime_cairo_stroke_preserve");
	HX_MARK_MEMBER_NAME(Cairo_obj::lime_cairo_transform,"lime_cairo_transform");
	HX_MARK_MEMBER_NAME(Cairo_obj::lime_cairo_rotate,"lime_cairo_rotate");
	HX_MARK_MEMBER_NAME(Cairo_obj::lime_cairo_scale,"lime_cairo_scale");
	HX_MARK_MEMBER_NAME(Cairo_obj::lime_cairo_translate,"lime_cairo_translate");
	HX_MARK_MEMBER_NAME(Cairo_obj::lime_cairo_version,"lime_cairo_version");
	HX_MARK_MEMBER_NAME(Cairo_obj::lime_cairo_version_string,"lime_cairo_version_string");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Cairo_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(Cairo_obj::version,"version");
	HX_VISIT_MEMBER_NAME(Cairo_obj::versionString,"versionString");
	HX_VISIT_MEMBER_NAME(Cairo_obj::lime_cairo_arc,"lime_cairo_arc");
	HX_VISIT_MEMBER_NAME(Cairo_obj::lime_cairo_arc_negative,"lime_cairo_arc_negative");
	HX_VISIT_MEMBER_NAME(Cairo_obj::lime_cairo_clip,"lime_cairo_clip");
	HX_VISIT_MEMBER_NAME(Cairo_obj::lime_cairo_clip_preserve,"lime_cairo_clip_preserve");
	HX_VISIT_MEMBER_NAME(Cairo_obj::lime_cairo_clip_extents,"lime_cairo_clip_extents");
	HX_VISIT_MEMBER_NAME(Cairo_obj::lime_cairo_close_path,"lime_cairo_close_path");
	HX_VISIT_MEMBER_NAME(Cairo_obj::lime_cairo_copy_page,"lime_cairo_copy_page");
	HX_VISIT_MEMBER_NAME(Cairo_obj::lime_cairo_create,"lime_cairo_create");
	HX_VISIT_MEMBER_NAME(Cairo_obj::lime_cairo_curve_to,"lime_cairo_curve_to");
	HX_VISIT_MEMBER_NAME(Cairo_obj::lime_cairo_destroy,"lime_cairo_destroy");
	HX_VISIT_MEMBER_NAME(Cairo_obj::lime_cairo_fill,"lime_cairo_fill");
	HX_VISIT_MEMBER_NAME(Cairo_obj::lime_cairo_fill_extents,"lime_cairo_fill_extents");
	HX_VISIT_MEMBER_NAME(Cairo_obj::lime_cairo_fill_preserve,"lime_cairo_fill_preserve");
	HX_VISIT_MEMBER_NAME(Cairo_obj::lime_cairo_get_antialias,"lime_cairo_get_antialias");
	HX_VISIT_MEMBER_NAME(Cairo_obj::lime_cairo_get_current_point,"lime_cairo_get_current_point");
	HX_VISIT_MEMBER_NAME(Cairo_obj::lime_cairo_get_dash,"lime_cairo_get_dash");
	HX_VISIT_MEMBER_NAME(Cairo_obj::lime_cairo_get_dash_count,"lime_cairo_get_dash_count");
	HX_VISIT_MEMBER_NAME(Cairo_obj::lime_cairo_get_fill_rule,"lime_cairo_get_fill_rule");
	HX_VISIT_MEMBER_NAME(Cairo_obj::lime_cairo_get_group_target,"lime_cairo_get_group_target");
	HX_VISIT_MEMBER_NAME(Cairo_obj::lime_cairo_get_line_cap,"lime_cairo_get_line_cap");
	HX_VISIT_MEMBER_NAME(Cairo_obj::lime_cairo_get_line_join,"lime_cairo_get_line_join");
	HX_VISIT_MEMBER_NAME(Cairo_obj::lime_cairo_get_line_width,"lime_cairo_get_line_width");
	HX_VISIT_MEMBER_NAME(Cairo_obj::lime_cairo_get_matrix,"lime_cairo_get_matrix");
	HX_VISIT_MEMBER_NAME(Cairo_obj::lime_cairo_get_miter_limit,"lime_cairo_get_miter_limit");
	HX_VISIT_MEMBER_NAME(Cairo_obj::lime_cairo_get_operator,"lime_cairo_get_operator");
	HX_VISIT_MEMBER_NAME(Cairo_obj::lime_cairo_get_reference_count,"lime_cairo_get_reference_count");
	HX_VISIT_MEMBER_NAME(Cairo_obj::lime_cairo_get_source,"lime_cairo_get_source");
	HX_VISIT_MEMBER_NAME(Cairo_obj::lime_cairo_get_target,"lime_cairo_get_target");
	HX_VISIT_MEMBER_NAME(Cairo_obj::lime_cairo_get_tolerance,"lime_cairo_get_tolerance");
	HX_VISIT_MEMBER_NAME(Cairo_obj::lime_cairo_has_current_point,"lime_cairo_has_current_point");
	HX_VISIT_MEMBER_NAME(Cairo_obj::lime_cairo_identity_matrix,"lime_cairo_identity_matrix");
	HX_VISIT_MEMBER_NAME(Cairo_obj::lime_cairo_in_clip,"lime_cairo_in_clip");
	HX_VISIT_MEMBER_NAME(Cairo_obj::lime_cairo_in_fill,"lime_cairo_in_fill");
	HX_VISIT_MEMBER_NAME(Cairo_obj::lime_cairo_in_stroke,"lime_cairo_in_stroke");
	HX_VISIT_MEMBER_NAME(Cairo_obj::lime_cairo_line_to,"lime_cairo_line_to");
	HX_VISIT_MEMBER_NAME(Cairo_obj::lime_cairo_mask,"lime_cairo_mask");
	HX_VISIT_MEMBER_NAME(Cairo_obj::lime_cairo_mask_surface,"lime_cairo_mask_surface");
	HX_VISIT_MEMBER_NAME(Cairo_obj::lime_cairo_move_to,"lime_cairo_move_to");
	HX_VISIT_MEMBER_NAME(Cairo_obj::lime_cairo_new_path,"lime_cairo_new_path");
	HX_VISIT_MEMBER_NAME(Cairo_obj::lime_cairo_paint,"lime_cairo_paint");
	HX_VISIT_MEMBER_NAME(Cairo_obj::lime_cairo_paint_with_alpha,"lime_cairo_paint_with_alpha");
	HX_VISIT_MEMBER_NAME(Cairo_obj::lime_cairo_pop_group,"lime_cairo_pop_group");
	HX_VISIT_MEMBER_NAME(Cairo_obj::lime_cairo_pop_group_to_source,"lime_cairo_pop_group_to_source");
	HX_VISIT_MEMBER_NAME(Cairo_obj::lime_cairo_push_group,"lime_cairo_push_group");
	HX_VISIT_MEMBER_NAME(Cairo_obj::lime_cairo_push_group_with_content,"lime_cairo_push_group_with_content");
	HX_VISIT_MEMBER_NAME(Cairo_obj::lime_cairo_rectangle,"lime_cairo_rectangle");
	HX_VISIT_MEMBER_NAME(Cairo_obj::lime_cairo_reference,"lime_cairo_reference");
	HX_VISIT_MEMBER_NAME(Cairo_obj::lime_cairo_rel_curve_to,"lime_cairo_rel_curve_to");
	HX_VISIT_MEMBER_NAME(Cairo_obj::lime_cairo_rel_line_to,"lime_cairo_rel_line_to");
	HX_VISIT_MEMBER_NAME(Cairo_obj::lime_cairo_rel_move_to,"lime_cairo_rel_move_to");
	HX_VISIT_MEMBER_NAME(Cairo_obj::lime_cairo_reset_clip,"lime_cairo_reset_clip");
	HX_VISIT_MEMBER_NAME(Cairo_obj::lime_cairo_restore,"lime_cairo_restore");
	HX_VISIT_MEMBER_NAME(Cairo_obj::lime_cairo_save,"lime_cairo_save");
	HX_VISIT_MEMBER_NAME(Cairo_obj::lime_cairo_set_antialias,"lime_cairo_set_antialias");
	HX_VISIT_MEMBER_NAME(Cairo_obj::lime_cairo_set_dash,"lime_cairo_set_dash");
	HX_VISIT_MEMBER_NAME(Cairo_obj::lime_cairo_set_font_face,"lime_cairo_set_font_face");
	HX_VISIT_MEMBER_NAME(Cairo_obj::lime_cairo_set_font_size,"lime_cairo_set_font_size");
	HX_VISIT_MEMBER_NAME(Cairo_obj::lime_cairo_set_fill_rule,"lime_cairo_set_fill_rule");
	HX_VISIT_MEMBER_NAME(Cairo_obj::lime_cairo_set_font_options,"lime_cairo_set_font_options");
	HX_VISIT_MEMBER_NAME(Cairo_obj::lime_cairo_get_font_options,"lime_cairo_get_font_options");
	HX_VISIT_MEMBER_NAME(Cairo_obj::lime_cairo_set_line_cap,"lime_cairo_set_line_cap");
	HX_VISIT_MEMBER_NAME(Cairo_obj::lime_cairo_set_line_join,"lime_cairo_set_line_join");
	HX_VISIT_MEMBER_NAME(Cairo_obj::lime_cairo_set_line_width,"lime_cairo_set_line_width");
	HX_VISIT_MEMBER_NAME(Cairo_obj::lime_cairo_set_matrix,"lime_cairo_set_matrix");
	HX_VISIT_MEMBER_NAME(Cairo_obj::lime_cairo_set_miter_limit,"lime_cairo_set_miter_limit");
	HX_VISIT_MEMBER_NAME(Cairo_obj::lime_cairo_set_operator,"lime_cairo_set_operator");
	HX_VISIT_MEMBER_NAME(Cairo_obj::lime_cairo_set_source,"lime_cairo_set_source");
	HX_VISIT_MEMBER_NAME(Cairo_obj::lime_cairo_set_source_rgb,"lime_cairo_set_source_rgb");
	HX_VISIT_MEMBER_NAME(Cairo_obj::lime_cairo_set_source_rgba,"lime_cairo_set_source_rgba");
	HX_VISIT_MEMBER_NAME(Cairo_obj::lime_cairo_set_source_surface,"lime_cairo_set_source_surface");
	HX_VISIT_MEMBER_NAME(Cairo_obj::lime_cairo_set_tolerance,"lime_cairo_set_tolerance");
	HX_VISIT_MEMBER_NAME(Cairo_obj::lime_cairo_show_page,"lime_cairo_show_page");
	HX_VISIT_MEMBER_NAME(Cairo_obj::lime_cairo_show_text,"lime_cairo_show_text");
	HX_VISIT_MEMBER_NAME(Cairo_obj::lime_cairo_status,"lime_cairo_status");
	HX_VISIT_MEMBER_NAME(Cairo_obj::lime_cairo_stroke,"lime_cairo_stroke");
	HX_VISIT_MEMBER_NAME(Cairo_obj::lime_cairo_stroke_extents,"lime_cairo_stroke_extents");
	HX_VISIT_MEMBER_NAME(Cairo_obj::lime_cairo_stroke_preserve,"lime_cairo_stroke_preserve");
	HX_VISIT_MEMBER_NAME(Cairo_obj::lime_cairo_transform,"lime_cairo_transform");
	HX_VISIT_MEMBER_NAME(Cairo_obj::lime_cairo_rotate,"lime_cairo_rotate");
	HX_VISIT_MEMBER_NAME(Cairo_obj::lime_cairo_scale,"lime_cairo_scale");
	HX_VISIT_MEMBER_NAME(Cairo_obj::lime_cairo_translate,"lime_cairo_translate");
	HX_VISIT_MEMBER_NAME(Cairo_obj::lime_cairo_version,"lime_cairo_version");
	HX_VISIT_MEMBER_NAME(Cairo_obj::lime_cairo_version_string,"lime_cairo_version_string");
};

#endif

hx::Class Cairo_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("version","\x18","\xe7","\xf1","\x7c"),
	HX_HCSTRING("versionString","\x09","\xe6","\xa0","\x51"),
	HX_HCSTRING("get_version","\x2f","\x47","\xec","\x02"),
	HX_HCSTRING("get_versionString","\x60","\xf1","\x10","\x58"),
	HX_HCSTRING("lime_cairo_arc","\xf1","\x76","\xfc","\xf9"),
	HX_HCSTRING("lime_cairo_arc_negative","\xc3","\xc0","\xb7","\xd8"),
	HX_HCSTRING("lime_cairo_clip","\x51","\x81","\x39","\xc4"),
	HX_HCSTRING("lime_cairo_clip_preserve","\xba","\xaf","\x0e","\x79"),
	HX_HCSTRING("lime_cairo_clip_extents","\x1b","\xef","\x99","\x33"),
	HX_HCSTRING("lime_cairo_close_path","\x0d","\x58","\x78","\xe1"),
	HX_HCSTRING("lime_cairo_copy_page","\x38","\xe4","\xe1","\x1e"),
	HX_HCSTRING("lime_cairo_create","\xbd","\xdb","\x50","\xd8"),
	HX_HCSTRING("lime_cairo_curve_to","\x4c","\xed","\xec","\xef"),
	HX_HCSTRING("lime_cairo_destroy","\x19","\xe1","\x8a","\x81"),
	HX_HCSTRING("lime_cairo_fill","\x04","\xe1","\x32","\xc6"),
	HX_HCSTRING("lime_cairo_fill_extents","\xce","\xb9","\x56","\x6b"),
	HX_HCSTRING("lime_cairo_fill_preserve","\xa7","\x41","\x83","\x06"),
	HX_HCSTRING("lime_cairo_get_antialias","\xe4","\xbf","\xea","\x4f"),
	HX_HCSTRING("lime_cairo_get_current_point","\xc0","\xc4","\x0b","\xc0"),
	HX_HCSTRING("lime_cairo_get_dash","\xdc","\xf7","\x36","\xc9"),
	HX_HCSTRING("lime_cairo_get_dash_count","\xec","\xd0","\x06","\xce"),
	HX_HCSTRING("lime_cairo_get_fill_rule","\xae","\x34","\x3f","\x14"),
	HX_HCSTRING("lime_cairo_get_group_target","\x1b","\x04","\x8e","\x27"),
	HX_HCSTRING("lime_cairo_get_line_cap","\x91","\x8a","\xff","\xdc"),
	HX_HCSTRING("lime_cairo_get_line_join","\x8b","\xcc","\x44","\x87"),
	HX_HCSTRING("lime_cairo_get_line_width","\x45","\xaa","\x28","\x4d"),
	HX_HCSTRING("lime_cairo_get_matrix","\x4b","\x0f","\xb1","\x58"),
	HX_HCSTRING("lime_cairo_get_miter_limit","\xf7","\xda","\xf6","\xe3"),
	HX_HCSTRING("lime_cairo_get_operator","\x2e","\xcb","\x0b","\x90"),
	HX_HCSTRING("lime_cairo_get_reference_count","\xd1","\xb3","\x30","\xbb"),
	HX_HCSTRING("lime_cairo_get_source","\xe5","\x89","\x1a","\xcf"),
	HX_HCSTRING("lime_cairo_get_target","\x5b","\xcc","\xd5","\x23"),
	HX_HCSTRING("lime_cairo_get_tolerance","\x43","\x26","\x7d","\x0d"),
	HX_HCSTRING("lime_cairo_has_current_point","\x84","\x52","\x43","\x91"),
	HX_HCSTRING("lime_cairo_identity_matrix","\x81","\xb1","\xfe","\x41"),
	HX_HCSTRING("lime_cairo_in_clip","\xc9","\xa4","\x67","\x5b"),
	HX_HCSTRING("lime_cairo_in_fill","\x7c","\x04","\x61","\x5d"),
	HX_HCSTRING("lime_cairo_in_stroke","\xf1","\x19","\x0e","\xc7"),
	HX_HCSTRING("lime_cairo_line_to","\x45","\x88","\xaa","\x7c"),
	HX_HCSTRING("lime_cairo_mask","\x6d","\x53","\xcd","\xca"),
	HX_HCSTRING("lime_cairo_mask_surface","\x1b","\xc8","\xa3","\x8c"),
	HX_HCSTRING("lime_cairo_move_to","\x48","\xcd","\x98","\xa7"),
	HX_HCSTRING("lime_cairo_new_path","\x25","\xbc","\x98","\x94"),
	HX_HCSTRING("lime_cairo_paint","\xfd","\xd5","\x07","\x63"),
	HX_HCSTRING("lime_cairo_paint_with_alpha","\x67","\x1b","\xfb","\x63"),
	HX_HCSTRING("lime_cairo_pop_group","\xb0","\x94","\x6e","\x0c"),
	HX_HCSTRING("lime_cairo_pop_group_to_source","\xd0","\x9e","\x67","\xaf"),
	HX_HCSTRING("lime_cairo_push_group","\x1b","\x55","\x88","\x61"),
	HX_HCSTRING("lime_cairo_push_group_with_content","\xa4","\xbb","\x13","\xd3"),
	HX_HCSTRING("lime_cairo_rectangle","\x0e","\x0e","\x2e","\x48"),
	HX_HCSTRING("lime_cairo_reference","\xaa","\x41","\x76","\x89"),
	HX_HCSTRING("lime_cairo_rel_curve_to","\xb2","\xac","\x52","\x05"),
	HX_HCSTRING("lime_cairo_rel_line_to","\x9f","\x37","\x7e","\xc0"),
	HX_HCSTRING("lime_cairo_rel_move_to","\xa2","\x7c","\x6c","\xeb"),
	HX_HCSTRING("lime_cairo_reset_clip","\xc1","\xbb","\xa3","\xf6"),
	HX_HCSTRING("lime_cairo_restore","\x6d","\x1b","\xb5","\xc7"),
	HX_HCSTRING("lime_cairo_save","\xbe","\x9d","\xc4","\xce"),
	HX_HCSTRING("lime_cairo_set_antialias","\xf0","\xa1","\xf0","\x94"),
	HX_HCSTRING("lime_cairo_set_dash","\x50","\x51","\x94","\x77"),
	HX_HCSTRING("lime_cairo_set_font_face","\x8f","\xcf","\x7b","\x2e"),
	HX_HCSTRING("lime_cairo_set_font_size","\xb3","\xbb","\x19","\x37"),
	HX_HCSTRING("lime_cairo_set_fill_rule","\xba","\x16","\x45","\x59"),
	HX_HCSTRING("lime_cairo_set_font_options","\xac","\xfb","\x79","\x44"),
	HX_HCSTRING("lime_cairo_get_font_options","\x38","\x0e","\x38","\xee"),
	HX_HCSTRING("lime_cairo_set_line_cap","\x05","\xae","\xf8","\xf1"),
	HX_HCSTRING("lime_cairo_set_line_join","\x97","\xae","\x4a","\xcc"),
	HX_HCSTRING("lime_cairo_set_line_width","\xb9","\x92","\x48","\x6d"),
	HX_HCSTRING("lime_cairo_set_matrix","\xbf","\xad","\x2e","\x5c"),
	HX_HCSTRING("lime_cairo_set_miter_limit","\x03","\x58","\xc2","\xdf"),
	HX_HCSTRING("lime_cairo_set_operator","\xa2","\xee","\x04","\xa5"),
	HX_HCSTRING("lime_cairo_set_source","\x59","\x28","\x98","\xd2"),
	HX_HCSTRING("lime_cairo_set_source_rgb","\xe7","\xe8","\x97","\x83"),
	HX_HCSTRING("lime_cairo_set_source_rgba","\x9a","\xe1","\x53","\xa1"),
	HX_HCSTRING("lime_cairo_set_source_surface","\x07","\x69","\xef","\xcf"),
	HX_HCSTRING("lime_cairo_set_tolerance","\x4f","\x08","\x83","\x52"),
	HX_HCSTRING("lime_cairo_show_page","\xf0","\x25","\x4b","\xc7"),
	HX_HCSTRING("lime_cairo_show_text","\x4e","\x18","\xf3","\xc9"),
	HX_HCSTRING("lime_cairo_status","\xf3","\x5b","\x3d","\x62"),
	HX_HCSTRING("lime_cairo_stroke","\x79","\x28","\x76","\x6d"),
	HX_HCSTRING("lime_cairo_stroke_extents","\x43","\xfe","\x0d","\xea"),
	HX_HCSTRING("lime_cairo_stroke_preserve","\x92","\xe3","\x27","\x68"),
	HX_HCSTRING("lime_cairo_transform","\x4b","\x67","\x44","\x74"),
	HX_HCSTRING("lime_cairo_rotate","\x1c","\xbb","\x61","\x27"),
	HX_HCSTRING("lime_cairo_scale","\xe9","\xec","\x87","\x1e"),
	HX_HCSTRING("lime_cairo_translate","\x2d","\x11","\x31","\x78"),
	HX_HCSTRING("lime_cairo_version","\x37","\x9b","\xf6","\xd9"),
	HX_HCSTRING("lime_cairo_version_string","\x19","\x84","\x60","\x45"),
	::String(null()) };

void Cairo_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("lime.graphics.cairo.Cairo","\xd8","\xbd","\x0e","\x04");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Cairo_obj::__GetStatic;
	__mClass->mSetStaticField = &Cairo_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Cairo_obj >;
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

void Cairo_obj::__boot()
{
	lime_cairo_arc= ::lime::_system::System_obj::load(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_cairo_arc","\xf1","\x76","\xfc","\xf9"),(int)-1,null());
	lime_cairo_arc_negative= ::lime::_system::System_obj::load(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_cairo_arc_negative","\xc3","\xc0","\xb7","\xd8"),(int)-1,null());
	lime_cairo_clip= ::lime::_system::System_obj::load(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_cairo_clip","\x51","\x81","\x39","\xc4"),(int)1,null());
	lime_cairo_clip_preserve= ::lime::_system::System_obj::load(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_cairo_clip_preserve","\xba","\xaf","\x0e","\x79"),(int)1,null());
	lime_cairo_clip_extents= ::lime::_system::System_obj::load(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_cairo_clip_extents","\x1b","\xef","\x99","\x33"),(int)5,null());
	lime_cairo_close_path= ::lime::_system::System_obj::load(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_cairo_close_path","\x0d","\x58","\x78","\xe1"),(int)1,null());
	lime_cairo_copy_page= ::lime::_system::System_obj::load(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_cairo_copy_page","\x38","\xe4","\xe1","\x1e"),(int)1,null());
	lime_cairo_create= ::lime::_system::System_obj::load(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_cairo_create","\xbd","\xdb","\x50","\xd8"),(int)1,null());
	lime_cairo_curve_to= ::lime::_system::System_obj::load(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_cairo_curve_to","\x4c","\xed","\xec","\xef"),(int)-1,null());
	lime_cairo_destroy= ::lime::_system::System_obj::load(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_cairo_destroy","\x19","\xe1","\x8a","\x81"),(int)1,null());
	lime_cairo_fill= ::lime::_system::System_obj::load(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_cairo_fill","\x04","\xe1","\x32","\xc6"),(int)1,null());
	lime_cairo_fill_extents= ::lime::_system::System_obj::load(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_cairo_fill_extents","\xce","\xb9","\x56","\x6b"),(int)5,null());
	lime_cairo_fill_preserve= ::lime::_system::System_obj::load(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_cairo_fill_preserve","\xa7","\x41","\x83","\x06"),(int)1,null());
	lime_cairo_get_antialias= ::lime::_system::System_obj::load(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_cairo_get_antialias","\xe4","\xbf","\xea","\x4f"),(int)1,null());
	lime_cairo_get_current_point= ::lime::_system::System_obj::load(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_cairo_get_current_point","\xc0","\xc4","\x0b","\xc0"),(int)1,null());
	lime_cairo_get_dash= ::lime::_system::System_obj::load(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_cairo_get_dash","\xdc","\xf7","\x36","\xc9"),(int)1,null());
	lime_cairo_get_dash_count= ::lime::_system::System_obj::load(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_cairo_get_dash_count","\xec","\xd0","\x06","\xce"),(int)1,null());
	lime_cairo_get_fill_rule= ::lime::_system::System_obj::load(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_cairo_get_fill_rule","\xae","\x34","\x3f","\x14"),(int)1,null());
	lime_cairo_get_group_target= ::lime::_system::System_obj::load(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_cairo_get_group_target","\x1b","\x04","\x8e","\x27"),(int)1,null());
	lime_cairo_get_line_cap= ::lime::_system::System_obj::load(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_cairo_get_line_cap","\x91","\x8a","\xff","\xdc"),(int)1,null());
	lime_cairo_get_line_join= ::lime::_system::System_obj::load(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_cairo_get_line_join","\x8b","\xcc","\x44","\x87"),(int)1,null());
	lime_cairo_get_line_width= ::lime::_system::System_obj::load(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_cairo_get_line_width","\x45","\xaa","\x28","\x4d"),(int)1,null());
	lime_cairo_get_matrix= ::lime::_system::System_obj::load(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_cairo_get_matrix","\x4b","\x0f","\xb1","\x58"),(int)1,null());
	lime_cairo_get_miter_limit= ::lime::_system::System_obj::load(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_cairo_get_miter_limit","\xf7","\xda","\xf6","\xe3"),(int)1,null());
	lime_cairo_get_operator= ::lime::_system::System_obj::load(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_cairo_get_operator","\x2e","\xcb","\x0b","\x90"),(int)1,null());
	lime_cairo_get_reference_count= ::lime::_system::System_obj::load(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_cairo_get_reference_count","\xd1","\xb3","\x30","\xbb"),(int)1,null());
	lime_cairo_get_source= ::lime::_system::System_obj::load(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_cairo_get_source","\xe5","\x89","\x1a","\xcf"),(int)1,null());
	lime_cairo_get_target= ::lime::_system::System_obj::load(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_cairo_get_target","\x5b","\xcc","\xd5","\x23"),(int)1,null());
	lime_cairo_get_tolerance= ::lime::_system::System_obj::load(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_cairo_get_tolerance","\x43","\x26","\x7d","\x0d"),(int)1,null());
	lime_cairo_has_current_point= ::lime::_system::System_obj::load(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_cairo_has_current_point","\x84","\x52","\x43","\x91"),(int)1,null());
	lime_cairo_identity_matrix= ::lime::_system::System_obj::load(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_cairo_identity_matrix","\x81","\xb1","\xfe","\x41"),(int)1,null());
	lime_cairo_in_clip= ::lime::_system::System_obj::load(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_cairo_in_clip","\xc9","\xa4","\x67","\x5b"),(int)3,null());
	lime_cairo_in_fill= ::lime::_system::System_obj::load(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_cairo_in_fill","\x7c","\x04","\x61","\x5d"),(int)3,null());
	lime_cairo_in_stroke= ::lime::_system::System_obj::load(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_cairo_in_stroke","\xf1","\x19","\x0e","\xc7"),(int)3,null());
	lime_cairo_line_to= ::lime::_system::System_obj::load(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_cairo_line_to","\x45","\x88","\xaa","\x7c"),(int)3,null());
	lime_cairo_mask= ::lime::_system::System_obj::load(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_cairo_mask","\x6d","\x53","\xcd","\xca"),(int)2,null());
	lime_cairo_mask_surface= ::lime::_system::System_obj::load(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_cairo_mask_surface","\x1b","\xc8","\xa3","\x8c"),(int)4,null());
	lime_cairo_move_to= ::lime::_system::System_obj::load(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_cairo_move_to","\x48","\xcd","\x98","\xa7"),(int)3,null());
	lime_cairo_new_path= ::lime::_system::System_obj::load(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_cairo_new_path","\x25","\xbc","\x98","\x94"),(int)1,null());
	lime_cairo_paint= ::lime::_system::System_obj::load(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_cairo_paint","\xfd","\xd5","\x07","\x63"),(int)1,null());
	lime_cairo_paint_with_alpha= ::lime::_system::System_obj::load(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_cairo_paint_with_alpha","\x67","\x1b","\xfb","\x63"),(int)2,null());
	lime_cairo_pop_group= ::lime::_system::System_obj::load(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_cairo_pop_group","\xb0","\x94","\x6e","\x0c"),(int)1,null());
	lime_cairo_pop_group_to_source= ::lime::_system::System_obj::load(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_cairo_pop_group_to_source","\xd0","\x9e","\x67","\xaf"),(int)1,null());
	lime_cairo_push_group= ::lime::_system::System_obj::load(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_cairo_push_group","\x1b","\x55","\x88","\x61"),(int)1,null());
	lime_cairo_push_group_with_content= ::lime::_system::System_obj::load(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_cairo_push_group_with_content","\xa4","\xbb","\x13","\xd3"),(int)2,null());
	lime_cairo_rectangle= ::lime::_system::System_obj::load(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_cairo_rectangle","\x0e","\x0e","\x2e","\x48"),(int)5,null());
	lime_cairo_reference= ::lime::_system::System_obj::load(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_cairo_reference","\xaa","\x41","\x76","\x89"),(int)1,null());
	lime_cairo_rel_curve_to= ::lime::_system::System_obj::load(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_cairo_rel_curve_to","\xb2","\xac","\x52","\x05"),(int)-1,null());
	lime_cairo_rel_line_to= ::lime::_system::System_obj::load(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_cairo_rel_line_to","\x9f","\x37","\x7e","\xc0"),(int)3,null());
	lime_cairo_rel_move_to= ::lime::_system::System_obj::load(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_cairo_rel_move_to","\xa2","\x7c","\x6c","\xeb"),(int)3,null());
	lime_cairo_reset_clip= ::lime::_system::System_obj::load(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_cairo_reset_clip","\xc1","\xbb","\xa3","\xf6"),(int)1,null());
	lime_cairo_restore= ::lime::_system::System_obj::load(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_cairo_restore","\x6d","\x1b","\xb5","\xc7"),(int)1,null());
	lime_cairo_save= ::lime::_system::System_obj::load(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_cairo_save","\xbe","\x9d","\xc4","\xce"),(int)1,null());
	lime_cairo_set_antialias= ::lime::_system::System_obj::load(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_cairo_set_antialias","\xf0","\xa1","\xf0","\x94"),(int)2,null());
	lime_cairo_set_dash= ::lime::_system::System_obj::load(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_cairo_set_dash","\x50","\x51","\x94","\x77"),(int)2,null());
	lime_cairo_set_font_face= ::lime::_system::System_obj::load(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_cairo_set_font_face","\x8f","\xcf","\x7b","\x2e"),(int)2,null());
	lime_cairo_set_font_size= ::lime::_system::System_obj::load(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_cairo_set_font_size","\xb3","\xbb","\x19","\x37"),(int)2,null());
	lime_cairo_set_fill_rule= ::lime::_system::System_obj::load(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_cairo_set_fill_rule","\xba","\x16","\x45","\x59"),(int)2,null());
	lime_cairo_set_font_options= ::lime::_system::System_obj::load(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_cairo_set_font_options","\xac","\xfb","\x79","\x44"),(int)2,null());
	lime_cairo_get_font_options= ::lime::_system::System_obj::load(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_cairo_get_font_options","\x38","\x0e","\x38","\xee"),(int)1,null());
	lime_cairo_set_line_cap= ::lime::_system::System_obj::load(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_cairo_set_line_cap","\x05","\xae","\xf8","\xf1"),(int)2,null());
	lime_cairo_set_line_join= ::lime::_system::System_obj::load(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_cairo_set_line_join","\x97","\xae","\x4a","\xcc"),(int)2,null());
	lime_cairo_set_line_width= ::lime::_system::System_obj::load(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_cairo_set_line_width","\xb9","\x92","\x48","\x6d"),(int)2,null());
	lime_cairo_set_matrix= ::lime::_system::System_obj::load(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_cairo_set_matrix","\xbf","\xad","\x2e","\x5c"),(int)2,null());
	lime_cairo_set_miter_limit= ::lime::_system::System_obj::load(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_cairo_set_miter_limit","\x03","\x58","\xc2","\xdf"),(int)2,null());
	lime_cairo_set_operator= ::lime::_system::System_obj::load(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_cairo_set_operator","\xa2","\xee","\x04","\xa5"),(int)2,null());
	lime_cairo_set_source= ::lime::_system::System_obj::load(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_cairo_set_source","\x59","\x28","\x98","\xd2"),(int)2,null());
	lime_cairo_set_source_rgb= ::lime::_system::System_obj::load(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_cairo_set_source_rgb","\xe7","\xe8","\x97","\x83"),(int)4,null());
	lime_cairo_set_source_rgba= ::lime::_system::System_obj::load(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_cairo_set_source_rgba","\x9a","\xe1","\x53","\xa1"),(int)5,null());
	lime_cairo_set_source_surface= ::lime::_system::System_obj::load(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_cairo_set_source_surface","\x07","\x69","\xef","\xcf"),(int)4,null());
	lime_cairo_set_tolerance= ::lime::_system::System_obj::load(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_cairo_set_tolerance","\x4f","\x08","\x83","\x52"),(int)2,null());
	lime_cairo_show_page= ::lime::_system::System_obj::load(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_cairo_show_page","\xf0","\x25","\x4b","\xc7"),(int)1,null());
	lime_cairo_show_text= ::lime::_system::System_obj::load(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_cairo_show_text","\x4e","\x18","\xf3","\xc9"),(int)2,null());
	lime_cairo_status= ::lime::_system::System_obj::load(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_cairo_status","\xf3","\x5b","\x3d","\x62"),(int)1,null());
	lime_cairo_stroke= ::lime::_system::System_obj::load(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_cairo_stroke","\x79","\x28","\x76","\x6d"),(int)1,null());
	lime_cairo_stroke_extents= ::lime::_system::System_obj::load(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_cairo_stroke_extents","\x43","\xfe","\x0d","\xea"),(int)5,null());
	lime_cairo_stroke_preserve= ::lime::_system::System_obj::load(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_cairo_stroke_preserve","\x92","\xe3","\x27","\x68"),(int)1,null());
	lime_cairo_transform= ::lime::_system::System_obj::load(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_cairo_transform","\x4b","\x67","\x44","\x74"),(int)2,null());
	lime_cairo_rotate= ::lime::_system::System_obj::load(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_cairo_rotate","\x1c","\xbb","\x61","\x27"),(int)2,null());
	lime_cairo_scale= ::lime::_system::System_obj::load(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_cairo_scale","\xe9","\xec","\x87","\x1e"),(int)3,null());
	lime_cairo_translate= ::lime::_system::System_obj::load(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_cairo_translate","\x2d","\x11","\x31","\x78"),(int)3,null());
	lime_cairo_version= ::lime::_system::System_obj::load(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_cairo_version","\x37","\x9b","\xf6","\xd9"),(int)0,null());
	lime_cairo_version_string= ::lime::_system::System_obj::load(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_cairo_version_string","\x19","\x84","\x60","\x45"),(int)0,null());
}

} // end namespace lime
} // end namespace graphics
} // end namespace cairo
