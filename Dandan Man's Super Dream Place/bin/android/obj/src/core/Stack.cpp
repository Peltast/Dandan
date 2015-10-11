#include <hxcpp.h>

#ifndef INCLUDED_core_Stack
#include <core/Stack.h>
#endif
#ifndef INCLUDED_core_StackNode
#include <core/StackNode.h>
#endif
#ifndef INCLUDED_haxe_Log
#include <haxe/Log.h>
#endif
namespace core{

Void Stack_obj::__construct()
{
HX_STACK_FRAME("core.Stack","new",0x9491804b,"core.Stack.new","core/Stack.hx",14,0xe96bba86)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(14)
	this->length = (int)0;
}
;
	return null();
}

//Stack_obj::~Stack_obj() { }

Dynamic Stack_obj::__CreateEmpty() { return  new Stack_obj; }
hx::ObjectPtr< Stack_obj > Stack_obj::__new()
{  hx::ObjectPtr< Stack_obj > _result_ = new Stack_obj();
	_result_->__construct();
	return _result_;}

Dynamic Stack_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Stack_obj > _result_ = new Stack_obj();
	_result_->__construct();
	return _result_;}

bool Stack_obj::isEmpty( ){
	HX_STACK_FRAME("core.Stack","isEmpty",0x71cb5fae,"core.Stack.isEmpty","core/Stack.hx",17,0xe96bba86)
	HX_STACK_THIS(this)
	HX_STACK_LINE(18)
	::core::StackNode tmp = this->first;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(18)
	bool tmp1 = (tmp == null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(18)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(Stack_obj,isEmpty,return )

Void Stack_obj::push( Dynamic newObject){
{
		HX_STACK_FRAME("core.Stack","push",0x6c1d4f8f,"core.Stack.push","core/Stack.hx",21,0xe96bba86)
		HX_STACK_THIS(this)
		HX_STACK_ARG(newObject,"newObject")
		HX_STACK_LINE(22)
		::core::StackNode tmp = this->first;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(22)
		::core::StackNode second = tmp;		HX_STACK_VAR(second,"second");
		HX_STACK_LINE(23)
		::core::StackNode tmp1 = ::core::StackNode_obj::__new();		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(23)
		this->first = tmp1;
		HX_STACK_LINE(24)
		::core::StackNode tmp2 = this->first;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(24)
		tmp2->nextNode = second;
		HX_STACK_LINE(25)
		::core::StackNode tmp3 = this->first;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(25)
		tmp3->content = newObject;
		HX_STACK_LINE(26)
		(this->length)++;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Stack_obj,push,(void))

Dynamic Stack_obj::pop( ){
	HX_STACK_FRAME("core.Stack","pop",0x94930d7c,"core.Stack.pop","core/Stack.hx",29,0xe96bba86)
	HX_STACK_THIS(this)
	HX_STACK_LINE(30)
	bool tmp = this->isEmpty();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(30)
	bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(30)
	if ((tmp1)){
		HX_STACK_LINE(31)
		(this->length)--;
		HX_STACK_LINE(32)
		::core::StackNode tmp2 = this->first;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(32)
		::core::StackNode second = tmp2->nextNode;		HX_STACK_VAR(second,"second");
		HX_STACK_LINE(33)
		::core::StackNode tmp3 = this->first;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(33)
		Dynamic poppedObject = tmp3->content;		HX_STACK_VAR(poppedObject,"poppedObject");
		HX_STACK_LINE(34)
		this->first = second;
		HX_STACK_LINE(35)
		Dynamic tmp4 = poppedObject;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(35)
		return tmp4;
	}
	else{
		HX_STACK_LINE(38)
		Dynamic tmp2 = hx::SourceInfo(HX_HCSTRING("Stack.hx","\x96","\x54","\x3b","\x73"),38,HX_HCSTRING("core.Stack","\xd9","\xfe","\x8a","\x2f"),HX_HCSTRING("pop","\x91","\x5d","\x55","\x00"));		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(38)
		::haxe::Log_obj::trace(HX_HCSTRING("Error: Stack empty when pop was called.","\x5e","\xc3","\xb5","\x9b"),tmp2);
		HX_STACK_LINE(39)
		return null();
	}
	HX_STACK_LINE(30)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Stack_obj,pop,return )

Dynamic Stack_obj::peek( ){
	HX_STACK_FRAME("core.Stack","peek",0x6c111f50,"core.Stack.peek","core/Stack.hx",43,0xe96bba86)
	HX_STACK_THIS(this)
	HX_STACK_LINE(44)
	bool tmp = this->isEmpty();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(44)
	bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(44)
	if ((tmp1)){
		HX_STACK_LINE(45)
		::core::StackNode tmp2 = this->first;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(45)
		Dynamic tmp3 = tmp2->content;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(45)
		return tmp3;
	}
	else{
		HX_STACK_LINE(47)
		return null();
	}
	HX_STACK_LINE(44)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Stack_obj,peek,return )

int Stack_obj::getLength( ){
	HX_STACK_FRAME("core.Stack","getLength",0x53bd1047,"core.Stack.getLength","core/Stack.hx",52,0xe96bba86)
	HX_STACK_THIS(this)
	HX_STACK_LINE(53)
	int tmp = this->length;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(53)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(Stack_obj,getLength,return )


Stack_obj::Stack_obj()
{
}

void Stack_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Stack);
	HX_MARK_MEMBER_NAME(first,"first");
	HX_MARK_MEMBER_NAME(length,"length");
	HX_MARK_END_CLASS();
}

void Stack_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(first,"first");
	HX_VISIT_MEMBER_NAME(length,"length");
}

Dynamic Stack_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"pop") ) { return pop_dyn(); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"push") ) { return push_dyn(); }
		if (HX_FIELD_EQ(inName,"peek") ) { return peek_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"first") ) { return first; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"length") ) { return length; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"isEmpty") ) { return isEmpty_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"getLength") ) { return getLength_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Stack_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"first") ) { first=inValue.Cast< ::core::StackNode >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"length") ) { length=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool Stack_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	return false;
}

void Stack_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("first","\x30","\x78","\x9d","\x00"));
	outFields->push(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::core::StackNode*/ ,(int)offsetof(Stack_obj,first),HX_HCSTRING("first","\x30","\x78","\x9d","\x00")},
	{hx::fsInt,(int)offsetof(Stack_obj,length),HX_HCSTRING("length","\xe6","\x94","\x07","\x9f")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("first","\x30","\x78","\x9d","\x00"),
	HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"),
	HX_HCSTRING("isEmpty","\x43","\xde","\x5f","\x0c"),
	HX_HCSTRING("push","\xda","\x11","\x61","\x4a"),
	HX_HCSTRING("pop","\x91","\x5d","\x55","\x00"),
	HX_HCSTRING("peek","\x9b","\xe1","\x54","\x4a"),
	HX_HCSTRING("getLength","\x1c","\x1e","\x5e","\x1b"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Stack_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Stack_obj::__mClass,"__mClass");
};

#endif

hx::Class Stack_obj::__mClass;

void Stack_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("core.Stack","\xd9","\xfe","\x8a","\x2f");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &Stack_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Stack_obj >;
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

} // end namespace core
