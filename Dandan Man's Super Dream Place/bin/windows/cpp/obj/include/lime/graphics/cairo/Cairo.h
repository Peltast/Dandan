#ifndef INCLUDED_lime_graphics_cairo_Cairo
#define INCLUDED_lime_graphics_cairo_Cairo

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS3(lime,graphics,cairo,Cairo)
HX_DECLARE_CLASS3(lime,graphics,cairo,CairoFont)
HX_DECLARE_CLASS3(lime,graphics,cairo,CairoFontOptions)
HX_DECLARE_CLASS2(lime,math,Matrix3)
HX_DECLARE_CLASS2(lime,math,Vector2)
namespace lime{
namespace graphics{
namespace cairo{


class HXCPP_CLASS_ATTRIBUTES  Cairo_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef Cairo_obj OBJ_;
		Cairo_obj();
		Void __construct(Dynamic surface);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="lime.graphics.cairo.Cairo")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< Cairo_obj > __new(Dynamic surface);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Cairo_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("Cairo","\x68","\xa0","\x46","\xd4"); }

		static void __boot();
		Dynamic target;
		Dynamic userData;
		Dynamic handle;
		virtual Void recreate( Dynamic surface);
		Dynamic recreate_dyn();

		virtual Void arc( Float xc,Float yc,Float radius,Float angle1,Float angle2);
		Dynamic arc_dyn();

		virtual Void arcNegative( Float xc,Float yc,Float radius,Float angle1,Float angle2);
		Dynamic arcNegative_dyn();

		virtual Void clip( );
		Dynamic clip_dyn();

		virtual Void clipExtents( Float x1,Float y1,Float x2,Float y2);
		Dynamic clipExtents_dyn();

		virtual Void clipPreserve( );
		Dynamic clipPreserve_dyn();

		virtual Void closePath( );
		Dynamic closePath_dyn();

		virtual Void copyPage( );
		Dynamic copyPage_dyn();

		virtual Void curveTo( Float x1,Float y1,Float x2,Float y2,Float x3,Float y3);
		Dynamic curveTo_dyn();

		virtual Void destroy( );
		Dynamic destroy_dyn();

		virtual Void fill( );
		Dynamic fill_dyn();

		virtual Void fillExtents( Float x1,Float y1,Float x2,Float y2);
		Dynamic fillExtents_dyn();

		virtual Void fillPreserve( );
		Dynamic fillPreserve_dyn();

		virtual Void identityMatrix( );
		Dynamic identityMatrix_dyn();

		virtual bool inClip( Float x,Float y);
		Dynamic inClip_dyn();

		virtual bool inFill( Float x,Float y);
		Dynamic inFill_dyn();

		virtual bool inStroke( Float x,Float y);
		Dynamic inStroke_dyn();

		virtual Void lineTo( Float x,Float y);
		Dynamic lineTo_dyn();

		virtual Void moveTo( Float x,Float y);
		Dynamic moveTo_dyn();

		virtual Void mask( Dynamic pattern);
		Dynamic mask_dyn();

		virtual Void maskSurface( Dynamic surface,Float x,Float y);
		Dynamic maskSurface_dyn();

		virtual Void newPath( );
		Dynamic newPath_dyn();

		virtual Void paint( );
		Dynamic paint_dyn();

		virtual Void paintWithAlpha( Float alpha);
		Dynamic paintWithAlpha_dyn();

		virtual Dynamic popGroup( );
		Dynamic popGroup_dyn();

		virtual Void popGroupToSource( );
		Dynamic popGroupToSource_dyn();

		virtual Void pushGroup( );
		Dynamic pushGroup_dyn();

		virtual Void pushGroupWithContent( int content);
		Dynamic pushGroupWithContent_dyn();

		virtual Void rectangle( Float x,Float y,Float width,Float height);
		Dynamic rectangle_dyn();

		virtual Void reference( );
		Dynamic reference_dyn();

		virtual Void relCurveTo( Float dx1,Float dy1,Float dx2,Float dy2,Float dx3,Float dy3);
		Dynamic relCurveTo_dyn();

		virtual Void relLineTo( Float dx,Float dy);
		Dynamic relLineTo_dyn();

		virtual Void relMoveTo( Float dx,Float dy);
		Dynamic relMoveTo_dyn();

		virtual Void resetClip( );
		Dynamic resetClip_dyn();

		virtual Void restore( );
		Dynamic restore_dyn();

		virtual Void save( );
		Dynamic save_dyn();

		virtual Void setFontFace( ::lime::graphics::cairo::CairoFont face);
		Dynamic setFontFace_dyn();

		virtual Void setFontSize( Float size);
		Dynamic setFontSize_dyn();

		virtual ::lime::graphics::cairo::CairoFontOptions getFontOptions( );
		Dynamic getFontOptions_dyn();

		virtual ::lime::graphics::cairo::CairoFontOptions setFontOptions( ::lime::graphics::cairo::CairoFontOptions value);
		Dynamic setFontOptions_dyn();

		virtual Void setSourceRGB( Float r,Float g,Float b);
		Dynamic setSourceRGB_dyn();

		virtual Void setSourceRGBA( Float r,Float g,Float b,Float a);
		Dynamic setSourceRGBA_dyn();

		virtual Void setSourceSurface( Dynamic surface,Float x,Float y);
		Dynamic setSourceSurface_dyn();

		virtual Void showPage( );
		Dynamic showPage_dyn();

		virtual Void showText( ::String utf8);
		Dynamic showText_dyn();

		virtual int status( );
		Dynamic status_dyn();

		virtual Void stroke( );
		Dynamic stroke_dyn();

		virtual Void strokeExtents( Float x1,Float y1,Float x2,Float y2);
		Dynamic strokeExtents_dyn();

		virtual Void strokePreserve( );
		Dynamic strokePreserve_dyn();

		virtual Void transform( ::lime::math::Matrix3 matrix);
		Dynamic transform_dyn();

		virtual Void rotate( Float amount);
		Dynamic rotate_dyn();

		virtual Void scale( Float x,Float y);
		Dynamic scale_dyn();

		virtual Void translate( Float x,Float y);
		Dynamic translate_dyn();

		virtual int get_antialias( );
		Dynamic get_antialias_dyn();

		virtual int set_antialias( int value);
		Dynamic set_antialias_dyn();

		virtual ::lime::math::Vector2 get_currentPoint( );
		Dynamic get_currentPoint_dyn();

		virtual Array< Float > get_dash( );
		Dynamic get_dash_dyn();

		virtual Array< Float > set_dash( Array< Float > value);
		Dynamic set_dash_dyn();

		virtual int get_dashCount( );
		Dynamic get_dashCount_dyn();

		virtual int get_fillRule( );
		Dynamic get_fillRule_dyn();

		virtual int set_fillRule( int value);
		Dynamic set_fillRule_dyn();

		virtual Dynamic get_groupTarget( );
		Dynamic get_groupTarget_dyn();

		virtual bool get_hasCurrentPoint( );
		Dynamic get_hasCurrentPoint_dyn();

		virtual int get_lineCap( );
		Dynamic get_lineCap_dyn();

		virtual int set_lineCap( int value);
		Dynamic set_lineCap_dyn();

		virtual int get_lineJoin( );
		Dynamic get_lineJoin_dyn();

		virtual int set_lineJoin( int value);
		Dynamic set_lineJoin_dyn();

		virtual Float get_lineWidth( );
		Dynamic get_lineWidth_dyn();

		virtual Float set_lineWidth( Float value);
		Dynamic set_lineWidth_dyn();

		virtual ::lime::math::Matrix3 get_matrix( );
		Dynamic get_matrix_dyn();

		virtual ::lime::math::Matrix3 set_matrix( ::lime::math::Matrix3 value);
		Dynamic set_matrix_dyn();

		virtual Float get_miterLimit( );
		Dynamic get_miterLimit_dyn();

		virtual Float set_miterLimit( Float value);
		Dynamic set_miterLimit_dyn();

		virtual int get_operator( );
		Dynamic get_operator_dyn();

		virtual int set_operator( int value);
		Dynamic set_operator_dyn();

		virtual int get_referenceCount( );
		Dynamic get_referenceCount_dyn();

		virtual Dynamic get_source( );
		Dynamic get_source_dyn();

		virtual Dynamic set_source( Dynamic value);
		Dynamic set_source_dyn();

		virtual Dynamic get_target( );
		Dynamic get_target_dyn();

		virtual Float get_tolerance( );
		Dynamic get_tolerance_dyn();

		virtual Float set_tolerance( Float value);
		Dynamic set_tolerance_dyn();

		static int version;
		static ::String versionString;
		static int get_version( );
		static Dynamic get_version_dyn();

		static ::String get_versionString( );
		static Dynamic get_versionString_dyn();

		static Dynamic lime_cairo_arc;
		static Dynamic &lime_cairo_arc_dyn() { return lime_cairo_arc;}
		static Dynamic lime_cairo_arc_negative;
		static Dynamic &lime_cairo_arc_negative_dyn() { return lime_cairo_arc_negative;}
		static Dynamic lime_cairo_clip;
		static Dynamic &lime_cairo_clip_dyn() { return lime_cairo_clip;}
		static Dynamic lime_cairo_clip_preserve;
		static Dynamic &lime_cairo_clip_preserve_dyn() { return lime_cairo_clip_preserve;}
		static Dynamic lime_cairo_clip_extents;
		static Dynamic &lime_cairo_clip_extents_dyn() { return lime_cairo_clip_extents;}
		static Dynamic lime_cairo_close_path;
		static Dynamic &lime_cairo_close_path_dyn() { return lime_cairo_close_path;}
		static Dynamic lime_cairo_copy_page;
		static Dynamic &lime_cairo_copy_page_dyn() { return lime_cairo_copy_page;}
		static Dynamic lime_cairo_create;
		static Dynamic &lime_cairo_create_dyn() { return lime_cairo_create;}
		static Dynamic lime_cairo_curve_to;
		static Dynamic &lime_cairo_curve_to_dyn() { return lime_cairo_curve_to;}
		static Dynamic lime_cairo_destroy;
		static Dynamic &lime_cairo_destroy_dyn() { return lime_cairo_destroy;}
		static Dynamic lime_cairo_fill;
		static Dynamic &lime_cairo_fill_dyn() { return lime_cairo_fill;}
		static Dynamic lime_cairo_fill_extents;
		static Dynamic &lime_cairo_fill_extents_dyn() { return lime_cairo_fill_extents;}
		static Dynamic lime_cairo_fill_preserve;
		static Dynamic &lime_cairo_fill_preserve_dyn() { return lime_cairo_fill_preserve;}
		static Dynamic lime_cairo_get_antialias;
		static Dynamic &lime_cairo_get_antialias_dyn() { return lime_cairo_get_antialias;}
		static Dynamic lime_cairo_get_current_point;
		static Dynamic &lime_cairo_get_current_point_dyn() { return lime_cairo_get_current_point;}
		static Dynamic lime_cairo_get_dash;
		static Dynamic &lime_cairo_get_dash_dyn() { return lime_cairo_get_dash;}
		static Dynamic lime_cairo_get_dash_count;
		static Dynamic &lime_cairo_get_dash_count_dyn() { return lime_cairo_get_dash_count;}
		static Dynamic lime_cairo_get_fill_rule;
		static Dynamic &lime_cairo_get_fill_rule_dyn() { return lime_cairo_get_fill_rule;}
		static Dynamic lime_cairo_get_group_target;
		static Dynamic &lime_cairo_get_group_target_dyn() { return lime_cairo_get_group_target;}
		static Dynamic lime_cairo_get_line_cap;
		static Dynamic &lime_cairo_get_line_cap_dyn() { return lime_cairo_get_line_cap;}
		static Dynamic lime_cairo_get_line_join;
		static Dynamic &lime_cairo_get_line_join_dyn() { return lime_cairo_get_line_join;}
		static Dynamic lime_cairo_get_line_width;
		static Dynamic &lime_cairo_get_line_width_dyn() { return lime_cairo_get_line_width;}
		static Dynamic lime_cairo_get_matrix;
		static Dynamic &lime_cairo_get_matrix_dyn() { return lime_cairo_get_matrix;}
		static Dynamic lime_cairo_get_miter_limit;
		static Dynamic &lime_cairo_get_miter_limit_dyn() { return lime_cairo_get_miter_limit;}
		static Dynamic lime_cairo_get_operator;
		static Dynamic &lime_cairo_get_operator_dyn() { return lime_cairo_get_operator;}
		static Dynamic lime_cairo_get_reference_count;
		static Dynamic &lime_cairo_get_reference_count_dyn() { return lime_cairo_get_reference_count;}
		static Dynamic lime_cairo_get_source;
		static Dynamic &lime_cairo_get_source_dyn() { return lime_cairo_get_source;}
		static Dynamic lime_cairo_get_target;
		static Dynamic &lime_cairo_get_target_dyn() { return lime_cairo_get_target;}
		static Dynamic lime_cairo_get_tolerance;
		static Dynamic &lime_cairo_get_tolerance_dyn() { return lime_cairo_get_tolerance;}
		static Dynamic lime_cairo_has_current_point;
		static Dynamic &lime_cairo_has_current_point_dyn() { return lime_cairo_has_current_point;}
		static Dynamic lime_cairo_identity_matrix;
		static Dynamic &lime_cairo_identity_matrix_dyn() { return lime_cairo_identity_matrix;}
		static Dynamic lime_cairo_in_clip;
		static Dynamic &lime_cairo_in_clip_dyn() { return lime_cairo_in_clip;}
		static Dynamic lime_cairo_in_fill;
		static Dynamic &lime_cairo_in_fill_dyn() { return lime_cairo_in_fill;}
		static Dynamic lime_cairo_in_stroke;
		static Dynamic &lime_cairo_in_stroke_dyn() { return lime_cairo_in_stroke;}
		static Dynamic lime_cairo_line_to;
		static Dynamic &lime_cairo_line_to_dyn() { return lime_cairo_line_to;}
		static Dynamic lime_cairo_mask;
		static Dynamic &lime_cairo_mask_dyn() { return lime_cairo_mask;}
		static Dynamic lime_cairo_mask_surface;
		static Dynamic &lime_cairo_mask_surface_dyn() { return lime_cairo_mask_surface;}
		static Dynamic lime_cairo_move_to;
		static Dynamic &lime_cairo_move_to_dyn() { return lime_cairo_move_to;}
		static Dynamic lime_cairo_new_path;
		static Dynamic &lime_cairo_new_path_dyn() { return lime_cairo_new_path;}
		static Dynamic lime_cairo_paint;
		static Dynamic &lime_cairo_paint_dyn() { return lime_cairo_paint;}
		static Dynamic lime_cairo_paint_with_alpha;
		static Dynamic &lime_cairo_paint_with_alpha_dyn() { return lime_cairo_paint_with_alpha;}
		static Dynamic lime_cairo_pop_group;
		static Dynamic &lime_cairo_pop_group_dyn() { return lime_cairo_pop_group;}
		static Dynamic lime_cairo_pop_group_to_source;
		static Dynamic &lime_cairo_pop_group_to_source_dyn() { return lime_cairo_pop_group_to_source;}
		static Dynamic lime_cairo_push_group;
		static Dynamic &lime_cairo_push_group_dyn() { return lime_cairo_push_group;}
		static Dynamic lime_cairo_push_group_with_content;
		static Dynamic &lime_cairo_push_group_with_content_dyn() { return lime_cairo_push_group_with_content;}
		static Dynamic lime_cairo_rectangle;
		static Dynamic &lime_cairo_rectangle_dyn() { return lime_cairo_rectangle;}
		static Dynamic lime_cairo_reference;
		static Dynamic &lime_cairo_reference_dyn() { return lime_cairo_reference;}
		static Dynamic lime_cairo_rel_curve_to;
		static Dynamic &lime_cairo_rel_curve_to_dyn() { return lime_cairo_rel_curve_to;}
		static Dynamic lime_cairo_rel_line_to;
		static Dynamic &lime_cairo_rel_line_to_dyn() { return lime_cairo_rel_line_to;}
		static Dynamic lime_cairo_rel_move_to;
		static Dynamic &lime_cairo_rel_move_to_dyn() { return lime_cairo_rel_move_to;}
		static Dynamic lime_cairo_reset_clip;
		static Dynamic &lime_cairo_reset_clip_dyn() { return lime_cairo_reset_clip;}
		static Dynamic lime_cairo_restore;
		static Dynamic &lime_cairo_restore_dyn() { return lime_cairo_restore;}
		static Dynamic lime_cairo_save;
		static Dynamic &lime_cairo_save_dyn() { return lime_cairo_save;}
		static Dynamic lime_cairo_set_antialias;
		static Dynamic &lime_cairo_set_antialias_dyn() { return lime_cairo_set_antialias;}
		static Dynamic lime_cairo_set_dash;
		static Dynamic &lime_cairo_set_dash_dyn() { return lime_cairo_set_dash;}
		static Dynamic lime_cairo_set_font_face;
		static Dynamic &lime_cairo_set_font_face_dyn() { return lime_cairo_set_font_face;}
		static Dynamic lime_cairo_set_font_size;
		static Dynamic &lime_cairo_set_font_size_dyn() { return lime_cairo_set_font_size;}
		static Dynamic lime_cairo_set_fill_rule;
		static Dynamic &lime_cairo_set_fill_rule_dyn() { return lime_cairo_set_fill_rule;}
		static Dynamic lime_cairo_set_font_options;
		static Dynamic &lime_cairo_set_font_options_dyn() { return lime_cairo_set_font_options;}
		static Dynamic lime_cairo_get_font_options;
		static Dynamic lime_cairo_set_line_cap;
		static Dynamic &lime_cairo_set_line_cap_dyn() { return lime_cairo_set_line_cap;}
		static Dynamic lime_cairo_set_line_join;
		static Dynamic &lime_cairo_set_line_join_dyn() { return lime_cairo_set_line_join;}
		static Dynamic lime_cairo_set_line_width;
		static Dynamic &lime_cairo_set_line_width_dyn() { return lime_cairo_set_line_width;}
		static Dynamic lime_cairo_set_matrix;
		static Dynamic &lime_cairo_set_matrix_dyn() { return lime_cairo_set_matrix;}
		static Dynamic lime_cairo_set_miter_limit;
		static Dynamic &lime_cairo_set_miter_limit_dyn() { return lime_cairo_set_miter_limit;}
		static Dynamic lime_cairo_set_operator;
		static Dynamic &lime_cairo_set_operator_dyn() { return lime_cairo_set_operator;}
		static Dynamic lime_cairo_set_source;
		static Dynamic &lime_cairo_set_source_dyn() { return lime_cairo_set_source;}
		static Dynamic lime_cairo_set_source_rgb;
		static Dynamic &lime_cairo_set_source_rgb_dyn() { return lime_cairo_set_source_rgb;}
		static Dynamic lime_cairo_set_source_rgba;
		static Dynamic &lime_cairo_set_source_rgba_dyn() { return lime_cairo_set_source_rgba;}
		static Dynamic lime_cairo_set_source_surface;
		static Dynamic &lime_cairo_set_source_surface_dyn() { return lime_cairo_set_source_surface;}
		static Dynamic lime_cairo_set_tolerance;
		static Dynamic &lime_cairo_set_tolerance_dyn() { return lime_cairo_set_tolerance;}
		static Dynamic lime_cairo_show_page;
		static Dynamic &lime_cairo_show_page_dyn() { return lime_cairo_show_page;}
		static Dynamic lime_cairo_show_text;
		static Dynamic &lime_cairo_show_text_dyn() { return lime_cairo_show_text;}
		static Dynamic lime_cairo_status;
		static Dynamic &lime_cairo_status_dyn() { return lime_cairo_status;}
		static Dynamic lime_cairo_stroke;
		static Dynamic &lime_cairo_stroke_dyn() { return lime_cairo_stroke;}
		static Dynamic lime_cairo_stroke_extents;
		static Dynamic &lime_cairo_stroke_extents_dyn() { return lime_cairo_stroke_extents;}
		static Dynamic lime_cairo_stroke_preserve;
		static Dynamic &lime_cairo_stroke_preserve_dyn() { return lime_cairo_stroke_preserve;}
		static Dynamic lime_cairo_transform;
		static Dynamic &lime_cairo_transform_dyn() { return lime_cairo_transform;}
		static Dynamic lime_cairo_rotate;
		static Dynamic &lime_cairo_rotate_dyn() { return lime_cairo_rotate;}
		static Dynamic lime_cairo_scale;
		static Dynamic &lime_cairo_scale_dyn() { return lime_cairo_scale;}
		static Dynamic lime_cairo_translate;
		static Dynamic &lime_cairo_translate_dyn() { return lime_cairo_translate;}
		static Dynamic lime_cairo_version;
		static Dynamic &lime_cairo_version_dyn() { return lime_cairo_version;}
		static Dynamic lime_cairo_version_string;
		static Dynamic &lime_cairo_version_string_dyn() { return lime_cairo_version_string;}
};

} // end namespace lime
} // end namespace graphics
} // end namespace cairo

#endif /* INCLUDED_lime_graphics_cairo_Cairo */ 
