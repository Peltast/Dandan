#include <hxcpp.h>

#ifndef INCLUDED_lime_app_IModule
#include <lime/app/IModule.h>
#endif
#ifndef INCLUDED_lime_graphics_CanvasRenderContext
#include <lime/graphics/CanvasRenderContext.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_AbstractMaskManager
#include <openfl/_internal/renderer/AbstractMaskManager.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_AbstractRenderer
#include <openfl/_internal/renderer/AbstractRenderer.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_RenderSession
#include <openfl/_internal/renderer/RenderSession.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_cairo_CairoGraphics
#include <openfl/_internal/renderer/cairo/CairoGraphics.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_canvas_CanvasGraphics
#include <openfl/_internal/renderer/canvas/CanvasGraphics.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_opengl_utils_SpriteBatch
#include <openfl/_internal/renderer/opengl/utils/SpriteBatch.h>
#endif
#ifndef INCLUDED_openfl_display_DisplayObject
#include <openfl/display/DisplayObject.h>
#endif
#ifndef INCLUDED_openfl_display_DisplayObjectContainer
#include <openfl/display/DisplayObjectContainer.h>
#endif
#ifndef INCLUDED_openfl_display_DrawCommand
#include <openfl/display/DrawCommand.h>
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
#ifndef INCLUDED_openfl_display_Stage
#include <openfl/display/Stage.h>
#endif
#ifndef INCLUDED_openfl_errors_Error
#include <openfl/errors/Error.h>
#endif
#ifndef INCLUDED_openfl_errors_RangeError
#include <openfl/errors/RangeError.h>
#endif
#ifndef INCLUDED_openfl_events_Event
#include <openfl/events/Event.h>
#endif
#ifndef INCLUDED_openfl_events_EventDispatcher
#include <openfl/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_events_IEventDispatcher
#include <openfl/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_geom_Matrix
#include <openfl/geom/Matrix.h>
#endif
#ifndef INCLUDED_openfl_geom_Point
#include <openfl/geom/Point.h>
#endif
#ifndef INCLUDED_openfl_geom_Rectangle
#include <openfl/geom/Rectangle.h>
#endif
namespace openfl{
namespace display{

Void DisplayObjectContainer_obj::__construct()
{
HX_STACK_FRAME("openfl.display.DisplayObjectContainer","new",0x4362e03c,"openfl.display.DisplayObjectContainer.new","openfl/display/DisplayObjectContainer.hx",103,0x5f4d3d72)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(105)
	super::__construct();
	HX_STACK_LINE(107)
	this->mouseChildren = true;
	HX_STACK_LINE(109)
	this->__children = Array_obj< ::Dynamic >::__new();
	HX_STACK_LINE(110)
	this->__removedChildren = Array_obj< ::Dynamic >::__new();
}
;
	return null();
}

//DisplayObjectContainer_obj::~DisplayObjectContainer_obj() { }

Dynamic DisplayObjectContainer_obj::__CreateEmpty() { return  new DisplayObjectContainer_obj; }
hx::ObjectPtr< DisplayObjectContainer_obj > DisplayObjectContainer_obj::__new()
{  hx::ObjectPtr< DisplayObjectContainer_obj > _result_ = new DisplayObjectContainer_obj();
	_result_->__construct();
	return _result_;}

Dynamic DisplayObjectContainer_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< DisplayObjectContainer_obj > _result_ = new DisplayObjectContainer_obj();
	_result_->__construct();
	return _result_;}

::openfl::display::DisplayObject DisplayObjectContainer_obj::addChild( ::openfl::display::DisplayObject child){
	HX_STACK_FRAME("openfl.display.DisplayObjectContainer","addChild",0x5694c25f,"openfl.display.DisplayObjectContainer.addChild","openfl/display/DisplayObjectContainer.hx",145,0x5f4d3d72)
	HX_STACK_THIS(this)
	HX_STACK_ARG(child,"child")
	HX_STACK_LINE(147)
	bool tmp = (child != null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(147)
	if ((tmp)){
		HX_STACK_LINE(149)
		bool tmp1 = (child->parent != null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(149)
		if ((tmp1)){
			HX_STACK_LINE(151)
			::openfl::display::DisplayObject tmp2 = child;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(151)
			child->parent->removeChild(tmp2);
		}
		HX_STACK_LINE(155)
		::openfl::display::DisplayObject tmp2 = child;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(155)
		this->__children->push(tmp2);
		HX_STACK_LINE(156)
		child->parent = hx::ObjectPtr<OBJ_>(this);
		HX_STACK_LINE(158)
		::openfl::display::Stage tmp3 = this->stage;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(158)
		bool tmp4 = (tmp3 != null());		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(158)
		if ((tmp4)){
			HX_STACK_LINE(160)
			::openfl::display::Stage tmp5 = this->stage;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(160)
			child->__setStageReference(tmp5);
		}
		HX_STACK_LINE(164)
		{
			HX_STACK_LINE(164)
			bool tmp5 = child->__transformDirty;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(164)
			bool tmp6 = !(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(164)
			if ((tmp6)){
				HX_STACK_LINE(164)
				child->__transformDirty = true;
				HX_STACK_LINE(164)
				(::openfl::display::DisplayObject_obj::__worldTransformDirty)++;
			}
		}
		HX_STACK_LINE(165)
		{
			HX_STACK_LINE(165)
			bool tmp5 = child->__renderDirty;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(165)
			bool tmp6 = !(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(165)
			if ((tmp6)){
				HX_STACK_LINE(165)
				child->__renderDirty = true;
				HX_STACK_LINE(165)
				(::openfl::display::DisplayObject_obj::__worldRenderDirty)++;
			}
		}
		HX_STACK_LINE(167)
		::String tmp5 = ::openfl::events::Event_obj::ADDED;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(167)
		::openfl::events::Event tmp6 = ::openfl::events::Event_obj::__new(tmp5,true,null());		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(167)
		::openfl::events::Event event = tmp6;		HX_STACK_VAR(event,"event");
		HX_STACK_LINE(168)
		event->target = child;
		HX_STACK_LINE(169)
		::openfl::events::Event tmp7 = event;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(169)
		child->__dispatchEvent(tmp7);
	}
	HX_STACK_LINE(173)
	::openfl::display::DisplayObject tmp1 = child;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(173)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC1(DisplayObjectContainer_obj,addChild,return )

::openfl::display::DisplayObject DisplayObjectContainer_obj::addChildAt( ::openfl::display::DisplayObject child,int index){
	HX_STACK_FRAME("openfl.display.DisplayObjectContainer","addChildAt",0xb7119132,"openfl.display.DisplayObjectContainer.addChildAt","openfl/display/DisplayObjectContainer.hx",207,0x5f4d3d72)
	HX_STACK_THIS(this)
	HX_STACK_ARG(child,"child")
	HX_STACK_ARG(index,"index")
	HX_STACK_LINE(209)
	int tmp = index;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(209)
	int tmp1 = this->__children->length;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(209)
	bool tmp2 = (tmp > tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(209)
	bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(209)
	bool tmp4;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(209)
	if ((tmp3)){
		HX_STACK_LINE(209)
		tmp4 = (index < (int)0);
	}
	else{
		HX_STACK_LINE(209)
		tmp4 = true;
	}
	HX_STACK_LINE(209)
	if ((tmp4)){
		HX_STACK_LINE(211)
		::String tmp5 = (HX_HCSTRING("Invalid index position ","\x80","\x59","\x50","\x86") + index);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(211)
		HX_STACK_DO_THROW(tmp5);
	}
	HX_STACK_LINE(215)
	bool tmp5 = (child->parent == hx::ObjectPtr<OBJ_>(this));		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(215)
	if ((tmp5)){
		HX_STACK_LINE(217)
		::openfl::display::DisplayObject tmp6 = child;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(217)
		this->__children->remove(tmp6);
	}
	else{
		HX_STACK_LINE(221)
		bool tmp6 = (child->parent != null());		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(221)
		if ((tmp6)){
			HX_STACK_LINE(223)
			::openfl::display::DisplayObject tmp7 = child;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(223)
			child->parent->removeChild(tmp7);
		}
		HX_STACK_LINE(227)
		child->parent = hx::ObjectPtr<OBJ_>(this);
		HX_STACK_LINE(229)
		::openfl::display::Stage tmp7 = this->stage;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(229)
		bool tmp8 = (tmp7 != null());		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(229)
		if ((tmp8)){
			HX_STACK_LINE(231)
			::openfl::display::Stage tmp9 = this->stage;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(231)
			child->__setStageReference(tmp9);
		}
		HX_STACK_LINE(235)
		{
			HX_STACK_LINE(235)
			bool tmp9 = child->__transformDirty;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(235)
			bool tmp10 = !(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(235)
			if ((tmp10)){
				HX_STACK_LINE(235)
				child->__transformDirty = true;
				HX_STACK_LINE(235)
				(::openfl::display::DisplayObject_obj::__worldTransformDirty)++;
			}
		}
		HX_STACK_LINE(236)
		{
			HX_STACK_LINE(236)
			bool tmp9 = child->__renderDirty;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(236)
			bool tmp10 = !(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(236)
			if ((tmp10)){
				HX_STACK_LINE(236)
				child->__renderDirty = true;
				HX_STACK_LINE(236)
				(::openfl::display::DisplayObject_obj::__worldRenderDirty)++;
			}
		}
		HX_STACK_LINE(238)
		::String tmp9 = ::openfl::events::Event_obj::ADDED;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(238)
		::openfl::events::Event tmp10 = ::openfl::events::Event_obj::__new(tmp9,true,null());		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(238)
		::openfl::events::Event event = tmp10;		HX_STACK_VAR(event,"event");
		HX_STACK_LINE(239)
		event->target = child;
		HX_STACK_LINE(240)
		::openfl::events::Event tmp11 = event;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(240)
		child->__dispatchEvent(tmp11);
	}
	HX_STACK_LINE(244)
	int tmp6 = index;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(244)
	::openfl::display::DisplayObject tmp7 = child;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(244)
	this->__children->insert(tmp6,tmp7);
	HX_STACK_LINE(246)
	::openfl::display::DisplayObject tmp8 = child;		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(246)
	return tmp8;
}


HX_DEFINE_DYNAMIC_FUNC2(DisplayObjectContainer_obj,addChildAt,return )

bool DisplayObjectContainer_obj::areInaccessibleObjectsUnderPoint( ::openfl::geom::Point point){
	HX_STACK_FRAME("openfl.display.DisplayObjectContainer","areInaccessibleObjectsUnderPoint",0x2380e0e1,"openfl.display.DisplayObjectContainer.areInaccessibleObjectsUnderPoint","openfl/display/DisplayObjectContainer.hx",274,0x5f4d3d72)
	HX_STACK_THIS(this)
	HX_STACK_ARG(point,"point")
	HX_STACK_LINE(274)
	return false;
}


HX_DEFINE_DYNAMIC_FUNC1(DisplayObjectContainer_obj,areInaccessibleObjectsUnderPoint,return )

bool DisplayObjectContainer_obj::contains( ::openfl::display::DisplayObject child){
	HX_STACK_FRAME("openfl.display.DisplayObjectContainer","contains",0xc3f94cc3,"openfl.display.DisplayObjectContainer.contains","openfl/display/DisplayObjectContainer.hx",291,0x5f4d3d72)
	HX_STACK_THIS(this)
	HX_STACK_ARG(child,"child")
	HX_STACK_LINE(293)
	while((true)){
		HX_STACK_LINE(293)
		bool tmp = (child != hx::ObjectPtr<OBJ_>(this));		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(293)
		bool tmp1;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(293)
		if ((tmp)){
			HX_STACK_LINE(293)
			tmp1 = (child != null());
		}
		else{
			HX_STACK_LINE(293)
			tmp1 = false;
		}
		HX_STACK_LINE(293)
		bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(293)
		if ((tmp2)){
			HX_STACK_LINE(293)
			break;
		}
		HX_STACK_LINE(295)
		child = child->parent;
	}
	HX_STACK_LINE(299)
	bool tmp = (child == hx::ObjectPtr<OBJ_>(this));		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(299)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC1(DisplayObjectContainer_obj,contains,return )

::openfl::display::DisplayObject DisplayObjectContainer_obj::getChildAt( int index){
	HX_STACK_FRAME("openfl.display.DisplayObjectContainer","getChildAt",0x9ee8eb5d,"openfl.display.DisplayObjectContainer.getChildAt","openfl/display/DisplayObjectContainer.hx",317,0x5f4d3d72)
	HX_STACK_THIS(this)
	HX_STACK_ARG(index,"index")
	HX_STACK_LINE(319)
	bool tmp = (index >= (int)0);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(319)
	bool tmp1;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(319)
	if ((tmp)){
		HX_STACK_LINE(319)
		int tmp2 = index;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(319)
		int tmp3 = this->__children->length;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(319)
		int tmp4 = tmp3;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(319)
		tmp1 = (tmp2 < tmp4);
	}
	else{
		HX_STACK_LINE(319)
		tmp1 = false;
	}
	HX_STACK_LINE(319)
	if ((tmp1)){
		HX_STACK_LINE(321)
		::openfl::display::DisplayObject tmp2 = this->__children->__get(index).StaticCast< ::openfl::display::DisplayObject >();		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(321)
		return tmp2;
	}
	HX_STACK_LINE(325)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC1(DisplayObjectContainer_obj,getChildAt,return )

::openfl::display::DisplayObject DisplayObjectContainer_obj::getChildByName( ::String name){
	HX_STACK_FRAME("openfl.display.DisplayObjectContainer","getChildByName",0x64b33f2c,"openfl.display.DisplayObjectContainer.getChildByName","openfl/display/DisplayObjectContainer.hx",348,0x5f4d3d72)
	HX_STACK_THIS(this)
	HX_STACK_ARG(name,"name")
	HX_STACK_LINE(350)
	{
		HX_STACK_LINE(350)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(350)
		Array< ::Dynamic > _g1 = this->__children;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(350)
		while((true)){
			HX_STACK_LINE(350)
			bool tmp = (_g < _g1->length);		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(350)
			bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(350)
			if ((tmp1)){
				HX_STACK_LINE(350)
				break;
			}
			HX_STACK_LINE(350)
			::openfl::display::DisplayObject tmp2 = _g1->__get(_g).StaticCast< ::openfl::display::DisplayObject >();		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(350)
			::openfl::display::DisplayObject child = tmp2;		HX_STACK_VAR(child,"child");
			HX_STACK_LINE(350)
			++(_g);
			HX_STACK_LINE(352)
			::String tmp3 = child->get_name();		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(352)
			::String tmp4 = name;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(352)
			bool tmp5 = (tmp3 == tmp4);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(352)
			if ((tmp5)){
				HX_STACK_LINE(352)
				::openfl::display::DisplayObject tmp6 = child;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(352)
				return tmp6;
			}
		}
	}
	HX_STACK_LINE(356)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC1(DisplayObjectContainer_obj,getChildByName,return )

int DisplayObjectContainer_obj::getChildIndex( ::openfl::display::DisplayObject child){
	HX_STACK_FRAME("openfl.display.DisplayObjectContainer","getChildIndex",0xcc3e62e8,"openfl.display.DisplayObjectContainer.getChildIndex","openfl/display/DisplayObjectContainer.hx",369,0x5f4d3d72)
	HX_STACK_THIS(this)
	HX_STACK_ARG(child,"child")
	HX_STACK_LINE(371)
	{
		HX_STACK_LINE(371)
		int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(371)
		int tmp = this->__children->length;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(371)
		int _g = tmp;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(371)
		while((true)){
			HX_STACK_LINE(371)
			bool tmp1 = (_g1 < _g);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(371)
			bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(371)
			if ((tmp2)){
				HX_STACK_LINE(371)
				break;
			}
			HX_STACK_LINE(371)
			int tmp3 = (_g1)++;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(371)
			int i = tmp3;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(373)
			::openfl::display::DisplayObject tmp4 = this->__children->__get(i).StaticCast< ::openfl::display::DisplayObject >();		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(373)
			::openfl::display::DisplayObject tmp5 = child;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(373)
			bool tmp6 = (tmp4 == tmp5);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(373)
			if ((tmp6)){
				HX_STACK_LINE(373)
				int tmp7 = i;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(373)
				return tmp7;
			}
		}
	}
	HX_STACK_LINE(377)
	return (int)-1;
}


HX_DEFINE_DYNAMIC_FUNC1(DisplayObjectContainer_obj,getChildIndex,return )

Array< ::Dynamic > DisplayObjectContainer_obj::getObjectsUnderPoint( ::openfl::geom::Point point){
	HX_STACK_FRAME("openfl.display.DisplayObjectContainer","getObjectsUnderPoint",0x85c6693a,"openfl.display.DisplayObjectContainer.getObjectsUnderPoint","openfl/display/DisplayObjectContainer.hx",401,0x5f4d3d72)
	HX_STACK_THIS(this)
	HX_STACK_ARG(point,"point")
	HX_STACK_LINE(403)
	::openfl::geom::Point tmp = point;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(403)
	::openfl::geom::Point tmp1 = this->localToGlobal(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(403)
	point = tmp1;
	HX_STACK_LINE(404)
	Array< ::Dynamic > stack = Array_obj< ::Dynamic >::__new();		HX_STACK_VAR(stack,"stack");
	HX_STACK_LINE(405)
	Float tmp2 = point->x;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(405)
	Float tmp3 = point->y;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(405)
	this->__hitTest(tmp2,tmp3,false,stack,false);
	HX_STACK_LINE(406)
	stack->reverse();
	HX_STACK_LINE(407)
	return stack;
}


HX_DEFINE_DYNAMIC_FUNC1(DisplayObjectContainer_obj,getObjectsUnderPoint,return )

::openfl::display::DisplayObject DisplayObjectContainer_obj::removeChild( ::openfl::display::DisplayObject child){
	HX_STACK_FRAME("openfl.display.DisplayObjectContainer","removeChild",0x1a99d294,"openfl.display.DisplayObjectContainer.removeChild","openfl/display/DisplayObjectContainer.hx",431,0x5f4d3d72)
	HX_STACK_THIS(this)
	HX_STACK_ARG(child,"child")
	HX_STACK_LINE(433)
	bool tmp = (child != null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(433)
	bool tmp1;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(433)
	if ((tmp)){
		HX_STACK_LINE(433)
		tmp1 = (child->parent == hx::ObjectPtr<OBJ_>(this));
	}
	else{
		HX_STACK_LINE(433)
		tmp1 = false;
	}
	HX_STACK_LINE(433)
	if ((tmp1)){
		HX_STACK_LINE(435)
		::openfl::display::Stage tmp2 = this->stage;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(435)
		bool tmp3 = (tmp2 != null());		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(435)
		if ((tmp3)){
			HX_STACK_LINE(437)
			child->__setStageReference(null());
		}
		HX_STACK_LINE(441)
		child->parent = null();
		HX_STACK_LINE(442)
		::openfl::display::DisplayObject tmp4 = child;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(442)
		this->__children->remove(tmp4);
		HX_STACK_LINE(443)
		::openfl::display::DisplayObject tmp5 = child;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(443)
		this->__removedChildren->push(tmp5);
		HX_STACK_LINE(444)
		{
			HX_STACK_LINE(444)
			bool tmp6 = child->__transformDirty;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(444)
			bool tmp7 = !(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(444)
			if ((tmp7)){
				HX_STACK_LINE(444)
				child->__transformDirty = true;
				HX_STACK_LINE(444)
				(::openfl::display::DisplayObject_obj::__worldTransformDirty)++;
			}
		}
		HX_STACK_LINE(445)
		{
			HX_STACK_LINE(445)
			bool tmp6 = child->__renderDirty;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(445)
			bool tmp7 = !(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(445)
			if ((tmp7)){
				HX_STACK_LINE(445)
				child->__renderDirty = true;
				HX_STACK_LINE(445)
				(::openfl::display::DisplayObject_obj::__worldRenderDirty)++;
			}
		}
		HX_STACK_LINE(446)
		::String tmp6 = ::openfl::events::Event_obj::REMOVED;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(446)
		::openfl::events::Event tmp7 = ::openfl::events::Event_obj::__new(tmp6,true,null());		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(446)
		child->__dispatchEvent(tmp7);
	}
	HX_STACK_LINE(450)
	::openfl::display::DisplayObject tmp2 = child;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(450)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC1(DisplayObjectContainer_obj,removeChild,return )

::openfl::display::DisplayObject DisplayObjectContainer_obj::removeChildAt( int index){
	HX_STACK_FRAME("openfl.display.DisplayObjectContainer","removeChildAt",0x52a2d8a7,"openfl.display.DisplayObjectContainer.removeChildAt","openfl/display/DisplayObjectContainer.hx",477,0x5f4d3d72)
	HX_STACK_THIS(this)
	HX_STACK_ARG(index,"index")
	HX_STACK_LINE(479)
	bool tmp = (index >= (int)0);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(479)
	bool tmp1;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(479)
	if ((tmp)){
		HX_STACK_LINE(479)
		int tmp2 = index;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(479)
		int tmp3 = this->__children->length;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(479)
		int tmp4 = tmp3;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(479)
		tmp1 = (tmp2 < tmp4);
	}
	else{
		HX_STACK_LINE(479)
		tmp1 = false;
	}
	HX_STACK_LINE(479)
	if ((tmp1)){
		HX_STACK_LINE(481)
		::openfl::display::DisplayObject tmp2 = this->__children->__get(index).StaticCast< ::openfl::display::DisplayObject >();		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(481)
		::openfl::display::DisplayObject tmp3 = this->removeChild(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(481)
		return tmp3;
	}
	HX_STACK_LINE(485)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC1(DisplayObjectContainer_obj,removeChildAt,return )

Void DisplayObjectContainer_obj::removeChildren( hx::Null< int >  __o_beginIndex,hx::Null< int >  __o_endIndex){
int beginIndex = __o_beginIndex.Default(0);
int endIndex = __o_endIndex.Default(2147483647);
	HX_STACK_FRAME("openfl.display.DisplayObjectContainer","removeChildren",0xfbffdb47,"openfl.display.DisplayObjectContainer.removeChildren","openfl/display/DisplayObjectContainer.hx",490,0x5f4d3d72)
	HX_STACK_THIS(this)
	HX_STACK_ARG(beginIndex,"beginIndex")
	HX_STACK_ARG(endIndex,"endIndex")
{
		HX_STACK_LINE(492)
		bool tmp = (endIndex == (int)2147483647);		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(492)
		if ((tmp)){
			HX_STACK_LINE(494)
			int tmp1 = this->__children->length;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(494)
			int tmp2 = (tmp1 - (int)1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(494)
			endIndex = tmp2;
			HX_STACK_LINE(496)
			bool tmp3 = (endIndex < (int)0);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(496)
			if ((tmp3)){
				HX_STACK_LINE(498)
				return null();
			}
		}
		HX_STACK_LINE(504)
		int tmp1 = beginIndex;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(504)
		int tmp2 = this->__children->length;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(504)
		int tmp3 = (tmp2 - (int)1);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(504)
		bool tmp4 = (tmp1 > tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(504)
		if ((tmp4)){
			HX_STACK_LINE(506)
			return null();
		}
		else{
			HX_STACK_LINE(508)
			bool tmp5 = (endIndex < beginIndex);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(508)
			bool tmp6 = !(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(508)
			bool tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(508)
			bool tmp8;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(508)
			if ((tmp7)){
				HX_STACK_LINE(508)
				tmp8 = (beginIndex < (int)0);
			}
			else{
				HX_STACK_LINE(508)
				tmp8 = true;
			}
			HX_STACK_LINE(508)
			bool tmp9 = !(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(508)
			bool tmp10;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(508)
			if ((tmp9)){
				HX_STACK_LINE(508)
				int tmp11 = endIndex;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(508)
				int tmp12 = this->__children->length;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(508)
				int tmp13 = tmp12;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(508)
				tmp10 = (tmp11 > tmp13);
			}
			else{
				HX_STACK_LINE(508)
				tmp10 = true;
			}
			HX_STACK_LINE(508)
			if ((tmp10)){
				HX_STACK_LINE(510)
				::openfl::errors::RangeError tmp11 = ::openfl::errors::RangeError_obj::__new(HX_HCSTRING("The supplied index is out of bounds.","\x17","\x96","\x1b","\x51"));		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(510)
				HX_STACK_DO_THROW(tmp11);
			}
		}
		HX_STACK_LINE(514)
		int tmp5 = (endIndex - beginIndex);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(514)
		int numRemovals = tmp5;		HX_STACK_VAR(numRemovals,"numRemovals");
		HX_STACK_LINE(515)
		while((true)){
			HX_STACK_LINE(515)
			bool tmp6 = (numRemovals >= (int)0);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(515)
			bool tmp7 = !(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(515)
			if ((tmp7)){
				HX_STACK_LINE(515)
				break;
			}
			HX_STACK_LINE(517)
			int tmp8 = beginIndex;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(517)
			this->removeChildAt(tmp8);
			HX_STACK_LINE(518)
			(numRemovals)--;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(DisplayObjectContainer_obj,removeChildren,(void))

Void DisplayObjectContainer_obj::setChildIndex( ::openfl::display::DisplayObject child,int index){
{
		HX_STACK_FRAME("openfl.display.DisplayObjectContainer","setChildIndex",0x114444f4,"openfl.display.DisplayObjectContainer.setChildIndex","openfl/display/DisplayObjectContainer.hx",553,0x5f4d3d72)
		HX_STACK_THIS(this)
		HX_STACK_ARG(child,"child")
		HX_STACK_ARG(index,"index")
		HX_STACK_LINE(555)
		bool tmp = (index >= (int)0);		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(555)
		bool tmp1 = tmp;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(555)
		bool tmp2;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(555)
		if ((tmp1)){
			HX_STACK_LINE(555)
			int tmp3 = index;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(555)
			int tmp4 = this->__children->length;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(555)
			int tmp5 = tmp4;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(555)
			int tmp6 = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(555)
			tmp2 = (tmp3 <= tmp6);
		}
		else{
			HX_STACK_LINE(555)
			tmp2 = false;
		}
		HX_STACK_LINE(555)
		bool tmp3;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(555)
		if ((tmp2)){
			HX_STACK_LINE(555)
			tmp3 = (child->parent == hx::ObjectPtr<OBJ_>(this));
		}
		else{
			HX_STACK_LINE(555)
			tmp3 = false;
		}
		HX_STACK_LINE(555)
		if ((tmp3)){
			HX_STACK_LINE(557)
			::openfl::display::DisplayObject tmp4 = child;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(557)
			this->__children->remove(tmp4);
			HX_STACK_LINE(558)
			int tmp5 = index;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(558)
			::openfl::display::DisplayObject tmp6 = child;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(558)
			this->__children->insert(tmp5,tmp6);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(DisplayObjectContainer_obj,setChildIndex,(void))

Void DisplayObjectContainer_obj::swapChildren( ::openfl::display::DisplayObject child1,::openfl::display::DisplayObject child2){
{
		HX_STACK_FRAME("openfl.display.DisplayObjectContainer","swapChildren",0xe0695f96,"openfl.display.DisplayObjectContainer.swapChildren","openfl/display/DisplayObjectContainer.hx",575,0x5f4d3d72)
		HX_STACK_THIS(this)
		HX_STACK_ARG(child1,"child1")
		HX_STACK_ARG(child2,"child2")
		HX_STACK_LINE(577)
		bool tmp = (child1->parent == hx::ObjectPtr<OBJ_>(this));		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(577)
		bool tmp1;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(577)
		if ((tmp)){
			HX_STACK_LINE(577)
			tmp1 = (child2->parent == hx::ObjectPtr<OBJ_>(this));
		}
		else{
			HX_STACK_LINE(577)
			tmp1 = false;
		}
		HX_STACK_LINE(577)
		if ((tmp1)){
			HX_STACK_LINE(581)
			::openfl::display::DisplayObject tmp2 = child1;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(581)
			int tmp3 = this->__children->indexOf(tmp2,null());		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(581)
			int index1 = tmp3;		HX_STACK_VAR(index1,"index1");
			HX_STACK_LINE(582)
			::openfl::display::DisplayObject tmp4 = child2;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(582)
			int tmp5 = this->__children->indexOf(tmp4,null());		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(582)
			int index2 = tmp5;		HX_STACK_VAR(index2,"index2");
			HX_STACK_LINE(605)
			::openfl::display::DisplayObject tmp6 = child2;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(605)
			this->__children[index1] = tmp6;
			HX_STACK_LINE(606)
			::openfl::display::DisplayObject tmp7 = child1;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(606)
			this->__children[index2] = tmp7;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(DisplayObjectContainer_obj,swapChildren,(void))

Void DisplayObjectContainer_obj::swapChildrenAt( int child1,int child2){
{
		HX_STACK_FRAME("openfl.display.DisplayObjectContainer","swapChildrenAt",0xd5312a29,"openfl.display.DisplayObjectContainer.swapChildrenAt","openfl/display/DisplayObjectContainer.hx",622,0x5f4d3d72)
		HX_STACK_THIS(this)
		HX_STACK_ARG(child1,"child1")
		HX_STACK_ARG(child2,"child2")
		HX_STACK_LINE(624)
		::openfl::display::DisplayObject tmp = this->__children->__get(child1).StaticCast< ::openfl::display::DisplayObject >();		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(624)
		::openfl::display::DisplayObject swap = tmp;		HX_STACK_VAR(swap,"swap");
		HX_STACK_LINE(625)
		::openfl::display::DisplayObject tmp1 = this->__children->__get(child2).StaticCast< ::openfl::display::DisplayObject >();		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(625)
		this->__children[child1] = tmp1;
		HX_STACK_LINE(626)
		::openfl::display::DisplayObject tmp2 = swap;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(626)
		this->__children[child2] = tmp2;
		HX_STACK_LINE(627)
		swap = null();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(DisplayObjectContainer_obj,swapChildrenAt,(void))

bool DisplayObjectContainer_obj::__broadcast( ::openfl::events::Event event,bool notifyChilden){
	HX_STACK_FRAME("openfl.display.DisplayObjectContainer","__broadcast",0xe3f237bd,"openfl.display.DisplayObjectContainer.__broadcast","openfl/display/DisplayObjectContainer.hx",632,0x5f4d3d72)
	HX_STACK_THIS(this)
	HX_STACK_ARG(event,"event")
	HX_STACK_ARG(notifyChilden,"notifyChilden")
	HX_STACK_LINE(634)
	bool tmp = (event->target == null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(634)
	if ((tmp)){
		HX_STACK_LINE(636)
		event->target = hx::ObjectPtr<OBJ_>(this);
	}
	HX_STACK_LINE(640)
	::openfl::events::Event tmp1 = event;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(640)
	bool tmp2 = notifyChilden;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(640)
	bool tmp3 = this->super::__broadcast(tmp1,tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(640)
	bool result = tmp3;		HX_STACK_VAR(result,"result");
	HX_STACK_LINE(642)
	bool tmp4 = event->__isCancelled;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(642)
	bool tmp5 = tmp4;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(642)
	bool tmp6 = !(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(642)
	bool tmp7;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(642)
	if ((tmp6)){
		HX_STACK_LINE(642)
		tmp7 = notifyChilden;
	}
	else{
		HX_STACK_LINE(642)
		tmp7 = false;
	}
	HX_STACK_LINE(642)
	if ((tmp7)){
		HX_STACK_LINE(644)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(644)
		Array< ::Dynamic > _g1 = this->__children;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(644)
		while((true)){
			HX_STACK_LINE(644)
			bool tmp8 = (_g < _g1->length);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(644)
			bool tmp9 = !(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(644)
			if ((tmp9)){
				HX_STACK_LINE(644)
				break;
			}
			HX_STACK_LINE(644)
			::openfl::display::DisplayObject tmp10 = _g1->__get(_g).StaticCast< ::openfl::display::DisplayObject >();		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(644)
			::openfl::display::DisplayObject child = tmp10;		HX_STACK_VAR(child,"child");
			HX_STACK_LINE(644)
			++(_g);
			HX_STACK_LINE(646)
			::openfl::events::Event tmp11 = event;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(646)
			child->__broadcast(tmp11,true);
			HX_STACK_LINE(648)
			bool tmp12 = event->__isCancelled;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(648)
			if ((tmp12)){
				HX_STACK_LINE(650)
				return true;
			}
		}
	}
	HX_STACK_LINE(658)
	bool tmp8 = result;		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(658)
	return tmp8;
}


Void DisplayObjectContainer_obj::__enterFrame( ){
{
		HX_STACK_FRAME("openfl.display.DisplayObjectContainer","__enterFrame",0x3af993b9,"openfl.display.DisplayObjectContainer.__enterFrame","openfl/display/DisplayObjectContainer.hx",665,0x5f4d3d72)
		HX_STACK_THIS(this)
		HX_STACK_LINE(665)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(665)
		Array< ::Dynamic > _g1 = this->__children;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(665)
		while((true)){
			HX_STACK_LINE(665)
			bool tmp = (_g < _g1->length);		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(665)
			bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(665)
			if ((tmp1)){
				HX_STACK_LINE(665)
				break;
			}
			HX_STACK_LINE(665)
			::openfl::display::DisplayObject tmp2 = _g1->__get(_g).StaticCast< ::openfl::display::DisplayObject >();		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(665)
			::openfl::display::DisplayObject child = tmp2;		HX_STACK_VAR(child,"child");
			HX_STACK_LINE(665)
			++(_g);
			HX_STACK_LINE(667)
			child->__enterFrame();
		}
	}
return null();
}


Void DisplayObjectContainer_obj::__getBounds( ::openfl::geom::Rectangle rect,::openfl::geom::Matrix matrix){
{
		HX_STACK_FRAME("openfl.display.DisplayObjectContainer","__getBounds",0xe74ca467,"openfl.display.DisplayObjectContainer.__getBounds","openfl/display/DisplayObjectContainer.hx",674,0x5f4d3d72)
		HX_STACK_THIS(this)
		HX_STACK_ARG(rect,"rect")
		HX_STACK_ARG(matrix,"matrix")
		HX_STACK_LINE(676)
		::openfl::geom::Rectangle tmp = rect;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(676)
		::openfl::geom::Matrix tmp1 = matrix;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(676)
		this->super::__getBounds(tmp,tmp1);
		HX_STACK_LINE(678)
		int tmp2 = this->__children->length;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(678)
		bool tmp3 = (tmp2 == (int)0);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(678)
		if ((tmp3)){
			HX_STACK_LINE(678)
			return null();
		}
		HX_STACK_LINE(680)
		::openfl::geom::Matrix matrixCache = null();		HX_STACK_VAR(matrixCache,"matrixCache");
		HX_STACK_LINE(682)
		bool tmp4 = (matrix != null());		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(682)
		if ((tmp4)){
			HX_STACK_LINE(684)
			::openfl::geom::Matrix tmp5 = this->__worldTransform;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(684)
			matrixCache = tmp5;
			HX_STACK_LINE(685)
			this->__worldTransform = matrix;
			HX_STACK_LINE(686)
			this->__updateChildren(true);
		}
		HX_STACK_LINE(690)
		{
			HX_STACK_LINE(690)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(690)
			Array< ::Dynamic > _g1 = this->__children;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(690)
			while((true)){
				HX_STACK_LINE(690)
				bool tmp5 = (_g < _g1->length);		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(690)
				bool tmp6 = !(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(690)
				if ((tmp6)){
					HX_STACK_LINE(690)
					break;
				}
				HX_STACK_LINE(690)
				::openfl::display::DisplayObject tmp7 = _g1->__get(_g).StaticCast< ::openfl::display::DisplayObject >();		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(690)
				::openfl::display::DisplayObject child = tmp7;		HX_STACK_VAR(child,"child");
				HX_STACK_LINE(690)
				++(_g);
				HX_STACK_LINE(692)
				bool tmp8 = child->__renderable;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(692)
				bool tmp9 = !(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(692)
				if ((tmp9)){
					HX_STACK_LINE(692)
					continue;
				}
				HX_STACK_LINE(693)
				::openfl::geom::Rectangle tmp10 = rect;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(693)
				::openfl::geom::Matrix tmp11 = child->__worldTransform;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(693)
				child->__getBounds(tmp10,tmp11);
			}
		}
		HX_STACK_LINE(697)
		bool tmp5 = (matrix != null());		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(697)
		if ((tmp5)){
			HX_STACK_LINE(699)
			this->__worldTransform = matrixCache;
			HX_STACK_LINE(700)
			this->__updateChildren(true);
		}
	}
return null();
}


bool DisplayObjectContainer_obj::__hitTest( Float x,Float y,bool shapeFlag,Array< ::Dynamic > stack,bool interactiveOnly){
	HX_STACK_FRAME("openfl.display.DisplayObjectContainer","__hitTest",0x5a840e01,"openfl.display.DisplayObjectContainer.__hitTest","openfl/display/DisplayObjectContainer.hx",707,0x5f4d3d72)
	HX_STACK_THIS(this)
	HX_STACK_ARG(x,"x")
	HX_STACK_ARG(y,"y")
	HX_STACK_ARG(shapeFlag,"shapeFlag")
	HX_STACK_ARG(stack,"stack")
	HX_STACK_ARG(interactiveOnly,"interactiveOnly")
	HX_STACK_LINE(709)
	bool tmp = this->get_visible();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(709)
	bool tmp1 = tmp;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(709)
	bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(709)
	bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(709)
	bool tmp4 = tmp3;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(709)
	bool tmp5;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(709)
	if ((tmp4)){
		HX_STACK_LINE(709)
		tmp5 = this->__isMask;
	}
	else{
		HX_STACK_LINE(709)
		tmp5 = true;
	}
	HX_STACK_LINE(709)
	bool tmp6 = !(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(709)
	bool tmp7;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(709)
	if ((tmp6)){
		HX_STACK_LINE(709)
		bool tmp8 = interactiveOnly;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(709)
		bool tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(709)
		bool tmp10;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(709)
		bool tmp11 = tmp9;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(709)
		if ((tmp11)){
			HX_STACK_LINE(709)
			bool tmp12 = this->mouseEnabled;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(709)
			bool tmp13 = tmp12;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(709)
			bool tmp14 = tmp13;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(709)
			bool tmp15 = tmp14;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(709)
			bool tmp16 = tmp15;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(709)
			bool tmp17 = tmp16;		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(709)
			bool tmp18 = tmp17;		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(709)
			bool tmp19 = !(tmp18);		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(709)
			tmp10 = tmp19;
		}
		else{
			HX_STACK_LINE(709)
			tmp10 = false;
		}
		HX_STACK_LINE(709)
		bool tmp12 = tmp10;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(709)
		if ((tmp12)){
			HX_STACK_LINE(709)
			bool tmp13 = this->mouseChildren;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(709)
			bool tmp14 = tmp13;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(709)
			bool tmp15 = tmp14;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(709)
			bool tmp16 = tmp15;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(709)
			bool tmp17 = tmp16;		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(709)
			tmp7 = !(tmp17);
		}
		else{
			HX_STACK_LINE(709)
			tmp7 = false;
		}
	}
	else{
		HX_STACK_LINE(709)
		tmp7 = true;
	}
	HX_STACK_LINE(709)
	if ((tmp7)){
		HX_STACK_LINE(709)
		return false;
	}
	HX_STACK_LINE(711)
	::openfl::geom::Rectangle tmp8 = this->get_scrollRect();		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(711)
	bool tmp9 = (tmp8 != null());		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(711)
	bool tmp10;		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(711)
	if ((tmp9)){
		HX_STACK_LINE(711)
		::openfl::geom::Rectangle tmp11 = this->get_scrollRect();		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(711)
		::openfl::geom::Rectangle tmp12 = tmp11;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(711)
		::openfl::geom::Point tmp13 = ::openfl::geom::Point_obj::__new(x,y);		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(711)
		::openfl::geom::Point tmp14 = tmp13;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(711)
		::openfl::geom::Point tmp15 = tmp14;		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(711)
		::openfl::geom::Point tmp16 = this->globalToLocal(tmp15);		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(711)
		::openfl::geom::Point tmp17 = tmp16;		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(711)
		::openfl::geom::Point tmp18 = tmp17;		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(711)
		bool tmp19 = tmp12->containsPoint(tmp18);		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(711)
		bool tmp20 = tmp19;		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(711)
		bool tmp21 = tmp20;		HX_STACK_VAR(tmp21,"tmp21");
		HX_STACK_LINE(711)
		tmp10 = !(tmp21);
	}
	else{
		HX_STACK_LINE(711)
		tmp10 = false;
	}
	HX_STACK_LINE(711)
	if ((tmp10)){
		HX_STACK_LINE(711)
		return false;
	}
	HX_STACK_LINE(713)
	int tmp11 = this->__children->length;		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(713)
	int i = tmp11;		HX_STACK_VAR(i,"i");
	HX_STACK_LINE(714)
	bool tmp12 = interactiveOnly;		HX_STACK_VAR(tmp12,"tmp12");
	HX_STACK_LINE(714)
	if ((tmp12)){
		HX_STACK_LINE(716)
		bool tmp13 = (stack == null());		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(716)
		bool tmp14 = !(tmp13);		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(716)
		bool tmp15;		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(716)
		if ((tmp14)){
			HX_STACK_LINE(716)
			bool tmp16 = this->mouseChildren;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(716)
			bool tmp17 = tmp16;		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(716)
			bool tmp18 = tmp17;		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(716)
			tmp15 = !(tmp18);
		}
		else{
			HX_STACK_LINE(716)
			tmp15 = true;
		}
		HX_STACK_LINE(716)
		if ((tmp15)){
			HX_STACK_LINE(718)
			while((true)){
				HX_STACK_LINE(718)
				int tmp16 = --(i);		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(718)
				bool tmp17 = (tmp16 >= (int)0);		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(718)
				bool tmp18 = !(tmp17);		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(718)
				if ((tmp18)){
					HX_STACK_LINE(718)
					break;
				}
				HX_STACK_LINE(720)
				::openfl::display::DisplayObject tmp19 = this->__children->__get(i).StaticCast< ::openfl::display::DisplayObject >();		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(720)
				Float tmp20 = x;		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(720)
				Float tmp21 = y;		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(720)
				bool tmp22 = shapeFlag;		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(720)
				bool tmp23 = tmp19->__hitTest(tmp20,tmp21,tmp22,null(),true);		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(720)
				if ((tmp23)){
					HX_STACK_LINE(722)
					bool tmp24 = (stack != null());		HX_STACK_VAR(tmp24,"tmp24");
					HX_STACK_LINE(722)
					if ((tmp24)){
						HX_STACK_LINE(724)
						stack->push(hx::ObjectPtr<OBJ_>(this));
					}
					HX_STACK_LINE(728)
					return true;
				}
			}
		}
		else{
			HX_STACK_LINE(734)
			bool tmp16 = (stack != null());		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(734)
			if ((tmp16)){
				HX_STACK_LINE(736)
				int length = stack->length;		HX_STACK_VAR(length,"length");
				HX_STACK_LINE(738)
				bool interactive = false;		HX_STACK_VAR(interactive,"interactive");
				HX_STACK_LINE(739)
				bool hitTest = false;		HX_STACK_VAR(hitTest,"hitTest");
				HX_STACK_LINE(741)
				while((true)){
					HX_STACK_LINE(741)
					int tmp17 = --(i);		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(741)
					bool tmp18 = (tmp17 >= (int)0);		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(741)
					bool tmp19 = !(tmp18);		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(741)
					if ((tmp19)){
						HX_STACK_LINE(741)
						break;
					}
					HX_STACK_LINE(743)
					::openfl::display::DisplayObject tmp20 = this->__children->__get(i).StaticCast< ::openfl::display::DisplayObject >();		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(743)
					bool tmp21 = tmp20->__getInteractive(null());		HX_STACK_VAR(tmp21,"tmp21");
					HX_STACK_LINE(743)
					interactive = tmp21;
					HX_STACK_LINE(745)
					bool tmp22 = interactive;		HX_STACK_VAR(tmp22,"tmp22");
					HX_STACK_LINE(745)
					bool tmp23 = !(tmp22);		HX_STACK_VAR(tmp23,"tmp23");
					HX_STACK_LINE(745)
					bool tmp24;		HX_STACK_VAR(tmp24,"tmp24");
					HX_STACK_LINE(745)
					if ((tmp23)){
						HX_STACK_LINE(745)
						bool tmp25 = this->mouseEnabled;		HX_STACK_VAR(tmp25,"tmp25");
						HX_STACK_LINE(745)
						bool tmp26 = tmp25;		HX_STACK_VAR(tmp26,"tmp26");
						HX_STACK_LINE(745)
						bool tmp27 = tmp26;		HX_STACK_VAR(tmp27,"tmp27");
						HX_STACK_LINE(745)
						if ((tmp27)){
							HX_STACK_LINE(745)
							bool tmp28 = hitTest;		HX_STACK_VAR(tmp28,"tmp28");
							HX_STACK_LINE(745)
							bool tmp29 = tmp28;		HX_STACK_VAR(tmp29,"tmp29");
							HX_STACK_LINE(745)
							bool tmp30 = tmp29;		HX_STACK_VAR(tmp30,"tmp30");
							HX_STACK_LINE(745)
							tmp24 = !(tmp30);
						}
						else{
							HX_STACK_LINE(745)
							tmp24 = false;
						}
					}
					else{
						HX_STACK_LINE(745)
						tmp24 = true;
					}
					HX_STACK_LINE(745)
					if ((tmp24)){
						HX_STACK_LINE(747)
						::openfl::display::DisplayObject tmp25 = this->__children->__get(i).StaticCast< ::openfl::display::DisplayObject >();		HX_STACK_VAR(tmp25,"tmp25");
						HX_STACK_LINE(747)
						Float tmp26 = x;		HX_STACK_VAR(tmp26,"tmp26");
						HX_STACK_LINE(747)
						Float tmp27 = y;		HX_STACK_VAR(tmp27,"tmp27");
						HX_STACK_LINE(747)
						bool tmp28 = shapeFlag;		HX_STACK_VAR(tmp28,"tmp28");
						HX_STACK_LINE(747)
						bool tmp29 = tmp25->__hitTest(tmp26,tmp27,tmp28,stack,true);		HX_STACK_VAR(tmp29,"tmp29");
						HX_STACK_LINE(747)
						if ((tmp29)){
							HX_STACK_LINE(749)
							hitTest = true;
							HX_STACK_LINE(751)
							bool tmp30 = interactive;		HX_STACK_VAR(tmp30,"tmp30");
							HX_STACK_LINE(751)
							if ((tmp30)){
								HX_STACK_LINE(753)
								break;
							}
						}
					}
				}
				HX_STACK_LINE(763)
				bool tmp17 = hitTest;		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(763)
				if ((tmp17)){
					HX_STACK_LINE(765)
					int tmp18 = length;		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(765)
					stack->insert(tmp18,hx::ObjectPtr<OBJ_>(this));
					HX_STACK_LINE(766)
					return true;
				}
			}
		}
	}
	else{
		HX_STACK_LINE(774)
		while((true)){
			HX_STACK_LINE(774)
			int tmp13 = --(i);		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(774)
			bool tmp14 = (tmp13 >= (int)0);		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(774)
			bool tmp15 = !(tmp14);		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(774)
			if ((tmp15)){
				HX_STACK_LINE(774)
				break;
			}
			HX_STACK_LINE(776)
			::openfl::display::DisplayObject tmp16 = this->__children->__get(i).StaticCast< ::openfl::display::DisplayObject >();		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(776)
			Float tmp17 = x;		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(776)
			Float tmp18 = y;		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(776)
			bool tmp19 = shapeFlag;		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(776)
			tmp16->__hitTest(tmp17,tmp18,tmp19,stack,false);
		}
	}
	HX_STACK_LINE(782)
	return false;
}


Void DisplayObjectContainer_obj::__renderCairo( ::openfl::_internal::renderer::RenderSession renderSession){
{
		HX_STACK_FRAME("openfl.display.DisplayObjectContainer","__renderCairo",0x687e990e,"openfl.display.DisplayObjectContainer.__renderCairo","openfl/display/DisplayObjectContainer.hx",787,0x5f4d3d72)
		HX_STACK_THIS(this)
		HX_STACK_ARG(renderSession,"renderSession")
		HX_STACK_LINE(789)
		bool tmp = this->__renderable;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(789)
		bool tmp1 = tmp;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(789)
		bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(789)
		bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(789)
		bool tmp4;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(789)
		if ((tmp3)){
			HX_STACK_LINE(789)
			Float tmp5 = this->__worldAlpha;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(789)
			Float tmp6 = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(789)
			tmp4 = (tmp6 <= (int)0);
		}
		else{
			HX_STACK_LINE(789)
			tmp4 = true;
		}
		HX_STACK_LINE(789)
		if ((tmp4)){
			HX_STACK_LINE(789)
			return null();
		}
		HX_STACK_LINE(791)
		::openfl::_internal::renderer::RenderSession tmp5 = renderSession;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(791)
		this->super::__renderCairo(tmp5);
		HX_STACK_LINE(793)
		::openfl::geom::Rectangle tmp6 = this->get_scrollRect();		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(793)
		bool tmp7 = (tmp6 != null());		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(793)
		if ((tmp7)){
			HX_STACK_LINE(795)
			::openfl::geom::Rectangle tmp8 = this->get_scrollRect();		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(795)
			::openfl::geom::Matrix tmp9 = this->__worldTransform;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(795)
			renderSession->maskManager->pushRect(tmp8,tmp9);
		}
		HX_STACK_LINE(799)
		::openfl::display::DisplayObject tmp8 = this->__mask;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(799)
		bool tmp9 = (tmp8 != null());		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(799)
		if ((tmp9)){
			HX_STACK_LINE(801)
			::openfl::display::DisplayObject tmp10 = this->__mask;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(801)
			renderSession->maskManager->pushMask(tmp10);
		}
		HX_STACK_LINE(805)
		{
			HX_STACK_LINE(805)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(805)
			Array< ::Dynamic > _g1 = this->__children;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(805)
			while((true)){
				HX_STACK_LINE(805)
				bool tmp10 = (_g < _g1->length);		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(805)
				bool tmp11 = !(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(805)
				if ((tmp11)){
					HX_STACK_LINE(805)
					break;
				}
				HX_STACK_LINE(805)
				::openfl::display::DisplayObject tmp12 = _g1->__get(_g).StaticCast< ::openfl::display::DisplayObject >();		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(805)
				::openfl::display::DisplayObject child = tmp12;		HX_STACK_VAR(child,"child");
				HX_STACK_LINE(805)
				++(_g);
				HX_STACK_LINE(807)
				::openfl::_internal::renderer::RenderSession tmp13 = renderSession;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(807)
				child->__renderCairo(tmp13);
			}
		}
		HX_STACK_LINE(811)
		int tmp10 = this->__removedChildren->length;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(811)
		bool tmp11 = (tmp10 > (int)0);		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(811)
		if ((tmp11)){
			HX_STACK_LINE(813)
			int tmp12 = this->__removedChildren->length;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(813)
			this->__removedChildren->splice((int)0,tmp12);
		}
		HX_STACK_LINE(817)
		::openfl::display::DisplayObject tmp12 = this->__mask;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(817)
		bool tmp13 = (tmp12 != null());		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(817)
		if ((tmp13)){
			HX_STACK_LINE(819)
			renderSession->maskManager->popMask();
		}
		HX_STACK_LINE(823)
		::openfl::geom::Rectangle tmp14 = this->get_scrollRect();		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(823)
		bool tmp15 = (tmp14 != null());		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(823)
		if ((tmp15)){
			HX_STACK_LINE(825)
			renderSession->maskManager->popMask();
		}
	}
return null();
}


Void DisplayObjectContainer_obj::__renderCairoMask( ::openfl::_internal::renderer::RenderSession renderSession){
{
		HX_STACK_FRAME("openfl.display.DisplayObjectContainer","__renderCairoMask",0x110aa51a,"openfl.display.DisplayObjectContainer.__renderCairoMask","openfl/display/DisplayObjectContainer.hx",832,0x5f4d3d72)
		HX_STACK_THIS(this)
		HX_STACK_ARG(renderSession,"renderSession")
		HX_STACK_LINE(834)
		::openfl::display::Graphics tmp = this->__graphics;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(834)
		bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(834)
		if ((tmp1)){
			HX_STACK_LINE(836)
			::openfl::display::Graphics tmp2 = this->__graphics;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(836)
			::openfl::_internal::renderer::RenderSession tmp3 = renderSession;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(836)
			::openfl::_internal::renderer::cairo::CairoGraphics_obj::renderMask(tmp2,tmp3);
		}
		HX_STACK_LINE(845)
		{
			HX_STACK_LINE(845)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(845)
			Array< ::Dynamic > _g1 = this->__children;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(845)
			while((true)){
				HX_STACK_LINE(845)
				bool tmp2 = (_g < _g1->length);		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(845)
				bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(845)
				if ((tmp3)){
					HX_STACK_LINE(845)
					break;
				}
				HX_STACK_LINE(845)
				::openfl::display::DisplayObject tmp4 = _g1->__get(_g).StaticCast< ::openfl::display::DisplayObject >();		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(845)
				::openfl::display::DisplayObject child = tmp4;		HX_STACK_VAR(child,"child");
				HX_STACK_LINE(845)
				++(_g);
				HX_STACK_LINE(847)
				::openfl::_internal::renderer::RenderSession tmp5 = renderSession;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(847)
				child->__renderCairoMask(tmp5);
			}
		}
	}
return null();
}


Void DisplayObjectContainer_obj::__renderCanvas( ::openfl::_internal::renderer::RenderSession renderSession){
{
		HX_STACK_FRAME("openfl.display.DisplayObjectContainer","__renderCanvas",0x09986192,"openfl.display.DisplayObjectContainer.__renderCanvas","openfl/display/DisplayObjectContainer.hx",854,0x5f4d3d72)
		HX_STACK_THIS(this)
		HX_STACK_ARG(renderSession,"renderSession")
		HX_STACK_LINE(856)
		bool tmp = this->__renderable;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(856)
		bool tmp1 = tmp;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(856)
		bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(856)
		bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(856)
		bool tmp4;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(856)
		if ((tmp3)){
			HX_STACK_LINE(856)
			Float tmp5 = this->__worldAlpha;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(856)
			Float tmp6 = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(856)
			tmp4 = (tmp6 <= (int)0);
		}
		else{
			HX_STACK_LINE(856)
			tmp4 = true;
		}
		HX_STACK_LINE(856)
		if ((tmp4)){
			HX_STACK_LINE(856)
			return null();
		}
		HX_STACK_LINE(860)
		::openfl::_internal::renderer::RenderSession tmp5 = renderSession;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(860)
		this->super::__renderCanvas(tmp5);
		HX_STACK_LINE(862)
		::openfl::geom::Rectangle tmp6 = this->get_scrollRect();		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(862)
		bool tmp7 = (tmp6 != null());		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(862)
		if ((tmp7)){
			HX_STACK_LINE(864)
			::openfl::geom::Rectangle tmp8 = this->get_scrollRect();		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(864)
			::openfl::geom::Matrix tmp9 = this->__worldTransform;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(864)
			renderSession->maskManager->pushRect(tmp8,tmp9);
		}
		HX_STACK_LINE(868)
		::openfl::display::DisplayObject tmp8 = this->__mask;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(868)
		bool tmp9 = (tmp8 != null());		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(868)
		if ((tmp9)){
			HX_STACK_LINE(870)
			::openfl::display::DisplayObject tmp10 = this->__mask;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(870)
			renderSession->maskManager->pushMask(tmp10);
		}
		HX_STACK_LINE(874)
		{
			HX_STACK_LINE(874)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(874)
			Array< ::Dynamic > _g1 = this->__children;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(874)
			while((true)){
				HX_STACK_LINE(874)
				bool tmp10 = (_g < _g1->length);		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(874)
				bool tmp11 = !(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(874)
				if ((tmp11)){
					HX_STACK_LINE(874)
					break;
				}
				HX_STACK_LINE(874)
				::openfl::display::DisplayObject tmp12 = _g1->__get(_g).StaticCast< ::openfl::display::DisplayObject >();		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(874)
				::openfl::display::DisplayObject child = tmp12;		HX_STACK_VAR(child,"child");
				HX_STACK_LINE(874)
				++(_g);
				HX_STACK_LINE(876)
				::openfl::_internal::renderer::RenderSession tmp13 = renderSession;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(876)
				child->__renderCanvas(tmp13);
			}
		}
		HX_STACK_LINE(880)
		int tmp10 = this->__removedChildren->length;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(880)
		bool tmp11 = (tmp10 > (int)0);		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(880)
		if ((tmp11)){
			HX_STACK_LINE(882)
			int tmp12 = this->__removedChildren->length;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(882)
			this->__removedChildren->splice((int)0,tmp12);
		}
		HX_STACK_LINE(886)
		::openfl::display::DisplayObject tmp12 = this->__mask;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(886)
		bool tmp13 = (tmp12 != null());		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(886)
		if ((tmp13)){
			HX_STACK_LINE(888)
			renderSession->maskManager->popMask();
		}
		HX_STACK_LINE(892)
		::openfl::geom::Rectangle tmp14 = this->get_scrollRect();		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(892)
		bool tmp15 = (tmp14 != null());		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(892)
		if ((tmp15)){
			HX_STACK_LINE(894)
			renderSession->maskManager->popMask();
		}
	}
return null();
}


Void DisplayObjectContainer_obj::__renderCanvasMask( ::openfl::_internal::renderer::RenderSession renderSession){
{
		HX_STACK_FRAME("openfl.display.DisplayObjectContainer","__renderCanvasMask",0xd78cff9e,"openfl.display.DisplayObjectContainer.__renderCanvasMask","openfl/display/DisplayObjectContainer.hx",903,0x5f4d3d72)
		HX_STACK_THIS(this)
		HX_STACK_ARG(renderSession,"renderSession")
		HX_STACK_LINE(905)
		::openfl::display::Graphics tmp = this->__graphics;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(905)
		bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(905)
		if ((tmp1)){
			HX_STACK_LINE(907)
			::openfl::display::Graphics tmp2 = this->__graphics;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(907)
			::openfl::_internal::renderer::RenderSession tmp3 = renderSession;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(907)
			::openfl::_internal::renderer::canvas::CanvasGraphics_obj::renderMask(tmp2,tmp3);
		}
		HX_STACK_LINE(911)
		::openfl::geom::Rectangle tmp2 = ::openfl::geom::Rectangle_obj::__new(null(),null(),null(),null());		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(911)
		::openfl::geom::Rectangle bounds = tmp2;		HX_STACK_VAR(bounds,"bounds");
		HX_STACK_LINE(912)
		{
			HX_STACK_LINE(912)
			this->__getTransform();
			HX_STACK_LINE(912)
			::openfl::geom::Rectangle tmp3 = bounds;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(912)
			::openfl::geom::Matrix tmp4 = ::openfl::geom::Matrix_obj::__new(null(),null(),null(),null(),null(),null());		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(912)
			this->__getBounds(tmp3,tmp4);
		}
		HX_STACK_LINE(914)
		Float tmp3 = bounds->width;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(914)
		Float tmp4 = bounds->height;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(914)
		renderSession->context->rect((int)0,(int)0,tmp3,tmp4);
	}
return null();
}


Void DisplayObjectContainer_obj::__renderDOM( ::openfl::_internal::renderer::RenderSession renderSession){
{
		HX_STACK_FRAME("openfl.display.DisplayObjectContainer","__renderDOM",0xd2304188,"openfl.display.DisplayObjectContainer.__renderDOM","openfl/display/DisplayObjectContainer.hx",925,0x5f4d3d72)
		HX_STACK_THIS(this)
		HX_STACK_ARG(renderSession,"renderSession")
		HX_STACK_LINE(931)
		::openfl::_internal::renderer::RenderSession tmp = renderSession;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(931)
		this->super::__renderDOM(tmp);
		HX_STACK_LINE(933)
		::openfl::display::DisplayObject tmp1 = this->__mask;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(933)
		bool tmp2 = (tmp1 != null());		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(933)
		if ((tmp2)){
			HX_STACK_LINE(935)
			::openfl::display::DisplayObject tmp3 = this->__mask;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(935)
			renderSession->maskManager->pushMask(tmp3);
		}
		HX_STACK_LINE(941)
		{
			HX_STACK_LINE(941)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(941)
			Array< ::Dynamic > _g1 = this->__children;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(941)
			while((true)){
				HX_STACK_LINE(941)
				bool tmp3 = (_g < _g1->length);		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(941)
				bool tmp4 = !(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(941)
				if ((tmp4)){
					HX_STACK_LINE(941)
					break;
				}
				HX_STACK_LINE(941)
				::openfl::display::DisplayObject tmp5 = _g1->__get(_g).StaticCast< ::openfl::display::DisplayObject >();		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(941)
				::openfl::display::DisplayObject child = tmp5;		HX_STACK_VAR(child,"child");
				HX_STACK_LINE(941)
				++(_g);
				HX_STACK_LINE(943)
				::openfl::_internal::renderer::RenderSession tmp6 = renderSession;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(943)
				child->__renderDOM(tmp6);
			}
		}
		HX_STACK_LINE(947)
		{
			HX_STACK_LINE(947)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(947)
			Array< ::Dynamic > _g1 = this->__removedChildren;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(947)
			while((true)){
				HX_STACK_LINE(947)
				bool tmp3 = (_g < _g1->length);		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(947)
				bool tmp4 = !(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(947)
				if ((tmp4)){
					HX_STACK_LINE(947)
					break;
				}
				HX_STACK_LINE(947)
				::openfl::display::DisplayObject tmp5 = _g1->__get(_g).StaticCast< ::openfl::display::DisplayObject >();		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(947)
				::openfl::display::DisplayObject orphan = tmp5;		HX_STACK_VAR(orphan,"orphan");
				HX_STACK_LINE(947)
				++(_g);
				HX_STACK_LINE(949)
				bool tmp6 = (orphan->stage == null());		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(949)
				if ((tmp6)){
					HX_STACK_LINE(951)
					::openfl::_internal::renderer::RenderSession tmp7 = renderSession;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(951)
					orphan->__renderDOM(tmp7);
				}
			}
		}
		HX_STACK_LINE(957)
		int tmp3 = this->__removedChildren->length;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(957)
		bool tmp4 = (tmp3 > (int)0);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(957)
		if ((tmp4)){
			HX_STACK_LINE(959)
			int tmp5 = this->__removedChildren->length;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(959)
			this->__removedChildren->splice((int)0,tmp5);
		}
		HX_STACK_LINE(963)
		::openfl::display::DisplayObject tmp5 = this->__mask;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(963)
		bool tmp6 = (tmp5 != null());		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(963)
		if ((tmp6)){
			HX_STACK_LINE(965)
			renderSession->maskManager->popMask();
		}
	}
return null();
}


Void DisplayObjectContainer_obj::__renderGL( ::openfl::_internal::renderer::RenderSession renderSession){
{
		HX_STACK_FRAME("openfl.display.DisplayObjectContainer","__renderGL",0x3eef01bf,"openfl.display.DisplayObjectContainer.__renderGL","openfl/display/DisplayObjectContainer.hx",974,0x5f4d3d72)
		HX_STACK_THIS(this)
		HX_STACK_ARG(renderSession,"renderSession")
		HX_STACK_LINE(976)
		bool tmp = this->__renderable;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(976)
		bool tmp1 = tmp;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(976)
		bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(976)
		bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(976)
		bool tmp4;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(976)
		if ((tmp3)){
			HX_STACK_LINE(976)
			Float tmp5 = this->__worldAlpha;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(976)
			Float tmp6 = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(976)
			tmp4 = (tmp6 <= (int)0);
		}
		else{
			HX_STACK_LINE(976)
			tmp4 = true;
		}
		HX_STACK_LINE(976)
		if ((tmp4)){
			HX_STACK_LINE(976)
			return null();
		}
		HX_STACK_LINE(978)
		::openfl::geom::Rectangle tmp5 = this->get_scrollRect();		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(978)
		bool tmp6 = (tmp5 != null());		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(978)
		if ((tmp6)){
			HX_STACK_LINE(979)
			renderSession->spriteBatch->stop();
			HX_STACK_LINE(980)
			::openfl::geom::Matrix tmp7;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(980)
			{
				HX_STACK_LINE(980)
				::openfl::geom::Matrix tmp8 = this->__worldTransform;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(980)
				::openfl::geom::Matrix _this = tmp8;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(980)
				tmp7 = ::openfl::geom::Matrix_obj::__new(_this->a,_this->b,_this->c,_this->d,_this->tx,_this->ty);
			}
			HX_STACK_LINE(980)
			::openfl::geom::Matrix m = tmp7;		HX_STACK_VAR(m,"m");
			HX_STACK_LINE(981)
			::openfl::geom::Rectangle tmp8 = ::openfl::geom::Rectangle_obj::__temp;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(981)
			::openfl::geom::Rectangle clip = tmp8;		HX_STACK_VAR(clip,"clip");
			HX_STACK_LINE(982)
			::openfl::geom::Rectangle tmp9 = this->get_scrollRect();		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(982)
			::openfl::geom::Rectangle tmp10 = clip;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(982)
			::openfl::geom::Matrix tmp11 = m;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(982)
			tmp9->__transform(tmp10,tmp11);
			HX_STACK_LINE(983)
			int tmp12 = renderSession->renderer->height;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(983)
			Float tmp13 = clip->y;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(983)
			Float tmp14 = (tmp12 - tmp13);		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(983)
			Float tmp15 = clip->height;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(983)
			Float tmp16 = (tmp14 - tmp15);		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(983)
			clip->y = tmp16;
			HX_STACK_LINE(985)
			::openfl::geom::Rectangle tmp17 = clip;		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(985)
			renderSession->spriteBatch->start(tmp17);
		}
		HX_STACK_LINE(989)
		::openfl::display::DisplayObject tmp7 = this->__mask;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(989)
		bool tmp8 = (tmp7 != null());		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(989)
		bool tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(989)
		bool tmp10;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(989)
		if ((tmp9)){
			HX_STACK_LINE(989)
			::openfl::display::Graphics tmp11 = this->__maskGraphics;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(989)
			::openfl::display::Graphics tmp12 = tmp11;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(989)
			::openfl::display::Graphics tmp13 = tmp12;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(989)
			tmp10 = (tmp13 != null());
		}
		else{
			HX_STACK_LINE(989)
			tmp10 = false;
		}
		HX_STACK_LINE(989)
		bool tmp11;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(989)
		if ((tmp10)){
			HX_STACK_LINE(989)
			::openfl::display::Graphics tmp12 = this->__maskGraphics;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(989)
			::openfl::display::Graphics tmp13 = tmp12;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(989)
			int tmp14 = tmp13->__commands->length;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(989)
			int tmp15 = tmp14;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(989)
			tmp11 = (tmp15 > (int)0);
		}
		else{
			HX_STACK_LINE(989)
			tmp11 = false;
		}
		HX_STACK_LINE(989)
		bool masked = tmp11;		HX_STACK_VAR(masked,"masked");
		HX_STACK_LINE(991)
		bool tmp12 = masked;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(991)
		if ((tmp12)){
			HX_STACK_LINE(993)
			renderSession->spriteBatch->stop();
			HX_STACK_LINE(994)
			renderSession->maskManager->pushMask(hx::ObjectPtr<OBJ_>(this));
			HX_STACK_LINE(995)
			renderSession->spriteBatch->start(null());
		}
		HX_STACK_LINE(999)
		::openfl::_internal::renderer::RenderSession tmp13 = renderSession;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(999)
		this->super::__renderGL(tmp13);
		HX_STACK_LINE(1001)
		{
			HX_STACK_LINE(1001)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(1001)
			Array< ::Dynamic > _g1 = this->__children;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(1001)
			while((true)){
				HX_STACK_LINE(1001)
				bool tmp14 = (_g < _g1->length);		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(1001)
				bool tmp15 = !(tmp14);		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(1001)
				if ((tmp15)){
					HX_STACK_LINE(1001)
					break;
				}
				HX_STACK_LINE(1001)
				::openfl::display::DisplayObject tmp16 = _g1->__get(_g).StaticCast< ::openfl::display::DisplayObject >();		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(1001)
				::openfl::display::DisplayObject child = tmp16;		HX_STACK_VAR(child,"child");
				HX_STACK_LINE(1001)
				++(_g);
				HX_STACK_LINE(1003)
				::openfl::_internal::renderer::RenderSession tmp17 = renderSession;		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(1003)
				child->__renderGL(tmp17);
			}
		}
		HX_STACK_LINE(1007)
		bool tmp14 = masked;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(1007)
		if ((tmp14)){
			HX_STACK_LINE(1009)
			renderSession->spriteBatch->stop();
			HX_STACK_LINE(1011)
			renderSession->maskManager->popMask();
			HX_STACK_LINE(1012)
			renderSession->spriteBatch->start(null());
		}
		HX_STACK_LINE(1016)
		::openfl::geom::Rectangle tmp15 = this->get_scrollRect();		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(1016)
		bool tmp16 = (tmp15 != null());		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(1016)
		if ((tmp16)){
			HX_STACK_LINE(1017)
			renderSession->spriteBatch->stop();
			HX_STACK_LINE(1018)
			renderSession->spriteBatch->start(null());
		}
		HX_STACK_LINE(1021)
		int tmp17 = this->__removedChildren->length;		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(1021)
		bool tmp18 = (tmp17 > (int)0);		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(1021)
		if ((tmp18)){
			HX_STACK_LINE(1023)
			int tmp19 = this->__removedChildren->length;		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(1023)
			this->__removedChildren->splice((int)0,tmp19);
		}
	}
return null();
}


Void DisplayObjectContainer_obj::__setStageReference( ::openfl::display::Stage stage){
{
		HX_STACK_FRAME("openfl.display.DisplayObjectContainer","__setStageReference",0x58cb6d2b,"openfl.display.DisplayObjectContainer.__setStageReference","openfl/display/DisplayObjectContainer.hx",1030,0x5f4d3d72)
		HX_STACK_THIS(this)
		HX_STACK_ARG(stage,"stage")
		HX_STACK_LINE(1032)
		::openfl::display::Stage tmp = this->stage;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(1032)
		::openfl::display::Stage tmp1 = stage;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(1032)
		bool tmp2 = (tmp != tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(1032)
		if ((tmp2)){
			HX_STACK_LINE(1034)
			::openfl::display::Stage tmp3 = this->stage;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(1034)
			bool tmp4 = (tmp3 != null());		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(1034)
			if ((tmp4)){
				HX_STACK_LINE(1036)
				::String tmp5 = ::openfl::events::Event_obj::REMOVED_FROM_STAGE;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(1036)
				::openfl::events::Event tmp6 = ::openfl::events::Event_obj::__new(tmp5,false,false);		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(1036)
				this->__dispatchEvent(tmp6);
			}
			HX_STACK_LINE(1040)
			this->stage = stage;
			HX_STACK_LINE(1042)
			bool tmp5 = (stage != null());		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(1042)
			if ((tmp5)){
				HX_STACK_LINE(1044)
				::String tmp6 = ::openfl::events::Event_obj::ADDED_TO_STAGE;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(1044)
				::openfl::events::Event tmp7 = ::openfl::events::Event_obj::__new(tmp6,false,false);		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(1044)
				this->__dispatchEvent(tmp7);
			}
			HX_STACK_LINE(1048)
			bool tmp6 = (this->__children != null());		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(1048)
			if ((tmp6)){
				HX_STACK_LINE(1050)
				int _g = (int)0;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(1050)
				Array< ::Dynamic > _g1 = this->__children;		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(1050)
				while((true)){
					HX_STACK_LINE(1050)
					bool tmp7 = (_g < _g1->length);		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(1050)
					bool tmp8 = !(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(1050)
					if ((tmp8)){
						HX_STACK_LINE(1050)
						break;
					}
					HX_STACK_LINE(1050)
					::openfl::display::DisplayObject tmp9 = _g1->__get(_g).StaticCast< ::openfl::display::DisplayObject >();		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(1050)
					::openfl::display::DisplayObject child = tmp9;		HX_STACK_VAR(child,"child");
					HX_STACK_LINE(1050)
					++(_g);
					HX_STACK_LINE(1052)
					::openfl::display::Stage tmp10 = stage;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(1052)
					child->__setStageReference(tmp10);
				}
			}
		}
	}
return null();
}


Void DisplayObjectContainer_obj::__update( bool transformOnly,bool updateChildren,::openfl::display::Graphics maskGraphics){
{
		HX_STACK_FRAME("openfl.display.DisplayObjectContainer","__update",0xc6b2e3cd,"openfl.display.DisplayObjectContainer.__update","openfl/display/DisplayObjectContainer.hx",1063,0x5f4d3d72)
		HX_STACK_THIS(this)
		HX_STACK_ARG(transformOnly,"transformOnly")
		HX_STACK_ARG(updateChildren,"updateChildren")
		HX_STACK_ARG(maskGraphics,"maskGraphics")
		HX_STACK_LINE(1065)
		bool tmp = transformOnly;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(1065)
		bool tmp1 = updateChildren;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(1065)
		::openfl::display::Graphics tmp2 = maskGraphics;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(1065)
		this->super::__update(tmp,tmp1,tmp2);
		HX_STACK_LINE(1068)
		bool tmp3 = this->__renderable;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(1068)
		bool tmp4 = tmp3;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(1068)
		bool tmp5 = !(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(1068)
		bool tmp6;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(1068)
		if ((tmp5)){
			HX_STACK_LINE(1068)
			bool tmp7 = this->__isMask;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(1068)
			bool tmp8 = tmp7;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(1068)
			bool tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(1068)
			tmp6 = !(tmp9);
		}
		else{
			HX_STACK_LINE(1068)
			tmp6 = false;
		}
		HX_STACK_LINE(1068)
		if ((tmp6)){
			HX_STACK_LINE(1070)
			return null();
		}
		HX_STACK_LINE(1076)
		bool tmp7 = updateChildren;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(1076)
		if ((tmp7)){
			HX_STACK_LINE(1078)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(1078)
			Array< ::Dynamic > _g1 = this->__children;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(1078)
			while((true)){
				HX_STACK_LINE(1078)
				bool tmp8 = (_g < _g1->length);		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(1078)
				bool tmp9 = !(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(1078)
				if ((tmp9)){
					HX_STACK_LINE(1078)
					break;
				}
				HX_STACK_LINE(1078)
				::openfl::display::DisplayObject tmp10 = _g1->__get(_g).StaticCast< ::openfl::display::DisplayObject >();		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(1078)
				::openfl::display::DisplayObject child = tmp10;		HX_STACK_VAR(child,"child");
				HX_STACK_LINE(1078)
				++(_g);
				HX_STACK_LINE(1080)
				bool tmp11 = transformOnly;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(1080)
				::openfl::display::Graphics tmp12 = maskGraphics;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(1080)
				child->__update(tmp11,true,tmp12);
			}
		}
	}
return null();
}


Void DisplayObjectContainer_obj::__updateChildren( bool transformOnly){
{
		HX_STACK_FRAME("openfl.display.DisplayObjectContainer","__updateChildren",0x0e3ace2c,"openfl.display.DisplayObjectContainer.__updateChildren","openfl/display/DisplayObjectContainer.hx",1089,0x5f4d3d72)
		HX_STACK_THIS(this)
		HX_STACK_ARG(transformOnly,"transformOnly")
		HX_STACK_LINE(1091)
		bool tmp = transformOnly;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(1091)
		this->super::__updateChildren(tmp);
		HX_STACK_LINE(1093)
		{
			HX_STACK_LINE(1093)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(1093)
			Array< ::Dynamic > _g1 = this->__children;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(1093)
			while((true)){
				HX_STACK_LINE(1093)
				bool tmp1 = (_g < _g1->length);		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(1093)
				bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(1093)
				if ((tmp2)){
					HX_STACK_LINE(1093)
					break;
				}
				HX_STACK_LINE(1093)
				::openfl::display::DisplayObject tmp3 = _g1->__get(_g).StaticCast< ::openfl::display::DisplayObject >();		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(1093)
				::openfl::display::DisplayObject child = tmp3;		HX_STACK_VAR(child,"child");
				HX_STACK_LINE(1093)
				++(_g);
				HX_STACK_LINE(1095)
				bool tmp4 = transformOnly;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(1095)
				child->__update(tmp4,true,null());
			}
		}
	}
return null();
}


int DisplayObjectContainer_obj::get_numChildren( ){
	HX_STACK_FRAME("openfl.display.DisplayObjectContainer","get_numChildren",0x73b78b18,"openfl.display.DisplayObjectContainer.get_numChildren","openfl/display/DisplayObjectContainer.hx",1109,0x5f4d3d72)
	HX_STACK_THIS(this)
	HX_STACK_LINE(1111)
	int tmp = this->__children->length;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1111)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(DisplayObjectContainer_obj,get_numChildren,return )


DisplayObjectContainer_obj::DisplayObjectContainer_obj()
{
}

void DisplayObjectContainer_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(DisplayObjectContainer);
	HX_MARK_MEMBER_NAME(mouseChildren,"mouseChildren");
	HX_MARK_MEMBER_NAME(numChildren,"numChildren");
	HX_MARK_MEMBER_NAME(tabChildren,"tabChildren");
	HX_MARK_MEMBER_NAME(__children,"__children");
	HX_MARK_MEMBER_NAME(__removedChildren,"__removedChildren");
	::openfl::display::InteractiveObject_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void DisplayObjectContainer_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(mouseChildren,"mouseChildren");
	HX_VISIT_MEMBER_NAME(numChildren,"numChildren");
	HX_VISIT_MEMBER_NAME(tabChildren,"tabChildren");
	HX_VISIT_MEMBER_NAME(__children,"__children");
	HX_VISIT_MEMBER_NAME(__removedChildren,"__removedChildren");
	::openfl::display::InteractiveObject_obj::__Visit(HX_VISIT_ARG);
}

Dynamic DisplayObjectContainer_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"addChild") ) { return addChild_dyn(); }
		if (HX_FIELD_EQ(inName,"contains") ) { return contains_dyn(); }
		if (HX_FIELD_EQ(inName,"__update") ) { return __update_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"__hitTest") ) { return __hitTest_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"__children") ) { return __children; }
		if (HX_FIELD_EQ(inName,"addChildAt") ) { return addChildAt_dyn(); }
		if (HX_FIELD_EQ(inName,"getChildAt") ) { return getChildAt_dyn(); }
		if (HX_FIELD_EQ(inName,"__renderGL") ) { return __renderGL_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"numChildren") ) { return inCallProp == hx::paccAlways ? get_numChildren() : numChildren; }
		if (HX_FIELD_EQ(inName,"tabChildren") ) { return tabChildren; }
		if (HX_FIELD_EQ(inName,"removeChild") ) { return removeChild_dyn(); }
		if (HX_FIELD_EQ(inName,"__broadcast") ) { return __broadcast_dyn(); }
		if (HX_FIELD_EQ(inName,"__getBounds") ) { return __getBounds_dyn(); }
		if (HX_FIELD_EQ(inName,"__renderDOM") ) { return __renderDOM_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"swapChildren") ) { return swapChildren_dyn(); }
		if (HX_FIELD_EQ(inName,"__enterFrame") ) { return __enterFrame_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"mouseChildren") ) { return mouseChildren; }
		if (HX_FIELD_EQ(inName,"getChildIndex") ) { return getChildIndex_dyn(); }
		if (HX_FIELD_EQ(inName,"removeChildAt") ) { return removeChildAt_dyn(); }
		if (HX_FIELD_EQ(inName,"setChildIndex") ) { return setChildIndex_dyn(); }
		if (HX_FIELD_EQ(inName,"__renderCairo") ) { return __renderCairo_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"getChildByName") ) { return getChildByName_dyn(); }
		if (HX_FIELD_EQ(inName,"removeChildren") ) { return removeChildren_dyn(); }
		if (HX_FIELD_EQ(inName,"swapChildrenAt") ) { return swapChildrenAt_dyn(); }
		if (HX_FIELD_EQ(inName,"__renderCanvas") ) { return __renderCanvas_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"get_numChildren") ) { return get_numChildren_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"__updateChildren") ) { return __updateChildren_dyn(); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"__removedChildren") ) { return __removedChildren; }
		if (HX_FIELD_EQ(inName,"__renderCairoMask") ) { return __renderCairoMask_dyn(); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"__renderCanvasMask") ) { return __renderCanvasMask_dyn(); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"__setStageReference") ) { return __setStageReference_dyn(); }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"getObjectsUnderPoint") ) { return getObjectsUnderPoint_dyn(); }
		break;
	case 32:
		if (HX_FIELD_EQ(inName,"areInaccessibleObjectsUnderPoint") ) { return areInaccessibleObjectsUnderPoint_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic DisplayObjectContainer_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 10:
		if (HX_FIELD_EQ(inName,"__children") ) { __children=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"numChildren") ) { numChildren=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"tabChildren") ) { tabChildren=inValue.Cast< bool >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"mouseChildren") ) { mouseChildren=inValue.Cast< bool >(); return inValue; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"__removedChildren") ) { __removedChildren=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool DisplayObjectContainer_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	return false;
}

void DisplayObjectContainer_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("mouseChildren","\x84","\x18","\x6b","\xff"));
	outFields->push(HX_HCSTRING("numChildren","\xa5","\x69","\x80","\x5c"));
	outFields->push(HX_HCSTRING("tabChildren","\xb4","\x0c","\x86","\x4b"));
	outFields->push(HX_HCSTRING("__children","\x5f","\x8c","\xa2","\x13"));
	outFields->push(HX_HCSTRING("__removedChildren","\xdf","\xc5","\x0e","\xd3"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsBool,(int)offsetof(DisplayObjectContainer_obj,mouseChildren),HX_HCSTRING("mouseChildren","\x84","\x18","\x6b","\xff")},
	{hx::fsInt,(int)offsetof(DisplayObjectContainer_obj,numChildren),HX_HCSTRING("numChildren","\xa5","\x69","\x80","\x5c")},
	{hx::fsBool,(int)offsetof(DisplayObjectContainer_obj,tabChildren),HX_HCSTRING("tabChildren","\xb4","\x0c","\x86","\x4b")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(DisplayObjectContainer_obj,__children),HX_HCSTRING("__children","\x5f","\x8c","\xa2","\x13")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(DisplayObjectContainer_obj,__removedChildren),HX_HCSTRING("__removedChildren","\xdf","\xc5","\x0e","\xd3")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("mouseChildren","\x84","\x18","\x6b","\xff"),
	HX_HCSTRING("numChildren","\xa5","\x69","\x80","\x5c"),
	HX_HCSTRING("tabChildren","\xb4","\x0c","\x86","\x4b"),
	HX_HCSTRING("__children","\x5f","\x8c","\xa2","\x13"),
	HX_HCSTRING("__removedChildren","\xdf","\xc5","\x0e","\xd3"),
	HX_HCSTRING("addChild","\xbb","\xcf","\x16","\xbf"),
	HX_HCSTRING("addChildAt","\x8e","\xad","\x36","\xce"),
	HX_HCSTRING("areInaccessibleObjectsUnderPoint","\x3d","\x22","\x9b","\x1e"),
	HX_HCSTRING("contains","\x1f","\x5a","\x7b","\x2c"),
	HX_HCSTRING("getChildAt","\xb9","\x07","\x0e","\xb6"),
	HX_HCSTRING("getChildByName","\x88","\xb9","\x73","\xa3"),
	HX_HCSTRING("getChildIndex","\x0c","\x68","\x02","\xb9"),
	HX_HCSTRING("getObjectsUnderPoint","\x96","\x10","\xd5","\x80"),
	HX_HCSTRING("removeChild","\xb8","\x86","\xed","\x43"),
	HX_HCSTRING("removeChildAt","\xcb","\xdd","\x66","\x3f"),
	HX_HCSTRING("removeChildren","\xa3","\x55","\xc0","\x3a"),
	HX_HCSTRING("setChildIndex","\x18","\x4a","\x08","\xfe"),
	HX_HCSTRING("swapChildren","\xf2","\x4a","\x53","\xe0"),
	HX_HCSTRING("swapChildrenAt","\x85","\xa4","\xf1","\x13"),
	HX_HCSTRING("__broadcast","\xe1","\xeb","\x45","\x0d"),
	HX_HCSTRING("__enterFrame","\x15","\x7f","\xe3","\x3a"),
	HX_HCSTRING("__getBounds","\x8b","\x58","\xa0","\x10"),
	HX_HCSTRING("__hitTest","\x25","\xb1","\xcd","\x63"),
	HX_HCSTRING("__renderCairo","\x32","\x9e","\x42","\x55"),
	HX_HCSTRING("__renderCairoMask","\x3e","\x0c","\x22","\x6b"),
	HX_HCSTRING("__renderCanvas","\xee","\xdb","\x58","\x48"),
	HX_HCSTRING("__renderCanvasMask","\xfa","\xd7","\xef","\x51"),
	HX_HCSTRING("__renderDOM","\xac","\xf5","\x83","\xfb"),
	HX_HCSTRING("__renderGL","\x1b","\x1e","\x14","\x56"),
	HX_HCSTRING("__setStageReference","\x4f","\xe5","\xe5","\xf4"),
	HX_HCSTRING("__update","\x29","\xf1","\x34","\x2f"),
	HX_HCSTRING("__updateChildren","\x88","\x97","\xd3","\xd9"),
	HX_HCSTRING("get_numChildren","\x3c","\x21","\x62","\x1d"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(DisplayObjectContainer_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(DisplayObjectContainer_obj::__mClass,"__mClass");
};

#endif

hx::Class DisplayObjectContainer_obj::__mClass;

void DisplayObjectContainer_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("openfl.display.DisplayObjectContainer","\x4a","\x52","\xef","\x89");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &DisplayObjectContainer_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< DisplayObjectContainer_obj >;
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
} // end namespace display
