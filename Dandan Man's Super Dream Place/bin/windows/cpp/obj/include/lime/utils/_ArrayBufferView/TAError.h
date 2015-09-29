#ifndef INCLUDED_lime_utils__ArrayBufferView_TAError
#define INCLUDED_lime_utils__ArrayBufferView_TAError

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS3(lime,utils,_ArrayBufferView,TAError)
namespace lime{
namespace utils{
namespace _ArrayBufferView{


class TAError_obj : public hx::EnumBase_obj
{
	typedef hx::EnumBase_obj super;
		typedef TAError_obj OBJ_;

	public:
		TAError_obj() {};
		HX_DO_ENUM_RTTI;
		static void __boot();
		static void __register();
		::String GetEnumName( ) const { return HX_HCSTRING("lime.utils._ArrayBufferView.TAError","\xa2","\x1f","\x94","\x4d"); }
		::String __ToString() const { return HX_HCSTRING("TAError.","\xb3","\x90","\x7d","\xd9") + tag; }

		static ::lime::utils::_ArrayBufferView::TAError RangeError;
		static inline ::lime::utils::_ArrayBufferView::TAError RangeError_dyn() { return RangeError; }
};

} // end namespace lime
} // end namespace utils
} // end namespace _ArrayBufferView

#endif /* INCLUDED_lime_utils__ArrayBufferView_TAError */ 
