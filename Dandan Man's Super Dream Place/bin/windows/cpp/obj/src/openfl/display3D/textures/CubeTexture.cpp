#include <hxcpp.h>

#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
#endif
#ifndef INCLUDED_lime_graphics_Image
#include <lime/graphics/Image.h>
#endif
#ifndef INCLUDED_lime_graphics_opengl_GL
#include <lime/graphics/opengl/GL.h>
#endif
#ifndef INCLUDED_lime_graphics_opengl_GLObject
#include <lime/graphics/opengl/GLObject.h>
#endif
#ifndef INCLUDED_lime_graphics_opengl_GLTexture
#include <lime/graphics/opengl/GLTexture.h>
#endif
#ifndef INCLUDED_lime_utils_ArrayBufferView
#include <lime/utils/ArrayBufferView.h>
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
#ifndef INCLUDED_openfl_display_BitmapData
#include <openfl/display/BitmapData.h>
#endif
#ifndef INCLUDED_openfl_display_IBitmapDrawable
#include <openfl/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_openfl_display3D_textures_CubeTexture
#include <openfl/display3D/textures/CubeTexture.h>
#endif
#ifndef INCLUDED_openfl_display3D_textures_TextureBase
#include <openfl/display3D/textures/TextureBase.h>
#endif
#ifndef INCLUDED_openfl_events_EventDispatcher
#include <openfl/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_events_IEventDispatcher
#include <openfl/events/IEventDispatcher.h>
#endif
namespace openfl{
namespace display3D{
namespace textures{

Void CubeTexture_obj::__construct(::lime::graphics::opengl::GLTexture glTexture,int size)
{
HX_STACK_FRAME("openfl.display3D.textures.CubeTexture","new",0x2100f37b,"openfl.display3D.textures.CubeTexture.new","openfl/display3D/textures/CubeTexture.hx",20,0xffe9b114)
HX_STACK_THIS(this)
HX_STACK_ARG(glTexture,"glTexture")
HX_STACK_ARG(size,"size")
{
	HX_STACK_LINE(22)
	::lime::graphics::opengl::GLTexture tmp = glTexture;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(22)
	int tmp1 = size;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(22)
	int tmp2 = size;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(22)
	super::__construct(tmp,tmp1,tmp2);
	HX_STACK_LINE(23)
	this->size = size;
	HX_STACK_LINE(25)
	this->_textures = Array_obj< ::Dynamic >::__new();
	HX_STACK_LINE(27)
	{
		HX_STACK_LINE(27)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(27)
		while((true)){
			HX_STACK_LINE(27)
			bool tmp3 = (_g < (int)6);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(27)
			bool tmp4 = !(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(27)
			if ((tmp4)){
				HX_STACK_LINE(27)
				break;
			}
			HX_STACK_LINE(27)
			int tmp5 = (_g)++;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(27)
			int i = tmp5;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(29)
			int tmp6 = ::lime::graphics::opengl::GL_obj::get_version();		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(29)
			Dynamic tmp7 = ::lime::graphics::opengl::GL_obj::lime_gl_create_texture();		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(29)
			::lime::graphics::opengl::GLTexture tmp8 = ::lime::graphics::opengl::GLTexture_obj::__new(tmp6,tmp7);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(29)
			this->_textures[i] = tmp8;
		}
	}
}
;
	return null();
}

//CubeTexture_obj::~CubeTexture_obj() { }

Dynamic CubeTexture_obj::__CreateEmpty() { return  new CubeTexture_obj; }
hx::ObjectPtr< CubeTexture_obj > CubeTexture_obj::__new(::lime::graphics::opengl::GLTexture glTexture,int size)
{  hx::ObjectPtr< CubeTexture_obj > _result_ = new CubeTexture_obj();
	_result_->__construct(glTexture,size);
	return _result_;}

Dynamic CubeTexture_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< CubeTexture_obj > _result_ = new CubeTexture_obj();
	_result_->__construct(inArgs[0],inArgs[1]);
	return _result_;}

::lime::graphics::opengl::GLTexture CubeTexture_obj::glTextureAt( int index){
	HX_STACK_FRAME("openfl.display3D.textures.CubeTexture","glTextureAt",0xa081fde4,"openfl.display3D.textures.CubeTexture.glTextureAt","openfl/display3D/textures/CubeTexture.hx",36,0xffe9b114)
	HX_STACK_THIS(this)
	HX_STACK_ARG(index,"index")
	HX_STACK_LINE(38)
	::lime::graphics::opengl::GLTexture tmp = this->_textures->__get(index).StaticCast< ::lime::graphics::opengl::GLTexture >();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(38)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC1(CubeTexture_obj,glTextureAt,return )

Void CubeTexture_obj::uploadCompressedTextureFromByteArray( ::lime::utils::ByteArray data,int byteArrayOffset,hx::Null< bool >  __o_async){
bool async = __o_async.Default(false);
	HX_STACK_FRAME("openfl.display3D.textures.CubeTexture","uploadCompressedTextureFromByteArray",0x47d49053,"openfl.display3D.textures.CubeTexture.uploadCompressedTextureFromByteArray","openfl/display3D/textures/CubeTexture.hx",43,0xffe9b114)
	HX_STACK_THIS(this)
	HX_STACK_ARG(data,"data")
	HX_STACK_ARG(byteArrayOffset,"byteArrayOffset")
	HX_STACK_ARG(async,"async")
{
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(CubeTexture_obj,uploadCompressedTextureFromByteArray,(void))

Void CubeTexture_obj::uploadFromBitmapData( ::openfl::display::BitmapData bitmapData,int side,hx::Null< int >  __o_miplevel){
int miplevel = __o_miplevel.Default(0);
	HX_STACK_FRAME("openfl.display3D.textures.CubeTexture","uploadFromBitmapData",0xf44b3429,"openfl.display3D.textures.CubeTexture.uploadFromBitmapData","openfl/display3D/textures/CubeTexture.hx",50,0xffe9b114)
	HX_STACK_THIS(this)
	HX_STACK_ARG(bitmapData,"bitmapData")
	HX_STACK_ARG(side,"side")
	HX_STACK_ARG(miplevel,"miplevel")
{
		HX_STACK_LINE(57)
		::lime::utils::ArrayBufferView tmp = bitmapData->__image->get_data();		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(57)
		::lime::utils::ArrayBufferView source = tmp;		HX_STACK_VAR(source,"source");
		HX_STACK_LINE(60)
		{
			HX_STACK_LINE(60)
			::lime::graphics::opengl::GLTexture tmp1 = this->glTexture;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(60)
			::lime::graphics::opengl::GLTexture texture = tmp1;		HX_STACK_VAR(texture,"texture");
			HX_STACK_LINE(60)
			bool tmp2 = (texture == null());		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(60)
			int tmp3;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(60)
			if ((tmp2)){
				HX_STACK_LINE(60)
				tmp3 = (int)0;
			}
			else{
				HX_STACK_LINE(60)
				tmp3 = texture->id;
			}
			HX_STACK_LINE(60)
			::lime::graphics::opengl::GL_obj::lime_gl_bind_texture((int)34067,tmp3);
		}
		HX_STACK_LINE(62)
		int tmp1 = side;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(62)
		switch( (int)(tmp1)){
			case (int)0: {
				HX_STACK_LINE(66)
				int tmp2 = miplevel;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(66)
				int tmp3 = bitmapData->width;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(66)
				int tmp4 = bitmapData->height;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(66)
				bool tmp5 = (source == null());		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(66)
				::haxe::io::Bytes tmp6;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(66)
				if ((tmp5)){
					HX_STACK_LINE(66)
					tmp6 = null();
				}
				else{
					HX_STACK_LINE(66)
					tmp6 = source->buffer;
				}
				HX_STACK_LINE(66)
				bool tmp7 = (source == null());		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(66)
				Dynamic tmp8;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(66)
				if ((tmp7)){
					HX_STACK_LINE(66)
					tmp8 = null();
				}
				else{
					HX_STACK_LINE(66)
					tmp8 = source->byteOffset;
				}
				HX_STACK_LINE(66)
				::lime::graphics::opengl::GL_obj::lime_gl_tex_image_2d((int)34069,tmp2,(int)6408,tmp3,tmp4,(int)0,(int)6408,(int)5121,tmp6,tmp8);
			}
			;break;
			case (int)1: {
				HX_STACK_LINE(70)
				int tmp2 = miplevel;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(70)
				int tmp3 = bitmapData->width;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(70)
				int tmp4 = bitmapData->height;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(70)
				bool tmp5 = (source == null());		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(70)
				::haxe::io::Bytes tmp6;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(70)
				if ((tmp5)){
					HX_STACK_LINE(70)
					tmp6 = null();
				}
				else{
					HX_STACK_LINE(70)
					tmp6 = source->buffer;
				}
				HX_STACK_LINE(70)
				bool tmp7 = (source == null());		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(70)
				Dynamic tmp8;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(70)
				if ((tmp7)){
					HX_STACK_LINE(70)
					tmp8 = null();
				}
				else{
					HX_STACK_LINE(70)
					tmp8 = source->byteOffset;
				}
				HX_STACK_LINE(70)
				::lime::graphics::opengl::GL_obj::lime_gl_tex_image_2d((int)34070,tmp2,(int)6408,tmp3,tmp4,(int)0,(int)6408,(int)5121,tmp6,tmp8);
			}
			;break;
			case (int)2: {
				HX_STACK_LINE(74)
				int tmp2 = miplevel;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(74)
				int tmp3 = bitmapData->width;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(74)
				int tmp4 = bitmapData->height;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(74)
				bool tmp5 = (source == null());		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(74)
				::haxe::io::Bytes tmp6;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(74)
				if ((tmp5)){
					HX_STACK_LINE(74)
					tmp6 = null();
				}
				else{
					HX_STACK_LINE(74)
					tmp6 = source->buffer;
				}
				HX_STACK_LINE(74)
				bool tmp7 = (source == null());		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(74)
				Dynamic tmp8;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(74)
				if ((tmp7)){
					HX_STACK_LINE(74)
					tmp8 = null();
				}
				else{
					HX_STACK_LINE(74)
					tmp8 = source->byteOffset;
				}
				HX_STACK_LINE(74)
				::lime::graphics::opengl::GL_obj::lime_gl_tex_image_2d((int)34071,tmp2,(int)6408,tmp3,tmp4,(int)0,(int)6408,(int)5121,tmp6,tmp8);
			}
			;break;
			case (int)3: {
				HX_STACK_LINE(78)
				int tmp2 = miplevel;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(78)
				int tmp3 = bitmapData->width;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(78)
				int tmp4 = bitmapData->height;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(78)
				bool tmp5 = (source == null());		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(78)
				::haxe::io::Bytes tmp6;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(78)
				if ((tmp5)){
					HX_STACK_LINE(78)
					tmp6 = null();
				}
				else{
					HX_STACK_LINE(78)
					tmp6 = source->buffer;
				}
				HX_STACK_LINE(78)
				bool tmp7 = (source == null());		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(78)
				Dynamic tmp8;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(78)
				if ((tmp7)){
					HX_STACK_LINE(78)
					tmp8 = null();
				}
				else{
					HX_STACK_LINE(78)
					tmp8 = source->byteOffset;
				}
				HX_STACK_LINE(78)
				::lime::graphics::opengl::GL_obj::lime_gl_tex_image_2d((int)34072,tmp2,(int)6408,tmp3,tmp4,(int)0,(int)6408,(int)5121,tmp6,tmp8);
			}
			;break;
			case (int)4: {
				HX_STACK_LINE(82)
				int tmp2 = miplevel;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(82)
				int tmp3 = bitmapData->width;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(82)
				int tmp4 = bitmapData->height;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(82)
				bool tmp5 = (source == null());		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(82)
				::haxe::io::Bytes tmp6;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(82)
				if ((tmp5)){
					HX_STACK_LINE(82)
					tmp6 = null();
				}
				else{
					HX_STACK_LINE(82)
					tmp6 = source->buffer;
				}
				HX_STACK_LINE(82)
				bool tmp7 = (source == null());		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(82)
				Dynamic tmp8;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(82)
				if ((tmp7)){
					HX_STACK_LINE(82)
					tmp8 = null();
				}
				else{
					HX_STACK_LINE(82)
					tmp8 = source->byteOffset;
				}
				HX_STACK_LINE(82)
				::lime::graphics::opengl::GL_obj::lime_gl_tex_image_2d((int)34073,tmp2,(int)6408,tmp3,tmp4,(int)0,(int)6408,(int)5121,tmp6,tmp8);
			}
			;break;
			case (int)5: {
				HX_STACK_LINE(86)
				int tmp2 = miplevel;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(86)
				int tmp3 = bitmapData->width;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(86)
				int tmp4 = bitmapData->height;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(86)
				bool tmp5 = (source == null());		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(86)
				::haxe::io::Bytes tmp6;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(86)
				if ((tmp5)){
					HX_STACK_LINE(86)
					tmp6 = null();
				}
				else{
					HX_STACK_LINE(86)
					tmp6 = source->buffer;
				}
				HX_STACK_LINE(86)
				bool tmp7 = (source == null());		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(86)
				Dynamic tmp8;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(86)
				if ((tmp7)){
					HX_STACK_LINE(86)
					tmp8 = null();
				}
				else{
					HX_STACK_LINE(86)
					tmp8 = source->byteOffset;
				}
				HX_STACK_LINE(86)
				::lime::graphics::opengl::GL_obj::lime_gl_tex_image_2d((int)34074,tmp2,(int)6408,tmp3,tmp4,(int)0,(int)6408,(int)5121,tmp6,tmp8);
			}
			;break;
			default: {
				HX_STACK_LINE(90)
				HX_STACK_DO_THROW(HX_HCSTRING("unknown side type","\xcd","\x01","\x86","\x25"));
			}
		}
		HX_STACK_LINE(94)
		{
			HX_STACK_LINE(94)
			bool tmp2 = true;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(94)
			int tmp3;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(94)
			if ((tmp2)){
				HX_STACK_LINE(94)
				tmp3 = (int)0;
			}
			else{
				HX_STACK_LINE(94)
				tmp3 = hx::Throw(HX_CSTRING("Invalid field access on null object"));
			}
			HX_STACK_LINE(94)
			::lime::graphics::opengl::GL_obj::lime_gl_bind_texture((int)34067,tmp3);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(CubeTexture_obj,uploadFromBitmapData,(void))

Void CubeTexture_obj::uploadFromByteArray( ::lime::utils::ByteArray data,int byteArrayOffset,int side,hx::Null< int >  __o_miplevel){
int miplevel = __o_miplevel.Default(0);
	HX_STACK_FRAME("openfl.display3D.textures.CubeTexture","uploadFromByteArray",0x1e356101,"openfl.display3D.textures.CubeTexture.uploadFromByteArray","openfl/display3D/textures/CubeTexture.hx",99,0xffe9b114)
	HX_STACK_THIS(this)
	HX_STACK_ARG(data,"data")
	HX_STACK_ARG(byteArrayOffset,"byteArrayOffset")
	HX_STACK_ARG(side,"side")
	HX_STACK_ARG(miplevel,"miplevel")
{
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC4(CubeTexture_obj,uploadFromByteArray,(void))


CubeTexture_obj::CubeTexture_obj()
{
}

void CubeTexture_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(CubeTexture);
	HX_MARK_MEMBER_NAME(size,"size");
	HX_MARK_MEMBER_NAME(_textures,"_textures");
	::openfl::display3D::textures::TextureBase_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void CubeTexture_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(size,"size");
	HX_VISIT_MEMBER_NAME(_textures,"_textures");
	::openfl::display3D::textures::TextureBase_obj::__Visit(HX_VISIT_ARG);
}

Dynamic CubeTexture_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"size") ) { return size; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"_textures") ) { return _textures; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"glTextureAt") ) { return glTextureAt_dyn(); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"uploadFromByteArray") ) { return uploadFromByteArray_dyn(); }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"uploadFromBitmapData") ) { return uploadFromBitmapData_dyn(); }
		break;
	case 36:
		if (HX_FIELD_EQ(inName,"uploadCompressedTextureFromByteArray") ) { return uploadCompressedTextureFromByteArray_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic CubeTexture_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"size") ) { size=inValue.Cast< int >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"_textures") ) { _textures=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool CubeTexture_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	return false;
}

void CubeTexture_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("size","\xc1","\xa0","\x53","\x4c"));
	outFields->push(HX_HCSTRING("_textures","\x97","\xee","\x64","\xad"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsInt,(int)offsetof(CubeTexture_obj,size),HX_HCSTRING("size","\xc1","\xa0","\x53","\x4c")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(CubeTexture_obj,_textures),HX_HCSTRING("_textures","\x97","\xee","\x64","\xad")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("size","\xc1","\xa0","\x53","\x4c"),
	HX_HCSTRING("_textures","\x97","\xee","\x64","\xad"),
	HX_HCSTRING("glTextureAt","\xc9","\xc7","\x03","\x4a"),
	HX_HCSTRING("uploadCompressedTextureFromByteArray","\xce","\xc7","\x86","\xc5"),
	HX_HCSTRING("uploadFromBitmapData","\xa4","\x85","\x65","\x0d"),
	HX_HCSTRING("uploadFromByteArray","\xe6","\x17","\x1b","\xee"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(CubeTexture_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(CubeTexture_obj::__mClass,"__mClass");
};

#endif

hx::Class CubeTexture_obj::__mClass;

void CubeTexture_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("openfl.display3D.textures.CubeTexture","\x09","\x1a","\x15","\x3a");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &CubeTexture_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< CubeTexture_obj >;
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
} // end namespace display3D
} // end namespace textures
