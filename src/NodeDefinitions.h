/*
 * NodeDefinitions.h
 *
 * Copyright (C) 1999 Stephen F. White, 2005 J. "MUFTI" Scheurich
 * 
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program (see the file "COPYING" for details); if 
 * not, write to the Free Software Foundation, Inc., 675 Mass Ave, 
 * Cambridge, MA 02139, USA.
 */

#pragma once

// X3D_NODE_TYPE
enum NodeEnum {
    VRML_ANCHOR,
    VRML_APPEARANCE,
    X3D_ARC_2D,
    X3D_ARC_CLOSE_2D,
    COVER_AR_SENSOR,
    VRML_AUDIO_CLIP,
    VRML_BACKGROUND,
    X3D_BALL_JOINT,
    X3DOM_BINARY_GEOMETRY,
    VRML_BILLBOARD,
    X3DOM_BLOCK,
    KAMBI_BLEND_MODE,
    X3D_BLENDED_VOLUME_STYLE,
    X3D_BOOLEAN_FILTER,
    X3D_BOOLEAN_TOGGLE,
    X3D_BOOLEAN_TRIGGER,
    X3D_BOOLEAN_SEQUENCER,
    X3D_BOUNDARY_ENHANCEMENT_VOLUME_STYLE,
    X3D_BOUNDED_PHYSICS_MODEL,
    VRML_BOX,
    X3D_CAD_ASSEMBLY,
    X3D_CAD_FACE,
    X3D_CAD_LAYER,
    X3D_CAD_PART,
    X3D_CARTOON_VOLUME_STYLE,
    DUNE_CATT_EXPORT_REC, // Export container node for CATT 8 file format
    DUNE_CATT_EXPORT_SRC, // Export container node for CATT 8 file format
    X3D_CIRCLE_2D,
    X3D_CLIP_PLANE,
    X3D_COLLIDABLE_OFFSET,
    X3D_COLLIDABLE_SHAPE,
    VRML_COLLISION,
    X3D_COLLISION_COLLECTION,
    X3D_COLLISION_SENSOR,
    X3D_COLLISION_SPACE,
    VRML_COLOR,
    X3D_COLOR_CHASER,
    X3D_COLOR_DAMPER,
    VRML_COLOR_INTERPOLATOR,
    X3DOM_COLOR_MASK_MODE,
    X3D_COLOR_RGBA,
    KAMBI_COLOR_SET_INTERPOLATOR,
    X3DOM_COMMON_SURFACE_SHADER,
    X3D_COMPOSED_CUBE_MAP_TEXTURE,
    X3D_COMPOSED_SHADER,
    X3D_COMPOSED_TEXTURE_3D,
    X3D_COMPOSED_VOLUME_STYLE,
    VRML_CONE,
    X3D_CONE_EMITTER,
    X3D_CONTACT,
    VRML_CONTOUR_2D,
    X3D_CONTOUR_POLYLINE_2D,
    VRML_COORDINATE,
    X3D_COORDINATE_CHASER,
    X3D_COORDINATE_DAMPER,
    VRML_COORDINATE_DEFORMER,
    X3D_COORDINATE_DOUBLE,
    VRML_COORDINATE_INTERPOLATOR,
    X3D_COORDINATE_INTERPOLATOR_2D,
    COVER_COVER,
    COVER_CUBE_TEXTURE,
    KAMBI_CUBIC_BEZIER_2D_ORIENTATION_INTERPOLATOR,
    KAMBI_CUBIC_BEZIER_POSITION_INTERPOLATOR,
    DUNE_CURVE_ANIMATION,
    VRML_CYLINDER,
    VRML_CYLINDER_SENSOR,
    X3DOM_DEPTH_MODE,
    VRML_DIRECTIONAL_LIGHT,
    X3DOM_DISH,
    X3D_DIS_ENTITY_MANAGER,
    X3D_DIS_ENTITY_TYPE_MAPPING,
    X3D_DISK_2D,
    X3DOM_DYNAMIC_LOD,
    X3D_DOUBLE_AXIS_HINGE_JOINT,
    X3D_EASE_IN_EASE_OUT,
    KAMBI_EFFECT,
    KAMBI_EFFECT_PART,
    X3D_EDGE_ENHANCEMENT_VOLUME_STYLE,
    VRML_ELEVATION_GRID,
    X3DOM_ENVIRONMENT,
    X3D_ESPDU_TRANSFORM,
    X3D_EXPLOSION_EMITTER,
    X3DOM_EXTERNAL_GEOMETRY,
    VRML_EXTRUSION,
    X3DOM_FIELD,
    X3D_FILL_PROPERTIES,
    X3D_FLOAT_VERTEX_ATTRIBUTE,
    VRML_FOG,
    X3D_FOG_COORDINATE,
    VRML_FONT_STYLE,
    X3D_FORCE_PHYSICS_MODEL,
    X3D_GENERATED_CUBE_MAP_TEXTURE,
    KAMBI_GENERATED_SHADOW_MAP,
    VRML_GEO_COORDINATE,
    VRML_GEO_ELEVATION_GRID,
    VRML_GEO_LOCATION,
    VRML_GEO_LOD,
    X3D_GEO_METADATA,
    VRML_GEO_ORIGIN,
    VRML_GEO_POSITION_INTERPOLATOR,
    X3D_GEO_PROXIMITY_SENSOR,
    VRML_GEO_TOUCH_SENSOR,
    X3D_GEO_TRANSFORM,
    VRML_GEO_VIEWPOINT,
    VRML_GROUP,
    X3D_HANIM_DISPLACER,
    X3D_HANIM_HUMANOID,
    X3D_HANIM_JOINT,
    X3D_HANIM_SEGMENT,
    X3D_HANIM_SITE,
    X3D_IMAGE_CUBE_MAP_TEXTURE,
    X3DOM_IMAGE_GEOMETRY,
    VRML_IMAGE_TEXTURE,
    X3D_IMAGE_TEXTURE_3D,
    X3DOM_IMAGE_TEXTURE_ATLAS,
    VRML_INDEXED_FACE_SET,
    VRML_INDEXED_LINE_SET,
    X3D_INDEXED_QUAD_SET,
    X3D_INDEXED_TRIANGLE_FAN_SET,
    X3D_INDEXED_TRIANGLE_SET,
    X3D_INDEXED_TRIANGLE_STRIP_SET,
    VRML_INLINE,
    VRML_INLINE_LOAD_CONTROL,
    X3D_INTEGER_SEQUENCER,
    X3D_INTEGER_TRIGGER,
    X3D_ISO_SURFACE_VOLUME_DATA,
    COVER_JOYSTICK_SENSOR,
    KAMBI_KAMBI_APPEARANCE,
    KAMBI_KAMBI_HEAD_LIGHT,
    KAMBI_KAMBI_INLINE,
    KAMBI_KAMBI_NAVIGATION_INFO,
    KAMBI_KAMBI_OCTREE_PROPERTIES,
    KAMBI_KAMBI_TRIANGULATION,
    X3D_KEY_SENSOR,
    COVER_LAB_VIEW,
    X3D_LAYER,
    X3D_LAYER_SET,
    X3D_LAYOUT,
    X3D_LAYOUT_GROUP,
    X3D_LAYOUT_LAYER,
    DUNE_LDRAW_DAT_EXPORT, // Export container node for ldraw.dat file format
    X3D_LINE_PICK_SENSOR,
    X3D_LINE_PROPERTIES,
    X3D_LINE_SET,
    X3D_LOAD_SENSOR,
    X3D_LOCAL_FOG,
    VRML_LOD,
    VRML_MATERIAL,
    X3D_MATRIX_3_VERTEX_ATTRIBUTE,
    X3D_MATRIX_4_VERTEX_ATTRIBUTE,
    KAMBI_MATRIX_TRANSFORM,
    X3DOM_MESH,
    X3D_METADATA_BOOLEAN,
    X3D_METADATA_DOUBLE,
    X3D_METADATA_FLOAT,
    X3D_METADATA_INTEGER,
    X3D_METADATA_SET,
    X3D_METADATA_STRING,
    X3D_MOTOR_JOINT,
    VRML_MOVIE_TEXTURE,
    X3DOM_MPR_VOLUME_STYLE,
    KAMBI_MULTI_GENERATED_TEXTURE_COORDINATE,
    X3DOM_MULTI_PART,
    X3D_MULTI_TEXTURE,
    X3D_MULTI_TEXTURE_COORDINATE,
    X3D_MULTI_TEXTURE_TRANSFORM,
    VRML_NAVIGATION_INFO,
    VRML_NORMAL,
    VRML_NORMAL_INTERPOLATOR,
    X3DOM_NOZZLE,
    VRML_NURBS_CURVE,
    VRML_NURBS_CURVE_2D,
    VRML_NURBS_GROUP,
    X3D_NURBS_ORIENTATION_INTERPOLATOR,
    VRML_NURBS_POSITION_INTERPOLATOR,
    X3D_NURBS_SET,
    VRML_NURBS_SURFACE,
    X3D_NURBS_SURFACE_INTERPOLATOR,
    X3D_NURBS_SWEPT_SURFACE,
    X3D_NURBS_SWUNG_SURFACE,
    X3D_NURBS_TEXTURE_COORDINATE,
    VRML_NURBS_TEXTURE_SURFACE,
    X3D_NURBS_TRIMMED_SURFACE,
    X3D_OPACITY_MAP_VOLUME_STYLE,
    X3D_ORIENTATION_CHASER,
    X3D_ORIENTATION_DAMPER,
    VRML_ORIENTATION_INTERPOLATOR,
    X3D_ORTHO_VIEWPOINT,
    X3D_PACKAGED_SHADER,
    X3DOM_PARAM,
    X3DOM_PARTICLE_SET,
    X3D_PARTICLE_SYSTEM,
    X3D_PICKABLE_GROUP,
    VRML_PIXEL_TEXTURE,
    X3D_PIXEL_TEXTURE_3D,
    X3DOM_PLANE,
    VRML_PLANE_SENSOR,
    X3D_POINT_EMITTER,
    VRML_POINT_LIGHT,
    X3D_POINT_PICK_SENSOR,
    VRML_POINT_SET,
    VRML_POLYLINE_2D,
    X3D_POLYLINE_EMITTER,
    X3D_POLYPOINT_2D,
    X3DOM_POP_GEOMETRY,
    X3DOM_POP_GEOMETRY_LEVEL,
    X3D_POSITION_CHASER_2D,
    X3D_POSITION_CHASER,
    X3D_POSITION_DAMPER_2D,
    X3D_POSITION_DAMPER,
    VRML_POSITION_INTERPOLATOR,
    X3D_POSITION_INTERPOLATOR_2D,
    X3D_PRIMITIVE_PICK_SENSOR,
    X3D_PROGRAM_SHADER,
    KAMBI_PROJECTED_TEXTURE_COORDINATE,
    X3D_PROJECTION_VOLUME_STYLE,
    VRML_PROXIMITY_SENSOR,
    X3DOM_PYRAMID,
    X3D_QUAD_SET,
    X3DOM_RADAR_VOLUME_STYLE,
    X3D_RECEIVER_PDU,
    X3D_RECTANGLE_2D,
    X3DOM_RECTANGULAR_TORUS,
    X3DOM_REFINEMENT_TEXTURE,
    X3DOM_REMOTE_SELECTION_GROUP,
    KAMBI_RENDERED_TEXTURE,
    X3D_RIGID_BODY,
    X3D_RIGID_BODY_COLLECTION,
    X3D_SCALAR_CHASER,
    X3D_SCALAR_DAMPER,
    VRML_SCALAR_INTERPOLATOR,
    KAMBI_SCREEN_EFFECT,
    X3D_SCREEN_FONT_STYLE,
    X3D_SCREEN_GROUP,
    VRML_SCRIPT,
    X3D_SEGMENTED_VOLUME_DATA,
    X3D_SHADED_VOLUME_STYLE,
    X3D_SHADER_PART,
    X3D_SHADER_PROGRAM,
    KAMBI_SHADER_TEXTURE,
    VRML_SHAPE,
    X3D_SIGNAL_PDU,
    X3D_SINGLE_AXIS_HINGE_JOINT,
    X3D_SILHOUETTE_ENHANCEMENT_VOLUME_STYLE,
    COVER_SKY,
    X3D_SLIDER_JOINT,
    X3DOM_SLOPED_CYLINDER,
    X3DOM_SNOUT,
    X3DOM_SOLID_OF_REVOLUTION,
    VRML_SOUND,
    COVER_SPACE_SENSOR,
    VRML_SPHERE,
    X3DOM_SPHERE_SEGMENT,
    VRML_SPHERE_SENSOR,
    X3D_SPLINE_POSITION_INTERPOLATOR,
    X3D_SPLINE_POSITION_INTERPOLATOR_2D,
    X3D_SPLINE_SCALAR_INTERPOLATOR,
    VRML_SPOT_LIGHT,
    X3D_SQUAD_ORIENTATION_INTERPOLATOR,
    X3D_STATIC_GROUP,
    X3DOM_STIPPLE_VOLUME_STYLE,
    X3D_STRING_SENSOR,
    COVER_STEERING_WHEEL,
    DUNE_SUPER_ELLIPSOID,
    DUNE_SUPER_EXTRUSION,
    DUNE_SUPER_REVOLVER,
    DUNE_SUPER_SHAPE,
    X3D_SURFACE_EMITTER,
    X3DOM_SURFACE_SHADER_TEXTURE,
    VRML_SWITCH,
    KAMBI_TEAPOT,
    X3D_TEX_COORD_CHASER_2D,
    X3D_TEX_COORD_DAMPER_2D,
    VRML_TEXT,
    KAMBI_TEXT_3D,
    X3D_TEXTURE_BACKGROUND,
    VRML_TEXTURE_COORDINATE,
    X3D_TEXTURE_COORDINATE_3D,
    X3D_TEXTURE_COORDINATE_4D,
    X3D_TEXTURE_COORDINATE_GENERATOR,
    X3D_TEXTURE_PROPERTIES,
    VRML_TEXTURE_TRANSFORM,
    X3D_TEXTURE_TRANSFORM_3D,
    X3D_TEXTURE_TRANSFORM_MATRIX_3D,
    VRML_TIME_SENSOR,
    X3D_TIME_TRIGGER,
    X3D_TONE_MAPPED_VOLUME_STYLE,
    X3DOM_TORUS,
    VRML_TOUCH_SENSOR,
    VRML_TRANSFORM,
    X3D_TRANSFORM_SENSOR,
    X3D_TRANSMITTER_PDU,
    X3D_TRIANGLE_FAN_SET,
    X3D_TRIANGLE_SET,
    X3D_TRIANGLE_SET_2D,
    X3D_TRIANGLE_STRIP_SET,
    VRML_TRIMMED_SURFACE,
    COVER_TUI_BUTTON,
    COVER_TUI_COMBO_BOX,
    COVER_TUI_FLOAT_SLIDER,
    COVER_TUI_FRAME,
    COVER_TUI_LABEL,
    COVER_TUI_LIST_BOX,
    COVER_TUI_MAP,
    COVER_TUI_PROGRESS_BAR,
    COVER_TUI_SLIDER,
    COVER_TUI_SPLITTER,
    COVER_TUI_TAB,
    COVER_TUI_TAB_FOLDER,
    COVER_TUI_TOGGLE_BUTTON,
    X3D_TWO_SIDED_MATERIAL,
    X3DOM_UNIFORM,
    X3D_UNIVERSAL_JOINT,
    COVER_VEHICLE,
    KAMBI_VECTOR_INTERPOLATOR,
    X3DOM_VIEWFRUSTUM,
    VRML_VIEWPOINT,
    X3D_VIEWPOINT_GROUP,
    X3D_VIEWPORT,
    COVER_VIRTUAL_ACOUSTICS,
    COVER_VIRTUAL_SOUND_SOURCE,
    VRML_VISIBILITY_SENSOR,
    X3D_VOLUME_DATA,
    X3D_VOLUME_EMITTER,
    X3D_VOLUME_PICK_SENSOR,
    DUNE_VRML_CUT,
    DUNE_VRML_SCENE,
    COVER_WAVE,
    X3D_WIND_PHYSICS_MODEL,
    DUNE_WONDERLAND_IMPORT_JAVA,
    VRML_WORLD_INFO,

    // fake nodes
    VRML_COMMENT,
    X3D_EXPORT,
    X3D_IMPORT,

    // the following are node "classes", used to validate the
    // scene graph hierarchy

    ANY_NODE,
    AUDIO_CLIP_NODE,
    BODY_COLLIDABLE_NODE,
    BODY_COLLISION_SPACE_NODE,
    BOUNDED_OBJECT_NODE,
    COMPOSABLE_VOLUME_RENDER_STYLE_NODE,
    COORDINATE_NODE,
    FONT_STYLE_NODE,
    HANIM_CHILD_NODE,
    INLINE_NODE,
    INTERPOLATOR_NODE,
    MATERIAL_NODE,
    METADATA_NODE,
    MOVIE_TEXTURE_NODE,
    NURBS_CONTROL_CURVE_NODE,
    NURBS_TEXTURE_COORDINATE_NODE,
    LAYER_NODE,
    LIGHT_NODE,
    LINE_SET_NODE,
    LOD_NODE,
    PARAMETRIC_GEOMETRY_NODE,
    PARTICLE_EMITTER_NODE,
    PARTICLE_PHYSICS_MODEL_NODE,
    PRODUCT_STRUCTURE_CHILD_NODE,
    PRIMITIVE_GEOMETRY_NODE,
    RIGID_JOINT_NODE,
    ROOT_NODE, // still a dummy
    SHAPE_NODE,
    SHADER_NODE,
    TEXTURE_3D_NODE,
    VERTEX_ATTRIBUTE_NODE,
    VIEWPOINT_NODE,
    VIEWPOINT_GROUP_NODE,
    VOLUME_DATA_NODE,

    // combined types
    AUDIO_CLIP_OR_MOVIE_TEXTURE_NODE,
    BODY_COLLIDABLE_OR_BODY_COLLISION_SPACE_NODE,
    VOLUME_RENDER_STYLE_NODE,
    GENERATED_TEXTURE_COORDINATE_NODE,
    NURBS_TEXTURE_COORDINATE_OR_TEXTURE_COORDINATE_NODE,
    PRIMITIVE_GEOMETRY_OR_MASS_DENSITY_MODEL_NODE,
    SHAPE_OR_INLINE_NODE,
    SHAPE_OR_LOD_NODE,
    SPOTLIGHT_OR_DIRECTIONALLIGHT_OR_VIEWPOINT_NODE,
    TEXTURE_OR_TEXTURE_3D_NODE,
    VIEWPOINT_OR_VIEWPOINT_GROUP_NODE,
    NURBS_CURVE_2D_OR_CONTOUR_POLYLINE_2D_NODE,

    // the nodeclass of the following types can be bitwise OR'ed to any node
    NOT_SELF_NODE           = 1 << 19,
    SENSOR_NODE             = 1 << 20,
    TEXTURE_COORDINATE_NODE = 1 << 21,
    TEXTURE_TRANSFORM_NODE  = 1 << 22,
    TEXTURE_NODE            = 1 << 23,
    TEXTURE_2D_NODE         = 1 << 24,
    GEOMETRY_NODE           = 1 << 25,
    COLOR_NODE              = 1 << 26,
    CHILD_NODE              = 1 << 27,
    GROUPING_NODE           = 1 << 28,
    URL_NODE                = 1 << 29,
    PROTO_NODE              = 1 << 30 
    // do not use bit 31 (sign bit)
};

#define LAST_NODE VRML_COMMENT


