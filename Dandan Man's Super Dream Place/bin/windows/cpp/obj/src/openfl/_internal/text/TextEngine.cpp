#include <hxcpp.h>

#include "hxMath.h"
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_StringTools
#include <StringTools.h>
#endif
#ifndef INCLUDED_haxe_IMap
#include <haxe/IMap.h>
#endif
#ifndef INCLUDED_haxe_Timer
#include <haxe/Timer.h>
#endif
#ifndef INCLUDED_haxe_ds_ObjectMap
#include <haxe/ds/ObjectMap.h>
#endif
#ifndef INCLUDED_haxe_ds_StringMap
#include <haxe/ds/StringMap.h>
#endif
#ifndef INCLUDED_haxe_io_Path
#include <haxe/io/Path.h>
#endif
#ifndef INCLUDED_lime_graphics_cairo_CairoFont
#include <lime/graphics/cairo/CairoFont.h>
#endif
#ifndef INCLUDED_lime_graphics_opengl_GLObject
#include <lime/graphics/opengl/GLObject.h>
#endif
#ifndef INCLUDED_lime_graphics_opengl_GLTexture
#include <lime/graphics/opengl/GLTexture.h>
#endif
#ifndef INCLUDED_lime_math_Vector2
#include <lime/math/Vector2.h>
#endif
#ifndef INCLUDED_lime_system_System
#include <lime/system/System.h>
#endif
#ifndef INCLUDED_lime_text_Font
#include <lime/text/Font.h>
#endif
#ifndef INCLUDED_lime_text_GlyphPosition
#include <lime/text/GlyphPosition.h>
#endif
#ifndef INCLUDED_lime_text_TextLayout
#include <lime/text/TextLayout.h>
#endif
#ifndef INCLUDED_openfl__internal_text_TextEngine
#include <openfl/_internal/text/TextEngine.h>
#endif
#ifndef INCLUDED_openfl__internal_text_TextFormatRange
#include <openfl/_internal/text/TextFormatRange.h>
#endif
#ifndef INCLUDED_openfl__internal_text_TextLayoutGroup
#include <openfl/_internal/text/TextLayoutGroup.h>
#endif
#ifndef INCLUDED_openfl_display_DisplayObject
#include <openfl/display/DisplayObject.h>
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
#ifndef INCLUDED_openfl_text_TextFieldAutoSize
#include <openfl/text/TextFieldAutoSize.h>
#endif
#ifndef INCLUDED_openfl_text_TextFieldType
#include <openfl/text/TextFieldType.h>
#endif
#ifndef INCLUDED_openfl_text_TextFormat
#include <openfl/text/TextFormat.h>
#endif
#ifndef INCLUDED_openfl_text_TextFormatAlign
#include <openfl/text/TextFormatAlign.h>
#endif
namespace openfl{
namespace _internal{
namespace text{

Void TextEngine_obj::__construct(::openfl::text::TextField textField)
{
HX_STACK_FRAME("openfl._internal.text.TextEngine","new",0xcc80cb52,"openfl._internal.text.TextEngine.new","openfl/_internal/text/TextEngine.hx",119,0xdff93b7f)
HX_STACK_THIS(this)
HX_STACK_ARG(textField,"textField")
{
	HX_STACK_LINE(121)
	this->textField = textField;
	HX_STACK_LINE(123)
	this->width = (int)100;
	HX_STACK_LINE(124)
	this->height = (int)100;
	HX_STACK_LINE(125)
	this->text = HX_HCSTRING("","\x00","\x00","\x00","\x00");
	HX_STACK_LINE(127)
	::openfl::geom::Rectangle tmp = ::openfl::geom::Rectangle_obj::__new((int)0,(int)0,(int)0,(int)0);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(127)
	this->bounds = tmp;
	HX_STACK_LINE(129)
	this->type = ::openfl::text::TextFieldType_obj::DYNAMIC;
	HX_STACK_LINE(130)
	this->autoSize = ::openfl::text::TextFieldAutoSize_obj::NONE;
	HX_STACK_LINE(131)
	this->displayAsPassword = false;
	HX_STACK_LINE(132)
	this->embedFonts = false;
	HX_STACK_LINE(133)
	this->selectable = true;
	HX_STACK_LINE(134)
	this->borderColor = (int)0;
	HX_STACK_LINE(135)
	this->border = false;
	HX_STACK_LINE(136)
	this->backgroundColor = (int)16777215;
	HX_STACK_LINE(137)
	this->background = false;
	HX_STACK_LINE(138)
	this->gridFitType = ::openfl::text::GridFitType_obj::PIXEL;
	HX_STACK_LINE(139)
	this->maxChars = (int)0;
	HX_STACK_LINE(140)
	this->multiline = false;
	HX_STACK_LINE(141)
	this->sharpness = (int)0;
	HX_STACK_LINE(142)
	this->scrollH = (int)0;
	HX_STACK_LINE(143)
	this->scrollV = (int)1;
	HX_STACK_LINE(144)
	this->wordWrap = false;
	HX_STACK_LINE(146)
	this->lineAscents = Array_obj< Float >::__new();
	HX_STACK_LINE(147)
	this->lineBreaks = Array_obj< int >::__new();
	HX_STACK_LINE(148)
	this->lineDescents = Array_obj< Float >::__new();
	HX_STACK_LINE(149)
	this->lineLeadings = Array_obj< Float >::__new();
	HX_STACK_LINE(150)
	this->lineHeights = Array_obj< Float >::__new();
	HX_STACK_LINE(151)
	this->lineWidths = Array_obj< Float >::__new();
	HX_STACK_LINE(152)
	this->layoutGroups = Array_obj< ::Dynamic >::__new();
	HX_STACK_LINE(153)
	this->textFormatRanges = Array_obj< ::Dynamic >::__new();
}
;
	return null();
}

//TextEngine_obj::~TextEngine_obj() { }

Dynamic TextEngine_obj::__CreateEmpty() { return  new TextEngine_obj; }
hx::ObjectPtr< TextEngine_obj > TextEngine_obj::__new(::openfl::text::TextField textField)
{  hx::ObjectPtr< TextEngine_obj > _result_ = new TextEngine_obj();
	_result_->__construct(textField);
	return _result_;}

Dynamic TextEngine_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< TextEngine_obj > _result_ = new TextEngine_obj();
	_result_->__construct(inArgs[0]);
	return _result_;}

Void TextEngine_obj::getBounds( ){
{
		HX_STACK_FRAME("openfl._internal.text.TextEngine","getBounds",0x5ce2cc1d,"openfl._internal.text.TextEngine.getBounds","openfl/_internal/text/TextEngine.hx",195,0xdff93b7f)
		HX_STACK_THIS(this)
		HX_STACK_LINE(197)
		bool tmp = this->border;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(197)
		int tmp1;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(197)
		if ((tmp)){
			HX_STACK_LINE(197)
			tmp1 = (int)1;
		}
		else{
			HX_STACK_LINE(197)
			tmp1 = (int)0;
		}
		HX_STACK_LINE(197)
		int padding = tmp1;		HX_STACK_VAR(padding,"padding");
		HX_STACK_LINE(199)
		Float tmp2 = this->width;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(199)
		int tmp3 = padding;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(199)
		Float tmp4 = (tmp2 + tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(199)
		::openfl::geom::Rectangle tmp5 = this->bounds;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(199)
		tmp5->width = tmp4;
		HX_STACK_LINE(200)
		Float tmp6 = this->height;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(200)
		int tmp7 = padding;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(200)
		Float tmp8 = (tmp6 + tmp7);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(200)
		::openfl::geom::Rectangle tmp9 = this->bounds;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(200)
		tmp9->height = tmp8;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(TextEngine_obj,getBounds,(void))

::String TextEngine_obj::getLine( int index){
	HX_STACK_FRAME("openfl._internal.text.TextEngine","getLine",0xf060239c,"openfl._internal.text.TextEngine.getLine","openfl/_internal/text/TextEngine.hx",432,0xdff93b7f)
	HX_STACK_THIS(this)
	HX_STACK_ARG(index,"index")
	HX_STACK_LINE(434)
	bool tmp = (index < (int)0);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(434)
	bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(434)
	bool tmp2;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(434)
	if ((tmp1)){
		HX_STACK_LINE(434)
		int tmp3 = index;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(434)
		int tmp4 = this->lineBreaks->length;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(434)
		int tmp5 = tmp4;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(434)
		int tmp6 = (tmp5 + (int)1);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(434)
		int tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(434)
		tmp2 = (tmp3 > tmp7);
	}
	else{
		HX_STACK_LINE(434)
		tmp2 = true;
	}
	HX_STACK_LINE(434)
	if ((tmp2)){
		HX_STACK_LINE(436)
		return null();
	}
	HX_STACK_LINE(440)
	int tmp3 = this->lineBreaks->length;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(440)
	bool tmp4 = (tmp3 == (int)0);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(440)
	if ((tmp4)){
		HX_STACK_LINE(442)
		::String tmp5 = this->text;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(442)
		return tmp5;
	}
	else{
		HX_STACK_LINE(446)
		::String tmp5 = this->text;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(446)
		bool tmp6 = (index > (int)0);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(446)
		int tmp7;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(446)
		if ((tmp6)){
			HX_STACK_LINE(446)
			int tmp8 = (index - (int)1);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(446)
			tmp7 = this->lineBreaks->__get(tmp8);
		}
		else{
			HX_STACK_LINE(446)
			tmp7 = (int)0;
		}
		HX_STACK_LINE(446)
		int tmp8 = this->lineBreaks->__get(index);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(446)
		::String tmp9 = tmp5.substring(tmp7,tmp8);		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(446)
		return tmp9;
	}
	HX_STACK_LINE(440)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC1(TextEngine_obj,getLine,return )

Void TextEngine_obj::getLineMeasurements( ){
{
		HX_STACK_FRAME("openfl._internal.text.TextEngine","getLineMeasurements",0x203f1eb3,"openfl._internal.text.TextEngine.getLineMeasurements","openfl/_internal/text/TextEngine.hx",453,0xdff93b7f)
		HX_STACK_THIS(this)
		HX_STACK_LINE(455)
		int tmp = this->lineAscents->length;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(455)
		this->lineAscents->splice((int)0,tmp);
		HX_STACK_LINE(456)
		int tmp1 = this->lineDescents->length;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(456)
		this->lineDescents->splice((int)0,tmp1);
		HX_STACK_LINE(457)
		int tmp2 = this->lineLeadings->length;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(457)
		this->lineLeadings->splice((int)0,tmp2);
		HX_STACK_LINE(458)
		int tmp3 = this->lineHeights->length;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(458)
		this->lineHeights->splice((int)0,tmp3);
		HX_STACK_LINE(459)
		int tmp4 = this->lineWidths->length;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(459)
		this->lineWidths->splice((int)0,tmp4);
		HX_STACK_LINE(461)
		Float currentLineAscent = ((Float)0.0);		HX_STACK_VAR(currentLineAscent,"currentLineAscent");
		HX_STACK_LINE(462)
		Float currentLineDescent = ((Float)0.0);		HX_STACK_VAR(currentLineDescent,"currentLineDescent");
		HX_STACK_LINE(463)
		Dynamic currentLineLeading = null();		HX_STACK_VAR(currentLineLeading,"currentLineLeading");
		HX_STACK_LINE(464)
		Float currentLineHeight = ((Float)0.0);		HX_STACK_VAR(currentLineHeight,"currentLineHeight");
		HX_STACK_LINE(465)
		Float currentLineWidth = ((Float)0.0);		HX_STACK_VAR(currentLineWidth,"currentLineWidth");
		HX_STACK_LINE(467)
		this->textWidth = (int)0;
		HX_STACK_LINE(468)
		this->textHeight = (int)0;
		HX_STACK_LINE(469)
		this->numLines = (int)1;
		HX_STACK_LINE(470)
		this->bottomScrollV = (int)0;
		HX_STACK_LINE(471)
		this->maxScrollH = (int)0;
		HX_STACK_LINE(473)
		{
			HX_STACK_LINE(473)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(473)
			Array< ::Dynamic > _g1 = this->layoutGroups;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(473)
			while((true)){
				HX_STACK_LINE(473)
				bool tmp5 = (_g < _g1->length);		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(473)
				bool tmp6 = !(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(473)
				if ((tmp6)){
					HX_STACK_LINE(473)
					break;
				}
				HX_STACK_LINE(473)
				::openfl::_internal::text::TextLayoutGroup tmp7 = _g1->__get(_g).StaticCast< ::openfl::_internal::text::TextLayoutGroup >();		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(473)
				::openfl::_internal::text::TextLayoutGroup group = tmp7;		HX_STACK_VAR(group,"group");
				HX_STACK_LINE(473)
				++(_g);
				HX_STACK_LINE(475)
				while((true)){
					HX_STACK_LINE(475)
					int tmp8 = group->lineIndex;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(475)
					int tmp9 = this->numLines;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(475)
					int tmp10 = (tmp9 - (int)1);		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(475)
					bool tmp11 = (tmp8 > tmp10);		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(475)
					bool tmp12 = !(tmp11);		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(475)
					if ((tmp12)){
						HX_STACK_LINE(475)
						break;
					}
					HX_STACK_LINE(477)
					Float tmp13 = currentLineAscent;		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(477)
					this->lineAscents->push(tmp13);
					HX_STACK_LINE(478)
					Float tmp14 = currentLineDescent;		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(478)
					this->lineDescents->push(tmp14);
					HX_STACK_LINE(479)
					bool tmp15 = (currentLineLeading != null());		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(479)
					Float tmp16;		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(479)
					if ((tmp15)){
						HX_STACK_LINE(479)
						tmp16 = currentLineLeading;
					}
					else{
						HX_STACK_LINE(479)
						tmp16 = (int)0;
					}
					HX_STACK_LINE(479)
					this->lineLeadings->push(tmp16);
					HX_STACK_LINE(480)
					Float tmp17 = currentLineHeight;		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(480)
					this->lineHeights->push(tmp17);
					HX_STACK_LINE(481)
					Float tmp18 = currentLineWidth;		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(481)
					this->lineWidths->push(tmp18);
					HX_STACK_LINE(483)
					currentLineAscent = (int)0;
					HX_STACK_LINE(484)
					currentLineDescent = (int)0;
					HX_STACK_LINE(485)
					currentLineLeading = null();
					HX_STACK_LINE(486)
					currentLineHeight = (int)0;
					HX_STACK_LINE(487)
					currentLineWidth = (int)0;
					HX_STACK_LINE(489)
					(this->numLines)++;
					HX_STACK_LINE(491)
					Float tmp19 = this->textHeight;		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(491)
					Float tmp20 = this->height;		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(491)
					Float tmp21 = (tmp20 - (int)2);		HX_STACK_VAR(tmp21,"tmp21");
					HX_STACK_LINE(491)
					bool tmp22 = (tmp19 <= tmp21);		HX_STACK_VAR(tmp22,"tmp22");
					HX_STACK_LINE(491)
					if ((tmp22)){
						HX_STACK_LINE(493)
						(this->bottomScrollV)++;
					}
				}
				HX_STACK_LINE(499)
				Float tmp8 = currentLineAscent;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(499)
				Float tmp9 = group->ascent;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(499)
				Float tmp10 = ::Math_obj::max(tmp8,tmp9);		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(499)
				currentLineAscent = tmp10;
				HX_STACK_LINE(500)
				Float tmp11 = currentLineDescent;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(500)
				Float tmp12 = group->descent;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(500)
				Float tmp13 = ::Math_obj::max(tmp11,tmp12);		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(500)
				currentLineDescent = tmp13;
				HX_STACK_LINE(502)
				bool tmp14 = (currentLineLeading == null());		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(502)
				if ((tmp14)){
					HX_STACK_LINE(504)
					currentLineLeading = group->leading;
				}
				else{
					HX_STACK_LINE(508)
					Dynamic tmp15 = currentLineLeading;		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(508)
					int tmp16 = group->leading;		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(508)
					Float tmp17 = ::Math_obj::max(tmp15,tmp16);		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(508)
					int tmp18 = ::Std_obj::_int(tmp17);		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(508)
					currentLineLeading = tmp18;
				}
				HX_STACK_LINE(512)
				Float tmp15 = currentLineHeight;		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(512)
				Float tmp16 = group->height;		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(512)
				Float tmp17 = ::Math_obj::max(tmp15,tmp16);		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(512)
				currentLineHeight = tmp17;
				HX_STACK_LINE(513)
				Float tmp18 = (group->offsetX - (int)2);		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(513)
				Float tmp19 = group->width;		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(513)
				Float tmp20 = (tmp18 + tmp19);		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(513)
				currentLineWidth = tmp20;
				HX_STACK_LINE(515)
				Float tmp21 = currentLineWidth;		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(515)
				Float tmp22 = this->textWidth;		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(515)
				bool tmp23 = (tmp21 > tmp22);		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(515)
				if ((tmp23)){
					HX_STACK_LINE(517)
					this->textWidth = currentLineWidth;
				}
				HX_STACK_LINE(521)
				Float tmp24 = (group->offsetY - (int)2);		HX_STACK_VAR(tmp24,"tmp24");
				HX_STACK_LINE(521)
				Float tmp25 = group->ascent;		HX_STACK_VAR(tmp25,"tmp25");
				HX_STACK_LINE(521)
				Float tmp26 = (tmp24 + tmp25);		HX_STACK_VAR(tmp26,"tmp26");
				HX_STACK_LINE(521)
				Float tmp27 = group->descent;		HX_STACK_VAR(tmp27,"tmp27");
				HX_STACK_LINE(521)
				Float tmp28 = (tmp26 + tmp27);		HX_STACK_VAR(tmp28,"tmp28");
				HX_STACK_LINE(521)
				this->textHeight = tmp28;
			}
		}
		HX_STACK_LINE(525)
		Float tmp5 = currentLineAscent;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(525)
		this->lineAscents->push(tmp5);
		HX_STACK_LINE(526)
		Float tmp6 = currentLineDescent;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(526)
		this->lineDescents->push(tmp6);
		HX_STACK_LINE(527)
		bool tmp7 = (currentLineLeading != null());		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(527)
		Float tmp8;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(527)
		if ((tmp7)){
			HX_STACK_LINE(527)
			tmp8 = currentLineLeading;
		}
		else{
			HX_STACK_LINE(527)
			tmp8 = (int)0;
		}
		HX_STACK_LINE(527)
		this->lineLeadings->push(tmp8);
		HX_STACK_LINE(528)
		Float tmp9 = currentLineHeight;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(528)
		this->lineHeights->push(tmp9);
		HX_STACK_LINE(529)
		Float tmp10 = currentLineWidth;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(529)
		this->lineWidths->push(tmp10);
		HX_STACK_LINE(531)
		int tmp11 = this->numLines;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(531)
		bool tmp12 = (tmp11 == (int)1);		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(531)
		if ((tmp12)){
			HX_STACK_LINE(533)
			this->bottomScrollV = (int)1;
			HX_STACK_LINE(534)
			hx::AddEq(this->textHeight,currentLineLeading);
		}
		else{
			HX_STACK_LINE(536)
			Float tmp13 = this->textHeight;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(536)
			Float tmp14 = this->height;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(536)
			Float tmp15 = (tmp14 - (int)2);		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(536)
			bool tmp16 = (tmp13 <= tmp15);		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(536)
			if ((tmp16)){
				HX_STACK_LINE(538)
				(this->bottomScrollV)++;
			}
		}
		HX_STACK_LINE(542)
		Float tmp13 = this->textWidth;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(542)
		Float tmp14 = this->width;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(542)
		Float tmp15 = (tmp14 - (int)4);		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(542)
		bool tmp16 = (tmp13 > tmp15);		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(542)
		if ((tmp16)){
			HX_STACK_LINE(544)
			Float tmp17 = this->textWidth;		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(544)
			Float tmp18 = this->width;		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(544)
			Float tmp19 = (tmp17 - tmp18);		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(544)
			Float tmp20 = (tmp19 + (int)4);		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(544)
			int tmp21 = ::Std_obj::_int(tmp20);		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(544)
			this->maxScrollH = tmp21;
		}
		else{
			HX_STACK_LINE(548)
			this->maxScrollH = (int)0;
		}
		HX_STACK_LINE(552)
		int tmp17 = this->numLines;		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(552)
		int tmp18 = this->bottomScrollV;		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(552)
		int tmp19 = (tmp17 - tmp18);		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(552)
		int tmp20 = (tmp19 + (int)1);		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(552)
		this->maxScrollV = tmp20;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(TextEngine_obj,getLineMeasurements,(void))

Void TextEngine_obj::getLayoutGroups( ){
{
		HX_STACK_FRAME("openfl._internal.text.TextEngine","getLayoutGroups",0xa3099646,"openfl._internal.text.TextEngine.getLayoutGroups","openfl/_internal/text/TextEngine.hx",557,0xdff93b7f)
		HX_STACK_THIS(this)
		HX_STACK_LINE(557)
		::openfl::_internal::text::TextEngine _g = hx::ObjectPtr<OBJ_>(this);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(559)
		int tmp = this->layoutGroups->length;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(559)
		this->layoutGroups->splice((int)0,tmp);
		HX_STACK_LINE(561)
		Array< int > rangeIndex = Array_obj< int >::__new().Add((int)-1);		HX_STACK_VAR(rangeIndex,"rangeIndex");
		HX_STACK_LINE(562)
		Array< ::Dynamic > formatRange = Array_obj< ::Dynamic >::__new().Add(null());		HX_STACK_VAR(formatRange,"formatRange");
		HX_STACK_LINE(563)
		Array< ::Dynamic > font = Array_obj< ::Dynamic >::__new().Add(null());		HX_STACK_VAR(font,"font");
		HX_STACK_LINE(565)
		::openfl::text::TextFormat tmp1 = ::openfl::text::TextField_obj::__defaultTextFormat;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(565)
		::openfl::text::TextFormat tmp2 = tmp1->clone();		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(565)
		::openfl::text::TextFormat currentFormat = tmp2;		HX_STACK_VAR(currentFormat,"currentFormat");
		HX_STACK_LINE(567)
		Array< Float > ascent = Array_obj< Float >::__new();		HX_STACK_VAR(ascent,"ascent");
		HX_STACK_LINE(567)
		Array< Float > descent = Array_obj< Float >::__new();		HX_STACK_VAR(descent,"descent");
		HX_STACK_LINE(567)
		Array< ::Dynamic > leading = Array_obj< ::Dynamic >::__new();		HX_STACK_VAR(leading,"leading");
		HX_STACK_LINE(567)
		::openfl::_internal::text::TextLayoutGroup layoutGroup;		HX_STACK_VAR(layoutGroup,"layoutGroup");
		HX_STACK_LINE(568)
		Array< Float > advances;		HX_STACK_VAR(advances,"advances");
		HX_STACK_LINE(568)
		Float widthValue;		HX_STACK_VAR(widthValue,"widthValue");
		HX_STACK_LINE(568)
		Array< Float > heightValue = Array_obj< Float >::__new();		HX_STACK_VAR(heightValue,"heightValue");
		HX_STACK_LINE(570)
		Array< Float > spaceWidth = Array_obj< Float >::__new().Add(((Float)0.0));		HX_STACK_VAR(spaceWidth,"spaceWidth");
		HX_STACK_LINE(571)
		int previousSpaceIndex = (int)0;		HX_STACK_VAR(previousSpaceIndex,"previousSpaceIndex");
		HX_STACK_LINE(572)
		::String tmp3 = this->text;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(572)
		int tmp4 = tmp3.indexOf(HX_HCSTRING(" ","\x20","\x00","\x00","\x00"),null());		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(572)
		Array< int > spaceIndex = Array_obj< int >::__new().Add(tmp4);		HX_STACK_VAR(spaceIndex,"spaceIndex");
		HX_STACK_LINE(573)
		::String tmp5 = this->text;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(573)
		int tmp6 = tmp5.indexOf(HX_HCSTRING("\n","\x0a","\x00","\x00","\x00"),null());		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(573)
		int breakIndex = tmp6;		HX_STACK_VAR(breakIndex,"breakIndex");
		HX_STACK_LINE(575)
		Float marginRight = ((Float)0.0);		HX_STACK_VAR(marginRight,"marginRight");
		HX_STACK_LINE(576)
		Float offsetX = ((Float)2.0);		HX_STACK_VAR(offsetX,"offsetX");
		HX_STACK_LINE(577)
		Float offsetY = ((Float)2.0);		HX_STACK_VAR(offsetY,"offsetY");
		HX_STACK_LINE(578)
		int textIndex = (int)0;		HX_STACK_VAR(textIndex,"textIndex");
		HX_STACK_LINE(579)
		int lineIndex = (int)0;		HX_STACK_VAR(lineIndex,"lineIndex");
		HX_STACK_LINE(580)
		::openfl::text::TextFormat lineFormat = null();		HX_STACK_VAR(lineFormat,"lineFormat");

		HX_BEGIN_LOCAL_FUNC_S3(hx::LocalFunc,_Function_1_1,Array< ::Dynamic >,font,::openfl::_internal::text::TextEngine,_g,Array< ::Dynamic >,formatRange)
		int __ArgCount() const { return 3; }
		Array< Float > run(::String text,int startIndex,int endIndex){
			HX_STACK_FRAME("*","_Function_1_1",0x5200ed37,"*._Function_1_1","openfl/_internal/text/TextEngine.hx",582,0xdff93b7f)
			HX_STACK_ARG(text,"text")
			HX_STACK_ARG(startIndex,"startIndex")
			HX_STACK_ARG(endIndex,"endIndex")
			{
				HX_STACK_LINE(586)
				Array< Float > advances1 = Array_obj< Float >::__new();		HX_STACK_VAR(advances1,"advances1");
				HX_STACK_LINE(598)
				bool tmp7 = (_g->__textLayout == null());		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(598)
				if ((tmp7)){
					HX_STACK_LINE(600)
					::lime::text::TextLayout tmp8 = ::lime::text::TextLayout_obj::__new(null(),null(),null(),null(),null(),null());		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(600)
					_g->__textLayout = tmp8;
				}
				HX_STACK_LINE(604)
				Float width = ((Float)0.0);		HX_STACK_VAR(width,"width");
				HX_STACK_LINE(606)
				_g->__textLayout->set_text(null());
				HX_STACK_LINE(607)
				::lime::text::Font tmp8 = font->__get((int)0).StaticCast< ::lime::text::Font >();		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(607)
				_g->__textLayout->set_font(tmp8);
				HX_STACK_LINE(609)
				Dynamic tmp9 = formatRange->__get((int)0).StaticCast< ::openfl::_internal::text::TextFormatRange >()->format->size;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(609)
				bool tmp10 = (tmp9 != null());		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(609)
				if ((tmp10)){
					HX_STACK_LINE(611)
					Dynamic tmp11 = formatRange->__get((int)0).StaticCast< ::openfl::_internal::text::TextFormatRange >()->format->size;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(611)
					_g->__textLayout->set_size(tmp11);
				}
				HX_STACK_LINE(615)
				int tmp11 = startIndex;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(615)
				int tmp12 = endIndex;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(615)
				::String tmp13 = text.substring(tmp11,tmp12);		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(615)
				_g->__textLayout->set_text(tmp13);
				HX_STACK_LINE(617)
				{
					HX_STACK_LINE(617)
					int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
					HX_STACK_LINE(617)
					Array< ::Dynamic > _g2 = _g->__textLayout->get_positions();		HX_STACK_VAR(_g2,"_g2");
					HX_STACK_LINE(617)
					while((true)){
						HX_STACK_LINE(617)
						bool tmp14 = (_g1 < _g2->length);		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(617)
						bool tmp15 = !(tmp14);		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(617)
						if ((tmp15)){
							HX_STACK_LINE(617)
							break;
						}
						HX_STACK_LINE(617)
						::lime::text::GlyphPosition tmp16 = _g2->__get(_g1).StaticCast< ::lime::text::GlyphPosition >();		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(617)
						::lime::text::GlyphPosition position = tmp16;		HX_STACK_VAR(position,"position");
						HX_STACK_LINE(617)
						++(_g1);
						HX_STACK_LINE(619)
						Float tmp17 = position->advance->x;		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(619)
						advances1->push(tmp17);
					}
				}
				HX_STACK_LINE(625)
				return advances1;
			}
			return null();
		}
		HX_END_LOCAL_FUNC3(return)

		HX_STACK_LINE(582)
		Dynamic getAdvances =  Dynamic(new _Function_1_1(font,_g,formatRange));		HX_STACK_VAR(getAdvances,"getAdvances");

		HX_BEGIN_LOCAL_FUNC_S0(hx::LocalFunc,_Function_1_2)
		int __ArgCount() const { return 1; }
		Float run(Array< Float > advances1){
			HX_STACK_FRAME("*","_Function_1_2",0x5200ed38,"*._Function_1_2","openfl/_internal/text/TextEngine.hx",629,0xdff93b7f)
			HX_STACK_ARG(advances1,"advances1")
			{
				HX_STACK_LINE(631)
				Float width = ((Float)0.0);		HX_STACK_VAR(width,"width");
				HX_STACK_LINE(633)
				{
					HX_STACK_LINE(633)
					int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
					HX_STACK_LINE(633)
					while((true)){
						HX_STACK_LINE(633)
						bool tmp7 = (_g1 < advances1->length);		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(633)
						bool tmp8 = !(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(633)
						if ((tmp8)){
							HX_STACK_LINE(633)
							break;
						}
						HX_STACK_LINE(633)
						Float tmp9 = advances1->__get(_g1);		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(633)
						Float advance = tmp9;		HX_STACK_VAR(advance,"advance");
						HX_STACK_LINE(633)
						++(_g1);
						HX_STACK_LINE(635)
						hx::AddEq(width,advance);
					}
				}
				HX_STACK_LINE(639)
				Float tmp7 = width;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(639)
				return tmp7;
			}
			return null();
		}
		HX_END_LOCAL_FUNC1(return)

		HX_STACK_LINE(629)
		Dynamic getAdvancesWidth =  Dynamic(new _Function_1_2());		HX_STACK_VAR(getAdvancesWidth,"getAdvancesWidth");

		HX_BEGIN_LOCAL_FUNC_S3(hx::LocalFunc,_Function_1_3,Array< ::Dynamic >,font,::openfl::_internal::text::TextEngine,_g,Array< ::Dynamic >,formatRange)
		int __ArgCount() const { return 1; }
		Float run(::String text){
			HX_STACK_FRAME("*","_Function_1_3",0x5200ed39,"*._Function_1_3","openfl/_internal/text/TextEngine.hx",643,0xdff93b7f)
			HX_STACK_ARG(text,"text")
			{
				HX_STACK_LINE(651)
				bool tmp7 = (_g->__textLayout == null());		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(651)
				if ((tmp7)){
					HX_STACK_LINE(653)
					::lime::text::TextLayout tmp8 = ::lime::text::TextLayout_obj::__new(null(),null(),null(),null(),null(),null());		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(653)
					_g->__textLayout = tmp8;
				}
				HX_STACK_LINE(657)
				Float width = ((Float)0.0);		HX_STACK_VAR(width,"width");
				HX_STACK_LINE(659)
				_g->__textLayout->set_text(null());
				HX_STACK_LINE(660)
				::lime::text::Font tmp8 = font->__get((int)0).StaticCast< ::lime::text::Font >();		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(660)
				_g->__textLayout->set_font(tmp8);
				HX_STACK_LINE(662)
				Dynamic tmp9 = formatRange->__get((int)0).StaticCast< ::openfl::_internal::text::TextFormatRange >()->format->size;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(662)
				bool tmp10 = (tmp9 != null());		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(662)
				if ((tmp10)){
					HX_STACK_LINE(664)
					Dynamic tmp11 = formatRange->__get((int)0).StaticCast< ::openfl::_internal::text::TextFormatRange >()->format->size;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(664)
					_g->__textLayout->set_size(tmp11);
				}
				HX_STACK_LINE(668)
				::String tmp11 = text;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(668)
				_g->__textLayout->set_text(tmp11);
				HX_STACK_LINE(670)
				{
					HX_STACK_LINE(670)
					int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
					HX_STACK_LINE(670)
					Array< ::Dynamic > _g2 = _g->__textLayout->get_positions();		HX_STACK_VAR(_g2,"_g2");
					HX_STACK_LINE(670)
					while((true)){
						HX_STACK_LINE(670)
						bool tmp12 = (_g1 < _g2->length);		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(670)
						bool tmp13 = !(tmp12);		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(670)
						if ((tmp13)){
							HX_STACK_LINE(670)
							break;
						}
						HX_STACK_LINE(670)
						::lime::text::GlyphPosition tmp14 = _g2->__get(_g1).StaticCast< ::lime::text::GlyphPosition >();		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(670)
						::lime::text::GlyphPosition position = tmp14;		HX_STACK_VAR(position,"position");
						HX_STACK_LINE(670)
						++(_g1);
						HX_STACK_LINE(672)
						Float tmp15 = position->advance->x;		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(672)
						hx::AddEq(width,tmp15);
					}
				}
				HX_STACK_LINE(676)
				Float tmp12 = width;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(676)
				return tmp12;
			}
			return null();
		}
		HX_END_LOCAL_FUNC1(return)

		HX_STACK_LINE(643)
		Dynamic getTextWidth =  Dynamic(new _Function_1_3(font,_g,formatRange));		HX_STACK_VAR(getTextWidth,"getTextWidth");

		HX_BEGIN_LOCAL_FUNC_S12(hx::LocalFunc,_Function_1_4,Array< int >,spaceIndex,Array< ::Dynamic >,font,Array< int >,rangeIndex,::openfl::_internal::text::TextEngine,_g,Array< ::Dynamic >,leading,Array< ::Dynamic >,formatRange,Array< Float >,ascent,Array< Float >,heightValue,Dynamic,getTextWidth,::openfl::text::TextFormat,currentFormat,Array< Float >,descent,Array< Float >,spaceWidth)
		int __ArgCount() const { return 0; }
		Void run(){
			HX_STACK_FRAME("*","_Function_1_4",0x5200ed3a,"*._Function_1_4","openfl/_internal/text/TextEngine.hx",682,0xdff93b7f)
			{
				HX_STACK_LINE(684)
				int tmp7 = rangeIndex->__get((int)0);		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(684)
				int tmp8 = _g->textFormatRanges->length;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(684)
				int tmp9 = (tmp8 - (int)1);		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(684)
				bool tmp10 = (tmp7 < tmp9);		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(684)
				if ((tmp10)){
					HX_STACK_LINE(686)
					(rangeIndex[(int)0])++;
					HX_STACK_LINE(687)
					::openfl::_internal::text::TextFormatRange tmp11 = _g->textFormatRanges->__get(rangeIndex->__get((int)0)).StaticCast< ::openfl::_internal::text::TextFormatRange >();		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(687)
					formatRange[(int)0] = tmp11;
					HX_STACK_LINE(688)
					::openfl::text::TextFormat tmp12 = formatRange->__get((int)0).StaticCast< ::openfl::_internal::text::TextFormatRange >()->format;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(688)
					currentFormat->__merge(tmp12);
					HX_STACK_LINE(702)
					::openfl::text::TextFormat tmp13 = currentFormat;		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(702)
					::openfl::text::Font tmp14 = ::openfl::_internal::text::TextEngine_obj::getFontInstance(tmp13);		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(702)
					font[(int)0] = tmp14;
					HX_STACK_LINE(704)
					bool tmp15 = (font->__get((int)0).StaticCast< ::lime::text::Font >() != null());		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(704)
					if ((tmp15)){
						HX_STACK_LINE(706)
						int tmp16 = font->__get((int)0).StaticCast< ::lime::text::Font >()->get_ascender();		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(706)
						int tmp17 = font->__get((int)0).StaticCast< ::lime::text::Font >()->get_unitsPerEM();		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(706)
						Float tmp18 = (Float(tmp16) / Float(tmp17));		HX_STACK_VAR(tmp18,"tmp18");
						HX_STACK_LINE(706)
						Dynamic tmp19 = currentFormat->size;		HX_STACK_VAR(tmp19,"tmp19");
						HX_STACK_LINE(706)
						Float tmp20 = (tmp18 * tmp19);		HX_STACK_VAR(tmp20,"tmp20");
						HX_STACK_LINE(706)
						ascent[(int)0] = tmp20;
						HX_STACK_LINE(707)
						int tmp21 = font->__get((int)0).StaticCast< ::lime::text::Font >()->get_descender();		HX_STACK_VAR(tmp21,"tmp21");
						HX_STACK_LINE(707)
						int tmp22 = font->__get((int)0).StaticCast< ::lime::text::Font >()->get_unitsPerEM();		HX_STACK_VAR(tmp22,"tmp22");
						HX_STACK_LINE(707)
						Float tmp23 = (Float(tmp21) / Float(tmp22));		HX_STACK_VAR(tmp23,"tmp23");
						HX_STACK_LINE(707)
						Dynamic tmp24 = currentFormat->size;		HX_STACK_VAR(tmp24,"tmp24");
						HX_STACK_LINE(707)
						Float tmp25 = (tmp23 * tmp24);		HX_STACK_VAR(tmp25,"tmp25");
						HX_STACK_LINE(707)
						Float tmp26 = ::Math_obj::abs(tmp25);		HX_STACK_VAR(tmp26,"tmp26");
						HX_STACK_LINE(707)
						descent[(int)0] = tmp26;
						HX_STACK_LINE(708)
						leading[(int)0] = currentFormat->leading;
						HX_STACK_LINE(710)
						Float tmp27 = (ascent->__get((int)0) + descent->__get((int)0));		HX_STACK_VAR(tmp27,"tmp27");
						HX_STACK_LINE(710)
						Dynamic tmp28 = leading->__get((int)0);		HX_STACK_VAR(tmp28,"tmp28");
						HX_STACK_LINE(710)
						Float tmp29 = (tmp27 + tmp28);		HX_STACK_VAR(tmp29,"tmp29");
						HX_STACK_LINE(710)
						heightValue[(int)0] = tmp29;
					}
					else{
						HX_STACK_LINE(714)
						ascent[(int)0] = currentFormat->size;
						HX_STACK_LINE(715)
						Float tmp16 = (currentFormat->size * ((Float)0.185));		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(715)
						descent[(int)0] = tmp16;
						HX_STACK_LINE(716)
						leading[(int)0] = currentFormat->leading;
						HX_STACK_LINE(718)
						Float tmp17 = (ascent->__get((int)0) + descent->__get((int)0));		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(718)
						Dynamic tmp18 = leading->__get((int)0);		HX_STACK_VAR(tmp18,"tmp18");
						HX_STACK_LINE(718)
						Float tmp19 = (tmp17 + tmp18);		HX_STACK_VAR(tmp19,"tmp19");
						HX_STACK_LINE(718)
						heightValue[(int)0] = tmp19;
					}
					HX_STACK_LINE(724)
					bool tmp16 = (spaceIndex->__get((int)0) > (int)-1);		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(724)
					if ((tmp16)){
						HX_STACK_LINE(726)
						Float tmp17 = getTextWidth(HX_HCSTRING(" ","\x20","\x00","\x00","\x00")).Cast< Float >();		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(726)
						spaceWidth[(int)0] = tmp17;
					}
				}
			}
			return null();
		}
		HX_END_LOCAL_FUNC0((void))

		HX_STACK_LINE(682)
		Dynamic nextFormatRange =  Dynamic(new _Function_1_4(spaceIndex,font,rangeIndex,_g,leading,formatRange,ascent,heightValue,getTextWidth,currentFormat,descent,spaceWidth));		HX_STACK_VAR(nextFormatRange,"nextFormatRange");
		HX_STACK_LINE(734)
		nextFormatRange().Cast< Void >();
		HX_STACK_LINE(736)
		lineFormat = formatRange->__get((int)0).StaticCast< ::openfl::_internal::text::TextFormatRange >()->format;
		HX_STACK_LINE(737)
		bool wrap;		HX_STACK_VAR(wrap,"wrap");
		HX_STACK_LINE(739)
		while((true)){
			HX_STACK_LINE(739)
			int tmp7 = textIndex;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(739)
			::String tmp8 = this->text;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(739)
			int tmp9 = tmp8.length;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(739)
			bool tmp10 = (tmp7 < tmp9);		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(739)
			bool tmp11 = !(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(739)
			if ((tmp11)){
				HX_STACK_LINE(739)
				break;
			}
			HX_STACK_LINE(741)
			bool tmp12 = (breakIndex > (int)-1);		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(741)
			bool tmp13 = tmp12;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(741)
			bool tmp14;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(741)
			if ((tmp13)){
				HX_STACK_LINE(741)
				int tmp15 = spaceIndex->__get((int)0);		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(741)
				int tmp16 = (int)-1;		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(741)
				int tmp17 = tmp16;		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(741)
				int tmp18 = tmp17;		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(741)
				bool tmp19 = (tmp15 == tmp18);		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(741)
				bool tmp20 = tmp19;		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(741)
				bool tmp21 = tmp20;		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(741)
				bool tmp22 = tmp21;		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(741)
				bool tmp23 = tmp22;		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(741)
				bool tmp24 = !(tmp23);		HX_STACK_VAR(tmp24,"tmp24");
				HX_STACK_LINE(741)
				bool tmp25 = tmp24;		HX_STACK_VAR(tmp25,"tmp25");
				HX_STACK_LINE(741)
				bool tmp26 = tmp25;		HX_STACK_VAR(tmp26,"tmp26");
				HX_STACK_LINE(741)
				bool tmp27 = tmp26;		HX_STACK_VAR(tmp27,"tmp27");
				HX_STACK_LINE(741)
				bool tmp28 = tmp27;		HX_STACK_VAR(tmp28,"tmp28");
				HX_STACK_LINE(741)
				if ((tmp28)){
					HX_STACK_LINE(741)
					tmp14 = (breakIndex < spaceIndex->__get((int)0));
				}
				else{
					HX_STACK_LINE(741)
					tmp14 = true;
				}
			}
			else{
				HX_STACK_LINE(741)
				tmp14 = false;
			}
			HX_STACK_LINE(741)
			bool tmp15;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(741)
			if ((tmp14)){
				HX_STACK_LINE(741)
				tmp15 = (formatRange->__get((int)0).StaticCast< ::openfl::_internal::text::TextFormatRange >()->end >= breakIndex);
			}
			else{
				HX_STACK_LINE(741)
				tmp15 = false;
			}
			HX_STACK_LINE(741)
			if ((tmp15)){
				HX_STACK_LINE(743)
				::openfl::_internal::text::TextLayoutGroup tmp16 = ::openfl::_internal::text::TextLayoutGroup_obj::__new(formatRange->__get((int)0).StaticCast< ::openfl::_internal::text::TextFormatRange >()->format,textIndex,breakIndex);		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(743)
				layoutGroup = tmp16;
				HX_STACK_LINE(744)
				::String tmp17 = this->text;		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(744)
				int tmp18 = textIndex;		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(744)
				int tmp19 = breakIndex;		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(744)
				layoutGroup->advances = getAdvances(tmp17,tmp18,tmp19).Cast< Array< Float > >();
				HX_STACK_LINE(745)
				layoutGroup->offsetX = offsetX;
				HX_STACK_LINE(746)
				layoutGroup->ascent = ascent->__get((int)0);
				HX_STACK_LINE(747)
				layoutGroup->descent = descent->__get((int)0);
				HX_STACK_LINE(748)
				layoutGroup->leading = leading->__get((int)0);
				HX_STACK_LINE(749)
				layoutGroup->lineIndex = lineIndex;
				HX_STACK_LINE(750)
				layoutGroup->offsetY = offsetY;
				HX_STACK_LINE(751)
				Float tmp20 = getAdvancesWidth(layoutGroup->advances).Cast< Float >();		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(751)
				layoutGroup->width = tmp20;
				HX_STACK_LINE(752)
				layoutGroup->height = heightValue->__get((int)0);
				HX_STACK_LINE(753)
				::openfl::_internal::text::TextLayoutGroup tmp21 = layoutGroup;		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(753)
				this->layoutGroups->push(tmp21);
				HX_STACK_LINE(755)
				hx::AddEq(offsetY,heightValue->__get((int)0));
				HX_STACK_LINE(756)
				offsetX = (int)2;
				HX_STACK_LINE(758)
				bool tmp22 = this->wordWrap;		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(758)
				bool tmp23;		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(758)
				if ((tmp22)){
					HX_STACK_LINE(758)
					Float tmp24 = (layoutGroup->offsetX + layoutGroup->width);		HX_STACK_VAR(tmp24,"tmp24");
					HX_STACK_LINE(758)
					Float tmp25 = tmp24;		HX_STACK_VAR(tmp25,"tmp25");
					HX_STACK_LINE(758)
					Float tmp26 = this->width;		HX_STACK_VAR(tmp26,"tmp26");
					HX_STACK_LINE(758)
					Float tmp27 = tmp26;		HX_STACK_VAR(tmp27,"tmp27");
					HX_STACK_LINE(758)
					Float tmp28 = (tmp27 - (int)2);		HX_STACK_VAR(tmp28,"tmp28");
					HX_STACK_LINE(758)
					Float tmp29 = tmp28;		HX_STACK_VAR(tmp29,"tmp29");
					HX_STACK_LINE(758)
					tmp23 = (tmp25 > tmp29);
				}
				else{
					HX_STACK_LINE(758)
					tmp23 = false;
				}
				HX_STACK_LINE(758)
				if ((tmp23)){
					HX_STACK_LINE(760)
					layoutGroup->offsetY = offsetY;
					HX_STACK_LINE(761)
					layoutGroup->offsetX = offsetX;
					HX_STACK_LINE(763)
					hx::AddEq(offsetY,heightValue->__get((int)0));
					HX_STACK_LINE(764)
					(lineIndex)++;
				}
				HX_STACK_LINE(768)
				int tmp24 = (breakIndex + (int)1);		HX_STACK_VAR(tmp24,"tmp24");
				HX_STACK_LINE(768)
				textIndex = tmp24;
				HX_STACK_LINE(769)
				::String tmp25 = this->text;		HX_STACK_VAR(tmp25,"tmp25");
				HX_STACK_LINE(769)
				int tmp26 = textIndex;		HX_STACK_VAR(tmp26,"tmp26");
				HX_STACK_LINE(769)
				int tmp27 = tmp25.indexOf(HX_HCSTRING("\n","\x0a","\x00","\x00","\x00"),tmp26);		HX_STACK_VAR(tmp27,"tmp27");
				HX_STACK_LINE(769)
				breakIndex = tmp27;
				HX_STACK_LINE(770)
				(lineIndex)++;
				HX_STACK_LINE(772)
				bool tmp28 = (formatRange->__get((int)0).StaticCast< ::openfl::_internal::text::TextFormatRange >()->end == breakIndex);		HX_STACK_VAR(tmp28,"tmp28");
				HX_STACK_LINE(772)
				if ((tmp28)){
					HX_STACK_LINE(774)
					nextFormatRange().Cast< Void >();
					HX_STACK_LINE(775)
					lineFormat = formatRange->__get((int)0).StaticCast< ::openfl::_internal::text::TextFormatRange >()->format;
				}
			}
			else{
				HX_STACK_LINE(779)
				bool tmp16 = (formatRange->__get((int)0).StaticCast< ::openfl::_internal::text::TextFormatRange >()->end >= spaceIndex->__get((int)0));		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(779)
				bool tmp17;		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(779)
				if ((tmp16)){
					HX_STACK_LINE(779)
					tmp17 = (spaceIndex->__get((int)0) > (int)-1);
				}
				else{
					HX_STACK_LINE(779)
					tmp17 = false;
				}
				HX_STACK_LINE(779)
				if ((tmp17)){
					HX_STACK_LINE(781)
					layoutGroup = null();
					HX_STACK_LINE(782)
					wrap = false;
					HX_STACK_LINE(784)
					while((true)){
						HX_STACK_LINE(786)
						bool tmp18 = (spaceIndex->__get((int)0) == (int)-1);		HX_STACK_VAR(tmp18,"tmp18");
						HX_STACK_LINE(786)
						if ((tmp18)){
							HX_STACK_LINE(786)
							spaceIndex[(int)0] = formatRange->__get((int)0).StaticCast< ::openfl::_internal::text::TextFormatRange >()->end;
						}
						HX_STACK_LINE(788)
						::String tmp19 = this->text;		HX_STACK_VAR(tmp19,"tmp19");
						HX_STACK_LINE(788)
						int tmp20 = textIndex;		HX_STACK_VAR(tmp20,"tmp20");
						HX_STACK_LINE(788)
						int tmp21 = spaceIndex->__get((int)0);		HX_STACK_VAR(tmp21,"tmp21");
						HX_STACK_LINE(788)
						advances = getAdvances(tmp19,tmp20,tmp21).Cast< Array< Float > >();
						HX_STACK_LINE(789)
						Float tmp22 = getAdvancesWidth(advances).Cast< Float >();		HX_STACK_VAR(tmp22,"tmp22");
						HX_STACK_LINE(789)
						widthValue = tmp22;
						HX_STACK_LINE(791)
						bool tmp23 = this->wordWrap;		HX_STACK_VAR(tmp23,"tmp23");
						HX_STACK_LINE(791)
						if ((tmp23)){
							HX_STACK_LINE(793)
							Float tmp24 = (offsetX + widthValue);		HX_STACK_VAR(tmp24,"tmp24");
							HX_STACK_LINE(793)
							Float tmp25 = this->width;		HX_STACK_VAR(tmp25,"tmp25");
							HX_STACK_LINE(793)
							Float tmp26 = (tmp25 - (int)2);		HX_STACK_VAR(tmp26,"tmp26");
							HX_STACK_LINE(793)
							bool tmp27 = (tmp24 > tmp26);		HX_STACK_VAR(tmp27,"tmp27");
							HX_STACK_LINE(793)
							if ((tmp27)){
								HX_STACK_LINE(795)
								wrap = true;
							}
						}
						HX_STACK_LINE(801)
						bool tmp24 = wrap;		HX_STACK_VAR(tmp24,"tmp24");
						HX_STACK_LINE(801)
						if ((tmp24)){
							HX_STACK_LINE(803)
							hx::AddEq(offsetY,heightValue->__get((int)0));
							HX_STACK_LINE(805)
							int tmp25 = this->layoutGroups->length;		HX_STACK_VAR(tmp25,"tmp25");
							HX_STACK_LINE(805)
							int tmp26 = (tmp25 - (int)1);		HX_STACK_VAR(tmp26,"tmp26");
							HX_STACK_LINE(805)
							int i = tmp26;		HX_STACK_VAR(i,"i");
							HX_STACK_LINE(806)
							int offsetCount = (int)0;		HX_STACK_VAR(offsetCount,"offsetCount");
							HX_STACK_LINE(808)
							while((true)){
								HX_STACK_LINE(810)
								::openfl::_internal::text::TextLayoutGroup tmp27 = this->layoutGroups->__get(i).StaticCast< ::openfl::_internal::text::TextLayoutGroup >();		HX_STACK_VAR(tmp27,"tmp27");
								HX_STACK_LINE(810)
								layoutGroup = tmp27;
								HX_STACK_LINE(812)
								bool tmp28 = (i > (int)0);		HX_STACK_VAR(tmp28,"tmp28");
								HX_STACK_LINE(812)
								bool tmp29;		HX_STACK_VAR(tmp29,"tmp29");
								HX_STACK_LINE(812)
								if ((tmp28)){
									HX_STACK_LINE(812)
									tmp29 = (layoutGroup->startIndex > previousSpaceIndex);
								}
								else{
									HX_STACK_LINE(812)
									tmp29 = false;
								}
								HX_STACK_LINE(812)
								if ((tmp29)){
									HX_STACK_LINE(814)
									(offsetCount)++;
								}
								else{
									HX_STACK_LINE(818)
									break;
								}
								HX_STACK_LINE(822)
								(i)--;
							}
							HX_STACK_LINE(826)
							(lineIndex)++;
							HX_STACK_LINE(828)
							offsetX = (int)2;
							HX_STACK_LINE(830)
							bool tmp27 = (offsetCount > (int)0);		HX_STACK_VAR(tmp27,"tmp27");
							HX_STACK_LINE(830)
							if ((tmp27)){
								HX_STACK_LINE(832)
								int tmp28 = this->layoutGroups->length;		HX_STACK_VAR(tmp28,"tmp28");
								HX_STACK_LINE(832)
								int tmp29 = offsetCount;		HX_STACK_VAR(tmp29,"tmp29");
								HX_STACK_LINE(832)
								int tmp30 = (tmp28 - tmp29);		HX_STACK_VAR(tmp30,"tmp30");
								HX_STACK_LINE(832)
								::openfl::_internal::text::TextLayoutGroup tmp31 = this->layoutGroups->__get(tmp30).StaticCast< ::openfl::_internal::text::TextLayoutGroup >();		HX_STACK_VAR(tmp31,"tmp31");
								HX_STACK_LINE(832)
								Float bumpX = tmp31->offsetX;		HX_STACK_VAR(bumpX,"bumpX");
								HX_STACK_LINE(834)
								{
									HX_STACK_LINE(834)
									int tmp32 = this->layoutGroups->length;		HX_STACK_VAR(tmp32,"tmp32");
									HX_STACK_LINE(834)
									int tmp33 = offsetCount;		HX_STACK_VAR(tmp33,"tmp33");
									HX_STACK_LINE(834)
									int tmp34 = (tmp32 - tmp33);		HX_STACK_VAR(tmp34,"tmp34");
									HX_STACK_LINE(834)
									int _g1 = tmp34;		HX_STACK_VAR(_g1,"_g1");
									HX_STACK_LINE(834)
									int tmp35 = this->layoutGroups->length;		HX_STACK_VAR(tmp35,"tmp35");
									HX_STACK_LINE(834)
									int _g2 = tmp35;		HX_STACK_VAR(_g2,"_g2");
									HX_STACK_LINE(834)
									while((true)){
										HX_STACK_LINE(834)
										bool tmp36 = (_g1 < _g2);		HX_STACK_VAR(tmp36,"tmp36");
										HX_STACK_LINE(834)
										bool tmp37 = !(tmp36);		HX_STACK_VAR(tmp37,"tmp37");
										HX_STACK_LINE(834)
										if ((tmp37)){
											HX_STACK_LINE(834)
											break;
										}
										HX_STACK_LINE(834)
										int tmp38 = (_g1)++;		HX_STACK_VAR(tmp38,"tmp38");
										HX_STACK_LINE(834)
										int i1 = tmp38;		HX_STACK_VAR(i1,"i1");
										HX_STACK_LINE(836)
										::openfl::_internal::text::TextLayoutGroup tmp39 = this->layoutGroups->__get(i1).StaticCast< ::openfl::_internal::text::TextLayoutGroup >();		HX_STACK_VAR(tmp39,"tmp39");
										HX_STACK_LINE(836)
										layoutGroup = tmp39;
										HX_STACK_LINE(837)
										hx::SubEq(layoutGroup->offsetX,bumpX);
										HX_STACK_LINE(838)
										layoutGroup->offsetY = offsetY;
										HX_STACK_LINE(839)
										layoutGroup->lineIndex = lineIndex;
										HX_STACK_LINE(840)
										hx::AddEq(offsetX,layoutGroup->width);
									}
								}
							}
							HX_STACK_LINE(846)
							::openfl::_internal::text::TextLayoutGroup tmp28 = ::openfl::_internal::text::TextLayoutGroup_obj::__new(formatRange->__get((int)0).StaticCast< ::openfl::_internal::text::TextFormatRange >()->format,textIndex,spaceIndex->__get((int)0));		HX_STACK_VAR(tmp28,"tmp28");
							HX_STACK_LINE(846)
							layoutGroup = tmp28;
							HX_STACK_LINE(847)
							layoutGroup->advances = advances;
							HX_STACK_LINE(848)
							layoutGroup->offsetX = offsetX;
							HX_STACK_LINE(849)
							layoutGroup->ascent = ascent->__get((int)0);
							HX_STACK_LINE(850)
							layoutGroup->descent = descent->__get((int)0);
							HX_STACK_LINE(851)
							layoutGroup->leading = leading->__get((int)0);
							HX_STACK_LINE(852)
							layoutGroup->lineIndex = lineIndex;
							HX_STACK_LINE(853)
							layoutGroup->offsetY = offsetY;
							HX_STACK_LINE(854)
							layoutGroup->width = widthValue;
							HX_STACK_LINE(855)
							layoutGroup->height = heightValue->__get((int)0);
							HX_STACK_LINE(856)
							::openfl::_internal::text::TextLayoutGroup tmp29 = layoutGroup;		HX_STACK_VAR(tmp29,"tmp29");
							HX_STACK_LINE(856)
							this->layoutGroups->push(tmp29);
							HX_STACK_LINE(858)
							Float tmp30 = (widthValue + spaceWidth->__get((int)0));		HX_STACK_VAR(tmp30,"tmp30");
							HX_STACK_LINE(858)
							hx::AddEq(offsetX,tmp30);
							HX_STACK_LINE(859)
							marginRight = spaceWidth->__get((int)0);
							HX_STACK_LINE(861)
							wrap = false;
						}
						else{
							HX_STACK_LINE(865)
							bool tmp25 = (layoutGroup != null());		HX_STACK_VAR(tmp25,"tmp25");
							HX_STACK_LINE(865)
							bool tmp26;		HX_STACK_VAR(tmp26,"tmp26");
							HX_STACK_LINE(865)
							if ((tmp25)){
								HX_STACK_LINE(865)
								tmp26 = (textIndex == spaceIndex->__get((int)0));
							}
							else{
								HX_STACK_LINE(865)
								tmp26 = false;
							}
							HX_STACK_LINE(865)
							if ((tmp26)){
								HX_STACK_LINE(867)
								::openfl::text::TextFormatAlign tmp27 = formatRange->__get((int)0).StaticCast< ::openfl::_internal::text::TextFormatRange >()->format->align;		HX_STACK_VAR(tmp27,"tmp27");
								HX_STACK_LINE(867)
								bool tmp28 = (tmp27 != ::openfl::text::TextFormatAlign_obj::JUSTIFY);		HX_STACK_VAR(tmp28,"tmp28");
								HX_STACK_LINE(867)
								if ((tmp28)){
									HX_STACK_LINE(869)
									layoutGroup->endIndex = spaceIndex->__get((int)0);
								}
								HX_STACK_LINE(873)
								Float tmp29 = spaceWidth->__get((int)0);		HX_STACK_VAR(tmp29,"tmp29");
								HX_STACK_LINE(873)
								layoutGroup->advances->push(tmp29);
								HX_STACK_LINE(874)
								hx::AddEq(marginRight,spaceWidth->__get((int)0));
							}
							else{
								HX_STACK_LINE(876)
								bool tmp27 = (layoutGroup == null());		HX_STACK_VAR(tmp27,"tmp27");
								HX_STACK_LINE(876)
								bool tmp28 = !(tmp27);		HX_STACK_VAR(tmp28,"tmp28");
								HX_STACK_LINE(876)
								bool tmp29;		HX_STACK_VAR(tmp29,"tmp29");
								HX_STACK_LINE(876)
								if ((tmp28)){
									HX_STACK_LINE(876)
									tmp29 = (lineFormat->align == ::openfl::text::TextFormatAlign_obj::JUSTIFY);
								}
								else{
									HX_STACK_LINE(876)
									tmp29 = true;
								}
								HX_STACK_LINE(876)
								if ((tmp29)){
									HX_STACK_LINE(878)
									::openfl::_internal::text::TextLayoutGroup tmp30 = ::openfl::_internal::text::TextLayoutGroup_obj::__new(formatRange->__get((int)0).StaticCast< ::openfl::_internal::text::TextFormatRange >()->format,textIndex,spaceIndex->__get((int)0));		HX_STACK_VAR(tmp30,"tmp30");
									HX_STACK_LINE(878)
									layoutGroup = tmp30;
									HX_STACK_LINE(879)
									layoutGroup->advances = advances;
									HX_STACK_LINE(880)
									layoutGroup->offsetX = offsetX;
									HX_STACK_LINE(881)
									layoutGroup->ascent = ascent->__get((int)0);
									HX_STACK_LINE(882)
									layoutGroup->descent = descent->__get((int)0);
									HX_STACK_LINE(883)
									layoutGroup->leading = leading->__get((int)0);
									HX_STACK_LINE(884)
									layoutGroup->lineIndex = lineIndex;
									HX_STACK_LINE(885)
									layoutGroup->offsetY = offsetY;
									HX_STACK_LINE(886)
									layoutGroup->width = widthValue;
									HX_STACK_LINE(887)
									layoutGroup->height = heightValue->__get((int)0);
									HX_STACK_LINE(888)
									::openfl::_internal::text::TextLayoutGroup tmp31 = layoutGroup;		HX_STACK_VAR(tmp31,"tmp31");
									HX_STACK_LINE(888)
									this->layoutGroups->push(tmp31);
									HX_STACK_LINE(890)
									Float tmp32 = spaceWidth->__get((int)0);		HX_STACK_VAR(tmp32,"tmp32");
									HX_STACK_LINE(890)
									layoutGroup->advances->push(tmp32);
									HX_STACK_LINE(891)
									marginRight = spaceWidth->__get((int)0);
								}
								else{
									HX_STACK_LINE(895)
									layoutGroup->endIndex = spaceIndex->__get((int)0);
									HX_STACK_LINE(896)
									layoutGroup->advances = layoutGroup->advances->concat(advances);
									HX_STACK_LINE(897)
									Float tmp30 = (marginRight + widthValue);		HX_STACK_VAR(tmp30,"tmp30");
									HX_STACK_LINE(897)
									hx::AddEq(layoutGroup->width,tmp30);
									HX_STACK_LINE(899)
									Float tmp31 = spaceWidth->__get((int)0);		HX_STACK_VAR(tmp31,"tmp31");
									HX_STACK_LINE(899)
									layoutGroup->advances->push(tmp31);
									HX_STACK_LINE(900)
									marginRight = spaceWidth->__get((int)0);
								}
							}
							HX_STACK_LINE(904)
							Float tmp27 = (widthValue + spaceWidth->__get((int)0));		HX_STACK_VAR(tmp27,"tmp27");
							HX_STACK_LINE(904)
							hx::AddEq(offsetX,tmp27);
						}
						HX_STACK_LINE(908)
						int tmp25 = (spaceIndex->__get((int)0) + (int)1);		HX_STACK_VAR(tmp25,"tmp25");
						HX_STACK_LINE(908)
						textIndex = tmp25;
						HX_STACK_LINE(910)
						previousSpaceIndex = spaceIndex->__get((int)0);
						HX_STACK_LINE(911)
						::String tmp26 = this->text;		HX_STACK_VAR(tmp26,"tmp26");
						HX_STACK_LINE(911)
						int tmp27 = (previousSpaceIndex + (int)1);		HX_STACK_VAR(tmp27,"tmp27");
						HX_STACK_LINE(911)
						int tmp28 = tmp26.indexOf(HX_HCSTRING(" ","\x20","\x00","\x00","\x00"),tmp27);		HX_STACK_VAR(tmp28,"tmp28");
						HX_STACK_LINE(911)
						spaceIndex[(int)0] = tmp28;
						HX_STACK_LINE(913)
						bool tmp29 = (formatRange->__get((int)0).StaticCast< ::openfl::_internal::text::TextFormatRange >()->end <= previousSpaceIndex);		HX_STACK_VAR(tmp29,"tmp29");
						HX_STACK_LINE(913)
						if ((tmp29)){
							HX_STACK_LINE(915)
							layoutGroup = null();
							HX_STACK_LINE(916)
							nextFormatRange().Cast< Void >();
						}
						HX_STACK_LINE(920)
						bool tmp30 = (spaceIndex->__get((int)0) > breakIndex);		HX_STACK_VAR(tmp30,"tmp30");
						HX_STACK_LINE(920)
						bool tmp31 = tmp30;		HX_STACK_VAR(tmp31,"tmp31");
						HX_STACK_LINE(920)
						bool tmp32;		HX_STACK_VAR(tmp32,"tmp32");
						HX_STACK_LINE(920)
						if ((tmp31)){
							HX_STACK_LINE(920)
							tmp32 = (breakIndex > (int)-1);
						}
						else{
							HX_STACK_LINE(920)
							tmp32 = false;
						}
						HX_STACK_LINE(920)
						bool tmp33 = !(tmp32);		HX_STACK_VAR(tmp33,"tmp33");
						HX_STACK_LINE(920)
						bool tmp34 = tmp33;		HX_STACK_VAR(tmp34,"tmp34");
						HX_STACK_LINE(920)
						bool tmp35;		HX_STACK_VAR(tmp35,"tmp35");
						HX_STACK_LINE(920)
						if ((tmp34)){
							HX_STACK_LINE(920)
							int tmp36 = textIndex;		HX_STACK_VAR(tmp36,"tmp36");
							HX_STACK_LINE(920)
							::String tmp37 = this->text;		HX_STACK_VAR(tmp37,"tmp37");
							HX_STACK_LINE(920)
							::String tmp38 = tmp37;		HX_STACK_VAR(tmp38,"tmp38");
							HX_STACK_LINE(920)
							::String tmp39 = tmp38;		HX_STACK_VAR(tmp39,"tmp39");
							HX_STACK_LINE(920)
							int tmp40 = tmp39.length;		HX_STACK_VAR(tmp40,"tmp40");
							HX_STACK_LINE(920)
							tmp35 = (tmp36 > tmp40);
						}
						else{
							HX_STACK_LINE(920)
							tmp35 = true;
						}
						HX_STACK_LINE(920)
						bool tmp36 = !(tmp35);		HX_STACK_VAR(tmp36,"tmp36");
						HX_STACK_LINE(920)
						bool tmp37 = tmp36;		HX_STACK_VAR(tmp37,"tmp37");
						HX_STACK_LINE(920)
						bool tmp38;		HX_STACK_VAR(tmp38,"tmp38");
						HX_STACK_LINE(920)
						if ((tmp37)){
							HX_STACK_LINE(920)
							tmp38 = (spaceIndex->__get((int)0) > formatRange->__get((int)0).StaticCast< ::openfl::_internal::text::TextFormatRange >()->end);
						}
						else{
							HX_STACK_LINE(920)
							tmp38 = true;
						}
						HX_STACK_LINE(920)
						bool tmp39 = !(tmp38);		HX_STACK_VAR(tmp39,"tmp39");
						HX_STACK_LINE(920)
						bool tmp40;		HX_STACK_VAR(tmp40,"tmp40");
						HX_STACK_LINE(920)
						if ((tmp39)){
							HX_STACK_LINE(920)
							int tmp41 = spaceIndex->__get((int)0);		HX_STACK_VAR(tmp41,"tmp41");
							HX_STACK_LINE(920)
							int tmp42 = (int)-1;		HX_STACK_VAR(tmp42,"tmp42");
							HX_STACK_LINE(920)
							int tmp43 = tmp42;		HX_STACK_VAR(tmp43,"tmp43");
							HX_STACK_LINE(920)
							bool tmp44 = (tmp41 == tmp43);		HX_STACK_VAR(tmp44,"tmp44");
							HX_STACK_LINE(920)
							bool tmp45 = tmp44;		HX_STACK_VAR(tmp45,"tmp45");
							HX_STACK_LINE(920)
							bool tmp46 = tmp45;		HX_STACK_VAR(tmp46,"tmp46");
							HX_STACK_LINE(920)
							if ((tmp46)){
								HX_STACK_LINE(920)
								tmp40 = (breakIndex > (int)-1);
							}
							else{
								HX_STACK_LINE(920)
								tmp40 = false;
							}
						}
						else{
							HX_STACK_LINE(920)
							tmp40 = true;
						}
						HX_STACK_LINE(920)
						if ((tmp40)){
							HX_STACK_LINE(922)
							break;
						}
					}
				}
				else{
					HX_STACK_LINE(930)
					bool tmp18 = (textIndex >= formatRange->__get((int)0).StaticCast< ::openfl::_internal::text::TextFormatRange >()->end);		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(930)
					if ((tmp18)){
						HX_STACK_LINE(932)
						break;
					}
					HX_STACK_LINE(936)
					::openfl::_internal::text::TextLayoutGroup tmp19 = ::openfl::_internal::text::TextLayoutGroup_obj::__new(formatRange->__get((int)0).StaticCast< ::openfl::_internal::text::TextFormatRange >()->format,textIndex,formatRange->__get((int)0).StaticCast< ::openfl::_internal::text::TextFormatRange >()->end);		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(936)
					layoutGroup = tmp19;
					HX_STACK_LINE(937)
					::String tmp20 = this->text;		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(937)
					int tmp21 = textIndex;		HX_STACK_VAR(tmp21,"tmp21");
					HX_STACK_LINE(937)
					int tmp22 = formatRange->__get((int)0).StaticCast< ::openfl::_internal::text::TextFormatRange >()->end;		HX_STACK_VAR(tmp22,"tmp22");
					HX_STACK_LINE(937)
					layoutGroup->advances = getAdvances(tmp20,tmp21,tmp22).Cast< Array< Float > >();
					HX_STACK_LINE(938)
					layoutGroup->offsetX = offsetX;
					HX_STACK_LINE(939)
					layoutGroup->ascent = ascent->__get((int)0);
					HX_STACK_LINE(940)
					layoutGroup->descent = descent->__get((int)0);
					HX_STACK_LINE(941)
					layoutGroup->leading = leading->__get((int)0);
					HX_STACK_LINE(942)
					layoutGroup->lineIndex = lineIndex;
					HX_STACK_LINE(943)
					layoutGroup->offsetY = offsetY;
					HX_STACK_LINE(944)
					Float tmp23 = getAdvancesWidth(layoutGroup->advances).Cast< Float >();		HX_STACK_VAR(tmp23,"tmp23");
					HX_STACK_LINE(944)
					layoutGroup->width = tmp23;
					HX_STACK_LINE(945)
					layoutGroup->height = heightValue->__get((int)0);
					HX_STACK_LINE(946)
					::openfl::_internal::text::TextLayoutGroup tmp24 = layoutGroup;		HX_STACK_VAR(tmp24,"tmp24");
					HX_STACK_LINE(946)
					this->layoutGroups->push(tmp24);
					HX_STACK_LINE(948)
					hx::AddEq(offsetX,layoutGroup->width);
					HX_STACK_LINE(950)
					textIndex = formatRange->__get((int)0).StaticCast< ::openfl::_internal::text::TextFormatRange >()->end;
					HX_STACK_LINE(952)
					nextFormatRange().Cast< Void >();
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(TextEngine_obj,getLayoutGroups,(void))

Void TextEngine_obj::setTextAlignment( ){
{
		HX_STACK_FRAME("openfl._internal.text.TextEngine","setTextAlignment",0xb5caa542,"openfl._internal.text.TextEngine.setTextAlignment","openfl/_internal/text/TextEngine.hx",961,0xdff93b7f)
		HX_STACK_THIS(this)
		HX_STACK_LINE(963)
		int lineIndex = (int)-1;		HX_STACK_VAR(lineIndex,"lineIndex");
		HX_STACK_LINE(964)
		Float offsetX = ((Float)0.0);		HX_STACK_VAR(offsetX,"offsetX");
		HX_STACK_LINE(965)
		::openfl::_internal::text::TextLayoutGroup group;		HX_STACK_VAR(group,"group");
		HX_STACK_LINE(965)
		int lineLength;		HX_STACK_VAR(lineLength,"lineLength");
		HX_STACK_LINE(967)
		{
			HX_STACK_LINE(967)
			int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(967)
			int tmp = this->layoutGroups->length;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(967)
			int _g = tmp;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(967)
			while((true)){
				HX_STACK_LINE(967)
				bool tmp1 = (_g1 < _g);		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(967)
				bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(967)
				if ((tmp2)){
					HX_STACK_LINE(967)
					break;
				}
				HX_STACK_LINE(967)
				int tmp3 = (_g1)++;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(967)
				int i = tmp3;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(969)
				::openfl::_internal::text::TextLayoutGroup tmp4 = this->layoutGroups->__get(i).StaticCast< ::openfl::_internal::text::TextLayoutGroup >();		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(969)
				group = tmp4;
				HX_STACK_LINE(971)
				bool tmp5 = (group->lineIndex != lineIndex);		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(971)
				if ((tmp5)){
					HX_STACK_LINE(973)
					lineIndex = group->lineIndex;
					HX_STACK_LINE(975)
					{
						HX_STACK_LINE(975)
						::openfl::text::TextFormatAlign tmp6 = group->format->align;		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(975)
						::openfl::text::TextFormatAlign _g2 = tmp6;		HX_STACK_VAR(_g2,"_g2");
						HX_STACK_LINE(975)
						switch( (int)(_g2->__Index())){
							case (int)3: {
								HX_STACK_LINE(979)
								Float tmp7 = this->lineWidths->__get(lineIndex);		HX_STACK_VAR(tmp7,"tmp7");
								HX_STACK_LINE(979)
								Float tmp8 = this->width;		HX_STACK_VAR(tmp8,"tmp8");
								HX_STACK_LINE(979)
								Float tmp9 = (tmp8 - (int)4);		HX_STACK_VAR(tmp9,"tmp9");
								HX_STACK_LINE(979)
								bool tmp10 = (tmp7 < tmp9);		HX_STACK_VAR(tmp10,"tmp10");
								HX_STACK_LINE(979)
								if ((tmp10)){
									HX_STACK_LINE(981)
									Float tmp11 = this->width;		HX_STACK_VAR(tmp11,"tmp11");
									HX_STACK_LINE(981)
									Float tmp12 = (tmp11 - (int)4);		HX_STACK_VAR(tmp12,"tmp12");
									HX_STACK_LINE(981)
									Float tmp13 = this->lineWidths->__get(lineIndex);		HX_STACK_VAR(tmp13,"tmp13");
									HX_STACK_LINE(981)
									Float tmp14 = (tmp12 - tmp13);		HX_STACK_VAR(tmp14,"tmp14");
									HX_STACK_LINE(981)
									Float tmp15 = (Float(tmp14) / Float((int)2));		HX_STACK_VAR(tmp15,"tmp15");
									HX_STACK_LINE(981)
									int tmp16 = ::Math_obj::round(tmp15);		HX_STACK_VAR(tmp16,"tmp16");
									HX_STACK_LINE(981)
									offsetX = tmp16;
								}
								else{
									HX_STACK_LINE(985)
									offsetX = (int)0;
								}
							}
							;break;
							case (int)1: {
								HX_STACK_LINE(991)
								Float tmp7 = this->lineWidths->__get(lineIndex);		HX_STACK_VAR(tmp7,"tmp7");
								HX_STACK_LINE(991)
								Float tmp8 = this->width;		HX_STACK_VAR(tmp8,"tmp8");
								HX_STACK_LINE(991)
								Float tmp9 = (tmp8 - (int)4);		HX_STACK_VAR(tmp9,"tmp9");
								HX_STACK_LINE(991)
								bool tmp10 = (tmp7 < tmp9);		HX_STACK_VAR(tmp10,"tmp10");
								HX_STACK_LINE(991)
								if ((tmp10)){
									HX_STACK_LINE(993)
									Float tmp11 = this->width;		HX_STACK_VAR(tmp11,"tmp11");
									HX_STACK_LINE(993)
									Float tmp12 = (tmp11 - (int)4);		HX_STACK_VAR(tmp12,"tmp12");
									HX_STACK_LINE(993)
									Float tmp13 = this->lineWidths->__get(lineIndex);		HX_STACK_VAR(tmp13,"tmp13");
									HX_STACK_LINE(993)
									Float tmp14 = (tmp12 - tmp13);		HX_STACK_VAR(tmp14,"tmp14");
									HX_STACK_LINE(993)
									int tmp15 = ::Math_obj::round(tmp14);		HX_STACK_VAR(tmp15,"tmp15");
									HX_STACK_LINE(993)
									offsetX = tmp15;
								}
								else{
									HX_STACK_LINE(997)
									offsetX = (int)0;
								}
							}
							;break;
							case (int)2: {
								HX_STACK_LINE(1003)
								Float tmp7 = this->lineWidths->__get(lineIndex);		HX_STACK_VAR(tmp7,"tmp7");
								HX_STACK_LINE(1003)
								Float tmp8 = this->width;		HX_STACK_VAR(tmp8,"tmp8");
								HX_STACK_LINE(1003)
								Float tmp9 = (tmp8 - (int)4);		HX_STACK_VAR(tmp9,"tmp9");
								HX_STACK_LINE(1003)
								bool tmp10 = (tmp7 < tmp9);		HX_STACK_VAR(tmp10,"tmp10");
								HX_STACK_LINE(1003)
								if ((tmp10)){
									HX_STACK_LINE(1005)
									lineLength = (int)1;
									HX_STACK_LINE(1007)
									{
										HX_STACK_LINE(1007)
										int tmp11 = (i + (int)1);		HX_STACK_VAR(tmp11,"tmp11");
										HX_STACK_LINE(1007)
										int _g4 = tmp11;		HX_STACK_VAR(_g4,"_g4");
										HX_STACK_LINE(1007)
										int tmp12 = this->layoutGroups->length;		HX_STACK_VAR(tmp12,"tmp12");
										HX_STACK_LINE(1007)
										int _g3 = tmp12;		HX_STACK_VAR(_g3,"_g3");
										HX_STACK_LINE(1007)
										while((true)){
											HX_STACK_LINE(1007)
											bool tmp13 = (_g4 < _g3);		HX_STACK_VAR(tmp13,"tmp13");
											HX_STACK_LINE(1007)
											bool tmp14 = !(tmp13);		HX_STACK_VAR(tmp14,"tmp14");
											HX_STACK_LINE(1007)
											if ((tmp14)){
												HX_STACK_LINE(1007)
												break;
											}
											HX_STACK_LINE(1007)
											int tmp15 = (_g4)++;		HX_STACK_VAR(tmp15,"tmp15");
											HX_STACK_LINE(1007)
											int j = tmp15;		HX_STACK_VAR(j,"j");
											HX_STACK_LINE(1009)
											::openfl::_internal::text::TextLayoutGroup tmp16 = this->layoutGroups->__get(j).StaticCast< ::openfl::_internal::text::TextLayoutGroup >();		HX_STACK_VAR(tmp16,"tmp16");
											HX_STACK_LINE(1009)
											int tmp17 = tmp16->lineIndex;		HX_STACK_VAR(tmp17,"tmp17");
											HX_STACK_LINE(1009)
											int tmp18 = lineIndex;		HX_STACK_VAR(tmp18,"tmp18");
											HX_STACK_LINE(1009)
											bool tmp19 = (tmp17 == tmp18);		HX_STACK_VAR(tmp19,"tmp19");
											HX_STACK_LINE(1009)
											if ((tmp19)){
												HX_STACK_LINE(1011)
												(lineLength)++;
											}
											else{
												HX_STACK_LINE(1015)
												break;
											}
										}
									}
									HX_STACK_LINE(1021)
									bool tmp11 = (lineLength > (int)1);		HX_STACK_VAR(tmp11,"tmp11");
									HX_STACK_LINE(1021)
									if ((tmp11)){
										HX_STACK_LINE(1023)
										int tmp12 = (i + lineLength);		HX_STACK_VAR(tmp12,"tmp12");
										HX_STACK_LINE(1023)
										int tmp13 = (tmp12 - (int)1);		HX_STACK_VAR(tmp13,"tmp13");
										HX_STACK_LINE(1023)
										::openfl::_internal::text::TextLayoutGroup tmp14 = this->layoutGroups->__get(tmp13).StaticCast< ::openfl::_internal::text::TextLayoutGroup >();		HX_STACK_VAR(tmp14,"tmp14");
										HX_STACK_LINE(1023)
										group = tmp14;
										HX_STACK_LINE(1025)
										int tmp15 = group->endIndex;		HX_STACK_VAR(tmp15,"tmp15");
										HX_STACK_LINE(1025)
										::String tmp16 = this->text;		HX_STACK_VAR(tmp16,"tmp16");
										HX_STACK_LINE(1025)
										int tmp17 = tmp16.length;		HX_STACK_VAR(tmp17,"tmp17");
										HX_STACK_LINE(1025)
										bool tmp18 = (tmp15 < tmp17);		HX_STACK_VAR(tmp18,"tmp18");
										HX_STACK_LINE(1025)
										bool tmp19;		HX_STACK_VAR(tmp19,"tmp19");
										HX_STACK_LINE(1025)
										if ((tmp18)){
											HX_STACK_LINE(1025)
											::String tmp20 = this->text;		HX_STACK_VAR(tmp20,"tmp20");
											HX_STACK_LINE(1025)
											::String tmp21 = tmp20;		HX_STACK_VAR(tmp21,"tmp21");
											HX_STACK_LINE(1025)
											int tmp22 = group->endIndex;		HX_STACK_VAR(tmp22,"tmp22");
											HX_STACK_LINE(1025)
											int tmp23 = tmp22;		HX_STACK_VAR(tmp23,"tmp23");
											HX_STACK_LINE(1025)
											::String tmp24 = tmp21.charAt(tmp23);		HX_STACK_VAR(tmp24,"tmp24");
											HX_STACK_LINE(1025)
											::String tmp25 = tmp24;		HX_STACK_VAR(tmp25,"tmp25");
											HX_STACK_LINE(1025)
											tmp19 = (tmp25 != HX_HCSTRING("\n","\x0a","\x00","\x00","\x00"));
										}
										else{
											HX_STACK_LINE(1025)
											tmp19 = false;
										}
										HX_STACK_LINE(1025)
										if ((tmp19)){
											HX_STACK_LINE(1027)
											Float tmp20 = this->width;		HX_STACK_VAR(tmp20,"tmp20");
											HX_STACK_LINE(1027)
											Float tmp21 = (tmp20 - (int)4);		HX_STACK_VAR(tmp21,"tmp21");
											HX_STACK_LINE(1027)
											Float tmp22 = this->lineWidths->__get(lineIndex);		HX_STACK_VAR(tmp22,"tmp22");
											HX_STACK_LINE(1027)
											Float tmp23 = (tmp21 - tmp22);		HX_STACK_VAR(tmp23,"tmp23");
											HX_STACK_LINE(1027)
											int tmp24 = (lineLength - (int)1);		HX_STACK_VAR(tmp24,"tmp24");
											HX_STACK_LINE(1027)
											Float tmp25 = (Float(tmp23) / Float(tmp24));		HX_STACK_VAR(tmp25,"tmp25");
											HX_STACK_LINE(1027)
											offsetX = tmp25;
											HX_STACK_LINE(1029)
											{
												HX_STACK_LINE(1029)
												int _g3 = (int)1;		HX_STACK_VAR(_g3,"_g3");
												HX_STACK_LINE(1029)
												while((true)){
													HX_STACK_LINE(1029)
													bool tmp26 = (_g3 < lineLength);		HX_STACK_VAR(tmp26,"tmp26");
													HX_STACK_LINE(1029)
													bool tmp27 = !(tmp26);		HX_STACK_VAR(tmp27,"tmp27");
													HX_STACK_LINE(1029)
													if ((tmp27)){
														HX_STACK_LINE(1029)
														break;
													}
													HX_STACK_LINE(1029)
													int tmp28 = (_g3)++;		HX_STACK_VAR(tmp28,"tmp28");
													HX_STACK_LINE(1029)
													int j = tmp28;		HX_STACK_VAR(j,"j");
													HX_STACK_LINE(1031)
													Float tmp29 = (offsetX * j);		HX_STACK_VAR(tmp29,"tmp29");
													HX_STACK_LINE(1031)
													int tmp30 = (i + j);		HX_STACK_VAR(tmp30,"tmp30");
													HX_STACK_LINE(1031)
													::openfl::_internal::text::TextLayoutGroup tmp31 = this->layoutGroups->__get(tmp30).StaticCast< ::openfl::_internal::text::TextLayoutGroup >();		HX_STACK_VAR(tmp31,"tmp31");
													HX_STACK_LINE(1031)
													hx::AddEq(tmp31->offsetX,tmp29);
												}
											}
										}
									}
								}
								HX_STACK_LINE(1041)
								offsetX = (int)0;
							}
							;break;
							default: {
								HX_STACK_LINE(1045)
								offsetX = (int)0;
							}
						}
					}
				}
				HX_STACK_LINE(1051)
				bool tmp6 = (offsetX > (int)0);		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(1051)
				if ((tmp6)){
					HX_STACK_LINE(1053)
					hx::AddEq(group->offsetX,offsetX);
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(TextEngine_obj,setTextAlignment,(void))

Void TextEngine_obj::update( ){
{
		HX_STACK_FRAME("openfl._internal.text.TextEngine","update",0x7da66e57,"openfl._internal.text.TextEngine.update","openfl/_internal/text/TextEngine.hx",1062,0xdff93b7f)
		HX_STACK_THIS(this)
		HX_STACK_LINE(1064)
		::String tmp = this->text;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(1064)
		bool tmp1 = (tmp == null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(1064)
		bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(1064)
		bool tmp3 = tmp2;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(1064)
		bool tmp4;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(1064)
		if ((tmp3)){
			HX_STACK_LINE(1064)
			::String tmp5 = this->text;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(1064)
			::String tmp6 = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(1064)
			::String tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(1064)
			::String tmp8 = tmp7;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(1064)
			::String tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(1064)
			::String tmp10 = ::StringTools_obj::trim(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(1064)
			::String tmp11 = tmp10;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(1064)
			::String tmp12 = tmp11;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(1064)
			tmp4 = (tmp12 == HX_HCSTRING("","\x00","\x00","\x00","\x00"));
		}
		else{
			HX_STACK_LINE(1064)
			tmp4 = true;
		}
		HX_STACK_LINE(1064)
		bool tmp5 = !(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(1064)
		bool tmp6;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(1064)
		if ((tmp5)){
			HX_STACK_LINE(1064)
			int tmp7 = this->textFormatRanges->length;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(1064)
			int tmp8 = tmp7;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(1064)
			tmp6 = (tmp8 == (int)0);
		}
		else{
			HX_STACK_LINE(1064)
			tmp6 = true;
		}
		HX_STACK_LINE(1064)
		if ((tmp6)){
			HX_STACK_LINE(1066)
			int tmp7 = this->lineAscents->length;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(1066)
			this->lineAscents->splice((int)0,tmp7);
			HX_STACK_LINE(1067)
			int tmp8 = this->lineBreaks->length;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(1067)
			this->lineBreaks->splice((int)0,tmp8);
			HX_STACK_LINE(1068)
			int tmp9 = this->lineDescents->length;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(1068)
			this->lineDescents->splice((int)0,tmp9);
			HX_STACK_LINE(1069)
			int tmp10 = this->lineLeadings->length;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(1069)
			this->lineLeadings->splice((int)0,tmp10);
			HX_STACK_LINE(1070)
			int tmp11 = this->lineHeights->length;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(1070)
			this->lineHeights->splice((int)0,tmp11);
			HX_STACK_LINE(1071)
			int tmp12 = this->lineWidths->length;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(1071)
			this->lineWidths->splice((int)0,tmp12);
			HX_STACK_LINE(1072)
			int tmp13 = this->layoutGroups->length;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(1072)
			this->layoutGroups->splice((int)0,tmp13);
			HX_STACK_LINE(1074)
			this->textWidth = (int)0;
			HX_STACK_LINE(1075)
			this->textHeight = (int)0;
			HX_STACK_LINE(1076)
			this->numLines = (int)1;
			HX_STACK_LINE(1077)
			this->maxScrollH = (int)0;
			HX_STACK_LINE(1078)
			this->maxScrollV = (int)1;
			HX_STACK_LINE(1079)
			this->bottomScrollV = (int)1;
		}
		else{
			HX_STACK_LINE(1083)
			this->getLayoutGroups();
			HX_STACK_LINE(1084)
			this->getLineMeasurements();
			HX_STACK_LINE(1085)
			this->setTextAlignment();
		}
		HX_STACK_LINE(1089)
		this->getBounds();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(TextEngine_obj,update,(void))

int TextEngine_obj::UTF8_TAB;

int TextEngine_obj::UTF8_ENDLINE;

int TextEngine_obj::UTF8_SPACE;

int TextEngine_obj::UTF8_HYPHEN;

::haxe::ds::StringMap TextEngine_obj::__defaultFonts;

::openfl::text::Font TextEngine_obj::findFont( ::String name){
	HX_STACK_FRAME("openfl._internal.text.TextEngine","findFont",0x253a8276,"openfl._internal.text.TextEngine.findFont","openfl/_internal/text/TextEngine.hx",163,0xdff93b7f)
	HX_STACK_ARG(name,"name")
	HX_STACK_LINE(167)
	{
		HX_STACK_LINE(167)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(167)
		Array< ::Dynamic > _g1 = ::openfl::text::Font_obj::__registeredFonts;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(167)
		while((true)){
			HX_STACK_LINE(167)
			bool tmp = (_g < _g1->length);		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(167)
			bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(167)
			if ((tmp1)){
				HX_STACK_LINE(167)
				break;
			}
			HX_STACK_LINE(167)
			::openfl::text::Font tmp2 = _g1->__get(_g).StaticCast< ::openfl::text::Font >();		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(167)
			::openfl::text::Font registeredFont = tmp2;		HX_STACK_VAR(registeredFont,"registeredFont");
			HX_STACK_LINE(167)
			++(_g);
			HX_STACK_LINE(169)
			bool tmp3 = (registeredFont == null());		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(169)
			if ((tmp3)){
				HX_STACK_LINE(169)
				continue;
			}
			HX_STACK_LINE(171)
			bool tmp4 = (registeredFont->name == name);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(171)
			bool tmp5 = !(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(171)
			bool tmp6;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(171)
			if ((tmp5)){
				HX_STACK_LINE(171)
				bool tmp7 = (registeredFont->__fontPath != null());		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(171)
				bool tmp8 = tmp7;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(171)
				bool tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(171)
				if ((tmp9)){
					HX_STACK_LINE(171)
					bool tmp10 = (registeredFont->__fontPath == name);		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(171)
					bool tmp11 = tmp10;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(171)
					bool tmp12 = tmp11;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(171)
					bool tmp13 = tmp12;		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(171)
					bool tmp14 = tmp13;		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(171)
					bool tmp15 = !(tmp14);		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(171)
					bool tmp16 = tmp15;		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(171)
					bool tmp17 = tmp16;		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(171)
					bool tmp18 = tmp17;		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(171)
					bool tmp19 = tmp18;		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(171)
					if ((tmp19)){
						HX_STACK_LINE(171)
						::String tmp20 = registeredFont->__fontPath;		HX_STACK_VAR(tmp20,"tmp20");
						HX_STACK_LINE(171)
						::String tmp21 = tmp20;		HX_STACK_VAR(tmp21,"tmp21");
						HX_STACK_LINE(171)
						::String tmp22 = tmp21;		HX_STACK_VAR(tmp22,"tmp22");
						HX_STACK_LINE(171)
						::String tmp23 = tmp22;		HX_STACK_VAR(tmp23,"tmp23");
						HX_STACK_LINE(171)
						::String tmp24 = ::haxe::io::Path_obj::withoutDirectory(tmp23);		HX_STACK_VAR(tmp24,"tmp24");
						HX_STACK_LINE(171)
						::String tmp25 = tmp24;		HX_STACK_VAR(tmp25,"tmp25");
						HX_STACK_LINE(171)
						::String tmp26 = tmp25;		HX_STACK_VAR(tmp26,"tmp26");
						HX_STACK_LINE(171)
						::String tmp27 = tmp26;		HX_STACK_VAR(tmp27,"tmp27");
						HX_STACK_LINE(171)
						::String tmp28 = name;		HX_STACK_VAR(tmp28,"tmp28");
						HX_STACK_LINE(171)
						tmp6 = (tmp27 == tmp28);
					}
					else{
						HX_STACK_LINE(171)
						tmp6 = true;
					}
				}
				else{
					HX_STACK_LINE(171)
					tmp6 = false;
				}
			}
			else{
				HX_STACK_LINE(171)
				tmp6 = true;
			}
			HX_STACK_LINE(171)
			if ((tmp6)){
				HX_STACK_LINE(173)
				::openfl::text::Font tmp7 = registeredFont;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(173)
				return tmp7;
			}
		}
	}
	HX_STACK_LINE(179)
	::String tmp = name;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(179)
	::openfl::text::Font tmp1 = ::openfl::text::Font_obj::fromFile(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(179)
	::openfl::text::Font font = tmp1;		HX_STACK_VAR(font,"font");
	HX_STACK_LINE(181)
	bool tmp2 = (font != null());		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(181)
	if ((tmp2)){
		HX_STACK_LINE(183)
		::openfl::text::Font tmp3 = font;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(183)
		::openfl::text::Font_obj::__registeredFonts->push(tmp3);
		HX_STACK_LINE(184)
		::openfl::text::Font tmp4 = font;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(184)
		return tmp4;
	}
	HX_STACK_LINE(190)
	return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(TextEngine_obj,findFont,return )

::String TextEngine_obj::getFont( ::openfl::text::TextFormat format){
	HX_STACK_FRAME("openfl._internal.text.TextEngine","getFont",0xec6d6977,"openfl._internal.text.TextEngine.getFont","openfl/_internal/text/TextEngine.hx",205,0xdff93b7f)
	HX_STACK_ARG(format,"format")
	HX_STACK_LINE(207)
	Dynamic tmp = format->italic;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(207)
	::String tmp1;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(207)
	if ((tmp)){
		HX_STACK_LINE(207)
		tmp1 = HX_HCSTRING("italic ","\x30","\xe3","\x44","\x91");
	}
	else{
		HX_STACK_LINE(207)
		tmp1 = HX_HCSTRING("normal ","\x19","\x70","\xda","\x2b");
	}
	HX_STACK_LINE(207)
	::String font = tmp1;		HX_STACK_VAR(font,"font");
	HX_STACK_LINE(208)
	hx::AddEq(font,HX_HCSTRING("normal ","\x19","\x70","\xda","\x2b"));
	HX_STACK_LINE(209)
	Dynamic tmp2 = format->bold;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(209)
	::String tmp3;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(209)
	if ((tmp2)){
		HX_STACK_LINE(209)
		tmp3 = HX_HCSTRING("bold ","\xfb","\xd2","\xf5","\xb6");
	}
	else{
		HX_STACK_LINE(209)
		tmp3 = HX_HCSTRING("normal ","\x19","\x70","\xda","\x2b");
	}
	HX_STACK_LINE(209)
	hx::AddEq(font,tmp3);
	HX_STACK_LINE(210)
	::String tmp4 = (format->size + HX_HCSTRING("px","\x08","\x62","\x00","\x00"));		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(210)
	hx::AddEq(font,tmp4);
	HX_STACK_LINE(211)
	int tmp5 = (format->size + format->leading);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(211)
	int tmp6 = (tmp5 + (int)6);		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(211)
	::String tmp7 = (HX_HCSTRING("/","\x2f","\x00","\x00","\x00") + tmp6);		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(211)
	::String tmp8 = (tmp7 + HX_HCSTRING("px ","\x18","\x65","\x55","\x00"));		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(211)
	hx::AddEq(font,tmp8);
	HX_STACK_LINE(213)
	::String tmp9;		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(213)
	{
		HX_STACK_LINE(213)
		::String _g = format->font;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(213)
		::String tmp10 = _g;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(213)
		::String _switch_1 = (tmp10);
		if (  ( _switch_1==HX_HCSTRING("_sans","\x32","\xa0","\x5e","\xff"))){
			HX_STACK_LINE(215)
			tmp9 = HX_HCSTRING("sans-serif","\xc3","\x60","\xfb","\x08");
		}
		else if (  ( _switch_1==HX_HCSTRING("_serif","\xbe","\x66","\x15","\x76"))){
			HX_STACK_LINE(216)
			tmp9 = HX_HCSTRING("serif","\x7d","\x1f","\x2e","\x7a");
		}
		else if (  ( _switch_1==HX_HCSTRING("_typewriter","\x0c","\x5e","\x52","\x94"))){
			HX_STACK_LINE(217)
			tmp9 = HX_HCSTRING("monospace","\xc3","\xd1","\xe5","\x5e");
		}
		else  {
			HX_STACK_LINE(218)
			::String tmp11 = (HX_HCSTRING("'","\x27","\x00","\x00","\x00") + format->font);		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(218)
			tmp9 = (tmp11 + HX_HCSTRING("'","\x27","\x00","\x00","\x00"));
		}
;
;
	}
	HX_STACK_LINE(213)
	::String tmp10 = (HX_HCSTRING("","\x00","\x00","\x00","\x00") + tmp9);		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(213)
	hx::AddEq(font,tmp10);
	HX_STACK_LINE(222)
	::String tmp11 = font;		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(222)
	return tmp11;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(TextEngine_obj,getFont,return )

::openfl::text::Font TextEngine_obj::getFontInstance( ::openfl::text::TextFormat format){
	HX_STACK_FRAME("openfl._internal.text.TextEngine","getFontInstance",0xe749142c,"openfl._internal.text.TextEngine.getFontInstance","openfl/_internal/text/TextEngine.hx",227,0xdff93b7f)
	HX_STACK_ARG(format,"format")
	HX_STACK_LINE(231)
	::openfl::text::Font instance = null();		HX_STACK_VAR(instance,"instance");
	HX_STACK_LINE(232)
	Array< ::String > fontList = null();		HX_STACK_VAR(fontList,"fontList");
	HX_STACK_LINE(234)
	bool tmp = (format != null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(234)
	bool tmp1;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(234)
	if ((tmp)){
		HX_STACK_LINE(234)
		tmp1 = (format->font != null());
	}
	else{
		HX_STACK_LINE(234)
		tmp1 = false;
	}
	HX_STACK_LINE(234)
	if ((tmp1)){
		HX_STACK_LINE(236)
		::haxe::ds::StringMap tmp2 = ::openfl::_internal::text::TextEngine_obj::__defaultFonts;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(236)
		::String tmp3 = format->font;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(236)
		bool tmp4 = tmp2->exists(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(236)
		if ((tmp4)){
			HX_STACK_LINE(238)
			::haxe::ds::StringMap tmp5 = ::openfl::_internal::text::TextEngine_obj::__defaultFonts;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(238)
			::String tmp6 = format->font;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(238)
			::openfl::text::Font tmp7 = tmp5->get(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(238)
			::openfl::text::Font tmp8 = tmp7;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(238)
			return tmp8;
		}
		HX_STACK_LINE(242)
		::String tmp5 = format->font;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(242)
		::openfl::text::Font tmp6 = ::openfl::_internal::text::TextEngine_obj::findFont(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(242)
		instance = tmp6;
		HX_STACK_LINE(243)
		bool tmp7 = (instance != null());		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(243)
		if ((tmp7)){
			HX_STACK_LINE(243)
			::openfl::text::Font tmp8 = instance;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(243)
			return tmp8;
		}
		HX_STACK_LINE(245)
		::String tmp8 = ::lime::_system::System_obj::get_fontsDirectory();		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(245)
		::String systemFontDirectory = tmp8;		HX_STACK_VAR(systemFontDirectory,"systemFontDirectory");
		HX_STACK_LINE(247)
		{
			HX_STACK_LINE(247)
			::String _g = format->font;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(247)
			::String tmp9 = _g;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(247)
			::String _switch_2 = (tmp9);
			if (  ( _switch_2==HX_HCSTRING("_sans","\x32","\xa0","\x5e","\xff"))){
				HX_STACK_LINE(252)
				Dynamic tmp10 = format->bold;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(252)
				if ((tmp10)){
					HX_STACK_LINE(254)
					Dynamic tmp11 = format->italic;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(254)
					if ((tmp11)){
						HX_STACK_LINE(256)
						::String tmp12 = (systemFontDirectory + HX_HCSTRING("/arialbi.ttf","\x73","\x0e","\x91","\x06"));		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(256)
						fontList = Array_obj< ::String >::__new().Add(tmp12);
					}
					else{
						HX_STACK_LINE(260)
						::String tmp12 = (systemFontDirectory + HX_HCSTRING("/arialbd.ttf","\xee","\x27","\x90","\x25"));		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(260)
						fontList = Array_obj< ::String >::__new().Add(tmp12);
					}
				}
				else{
					HX_STACK_LINE(266)
					Dynamic tmp11 = format->italic;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(266)
					if ((tmp11)){
						HX_STACK_LINE(268)
						::String tmp12 = (systemFontDirectory + HX_HCSTRING("/ariali.ttf","\x2d","\xc9","\x3e","\x6e"));		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(268)
						fontList = Array_obj< ::String >::__new().Add(tmp12);
					}
					else{
						HX_STACK_LINE(272)
						::String tmp12 = (systemFontDirectory + HX_HCSTRING("/arial.ttf","\x2c","\x34","\x8e","\xd8"));		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(272)
						fontList = Array_obj< ::String >::__new().Add(tmp12);
					}
				}
			}
			else if (  ( _switch_2==HX_HCSTRING("_serif","\xbe","\x66","\x15","\x76"))){
			}
			else if (  ( _switch_2==HX_HCSTRING("_typewriter","\x0c","\x5e","\x52","\x94"))){
				HX_STACK_LINE(294)
				Dynamic tmp10 = format->bold;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(294)
				if ((tmp10)){
					HX_STACK_LINE(296)
					Dynamic tmp11 = format->italic;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(296)
					if ((tmp11)){
						HX_STACK_LINE(298)
						::String tmp12 = (systemFontDirectory + HX_HCSTRING("/courbi.ttf","\x77","\x1e","\xb8","\xe7"));		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(298)
						fontList = Array_obj< ::String >::__new().Add(tmp12);
					}
					else{
						HX_STACK_LINE(302)
						::String tmp12 = (systemFontDirectory + HX_HCSTRING("/courbd.ttf","\xf2","\x37","\xb7","\x06"));		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(302)
						fontList = Array_obj< ::String >::__new().Add(tmp12);
					}
				}
				else{
					HX_STACK_LINE(308)
					Dynamic tmp11 = format->italic;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(308)
					if ((tmp11)){
						HX_STACK_LINE(310)
						::String tmp12 = (systemFontDirectory + HX_HCSTRING("/couri.ttf","\xa9","\xa5","\xb8","\xd7"));		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(310)
						fontList = Array_obj< ::String >::__new().Add(tmp12);
					}
					else{
						HX_STACK_LINE(314)
						::String tmp12 = (systemFontDirectory + HX_HCSTRING("/cour.ttf","\x30","\x7b","\xd2","\x6a"));		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(314)
						fontList = Array_obj< ::String >::__new().Add(tmp12);
					}
				}
			}
			else  {
				HX_STACK_LINE(331)
				::String tmp10 = (systemFontDirectory + HX_HCSTRING("/","\x2f","\x00","\x00","\x00"));		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(331)
				::String tmp11 = format->font;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(331)
				::String tmp12 = (tmp10 + tmp11);		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(331)
				fontList = Array_obj< ::String >::__new().Add(tmp12);
			}
;
;
		}
		HX_STACK_LINE(348)
		bool tmp9 = (fontList != null());		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(348)
		if ((tmp9)){
			HX_STACK_LINE(350)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(350)
			while((true)){
				HX_STACK_LINE(350)
				bool tmp10 = (_g < fontList->length);		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(350)
				bool tmp11 = !(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(350)
				if ((tmp11)){
					HX_STACK_LINE(350)
					break;
				}
				HX_STACK_LINE(350)
				::String tmp12 = fontList->__get(_g);		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(350)
				::String font = tmp12;		HX_STACK_VAR(font,"font");
				HX_STACK_LINE(350)
				++(_g);
				HX_STACK_LINE(352)
				::String tmp13 = font;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(352)
				::openfl::text::Font tmp14 = ::openfl::_internal::text::TextEngine_obj::findFont(tmp13);		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(352)
				instance = tmp14;
				HX_STACK_LINE(354)
				bool tmp15 = (instance != null());		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(354)
				if ((tmp15)){
					HX_STACK_LINE(356)
					::haxe::ds::StringMap tmp16 = ::openfl::_internal::text::TextEngine_obj::__defaultFonts;		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(356)
					::String tmp17 = format->font;		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(356)
					::openfl::text::Font tmp18 = instance;		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(356)
					tmp16->set(tmp17,tmp18);
					HX_STACK_LINE(357)
					::openfl::text::Font tmp19 = instance;		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(357)
					return tmp19;
				}
			}
		}
		HX_STACK_LINE(365)
		::openfl::text::Font tmp10 = ::openfl::_internal::text::TextEngine_obj::findFont(HX_HCSTRING("_serif","\xbe","\x66","\x15","\x76"));		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(365)
		instance = tmp10;
		HX_STACK_LINE(366)
		bool tmp11 = (instance != null());		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(366)
		if ((tmp11)){
			HX_STACK_LINE(366)
			::openfl::text::Font tmp12 = instance;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(366)
			return tmp12;
		}
	}
	HX_STACK_LINE(370)
	::String tmp2 = ::lime::_system::System_obj::get_fontsDirectory();		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(370)
	::String systemFontDirectory = tmp2;		HX_STACK_VAR(systemFontDirectory,"systemFontDirectory");
	HX_STACK_LINE(373)
	Dynamic tmp3 = format->bold;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(373)
	if ((tmp3)){
		HX_STACK_LINE(375)
		Dynamic tmp4 = format->italic;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(375)
		if ((tmp4)){
			HX_STACK_LINE(377)
			::String tmp5 = (systemFontDirectory + HX_HCSTRING("/timesbi.ttf","\x36","\x79","\x1a","\x28"));		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(377)
			fontList = Array_obj< ::String >::__new().Add(tmp5);
		}
		else{
			HX_STACK_LINE(381)
			::String tmp5 = (systemFontDirectory + HX_HCSTRING("/timesb.ttf","\x43","\x18","\x1a","\x99"));		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(381)
			fontList = Array_obj< ::String >::__new().Add(tmp5);
		}
	}
	else{
		HX_STACK_LINE(387)
		Dynamic tmp4 = format->italic;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(387)
		if ((tmp4)){
			HX_STACK_LINE(389)
			::String tmp5 = (systemFontDirectory + HX_HCSTRING("/timesi.ttf","\xca","\x27","\xe8","\xa0"));		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(389)
			fontList = Array_obj< ::String >::__new().Add(tmp5);
		}
		else{
			HX_STACK_LINE(393)
			::String tmp5 = (systemFontDirectory + HX_HCSTRING("/times.ttf","\x2f","\x58","\x44","\xc5"));		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(393)
			fontList = Array_obj< ::String >::__new().Add(tmp5);
		}
	}
	HX_STACK_LINE(410)
	{
		HX_STACK_LINE(410)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(410)
		while((true)){
			HX_STACK_LINE(410)
			bool tmp4 = (_g < fontList->length);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(410)
			bool tmp5 = !(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(410)
			if ((tmp5)){
				HX_STACK_LINE(410)
				break;
			}
			HX_STACK_LINE(410)
			::String tmp6 = fontList->__get(_g);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(410)
			::String font = tmp6;		HX_STACK_VAR(font,"font");
			HX_STACK_LINE(410)
			++(_g);
			HX_STACK_LINE(412)
			::String tmp7 = font;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(412)
			::openfl::text::Font tmp8 = ::openfl::_internal::text::TextEngine_obj::findFont(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(412)
			instance = tmp8;
			HX_STACK_LINE(414)
			bool tmp9 = (instance != null());		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(414)
			if ((tmp9)){
				HX_STACK_LINE(416)
				::haxe::ds::StringMap tmp10 = ::openfl::_internal::text::TextEngine_obj::__defaultFonts;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(416)
				::String tmp11 = format->font;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(416)
				::openfl::text::Font tmp12 = instance;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(416)
				tmp10->set(tmp11,tmp12);
				HX_STACK_LINE(417)
				::openfl::text::Font tmp13 = instance;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(417)
				return tmp13;
			}
		}
	}
	HX_STACK_LINE(423)
	::haxe::ds::StringMap tmp4 = ::openfl::_internal::text::TextEngine_obj::__defaultFonts;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(423)
	::String tmp5 = format->font;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(423)
	tmp4->set(tmp5,null());
	HX_STACK_LINE(427)
	return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(TextEngine_obj,getFontInstance,return )


TextEngine_obj::TextEngine_obj()
{
}

void TextEngine_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(TextEngine);
	HX_MARK_MEMBER_NAME(antiAliasType,"antiAliasType");
	HX_MARK_MEMBER_NAME(autoSize,"autoSize");
	HX_MARK_MEMBER_NAME(background,"background");
	HX_MARK_MEMBER_NAME(backgroundColor,"backgroundColor");
	HX_MARK_MEMBER_NAME(border,"border");
	HX_MARK_MEMBER_NAME(borderColor,"borderColor");
	HX_MARK_MEMBER_NAME(bottomScrollV,"bottomScrollV");
	HX_MARK_MEMBER_NAME(bounds,"bounds");
	HX_MARK_MEMBER_NAME(caretIndex,"caretIndex");
	HX_MARK_MEMBER_NAME(displayAsPassword,"displayAsPassword");
	HX_MARK_MEMBER_NAME(embedFonts,"embedFonts");
	HX_MARK_MEMBER_NAME(gridFitType,"gridFitType");
	HX_MARK_MEMBER_NAME(height,"height");
	HX_MARK_MEMBER_NAME(layoutGroups,"layoutGroups");
	HX_MARK_MEMBER_NAME(lineAscents,"lineAscents");
	HX_MARK_MEMBER_NAME(lineBreaks,"lineBreaks");
	HX_MARK_MEMBER_NAME(lineDescents,"lineDescents");
	HX_MARK_MEMBER_NAME(lineLeadings,"lineLeadings");
	HX_MARK_MEMBER_NAME(lineHeights,"lineHeights");
	HX_MARK_MEMBER_NAME(lineWidths,"lineWidths");
	HX_MARK_MEMBER_NAME(maxChars,"maxChars");
	HX_MARK_MEMBER_NAME(maxScrollH,"maxScrollH");
	HX_MARK_MEMBER_NAME(maxScrollV,"maxScrollV");
	HX_MARK_MEMBER_NAME(multiline,"multiline");
	HX_MARK_MEMBER_NAME(numLines,"numLines");
	HX_MARK_MEMBER_NAME(restrict,"restrict");
	HX_MARK_MEMBER_NAME(scrollH,"scrollH");
	HX_MARK_MEMBER_NAME(scrollV,"scrollV");
	HX_MARK_MEMBER_NAME(selectable,"selectable");
	HX_MARK_MEMBER_NAME(sharpness,"sharpness");
	HX_MARK_MEMBER_NAME(text,"text");
	HX_MARK_MEMBER_NAME(textHeight,"textHeight");
	HX_MARK_MEMBER_NAME(textFormatRanges,"textFormatRanges");
	HX_MARK_MEMBER_NAME(textWidth,"textWidth");
	HX_MARK_MEMBER_NAME(type,"type");
	HX_MARK_MEMBER_NAME(width,"width");
	HX_MARK_MEMBER_NAME(wordWrap,"wordWrap");
	HX_MARK_MEMBER_NAME(textField,"textField");
	HX_MARK_MEMBER_NAME(__cursorPosition,"__cursorPosition");
	HX_MARK_MEMBER_NAME(__cursorTimer,"__cursorTimer");
	HX_MARK_MEMBER_NAME(__hasFocus,"__hasFocus");
	HX_MARK_MEMBER_NAME(__isKeyDown,"__isKeyDown");
	HX_MARK_MEMBER_NAME(__measuredHeight,"__measuredHeight");
	HX_MARK_MEMBER_NAME(__measuredWidth,"__measuredWidth");
	HX_MARK_MEMBER_NAME(__selectionStart,"__selectionStart");
	HX_MARK_MEMBER_NAME(__showCursor,"__showCursor");
	HX_MARK_MEMBER_NAME(__textFormat,"__textFormat");
	HX_MARK_MEMBER_NAME(__textLayout,"__textLayout");
	HX_MARK_MEMBER_NAME(__texture,"__texture");
	HX_MARK_MEMBER_NAME(__tileData,"__tileData");
	HX_MARK_MEMBER_NAME(__tileDataLength,"__tileDataLength");
	HX_MARK_MEMBER_NAME(__tilesheets,"__tilesheets");
	HX_MARK_MEMBER_NAME(__cairoFont,"__cairoFont");
	HX_MARK_END_CLASS();
}

void TextEngine_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(antiAliasType,"antiAliasType");
	HX_VISIT_MEMBER_NAME(autoSize,"autoSize");
	HX_VISIT_MEMBER_NAME(background,"background");
	HX_VISIT_MEMBER_NAME(backgroundColor,"backgroundColor");
	HX_VISIT_MEMBER_NAME(border,"border");
	HX_VISIT_MEMBER_NAME(borderColor,"borderColor");
	HX_VISIT_MEMBER_NAME(bottomScrollV,"bottomScrollV");
	HX_VISIT_MEMBER_NAME(bounds,"bounds");
	HX_VISIT_MEMBER_NAME(caretIndex,"caretIndex");
	HX_VISIT_MEMBER_NAME(displayAsPassword,"displayAsPassword");
	HX_VISIT_MEMBER_NAME(embedFonts,"embedFonts");
	HX_VISIT_MEMBER_NAME(gridFitType,"gridFitType");
	HX_VISIT_MEMBER_NAME(height,"height");
	HX_VISIT_MEMBER_NAME(layoutGroups,"layoutGroups");
	HX_VISIT_MEMBER_NAME(lineAscents,"lineAscents");
	HX_VISIT_MEMBER_NAME(lineBreaks,"lineBreaks");
	HX_VISIT_MEMBER_NAME(lineDescents,"lineDescents");
	HX_VISIT_MEMBER_NAME(lineLeadings,"lineLeadings");
	HX_VISIT_MEMBER_NAME(lineHeights,"lineHeights");
	HX_VISIT_MEMBER_NAME(lineWidths,"lineWidths");
	HX_VISIT_MEMBER_NAME(maxChars,"maxChars");
	HX_VISIT_MEMBER_NAME(maxScrollH,"maxScrollH");
	HX_VISIT_MEMBER_NAME(maxScrollV,"maxScrollV");
	HX_VISIT_MEMBER_NAME(multiline,"multiline");
	HX_VISIT_MEMBER_NAME(numLines,"numLines");
	HX_VISIT_MEMBER_NAME(restrict,"restrict");
	HX_VISIT_MEMBER_NAME(scrollH,"scrollH");
	HX_VISIT_MEMBER_NAME(scrollV,"scrollV");
	HX_VISIT_MEMBER_NAME(selectable,"selectable");
	HX_VISIT_MEMBER_NAME(sharpness,"sharpness");
	HX_VISIT_MEMBER_NAME(text,"text");
	HX_VISIT_MEMBER_NAME(textHeight,"textHeight");
	HX_VISIT_MEMBER_NAME(textFormatRanges,"textFormatRanges");
	HX_VISIT_MEMBER_NAME(textWidth,"textWidth");
	HX_VISIT_MEMBER_NAME(type,"type");
	HX_VISIT_MEMBER_NAME(width,"width");
	HX_VISIT_MEMBER_NAME(wordWrap,"wordWrap");
	HX_VISIT_MEMBER_NAME(textField,"textField");
	HX_VISIT_MEMBER_NAME(__cursorPosition,"__cursorPosition");
	HX_VISIT_MEMBER_NAME(__cursorTimer,"__cursorTimer");
	HX_VISIT_MEMBER_NAME(__hasFocus,"__hasFocus");
	HX_VISIT_MEMBER_NAME(__isKeyDown,"__isKeyDown");
	HX_VISIT_MEMBER_NAME(__measuredHeight,"__measuredHeight");
	HX_VISIT_MEMBER_NAME(__measuredWidth,"__measuredWidth");
	HX_VISIT_MEMBER_NAME(__selectionStart,"__selectionStart");
	HX_VISIT_MEMBER_NAME(__showCursor,"__showCursor");
	HX_VISIT_MEMBER_NAME(__textFormat,"__textFormat");
	HX_VISIT_MEMBER_NAME(__textLayout,"__textLayout");
	HX_VISIT_MEMBER_NAME(__texture,"__texture");
	HX_VISIT_MEMBER_NAME(__tileData,"__tileData");
	HX_VISIT_MEMBER_NAME(__tileDataLength,"__tileDataLength");
	HX_VISIT_MEMBER_NAME(__tilesheets,"__tilesheets");
	HX_VISIT_MEMBER_NAME(__cairoFont,"__cairoFont");
}

Dynamic TextEngine_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"text") ) { return text; }
		if (HX_FIELD_EQ(inName,"type") ) { return type; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"width") ) { return width; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"border") ) { return border; }
		if (HX_FIELD_EQ(inName,"bounds") ) { return bounds; }
		if (HX_FIELD_EQ(inName,"height") ) { return height; }
		if (HX_FIELD_EQ(inName,"update") ) { return update_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"scrollH") ) { return scrollH; }
		if (HX_FIELD_EQ(inName,"scrollV") ) { return scrollV; }
		if (HX_FIELD_EQ(inName,"getLine") ) { return getLine_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"autoSize") ) { return autoSize; }
		if (HX_FIELD_EQ(inName,"maxChars") ) { return maxChars; }
		if (HX_FIELD_EQ(inName,"numLines") ) { return numLines; }
		if (HX_FIELD_EQ(inName,"restrict") ) { return restrict; }
		if (HX_FIELD_EQ(inName,"wordWrap") ) { return wordWrap; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"multiline") ) { return multiline; }
		if (HX_FIELD_EQ(inName,"sharpness") ) { return sharpness; }
		if (HX_FIELD_EQ(inName,"textWidth") ) { return textWidth; }
		if (HX_FIELD_EQ(inName,"textField") ) { return textField; }
		if (HX_FIELD_EQ(inName,"__texture") ) { return __texture; }
		if (HX_FIELD_EQ(inName,"getBounds") ) { return getBounds_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"background") ) { return background; }
		if (HX_FIELD_EQ(inName,"caretIndex") ) { return caretIndex; }
		if (HX_FIELD_EQ(inName,"embedFonts") ) { return embedFonts; }
		if (HX_FIELD_EQ(inName,"lineBreaks") ) { return lineBreaks; }
		if (HX_FIELD_EQ(inName,"lineWidths") ) { return lineWidths; }
		if (HX_FIELD_EQ(inName,"maxScrollH") ) { return maxScrollH; }
		if (HX_FIELD_EQ(inName,"maxScrollV") ) { return maxScrollV; }
		if (HX_FIELD_EQ(inName,"selectable") ) { return selectable; }
		if (HX_FIELD_EQ(inName,"textHeight") ) { return textHeight; }
		if (HX_FIELD_EQ(inName,"__hasFocus") ) { return __hasFocus; }
		if (HX_FIELD_EQ(inName,"__tileData") ) { return __tileData; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"borderColor") ) { return borderColor; }
		if (HX_FIELD_EQ(inName,"gridFitType") ) { return gridFitType; }
		if (HX_FIELD_EQ(inName,"lineAscents") ) { return lineAscents; }
		if (HX_FIELD_EQ(inName,"lineHeights") ) { return lineHeights; }
		if (HX_FIELD_EQ(inName,"__isKeyDown") ) { return __isKeyDown; }
		if (HX_FIELD_EQ(inName,"__cairoFont") ) { return __cairoFont; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"layoutGroups") ) { return layoutGroups; }
		if (HX_FIELD_EQ(inName,"lineDescents") ) { return lineDescents; }
		if (HX_FIELD_EQ(inName,"lineLeadings") ) { return lineLeadings; }
		if (HX_FIELD_EQ(inName,"__showCursor") ) { return __showCursor; }
		if (HX_FIELD_EQ(inName,"__textFormat") ) { return __textFormat; }
		if (HX_FIELD_EQ(inName,"__textLayout") ) { return __textLayout; }
		if (HX_FIELD_EQ(inName,"__tilesheets") ) { return __tilesheets; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"antiAliasType") ) { return antiAliasType; }
		if (HX_FIELD_EQ(inName,"bottomScrollV") ) { return bottomScrollV; }
		if (HX_FIELD_EQ(inName,"__cursorTimer") ) { return __cursorTimer; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"backgroundColor") ) { return backgroundColor; }
		if (HX_FIELD_EQ(inName,"__measuredWidth") ) { return __measuredWidth; }
		if (HX_FIELD_EQ(inName,"getLayoutGroups") ) { return getLayoutGroups_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"textFormatRanges") ) { return textFormatRanges; }
		if (HX_FIELD_EQ(inName,"__cursorPosition") ) { return __cursorPosition; }
		if (HX_FIELD_EQ(inName,"__measuredHeight") ) { return __measuredHeight; }
		if (HX_FIELD_EQ(inName,"__selectionStart") ) { return __selectionStart; }
		if (HX_FIELD_EQ(inName,"__tileDataLength") ) { return __tileDataLength; }
		if (HX_FIELD_EQ(inName,"setTextAlignment") ) { return setTextAlignment_dyn(); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"displayAsPassword") ) { return displayAsPassword; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"getLineMeasurements") ) { return getLineMeasurements_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

bool TextEngine_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"getFont") ) { outValue = getFont_dyn(); return true;  }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"findFont") ) { outValue = findFont_dyn(); return true;  }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"__defaultFonts") ) { outValue = __defaultFonts; return true;  }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"getFontInstance") ) { outValue = getFontInstance_dyn(); return true;  }
	}
	return false;
}

Dynamic TextEngine_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"text") ) { text=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"type") ) { type=inValue.Cast< ::openfl::text::TextFieldType >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"width") ) { width=inValue.Cast< Float >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"border") ) { border=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"bounds") ) { bounds=inValue.Cast< ::openfl::geom::Rectangle >(); return inValue; }
		if (HX_FIELD_EQ(inName,"height") ) { height=inValue.Cast< Float >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"scrollH") ) { scrollH=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"scrollV") ) { scrollV=inValue.Cast< int >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"autoSize") ) { autoSize=inValue.Cast< ::openfl::text::TextFieldAutoSize >(); return inValue; }
		if (HX_FIELD_EQ(inName,"maxChars") ) { maxChars=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"numLines") ) { numLines=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"restrict") ) { restrict=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"wordWrap") ) { wordWrap=inValue.Cast< bool >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"multiline") ) { multiline=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"sharpness") ) { sharpness=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"textWidth") ) { textWidth=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"textField") ) { textField=inValue.Cast< ::openfl::text::TextField >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__texture") ) { __texture=inValue.Cast< ::lime::graphics::opengl::GLTexture >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"background") ) { background=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"caretIndex") ) { caretIndex=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"embedFonts") ) { embedFonts=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"lineBreaks") ) { lineBreaks=inValue.Cast< Array< int > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"lineWidths") ) { lineWidths=inValue.Cast< Array< Float > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"maxScrollH") ) { maxScrollH=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"maxScrollV") ) { maxScrollV=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"selectable") ) { selectable=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"textHeight") ) { textHeight=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__hasFocus") ) { __hasFocus=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__tileData") ) { __tileData=inValue.Cast< ::haxe::ds::ObjectMap >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"borderColor") ) { borderColor=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"gridFitType") ) { gridFitType=inValue.Cast< ::openfl::text::GridFitType >(); return inValue; }
		if (HX_FIELD_EQ(inName,"lineAscents") ) { lineAscents=inValue.Cast< Array< Float > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"lineHeights") ) { lineHeights=inValue.Cast< Array< Float > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__isKeyDown") ) { __isKeyDown=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__cairoFont") ) { __cairoFont=inValue.Cast< ::lime::graphics::cairo::CairoFont >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"layoutGroups") ) { layoutGroups=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"lineDescents") ) { lineDescents=inValue.Cast< Array< Float > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"lineLeadings") ) { lineLeadings=inValue.Cast< Array< Float > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__showCursor") ) { __showCursor=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__textFormat") ) { __textFormat=inValue.Cast< ::openfl::text::TextFormat >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__textLayout") ) { __textLayout=inValue.Cast< ::lime::text::TextLayout >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__tilesheets") ) { __tilesheets=inValue.Cast< ::haxe::ds::ObjectMap >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"antiAliasType") ) { antiAliasType=inValue.Cast< ::openfl::text::AntiAliasType >(); return inValue; }
		if (HX_FIELD_EQ(inName,"bottomScrollV") ) { bottomScrollV=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__cursorTimer") ) { __cursorTimer=inValue.Cast< ::haxe::Timer >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"backgroundColor") ) { backgroundColor=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__measuredWidth") ) { __measuredWidth=inValue.Cast< int >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"textFormatRanges") ) { textFormatRanges=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__cursorPosition") ) { __cursorPosition=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__measuredHeight") ) { __measuredHeight=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__selectionStart") ) { __selectionStart=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__tileDataLength") ) { __tileDataLength=inValue.Cast< ::haxe::ds::ObjectMap >(); return inValue; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"displayAsPassword") ) { displayAsPassword=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool TextEngine_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 14:
		if (HX_FIELD_EQ(inName,"__defaultFonts") ) { __defaultFonts=ioValue.Cast< ::haxe::ds::StringMap >(); return true; }
	}
	return false;
}

void TextEngine_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("antiAliasType","\x68","\xc4","\xfa","\xe7"));
	outFields->push(HX_HCSTRING("autoSize","\xd0","\x8f","\x79","\x2f"));
	outFields->push(HX_HCSTRING("background","\xee","\x93","\x1d","\x26"));
	outFields->push(HX_HCSTRING("backgroundColor","\x95","\x4e","\x47","\x0d"));
	outFields->push(HX_HCSTRING("border","\xec","\x4c","\x1a","\x64"));
	outFields->push(HX_HCSTRING("borderColor","\xd7","\x3c","\xd5","\xd6"));
	outFields->push(HX_HCSTRING("bottomScrollV","\xfe","\xf7","\x87","\x8b"));
	outFields->push(HX_HCSTRING("bounds","\x75","\x86","\x1d","\x66"));
	outFields->push(HX_HCSTRING("caretIndex","\x8f","\xb6","\x5b","\xdd"));
	outFields->push(HX_HCSTRING("displayAsPassword","\x0f","\xcb","\x96","\xea"));
	outFields->push(HX_HCSTRING("embedFonts","\x2b","\xc7","\xe1","\x8e"));
	outFields->push(HX_HCSTRING("gridFitType","\x05","\xf3","\x13","\xb4"));
	outFields->push(HX_HCSTRING("height","\xe7","\x07","\x4c","\x02"));
	outFields->push(HX_HCSTRING("layoutGroups","\x9e","\xa2","\x6c","\x37"));
	outFields->push(HX_HCSTRING("lineAscents","\x45","\x0c","\xc2","\x3e"));
	outFields->push(HX_HCSTRING("lineBreaks","\xe8","\xfd","\x5b","\xea"));
	outFields->push(HX_HCSTRING("lineDescents","\x0d","\xad","\x64","\x49"));
	outFields->push(HX_HCSTRING("lineLeadings","\x01","\x23","\x97","\x76"));
	outFields->push(HX_HCSTRING("lineHeights","\x18","\x99","\x8e","\x3e"));
	outFields->push(HX_HCSTRING("lineWidths","\xc1","\x8a","\xa4","\x20"));
	outFields->push(HX_HCSTRING("maxChars","\x99","\xef","\xd0","\xef"));
	outFields->push(HX_HCSTRING("maxScrollH","\x57","\xad","\xfc","\x9a"));
	outFields->push(HX_HCSTRING("maxScrollV","\x65","\xad","\xfc","\x9a"));
	outFields->push(HX_HCSTRING("multiline","\xed","\xd2","\x11","\x9e"));
	outFields->push(HX_HCSTRING("numLines","\xd9","\xf1","\x11","\x32"));
	outFields->push(HX_HCSTRING("restrict","\x3c","\xcb","\x9e","\xf1"));
	outFields->push(HX_HCSTRING("scrollH","\x9b","\x33","\xd8","\x30"));
	outFields->push(HX_HCSTRING("scrollV","\xa9","\x33","\xd8","\x30"));
	outFields->push(HX_HCSTRING("selectable","\x96","\xb6","\x2a","\xc4"));
	outFields->push(HX_HCSTRING("sharpness","\x81","\x22","\x25","\x1b"));
	outFields->push(HX_HCSTRING("text","\xad","\xcc","\xf9","\x4c"));
	outFields->push(HX_HCSTRING("textHeight","\x74","\x88","\x3c","\x39"));
	outFields->push(HX_HCSTRING("textFormatRanges","\xfa","\x0e","\x49","\xa2"));
	outFields->push(HX_HCSTRING("textWidth","\x19","\x46","\x50","\x63"));
	outFields->push(HX_HCSTRING("type","\xba","\xf2","\x08","\x4d"));
	outFields->push(HX_HCSTRING("width","\x06","\xb6","\x62","\xca"));
	outFields->push(HX_HCSTRING("wordWrap","\xb4","\x14","\xdb","\x00"));
	outFields->push(HX_HCSTRING("textField","\xcd","\x24","\x81","\x99"));
	outFields->push(HX_HCSTRING("__cursorPosition","\xbf","\x3c","\xe0","\x7d"));
	outFields->push(HX_HCSTRING("__cursorTimer","\xef","\x59","\x8f","\xe1"));
	outFields->push(HX_HCSTRING("__hasFocus","\x3e","\x1d","\x1a","\x34"));
	outFields->push(HX_HCSTRING("__isKeyDown","\xb7","\x2f","\x72","\xce"));
	outFields->push(HX_HCSTRING("__measuredHeight","\xed","\xb6","\x23","\x42"));
	outFields->push(HX_HCSTRING("__measuredWidth","\xc0","\x49","\xec","\x02"));
	outFields->push(HX_HCSTRING("__selectionStart","\x96","\xe3","\xb9","\x43"));
	outFields->push(HX_HCSTRING("__showCursor","\xd3","\xae","\xf0","\xe0"));
	outFields->push(HX_HCSTRING("__textFormat","\xe4","\x8a","\x12","\x6d"));
	outFields->push(HX_HCSTRING("__textLayout","\x57","\xaa","\x3c","\xc8"));
	outFields->push(HX_HCSTRING("__texture","\xbb","\x19","\x2f","\x20"));
	outFields->push(HX_HCSTRING("__tileData","\x98","\xef","\xa1","\x1f"));
	outFields->push(HX_HCSTRING("__tileDataLength","\x9e","\xba","\x99","\x1c"));
	outFields->push(HX_HCSTRING("__tilesheets","\xc2","\x45","\x5c","\x88"));
	outFields->push(HX_HCSTRING("__cairoFont","\x57","\xe7","\xb5","\x28"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::openfl::text::AntiAliasType*/ ,(int)offsetof(TextEngine_obj,antiAliasType),HX_HCSTRING("antiAliasType","\x68","\xc4","\xfa","\xe7")},
	{hx::fsObject /*::openfl::text::TextFieldAutoSize*/ ,(int)offsetof(TextEngine_obj,autoSize),HX_HCSTRING("autoSize","\xd0","\x8f","\x79","\x2f")},
	{hx::fsBool,(int)offsetof(TextEngine_obj,background),HX_HCSTRING("background","\xee","\x93","\x1d","\x26")},
	{hx::fsInt,(int)offsetof(TextEngine_obj,backgroundColor),HX_HCSTRING("backgroundColor","\x95","\x4e","\x47","\x0d")},
	{hx::fsBool,(int)offsetof(TextEngine_obj,border),HX_HCSTRING("border","\xec","\x4c","\x1a","\x64")},
	{hx::fsInt,(int)offsetof(TextEngine_obj,borderColor),HX_HCSTRING("borderColor","\xd7","\x3c","\xd5","\xd6")},
	{hx::fsInt,(int)offsetof(TextEngine_obj,bottomScrollV),HX_HCSTRING("bottomScrollV","\xfe","\xf7","\x87","\x8b")},
	{hx::fsObject /*::openfl::geom::Rectangle*/ ,(int)offsetof(TextEngine_obj,bounds),HX_HCSTRING("bounds","\x75","\x86","\x1d","\x66")},
	{hx::fsInt,(int)offsetof(TextEngine_obj,caretIndex),HX_HCSTRING("caretIndex","\x8f","\xb6","\x5b","\xdd")},
	{hx::fsBool,(int)offsetof(TextEngine_obj,displayAsPassword),HX_HCSTRING("displayAsPassword","\x0f","\xcb","\x96","\xea")},
	{hx::fsBool,(int)offsetof(TextEngine_obj,embedFonts),HX_HCSTRING("embedFonts","\x2b","\xc7","\xe1","\x8e")},
	{hx::fsObject /*::openfl::text::GridFitType*/ ,(int)offsetof(TextEngine_obj,gridFitType),HX_HCSTRING("gridFitType","\x05","\xf3","\x13","\xb4")},
	{hx::fsFloat,(int)offsetof(TextEngine_obj,height),HX_HCSTRING("height","\xe7","\x07","\x4c","\x02")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(TextEngine_obj,layoutGroups),HX_HCSTRING("layoutGroups","\x9e","\xa2","\x6c","\x37")},
	{hx::fsObject /*Array< Float >*/ ,(int)offsetof(TextEngine_obj,lineAscents),HX_HCSTRING("lineAscents","\x45","\x0c","\xc2","\x3e")},
	{hx::fsObject /*Array< int >*/ ,(int)offsetof(TextEngine_obj,lineBreaks),HX_HCSTRING("lineBreaks","\xe8","\xfd","\x5b","\xea")},
	{hx::fsObject /*Array< Float >*/ ,(int)offsetof(TextEngine_obj,lineDescents),HX_HCSTRING("lineDescents","\x0d","\xad","\x64","\x49")},
	{hx::fsObject /*Array< Float >*/ ,(int)offsetof(TextEngine_obj,lineLeadings),HX_HCSTRING("lineLeadings","\x01","\x23","\x97","\x76")},
	{hx::fsObject /*Array< Float >*/ ,(int)offsetof(TextEngine_obj,lineHeights),HX_HCSTRING("lineHeights","\x18","\x99","\x8e","\x3e")},
	{hx::fsObject /*Array< Float >*/ ,(int)offsetof(TextEngine_obj,lineWidths),HX_HCSTRING("lineWidths","\xc1","\x8a","\xa4","\x20")},
	{hx::fsInt,(int)offsetof(TextEngine_obj,maxChars),HX_HCSTRING("maxChars","\x99","\xef","\xd0","\xef")},
	{hx::fsInt,(int)offsetof(TextEngine_obj,maxScrollH),HX_HCSTRING("maxScrollH","\x57","\xad","\xfc","\x9a")},
	{hx::fsInt,(int)offsetof(TextEngine_obj,maxScrollV),HX_HCSTRING("maxScrollV","\x65","\xad","\xfc","\x9a")},
	{hx::fsBool,(int)offsetof(TextEngine_obj,multiline),HX_HCSTRING("multiline","\xed","\xd2","\x11","\x9e")},
	{hx::fsInt,(int)offsetof(TextEngine_obj,numLines),HX_HCSTRING("numLines","\xd9","\xf1","\x11","\x32")},
	{hx::fsString,(int)offsetof(TextEngine_obj,restrict),HX_HCSTRING("restrict","\x3c","\xcb","\x9e","\xf1")},
	{hx::fsInt,(int)offsetof(TextEngine_obj,scrollH),HX_HCSTRING("scrollH","\x9b","\x33","\xd8","\x30")},
	{hx::fsInt,(int)offsetof(TextEngine_obj,scrollV),HX_HCSTRING("scrollV","\xa9","\x33","\xd8","\x30")},
	{hx::fsBool,(int)offsetof(TextEngine_obj,selectable),HX_HCSTRING("selectable","\x96","\xb6","\x2a","\xc4")},
	{hx::fsFloat,(int)offsetof(TextEngine_obj,sharpness),HX_HCSTRING("sharpness","\x81","\x22","\x25","\x1b")},
	{hx::fsString,(int)offsetof(TextEngine_obj,text),HX_HCSTRING("text","\xad","\xcc","\xf9","\x4c")},
	{hx::fsFloat,(int)offsetof(TextEngine_obj,textHeight),HX_HCSTRING("textHeight","\x74","\x88","\x3c","\x39")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(TextEngine_obj,textFormatRanges),HX_HCSTRING("textFormatRanges","\xfa","\x0e","\x49","\xa2")},
	{hx::fsFloat,(int)offsetof(TextEngine_obj,textWidth),HX_HCSTRING("textWidth","\x19","\x46","\x50","\x63")},
	{hx::fsObject /*::openfl::text::TextFieldType*/ ,(int)offsetof(TextEngine_obj,type),HX_HCSTRING("type","\xba","\xf2","\x08","\x4d")},
	{hx::fsFloat,(int)offsetof(TextEngine_obj,width),HX_HCSTRING("width","\x06","\xb6","\x62","\xca")},
	{hx::fsBool,(int)offsetof(TextEngine_obj,wordWrap),HX_HCSTRING("wordWrap","\xb4","\x14","\xdb","\x00")},
	{hx::fsObject /*::openfl::text::TextField*/ ,(int)offsetof(TextEngine_obj,textField),HX_HCSTRING("textField","\xcd","\x24","\x81","\x99")},
	{hx::fsInt,(int)offsetof(TextEngine_obj,__cursorPosition),HX_HCSTRING("__cursorPosition","\xbf","\x3c","\xe0","\x7d")},
	{hx::fsObject /*::haxe::Timer*/ ,(int)offsetof(TextEngine_obj,__cursorTimer),HX_HCSTRING("__cursorTimer","\xef","\x59","\x8f","\xe1")},
	{hx::fsBool,(int)offsetof(TextEngine_obj,__hasFocus),HX_HCSTRING("__hasFocus","\x3e","\x1d","\x1a","\x34")},
	{hx::fsBool,(int)offsetof(TextEngine_obj,__isKeyDown),HX_HCSTRING("__isKeyDown","\xb7","\x2f","\x72","\xce")},
	{hx::fsInt,(int)offsetof(TextEngine_obj,__measuredHeight),HX_HCSTRING("__measuredHeight","\xed","\xb6","\x23","\x42")},
	{hx::fsInt,(int)offsetof(TextEngine_obj,__measuredWidth),HX_HCSTRING("__measuredWidth","\xc0","\x49","\xec","\x02")},
	{hx::fsInt,(int)offsetof(TextEngine_obj,__selectionStart),HX_HCSTRING("__selectionStart","\x96","\xe3","\xb9","\x43")},
	{hx::fsBool,(int)offsetof(TextEngine_obj,__showCursor),HX_HCSTRING("__showCursor","\xd3","\xae","\xf0","\xe0")},
	{hx::fsObject /*::openfl::text::TextFormat*/ ,(int)offsetof(TextEngine_obj,__textFormat),HX_HCSTRING("__textFormat","\xe4","\x8a","\x12","\x6d")},
	{hx::fsObject /*::lime::text::TextLayout*/ ,(int)offsetof(TextEngine_obj,__textLayout),HX_HCSTRING("__textLayout","\x57","\xaa","\x3c","\xc8")},
	{hx::fsObject /*::lime::graphics::opengl::GLTexture*/ ,(int)offsetof(TextEngine_obj,__texture),HX_HCSTRING("__texture","\xbb","\x19","\x2f","\x20")},
	{hx::fsObject /*::haxe::ds::ObjectMap*/ ,(int)offsetof(TextEngine_obj,__tileData),HX_HCSTRING("__tileData","\x98","\xef","\xa1","\x1f")},
	{hx::fsObject /*::haxe::ds::ObjectMap*/ ,(int)offsetof(TextEngine_obj,__tileDataLength),HX_HCSTRING("__tileDataLength","\x9e","\xba","\x99","\x1c")},
	{hx::fsObject /*::haxe::ds::ObjectMap*/ ,(int)offsetof(TextEngine_obj,__tilesheets),HX_HCSTRING("__tilesheets","\xc2","\x45","\x5c","\x88")},
	{hx::fsObject /*::lime::graphics::cairo::CairoFont*/ ,(int)offsetof(TextEngine_obj,__cairoFont),HX_HCSTRING("__cairoFont","\x57","\xe7","\xb5","\x28")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo sStaticStorageInfo[] = {
	{hx::fsInt,(void *) &TextEngine_obj::UTF8_TAB,HX_HCSTRING("UTF8_TAB","\x07","\xd5","\x41","\x1d")},
	{hx::fsInt,(void *) &TextEngine_obj::UTF8_ENDLINE,HX_HCSTRING("UTF8_ENDLINE","\x01","\x29","\x41","\xcf")},
	{hx::fsInt,(void *) &TextEngine_obj::UTF8_SPACE,HX_HCSTRING("UTF8_SPACE","\xf8","\x7b","\xa9","\xc7")},
	{hx::fsInt,(void *) &TextEngine_obj::UTF8_HYPHEN,HX_HCSTRING("UTF8_HYPHEN","\x60","\x3c","\x3f","\xbf")},
	{hx::fsObject /*::haxe::ds::StringMap*/ ,(void *) &TextEngine_obj::__defaultFonts,HX_HCSTRING("__defaultFonts","\x63","\x76","\xad","\xda")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("antiAliasType","\x68","\xc4","\xfa","\xe7"),
	HX_HCSTRING("autoSize","\xd0","\x8f","\x79","\x2f"),
	HX_HCSTRING("background","\xee","\x93","\x1d","\x26"),
	HX_HCSTRING("backgroundColor","\x95","\x4e","\x47","\x0d"),
	HX_HCSTRING("border","\xec","\x4c","\x1a","\x64"),
	HX_HCSTRING("borderColor","\xd7","\x3c","\xd5","\xd6"),
	HX_HCSTRING("bottomScrollV","\xfe","\xf7","\x87","\x8b"),
	HX_HCSTRING("bounds","\x75","\x86","\x1d","\x66"),
	HX_HCSTRING("caretIndex","\x8f","\xb6","\x5b","\xdd"),
	HX_HCSTRING("displayAsPassword","\x0f","\xcb","\x96","\xea"),
	HX_HCSTRING("embedFonts","\x2b","\xc7","\xe1","\x8e"),
	HX_HCSTRING("gridFitType","\x05","\xf3","\x13","\xb4"),
	HX_HCSTRING("height","\xe7","\x07","\x4c","\x02"),
	HX_HCSTRING("layoutGroups","\x9e","\xa2","\x6c","\x37"),
	HX_HCSTRING("lineAscents","\x45","\x0c","\xc2","\x3e"),
	HX_HCSTRING("lineBreaks","\xe8","\xfd","\x5b","\xea"),
	HX_HCSTRING("lineDescents","\x0d","\xad","\x64","\x49"),
	HX_HCSTRING("lineLeadings","\x01","\x23","\x97","\x76"),
	HX_HCSTRING("lineHeights","\x18","\x99","\x8e","\x3e"),
	HX_HCSTRING("lineWidths","\xc1","\x8a","\xa4","\x20"),
	HX_HCSTRING("maxChars","\x99","\xef","\xd0","\xef"),
	HX_HCSTRING("maxScrollH","\x57","\xad","\xfc","\x9a"),
	HX_HCSTRING("maxScrollV","\x65","\xad","\xfc","\x9a"),
	HX_HCSTRING("multiline","\xed","\xd2","\x11","\x9e"),
	HX_HCSTRING("numLines","\xd9","\xf1","\x11","\x32"),
	HX_HCSTRING("restrict","\x3c","\xcb","\x9e","\xf1"),
	HX_HCSTRING("scrollH","\x9b","\x33","\xd8","\x30"),
	HX_HCSTRING("scrollV","\xa9","\x33","\xd8","\x30"),
	HX_HCSTRING("selectable","\x96","\xb6","\x2a","\xc4"),
	HX_HCSTRING("sharpness","\x81","\x22","\x25","\x1b"),
	HX_HCSTRING("text","\xad","\xcc","\xf9","\x4c"),
	HX_HCSTRING("textHeight","\x74","\x88","\x3c","\x39"),
	HX_HCSTRING("textFormatRanges","\xfa","\x0e","\x49","\xa2"),
	HX_HCSTRING("textWidth","\x19","\x46","\x50","\x63"),
	HX_HCSTRING("type","\xba","\xf2","\x08","\x4d"),
	HX_HCSTRING("width","\x06","\xb6","\x62","\xca"),
	HX_HCSTRING("wordWrap","\xb4","\x14","\xdb","\x00"),
	HX_HCSTRING("textField","\xcd","\x24","\x81","\x99"),
	HX_HCSTRING("__cursorPosition","\xbf","\x3c","\xe0","\x7d"),
	HX_HCSTRING("__cursorTimer","\xef","\x59","\x8f","\xe1"),
	HX_HCSTRING("__hasFocus","\x3e","\x1d","\x1a","\x34"),
	HX_HCSTRING("__isKeyDown","\xb7","\x2f","\x72","\xce"),
	HX_HCSTRING("__measuredHeight","\xed","\xb6","\x23","\x42"),
	HX_HCSTRING("__measuredWidth","\xc0","\x49","\xec","\x02"),
	HX_HCSTRING("__selectionStart","\x96","\xe3","\xb9","\x43"),
	HX_HCSTRING("__showCursor","\xd3","\xae","\xf0","\xe0"),
	HX_HCSTRING("__textFormat","\xe4","\x8a","\x12","\x6d"),
	HX_HCSTRING("__textLayout","\x57","\xaa","\x3c","\xc8"),
	HX_HCSTRING("__texture","\xbb","\x19","\x2f","\x20"),
	HX_HCSTRING("__tileData","\x98","\xef","\xa1","\x1f"),
	HX_HCSTRING("__tileDataLength","\x9e","\xba","\x99","\x1c"),
	HX_HCSTRING("__tilesheets","\xc2","\x45","\x5c","\x88"),
	HX_HCSTRING("__cairoFont","\x57","\xe7","\xb5","\x28"),
	HX_HCSTRING("getBounds","\xab","\x0f","\x74","\xe2"),
	HX_HCSTRING("getLine","\xaa","\xc7","\x35","\x1a"),
	HX_HCSTRING("getLineMeasurements","\xc1","\x9f","\x81","\x56"),
	HX_HCSTRING("getLayoutGroups","\x54","\xf8","\x56","\x5a"),
	HX_HCSTRING("setTextAlignment","\x74","\x0f","\x33","\x62"),
	HX_HCSTRING("update","\x09","\x86","\x05","\x87"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(TextEngine_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(TextEngine_obj::UTF8_TAB,"UTF8_TAB");
	HX_MARK_MEMBER_NAME(TextEngine_obj::UTF8_ENDLINE,"UTF8_ENDLINE");
	HX_MARK_MEMBER_NAME(TextEngine_obj::UTF8_SPACE,"UTF8_SPACE");
	HX_MARK_MEMBER_NAME(TextEngine_obj::UTF8_HYPHEN,"UTF8_HYPHEN");
	HX_MARK_MEMBER_NAME(TextEngine_obj::__defaultFonts,"__defaultFonts");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(TextEngine_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(TextEngine_obj::UTF8_TAB,"UTF8_TAB");
	HX_VISIT_MEMBER_NAME(TextEngine_obj::UTF8_ENDLINE,"UTF8_ENDLINE");
	HX_VISIT_MEMBER_NAME(TextEngine_obj::UTF8_SPACE,"UTF8_SPACE");
	HX_VISIT_MEMBER_NAME(TextEngine_obj::UTF8_HYPHEN,"UTF8_HYPHEN");
	HX_VISIT_MEMBER_NAME(TextEngine_obj::__defaultFonts,"__defaultFonts");
};

#endif

hx::Class TextEngine_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("UTF8_TAB","\x07","\xd5","\x41","\x1d"),
	HX_HCSTRING("UTF8_ENDLINE","\x01","\x29","\x41","\xcf"),
	HX_HCSTRING("UTF8_SPACE","\xf8","\x7b","\xa9","\xc7"),
	HX_HCSTRING("UTF8_HYPHEN","\x60","\x3c","\x3f","\xbf"),
	HX_HCSTRING("__defaultFonts","\x63","\x76","\xad","\xda"),
	HX_HCSTRING("findFont","\xa8","\x6a","\x54","\x96"),
	HX_HCSTRING("getFont","\x85","\x0d","\x43","\x16"),
	HX_HCSTRING("getFontInstance","\x3a","\x76","\x96","\x9e"),
	::String(null()) };

void TextEngine_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("openfl._internal.text.TextEngine","\x60","\x7a","\x88","\xa0");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &TextEngine_obj::__GetStatic;
	__mClass->mSetStaticField = &TextEngine_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< TextEngine_obj >;
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

void TextEngine_obj::__boot()
{
	UTF8_TAB= (int)9;
	UTF8_ENDLINE= (int)10;
	UTF8_SPACE= (int)32;
	UTF8_HYPHEN= (int)45;
struct _Function_0_1{
	inline static ::haxe::ds::StringMap Block( ){
		HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","openfl/_internal/text/TextEngine.hx",51,0xdff93b7f)
		{
			HX_STACK_LINE(51)
			::haxe::ds::StringMap tmp = ::haxe::ds::StringMap_obj::__new();		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(51)
			::haxe::ds::StringMap tmp1 = tmp;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(51)
			return tmp1;
		}
		return null();
	}
};
	__defaultFonts= _Function_0_1::Block();
}

} // end namespace openfl
} // end namespace _internal
} // end namespace text
