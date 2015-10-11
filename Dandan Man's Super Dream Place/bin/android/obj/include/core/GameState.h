#ifndef INCLUDED_core_GameState
#define INCLUDED_core_GameState

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_core_State
#include <core/State.h>
#endif
HX_DECLARE_CLASS1(core,GameScreen)
HX_DECLARE_CLASS1(core,GameState)
HX_DECLARE_CLASS1(core,State)
HX_DECLARE_CLASS1(maps,LevelManager)
HX_DECLARE_CLASS2(openfl,display,DisplayObject)
HX_DECLARE_CLASS2(openfl,display,DisplayObjectContainer)
HX_DECLARE_CLASS2(openfl,display,IBitmapDrawable)
HX_DECLARE_CLASS2(openfl,display,InteractiveObject)
HX_DECLARE_CLASS2(openfl,display,Sprite)
HX_DECLARE_CLASS2(openfl,events,EventDispatcher)
HX_DECLARE_CLASS2(openfl,events,IEventDispatcher)
namespace core{


class HXCPP_CLASS_ATTRIBUTES  GameState_obj : public ::core::State_obj{
	public:
		typedef ::core::State_obj super;
		typedef GameState_obj OBJ_;
		GameState_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="core.GameState")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< GameState_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~GameState_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("GameState","\x9f","\x44","\xf9","\x5a"); }

		::core::GameScreen gameScreen;
		::maps::LevelManager levelManager;
		virtual Void drawState( );

};

} // end namespace core

#endif /* INCLUDED_core_GameState */ 
