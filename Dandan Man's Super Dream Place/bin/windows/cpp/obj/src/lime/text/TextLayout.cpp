#include <hxcpp.h>

#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
#endif
#ifndef INCLUDED_lime_math_Vector2
#include <lime/math/Vector2.h>
#endif
#ifndef INCLUDED_lime_system_Endian
#include <lime/system/Endian.h>
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
#ifndef INCLUDED_lime_utils_ByteArray
#include <lime/utils/ByteArray.h>
#endif
#ifndef INCLUDED_lime_utils_IDataInput
#include <lime/utils/IDataInput.h>
#endif
#ifndef INCLUDED_lime_utils_IMemoryRange
#include <lime/utils/IMemoryRange.h>
#endif
namespace lime{
namespace text{

Void TextLayout_obj::__construct(::String __o_text,::lime::text::Font font,hx::Null< int >  __o_size,hx::Null< int >  __o_direction,::String __o_script,::String __o_language)
{
HX_STACK_FRAME("lime.text.TextLayout","new",0xa8c39291,"lime.text.TextLayout.new","lime/text/TextLayout.hx",32,0x8df0119f)
HX_STACK_THIS(this)
HX_STACK_ARG(__o_text,"text")
HX_STACK_ARG(font,"font")
HX_STACK_ARG(__o_size,"size")
HX_STACK_ARG(__o_direction,"direction")
HX_STACK_ARG(__o_script,"script")
HX_STACK_ARG(__o_language,"language")
::String text = __o_text.Default(HX_HCSTRING("","\x00","\x00","\x00","\x00"));
int size = __o_size.Default(12);
int direction = __o_direction.Default(4);
::String script = __o_script.Default(HX_HCSTRING("Zyyy","\x7f","\x6e","\xd9","\x3b"));
::String language = __o_language.Default(HX_HCSTRING("en","\x69","\x58","\x00","\x00"));
{
	HX_STACK_LINE(34)
	::String tmp = text;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(34)
	this->set_text(tmp);
	HX_STACK_LINE(35)
	::lime::text::Font tmp1 = font;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(35)
	this->set_font(tmp1);
	HX_STACK_LINE(36)
	int tmp2 = size;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(36)
	this->set_size(tmp2);
	HX_STACK_LINE(37)
	this->__direction = direction;
	HX_STACK_LINE(38)
	this->__script = script;
	HX_STACK_LINE(39)
	this->__language = language;
	HX_STACK_LINE(41)
	this->positions = Array_obj< ::Dynamic >::__new();
	HX_STACK_LINE(42)
	this->__dirty = true;
	HX_STACK_LINE(45)
	int tmp3 = this->__direction;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(45)
	::String tmp4 = this->__script;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(45)
	::String tmp5 = this->__language;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(45)
	Dynamic tmp6 = ::lime::text::TextLayout_obj::lime_text_layout_create(tmp3,tmp4,tmp5);		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(45)
	this->__handle = tmp6;
}
;
	return null();
}

//TextLayout_obj::~TextLayout_obj() { }

Dynamic TextLayout_obj::__CreateEmpty() { return  new TextLayout_obj; }
hx::ObjectPtr< TextLayout_obj > TextLayout_obj::__new(::String __o_text,::lime::text::Font font,hx::Null< int >  __o_size,hx::Null< int >  __o_direction,::String __o_script,::String __o_language)
{  hx::ObjectPtr< TextLayout_obj > _result_ = new TextLayout_obj();
	_result_->__construct(__o_text,font,__o_size,__o_direction,__o_script,__o_language);
	return _result_;}

Dynamic TextLayout_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< TextLayout_obj > _result_ = new TextLayout_obj();
	_result_->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3],inArgs[4],inArgs[5]);
	return _result_;}

Void TextLayout_obj::__position( ){
{
		HX_STACK_FRAME("lime.text.TextLayout","__position",0x6ec769b8,"lime.text.TextLayout.__position","lime/text/TextLayout.hx",50,0x8df0119f)
		HX_STACK_THIS(this)
		HX_STACK_LINE(52)
		this->positions = Array_obj< ::Dynamic >::__new();
		HX_STACK_LINE(56)
		Dynamic tmp = this->__handle;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(56)
		bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(56)
		bool tmp2 = tmp1;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(56)
		bool tmp3;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(56)
		if ((tmp2)){
			HX_STACK_LINE(56)
			::String tmp4 = this->text;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(56)
			::String tmp5 = tmp4;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(56)
			::String tmp6 = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(56)
			tmp3 = (tmp6 != null());
		}
		else{
			HX_STACK_LINE(56)
			tmp3 = false;
		}
		HX_STACK_LINE(56)
		bool tmp4 = tmp3;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(56)
		bool tmp5;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(56)
		if ((tmp4)){
			HX_STACK_LINE(56)
			::String tmp6 = this->text;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(56)
			::String tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(56)
			::String tmp8 = tmp7;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(56)
			tmp5 = (tmp8 != HX_HCSTRING("","\x00","\x00","\x00","\x00"));
		}
		else{
			HX_STACK_LINE(56)
			tmp5 = false;
		}
		HX_STACK_LINE(56)
		bool tmp6 = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(56)
		bool tmp7;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(56)
		if ((tmp6)){
			HX_STACK_LINE(56)
			::lime::text::Font tmp8 = this->font;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(56)
			::lime::text::Font tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(56)
			::lime::text::Font tmp10 = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(56)
			tmp7 = (tmp10 != null());
		}
		else{
			HX_STACK_LINE(56)
			tmp7 = false;
		}
		HX_STACK_LINE(56)
		bool tmp8;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(56)
		if ((tmp7)){
			HX_STACK_LINE(56)
			::lime::text::Font tmp9 = this->font;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(56)
			::lime::text::Font tmp10 = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(56)
			Dynamic tmp11 = tmp10->src;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(56)
			tmp8 = (tmp11 != null());
		}
		else{
			HX_STACK_LINE(56)
			tmp8 = false;
		}
		HX_STACK_LINE(56)
		if ((tmp8)){
			HX_STACK_LINE(58)
			::lime::utils::ByteArray tmp9 = this->__buffer;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(58)
			bool tmp10 = (tmp9 == null());		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(58)
			if ((tmp10)){
				HX_STACK_LINE(60)
				::lime::utils::ByteArray tmp11 = ::lime::utils::ByteArray_obj::__new((int)1);		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(60)
				this->__buffer = tmp11;
				HX_STACK_LINE(61)
				{
					HX_STACK_LINE(61)
					::lime::_system::Endian tmp12 = ::lime::_system::System_obj::get_endianness();		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(61)
					bool tmp13 = (tmp12 == ::lime::_system::Endian_obj::_BIG_ENDIAN);		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(61)
					::String tmp14;		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(61)
					if ((tmp13)){
						HX_STACK_LINE(61)
						tmp14 = HX_HCSTRING("bigEndian","\x7b","\xd5","\x5a","\x20");
					}
					else{
						HX_STACK_LINE(61)
						tmp14 = HX_HCSTRING("littleEndian","\x31","\x2e","\x7b","\x07");
					}
					HX_STACK_LINE(61)
					::String endian = tmp14;		HX_STACK_VAR(endian,"endian");
					HX_STACK_LINE(61)
					bool tmp15 = (endian == HX_HCSTRING("littleEndian","\x31","\x2e","\x7b","\x07"));		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(61)
					::lime::utils::ByteArray tmp16 = this->__buffer;		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(61)
					tmp16->littleEndian = tmp15;
					HX_STACK_LINE(61)
					endian;
				}
			}
			HX_STACK_LINE(65)
			Dynamic tmp11 = this->__handle;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(65)
			::lime::text::Font tmp12 = this->font;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(65)
			Dynamic tmp13 = tmp12->src;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(65)
			int tmp14 = this->size;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(65)
			::String tmp15 = this->text;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(65)
			::lime::utils::ByteArray tmp16 = this->__buffer;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(65)
			Dynamic tmp17 = ::lime::text::TextLayout_obj::lime_text_layout_position(tmp11,tmp13,tmp14,tmp15,tmp16);		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(65)
			Dynamic data = tmp17;		HX_STACK_VAR(data,"data");
			HX_STACK_LINE(67)
			::lime::utils::ByteArray tmp18 = this->__buffer;		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(67)
			int tmp19 = tmp18->length;		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(67)
			bool tmp20 = (tmp19 > (int)4);		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(67)
			if ((tmp20)){
				HX_STACK_LINE(69)
				::lime::utils::ByteArray tmp21 = this->__buffer;		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(69)
				tmp21->position = (int)0;
				HX_STACK_LINE(71)
				::lime::utils::ByteArray tmp22 = this->__buffer;		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(71)
				int tmp23 = tmp22->readUnsignedInt();		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(71)
				int count = tmp23;		HX_STACK_VAR(count,"count");
				HX_STACK_LINE(72)
				int index;		HX_STACK_VAR(index,"index");
				HX_STACK_LINE(72)
				Float advanceX;		HX_STACK_VAR(advanceX,"advanceX");
				HX_STACK_LINE(72)
				Float advanceY;		HX_STACK_VAR(advanceY,"advanceY");
				HX_STACK_LINE(72)
				Float offsetX;		HX_STACK_VAR(offsetX,"offsetX");
				HX_STACK_LINE(72)
				Float offsetY;		HX_STACK_VAR(offsetY,"offsetY");
				HX_STACK_LINE(74)
				{
					HX_STACK_LINE(74)
					int _g = (int)0;		HX_STACK_VAR(_g,"_g");
					HX_STACK_LINE(74)
					while((true)){
						HX_STACK_LINE(74)
						bool tmp24 = (_g < count);		HX_STACK_VAR(tmp24,"tmp24");
						HX_STACK_LINE(74)
						bool tmp25 = !(tmp24);		HX_STACK_VAR(tmp25,"tmp25");
						HX_STACK_LINE(74)
						if ((tmp25)){
							HX_STACK_LINE(74)
							break;
						}
						HX_STACK_LINE(74)
						int tmp26 = (_g)++;		HX_STACK_VAR(tmp26,"tmp26");
						HX_STACK_LINE(74)
						int i = tmp26;		HX_STACK_VAR(i,"i");
						HX_STACK_LINE(76)
						::lime::utils::ByteArray tmp27 = this->__buffer;		HX_STACK_VAR(tmp27,"tmp27");
						HX_STACK_LINE(76)
						int tmp28 = tmp27->readUnsignedInt();		HX_STACK_VAR(tmp28,"tmp28");
						HX_STACK_LINE(76)
						index = tmp28;
						HX_STACK_LINE(77)
						::lime::utils::ByteArray tmp29 = this->__buffer;		HX_STACK_VAR(tmp29,"tmp29");
						HX_STACK_LINE(77)
						Float tmp30 = tmp29->readFloat();		HX_STACK_VAR(tmp30,"tmp30");
						HX_STACK_LINE(77)
						advanceX = tmp30;
						HX_STACK_LINE(78)
						::lime::utils::ByteArray tmp31 = this->__buffer;		HX_STACK_VAR(tmp31,"tmp31");
						HX_STACK_LINE(78)
						Float tmp32 = tmp31->readFloat();		HX_STACK_VAR(tmp32,"tmp32");
						HX_STACK_LINE(78)
						advanceY = tmp32;
						HX_STACK_LINE(79)
						::lime::utils::ByteArray tmp33 = this->__buffer;		HX_STACK_VAR(tmp33,"tmp33");
						HX_STACK_LINE(79)
						Float tmp34 = tmp33->readFloat();		HX_STACK_VAR(tmp34,"tmp34");
						HX_STACK_LINE(79)
						offsetX = tmp34;
						HX_STACK_LINE(80)
						::lime::utils::ByteArray tmp35 = this->__buffer;		HX_STACK_VAR(tmp35,"tmp35");
						HX_STACK_LINE(80)
						Float tmp36 = tmp35->readFloat();		HX_STACK_VAR(tmp36,"tmp36");
						HX_STACK_LINE(80)
						offsetY = tmp36;
						HX_STACK_LINE(82)
						int tmp37 = index;		HX_STACK_VAR(tmp37,"tmp37");
						HX_STACK_LINE(82)
						::lime::math::Vector2 tmp38 = ::lime::math::Vector2_obj::__new(advanceX,advanceY);		HX_STACK_VAR(tmp38,"tmp38");
						HX_STACK_LINE(82)
						::lime::math::Vector2 tmp39 = ::lime::math::Vector2_obj::__new(offsetX,offsetY);		HX_STACK_VAR(tmp39,"tmp39");
						HX_STACK_LINE(82)
						::lime::text::GlyphPosition tmp40 = ::lime::text::GlyphPosition_obj::__new(tmp37,tmp38,tmp39);		HX_STACK_VAR(tmp40,"tmp40");
						HX_STACK_LINE(82)
						this->get_positions()->push(tmp40);
					}
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(TextLayout_obj,__position,(void))

Array< ::Dynamic > TextLayout_obj::get_positions( ){
	HX_STACK_FRAME("lime.text.TextLayout","get_positions",0xf2be90f2,"lime.text.TextLayout.get_positions","lime/text/TextLayout.hx",101,0x8df0119f)
	HX_STACK_THIS(this)
	HX_STACK_LINE(103)
	bool tmp = this->__dirty;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(103)
	if ((tmp)){
		HX_STACK_LINE(105)
		this->__dirty = false;
		HX_STACK_LINE(106)
		this->__position();
	}
	HX_STACK_LINE(110)
	return this->positions;
}


HX_DEFINE_DYNAMIC_FUNC0(TextLayout_obj,get_positions,return )

int TextLayout_obj::get_direction( ){
	HX_STACK_FRAME("lime.text.TextLayout","get_direction",0x32acff87,"lime.text.TextLayout.get_direction","lime/text/TextLayout.hx",115,0x8df0119f)
	HX_STACK_THIS(this)
	HX_STACK_LINE(117)
	int tmp = this->__direction;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(117)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(TextLayout_obj,get_direction,return )

int TextLayout_obj::set_direction( int value){
	HX_STACK_FRAME("lime.text.TextLayout","set_direction",0x77b2e193,"lime.text.TextLayout.set_direction","lime/text/TextLayout.hx",122,0x8df0119f)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(124)
	int tmp = value;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(124)
	int tmp1 = this->__direction;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(124)
	bool tmp2 = (tmp == tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(124)
	if ((tmp2)){
		HX_STACK_LINE(124)
		int tmp3 = value;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(124)
		return tmp3;
	}
	HX_STACK_LINE(126)
	this->__direction = value;
	HX_STACK_LINE(129)
	Dynamic tmp3 = this->__handle;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(129)
	int tmp4 = value;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(129)
	::lime::text::TextLayout_obj::lime_text_layout_set_direction(tmp3,tmp4);
	HX_STACK_LINE(132)
	this->__dirty = true;
	HX_STACK_LINE(134)
	int tmp5 = value;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(134)
	return tmp5;
}


HX_DEFINE_DYNAMIC_FUNC1(TextLayout_obj,set_direction,return )

::lime::text::Font TextLayout_obj::set_font( ::lime::text::Font value){
	HX_STACK_FRAME("lime.text.TextLayout","set_font",0xaa861efb,"lime.text.TextLayout.set_font","lime/text/TextLayout.hx",139,0x8df0119f)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(141)
	::lime::text::Font tmp = value;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(141)
	::lime::text::Font tmp1 = this->font;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(141)
	bool tmp2 = (tmp == tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(141)
	if ((tmp2)){
		HX_STACK_LINE(141)
		::lime::text::Font tmp3 = value;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(141)
		return tmp3;
	}
	HX_STACK_LINE(143)
	this->font = value;
	HX_STACK_LINE(144)
	this->__dirty = true;
	HX_STACK_LINE(145)
	::lime::text::Font tmp3 = value;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(145)
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC1(TextLayout_obj,set_font,return )

Array< int > TextLayout_obj::get_glyphs( ){
	HX_STACK_FRAME("lime.text.TextLayout","get_glyphs",0x9f74beff,"lime.text.TextLayout.get_glyphs","lime/text/TextLayout.hx",150,0x8df0119f)
	HX_STACK_THIS(this)
	HX_STACK_LINE(152)
	Array< int > glyphs = Array_obj< int >::__new();		HX_STACK_VAR(glyphs,"glyphs");
	HX_STACK_LINE(154)
	{
		HX_STACK_LINE(154)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(154)
		Array< ::Dynamic > _g1 = this->get_positions();		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(154)
		while((true)){
			HX_STACK_LINE(154)
			bool tmp = (_g < _g1->length);		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(154)
			bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(154)
			if ((tmp1)){
				HX_STACK_LINE(154)
				break;
			}
			HX_STACK_LINE(154)
			::lime::text::GlyphPosition tmp2 = _g1->__get(_g).StaticCast< ::lime::text::GlyphPosition >();		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(154)
			::lime::text::GlyphPosition position = tmp2;		HX_STACK_VAR(position,"position");
			HX_STACK_LINE(154)
			++(_g);
			HX_STACK_LINE(156)
			int tmp3 = position->glyph;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(156)
			glyphs->push(tmp3);
		}
	}
	HX_STACK_LINE(160)
	return glyphs;
}


HX_DEFINE_DYNAMIC_FUNC0(TextLayout_obj,get_glyphs,return )

::String TextLayout_obj::get_language( ){
	HX_STACK_FRAME("lime.text.TextLayout","get_language",0xbdf42410,"lime.text.TextLayout.get_language","lime/text/TextLayout.hx",165,0x8df0119f)
	HX_STACK_THIS(this)
	HX_STACK_LINE(167)
	::String tmp = this->__language;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(167)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(TextLayout_obj,get_language,return )

::String TextLayout_obj::set_language( ::String value){
	HX_STACK_FRAME("lime.text.TextLayout","set_language",0xd2ed4784,"lime.text.TextLayout.set_language","lime/text/TextLayout.hx",172,0x8df0119f)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(174)
	::String tmp = value;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(174)
	::String tmp1 = this->__language;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(174)
	bool tmp2 = (tmp == tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(174)
	if ((tmp2)){
		HX_STACK_LINE(174)
		::String tmp3 = value;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(174)
		return tmp3;
	}
	HX_STACK_LINE(176)
	this->__language = value;
	HX_STACK_LINE(179)
	Dynamic tmp3 = this->__handle;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(179)
	::String tmp4 = value;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(179)
	::lime::text::TextLayout_obj::lime_text_layout_set_language(tmp3,tmp4);
	HX_STACK_LINE(182)
	this->__dirty = true;
	HX_STACK_LINE(184)
	::String tmp5 = value;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(184)
	return tmp5;
}


HX_DEFINE_DYNAMIC_FUNC1(TextLayout_obj,set_language,return )

::String TextLayout_obj::get_script( ){
	HX_STACK_FRAME("lime.text.TextLayout","get_script",0x387c13c3,"lime.text.TextLayout.get_script","lime/text/TextLayout.hx",189,0x8df0119f)
	HX_STACK_THIS(this)
	HX_STACK_LINE(191)
	::String tmp = this->__script;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(191)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(TextLayout_obj,get_script,return )

::String TextLayout_obj::set_script( ::String value){
	HX_STACK_FRAME("lime.text.TextLayout","set_script",0x3bf9b237,"lime.text.TextLayout.set_script","lime/text/TextLayout.hx",196,0x8df0119f)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(198)
	::String tmp = value;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(198)
	::String tmp1 = this->__script;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(198)
	bool tmp2 = (tmp == tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(198)
	if ((tmp2)){
		HX_STACK_LINE(198)
		::String tmp3 = value;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(198)
		return tmp3;
	}
	HX_STACK_LINE(200)
	this->__script = value;
	HX_STACK_LINE(203)
	Dynamic tmp3 = this->__handle;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(203)
	::String tmp4 = value;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(203)
	::lime::text::TextLayout_obj::lime_text_layout_set_script(tmp3,tmp4);
	HX_STACK_LINE(206)
	this->__dirty = true;
	HX_STACK_LINE(208)
	::String tmp5 = value;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(208)
	return tmp5;
}


HX_DEFINE_DYNAMIC_FUNC1(TextLayout_obj,set_script,return )

int TextLayout_obj::set_size( int value){
	HX_STACK_FRAME("lime.text.TextLayout","set_size",0xb31961ed,"lime.text.TextLayout.set_size","lime/text/TextLayout.hx",213,0x8df0119f)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(215)
	int tmp = value;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(215)
	int tmp1 = this->size;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(215)
	bool tmp2 = (tmp == tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(215)
	if ((tmp2)){
		HX_STACK_LINE(215)
		int tmp3 = value;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(215)
		return tmp3;
	}
	HX_STACK_LINE(217)
	this->size = value;
	HX_STACK_LINE(218)
	this->__dirty = true;
	HX_STACK_LINE(219)
	int tmp3 = value;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(219)
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC1(TextLayout_obj,set_size,return )

::String TextLayout_obj::set_text( ::String value){
	HX_STACK_FRAME("lime.text.TextLayout","set_text",0xb3bf8dd9,"lime.text.TextLayout.set_text","lime/text/TextLayout.hx",224,0x8df0119f)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(226)
	::String tmp = value;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(226)
	::String tmp1 = this->text;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(226)
	bool tmp2 = (tmp == tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(226)
	if ((tmp2)){
		HX_STACK_LINE(226)
		::String tmp3 = value;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(226)
		return tmp3;
	}
	HX_STACK_LINE(228)
	this->text = value;
	HX_STACK_LINE(229)
	this->__dirty = true;
	HX_STACK_LINE(230)
	::String tmp3 = value;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(230)
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC1(TextLayout_obj,set_text,return )

Dynamic TextLayout_obj::lime_text_layout_create;

Dynamic TextLayout_obj::lime_text_layout_position;

Dynamic TextLayout_obj::lime_text_layout_set_direction;

Dynamic TextLayout_obj::lime_text_layout_set_language;

Dynamic TextLayout_obj::lime_text_layout_set_script;


TextLayout_obj::TextLayout_obj()
{
}

void TextLayout_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(TextLayout);
	HX_MARK_MEMBER_NAME(font,"font");
	HX_MARK_MEMBER_NAME(glyphs,"glyphs");
	HX_MARK_MEMBER_NAME(positions,"positions");
	HX_MARK_MEMBER_NAME(size,"size");
	HX_MARK_MEMBER_NAME(text,"text");
	HX_MARK_MEMBER_NAME(__dirty,"__dirty");
	HX_MARK_MEMBER_NAME(__buffer,"__buffer");
	HX_MARK_MEMBER_NAME(__direction,"__direction");
	HX_MARK_MEMBER_NAME(__handle,"__handle");
	HX_MARK_MEMBER_NAME(__language,"__language");
	HX_MARK_MEMBER_NAME(__script,"__script");
	HX_MARK_END_CLASS();
}

void TextLayout_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(font,"font");
	HX_VISIT_MEMBER_NAME(glyphs,"glyphs");
	HX_VISIT_MEMBER_NAME(positions,"positions");
	HX_VISIT_MEMBER_NAME(size,"size");
	HX_VISIT_MEMBER_NAME(text,"text");
	HX_VISIT_MEMBER_NAME(__dirty,"__dirty");
	HX_VISIT_MEMBER_NAME(__buffer,"__buffer");
	HX_VISIT_MEMBER_NAME(__direction,"__direction");
	HX_VISIT_MEMBER_NAME(__handle,"__handle");
	HX_VISIT_MEMBER_NAME(__language,"__language");
	HX_VISIT_MEMBER_NAME(__script,"__script");
}

Dynamic TextLayout_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"font") ) { return font; }
		if (HX_FIELD_EQ(inName,"size") ) { return size; }
		if (HX_FIELD_EQ(inName,"text") ) { return text; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"glyphs") ) { return inCallProp == hx::paccAlways ? get_glyphs() : glyphs; }
		if (HX_FIELD_EQ(inName,"script") ) { if (inCallProp == hx::paccAlways) return get_script(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"__dirty") ) { return __dirty; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"language") ) { if (inCallProp == hx::paccAlways) return get_language(); }
		if (HX_FIELD_EQ(inName,"__buffer") ) { return __buffer; }
		if (HX_FIELD_EQ(inName,"__handle") ) { return __handle; }
		if (HX_FIELD_EQ(inName,"__script") ) { return __script; }
		if (HX_FIELD_EQ(inName,"set_font") ) { return set_font_dyn(); }
		if (HX_FIELD_EQ(inName,"set_size") ) { return set_size_dyn(); }
		if (HX_FIELD_EQ(inName,"set_text") ) { return set_text_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"direction") ) { if (inCallProp == hx::paccAlways) return get_direction(); }
		if (HX_FIELD_EQ(inName,"positions") ) { return inCallProp == hx::paccAlways ? get_positions() : positions; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"__language") ) { return __language; }
		if (HX_FIELD_EQ(inName,"__position") ) { return __position_dyn(); }
		if (HX_FIELD_EQ(inName,"get_glyphs") ) { return get_glyphs_dyn(); }
		if (HX_FIELD_EQ(inName,"get_script") ) { return get_script_dyn(); }
		if (HX_FIELD_EQ(inName,"set_script") ) { return set_script_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"__direction") ) { return __direction; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"get_language") ) { return get_language_dyn(); }
		if (HX_FIELD_EQ(inName,"set_language") ) { return set_language_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"get_positions") ) { return get_positions_dyn(); }
		if (HX_FIELD_EQ(inName,"get_direction") ) { return get_direction_dyn(); }
		if (HX_FIELD_EQ(inName,"set_direction") ) { return set_direction_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

bool TextLayout_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 23:
		if (HX_FIELD_EQ(inName,"lime_text_layout_create") ) { outValue = lime_text_layout_create; return true;  }
		break;
	case 25:
		if (HX_FIELD_EQ(inName,"lime_text_layout_position") ) { outValue = lime_text_layout_position; return true;  }
		break;
	case 27:
		if (HX_FIELD_EQ(inName,"lime_text_layout_set_script") ) { outValue = lime_text_layout_set_script; return true;  }
		break;
	case 29:
		if (HX_FIELD_EQ(inName,"lime_text_layout_set_language") ) { outValue = lime_text_layout_set_language; return true;  }
		break;
	case 30:
		if (HX_FIELD_EQ(inName,"lime_text_layout_set_direction") ) { outValue = lime_text_layout_set_direction; return true;  }
	}
	return false;
}

Dynamic TextLayout_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"font") ) { if (inCallProp == hx::paccAlways) return set_font(inValue);font=inValue.Cast< ::lime::text::Font >(); return inValue; }
		if (HX_FIELD_EQ(inName,"size") ) { if (inCallProp == hx::paccAlways) return set_size(inValue);size=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"text") ) { if (inCallProp == hx::paccAlways) return set_text(inValue);text=inValue.Cast< ::String >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"glyphs") ) { glyphs=inValue.Cast< Array< int > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"script") ) { if (inCallProp == hx::paccAlways) return set_script(inValue); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"__dirty") ) { __dirty=inValue.Cast< bool >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"language") ) { if (inCallProp == hx::paccAlways) return set_language(inValue); }
		if (HX_FIELD_EQ(inName,"__buffer") ) { __buffer=inValue.Cast< ::lime::utils::ByteArray >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__handle") ) { __handle=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__script") ) { __script=inValue.Cast< ::String >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"direction") ) { if (inCallProp == hx::paccAlways) return set_direction(inValue); }
		if (HX_FIELD_EQ(inName,"positions") ) { positions=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"__language") ) { __language=inValue.Cast< ::String >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"__direction") ) { __direction=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool TextLayout_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 23:
		if (HX_FIELD_EQ(inName,"lime_text_layout_create") ) { lime_text_layout_create=ioValue.Cast< Dynamic >(); return true; }
		break;
	case 25:
		if (HX_FIELD_EQ(inName,"lime_text_layout_position") ) { lime_text_layout_position=ioValue.Cast< Dynamic >(); return true; }
		break;
	case 27:
		if (HX_FIELD_EQ(inName,"lime_text_layout_set_script") ) { lime_text_layout_set_script=ioValue.Cast< Dynamic >(); return true; }
		break;
	case 29:
		if (HX_FIELD_EQ(inName,"lime_text_layout_set_language") ) { lime_text_layout_set_language=ioValue.Cast< Dynamic >(); return true; }
		break;
	case 30:
		if (HX_FIELD_EQ(inName,"lime_text_layout_set_direction") ) { lime_text_layout_set_direction=ioValue.Cast< Dynamic >(); return true; }
	}
	return false;
}

void TextLayout_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("direction","\x3f","\x62","\x40","\x10"));
	outFields->push(HX_HCSTRING("font","\xcf","\x5d","\xc0","\x43"));
	outFields->push(HX_HCSTRING("glyphs","\x47","\xf9","\x58","\xae"));
	outFields->push(HX_HCSTRING("language","\x58","\x80","\x11","\x7a"));
	outFields->push(HX_HCSTRING("positions","\xaa","\xf3","\x51","\xd0"));
	outFields->push(HX_HCSTRING("script","\x0b","\x4e","\x60","\x47"));
	outFields->push(HX_HCSTRING("size","\xc1","\xa0","\x53","\x4c"));
	outFields->push(HX_HCSTRING("text","\xad","\xcc","\xf9","\x4c"));
	outFields->push(HX_HCSTRING("__dirty","\xf2","\xa8","\x2e","\x44"));
	outFields->push(HX_HCSTRING("__buffer","\x20","\x28","\xc4","\x78"));
	outFields->push(HX_HCSTRING("__direction","\x1f","\xab","\x6c","\x3e"));
	outFields->push(HX_HCSTRING("__handle","\xc8","\xee","\x2c","\x60"));
	outFields->push(HX_HCSTRING("__language","\x78","\xf3","\x49","\x1d"));
	outFields->push(HX_HCSTRING("__script","\x2b","\xb9","\x8f","\xef"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::lime::text::Font*/ ,(int)offsetof(TextLayout_obj,font),HX_HCSTRING("font","\xcf","\x5d","\xc0","\x43")},
	{hx::fsObject /*Array< int >*/ ,(int)offsetof(TextLayout_obj,glyphs),HX_HCSTRING("glyphs","\x47","\xf9","\x58","\xae")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(TextLayout_obj,positions),HX_HCSTRING("positions","\xaa","\xf3","\x51","\xd0")},
	{hx::fsInt,(int)offsetof(TextLayout_obj,size),HX_HCSTRING("size","\xc1","\xa0","\x53","\x4c")},
	{hx::fsString,(int)offsetof(TextLayout_obj,text),HX_HCSTRING("text","\xad","\xcc","\xf9","\x4c")},
	{hx::fsBool,(int)offsetof(TextLayout_obj,__dirty),HX_HCSTRING("__dirty","\xf2","\xa8","\x2e","\x44")},
	{hx::fsObject /*::lime::utils::ByteArray*/ ,(int)offsetof(TextLayout_obj,__buffer),HX_HCSTRING("__buffer","\x20","\x28","\xc4","\x78")},
	{hx::fsInt,(int)offsetof(TextLayout_obj,__direction),HX_HCSTRING("__direction","\x1f","\xab","\x6c","\x3e")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(TextLayout_obj,__handle),HX_HCSTRING("__handle","\xc8","\xee","\x2c","\x60")},
	{hx::fsString,(int)offsetof(TextLayout_obj,__language),HX_HCSTRING("__language","\x78","\xf3","\x49","\x1d")},
	{hx::fsString,(int)offsetof(TextLayout_obj,__script),HX_HCSTRING("__script","\x2b","\xb9","\x8f","\xef")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo sStaticStorageInfo[] = {
	{hx::fsObject /*Dynamic*/ ,(void *) &TextLayout_obj::lime_text_layout_create,HX_HCSTRING("lime_text_layout_create","\x09","\x53","\x56","\x81")},
	{hx::fsObject /*Dynamic*/ ,(void *) &TextLayout_obj::lime_text_layout_position,HX_HCSTRING("lime_text_layout_position","\xf6","\x69","\xde","\xe0")},
	{hx::fsObject /*Dynamic*/ ,(void *) &TextLayout_obj::lime_text_layout_set_direction,HX_HCSTRING("lime_text_layout_set_direction","\xb5","\x77","\xe8","\x4e")},
	{hx::fsObject /*Dynamic*/ ,(void *) &TextLayout_obj::lime_text_layout_set_language,HX_HCSTRING("lime_text_layout_set_language","\xa2","\x4b","\xfb","\x67")},
	{hx::fsObject /*Dynamic*/ ,(void *) &TextLayout_obj::lime_text_layout_set_script,HX_HCSTRING("lime_text_layout_set_script","\xd5","\xd2","\xc7","\x68")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("font","\xcf","\x5d","\xc0","\x43"),
	HX_HCSTRING("glyphs","\x47","\xf9","\x58","\xae"),
	HX_HCSTRING("positions","\xaa","\xf3","\x51","\xd0"),
	HX_HCSTRING("size","\xc1","\xa0","\x53","\x4c"),
	HX_HCSTRING("text","\xad","\xcc","\xf9","\x4c"),
	HX_HCSTRING("__dirty","\xf2","\xa8","\x2e","\x44"),
	HX_HCSTRING("__buffer","\x20","\x28","\xc4","\x78"),
	HX_HCSTRING("__direction","\x1f","\xab","\x6c","\x3e"),
	HX_HCSTRING("__handle","\xc8","\xee","\x2c","\x60"),
	HX_HCSTRING("__language","\x78","\xf3","\x49","\x1d"),
	HX_HCSTRING("__script","\x2b","\xb9","\x8f","\xef"),
	HX_HCSTRING("__position","\xc9","\x13","\x33","\x6e"),
	HX_HCSTRING("get_positions","\x81","\xc7","\xb5","\x91"),
	HX_HCSTRING("get_direction","\x16","\x36","\xa4","\xd1"),
	HX_HCSTRING("set_direction","\x22","\x18","\xaa","\x16"),
	HX_HCSTRING("set_font","\xcc","\x72","\xd8","\x71"),
	HX_HCSTRING("get_glyphs","\x10","\x69","\xe0","\x9e"),
	HX_HCSTRING("get_language","\x61","\x34","\x2b","\x2f"),
	HX_HCSTRING("set_language","\xd5","\x57","\x24","\x44"),
	HX_HCSTRING("get_script","\xd4","\xbd","\xe7","\x37"),
	HX_HCSTRING("set_script","\x48","\x5c","\x65","\x3b"),
	HX_HCSTRING("set_size","\xbe","\xb5","\x6b","\x7a"),
	HX_HCSTRING("set_text","\xaa","\xe1","\x11","\x7b"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(TextLayout_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(TextLayout_obj::lime_text_layout_create,"lime_text_layout_create");
	HX_MARK_MEMBER_NAME(TextLayout_obj::lime_text_layout_position,"lime_text_layout_position");
	HX_MARK_MEMBER_NAME(TextLayout_obj::lime_text_layout_set_direction,"lime_text_layout_set_direction");
	HX_MARK_MEMBER_NAME(TextLayout_obj::lime_text_layout_set_language,"lime_text_layout_set_language");
	HX_MARK_MEMBER_NAME(TextLayout_obj::lime_text_layout_set_script,"lime_text_layout_set_script");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(TextLayout_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(TextLayout_obj::lime_text_layout_create,"lime_text_layout_create");
	HX_VISIT_MEMBER_NAME(TextLayout_obj::lime_text_layout_position,"lime_text_layout_position");
	HX_VISIT_MEMBER_NAME(TextLayout_obj::lime_text_layout_set_direction,"lime_text_layout_set_direction");
	HX_VISIT_MEMBER_NAME(TextLayout_obj::lime_text_layout_set_language,"lime_text_layout_set_language");
	HX_VISIT_MEMBER_NAME(TextLayout_obj::lime_text_layout_set_script,"lime_text_layout_set_script");
};

#endif

hx::Class TextLayout_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("lime_text_layout_create","\x09","\x53","\x56","\x81"),
	HX_HCSTRING("lime_text_layout_position","\xf6","\x69","\xde","\xe0"),
	HX_HCSTRING("lime_text_layout_set_direction","\xb5","\x77","\xe8","\x4e"),
	HX_HCSTRING("lime_text_layout_set_language","\xa2","\x4b","\xfb","\x67"),
	HX_HCSTRING("lime_text_layout_set_script","\xd5","\xd2","\xc7","\x68"),
	::String(null()) };

void TextLayout_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("lime.text.TextLayout","\x1f","\xf6","\xe8","\x09");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &TextLayout_obj::__GetStatic;
	__mClass->mSetStaticField = &TextLayout_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< TextLayout_obj >;
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

void TextLayout_obj::__boot()
{
	lime_text_layout_create= ::lime::_system::System_obj::load(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_text_layout_create","\x09","\x53","\x56","\x81"),(int)3,null());
	lime_text_layout_position= ::lime::_system::System_obj::load(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_text_layout_position","\xf6","\x69","\xde","\xe0"),(int)5,null());
	lime_text_layout_set_direction= ::lime::_system::System_obj::load(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_text_layout_set_direction","\xb5","\x77","\xe8","\x4e"),(int)2,null());
	lime_text_layout_set_language= ::lime::_system::System_obj::load(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_text_layout_set_language","\xa2","\x4b","\xfb","\x67"),(int)2,null());
	lime_text_layout_set_script= ::lime::_system::System_obj::load(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_text_layout_set_script","\xd5","\xd2","\xc7","\x68"),(int)2,null());
}

} // end namespace lime
} // end namespace text
