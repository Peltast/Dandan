#include <hxcpp.h>

#include "hxMath.h"
#ifndef INCLUDED_openfl_display_DisplayObject
#include <openfl/display/DisplayObject.h>
#endif
#ifndef INCLUDED_openfl_display_DisplayObjectContainer
#include <openfl/display/DisplayObjectContainer.h>
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
#ifndef INCLUDED_openfl_display_Shape
#include <openfl/display/Shape.h>
#endif
#ifndef INCLUDED_openfl_display_Sprite
#include <openfl/display/Sprite.h>
#endif
#ifndef INCLUDED_openfl_events_EventDispatcher
#include <openfl/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_events_IEventDispatcher
#include <openfl/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_ui_Overlay
#include <ui/Overlay.h>
#endif
#ifndef INCLUDED_ui_OverlayItem
#include <ui/OverlayItem.h>
#endif
namespace ui{

Void Overlay_obj::__construct(hx::Null< Float >  __o_bgAlpha)
{
HX_STACK_FRAME("ui.Overlay","new",0x9c1fcb48,"ui.Overlay.new","ui/Overlay.hx",17,0x8191a069)
HX_STACK_THIS(this)
HX_STACK_ARG(__o_bgAlpha,"bgAlpha")
Float bgAlpha = __o_bgAlpha.Default(0);
{
	HX_STACK_LINE(18)
	super::__construct();
	HX_STACK_LINE(19)
	::openfl::display::Sprite tmp = ::openfl::display::Sprite_obj::__new();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(19)
	this->overlaySprite = tmp;
	HX_STACK_LINE(20)
	this->bgAlpha = bgAlpha;
	HX_STACK_LINE(22)
	bool tmp1 = (bgAlpha > (int)0);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(22)
	if ((tmp1)){
		HX_STACK_LINE(23)
		::openfl::display::Shape tmp2 = ::openfl::display::Shape_obj::__new();		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(23)
		this->background = tmp2;
		HX_STACK_LINE(24)
		::openfl::display::Shape tmp3 = this->background;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(24)
		::openfl::display::Graphics tmp4 = tmp3->get_graphics();		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(24)
		Float tmp5 = bgAlpha;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(24)
		tmp4->beginFill((int)0,tmp5);
		HX_STACK_LINE(25)
		::openfl::display::Shape tmp6 = this->background;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(25)
		::openfl::display::Graphics tmp7 = tmp6->get_graphics();		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(25)
		tmp7->drawRect((int)0,(int)0,(int)540,(int)360);
		HX_STACK_LINE(27)
		::openfl::display::Shape tmp8 = this->background;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(27)
		::openfl::display::Graphics tmp9 = tmp8->get_graphics();		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(27)
		tmp9->endFill();
		HX_STACK_LINE(28)
		::openfl::display::Shape tmp10 = this->background;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(28)
		this->addChild(tmp10);
	}
}
;
	return null();
}

//Overlay_obj::~Overlay_obj() { }

Dynamic Overlay_obj::__CreateEmpty() { return  new Overlay_obj; }
hx::ObjectPtr< Overlay_obj > Overlay_obj::__new(hx::Null< Float >  __o_bgAlpha)
{  hx::ObjectPtr< Overlay_obj > _result_ = new Overlay_obj();
	_result_->__construct(__o_bgAlpha);
	return _result_;}

Dynamic Overlay_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Overlay_obj > _result_ = new Overlay_obj();
	_result_->__construct(inArgs[0]);
	return _result_;}

Void Overlay_obj::redrawOverlay( ){
{
		HX_STACK_FRAME("ui.Overlay","redrawOverlay",0x58705801,"ui.Overlay.redrawOverlay","ui/Overlay.hx",31,0x8191a069)
		HX_STACK_THIS(this)
		HX_STACK_LINE(33)
		::openfl::display::Shape tmp = this->background;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(33)
		bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(33)
		if ((tmp1)){
			HX_STACK_LINE(34)
			::openfl::display::Shape tmp2 = this->background;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(34)
			this->removeChild(tmp2);
			HX_STACK_LINE(35)
			::openfl::display::Shape tmp3 = ::openfl::display::Shape_obj::__new();		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(35)
			this->background = tmp3;
			HX_STACK_LINE(36)
			::openfl::display::Shape tmp4 = this->background;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(36)
			::openfl::display::Graphics tmp5 = tmp4->get_graphics();		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(36)
			Float tmp6 = this->bgAlpha;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(36)
			tmp5->beginFill((int)0,tmp6);
			HX_STACK_LINE(37)
			::openfl::display::Shape tmp7 = this->background;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(37)
			::openfl::display::Graphics tmp8 = tmp7->get_graphics();		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(37)
			tmp8->drawRect((int)0,(int)0,(int)540,(int)360);
			HX_STACK_LINE(39)
			::openfl::display::Shape tmp9 = this->background;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(39)
			::openfl::display::Graphics tmp10 = tmp9->get_graphics();		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(39)
			tmp10->endFill();
			HX_STACK_LINE(40)
			::openfl::display::Shape tmp11 = this->background;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(40)
			this->addChild(tmp11);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Overlay_obj,redrawOverlay,(void))

bool Overlay_obj::isActive( ){
	HX_STACK_FRAME("ui.Overlay","isActive",0x2e055968,"ui.Overlay.isActive","ui/Overlay.hx",44,0x8191a069)
	HX_STACK_THIS(this)
	HX_STACK_LINE(44)
	bool tmp = this->active;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(44)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(Overlay_obj,isActive,return )

Void Overlay_obj::addToOverlay( ::ui::OverlayItem overlayItem){
{
		HX_STACK_FRAME("ui.Overlay","addToOverlay",0xe75a050c,"ui.Overlay.addToOverlay","ui/Overlay.hx",46,0x8191a069)
		HX_STACK_THIS(this)
		HX_STACK_ARG(overlayItem,"overlayItem")
		HX_STACK_LINE(47)
		overlayItem->setOverlay(hx::ObjectPtr<OBJ_>(this));
		HX_STACK_LINE(48)
		::openfl::display::Sprite tmp = this->overlaySprite;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(48)
		::ui::OverlayItem tmp1 = overlayItem;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(48)
		tmp->addChild(tmp1);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Overlay_obj,addToOverlay,(void))

Void Overlay_obj::removeFromOverlay( ::ui::OverlayItem overlayItem){
{
		HX_STACK_FRAME("ui.Overlay","removeFromOverlay",0x42b7824a,"ui.Overlay.removeFromOverlay","ui/Overlay.hx",50,0x8191a069)
		HX_STACK_THIS(this)
		HX_STACK_ARG(overlayItem,"overlayItem")
		HX_STACK_LINE(51)
		::openfl::display::Sprite tmp = this->overlaySprite;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(51)
		::ui::OverlayItem tmp1 = overlayItem;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(51)
		bool tmp2 = tmp->contains(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(51)
		if ((tmp2)){
			HX_STACK_LINE(52)
			::openfl::display::Sprite tmp3 = this->overlaySprite;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(52)
			::ui::OverlayItem tmp4 = overlayItem;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(52)
			tmp3->removeChild(tmp4);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Overlay_obj,removeFromOverlay,(void))

Void Overlay_obj::addOverlayToClient( ::openfl::display::Sprite client){
{
		HX_STACK_FRAME("ui.Overlay","addOverlayToClient",0x5570aecd,"ui.Overlay.addOverlayToClient","ui/Overlay.hx",55,0x8191a069)
		HX_STACK_THIS(this)
		HX_STACK_ARG(client,"client")
		HX_STACK_LINE(56)
		client->addChild(hx::ObjectPtr<OBJ_>(this));
		HX_STACK_LINE(57)
		::openfl::display::Sprite tmp = this->overlaySprite;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(57)
		client->addChild(tmp);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Overlay_obj,addOverlayToClient,(void))

Void Overlay_obj::removeOverlayFromClient( ::openfl::display::Sprite client){
{
		HX_STACK_FRAME("ui.Overlay","removeOverlayFromClient",0x29562109,"ui.Overlay.removeOverlayFromClient","ui/Overlay.hx",59,0x8191a069)
		HX_STACK_THIS(this)
		HX_STACK_ARG(client,"client")
		HX_STACK_LINE(60)
		bool tmp = client->contains(hx::ObjectPtr<OBJ_>(this));		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(60)
		if ((tmp)){
			HX_STACK_LINE(61)
			client->removeChild(hx::ObjectPtr<OBJ_>(this));
		}
		HX_STACK_LINE(62)
		::openfl::display::Sprite tmp1 = this->overlaySprite;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(62)
		bool tmp2 = client->contains(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(62)
		if ((tmp2)){
			HX_STACK_LINE(63)
			::openfl::display::Sprite tmp3 = this->overlaySprite;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(63)
			client->removeChild(tmp3);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Overlay_obj,removeOverlayFromClient,(void))

Void Overlay_obj::activateOverlay( ){
{
		HX_STACK_FRAME("ui.Overlay","activateOverlay",0xffd13305,"ui.Overlay.activateOverlay","ui/Overlay.hx",66,0x8191a069)
		HX_STACK_THIS(this)
		HX_STACK_LINE(67)
		{
			HX_STACK_LINE(67)
			int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(67)
			::openfl::display::Sprite tmp = this->overlaySprite;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(67)
			int tmp1 = tmp->get_numChildren();		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(67)
			int _g = tmp1;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(67)
			while((true)){
				HX_STACK_LINE(67)
				bool tmp2 = (_g1 < _g);		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(67)
				bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(67)
				if ((tmp3)){
					HX_STACK_LINE(67)
					break;
				}
				HX_STACK_LINE(67)
				int tmp4 = (_g1)++;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(67)
				int i = tmp4;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(68)
				::openfl::display::Sprite tmp5 = this->overlaySprite;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(68)
				int tmp6 = i;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(68)
				::openfl::display::DisplayObject tmp7 = tmp5->getChildAt(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(68)
				::ui::OverlayItem overlayItem = ((::ui::OverlayItem)(tmp7));		HX_STACK_VAR(overlayItem,"overlayItem");
				HX_STACK_LINE(69)
				overlayItem->activateOverlayItem();
			}
		}
		HX_STACK_LINE(71)
		this->active = true;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Overlay_obj,activateOverlay,(void))

Void Overlay_obj::updateOverlay( ){
{
		HX_STACK_FRAME("ui.Overlay","updateOverlay",0xda58556f,"ui.Overlay.updateOverlay","ui/Overlay.hx",74,0x8191a069)
		HX_STACK_THIS(this)
		HX_STACK_LINE(74)
		int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(74)
		::openfl::display::Sprite tmp = this->overlaySprite;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(74)
		int tmp1 = tmp->get_numChildren();		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(74)
		int _g = tmp1;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(74)
		while((true)){
			HX_STACK_LINE(74)
			bool tmp2 = (_g1 < _g);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(74)
			bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(74)
			if ((tmp3)){
				HX_STACK_LINE(74)
				break;
			}
			HX_STACK_LINE(74)
			int tmp4 = (_g1)++;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(74)
			int i = tmp4;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(75)
			::openfl::display::Sprite tmp5 = this->overlaySprite;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(75)
			int tmp6 = i;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(75)
			::openfl::display::DisplayObject tmp7 = tmp5->getChildAt(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(75)
			::ui::OverlayItem overlayItem = ((::ui::OverlayItem)(tmp7));		HX_STACK_VAR(overlayItem,"overlayItem");
			HX_STACK_LINE(76)
			overlayItem->updateOverlayItem();
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Overlay_obj,updateOverlay,(void))

Void Overlay_obj::deactivateOverlay( ){
{
		HX_STACK_FRAME("ui.Overlay","deactivateOverlay",0x32d8fea4,"ui.Overlay.deactivateOverlay","ui/Overlay.hx",79,0x8191a069)
		HX_STACK_THIS(this)
		HX_STACK_LINE(80)
		{
			HX_STACK_LINE(80)
			int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(80)
			::openfl::display::Sprite tmp = this->overlaySprite;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(80)
			int tmp1 = tmp->get_numChildren();		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(80)
			int _g = tmp1;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(80)
			while((true)){
				HX_STACK_LINE(80)
				bool tmp2 = (_g1 < _g);		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(80)
				bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(80)
				if ((tmp3)){
					HX_STACK_LINE(80)
					break;
				}
				HX_STACK_LINE(80)
				int tmp4 = (_g1)++;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(80)
				int i = tmp4;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(81)
				::openfl::display::Sprite tmp5 = this->overlaySprite;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(81)
				int tmp6 = i;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(81)
				::openfl::display::DisplayObject tmp7 = tmp5->getChildAt(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(81)
				::ui::OverlayItem overlayItem = ((::ui::OverlayItem)(tmp7));		HX_STACK_VAR(overlayItem,"overlayItem");
				HX_STACK_LINE(82)
				overlayItem->deactivateOverlayItem();
			}
		}
		HX_STACK_LINE(84)
		this->active = false;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Overlay_obj,deactivateOverlay,(void))

Void Overlay_obj::resetItems( ::ui::OverlayItem item){
{
		HX_STACK_FRAME("ui.Overlay","resetItems",0x076795c9,"ui.Overlay.resetItems","ui/Overlay.hx",88,0x8191a069)
		HX_STACK_THIS(this)
		HX_STACK_ARG(item,"item")
		HX_STACK_LINE(88)
		int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(88)
		::openfl::display::Sprite tmp = this->overlaySprite;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(88)
		int tmp1 = tmp->get_numChildren();		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(88)
		int _g = tmp1;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(88)
		while((true)){
			HX_STACK_LINE(88)
			bool tmp2 = (_g1 < _g);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(88)
			bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(88)
			if ((tmp3)){
				HX_STACK_LINE(88)
				break;
			}
			HX_STACK_LINE(88)
			int tmp4 = (_g1)++;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(88)
			int i = tmp4;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(89)
			::openfl::display::Sprite tmp5 = this->overlaySprite;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(89)
			int tmp6 = i;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(89)
			::openfl::display::DisplayObject tmp7 = tmp5->getChildAt(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(89)
			::ui::OverlayItem overlayItem = ((::ui::OverlayItem)(tmp7));		HX_STACK_VAR(overlayItem,"overlayItem");
			HX_STACK_LINE(90)
			bool tmp8 = (item != overlayItem);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(90)
			if ((tmp8)){
				HX_STACK_LINE(90)
				overlayItem->resetOverlayItem();
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Overlay_obj,resetItems,(void))

int Overlay_obj::getX( ){
	HX_STACK_FRAME("ui.Overlay","getX",0xfb11931a,"ui.Overlay.getX","ui/Overlay.hx",95,0x8191a069)
	HX_STACK_THIS(this)
	HX_STACK_LINE(95)
	::openfl::display::Sprite tmp = this->overlaySprite;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(95)
	Float tmp1 = tmp->get_x();		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(95)
	int tmp2 = ::Math_obj::round(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(95)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC0(Overlay_obj,getX,return )

int Overlay_obj::getY( ){
	HX_STACK_FRAME("ui.Overlay","getY",0xfb11931b,"ui.Overlay.getY","ui/Overlay.hx",96,0x8191a069)
	HX_STACK_THIS(this)
	HX_STACK_LINE(96)
	::openfl::display::Sprite tmp = this->overlaySprite;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(96)
	Float tmp1 = tmp->get_y();		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(96)
	int tmp2 = ::Math_obj::round(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(96)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC0(Overlay_obj,getY,return )


Overlay_obj::Overlay_obj()
{
}

void Overlay_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Overlay);
	HX_MARK_MEMBER_NAME(background,"background");
	HX_MARK_MEMBER_NAME(bgAlpha,"bgAlpha");
	HX_MARK_MEMBER_NAME(overlaySprite,"overlaySprite");
	HX_MARK_MEMBER_NAME(active,"active");
	::openfl::display::Sprite_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void Overlay_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(background,"background");
	HX_VISIT_MEMBER_NAME(bgAlpha,"bgAlpha");
	HX_VISIT_MEMBER_NAME(overlaySprite,"overlaySprite");
	HX_VISIT_MEMBER_NAME(active,"active");
	::openfl::display::Sprite_obj::__Visit(HX_VISIT_ARG);
}

Dynamic Overlay_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"getX") ) { return getX_dyn(); }
		if (HX_FIELD_EQ(inName,"getY") ) { return getY_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"active") ) { return active; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"bgAlpha") ) { return bgAlpha; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"isActive") ) { return isActive_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"background") ) { return background; }
		if (HX_FIELD_EQ(inName,"resetItems") ) { return resetItems_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"addToOverlay") ) { return addToOverlay_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"overlaySprite") ) { return overlaySprite; }
		if (HX_FIELD_EQ(inName,"redrawOverlay") ) { return redrawOverlay_dyn(); }
		if (HX_FIELD_EQ(inName,"updateOverlay") ) { return updateOverlay_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"activateOverlay") ) { return activateOverlay_dyn(); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"removeFromOverlay") ) { return removeFromOverlay_dyn(); }
		if (HX_FIELD_EQ(inName,"deactivateOverlay") ) { return deactivateOverlay_dyn(); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"addOverlayToClient") ) { return addOverlayToClient_dyn(); }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"removeOverlayFromClient") ) { return removeOverlayFromClient_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Overlay_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"active") ) { active=inValue.Cast< bool >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"bgAlpha") ) { bgAlpha=inValue.Cast< Float >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"background") ) { background=inValue.Cast< ::openfl::display::Shape >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"overlaySprite") ) { overlaySprite=inValue.Cast< ::openfl::display::Sprite >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool Overlay_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	return false;
}

void Overlay_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("background","\xee","\x93","\x1d","\x26"));
	outFields->push(HX_HCSTRING("bgAlpha","\x59","\xb7","\xbd","\xce"));
	outFields->push(HX_HCSTRING("overlaySprite","\xb5","\x9f","\x61","\x4f"));
	outFields->push(HX_HCSTRING("active","\xc6","\x41","\x46","\x16"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::openfl::display::Shape*/ ,(int)offsetof(Overlay_obj,background),HX_HCSTRING("background","\xee","\x93","\x1d","\x26")},
	{hx::fsFloat,(int)offsetof(Overlay_obj,bgAlpha),HX_HCSTRING("bgAlpha","\x59","\xb7","\xbd","\xce")},
	{hx::fsObject /*::openfl::display::Sprite*/ ,(int)offsetof(Overlay_obj,overlaySprite),HX_HCSTRING("overlaySprite","\xb5","\x9f","\x61","\x4f")},
	{hx::fsBool,(int)offsetof(Overlay_obj,active),HX_HCSTRING("active","\xc6","\x41","\x46","\x16")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("background","\xee","\x93","\x1d","\x26"),
	HX_HCSTRING("bgAlpha","\x59","\xb7","\xbd","\xce"),
	HX_HCSTRING("overlaySprite","\xb5","\x9f","\x61","\x4f"),
	HX_HCSTRING("active","\xc6","\x41","\x46","\x16"),
	HX_HCSTRING("redrawOverlay","\x19","\xab","\x96","\xf2"),
	HX_HCSTRING("isActive","\x50","\xdd","\xaf","\x6e"),
	HX_HCSTRING("addToOverlay","\xf4","\x9c","\xf8","\xd7"),
	HX_HCSTRING("removeFromOverlay","\x62","\x41","\xa1","\xfb"),
	HX_HCSTRING("addOverlayToClient","\xb5","\x24","\x0e","\x69"),
	HX_HCSTRING("removeOverlayFromClient","\x21","\x42","\x9c","\x60"),
	HX_HCSTRING("activateOverlay","\x1d","\x7c","\x84","\x2e"),
	HX_HCSTRING("updateOverlay","\x87","\xa8","\x7e","\x74"),
	HX_HCSTRING("deactivateOverlay","\xbc","\xbd","\xc2","\xeb"),
	HX_HCSTRING("resetItems","\xb1","\xe3","\xa8","\xaa"),
	HX_HCSTRING("getX","\x02","\x03","\x62","\x44"),
	HX_HCSTRING("getY","\x03","\x03","\x62","\x44"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Overlay_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Overlay_obj::__mClass,"__mClass");
};

#endif

hx::Class Overlay_obj::__mClass;

void Overlay_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("ui.Overlay","\x56","\xc7","\x7e","\x24");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &Overlay_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Overlay_obj >;
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

} // end namespace ui
