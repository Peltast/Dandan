#include <hxcpp.h>

#ifndef INCLUDED_actors_Animation
#include <actors/Animation.h>
#endif
#ifndef INCLUDED_openfl_errors_Error
#include <openfl/errors/Error.h>
#endif
#ifndef INCLUDED_openfl_geom_Point
#include <openfl/geom/Point.h>
#endif
#ifndef INCLUDED_openfl_geom_Rectangle
#include <openfl/geom/Rectangle.h>
#endif
namespace actors{

Void Animation_obj::__construct(::String name,int speed,::openfl::geom::Point animStart,int animWidth,int animHeight,Array< ::Dynamic > animFrames,hx::Null< int >  __o_intervalPause)
{
HX_STACK_FRAME("actors.Animation","new",0xe6f04146,"actors.Animation.new","actors/Animation.hx",27,0xc75c866b)
HX_STACK_THIS(this)
HX_STACK_ARG(name,"name")
HX_STACK_ARG(speed,"speed")
HX_STACK_ARG(animStart,"animStart")
HX_STACK_ARG(animWidth,"animWidth")
HX_STACK_ARG(animHeight,"animHeight")
HX_STACK_ARG(animFrames,"animFrames")
HX_STACK_ARG(__o_intervalPause,"intervalPause")
int intervalPause = __o_intervalPause.Default(0);
{
	HX_STACK_LINE(28)
	this->name = name;
	HX_STACK_LINE(29)
	this->speed = speed;
	HX_STACK_LINE(30)
	this->animStart = animStart;
	HX_STACK_LINE(31)
	this->animWidth = animWidth;
	HX_STACK_LINE(32)
	this->animHeight = animHeight;
	HX_STACK_LINE(33)
	this->animFrames = animFrames;
	HX_STACK_LINE(34)
	this->intervalPause = intervalPause;
	HX_STACK_LINE(35)
	this->tickCount = (int)0;
	HX_STACK_LINE(36)
	this->intervalCount = (int)0;
	HX_STACK_LINE(38)
	this->frames = Array_obj< ::Dynamic >::__new();
	HX_STACK_LINE(39)
	{
		HX_STACK_LINE(39)
		int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(39)
		int _g = animFrames->length;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(39)
		while((true)){
			HX_STACK_LINE(39)
			bool tmp = (_g1 < _g);		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(39)
			bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(39)
			if ((tmp1)){
				HX_STACK_LINE(39)
				break;
			}
			HX_STACK_LINE(39)
			int tmp2 = (_g1)++;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(39)
			int i = tmp2;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(40)
			Float tmp3 = animStart->x;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(40)
			::openfl::geom::Point tmp4 = animFrames->__get(i).StaticCast< ::openfl::geom::Point >();		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(40)
			Float tmp5 = tmp4->x;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(40)
			int tmp6 = animWidth;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(40)
			Float tmp7 = (tmp5 * tmp6);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(40)
			Float tmp8 = (tmp3 + tmp7);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(41)
			Float tmp9 = animStart->y;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(41)
			::openfl::geom::Point tmp10 = animFrames->__get(i).StaticCast< ::openfl::geom::Point >();		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(41)
			Float tmp11 = tmp10->y;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(41)
			int tmp12 = animHeight;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(41)
			Float tmp13 = (tmp11 * tmp12);		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(41)
			Float tmp14 = (tmp9 + tmp13);		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(41)
			int tmp15 = animWidth;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(41)
			int tmp16 = animHeight;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(40)
			::openfl::geom::Rectangle tmp17 = ::openfl::geom::Rectangle_obj::__new(tmp8,tmp14,tmp15,tmp16);		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(40)
			::openfl::geom::Rectangle tempRectangle = tmp17;		HX_STACK_VAR(tempRectangle,"tempRectangle");
			HX_STACK_LINE(42)
			::openfl::geom::Rectangle tmp18 = tempRectangle;		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(42)
			this->frames->push(tmp18);
		}
	}
	HX_STACK_LINE(44)
	::openfl::geom::Rectangle tmp = this->frames->__get((int)0).StaticCast< ::openfl::geom::Rectangle >();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(44)
	this->currentFrame = tmp;
}
;
	return null();
}

//Animation_obj::~Animation_obj() { }

Dynamic Animation_obj::__CreateEmpty() { return  new Animation_obj; }
hx::ObjectPtr< Animation_obj > Animation_obj::__new(::String name,int speed,::openfl::geom::Point animStart,int animWidth,int animHeight,Array< ::Dynamic > animFrames,hx::Null< int >  __o_intervalPause)
{  hx::ObjectPtr< Animation_obj > _result_ = new Animation_obj();
	_result_->__construct(name,speed,animStart,animWidth,animHeight,animFrames,__o_intervalPause);
	return _result_;}

Dynamic Animation_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Animation_obj > _result_ = new Animation_obj();
	_result_->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3],inArgs[4],inArgs[5],inArgs[6]);
	return _result_;}

Void Animation_obj::resetAnimation( ){
{
		HX_STACK_FRAME("actors.Animation","resetAnimation",0x1e7b600f,"actors.Animation.resetAnimation","actors/Animation.hx",47,0xc75c866b)
		HX_STACK_THIS(this)
		HX_STACK_LINE(48)
		this->tickCount = (int)0;
		HX_STACK_LINE(49)
		this->intervalCount = (int)0;
		HX_STACK_LINE(50)
		::openfl::geom::Rectangle tmp = this->frames->__get((int)0).StaticCast< ::openfl::geom::Rectangle >();		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(50)
		this->currentFrame = tmp;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Animation_obj,resetAnimation,(void))

::openfl::geom::Rectangle Animation_obj::updateAnimation( ){
	HX_STACK_FRAME("actors.Animation","updateAnimation",0xdd34f1a1,"actors.Animation.updateAnimation","actors/Animation.hx",53,0xc75c866b)
	HX_STACK_THIS(this)
	HX_STACK_LINE(54)
	::openfl::geom::Rectangle tmp = this->currentFrame;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(54)
	bool tmp1 = (tmp == null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(54)
	if ((tmp1)){
		HX_STACK_LINE(55)
		::openfl::geom::Rectangle tmp2 = this->frames->__get((int)0).StaticCast< ::openfl::geom::Rectangle >();		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(55)
		this->currentFrame = tmp2;
		HX_STACK_LINE(56)
		::openfl::geom::Rectangle tmp3 = this->currentFrame;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(56)
		return tmp3;
	}
	HX_STACK_LINE(58)
	int tmp2 = this->speed;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(58)
	bool tmp3 = (tmp2 < (int)0);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(58)
	if ((tmp3)){
		HX_STACK_LINE(58)
		::openfl::geom::Rectangle tmp4 = this->currentFrame;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(58)
		return tmp4;
	}
	HX_STACK_LINE(60)
	int tmp4 = this->intervalCount;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(60)
	bool tmp5 = (tmp4 > (int)0);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(60)
	if ((tmp5)){
		HX_STACK_LINE(61)
		hx::SubEq(this->intervalCount,(int)1);
		HX_STACK_LINE(62)
		::openfl::geom::Rectangle tmp6 = this->currentFrame;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(62)
		return tmp6;
	}
	HX_STACK_LINE(65)
	(this->tickCount)++;
	HX_STACK_LINE(66)
	int tmp6 = this->tickCount;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(66)
	int tmp7 = this->speed;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(66)
	bool tmp8 = (tmp6 > tmp7);		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(66)
	if ((tmp8)){
		HX_STACK_LINE(67)
		this->tickCount = (int)0;
		HX_STACK_LINE(68)
		{
			HX_STACK_LINE(68)
			int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(68)
			int tmp9 = this->frames->length;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(68)
			int _g = tmp9;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(68)
			while((true)){
				HX_STACK_LINE(68)
				bool tmp10 = (_g1 < _g);		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(68)
				bool tmp11 = !(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(68)
				if ((tmp11)){
					HX_STACK_LINE(68)
					break;
				}
				HX_STACK_LINE(68)
				int tmp12 = (_g1)++;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(68)
				int i = tmp12;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(69)
				::openfl::geom::Rectangle tmp13 = this->currentFrame;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(69)
				::openfl::geom::Rectangle tmp14 = this->frames->__get(i).StaticCast< ::openfl::geom::Rectangle >();		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(69)
				bool tmp15 = (tmp13 == tmp14);		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(69)
				if ((tmp15)){
					HX_STACK_LINE(71)
					int tmp16 = this->frames->length;		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(71)
					int tmp17 = (tmp16 - (int)1);		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(71)
					int tmp18 = i;		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(71)
					bool tmp19 = (tmp17 == tmp18);		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(71)
					if ((tmp19)){
						HX_STACK_LINE(73)
						::openfl::geom::Rectangle tmp20 = this->frames->__get((int)0).StaticCast< ::openfl::geom::Rectangle >();		HX_STACK_VAR(tmp20,"tmp20");
						HX_STACK_LINE(73)
						this->currentFrame = tmp20;
						HX_STACK_LINE(76)
						int tmp21 = this->intervalPause;		HX_STACK_VAR(tmp21,"tmp21");
						HX_STACK_LINE(76)
						this->intervalCount = tmp21;
					}
					else{
						HX_STACK_LINE(80)
						int tmp20 = (i + (int)1);		HX_STACK_VAR(tmp20,"tmp20");
						HX_STACK_LINE(80)
						::openfl::geom::Rectangle tmp21 = this->frames->__get(tmp20).StaticCast< ::openfl::geom::Rectangle >();		HX_STACK_VAR(tmp21,"tmp21");
						HX_STACK_LINE(80)
						this->currentFrame = tmp21;
					}
					HX_STACK_LINE(81)
					::openfl::geom::Rectangle tmp20 = this->currentFrame;		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(81)
					return tmp20;
				}
			}
		}
		HX_STACK_LINE(85)
		::openfl::errors::Error tmp9 = ::openfl::errors::Error_obj::__new(HX_HCSTRING("Somehow, the animation's current frame isn't contained in its array of frames.","\x34","\xb2","\xe6","\x91"),null());		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(85)
		HX_STACK_DO_THROW(tmp9);
	}
	HX_STACK_LINE(88)
	::openfl::geom::Rectangle tmp9 = this->currentFrame;		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(88)
	return tmp9;
}


HX_DEFINE_DYNAMIC_FUNC0(Animation_obj,updateAnimation,return )

int Animation_obj::getFrameIndex( ){
	HX_STACK_FRAME("actors.Animation","getFrameIndex",0xd609f841,"actors.Animation.getFrameIndex","actors/Animation.hx",91,0xc75c866b)
	HX_STACK_THIS(this)
	HX_STACK_LINE(92)
	{
		HX_STACK_LINE(92)
		int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(92)
		int tmp = this->frames->length;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(92)
		int _g = tmp;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(92)
		while((true)){
			HX_STACK_LINE(92)
			bool tmp1 = (_g1 < _g);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(92)
			bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(92)
			if ((tmp2)){
				HX_STACK_LINE(92)
				break;
			}
			HX_STACK_LINE(92)
			int tmp3 = (_g1)++;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(92)
			int i = tmp3;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(93)
			::openfl::geom::Rectangle tmp4 = this->currentFrame;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(93)
			::openfl::geom::Rectangle tmp5 = this->frames->__get(i).StaticCast< ::openfl::geom::Rectangle >();		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(93)
			bool tmp6 = (tmp4 == tmp5);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(93)
			if ((tmp6)){
				HX_STACK_LINE(94)
				int tmp7 = i;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(94)
				return tmp7;
			}
		}
	}
	HX_STACK_LINE(96)
	return (int)-1;
}


HX_DEFINE_DYNAMIC_FUNC0(Animation_obj,getFrameIndex,return )

::openfl::geom::Rectangle Animation_obj::getRectangle( ){
	HX_STACK_FRAME("actors.Animation","getRectangle",0xe610b313,"actors.Animation.getRectangle","actors/Animation.hx",98,0xc75c866b)
	HX_STACK_THIS(this)
	HX_STACK_LINE(98)
	::openfl::geom::Rectangle tmp = this->currentFrame;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(98)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(Animation_obj,getRectangle,return )

int Animation_obj::getWidth( ){
	HX_STACK_FRAME("actors.Animation","getWidth",0xbc9c52ea,"actors.Animation.getWidth","actors/Animation.hx",99,0xc75c866b)
	HX_STACK_THIS(this)
	HX_STACK_LINE(99)
	::openfl::geom::Rectangle tmp = this->currentFrame;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(99)
	int tmp1 = ((int)(tmp->width));		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(99)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(Animation_obj,getWidth,return )

int Animation_obj::getHeight( ){
	HX_STACK_FRAME("actors.Animation","getHeight",0x027bb283,"actors.Animation.getHeight","actors/Animation.hx",100,0xc75c866b)
	HX_STACK_THIS(this)
	HX_STACK_LINE(100)
	::openfl::geom::Rectangle tmp = this->currentFrame;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(100)
	int tmp1 = ((int)(tmp->height));		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(100)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(Animation_obj,getHeight,return )

::String Animation_obj::getName( ){
	HX_STACK_FRAME("actors.Animation","getName",0xcf3ffde7,"actors.Animation.getName","actors/Animation.hx",101,0xc75c866b)
	HX_STACK_THIS(this)
	HX_STACK_LINE(101)
	::String tmp = this->name;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(101)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(Animation_obj,getName,return )

::openfl::geom::Point Animation_obj::getAnimStart( ){
	HX_STACK_FRAME("actors.Animation","getAnimStart",0x08269f75,"actors.Animation.getAnimStart","actors/Animation.hx",102,0xc75c866b)
	HX_STACK_THIS(this)
	HX_STACK_LINE(102)
	::openfl::geom::Point tmp = this->animStart;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(102)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(Animation_obj,getAnimStart,return )

::actors::Animation Animation_obj::getClone( hx::Null< int >  __o_newSpeed){
int newSpeed = __o_newSpeed.Default(-1);
	HX_STACK_FRAME("actors.Animation","getClone",0x3a9cb041,"actors.Animation.getClone","actors/Animation.hx",104,0xc75c866b)
	HX_STACK_THIS(this)
	HX_STACK_ARG(newSpeed,"newSpeed")
{
		HX_STACK_LINE(105)
		bool tmp = (newSpeed == (int)-1);		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(105)
		if ((tmp)){
			HX_STACK_LINE(105)
			int tmp1 = this->speed;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(105)
			newSpeed = tmp1;
		}
		HX_STACK_LINE(106)
		::String tmp1 = this->name;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(106)
		int tmp2 = newSpeed;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(106)
		::openfl::geom::Point tmp3 = this->animStart;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(106)
		int tmp4 = this->animWidth;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(106)
		int tmp5 = this->animHeight;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(106)
		::actors::Animation tmp6 = ::actors::Animation_obj::__new(tmp1,tmp2,tmp3,tmp4,tmp5,this->animFrames,null());		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(106)
		return tmp6;
	}
}


HX_DEFINE_DYNAMIC_FUNC1(Animation_obj,getClone,return )


Animation_obj::Animation_obj()
{
}

void Animation_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Animation);
	HX_MARK_MEMBER_NAME(frames,"frames");
	HX_MARK_MEMBER_NAME(name,"name");
	HX_MARK_MEMBER_NAME(animStart,"animStart");
	HX_MARK_MEMBER_NAME(animWidth,"animWidth");
	HX_MARK_MEMBER_NAME(animHeight,"animHeight");
	HX_MARK_MEMBER_NAME(animFrames,"animFrames");
	HX_MARK_MEMBER_NAME(intervalPause,"intervalPause");
	HX_MARK_MEMBER_NAME(intervalCount,"intervalCount");
	HX_MARK_MEMBER_NAME(tickCount,"tickCount");
	HX_MARK_MEMBER_NAME(speed,"speed");
	HX_MARK_MEMBER_NAME(currentFrame,"currentFrame");
	HX_MARK_END_CLASS();
}

void Animation_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(frames,"frames");
	HX_VISIT_MEMBER_NAME(name,"name");
	HX_VISIT_MEMBER_NAME(animStart,"animStart");
	HX_VISIT_MEMBER_NAME(animWidth,"animWidth");
	HX_VISIT_MEMBER_NAME(animHeight,"animHeight");
	HX_VISIT_MEMBER_NAME(animFrames,"animFrames");
	HX_VISIT_MEMBER_NAME(intervalPause,"intervalPause");
	HX_VISIT_MEMBER_NAME(intervalCount,"intervalCount");
	HX_VISIT_MEMBER_NAME(tickCount,"tickCount");
	HX_VISIT_MEMBER_NAME(speed,"speed");
	HX_VISIT_MEMBER_NAME(currentFrame,"currentFrame");
}

Dynamic Animation_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"name") ) { return name; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"speed") ) { return speed; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"frames") ) { return frames; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"getName") ) { return getName_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"getWidth") ) { return getWidth_dyn(); }
		if (HX_FIELD_EQ(inName,"getClone") ) { return getClone_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"animStart") ) { return animStart; }
		if (HX_FIELD_EQ(inName,"animWidth") ) { return animWidth; }
		if (HX_FIELD_EQ(inName,"tickCount") ) { return tickCount; }
		if (HX_FIELD_EQ(inName,"getHeight") ) { return getHeight_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"animHeight") ) { return animHeight; }
		if (HX_FIELD_EQ(inName,"animFrames") ) { return animFrames; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"currentFrame") ) { return currentFrame; }
		if (HX_FIELD_EQ(inName,"getRectangle") ) { return getRectangle_dyn(); }
		if (HX_FIELD_EQ(inName,"getAnimStart") ) { return getAnimStart_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"intervalPause") ) { return intervalPause; }
		if (HX_FIELD_EQ(inName,"intervalCount") ) { return intervalCount; }
		if (HX_FIELD_EQ(inName,"getFrameIndex") ) { return getFrameIndex_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"resetAnimation") ) { return resetAnimation_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"updateAnimation") ) { return updateAnimation_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Animation_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"name") ) { name=inValue.Cast< ::String >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"speed") ) { speed=inValue.Cast< int >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"frames") ) { frames=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"animStart") ) { animStart=inValue.Cast< ::openfl::geom::Point >(); return inValue; }
		if (HX_FIELD_EQ(inName,"animWidth") ) { animWidth=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"tickCount") ) { tickCount=inValue.Cast< int >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"animHeight") ) { animHeight=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"animFrames") ) { animFrames=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"currentFrame") ) { currentFrame=inValue.Cast< ::openfl::geom::Rectangle >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"intervalPause") ) { intervalPause=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"intervalCount") ) { intervalCount=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool Animation_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	return false;
}

void Animation_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("frames","\xa6","\xaf","\x85","\xac"));
	outFields->push(HX_HCSTRING("name","\x4b","\x72","\xff","\x48"));
	outFields->push(HX_HCSTRING("animStart","\x91","\xc0","\x92","\x3b"));
	outFields->push(HX_HCSTRING("animWidth","\x35","\x02","\xea","\x81"));
	outFields->push(HX_HCSTRING("animHeight","\xd8","\x64","\x27","\xe1"));
	outFields->push(HX_HCSTRING("animFrames","\x97","\x0c","\x61","\x8b"));
	outFields->push(HX_HCSTRING("intervalPause","\x71","\x13","\xd2","\xab"));
	outFields->push(HX_HCSTRING("intervalCount","\x4a","\x81","\xdd","\x38"));
	outFields->push(HX_HCSTRING("tickCount","\x32","\xa0","\xa1","\xc5"));
	outFields->push(HX_HCSTRING("speed","\x87","\x97","\x69","\x81"));
	outFields->push(HX_HCSTRING("currentFrame","\x34","\x5d","\x8f","\x4d"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(Animation_obj,frames),HX_HCSTRING("frames","\xa6","\xaf","\x85","\xac")},
	{hx::fsString,(int)offsetof(Animation_obj,name),HX_HCSTRING("name","\x4b","\x72","\xff","\x48")},
	{hx::fsObject /*::openfl::geom::Point*/ ,(int)offsetof(Animation_obj,animStart),HX_HCSTRING("animStart","\x91","\xc0","\x92","\x3b")},
	{hx::fsInt,(int)offsetof(Animation_obj,animWidth),HX_HCSTRING("animWidth","\x35","\x02","\xea","\x81")},
	{hx::fsInt,(int)offsetof(Animation_obj,animHeight),HX_HCSTRING("animHeight","\xd8","\x64","\x27","\xe1")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(Animation_obj,animFrames),HX_HCSTRING("animFrames","\x97","\x0c","\x61","\x8b")},
	{hx::fsInt,(int)offsetof(Animation_obj,intervalPause),HX_HCSTRING("intervalPause","\x71","\x13","\xd2","\xab")},
	{hx::fsInt,(int)offsetof(Animation_obj,intervalCount),HX_HCSTRING("intervalCount","\x4a","\x81","\xdd","\x38")},
	{hx::fsInt,(int)offsetof(Animation_obj,tickCount),HX_HCSTRING("tickCount","\x32","\xa0","\xa1","\xc5")},
	{hx::fsInt,(int)offsetof(Animation_obj,speed),HX_HCSTRING("speed","\x87","\x97","\x69","\x81")},
	{hx::fsObject /*::openfl::geom::Rectangle*/ ,(int)offsetof(Animation_obj,currentFrame),HX_HCSTRING("currentFrame","\x34","\x5d","\x8f","\x4d")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("frames","\xa6","\xaf","\x85","\xac"),
	HX_HCSTRING("name","\x4b","\x72","\xff","\x48"),
	HX_HCSTRING("animStart","\x91","\xc0","\x92","\x3b"),
	HX_HCSTRING("animWidth","\x35","\x02","\xea","\x81"),
	HX_HCSTRING("animHeight","\xd8","\x64","\x27","\xe1"),
	HX_HCSTRING("animFrames","\x97","\x0c","\x61","\x8b"),
	HX_HCSTRING("intervalPause","\x71","\x13","\xd2","\xab"),
	HX_HCSTRING("intervalCount","\x4a","\x81","\xdd","\x38"),
	HX_HCSTRING("tickCount","\x32","\xa0","\xa1","\xc5"),
	HX_HCSTRING("speed","\x87","\x97","\x69","\x81"),
	HX_HCSTRING("currentFrame","\x34","\x5d","\x8f","\x4d"),
	HX_HCSTRING("resetAnimation","\x35","\x53","\xa5","\xa5"),
	HX_HCSTRING("updateAnimation","\xbb","\xbf","\xbf","\x9a"),
	HX_HCSTRING("getFrameIndex","\xdb","\x2b","\xad","\xfd"),
	HX_HCSTRING("getRectangle","\xb9","\x70","\xd3","\x28"),
	HX_HCSTRING("getWidth","\x90","\xc5","\x39","\x2a"),
	HX_HCSTRING("getHeight","\x1d","\x91","\xa2","\x7e"),
	HX_HCSTRING("getName","\x01","\x22","\x82","\x1b"),
	HX_HCSTRING("getAnimStart","\x1b","\x5d","\xe9","\x4a"),
	HX_HCSTRING("getClone","\xe7","\x22","\x3a","\xa8"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Animation_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Animation_obj::__mClass,"__mClass");
};

#endif

hx::Class Animation_obj::__mClass;

void Animation_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("actors.Animation","\x54","\xe6","\x20","\x31");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &Animation_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Animation_obj >;
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

} // end namespace actors
