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
#ifndef INCLUDED_lime_graphics_cairo_CairoFont
#include <lime/graphics/cairo/CairoFont.h>
#endif
#ifndef INCLUDED_lime_graphics_cairo_CairoFontOptions
#include <lime/graphics/cairo/CairoFontOptions.h>
#endif
#ifndef INCLUDED_lime_graphics_cairo__CairoImageSurface_CairoImageSurface_Impl_
#include <lime/graphics/cairo/_CairoImageSurface/CairoImageSurface_Impl_.h>
#endif
#ifndef INCLUDED_lime_graphics_cairo__CairoSurface_CairoSurface_Impl_
#include <lime/graphics/cairo/_CairoSurface/CairoSurface_Impl_.h>
#endif
#ifndef INCLUDED_lime_text_Font
#include <lime/text/Font.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_RenderSession
#include <openfl/_internal/renderer/RenderSession.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_cairo_CairoTextField
#include <openfl/_internal/renderer/cairo/CairoTextField.h>
#endif
#ifndef INCLUDED_openfl__internal_text_TextEngine
#include <openfl/_internal/text/TextEngine.h>
#endif
#ifndef INCLUDED_openfl__internal_text_TextLayoutGroup
#include <openfl/_internal/text/TextLayoutGroup.h>
#endif
#ifndef INCLUDED_openfl_display_BitmapData
#include <openfl/display/BitmapData.h>
#endif
#ifndef INCLUDED_openfl_display_DisplayObject
#include <openfl/display/DisplayObject.h>
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
#ifndef INCLUDED_openfl_events_EventDispatcher
#include <openfl/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_events_IEventDispatcher
#include <openfl/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_geom_Rectangle
#include <openfl/geom/Rectangle.h>
#endif
#ifndef INCLUDED_openfl_text_AntiAliasType
#include <openfl/text/AntiAliasType.h>
#endif
#ifndef INCLUDED_openfl_text_Font
#include <openfl/text/Font.h>
#endif
#ifndef INCLUDED_openfl_text_GridFitType
#include <openfl/text/GridFitType.h>
#endif
#ifndef INCLUDED_openfl_text_TextField
#include <openfl/text/TextField.h>
#endif
#ifndef INCLUDED_openfl_text_TextFormat
#include <openfl/text/TextFormat.h>
#endif
namespace openfl{
namespace _internal{
namespace renderer{
namespace cairo{

Void CairoTextField_obj::__construct()
{
	return null();
}

//CairoTextField_obj::~CairoTextField_obj() { }

Dynamic CairoTextField_obj::__CreateEmpty() { return  new CairoTextField_obj; }
hx::ObjectPtr< CairoTextField_obj > CairoTextField_obj::__new()
{  hx::ObjectPtr< CairoTextField_obj > _result_ = new CairoTextField_obj();
	_result_->__construct();
	return _result_;}

Dynamic CairoTextField_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< CairoTextField_obj > _result_ = new CairoTextField_obj();
	_result_->__construct();
	return _result_;}

Void CairoTextField_obj::render( ::openfl::text::TextField textField,::openfl::_internal::renderer::RenderSession renderSession){
{
		HX_STACK_FRAME("openfl._internal.renderer.cairo.CairoTextField","render",0xabb9797e,"openfl._internal.renderer.cairo.CairoTextField.render","openfl/_internal/renderer/cairo/CairoTextField.hx",23,0xfadfb778)
		HX_STACK_ARG(textField,"textField")
		HX_STACK_ARG(renderSession,"renderSession")
		HX_STACK_LINE(26)
		bool tmp = textField->__dirty;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(26)
		bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(26)
		if ((tmp1)){
			HX_STACK_LINE(26)
			return null();
		}
		HX_STACK_LINE(28)
		textField->__updateLayout();
		HX_STACK_LINE(30)
		::openfl::_internal::text::TextEngine textEngine = textField->__textEngine;		HX_STACK_VAR(textEngine,"textEngine");
		HX_STACK_LINE(31)
		::openfl::geom::Rectangle bounds = textEngine->bounds;		HX_STACK_VAR(bounds,"bounds");
		HX_STACK_LINE(33)
		::openfl::display::Graphics graphics = textField->__graphics;		HX_STACK_VAR(graphics,"graphics");
		HX_STACK_LINE(34)
		::lime::graphics::cairo::Cairo cairo = graphics->__cairo;		HX_STACK_VAR(cairo,"cairo");
		HX_STACK_LINE(36)
		bool tmp2 = (cairo != null());		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(36)
		if ((tmp2)){
			HX_STACK_LINE(38)
			Dynamic tmp3 = cairo->get_target();		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(38)
			Dynamic surface = tmp3;		HX_STACK_VAR(surface,"surface");
			HX_STACK_LINE(40)
			Float tmp4 = bounds->width;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(40)
			int tmp5 = ::Math_obj::ceil(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(40)
			Dynamic tmp6 = surface;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(40)
			int tmp7 = ::lime::graphics::cairo::_CairoImageSurface::CairoImageSurface_Impl__obj::get_width(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(40)
			bool tmp8 = (tmp5 != tmp7);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(40)
			bool tmp9 = !(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(40)
			bool tmp10;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(40)
			if ((tmp9)){
				HX_STACK_LINE(40)
				Float tmp11 = bounds->height;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(40)
				Float tmp12 = tmp11;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(40)
				int tmp13 = ::Math_obj::ceil(tmp12);		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(40)
				int tmp14 = tmp13;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(40)
				Dynamic tmp15 = surface;		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(40)
				Dynamic tmp16 = tmp15;		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(40)
				int tmp17 = ::lime::graphics::cairo::_CairoImageSurface::CairoImageSurface_Impl__obj::get_height(tmp16);		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(40)
				int tmp18 = tmp17;		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(40)
				tmp10 = (tmp14 != tmp18);
			}
			else{
				HX_STACK_LINE(40)
				tmp10 = true;
			}
			HX_STACK_LINE(40)
			if ((tmp10)){
				HX_STACK_LINE(42)
				cairo->destroy();
				HX_STACK_LINE(43)
				cairo = null();
			}
		}
		HX_STACK_LINE(49)
		bool tmp3 = (cairo == null());		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(49)
		if ((tmp3)){
			HX_STACK_LINE(51)
			Float tmp4 = bounds->width;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(51)
			int tmp5 = ::Math_obj::ceil(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(51)
			Float tmp6 = bounds->height;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(51)
			int tmp7 = ::Math_obj::ceil(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(51)
			::openfl::display::BitmapData tmp8 = ::openfl::display::BitmapData_obj::__new(tmp5,tmp7,true,null());		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(51)
			::openfl::display::BitmapData bitmap = tmp8;		HX_STACK_VAR(bitmap,"bitmap");
			HX_STACK_LINE(52)
			Dynamic tmp9 = bitmap->getSurface();		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(52)
			Dynamic surface = tmp9;		HX_STACK_VAR(surface,"surface");
			HX_STACK_LINE(53)
			::lime::graphics::cairo::Cairo tmp10 = ::lime::graphics::cairo::Cairo_obj::__new(surface);		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(53)
			graphics->__cairo = tmp10;
			HX_STACK_LINE(54)
			Dynamic tmp11 = surface;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(54)
			::lime::graphics::cairo::_CairoSurface::CairoSurface_Impl__obj::destroy(tmp11);
			HX_STACK_LINE(56)
			graphics->__bitmap = bitmap;
			HX_STACK_LINE(57)
			::openfl::geom::Rectangle tmp12 = ::openfl::geom::Rectangle_obj::__new(bounds->x,bounds->y,bounds->width,bounds->height);		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(57)
			graphics->__bounds = tmp12;
			HX_STACK_LINE(59)
			cairo = graphics->__cairo;
			HX_STACK_LINE(61)
			::lime::graphics::cairo::CairoFontOptions tmp13 = ::lime::graphics::cairo::CairoFontOptions_obj::__new(null());		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(61)
			::lime::graphics::cairo::CairoFontOptions options = tmp13;		HX_STACK_VAR(options,"options");
			HX_STACK_LINE(63)
			bool tmp14 = (textEngine->antiAliasType == ::openfl::text::AntiAliasType_obj::ADVANCED);		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(63)
			bool tmp15;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(63)
			if ((tmp14)){
				HX_STACK_LINE(63)
				tmp15 = (textEngine->gridFitType == ::openfl::text::GridFitType_obj::PIXEL);
			}
			else{
				HX_STACK_LINE(63)
				tmp15 = false;
			}
			HX_STACK_LINE(63)
			if ((tmp15)){
				HX_STACK_LINE(65)
				options->set_hintStyle((int)1);
				HX_STACK_LINE(66)
				options->set_hintMetrics((int)1);
				HX_STACK_LINE(67)
				options->set_antialias((int)1);
			}
			else{
				HX_STACK_LINE(71)
				options->set_hintStyle((int)0);
				HX_STACK_LINE(72)
				options->set_hintMetrics((int)1);
				HX_STACK_LINE(73)
				options->set_antialias((int)5);
			}
			HX_STACK_LINE(77)
			::lime::graphics::cairo::CairoFontOptions tmp16 = options;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(77)
			cairo->setFontOptions(tmp16);
		}
		HX_STACK_LINE(81)
		bool tmp4 = textEngine->border;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(81)
		if ((tmp4)){
			HX_STACK_LINE(83)
			Float tmp5 = (bounds->width - (int)1);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(83)
			int tmp6 = ::Std_obj::_int(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(83)
			Float tmp7 = (bounds->height - (int)1);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(83)
			int tmp8 = ::Std_obj::_int(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(83)
			cairo->rectangle(((Float)0.5),((Float)0.5),tmp6,tmp8);
		}
		else{
			HX_STACK_LINE(87)
			Float tmp5 = bounds->width;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(87)
			Float tmp6 = bounds->height;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(87)
			cairo->rectangle((int)0,(int)0,tmp5,tmp6);
		}
		HX_STACK_LINE(91)
		bool tmp5 = textEngine->background;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(91)
		bool tmp6 = !(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(91)
		if ((tmp6)){
			HX_STACK_LINE(93)
			cairo->set_operator((int)1);
			HX_STACK_LINE(94)
			cairo->setSourceRGBA((int)1,(int)1,(int)1,(int)0);
			HX_STACK_LINE(95)
			cairo->paint();
			HX_STACK_LINE(96)
			cairo->set_operator((int)2);
		}
		else{
			HX_STACK_LINE(100)
			int color = textEngine->backgroundColor;		HX_STACK_VAR(color,"color");
			HX_STACK_LINE(101)
			int tmp7 = (int(color) & int((int)16711680));		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(101)
			int tmp8 = hx::UShr(tmp7,(int)16);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(101)
			Float tmp9 = (Float(tmp8) / Float((int)255));		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(101)
			Float r = tmp9;		HX_STACK_VAR(r,"r");
			HX_STACK_LINE(102)
			int tmp10 = (int(color) & int((int)65280));		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(102)
			int tmp11 = hx::UShr(tmp10,(int)8);		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(102)
			Float tmp12 = (Float(tmp11) / Float((int)255));		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(102)
			Float g = tmp12;		HX_STACK_VAR(g,"g");
			HX_STACK_LINE(103)
			int tmp13 = (int(color) & int((int)255));		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(103)
			Float tmp14 = (Float(tmp13) / Float((int)255));		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(103)
			Float b = tmp14;		HX_STACK_VAR(b,"b");
			HX_STACK_LINE(105)
			Float tmp15 = r;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(105)
			Float tmp16 = g;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(105)
			Float tmp17 = b;		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(105)
			cairo->setSourceRGB(tmp15,tmp16,tmp17);
			HX_STACK_LINE(106)
			cairo->fillPreserve();
		}
		HX_STACK_LINE(110)
		bool tmp7 = textEngine->border;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(110)
		if ((tmp7)){
			HX_STACK_LINE(112)
			int color = textEngine->borderColor;		HX_STACK_VAR(color,"color");
			HX_STACK_LINE(113)
			int tmp8 = (int(color) & int((int)16711680));		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(113)
			int tmp9 = hx::UShr(tmp8,(int)16);		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(113)
			Float tmp10 = (Float(tmp9) / Float((int)255));		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(113)
			Float r = tmp10;		HX_STACK_VAR(r,"r");
			HX_STACK_LINE(114)
			int tmp11 = (int(color) & int((int)65280));		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(114)
			int tmp12 = hx::UShr(tmp11,(int)8);		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(114)
			Float tmp13 = (Float(tmp12) / Float((int)255));		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(114)
			Float g = tmp13;		HX_STACK_VAR(g,"g");
			HX_STACK_LINE(115)
			int tmp14 = (int(color) & int((int)255));		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(115)
			Float tmp15 = (Float(tmp14) / Float((int)255));		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(115)
			Float b = tmp15;		HX_STACK_VAR(b,"b");
			HX_STACK_LINE(117)
			Float tmp16 = r;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(117)
			Float tmp17 = g;		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(117)
			Float tmp18 = b;		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(117)
			cairo->setSourceRGB(tmp16,tmp17,tmp18);
			HX_STACK_LINE(118)
			cairo->set_lineWidth((int)1);
			HX_STACK_LINE(119)
			cairo->stroke();
		}
		HX_STACK_LINE(123)
		bool tmp8 = (textEngine->text != null());		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(123)
		bool tmp9;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(123)
		if ((tmp8)){
			HX_STACK_LINE(123)
			tmp9 = (textEngine->text != HX_HCSTRING("","\x00","\x00","\x00","\x00"));
		}
		else{
			HX_STACK_LINE(123)
			tmp9 = false;
		}
		HX_STACK_LINE(123)
		if ((tmp9)){
			HX_STACK_LINE(125)
			Float tmp10 = bounds->width;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(125)
			bool tmp11 = textField->get_border();		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(125)
			int tmp12;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(125)
			if ((tmp11)){
				HX_STACK_LINE(125)
				tmp12 = (int)1;
			}
			else{
				HX_STACK_LINE(125)
				tmp12 = (int)0;
			}
			HX_STACK_LINE(125)
			Float tmp13 = (tmp10 - tmp12);		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(125)
			Float tmp14 = bounds->height;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(125)
			bool tmp15 = textField->get_border();		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(125)
			int tmp16;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(125)
			if ((tmp15)){
				HX_STACK_LINE(125)
				tmp16 = (int)1;
			}
			else{
				HX_STACK_LINE(125)
				tmp16 = (int)0;
			}
			HX_STACK_LINE(125)
			Float tmp17 = (tmp14 - tmp16);		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(125)
			cairo->rectangle((int)0,(int)0,tmp13,tmp17);
			HX_STACK_LINE(126)
			cairo->clip();
			HX_STACK_LINE(128)
			::String text = textEngine->text;		HX_STACK_VAR(text,"text");
			HX_STACK_LINE(145)
			int tmp18 = textField->get_scrollH();		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(145)
			int tmp19 = -(tmp18);		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(145)
			int scrollX = tmp19;		HX_STACK_VAR(scrollX,"scrollX");
			HX_STACK_LINE(146)
			Float scrollY = ((Float)0.0);		HX_STACK_VAR(scrollY,"scrollY");
			HX_STACK_LINE(148)
			{
				HX_STACK_LINE(148)
				int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(148)
				int tmp20 = textField->get_scrollV();		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(148)
				int tmp21 = (tmp20 - (int)1);		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(148)
				int _g = tmp21;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(148)
				while((true)){
					HX_STACK_LINE(148)
					bool tmp22 = (_g1 < _g);		HX_STACK_VAR(tmp22,"tmp22");
					HX_STACK_LINE(148)
					bool tmp23 = !(tmp22);		HX_STACK_VAR(tmp23,"tmp23");
					HX_STACK_LINE(148)
					if ((tmp23)){
						HX_STACK_LINE(148)
						break;
					}
					HX_STACK_LINE(148)
					int tmp24 = (_g1)++;		HX_STACK_VAR(tmp24,"tmp24");
					HX_STACK_LINE(148)
					int i = tmp24;		HX_STACK_VAR(i,"i");
					HX_STACK_LINE(150)
					Float tmp25 = textEngine->lineHeights->__get(i);		HX_STACK_VAR(tmp25,"tmp25");
					HX_STACK_LINE(150)
					hx::SubEq(scrollY,tmp25);
				}
			}
			HX_STACK_LINE(154)
			Dynamic color;		HX_STACK_VAR(color,"color");
			HX_STACK_LINE(154)
			Float r;		HX_STACK_VAR(r,"r");
			HX_STACK_LINE(154)
			Float g;		HX_STACK_VAR(g,"g");
			HX_STACK_LINE(154)
			Float b;		HX_STACK_VAR(b,"b");
			HX_STACK_LINE(154)
			::openfl::text::Font font;		HX_STACK_VAR(font,"font");
			HX_STACK_LINE(154)
			int size;		HX_STACK_VAR(size,"size");
			HX_STACK_LINE(154)
			Float advance;		HX_STACK_VAR(advance,"advance");
			HX_STACK_LINE(156)
			{
				HX_STACK_LINE(156)
				int _g = (int)0;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(156)
				Array< ::Dynamic > _g1 = textEngine->layoutGroups;		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(156)
				while((true)){
					HX_STACK_LINE(156)
					bool tmp20 = (_g < _g1->length);		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(156)
					bool tmp21 = !(tmp20);		HX_STACK_VAR(tmp21,"tmp21");
					HX_STACK_LINE(156)
					if ((tmp21)){
						HX_STACK_LINE(156)
						break;
					}
					HX_STACK_LINE(156)
					::openfl::_internal::text::TextLayoutGroup tmp22 = _g1->__get(_g).StaticCast< ::openfl::_internal::text::TextLayoutGroup >();		HX_STACK_VAR(tmp22,"tmp22");
					HX_STACK_LINE(156)
					::openfl::_internal::text::TextLayoutGroup group = tmp22;		HX_STACK_VAR(group,"group");
					HX_STACK_LINE(156)
					++(_g);
					HX_STACK_LINE(158)
					int tmp23 = group->lineIndex;		HX_STACK_VAR(tmp23,"tmp23");
					HX_STACK_LINE(158)
					int tmp24 = textField->get_scrollV();		HX_STACK_VAR(tmp24,"tmp24");
					HX_STACK_LINE(158)
					int tmp25 = (tmp24 - (int)1);		HX_STACK_VAR(tmp25,"tmp25");
					HX_STACK_LINE(158)
					bool tmp26 = (tmp23 < tmp25);		HX_STACK_VAR(tmp26,"tmp26");
					HX_STACK_LINE(158)
					if ((tmp26)){
						HX_STACK_LINE(158)
						continue;
					}
					HX_STACK_LINE(159)
					int tmp27 = group->lineIndex;		HX_STACK_VAR(tmp27,"tmp27");
					HX_STACK_LINE(159)
					int tmp28 = textField->get_scrollV();		HX_STACK_VAR(tmp28,"tmp28");
					HX_STACK_LINE(159)
					int tmp29 = textEngine->bottomScrollV;		HX_STACK_VAR(tmp29,"tmp29");
					HX_STACK_LINE(159)
					int tmp30 = (tmp28 + tmp29);		HX_STACK_VAR(tmp30,"tmp30");
					HX_STACK_LINE(159)
					int tmp31 = (tmp30 - (int)2);		HX_STACK_VAR(tmp31,"tmp31");
					HX_STACK_LINE(159)
					bool tmp32 = (tmp27 > tmp31);		HX_STACK_VAR(tmp32,"tmp32");
					HX_STACK_LINE(159)
					if ((tmp32)){
						HX_STACK_LINE(159)
						break;
					}
					HX_STACK_LINE(161)
					Dynamic tmp33 = group->format->color;		HX_STACK_VAR(tmp33,"tmp33");
					HX_STACK_LINE(161)
					color = tmp33;
					HX_STACK_LINE(162)
					int tmp34 = (int(color) & int((int)16711680));		HX_STACK_VAR(tmp34,"tmp34");
					HX_STACK_LINE(162)
					int tmp35 = hx::UShr(tmp34,(int)16);		HX_STACK_VAR(tmp35,"tmp35");
					HX_STACK_LINE(162)
					Float tmp36 = (Float(tmp35) / Float((int)255));		HX_STACK_VAR(tmp36,"tmp36");
					HX_STACK_LINE(162)
					r = tmp36;
					HX_STACK_LINE(163)
					int tmp37 = (int(color) & int((int)65280));		HX_STACK_VAR(tmp37,"tmp37");
					HX_STACK_LINE(163)
					int tmp38 = hx::UShr(tmp37,(int)8);		HX_STACK_VAR(tmp38,"tmp38");
					HX_STACK_LINE(163)
					Float tmp39 = (Float(tmp38) / Float((int)255));		HX_STACK_VAR(tmp39,"tmp39");
					HX_STACK_LINE(163)
					g = tmp39;
					HX_STACK_LINE(164)
					int tmp40 = (int(color) & int((int)255));		HX_STACK_VAR(tmp40,"tmp40");
					HX_STACK_LINE(164)
					Float tmp41 = (Float(tmp40) / Float((int)255));		HX_STACK_VAR(tmp41,"tmp41");
					HX_STACK_LINE(164)
					b = tmp41;
					HX_STACK_LINE(166)
					Float tmp42 = r;		HX_STACK_VAR(tmp42,"tmp42");
					HX_STACK_LINE(166)
					Float tmp43 = g;		HX_STACK_VAR(tmp43,"tmp43");
					HX_STACK_LINE(166)
					Float tmp44 = b;		HX_STACK_VAR(tmp44,"tmp44");
					HX_STACK_LINE(166)
					cairo->setSourceRGB(tmp42,tmp43,tmp44);
					HX_STACK_LINE(168)
					::openfl::text::TextFormat tmp45 = group->format;		HX_STACK_VAR(tmp45,"tmp45");
					HX_STACK_LINE(168)
					::openfl::text::Font tmp46 = ::openfl::_internal::text::TextEngine_obj::getFontInstance(tmp45);		HX_STACK_VAR(tmp46,"tmp46");
					HX_STACK_LINE(168)
					font = tmp46;
					HX_STACK_LINE(170)
					bool tmp47 = (font != null());		HX_STACK_VAR(tmp47,"tmp47");
					HX_STACK_LINE(170)
					bool tmp48;		HX_STACK_VAR(tmp48,"tmp48");
					HX_STACK_LINE(170)
					if ((tmp47)){
						HX_STACK_LINE(170)
						Dynamic tmp49 = group->format->size;		HX_STACK_VAR(tmp49,"tmp49");
						HX_STACK_LINE(170)
						Dynamic tmp50 = tmp49;		HX_STACK_VAR(tmp50,"tmp50");
						HX_STACK_LINE(170)
						tmp48 = (tmp50 != null());
					}
					else{
						HX_STACK_LINE(170)
						tmp48 = false;
					}
					HX_STACK_LINE(170)
					if ((tmp48)){
						HX_STACK_LINE(172)
						bool tmp49 = (textEngine->__cairoFont != null());		HX_STACK_VAR(tmp49,"tmp49");
						HX_STACK_LINE(172)
						if ((tmp49)){
							HX_STACK_LINE(174)
							::lime::text::Font tmp50 = textEngine->__cairoFont->font;		HX_STACK_VAR(tmp50,"tmp50");
							HX_STACK_LINE(174)
							::openfl::text::Font tmp51 = font;		HX_STACK_VAR(tmp51,"tmp51");
							HX_STACK_LINE(174)
							bool tmp52 = (tmp50 != tmp51);		HX_STACK_VAR(tmp52,"tmp52");
							HX_STACK_LINE(174)
							if ((tmp52)){
								HX_STACK_LINE(176)
								textEngine->__cairoFont->destroy();
								HX_STACK_LINE(177)
								textEngine->__cairoFont = null();
							}
						}
						HX_STACK_LINE(183)
						bool tmp50 = (textEngine->__cairoFont == null());		HX_STACK_VAR(tmp50,"tmp50");
						HX_STACK_LINE(183)
						if ((tmp50)){
							HX_STACK_LINE(185)
							::lime::graphics::cairo::CairoFont tmp51 = ::lime::graphics::cairo::CairoFont_obj::__new(font,(int)0);		HX_STACK_VAR(tmp51,"tmp51");
							HX_STACK_LINE(185)
							textEngine->__cairoFont = tmp51;
						}
						HX_STACK_LINE(189)
						::lime::graphics::cairo::CairoFont tmp51 = textEngine->__cairoFont;		HX_STACK_VAR(tmp51,"tmp51");
						HX_STACK_LINE(189)
						cairo->setFontFace(tmp51);
						HX_STACK_LINE(191)
						Dynamic tmp52 = group->format->size;		HX_STACK_VAR(tmp52,"tmp52");
						HX_STACK_LINE(191)
						int tmp53 = ::Std_obj::_int(tmp52);		HX_STACK_VAR(tmp53,"tmp53");
						HX_STACK_LINE(191)
						size = tmp53;
						HX_STACK_LINE(192)
						int tmp54 = size;		HX_STACK_VAR(tmp54,"tmp54");
						HX_STACK_LINE(192)
						cairo->setFontSize(tmp54);
						HX_STACK_LINE(194)
						Float tmp55 = (group->offsetX + scrollX);		HX_STACK_VAR(tmp55,"tmp55");
						HX_STACK_LINE(194)
						Float tmp56 = (group->offsetY + group->ascent);		HX_STACK_VAR(tmp56,"tmp56");
						HX_STACK_LINE(194)
						Float tmp57 = scrollY;		HX_STACK_VAR(tmp57,"tmp57");
						HX_STACK_LINE(194)
						Float tmp58 = (tmp56 + tmp57);		HX_STACK_VAR(tmp58,"tmp58");
						HX_STACK_LINE(194)
						cairo->moveTo(tmp55,tmp58);
						HX_STACK_LINE(195)
						int tmp59 = group->startIndex;		HX_STACK_VAR(tmp59,"tmp59");
						HX_STACK_LINE(195)
						int tmp60 = group->endIndex;		HX_STACK_VAR(tmp60,"tmp60");
						HX_STACK_LINE(195)
						::String tmp61 = text.substring(tmp59,tmp60);		HX_STACK_VAR(tmp61,"tmp61");
						HX_STACK_LINE(195)
						cairo->showText(tmp61);
						HX_STACK_LINE(197)
						int tmp62 = textField->__caretIndex;		HX_STACK_VAR(tmp62,"tmp62");
						HX_STACK_LINE(197)
						int tmp63 = (int)-1;		HX_STACK_VAR(tmp63,"tmp63");
						HX_STACK_LINE(197)
						bool tmp64 = (tmp62 > tmp63);		HX_STACK_VAR(tmp64,"tmp64");
						HX_STACK_LINE(197)
						bool tmp65;		HX_STACK_VAR(tmp65,"tmp65");
						HX_STACK_LINE(197)
						if ((tmp64)){
							HX_STACK_LINE(197)
							tmp65 = textEngine->selectable;
						}
						else{
							HX_STACK_LINE(197)
							tmp65 = false;
						}
						HX_STACK_LINE(197)
						if ((tmp65)){
							HX_STACK_LINE(199)
							bool tmp66 = (textField->__selectionIndex == textField->__caretIndex);		HX_STACK_VAR(tmp66,"tmp66");
							HX_STACK_LINE(199)
							if ((tmp66)){
								HX_STACK_LINE(201)
								bool tmp67 = textField->__showCursor;		HX_STACK_VAR(tmp67,"tmp67");
								HX_STACK_LINE(201)
								bool tmp68 = tmp67;		HX_STACK_VAR(tmp68,"tmp68");
								HX_STACK_LINE(201)
								bool tmp69;		HX_STACK_VAR(tmp69,"tmp69");
								HX_STACK_LINE(201)
								if ((tmp68)){
									HX_STACK_LINE(201)
									tmp69 = (group->startIndex <= textField->__caretIndex);
								}
								else{
									HX_STACK_LINE(201)
									tmp69 = false;
								}
								HX_STACK_LINE(201)
								bool tmp70;		HX_STACK_VAR(tmp70,"tmp70");
								HX_STACK_LINE(201)
								if ((tmp69)){
									HX_STACK_LINE(201)
									tmp70 = (group->endIndex >= textField->__caretIndex);
								}
								else{
									HX_STACK_LINE(201)
									tmp70 = false;
								}
								HX_STACK_LINE(201)
								if ((tmp70)){
									HX_STACK_LINE(203)
									advance = ((Float)0.0);
									HX_STACK_LINE(205)
									{
										HX_STACK_LINE(205)
										int _g3 = (int)0;		HX_STACK_VAR(_g3,"_g3");
										HX_STACK_LINE(205)
										int tmp71 = (textField->__caretIndex - group->startIndex);		HX_STACK_VAR(tmp71,"tmp71");
										HX_STACK_LINE(205)
										int _g2 = tmp71;		HX_STACK_VAR(_g2,"_g2");
										HX_STACK_LINE(205)
										while((true)){
											HX_STACK_LINE(205)
											bool tmp72 = (_g3 < _g2);		HX_STACK_VAR(tmp72,"tmp72");
											HX_STACK_LINE(205)
											bool tmp73 = !(tmp72);		HX_STACK_VAR(tmp73,"tmp73");
											HX_STACK_LINE(205)
											if ((tmp73)){
												HX_STACK_LINE(205)
												break;
											}
											HX_STACK_LINE(205)
											int tmp74 = (_g3)++;		HX_STACK_VAR(tmp74,"tmp74");
											HX_STACK_LINE(205)
											int i = tmp74;		HX_STACK_VAR(i,"i");
											HX_STACK_LINE(207)
											int tmp75 = group->advances->length;		HX_STACK_VAR(tmp75,"tmp75");
											HX_STACK_LINE(207)
											int tmp76 = i;		HX_STACK_VAR(tmp76,"tmp76");
											HX_STACK_LINE(207)
											bool tmp77 = (tmp75 <= tmp76);		HX_STACK_VAR(tmp77,"tmp77");
											HX_STACK_LINE(207)
											if ((tmp77)){
												HX_STACK_LINE(207)
												break;
											}
											HX_STACK_LINE(208)
											Float tmp78 = group->advances->__get(i);		HX_STACK_VAR(tmp78,"tmp78");
											HX_STACK_LINE(208)
											hx::AddEq(advance,tmp78);
										}
									}
									HX_STACK_LINE(212)
									Float tmp71 = (group->offsetX + advance);		HX_STACK_VAR(tmp71,"tmp71");
									HX_STACK_LINE(212)
									int tmp72 = ::Math_obj::floor(tmp71);		HX_STACK_VAR(tmp72,"tmp72");
									HX_STACK_LINE(212)
									Float tmp73 = (tmp72 + ((Float)0.5));		HX_STACK_VAR(tmp73,"tmp73");
									HX_STACK_LINE(212)
									Float tmp74 = (group->offsetY + ((Float)0.5));		HX_STACK_VAR(tmp74,"tmp74");
									HX_STACK_LINE(212)
									cairo->moveTo(tmp73,tmp74);
									HX_STACK_LINE(213)
									cairo->set_lineWidth((int)1);
									HX_STACK_LINE(214)
									Float tmp75 = (group->offsetX + advance);		HX_STACK_VAR(tmp75,"tmp75");
									HX_STACK_LINE(214)
									int tmp76 = ::Math_obj::floor(tmp75);		HX_STACK_VAR(tmp76,"tmp76");
									HX_STACK_LINE(214)
									Float tmp77 = (tmp76 + ((Float)0.5));		HX_STACK_VAR(tmp77,"tmp77");
									HX_STACK_LINE(214)
									Float tmp78 = (group->offsetY + group->height);		HX_STACK_VAR(tmp78,"tmp78");
									HX_STACK_LINE(214)
									Float tmp79 = (tmp78 - (int)1);		HX_STACK_VAR(tmp79,"tmp79");
									HX_STACK_LINE(214)
									cairo->lineTo(tmp77,tmp79);
									HX_STACK_LINE(215)
									cairo->stroke();
								}
							}
							else{
								HX_STACK_LINE(219)
								bool tmp67 = (group->startIndex <= textField->__caretIndex);		HX_STACK_VAR(tmp67,"tmp67");
								HX_STACK_LINE(219)
								bool tmp68 = tmp67;		HX_STACK_VAR(tmp68,"tmp68");
								HX_STACK_LINE(219)
								bool tmp69;		HX_STACK_VAR(tmp69,"tmp69");
								HX_STACK_LINE(219)
								if ((tmp68)){
									HX_STACK_LINE(219)
									tmp69 = (group->endIndex >= textField->__caretIndex);
								}
								else{
									HX_STACK_LINE(219)
									tmp69 = false;
								}
								HX_STACK_LINE(219)
								bool tmp70 = !(tmp69);		HX_STACK_VAR(tmp70,"tmp70");
								HX_STACK_LINE(219)
								bool tmp71;		HX_STACK_VAR(tmp71,"tmp71");
								HX_STACK_LINE(219)
								if ((tmp70)){
									HX_STACK_LINE(219)
									bool tmp72 = (group->startIndex <= textField->__selectionIndex);		HX_STACK_VAR(tmp72,"tmp72");
									HX_STACK_LINE(219)
									bool tmp73 = tmp72;		HX_STACK_VAR(tmp73,"tmp73");
									HX_STACK_LINE(219)
									bool tmp74 = tmp73;		HX_STACK_VAR(tmp74,"tmp74");
									HX_STACK_LINE(219)
									if ((tmp74)){
										HX_STACK_LINE(219)
										tmp71 = (group->endIndex >= textField->__selectionIndex);
									}
									else{
										HX_STACK_LINE(219)
										tmp71 = false;
									}
								}
								else{
									HX_STACK_LINE(219)
									tmp71 = true;
								}
								HX_STACK_LINE(219)
								if ((tmp71)){
									HX_STACK_LINE(221)
									int tmp72 = textField->__selectionIndex;		HX_STACK_VAR(tmp72,"tmp72");
									HX_STACK_LINE(221)
									int tmp73 = textField->__caretIndex;		HX_STACK_VAR(tmp73,"tmp73");
									HX_STACK_LINE(221)
									Float tmp74 = ::Math_obj::min(tmp72,tmp73);		HX_STACK_VAR(tmp74,"tmp74");
									HX_STACK_LINE(221)
									int tmp75 = ::Std_obj::_int(tmp74);		HX_STACK_VAR(tmp75,"tmp75");
									HX_STACK_LINE(221)
									int selectionStart = tmp75;		HX_STACK_VAR(selectionStart,"selectionStart");
									HX_STACK_LINE(222)
									int tmp76 = textField->__selectionIndex;		HX_STACK_VAR(tmp76,"tmp76");
									HX_STACK_LINE(222)
									int tmp77 = textField->__caretIndex;		HX_STACK_VAR(tmp77,"tmp77");
									HX_STACK_LINE(222)
									Float tmp78 = ::Math_obj::max(tmp76,tmp77);		HX_STACK_VAR(tmp78,"tmp78");
									HX_STACK_LINE(222)
									int tmp79 = ::Std_obj::_int(tmp78);		HX_STACK_VAR(tmp79,"tmp79");
									HX_STACK_LINE(222)
									int selectionEnd = tmp79;		HX_STACK_VAR(selectionEnd,"selectionEnd");
									HX_STACK_LINE(224)
									bool tmp80 = (group->startIndex > selectionStart);		HX_STACK_VAR(tmp80,"tmp80");
									HX_STACK_LINE(224)
									if ((tmp80)){
										HX_STACK_LINE(226)
										selectionStart = group->startIndex;
									}
									HX_STACK_LINE(230)
									bool tmp81 = (group->endIndex < selectionEnd);		HX_STACK_VAR(tmp81,"tmp81");
									HX_STACK_LINE(230)
									if ((tmp81)){
										HX_STACK_LINE(232)
										selectionEnd = group->endIndex;
									}
									HX_STACK_LINE(236)
									::openfl::geom::Rectangle start;		HX_STACK_VAR(start,"start");
									HX_STACK_LINE(236)
									::openfl::geom::Rectangle end;		HX_STACK_VAR(end,"end");
									HX_STACK_LINE(238)
									int tmp82 = selectionStart;		HX_STACK_VAR(tmp82,"tmp82");
									HX_STACK_LINE(238)
									::openfl::geom::Rectangle tmp83 = textField->getCharBoundaries(tmp82);		HX_STACK_VAR(tmp83,"tmp83");
									HX_STACK_LINE(238)
									start = tmp83;
									HX_STACK_LINE(240)
									int tmp84 = selectionEnd;		HX_STACK_VAR(tmp84,"tmp84");
									HX_STACK_LINE(240)
									int tmp85 = textEngine->text.length;		HX_STACK_VAR(tmp85,"tmp85");
									HX_STACK_LINE(240)
									bool tmp86 = (tmp84 >= tmp85);		HX_STACK_VAR(tmp86,"tmp86");
									HX_STACK_LINE(240)
									if ((tmp86)){
										HX_STACK_LINE(242)
										int tmp87 = textEngine->text.length;		HX_STACK_VAR(tmp87,"tmp87");
										HX_STACK_LINE(242)
										int tmp88 = (tmp87 - (int)1);		HX_STACK_VAR(tmp88,"tmp88");
										HX_STACK_LINE(242)
										::openfl::geom::Rectangle tmp89 = textField->getCharBoundaries(tmp88);		HX_STACK_VAR(tmp89,"tmp89");
										HX_STACK_LINE(242)
										end = tmp89;
										HX_STACK_LINE(243)
										Float tmp90 = (end->width + (int)2);		HX_STACK_VAR(tmp90,"tmp90");
										HX_STACK_LINE(243)
										hx::AddEq(end->x,tmp90);
									}
									else{
										HX_STACK_LINE(247)
										int tmp87 = selectionEnd;		HX_STACK_VAR(tmp87,"tmp87");
										HX_STACK_LINE(247)
										::openfl::geom::Rectangle tmp88 = textField->getCharBoundaries(tmp87);		HX_STACK_VAR(tmp88,"tmp88");
										HX_STACK_LINE(247)
										end = tmp88;
									}
									HX_STACK_LINE(251)
									bool tmp87 = (start != null());		HX_STACK_VAR(tmp87,"tmp87");
									HX_STACK_LINE(251)
									bool tmp88;		HX_STACK_VAR(tmp88,"tmp88");
									HX_STACK_LINE(251)
									if ((tmp87)){
										HX_STACK_LINE(251)
										tmp88 = (end != null());
									}
									else{
										HX_STACK_LINE(251)
										tmp88 = false;
									}
									HX_STACK_LINE(251)
									if ((tmp88)){
										HX_STACK_LINE(253)
										cairo->setSourceRGB((int)0,(int)0,(int)0);
										HX_STACK_LINE(254)
										Float tmp89 = start->x;		HX_STACK_VAR(tmp89,"tmp89");
										HX_STACK_LINE(254)
										Float tmp90 = start->y;		HX_STACK_VAR(tmp90,"tmp90");
										HX_STACK_LINE(254)
										Float tmp91 = (end->x - start->x);		HX_STACK_VAR(tmp91,"tmp91");
										HX_STACK_LINE(254)
										Float tmp92 = group->height;		HX_STACK_VAR(tmp92,"tmp92");
										HX_STACK_LINE(254)
										cairo->rectangle(tmp89,tmp90,tmp91,tmp92);
										HX_STACK_LINE(255)
										cairo->fill();
										HX_STACK_LINE(256)
										cairo->setSourceRGB((int)1,(int)1,(int)1);
										HX_STACK_LINE(260)
										Float tmp93 = (scrollX + start->x);		HX_STACK_VAR(tmp93,"tmp93");
										HX_STACK_LINE(260)
										Float tmp94 = (group->offsetY + group->ascent);		HX_STACK_VAR(tmp94,"tmp94");
										HX_STACK_LINE(260)
										Float tmp95 = scrollY;		HX_STACK_VAR(tmp95,"tmp95");
										HX_STACK_LINE(260)
										Float tmp96 = (tmp94 + tmp95);		HX_STACK_VAR(tmp96,"tmp96");
										HX_STACK_LINE(260)
										cairo->moveTo(tmp93,tmp96);
										HX_STACK_LINE(261)
										int tmp97 = selectionStart;		HX_STACK_VAR(tmp97,"tmp97");
										HX_STACK_LINE(261)
										int tmp98 = selectionEnd;		HX_STACK_VAR(tmp98,"tmp98");
										HX_STACK_LINE(261)
										::String tmp99 = text.substring(tmp97,tmp98);		HX_STACK_VAR(tmp99,"tmp99");
										HX_STACK_LINE(261)
										cairo->showText(tmp99);
									}
								}
							}
						}
					}
				}
			}
		}
		HX_STACK_LINE(275)
		::lime::graphics::Image tmp10 = graphics->__bitmap->__image;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(275)
		tmp10->dirty = true;
		HX_STACK_LINE(276)
		textField->__dirty = false;
		HX_STACK_LINE(277)
		graphics->set___dirty(false);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(CairoTextField_obj,render,(void))


CairoTextField_obj::CairoTextField_obj()
{
}

bool CairoTextField_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"render") ) { outValue = render_dyn(); return true;  }
	}
	return false;
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(CairoTextField_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(CairoTextField_obj::__mClass,"__mClass");
};

#endif

hx::Class CairoTextField_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("render","\x56","\x6b","\x29","\x05"),
	::String(null()) };

void CairoTextField_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("openfl._internal.renderer.cairo.CairoTextField","\x46","\x1d","\x84","\xa5");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &CairoTextField_obj::__GetStatic;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< CairoTextField_obj >;
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
} // end namespace cairo
