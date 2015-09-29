#ifndef INCLUDED_actors_Player
#define INCLUDED_actors_Player

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_maps_MapObject
#include <maps/MapObject.h>
#endif
HX_DECLARE_CLASS1(actors,Animation)
HX_DECLARE_CLASS1(actors,Player)
HX_DECLARE_CLASS1(haxe,IMap)
HX_DECLARE_CLASS2(haxe,ds,StringMap)
HX_DECLARE_CLASS1(maps,AreaMap)
HX_DECLARE_CLASS1(maps,MapObject)
HX_DECLARE_CLASS2(openfl,display,Bitmap)
HX_DECLARE_CLASS2(openfl,display,DisplayObject)
HX_DECLARE_CLASS2(openfl,display,DisplayObjectContainer)
HX_DECLARE_CLASS2(openfl,display,IBitmapDrawable)
HX_DECLARE_CLASS2(openfl,display,InteractiveObject)
HX_DECLARE_CLASS2(openfl,display,Sprite)
HX_DECLARE_CLASS2(openfl,events,Event)
HX_DECLARE_CLASS2(openfl,events,EventDispatcher)
HX_DECLARE_CLASS2(openfl,events,IEventDispatcher)
HX_DECLARE_CLASS2(openfl,events,KeyboardEvent)
namespace actors{


class HXCPP_CLASS_ATTRIBUTES  Player_obj : public ::maps::MapObject_obj{
	public:
		typedef ::maps::MapObject_obj super;
		typedef Player_obj OBJ_;
		Player_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="actors.Player")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< Player_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Player_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("Player","\x81","\x5f","\x4d","\x6c"); }

		::haxe::ds::StringMap animations;
		::actors::Animation currentAnimation;
		::openfl::display::Bitmap playerBmp;
		::maps::AreaMap currentMap;
		bool grounded;
		int jumpCharges;
		Float xAcc;
		Float yAcc;
		int targetXVel;
		int targetYVel;
		Float xVel;
		Float yVel;
		int maxSpeedX;
		int maxSpeedY;
		int playerSize;
		virtual Void removeCharBmp( );
		Dynamic removeCharBmp_dyn();

		virtual Void updatePlayer( );
		Dynamic updatePlayer_dyn();

		virtual Void updateVelocity( );
		Dynamic updateVelocity_dyn();

		virtual Void moveXAxis( );
		Dynamic moveXAxis_dyn();

		virtual Void moveYAxis( );
		Dynamic moveYAxis_dyn();

		virtual bool checkFatalTiles( Array< ::Dynamic > collisionList,bool xAxis);
		Dynamic checkFatalTiles_dyn();

		virtual int getCollisionLargestDistance( Array< ::Dynamic > collisionList,bool xAxis);
		Dynamic getCollisionLargestDistance_dyn();

		virtual Void setGrounded( );
		Dynamic setGrounded_dyn();

		virtual Void killPlayer( );
		Dynamic killPlayer_dyn();

		virtual ::maps::AreaMap getCurrentMap( );
		Dynamic getCurrentMap_dyn();

		virtual Void setCurrentMap( ::maps::AreaMap map);
		Dynamic setCurrentMap_dyn();

		virtual Void addAnimationBmp( ::actors::Animation animation);
		Dynamic addAnimationBmp_dyn();

		virtual ::openfl::display::Bitmap getAnimationBmp( ::actors::Animation animation,::openfl::display::Bitmap bitmap);
		Dynamic getAnimationBmp_dyn();

		virtual Void checkKeysDown( ::openfl::events::KeyboardEvent key);
		Dynamic checkKeysDown_dyn();

		virtual Void checkKeysUp( ::openfl::events::KeyboardEvent key);
		Dynamic checkKeysUp_dyn();

		virtual Void goLeft( );
		Dynamic goLeft_dyn();

		virtual Void goRight( );
		Dynamic goRight_dyn();

		virtual Void stopLeft( );
		Dynamic stopLeft_dyn();

		virtual Void stopRight( );
		Dynamic stopRight_dyn();

		virtual Void jump( );
		Dynamic jump_dyn();

		virtual ::actors::Animation getAnimation( ::String title);
		Dynamic getAnimation_dyn();

};

} // end namespace actors

#endif /* INCLUDED_actors_Player */ 
