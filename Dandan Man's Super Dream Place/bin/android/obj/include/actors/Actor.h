#ifndef INCLUDED_actors_Actor
#define INCLUDED_actors_Actor

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_maps_mapobjects_MapObject
#include <maps/mapobjects/MapObject.h>
#endif
HX_DECLARE_CLASS1(actors,Actor)
HX_DECLARE_CLASS1(actors,Animation)
HX_DECLARE_CLASS1(actors,ObjectMover)
HX_DECLARE_CLASS2(actors,attacks,Attack)
HX_DECLARE_CLASS2(actors,attacks,Hitbox)
HX_DECLARE_CLASS2(actors,attacks,Projectile)
HX_DECLARE_CLASS1(haxe,IMap)
HX_DECLARE_CLASS2(haxe,ds,StringMap)
HX_DECLARE_CLASS1(maps,AreaMap)
HX_DECLARE_CLASS2(maps,mapobjects,MapObject)
HX_DECLARE_CLASS2(openfl,display,Bitmap)
HX_DECLARE_CLASS2(openfl,display,DisplayObject)
HX_DECLARE_CLASS2(openfl,display,DisplayObjectContainer)
HX_DECLARE_CLASS2(openfl,display,IBitmapDrawable)
HX_DECLARE_CLASS2(openfl,display,InteractiveObject)
HX_DECLARE_CLASS2(openfl,display,Sprite)
HX_DECLARE_CLASS2(openfl,events,EventDispatcher)
HX_DECLARE_CLASS2(openfl,events,IEventDispatcher)
HX_DECLARE_CLASS2(openfl,geom,Rectangle)
namespace actors{


class HXCPP_CLASS_ATTRIBUTES  Actor_obj : public ::maps::mapobjects::MapObject_obj{
	public:
		typedef ::maps::mapobjects::MapObject_obj super;
		typedef Actor_obj OBJ_;
		Actor_obj();
		Void __construct(::actors::Actor implementation,::openfl::display::Bitmap defaultBmp,bool passable,::haxe::ds::StringMap animations,::actors::ObjectMover mover,int actorWidth,hx::Null< int >  __o_actorHeight);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="actors.Actor")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< Actor_obj > __new(::actors::Actor implementation,::openfl::display::Bitmap defaultBmp,bool passable,::haxe::ds::StringMap animations,::actors::ObjectMover mover,int actorWidth,hx::Null< int >  __o_actorHeight);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Actor_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("Actor","\xd5","\x3a","\xd4","\xae"); }

		::haxe::ds::StringMap animations;
		::actors::ObjectMover defaultMover;
		::actors::ObjectMover currentMover;
		::actors::attacks::Attack attackBehavior;
		::actors::attacks::Hitbox hitBox;
		::maps::AreaMap currentMap;
		bool alignmentLeft;
		::actors::Animation currentAnimation;
		::openfl::display::Bitmap baseBmp;
		::openfl::display::Bitmap actorBmp;
		int actorWidth;
		int actorHeight;
		int originalActorWidth;
		int originalActorHeight;
		::openfl::geom::Rectangle originalBounds;
		int maxHealth;
		int health;
		int stunCount;
		bool invulnerable;
		int invulDuration;
		int invulCount;
		bool unstoppable;
		virtual Void updateActor( );
		Dynamic updateActor_dyn();

		virtual Void updateStun( );
		Dynamic updateStun_dyn();

		virtual Void stunLock( int duration);
		Dynamic stunLock_dyn();

		virtual Void updateAttack( );
		Dynamic updateAttack_dyn();

		virtual Void updateHitbox( );
		Dynamic updateHitbox_dyn();

		virtual Void removeHitbox( );
		Dynamic removeHitbox_dyn();

		virtual Void addHitbox( ::actors::attacks::Hitbox hitBox);
		Dynamic addHitbox_dyn();

		virtual bool isHitting( ::actors::Actor actor);
		Dynamic isHitting_dyn();

		virtual int getAttackDamage( );
		Dynamic getAttackDamage_dyn();

		virtual ::actors::attacks::Attack getAttackBehavior( );
		Dynamic getAttackBehavior_dyn();

		virtual Void updateActorAnimation( );
		Dynamic updateActorAnimation_dyn();

		virtual Void removeBmp( );
		Dynamic removeBmp_dyn();

		virtual Void addAnimationBmp( ::actors::Animation animation);
		Dynamic addAnimationBmp_dyn();

		virtual ::openfl::display::Bitmap getAnimationBmp( ::actors::Animation animation,::openfl::display::Bitmap bitmap);
		Dynamic getAnimationBmp_dyn();

		virtual ::actors::Animation getAnimation( ::String title);
		Dynamic getAnimation_dyn();

		virtual ::String getAnimationName( );
		Dynamic getAnimationName_dyn();

		virtual Void checkDamage( );
		Dynamic checkDamage_dyn();

		virtual Void checkInvulnerable( );
		Dynamic checkInvulnerable_dyn();

		virtual bool takeActorDamage( ::actors::Actor actor,::actors::attacks::Attack attack);
		Dynamic takeActorDamage_dyn();

		virtual bool takeProjectileDamage( ::actors::attacks::Projectile projectile);
		Dynamic takeProjectileDamage_dyn();

		virtual bool takeDamage( int damage,::maps::mapobjects::MapObject source);
		Dynamic takeDamage_dyn();

		virtual Void calculateDamage( ::maps::mapobjects::MapObject source);
		Dynamic calculateDamage_dyn();

		virtual Void kill( );
		Dynamic kill_dyn();

		virtual Void setGrounded( );
		Dynamic setGrounded_dyn();

		virtual Void initiateAttack( );
		Dynamic initiateAttack_dyn();

		virtual Void endAttack( );
		Dynamic endAttack_dyn();

		virtual Void revertAttackProperties( );
		Dynamic revertAttackProperties_dyn();

		virtual Void endAttackStun( );
		Dynamic endAttackStun_dyn();

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

		virtual Void moveXAxis( );
		Dynamic moveXAxis_dyn();

		virtual Void moveYAxis( );
		Dynamic moveYAxis_dyn();

		virtual bool checkFatalTiles( Array< ::Dynamic > collisionList,bool xAxis);
		Dynamic checkFatalTiles_dyn();

		virtual bool checkActorCollision( Array< ::Dynamic > collisionList,bool xAxis);
		Dynamic checkActorCollision_dyn();

		virtual int getCollisionLargestDistance( Array< ::Dynamic > collisionList,bool xAxis);
		Dynamic getCollisionLargestDistance_dyn();

		virtual Void setAnimation( ::String animation);
		Dynamic setAnimation_dyn();

		virtual bool isFacingLeft( );
		Dynamic isFacingLeft_dyn();

		virtual ::maps::AreaMap getCurrentMap( );
		Dynamic getCurrentMap_dyn();

		virtual Void setCurrentMap( ::maps::AreaMap map);
		Dynamic setCurrentMap_dyn();

};

} // end namespace actors

#endif /* INCLUDED_actors_Actor */ 
