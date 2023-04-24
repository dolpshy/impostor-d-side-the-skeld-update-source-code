#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_Type
#include <Type.h>
#endif
#ifndef INCLUDED_flixel_FlxBasic
#include <flixel/FlxBasic.h>
#endif
#ifndef INCLUDED_flixel_FlxG
#include <flixel/FlxG.h>
#endif
#ifndef INCLUDED_flixel_FlxObject
#include <flixel/FlxObject.h>
#endif
#ifndef INCLUDED_flixel_math_FlxBasePoint
#include <flixel/math/FlxBasePoint.h>
#endif
#ifndef INCLUDED_flixel_math__FlxPoint_FlxPoint_Impl_
#include <flixel/math/_FlxPoint/FlxPoint_Impl_.h>
#endif
#ifndef INCLUDED_flixel_system_FlxSound
#include <flixel/system/FlxSound.h>
#endif
#ifndef INCLUDED_flixel_system_FlxSoundGroup
#include <flixel/system/FlxSoundGroup.h>
#endif
#ifndef INCLUDED_flixel_system_frontEnds_SoundFrontEnd
#include <flixel/system/frontEnds/SoundFrontEnd.h>
#endif
#ifndef INCLUDED_flixel_tweens_FlxTween
#include <flixel/tweens/FlxTween.h>
#endif
#ifndef INCLUDED_flixel_tweens_misc_NumTween
#include <flixel/tweens/misc/NumTween.h>
#endif
#ifndef INCLUDED_flixel_util_FlxPool_flixel_math_FlxBasePoint
#include <flixel/util/FlxPool_flixel_math_FlxBasePoint.h>
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
#ifndef INCLUDED_lime_media_AudioSource
#include <lime/media/AudioSource.h>
#endif
#ifndef INCLUDED_openfl_events_Event
#include <openfl/events/Event.h>
#endif
#ifndef INCLUDED_openfl_events_EventDispatcher
#include <openfl/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_events_IEventDispatcher
#include <openfl/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_media_ID3Info
#include <openfl/media/ID3Info.h>
#endif
#ifndef INCLUDED_openfl_media_Sound
#include <openfl/media/Sound.h>
#endif
#ifndef INCLUDED_openfl_media_SoundChannel
#include <openfl/media/SoundChannel.h>
#endif
#ifndef INCLUDED_openfl_media_SoundLoaderContext
#include <openfl/media/SoundLoaderContext.h>
#endif
#ifndef INCLUDED_openfl_media_SoundTransform
#include <openfl/media/SoundTransform.h>
#endif
#ifndef INCLUDED_openfl_net_URLRequest
#include <openfl/net/URLRequest.h>
#endif
#ifndef INCLUDED_openfl_utils_Assets
#include <openfl/utils/Assets.h>
#endif
#ifndef INCLUDED_openfl_utils__Object_Object_Impl_
#include <openfl/utils/_Object/Object_Impl_.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_ec393d325e46c77d_27_new,"flixel.system.FlxSound","new",0xa043445c,"flixel.system.FlxSound.new","flixel/system/FlxSound.hx",27,0x7d78fc74)
HX_LOCAL_STACK_FRAME(_hx_pos_ec393d325e46c77d_222_reset,"flixel.system.FlxSound","reset",0xf879b4cb,"flixel.system.FlxSound.reset","flixel/system/FlxSound.hx",222,0x7d78fc74)
HX_LOCAL_STACK_FRAME(_hx_pos_ec393d325e46c77d_250_destroy,"flixel.system.FlxSound","destroy",0x15a54ef6,"flixel.system.FlxSound.destroy","flixel/system/FlxSound.hx",250,0x7d78fc74)
HX_LOCAL_STACK_FRAME(_hx_pos_ec393d325e46c77d_280_update,"flixel.system.FlxSound","update",0xf091b78d,"flixel.system.FlxSound.update","flixel/system/FlxSound.hx",280,0x7d78fc74)
HX_LOCAL_STACK_FRAME(_hx_pos_ec393d325e46c77d_324_kill,"flixel.system.FlxSound","kill",0x989fe822,"flixel.system.FlxSound.kill","flixel/system/FlxSound.hx",324,0x7d78fc74)
HX_LOCAL_STACK_FRAME(_hx_pos_ec393d325e46c77d_340_loadEmbedded,"flixel.system.FlxSound","loadEmbedded",0xbf233254,"flixel.system.FlxSound.loadEmbedded","flixel/system/FlxSound.hx",340,0x7d78fc74)
HX_LOCAL_STACK_FRAME(_hx_pos_ec393d325e46c77d_385_loadStream,"flixel.system.FlxSound","loadStream",0x893586ca,"flixel.system.FlxSound.loadStream","flixel/system/FlxSound.hx",385,0x7d78fc74)
HX_LOCAL_STACK_FRAME(_hx_pos_ec393d325e46c77d_378_loadStream,"flixel.system.FlxSound","loadStream",0x893586ca,"flixel.system.FlxSound.loadStream","flixel/system/FlxSound.hx",378,0x7d78fc74)
HX_LOCAL_STACK_FRAME(_hx_pos_ec393d325e46c77d_425_init,"flixel.system.FlxSound","init",0x97514394,"flixel.system.FlxSound.init","flixel/system/FlxSound.hx",425,0x7d78fc74)
HX_LOCAL_STACK_FRAME(_hx_pos_ec393d325e46c77d_451_proximity,"flixel.system.FlxSound","proximity",0x52ce623b,"flixel.system.FlxSound.proximity","flixel/system/FlxSound.hx",451,0x7d78fc74)
HX_LOCAL_STACK_FRAME(_hx_pos_ec393d325e46c77d_472_play,"flixel.system.FlxSound","play",0x9bf03678,"flixel.system.FlxSound.play","flixel/system/FlxSound.hx",472,0x7d78fc74)
HX_LOCAL_STACK_FRAME(_hx_pos_ec393d325e46c77d_494_resume,"flixel.system.FlxSound","resume",0x72109b31,"flixel.system.FlxSound.resume","flixel/system/FlxSound.hx",494,0x7d78fc74)
HX_LOCAL_STACK_FRAME(_hx_pos_ec393d325e46c77d_504_pause,"flixel.system.FlxSound","pause",0xcf0941f2,"flixel.system.FlxSound.pause","flixel/system/FlxSound.hx",504,0x7d78fc74)
HX_LOCAL_STACK_FRAME(_hx_pos_ec393d325e46c77d_518_stop,"flixel.system.FlxSound","stop",0x9df1f886,"flixel.system.FlxSound.stop","flixel/system/FlxSound.hx",518,0x7d78fc74)
HX_LOCAL_STACK_FRAME(_hx_pos_ec393d325e46c77d_530_fadeOut,"flixel.system.FlxSound","fadeOut",0x225b5a6e,"flixel.system.FlxSound.fadeOut","flixel/system/FlxSound.hx",530,0x7d78fc74)
HX_LOCAL_STACK_FRAME(_hx_pos_ec393d325e46c77d_546_fadeIn,"flixel.system.FlxSound","fadeIn",0x4e377e05,"flixel.system.FlxSound.fadeIn","flixel/system/FlxSound.hx",546,0x7d78fc74)
HX_LOCAL_STACK_FRAME(_hx_pos_ec393d325e46c77d_559_volumeTween,"flixel.system.FlxSound","volumeTween",0x6ac0ca2d,"flixel.system.FlxSound.volumeTween","flixel/system/FlxSound.hx",559,0x7d78fc74)
HX_LOCAL_STACK_FRAME(_hx_pos_ec393d325e46c77d_569_getActualVolume,"flixel.system.FlxSound","getActualVolume",0xa3e81aba,"flixel.system.FlxSound.getActualVolume","flixel/system/FlxSound.hx",569,0x7d78fc74)
HX_LOCAL_STACK_FRAME(_hx_pos_ec393d325e46c77d_580_setPosition,"flixel.system.FlxSound","setPosition",0xba193a67,"flixel.system.FlxSound.setPosition","flixel/system/FlxSound.hx",580,0x7d78fc74)
HX_LOCAL_STACK_FRAME(_hx_pos_ec393d325e46c77d_590_updateTransform,"flixel.system.FlxSound","updateTransform",0x01697c1f,"flixel.system.FlxSound.updateTransform","flixel/system/FlxSound.hx",590,0x7d78fc74)
HX_LOCAL_STACK_FRAME(_hx_pos_ec393d325e46c77d_603_startSound,"flixel.system.FlxSound","startSound",0x5fc0a891,"flixel.system.FlxSound.startSound","flixel/system/FlxSound.hx",603,0x7d78fc74)
HX_LOCAL_STACK_FRAME(_hx_pos_ec393d325e46c77d_630_stopped,"flixel.system.FlxSound","stopped",0x3480f409,"flixel.system.FlxSound.stopped","flixel/system/FlxSound.hx",630,0x7d78fc74)
HX_LOCAL_STACK_FRAME(_hx_pos_ec393d325e46c77d_653_cleanup,"flixel.system.FlxSound","cleanup",0x9c612e20,"flixel.system.FlxSound.cleanup","flixel/system/FlxSound.hx",653,0x7d78fc74)
HX_LOCAL_STACK_FRAME(_hx_pos_ec393d325e46c77d_680_gotID3,"flixel.system.FlxSound","gotID3",0xcead1fb0,"flixel.system.FlxSound.gotID3","flixel/system/FlxSound.hx",680,0x7d78fc74)
HX_LOCAL_STACK_FRAME(_hx_pos_ec393d325e46c77d_690_onFocus,"flixel.system.FlxSound","onFocus",0x8be62035,"flixel.system.FlxSound.onFocus","flixel/system/FlxSound.hx",690,0x7d78fc74)
HX_LOCAL_STACK_FRAME(_hx_pos_ec393d325e46c77d_696_onFocusLost,"flixel.system.FlxSound","onFocusLost",0x0043b4b9,"flixel.system.FlxSound.onFocusLost","flixel/system/FlxSound.hx",696,0x7d78fc74)
HX_LOCAL_STACK_FRAME(_hx_pos_ec393d325e46c77d_703_set_group,"flixel.system.FlxSound","set_group",0x9197949e,"flixel.system.FlxSound.set_group","flixel/system/FlxSound.hx",703,0x7d78fc74)
HX_LOCAL_STACK_FRAME(_hx_pos_ec393d325e46c77d_724_get_playing,"flixel.system.FlxSound","get_playing",0xced03f81,"flixel.system.FlxSound.get_playing","flixel/system/FlxSound.hx",724,0x7d78fc74)
HX_LOCAL_STACK_FRAME(_hx_pos_ec393d325e46c77d_729_get_volume,"flixel.system.FlxSound","get_volume",0x12b7dd27,"flixel.system.FlxSound.get_volume","flixel/system/FlxSound.hx",729,0x7d78fc74)
HX_LOCAL_STACK_FRAME(_hx_pos_ec393d325e46c77d_733_set_volume,"flixel.system.FlxSound","set_volume",0x16357b9b,"flixel.system.FlxSound.set_volume","flixel/system/FlxSound.hx",733,0x7d78fc74)
HX_LOCAL_STACK_FRAME(_hx_pos_ec393d325e46c77d_741_get_pitch,"flixel.system.FlxSound","get_pitch",0xd6f2b113,"flixel.system.FlxSound.get_pitch","flixel/system/FlxSound.hx",741,0x7d78fc74)
HX_LOCAL_STACK_FRAME(_hx_pos_ec393d325e46c77d_746_set_pitch,"flixel.system.FlxSound","set_pitch",0xba439d1f,"flixel.system.FlxSound.set_pitch","flixel/system/FlxSound.hx",746,0x7d78fc74)
HX_LOCAL_STACK_FRAME(_hx_pos_ec393d325e46c77d_762_get_pan,"flixel.system.FlxSound","get_pan",0x17e93bf0,"flixel.system.FlxSound.get_pan","flixel/system/FlxSound.hx",762,0x7d78fc74)
HX_LOCAL_STACK_FRAME(_hx_pos_ec393d325e46c77d_767_set_pan,"flixel.system.FlxSound","set_pan",0x0aeaccfc,"flixel.system.FlxSound.set_pan","flixel/system/FlxSound.hx",767,0x7d78fc74)
HX_LOCAL_STACK_FRAME(_hx_pos_ec393d325e46c77d_772_get_time,"flixel.system.FlxSound","get_time",0xd6d6221a,"flixel.system.FlxSound.get_time","flixel/system/FlxSound.hx",772,0x7d78fc74)
HX_LOCAL_STACK_FRAME(_hx_pos_ec393d325e46c77d_776_set_time,"flixel.system.FlxSound","set_time",0x85337b8e,"flixel.system.FlxSound.set_time","flixel/system/FlxSound.hx",776,0x7d78fc74)
HX_LOCAL_STACK_FRAME(_hx_pos_ec393d325e46c77d_787_get_length,"flixel.system.FlxSound","get_length",0x526c4833,"flixel.system.FlxSound.get_length","flixel/system/FlxSound.hx",787,0x7d78fc74)
HX_LOCAL_STACK_FRAME(_hx_pos_ec393d325e46c77d_792_toString,"flixel.system.FlxSound","toString",0x428d6b30,"flixel.system.FlxSound.toString","flixel/system/FlxSound.hx",792,0x7d78fc74)
namespace flixel{
namespace _hx_system{

void FlxSound_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_ec393d325e46c77d_27_new)
HXLINE( 207)		this->_alreadyPaused = false;
HXLINE( 187)		this->_volumeAdjust = ((Float)1.0);
HXLINE( 182)		this->_pitch = ((Float)1.0);
HXLINE( 177)		this->_length = ((Float)0);
HXLINE( 172)		this->_time = ((Float)0);
HXLINE( 128)		this->loopTime = ((Float)0);
HXLINE( 214)		super::__construct();
HXLINE( 215)		this->reset();
            	}

Dynamic FlxSound_obj::__CreateEmpty() { return new FlxSound_obj; }

void *FlxSound_obj::_hx_vtable = 0;

Dynamic FlxSound_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< FlxSound_obj > _hx_result = new FlxSound_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool FlxSound_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x1641ddcc) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x1641ddcc;
	} else {
		return inClassId==(int)0x7ccf8994;
	}
}

void FlxSound_obj::reset(){
            	HX_GC_STACKFRAME(&_hx_pos_ec393d325e46c77d_222_reset)
HXLINE( 223)		this->destroy();
HXLINE( 225)		this->x = ( (Float)(0) );
HXLINE( 226)		this->y = ( (Float)(0) );
HXLINE( 228)		this->_time = ( (Float)(0) );
HXLINE( 229)		this->_paused = false;
HXLINE( 230)		this->_volume = ((Float)1.0);
HXLINE( 231)		this->_volumeAdjust = ((Float)1.0);
HXLINE( 232)		this->looped = false;
HXLINE( 233)		this->loopTime = ((Float)0.0);
HXLINE( 234)		this->endTime = ((Float)0.0);
HXLINE( 235)		this->_target = null();
HXLINE( 236)		this->_radius = ( (Float)(0) );
HXLINE( 237)		this->_proximityPan = false;
HXLINE( 238)		this->set_visible(false);
HXLINE( 239)		this->amplitude = ( (Float)(0) );
HXLINE( 240)		this->amplitudeLeft = ( (Float)(0) );
HXLINE( 241)		this->amplitudeRight = ( (Float)(0) );
HXLINE( 242)		this->autoDestroy = false;
HXLINE( 244)		if (::hx::IsNull( this->_transform )) {
HXLINE( 245)			this->_transform =  ::openfl::media::SoundTransform_obj::__alloc( HX_CTX ,null(),null());
            		}
HXLINE( 246)		this->_transform->pan = ( (Float)(0) );
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxSound_obj,reset,(void))

void FlxSound_obj::destroy(){
            	HX_STACKFRAME(&_hx_pos_ec393d325e46c77d_250_destroy)
HXLINE( 251)		this->_transform = null();
HXLINE( 252)		this->set_exists(false);
HXLINE( 253)		this->set_active(false);
HXLINE( 254)		this->_target = null();
HXLINE( 255)		this->name = null();
HXLINE( 256)		this->artist = null();
HXLINE( 258)		if (::hx::IsNotNull( this->_channel )) {
HXLINE( 260)			this->_channel->removeEventListener(HX_("soundComplete",a8,30,e6,1c),this->stopped_dyn(),null());
HXLINE( 261)			this->_channel->stop();
HXLINE( 262)			this->_channel = null();
            		}
HXLINE( 265)		if (::hx::IsNotNull( this->_sound )) {
HXLINE( 267)			this->_sound->removeEventListener(HX_("id3",f8,03,50,00),this->gotID3_dyn(),null());
HXLINE( 268)			this->_sound = null();
            		}
HXLINE( 271)		this->onComplete = null();
HXLINE( 273)		this->super::destroy();
            	}


void FlxSound_obj::update(Float elapsed){
            	HX_STACKFRAME(&_hx_pos_ec393d325e46c77d_280_update)
HXLINE( 281)		if (::hx::IsNull( this->_channel )) {
HXLINE( 282)			return;
            		}
HXLINE( 284)		this->_time = this->_channel->get_position();
HXLINE( 286)		Float radialMultiplier = ((Float)1.0);
HXLINE( 289)		if (::hx::IsNotNull( this->_target )) {
HXLINE( 291)			 ::flixel::math::FlxBasePoint targetPosition = this->_target->getPosition(null());
HXLINE( 292)			Float x = this->x;
HXDLIN( 292)			Float y = this->y;
HXDLIN( 292)			 ::flixel::math::FlxBasePoint point = ::flixel::math::FlxBasePoint_obj::pool->get()->set(x,y);
HXDLIN( 292)			point->_inPool = false;
HXDLIN( 292)			 ::flixel::math::FlxBasePoint point1 = point;
HXDLIN( 292)			point1->_weak = true;
HXDLIN( 292)			Float radialMultiplier1 = ::flixel::math::_FlxPoint::FlxPoint_Impl__obj::distanceTo(targetPosition,point1);
HXDLIN( 292)			radialMultiplier = (radialMultiplier1 / this->_radius);
HXLINE( 293)			targetPosition->put();
HXLINE( 294)			Float lowerBound;
HXDLIN( 294)			if ((radialMultiplier < 0)) {
HXLINE( 294)				lowerBound = ( (Float)(0) );
            			}
            			else {
HXLINE( 294)				lowerBound = radialMultiplier;
            			}
HXDLIN( 294)			Float radialMultiplier2;
HXDLIN( 294)			if ((lowerBound > 1)) {
HXLINE( 294)				radialMultiplier2 = ( (Float)(1) );
            			}
            			else {
HXLINE( 294)				radialMultiplier2 = lowerBound;
            			}
HXDLIN( 294)			radialMultiplier = (( (Float)(1) ) - radialMultiplier2);
HXLINE( 296)			if (this->_proximityPan) {
HXLINE( 298)				Float d = ((this->x - this->_target->x) / this->_radius);
HXLINE( 299)				Float lowerBound;
HXDLIN( 299)				if ((d < -1)) {
HXLINE( 299)					lowerBound = ( (Float)(-1) );
            				}
            				else {
HXLINE( 299)					lowerBound = d;
            				}
HXDLIN( 299)				Float _hx_tmp;
HXDLIN( 299)				if ((lowerBound > 1)) {
HXLINE( 299)					_hx_tmp = ( (Float)(1) );
            				}
            				else {
HXLINE( 299)					_hx_tmp = lowerBound;
            				}
HXDLIN( 299)				this->_transform->pan = _hx_tmp;
            			}
            		}
HXLINE( 303)		this->_volumeAdjust = radialMultiplier;
HXLINE( 304)		this->updateTransform();
HXLINE( 306)		if ((this->_transform->volume > 0)) {
HXLINE( 308)			this->amplitudeLeft = (this->_channel->leftPeak / this->_transform->volume);
HXLINE( 309)			this->amplitudeRight = (this->_channel->rightPeak / this->_transform->volume);
HXLINE( 310)			this->amplitude = ((this->amplitudeLeft + this->amplitudeRight) * ((Float)0.5));
            		}
            		else {
HXLINE( 314)			this->amplitudeLeft = ( (Float)(0) );
HXLINE( 315)			this->amplitudeRight = ( (Float)(0) );
HXLINE( 316)			this->amplitude = ( (Float)(0) );
            		}
HXLINE( 319)		bool _hx_tmp;
HXDLIN( 319)		if (::hx::IsNotNull( this->endTime )) {
HXLINE( 319)			_hx_tmp = ::hx::IsGreaterEq( this->_time,this->endTime );
            		}
            		else {
HXLINE( 319)			_hx_tmp = false;
            		}
HXDLIN( 319)		if (_hx_tmp) {
HXLINE( 320)			this->stopped(null());
            		}
            	}


void FlxSound_obj::kill(){
            	HX_STACKFRAME(&_hx_pos_ec393d325e46c77d_324_kill)
HXLINE( 325)		this->super::kill();
HXLINE( 326)		this->cleanup(false,null());
            	}


 ::flixel::_hx_system::FlxSound FlxSound_obj::loadEmbedded( ::Dynamic EmbeddedSound,::hx::Null< bool >  __o_Looped,::hx::Null< bool >  __o_AutoDestroy, ::Dynamic OnComplete){
            		bool Looped = __o_Looped.Default(false);
            		bool AutoDestroy = __o_AutoDestroy.Default(false);
            	HX_STACKFRAME(&_hx_pos_ec393d325e46c77d_340_loadEmbedded)
HXLINE( 341)		if (::hx::IsNull( EmbeddedSound )) {
HXLINE( 342)			return ::hx::ObjectPtr<OBJ_>(this);
            		}
HXLINE( 344)		this->cleanup(true,null());
HXLINE( 346)		if (::Std_obj::isOfType(EmbeddedSound,::hx::ClassOf< ::openfl::media::Sound >())) {
HXLINE( 348)			this->_sound = ( ( ::openfl::media::Sound)(EmbeddedSound) );
            		}
            		else {
HXLINE( 350)			if (::Std_obj::isOfType(EmbeddedSound,::hx::ClassOf< ::hx::Class >())) {
HXLINE( 352)				this->_sound = ( ( ::openfl::media::Sound)(::Type_obj::createInstance(EmbeddedSound,::cpp::VirtualArray_obj::__new(0))) );
            			}
            			else {
HXLINE( 354)				if (::Std_obj::isOfType(EmbeddedSound,::hx::ClassOf< ::String >())) {
HXLINE( 356)					bool _hx_tmp;
HXDLIN( 356)					if (!(::openfl::utils::Assets_obj::exists(( (::String)(EmbeddedSound) ),HX_("SOUND",af,c4,ba,fe)))) {
HXLINE( 356)						_hx_tmp = ::openfl::utils::Assets_obj::exists(( (::String)(EmbeddedSound) ),HX_("MUSIC",85,08,49,8e));
            					}
            					else {
HXLINE( 356)						_hx_tmp = true;
            					}
HXDLIN( 356)					if (_hx_tmp) {
HXLINE( 357)						this->_sound = ::openfl::utils::Assets_obj::getSound(( (::String)(EmbeddedSound) ),null());
            					}
            				}
            			}
            		}
HXLINE( 363)		return this->init(Looped,AutoDestroy,OnComplete);
            	}


HX_DEFINE_DYNAMIC_FUNC4(FlxSound_obj,loadEmbedded,return )

 ::flixel::_hx_system::FlxSound FlxSound_obj::loadStream(::String SoundURL,::hx::Null< bool >  __o_Looped,::hx::Null< bool >  __o_AutoDestroy, ::Dynamic OnComplete, ::Dynamic OnLoad){
            		HX_BEGIN_LOCAL_FUNC_S3(::hx::LocalFunc,_hx_Closure_0, ::Dynamic,OnLoad, ::flixel::_hx_system::FlxSound,_gthis,::Array< ::Dynamic>,loadCallback) HXARGC(1)
            		void _hx_run( ::openfl::events::Event e){
            			HX_GC_STACKFRAME(&_hx_pos_ec393d325e46c77d_385_loadStream)
HXLINE( 386)			::openfl::events::IEventDispatcher_obj::removeEventListener(e->target,e->type,loadCallback->__get(0),null());
HXLINE( 388)			if (::openfl::utils::_Object::Object_Impl__obj::_hx___eq(_gthis->_sound,e->target)) {
HXLINE( 390)				_gthis->_length = ( (Float)(_gthis->_sound->get_length()) );
HXLINE( 391)				if (::hx::IsNotNull( OnLoad )) {
HXLINE( 392)					OnLoad();
            				}
            			}
            		}
            		HX_END_LOCAL_FUNC1((void))

            		bool Looped = __o_Looped.Default(false);
            		bool AutoDestroy = __o_AutoDestroy.Default(false);
            	HX_GC_STACKFRAME(&_hx_pos_ec393d325e46c77d_378_loadStream)
HXDLIN( 378)		 ::flixel::_hx_system::FlxSound _gthis = ::hx::ObjectPtr<OBJ_>(this);
HXLINE( 379)		this->cleanup(true,null());
HXLINE( 381)		this->_sound =  ::openfl::media::Sound_obj::__alloc( HX_CTX ,null(),null());
HXLINE( 382)		this->_sound->addEventListener(HX_("id3",f8,03,50,00),this->gotID3_dyn(),null(),null(),null());
HXLINE( 383)		::Array< ::Dynamic> loadCallback = ::Array_obj< ::Dynamic>::__new(1)->init(0,null());
HXLINE( 384)		loadCallback[0] =  ::Dynamic(new _hx_Closure_0(OnLoad,_gthis,loadCallback));
HXLINE( 396)		this->_sound->addEventListener(HX_("complete",b9,00,c8,7f),loadCallback->__get(0),false,0,true);
HXLINE( 397)		 ::openfl::media::Sound _hx_tmp = this->_sound;
HXDLIN( 397)		_hx_tmp->load( ::openfl::net::URLRequest_obj::__alloc( HX_CTX ,SoundURL),null());
HXLINE( 399)		return this->init(Looped,AutoDestroy,OnComplete);
            	}


HX_DEFINE_DYNAMIC_FUNC5(FlxSound_obj,loadStream,return )

 ::flixel::_hx_system::FlxSound FlxSound_obj::init(::hx::Null< bool >  __o_Looped,::hx::Null< bool >  __o_AutoDestroy, ::Dynamic OnComplete){
            		bool Looped = __o_Looped.Default(false);
            		bool AutoDestroy = __o_AutoDestroy.Default(false);
            	HX_STACKFRAME(&_hx_pos_ec393d325e46c77d_425_init)
HXLINE( 426)		this->looped = Looped;
HXLINE( 427)		this->autoDestroy = AutoDestroy;
HXLINE( 428)		this->updateTransform();
HXLINE( 429)		this->set_exists(true);
HXLINE( 430)		this->onComplete = OnComplete;
HXLINE( 432)		this->set_pitch(( (Float)(1) ));
HXLINE( 434)		Float _hx_tmp;
HXDLIN( 434)		if (::hx::IsNull( this->_sound )) {
HXLINE( 434)			_hx_tmp = ( (Float)(0) );
            		}
            		else {
HXLINE( 434)			_hx_tmp = ( (Float)(this->_sound->get_length()) );
            		}
HXDLIN( 434)		this->_length = _hx_tmp;
HXLINE( 435)		this->endTime = this->_length;
HXLINE( 436)		return ::hx::ObjectPtr<OBJ_>(this);
            	}


HX_DEFINE_DYNAMIC_FUNC3(FlxSound_obj,init,return )

 ::flixel::_hx_system::FlxSound FlxSound_obj::proximity(Float X,Float Y, ::flixel::FlxObject TargetObject,Float Radius,::hx::Null< bool >  __o_Pan){
            		bool Pan = __o_Pan.Default(true);
            	HX_STACKFRAME(&_hx_pos_ec393d325e46c77d_451_proximity)
HXLINE( 452)		this->x = X;
HXLINE( 453)		this->y = Y;
HXLINE( 454)		this->_target = TargetObject;
HXLINE( 455)		this->_radius = Radius;
HXLINE( 456)		this->_proximityPan = Pan;
HXLINE( 457)		return ::hx::ObjectPtr<OBJ_>(this);
            	}


HX_DEFINE_DYNAMIC_FUNC5(FlxSound_obj,proximity,return )

 ::flixel::_hx_system::FlxSound FlxSound_obj::play(::hx::Null< bool >  __o_ForceRestart,::hx::Null< Float >  __o_StartTime, ::Dynamic EndTime){
            		bool ForceRestart = __o_ForceRestart.Default(false);
            		Float StartTime = __o_StartTime.Default(((Float)0.0));
            	HX_STACKFRAME(&_hx_pos_ec393d325e46c77d_472_play)
HXLINE( 473)		if (!(this->exists)) {
HXLINE( 474)			return ::hx::ObjectPtr<OBJ_>(this);
            		}
HXLINE( 476)		if (ForceRestart) {
HXLINE( 477)			this->cleanup(false,true);
            		}
            		else {
HXLINE( 478)			if (::hx::IsNotNull( this->_channel )) {
HXLINE( 479)				return ::hx::ObjectPtr<OBJ_>(this);
            			}
            		}
HXLINE( 481)		if (this->_paused) {
HXLINE( 482)			this->resume();
            		}
            		else {
HXLINE( 484)			this->startSound(StartTime);
            		}
HXLINE( 486)		this->endTime = EndTime;
HXLINE( 487)		return ::hx::ObjectPtr<OBJ_>(this);
            	}


HX_DEFINE_DYNAMIC_FUNC3(FlxSound_obj,play,return )

 ::flixel::_hx_system::FlxSound FlxSound_obj::resume(){
            	HX_STACKFRAME(&_hx_pos_ec393d325e46c77d_494_resume)
HXLINE( 495)		if (this->_paused) {
HXLINE( 496)			this->startSound(this->_time);
            		}
HXLINE( 497)		return ::hx::ObjectPtr<OBJ_>(this);
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxSound_obj,resume,return )

 ::flixel::_hx_system::FlxSound FlxSound_obj::pause(){
            	HX_STACKFRAME(&_hx_pos_ec393d325e46c77d_504_pause)
HXLINE( 505)		if (::hx::IsNull( this->_channel )) {
HXLINE( 506)			return ::hx::ObjectPtr<OBJ_>(this);
            		}
HXLINE( 508)		this->_time = this->_channel->get_position();
HXLINE( 509)		this->_paused = true;
HXLINE( 510)		this->cleanup(false,false);
HXLINE( 511)		return ::hx::ObjectPtr<OBJ_>(this);
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxSound_obj,pause,return )

 ::flixel::_hx_system::FlxSound FlxSound_obj::stop(){
            	HX_STACKFRAME(&_hx_pos_ec393d325e46c77d_518_stop)
HXLINE( 519)		this->cleanup(this->autoDestroy,true);
HXLINE( 520)		return ::hx::ObjectPtr<OBJ_>(this);
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxSound_obj,stop,return )

 ::flixel::_hx_system::FlxSound FlxSound_obj::fadeOut(::hx::Null< Float >  __o_Duration, ::Dynamic __o_To, ::Dynamic onComplete){
            		Float Duration = __o_Duration.Default(1);
            		 ::Dynamic To = __o_To;
            		if (::hx::IsNull(__o_To)) To = 0;
            	HX_STACKFRAME(&_hx_pos_ec393d325e46c77d_530_fadeOut)
HXLINE( 531)		if (::hx::IsNotNull( this->fadeTween )) {
HXLINE( 532)			this->fadeTween->cancel();
            		}
HXLINE( 533)		this->fadeTween = ::flixel::tweens::FlxTween_obj::num(this->_volume,( (Float)(To) ),Duration, ::Dynamic(::hx::Anon_obj::Create(1)
            			->setFixed(0,HX_("onComplete",f8,d4,7e,5d),onComplete)),this->volumeTween_dyn());
HXLINE( 535)		return ::hx::ObjectPtr<OBJ_>(this);
            	}


HX_DEFINE_DYNAMIC_FUNC3(FlxSound_obj,fadeOut,return )

 ::flixel::_hx_system::FlxSound FlxSound_obj::fadeIn(::hx::Null< Float >  __o_Duration,::hx::Null< Float >  __o_From,::hx::Null< Float >  __o_To, ::Dynamic onComplete){
            		Float Duration = __o_Duration.Default(1);
            		Float From = __o_From.Default(0);
            		Float To = __o_To.Default(1);
            	HX_STACKFRAME(&_hx_pos_ec393d325e46c77d_546_fadeIn)
HXLINE( 547)		if (::hx::IsNull( this->_channel )) {
HXLINE( 548)			this->play(null(),null(),null());
            		}
HXLINE( 550)		if (::hx::IsNotNull( this->fadeTween )) {
HXLINE( 551)			this->fadeTween->cancel();
            		}
HXLINE( 553)		this->fadeTween = ::flixel::tweens::FlxTween_obj::num(From,To,Duration, ::Dynamic(::hx::Anon_obj::Create(1)
            			->setFixed(0,HX_("onComplete",f8,d4,7e,5d),onComplete)),this->volumeTween_dyn());
HXLINE( 554)		return ::hx::ObjectPtr<OBJ_>(this);
            	}


HX_DEFINE_DYNAMIC_FUNC4(FlxSound_obj,fadeIn,return )

void FlxSound_obj::volumeTween(Float f){
            	HX_STACKFRAME(&_hx_pos_ec393d325e46c77d_559_volumeTween)
HXDLIN( 559)		this->set_volume(f);
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxSound_obj,volumeTween,(void))

Float FlxSound_obj::getActualVolume(){
            	HX_STACKFRAME(&_hx_pos_ec393d325e46c77d_569_getActualVolume)
HXDLIN( 569)		return (this->_volume * this->_volumeAdjust);
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxSound_obj,getActualVolume,return )

void FlxSound_obj::setPosition(::hx::Null< Float >  __o_X,::hx::Null< Float >  __o_Y){
            		Float X = __o_X.Default(0);
            		Float Y = __o_Y.Default(0);
            	HX_STACKFRAME(&_hx_pos_ec393d325e46c77d_580_setPosition)
HXLINE( 581)		this->x = X;
HXLINE( 582)		this->y = Y;
            	}


HX_DEFINE_DYNAMIC_FUNC2(FlxSound_obj,setPosition,(void))

void FlxSound_obj::updateTransform(){
            	HX_STACKFRAME(&_hx_pos_ec393d325e46c77d_590_updateTransform)
HXLINE( 591)		int _hx_tmp;
HXDLIN( 591)		if (::flixel::FlxG_obj::sound->muted) {
HXLINE( 591)			_hx_tmp = 0;
            		}
            		else {
HXLINE( 591)			_hx_tmp = 1;
            		}
HXLINE( 592)		Float _hx_tmp1;
HXDLIN( 592)		if (::hx::IsNotNull( this->group )) {
HXLINE( 592)			_hx_tmp1 = this->group->volume;
            		}
            		else {
HXLINE( 592)			_hx_tmp1 = ( (Float)(1) );
            		}
HXLINE( 591)		this->_transform->volume = ((((( (Float)(_hx_tmp) ) * ::flixel::FlxG_obj::sound->volume) * _hx_tmp1) * this->_volume) * this->_volumeAdjust);
HXLINE( 594)		if (::hx::IsNotNull( this->_channel )) {
HXLINE( 595)			this->_channel->set_soundTransform(this->_transform);
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxSound_obj,updateTransform,(void))

void FlxSound_obj::startSound(Float StartTime){
            	HX_STACKFRAME(&_hx_pos_ec393d325e46c77d_603_startSound)
HXLINE( 604)		if (::hx::IsNull( this->_sound )) {
HXLINE( 605)			return;
            		}
HXLINE( 607)		this->_time = StartTime;
HXLINE( 608)		this->_paused = false;
HXLINE( 609)		this->_channel = this->_sound->play(this->_time,0,this->_transform);
HXLINE( 610)		if (::hx::IsNotNull( this->_channel )) {
HXLINE( 613)			this->set_pitch(this->_pitch);
HXLINE( 615)			this->_channel->addEventListener(HX_("soundComplete",a8,30,e6,1c),this->stopped_dyn(),null(),null(),null());
HXLINE( 616)			this->set_active(true);
            		}
            		else {
HXLINE( 620)			this->set_exists(false);
HXLINE( 621)			this->set_active(false);
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxSound_obj,startSound,(void))

void FlxSound_obj::stopped( ::openfl::events::Event _){
            	HX_STACKFRAME(&_hx_pos_ec393d325e46c77d_630_stopped)
HXLINE( 631)		if (::hx::IsNotNull( this->onComplete )) {
HXLINE( 632)			this->onComplete();
            		}
HXLINE( 634)		if (this->looped) {
HXLINE( 636)			this->cleanup(false,null());
HXLINE( 637)			this->play(false,this->loopTime,this->endTime);
            		}
            		else {
HXLINE( 640)			this->cleanup(this->autoDestroy,null());
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxSound_obj,stopped,(void))

void FlxSound_obj::cleanup(bool destroySound,::hx::Null< bool >  __o_resetPosition){
            		bool resetPosition = __o_resetPosition.Default(true);
            	HX_STACKFRAME(&_hx_pos_ec393d325e46c77d_653_cleanup)
HXLINE( 654)		if (destroySound) {
HXLINE( 656)			this->reset();
HXLINE( 657)			return;
            		}
HXLINE( 660)		if (::hx::IsNotNull( this->_channel )) {
HXLINE( 662)			this->_channel->removeEventListener(HX_("soundComplete",a8,30,e6,1c),this->stopped_dyn(),null());
HXLINE( 663)			this->_channel->stop();
HXLINE( 664)			this->_channel = null();
            		}
HXLINE( 667)		this->set_active(false);
HXLINE( 669)		if (resetPosition) {
HXLINE( 671)			this->_time = ( (Float)(0) );
HXLINE( 672)			this->_paused = false;
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC2(FlxSound_obj,cleanup,(void))

void FlxSound_obj::gotID3( ::openfl::events::Event _){
            	HX_STACKFRAME(&_hx_pos_ec393d325e46c77d_680_gotID3)
HXLINE( 681)		this->name = this->_sound->get_id3()->songName;
HXLINE( 682)		this->artist = this->_sound->get_id3()->artist;
HXLINE( 683)		this->_sound->removeEventListener(HX_("id3",f8,03,50,00),this->gotID3_dyn(),null());
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxSound_obj,gotID3,(void))

void FlxSound_obj::onFocus(){
            	HX_STACKFRAME(&_hx_pos_ec393d325e46c77d_690_onFocus)
HXDLIN( 690)		if (!(this->_alreadyPaused)) {
HXLINE( 691)			this->resume();
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxSound_obj,onFocus,(void))

void FlxSound_obj::onFocusLost(){
            	HX_STACKFRAME(&_hx_pos_ec393d325e46c77d_696_onFocusLost)
HXLINE( 697)		this->_alreadyPaused = this->_paused;
HXLINE( 698)		this->pause();
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxSound_obj,onFocusLost,(void))

 ::flixel::_hx_system::FlxSoundGroup FlxSound_obj::set_group( ::flixel::_hx_system::FlxSoundGroup group){
            	HX_STACKFRAME(&_hx_pos_ec393d325e46c77d_703_set_group)
HXLINE( 704)		if (::hx::IsInstanceNotEq( this->group,group )) {
HXLINE( 706)			 ::flixel::_hx_system::FlxSoundGroup oldGroup = this->group;
HXLINE( 709)			this->group = group;
HXLINE( 711)			if (::hx::IsNotNull( oldGroup )) {
HXLINE( 712)				oldGroup->remove(::hx::ObjectPtr<OBJ_>(this));
            			}
HXLINE( 714)			if (::hx::IsNotNull( group )) {
HXLINE( 715)				group->add(::hx::ObjectPtr<OBJ_>(this));
            			}
HXLINE( 717)			this->updateTransform();
            		}
HXLINE( 719)		return group;
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxSound_obj,set_group,return )

bool FlxSound_obj::get_playing(){
            	HX_STACKFRAME(&_hx_pos_ec393d325e46c77d_724_get_playing)
HXDLIN( 724)		return ::hx::IsNotNull( this->_channel );
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxSound_obj,get_playing,return )

Float FlxSound_obj::get_volume(){
            	HX_STACKFRAME(&_hx_pos_ec393d325e46c77d_729_get_volume)
HXDLIN( 729)		return this->_volume;
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxSound_obj,get_volume,return )

Float FlxSound_obj::set_volume(Float Volume){
            	HX_STACKFRAME(&_hx_pos_ec393d325e46c77d_733_set_volume)
HXLINE( 734)		Float lowerBound;
HXDLIN( 734)		if ((Volume < 0)) {
HXLINE( 734)			lowerBound = ( (Float)(0) );
            		}
            		else {
HXLINE( 734)			lowerBound = Volume;
            		}
HXDLIN( 734)		Float _hx_tmp;
HXDLIN( 734)		if ((lowerBound > 1)) {
HXLINE( 734)			_hx_tmp = ( (Float)(1) );
            		}
            		else {
HXLINE( 734)			_hx_tmp = lowerBound;
            		}
HXDLIN( 734)		this->_volume = _hx_tmp;
HXLINE( 735)		this->updateTransform();
HXLINE( 736)		return Volume;
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxSound_obj,set_volume,return )

Float FlxSound_obj::get_pitch(){
            	HX_STACKFRAME(&_hx_pos_ec393d325e46c77d_741_get_pitch)
HXDLIN( 741)		return this->_pitch;
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxSound_obj,get_pitch,return )

Float FlxSound_obj::set_pitch(Float v){
            	HX_STACKFRAME(&_hx_pos_ec393d325e46c77d_746_set_pitch)
HXLINE( 747)		if (::hx::IsNotNull( this->_channel )) {
HXLINE( 752)			if (::hx::IsNotNull( this->_channel->_hx___source )) {
HXLINE( 753)				this->_channel->_hx___source->set_pitch(v);
            			}
            		}
HXLINE( 756)		return (this->_pitch = v);
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxSound_obj,set_pitch,return )

Float FlxSound_obj::get_pan(){
            	HX_STACKFRAME(&_hx_pos_ec393d325e46c77d_762_get_pan)
HXDLIN( 762)		return this->_transform->pan;
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxSound_obj,get_pan,return )

Float FlxSound_obj::set_pan(Float pan){
            	HX_STACKFRAME(&_hx_pos_ec393d325e46c77d_767_set_pan)
HXDLIN( 767)		return (this->_transform->pan = pan);
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxSound_obj,set_pan,return )

Float FlxSound_obj::get_time(){
            	HX_STACKFRAME(&_hx_pos_ec393d325e46c77d_772_get_time)
HXDLIN( 772)		return this->_time;
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxSound_obj,get_time,return )

Float FlxSound_obj::set_time(Float time){
            	HX_STACKFRAME(&_hx_pos_ec393d325e46c77d_776_set_time)
HXLINE( 777)		if (::hx::IsNotNull( this->_channel )) {
HXLINE( 779)			this->cleanup(false,true);
HXLINE( 780)			this->startSound(time);
            		}
HXLINE( 782)		return (this->_time = time);
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxSound_obj,set_time,return )

Float FlxSound_obj::get_length(){
            	HX_STACKFRAME(&_hx_pos_ec393d325e46c77d_787_get_length)
HXDLIN( 787)		return this->_length;
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxSound_obj,get_length,return )

::String FlxSound_obj::toString(){
            	HX_STACKFRAME(&_hx_pos_ec393d325e46c77d_792_toString)
HXLINE( 793)		 ::Dynamic value = ::hx::IsNotNull( this->_channel );
HXDLIN( 793)		 ::flixel::util::LabelValuePair _this = ::flixel::util::LabelValuePair_obj::_pool->get();
HXDLIN( 793)		_this->label = HX_("playing",6e,0f,18,8a);
HXDLIN( 793)		_this->value = value;
HXLINE( 794)		 ::Dynamic value1 = this->_time;
HXDLIN( 794)		 ::flixel::util::LabelValuePair _this1 = ::flixel::util::LabelValuePair_obj::_pool->get();
HXDLIN( 794)		_this1->label = HX_("time",0d,cc,fc,4c);
HXDLIN( 794)		_this1->value = value1;
HXLINE( 795)		 ::Dynamic value2 = this->_length;
HXDLIN( 795)		 ::flixel::util::LabelValuePair _this2 = ::flixel::util::LabelValuePair_obj::_pool->get();
HXDLIN( 795)		_this2->label = HX_("length",e6,94,07,9f);
HXDLIN( 795)		_this2->value = value2;
HXLINE( 796)		 ::Dynamic value3 = this->_volume;
HXDLIN( 796)		 ::flixel::util::LabelValuePair _this3 = ::flixel::util::LabelValuePair_obj::_pool->get();
HXDLIN( 796)		_this3->label = HX_("volume",da,29,53,5f);
HXDLIN( 796)		_this3->value = value3;
HXLINE( 792)		return ::flixel::util::FlxStringUtil_obj::getDebugString(::Array_obj< ::Dynamic>::__new(4)->init(0,_this)->init(1,_this1)->init(2,_this2)->init(3,_this3));
            	}



::hx::ObjectPtr< FlxSound_obj > FlxSound_obj::__new() {
	::hx::ObjectPtr< FlxSound_obj > __this = new FlxSound_obj();
	__this->__construct();
	return __this;
}

::hx::ObjectPtr< FlxSound_obj > FlxSound_obj::__alloc(::hx::Ctx *_hx_ctx) {
	FlxSound_obj *__this = (FlxSound_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(FlxSound_obj), true, "flixel.system.FlxSound"));
	*(void **)__this = FlxSound_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

FlxSound_obj::FlxSound_obj()
{
}

void FlxSound_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(FlxSound);
	HX_MARK_MEMBER_NAME(x,"x");
	HX_MARK_MEMBER_NAME(y,"y");
	HX_MARK_MEMBER_NAME(persist,"persist");
	HX_MARK_MEMBER_NAME(name,"name");
	HX_MARK_MEMBER_NAME(artist,"artist");
	HX_MARK_MEMBER_NAME(amplitude,"amplitude");
	HX_MARK_MEMBER_NAME(amplitudeLeft,"amplitudeLeft");
	HX_MARK_MEMBER_NAME(amplitudeRight,"amplitudeRight");
	HX_MARK_MEMBER_NAME(autoDestroy,"autoDestroy");
	HX_MARK_MEMBER_NAME(onComplete,"onComplete");
	HX_MARK_MEMBER_NAME(group,"group");
	HX_MARK_MEMBER_NAME(looped,"looped");
	HX_MARK_MEMBER_NAME(loopTime,"loopTime");
	HX_MARK_MEMBER_NAME(endTime,"endTime");
	HX_MARK_MEMBER_NAME(fadeTween,"fadeTween");
	HX_MARK_MEMBER_NAME(_sound,"_sound");
	HX_MARK_MEMBER_NAME(_channel,"_channel");
	HX_MARK_MEMBER_NAME(_transform,"_transform");
	HX_MARK_MEMBER_NAME(_paused,"_paused");
	HX_MARK_MEMBER_NAME(_volume,"_volume");
	HX_MARK_MEMBER_NAME(_time,"_time");
	HX_MARK_MEMBER_NAME(_length,"_length");
	HX_MARK_MEMBER_NAME(_pitch,"_pitch");
	HX_MARK_MEMBER_NAME(_volumeAdjust,"_volumeAdjust");
	HX_MARK_MEMBER_NAME(_target,"_target");
	HX_MARK_MEMBER_NAME(_radius,"_radius");
	HX_MARK_MEMBER_NAME(_proximityPan,"_proximityPan");
	HX_MARK_MEMBER_NAME(_alreadyPaused,"_alreadyPaused");
	 ::flixel::FlxBasic_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void FlxSound_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(x,"x");
	HX_VISIT_MEMBER_NAME(y,"y");
	HX_VISIT_MEMBER_NAME(persist,"persist");
	HX_VISIT_MEMBER_NAME(name,"name");
	HX_VISIT_MEMBER_NAME(artist,"artist");
	HX_VISIT_MEMBER_NAME(amplitude,"amplitude");
	HX_VISIT_MEMBER_NAME(amplitudeLeft,"amplitudeLeft");
	HX_VISIT_MEMBER_NAME(amplitudeRight,"amplitudeRight");
	HX_VISIT_MEMBER_NAME(autoDestroy,"autoDestroy");
	HX_VISIT_MEMBER_NAME(onComplete,"onComplete");
	HX_VISIT_MEMBER_NAME(group,"group");
	HX_VISIT_MEMBER_NAME(looped,"looped");
	HX_VISIT_MEMBER_NAME(loopTime,"loopTime");
	HX_VISIT_MEMBER_NAME(endTime,"endTime");
	HX_VISIT_MEMBER_NAME(fadeTween,"fadeTween");
	HX_VISIT_MEMBER_NAME(_sound,"_sound");
	HX_VISIT_MEMBER_NAME(_channel,"_channel");
	HX_VISIT_MEMBER_NAME(_transform,"_transform");
	HX_VISIT_MEMBER_NAME(_paused,"_paused");
	HX_VISIT_MEMBER_NAME(_volume,"_volume");
	HX_VISIT_MEMBER_NAME(_time,"_time");
	HX_VISIT_MEMBER_NAME(_length,"_length");
	HX_VISIT_MEMBER_NAME(_pitch,"_pitch");
	HX_VISIT_MEMBER_NAME(_volumeAdjust,"_volumeAdjust");
	HX_VISIT_MEMBER_NAME(_target,"_target");
	HX_VISIT_MEMBER_NAME(_radius,"_radius");
	HX_VISIT_MEMBER_NAME(_proximityPan,"_proximityPan");
	HX_VISIT_MEMBER_NAME(_alreadyPaused,"_alreadyPaused");
	 ::flixel::FlxBasic_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val FlxSound_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"x") ) { return ::hx::Val( x ); }
		if (HX_FIELD_EQ(inName,"y") ) { return ::hx::Val( y ); }
		break;
	case 3:
		if (HX_FIELD_EQ(inName,"pan") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_pan() ); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"name") ) { return ::hx::Val( name ); }
		if (HX_FIELD_EQ(inName,"time") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_time() ); }
		if (HX_FIELD_EQ(inName,"kill") ) { return ::hx::Val( kill_dyn() ); }
		if (HX_FIELD_EQ(inName,"init") ) { return ::hx::Val( init_dyn() ); }
		if (HX_FIELD_EQ(inName,"play") ) { return ::hx::Val( play_dyn() ); }
		if (HX_FIELD_EQ(inName,"stop") ) { return ::hx::Val( stop_dyn() ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"pitch") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_pitch() ); }
		if (HX_FIELD_EQ(inName,"group") ) { return ::hx::Val( group ); }
		if (HX_FIELD_EQ(inName,"_time") ) { return ::hx::Val( _time ); }
		if (HX_FIELD_EQ(inName,"reset") ) { return ::hx::Val( reset_dyn() ); }
		if (HX_FIELD_EQ(inName,"pause") ) { return ::hx::Val( pause_dyn() ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"artist") ) { return ::hx::Val( artist ); }
		if (HX_FIELD_EQ(inName,"volume") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_volume() ); }
		if (HX_FIELD_EQ(inName,"length") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_length() ); }
		if (HX_FIELD_EQ(inName,"looped") ) { return ::hx::Val( looped ); }
		if (HX_FIELD_EQ(inName,"_sound") ) { return ::hx::Val( _sound ); }
		if (HX_FIELD_EQ(inName,"_pitch") ) { return ::hx::Val( _pitch ); }
		if (HX_FIELD_EQ(inName,"update") ) { return ::hx::Val( update_dyn() ); }
		if (HX_FIELD_EQ(inName,"resume") ) { return ::hx::Val( resume_dyn() ); }
		if (HX_FIELD_EQ(inName,"fadeIn") ) { return ::hx::Val( fadeIn_dyn() ); }
		if (HX_FIELD_EQ(inName,"gotID3") ) { return ::hx::Val( gotID3_dyn() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"persist") ) { return ::hx::Val( persist ); }
		if (HX_FIELD_EQ(inName,"playing") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_playing() ); }
		if (HX_FIELD_EQ(inName,"endTime") ) { return ::hx::Val( endTime ); }
		if (HX_FIELD_EQ(inName,"_paused") ) { return ::hx::Val( _paused ); }
		if (HX_FIELD_EQ(inName,"_volume") ) { return ::hx::Val( _volume ); }
		if (HX_FIELD_EQ(inName,"_length") ) { return ::hx::Val( _length ); }
		if (HX_FIELD_EQ(inName,"_target") ) { return ::hx::Val( _target ); }
		if (HX_FIELD_EQ(inName,"_radius") ) { return ::hx::Val( _radius ); }
		if (HX_FIELD_EQ(inName,"destroy") ) { return ::hx::Val( destroy_dyn() ); }
		if (HX_FIELD_EQ(inName,"fadeOut") ) { return ::hx::Val( fadeOut_dyn() ); }
		if (HX_FIELD_EQ(inName,"stopped") ) { return ::hx::Val( stopped_dyn() ); }
		if (HX_FIELD_EQ(inName,"cleanup") ) { return ::hx::Val( cleanup_dyn() ); }
		if (HX_FIELD_EQ(inName,"onFocus") ) { return ::hx::Val( onFocus_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_pan") ) { return ::hx::Val( get_pan_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_pan") ) { return ::hx::Val( set_pan_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"loopTime") ) { return ::hx::Val( loopTime ); }
		if (HX_FIELD_EQ(inName,"_channel") ) { return ::hx::Val( _channel ); }
		if (HX_FIELD_EQ(inName,"get_time") ) { return ::hx::Val( get_time_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_time") ) { return ::hx::Val( set_time_dyn() ); }
		if (HX_FIELD_EQ(inName,"toString") ) { return ::hx::Val( toString_dyn() ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"amplitude") ) { return ::hx::Val( amplitude ); }
		if (HX_FIELD_EQ(inName,"fadeTween") ) { return ::hx::Val( fadeTween ); }
		if (HX_FIELD_EQ(inName,"proximity") ) { return ::hx::Val( proximity_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_group") ) { return ::hx::Val( set_group_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_pitch") ) { return ::hx::Val( get_pitch_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_pitch") ) { return ::hx::Val( set_pitch_dyn() ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"onComplete") ) { return ::hx::Val( onComplete ); }
		if (HX_FIELD_EQ(inName,"_transform") ) { return ::hx::Val( _transform ); }
		if (HX_FIELD_EQ(inName,"loadStream") ) { return ::hx::Val( loadStream_dyn() ); }
		if (HX_FIELD_EQ(inName,"startSound") ) { return ::hx::Val( startSound_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_volume") ) { return ::hx::Val( get_volume_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_volume") ) { return ::hx::Val( set_volume_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_length") ) { return ::hx::Val( get_length_dyn() ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"autoDestroy") ) { return ::hx::Val( autoDestroy ); }
		if (HX_FIELD_EQ(inName,"volumeTween") ) { return ::hx::Val( volumeTween_dyn() ); }
		if (HX_FIELD_EQ(inName,"setPosition") ) { return ::hx::Val( setPosition_dyn() ); }
		if (HX_FIELD_EQ(inName,"onFocusLost") ) { return ::hx::Val( onFocusLost_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_playing") ) { return ::hx::Val( get_playing_dyn() ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"loadEmbedded") ) { return ::hx::Val( loadEmbedded_dyn() ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"amplitudeLeft") ) { return ::hx::Val( amplitudeLeft ); }
		if (HX_FIELD_EQ(inName,"_volumeAdjust") ) { return ::hx::Val( _volumeAdjust ); }
		if (HX_FIELD_EQ(inName,"_proximityPan") ) { return ::hx::Val( _proximityPan ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"amplitudeRight") ) { return ::hx::Val( amplitudeRight ); }
		if (HX_FIELD_EQ(inName,"_alreadyPaused") ) { return ::hx::Val( _alreadyPaused ); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"getActualVolume") ) { return ::hx::Val( getActualVolume_dyn() ); }
		if (HX_FIELD_EQ(inName,"updateTransform") ) { return ::hx::Val( updateTransform_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val FlxSound_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"x") ) { x=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"y") ) { y=inValue.Cast< Float >(); return inValue; }
		break;
	case 3:
		if (HX_FIELD_EQ(inName,"pan") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_pan(inValue.Cast< Float >()) ); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"name") ) { name=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"time") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_time(inValue.Cast< Float >()) ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"pitch") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_pitch(inValue.Cast< Float >()) ); }
		if (HX_FIELD_EQ(inName,"group") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_group(inValue.Cast<  ::flixel::_hx_system::FlxSoundGroup >()) );group=inValue.Cast<  ::flixel::_hx_system::FlxSoundGroup >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_time") ) { _time=inValue.Cast< Float >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"artist") ) { artist=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"volume") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_volume(inValue.Cast< Float >()) ); }
		if (HX_FIELD_EQ(inName,"looped") ) { looped=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_sound") ) { _sound=inValue.Cast<  ::openfl::media::Sound >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_pitch") ) { _pitch=inValue.Cast< Float >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"persist") ) { persist=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"endTime") ) { endTime=inValue.Cast<  ::Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_paused") ) { _paused=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_volume") ) { _volume=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_length") ) { _length=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_target") ) { _target=inValue.Cast<  ::flixel::FlxObject >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_radius") ) { _radius=inValue.Cast< Float >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"loopTime") ) { loopTime=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_channel") ) { _channel=inValue.Cast<  ::openfl::media::SoundChannel >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"amplitude") ) { amplitude=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"fadeTween") ) { fadeTween=inValue.Cast<  ::flixel::tweens::FlxTween >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"onComplete") ) { onComplete=inValue.Cast<  ::Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_transform") ) { _transform=inValue.Cast<  ::openfl::media::SoundTransform >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"autoDestroy") ) { autoDestroy=inValue.Cast< bool >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"amplitudeLeft") ) { amplitudeLeft=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_volumeAdjust") ) { _volumeAdjust=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_proximityPan") ) { _proximityPan=inValue.Cast< bool >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"amplitudeRight") ) { amplitudeRight=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_alreadyPaused") ) { _alreadyPaused=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void FlxSound_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("x",78,00,00,00));
	outFields->push(HX_("y",79,00,00,00));
	outFields->push(HX_("persist",14,22,71,83));
	outFields->push(HX_("name",4b,72,ff,48));
	outFields->push(HX_("artist",c7,f2,48,b9));
	outFields->push(HX_("amplitude",43,15,fb,69));
	outFields->push(HX_("amplitudeLeft",ea,a6,0b,b4));
	outFields->push(HX_("amplitudeRight",99,73,33,4d));
	outFields->push(HX_("autoDestroy",4b,d1,69,0a));
	outFields->push(HX_("pan",5d,51,55,00));
	outFields->push(HX_("playing",6e,0f,18,8a));
	outFields->push(HX_("volume",da,29,53,5f));
	outFields->push(HX_("pitch",c0,bb,a0,c2));
	outFields->push(HX_("time",0d,cc,fc,4c));
	outFields->push(HX_("length",e6,94,07,9f));
	outFields->push(HX_("group",3f,b3,f4,99));
	outFields->push(HX_("looped",c3,5f,b9,61));
	outFields->push(HX_("loopTime",91,a0,6a,3f));
	outFields->push(HX_("endTime",88,85,21,2f));
	outFields->push(HX_("fadeTween",4f,03,59,05));
	outFields->push(HX_("_sound",10,d4,b3,7c));
	outFields->push(HX_("_channel",44,5a,8a,06));
	outFields->push(HX_("_transform",2d,a9,35,a1));
	outFields->push(HX_("_paused",4d,52,fb,5d));
	outFields->push(HX_("_volume",79,3b,ca,cd));
	outFields->push(HX_("_time",ec,e7,0d,00));
	outFields->push(HX_("_length",85,a6,7e,0d));
	outFields->push(HX_("_pitch",01,03,88,be));
	outFields->push(HX_("_volumeAdjust",e8,dc,fb,32));
	outFields->push(HX_("_target",f0,04,64,f5));
	outFields->push(HX_("_radius",f1,e1,6d,1f));
	outFields->push(HX_("_proximityPan",3d,e4,2d,8b));
	outFields->push(HX_("_alreadyPaused",a7,fe,5b,ba));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo FlxSound_obj_sMemberStorageInfo[] = {
	{::hx::fsFloat,(int)offsetof(FlxSound_obj,x),HX_("x",78,00,00,00)},
	{::hx::fsFloat,(int)offsetof(FlxSound_obj,y),HX_("y",79,00,00,00)},
	{::hx::fsBool,(int)offsetof(FlxSound_obj,persist),HX_("persist",14,22,71,83)},
	{::hx::fsString,(int)offsetof(FlxSound_obj,name),HX_("name",4b,72,ff,48)},
	{::hx::fsString,(int)offsetof(FlxSound_obj,artist),HX_("artist",c7,f2,48,b9)},
	{::hx::fsFloat,(int)offsetof(FlxSound_obj,amplitude),HX_("amplitude",43,15,fb,69)},
	{::hx::fsFloat,(int)offsetof(FlxSound_obj,amplitudeLeft),HX_("amplitudeLeft",ea,a6,0b,b4)},
	{::hx::fsFloat,(int)offsetof(FlxSound_obj,amplitudeRight),HX_("amplitudeRight",99,73,33,4d)},
	{::hx::fsBool,(int)offsetof(FlxSound_obj,autoDestroy),HX_("autoDestroy",4b,d1,69,0a)},
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(FlxSound_obj,onComplete),HX_("onComplete",f8,d4,7e,5d)},
	{::hx::fsObject /*  ::flixel::_hx_system::FlxSoundGroup */ ,(int)offsetof(FlxSound_obj,group),HX_("group",3f,b3,f4,99)},
	{::hx::fsBool,(int)offsetof(FlxSound_obj,looped),HX_("looped",c3,5f,b9,61)},
	{::hx::fsFloat,(int)offsetof(FlxSound_obj,loopTime),HX_("loopTime",91,a0,6a,3f)},
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(FlxSound_obj,endTime),HX_("endTime",88,85,21,2f)},
	{::hx::fsObject /*  ::flixel::tweens::FlxTween */ ,(int)offsetof(FlxSound_obj,fadeTween),HX_("fadeTween",4f,03,59,05)},
	{::hx::fsObject /*  ::openfl::media::Sound */ ,(int)offsetof(FlxSound_obj,_sound),HX_("_sound",10,d4,b3,7c)},
	{::hx::fsObject /*  ::openfl::media::SoundChannel */ ,(int)offsetof(FlxSound_obj,_channel),HX_("_channel",44,5a,8a,06)},
	{::hx::fsObject /*  ::openfl::media::SoundTransform */ ,(int)offsetof(FlxSound_obj,_transform),HX_("_transform",2d,a9,35,a1)},
	{::hx::fsBool,(int)offsetof(FlxSound_obj,_paused),HX_("_paused",4d,52,fb,5d)},
	{::hx::fsFloat,(int)offsetof(FlxSound_obj,_volume),HX_("_volume",79,3b,ca,cd)},
	{::hx::fsFloat,(int)offsetof(FlxSound_obj,_time),HX_("_time",ec,e7,0d,00)},
	{::hx::fsFloat,(int)offsetof(FlxSound_obj,_length),HX_("_length",85,a6,7e,0d)},
	{::hx::fsFloat,(int)offsetof(FlxSound_obj,_pitch),HX_("_pitch",01,03,88,be)},
	{::hx::fsFloat,(int)offsetof(FlxSound_obj,_volumeAdjust),HX_("_volumeAdjust",e8,dc,fb,32)},
	{::hx::fsObject /*  ::flixel::FlxObject */ ,(int)offsetof(FlxSound_obj,_target),HX_("_target",f0,04,64,f5)},
	{::hx::fsFloat,(int)offsetof(FlxSound_obj,_radius),HX_("_radius",f1,e1,6d,1f)},
	{::hx::fsBool,(int)offsetof(FlxSound_obj,_proximityPan),HX_("_proximityPan",3d,e4,2d,8b)},
	{::hx::fsBool,(int)offsetof(FlxSound_obj,_alreadyPaused),HX_("_alreadyPaused",a7,fe,5b,ba)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *FlxSound_obj_sStaticStorageInfo = 0;
#endif

static ::String FlxSound_obj_sMemberFields[] = {
	HX_("x",78,00,00,00),
	HX_("y",79,00,00,00),
	HX_("persist",14,22,71,83),
	HX_("name",4b,72,ff,48),
	HX_("artist",c7,f2,48,b9),
	HX_("amplitude",43,15,fb,69),
	HX_("amplitudeLeft",ea,a6,0b,b4),
	HX_("amplitudeRight",99,73,33,4d),
	HX_("autoDestroy",4b,d1,69,0a),
	HX_("onComplete",f8,d4,7e,5d),
	HX_("group",3f,b3,f4,99),
	HX_("looped",c3,5f,b9,61),
	HX_("loopTime",91,a0,6a,3f),
	HX_("endTime",88,85,21,2f),
	HX_("fadeTween",4f,03,59,05),
	HX_("_sound",10,d4,b3,7c),
	HX_("_channel",44,5a,8a,06),
	HX_("_transform",2d,a9,35,a1),
	HX_("_paused",4d,52,fb,5d),
	HX_("_volume",79,3b,ca,cd),
	HX_("_time",ec,e7,0d,00),
	HX_("_length",85,a6,7e,0d),
	HX_("_pitch",01,03,88,be),
	HX_("_volumeAdjust",e8,dc,fb,32),
	HX_("_target",f0,04,64,f5),
	HX_("_radius",f1,e1,6d,1f),
	HX_("_proximityPan",3d,e4,2d,8b),
	HX_("_alreadyPaused",a7,fe,5b,ba),
	HX_("reset",cf,49,c8,e6),
	HX_("destroy",fa,2c,86,24),
	HX_("update",09,86,05,87),
	HX_("kill",9e,df,09,47),
	HX_("loadEmbedded",d0,05,cb,97),
	HX_("loadStream",46,43,58,c6),
	HX_("init",10,3b,bb,45),
	HX_("proximity",3f,c9,25,82),
	HX_("play",f4,2d,5a,4a),
	HX_("resume",ad,69,84,08),
	HX_("pause",f6,d6,57,bd),
	HX_("stop",02,f0,5b,4c),
	HX_("fadeOut",72,38,3c,31),
	HX_("fadeIn",81,4c,ab,e4),
	HX_("volumeTween",31,fa,02,ac),
	HX_("getActualVolume",be,9c,9c,37),
	HX_("setPosition",6b,6a,5b,fb),
	HX_("updateTransform",23,fe,1d,95),
	HX_("startSound",0d,65,e3,9c),
	HX_("stopped",0d,d2,61,43),
	HX_("cleanup",24,0c,42,ab),
	HX_("gotID3",2c,ee,20,65),
	HX_("onFocus",39,fe,c6,9a),
	HX_("onFocusLost",bd,e4,85,41),
	HX_("set_group",a2,fb,ee,c0),
	HX_("get_playing",85,6f,12,10),
	HX_("get_volume",a3,99,da,4f),
	HX_("set_volume",17,38,58,53),
	HX_("get_pitch",17,18,4a,06),
	HX_("set_pitch",23,04,9b,e9),
	HX_("get_pan",f4,19,ca,26),
	HX_("set_pan",00,ab,cb,19),
	HX_("get_time",96,87,b7,cc),
	HX_("set_time",0a,e1,14,7b),
	HX_("get_length",af,04,8f,8f),
	HX_("toString",ac,d0,6e,38),
	::String(null()) };

::hx::Class FlxSound_obj::__mClass;

void FlxSound_obj::__register()
{
	FlxSound_obj _hx_dummy;
	FlxSound_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("flixel.system.FlxSound",6a,26,83,c1);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(FlxSound_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< FlxSound_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = FlxSound_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = FlxSound_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace flixel
} // end namespace system
