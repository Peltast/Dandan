#ifndef INCLUDED_core_Stack
#define INCLUDED_core_Stack

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS1(core,Stack)
HX_DECLARE_CLASS1(core,StackNode)
namespace core{


class HXCPP_CLASS_ATTRIBUTES  Stack_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef Stack_obj OBJ_;
		Stack_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="core.Stack")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< Stack_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Stack_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("Stack","\x28","\xd7","\x38","\x17"); }

		::core::StackNode first;
		int length;
		virtual bool isEmpty( );
		Dynamic isEmpty_dyn();

		virtual Void push( Dynamic newObject);
		Dynamic push_dyn();

		virtual Dynamic pop( );
		Dynamic pop_dyn();

		virtual Dynamic peek( );
		Dynamic peek_dyn();

		virtual int getLength( );
		Dynamic getLength_dyn();

};

} // end namespace core

#endif /* INCLUDED_core_Stack */ 
