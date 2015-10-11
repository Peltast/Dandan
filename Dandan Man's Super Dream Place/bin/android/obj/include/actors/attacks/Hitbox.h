#ifndef INCLUDED_actors_attacks_Hitbox
#define INCLUDED_actors_attacks_Hitbox

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_openfl_display_Sprite
#include <openfl/display/Sprite.h>
#endif
HX_DECLARE_CLASS1(actors,Actor)
HX_DECLARE_CLASS2(actors,attacks,Hitbox)
HX_DECLARE_CLASS2(maps,mapobjects,MapObject)
HX_DECLARE_CLASS2(openfl,display,DisplayObject)
HX_DECLARE_CLASS2(openfl,display,DisplayObjectContainer)
HX_DECLARE_CLASS2(openfl,display,IBitmapDrawable)
HX_DECLARE_CLASS2(openfl,display,InteractiveObject)
HX_DECLARE_CLASS2(openfl,display,Sprite)
HX_DECLARE_CLASS2(openfl,events,EventDispatcher)
HX_DECLARE_CLASS2(openfl,events,IEventDispatcher)
HX_DECLARE_CLASS2(openfl,geom,Rectangle)
namespace actors{
namespace attacks{


class HXCPP_CLASS_ATTRIBUTES  Hitbox_obj : public ::openfl::display::Sprite_obj{
	public:
		typedef ::openfl::display::Sprite_obj super;
		typedef Hitbox_obj OBJ_;
		Hitbox_obj();
		Void __construct(Array< ::Dynamic > hitAreas,int duration);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="actors.attacks.Hitbox")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< Hitbox_obj > __new(Array< ::Dynamic > hitAreas,int duration);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Hitbox_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("Hitbox","\xb8","\x61","\xbc","\x8b"); }

		Array< ::Dynamic > hitAreas;
		int duration;
		int counter;
		virtual bool updateHitbox( );
		Dynamic updateHitbox_dyn();

		virtual Void resetHitbox( );
		Dynamic resetHitbox_dyn();

		virtual bool isHitting( ::actors::Actor host,::actors::Actor actor);
		Dynamic isHitting_dyn();

		virtual Void drawBoxes( );
		Dynamic drawBoxes_dyn();

};

} // end namespace actors
} // end namespace attacks

#endif /* INCLUDED_actors_attacks_Hitbox */ 
