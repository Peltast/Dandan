#ifndef INCLUDED_core_Game
#define INCLUDED_core_Game

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_openfl_display_Sprite
#include <openfl/display/Sprite.h>
#endif
HX_DECLARE_CLASS1(core,Game)
HX_DECLARE_CLASS1(core,Stack)
HX_DECLARE_CLASS1(core,State)
HX_DECLARE_CLASS2(openfl,display,DisplayObject)
HX_DECLARE_CLASS2(openfl,display,DisplayObjectContainer)
HX_DECLARE_CLASS2(openfl,display,IBitmapDrawable)
HX_DECLARE_CLASS2(openfl,display,InteractiveObject)
HX_DECLARE_CLASS2(openfl,display,Sprite)
HX_DECLARE_CLASS2(openfl,events,Event)
HX_DECLARE_CLASS2(openfl,events,EventDispatcher)
HX_DECLARE_CLASS2(openfl,events,IEventDispatcher)
namespace core{


class HXCPP_CLASS_ATTRIBUTES  Game_obj : public ::openfl::display::Sprite_obj{
	public:
		typedef ::openfl::display::Sprite_obj super;
		typedef Game_obj OBJ_;
		Game_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="core.Game")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< Game_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Game_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		static void __register();
		::String __ToString() const { return HX_HCSTRING("Game","\x12","\x20","\x38","\x2f"); }

		virtual Void playGame( ::openfl::events::Event event);
		Dynamic playGame_dyn();

		virtual ::String replaceGeneralTerm( ::String term);
		Dynamic replaceGeneralTerm_dyn();

		static ::core::Stack stateStack;
		static ::core::Game singleton;
		static int tileSize;
		static ::core::Game getSingleton( );
		static Dynamic getSingleton_dyn();

		static Void popState( );
		static Dynamic popState_dyn();

		static Void pushState( ::core::State state);
		static Dynamic pushState_dyn();

		static Void clearAllStates( );
		static Dynamic clearAllStates_dyn();

		static ::core::State getState( );
		static Dynamic getState_dyn();

		static int getTileSize( );
		static Dynamic getTileSize_dyn();

};

} // end namespace core

#endif /* INCLUDED_core_Game */ 
