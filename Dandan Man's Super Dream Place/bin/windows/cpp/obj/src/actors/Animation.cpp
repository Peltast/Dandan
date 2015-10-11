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

Void Animation_obj::__construct(::String name,int speed,::openfl::geom::Point animStart,int animWidth,int animHeight,Array< ::Dynamic > animFrames,hx::Null< int >  __o_intervalPause,hx::Null< bool >  __o_loop)
{
HX_STACK_FRAME("actors.Animation","new",0xe6f04146,"actors.Animation.new","actors/Animation.hx",30,0xc75c866b)
HX_STACK_THIS(this)
HX_STACK_ARG(name,"name")
HX_STACK_ARG(speed,"speed")
HX_STACK_ARG(animStart,"animStart")
HX_STACK_ARG(animWidth,"animWidth")
HX_STACK_ARG(animHeight,"animHeight")
HX_STACK_ARG(animFrames,"animFrames")
HX_STACK_ARG(__o_intervalPause,"intervalPause")
HX_STACK_ARG(__o_loop,"loop")
int intervalPause = __o_intervalPause.Default(0);
bool loop = __o_loop.Default(true);
{
	HX_STACK_LINE(31)
	this->name = name;
	HX_STACK_LINE(32)
	this->speed = speed;
	HX_STACK_LINE(33)
	this->animStart = animStart;
	HX_STACK_LINE(34)
	this->animWidth = animWidth;
	HX_STACK_LINE(35)
	this->animHeight = animHeight;
	HX_STACK_LINE(36)
	this->animFrames = animFrames;
	HX_STACK_LINE(37)
	this->intervalPause = intervalPause;
	HX_STACK_LINE(38)
	this->loop = loop;
	HX_STACK_LINE(39)
	this->tickCount = (int)0;
	HX_STACK_LINE(40)
	this->intervalCount = (int)0;
	HX_STACK_LINE(42)
	this->frames = Array_obj< ::Dynamic >::__new();
	HX_STACK_LINE(43)
	{
		HX_STACK_LINE(43)
		int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(43)
		int _g = animFrames->length;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(43)
		while((true)){
			HX_STACK_LINE(43)
			bool tmp = (_g1 < _g);		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(43)
			bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(43)
			if ((tmp1)){
				HX_STACK_LINE(43)
				break;
			}
			HX_STACK_LINE(43)
			int tmp2 = (_g1)++;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(43)
			int i = tmp2;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(44)
			Float tmp3 = animStart->x;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(44)
			::openfl::geom::Point tmp4 = animFrames->__get(i).StaticCast< ::openfl::geom::Point >();		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(44)
			Float tmp5 = tmp4->x;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(44)
			int tmp6 = animWidth;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(44)
			Float tmp7 = (tmp5 * tmp6);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(44)
			Float tmp8 = (tmp3 + tmp7);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(45)
			Float tmp9 = animStart->y;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(45)
			::openfl::geom::Point tmp10 = animFrames->__get(i).StaticCast< ::openfl::geom::Point >();		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(45)
			Float tmp11 = tmp10->y;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(45)
			int tmp12 = animHeight;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(45)
			Float tmp13 = (tmp11 * tmp12);		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(45)
			Float tmp14 = (tmp9 + tmp13);		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(45)
			int tmp15 = animWidth;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(45)
			int tmp16 = animHeight;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(44)
			::openfl::geom::Rectangle tmp17 = ::openfl::geom::Rectangle_obj::__new(tmp8,tmp14,tmp15,tmp16);		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(44)
			::openfl::geom::Rectangle tempRectangle = tmp17;		HX_STACK_VAR(tempRectangle,"tempRectangle");
			HX_STACK_LINE(46)
			::openfl::geom::Rectangle tmp18 = tempRectangle;		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(46)
			this->frames->push(tmp18);
		}
	}
	HX_STACK_LINE(48)
	::openfl::geom::Rectangle tmp = this->frames->__get((int)0).StaticCast< ::openfl::geom::Rectangle >();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(48)
	this->currentFrame = tmp;
}
;
	return null();
}

//Animation_obj::~Animation_obj() { }

Dynamic Animation_obj::__CreateEmpty() { return  new Animation_obj; }
hx::ObjectPtr< Animation_obj > Animation_obj::__new(::String name,int speed,::openfl::geom::Point animStart,int animWidth,int animHeight,Array< ::Dynamic > animFrames,hx::Null< int >  __o_intervalPause,hx::Null< bool >  __o_loop)
{  hx::ObjectPtr< Animation_obj > _result_ = new Animation_obj();
	_result_->__construct(name,speed,animStart,animWidth,animHeight,animFrames,__o_intervalPause,__o_loop);
	return _result_;}

Dynamic Animation_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Animation_obj > _result_ = new Animation_obj();
	_result_->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3],inArgs[4],inArgs[5],inArgs[6],inArgs[7]);
	return _result_;}

Void Animation_obj::resetAnimation( ){
{
		HX_STACK_FRAME("actors.Animation","resetAnimation",0x1e7b600f,"actors.Animation.resetAnimation","actors/Animation.hx",51,0xc75c866b)
		HX_STACK_THIS(this)
		HX_STACK_LINE(52)
		this->tickCount = (int)0;
		HX_STACK_LINE(53)
		this->intervalCount = (int)0;
		HX_STACK_LINE(54)
		::openfl::geom::Rectangle tmp = this->frames->__get((int)0).StaticCast< ::openfl::geom::Rectangle >();		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(54)
		this->currentFrame = tmp;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Animation_obj,resetAnimation,(void))

::openfl::geom::Rectangle Animation_obj::updateAnimation( ){
	HX_STACK_FRAME("actors.Animation","updateAnimation",0xdd34f1a1,"actors.Animation.updateAnimation","actors/Animation.hx",57,0xc75c866b)
	HX_STACK_THIS(this)
	HX_STACK_LINE(58)
	::openfl::geom::Rectangle tmp = this->currentFrame;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(58)
	bool tmp1 = (tmp == null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(58)
	if ((tmp1)){
		HX_STACK_LINE(59)
		::openfl::geom::Rectangle tmp2 = this->frames->__get((int)0).StaticCast< ::openfl::geom::Rectangle >();		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(59)
		this->currentFrame = tmp2;
		HX_STACK_LINE(60)
		::openfl::geom::Rectangle tmp3 = this->currentFrame;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(60)
		return tmp3;
	}
	HX_STACK_LINE(62)
	int tmp2 = this->speed;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(62)
	bool tmp3 = (tmp2 < (int)0);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(62)
	if ((tmp3)){
		HX_STACK_LINE(62)
		::openfl::geom::Rectangle tmp4 = this->currentFrame;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(62)
		return tmp4;
	}
	HX_STACK_LINE(64)
	int tmp4 = this->intervalCount;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(64)
	bool tmp5 = (tmp4 > (int)0);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(64)
	if ((tmp5)){
		HX_STACK_LINE(65)
		hx::SubEq(this->intervalCount,(int)1);
		HX_STACK_LINE(66)
		::openfl::geom::Rectangle tmp6 = this->currentFrame;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(66)
		return tmp6;
	}
	HX_STACK_LINE(69)
	(this->tickCount)++;
	HX_STACK_LINE(70)
	int tmp6 = this->tickCount;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(70)
	int tmp7 = this->speed;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(70)
	bool tmp8 = (tmp6 > tmp7);		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(70)
	if ((tmp8)){
		HX_STACK_LINE(71)
		this->tickCount = (int)0;
		HX_STACK_LINE(72)
		{
			HX_STACK_LINE(72)
			int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(72)
			int tmp9 = this->frames->length;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(72)
			int _g = tmp9;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(72)
			while((true)){
				HX_STACK_LINE(72)
				bool tmp10 = (_g1 < _g);		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(72)
				bool tmp11 = !(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(72)
				if ((tmp11)){
					HX_STACK_LINE(72)
					break;
				}
				HX_STACK_LINE(72)
				int tmp12 = (_g1)++;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(72)
				int i = tmp12;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(73)
				::openfl::geom::Rectangle tmp13 = this->currentFrame;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(73)
				::openfl::geom::Rectangle tmp14 = this->frames->__get(i).StaticCast< ::openfl::geom::Rectangle >();		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(73)
				bool tmp15 = (tmp13 == tmp14);		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(73)
				if ((tmp15)){
					HX_STACK_LINE(75)
					int tmp16 = this->frames->length;		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(75)
					int tmp17 = (tmp16 - (int)1);		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(75)
					int tmp18 = i;		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(75)
					bool tmp19 = (tmp17 == tmp18);		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(75)
					if ((tmp19)){
						HX_STACK_LINE(77)
						bool tmp20 = this->loop;		HX_STACK_VAR(tmp20,"tmp20");
						HX_STACK_LINE(77)
						if ((tmp20)){
							HX_STACK_LINE(78)
							::openfl::geom::Rectangle tmp21 = this->frames->__get((int)0).StaticCast< ::openfl::geom::Rectangle >();		HX_STACK_VAR(tmp21,"tmp21");
							HX_STACK_LINE(78)
							this->currentFrame = tmp21;
						}
						HX_STACK_LINE(81)
						int tmp21 = this->intervalPause;		HX_STACK_VAR(tmp21,"tmp21");
						HX_STACK_LINE(81)
						this->intervalCount = tmp21;
					}
					else{
						HX_STACK_LINE(85)
						int tmp20 = (i + (int)1);		HX_STACK_VAR(tmp20,"tmp20");
						HX_STACK_LINE(85)
						::openfl::geom::Rectangle tmp21 = this->frames->__get(tmp20).StaticCast< ::openfl::geom::Rectangle >();		HX_STACK_VAR(tmp21,"tmp21");
						HX_STACK_LINE(85)
						this->currentFrame = tmp21;
					}
					HX_STACK_LINE(86)
					::openfl::geom::Rectangle tmp20 = this->currentFrame;		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(86)
					return tmp20;
				}
			}
		}
		HX_STACK_LINE(90)
		::openfl::errors::Error tmp9 = ::openfl::errors::Error_obj::__new(HX_HCSTRING("Somehow, the animation's current frame isn't contained in its array of frames.","\x34","\xb2","\xe6","\x91"),null());		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(90)
		HX_STACK_DO_THROW(tmp9);
	}
	HX_STACK_LINE(93)
	::openfl::geom::Rectangle tmp9 = this->currentFrame;		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(93)
	return tmp9;
}


HX_DEFINE_DYNAMIC_FUNC0(Animation_obj,updateAnimation,return )

bool Animation_obj::isFinished( ){
	HX_STACK_FRAME("actors.Animation","isFinished",0xe9e1bd56,"actors.Animation.isFinished","actors/Animation.hx",96,0xc75c866b)
	HX_STACK_THIS(this)
	HX_STACK_LINE(97)
	bool tmp = this->loop;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(97)
	if ((tmp)){
		HX_STACK_LINE(98)
		return false;
	}
	else{
		HX_STACK_LINE(99)
		int tmp1 = this->getFrameIndex();		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(99)
		int tmp2 = this->frames->length;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(99)
		int tmp3 = (tmp2 - (int)1);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(99)
		bool tmp4 = (tmp1 == tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(99)
		if ((tmp4)){
			HX_STACK_LINE(100)
			return true;
		}
	}
	HX_STACK_LINE(101)
	return false;
}


HX_DEFINE_DYNAMIC_FUNC0(Animation_obj,isFinished,return )

int Animation_obj::getFrameIndex( ){
	HX_STACK_FRAME("actors.Animation","getFrameIndex",0xd609f841,"actors.Animation.getFrameIndex","actors/Animation.hx",103,0xc75c866b)
	HX_STACK_THIS(this)
	HX_STACK_LINE(104)
	{
		HX_STACK_LINE(104)
		int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(104)
		int tmp = this->frames->length;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(104)
		int _g = tmp;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(104)
		while((true)){
			HX_STACK_LINE(104)
			bool tmp1 = (_g1 < _g);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(104)
			bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(104)
			if ((tmp2)){
				HX_STACK_LINE(104)
				break;
			}
			HX_STACK_LINE(104)
			int tmp3 = (_g1)++;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(104)
			int i = tmp3;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(105)
			::openfl::geom::Rectangle tmp4 = this->currentFrame;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(105)
			::openfl::geom::Rectangle tmp5 = this->frames->__get(i).StaticCast< ::openfl::geom::Rectangle >();		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(105)
			bool tmp6 = (tmp4 == tmp5);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(105)
			if ((tmp6)){
				HX_STACK_LINE(106)
				int tmp7 = i;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(106)
				return tmp7;
			}
		}
	}
	HX_STACK_LINE(108)
	return (int)-1;
}


HX_DEFINE_DYNAMIC_FUNC0(Animation_obj,getFrameIndex,return )

::openfl::geom::Rectangle Animation_obj::getRectangle( ){
	HX_STACK_FRAME("actors.Animation","getRectangle",0xe610b313,"actors.Animation.getRectangle","actors/Animation.hx",110,0xc75c866b)
	HX_STACK_THIS(this)
	HX_STACK_LINE(110)
	::openfl::geom::Rectangle tmp = this->currentFrame;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(110)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(Animation_obj,getRectangle,return )

int Animation_obj::getWidth( ){
	HX_STACK_FRAME("actors.Animation","getWidth",0xbc9c52ea,"actors.Animation.getWidth","actors/Animation.hx",111,0xc75c866b)
	HX_STACK_THIS(this)
	HX_STACK_LINE(111)
	::openfl::geom::Rectangle tmp = this->currentFrame;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(111)
	int tmp1 = ((int)(tmp->width));		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(111)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(Animation_obj,getWidth,return )

int Animation_obj::getHeight( ){
	HX_STACK_FRAME("actors.Animation","getHeight",0x027bb283,"actors.Animation.getHeight","actors/Animation.hx",112,0xc75c866b)
	HX_STACK_THIS(this)
	HX_STACK_LINE(112)
	::openfl::geom::Rectangle tmp = this->currentFrame;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(112)
	int tmp1 = ((int)(tmp->height));		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(112)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(Animation_obj,getHeight,return )

::String Animation_obj::getName( ){
	HX_STACK_FRAME("actors.Animation","getName",0xcf3ffde7,"actors.Animation.getName","actors/Animation.hx",113,0xc75c866b)
	HX_STACK_THIS(this)
	HX_STACK_LINE(113)
	::String tmp = this->name;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(113)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(Animation_obj,getName,return )

::openfl::geom::Point Animation_obj::getAnimStart( ){
	HX_STACK_FRAME("actors.Animation","getAnimStart",0x08269f75,"actors.Animation.getAnimStart","actors/Animation.hx",114,0xc75c866b)
	HX_STACK_THIS(this)
	HX_STACK_LINE(114)
	::openfl::geom::Point tmp = this->animStart;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(114)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(Animation_obj,getAnimStart,return )

::actors::Animation Animation_obj::getClone( hx::Null< int >  __o_newSpeed){
int newSpeed = __o_newSpeed.Default(-1);
	HX_STACK_FRAME("actors.Animation","getClone",0x3a9cb041,"actors.Animation.getClone","actors/Animation.hx",116,0xc75c866b)
	HX_STACK_THIS(this)
	HX_STACK_ARG(newSpeed,"newSpeed")
{
		HX_STACK_LINE(117)
		bool tmp = (newSpeed == (int)-1);		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(117)
		if ((tmp)){
			HX_STACK_LINE(117)
			int tmp1 = this->speed;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(117)
			newSpeed = tmp1;
		}
		HX_STACK_LINE(118)
		::String tmp1 = this->name;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(118)
		int tmp2 = newSpeed;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(118)
		::openfl::geom::Point tmp3 = this->animStart;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(118)
		int tmp4 = this->animWidth;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(118)
		int tmp5 = this->animHeight;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(118)
		::actors::Animation tmp6 = ::actors::Animation_obj::__new(tmp1,tmp2,tmp3,tmp4,tmp5,this->animFrames,null(),null());		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(118)
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
	HX_MARK_MEMBER_NAME(loop,"loop");
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
	HX_VISIT_MEMBER_NAME(loop,"loop");
}

Dynamic Animation_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"name") ) { return name; }
		if (HX_FIELD_EQ(inName,"loop") ) { return loop; }
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
		if (HX_FIELD_EQ(inName,"isFinished") ) { return isFinished_dyn(); }
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
		if (HX_FIELD_EQ(inName,"loop") ) { loop=inValue.Cast< bool >(); return inValue; }
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
	outFields->push(HX_HCSTRING("loop","\x64","\xa6","\xb7","\x47"));
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
	{hx::fsBool,(int)offsetof(Animation_obj,loop),HX_HCSTRING("loop","\x64","\xa6","\xb7","\x47")},
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
	HX_HCSTRING("loop","\x64","\xa6","\xb7","\x47"),
	HX_HCSTRING("resetAnimation","\x35","\x53","\xa5","\xa5"),
	HX_HCSTRING("updateAnimation","\xbb","\xbf","\xbf","\x9a"),
	HX_HCSTRING("isFinished","\x7c","\xa5","\xbd","\x0f"),
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
