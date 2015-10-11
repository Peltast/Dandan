#ifndef INCLUDED_core_StackNode
#define INCLUDED_core_StackNode

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS1(core,StackNode)
namespace core{


class HXCPP_CLASS_ATTRIBUTES  StackNode_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef StackNode_obj OBJ_;
		StackNode_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="core.StackNode")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< StackNode_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~StackNode_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("StackNode","\x4a","\xc1","\xda","\x75"); }

		::core::StackNode nextNode;
		Dynamic content;
};

} // end namespace core

#endif /* INCLUDED_core_StackNode */ 
