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

Void Animation_obj::__construct(::String name,int speed,::openfl::geom::Point animStart,int animWidth,int animHeight,Array< ::Dynamic > animFrames)
{
HX_STACK_FRAME("actors.Animation","new",0xe6f04146,"actors.Animation.new","actors/Animation.hx",25,0xc75c866b)
HX_STACK_THIS(this)
HX_STACK_ARG(name,"name")
HX_STACK_ARG(speed,"speed")
HX_STACK_ARG(animStart,"animStart")
HX_STACK_ARG(animWidth,"animWidth")
HX_STACK_ARG(animHeight,"animHeight")
HX_STACK_ARG(animFrames,"animFrames")
{
	HX_STACK_LINE(26)
	this->name = name;
	HX_STACK_LINE(27)
	this->speed = speed;
	HX_STACK_LINE(28)
	this->animStart = animStart;
	HX_STACK_LINE(29)
	this->animWidth = animWidth;
	HX_STACK_LINE(30)
	this->animHeight = animHeight;
	HX_STACK_LINE(31)
	this->animFrames = animFrames;
	HX_STACK_LINE(32)
	this->tickCount = (int)0;
	HX_STACK_LINE(34)
	this->frames = Array_obj< ::Dynamic >::__new();
	HX_STACK_LINE(35)
	{
		HX_STACK_LINE(35)
		int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(35)
		int _g = animFrames->length;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(35)
		while((true)){
			HX_STACK_LINE(35)
			bool tmp = (_g1 < _g);		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(35)
			bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(35)
			if ((tmp1)){
				HX_STACK_LINE(35)
				break;
			}
			HX_STACK_LINE(35)
			int tmp2 = (_g1)++;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(35)
			int i = tmp2;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(36)
			Float tmp3 = animStart->x;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(36)
			::openfl::geom::Point tmp4 = animFrames->__get(i).StaticCast< ::openfl::geom::Point >();		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(36)
			Float tmp5 = tmp4->x;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(36)
			int tmp6 = animWidth;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(36)
			Float tmp7 = (tmp5 * tmp6);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(36)
			Float tmp8 = (tmp3 + tmp7);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(37)
			Float tmp9 = animStart->y;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(37)
			::openfl::geom::Point tmp10 = animFrames->__get(i).StaticCast< ::openfl::geom::Point >();		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(37)
			Float tmp11 = tmp10->y;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(37)
			int tmp12 = animHeight;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(37)
			Float tmp13 = (tmp11 * tmp12);		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(37)
			Float tmp14 = (tmp9 + tmp13);		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(37)
			int tmp15 = animWidth;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(37)
			int tmp16 = animHeight;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(36)
			::openfl::geom::Rectangle tmp17 = ::openfl::geom::Rectangle_obj::__new(tmp8,tmp14,tmp15,tmp16);		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(36)
			::openfl::geom::Rectangle tempRectangle = tmp17;		HX_STACK_VAR(tempRectangle,"tempRectangle");
			HX_STACK_LINE(38)
			::openfl::geom::Rectangle tmp18 = tempRectangle;		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(38)
			this->frames->push(tmp18);
		}
	}
	HX_STACK_LINE(40)
	::openfl::geom::Rectangle tmp = this->frames->__get((int)0).StaticCast< ::openfl::geom::Rectangle >();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(40)
	this->currentFrame = tmp;
}
;
	return null();
}

//Animation_obj::~Animation_obj() { }

Dynamic Animation_obj::__CreateEmpty() { return  new Animation_obj; }
hx::ObjectPtr< Animation_obj > Animation_obj::__new(::String name,int speed,::openfl::geom::Point animStart,int animWidth,int animHeight,Array< ::Dynamic > animFrames)
{  hx::ObjectPtr< Animation_obj > _result_ = new Animation_obj();
	_result_->__construct(name,speed,animStart,animWidth,animHeight,animFrames);
	return _result_;}

Dynamic Animation_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Animation_obj > _result_ = new Animation_obj();
	_result_->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3],inArgs[4],inArgs[5]);
	return _result_;}

::openfl::geom::Rectangle Animation_obj::updateAnimation( ){
	HX_STACK_FRAME("actors.Animation","updateAnimation",0xdd34f1a1,"actors.Animation.updateAnimation","actors/Animation.hx",43,0xc75c866b)
	HX_STACK_THIS(this)
	HX_STACK_LINE(44)
	::openfl::geom::Rectangle tmp = this->currentFrame;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(44)
	bool tmp1 = (tmp == null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(44)
	if ((tmp1)){
		HX_STACK_LINE(45)
		::openfl::geom::Rectangle tmp2 = this->frames->__get((int)0).StaticCast< ::openfl::geom::Rectangle >();		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(45)
		this->currentFrame = tmp2;
		HX_STACK_LINE(46)
		::openfl::geom::Rectangle tmp3 = this->currentFrame;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(46)
		return tmp3;
	}
	HX_STACK_LINE(48)
	int tmp2 = this->speed;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(48)
	bool tmp3 = (tmp2 < (int)0);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(48)
	if ((tmp3)){
		HX_STACK_LINE(48)
		::openfl::geom::Rectangle tmp4 = this->currentFrame;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(48)
		return tmp4;
	}
	HX_STACK_LINE(50)
	(this->tickCount)++;
	HX_STACK_LINE(51)
	int tmp4 = this->tickCount;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(51)
	int tmp5 = this->speed;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(51)
	bool tmp6 = (tmp4 > tmp5);		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(51)
	if ((tmp6)){
		HX_STACK_LINE(52)
		this->tickCount = (int)0;
		HX_STACK_LINE(53)
		{
			HX_STACK_LINE(53)
			int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(53)
			int tmp7 = this->frames->length;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(53)
			int _g = tmp7;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(53)
			while((true)){
				HX_STACK_LINE(53)
				bool tmp8 = (_g1 < _g);		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(53)
				bool tmp9 = !(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(53)
				if ((tmp9)){
					HX_STACK_LINE(53)
					break;
				}
				HX_STACK_LINE(53)
				int tmp10 = (_g1)++;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(53)
				int i = tmp10;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(54)
				::openfl::geom::Rectangle tmp11 = this->currentFrame;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(54)
				::openfl::geom::Rectangle tmp12 = this->frames->__get(i).StaticCast< ::openfl::geom::Rectangle >();		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(54)
				bool tmp13 = (tmp11 == tmp12);		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(54)
				if ((tmp13)){
					HX_STACK_LINE(56)
					int tmp14 = this->frames->length;		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(56)
					int tmp15 = (tmp14 - (int)1);		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(56)
					int tmp16 = i;		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(56)
					bool tmp17 = (tmp15 == tmp16);		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(56)
					if ((tmp17)){
						HX_STACK_LINE(56)
						::openfl::geom::Rectangle tmp18 = this->frames->__get((int)0).StaticCast< ::openfl::geom::Rectangle >();		HX_STACK_VAR(tmp18,"tmp18");
						HX_STACK_LINE(56)
						this->currentFrame = tmp18;
					}
					else{
						HX_STACK_LINE(58)
						int tmp18 = (i + (int)1);		HX_STACK_VAR(tmp18,"tmp18");
						HX_STACK_LINE(58)
						::openfl::geom::Rectangle tmp19 = this->frames->__get(tmp18).StaticCast< ::openfl::geom::Rectangle >();		HX_STACK_VAR(tmp19,"tmp19");
						HX_STACK_LINE(58)
						this->currentFrame = tmp19;
					}
					HX_STACK_LINE(59)
					::openfl::geom::Rectangle tmp18 = this->currentFrame;		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(59)
					return tmp18;
				}
			}
		}
		HX_STACK_LINE(63)
		::openfl::errors::Error tmp7 = ::openfl::errors::Error_obj::__new(HX_HCSTRING("Somehow, the animation's current frame isn't contained in its array of frames.","\x34","\xb2","\xe6","\x91"),null());		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(63)
		HX_STACK_DO_THROW(tmp7);
	}
	HX_STACK_LINE(66)
	::openfl::geom::Rectangle tmp7 = this->currentFrame;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(66)
	return tmp7;
}


HX_DEFINE_DYNAMIC_FUNC0(Animation_obj,updateAnimation,return )

int Animation_obj::getFrameIndex( ){
	HX_STACK_FRAME("actors.Animation","getFrameIndex",0xd609f841,"actors.Animation.getFrameIndex","actors/Animation.hx",69,0xc75c866b)
	HX_STACK_THIS(this)
	HX_STACK_LINE(70)
	{
		HX_STACK_LINE(70)
		int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(70)
		int tmp = this->frames->length;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(70)
		int _g = tmp;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(70)
		while((true)){
			HX_STACK_LINE(70)
			bool tmp1 = (_g1 < _g);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(70)
			bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(70)
			if ((tmp2)){
				HX_STACK_LINE(70)
				break;
			}
			HX_STACK_LINE(70)
			int tmp3 = (_g1)++;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(70)
			int i = tmp3;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(71)
			::openfl::geom::Rectangle tmp4 = this->currentFrame;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(71)
			::openfl::geom::Rectangle tmp5 = this->frames->__get(i).StaticCast< ::openfl::geom::Rectangle >();		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(71)
			bool tmp6 = (tmp4 == tmp5);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(71)
			if ((tmp6)){
				HX_STACK_LINE(72)
				int tmp7 = i;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(72)
				return tmp7;
			}
		}
	}
	HX_STACK_LINE(74)
	return (int)-1;
}


HX_DEFINE_DYNAMIC_FUNC0(Animation_obj,getFrameIndex,return )

::openfl::geom::Rectangle Animation_obj::getRectangle( ){
	HX_STACK_FRAME("actors.Animation","getRectangle",0xe610b313,"actors.Animation.getRectangle","actors/Animation.hx",76,0xc75c866b)
	HX_STACK_THIS(this)
	HX_STACK_LINE(76)
	::openfl::geom::Rectangle tmp = this->currentFrame;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(76)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(Animation_obj,getRectangle,return )

int Animation_obj::getWidth( ){
	HX_STACK_FRAME("actors.Animation","getWidth",0xbc9c52ea,"actors.Animation.getWidth","actors/Animation.hx",77,0xc75c866b)
	HX_STACK_THIS(this)
	HX_STACK_LINE(77)
	::openfl::geom::Rectangle tmp = this->currentFrame;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(77)
	int tmp1 = ((int)(tmp->width));		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(77)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(Animation_obj,getWidth,return )

int Animation_obj::getHeight( ){
	HX_STACK_FRAME("actors.Animation","getHeight",0x027bb283,"actors.Animation.getHeight","actors/Animation.hx",78,0xc75c866b)
	HX_STACK_THIS(this)
	HX_STACK_LINE(78)
	::openfl::geom::Rectangle tmp = this->currentFrame;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(78)
	int tmp1 = ((int)(tmp->height));		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(78)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(Animation_obj,getHeight,return )

::String Animation_obj::getName( ){
	HX_STACK_FRAME("actors.Animation","getName",0xcf3ffde7,"actors.Animation.getName","actors/Animation.hx",79,0xc75c866b)
	HX_STACK_THIS(this)
	HX_STACK_LINE(79)
	::String tmp = this->name;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(79)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(Animation_obj,getName,return )

::openfl::geom::Point Animation_obj::getAnimStart( ){
	HX_STACK_FRAME("actors.Animation","getAnimStart",0x08269f75,"actors.Animation.getAnimStart","actors/Animation.hx",80,0xc75c866b)
	HX_STACK_THIS(this)
	HX_STACK_LINE(80)
	::openfl::geom::Point tmp = this->animStart;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(80)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(Animation_obj,getAnimStart,return )

::actors::Animation Animation_obj::getClone( hx::Null< int >  __o_newSpeed){
int newSpeed = __o_newSpeed.Default(-1);
	HX_STACK_FRAME("actors.Animation","getClone",0x3a9cb041,"actors.Animation.getClone","actors/Animation.hx",82,0xc75c866b)
	HX_STACK_THIS(this)
	HX_STACK_ARG(newSpeed,"newSpeed")
{
		HX_STACK_LINE(83)
		bool tmp = (newSpeed == (int)-1);		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(83)
		if ((tmp)){
			HX_STACK_LINE(83)
			int tmp1 = this->speed;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(83)
			newSpeed = tmp1;
		}
		HX_STACK_LINE(84)
		::String tmp1 = this->name;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(84)
		int tmp2 = newSpeed;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(84)
		::openfl::geom::Point tmp3 = this->animStart;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(84)
		int tmp4 = this->animWidth;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(84)
		int tmp5 = this->animHeight;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(84)
		::actors::Animation tmp6 = ::actors::Animation_obj::__new(tmp1,tmp2,tmp3,tmp4,tmp5,this->animFrames);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(84)
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
		if (HX_FIELD_EQ(inName,"getFrameIndex") ) { return getFrameIndex_dyn(); }
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
	HX_HCSTRING("tickCount","\x32","\xa0","\xa1","\xc5"),
	HX_HCSTRING("speed","\x87","\x97","\x69","\x81"),
	HX_HCSTRING("currentFrame","\x34","\x5d","\x8f","\x4d"),
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