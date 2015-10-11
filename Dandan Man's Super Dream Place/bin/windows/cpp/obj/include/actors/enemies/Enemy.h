#ifndef INCLUDED_actors_enemies_Enemy
#define INCLUDED_actors_enemies_Enemy

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_actors_Actor
#include <actors/Actor.h>
#endif
HX_DECLARE_CLASS1(actors,Actor)
HX_DECLARE_CLASS1(actors,ObjectMover)
HX_DECLARE_CLASS2(actors,actorsAI,EnemyAI)
HX_DECLARE_CLASS2(actors,attacks,Attack)
HX_DECLARE_CLASS2(actors,attacks,Projectile)
HX_DECLARE_CLASS2(actors,enemies,Enemy)
HX_DECLARE_CLASS2(maps,mapobjects,MapObject)
HX_DECLARE_CLASS2(maps,mapobjects,SpawnPoint)
HX_DECLARE_CLASS2(openfl,display,Bitmap)
HX_DECLARE_CLASS2(openfl,display,DisplayObject)
HX_DECLARE_CLASS2(openfl,display,DisplayObjectContainer)
HX_DECLARE_CLASS2(openfl,display,IBitmapDrawable)
HX_DECLARE_CLASS2(openfl,display,InteractiveObject)
HX_DECLARE_CLASS2(openfl,display,Sprite)
HX_DECLARE_CLASS2(openfl,events,EventDispatcher)
HX_DECLARE_CLASS2(openfl,events,IEventDispatcher)
namespace actors{
namespace enemies{


class HXCPP_CLASS_ATTRIBUTES  Enemy_obj : public ::actors::Actor_obj{
	public:
		typedef ::actors::Actor_obj super;
		typedef Enemy_obj OBJ_;
		Enemy_obj();
		Void __construct(::actors::enemies::Enemy implementation,::openfl::display::Bitmap defaultBmp,::actors::ObjectMover mover,int enemyWidth,int enemyHeight,::maps::mapobjects::SpawnPoint homeSpawn,::actors::actorsAI::EnemyAI enemyAI);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="actors.enemies.Enemy")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< Enemy_obj > __new(::actors::enemies::Enemy implementation,::openfl::display::Bitmap defaultBmp,::actors::ObjectMover mover,int enemyWidth,int enemyHeight,::maps::mapobjects::SpawnPoint homeSpawn,::actors::actorsAI::EnemyAI enemyAI);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Enemy_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("Enemy","\x28","\x82","\xa8","\x03"); }

		::maps::mapobjects::SpawnPoint homeSpawn;
		::actors::actorsAI::EnemyAI enemyAI;
		int touchDamage;
		virtual Void updateActor( );

		virtual Void handleAnimation( );
		Dynamic handleAnimation_dyn();

		virtual bool takeActorDamage( ::actors::Actor actor,::actors::attacks::Attack attack);

		virtual bool takeProjectileDamage( ::actors::attacks::Projectile projectile);

		virtual Void beAbsorbed( ::actors::Actor actor,::actors::attacks::Attack attack);
		Dynamic beAbsorbed_dyn();

		virtual Void calculateDamage( ::maps::mapobjects::MapObject source);

		virtual Void kill( );

		virtual Void handleDeath( );

		virtual Void damageReaction( ::maps::mapobjects::MapObject source);
		Dynamic damageReaction_dyn();

		virtual int getAttackDamage( );

		virtual Void moveXAxis( );

		virtual Void moveYAxis( );

		virtual Void goLeft( );

		virtual Void goRight( );

		virtual Void stopLeft( );

		virtual Void stopRight( );

		virtual ::actors::enemies::Enemy createClone( ::maps::mapobjects::SpawnPoint spawnPoint);
		Dynamic createClone_dyn();

};

} // end namespace actors
} // end namespace enemies

#endif /* INCLUDED_actors_enemies_Enemy */ 
