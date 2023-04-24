#include <hxcpp.h>

#ifndef INCLUDED_Alphabet
#include <Alphabet.h>
#endif
#ifndef INCLUDED_Conductor
#include <Conductor.h>
#endif
#ifndef INCLUDED_Highscore
#include <Highscore.h>
#endif
#ifndef INCLUDED_KadeEngineData
#include <KadeEngineData.h>
#endif
#ifndef INCLUDED_MainMenuState
#include <MainMenuState.h>
#endif
#ifndef INCLUDED_MusicBeatState
#include <MusicBeatState.h>
#endif
#ifndef INCLUDED_Paths
#include <Paths.h>
#endif
#ifndef INCLUDED_PlayerSettings
#include <PlayerSettings.h>
#endif
#ifndef INCLUDED_Sys
#include <Sys.h>
#endif
#ifndef INCLUDED_TitleState
#include <TitleState.h>
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
#ifndef INCLUDED_flixel_FlxGame
#include <flixel/FlxGame.h>
#endif
#ifndef INCLUDED_flixel_FlxObject
#include <flixel/FlxObject.h>
#endif
#ifndef INCLUDED_flixel_FlxSprite
#include <flixel/FlxSprite.h>
#endif
#ifndef INCLUDED_flixel_FlxState
#include <flixel/FlxState.h>
#endif
#ifndef INCLUDED_flixel_addons_transition_FlxTransitionableState
#include <flixel/addons/transition/FlxTransitionableState.h>
#endif
#ifndef INCLUDED_flixel_addons_transition_GraphicTransTileDiamond
#include <flixel/addons/transition/GraphicTransTileDiamond.h>
#endif
#ifndef INCLUDED_flixel_addons_transition_TransitionData
#include <flixel/addons/transition/TransitionData.h>
#endif
#ifndef INCLUDED_flixel_addons_ui_FlxUIState
#include <flixel/addons/ui/FlxUIState.h>
#endif
#ifndef INCLUDED_flixel_addons_ui_interfaces_IEventGetter
#include <flixel/addons/ui/interfaces/IEventGetter.h>
#endif
#ifndef INCLUDED_flixel_addons_ui_interfaces_IFlxUIState
#include <flixel/addons/ui/interfaces/IFlxUIState.h>
#endif
#ifndef INCLUDED_flixel_animation_FlxAnimationController
#include <flixel/animation/FlxAnimationController.h>
#endif
#ifndef INCLUDED_flixel_graphics_FlxGraphic
#include <flixel/graphics/FlxGraphic.h>
#endif
#ifndef INCLUDED_flixel_graphics_frames_FlxAtlasFrames
#include <flixel/graphics/frames/FlxAtlasFrames.h>
#endif
#ifndef INCLUDED_flixel_graphics_frames_FlxFramesCollection
#include <flixel/graphics/frames/FlxFramesCollection.h>
#endif
#ifndef INCLUDED_flixel_group_FlxTypedGroup
#include <flixel/group/FlxTypedGroup.h>
#endif
#ifndef INCLUDED_flixel_group_FlxTypedSpriteGroup
#include <flixel/group/FlxTypedSpriteGroup.h>
#endif
#ifndef INCLUDED_flixel_input_FlxBaseKeyList
#include <flixel/input/FlxBaseKeyList.h>
#endif
#ifndef INCLUDED_flixel_input_FlxInput
#include <flixel/input/FlxInput.h>
#endif
#ifndef INCLUDED_flixel_input_FlxKeyManager
#include <flixel/input/FlxKeyManager.h>
#endif
#ifndef INCLUDED_flixel_input_FlxPointer
#include <flixel/input/FlxPointer.h>
#endif
#ifndef INCLUDED_flixel_input_IFlxInput
#include <flixel/input/IFlxInput.h>
#endif
#ifndef INCLUDED_flixel_input_IFlxInputManager
#include <flixel/input/IFlxInputManager.h>
#endif
#ifndef INCLUDED_flixel_input_gamepad_FlxGamepad
#include <flixel/input/gamepad/FlxGamepad.h>
#endif
#ifndef INCLUDED_flixel_input_gamepad_FlxGamepadButton
#include <flixel/input/gamepad/FlxGamepadButton.h>
#endif
#ifndef INCLUDED_flixel_input_gamepad_FlxGamepadManager
#include <flixel/input/gamepad/FlxGamepadManager.h>
#endif
#ifndef INCLUDED_flixel_input_gamepad_lists_FlxBaseGamepadList
#include <flixel/input/gamepad/lists/FlxBaseGamepadList.h>
#endif
#ifndef INCLUDED_flixel_input_gamepad_lists_FlxGamepadButtonList
#include <flixel/input/gamepad/lists/FlxGamepadButtonList.h>
#endif
#ifndef INCLUDED_flixel_input_gamepad_mappings_FlxGamepadMapping
#include <flixel/input/gamepad/mappings/FlxGamepadMapping.h>
#endif
#ifndef INCLUDED_flixel_input_keyboard_FlxKeyList
#include <flixel/input/keyboard/FlxKeyList.h>
#endif
#ifndef INCLUDED_flixel_input_keyboard_FlxKeyboard
#include <flixel/input/keyboard/FlxKeyboard.h>
#endif
#ifndef INCLUDED_flixel_input_mouse_FlxMouse
#include <flixel/input/mouse/FlxMouse.h>
#endif
#ifndef INCLUDED_flixel_math_FlxBasePoint
#include <flixel/math/FlxBasePoint.h>
#endif
#ifndef INCLUDED_flixel_math_FlxRandom
#include <flixel/math/FlxRandom.h>
#endif
#ifndef INCLUDED_flixel_math_FlxRect
#include <flixel/math/FlxRect.h>
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
#ifndef INCLUDED_flixel_tweens_FlxEase
#include <flixel/tweens/FlxEase.h>
#endif
#ifndef INCLUDED_flixel_tweens_FlxTween
#include <flixel/tweens/FlxTween.h>
#endif
#ifndef INCLUDED_flixel_tweens_misc_NumTween
#include <flixel/tweens/misc/NumTween.h>
#endif
#ifndef INCLUDED_flixel_tweens_misc_VarTween
#include <flixel/tweens/misc/VarTween.h>
#endif
#ifndef INCLUDED_flixel_util_FlxSave
#include <flixel/util/FlxSave.h>
#endif
#ifndef INCLUDED_flixel_util_FlxTimer
#include <flixel/util/FlxTimer.h>
#endif
#ifndef INCLUDED_flixel_util_FlxTimerManager
#include <flixel/util/FlxTimerManager.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxPooled
#include <flixel/util/IFlxPooled.h>
#endif
#ifndef INCLUDED_haxe_Log
#include <haxe/Log.h>
#endif
#ifndef INCLUDED_lime_utils_AssetLibrary
#include <lime/utils/AssetLibrary.h>
#endif
#ifndef INCLUDED_openfl_display_BitmapData
#include <openfl/display/BitmapData.h>
#endif
#ifndef INCLUDED_openfl_display_DisplayObject
#include <openfl/display/DisplayObject.h>
#endif
#ifndef INCLUDED_openfl_display_DisplayObjectContainer
#include <openfl/display/DisplayObjectContainer.h>
#endif
#ifndef INCLUDED_openfl_display_IBitmapDrawable
#include <openfl/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_openfl_display_InteractiveObject
#include <openfl/display/InteractiveObject.h>
#endif
#ifndef INCLUDED_openfl_display_Sprite
#include <openfl/display/Sprite.h>
#endif
#ifndef INCLUDED_openfl_events_EventDispatcher
#include <openfl/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_events_IEventDispatcher
#include <openfl/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_media_SoundChannel
#include <openfl/media/SoundChannel.h>
#endif
#ifndef INCLUDED_openfl_utils_Assets
#include <openfl/utils/Assets.h>
#endif
#ifndef INCLUDED_sys_FileSystem
#include <sys/FileSystem.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_a55214e0452daa02_32_new,"TitleState","new",0x3b23deeb,"TitleState.new","TitleState.hx",32,0xd132a6e5)
HX_LOCAL_STACK_FRAME(_hx_pos_a55214e0452daa02_78_create,"TitleState","create",0x801cc151,"TitleState.create","TitleState.hx",78,0xd132a6e5)
HX_LOCAL_STACK_FRAME(_hx_pos_a55214e0452daa02_46_create,"TitleState","create",0x801cc151,"TitleState.create","TitleState.hx",46,0xd132a6e5)
HX_LOCAL_STACK_FRAME(_hx_pos_a55214e0452daa02_87_startIntro,"TitleState","startIntro",0x6a094b7f,"TitleState.startIntro","TitleState.hx",87,0xd132a6e5)
HX_LOCAL_STACK_FRAME(_hx_pos_a55214e0452daa02_151_getIntroTextShit,"TitleState","getIntroTextShit",0x5dcf15b8,"TitleState.getIntroTextShit","TitleState.hx",151,0xd132a6e5)
HX_LOCAL_STACK_FRAME(_hx_pos_a55214e0452daa02_166_update,"TitleState","update",0x8b12e05e,"TitleState.update","TitleState.hx",166,0xd132a6e5)
HX_LOCAL_STACK_FRAME(_hx_pos_a55214e0452daa02_207_update,"TitleState","update",0x8b12e05e,"TitleState.update","TitleState.hx",207,0xd132a6e5)
HX_LOCAL_STACK_FRAME(_hx_pos_a55214e0452daa02_218_createCoolText,"TitleState","createCoolText",0x83610287,"TitleState.createCoolText","TitleState.hx",218,0xd132a6e5)
HX_LOCAL_STACK_FRAME(_hx_pos_a55214e0452daa02_227_addMoreText,"TitleState","addMoreText",0xcf420fae,"TitleState.addMoreText","TitleState.hx",227,0xd132a6e5)
HX_LOCAL_STACK_FRAME(_hx_pos_a55214e0452daa02_236_deleteCoolText,"TitleState","deleteCoolText",0x8afda2b6,"TitleState.deleteCoolText","TitleState.hx",236,0xd132a6e5)
HX_LOCAL_STACK_FRAME(_hx_pos_a55214e0452daa02_242_beatHit,"TitleState","beatHit",0xfba69a88,"TitleState.beatHit","TitleState.hx",242,0xd132a6e5)
static const ::String _hx_array_data_8ca18d79_14[] = {
	HX_("ninjamuffin99",f7,4c,e5,00),HX_("phantomArcade",bd,dd,c2,a7),HX_("kawaisprite",0e,de,66,45),HX_("evilsk8er",f9,15,51,51),
};
static const ::String _hx_array_data_8ca18d79_15[] = {
	HX_("Kade Engine",2b,76,5c,f8),HX_("by",d7,55,00,00),
};
HX_LOCAL_STACK_FRAME(_hx_pos_a55214e0452daa02_281_skipIntro,"TitleState","skipIntro",0xc9924038,"TitleState.skipIntro","TitleState.hx",281,0xd132a6e5)
HX_LOCAL_STACK_FRAME(_hx_pos_a55214e0452daa02_34_boot,"TitleState","boot",0x7c582f47,"TitleState.boot","TitleState.hx",34,0xd132a6e5)

void TitleState_obj::__construct( ::flixel::addons::transition::TransitionData TransIn, ::flixel::addons::transition::TransitionData TransOut){
            	HX_STACKFRAME(&_hx_pos_a55214e0452daa02_32_new)
HXLINE( 278)		this->skippedIntro = false;
HXLINE( 164)		this->transitioning = false;
HXLINE(  41)		this->curWacky = ::Array_obj< ::String >::__new(0);
HXLINE(  32)		super::__construct(TransIn,TransOut);
            	}

Dynamic TitleState_obj::__CreateEmpty() { return new TitleState_obj; }

void *TitleState_obj::_hx_vtable = 0;

Dynamic TitleState_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< TitleState_obj > _hx_result = new TitleState_obj();
	_hx_result->__construct(inArgs[0],inArgs[1]);
	return _hx_result;
}

bool TitleState_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x3f706236) {
		if (inClassId<=(int)0x23a57bae) {
			if (inClassId<=(int)0x22c6bd01) {
				return inClassId==(int)0x00000001 || inClassId==(int)0x22c6bd01;
			} else {
				return inClassId==(int)0x23a57bae;
			}
		} else {
			return inClassId==(int)0x2f064378 || inClassId==(int)0x3f706236;
		}
	} else {
		if (inClassId<=(int)0x7c795c9f) {
			return inClassId==(int)0x62817b24 || inClassId==(int)0x7c795c9f;
		} else {
			return inClassId==(int)0x7ccf8994;
		}
	}
}

void TitleState_obj::create(){
            		HX_BEGIN_LOCAL_FUNC_S1(::hx::LocalFunc,_hx_Closure_0, ::TitleState,_gthis) HXARGC(1)
            		void _hx_run( ::flixel::util::FlxTimer tmr){
            			HX_GC_STACKFRAME(&_hx_pos_a55214e0452daa02_78_create)
HXLINE(  78)			_gthis->startIntro();
            		}
            		HX_END_LOCAL_FUNC1((void))

            	HX_GC_STACKFRAME(&_hx_pos_a55214e0452daa02_46_create)
HXDLIN(  46)		 ::TitleState _gthis = ::hx::ObjectPtr<OBJ_>(this);
HXLINE(  48)		if (!(::sys::FileSystem_obj::exists((::Sys_obj::getCwd() + HX_("/assets/replays",0f,a7,b1,e3))))) {
HXLINE(  49)			::sys::FileSystem_obj::createDirectory((::Sys_obj::getCwd() + HX_("/assets/replays",0f,a7,b1,e3)));
            		}
HXLINE(  54)		 ::Dynamic _hx_tmp = ::haxe::Log_obj::trace;
HXDLIN(  54)		::String _hx_tmp1 = ((HX_("Loaded ",5b,e4,40,d6) + ::openfl::utils::Assets_obj::getLibrary(HX_("default",c1,d8,c3,9b))->assetsLoaded) + HX_(" assets (DEFAULT)",d3,2e,5f,74));
HXDLIN(  54)		_hx_tmp(_hx_tmp1,::hx::SourceInfo(HX_("code/TitleState.hx",43,7b,78,09),54,HX_("TitleState",79,8d,a1,8c),HX_("create",fc,66,0f,7c)));
HXLINE(  57)		::PlayerSettings_obj::init();
HXLINE(  59)		 ::flixel::math::FlxRandom _hx_tmp2 = ::flixel::FlxG_obj::random;
HXDLIN(  59)		this->curWacky = _hx_tmp2->getObject_Array_String(this->getIntroTextShit(),null(),null(),null());
HXLINE(  63)		this->super::create();
HXLINE(  65)		::flixel::FlxG_obj::save->bind(HX_("vsimpostordsides",bc,07,37,ae),null());
HXLINE(  67)		::KadeEngineData_obj::initSave();
HXLINE(  69)		::Highscore_obj::load();
HXLINE(  76)		 ::flixel::util::FlxTimer_obj::__alloc( HX_CTX ,null())->start(1, ::Dynamic(new _hx_Closure_0(_gthis)),null());
            	}


void TitleState_obj::startIntro(){
            	HX_GC_STACKFRAME(&_hx_pos_a55214e0452daa02_87_startIntro)
HXLINE(  88)		if (!(::TitleState_obj::initialized)) {
HXLINE(  89)			 ::flixel::graphics::FlxGraphic diamond = ::flixel::graphics::FlxGraphic_obj::fromClass(::hx::ClassOf< ::flixel::addons::transition::GraphicTransTileDiamond >(),null(),null(),null());
HXLINE(  90)			diamond->persist = true;
HXLINE(  91)			diamond->set_destroyOnNoUse(false);
HXLINE(  93)			 ::flixel::math::FlxBasePoint this1 =  ::flixel::math::FlxBasePoint_obj::__alloc( HX_CTX ,0,-1);
HXDLIN(  93)			::flixel::addons::transition::FlxTransitionableState_obj::defaultTransIn =  ::flixel::addons::transition::TransitionData_obj::__alloc( HX_CTX ,HX_("fade",7c,b5,b5,43),-16777216,1,this1, ::Dynamic(::hx::Anon_obj::Create(3)
            				->setFixed(0,HX_("width",06,b6,62,ca),32)
            				->setFixed(1,HX_("height",e7,07,4c,02),32)
            				->setFixed(2,HX_("asset",f0,69,39,26),diamond)), ::flixel::math::FlxRect_obj::__alloc( HX_CTX ,-200,-200,(( (Float)(::flixel::FlxG_obj::width) ) * ((Float)1.4)),(( (Float)(::flixel::FlxG_obj::height) ) * ((Float)1.4))));
HXLINE(  95)			 ::flixel::math::FlxBasePoint this2 =  ::flixel::math::FlxBasePoint_obj::__alloc( HX_CTX ,0,1);
HXDLIN(  95)			::flixel::addons::transition::FlxTransitionableState_obj::defaultTransOut =  ::flixel::addons::transition::TransitionData_obj::__alloc( HX_CTX ,HX_("fade",7c,b5,b5,43),-16777216,((Float)0.7),this2, ::Dynamic(::hx::Anon_obj::Create(3)
            				->setFixed(0,HX_("width",06,b6,62,ca),32)
            				->setFixed(1,HX_("height",e7,07,4c,02),32)
            				->setFixed(2,HX_("asset",f0,69,39,26),diamond)), ::flixel::math::FlxRect_obj::__alloc( HX_CTX ,-200,-200,(( (Float)(::flixel::FlxG_obj::width) ) * ((Float)1.4)),(( (Float)(::flixel::FlxG_obj::height) ) * ((Float)1.4))));
HXLINE(  98)			this->transIn = ::flixel::addons::transition::FlxTransitionableState_obj::defaultTransIn;
HXLINE(  99)			this->transOut = ::flixel::addons::transition::FlxTransitionableState_obj::defaultTransOut;
HXLINE( 101)			 ::flixel::_hx_system::frontEnds::SoundFrontEnd _hx_tmp = ::flixel::FlxG_obj::sound;
HXDLIN( 101)			::String library = null();
HXDLIN( 101)			_hx_tmp->playMusic(::Paths_obj::getPath((((HX_("music/",ea,bf,1b,3f) + HX_("freakyMenu",15,c9,93,86)) + HX_(".",2e,00,00,00)) + HX_("ogg",4f,94,54,00)),HX_("MUSIC",85,08,49,8e),library),0,null(),null());
HXLINE( 103)			{
HXLINE( 103)				 ::flixel::_hx_system::FlxSound _this = ::flixel::FlxG_obj::sound->music;
HXDLIN( 103)				 ::Dynamic onComplete = null();
HXDLIN( 103)				if (::hx::IsNull( _this->_channel )) {
HXLINE( 103)					_this->play(null(),null(),null());
            				}
HXDLIN( 103)				if (::hx::IsNotNull( _this->fadeTween )) {
HXLINE( 103)					_this->fadeTween->cancel();
            				}
HXDLIN( 103)				_this->fadeTween = ::flixel::tweens::FlxTween_obj::num(( (Float)(0) ),((Float)0.7),4, ::Dynamic(::hx::Anon_obj::Create(1)
            					->setFixed(0,HX_("onComplete",f8,d4,7e,5d),onComplete)),_this->volumeTween_dyn());
            			}
            		}
HXLINE( 106)		::Conductor_obj::changeBPM(( (Float)(102) ));
HXLINE( 107)		this->persistentUpdate = true;
HXLINE( 109)		 ::flixel::FlxSprite _hx_tmp =  ::flixel::FlxSprite_obj::__alloc( HX_CTX ,0,0,null());
HXDLIN( 109)		::String library = null();
HXDLIN( 109)		this->bg = _hx_tmp->loadGraphic(::Paths_obj::getPath(((HX_("images/",77,50,74,c1) + HX_("menuBG",24,65,6d,05)) + HX_(".png",3b,2d,bd,1e)),HX_("IMAGE",3b,57,57,3b),library),null(),null(),null(),null(),null());
HXLINE( 110)		this->add(this->bg);
HXLINE( 112)		this->logoBl =  ::flixel::FlxSprite_obj::__alloc( HX_CTX ,352,56,null());
HXLINE( 113)		 ::flixel::FlxSprite _hx_tmp1 = this->logoBl;
HXDLIN( 113)		::String library1 = null();
HXDLIN( 113)		::String _hx_tmp2 = ::Paths_obj::getPath(((HX_("images/",77,50,74,c1) + HX_("logoBumpin",26,cb,02,ab)) + HX_(".png",3b,2d,bd,1e)),HX_("IMAGE",3b,57,57,3b),library1);
HXDLIN( 113)		_hx_tmp1->set_frames(::flixel::graphics::frames::FlxAtlasFrames_obj::fromSparrow(_hx_tmp2,::Paths_obj::getPath(((HX_("images/",77,50,74,c1) + HX_("logoBumpin",26,cb,02,ab)) + HX_(".xml",69,3e,c3,1e)),HX_("TEXT",ad,94,ba,37),library1)));
HXLINE( 114)		this->logoBl->set_antialiasing(true);
HXLINE( 115)		this->logoBl->animation->addByPrefix(HX_("bump",f6,0f,20,41),HX_("logo bumpin",70,a1,0b,72),24,null(),null(),null());
HXLINE( 116)		this->logoBl->animation->play(HX_("bump",f6,0f,20,41),null(),null(),null());
HXLINE( 117)		this->logoBl->updateHitbox();
HXLINE( 118)		this->add(this->logoBl);
HXLINE( 120)		this->titleText =  ::flixel::FlxSprite_obj::__alloc( HX_CTX ,357,545,null());
HXLINE( 121)		 ::flixel::FlxSprite _hx_tmp3 = this->titleText;
HXDLIN( 121)		::String library2 = null();
HXDLIN( 121)		::String _hx_tmp4 = ::Paths_obj::getPath(((HX_("images/",77,50,74,c1) + HX_("titleEnter",60,80,6b,82)) + HX_(".png",3b,2d,bd,1e)),HX_("IMAGE",3b,57,57,3b),library2);
HXDLIN( 121)		_hx_tmp3->set_frames(::flixel::graphics::frames::FlxAtlasFrames_obj::fromSparrow(_hx_tmp4,::Paths_obj::getPath(((HX_("images/",77,50,74,c1) + HX_("titleEnter",60,80,6b,82)) + HX_(".xml",69,3e,c3,1e)),HX_("TEXT",ad,94,ba,37),library2)));
HXLINE( 122)		this->titleText->animation->addByPrefix(HX_("idle",14,a7,b3,45),HX_("Press Enter to Begin",e9,79,2c,83),24,null(),null(),null());
HXLINE( 123)		this->titleText->animation->addByPrefix(HX_("press",83,53,88,c8),HX_("ENTER PRESSED",5a,47,9f,63),24,null(),null(),null());
HXLINE( 124)		this->titleText->set_antialiasing(true);
HXLINE( 125)		this->titleText->animation->play(HX_("idle",14,a7,b3,45),null(),null(),null());
HXLINE( 126)		this->titleText->updateHitbox();
HXLINE( 127)		this->add(this->titleText);
HXLINE( 129)		this->credGroup =  ::flixel::group::FlxTypedGroup_obj::__alloc( HX_CTX ,null());
HXLINE( 130)		this->add(this->credGroup);
HXLINE( 131)		this->textGroup =  ::flixel::group::FlxTypedGroup_obj::__alloc( HX_CTX ,null());
HXLINE( 133)		this->blackScreen =  ::flixel::FlxSprite_obj::__alloc( HX_CTX ,null(),null(),null())->makeGraphic(::flixel::FlxG_obj::width,::flixel::FlxG_obj::height,-16777216,null(),null());
HXLINE( 134)		this->credGroup->add(this->blackScreen).StaticCast<  ::flixel::FlxBasic >();
HXLINE( 136)		this->credTextShit =  ::Alphabet_obj::__alloc( HX_CTX ,( (Float)(0) ),( (Float)(0) ),HX_("ninjamuffin99\nPhantomArcade\nkawaisprite\nevilsk8er",fd,7d,e3,3b),true,null(),null());
HXLINE( 137)		{
HXLINE( 137)			 ::Alphabet _this = this->credTextShit;
HXDLIN( 137)			int axes = 17;
HXDLIN( 137)			bool _hx_tmp5;
HXDLIN( 137)			if ((axes != 1)) {
HXLINE( 137)				_hx_tmp5 = (axes == 17);
            			}
            			else {
HXLINE( 137)				_hx_tmp5 = true;
            			}
HXDLIN( 137)			if (_hx_tmp5) {
HXLINE( 137)				int _hx_tmp = ::flixel::FlxG_obj::width;
HXDLIN( 137)				_this->set_x(((( (Float)(_hx_tmp) ) - _this->get_width()) / ( (Float)(2) )));
            			}
HXDLIN( 137)			bool _hx_tmp6;
HXDLIN( 137)			if ((axes != 16)) {
HXLINE( 137)				_hx_tmp6 = (axes == 17);
            			}
            			else {
HXLINE( 137)				_hx_tmp6 = true;
            			}
HXDLIN( 137)			if (_hx_tmp6) {
HXLINE( 137)				int _hx_tmp = ::flixel::FlxG_obj::height;
HXDLIN( 137)				_this->set_y(((( (Float)(_hx_tmp) ) - _this->get_height()) / ( (Float)(2) )));
            			}
            		}
HXLINE( 139)		this->credTextShit->set_visible(false);
HXLINE( 141)		::flixel::tweens::FlxTween_obj::tween(this->credTextShit, ::Dynamic(::hx::Anon_obj::Create(1)
            			->setFixed(0,HX_("y",79,00,00,00),(this->credTextShit->y + 20))),((Float)2.9), ::Dynamic(::hx::Anon_obj::Create(2)
            			->setFixed(0,HX_("ease",ee,8b,0c,43),::flixel::tweens::FlxEase_obj::quadInOut_dyn())
            			->setFixed(1,HX_("type",ba,f2,08,4d),4)));
HXLINE( 143)		::flixel::FlxG_obj::mouse->set_visible(false);
HXLINE( 145)		if (::TitleState_obj::initialized) {
HXLINE( 146)			this->skipIntro();
            		}
            		else {
HXLINE( 148)			::TitleState_obj::initialized = true;
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(TitleState_obj,startIntro,(void))

::Array< ::Dynamic> TitleState_obj::getIntroTextShit(){
            	HX_STACKFRAME(&_hx_pos_a55214e0452daa02_151_getIntroTextShit)
HXLINE( 152)		::String library = null();
HXDLIN( 152)		::String fullText = ::openfl::utils::Assets_obj::getText(::Paths_obj::getPath(((HX_("data/",c5,0e,88,d4) + HX_("introText",39,69,67,a6)) + HX_(".txt",02,3f,c0,1e)),HX_("TEXT",ad,94,ba,37),library));
HXLINE( 154)		::Array< ::String > firstArray = fullText.split(HX_("\n",0a,00,00,00));
HXLINE( 155)		::Array< ::Dynamic> swagGoodArray = ::Array_obj< ::Dynamic>::__new(0);
HXLINE( 157)		{
HXLINE( 157)			int _g = 0;
HXDLIN( 157)			while((_g < firstArray->length)){
HXLINE( 157)				::String i = firstArray->__get(_g);
HXDLIN( 157)				_g = (_g + 1);
HXLINE( 158)				swagGoodArray->push(i.split(HX_("--",60,27,00,00)));
            			}
            		}
HXLINE( 161)		return swagGoodArray;
            	}


HX_DEFINE_DYNAMIC_FUNC0(TitleState_obj,getIntroTextShit,return )

void TitleState_obj::update(Float elapsed){
            	HX_GC_STACKFRAME(&_hx_pos_a55214e0452daa02_166_update)
HXLINE( 167)		if (::hx::IsNotNull( ::flixel::FlxG_obj::sound->music )) {
HXLINE( 168)			::Conductor_obj::songPosition = ::flixel::FlxG_obj::sound->music->_time;
            		}
HXLINE( 170)		 ::flixel::input::keyboard::FlxKeyList _this = ( ( ::flixel::input::keyboard::FlxKeyList)(::flixel::FlxG_obj::keys->justPressed) );
HXDLIN( 170)		if (_this->keyManager->checkStatusUnsafe(70,_this->status)) {
HXLINE( 171)			::flixel::FlxG_obj::set_fullscreen(!(::flixel::FlxG_obj::get_fullscreen()));
            		}
HXLINE( 174)		 ::flixel::input::keyboard::FlxKeyList _this1 = ( ( ::flixel::input::keyboard::FlxKeyList)(::flixel::FlxG_obj::keys->justPressed) );
HXDLIN( 174)		bool pressedEnter = _this1->keyManager->checkStatusUnsafe(13,_this1->status);
HXLINE( 184)		 ::flixel::input::gamepad::FlxGamepad gamepad = ::flixel::FlxG_obj::gamepads->lastActive;
HXLINE( 186)		if (::hx::IsNotNull( gamepad )) {
HXLINE( 187)			 ::flixel::input::gamepad::lists::FlxGamepadButtonList _this = gamepad->justPressed;
HXDLIN( 187)			int id = 7;
HXDLIN( 187)			 ::flixel::input::gamepad::FlxGamepad _this1 = _this->gamepad;
HXDLIN( 187)			int Status = _this->status;
HXDLIN( 187)			bool _hx_tmp;
HXDLIN( 187)			switch((int)(id)){
            				case (int)-2: {
HXLINE( 187)					_hx_tmp = _this1->anyButton(Status);
            				}
            				break;
            				case (int)-1: {
HXLINE( 187)					_hx_tmp = !(_this1->anyButton(Status));
            				}
            				break;
            				default:{
HXLINE( 187)					int RawID = _this1->mapping->getRawID(id);
HXDLIN( 187)					 ::flixel::input::gamepad::FlxGamepadButton button = _this1->buttons->__get(RawID).StaticCast<  ::flixel::input::gamepad::FlxGamepadButton >();
HXDLIN( 187)					if (::hx::IsNotNull( button )) {
HXLINE( 187)						_hx_tmp = button->hasState(Status);
            					}
            					else {
HXLINE( 187)						_hx_tmp = false;
            					}
            				}
            			}
HXDLIN( 187)			if (_hx_tmp) {
HXLINE( 188)				pressedEnter = true;
            			}
            		}
HXLINE( 196)		bool _hx_tmp;
HXDLIN( 196)		bool _hx_tmp1;
HXDLIN( 196)		if (pressedEnter) {
HXLINE( 196)			_hx_tmp1 = !(this->transitioning);
            		}
            		else {
HXLINE( 196)			_hx_tmp1 = false;
            		}
HXDLIN( 196)		if (_hx_tmp1) {
HXLINE( 196)			_hx_tmp = this->skippedIntro;
            		}
            		else {
HXLINE( 196)			_hx_tmp = false;
            		}
HXDLIN( 196)		if (_hx_tmp) {
            			HX_BEGIN_LOCAL_FUNC_S0(::hx::LocalFunc,_hx_Closure_0) HXARGC(1)
            			void _hx_run( ::flixel::util::FlxTimer tmr){
            				HX_GC_STACKFRAME(&_hx_pos_a55214e0452daa02_207_update)
HXLINE( 207)				 ::flixel::FlxState nextState =  ::MainMenuState_obj::__alloc( HX_CTX ,null(),null());
HXDLIN( 207)				if (::flixel::FlxG_obj::game->_state->switchTo(nextState)) {
HXLINE( 207)					::flixel::FlxG_obj::game->_requestedState = nextState;
            				}
            			}
            			HX_END_LOCAL_FUNC1((void))

HXLINE( 197)			if (( (bool)(::flixel::FlxG_obj::save->data->__Field(HX_("flashing",32,85,e8,99),::hx::paccDynamic)) )) {
HXLINE( 198)				this->titleText->animation->play(HX_("press",83,53,88,c8),null(),null(),null());
            			}
HXLINE( 200)			::flixel::FlxG_obj::camera->flash(-1,1,null(),null());
HXLINE( 201)			 ::flixel::_hx_system::frontEnds::SoundFrontEnd _hx_tmp = ::flixel::FlxG_obj::sound;
HXDLIN( 201)			_hx_tmp->play(::Paths_obj::sound(HX_("confirmMenu",bf,8e,fe,3c),null()),((Float)0.7),null(),null(),null(),null());
HXLINE( 203)			this->transitioning = true;
HXLINE( 205)			::MainMenuState_obj::firstStart = true;
HXLINE( 207)			 ::flixel::util::FlxTimer_obj::__alloc( HX_CTX ,null())->start(2, ::Dynamic(new _hx_Closure_0()),null());
            		}
HXLINE( 210)		bool _hx_tmp2;
HXDLIN( 210)		bool _hx_tmp3;
HXDLIN( 210)		if (pressedEnter) {
HXLINE( 210)			_hx_tmp3 = !(this->skippedIntro);
            		}
            		else {
HXLINE( 210)			_hx_tmp3 = false;
            		}
HXDLIN( 210)		if (_hx_tmp3) {
HXLINE( 210)			_hx_tmp2 = ::TitleState_obj::initialized;
            		}
            		else {
HXLINE( 210)			_hx_tmp2 = false;
            		}
HXDLIN( 210)		if (_hx_tmp2) {
HXLINE( 211)			this->skipIntro();
            		}
HXLINE( 214)		this->super::update(elapsed);
            	}


void TitleState_obj::createCoolText(::Array< ::String > textArray){
            	HX_GC_STACKFRAME(&_hx_pos_a55214e0452daa02_218_createCoolText)
HXDLIN( 218)		int _g = 0;
HXDLIN( 218)		int _g1 = textArray->length;
HXDLIN( 218)		while((_g < _g1)){
HXDLIN( 218)			_g = (_g + 1);
HXDLIN( 218)			int i = (_g - 1);
HXLINE( 219)			 ::Alphabet money =  ::Alphabet_obj::__alloc( HX_CTX ,( (Float)(0) ),( (Float)(0) ),textArray->__get(i),true,false,null());
HXLINE( 220)			{
HXLINE( 220)				int axes = 1;
HXDLIN( 220)				bool _hx_tmp;
HXDLIN( 220)				if ((axes != 1)) {
HXLINE( 220)					_hx_tmp = (axes == 17);
            				}
            				else {
HXLINE( 220)					_hx_tmp = true;
            				}
HXDLIN( 220)				if (_hx_tmp) {
HXLINE( 220)					int _hx_tmp = ::flixel::FlxG_obj::width;
HXDLIN( 220)					money->set_x(((( (Float)(_hx_tmp) ) - money->get_width()) / ( (Float)(2) )));
            				}
HXDLIN( 220)				bool _hx_tmp1;
HXDLIN( 220)				if ((axes != 16)) {
HXLINE( 220)					_hx_tmp1 = (axes == 17);
            				}
            				else {
HXLINE( 220)					_hx_tmp1 = true;
            				}
HXDLIN( 220)				if (_hx_tmp1) {
HXLINE( 220)					int _hx_tmp = ::flixel::FlxG_obj::height;
HXDLIN( 220)					money->set_y(((( (Float)(_hx_tmp) ) - money->get_height()) / ( (Float)(2) )));
            				}
            			}
HXLINE( 221)			money->set_y((money->y + ((i * 60) + 200)));
HXLINE( 222)			this->credGroup->add(money).StaticCast<  ::flixel::FlxBasic >();
HXLINE( 223)			this->textGroup->add(money).StaticCast<  ::flixel::FlxBasic >();
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(TitleState_obj,createCoolText,(void))

void TitleState_obj::addMoreText(::String text){
            	HX_GC_STACKFRAME(&_hx_pos_a55214e0452daa02_227_addMoreText)
HXLINE( 228)		 ::Alphabet coolText =  ::Alphabet_obj::__alloc( HX_CTX ,( (Float)(0) ),( (Float)(0) ),text,true,false,null());
HXLINE( 229)		{
HXLINE( 229)			int axes = 1;
HXDLIN( 229)			bool _hx_tmp;
HXDLIN( 229)			if ((axes != 1)) {
HXLINE( 229)				_hx_tmp = (axes == 17);
            			}
            			else {
HXLINE( 229)				_hx_tmp = true;
            			}
HXDLIN( 229)			if (_hx_tmp) {
HXLINE( 229)				int _hx_tmp = ::flixel::FlxG_obj::width;
HXDLIN( 229)				coolText->set_x(((( (Float)(_hx_tmp) ) - coolText->get_width()) / ( (Float)(2) )));
            			}
HXDLIN( 229)			bool _hx_tmp1;
HXDLIN( 229)			if ((axes != 16)) {
HXLINE( 229)				_hx_tmp1 = (axes == 17);
            			}
            			else {
HXLINE( 229)				_hx_tmp1 = true;
            			}
HXDLIN( 229)			if (_hx_tmp1) {
HXLINE( 229)				int _hx_tmp = ::flixel::FlxG_obj::height;
HXDLIN( 229)				coolText->set_y(((( (Float)(_hx_tmp) ) - coolText->get_height()) / ( (Float)(2) )));
            			}
            		}
HXLINE( 230)		coolText->set_y((coolText->y + ((this->textGroup->length * 60) + 200)));
HXLINE( 231)		this->credGroup->add(coolText).StaticCast<  ::flixel::FlxBasic >();
HXLINE( 232)		this->textGroup->add(coolText).StaticCast<  ::flixel::FlxBasic >();
            	}


HX_DEFINE_DYNAMIC_FUNC1(TitleState_obj,addMoreText,(void))

void TitleState_obj::deleteCoolText(){
            	HX_STACKFRAME(&_hx_pos_a55214e0452daa02_236_deleteCoolText)
HXDLIN( 236)		while((this->textGroup->members->get_length() > 0)){
HXLINE( 237)			this->credGroup->remove(Dynamic( this->textGroup->members->__get(0)).StaticCast<  ::flixel::FlxBasic >(),true).StaticCast<  ::flixel::FlxBasic >();
HXLINE( 238)			this->textGroup->remove(Dynamic( this->textGroup->members->__get(0)).StaticCast<  ::flixel::FlxBasic >(),true).StaticCast<  ::flixel::FlxBasic >();
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(TitleState_obj,deleteCoolText,(void))

void TitleState_obj::beatHit(){
            	HX_STACKFRAME(&_hx_pos_a55214e0452daa02_242_beatHit)
HXLINE( 243)		this->super::beatHit();
HXLINE( 245)		this->logoBl->animation->play(HX_("bump",f6,0f,20,41),true,null(),null());
HXLINE( 247)		switch((int)(this->curBeat)){
            			case (int)1: {
HXLINE( 249)				this->createCoolText(::Array_obj< ::String >::fromData( _hx_array_data_8ca18d79_14,4));
            			}
            			break;
            			case (int)3: {
HXLINE( 251)				this->addMoreText(HX_("present",fb,3a,dc,39));
            			}
            			break;
            			case (int)4: {
HXLINE( 253)				this->deleteCoolText();
            			}
            			break;
            			case (int)5: {
HXLINE( 255)				this->createCoolText(::Array_obj< ::String >::fromData( _hx_array_data_8ca18d79_15,2));
            			}
            			break;
            			case (int)7: {
HXLINE( 257)				this->addMoreText(HX_("KadeDeveloper",93,41,22,2c));
            			}
            			break;
            			case (int)8: {
HXLINE( 259)				this->deleteCoolText();
            			}
            			break;
            			case (int)9: {
HXLINE( 261)				this->createCoolText(::Array_obj< ::String >::__new(1)->init(0,this->curWacky->__get(0)));
            			}
            			break;
            			case (int)11: {
HXLINE( 263)				this->addMoreText(this->curWacky->__get(1));
            			}
            			break;
            			case (int)12: {
HXLINE( 265)				this->deleteCoolText();
            			}
            			break;
            			case (int)13: {
HXLINE( 267)				this->addMoreText(HX_("Friday",ff,00,5d,e6));
            			}
            			break;
            			case (int)14: {
HXLINE( 269)				this->addMoreText(HX_("Night",b8,29,f7,2e));
            			}
            			break;
            			case (int)15: {
HXLINE( 271)				this->addMoreText(HX_("Funkin",51,26,e4,a3));
            			}
            			break;
            			case (int)16: {
HXLINE( 274)				this->skipIntro();
            			}
            			break;
            		}
            	}


void TitleState_obj::skipIntro(){
            	HX_STACKFRAME(&_hx_pos_a55214e0452daa02_281_skipIntro)
HXDLIN( 281)		if (!(this->skippedIntro)) {
HXLINE( 282)			::flixel::FlxG_obj::camera->flash(-1,4,null(),null());
HXLINE( 283)			this->remove(this->credGroup,null());
HXLINE( 284)			this->skippedIntro = true;
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(TitleState_obj,skipIntro,(void))

bool TitleState_obj::initialized;


::hx::ObjectPtr< TitleState_obj > TitleState_obj::__new( ::flixel::addons::transition::TransitionData TransIn, ::flixel::addons::transition::TransitionData TransOut) {
	::hx::ObjectPtr< TitleState_obj > __this = new TitleState_obj();
	__this->__construct(TransIn,TransOut);
	return __this;
}

::hx::ObjectPtr< TitleState_obj > TitleState_obj::__alloc(::hx::Ctx *_hx_ctx, ::flixel::addons::transition::TransitionData TransIn, ::flixel::addons::transition::TransitionData TransOut) {
	TitleState_obj *__this = (TitleState_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(TitleState_obj), true, "TitleState"));
	*(void **)__this = TitleState_obj::_hx_vtable;
	__this->__construct(TransIn,TransOut);
	return __this;
}

TitleState_obj::TitleState_obj()
{
}

void TitleState_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(TitleState);
	HX_MARK_MEMBER_NAME(blackScreen,"blackScreen");
	HX_MARK_MEMBER_NAME(credGroup,"credGroup");
	HX_MARK_MEMBER_NAME(credTextShit,"credTextShit");
	HX_MARK_MEMBER_NAME(textGroup,"textGroup");
	HX_MARK_MEMBER_NAME(curWacky,"curWacky");
	HX_MARK_MEMBER_NAME(wackyImage,"wackyImage");
	HX_MARK_MEMBER_NAME(bg,"bg");
	HX_MARK_MEMBER_NAME(logoBl,"logoBl");
	HX_MARK_MEMBER_NAME(titleText,"titleText");
	HX_MARK_MEMBER_NAME(transitioning,"transitioning");
	HX_MARK_MEMBER_NAME(skippedIntro,"skippedIntro");
	 ::MusicBeatState_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void TitleState_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(blackScreen,"blackScreen");
	HX_VISIT_MEMBER_NAME(credGroup,"credGroup");
	HX_VISIT_MEMBER_NAME(credTextShit,"credTextShit");
	HX_VISIT_MEMBER_NAME(textGroup,"textGroup");
	HX_VISIT_MEMBER_NAME(curWacky,"curWacky");
	HX_VISIT_MEMBER_NAME(wackyImage,"wackyImage");
	HX_VISIT_MEMBER_NAME(bg,"bg");
	HX_VISIT_MEMBER_NAME(logoBl,"logoBl");
	HX_VISIT_MEMBER_NAME(titleText,"titleText");
	HX_VISIT_MEMBER_NAME(transitioning,"transitioning");
	HX_VISIT_MEMBER_NAME(skippedIntro,"skippedIntro");
	 ::MusicBeatState_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val TitleState_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"bg") ) { return ::hx::Val( bg ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"create") ) { return ::hx::Val( create_dyn() ); }
		if (HX_FIELD_EQ(inName,"logoBl") ) { return ::hx::Val( logoBl ); }
		if (HX_FIELD_EQ(inName,"update") ) { return ::hx::Val( update_dyn() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"beatHit") ) { return ::hx::Val( beatHit_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"curWacky") ) { return ::hx::Val( curWacky ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"credGroup") ) { return ::hx::Val( credGroup ); }
		if (HX_FIELD_EQ(inName,"textGroup") ) { return ::hx::Val( textGroup ); }
		if (HX_FIELD_EQ(inName,"titleText") ) { return ::hx::Val( titleText ); }
		if (HX_FIELD_EQ(inName,"skipIntro") ) { return ::hx::Val( skipIntro_dyn() ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"wackyImage") ) { return ::hx::Val( wackyImage ); }
		if (HX_FIELD_EQ(inName,"startIntro") ) { return ::hx::Val( startIntro_dyn() ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"blackScreen") ) { return ::hx::Val( blackScreen ); }
		if (HX_FIELD_EQ(inName,"addMoreText") ) { return ::hx::Val( addMoreText_dyn() ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"credTextShit") ) { return ::hx::Val( credTextShit ); }
		if (HX_FIELD_EQ(inName,"skippedIntro") ) { return ::hx::Val( skippedIntro ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"transitioning") ) { return ::hx::Val( transitioning ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"createCoolText") ) { return ::hx::Val( createCoolText_dyn() ); }
		if (HX_FIELD_EQ(inName,"deleteCoolText") ) { return ::hx::Val( deleteCoolText_dyn() ); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"getIntroTextShit") ) { return ::hx::Val( getIntroTextShit_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

bool TitleState_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 11:
		if (HX_FIELD_EQ(inName,"initialized") ) { outValue = ( initialized ); return true; }
	}
	return false;
}

::hx::Val TitleState_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"bg") ) { bg=inValue.Cast<  ::flixel::FlxSprite >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"logoBl") ) { logoBl=inValue.Cast<  ::flixel::FlxSprite >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"curWacky") ) { curWacky=inValue.Cast< ::Array< ::String > >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"credGroup") ) { credGroup=inValue.Cast<  ::flixel::group::FlxTypedGroup >(); return inValue; }
		if (HX_FIELD_EQ(inName,"textGroup") ) { textGroup=inValue.Cast<  ::flixel::group::FlxTypedGroup >(); return inValue; }
		if (HX_FIELD_EQ(inName,"titleText") ) { titleText=inValue.Cast<  ::flixel::FlxSprite >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"wackyImage") ) { wackyImage=inValue.Cast<  ::flixel::FlxSprite >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"blackScreen") ) { blackScreen=inValue.Cast<  ::flixel::FlxSprite >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"credTextShit") ) { credTextShit=inValue.Cast<  ::Alphabet >(); return inValue; }
		if (HX_FIELD_EQ(inName,"skippedIntro") ) { skippedIntro=inValue.Cast< bool >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"transitioning") ) { transitioning=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool TitleState_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 11:
		if (HX_FIELD_EQ(inName,"initialized") ) { initialized=ioValue.Cast< bool >(); return true; }
	}
	return false;
}

void TitleState_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("blackScreen",8b,de,f4,5d));
	outFields->push(HX_("credGroup",91,7f,9c,9c));
	outFields->push(HX_("credTextShit",fb,55,c1,3c));
	outFields->push(HX_("textGroup",52,43,e2,32));
	outFields->push(HX_("curWacky",67,31,c6,0c));
	outFields->push(HX_("wackyImage",d4,7e,d6,81));
	outFields->push(HX_("bg",c5,55,00,00));
	outFields->push(HX_("logoBl",15,ca,6e,5c));
	outFields->push(HX_("titleText",65,ba,a4,70));
	outFields->push(HX_("transitioning",6d,6a,93,94));
	outFields->push(HX_("skippedIntro",9c,44,26,49));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo TitleState_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::flixel::FlxSprite */ ,(int)offsetof(TitleState_obj,blackScreen),HX_("blackScreen",8b,de,f4,5d)},
	{::hx::fsObject /*  ::flixel::group::FlxTypedGroup */ ,(int)offsetof(TitleState_obj,credGroup),HX_("credGroup",91,7f,9c,9c)},
	{::hx::fsObject /*  ::Alphabet */ ,(int)offsetof(TitleState_obj,credTextShit),HX_("credTextShit",fb,55,c1,3c)},
	{::hx::fsObject /*  ::flixel::group::FlxTypedGroup */ ,(int)offsetof(TitleState_obj,textGroup),HX_("textGroup",52,43,e2,32)},
	{::hx::fsObject /* ::Array< ::String > */ ,(int)offsetof(TitleState_obj,curWacky),HX_("curWacky",67,31,c6,0c)},
	{::hx::fsObject /*  ::flixel::FlxSprite */ ,(int)offsetof(TitleState_obj,wackyImage),HX_("wackyImage",d4,7e,d6,81)},
	{::hx::fsObject /*  ::flixel::FlxSprite */ ,(int)offsetof(TitleState_obj,bg),HX_("bg",c5,55,00,00)},
	{::hx::fsObject /*  ::flixel::FlxSprite */ ,(int)offsetof(TitleState_obj,logoBl),HX_("logoBl",15,ca,6e,5c)},
	{::hx::fsObject /*  ::flixel::FlxSprite */ ,(int)offsetof(TitleState_obj,titleText),HX_("titleText",65,ba,a4,70)},
	{::hx::fsBool,(int)offsetof(TitleState_obj,transitioning),HX_("transitioning",6d,6a,93,94)},
	{::hx::fsBool,(int)offsetof(TitleState_obj,skippedIntro),HX_("skippedIntro",9c,44,26,49)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo TitleState_obj_sStaticStorageInfo[] = {
	{::hx::fsBool,(void *) &TitleState_obj::initialized,HX_("initialized",14,f5,0f,37)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static ::String TitleState_obj_sMemberFields[] = {
	HX_("blackScreen",8b,de,f4,5d),
	HX_("credGroup",91,7f,9c,9c),
	HX_("credTextShit",fb,55,c1,3c),
	HX_("textGroup",52,43,e2,32),
	HX_("curWacky",67,31,c6,0c),
	HX_("wackyImage",d4,7e,d6,81),
	HX_("create",fc,66,0f,7c),
	HX_("bg",c5,55,00,00),
	HX_("logoBl",15,ca,6e,5c),
	HX_("titleText",65,ba,a4,70),
	HX_("startIntro",aa,a2,37,da),
	HX_("getIntroTextShit",23,9f,f3,eb),
	HX_("transitioning",6d,6a,93,94),
	HX_("update",09,86,05,87),
	HX_("createCoolText",32,cb,41,41),
	HX_("addMoreText",23,fe,9f,87),
	HX_("deleteCoolText",61,6b,de,48),
	HX_("beatHit",7d,ea,04,74),
	HX_("skippedIntro",9c,44,26,49),
	HX_("skipIntro",6d,37,1c,d2),
	::String(null()) };

static void TitleState_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(TitleState_obj::initialized,"initialized");
};

#ifdef HXCPP_VISIT_ALLOCS
static void TitleState_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(TitleState_obj::initialized,"initialized");
};

#endif

::hx::Class TitleState_obj::__mClass;

static ::String TitleState_obj_sStaticFields[] = {
	HX_("initialized",14,f5,0f,37),
	::String(null())
};

void TitleState_obj::__register()
{
	TitleState_obj _hx_dummy;
	TitleState_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("TitleState",79,8d,a1,8c);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &TitleState_obj::__GetStatic;
	__mClass->mSetStaticField = &TitleState_obj::__SetStatic;
	__mClass->mMarkFunc = TitleState_obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(TitleState_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(TitleState_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< TitleState_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = TitleState_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = TitleState_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = TitleState_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void TitleState_obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_a55214e0452daa02_34_boot)
HXDLIN(  34)		initialized = false;
            	}
}

