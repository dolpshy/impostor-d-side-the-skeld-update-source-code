#include <hxcpp.h>

#ifndef INCLUDED_flixel_FlxBasic
#include <flixel/FlxBasic.h>
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
#ifndef INCLUDED_flixel_system_frontEnds_BitmapFrontEnd
#include <flixel/system/frontEnds/BitmapFrontEnd.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_hxcodec_VideoHandler
#include <hxcodec/VideoHandler.h>
#endif
#ifndef INCLUDED_hxcodec_VideoSprite
#include <hxcodec/VideoSprite.h>
#endif
#ifndef INCLUDED_hxcodec_vlc_VLCBitmap
#include <hxcodec/vlc/VLCBitmap.h>
#endif
#ifndef INCLUDED_openfl_display_Bitmap
#include <openfl/display/Bitmap.h>
#endif
#ifndef INCLUDED_openfl_display_BitmapData
#include <openfl/display/BitmapData.h>
#endif
#ifndef INCLUDED_openfl_display_DisplayObject
#include <openfl/display/DisplayObject.h>
#endif
#ifndef INCLUDED_openfl_display_IBitmapDrawable
#include <openfl/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_openfl_events_EventDispatcher
#include <openfl/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_events_IEventDispatcher
#include <openfl/events/IEventDispatcher.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_b11cdf1911b1a9f4_33_new,"hxcodec.VideoSprite","new",0x23a33cca,"hxcodec.VideoSprite.new","hxcodec/VideoSprite.hx",33,0xed8989a7)
HX_DEFINE_STACK_FRAME(_hx_pos_b11cdf1911b1a9f4_37_new,"hxcodec.VideoSprite","new",0x23a33cca,"hxcodec.VideoSprite.new","hxcodec/VideoSprite.hx",37,0xed8989a7)
HX_DEFINE_STACK_FRAME(_hx_pos_b11cdf1911b1a9f4_12_new,"hxcodec.VideoSprite","new",0x23a33cca,"hxcodec.VideoSprite.new","hxcodec/VideoSprite.hx",12,0xed8989a7)
HX_LOCAL_STACK_FRAME(_hx_pos_b11cdf1911b1a9f4_49_update,"hxcodec.VideoSprite","update",0xc83237df,"hxcodec.VideoSprite.update","hxcodec/VideoSprite.hx",49,0xed8989a7)
HX_LOCAL_STACK_FRAME(_hx_pos_b11cdf1911b1a9f4_85_playVideo,"hxcodec.VideoSprite","playVideo",0xa66bd9d1,"hxcodec.VideoSprite.playVideo","hxcodec/VideoSprite.hx",85,0xed8989a7)
namespace hxcodec{

void VideoSprite_obj::__construct(::hx::Null< Float >  __o_X,::hx::Null< Float >  __o_Y){
            		HX_BEGIN_LOCAL_FUNC_S1(::hx::LocalFunc,_hx_Closure_0, ::hxcodec::VideoSprite,_gthis) HXARGC(0)
            		void _hx_run(){
            			HX_GC_STACKFRAME(&_hx_pos_b11cdf1911b1a9f4_33_new)
HXLINE(  33)			if (::hx::IsNotNull( _gthis->openingCallback )) {
HXLINE(  34)				_gthis->openingCallback();
            			}
            		}
            		HX_END_LOCAL_FUNC0((void))

            		HX_BEGIN_LOCAL_FUNC_S1(::hx::LocalFunc,_hx_Closure_1, ::hxcodec::VideoSprite,_gthis) HXARGC(0)
            		void _hx_run(){
            			HX_GC_STACKFRAME(&_hx_pos_b11cdf1911b1a9f4_37_new)
HXLINE(  38)			_gthis->oneTime = false;
HXLINE(  40)			if (::hx::IsNotNull( _gthis->finishCallback )) {
HXLINE(  41)				_gthis->finishCallback();
            			}
HXLINE(  43)			_gthis->kill();
            		}
            		HX_END_LOCAL_FUNC0((void))

            		Float X = __o_X.Default(0);
            		Float Y = __o_Y.Default(0);
            	HX_GC_STACKFRAME(&_hx_pos_b11cdf1911b1a9f4_12_new)
HXLINE(  47)		this->oneTime = false;
HXLINE(  20)		this->finishCallback = null();
HXLINE(  19)		this->graphicLoadedCallback = null();
HXLINE(  18)		this->openingCallback = null();
HXLINE(  23)		 ::hxcodec::VideoSprite _gthis = ::hx::ObjectPtr<OBJ_>(this);
HXLINE(  24)		super::__construct(X,Y,null());
HXLINE(  26)		this->makeGraphic(1,1,0,null(),null());
HXLINE(  28)		this->bitmap =  ::hxcodec::VideoHandler_obj::__alloc( HX_CTX ,null());
HXLINE(  29)		this->bitmap->canUseAutoResize = false;
HXLINE(  30)		this->bitmap->set_visible(false);
HXLINE(  31)		this->bitmap->openingCallback =  ::Dynamic(new _hx_Closure_0(_gthis));
HXLINE(  36)		this->bitmap->finishCallback =  ::Dynamic(new _hx_Closure_1(_gthis));
            	}

Dynamic VideoSprite_obj::__CreateEmpty() { return new VideoSprite_obj; }

void *VideoSprite_obj::_hx_vtable = 0;

Dynamic VideoSprite_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< VideoSprite_obj > _hx_result = new VideoSprite_obj();
	_hx_result->__construct(inArgs[0],inArgs[1]);
	return _hx_result;
}

bool VideoSprite_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x487c857a) {
		if (inClassId<=(int)0x2c01639b) {
			return inClassId==(int)0x00000001 || inClassId==(int)0x2c01639b;
		} else {
			return inClassId==(int)0x487c857a;
		}
	} else {
		return inClassId==(int)0x7ccf8994 || inClassId==(int)0x7dab0655;
	}
}

void VideoSprite_obj::update(Float elapsed){
            	HX_STACKFRAME(&_hx_pos_b11cdf1911b1a9f4_49_update)
HXLINE(  50)		this->super::update(elapsed);
HXLINE(  52)		bool _hx_tmp;
HXDLIN(  52)		bool _hx_tmp1;
HXDLIN(  52)		bool _hx_tmp2;
HXDLIN(  52)		if (this->bitmap->get_isPlaying()) {
HXLINE(  52)			_hx_tmp2 = this->bitmap->isDisplaying;
            		}
            		else {
HXLINE(  52)			_hx_tmp2 = false;
            		}
HXDLIN(  52)		if (_hx_tmp2) {
HXLINE(  52)			_hx_tmp1 = ::hx::IsNotNull( this->bitmap->get_bitmapData() );
            		}
            		else {
HXLINE(  52)			_hx_tmp1 = false;
            		}
HXDLIN(  52)		if (_hx_tmp1) {
HXLINE(  52)			_hx_tmp = !(this->oneTime);
            		}
            		else {
HXLINE(  52)			_hx_tmp = false;
            		}
HXDLIN(  52)		if (_hx_tmp) {
HXLINE(  54)			 ::flixel::_hx_system::frontEnds::BitmapFrontEnd graphic = ::flixel::FlxG_obj::bitmap;
HXDLIN(  54)			 ::openfl::display::BitmapData graphic1 = this->bitmap->get_bitmapData();
HXDLIN(  54)			 ::flixel::graphics::FlxGraphic graphic2 = graphic->add(graphic1,false,this->bitmap->get_mrl());
HXLINE(  55)			if (::hx::IsNull( graphic2->get_imageFrame()->get_frame() )) {
HXLINE(  60)				return;
            			}
HXLINE(  63)			this->loadGraphic(graphic2,null(),null(),null(),null(),null());
HXLINE(  65)			bool _hx_tmp;
HXDLIN(  65)			if (::hx::IsNotNull( this->canvasWidth )) {
HXLINE(  65)				_hx_tmp = ::hx::IsNotNull( this->canvasHeight );
            			}
            			else {
HXLINE(  65)				_hx_tmp = false;
            			}
HXDLIN(  65)			if (_hx_tmp) {
HXLINE(  67)				this->setGraphicSize(this->canvasWidth,this->canvasHeight);
HXLINE(  68)				this->updateHitbox();
            			}
HXLINE(  71)			if (::hx::IsNotNull( this->graphicLoadedCallback )) {
HXLINE(  72)				this->graphicLoadedCallback();
            			}
HXLINE(  74)			this->oneTime = true;
            		}
            	}


void VideoSprite_obj::playVideo(::String Path,::hx::Null< bool >  __o_Loop,::hx::Null< bool >  __o_PauseMusic){
            		bool Loop = __o_Loop.Default(false);
            		bool PauseMusic = __o_PauseMusic.Default(false);
            	HX_STACKFRAME(&_hx_pos_b11cdf1911b1a9f4_85_playVideo)
HXDLIN(  85)		this->bitmap->playVideo(Path,Loop,PauseMusic);
            	}


HX_DEFINE_DYNAMIC_FUNC3(VideoSprite_obj,playVideo,(void))


::hx::ObjectPtr< VideoSprite_obj > VideoSprite_obj::__new(::hx::Null< Float >  __o_X,::hx::Null< Float >  __o_Y) {
	::hx::ObjectPtr< VideoSprite_obj > __this = new VideoSprite_obj();
	__this->__construct(__o_X,__o_Y);
	return __this;
}

::hx::ObjectPtr< VideoSprite_obj > VideoSprite_obj::__alloc(::hx::Ctx *_hx_ctx,::hx::Null< Float >  __o_X,::hx::Null< Float >  __o_Y) {
	VideoSprite_obj *__this = (VideoSprite_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(VideoSprite_obj), true, "hxcodec.VideoSprite"));
	*(void **)__this = VideoSprite_obj::_hx_vtable;
	__this->__construct(__o_X,__o_Y);
	return __this;
}

VideoSprite_obj::VideoSprite_obj()
{
}

void VideoSprite_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(VideoSprite);
	HX_MARK_MEMBER_NAME(bitmap,"bitmap");
	HX_MARK_MEMBER_NAME(canvasWidth,"canvasWidth");
	HX_MARK_MEMBER_NAME(canvasHeight,"canvasHeight");
	HX_MARK_MEMBER_NAME(openingCallback,"openingCallback");
	HX_MARK_MEMBER_NAME(graphicLoadedCallback,"graphicLoadedCallback");
	HX_MARK_MEMBER_NAME(finishCallback,"finishCallback");
	HX_MARK_MEMBER_NAME(oneTime,"oneTime");
	 ::flixel::FlxSprite_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void VideoSprite_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(bitmap,"bitmap");
	HX_VISIT_MEMBER_NAME(canvasWidth,"canvasWidth");
	HX_VISIT_MEMBER_NAME(canvasHeight,"canvasHeight");
	HX_VISIT_MEMBER_NAME(openingCallback,"openingCallback");
	HX_VISIT_MEMBER_NAME(graphicLoadedCallback,"graphicLoadedCallback");
	HX_VISIT_MEMBER_NAME(finishCallback,"finishCallback");
	HX_VISIT_MEMBER_NAME(oneTime,"oneTime");
	 ::flixel::FlxSprite_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val VideoSprite_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"bitmap") ) { return ::hx::Val( bitmap ); }
		if (HX_FIELD_EQ(inName,"update") ) { return ::hx::Val( update_dyn() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"oneTime") ) { return ::hx::Val( oneTime ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"playVideo") ) { return ::hx::Val( playVideo_dyn() ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"canvasWidth") ) { return ::hx::Val( canvasWidth ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"canvasHeight") ) { return ::hx::Val( canvasHeight ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"finishCallback") ) { return ::hx::Val( finishCallback ); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"openingCallback") ) { return ::hx::Val( openingCallback ); }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"graphicLoadedCallback") ) { return ::hx::Val( graphicLoadedCallback ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val VideoSprite_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"bitmap") ) { bitmap=inValue.Cast<  ::hxcodec::VideoHandler >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"oneTime") ) { oneTime=inValue.Cast< bool >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"canvasWidth") ) { canvasWidth=inValue.Cast<  ::Dynamic >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"canvasHeight") ) { canvasHeight=inValue.Cast<  ::Dynamic >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"finishCallback") ) { finishCallback=inValue.Cast<  ::Dynamic >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"openingCallback") ) { openingCallback=inValue.Cast<  ::Dynamic >(); return inValue; }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"graphicLoadedCallback") ) { graphicLoadedCallback=inValue.Cast<  ::Dynamic >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void VideoSprite_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("bitmap",ef,0f,0c,f1));
	outFields->push(HX_("canvasWidth",0e,42,73,cd));
	outFields->push(HX_("canvasHeight",df,02,b6,ad));
	outFields->push(HX_("oneTime",93,bd,5e,62));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo VideoSprite_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::hxcodec::VideoHandler */ ,(int)offsetof(VideoSprite_obj,bitmap),HX_("bitmap",ef,0f,0c,f1)},
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(VideoSprite_obj,canvasWidth),HX_("canvasWidth",0e,42,73,cd)},
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(VideoSprite_obj,canvasHeight),HX_("canvasHeight",df,02,b6,ad)},
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(VideoSprite_obj,openingCallback),HX_("openingCallback",3d,71,34,3d)},
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(VideoSprite_obj,graphicLoadedCallback),HX_("graphicLoadedCallback",b2,ef,4d,f4)},
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(VideoSprite_obj,finishCallback),HX_("finishCallback",38,a1,bc,b4)},
	{::hx::fsBool,(int)offsetof(VideoSprite_obj,oneTime),HX_("oneTime",93,bd,5e,62)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *VideoSprite_obj_sStaticStorageInfo = 0;
#endif

static ::String VideoSprite_obj_sMemberFields[] = {
	HX_("bitmap",ef,0f,0c,f1),
	HX_("canvasWidth",0e,42,73,cd),
	HX_("canvasHeight",df,02,b6,ad),
	HX_("openingCallback",3d,71,34,3d),
	HX_("graphicLoadedCallback",b2,ef,4d,f4),
	HX_("finishCallback",38,a1,bc,b4),
	HX_("oneTime",93,bd,5e,62),
	HX_("update",09,86,05,87),
	HX_("playVideo",e7,41,e0,57),
	::String(null()) };

::hx::Class VideoSprite_obj::__mClass;

void VideoSprite_obj::__register()
{
	VideoSprite_obj _hx_dummy;
	VideoSprite_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("hxcodec.VideoSprite",d8,cf,46,99);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(VideoSprite_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< VideoSprite_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = VideoSprite_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = VideoSprite_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace hxcodec
