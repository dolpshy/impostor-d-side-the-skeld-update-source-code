#include <hxcpp.h>

#ifndef INCLUDED_95f339a1d026d52c
#define INCLUDED_95f339a1d026d52c
#include "hxMath.h"
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_flixel_FlxBasic
#include <flixel/FlxBasic.h>
#endif
#ifndef INCLUDED_flixel_FlxCamera
#include <flixel/FlxCamera.h>
#endif
#ifndef INCLUDED_flixel_FlxG
#include <flixel/FlxG.h>
#endif
#ifndef INCLUDED_flixel_FlxObject
#include <flixel/FlxObject.h>
#endif
#ifndef INCLUDED_flixel_FlxSprite
#include <flixel/FlxSprite.h>
#endif
#ifndef INCLUDED_flixel_animation_FlxAnimation
#include <flixel/animation/FlxAnimation.h>
#endif
#ifndef INCLUDED_flixel_animation_FlxAnimationController
#include <flixel/animation/FlxAnimationController.h>
#endif
#ifndef INCLUDED_flixel_animation_FlxBaseAnimation
#include <flixel/animation/FlxBaseAnimation.h>
#endif
#ifndef INCLUDED_flixel_graphics_FlxGraphic
#include <flixel/graphics/FlxGraphic.h>
#endif
#ifndef INCLUDED_flixel_graphics_frames_FlxFrame
#include <flixel/graphics/frames/FlxFrame.h>
#endif
#ifndef INCLUDED_flixel_graphics_frames_FlxFramesCollection
#include <flixel/graphics/frames/FlxFramesCollection.h>
#endif
#ifndef INCLUDED_flixel_graphics_frames_FlxImageFrame
#include <flixel/graphics/frames/FlxImageFrame.h>
#endif
#ifndef INCLUDED_flixel_graphics_frames_FlxTileFrames
#include <flixel/graphics/frames/FlxTileFrames.h>
#endif
#ifndef INCLUDED_flixel_graphics_tile_FlxGraphicsShader
#include <flixel/graphics/tile/FlxGraphicsShader.h>
#endif
#ifndef INCLUDED_flixel_math_FlxBasePoint
#include <flixel/math/FlxBasePoint.h>
#endif
#ifndef INCLUDED_flixel_math_FlxMatrix
#include <flixel/math/FlxMatrix.h>
#endif
#ifndef INCLUDED_flixel_math_FlxRect
#include <flixel/math/FlxRect.h>
#endif
#ifndef INCLUDED_flixel_math__FlxPoint_FlxPoint_Impl_
#include <flixel/math/_FlxPoint/FlxPoint_Impl_.h>
#endif
#ifndef INCLUDED_flixel_system_frontEnds_BitmapFrontEnd
#include <flixel/system/frontEnds/BitmapFrontEnd.h>
#endif
#ifndef INCLUDED_flixel_util_FlxBitmapDataUtil
#include <flixel/util/FlxBitmapDataUtil.h>
#endif
#ifndef INCLUDED_flixel_util_FlxColorTransformUtil
#include <flixel/util/FlxColorTransformUtil.h>
#endif
#ifndef INCLUDED_flixel_util_FlxDestroyUtil
#include <flixel/util/FlxDestroyUtil.h>
#endif
#ifndef INCLUDED_flixel_util_FlxPool_flixel_math_FlxBasePoint
#include <flixel/util/FlxPool_flixel_math_FlxBasePoint.h>
#endif
#ifndef INCLUDED_flixel_util_FlxPool_flixel_math_FlxRect
#include <flixel/util/FlxPool_flixel_math_FlxRect.h>
#endif
#ifndef INCLUDED_flixel_util_FlxPool_flixel_util_LabelValuePair
#include <flixel/util/FlxPool_flixel_util_LabelValuePair.h>
#endif
#ifndef INCLUDED_flixel_util_FlxStringUtil
#include <flixel/util/FlxStringUtil.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxPool
#include <flixel/util/IFlxPool.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxPooled
#include <flixel/util/IFlxPooled.h>
#endif
#ifndef INCLUDED_flixel_util_LabelValuePair
#include <flixel/util/LabelValuePair.h>
#endif
#ifndef INCLUDED_flixel_util__FlxColor_FlxColor_Impl_
#include <flixel/util/_FlxColor/FlxColor_Impl_.h>
#endif
#ifndef INCLUDED_haxe_Exception
#include <haxe/Exception.h>
#endif
#ifndef INCLUDED_haxe_IMap
#include <haxe/IMap.h>
#endif
#ifndef INCLUDED_haxe_ds_IntMap
#include <haxe/ds/IntMap.h>
#endif
#ifndef INCLUDED_haxe_ds_StringMap
#include <haxe/ds/StringMap.h>
#endif
#ifndef INCLUDED_openfl_display_BitmapData
#include <openfl/display/BitmapData.h>
#endif
#ifndef INCLUDED_openfl_display_GraphicsShader
#include <openfl/display/GraphicsShader.h>
#endif
#ifndef INCLUDED_openfl_display_IBitmapDrawable
#include <openfl/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_openfl_display_Shader
#include <openfl/display/Shader.h>
#endif
#ifndef INCLUDED_openfl_geom_ColorTransform
#include <openfl/geom/ColorTransform.h>
#endif
#ifndef INCLUDED_openfl_geom_Matrix
#include <openfl/geom/Matrix.h>
#endif
#ifndef INCLUDED_openfl_geom_Point
#include <openfl/geom/Point.h>
#endif
#ifndef INCLUDED_openfl_geom_Rectangle
#include <openfl/geom/Rectangle.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_cfd221447aa7194b_129_new,"flixel.FlxSprite","new",0x4dfa64d7,"flixel.FlxSprite.new","flixel/FlxSprite.hx",129,0x0384bffa)
HX_LOCAL_STACK_FRAME(_hx_pos_cfd221447aa7194b_388_initVars,"flixel.FlxSprite","initVars",0x31793705,"flixel.FlxSprite.initVars","flixel/FlxSprite.hx",388,0x0384bffa)
HX_LOCAL_STACK_FRAME(_hx_pos_cfd221447aa7194b_417_destroy,"flixel.FlxSprite","destroy",0x0fb5c8f1,"flixel.FlxSprite.destroy","flixel/FlxSprite.hx",417,0x0384bffa)
HX_LOCAL_STACK_FRAME(_hx_pos_cfd221447aa7194b_448_clone,"flixel.FlxSprite","clone",0x3c30f394,"flixel.FlxSprite.clone","flixel/FlxSprite.hx",448,0x0384bffa)
HX_LOCAL_STACK_FRAME(_hx_pos_cfd221447aa7194b_459_loadGraphicFromSprite,"flixel.FlxSprite","loadGraphicFromSprite",0xd0637b08,"flixel.FlxSprite.loadGraphicFromSprite","flixel/FlxSprite.hx",459,0x0384bffa)
HX_LOCAL_STACK_FRAME(_hx_pos_cfd221447aa7194b_496_loadGraphic,"flixel.FlxSprite","loadGraphic",0x47377c99,"flixel.FlxSprite.loadGraphic","flixel/FlxSprite.hx",496,0x0384bffa)
HX_LOCAL_STACK_FRAME(_hx_pos_cfd221447aa7194b_539_loadRotatedGraphic,"flixel.FlxSprite","loadRotatedGraphic",0xceb71e2e,"flixel.FlxSprite.loadRotatedGraphic","flixel/FlxSprite.hx",539,0x0384bffa)
HX_LOCAL_STACK_FRAME(_hx_pos_cfd221447aa7194b_600_loadRotatedFrame,"flixel.FlxSprite","loadRotatedFrame",0xe0d52e33,"flixel.FlxSprite.loadRotatedFrame","flixel/FlxSprite.hx",600,0x0384bffa)
HX_LOCAL_STACK_FRAME(_hx_pos_cfd221447aa7194b_635_makeGraphic,"flixel.FlxSprite","makeGraphic",0xbaa3e5d1,"flixel.FlxSprite.makeGraphic","flixel/FlxSprite.hx",635,0x0384bffa)
HX_LOCAL_STACK_FRAME(_hx_pos_cfd221447aa7194b_644_graphicLoaded,"flixel.FlxSprite","graphicLoaded",0xacabf404,"flixel.FlxSprite.graphicLoaded","flixel/FlxSprite.hx",644,0x0384bffa)
HX_LOCAL_STACK_FRAME(_hx_pos_cfd221447aa7194b_650_resetSize,"flixel.FlxSprite","resetSize",0x5d8771e7,"flixel.FlxSprite.resetSize","flixel/FlxSprite.hx",650,0x0384bffa)
HX_LOCAL_STACK_FRAME(_hx_pos_cfd221447aa7194b_661_resetFrameSize,"flixel.FlxSprite","resetFrameSize",0xb7baa4a8,"flixel.FlxSprite.resetFrameSize","flixel/FlxSprite.hx",661,0x0384bffa)
HX_LOCAL_STACK_FRAME(_hx_pos_cfd221447aa7194b_675_resetSizeFromFrame,"flixel.FlxSprite","resetSizeFromFrame",0xf893db7c,"flixel.FlxSprite.resetSizeFromFrame","flixel/FlxSprite.hx",675,0x0384bffa)
HX_LOCAL_STACK_FRAME(_hx_pos_cfd221447aa7194b_688_resetFrame,"flixel.FlxSprite","resetFrame",0x02a6a847,"flixel.FlxSprite.resetFrame","flixel/FlxSprite.hx",688,0x0384bffa)
HX_LOCAL_STACK_FRAME(_hx_pos_cfd221447aa7194b_699_setGraphicSize,"flixel.FlxSprite","setGraphicSize",0x516eb7f0,"flixel.FlxSprite.setGraphicSize","flixel/FlxSprite.hx",699,0x0384bffa)
HX_LOCAL_STACK_FRAME(_hx_pos_cfd221447aa7194b_718_updateHitbox,"flixel.FlxSprite","updateHitbox",0x9470392a,"flixel.FlxSprite.updateHitbox","flixel/FlxSprite.hx",718,0x0384bffa)
HX_LOCAL_STACK_FRAME(_hx_pos_cfd221447aa7194b_730_resetHelpers,"flixel.FlxSprite","resetHelpers",0x6fc22ddf,"flixel.FlxSprite.resetHelpers","flixel/FlxSprite.hx",730,0x0384bffa)
HX_LOCAL_STACK_FRAME(_hx_pos_cfd221447aa7194b_752_update,"flixel.FlxSprite","update",0xe75bd5f2,"flixel.FlxSprite.update","flixel/FlxSprite.hx",752,0x0384bffa)
HX_LOCAL_STACK_FRAME(_hx_pos_cfd221447aa7194b_762_updateAnimation,"flixel.FlxSprite","updateAnimation",0x7e6eaab2,"flixel.FlxSprite.updateAnimation","flixel/FlxSprite.hx",762,0x0384bffa)
HX_LOCAL_STACK_FRAME(_hx_pos_cfd221447aa7194b_768_checkEmptyFrame,"flixel.FlxSprite","checkEmptyFrame",0xe3dea03f,"flixel.FlxSprite.checkEmptyFrame","flixel/FlxSprite.hx",768,0x0384bffa)
HX_LOCAL_STACK_FRAME(_hx_pos_cfd221447aa7194b_776_draw,"flixel.FlxSprite","draw",0xe68b7fad,"flixel.FlxSprite.draw","flixel/FlxSprite.hx",776,0x0384bffa)
HX_LOCAL_STACK_FRAME(_hx_pos_cfd221447aa7194b_808_drawSimple,"flixel.FlxSprite","drawSimple",0x0dc977bf,"flixel.FlxSprite.drawSimple","flixel/FlxSprite.hx",808,0x0384bffa)
HX_LOCAL_STACK_FRAME(_hx_pos_cfd221447aa7194b_819_drawComplex,"flixel.FlxSprite","drawComplex",0xcf4c0e03,"flixel.FlxSprite.drawComplex","flixel/FlxSprite.hx",819,0x0384bffa)
HX_LOCAL_STACK_FRAME(_hx_pos_cfd221447aa7194b_854_stamp,"flixel.FlxSprite","stamp",0x77d9503a,"flixel.FlxSprite.stamp","flixel/FlxSprite.hx",854,0x0384bffa)
HX_LOCAL_STACK_FRAME(_hx_pos_cfd221447aa7194b_901_drawFrame,"flixel.FlxSprite","drawFrame",0x99d67540,"flixel.FlxSprite.drawFrame","flixel/FlxSprite.hx",901,0x0384bffa)
HX_LOCAL_STACK_FRAME(_hx_pos_cfd221447aa7194b_922_centerOffsets,"flixel.FlxSprite","centerOffsets",0x583e0f62,"flixel.FlxSprite.centerOffsets","flixel/FlxSprite.hx",922,0x0384bffa)
HX_LOCAL_STACK_FRAME(_hx_pos_cfd221447aa7194b_938_centerOrigin,"flixel.FlxSprite","centerOrigin",0x4cbae644,"flixel.FlxSprite.centerOrigin","flixel/FlxSprite.hx",938,0x0384bffa)
HX_LOCAL_STACK_FRAME(_hx_pos_cfd221447aa7194b_951_replaceColor,"flixel.FlxSprite","replaceColor",0x7b700138,"flixel.FlxSprite.replaceColor","flixel/FlxSprite.hx",951,0x0384bffa)
HX_LOCAL_STACK_FRAME(_hx_pos_cfd221447aa7194b_973_setColorTransform,"flixel.FlxSprite","setColorTransform",0xa09a3582,"flixel.FlxSprite.setColorTransform","flixel/FlxSprite.hx",973,0x0384bffa)
HX_LOCAL_STACK_FRAME(_hx_pos_cfd221447aa7194b_985_updateColorTransform,"flixel.FlxSprite","updateColorTransform",0x79f9051b,"flixel.FlxSprite.updateColorTransform","flixel/FlxSprite.hx",985,0x0384bffa)
HX_LOCAL_STACK_FRAME(_hx_pos_cfd221447aa7194b_1009_pixelsOverlapPoint,"flixel.FlxSprite","pixelsOverlapPoint",0x4c878b7f,"flixel.FlxSprite.pixelsOverlapPoint","flixel/FlxSprite.hx",1009,0x0384bffa)
HX_LOCAL_STACK_FRAME(_hx_pos_cfd221447aa7194b_1029_getPixelAt,"flixel.FlxSprite","getPixelAt",0xeaefab8c,"flixel.FlxSprite.getPixelAt","flixel/FlxSprite.hx",1029,0x0384bffa)
HX_LOCAL_STACK_FRAME(_hx_pos_cfd221447aa7194b_1052_getPixelAtScreen,"flixel.FlxSprite","getPixelAtScreen",0x58308c18,"flixel.FlxSprite.getPixelAtScreen","flixel/FlxSprite.hx",1052,0x0384bffa)
HX_LOCAL_STACK_FRAME(_hx_pos_cfd221447aa7194b_1075_transformWorldToPixels,"flixel.FlxSprite","transformWorldToPixels",0x1a2b2c57,"flixel.FlxSprite.transformWorldToPixels","flixel/FlxSprite.hx",1075,0x0384bffa)
HX_LOCAL_STACK_FRAME(_hx_pos_cfd221447aa7194b_1093_transformWorldToPixelsSimple,"flixel.FlxSprite","transformWorldToPixelsSimple",0x4bb2ffe9,"flixel.FlxSprite.transformWorldToPixelsSimple","flixel/FlxSprite.hx",1093,0x0384bffa)
HX_LOCAL_STACK_FRAME(_hx_pos_cfd221447aa7194b_1119_transformScreenToPixels,"flixel.FlxSprite","transformScreenToPixels",0x8dfcfb17,"flixel.FlxSprite.transformScreenToPixels","flixel/FlxSprite.hx",1119,0x0384bffa)
HX_LOCAL_STACK_FRAME(_hx_pos_cfd221447aa7194b_1142_calcFrame,"flixel.FlxSprite","calcFrame",0xc4d45b0f,"flixel.FlxSprite.calcFrame","flixel/FlxSprite.hx",1142,0x0384bffa)
HX_LOCAL_STACK_FRAME(_hx_pos_cfd221447aa7194b_1155_updateFramePixels,"flixel.FlxSprite","updateFramePixels",0x2cd43e68,"flixel.FlxSprite.updateFramePixels","flixel/FlxSprite.hx",1155,0x0384bffa)
HX_LOCAL_STACK_FRAME(_hx_pos_cfd221447aa7194b_1204_getGraphicMidpoint,"flixel.FlxSprite","getGraphicMidpoint",0xc420be03,"flixel.FlxSprite.getGraphicMidpoint","flixel/FlxSprite.hx",1204,0x0384bffa)
HX_LOCAL_STACK_FRAME(_hx_pos_cfd221447aa7194b_1218_isOnScreen,"flixel.FlxSprite","isOnScreen",0xb5403c5e,"flixel.FlxSprite.isOnScreen","flixel/FlxSprite.hx",1218,0x0384bffa)
HX_LOCAL_STACK_FRAME(_hx_pos_cfd221447aa7194b_1230_isSimpleRender,"flixel.FlxSprite","isSimpleRender",0x6aa0d51b,"flixel.FlxSprite.isSimpleRender","flixel/FlxSprite.hx",1230,0x0384bffa)
HX_LOCAL_STACK_FRAME(_hx_pos_cfd221447aa7194b_1246_isSimpleRenderBlit,"flixel.FlxSprite","isSimpleRenderBlit",0x4bf362f0,"flixel.FlxSprite.isSimpleRenderBlit","flixel/FlxSprite.hx",1246,0x0384bffa)
HX_LOCAL_STACK_FRAME(_hx_pos_cfd221447aa7194b_1262_getRotatedBounds,"flixel.FlxSprite","getRotatedBounds",0x9196bfb1,"flixel.FlxSprite.getRotatedBounds","flixel/FlxSprite.hx",1262,0x0384bffa)
HX_LOCAL_STACK_FRAME(_hx_pos_cfd221447aa7194b_1279_getScreenBounds,"flixel.FlxSprite","getScreenBounds",0x49d4cfae,"flixel.FlxSprite.getScreenBounds","flixel/FlxSprite.hx",1279,0x0384bffa)
HX_LOCAL_STACK_FRAME(_hx_pos_cfd221447aa7194b_1310_setFacingFlip,"flixel.FlxSprite","setFacingFlip",0x6816c060,"flixel.FlxSprite.setFacingFlip","flixel/FlxSprite.hx",1310,0x0384bffa)
HX_LOCAL_STACK_FRAME(_hx_pos_cfd221447aa7194b_1322_setFrames,"flixel.FlxSprite","setFrames",0xd774ec9f,"flixel.FlxSprite.setFrames","flixel/FlxSprite.hx",1322,0x0384bffa)
HX_LOCAL_STACK_FRAME(_hx_pos_cfd221447aa7194b_1359_get_pixels,"flixel.FlxSprite","get_pixels",0x90b8575f,"flixel.FlxSprite.get_pixels","flixel/FlxSprite.hx",1359,0x0384bffa)
HX_LOCAL_STACK_FRAME(_hx_pos_cfd221447aa7194b_1364_set_pixels,"flixel.FlxSprite","set_pixels",0x9435f5d3,"flixel.FlxSprite.set_pixels","flixel/FlxSprite.hx",1364,0x0384bffa)
HX_LOCAL_STACK_FRAME(_hx_pos_cfd221447aa7194b_1383_set_frame,"flixel.FlxSprite","set_frame",0xf8c58847,"flixel.FlxSprite.set_frame","flixel/FlxSprite.hx",1383,0x0384bffa)
HX_LOCAL_STACK_FRAME(_hx_pos_cfd221447aa7194b_1419_set_facing,"flixel.FlxSprite","set_facing",0xeb9145c0,"flixel.FlxSprite.set_facing","flixel/FlxSprite.hx",1419,0x0384bffa)
HX_LOCAL_STACK_FRAME(_hx_pos_cfd221447aa7194b_1432_set_alpha,"flixel.FlxSprite","set_alpha",0x13d8b778,"flixel.FlxSprite.set_alpha","flixel/FlxSprite.hx",1432,0x0384bffa)
HX_LOCAL_STACK_FRAME(_hx_pos_cfd221447aa7194b_1444_set_color,"flixel.FlxSprite","set_color",0x3c9e817d,"flixel.FlxSprite.set_color","flixel/FlxSprite.hx",1444,0x0384bffa)
HX_LOCAL_STACK_FRAME(_hx_pos_cfd221447aa7194b_1456_set_angle,"flixel.FlxSprite","set_angle",0x152453ed,"flixel.FlxSprite.set_angle","flixel/FlxSprite.hx",1456,0x0384bffa)
HX_LOCAL_STACK_FRAME(_hx_pos_cfd221447aa7194b_1470_updateTrig,"flixel.FlxSprite","updateTrig",0x193f7fee,"flixel.FlxSprite.updateTrig","flixel/FlxSprite.hx",1470,0x0384bffa)
HX_LOCAL_STACK_FRAME(_hx_pos_cfd221447aa7194b_1482_set_blend,"flixel.FlxSprite","set_blend",0xa736f86b,"flixel.FlxSprite.set_blend","flixel/FlxSprite.hx",1482,0x0384bffa)
HX_LOCAL_STACK_FRAME(_hx_pos_cfd221447aa7194b_1491_set_graphic,"flixel.FlxSprite","set_graphic",0x07012542,"flixel.FlxSprite.set_graphic","flixel/FlxSprite.hx",1491,0x0384bffa)
HX_LOCAL_STACK_FRAME(_hx_pos_cfd221447aa7194b_1509_set_clipRect,"flixel.FlxSprite","set_clipRect",0x60020c3a,"flixel.FlxSprite.set_clipRect","flixel/FlxSprite.hx",1509,0x0384bffa)
HX_LOCAL_STACK_FRAME(_hx_pos_cfd221447aa7194b_1530_set_frames,"flixel.FlxSprite","set_frames",0xb411b64c,"flixel.FlxSprite.set_frames","flixel/FlxSprite.hx",1530,0x0384bffa)
HX_LOCAL_STACK_FRAME(_hx_pos_cfd221447aa7194b_1559_set_flipX,"flixel.FlxSprite","set_flipX",0xf4d45525,"flixel.FlxSprite.set_flipX","flixel/FlxSprite.hx",1559,0x0384bffa)
HX_LOCAL_STACK_FRAME(_hx_pos_cfd221447aa7194b_1570_set_flipY,"flixel.FlxSprite","set_flipY",0xf4d45526,"flixel.FlxSprite.set_flipY","flixel/FlxSprite.hx",1570,0x0384bffa)
HX_LOCAL_STACK_FRAME(_hx_pos_cfd221447aa7194b_1582_set_antialiasing,"flixel.FlxSprite","set_antialiasing",0xf8f29e1a,"flixel.FlxSprite.set_antialiasing","flixel/FlxSprite.hx",1582,0x0384bffa)
HX_LOCAL_STACK_FRAME(_hx_pos_cfd221447aa7194b_1588_set_useFramePixels,"flixel.FlxSprite","set_useFramePixels",0x72e62ad9,"flixel.FlxSprite.set_useFramePixels","flixel/FlxSprite.hx",1588,0x0384bffa)
HX_LOCAL_STACK_FRAME(_hx_pos_cfd221447aa7194b_1612_checkFlipX,"flixel.FlxSprite","checkFlipX",0x26093f8c,"flixel.FlxSprite.checkFlipX","flixel/FlxSprite.hx",1612,0x0384bffa)
HX_LOCAL_STACK_FRAME(_hx_pos_cfd221447aa7194b_1623_checkFlipY,"flixel.FlxSprite","checkFlipY",0x26093f8d,"flixel.FlxSprite.checkFlipY","flixel/FlxSprite.hx",1623,0x0384bffa)
HX_LOCAL_STACK_FRAME(_hx_pos_cfd221447aa7194b_136_boot,"flixel.FlxSprite","boot",0xe536d7db,"flixel.FlxSprite.boot","flixel/FlxSprite.hx",136,0x0384bffa)
namespace flixel{

void FlxSprite_obj::__construct( ::Dynamic __o_X, ::Dynamic __o_Y, ::Dynamic SimpleGraphic){
            		 ::Dynamic X = __o_X;
            		if (::hx::IsNull(__o_X)) X = 0;
            		 ::Dynamic Y = __o_Y;
            		if (::hx::IsNull(__o_Y)) Y = 0;
            	HX_GC_STACKFRAME(&_hx_pos_cfd221447aa7194b_129_new)
HXLINE( 366)		this->_facingFlip =  ::haxe::ds::IntMap_obj::__alloc( HX_CTX );
HXLINE( 360)		this->_angleChanged = true;
HXLINE( 358)		this->_cosAngle = ((Float)1);
HXLINE( 355)		this->_sinAngle = ((Float)0);
HXLINE( 306)		this->_facingVerticalMult = 1;
HXLINE( 304)		this->_facingHorizontalMult = 1;
HXLINE( 271)		this->useColorTransform = false;
HXLINE( 264)		this->color = 16777215;
HXLINE( 231)		this->flipY = false;
HXLINE( 226)		this->flipX = false;
HXLINE( 221)		this->facing = 16;
HXLINE( 214)		this->alpha = ((Float)1.0);
HXLINE( 208)		this->bakedRotationAngle = ((Float)0);
HXLINE( 194)		this->numFrames = 0;
HXLINE( 188)		this->frameHeight = 0;
HXLINE( 183)		this->frameWidth = 0;
HXLINE( 167)		this->dirty = true;
HXLINE( 161)		this->antialiasing = ::flixel::FlxSprite_obj::defaultAntialiasing;
HXLINE( 156)		this->useFramePixels = true;
HXLINE( 379)		super::__construct(X,Y,null(),null());
HXLINE( 381)		this->set_useFramePixels(::flixel::FlxG_obj::renderBlit);
HXLINE( 382)		if (::hx::IsNotNull( SimpleGraphic )) {
HXLINE( 383)			this->loadGraphic(SimpleGraphic,null(),null(),null(),null(),null());
            		}
            	}

Dynamic FlxSprite_obj::__CreateEmpty() { return new FlxSprite_obj; }

void *FlxSprite_obj::_hx_vtable = 0;

Dynamic FlxSprite_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< FlxSprite_obj > _hx_result = new FlxSprite_obj();
	_hx_result->__construct(inArgs[0],inArgs[1],inArgs[2]);
	return _hx_result;
}

bool FlxSprite_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x7ccf8994) {
		if (inClassId<=(int)0x2c01639b) {
			return inClassId==(int)0x00000001 || inClassId==(int)0x2c01639b;
		} else {
			return inClassId==(int)0x7ccf8994;
		}
	} else {
		return inClassId==(int)0x7dab0655;
	}
}

void FlxSprite_obj::initVars(){
            	HX_GC_STACKFRAME(&_hx_pos_cfd221447aa7194b_388_initVars)
HXLINE( 389)		this->super::initVars();
HXLINE( 391)		this->animation =  ::flixel::animation::FlxAnimationController_obj::__alloc( HX_CTX ,::hx::ObjectPtr<OBJ_>(this));
HXLINE( 393)		this->_flashPoint =  ::openfl::geom::Point_obj::__alloc( HX_CTX ,null(),null());
HXLINE( 394)		this->_flashRect =  ::openfl::geom::Rectangle_obj::__alloc( HX_CTX ,null(),null(),null(),null());
HXLINE( 395)		this->_flashRect2 =  ::openfl::geom::Rectangle_obj::__alloc( HX_CTX ,null(),null(),null(),null());
HXLINE( 396)		this->_flashPointZero =  ::openfl::geom::Point_obj::__alloc( HX_CTX ,null(),null());
HXLINE( 397)		 ::flixel::math::FlxBasePoint point = ::flixel::math::FlxBasePoint_obj::pool->get()->set(( (Float)(0) ),( (Float)(0) ));
HXDLIN( 397)		point->_inPool = false;
HXDLIN( 397)		this->offset = point;
HXLINE( 398)		 ::flixel::math::FlxBasePoint point1 = ::flixel::math::FlxBasePoint_obj::pool->get()->set(( (Float)(0) ),( (Float)(0) ));
HXDLIN( 398)		point1->_inPool = false;
HXDLIN( 398)		this->origin = point1;
HXLINE( 399)		 ::flixel::math::FlxBasePoint point2 = ::flixel::math::FlxBasePoint_obj::pool->get()->set(1,1);
HXDLIN( 399)		point2->_inPool = false;
HXDLIN( 399)		this->scale = point2;
HXLINE( 400)		 ::flixel::math::FlxBasePoint point3 = ::flixel::math::FlxBasePoint_obj::pool->get()->set(( (Float)(0) ),( (Float)(0) ));
HXDLIN( 400)		point3->_inPool = false;
HXDLIN( 400)		this->_halfSize = point3;
HXLINE( 401)		this->_matrix =  ::flixel::math::FlxMatrix_obj::__alloc( HX_CTX ,null(),null(),null(),null(),null(),null());
HXLINE( 402)		this->colorTransform =  ::openfl::geom::ColorTransform_obj::__alloc( HX_CTX ,null(),null(),null(),null(),null(),null(),null(),null());
HXLINE( 403)		 ::flixel::math::FlxBasePoint this1 =  ::flixel::math::FlxBasePoint_obj::__alloc( HX_CTX ,( (Float)(0) ),( (Float)(0) ));
HXDLIN( 403)		this->_scaledOrigin = this1;
            	}


void FlxSprite_obj::destroy(){
            	HX_STACKFRAME(&_hx_pos_cfd221447aa7194b_417_destroy)
HXLINE( 418)		this->super::destroy();
HXLINE( 420)		this->animation = ( ( ::flixel::animation::FlxAnimationController)(::flixel::util::FlxDestroyUtil_obj::destroy(this->animation)) );
HXLINE( 422)		this->offset = ( ( ::flixel::math::FlxBasePoint)(::flixel::util::FlxDestroyUtil_obj::put(this->offset)) );
HXLINE( 423)		this->origin = ( ( ::flixel::math::FlxBasePoint)(::flixel::util::FlxDestroyUtil_obj::put(this->origin)) );
HXLINE( 424)		this->scale = ( ( ::flixel::math::FlxBasePoint)(::flixel::util::FlxDestroyUtil_obj::put(this->scale)) );
HXLINE( 425)		this->_halfSize = ( ( ::flixel::math::FlxBasePoint)(::flixel::util::FlxDestroyUtil_obj::put(this->_halfSize)) );
HXLINE( 426)		this->_scaledOrigin = ( ( ::flixel::math::FlxBasePoint)(::flixel::util::FlxDestroyUtil_obj::put(this->_scaledOrigin)) );
HXLINE( 428)		this->framePixels = ::flixel::util::FlxDestroyUtil_obj::dispose(this->framePixels);
HXLINE( 430)		this->_flashPoint = null();
HXLINE( 431)		this->_flashRect = null();
HXLINE( 432)		this->_flashRect2 = null();
HXLINE( 433)		this->_flashPointZero = null();
HXLINE( 434)		this->_matrix = null();
HXLINE( 435)		this->colorTransform = null();
HXLINE( 436)		this->set_blend(null());
HXLINE( 438)		this->set_frames(null());
HXLINE( 439)		this->set_graphic(null());
HXLINE( 440)		this->_frame = ( ( ::flixel::graphics::frames::FlxFrame)(::flixel::util::FlxDestroyUtil_obj::destroy(this->_frame)) );
HXLINE( 441)		this->_frameGraphic = ( ( ::flixel::graphics::FlxGraphic)(::flixel::util::FlxDestroyUtil_obj::destroy(this->_frameGraphic)) );
HXLINE( 443)		this->shader = null();
            	}


 ::flixel::FlxSprite FlxSprite_obj::clone(){
            	HX_GC_STACKFRAME(&_hx_pos_cfd221447aa7194b_448_clone)
HXDLIN( 448)		return  ::flixel::FlxSprite_obj::__alloc( HX_CTX ,null(),null(),null())->loadGraphicFromSprite(::hx::ObjectPtr<OBJ_>(this));
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxSprite_obj,clone,return )

 ::flixel::FlxSprite FlxSprite_obj::loadGraphicFromSprite( ::flixel::FlxSprite Sprite){
            	HX_STACKFRAME(&_hx_pos_cfd221447aa7194b_459_loadGraphicFromSprite)
HXLINE( 460)		this->set_frames(Sprite->frames);
HXLINE( 461)		this->bakedRotationAngle = Sprite->bakedRotationAngle;
HXLINE( 462)		if ((this->bakedRotationAngle > 0)) {
HXLINE( 464)			this->set_width(Sprite->get_width());
HXLINE( 465)			this->set_height(Sprite->get_height());
HXLINE( 466)			this->centerOffsets(null());
            		}
HXLINE( 468)		this->set_antialiasing(Sprite->antialiasing);
HXLINE( 469)		this->animation->copyFrom(Sprite->animation);
HXLINE( 470)		this->graphicLoaded();
HXLINE( 471)		this->set_clipRect(Sprite->clipRect);
HXLINE( 472)		return ::hx::ObjectPtr<OBJ_>(this);
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxSprite_obj,loadGraphicFromSprite,return )

 ::flixel::FlxSprite FlxSprite_obj::loadGraphic( ::Dynamic Graphic,::hx::Null< bool >  __o_Animated,::hx::Null< int >  __o_Width,::hx::Null< int >  __o_Height,::hx::Null< bool >  __o_Unique,::String Key){
            		bool Animated = __o_Animated.Default(false);
            		int Width = __o_Width.Default(0);
            		int Height = __o_Height.Default(0);
            		bool Unique = __o_Unique.Default(false);
            	HX_STACKFRAME(&_hx_pos_cfd221447aa7194b_496_loadGraphic)
HXLINE( 497)		 ::flixel::graphics::FlxGraphic graph = ::flixel::FlxG_obj::bitmap->add(Graphic,Unique,Key);
HXLINE( 498)		if (::hx::IsNull( graph )) {
HXLINE( 499)			return ::hx::ObjectPtr<OBJ_>(this);
            		}
HXLINE( 501)		if ((Width == 0)) {
HXLINE( 503)			if (Animated) {
HXLINE( 503)				Width = graph->height;
            			}
            			else {
HXLINE( 503)				Width = graph->width;
            			}
HXLINE( 504)			if ((Width > graph->width)) {
HXLINE( 504)				Width = graph->width;
            			}
            		}
HXLINE( 507)		if ((Height == 0)) {
HXLINE( 509)			if (Animated) {
HXLINE( 509)				Height = Width;
            			}
            			else {
HXLINE( 509)				Height = graph->height;
            			}
HXLINE( 510)			if ((Height > graph->height)) {
HXLINE( 510)				Height = graph->height;
            			}
            		}
HXLINE( 513)		if (Animated) {
HXLINE( 514)			 ::flixel::math::FlxBasePoint point = ::flixel::math::FlxBasePoint_obj::pool->get()->set(Width,Height);
HXDLIN( 514)			point->_inPool = false;
HXDLIN( 514)			this->set_frames(::flixel::graphics::frames::FlxTileFrames_obj::fromGraphic(graph,point,null(),null()));
            		}
            		else {
HXLINE( 516)			this->set_frames(graph->get_imageFrame());
            		}
HXLINE( 518)		return ::hx::ObjectPtr<OBJ_>(this);
            	}


HX_DEFINE_DYNAMIC_FUNC6(FlxSprite_obj,loadGraphic,return )

 ::flixel::FlxSprite FlxSprite_obj::loadRotatedGraphic( ::Dynamic Graphic,::hx::Null< int >  __o_Rotations,::hx::Null< int >  __o_Frame,::hx::Null< bool >  __o_AntiAliasing,::hx::Null< bool >  __o_AutoBuffer,::String Key){
            		int Rotations = __o_Rotations.Default(16);
            		int Frame = __o_Frame.Default(-1);
            		bool AntiAliasing = __o_AntiAliasing.Default(false);
            		bool AutoBuffer = __o_AutoBuffer.Default(false);
            	HX_GC_STACKFRAME(&_hx_pos_cfd221447aa7194b_539_loadRotatedGraphic)
HXLINE( 540)		 ::flixel::graphics::FlxGraphic brushGraphic = ::flixel::FlxG_obj::bitmap->add(Graphic,false,Key);
HXLINE( 541)		if (::hx::IsNull( brushGraphic )) {
HXLINE( 542)			return ::hx::ObjectPtr<OBJ_>(this);
            		}
HXLINE( 544)		 ::openfl::display::BitmapData brush = brushGraphic->bitmap;
HXLINE( 545)		::String key = brushGraphic->key;
HXLINE( 547)		if ((Frame >= 0)) {
HXLINE( 550)			int brushSize = brush->height;
HXLINE( 551)			int framesNum = ::Std_obj::_hx_int((( (Float)(brush->width) ) / ( (Float)(brushSize) )));
HXLINE( 552)			bool Frame1;
HXDLIN( 552)			if ((framesNum <= Frame)) {
HXLINE( 552)				Frame1 = (framesNum == 0);
            			}
            			else {
HXLINE( 552)				Frame1 = true;
            			}
HXDLIN( 552)			if (!(Frame1)) {
HXLINE( 552)				Frame = ::hx::Mod(Frame,framesNum);
            			}
HXLINE( 553)			key = (key + (HX_(":",3a,00,00,00) + Frame));
HXLINE( 555)			 ::openfl::display::BitmapData full = brush;
HXLINE( 556)			brush =  ::openfl::display::BitmapData_obj::__alloc( HX_CTX ,brushSize,brushSize,true,0);
HXLINE( 557)			this->_flashRect->setTo(( (Float)((Frame * brushSize)) ),( (Float)(0) ),( (Float)(brushSize) ),( (Float)(brushSize) ));
HXLINE( 558)			brush->copyPixels(full,this->_flashRect,this->_flashPointZero,null(),null(),null());
            		}
HXLINE( 561)		key = (key + (((HX_(":",3a,00,00,00) + Rotations) + HX_(":",3a,00,00,00)) + ::Std_obj::string(AutoBuffer)));
HXLINE( 564)		 ::flixel::graphics::FlxGraphic tempGraph = ( ( ::flixel::graphics::FlxGraphic)(::flixel::FlxG_obj::bitmap->_cache->get(key)) );
HXLINE( 565)		if (::hx::IsNull( tempGraph )) {
HXLINE( 567)			 ::openfl::display::BitmapData bitmap = ::flixel::util::FlxBitmapDataUtil_obj::generateRotations(brush,Rotations,AntiAliasing,AutoBuffer);
HXLINE( 568)			tempGraph = ::flixel::graphics::FlxGraphic_obj::fromBitmapData(bitmap,false,key,null());
            		}
HXLINE( 571)		int max;
HXDLIN( 571)		if ((brush->height > brush->width)) {
HXLINE( 571)			max = brush->height;
            		}
            		else {
HXLINE( 571)			max = brush->width;
            		}
HXLINE( 572)		if (AutoBuffer) {
HXLINE( 572)			max = ::Std_obj::_hx_int((( (Float)(max) ) * ((Float)1.5)));
            		}
HXLINE( 574)		 ::flixel::math::FlxBasePoint point = ::flixel::math::FlxBasePoint_obj::pool->get()->set(max,max);
HXDLIN( 574)		point->_inPool = false;
HXDLIN( 574)		this->set_frames(::flixel::graphics::frames::FlxTileFrames_obj::fromGraphic(tempGraph,point,null(),null()));
HXLINE( 576)		if (AutoBuffer) {
HXLINE( 578)			this->set_width(( (Float)(brush->width) ));
HXLINE( 579)			this->set_height(( (Float)(brush->height) ));
HXLINE( 580)			this->centerOffsets(null());
            		}
HXLINE( 583)		this->bakedRotationAngle = (( (Float)(360) ) / ( (Float)(Rotations) ));
HXLINE( 584)		this->animation->createPrerotated(null());
HXLINE( 585)		return ::hx::ObjectPtr<OBJ_>(this);
            	}


HX_DEFINE_DYNAMIC_FUNC6(FlxSprite_obj,loadRotatedGraphic,return )

 ::flixel::FlxSprite FlxSprite_obj::loadRotatedFrame( ::flixel::graphics::frames::FlxFrame Frame,::hx::Null< int >  __o_Rotations,::hx::Null< bool >  __o_AntiAliasing,::hx::Null< bool >  __o_AutoBuffer){
            		int Rotations = __o_Rotations.Default(16);
            		bool AntiAliasing = __o_AntiAliasing.Default(false);
            		bool AutoBuffer = __o_AutoBuffer.Default(false);
            	HX_STACKFRAME(&_hx_pos_cfd221447aa7194b_600_loadRotatedFrame)
HXLINE( 601)		::String key = Frame->parent->key;
HXLINE( 602)		if (::hx::IsNotNull( Frame->name )) {
HXLINE( 603)			key = (key + (HX_(":",3a,00,00,00) + Frame->name));
            		}
            		else {
HXLINE( 605)			 ::flixel::math::FlxRect _this = Frame->frame;
HXDLIN( 605)			 ::Dynamic value = _this->x;
HXDLIN( 605)			 ::flixel::util::LabelValuePair _this1 = ::flixel::util::LabelValuePair_obj::_pool->get();
HXDLIN( 605)			_this1->label = HX_("x",78,00,00,00);
HXDLIN( 605)			_this1->value = value;
HXDLIN( 605)			 ::Dynamic value1 = _this->y;
HXDLIN( 605)			 ::flixel::util::LabelValuePair _this2 = ::flixel::util::LabelValuePair_obj::_pool->get();
HXDLIN( 605)			_this2->label = HX_("y",79,00,00,00);
HXDLIN( 605)			_this2->value = value1;
HXDLIN( 605)			 ::Dynamic value2 = _this->width;
HXDLIN( 605)			 ::flixel::util::LabelValuePair _this3 = ::flixel::util::LabelValuePair_obj::_pool->get();
HXDLIN( 605)			_this3->label = HX_("w",77,00,00,00);
HXDLIN( 605)			_this3->value = value2;
HXDLIN( 605)			 ::Dynamic value3 = _this->height;
HXDLIN( 605)			 ::flixel::util::LabelValuePair _this4 = ::flixel::util::LabelValuePair_obj::_pool->get();
HXDLIN( 605)			_this4->label = HX_("h",68,00,00,00);
HXDLIN( 605)			_this4->value = value3;
HXDLIN( 605)			key = (key + (HX_(":",3a,00,00,00) + ::flixel::util::FlxStringUtil_obj::getDebugString(::Array_obj< ::Dynamic>::__new(4)->init(0,_this1)->init(1,_this2)->init(2,_this3)->init(3,_this4))));
            		}
HXLINE( 607)		 ::flixel::graphics::FlxGraphic graphic = ( ( ::flixel::graphics::FlxGraphic)(::flixel::FlxG_obj::bitmap->_cache->get(key)) );
HXLINE( 608)		if (::hx::IsNull( graphic )) {
HXLINE( 609)			graphic = ::flixel::graphics::FlxGraphic_obj::fromBitmapData(Frame->paint(null(),null(),null(),null()),false,key,null());
            		}
HXLINE( 611)		return this->loadRotatedGraphic(graphic,Rotations,-1,AntiAliasing,AutoBuffer,null());
            	}


HX_DEFINE_DYNAMIC_FUNC4(FlxSprite_obj,loadRotatedFrame,return )

 ::flixel::FlxSprite FlxSprite_obj::makeGraphic(int Width,int Height,::hx::Null< int >  __o_Color,::hx::Null< bool >  __o_Unique,::String Key){
            		int Color = __o_Color.Default(-1);
            		bool Unique = __o_Unique.Default(false);
            	HX_STACKFRAME(&_hx_pos_cfd221447aa7194b_635_makeGraphic)
HXLINE( 636)		 ::flixel::graphics::FlxGraphic graph = ::flixel::FlxG_obj::bitmap->create(Width,Height,Color,Unique,Key);
HXLINE( 637)		this->set_frames(graph->get_imageFrame());
HXLINE( 638)		return ::hx::ObjectPtr<OBJ_>(this);
            	}


HX_DEFINE_DYNAMIC_FUNC5(FlxSprite_obj,makeGraphic,return )

void FlxSprite_obj::graphicLoaded(){
            	HX_STACKFRAME(&_hx_pos_cfd221447aa7194b_644_graphicLoaded)
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxSprite_obj,graphicLoaded,(void))

void FlxSprite_obj::resetSize(){
            	HX_STACKFRAME(&_hx_pos_cfd221447aa7194b_650_resetSize)
HXLINE( 651)		this->_flashRect->x = ( (Float)(0) );
HXLINE( 652)		this->_flashRect->y = ( (Float)(0) );
HXLINE( 653)		this->_flashRect->width = ( (Float)(this->frameWidth) );
HXLINE( 654)		this->_flashRect->height = ( (Float)(this->frameHeight) );
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxSprite_obj,resetSize,(void))

void FlxSprite_obj::resetFrameSize(){
            	HX_STACKFRAME(&_hx_pos_cfd221447aa7194b_661_resetFrameSize)
HXLINE( 662)		if (::hx::IsNotNull( this->frame )) {
HXLINE( 664)			this->frameWidth = ::Std_obj::_hx_int(this->frame->sourceSize->x);
HXLINE( 665)			this->frameHeight = ::Std_obj::_hx_int(this->frame->sourceSize->y);
            		}
HXLINE( 667)		{
HXLINE( 667)			 ::flixel::math::FlxBasePoint this1 = this->_halfSize;
HXDLIN( 667)			Float y = (((Float)0.5) * ( (Float)(this->frameHeight) ));
HXDLIN( 667)			this1->set_x((((Float)0.5) * ( (Float)(this->frameWidth) )));
HXDLIN( 667)			this1->set_y(y);
            		}
HXLINE( 668)		{
HXLINE( 668)			this->_flashRect->x = ( (Float)(0) );
HXDLIN( 668)			this->_flashRect->y = ( (Float)(0) );
HXDLIN( 668)			this->_flashRect->width = ( (Float)(this->frameWidth) );
HXDLIN( 668)			this->_flashRect->height = ( (Float)(this->frameHeight) );
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxSprite_obj,resetFrameSize,(void))

void FlxSprite_obj::resetSizeFromFrame(){
            	HX_STACKFRAME(&_hx_pos_cfd221447aa7194b_675_resetSizeFromFrame)
HXLINE( 676)		this->set_width(( (Float)(this->frameWidth) ));
HXLINE( 677)		this->set_height(( (Float)(this->frameHeight) ));
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxSprite_obj,resetSizeFromFrame,(void))

void FlxSprite_obj::resetFrame(){
            	HX_STACKFRAME(&_hx_pos_cfd221447aa7194b_688_resetFrame)
HXDLIN( 688)		this->set_frame(this->frame);
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxSprite_obj,resetFrame,(void))

void FlxSprite_obj::setGraphicSize(::hx::Null< int >  __o_Width,::hx::Null< int >  __o_Height){
            		int Width = __o_Width.Default(0);
            		int Height = __o_Height.Default(0);
            	HX_STACKFRAME(&_hx_pos_cfd221447aa7194b_699_setGraphicSize)
HXLINE( 700)		bool _hx_tmp;
HXDLIN( 700)		if ((Width <= 0)) {
HXLINE( 700)			_hx_tmp = (Height <= 0);
            		}
            		else {
HXLINE( 700)			_hx_tmp = false;
            		}
HXDLIN( 700)		if (_hx_tmp) {
HXLINE( 701)			return;
            		}
HXLINE( 703)		Float newScaleX = (( (Float)(Width) ) / ( (Float)(this->frameWidth) ));
HXLINE( 704)		Float newScaleY = (( (Float)(Height) ) / ( (Float)(this->frameHeight) ));
HXLINE( 705)		{
HXLINE( 705)			 ::flixel::math::FlxBasePoint this1 = this->scale;
HXDLIN( 705)			this1->set_x(newScaleX);
HXDLIN( 705)			this1->set_y(newScaleY);
            		}
HXLINE( 707)		if ((Width <= 0)) {
HXLINE( 708)			this->scale->set_x(newScaleY);
            		}
            		else {
HXLINE( 709)			if ((Height <= 0)) {
HXLINE( 710)				this->scale->set_y(newScaleX);
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC2(FlxSprite_obj,setGraphicSize,(void))

void FlxSprite_obj::updateHitbox(){
            	HX_STACKFRAME(&_hx_pos_cfd221447aa7194b_718_updateHitbox)
HXLINE( 719)		this->set_width((::Math_obj::abs(this->scale->x) * ( (Float)(this->frameWidth) )));
HXLINE( 720)		this->set_height((::Math_obj::abs(this->scale->y) * ( (Float)(this->frameHeight) )));
HXLINE( 721)		{
HXLINE( 721)			 ::flixel::math::FlxBasePoint this1 = this->offset;
HXDLIN( 721)			Float x = this->get_width();
HXDLIN( 721)			Float x1 = (((Float)-0.5) * (x - ( (Float)(this->frameWidth) )));
HXDLIN( 721)			Float y = this->get_height();
HXDLIN( 721)			Float y1 = (((Float)-0.5) * (y - ( (Float)(this->frameHeight) )));
HXDLIN( 721)			this1->set_x(x1);
HXDLIN( 721)			this1->set_y(y1);
            		}
HXLINE( 722)		{
HXLINE( 722)			 ::flixel::math::FlxBasePoint this2 = this->origin;
HXDLIN( 722)			Float y2 = (( (Float)(this->frameHeight) ) * ((Float)0.5));
HXDLIN( 722)			this2->set_x((( (Float)(this->frameWidth) ) * ((Float)0.5)));
HXDLIN( 722)			this2->set_y(y2);
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxSprite_obj,updateHitbox,(void))

void FlxSprite_obj::resetHelpers(){
            	HX_STACKFRAME(&_hx_pos_cfd221447aa7194b_730_resetHelpers)
HXLINE( 731)		{
HXLINE( 731)			if (::hx::IsNotNull( this->frame )) {
HXLINE( 731)				this->frameWidth = ::Std_obj::_hx_int(this->frame->sourceSize->x);
HXDLIN( 731)				this->frameHeight = ::Std_obj::_hx_int(this->frame->sourceSize->y);
            			}
HXDLIN( 731)			{
HXLINE( 731)				 ::flixel::math::FlxBasePoint this1 = this->_halfSize;
HXDLIN( 731)				Float y = (((Float)0.5) * ( (Float)(this->frameHeight) ));
HXDLIN( 731)				this1->set_x((((Float)0.5) * ( (Float)(this->frameWidth) )));
HXDLIN( 731)				this1->set_y(y);
            			}
HXDLIN( 731)			{
HXLINE( 731)				this->_flashRect->x = ( (Float)(0) );
HXDLIN( 731)				this->_flashRect->y = ( (Float)(0) );
HXDLIN( 731)				this->_flashRect->width = ( (Float)(this->frameWidth) );
HXDLIN( 731)				this->_flashRect->height = ( (Float)(this->frameHeight) );
            			}
            		}
HXLINE( 732)		{
HXLINE( 732)			this->set_width(( (Float)(this->frameWidth) ));
HXDLIN( 732)			this->set_height(( (Float)(this->frameHeight) ));
            		}
HXLINE( 733)		this->_flashRect2->x = ( (Float)(0) );
HXLINE( 734)		this->_flashRect2->y = ( (Float)(0) );
HXLINE( 736)		if (::hx::IsNotNull( this->graphic )) {
HXLINE( 738)			this->_flashRect2->width = ( (Float)(this->graphic->width) );
HXLINE( 739)			this->_flashRect2->height = ( (Float)(this->graphic->height) );
            		}
HXLINE( 742)		{
HXLINE( 742)			 ::flixel::math::FlxBasePoint this2 = this->origin;
HXDLIN( 742)			Float y1 = (( (Float)(this->frameHeight) ) * ((Float)0.5));
HXDLIN( 742)			this2->set_x((( (Float)(this->frameWidth) ) * ((Float)0.5)));
HXDLIN( 742)			this2->set_y(y1);
            		}
HXLINE( 744)		if (::flixel::FlxG_obj::renderBlit) {
HXLINE( 746)			this->dirty = true;
HXLINE( 747)			this->updateFramePixels();
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxSprite_obj,resetHelpers,(void))

void FlxSprite_obj::update(Float elapsed){
            	HX_STACKFRAME(&_hx_pos_cfd221447aa7194b_752_update)
HXLINE( 753)		this->super::update(elapsed);
HXLINE( 754)		this->updateAnimation(elapsed);
            	}


void FlxSprite_obj::updateAnimation(Float elapsed){
            	HX_STACKFRAME(&_hx_pos_cfd221447aa7194b_762_updateAnimation)
HXDLIN( 762)		this->animation->update(elapsed);
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxSprite_obj,updateAnimation,(void))

void FlxSprite_obj::checkEmptyFrame(){
            	HX_STACKFRAME(&_hx_pos_cfd221447aa7194b_768_checkEmptyFrame)
HXDLIN( 768)		if (::hx::IsNull( this->_frame )) {
HXLINE( 769)			this->loadGraphic(HX_("flixel/images/logo/default.png",1c,39,3e,0e),null(),null(),null(),null(),null());
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxSprite_obj,checkEmptyFrame,(void))

void FlxSprite_obj::draw(){
            	HX_STACKFRAME(&_hx_pos_cfd221447aa7194b_776_draw)
HXLINE( 777)		this->checkEmptyFrame();
HXLINE( 779)		bool _hx_tmp;
HXDLIN( 779)		if ((this->alpha != 0)) {
HXLINE( 779)			_hx_tmp = (this->_frame->type == 2);
            		}
            		else {
HXLINE( 779)			_hx_tmp = true;
            		}
HXDLIN( 779)		if (_hx_tmp) {
HXLINE( 780)			return;
            		}
HXLINE( 782)		if (this->dirty) {
HXLINE( 783)			this->calcFrame(this->useFramePixels);
            		}
HXLINE( 785)		{
HXLINE( 785)			int _g = 0;
HXDLIN( 785)			::Array< ::Dynamic> _g1 = this->get_cameras();
HXDLIN( 785)			while((_g < _g1->length)){
HXLINE( 785)				 ::flixel::FlxCamera camera = _g1->__get(_g).StaticCast<  ::flixel::FlxCamera >();
HXDLIN( 785)				_g = (_g + 1);
HXLINE( 787)				bool _hx_tmp;
HXDLIN( 787)				bool _hx_tmp1;
HXDLIN( 787)				if (camera->visible) {
HXLINE( 787)					_hx_tmp1 = !(camera->exists);
            				}
            				else {
HXLINE( 787)					_hx_tmp1 = true;
            				}
HXDLIN( 787)				if (!(_hx_tmp1)) {
HXLINE( 787)					_hx_tmp = !(this->isOnScreen(camera));
            				}
            				else {
HXLINE( 787)					_hx_tmp = true;
            				}
HXDLIN( 787)				if (_hx_tmp) {
HXLINE( 788)					continue;
            				}
HXLINE( 790)				if (this->isSimpleRender(camera)) {
HXLINE( 791)					this->drawSimple(camera);
            				}
            				else {
HXLINE( 793)					this->drawComplex(camera);
            				}
            			}
            		}
            	}


void FlxSprite_obj::drawSimple( ::flixel::FlxCamera camera){
            	HX_GC_STACKFRAME(&_hx_pos_cfd221447aa7194b_808_drawSimple)
HXLINE( 809)		{
HXLINE( 809)			 ::flixel::math::FlxBasePoint this1 = this->getScreenPosition(this->_point,camera);
HXDLIN( 809)			 ::flixel::math::FlxBasePoint point = this->offset;
HXDLIN( 809)			{
HXLINE( 809)				Float y = point->y;
HXDLIN( 809)				this1->set_x((this1->x - point->x));
HXDLIN( 809)				this1->set_y((this1->y - y));
            			}
HXDLIN( 809)			if (point->_weak) {
HXLINE( 809)				point->put();
            			}
            		}
HXLINE( 810)		if (this->isPixelPerfectRender(camera)) {
HXLINE( 811)			 ::flixel::math::FlxBasePoint this1 = this->_point;
HXDLIN( 811)			this1->set_x(( (Float)(::Math_obj::floor(this1->x)) ));
HXDLIN( 811)			this1->set_y(( (Float)(::Math_obj::floor(this1->y)) ));
            		}
HXLINE( 813)		{
HXLINE( 813)			 ::flixel::math::FlxBasePoint this2 = this->_point;
HXDLIN( 813)			 ::openfl::geom::Point p = this->_flashPoint;
HXDLIN( 813)			if (::hx::IsNull( p )) {
HXLINE( 813)				p =  ::openfl::geom::Point_obj::__alloc( HX_CTX ,null(),null());
            			}
HXDLIN( 813)			p->x = this2->x;
HXDLIN( 813)			p->y = this2->y;
            		}
HXLINE( 814)		camera->copyPixels(this->_frame,this->framePixels,this->_flashRect,this->_flashPoint,this->colorTransform,this->blend,this->antialiasing,null());
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxSprite_obj,drawSimple,(void))

void FlxSprite_obj::drawComplex( ::flixel::FlxCamera camera){
            	HX_STACKFRAME(&_hx_pos_cfd221447aa7194b_819_drawComplex)
HXLINE( 820)		bool doFlipX = (this->flipX != this->_frame->flipX);
HXDLIN( 820)		bool _hx_tmp;
HXDLIN( 820)		if (::hx::IsNotNull( this->animation->_curAnim )) {
HXLINE( 820)			_hx_tmp = (doFlipX != this->animation->_curAnim->flipX);
            		}
            		else {
HXLINE( 820)			_hx_tmp = doFlipX;
            		}
HXDLIN( 820)		bool doFlipY = (this->flipY != this->_frame->flipY);
HXDLIN( 820)		bool _hx_tmp1;
HXDLIN( 820)		if (::hx::IsNotNull( this->animation->_curAnim )) {
HXLINE( 820)			_hx_tmp1 = (doFlipY != this->animation->_curAnim->flipY);
            		}
            		else {
HXLINE( 820)			_hx_tmp1 = doFlipY;
            		}
HXDLIN( 820)		this->_frame->prepareMatrix(this->_matrix,0,_hx_tmp,_hx_tmp1);
HXLINE( 821)		this->_matrix->translate(-(this->origin->x),-(this->origin->y));
HXLINE( 822)		this->_matrix->scale(this->scale->x,this->scale->y);
HXLINE( 824)		if ((this->bakedRotationAngle <= 0)) {
HXLINE( 826)			if (this->_angleChanged) {
HXLINE( 826)				Float radians = (this->angle * (::Math_obj::PI / ( (Float)(180) )));
HXDLIN( 826)				this->_sinAngle = ::Math_obj::sin(radians);
HXDLIN( 826)				this->_cosAngle = ::Math_obj::cos(radians);
HXDLIN( 826)				this->_angleChanged = false;
            			}
HXLINE( 828)			if ((this->angle != 0)) {
HXLINE( 829)				 ::flixel::math::FlxMatrix _this = this->_matrix;
HXDLIN( 829)				Float cos = this->_cosAngle;
HXDLIN( 829)				Float sin = this->_sinAngle;
HXDLIN( 829)				Float a1 = ((_this->a * cos) - (_this->b * sin));
HXDLIN( 829)				_this->b = ((_this->a * sin) + (_this->b * cos));
HXDLIN( 829)				_this->a = a1;
HXDLIN( 829)				Float c1 = ((_this->c * cos) - (_this->d * sin));
HXDLIN( 829)				_this->d = ((_this->c * sin) + (_this->d * cos));
HXDLIN( 829)				_this->c = c1;
HXDLIN( 829)				Float tx1 = ((_this->tx * cos) - (_this->ty * sin));
HXDLIN( 829)				_this->ty = ((_this->tx * sin) + (_this->ty * cos));
HXDLIN( 829)				_this->tx = tx1;
            			}
            		}
HXLINE( 832)		{
HXLINE( 832)			 ::flixel::math::FlxBasePoint this1 = this->getScreenPosition(this->_point,camera);
HXDLIN( 832)			 ::flixel::math::FlxBasePoint point = this->offset;
HXDLIN( 832)			{
HXLINE( 832)				Float y = point->y;
HXDLIN( 832)				this1->set_x((this1->x - point->x));
HXDLIN( 832)				this1->set_y((this1->y - y));
            			}
HXDLIN( 832)			if (point->_weak) {
HXLINE( 832)				point->put();
            			}
            		}
HXLINE( 833)		{
HXLINE( 833)			 ::flixel::math::FlxBasePoint this2 = this->_point;
HXDLIN( 833)			Float y1 = this->origin->y;
HXDLIN( 833)			this2->set_x((this2->x + this->origin->x));
HXDLIN( 833)			this2->set_y((this2->y + y1));
            		}
HXLINE( 834)		this->_matrix->translate(this->_point->x,this->_point->y);
HXLINE( 836)		if (this->isPixelPerfectRender(camera)) {
HXLINE( 838)			this->_matrix->tx = ( (Float)(::Math_obj::floor(this->_matrix->tx)) );
HXLINE( 839)			this->_matrix->ty = ( (Float)(::Math_obj::floor(this->_matrix->ty)) );
            		}
HXLINE( 842)		camera->drawPixels(this->_frame,this->framePixels,this->_matrix,this->colorTransform,this->blend,this->antialiasing,this->shader);
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxSprite_obj,drawComplex,(void))

void FlxSprite_obj::stamp( ::flixel::FlxSprite Brush,::hx::Null< int >  __o_X,::hx::Null< int >  __o_Y){
            		int X = __o_X.Default(0);
            		int Y = __o_Y.Default(0);
            	HX_STACKFRAME(&_hx_pos_cfd221447aa7194b_854_stamp)
HXLINE( 855)		Brush->drawFrame(null());
HXLINE( 857)		bool _hx_tmp;
HXDLIN( 857)		if (::hx::IsNotNull( this->graphic )) {
HXLINE( 857)			_hx_tmp = ::hx::IsNull( Brush->graphic );
            		}
            		else {
HXLINE( 857)			_hx_tmp = true;
            		}
HXDLIN( 857)		if (_hx_tmp) {
HXLINE( 858)			HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("Cannot stamp to or from a FlxSprite with no graphics.",72,0b,d4,aa)));
            		}
HXLINE( 860)		 ::openfl::display::BitmapData bitmapData = Brush->framePixels;
HXLINE( 862)		if (this->isSimpleRenderBlit(null())) {
HXLINE( 864)			this->_flashPoint->x = (X + this->frame->frame->x);
HXLINE( 865)			this->_flashPoint->y = (Y + this->frame->frame->y);
HXLINE( 866)			this->_flashRect2->width = ( (Float)(bitmapData->width) );
HXLINE( 867)			this->_flashRect2->height = ( (Float)(bitmapData->height) );
HXLINE( 868)			this->graphic->bitmap->copyPixels(bitmapData,this->_flashRect2,this->_flashPoint,null(),null(),true);
HXLINE( 869)			this->_flashRect2->width = ( (Float)(this->graphic->bitmap->width) );
HXLINE( 870)			this->_flashRect2->height = ( (Float)(this->graphic->bitmap->height) );
            		}
            		else {
HXLINE( 874)			this->_matrix->identity();
HXLINE( 875)			this->_matrix->translate(-(Brush->origin->x),-(Brush->origin->y));
HXLINE( 876)			this->_matrix->scale(Brush->scale->x,Brush->scale->y);
HXLINE( 877)			if ((Brush->angle != 0)) {
HXLINE( 879)				this->_matrix->rotate((Brush->angle * (::Math_obj::PI / ( (Float)(180) ))));
            			}
HXLINE( 881)			this->_matrix->translate(((X + this->frame->frame->x) + Brush->origin->x),((Y + this->frame->frame->y) + Brush->origin->y));
HXLINE( 882)			 ::Dynamic brushBlend = Brush->blend;
HXLINE( 883)			this->graphic->bitmap->draw(bitmapData,this->_matrix,null(),brushBlend,null(),Brush->antialiasing);
            		}
HXLINE( 886)		if (::flixel::FlxG_obj::renderBlit) {
HXLINE( 888)			this->dirty = true;
HXLINE( 889)			this->calcFrame(null());
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC3(FlxSprite_obj,stamp,(void))

void FlxSprite_obj::drawFrame(::hx::Null< bool >  __o_Force){
            		bool Force = __o_Force.Default(false);
            	HX_STACKFRAME(&_hx_pos_cfd221447aa7194b_901_drawFrame)
HXDLIN( 901)		if (::flixel::FlxG_obj::renderBlit) {
HXLINE( 903)			bool _hx_tmp;
HXDLIN( 903)			if (!(Force)) {
HXLINE( 903)				_hx_tmp = this->dirty;
            			}
            			else {
HXLINE( 903)				_hx_tmp = true;
            			}
HXDLIN( 903)			if (_hx_tmp) {
HXLINE( 905)				this->dirty = true;
HXLINE( 906)				this->calcFrame(null());
            			}
            		}
            		else {
HXLINE( 911)			this->dirty = true;
HXLINE( 912)			this->calcFrame(true);
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxSprite_obj,drawFrame,(void))

void FlxSprite_obj::centerOffsets(::hx::Null< bool >  __o_AdjustPosition){
            		bool AdjustPosition = __o_AdjustPosition.Default(false);
            	HX_STACKFRAME(&_hx_pos_cfd221447aa7194b_922_centerOffsets)
HXLINE( 923)		{
HXLINE( 923)			 ::flixel::math::FlxBasePoint this1 = this->offset;
HXDLIN( 923)			int x = this->frameWidth;
HXDLIN( 923)			this1->set_x(((( (Float)(x) ) - this->get_width()) * ((Float)0.5)));
            		}
HXLINE( 924)		{
HXLINE( 924)			 ::flixel::math::FlxBasePoint this2 = this->offset;
HXDLIN( 924)			int y = this->frameHeight;
HXDLIN( 924)			this2->set_y(((( (Float)(y) ) - this->get_height()) * ((Float)0.5)));
            		}
HXLINE( 925)		if (AdjustPosition) {
HXLINE( 927)			this->set_x((this->x + this->offset->x));
HXLINE( 928)			this->set_y((this->y + this->offset->y));
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxSprite_obj,centerOffsets,(void))

void FlxSprite_obj::centerOrigin(){
            	HX_STACKFRAME(&_hx_pos_cfd221447aa7194b_938_centerOrigin)
HXDLIN( 938)		 ::flixel::math::FlxBasePoint this1 = this->origin;
HXDLIN( 938)		Float y = (( (Float)(this->frameHeight) ) * ((Float)0.5));
HXDLIN( 938)		this1->set_x((( (Float)(this->frameWidth) ) * ((Float)0.5)));
HXDLIN( 938)		this1->set_y(y);
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxSprite_obj,centerOrigin,(void))

::Array< ::Dynamic> FlxSprite_obj::replaceColor(int Color,int NewColor,::hx::Null< bool >  __o_FetchPositions){
            		bool FetchPositions = __o_FetchPositions.Default(false);
            	HX_STACKFRAME(&_hx_pos_cfd221447aa7194b_951_replaceColor)
HXLINE( 952)		::Array< ::Dynamic> positions = ::flixel::util::FlxBitmapDataUtil_obj::replaceColor(this->graphic->bitmap,Color,NewColor,FetchPositions,null());
HXLINE( 953)		if (::hx::IsNotNull( positions )) {
HXLINE( 954)			this->dirty = true;
            		}
HXLINE( 955)		return positions;
            	}


HX_DEFINE_DYNAMIC_FUNC3(FlxSprite_obj,replaceColor,return )

void FlxSprite_obj::setColorTransform(::hx::Null< Float >  __o_redMultiplier,::hx::Null< Float >  __o_greenMultiplier,::hx::Null< Float >  __o_blueMultiplier,::hx::Null< Float >  __o_alphaMultiplier,::hx::Null< int >  __o_redOffset,::hx::Null< int >  __o_greenOffset,::hx::Null< int >  __o_blueOffset,::hx::Null< int >  __o_alphaOffset){
            		Float redMultiplier = __o_redMultiplier.Default(((Float)1.0));
            		Float greenMultiplier = __o_greenMultiplier.Default(((Float)1.0));
            		Float blueMultiplier = __o_blueMultiplier.Default(((Float)1.0));
            		Float alphaMultiplier = __o_alphaMultiplier.Default(((Float)1.0));
            		int redOffset = __o_redOffset.Default(0);
            		int greenOffset = __o_greenOffset.Default(0);
            		int blueOffset = __o_blueOffset.Default(0);
            		int alphaOffset = __o_alphaOffset.Default(0);
            	HX_STACKFRAME(&_hx_pos_cfd221447aa7194b_973_setColorTransform)
HXLINE( 974)		Float Alpha = ( (Float)(1) );
HXDLIN( 974)		int color = ::flixel::util::_FlxColor::FlxColor_Impl__obj::_new(null());
HXDLIN( 974)		{
HXLINE( 974)			int Value = ::Math_obj::round((redMultiplier * ( (Float)(255) )));
HXDLIN( 974)			color = (color & -16711681);
HXDLIN( 974)			int color1;
HXDLIN( 974)			if ((Value > 255)) {
HXLINE( 974)				color1 = 255;
            			}
            			else {
HXLINE( 974)				if ((Value < 0)) {
HXLINE( 974)					color1 = 0;
            				}
            				else {
HXLINE( 974)					color1 = Value;
            				}
            			}
HXDLIN( 974)			color = (color | (color1 << 16));
            		}
HXDLIN( 974)		{
HXLINE( 974)			int Value1 = ::Math_obj::round((greenMultiplier * ( (Float)(255) )));
HXDLIN( 974)			color = (color & -65281);
HXDLIN( 974)			int color2;
HXDLIN( 974)			if ((Value1 > 255)) {
HXLINE( 974)				color2 = 255;
            			}
            			else {
HXLINE( 974)				if ((Value1 < 0)) {
HXLINE( 974)					color2 = 0;
            				}
            				else {
HXLINE( 974)					color2 = Value1;
            				}
            			}
HXDLIN( 974)			color = (color | (color2 << 8));
            		}
HXDLIN( 974)		{
HXLINE( 974)			int Value2 = ::Math_obj::round((blueMultiplier * ( (Float)(255) )));
HXDLIN( 974)			color = (color & -256);
HXDLIN( 974)			int color3;
HXDLIN( 974)			if ((Value2 > 255)) {
HXLINE( 974)				color3 = 255;
            			}
            			else {
HXLINE( 974)				if ((Value2 < 0)) {
HXLINE( 974)					color3 = 0;
            				}
            				else {
HXLINE( 974)					color3 = Value2;
            				}
            			}
HXDLIN( 974)			color = (color | color3);
            		}
HXDLIN( 974)		{
HXLINE( 974)			int Value3 = ::Math_obj::round((Alpha * ( (Float)(255) )));
HXDLIN( 974)			color = (color & 16777215);
HXDLIN( 974)			int color4;
HXDLIN( 974)			if ((Value3 > 255)) {
HXLINE( 974)				color4 = 255;
            			}
            			else {
HXLINE( 974)				if ((Value3 < 0)) {
HXLINE( 974)					color4 = 0;
            				}
            				else {
HXLINE( 974)					color4 = Value3;
            				}
            			}
HXDLIN( 974)			color = (color | (color4 << 24));
            		}
HXDLIN( 974)		this->set_color((color & 16777215));
HXLINE( 975)		this->set_alpha(alphaMultiplier);
HXLINE( 977)		::flixel::util::FlxColorTransformUtil_obj::setMultipliers(this->colorTransform,redMultiplier,greenMultiplier,blueMultiplier,alphaMultiplier);
HXLINE( 978)		::flixel::util::FlxColorTransformUtil_obj::setOffsets(this->colorTransform,redOffset,greenOffset,blueOffset,alphaOffset);
HXLINE( 980)		bool _hx_tmp;
HXDLIN( 980)		bool _hx_tmp1;
HXDLIN( 980)		if ((this->alpha == 1)) {
HXLINE( 980)			_hx_tmp1 = (this->color != 16777215);
            		}
            		else {
HXLINE( 980)			_hx_tmp1 = true;
            		}
HXDLIN( 980)		if (!(_hx_tmp1)) {
HXLINE( 980)			_hx_tmp = ::flixel::util::FlxColorTransformUtil_obj::hasRGBOffsets(this->colorTransform);
            		}
            		else {
HXLINE( 980)			_hx_tmp = true;
            		}
HXDLIN( 980)		this->useColorTransform = _hx_tmp;
HXLINE( 981)		this->dirty = true;
            	}


HX_DEFINE_DYNAMIC_FUNC8(FlxSprite_obj,setColorTransform,(void))

void FlxSprite_obj::updateColorTransform(){
            	HX_GC_STACKFRAME(&_hx_pos_cfd221447aa7194b_985_updateColorTransform)
HXLINE( 986)		if (::hx::IsNull( this->colorTransform )) {
HXLINE( 987)			this->colorTransform =  ::openfl::geom::ColorTransform_obj::__alloc( HX_CTX ,null(),null(),null(),null(),null(),null(),null(),null());
            		}
HXLINE( 989)		bool _hx_tmp;
HXDLIN( 989)		if ((this->alpha == 1)) {
HXLINE( 989)			_hx_tmp = (this->color != 16777215);
            		}
            		else {
HXLINE( 989)			_hx_tmp = true;
            		}
HXDLIN( 989)		this->useColorTransform = _hx_tmp;
HXLINE( 990)		if (this->useColorTransform) {
HXLINE( 991)			::flixel::util::FlxColorTransformUtil_obj::setMultipliers(this->colorTransform,(( (Float)(((this->color >> 16) & 255)) ) / ( (Float)(255) )),(( (Float)(((this->color >> 8) & 255)) ) / ( (Float)(255) )),(( (Float)((this->color & 255)) ) / ( (Float)(255) )),this->alpha);
            		}
            		else {
HXLINE( 993)			::flixel::util::FlxColorTransformUtil_obj::setMultipliers(this->colorTransform,( (Float)(1) ),( (Float)(1) ),( (Float)(1) ),( (Float)(1) ));
            		}
HXLINE( 995)		this->dirty = true;
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxSprite_obj,updateColorTransform,(void))

bool FlxSprite_obj::pixelsOverlapPoint( ::flixel::math::FlxBasePoint worldPoint,::hx::Null< int >  __o_mask, ::flixel::FlxCamera camera){
            		int mask = __o_mask.Default(255);
            	HX_STACKFRAME(&_hx_pos_cfd221447aa7194b_1009_pixelsOverlapPoint)
HXLINE(1010)		 ::Dynamic pixelColor = this->getPixelAt(worldPoint,null());
HXLINE(1012)		if (::hx::IsNotNull( pixelColor )) {
HXLINE(1013)			return ((( (Float)(((( (int)(pixelColor) ) >> 24) & 255)) ) * this->alpha) >= mask);
            		}
HXLINE(1016)		return false;
            	}


HX_DEFINE_DYNAMIC_FUNC3(FlxSprite_obj,pixelsOverlapPoint,return )

 ::Dynamic FlxSprite_obj::getPixelAt( ::flixel::math::FlxBasePoint worldPoint, ::flixel::FlxCamera camera){
            	HX_STACKFRAME(&_hx_pos_cfd221447aa7194b_1029_getPixelAt)
HXLINE(1030)		this->transformWorldToPixels(worldPoint,camera,this->_point);
HXLINE(1033)		bool _hx_tmp;
HXDLIN(1033)		bool _hx_tmp1;
HXDLIN(1033)		bool _hx_tmp2;
HXDLIN(1033)		if ((this->_point->x >= 0)) {
HXLINE(1033)			_hx_tmp2 = (this->_point->x <= this->frameWidth);
            		}
            		else {
HXLINE(1033)			_hx_tmp2 = false;
            		}
HXDLIN(1033)		if (_hx_tmp2) {
HXLINE(1033)			_hx_tmp1 = (this->_point->y >= 0);
            		}
            		else {
HXLINE(1033)			_hx_tmp1 = false;
            		}
HXDLIN(1033)		if (_hx_tmp1) {
HXLINE(1033)			_hx_tmp = (this->_point->y <= this->frameHeight);
            		}
            		else {
HXLINE(1033)			_hx_tmp = false;
            		}
HXDLIN(1033)		if (_hx_tmp) {
HXLINE(1035)			 ::openfl::display::BitmapData frameData = this->updateFramePixels();
HXLINE(1036)			int _hx_tmp = ::Std_obj::_hx_int(this->_point->x);
HXDLIN(1036)			return frameData->getPixel32(_hx_tmp,::Std_obj::_hx_int(this->_point->y));
            		}
HXLINE(1039)		return null();
            	}


HX_DEFINE_DYNAMIC_FUNC2(FlxSprite_obj,getPixelAt,return )

 ::Dynamic FlxSprite_obj::getPixelAtScreen( ::flixel::math::FlxBasePoint screenPoint, ::flixel::FlxCamera camera){
            	HX_STACKFRAME(&_hx_pos_cfd221447aa7194b_1052_getPixelAtScreen)
HXLINE(1053)		this->transformScreenToPixels(screenPoint,camera,this->_point);
HXLINE(1056)		bool _hx_tmp;
HXDLIN(1056)		bool _hx_tmp1;
HXDLIN(1056)		bool _hx_tmp2;
HXDLIN(1056)		if ((this->_point->x >= 0)) {
HXLINE(1056)			_hx_tmp2 = (this->_point->x <= this->frameWidth);
            		}
            		else {
HXLINE(1056)			_hx_tmp2 = false;
            		}
HXDLIN(1056)		if (_hx_tmp2) {
HXLINE(1056)			_hx_tmp1 = (this->_point->y >= 0);
            		}
            		else {
HXLINE(1056)			_hx_tmp1 = false;
            		}
HXDLIN(1056)		if (_hx_tmp1) {
HXLINE(1056)			_hx_tmp = (this->_point->y <= this->frameHeight);
            		}
            		else {
HXLINE(1056)			_hx_tmp = false;
            		}
HXDLIN(1056)		if (_hx_tmp) {
HXLINE(1058)			 ::openfl::display::BitmapData frameData = this->updateFramePixels();
HXLINE(1059)			int _hx_tmp = ::Std_obj::_hx_int(this->_point->x);
HXDLIN(1059)			return frameData->getPixel32(_hx_tmp,::Std_obj::_hx_int(this->_point->y));
            		}
HXLINE(1062)		return null();
            	}


HX_DEFINE_DYNAMIC_FUNC2(FlxSprite_obj,getPixelAtScreen,return )

 ::flixel::math::FlxBasePoint FlxSprite_obj::transformWorldToPixels( ::flixel::math::FlxBasePoint worldPoint, ::flixel::FlxCamera camera, ::flixel::math::FlxBasePoint result){
            	HX_STACKFRAME(&_hx_pos_cfd221447aa7194b_1075_transformWorldToPixels)
HXLINE(1076)		if (::hx::IsNull( camera )) {
HXLINE(1077)			camera = ::flixel::FlxG_obj::camera;
            		}
HXLINE(1079)		Float x = (worldPoint->x - camera->scroll->x);
HXDLIN(1079)		Float y = (worldPoint->y - camera->scroll->y);
HXDLIN(1079)		 ::flixel::math::FlxBasePoint point = ::flixel::math::FlxBasePoint_obj::pool->get()->set(x,y);
HXDLIN(1079)		point->_inPool = false;
HXDLIN(1079)		 ::flixel::math::FlxBasePoint point1 = point;
HXDLIN(1079)		point1->_weak = true;
HXDLIN(1079)		 ::flixel::math::FlxBasePoint screenPoint = point1;
HXLINE(1080)		if (worldPoint->_weak) {
HXLINE(1080)			worldPoint->put();
            		}
HXLINE(1081)		return this->transformScreenToPixels(screenPoint,camera,result);
            	}


HX_DEFINE_DYNAMIC_FUNC3(FlxSprite_obj,transformWorldToPixels,return )

 ::flixel::math::FlxBasePoint FlxSprite_obj::transformWorldToPixelsSimple( ::flixel::math::FlxBasePoint worldPoint, ::flixel::math::FlxBasePoint result){
            	HX_STACKFRAME(&_hx_pos_cfd221447aa7194b_1093_transformWorldToPixelsSimple)
HXLINE(1094)		result = this->getPosition(result);
HXLINE(1096)		{
HXLINE(1096)			Float y = worldPoint->y;
HXDLIN(1096)			result->set_x((result->x - worldPoint->x));
HXDLIN(1096)			result->set_y((result->y - y));
            		}
HXLINE(1097)		{
HXLINE(1097)			result->set_x((result->x * ( (Float)(-1) )));
HXDLIN(1097)			result->set_y((result->y * ( (Float)(-1) )));
            		}
HXLINE(1098)		{
HXLINE(1098)			 ::flixel::math::FlxBasePoint point = this->offset;
HXDLIN(1098)			{
HXLINE(1098)				Float y1 = point->y;
HXDLIN(1098)				result->set_x((result->x + point->x));
HXDLIN(1098)				result->set_y((result->y + y1));
            			}
HXDLIN(1098)			if (point->_weak) {
HXLINE(1098)				point->put();
            			}
            		}
HXLINE(1099)		{
HXLINE(1099)			 ::flixel::math::FlxBasePoint point1 = this->origin;
HXDLIN(1099)			{
HXLINE(1099)				Float y2 = point1->y;
HXDLIN(1099)				result->set_x((result->x - point1->x));
HXDLIN(1099)				result->set_y((result->y - y2));
            			}
HXDLIN(1099)			if (point1->_weak) {
HXLINE(1099)				point1->put();
            			}
            		}
HXLINE(1100)		{
HXLINE(1100)			Float x = (( (Float)(1) ) / this->scale->x);
HXDLIN(1100)			 ::Dynamic y3 = (( (Float)(1) ) / this->scale->y);
HXDLIN(1100)			if (::hx::IsNull( y3 )) {
HXLINE(1100)				y3 = x;
            			}
HXDLIN(1100)			result->set_x((result->x * x));
HXDLIN(1100)			result->set_y((result->y * ( (Float)(y3) )));
            		}
HXLINE(1101)		{
HXLINE(1101)			Float degs = ::flixel::math::_FlxPoint::FlxPoint_Impl__obj::get_radians(result);
HXDLIN(1101)			Float degs1 = ((degs * (( (Float)(180) ) / ::Math_obj::PI)) - this->angle);
HXDLIN(1101)			{
HXLINE(1101)				Float rads = (degs1 * (::Math_obj::PI / ( (Float)(180) )));
HXDLIN(1101)				Float len = ::Math_obj::sqrt(((result->x * result->x) + (result->y * result->y)));
HXDLIN(1101)				result->set_x((len * ::Math_obj::cos(rads)));
HXDLIN(1101)				result->set_y((len * ::Math_obj::sin(rads)));
            			}
            		}
HXLINE(1102)		{
HXLINE(1102)			 ::flixel::math::FlxBasePoint point2 = this->origin;
HXDLIN(1102)			{
HXLINE(1102)				Float y4 = point2->y;
HXDLIN(1102)				result->set_x((result->x + point2->x));
HXDLIN(1102)				result->set_y((result->y + y4));
            			}
HXDLIN(1102)			if (point2->_weak) {
HXLINE(1102)				point2->put();
            			}
            		}
HXLINE(1104)		if (worldPoint->_weak) {
HXLINE(1104)			worldPoint->put();
            		}
HXLINE(1106)		return result;
            	}


HX_DEFINE_DYNAMIC_FUNC2(FlxSprite_obj,transformWorldToPixelsSimple,return )

 ::flixel::math::FlxBasePoint FlxSprite_obj::transformScreenToPixels( ::flixel::math::FlxBasePoint screenPoint, ::flixel::FlxCamera camera, ::flixel::math::FlxBasePoint result){
            	HX_STACKFRAME(&_hx_pos_cfd221447aa7194b_1119_transformScreenToPixels)
HXLINE(1120)		result = this->getScreenPosition(result,camera);
HXLINE(1122)		{
HXLINE(1122)			Float y = screenPoint->y;
HXDLIN(1122)			result->set_x((result->x - screenPoint->x));
HXDLIN(1122)			result->set_y((result->y - y));
            		}
HXLINE(1123)		{
HXLINE(1123)			result->set_x((result->x * ( (Float)(-1) )));
HXDLIN(1123)			result->set_y((result->y * ( (Float)(-1) )));
            		}
HXLINE(1124)		{
HXLINE(1124)			 ::flixel::math::FlxBasePoint point = this->offset;
HXDLIN(1124)			{
HXLINE(1124)				Float y1 = point->y;
HXDLIN(1124)				result->set_x((result->x + point->x));
HXDLIN(1124)				result->set_y((result->y + y1));
            			}
HXDLIN(1124)			if (point->_weak) {
HXLINE(1124)				point->put();
            			}
            		}
HXLINE(1125)		{
HXLINE(1125)			 ::flixel::math::FlxBasePoint point1 = this->origin;
HXDLIN(1125)			{
HXLINE(1125)				Float y2 = point1->y;
HXDLIN(1125)				result->set_x((result->x - point1->x));
HXDLIN(1125)				result->set_y((result->y - y2));
            			}
HXDLIN(1125)			if (point1->_weak) {
HXLINE(1125)				point1->put();
            			}
            		}
HXLINE(1126)		{
HXLINE(1126)			Float x = (( (Float)(1) ) / this->scale->x);
HXDLIN(1126)			 ::Dynamic y3 = (( (Float)(1) ) / this->scale->y);
HXDLIN(1126)			if (::hx::IsNull( y3 )) {
HXLINE(1126)				y3 = x;
            			}
HXDLIN(1126)			result->set_x((result->x * x));
HXDLIN(1126)			result->set_y((result->y * ( (Float)(y3) )));
            		}
HXLINE(1127)		{
HXLINE(1127)			Float degs = ::flixel::math::_FlxPoint::FlxPoint_Impl__obj::get_radians(result);
HXDLIN(1127)			Float degs1 = ((degs * (( (Float)(180) ) / ::Math_obj::PI)) - this->angle);
HXDLIN(1127)			{
HXLINE(1127)				Float rads = (degs1 * (::Math_obj::PI / ( (Float)(180) )));
HXDLIN(1127)				Float len = ::Math_obj::sqrt(((result->x * result->x) + (result->y * result->y)));
HXDLIN(1127)				result->set_x((len * ::Math_obj::cos(rads)));
HXDLIN(1127)				result->set_y((len * ::Math_obj::sin(rads)));
            			}
            		}
HXLINE(1128)		{
HXLINE(1128)			 ::flixel::math::FlxBasePoint point2 = this->origin;
HXDLIN(1128)			{
HXLINE(1128)				Float y4 = point2->y;
HXDLIN(1128)				result->set_x((result->x + point2->x));
HXDLIN(1128)				result->set_y((result->y + y4));
            			}
HXDLIN(1128)			if (point2->_weak) {
HXLINE(1128)				point2->put();
            			}
            		}
HXLINE(1130)		if (screenPoint->_weak) {
HXLINE(1130)			screenPoint->put();
            		}
HXLINE(1132)		return result;
            	}


HX_DEFINE_DYNAMIC_FUNC3(FlxSprite_obj,transformScreenToPixels,return )

void FlxSprite_obj::calcFrame(::hx::Null< bool >  __o_force){
            		bool force = __o_force.Default(false);
            	HX_STACKFRAME(&_hx_pos_cfd221447aa7194b_1142_calcFrame)
HXLINE(1143)		this->checkEmptyFrame();
HXLINE(1145)		bool _hx_tmp;
HXDLIN(1145)		if (::flixel::FlxG_obj::renderTile) {
HXLINE(1145)			_hx_tmp = !(force);
            		}
            		else {
HXLINE(1145)			_hx_tmp = false;
            		}
HXDLIN(1145)		if (_hx_tmp) {
HXLINE(1146)			return;
            		}
HXLINE(1148)		this->updateFramePixels();
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxSprite_obj,calcFrame,(void))

 ::openfl::display::BitmapData FlxSprite_obj::updateFramePixels(){
            	HX_STACKFRAME(&_hx_pos_cfd221447aa7194b_1155_updateFramePixels)
HXLINE(1156)		bool _hx_tmp;
HXDLIN(1156)		if (::hx::IsNotNull( this->_frame )) {
HXLINE(1156)			_hx_tmp = !(this->dirty);
            		}
            		else {
HXLINE(1156)			_hx_tmp = true;
            		}
HXDLIN(1156)		if (_hx_tmp) {
HXLINE(1157)			return this->framePixels;
            		}
HXLINE(1161)		bool _hx_tmp1;
HXDLIN(1161)		if (::flixel::FlxG_obj::renderTile) {
HXLINE(1161)			_hx_tmp1 = ::hx::IsNotNull( this->_frameGraphic );
            		}
            		else {
HXLINE(1161)			_hx_tmp1 = false;
            		}
HXDLIN(1161)		if (_hx_tmp1) {
HXLINE(1163)			this->dirty = false;
HXLINE(1164)			return this->framePixels;
            		}
HXLINE(1167)		bool doFlipX = (this->flipX != this->_frame->flipX);
HXDLIN(1167)		bool doFlipX1;
HXDLIN(1167)		if (::hx::IsNotNull( this->animation->_curAnim )) {
HXLINE(1167)			doFlipX1 = (doFlipX != this->animation->_curAnim->flipX);
            		}
            		else {
HXLINE(1167)			doFlipX1 = doFlipX;
            		}
HXLINE(1168)		bool doFlipY = (this->flipY != this->_frame->flipY);
HXDLIN(1168)		bool doFlipY1;
HXDLIN(1168)		if (::hx::IsNotNull( this->animation->_curAnim )) {
HXLINE(1168)			doFlipY1 = (doFlipY != this->animation->_curAnim->flipY);
            		}
            		else {
HXLINE(1168)			doFlipY1 = doFlipY;
            		}
HXLINE(1170)		bool _hx_tmp2;
HXDLIN(1170)		bool _hx_tmp3;
HXDLIN(1170)		if (!(doFlipX1)) {
HXLINE(1170)			_hx_tmp3 = !(doFlipY1);
            		}
            		else {
HXLINE(1170)			_hx_tmp3 = false;
            		}
HXDLIN(1170)		if (_hx_tmp3) {
HXLINE(1170)			_hx_tmp2 = (this->_frame->type == 0);
            		}
            		else {
HXLINE(1170)			_hx_tmp2 = false;
            		}
HXDLIN(1170)		if (_hx_tmp2) {
HXLINE(1172)			this->framePixels = this->_frame->paint(this->framePixels,this->_flashPointZero,false,true);
            		}
            		else {
HXLINE(1176)			this->framePixels = this->_frame->paintRotatedAndFlipped(this->framePixels,this->_flashPointZero,0,doFlipX1,doFlipY1,false,true);
            		}
HXLINE(1179)		if (this->useColorTransform) {
HXLINE(1181)			this->framePixels->colorTransform(this->_flashRect,this->colorTransform);
            		}
HXLINE(1184)		bool _hx_tmp4;
HXDLIN(1184)		if (::flixel::FlxG_obj::renderTile) {
HXLINE(1184)			_hx_tmp4 = this->useFramePixels;
            		}
            		else {
HXLINE(1184)			_hx_tmp4 = false;
            		}
HXDLIN(1184)		if (_hx_tmp4) {
HXLINE(1187)			this->_frameGraphic = ( ( ::flixel::graphics::FlxGraphic)(::flixel::util::FlxDestroyUtil_obj::destroy(this->_frameGraphic)) );
HXLINE(1188)			this->_frameGraphic = ::flixel::graphics::FlxGraphic_obj::fromBitmapData(this->framePixels,false,null(),false);
HXLINE(1189)			this->_frame = this->_frameGraphic->get_imageFrame()->get_frame()->copyTo(this->_frame);
            		}
HXLINE(1192)		this->dirty = false;
HXLINE(1193)		return this->framePixels;
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxSprite_obj,updateFramePixels,return )

 ::flixel::math::FlxBasePoint FlxSprite_obj::getGraphicMidpoint( ::flixel::math::FlxBasePoint point){
            	HX_STACKFRAME(&_hx_pos_cfd221447aa7194b_1204_getGraphicMidpoint)
HXLINE(1205)		if (::hx::IsNull( point )) {
HXLINE(1206)			 ::flixel::math::FlxBasePoint point1 = ::flixel::math::FlxBasePoint_obj::pool->get()->set(( (Float)(0) ),( (Float)(0) ));
HXDLIN(1206)			point1->_inPool = false;
HXDLIN(1206)			point = point1;
            		}
HXLINE(1207)		Float y = (this->y + (( (Float)(this->frameHeight) ) * ((Float)0.5)));
HXDLIN(1207)		point->set_x((this->x + (( (Float)(this->frameWidth) ) * ((Float)0.5))));
HXDLIN(1207)		point->set_y(y);
HXDLIN(1207)		return point;
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxSprite_obj,getGraphicMidpoint,return )

bool FlxSprite_obj::isOnScreen( ::flixel::FlxCamera camera){
            	HX_STACKFRAME(&_hx_pos_cfd221447aa7194b_1218_isOnScreen)
HXLINE(1219)		if (::hx::IsNull( camera )) {
HXLINE(1220)			camera = ::flixel::FlxG_obj::camera;
            		}
HXLINE(1222)		 ::flixel::math::FlxRect rect = this->getScreenBounds(this->_rect,camera);
HXDLIN(1222)		bool contained;
HXDLIN(1222)		bool contained1;
HXDLIN(1222)		bool contained2;
HXDLIN(1222)		if (((rect->x + rect->width) > camera->viewMarginX)) {
HXLINE(1222)			contained2 = (rect->x < (( (Float)(camera->width) ) - camera->viewMarginX));
            		}
            		else {
HXLINE(1222)			contained2 = false;
            		}
HXDLIN(1222)		if (contained2) {
HXLINE(1222)			contained1 = ((rect->y + rect->height) > camera->viewMarginY);
            		}
            		else {
HXLINE(1222)			contained1 = false;
            		}
HXDLIN(1222)		if (contained1) {
HXLINE(1222)			contained = (rect->y < (( (Float)(camera->height) ) - camera->viewMarginY));
            		}
            		else {
HXLINE(1222)			contained = false;
            		}
HXDLIN(1222)		if (rect->_weak) {
HXLINE(1222)			if (!(rect->_inPool)) {
HXLINE(1222)				rect->_inPool = true;
HXDLIN(1222)				rect->_weak = false;
HXDLIN(1222)				::flixel::math::FlxRect_obj::_pool->putUnsafe(rect);
            			}
            		}
HXDLIN(1222)		return contained;
            	}


bool FlxSprite_obj::isSimpleRender( ::flixel::FlxCamera camera){
            	HX_STACKFRAME(&_hx_pos_cfd221447aa7194b_1230_isSimpleRender)
HXLINE(1231)		if (::flixel::FlxG_obj::renderTile) {
HXLINE(1232)			return false;
            		}
HXLINE(1234)		return this->isSimpleRenderBlit(camera);
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxSprite_obj,isSimpleRender,return )

bool FlxSprite_obj::isSimpleRenderBlit( ::flixel::FlxCamera camera){
            	HX_STACKFRAME(&_hx_pos_cfd221447aa7194b_1246_isSimpleRenderBlit)
HXLINE(1247)		bool result;
HXDLIN(1247)		bool result1;
HXDLIN(1247)		bool result2;
HXDLIN(1247)		bool result3;
HXDLIN(1247)		if ((this->angle != 0)) {
HXLINE(1247)			result3 = (this->bakedRotationAngle > 0);
            		}
            		else {
HXLINE(1247)			result3 = true;
            		}
HXDLIN(1247)		if (result3) {
HXLINE(1247)			result2 = (this->scale->x == 1);
            		}
            		else {
HXLINE(1247)			result2 = false;
            		}
HXDLIN(1247)		if (result2) {
HXLINE(1247)			result1 = (this->scale->y == 1);
            		}
            		else {
HXLINE(1247)			result1 = false;
            		}
HXDLIN(1247)		if (result1) {
HXLINE(1247)			result = ::hx::IsNull( this->blend );
            		}
            		else {
HXLINE(1247)			result = false;
            		}
HXLINE(1248)		if (result) {
HXLINE(1248)			if (::hx::IsNotNull( camera )) {
HXLINE(1248)				result = this->isPixelPerfectRender(camera);
            			}
            			else {
HXLINE(1248)				result = ( (bool)(this->pixelPerfectRender) );
            			}
            		}
            		else {
HXLINE(1248)			result = false;
            		}
HXLINE(1249)		return result;
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxSprite_obj,isSimpleRenderBlit,return )

 ::flixel::math::FlxRect FlxSprite_obj::getRotatedBounds( ::flixel::math::FlxRect newRect){
            	HX_STACKFRAME(&_hx_pos_cfd221447aa7194b_1262_getRotatedBounds)
HXLINE(1263)		if (::hx::IsNull( newRect )) {
HXLINE(1264)			 ::flixel::math::FlxRect _this = ::flixel::math::FlxRect_obj::_pool->get();
HXDLIN(1264)			_this->x = ( (Float)(0) );
HXDLIN(1264)			_this->y = ( (Float)(0) );
HXDLIN(1264)			_this->width = ( (Float)(0) );
HXDLIN(1264)			_this->height = ( (Float)(0) );
HXDLIN(1264)			 ::flixel::math::FlxRect rect = _this;
HXDLIN(1264)			rect->_inPool = false;
HXDLIN(1264)			newRect = rect;
            		}
HXLINE(1266)		{
HXLINE(1266)			Float X = this->x;
HXDLIN(1266)			Float Y = this->y;
HXDLIN(1266)			Float Width = this->get_width();
HXDLIN(1266)			Float Height = this->get_height();
HXDLIN(1266)			newRect->x = X;
HXDLIN(1266)			newRect->y = Y;
HXDLIN(1266)			newRect->width = Width;
HXDLIN(1266)			newRect->height = Height;
            		}
HXLINE(1267)		return newRect->getRotatedBounds(this->angle,this->origin,newRect);
            	}


 ::flixel::math::FlxRect FlxSprite_obj::getScreenBounds( ::flixel::math::FlxRect newRect, ::flixel::FlxCamera camera){
            	HX_STACKFRAME(&_hx_pos_cfd221447aa7194b_1279_getScreenBounds)
HXLINE(1280)		if (::hx::IsNull( newRect )) {
HXLINE(1281)			 ::flixel::math::FlxRect _this = ::flixel::math::FlxRect_obj::_pool->get();
HXDLIN(1281)			_this->x = ( (Float)(0) );
HXDLIN(1281)			_this->y = ( (Float)(0) );
HXDLIN(1281)			_this->width = ( (Float)(0) );
HXDLIN(1281)			_this->height = ( (Float)(0) );
HXDLIN(1281)			 ::flixel::math::FlxRect rect = _this;
HXDLIN(1281)			rect->_inPool = false;
HXDLIN(1281)			newRect = rect;
            		}
HXLINE(1283)		if (::hx::IsNull( camera )) {
HXLINE(1284)			camera = ::flixel::FlxG_obj::camera;
            		}
HXLINE(1286)		{
HXLINE(1286)			newRect->x = this->x;
HXDLIN(1286)			newRect->y = this->y;
            		}
HXLINE(1287)		if (this->pixelPerfectPosition) {
HXLINE(1288)			newRect->x = ( (Float)(::Math_obj::floor(newRect->x)) );
HXDLIN(1288)			newRect->y = ( (Float)(::Math_obj::floor(newRect->y)) );
HXDLIN(1288)			newRect->width = ( (Float)(::Math_obj::floor(newRect->width)) );
HXDLIN(1288)			newRect->height = ( (Float)(::Math_obj::floor(newRect->height)) );
            		}
HXLINE(1289)		{
HXLINE(1289)			 ::flixel::math::FlxBasePoint this1 = this->_scaledOrigin;
HXDLIN(1289)			Float y = (this->origin->y * this->scale->y);
HXDLIN(1289)			this1->set_x((this->origin->x * this->scale->x));
HXDLIN(1289)			this1->set_y(y);
            		}
HXLINE(1290)		 ::flixel::math::FlxRect newRect1 = newRect;
HXDLIN(1290)		Float newRect2 = newRect1->x;
HXDLIN(1290)		Float _hx_tmp = (( (Float)(-(::Std_obj::_hx_int((camera->scroll->x * this->scrollFactor->x)))) ) - this->offset->x);
HXDLIN(1290)		newRect1->x = (newRect2 + ((_hx_tmp + this->origin->x) - this->_scaledOrigin->x));
HXLINE(1291)		 ::flixel::math::FlxRect newRect3 = newRect;
HXDLIN(1291)		Float newRect4 = newRect3->y;
HXDLIN(1291)		Float _hx_tmp1 = (( (Float)(-(::Std_obj::_hx_int((camera->scroll->y * this->scrollFactor->y)))) ) - this->offset->y);
HXDLIN(1291)		newRect3->y = (newRect4 + ((_hx_tmp1 + this->origin->y) - this->_scaledOrigin->y));
HXLINE(1292)		if (this->isPixelPerfectRender(camera)) {
HXLINE(1293)			newRect->x = ( (Float)(::Math_obj::floor(newRect->x)) );
HXDLIN(1293)			newRect->y = ( (Float)(::Math_obj::floor(newRect->y)) );
HXDLIN(1293)			newRect->width = ( (Float)(::Math_obj::floor(newRect->width)) );
HXDLIN(1293)			newRect->height = ( (Float)(::Math_obj::floor(newRect->height)) );
            		}
HXLINE(1294)		{
HXLINE(1294)			Float Height = (( (Float)(this->frameHeight) ) * ::Math_obj::abs(this->scale->y));
HXDLIN(1294)			newRect->width = (( (Float)(this->frameWidth) ) * ::Math_obj::abs(this->scale->x));
HXDLIN(1294)			newRect->height = Height;
            		}
HXLINE(1295)		return newRect->getRotatedBounds(this->angle,this->_scaledOrigin,newRect);
            	}


HX_DEFINE_DYNAMIC_FUNC2(FlxSprite_obj,getScreenBounds,return )

void FlxSprite_obj::setFacingFlip(int Direction,bool FlipX,bool FlipY){
            	HX_STACKFRAME(&_hx_pos_cfd221447aa7194b_1310_setFacingFlip)
HXDLIN(1310)		this->_facingFlip->set(Direction, ::Dynamic(::hx::Anon_obj::Create(2)
            			->setFixed(0,HX_("x",78,00,00,00),FlipX)
            			->setFixed(1,HX_("y",79,00,00,00),FlipY)));
            	}


HX_DEFINE_DYNAMIC_FUNC3(FlxSprite_obj,setFacingFlip,(void))

 ::flixel::FlxSprite FlxSprite_obj::setFrames( ::flixel::graphics::frames::FlxFramesCollection Frames,::hx::Null< bool >  __o_saveAnimations){
            		bool saveAnimations = __o_saveAnimations.Default(true);
            	HX_STACKFRAME(&_hx_pos_cfd221447aa7194b_1322_setFrames)
HXLINE(1323)		if (saveAnimations) {
HXLINE(1325)			 ::haxe::ds::StringMap animations = this->animation->_animations;
HXLINE(1326)			bool reverse = false;
HXLINE(1327)			int index = 0;
HXLINE(1328)			int frameIndex = this->animation->frameIndex;
HXLINE(1329)			::String currName = null();
HXLINE(1331)			if (::hx::IsNotNull( this->animation->_curAnim )) {
HXLINE(1333)				reverse = this->animation->_curAnim->reversed;
HXLINE(1334)				index = this->animation->_curAnim->curFrame;
HXLINE(1335)				currName = this->animation->_curAnim->name;
            			}
HXLINE(1338)			this->animation->_animations = null();
HXLINE(1339)			this->set_frames(Frames);
HXLINE(1340)			this->set_frame(this->frames->frames->__get(frameIndex).StaticCast<  ::flixel::graphics::frames::FlxFrame >());
HXLINE(1341)			this->animation->_animations = animations;
HXLINE(1343)			if (::hx::IsNotNull( currName )) {
HXLINE(1345)				this->animation->play(currName,false,reverse,index);
            			}
            		}
            		else {
HXLINE(1350)			this->set_frames(Frames);
            		}
HXLINE(1353)		return ::hx::ObjectPtr<OBJ_>(this);
            	}


HX_DEFINE_DYNAMIC_FUNC2(FlxSprite_obj,setFrames,return )

 ::openfl::display::BitmapData FlxSprite_obj::get_pixels(){
            	HX_STACKFRAME(&_hx_pos_cfd221447aa7194b_1359_get_pixels)
HXDLIN(1359)		if (::hx::IsNull( this->graphic )) {
HXDLIN(1359)			return null();
            		}
            		else {
HXDLIN(1359)			return this->graphic->bitmap;
            		}
HXDLIN(1359)		return null();
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxSprite_obj,get_pixels,return )

 ::openfl::display::BitmapData FlxSprite_obj::set_pixels( ::openfl::display::BitmapData Pixels){
            	HX_STACKFRAME(&_hx_pos_cfd221447aa7194b_1364_set_pixels)
HXLINE(1365)		::String key = ::flixel::FlxG_obj::bitmap->findKeyForBitmap(Pixels);
HXLINE(1367)		if (::hx::IsNull( key )) {
HXLINE(1369)			key = ::flixel::FlxG_obj::bitmap->getUniqueKey(null());
HXLINE(1370)			this->set_graphic(::flixel::FlxG_obj::bitmap->add(Pixels,false,key));
            		}
            		else {
HXLINE(1374)			this->set_graphic(( ( ::flixel::graphics::FlxGraphic)(::flixel::FlxG_obj::bitmap->_cache->get(key)) ));
            		}
HXLINE(1377)		this->set_frames(this->graphic->get_imageFrame());
HXLINE(1378)		return Pixels;
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxSprite_obj,set_pixels,return )

 ::flixel::graphics::frames::FlxFrame FlxSprite_obj::set_frame( ::flixel::graphics::frames::FlxFrame Value){
            	HX_STACKFRAME(&_hx_pos_cfd221447aa7194b_1383_set_frame)
HXLINE(1384)		this->frame = Value;
HXLINE(1385)		if (::hx::IsNotNull( this->frame )) {
HXLINE(1387)			{
HXLINE(1387)				if (::hx::IsNotNull( this->frame )) {
HXLINE(1387)					this->frameWidth = ::Std_obj::_hx_int(this->frame->sourceSize->x);
HXDLIN(1387)					this->frameHeight = ::Std_obj::_hx_int(this->frame->sourceSize->y);
            				}
HXDLIN(1387)				{
HXLINE(1387)					 ::flixel::math::FlxBasePoint this1 = this->_halfSize;
HXDLIN(1387)					Float y = (((Float)0.5) * ( (Float)(this->frameHeight) ));
HXDLIN(1387)					this1->set_x((((Float)0.5) * ( (Float)(this->frameWidth) )));
HXDLIN(1387)					this1->set_y(y);
            				}
HXDLIN(1387)				{
HXLINE(1387)					this->_flashRect->x = ( (Float)(0) );
HXDLIN(1387)					this->_flashRect->y = ( (Float)(0) );
HXDLIN(1387)					this->_flashRect->width = ( (Float)(this->frameWidth) );
HXDLIN(1387)					this->_flashRect->height = ( (Float)(this->frameHeight) );
            				}
            			}
HXLINE(1388)			this->dirty = true;
            		}
            		else {
HXLINE(1390)			bool _hx_tmp;
HXDLIN(1390)			bool _hx_tmp1;
HXDLIN(1390)			if (::hx::IsNotNull( this->frames )) {
HXLINE(1390)				_hx_tmp1 = ::hx::IsNotNull( this->frames->frames );
            			}
            			else {
HXLINE(1390)				_hx_tmp1 = false;
            			}
HXDLIN(1390)			if (_hx_tmp1) {
HXLINE(1390)				_hx_tmp = (this->numFrames > 0);
            			}
            			else {
HXLINE(1390)				_hx_tmp = false;
            			}
HXDLIN(1390)			if (_hx_tmp) {
HXLINE(1392)				this->frame = this->frames->frames->__get(0).StaticCast<  ::flixel::graphics::frames::FlxFrame >();
HXLINE(1393)				this->dirty = true;
            			}
            			else {
HXLINE(1397)				return null();
            			}
            		}
HXLINE(1400)		if (::flixel::FlxG_obj::renderTile) {
HXLINE(1402)			this->_frameGraphic = ( ( ::flixel::graphics::FlxGraphic)(::flixel::util::FlxDestroyUtil_obj::destroy(this->_frameGraphic)) );
            		}
HXLINE(1405)		if (::hx::IsNotNull( this->clipRect )) {
HXLINE(1407)			this->_frame = this->frame->clipTo(this->clipRect,this->_frame);
            		}
            		else {
HXLINE(1411)			this->_frame = this->frame->copyTo(this->_frame);
            		}
HXLINE(1414)		return this->frame;
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxSprite_obj,set_frame,return )

int FlxSprite_obj::set_facing(int Direction){
            	HX_STACKFRAME(&_hx_pos_cfd221447aa7194b_1419_set_facing)
HXLINE(1420)		 ::Dynamic flip = this->_facingFlip->get(Direction);
HXLINE(1421)		if (::hx::IsNotNull( flip )) {
HXLINE(1423)			this->set_flipX(( (bool)(flip->__Field(HX_("x",78,00,00,00),::hx::paccDynamic)) ));
HXLINE(1424)			this->set_flipY(( (bool)(flip->__Field(HX_("y",79,00,00,00),::hx::paccDynamic)) ));
            		}
HXLINE(1427)		return (this->facing = Direction);
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxSprite_obj,set_facing,return )

Float FlxSprite_obj::set_alpha(Float Alpha){
            	HX_STACKFRAME(&_hx_pos_cfd221447aa7194b_1432_set_alpha)
HXLINE(1433)		if ((this->alpha == Alpha)) {
HXLINE(1435)			return Alpha;
            		}
HXLINE(1437)		Float lowerBound;
HXDLIN(1437)		if ((Alpha < 0)) {
HXLINE(1437)			lowerBound = ( (Float)(0) );
            		}
            		else {
HXLINE(1437)			lowerBound = Alpha;
            		}
HXDLIN(1437)		Float _hx_tmp;
HXDLIN(1437)		if ((lowerBound > 1)) {
HXLINE(1437)			_hx_tmp = ( (Float)(1) );
            		}
            		else {
HXLINE(1437)			_hx_tmp = lowerBound;
            		}
HXDLIN(1437)		this->alpha = _hx_tmp;
HXLINE(1438)		this->updateColorTransform();
HXLINE(1439)		return this->alpha;
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxSprite_obj,set_alpha,return )

int FlxSprite_obj::set_color(int Color){
            	HX_STACKFRAME(&_hx_pos_cfd221447aa7194b_1444_set_color)
HXLINE(1445)		if ((this->color == Color)) {
HXLINE(1447)			return Color;
            		}
HXLINE(1449)		this->color = Color;
HXLINE(1450)		this->updateColorTransform();
HXLINE(1451)		return this->color;
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxSprite_obj,set_color,return )

Float FlxSprite_obj::set_angle(Float Value){
            	HX_STACKFRAME(&_hx_pos_cfd221447aa7194b_1456_set_angle)
HXLINE(1457)		bool newAngle = (this->angle != Value);
HXLINE(1458)		Float ret = this->super::set_angle(Value);
HXLINE(1459)		if (newAngle) {
HXLINE(1461)			this->_angleChanged = true;
HXLINE(1462)			this->animation->update(( (Float)(0) ));
            		}
HXLINE(1464)		return ret;
            	}


void FlxSprite_obj::updateTrig(){
            	HX_STACKFRAME(&_hx_pos_cfd221447aa7194b_1470_updateTrig)
HXDLIN(1470)		if (this->_angleChanged) {
HXLINE(1472)			Float radians = (this->angle * (::Math_obj::PI / ( (Float)(180) )));
HXLINE(1473)			this->_sinAngle = ::Math_obj::sin(radians);
HXLINE(1474)			this->_cosAngle = ::Math_obj::cos(radians);
HXLINE(1475)			this->_angleChanged = false;
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxSprite_obj,updateTrig,(void))

 ::Dynamic FlxSprite_obj::set_blend( ::Dynamic Value){
            	HX_STACKFRAME(&_hx_pos_cfd221447aa7194b_1482_set_blend)
HXDLIN(1482)		return (this->blend = Value);
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxSprite_obj,set_blend,return )

 ::flixel::graphics::FlxGraphic FlxSprite_obj::set_graphic( ::flixel::graphics::FlxGraphic Value){
            	HX_STACKFRAME(&_hx_pos_cfd221447aa7194b_1491_set_graphic)
HXLINE(1492)		 ::flixel::graphics::FlxGraphic oldGraphic = this->graphic;
HXLINE(1494)		bool _hx_tmp;
HXDLIN(1494)		if (::hx::IsInstanceNotEq( this->graphic,Value )) {
HXLINE(1494)			_hx_tmp = ::hx::IsNotNull( Value );
            		}
            		else {
HXLINE(1494)			_hx_tmp = false;
            		}
HXDLIN(1494)		if (_hx_tmp) {
HXLINE(1496)			Value->set_useCount((Value->get_useCount() + 1));
            		}
HXLINE(1499)		bool _hx_tmp1;
HXDLIN(1499)		if (::hx::IsNotNull( oldGraphic )) {
HXLINE(1499)			_hx_tmp1 = ::hx::IsInstanceNotEq( oldGraphic,Value );
            		}
            		else {
HXLINE(1499)			_hx_tmp1 = false;
            		}
HXDLIN(1499)		if (_hx_tmp1) {
HXLINE(1501)			oldGraphic->set_useCount((oldGraphic->get_useCount() - 1));
            		}
HXLINE(1504)		return (this->graphic = Value);
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxSprite_obj,set_graphic,return )

 ::flixel::math::FlxRect FlxSprite_obj::set_clipRect( ::flixel::math::FlxRect rect){
            	HX_STACKFRAME(&_hx_pos_cfd221447aa7194b_1509_set_clipRect)
HXLINE(1510)		if (::hx::IsNotNull( rect )) {
HXLINE(1511)			rect->x = ( (Float)(::Math_obj::round(rect->x)) );
HXDLIN(1511)			rect->y = ( (Float)(::Math_obj::round(rect->y)) );
HXDLIN(1511)			rect->width = ( (Float)(::Math_obj::round(rect->width)) );
HXDLIN(1511)			rect->height = ( (Float)(::Math_obj::round(rect->height)) );
HXDLIN(1511)			this->clipRect = rect;
            		}
            		else {
HXLINE(1513)			this->clipRect = null();
            		}
HXLINE(1515)		if (::hx::IsNotNull( this->frames )) {
HXLINE(1516)			this->set_frame(this->frames->frames->__get(this->animation->frameIndex).StaticCast<  ::flixel::graphics::frames::FlxFrame >());
            		}
HXLINE(1518)		return rect;
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxSprite_obj,set_clipRect,return )

 ::flixel::graphics::frames::FlxFramesCollection FlxSprite_obj::set_frames( ::flixel::graphics::frames::FlxFramesCollection Frames){
            	HX_STACKFRAME(&_hx_pos_cfd221447aa7194b_1530_set_frames)
HXLINE(1531)		if (::hx::IsNotNull( this->animation )) {
HXLINE(1533)			this->animation->destroyAnimations();
            		}
HXLINE(1536)		if (::hx::IsNotNull( Frames )) {
HXLINE(1538)			this->set_graphic(Frames->parent);
HXLINE(1539)			this->frames = Frames;
HXLINE(1540)			this->set_frame(this->frames->frames->__get(0).StaticCast<  ::flixel::graphics::frames::FlxFrame >());
HXLINE(1541)			this->numFrames = this->frames->frames->length;
HXLINE(1542)			this->resetHelpers();
HXLINE(1543)			this->bakedRotationAngle = ( (Float)(0) );
HXLINE(1544)			this->animation->set_frameIndex(0);
HXLINE(1545)			this->graphicLoaded();
            		}
            		else {
HXLINE(1549)			this->frames = null();
HXLINE(1550)			this->set_frame(null());
HXLINE(1551)			this->set_graphic(null());
            		}
HXLINE(1554)		return Frames;
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxSprite_obj,set_frames,return )

bool FlxSprite_obj::set_flipX(bool Value){
            	HX_STACKFRAME(&_hx_pos_cfd221447aa7194b_1559_set_flipX)
HXLINE(1560)		if (::flixel::FlxG_obj::renderTile) {
HXLINE(1562)			int _hx_tmp;
HXDLIN(1562)			if (Value) {
HXLINE(1562)				_hx_tmp = -1;
            			}
            			else {
HXLINE(1562)				_hx_tmp = 1;
            			}
HXDLIN(1562)			this->_facingHorizontalMult = _hx_tmp;
            		}
HXLINE(1564)		bool _hx_tmp;
HXDLIN(1564)		if ((this->flipX == Value)) {
HXLINE(1564)			_hx_tmp = this->dirty;
            		}
            		else {
HXLINE(1564)			_hx_tmp = true;
            		}
HXDLIN(1564)		this->dirty = _hx_tmp;
HXLINE(1565)		return (this->flipX = Value);
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxSprite_obj,set_flipX,return )

bool FlxSprite_obj::set_flipY(bool Value){
            	HX_STACKFRAME(&_hx_pos_cfd221447aa7194b_1570_set_flipY)
HXLINE(1571)		if (::flixel::FlxG_obj::renderTile) {
HXLINE(1573)			int _hx_tmp;
HXDLIN(1573)			if (Value) {
HXLINE(1573)				_hx_tmp = -1;
            			}
            			else {
HXLINE(1573)				_hx_tmp = 1;
            			}
HXDLIN(1573)			this->_facingVerticalMult = _hx_tmp;
            		}
HXLINE(1575)		bool _hx_tmp;
HXDLIN(1575)		if ((this->flipY == Value)) {
HXLINE(1575)			_hx_tmp = this->dirty;
            		}
            		else {
HXLINE(1575)			_hx_tmp = true;
            		}
HXDLIN(1575)		this->dirty = _hx_tmp;
HXLINE(1576)		return (this->flipY = Value);
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxSprite_obj,set_flipY,return )

bool FlxSprite_obj::set_antialiasing(bool value){
            	HX_STACKFRAME(&_hx_pos_cfd221447aa7194b_1582_set_antialiasing)
HXDLIN(1582)		return (this->antialiasing = value);
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxSprite_obj,set_antialiasing,return )

bool FlxSprite_obj::set_useFramePixels(bool value){
            	HX_STACKFRAME(&_hx_pos_cfd221447aa7194b_1588_set_useFramePixels)
HXDLIN(1588)		if (::flixel::FlxG_obj::renderTile) {
HXLINE(1590)			if ((value != this->useFramePixels)) {
HXLINE(1592)				this->useFramePixels = value;
HXLINE(1593)				this->set_frame(this->frame);
HXLINE(1595)				if (value) {
HXLINE(1597)					this->updateFramePixels();
            				}
            			}
HXLINE(1601)			return value;
            		}
            		else {
HXLINE(1605)			this->useFramePixels = true;
HXLINE(1606)			return true;
            		}
HXLINE(1588)		return false;
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxSprite_obj,set_useFramePixels,return )

bool FlxSprite_obj::checkFlipX(){
            	HX_STACKFRAME(&_hx_pos_cfd221447aa7194b_1612_checkFlipX)
HXLINE(1613)		bool doFlipX = (this->flipX != this->_frame->flipX);
HXLINE(1614)		if (::hx::IsNotNull( this->animation->_curAnim )) {
HXLINE(1616)			return (doFlipX != this->animation->_curAnim->flipX);
            		}
HXLINE(1618)		return doFlipX;
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxSprite_obj,checkFlipX,return )

bool FlxSprite_obj::checkFlipY(){
            	HX_STACKFRAME(&_hx_pos_cfd221447aa7194b_1623_checkFlipY)
HXLINE(1624)		bool doFlipY = (this->flipY != this->_frame->flipY);
HXLINE(1625)		if (::hx::IsNotNull( this->animation->_curAnim )) {
HXLINE(1627)			return (doFlipY != this->animation->_curAnim->flipY);
            		}
HXLINE(1629)		return doFlipY;
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxSprite_obj,checkFlipY,return )

bool FlxSprite_obj::defaultAntialiasing;


::hx::ObjectPtr< FlxSprite_obj > FlxSprite_obj::__new( ::Dynamic __o_X, ::Dynamic __o_Y, ::Dynamic SimpleGraphic) {
	::hx::ObjectPtr< FlxSprite_obj > __this = new FlxSprite_obj();
	__this->__construct(__o_X,__o_Y,SimpleGraphic);
	return __this;
}

::hx::ObjectPtr< FlxSprite_obj > FlxSprite_obj::__alloc(::hx::Ctx *_hx_ctx, ::Dynamic __o_X, ::Dynamic __o_Y, ::Dynamic SimpleGraphic) {
	FlxSprite_obj *__this = (FlxSprite_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(FlxSprite_obj), true, "flixel.FlxSprite"));
	*(void **)__this = FlxSprite_obj::_hx_vtable;
	__this->__construct(__o_X,__o_Y,SimpleGraphic);
	return __this;
}

FlxSprite_obj::FlxSprite_obj()
{
}

void FlxSprite_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(FlxSprite);
	HX_MARK_MEMBER_NAME(animation,"animation");
	HX_MARK_MEMBER_NAME(framePixels,"framePixels");
	HX_MARK_MEMBER_NAME(useFramePixels,"useFramePixels");
	HX_MARK_MEMBER_NAME(antialiasing,"antialiasing");
	HX_MARK_MEMBER_NAME(dirty,"dirty");
	HX_MARK_MEMBER_NAME(frame,"frame");
	HX_MARK_MEMBER_NAME(frameWidth,"frameWidth");
	HX_MARK_MEMBER_NAME(frameHeight,"frameHeight");
	HX_MARK_MEMBER_NAME(numFrames,"numFrames");
	HX_MARK_MEMBER_NAME(frames,"frames");
	HX_MARK_MEMBER_NAME(graphic,"graphic");
	HX_MARK_MEMBER_NAME(bakedRotationAngle,"bakedRotationAngle");
	HX_MARK_MEMBER_NAME(alpha,"alpha");
	HX_MARK_MEMBER_NAME(facing,"facing");
	HX_MARK_MEMBER_NAME(flipX,"flipX");
	HX_MARK_MEMBER_NAME(flipY,"flipY");
	HX_MARK_MEMBER_NAME(origin,"origin");
	HX_MARK_MEMBER_NAME(offset,"offset");
	HX_MARK_MEMBER_NAME(scale,"scale");
	HX_MARK_MEMBER_NAME(blend,"blend");
	HX_MARK_MEMBER_NAME(color,"color");
	HX_MARK_MEMBER_NAME(colorTransform,"colorTransform");
	HX_MARK_MEMBER_NAME(useColorTransform,"useColorTransform");
	HX_MARK_MEMBER_NAME(clipRect,"clipRect");
	HX_MARK_MEMBER_NAME(shader,"shader");
	HX_MARK_MEMBER_NAME(_frame,"_frame");
	HX_MARK_MEMBER_NAME(_frameGraphic,"_frameGraphic");
	HX_MARK_MEMBER_NAME(_facingHorizontalMult,"_facingHorizontalMult");
	HX_MARK_MEMBER_NAME(_facingVerticalMult,"_facingVerticalMult");
	HX_MARK_MEMBER_NAME(_flashPoint,"_flashPoint");
	HX_MARK_MEMBER_NAME(_flashRect,"_flashRect");
	HX_MARK_MEMBER_NAME(_flashRect2,"_flashRect2");
	HX_MARK_MEMBER_NAME(_flashPointZero,"_flashPointZero");
	HX_MARK_MEMBER_NAME(_matrix,"_matrix");
	HX_MARK_MEMBER_NAME(_halfSize,"_halfSize");
	HX_MARK_MEMBER_NAME(_scaledOrigin,"_scaledOrigin");
	HX_MARK_MEMBER_NAME(_sinAngle,"_sinAngle");
	HX_MARK_MEMBER_NAME(_cosAngle,"_cosAngle");
	HX_MARK_MEMBER_NAME(_angleChanged,"_angleChanged");
	HX_MARK_MEMBER_NAME(_facingFlip,"_facingFlip");
	 ::flixel::FlxObject_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void FlxSprite_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(animation,"animation");
	HX_VISIT_MEMBER_NAME(framePixels,"framePixels");
	HX_VISIT_MEMBER_NAME(useFramePixels,"useFramePixels");
	HX_VISIT_MEMBER_NAME(antialiasing,"antialiasing");
	HX_VISIT_MEMBER_NAME(dirty,"dirty");
	HX_VISIT_MEMBER_NAME(frame,"frame");
	HX_VISIT_MEMBER_NAME(frameWidth,"frameWidth");
	HX_VISIT_MEMBER_NAME(frameHeight,"frameHeight");
	HX_VISIT_MEMBER_NAME(numFrames,"numFrames");
	HX_VISIT_MEMBER_NAME(frames,"frames");
	HX_VISIT_MEMBER_NAME(graphic,"graphic");
	HX_VISIT_MEMBER_NAME(bakedRotationAngle,"bakedRotationAngle");
	HX_VISIT_MEMBER_NAME(alpha,"alpha");
	HX_VISIT_MEMBER_NAME(facing,"facing");
	HX_VISIT_MEMBER_NAME(flipX,"flipX");
	HX_VISIT_MEMBER_NAME(flipY,"flipY");
	HX_VISIT_MEMBER_NAME(origin,"origin");
	HX_VISIT_MEMBER_NAME(offset,"offset");
	HX_VISIT_MEMBER_NAME(scale,"scale");
	HX_VISIT_MEMBER_NAME(blend,"blend");
	HX_VISIT_MEMBER_NAME(color,"color");
	HX_VISIT_MEMBER_NAME(colorTransform,"colorTransform");
	HX_VISIT_MEMBER_NAME(useColorTransform,"useColorTransform");
	HX_VISIT_MEMBER_NAME(clipRect,"clipRect");
	HX_VISIT_MEMBER_NAME(shader,"shader");
	HX_VISIT_MEMBER_NAME(_frame,"_frame");
	HX_VISIT_MEMBER_NAME(_frameGraphic,"_frameGraphic");
	HX_VISIT_MEMBER_NAME(_facingHorizontalMult,"_facingHorizontalMult");
	HX_VISIT_MEMBER_NAME(_facingVerticalMult,"_facingVerticalMult");
	HX_VISIT_MEMBER_NAME(_flashPoint,"_flashPoint");
	HX_VISIT_MEMBER_NAME(_flashRect,"_flashRect");
	HX_VISIT_MEMBER_NAME(_flashRect2,"_flashRect2");
	HX_VISIT_MEMBER_NAME(_flashPointZero,"_flashPointZero");
	HX_VISIT_MEMBER_NAME(_matrix,"_matrix");
	HX_VISIT_MEMBER_NAME(_halfSize,"_halfSize");
	HX_VISIT_MEMBER_NAME(_scaledOrigin,"_scaledOrigin");
	HX_VISIT_MEMBER_NAME(_sinAngle,"_sinAngle");
	HX_VISIT_MEMBER_NAME(_cosAngle,"_cosAngle");
	HX_VISIT_MEMBER_NAME(_angleChanged,"_angleChanged");
	HX_VISIT_MEMBER_NAME(_facingFlip,"_facingFlip");
	 ::flixel::FlxObject_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val FlxSprite_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"draw") ) { return ::hx::Val( draw_dyn() ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"dirty") ) { return ::hx::Val( dirty ); }
		if (HX_FIELD_EQ(inName,"frame") ) { return ::hx::Val( frame ); }
		if (HX_FIELD_EQ(inName,"alpha") ) { return ::hx::Val( alpha ); }
		if (HX_FIELD_EQ(inName,"flipX") ) { return ::hx::Val( flipX ); }
		if (HX_FIELD_EQ(inName,"flipY") ) { return ::hx::Val( flipY ); }
		if (HX_FIELD_EQ(inName,"scale") ) { return ::hx::Val( scale ); }
		if (HX_FIELD_EQ(inName,"blend") ) { return ::hx::Val( blend ); }
		if (HX_FIELD_EQ(inName,"color") ) { return ::hx::Val( color ); }
		if (HX_FIELD_EQ(inName,"clone") ) { return ::hx::Val( clone_dyn() ); }
		if (HX_FIELD_EQ(inName,"stamp") ) { return ::hx::Val( stamp_dyn() ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"pixels") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_pixels() ); }
		if (HX_FIELD_EQ(inName,"frames") ) { return ::hx::Val( frames ); }
		if (HX_FIELD_EQ(inName,"facing") ) { return ::hx::Val( facing ); }
		if (HX_FIELD_EQ(inName,"origin") ) { return ::hx::Val( origin ); }
		if (HX_FIELD_EQ(inName,"offset") ) { return ::hx::Val( offset ); }
		if (HX_FIELD_EQ(inName,"shader") ) { return ::hx::Val( shader ); }
		if (HX_FIELD_EQ(inName,"_frame") ) { return ::hx::Val( _frame ); }
		if (HX_FIELD_EQ(inName,"update") ) { return ::hx::Val( update_dyn() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"graphic") ) { return ::hx::Val( graphic ); }
		if (HX_FIELD_EQ(inName,"_matrix") ) { return ::hx::Val( _matrix ); }
		if (HX_FIELD_EQ(inName,"destroy") ) { return ::hx::Val( destroy_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"clipRect") ) { return ::hx::Val( clipRect ); }
		if (HX_FIELD_EQ(inName,"initVars") ) { return ::hx::Val( initVars_dyn() ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"animation") ) { return ::hx::Val( animation ); }
		if (HX_FIELD_EQ(inName,"numFrames") ) { return ::hx::Val( numFrames ); }
		if (HX_FIELD_EQ(inName,"_halfSize") ) { return ::hx::Val( _halfSize ); }
		if (HX_FIELD_EQ(inName,"_sinAngle") ) { return ::hx::Val( _sinAngle ); }
		if (HX_FIELD_EQ(inName,"_cosAngle") ) { return ::hx::Val( _cosAngle ); }
		if (HX_FIELD_EQ(inName,"resetSize") ) { return ::hx::Val( resetSize_dyn() ); }
		if (HX_FIELD_EQ(inName,"drawFrame") ) { return ::hx::Val( drawFrame_dyn() ); }
		if (HX_FIELD_EQ(inName,"calcFrame") ) { return ::hx::Val( calcFrame_dyn() ); }
		if (HX_FIELD_EQ(inName,"setFrames") ) { return ::hx::Val( setFrames_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_frame") ) { return ::hx::Val( set_frame_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_alpha") ) { return ::hx::Val( set_alpha_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_color") ) { return ::hx::Val( set_color_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_angle") ) { return ::hx::Val( set_angle_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_blend") ) { return ::hx::Val( set_blend_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_flipX") ) { return ::hx::Val( set_flipX_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_flipY") ) { return ::hx::Val( set_flipY_dyn() ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"frameWidth") ) { return ::hx::Val( frameWidth ); }
		if (HX_FIELD_EQ(inName,"_flashRect") ) { return ::hx::Val( _flashRect ); }
		if (HX_FIELD_EQ(inName,"resetFrame") ) { return ::hx::Val( resetFrame_dyn() ); }
		if (HX_FIELD_EQ(inName,"drawSimple") ) { return ::hx::Val( drawSimple_dyn() ); }
		if (HX_FIELD_EQ(inName,"getPixelAt") ) { return ::hx::Val( getPixelAt_dyn() ); }
		if (HX_FIELD_EQ(inName,"isOnScreen") ) { return ::hx::Val( isOnScreen_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_pixels") ) { return ::hx::Val( get_pixels_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_pixels") ) { return ::hx::Val( set_pixels_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_facing") ) { return ::hx::Val( set_facing_dyn() ); }
		if (HX_FIELD_EQ(inName,"updateTrig") ) { return ::hx::Val( updateTrig_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_frames") ) { return ::hx::Val( set_frames_dyn() ); }
		if (HX_FIELD_EQ(inName,"checkFlipX") ) { return ::hx::Val( checkFlipX_dyn() ); }
		if (HX_FIELD_EQ(inName,"checkFlipY") ) { return ::hx::Val( checkFlipY_dyn() ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"framePixels") ) { return ::hx::Val( framePixels ); }
		if (HX_FIELD_EQ(inName,"frameHeight") ) { return ::hx::Val( frameHeight ); }
		if (HX_FIELD_EQ(inName,"_flashPoint") ) { return ::hx::Val( _flashPoint ); }
		if (HX_FIELD_EQ(inName,"_flashRect2") ) { return ::hx::Val( _flashRect2 ); }
		if (HX_FIELD_EQ(inName,"_facingFlip") ) { return ::hx::Val( _facingFlip ); }
		if (HX_FIELD_EQ(inName,"loadGraphic") ) { return ::hx::Val( loadGraphic_dyn() ); }
		if (HX_FIELD_EQ(inName,"makeGraphic") ) { return ::hx::Val( makeGraphic_dyn() ); }
		if (HX_FIELD_EQ(inName,"drawComplex") ) { return ::hx::Val( drawComplex_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_graphic") ) { return ::hx::Val( set_graphic_dyn() ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"antialiasing") ) { return ::hx::Val( antialiasing ); }
		if (HX_FIELD_EQ(inName,"updateHitbox") ) { return ::hx::Val( updateHitbox_dyn() ); }
		if (HX_FIELD_EQ(inName,"resetHelpers") ) { return ::hx::Val( resetHelpers_dyn() ); }
		if (HX_FIELD_EQ(inName,"centerOrigin") ) { return ::hx::Val( centerOrigin_dyn() ); }
		if (HX_FIELD_EQ(inName,"replaceColor") ) { return ::hx::Val( replaceColor_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_clipRect") ) { return ::hx::Val( set_clipRect_dyn() ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"_frameGraphic") ) { return ::hx::Val( _frameGraphic ); }
		if (HX_FIELD_EQ(inName,"_scaledOrigin") ) { return ::hx::Val( _scaledOrigin ); }
		if (HX_FIELD_EQ(inName,"_angleChanged") ) { return ::hx::Val( _angleChanged ); }
		if (HX_FIELD_EQ(inName,"graphicLoaded") ) { return ::hx::Val( graphicLoaded_dyn() ); }
		if (HX_FIELD_EQ(inName,"centerOffsets") ) { return ::hx::Val( centerOffsets_dyn() ); }
		if (HX_FIELD_EQ(inName,"setFacingFlip") ) { return ::hx::Val( setFacingFlip_dyn() ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"useFramePixels") ) { return ::hx::Val( useFramePixels ); }
		if (HX_FIELD_EQ(inName,"colorTransform") ) { return ::hx::Val( colorTransform ); }
		if (HX_FIELD_EQ(inName,"resetFrameSize") ) { return ::hx::Val( resetFrameSize_dyn() ); }
		if (HX_FIELD_EQ(inName,"setGraphicSize") ) { return ::hx::Val( setGraphicSize_dyn() ); }
		if (HX_FIELD_EQ(inName,"isSimpleRender") ) { return ::hx::Val( isSimpleRender_dyn() ); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"_flashPointZero") ) { return ::hx::Val( _flashPointZero ); }
		if (HX_FIELD_EQ(inName,"updateAnimation") ) { return ::hx::Val( updateAnimation_dyn() ); }
		if (HX_FIELD_EQ(inName,"checkEmptyFrame") ) { return ::hx::Val( checkEmptyFrame_dyn() ); }
		if (HX_FIELD_EQ(inName,"getScreenBounds") ) { return ::hx::Val( getScreenBounds_dyn() ); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"loadRotatedFrame") ) { return ::hx::Val( loadRotatedFrame_dyn() ); }
		if (HX_FIELD_EQ(inName,"getPixelAtScreen") ) { return ::hx::Val( getPixelAtScreen_dyn() ); }
		if (HX_FIELD_EQ(inName,"getRotatedBounds") ) { return ::hx::Val( getRotatedBounds_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_antialiasing") ) { return ::hx::Val( set_antialiasing_dyn() ); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"useColorTransform") ) { return ::hx::Val( useColorTransform ); }
		if (HX_FIELD_EQ(inName,"setColorTransform") ) { return ::hx::Val( setColorTransform_dyn() ); }
		if (HX_FIELD_EQ(inName,"updateFramePixels") ) { return ::hx::Val( updateFramePixels_dyn() ); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"bakedRotationAngle") ) { return ::hx::Val( bakedRotationAngle ); }
		if (HX_FIELD_EQ(inName,"loadRotatedGraphic") ) { return ::hx::Val( loadRotatedGraphic_dyn() ); }
		if (HX_FIELD_EQ(inName,"resetSizeFromFrame") ) { return ::hx::Val( resetSizeFromFrame_dyn() ); }
		if (HX_FIELD_EQ(inName,"pixelsOverlapPoint") ) { return ::hx::Val( pixelsOverlapPoint_dyn() ); }
		if (HX_FIELD_EQ(inName,"getGraphicMidpoint") ) { return ::hx::Val( getGraphicMidpoint_dyn() ); }
		if (HX_FIELD_EQ(inName,"isSimpleRenderBlit") ) { return ::hx::Val( isSimpleRenderBlit_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_useFramePixels") ) { return ::hx::Val( set_useFramePixels_dyn() ); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"_facingVerticalMult") ) { return ::hx::Val( _facingVerticalMult ); }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"updateColorTransform") ) { return ::hx::Val( updateColorTransform_dyn() ); }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"_facingHorizontalMult") ) { return ::hx::Val( _facingHorizontalMult ); }
		if (HX_FIELD_EQ(inName,"loadGraphicFromSprite") ) { return ::hx::Val( loadGraphicFromSprite_dyn() ); }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"transformWorldToPixels") ) { return ::hx::Val( transformWorldToPixels_dyn() ); }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"transformScreenToPixels") ) { return ::hx::Val( transformScreenToPixels_dyn() ); }
		break;
	case 28:
		if (HX_FIELD_EQ(inName,"transformWorldToPixelsSimple") ) { return ::hx::Val( transformWorldToPixelsSimple_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

bool FlxSprite_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 19:
		if (HX_FIELD_EQ(inName,"defaultAntialiasing") ) { outValue = ( defaultAntialiasing ); return true; }
	}
	return false;
}

::hx::Val FlxSprite_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"dirty") ) { dirty=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"frame") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_frame(inValue.Cast<  ::flixel::graphics::frames::FlxFrame >()) );frame=inValue.Cast<  ::flixel::graphics::frames::FlxFrame >(); return inValue; }
		if (HX_FIELD_EQ(inName,"alpha") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_alpha(inValue.Cast< Float >()) );alpha=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"flipX") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_flipX(inValue.Cast< bool >()) );flipX=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"flipY") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_flipY(inValue.Cast< bool >()) );flipY=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"scale") ) { scale=inValue.Cast<  ::flixel::math::FlxBasePoint >(); return inValue; }
		if (HX_FIELD_EQ(inName,"blend") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_blend(inValue.Cast<  ::Dynamic >()) );blend=inValue.Cast<  ::Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"color") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_color(inValue.Cast< int >()) );color=inValue.Cast< int >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"pixels") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_pixels(inValue.Cast<  ::openfl::display::BitmapData >()) ); }
		if (HX_FIELD_EQ(inName,"frames") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_frames(inValue.Cast<  ::flixel::graphics::frames::FlxFramesCollection >()) );frames=inValue.Cast<  ::flixel::graphics::frames::FlxFramesCollection >(); return inValue; }
		if (HX_FIELD_EQ(inName,"facing") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_facing(inValue.Cast< int >()) );facing=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"origin") ) { origin=inValue.Cast<  ::flixel::math::FlxBasePoint >(); return inValue; }
		if (HX_FIELD_EQ(inName,"offset") ) { offset=inValue.Cast<  ::flixel::math::FlxBasePoint >(); return inValue; }
		if (HX_FIELD_EQ(inName,"shader") ) { shader=inValue.Cast<  ::flixel::graphics::tile::FlxGraphicsShader >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_frame") ) { _frame=inValue.Cast<  ::flixel::graphics::frames::FlxFrame >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"graphic") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_graphic(inValue.Cast<  ::flixel::graphics::FlxGraphic >()) );graphic=inValue.Cast<  ::flixel::graphics::FlxGraphic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_matrix") ) { _matrix=inValue.Cast<  ::flixel::math::FlxMatrix >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"clipRect") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_clipRect(inValue.Cast<  ::flixel::math::FlxRect >()) );clipRect=inValue.Cast<  ::flixel::math::FlxRect >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"animation") ) { animation=inValue.Cast<  ::flixel::animation::FlxAnimationController >(); return inValue; }
		if (HX_FIELD_EQ(inName,"numFrames") ) { numFrames=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_halfSize") ) { _halfSize=inValue.Cast<  ::flixel::math::FlxBasePoint >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_sinAngle") ) { _sinAngle=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_cosAngle") ) { _cosAngle=inValue.Cast< Float >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"frameWidth") ) { frameWidth=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_flashRect") ) { _flashRect=inValue.Cast<  ::openfl::geom::Rectangle >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"framePixels") ) { framePixels=inValue.Cast<  ::openfl::display::BitmapData >(); return inValue; }
		if (HX_FIELD_EQ(inName,"frameHeight") ) { frameHeight=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_flashPoint") ) { _flashPoint=inValue.Cast<  ::openfl::geom::Point >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_flashRect2") ) { _flashRect2=inValue.Cast<  ::openfl::geom::Rectangle >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_facingFlip") ) { _facingFlip=inValue.Cast<  ::haxe::ds::IntMap >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"antialiasing") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_antialiasing(inValue.Cast< bool >()) );antialiasing=inValue.Cast< bool >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"_frameGraphic") ) { _frameGraphic=inValue.Cast<  ::flixel::graphics::FlxGraphic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_scaledOrigin") ) { _scaledOrigin=inValue.Cast<  ::flixel::math::FlxBasePoint >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_angleChanged") ) { _angleChanged=inValue.Cast< bool >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"useFramePixels") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_useFramePixels(inValue.Cast< bool >()) );useFramePixels=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"colorTransform") ) { colorTransform=inValue.Cast<  ::openfl::geom::ColorTransform >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"_flashPointZero") ) { _flashPointZero=inValue.Cast<  ::openfl::geom::Point >(); return inValue; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"useColorTransform") ) { useColorTransform=inValue.Cast< bool >(); return inValue; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"bakedRotationAngle") ) { bakedRotationAngle=inValue.Cast< Float >(); return inValue; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"_facingVerticalMult") ) { _facingVerticalMult=inValue.Cast< int >(); return inValue; }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"_facingHorizontalMult") ) { _facingHorizontalMult=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool FlxSprite_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 19:
		if (HX_FIELD_EQ(inName,"defaultAntialiasing") ) { defaultAntialiasing=ioValue.Cast< bool >(); return true; }
	}
	return false;
}

void FlxSprite_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("animation",04,ef,34,4b));
	outFields->push(HX_("framePixels",3a,bb,f1,6a));
	outFields->push(HX_("useFramePixels",33,0e,5a,8e));
	outFields->push(HX_("antialiasing",f4,16,b3,48));
	outFields->push(HX_("dirty",12,50,d0,d9));
	outFields->push(HX_("pixels",2d,ef,a9,8c));
	outFields->push(HX_("frame",2d,78,83,06));
	outFields->push(HX_("frameWidth",99,ea,88,ad));
	outFields->push(HX_("frameHeight",f4,d3,93,e0));
	outFields->push(HX_("numFrames",8c,fa,86,5d));
	outFields->push(HX_("frames",a6,af,85,ac));
	outFields->push(HX_("graphic",a8,5a,07,74));
	outFields->push(HX_("bakedRotationAngle",8a,d1,9c,9b));
	outFields->push(HX_("alpha",5e,a7,96,21));
	outFields->push(HX_("facing",1a,3f,05,e4));
	outFields->push(HX_("flipX",0b,45,92,02));
	outFields->push(HX_("flipY",0c,45,92,02));
	outFields->push(HX_("origin",e6,19,01,4b));
	outFields->push(HX_("offset",93,97,3f,60));
	outFields->push(HX_("scale",8a,ce,ce,78));
	outFields->push(HX_("blend",51,e8,f4,b4));
	outFields->push(HX_("color",63,71,5c,4a));
	outFields->push(HX_("colorTransform",89,d7,3f,ad));
	outFields->push(HX_("useColorTransform",30,e6,ec,72));
	outFields->push(HX_("clipRect",14,90,6a,58));
	outFields->push(HX_("shader",25,bf,20,1d));
	outFields->push(HX_("_frame",6e,bf,6a,02));
	outFields->push(HX_("_frameGraphic",da,ac,00,f7));
	outFields->push(HX_("_facingHorizontalMult",8d,29,a1,51));
	outFields->push(HX_("_facingVerticalMult",df,11,0c,86));
	outFields->push(HX_("_flashPoint",9f,1d,2a,b7));
	outFields->push(HX_("_flashRect",b5,c2,f3,5d));
	outFields->push(HX_("_flashRect2",dd,9b,56,d7));
	outFields->push(HX_("_flashPointZero",67,14,7d,fb));
	outFields->push(HX_("_matrix",e0,47,3f,2a));
	outFields->push(HX_("_halfSize",73,43,4d,66));
	outFields->push(HX_("_scaledOrigin",ff,fa,5e,6a));
	outFields->push(HX_("_sinAngle",fa,54,de,b8));
	outFields->push(HX_("_cosAngle",6b,c9,00,1f));
	outFields->push(HX_("_angleChanged",40,98,5c,b2));
	outFields->push(HX_("_facingFlip",06,e0,9c,02));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo FlxSprite_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::flixel::animation::FlxAnimationController */ ,(int)offsetof(FlxSprite_obj,animation),HX_("animation",04,ef,34,4b)},
	{::hx::fsObject /*  ::openfl::display::BitmapData */ ,(int)offsetof(FlxSprite_obj,framePixels),HX_("framePixels",3a,bb,f1,6a)},
	{::hx::fsBool,(int)offsetof(FlxSprite_obj,useFramePixels),HX_("useFramePixels",33,0e,5a,8e)},
	{::hx::fsBool,(int)offsetof(FlxSprite_obj,antialiasing),HX_("antialiasing",f4,16,b3,48)},
	{::hx::fsBool,(int)offsetof(FlxSprite_obj,dirty),HX_("dirty",12,50,d0,d9)},
	{::hx::fsObject /*  ::flixel::graphics::frames::FlxFrame */ ,(int)offsetof(FlxSprite_obj,frame),HX_("frame",2d,78,83,06)},
	{::hx::fsInt,(int)offsetof(FlxSprite_obj,frameWidth),HX_("frameWidth",99,ea,88,ad)},
	{::hx::fsInt,(int)offsetof(FlxSprite_obj,frameHeight),HX_("frameHeight",f4,d3,93,e0)},
	{::hx::fsInt,(int)offsetof(FlxSprite_obj,numFrames),HX_("numFrames",8c,fa,86,5d)},
	{::hx::fsObject /*  ::flixel::graphics::frames::FlxFramesCollection */ ,(int)offsetof(FlxSprite_obj,frames),HX_("frames",a6,af,85,ac)},
	{::hx::fsObject /*  ::flixel::graphics::FlxGraphic */ ,(int)offsetof(FlxSprite_obj,graphic),HX_("graphic",a8,5a,07,74)},
	{::hx::fsFloat,(int)offsetof(FlxSprite_obj,bakedRotationAngle),HX_("bakedRotationAngle",8a,d1,9c,9b)},
	{::hx::fsFloat,(int)offsetof(FlxSprite_obj,alpha),HX_("alpha",5e,a7,96,21)},
	{::hx::fsInt,(int)offsetof(FlxSprite_obj,facing),HX_("facing",1a,3f,05,e4)},
	{::hx::fsBool,(int)offsetof(FlxSprite_obj,flipX),HX_("flipX",0b,45,92,02)},
	{::hx::fsBool,(int)offsetof(FlxSprite_obj,flipY),HX_("flipY",0c,45,92,02)},
	{::hx::fsObject /*  ::flixel::math::FlxBasePoint */ ,(int)offsetof(FlxSprite_obj,origin),HX_("origin",e6,19,01,4b)},
	{::hx::fsObject /*  ::flixel::math::FlxBasePoint */ ,(int)offsetof(FlxSprite_obj,offset),HX_("offset",93,97,3f,60)},
	{::hx::fsObject /*  ::flixel::math::FlxBasePoint */ ,(int)offsetof(FlxSprite_obj,scale),HX_("scale",8a,ce,ce,78)},
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(FlxSprite_obj,blend),HX_("blend",51,e8,f4,b4)},
	{::hx::fsInt,(int)offsetof(FlxSprite_obj,color),HX_("color",63,71,5c,4a)},
	{::hx::fsObject /*  ::openfl::geom::ColorTransform */ ,(int)offsetof(FlxSprite_obj,colorTransform),HX_("colorTransform",89,d7,3f,ad)},
	{::hx::fsBool,(int)offsetof(FlxSprite_obj,useColorTransform),HX_("useColorTransform",30,e6,ec,72)},
	{::hx::fsObject /*  ::flixel::math::FlxRect */ ,(int)offsetof(FlxSprite_obj,clipRect),HX_("clipRect",14,90,6a,58)},
	{::hx::fsObject /*  ::flixel::graphics::tile::FlxGraphicsShader */ ,(int)offsetof(FlxSprite_obj,shader),HX_("shader",25,bf,20,1d)},
	{::hx::fsObject /*  ::flixel::graphics::frames::FlxFrame */ ,(int)offsetof(FlxSprite_obj,_frame),HX_("_frame",6e,bf,6a,02)},
	{::hx::fsObject /*  ::flixel::graphics::FlxGraphic */ ,(int)offsetof(FlxSprite_obj,_frameGraphic),HX_("_frameGraphic",da,ac,00,f7)},
	{::hx::fsInt,(int)offsetof(FlxSprite_obj,_facingHorizontalMult),HX_("_facingHorizontalMult",8d,29,a1,51)},
	{::hx::fsInt,(int)offsetof(FlxSprite_obj,_facingVerticalMult),HX_("_facingVerticalMult",df,11,0c,86)},
	{::hx::fsObject /*  ::openfl::geom::Point */ ,(int)offsetof(FlxSprite_obj,_flashPoint),HX_("_flashPoint",9f,1d,2a,b7)},
	{::hx::fsObject /*  ::openfl::geom::Rectangle */ ,(int)offsetof(FlxSprite_obj,_flashRect),HX_("_flashRect",b5,c2,f3,5d)},
	{::hx::fsObject /*  ::openfl::geom::Rectangle */ ,(int)offsetof(FlxSprite_obj,_flashRect2),HX_("_flashRect2",dd,9b,56,d7)},
	{::hx::fsObject /*  ::openfl::geom::Point */ ,(int)offsetof(FlxSprite_obj,_flashPointZero),HX_("_flashPointZero",67,14,7d,fb)},
	{::hx::fsObject /*  ::flixel::math::FlxMatrix */ ,(int)offsetof(FlxSprite_obj,_matrix),HX_("_matrix",e0,47,3f,2a)},
	{::hx::fsObject /*  ::flixel::math::FlxBasePoint */ ,(int)offsetof(FlxSprite_obj,_halfSize),HX_("_halfSize",73,43,4d,66)},
	{::hx::fsObject /*  ::flixel::math::FlxBasePoint */ ,(int)offsetof(FlxSprite_obj,_scaledOrigin),HX_("_scaledOrigin",ff,fa,5e,6a)},
	{::hx::fsFloat,(int)offsetof(FlxSprite_obj,_sinAngle),HX_("_sinAngle",fa,54,de,b8)},
	{::hx::fsFloat,(int)offsetof(FlxSprite_obj,_cosAngle),HX_("_cosAngle",6b,c9,00,1f)},
	{::hx::fsBool,(int)offsetof(FlxSprite_obj,_angleChanged),HX_("_angleChanged",40,98,5c,b2)},
	{::hx::fsObject /*  ::haxe::ds::IntMap */ ,(int)offsetof(FlxSprite_obj,_facingFlip),HX_("_facingFlip",06,e0,9c,02)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo FlxSprite_obj_sStaticStorageInfo[] = {
	{::hx::fsBool,(void *) &FlxSprite_obj::defaultAntialiasing,HX_("defaultAntialiasing",55,d9,0b,c5)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static ::String FlxSprite_obj_sMemberFields[] = {
	HX_("animation",04,ef,34,4b),
	HX_("framePixels",3a,bb,f1,6a),
	HX_("useFramePixels",33,0e,5a,8e),
	HX_("antialiasing",f4,16,b3,48),
	HX_("dirty",12,50,d0,d9),
	HX_("frame",2d,78,83,06),
	HX_("frameWidth",99,ea,88,ad),
	HX_("frameHeight",f4,d3,93,e0),
	HX_("numFrames",8c,fa,86,5d),
	HX_("frames",a6,af,85,ac),
	HX_("graphic",a8,5a,07,74),
	HX_("bakedRotationAngle",8a,d1,9c,9b),
	HX_("alpha",5e,a7,96,21),
	HX_("facing",1a,3f,05,e4),
	HX_("flipX",0b,45,92,02),
	HX_("flipY",0c,45,92,02),
	HX_("origin",e6,19,01,4b),
	HX_("offset",93,97,3f,60),
	HX_("scale",8a,ce,ce,78),
	HX_("blend",51,e8,f4,b4),
	HX_("color",63,71,5c,4a),
	HX_("colorTransform",89,d7,3f,ad),
	HX_("useColorTransform",30,e6,ec,72),
	HX_("clipRect",14,90,6a,58),
	HX_("shader",25,bf,20,1d),
	HX_("_frame",6e,bf,6a,02),
	HX_("_frameGraphic",da,ac,00,f7),
	HX_("_facingHorizontalMult",8d,29,a1,51),
	HX_("_facingVerticalMult",df,11,0c,86),
	HX_("_flashPoint",9f,1d,2a,b7),
	HX_("_flashRect",b5,c2,f3,5d),
	HX_("_flashRect2",dd,9b,56,d7),
	HX_("_flashPointZero",67,14,7d,fb),
	HX_("_matrix",e0,47,3f,2a),
	HX_("_halfSize",73,43,4d,66),
	HX_("_scaledOrigin",ff,fa,5e,6a),
	HX_("_sinAngle",fa,54,de,b8),
	HX_("_cosAngle",6b,c9,00,1f),
	HX_("_angleChanged",40,98,5c,b2),
	HX_("_facingFlip",06,e0,9c,02),
	HX_("initVars",dc,5a,00,53),
	HX_("destroy",fa,2c,86,24),
	HX_("clone",5d,13,63,48),
	HX_("loadGraphicFromSprite",d1,7c,73,38),
	HX_("loadGraphic",22,19,a5,44),
	HX_("loadRotatedGraphic",c5,14,74,62),
	HX_("loadRotatedFrame",0a,81,76,8b),
	HX_("makeGraphic",5a,82,11,b8),
	HX_("graphicLoaded",cd,84,20,16),
	HX_("resetSize",30,aa,3f,92),
	HX_("resetFrameSize",bf,c3,44,94),
	HX_("resetSizeFromFrame",13,d2,50,8c),
	HX_("resetFrame",de,af,1f,ef),
	HX_("setGraphicSize",07,d7,f8,2d),
	HX_("updateHitbox",81,94,eb,56),
	HX_("resetHelpers",36,89,3d,32),
	HX_("update",09,86,05,87),
	HX_("updateAnimation",bb,bf,bf,9a),
	HX_("checkEmptyFrame",48,b5,2f,00),
	HX_("draw",04,2c,70,42),
	HX_("drawSimple",56,7f,42,fa),
	HX_("drawComplex",8c,aa,b9,cc),
	HX_("stamp",03,70,0b,84),
	HX_("drawFrame",89,ad,8e,ce),
	HX_("centerOffsets",2b,a0,b2,c1),
	HX_("centerOrigin",9b,41,36,0f),
	HX_("replaceColor",8f,5c,eb,3d),
	HX_("setColorTransform",cb,5e,21,43),
	HX_("updateColorTransform",72,0f,d2,2f),
	HX_("pixelsOverlapPoint",16,82,44,e0),
	HX_("getPixelAt",23,b3,68,d7),
	HX_("getPixelAtScreen",ef,de,d1,02),
	HX_("transformWorldToPixels",6e,ba,1c,c0),
	HX_("transformWorldToPixelsSimple",40,b9,b0,20),
	HX_("transformScreenToPixels",20,c1,67,1b),
	HX_("calcFrame",58,93,8c,f9),
	HX_("updateFramePixels",b1,67,5b,cf),
	HX_("getGraphicMidpoint",9a,b4,dd,57),
	HX_("isOnScreen",f5,43,b9,a1),
	HX_("isSimpleRender",32,f4,2a,47),
	HX_("isSimpleRenderBlit",87,59,b0,df),
	HX_("getRotatedBounds",88,12,38,3c),
	HX_("getScreenBounds",b7,e4,25,66),
	HX_("setFacingFlip",29,51,8b,d1),
	HX_("setFrames",e8,24,2d,0c),
	HX_("get_pixels",f6,5e,31,7d),
	HX_("set_pixels",6a,fd,ae,80),
	HX_("set_frame",90,c0,7d,2d),
	HX_("set_facing",57,4d,0a,d8),
	HX_("set_alpha",c1,ef,90,48),
	HX_("set_color",c6,b9,56,71),
	HX_("set_angle",36,8c,dc,49),
	HX_("updateTrig",85,87,b8,05),
	HX_("set_blend",b4,30,ef,db),
	HX_("set_graphic",cb,c1,6e,04),
	HX_("set_clipRect",91,67,7d,22),
	HX_("set_frames",e3,bd,8a,a0),
	HX_("set_flipX",6e,8d,8c,29),
	HX_("set_flipY",6f,8d,8c,29),
	HX_("set_antialiasing",f1,f0,93,a3),
	HX_("set_useFramePixels",70,21,a3,06),
	HX_("checkFlipX",23,47,82,12),
	HX_("checkFlipY",24,47,82,12),
	::String(null()) };

static void FlxSprite_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FlxSprite_obj::defaultAntialiasing,"defaultAntialiasing");
};

#ifdef HXCPP_VISIT_ALLOCS
static void FlxSprite_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FlxSprite_obj::defaultAntialiasing,"defaultAntialiasing");
};

#endif

::hx::Class FlxSprite_obj::__mClass;

static ::String FlxSprite_obj_sStaticFields[] = {
	HX_("defaultAntialiasing",55,d9,0b,c5),
	::String(null())
};

void FlxSprite_obj::__register()
{
	FlxSprite_obj _hx_dummy;
	FlxSprite_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("flixel.FlxSprite",65,ad,eb,e3);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &FlxSprite_obj::__GetStatic;
	__mClass->mSetStaticField = &FlxSprite_obj::__SetStatic;
	__mClass->mMarkFunc = FlxSprite_obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(FlxSprite_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(FlxSprite_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< FlxSprite_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = FlxSprite_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = FlxSprite_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = FlxSprite_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void FlxSprite_obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_cfd221447aa7194b_136_boot)
HXDLIN( 136)		defaultAntialiasing = false;
            	}
}

} // end namespace flixel
