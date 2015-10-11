#ifndef INCLUDED_core_GameScreen
#define INCLUDED_core_GameScreen

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_openfl_display_Sprite
#include <openfl/display/Sprite.h>
#endif
HX_DECLARE_CLASS1(actors,Actor)
HX_DECLARE_CLASS1(actors,Player)
HX_DECLARE_CLASS1(core,GameScreen)
HX_DECLARE_CLASS1(core,GameState)
HX_DECLARE_CLASS1(core,State)
HX_DECLARE_CLASS1(maps,LevelManager)
HX_DECLARE_CLASS2(maps,mapobjects,MapObject)
HX_DECLARE_CLASS2(openfl,display,DisplayObject)
HX_DECLARE_CLASS2(openfl,display,DisplayObjectContainer)
HX_DECLARE_CLASS2(openfl,display,IBitmapDrawable)
HX_DECLARE_CLASS2(openfl,display,InteractiveObject)
HX_DECLARE_CLASS2(openfl,display,Sprite)
HX_DECLARE_CLASS2(openfl,events,EventDispatcher)
HX_DECLARE_CLASS2(openfl,events,IEventDispatcher)
namespace core{


class HXCPP_CLASS_ATTRIBUTES  GameScreen_obj : public ::openfl::display::Sprite_obj{
	public:
		typedef ::openfl::display::Sprite_obj super;
		typedef GameScreen_obj OBJ_;
		GameScreen_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="core.GameScreen")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< GameScreen_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~GameScreen_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("GameScreen","\x1e","\x29","\x84","\x80"); }

		::core::GameState gameState;
		::actors::Player player;
		::maps::LevelManager mapManager;
		virtual Void initiateGameScreen( ::core::GameState gameState,::actors::Player player,::maps::LevelManager mapManager);
		Dynamic initiateGameScreen_dyn();

};

} // end namespace core

#endif /* INCLUDED_core_GameScreen */ 
