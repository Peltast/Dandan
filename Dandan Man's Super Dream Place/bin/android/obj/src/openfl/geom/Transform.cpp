#include <hxcpp.h>

#include "hxMath.h"
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
#ifndef INCLUDED_openfl_geom_ColorTransform
#include <openfl/geom/ColorTransform.h>
#endif
#ifndef INCLUDED_openfl_geom_Matrix
#include <openfl/geom/Matrix.h>
#endif
#ifndef INCLUDED_openfl_geom_Matrix3D
#include <openfl/geom/Matrix3D.h>
#endif
#ifndef INCLUDED_openfl_geom_Rectangle
#include <openfl/geom/Rectangle.h>
#endif
#ifndef INCLUDED_openfl_geom_Transform
#include <openfl/geom/Transform.h>
#endif
namespace openfl{
namespace geom{

Void Transform_obj::__construct(::openfl::display::DisplayObject displayObject)
{
HX_STACK_FRAME("openfl.geom.Transform","new",0x993cc92a,"openfl.geom.Transform.new","openfl/geom/Transform.hx",134,0xf4f475e6)
HX_STACK_THIS(this)
HX_STACK_ARG(displayObject,"displayObject")
{
	HX_STACK_LINE(136)
	::openfl::geom::ColorTransform tmp = ::openfl::geom::ColorTransform_obj::__new(null(),null(),null(),null(),null(),null(),null(),null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(136)
	this->__colorTransform = tmp;
	HX_STACK_LINE(137)
	::openfl::geom::ColorTransform tmp1 = ::openfl::geom::ColorTransform_obj::__new(null(),null(),null(),null(),null(),null(),null(),null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(137)
	this->concatenatedColorTransform = tmp1;
	HX_STACK_LINE(138)
	::openfl::geom::Matrix tmp2 = ::openfl::geom::Matrix_obj::__new(null(),null(),null(),null(),null(),null());		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(138)
	this->concatenatedMatrix = tmp2;
	HX_STACK_LINE(139)
	::openfl::geom::Rectangle tmp3 = ::openfl::geom::Rectangle_obj::__new(null(),null(),null(),null());		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(139)
	this->pixelBounds = tmp3;
	HX_STACK_LINE(141)
	this->__displayObject = displayObject;
	HX_STACK_LINE(142)
	this->__hasMatrix = true;
}
;
	return null();
}

//Transform_obj::~Transform_obj() { }

Dynamic Transform_obj::__CreateEmpty() { return  new Transform_obj; }
hx::ObjectPtr< Transform_obj > Transform_obj::__new(::openfl::display::DisplayObject displayObject)
{  hx::ObjectPtr< Transform_obj > _result_ = new Transform_obj();
	_result_->__construct(displayObject);
	return _result_;}

Dynamic Transform_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Transform_obj > _result_ = new Transform_obj();
	_result_->__construct(inArgs[0]);
	return _result_;}

::openfl::geom::ColorTransform Transform_obj::get_colorTransform( ){
	HX_STACK_FRAME("openfl.geom.Transform","get_colorTransform",0xc8c832c8,"openfl.geom.Transform.get_colorTransform","openfl/geom/Transform.hx",154,0xf4f475e6)
	HX_STACK_THIS(this)
	HX_STACK_LINE(156)
	::openfl::geom::ColorTransform tmp = this->__colorTransform;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(156)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(Transform_obj,get_colorTransform,return )

::openfl::geom::ColorTransform Transform_obj::set_colorTransform( ::openfl::geom::ColorTransform value){
	HX_STACK_FRAME("openfl.geom.Transform","set_colorTransform",0xa577653c,"openfl.geom.Transform.set_colorTransform","openfl/geom/Transform.hx",161,0xf4f475e6)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(163)
	this->__colorTransform = value;
	HX_STACK_LINE(165)
	bool tmp = (value != null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(165)
	if ((tmp)){
		HX_STACK_LINE(167)
		::openfl::display::DisplayObject tmp1 = this->__displayObject;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(167)
		Float tmp2 = value->alphaMultiplier;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(167)
		tmp1->set_alpha(tmp2);
	}
	HX_STACK_LINE(171)
	::openfl::geom::ColorTransform tmp1 = this->__colorTransform;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(171)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC1(Transform_obj,set_colorTransform,return )

::openfl::geom::Matrix Transform_obj::get_matrix( ){
	HX_STACK_FRAME("openfl.geom.Transform","get_matrix",0x80c3ba80,"openfl.geom.Transform.get_matrix","openfl/geom/Transform.hx",176,0xf4f475e6)
	HX_STACK_THIS(this)
	HX_STACK_LINE(178)
	bool tmp = this->__hasMatrix;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(178)
	if ((tmp)){
		HX_STACK_LINE(180)
		::openfl::geom::Matrix tmp1 = ::openfl::geom::Matrix_obj::__new(null(),null(),null(),null(),null(),null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(180)
		::openfl::geom::Matrix matrix = tmp1;		HX_STACK_VAR(matrix,"matrix");
		HX_STACK_LINE(181)
		::openfl::display::DisplayObject tmp2 = this->__displayObject;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(181)
		Float tmp3 = tmp2->get_scaleX();		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(181)
		::openfl::display::DisplayObject tmp4 = this->__displayObject;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(181)
		Float tmp5 = tmp4->get_scaleY();		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(181)
		matrix->scale(tmp3,tmp5);
		HX_STACK_LINE(182)
		::openfl::display::DisplayObject tmp6 = this->__displayObject;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(182)
		Float tmp7 = tmp6->get_rotation();		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(182)
		Float tmp8 = ::Math_obj::PI;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(182)
		Float tmp9 = (Float(tmp8) / Float((int)180));		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(182)
		Float tmp10 = (tmp7 * tmp9);		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(182)
		matrix->rotate(tmp10);
		HX_STACK_LINE(183)
		::openfl::display::DisplayObject tmp11 = this->__displayObject;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(183)
		Float tmp12 = tmp11->get_x();		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(183)
		::openfl::display::DisplayObject tmp13 = this->__displayObject;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(183)
		Float tmp14 = tmp13->get_y();		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(183)
		matrix->translate(tmp12,tmp14);
		HX_STACK_LINE(184)
		::openfl::geom::Matrix tmp15 = matrix;		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(184)
		return tmp15;
	}
	HX_STACK_LINE(188)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Transform_obj,get_matrix,return )

::openfl::geom::Matrix Transform_obj::set_matrix( ::openfl::geom::Matrix value){
	HX_STACK_FRAME("openfl.geom.Transform","set_matrix",0x844158f4,"openfl.geom.Transform.set_matrix","openfl/geom/Transform.hx",193,0xf4f475e6)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(195)
	bool tmp = (value == null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(195)
	if ((tmp)){
		HX_STACK_LINE(197)
		this->__hasMatrix = false;
		HX_STACK_LINE(198)
		return null();
	}
	HX_STACK_LINE(202)
	this->__hasMatrix = true;
	HX_STACK_LINE(203)
	this->__hasMatrix3D = false;
	HX_STACK_LINE(205)
	::openfl::display::DisplayObject tmp1 = this->__displayObject;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(205)
	bool tmp2 = (tmp1 != null());		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(205)
	if ((tmp2)){
		HX_STACK_LINE(207)
		::openfl::display::DisplayObject tmp3 = this->__displayObject;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(207)
		Float tmp4 = value->tx;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(207)
		tmp3->set_x(tmp4);
		HX_STACK_LINE(208)
		::openfl::display::DisplayObject tmp5 = this->__displayObject;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(208)
		Float tmp6 = value->ty;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(208)
		tmp5->set_y(tmp6);
		HX_STACK_LINE(209)
		::openfl::display::DisplayObject tmp7 = this->__displayObject;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(209)
		Float tmp8 = (value->a * value->a);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(209)
		Float tmp9 = (value->b * value->b);		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(209)
		Float tmp10 = (tmp8 + tmp9);		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(209)
		Float tmp11 = ::Math_obj::sqrt(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(209)
		tmp7->set_scaleX(tmp11);
		HX_STACK_LINE(210)
		::openfl::display::DisplayObject tmp12 = this->__displayObject;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(210)
		Float tmp13 = (value->c * value->c);		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(210)
		Float tmp14 = (value->d * value->d);		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(210)
		Float tmp15 = (tmp13 + tmp14);		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(210)
		Float tmp16 = ::Math_obj::sqrt(tmp15);		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(210)
		tmp12->set_scaleY(tmp16);
		HX_STACK_LINE(211)
		::openfl::display::DisplayObject tmp17 = this->__displayObject;		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(211)
		Float tmp18 = value->b;		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(211)
		Float tmp19 = value->a;		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(211)
		Float tmp20 = ::Math_obj::atan2(tmp18,tmp19);		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(211)
		Float tmp21 = ::Math_obj::PI;		HX_STACK_VAR(tmp21,"tmp21");
		HX_STACK_LINE(211)
		Float tmp22 = (Float((int)180) / Float(tmp21));		HX_STACK_VAR(tmp22,"tmp22");
		HX_STACK_LINE(211)
		Float tmp23 = (tmp20 * tmp22);		HX_STACK_VAR(tmp23,"tmp23");
		HX_STACK_LINE(211)
		tmp17->set_rotation(tmp23);
	}
	HX_STACK_LINE(215)
	::openfl::geom::Matrix tmp3 = value;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(215)
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC1(Transform_obj,set_matrix,return )

::openfl::geom::Matrix3D Transform_obj::get_matrix3D( ){
	HX_STACK_FRAME("openfl.geom.Transform","get_matrix3D",0x05078731,"openfl.geom.Transform.get_matrix3D","openfl/geom/Transform.hx",220,0xf4f475e6)
	HX_STACK_THIS(this)
	HX_STACK_LINE(222)
	bool tmp = this->__hasMatrix3D;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(222)
	if ((tmp)){
		HX_STACK_LINE(224)
		::openfl::geom::Matrix tmp1 = ::openfl::geom::Matrix_obj::__new(null(),null(),null(),null(),null(),null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(224)
		::openfl::geom::Matrix matrix = tmp1;		HX_STACK_VAR(matrix,"matrix");
		HX_STACK_LINE(225)
		::openfl::display::DisplayObject tmp2 = this->__displayObject;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(225)
		Float tmp3 = tmp2->get_scaleX();		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(225)
		::openfl::display::DisplayObject tmp4 = this->__displayObject;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(225)
		Float tmp5 = tmp4->get_scaleY();		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(225)
		matrix->scale(tmp3,tmp5);
		HX_STACK_LINE(226)
		::openfl::display::DisplayObject tmp6 = this->__displayObject;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(226)
		Float tmp7 = tmp6->get_rotation();		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(226)
		Float tmp8 = ::Math_obj::PI;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(226)
		Float tmp9 = (Float(tmp8) / Float((int)180));		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(226)
		Float tmp10 = (tmp7 * tmp9);		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(226)
		matrix->rotate(tmp10);
		HX_STACK_LINE(227)
		::openfl::display::DisplayObject tmp11 = this->__displayObject;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(227)
		Float tmp12 = tmp11->get_x();		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(227)
		::openfl::display::DisplayObject tmp13 = this->__displayObject;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(227)
		Float tmp14 = tmp13->get_y();		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(227)
		matrix->translate(tmp12,tmp14);
		HX_STACK_LINE(229)
		::openfl::geom::Matrix3D tmp15 = ::openfl::geom::Matrix3D_obj::__new(Array_obj< Float >::__new().Add(matrix->a).Add(matrix->b).Add(((Float)0.0)).Add(((Float)0.0)).Add(matrix->c).Add(matrix->d).Add(((Float)0.0)).Add(((Float)0.0)).Add(((Float)0.0)).Add(((Float)0.0)).Add(((Float)1.0)).Add(((Float)0.0)).Add(matrix->tx).Add(matrix->ty).Add(((Float)0.0)).Add(((Float)1.0)));		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(229)
		return tmp15;
	}
	HX_STACK_LINE(233)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Transform_obj,get_matrix3D,return )

::openfl::geom::Matrix3D Transform_obj::set_matrix3D( ::openfl::geom::Matrix3D value){
	HX_STACK_FRAME("openfl.geom.Transform","set_matrix3D",0x1a00aaa5,"openfl.geom.Transform.set_matrix3D","openfl/geom/Transform.hx",238,0xf4f475e6)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(240)
	bool tmp = (value == null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(240)
	if ((tmp)){
		HX_STACK_LINE(242)
		this->__hasMatrix3D = false;
		HX_STACK_LINE(243)
		return null();
	}
	HX_STACK_LINE(247)
	this->__hasMatrix = false;
	HX_STACK_LINE(248)
	this->__hasMatrix3D = true;
	HX_STACK_LINE(250)
	::openfl::display::DisplayObject tmp1 = this->__displayObject;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(250)
	bool tmp2 = (tmp1 != null());		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(250)
	if ((tmp2)){
		HX_STACK_LINE(252)
		::openfl::display::DisplayObject tmp3 = this->__displayObject;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(252)
		Float tmp4 = value->rawData->__get((int)12);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(252)
		Dynamic tmp5 = ((Dynamic)(tmp4));		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(252)
		tmp3->set_x(tmp5);
		HX_STACK_LINE(253)
		::openfl::display::DisplayObject tmp6 = this->__displayObject;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(253)
		Float tmp7 = value->rawData->__get((int)13);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(253)
		Dynamic tmp8 = ((Dynamic)(tmp7));		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(253)
		tmp6->set_y(tmp8);
		HX_STACK_LINE(254)
		::openfl::display::DisplayObject tmp9 = this->__displayObject;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(254)
		Float tmp10 = value->rawData->__get((int)0);		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(254)
		Dynamic tmp11 = ((Dynamic)(tmp10));		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(254)
		Float tmp12 = value->rawData->__get((int)0);		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(254)
		Dynamic tmp13 = ((Dynamic)(tmp12));		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(254)
		Float tmp14 = (tmp11 * tmp13);		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(254)
		Float tmp15 = value->rawData->__get((int)1);		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(254)
		Dynamic tmp16 = ((Dynamic)(tmp15));		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(254)
		Float tmp17 = value->rawData->__get((int)1);		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(254)
		Dynamic tmp18 = ((Dynamic)(tmp17));		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(254)
		Float tmp19 = (tmp16 * tmp18);		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(254)
		Float tmp20 = (tmp14 + tmp19);		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(254)
		Float tmp21 = ::Math_obj::sqrt(tmp20);		HX_STACK_VAR(tmp21,"tmp21");
		HX_STACK_LINE(254)
		tmp9->set_scaleX(tmp21);
		HX_STACK_LINE(255)
		::openfl::display::DisplayObject tmp22 = this->__displayObject;		HX_STACK_VAR(tmp22,"tmp22");
		HX_STACK_LINE(255)
		Float tmp23 = value->rawData->__get((int)4);		HX_STACK_VAR(tmp23,"tmp23");
		HX_STACK_LINE(255)
		Dynamic tmp24 = ((Dynamic)(tmp23));		HX_STACK_VAR(tmp24,"tmp24");
		HX_STACK_LINE(255)
		Float tmp25 = value->rawData->__get((int)4);		HX_STACK_VAR(tmp25,"tmp25");
		HX_STACK_LINE(255)
		Dynamic tmp26 = ((Dynamic)(tmp25));		HX_STACK_VAR(tmp26,"tmp26");
		HX_STACK_LINE(255)
		Float tmp27 = (tmp24 * tmp26);		HX_STACK_VAR(tmp27,"tmp27");
		HX_STACK_LINE(255)
		Float tmp28 = value->rawData->__get((int)5);		HX_STACK_VAR(tmp28,"tmp28");
		HX_STACK_LINE(255)
		Dynamic tmp29 = ((Dynamic)(tmp28));		HX_STACK_VAR(tmp29,"tmp29");
		HX_STACK_LINE(255)
		Float tmp30 = value->rawData->__get((int)5);		HX_STACK_VAR(tmp30,"tmp30");
		HX_STACK_LINE(255)
		Dynamic tmp31 = ((Dynamic)(tmp30));		HX_STACK_VAR(tmp31,"tmp31");
		HX_STACK_LINE(255)
		Float tmp32 = (tmp29 * tmp31);		HX_STACK_VAR(tmp32,"tmp32");
		HX_STACK_LINE(255)
		Float tmp33 = (tmp27 + tmp32);		HX_STACK_VAR(tmp33,"tmp33");
		HX_STACK_LINE(255)
		Float tmp34 = ::Math_obj::sqrt(tmp33);		HX_STACK_VAR(tmp34,"tmp34");
		HX_STACK_LINE(255)
		tmp22->set_scaleY(tmp34);
		HX_STACK_LINE(256)
		::openfl::display::DisplayObject tmp35 = this->__displayObject;		HX_STACK_VAR(tmp35,"tmp35");
		HX_STACK_LINE(256)
		Float tmp36 = value->rawData->__get((int)1);		HX_STACK_VAR(tmp36,"tmp36");
		HX_STACK_LINE(256)
		Dynamic tmp37 = ((Dynamic)(tmp36));		HX_STACK_VAR(tmp37,"tmp37");
		HX_STACK_LINE(256)
		Float tmp38 = value->rawData->__get((int)0);		HX_STACK_VAR(tmp38,"tmp38");
		HX_STACK_LINE(256)
		Dynamic tmp39 = ((Dynamic)(tmp38));		HX_STACK_VAR(tmp39,"tmp39");
		HX_STACK_LINE(256)
		Float tmp40 = ::Math_obj::atan2(tmp37,tmp39);		HX_STACK_VAR(tmp40,"tmp40");
		HX_STACK_LINE(256)
		Float tmp41 = ::Math_obj::PI;		HX_STACK_VAR(tmp41,"tmp41");
		HX_STACK_LINE(256)
		Float tmp42 = (Float((int)180) / Float(tmp41));		HX_STACK_VAR(tmp42,"tmp42");
		HX_STACK_LINE(256)
		Float tmp43 = (tmp40 * tmp42);		HX_STACK_VAR(tmp43,"tmp43");
		HX_STACK_LINE(256)
		tmp35->set_rotation(tmp43);
	}
	HX_STACK_LINE(260)
	::openfl::geom::Matrix3D tmp3 = value;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(260)
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC1(Transform_obj,set_matrix3D,return )


Transform_obj::Transform_obj()
{
}

void Transform_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Transform);
	HX_MARK_MEMBER_NAME(concatenatedColorTransform,"concatenatedColorTransform");
	HX_MARK_MEMBER_NAME(concatenatedMatrix,"concatenatedMatrix");
	HX_MARK_MEMBER_NAME(pixelBounds,"pixelBounds");
	HX_MARK_MEMBER_NAME(__colorTransform,"__colorTransform");
	HX_MARK_MEMBER_NAME(__displayObject,"__displayObject");
	HX_MARK_MEMBER_NAME(__hasMatrix,"__hasMatrix");
	HX_MARK_MEMBER_NAME(__hasMatrix3D,"__hasMatrix3D");
	HX_MARK_END_CLASS();
}

void Transform_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(concatenatedColorTransform,"concatenatedColorTransform");
	HX_VISIT_MEMBER_NAME(concatenatedMatrix,"concatenatedMatrix");
	HX_VISIT_MEMBER_NAME(pixelBounds,"pixelBounds");
	HX_VISIT_MEMBER_NAME(__colorTransform,"__colorTransform");
	HX_VISIT_MEMBER_NAME(__displayObject,"__displayObject");
	HX_VISIT_MEMBER_NAME(__hasMatrix,"__hasMatrix");
	HX_VISIT_MEMBER_NAME(__hasMatrix3D,"__hasMatrix3D");
}

Dynamic Transform_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"matrix") ) { if (inCallProp == hx::paccAlways) return get_matrix(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"matrix3D") ) { if (inCallProp == hx::paccAlways) return get_matrix3D(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"get_matrix") ) { return get_matrix_dyn(); }
		if (HX_FIELD_EQ(inName,"set_matrix") ) { return set_matrix_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"pixelBounds") ) { return pixelBounds; }
		if (HX_FIELD_EQ(inName,"__hasMatrix") ) { return __hasMatrix; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"get_matrix3D") ) { return get_matrix3D_dyn(); }
		if (HX_FIELD_EQ(inName,"set_matrix3D") ) { return set_matrix3D_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"__hasMatrix3D") ) { return __hasMatrix3D; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"colorTransform") ) { if (inCallProp == hx::paccAlways) return get_colorTransform(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"__displayObject") ) { return __displayObject; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"__colorTransform") ) { return __colorTransform; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"concatenatedMatrix") ) { return concatenatedMatrix; }
		if (HX_FIELD_EQ(inName,"get_colorTransform") ) { return get_colorTransform_dyn(); }
		if (HX_FIELD_EQ(inName,"set_colorTransform") ) { return set_colorTransform_dyn(); }
		break;
	case 26:
		if (HX_FIELD_EQ(inName,"concatenatedColorTransform") ) { return concatenatedColorTransform; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Transform_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"matrix") ) { if (inCallProp == hx::paccAlways) return set_matrix(inValue); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"matrix3D") ) { if (inCallProp == hx::paccAlways) return set_matrix3D(inValue); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"pixelBounds") ) { pixelBounds=inValue.Cast< ::openfl::geom::Rectangle >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__hasMatrix") ) { __hasMatrix=inValue.Cast< bool >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"__hasMatrix3D") ) { __hasMatrix3D=inValue.Cast< bool >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"colorTransform") ) { if (inCallProp == hx::paccAlways) return set_colorTransform(inValue); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"__displayObject") ) { __displayObject=inValue.Cast< ::openfl::display::DisplayObject >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"__colorTransform") ) { __colorTransform=inValue.Cast< ::openfl::geom::ColorTransform >(); return inValue; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"concatenatedMatrix") ) { concatenatedMatrix=inValue.Cast< ::openfl::geom::Matrix >(); return inValue; }
		break;
	case 26:
		if (HX_FIELD_EQ(inName,"concatenatedColorTransform") ) { concatenatedColorTransform=inValue.Cast< ::openfl::geom::ColorTransform >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool Transform_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	return false;
}

void Transform_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("colorTransform","\x89","\xd7","\x3f","\xad"));
	outFields->push(HX_HCSTRING("concatenatedColorTransform","\xf8","\xe8","\x5a","\x77"));
	outFields->push(HX_HCSTRING("concatenatedMatrix","\xb0","\xc0","\x9c","\xf8"));
	outFields->push(HX_HCSTRING("matrix","\x41","\x36","\xc8","\xbb"));
	outFields->push(HX_HCSTRING("matrix3D","\x32","\x35","\xf3","\x66"));
	outFields->push(HX_HCSTRING("pixelBounds","\x9b","\x69","\xaa","\xd7"));
	outFields->push(HX_HCSTRING("__colorTransform","\xa9","\x62","\x7f","\xe1"));
	outFields->push(HX_HCSTRING("__displayObject","\x81","\x73","\x54","\x5e"));
	outFields->push(HX_HCSTRING("__hasMatrix","\x1b","\x32","\xdd","\x2a"));
	outFields->push(HX_HCSTRING("__hasMatrix3D","\x8c","\x5b","\x22","\x82"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::openfl::geom::ColorTransform*/ ,(int)offsetof(Transform_obj,concatenatedColorTransform),HX_HCSTRING("concatenatedColorTransform","\xf8","\xe8","\x5a","\x77")},
	{hx::fsObject /*::openfl::geom::Matrix*/ ,(int)offsetof(Transform_obj,concatenatedMatrix),HX_HCSTRING("concatenatedMatrix","\xb0","\xc0","\x9c","\xf8")},
	{hx::fsObject /*::openfl::geom::Rectangle*/ ,(int)offsetof(Transform_obj,pixelBounds),HX_HCSTRING("pixelBounds","\x9b","\x69","\xaa","\xd7")},
	{hx::fsObject /*::openfl::geom::ColorTransform*/ ,(int)offsetof(Transform_obj,__colorTransform),HX_HCSTRING("__colorTransform","\xa9","\x62","\x7f","\xe1")},
	{hx::fsObject /*::openfl::display::DisplayObject*/ ,(int)offsetof(Transform_obj,__displayObject),HX_HCSTRING("__displayObject","\x81","\x73","\x54","\x5e")},
	{hx::fsBool,(int)offsetof(Transform_obj,__hasMatrix),HX_HCSTRING("__hasMatrix","\x1b","\x32","\xdd","\x2a")},
	{hx::fsBool,(int)offsetof(Transform_obj,__hasMatrix3D),HX_HCSTRING("__hasMatrix3D","\x8c","\x5b","\x22","\x82")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("concatenatedColorTransform","\xf8","\xe8","\x5a","\x77"),
	HX_HCSTRING("concatenatedMatrix","\xb0","\xc0","\x9c","\xf8"),
	HX_HCSTRING("pixelBounds","\x9b","\x69","\xaa","\xd7"),
	HX_HCSTRING("__colorTransform","\xa9","\x62","\x7f","\xe1"),
	HX_HCSTRING("__displayObject","\x81","\x73","\x54","\x5e"),
	HX_HCSTRING("__hasMatrix","\x1b","\x32","\xdd","\x2a"),
	HX_HCSTRING("__hasMatrix3D","\x8c","\x5b","\x22","\x82"),
	HX_HCSTRING("get_colorTransform","\x52","\xb8","\xd9","\x48"),
	HX_HCSTRING("set_colorTransform","\xc6","\xea","\x88","\x25"),
	HX_HCSTRING("get_matrix","\x0a","\xa6","\x4f","\xac"),
	HX_HCSTRING("set_matrix","\x7e","\x44","\xcd","\xaf"),
	HX_HCSTRING("get_matrix3D","\x3b","\xe9","\x0c","\x1c"),
	HX_HCSTRING("set_matrix3D","\xaf","\x0c","\x06","\x31"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Transform_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Transform_obj::__mClass,"__mClass");
};

#endif

hx::Class Transform_obj::__mClass;

void Transform_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("openfl.geom.Transform","\x38","\xac","\x4a","\xe3");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &Transform_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Transform_obj >;
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
} // end namespace geom
