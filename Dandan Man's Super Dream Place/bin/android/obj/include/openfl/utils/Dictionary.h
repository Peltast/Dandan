#ifndef INCLUDED_openfl_utils_Dictionary
#define INCLUDED_openfl_utils_Dictionary

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(openfl,utils,Dictionary)
namespace openfl{
namespace utils{


class HXCPP_CLASS_ATTRIBUTES  Dictionary_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef Dictionary_obj OBJ_;
		Dictionary_obj();
		Void __construct(hx::Null< bool >  __o_weakKeys);

	public:
		inline void *operator new( size_t inSize, bool inContainer=false,const char *inName="openfl.utils.Dictionary")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< Dictionary_obj > __new(hx::Null< bool >  __o_weakKeys);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Dictionary_obj();

		HX_DO_RTTI_ALL;
		static void __register();
		::String __ToString() const { return HX_HCSTRING("Dictionary","\xb6","\x97","\xfa","\xbc"); }

		typedef Dynamic __array_access;
};

} // end namespace openfl
} // end namespace utils

#endif /* INCLUDED_openfl_utils_Dictionary */ 