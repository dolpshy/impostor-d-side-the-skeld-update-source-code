#include <hxcpp.h>

#ifndef INCLUDED_Controls
#include <Controls.h>
#endif
#ifndef INCLUDED_FreeplayState
#include <FreeplayState.h>
#endif
#ifndef INCLUDED_LoadingState
#include <LoadingState.h>
#endif
#ifndef INCLUDED_MainMenuState
#include <MainMenuState.h>
#endif
#ifndef INCLUDED_MusicBeatState
#include <MusicBeatState.h>
#endif
#ifndef INCLUDED_OptionsMenu
#include <OptionsMenu.h>
#endif
#ifndef INCLUDED_Paths
#include <Paths.h>
#endif
#ifndef INCLUDED_PlayState
#include <PlayState.h>
#endif
#ifndef INCLUDED_PlayerSettings
#include <PlayerSettings.h>
#endif
#ifndef INCLUDED_Song
#include <Song.h>
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
#ifndef INCLUDED_flixel_FlxCameraFollowStyle
#include <flixel/FlxCameraFollowStyle.h>
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
#ifndef INCLUDED_flixel_effects_FlxFlicker
#include <flixel/effects/FlxFlicker.h>
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
#ifndef INCLUDED_flixel_input_actions_FlxAction
#include <flixel/input/actions/FlxAction.h>
#endif
#ifndef INCLUDED_flixel_input_actions_FlxActionDigital
#include <flixel/input/actions/FlxActionDigital.h>
#endif
#ifndef INCLUDED_flixel_input_actions_FlxActionSet
#include <flixel/input/actions/FlxActionSet.h>
#endif
#ifndef INCLUDED_flixel_math_FlxBasePoint
#include <flixel/math/FlxBasePoint.h>
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
#ifndef INCLUDED_flixel_text_FlxText
#include <flixel/text/FlxText.h>
#endif
#ifndef INCLUDED_flixel_text_FlxTextBorderStyle
#include <flixel/text/FlxTextBorderStyle.h>
#endif
#ifndef INCLUDED_flixel_tweens_FlxEase
#include <flixel/tweens/FlxEase.h>
#endif
#ifndef INCLUDED_flixel_tweens_FlxTween
#include <flixel/tweens/FlxTween.h>
#endif
#ifndef INCLUDED_flixel_tweens_misc_VarTween
#include <flixel/tweens/misc/VarTween.h>
#endif
#ifndef INCLUDED_flixel_util_FlxSave
#include <flixel/util/FlxSave.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxPooled
#include <flixel/util/IFlxPooled.h>
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

HX_DEFINE_STACK_FRAME(_hx_pos_b0351dbbcbe2d566_18_new,"MainMenuState","new",0x83a7c9cb,"MainMenuState.new","MainMenuState.hx",18,0x0e5db805)
static const ::String _hx_array_data_205e8859_1[] = {
	HX_("play",f4,2d,5a,4a),HX_("freeplay",a0,90,86,22),HX_("options",5e,33,fe,df),
};
HX_LOCAL_STACK_FRAME(_hx_pos_b0351dbbcbe2d566_42_create,"MainMenuState","create",0x6b76e271,"MainMenuState.create","MainMenuState.hx",42,0x0e5db805)
HX_LOCAL_STACK_FRAME(_hx_pos_b0351dbbcbe2d566_89_create,"MainMenuState","create",0x6b76e271,"MainMenuState.create","MainMenuState.hx",89,0x0e5db805)
HX_LOCAL_STACK_FRAME(_hx_pos_b0351dbbcbe2d566_156_update,"MainMenuState","update",0x766d017e,"MainMenuState.update","MainMenuState.hx",156,0x0e5db805)
HX_LOCAL_STACK_FRAME(_hx_pos_b0351dbbcbe2d566_117_update,"MainMenuState","update",0x766d017e,"MainMenuState.update","MainMenuState.hx",117,0x0e5db805)
HX_LOCAL_STACK_FRAME(_hx_pos_b0351dbbcbe2d566_137_update,"MainMenuState","update",0x766d017e,"MainMenuState.update","MainMenuState.hx",137,0x0e5db805)
HX_LOCAL_STACK_FRAME(_hx_pos_b0351dbbcbe2d566_141_update,"MainMenuState","update",0x766d017e,"MainMenuState.update","MainMenuState.hx",141,0x0e5db805)
HX_LOCAL_STACK_FRAME(_hx_pos_b0351dbbcbe2d566_146_update,"MainMenuState","update",0x766d017e,"MainMenuState.update","MainMenuState.hx",146,0x0e5db805)
HX_LOCAL_STACK_FRAME(_hx_pos_b0351dbbcbe2d566_160_goToState,"MainMenuState","goToState",0xcf6f00f9,"MainMenuState.goToState","MainMenuState.hx",160,0x0e5db805)
static const ::String _hx_array_data_205e8859_12[] = {
	HX_("sussy-dilemma",6d,c1,83,15),HX_("sussy-dilemma-two",6c,83,bc,c9),
};
HX_LOCAL_STACK_FRAME(_hx_pos_b0351dbbcbe2d566_190_changeItem,"MainMenuState","changeItem",0xf62bd498,"MainMenuState.changeItem","MainMenuState.hx",190,0x0e5db805)
HX_LOCAL_STACK_FRAME(_hx_pos_b0351dbbcbe2d566_180_changeItem,"MainMenuState","changeItem",0xf62bd498,"MainMenuState.changeItem","MainMenuState.hx",180,0x0e5db805)
HX_LOCAL_STACK_FRAME(_hx_pos_b0351dbbcbe2d566_19_boot,"MainMenuState","boot",0xa741c867,"MainMenuState.boot","MainMenuState.hx",19,0x0e5db805)
HX_LOCAL_STACK_FRAME(_hx_pos_b0351dbbcbe2d566_32_boot,"MainMenuState","boot",0xa741c867,"MainMenuState.boot","MainMenuState.hx",32,0x0e5db805)
HX_LOCAL_STACK_FRAME(_hx_pos_b0351dbbcbe2d566_34_boot,"MainMenuState","boot",0xa741c867,"MainMenuState.boot","MainMenuState.hx",34,0x0e5db805)
HX_LOCAL_STACK_FRAME(_hx_pos_b0351dbbcbe2d566_40_boot,"MainMenuState","boot",0xa741c867,"MainMenuState.boot","MainMenuState.hx",40,0x0e5db805)

void MainMenuState_obj::__construct( ::flixel::addons::transition::TransitionData TransIn, ::flixel::addons::transition::TransitionData TransOut){
            	HX_STACKFRAME(&_hx_pos_b0351dbbcbe2d566_18_new)
HXLINE( 115)		this->selectedSomethin = false;
HXLINE(  24)		this->optionShit = ::Array_obj< ::String >::fromData( _hx_array_data_205e8859_1,3);
HXLINE(  18)		super::__construct(TransIn,TransOut);
            	}

Dynamic MainMenuState_obj::__CreateEmpty() { return new MainMenuState_obj; }

void *MainMenuState_obj::_hx_vtable = 0;

Dynamic MainMenuState_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< MainMenuState_obj > _hx_result = new MainMenuState_obj();
	_hx_result->__construct(inArgs[0],inArgs[1]);
	return _hx_result;
}

bool MainMenuState_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x62817b24) {
		if (inClassId<=(int)0x2f064378) {
			if (inClassId<=(int)0x23a57bae) {
				return inClassId==(int)0x00000001 || inClassId==(int)0x23a57bae;
			} else {
				return inClassId==(int)0x2f064378;
			}
		} else {
			return inClassId==(int)0x3f706236 || inClassId==(int)0x62817b24;
		}
	} else {
		if (inClassId<=(int)0x7c795c9f) {
			return inClassId==(int)0x6915cded || inClassId==(int)0x7c795c9f;
		} else {
			return inClassId==(int)0x7ccf8994;
		}
	}
}

void MainMenuState_obj::create(){
            	HX_GC_STACKFRAME(&_hx_pos_b0351dbbcbe2d566_42_create)
HXDLIN(  42)		 ::MainMenuState _gthis = ::hx::ObjectPtr<OBJ_>(this);
HXLINE(  43)		if (::hx::IsNull( ::flixel::FlxG_obj::sound->music->_channel )) {
HXLINE(  44)			 ::flixel::_hx_system::frontEnds::SoundFrontEnd _hx_tmp = ::flixel::FlxG_obj::sound;
HXDLIN(  44)			::String library = null();
HXDLIN(  44)			_hx_tmp->playMusic(::Paths_obj::getPath((((HX_("music/",ea,bf,1b,3f) + HX_("freakyMenu",15,c9,93,86)) + HX_(".",2e,00,00,00)) + HX_("ogg",4f,94,54,00)),HX_("MUSIC",85,08,49,8e),library),null(),null(),null());
            		}
HXLINE(  47)		this->persistentUpdate = (this->persistentDraw = true);
HXLINE(  49)		 ::flixel::FlxSprite _hx_tmp =  ::flixel::FlxSprite_obj::__alloc( HX_CTX ,-100,null(),null());
HXDLIN(  49)		::String library = null();
HXDLIN(  49)		this->bg = _hx_tmp->loadGraphic(::Paths_obj::getPath(((HX_("images/",77,50,74,c1) + HX_("menuBG",24,65,6d,05)) + HX_(".png",3b,2d,bd,1e)),HX_("IMAGE",3b,57,57,3b),library),null(),null(),null(),null(),null());
HXLINE(  50)		this->bg->scrollFactor->set_x(( (Float)(0) ));
HXLINE(  51)		this->bg->scrollFactor->set_y(((Float)0.1));
HXLINE(  52)		 ::flixel::FlxSprite _hx_tmp1 = this->bg;
HXDLIN(  52)		_hx_tmp1->setGraphicSize(::Std_obj::_hx_int((this->bg->get_width() * ((Float)1.1))),null());
HXLINE(  53)		this->bg->updateHitbox();
HXLINE(  54)		{
HXLINE(  54)			 ::flixel::FlxSprite _this = this->bg;
HXDLIN(  54)			int axes = 17;
HXDLIN(  54)			bool _hx_tmp2;
HXDLIN(  54)			if ((axes != 1)) {
HXLINE(  54)				_hx_tmp2 = (axes == 17);
            			}
            			else {
HXLINE(  54)				_hx_tmp2 = true;
            			}
HXDLIN(  54)			if (_hx_tmp2) {
HXLINE(  54)				int _hx_tmp = ::flixel::FlxG_obj::width;
HXDLIN(  54)				_this->set_x(((( (Float)(_hx_tmp) ) - _this->get_width()) / ( (Float)(2) )));
            			}
HXDLIN(  54)			bool _hx_tmp3;
HXDLIN(  54)			if ((axes != 16)) {
HXLINE(  54)				_hx_tmp3 = (axes == 17);
            			}
            			else {
HXLINE(  54)				_hx_tmp3 = true;
            			}
HXDLIN(  54)			if (_hx_tmp3) {
HXLINE(  54)				int _hx_tmp = ::flixel::FlxG_obj::height;
HXDLIN(  54)				_this->set_y(((( (Float)(_hx_tmp) ) - _this->get_height()) / ( (Float)(2) )));
            			}
            		}
HXLINE(  55)		this->bg->set_antialiasing(true);
HXLINE(  56)		this->add(this->bg);
HXLINE(  58)		this->camFollow =  ::flixel::FlxObject_obj::__alloc( HX_CTX ,0,0,1,1);
HXLINE(  59)		this->add(this->camFollow);
HXLINE(  61)		 ::flixel::FlxSprite _hx_tmp4 =  ::flixel::FlxSprite_obj::__alloc( HX_CTX ,-80,null(),null());
HXDLIN(  61)		::String library1 = null();
HXDLIN(  61)		this->magenta = _hx_tmp4->loadGraphic(::Paths_obj::getPath(((HX_("images/",77,50,74,c1) + HX_("menuDesat",26,91,04,72)) + HX_(".png",3b,2d,bd,1e)),HX_("IMAGE",3b,57,57,3b),library1),null(),null(),null(),null(),null());
HXLINE(  62)		this->magenta->scrollFactor->set_x(( (Float)(0) ));
HXLINE(  63)		this->magenta->scrollFactor->set_y(((Float)0.1));
HXLINE(  64)		 ::flixel::FlxSprite _hx_tmp5 = this->magenta;
HXDLIN(  64)		_hx_tmp5->setGraphicSize(::Std_obj::_hx_int((this->magenta->get_width() * ((Float)1.1))),null());
HXLINE(  65)		this->magenta->updateHitbox();
HXLINE(  66)		{
HXLINE(  66)			 ::flixel::FlxSprite _this1 = this->magenta;
HXDLIN(  66)			int axes1 = 17;
HXDLIN(  66)			bool _hx_tmp6;
HXDLIN(  66)			if ((axes1 != 1)) {
HXLINE(  66)				_hx_tmp6 = (axes1 == 17);
            			}
            			else {
HXLINE(  66)				_hx_tmp6 = true;
            			}
HXDLIN(  66)			if (_hx_tmp6) {
HXLINE(  66)				int _hx_tmp = ::flixel::FlxG_obj::width;
HXDLIN(  66)				_this1->set_x(((( (Float)(_hx_tmp) ) - _this1->get_width()) / ( (Float)(2) )));
            			}
HXDLIN(  66)			bool _hx_tmp7;
HXDLIN(  66)			if ((axes1 != 16)) {
HXLINE(  66)				_hx_tmp7 = (axes1 == 17);
            			}
            			else {
HXLINE(  66)				_hx_tmp7 = true;
            			}
HXDLIN(  66)			if (_hx_tmp7) {
HXLINE(  66)				int _hx_tmp = ::flixel::FlxG_obj::height;
HXDLIN(  66)				_this1->set_y(((( (Float)(_hx_tmp) ) - _this1->get_height()) / ( (Float)(2) )));
            			}
            		}
HXLINE(  67)		this->magenta->set_visible(false);
HXLINE(  68)		this->magenta->set_antialiasing(true);
HXLINE(  69)		this->magenta->set_color(-167525);
HXLINE(  70)		this->add(this->magenta);
HXLINE(  72)		this->menuItems =  ::flixel::group::FlxTypedGroup_obj::__alloc( HX_CTX ,null());
HXLINE(  73)		this->add(this->menuItems);
HXLINE(  75)		{
HXLINE(  75)			int _g = 0;
HXDLIN(  75)			int _g1 = this->optionShit->length;
HXDLIN(  75)			while((_g < _g1)){
HXLINE(  75)				_g = (_g + 1);
HXDLIN(  75)				int i = (_g - 1);
HXLINE(  76)				 ::flixel::FlxSprite menuItem =  ::flixel::FlxSprite_obj::__alloc( HX_CTX ,0,(( (Float)(::flixel::FlxG_obj::height) ) * ((Float)1.6)),null());
HXLINE(  77)				::String key = (HX_("mainmenu/",d7,fe,39,8c) + this->optionShit->__get(i));
HXDLIN(  77)				::String library = null();
HXDLIN(  77)				::String _hx_tmp = ::Paths_obj::getPath(((HX_("images/",77,50,74,c1) + key) + HX_(".png",3b,2d,bd,1e)),HX_("IMAGE",3b,57,57,3b),library);
HXDLIN(  77)				menuItem->set_frames(::flixel::graphics::frames::FlxAtlasFrames_obj::fromSparrow(_hx_tmp,::Paths_obj::getPath(((HX_("images/",77,50,74,c1) + key) + HX_(".xml",69,3e,c3,1e)),HX_("TEXT",ad,94,ba,37),library)));
HXLINE(  78)				menuItem->animation->addByPrefix(HX_("idle",14,a7,b3,45),(this->optionShit->__get(i) + HX_(" basic",8e,b6,25,79)),24,null(),null(),null());
HXLINE(  79)				menuItem->animation->addByPrefix(HX_("selected",5b,2a,6d,b1),(this->optionShit->__get(i) + HX_(" white",89,d6,28,95)),24,null(),null(),null());
HXLINE(  80)				menuItem->animation->play(HX_("idle",14,a7,b3,45),null(),null(),null());
HXLINE(  81)				menuItem->ID = i;
HXLINE(  82)				{
HXLINE(  82)					int axes = 1;
HXDLIN(  82)					bool _hx_tmp1;
HXDLIN(  82)					if ((axes != 1)) {
HXLINE(  82)						_hx_tmp1 = (axes == 17);
            					}
            					else {
HXLINE(  82)						_hx_tmp1 = true;
            					}
HXDLIN(  82)					if (_hx_tmp1) {
HXLINE(  82)						int _hx_tmp = ::flixel::FlxG_obj::width;
HXDLIN(  82)						menuItem->set_x(((( (Float)(_hx_tmp) ) - menuItem->get_width()) / ( (Float)(2) )));
            					}
HXDLIN(  82)					bool _hx_tmp2;
HXDLIN(  82)					if ((axes != 16)) {
HXLINE(  82)						_hx_tmp2 = (axes == 17);
            					}
            					else {
HXLINE(  82)						_hx_tmp2 = true;
            					}
HXDLIN(  82)					if (_hx_tmp2) {
HXLINE(  82)						int _hx_tmp = ::flixel::FlxG_obj::height;
HXDLIN(  82)						menuItem->set_y(((( (Float)(_hx_tmp) ) - menuItem->get_height()) / ( (Float)(2) )));
            					}
            				}
HXLINE(  83)				this->menuItems->add(menuItem).StaticCast<  ::flixel::FlxSprite >();
HXLINE(  84)				{
HXLINE(  84)					 ::flixel::math::FlxBasePoint this1 = menuItem->scrollFactor;
HXDLIN(  84)					this1->set_x(( (Float)(0) ));
HXDLIN(  84)					this1->set_y(( (Float)(0) ));
            				}
HXLINE(  85)				menuItem->set_antialiasing(true);
HXLINE(  86)				menuItem->updateHitbox();
HXLINE(  88)				if (::MainMenuState_obj::firstStart) {
            					HX_BEGIN_LOCAL_FUNC_S1(::hx::LocalFunc,_hx_Closure_0, ::MainMenuState,_gthis) HXARGC(1)
            					void _hx_run( ::flixel::tweens::FlxTween flxTween){
            						HX_GC_STACKFRAME(&_hx_pos_b0351dbbcbe2d566_89_create)
HXLINE(  90)						::MainMenuState_obj::finishedFunnyMove = true;
HXLINE(  91)						_gthis->changeItem(null());
HXLINE(  92)						_gthis->bg->scrollFactor->set_x(( (Float)(0) ));
HXLINE(  93)						_gthis->bg->scrollFactor->set_y(((Float)0.18));
HXLINE(  94)						_gthis->magenta->scrollFactor->set_x(( (Float)(0) ));
HXLINE(  95)						_gthis->magenta->scrollFactor->set_y(((Float)0.18));
            					}
            					HX_END_LOCAL_FUNC1((void))

HXLINE(  89)					::flixel::tweens::FlxTween_obj::tween(menuItem, ::Dynamic(::hx::Anon_obj::Create(1)
            						->setFixed(0,HX_("y",79,00,00,00),(135 + (i * 180)))),(1 + (( (Float)(i) ) * ((Float)0.25))), ::Dynamic(::hx::Anon_obj::Create(2)
            						->setFixed(0,HX_("ease",ee,8b,0c,43),::flixel::tweens::FlxEase_obj::expoInOut_dyn())
            						->setFixed(1,HX_("onComplete",f8,d4,7e,5d), ::Dynamic(new _hx_Closure_0(_gthis)))));
            				}
            				else {
HXLINE(  98)					menuItem->set_y(( (Float)((135 + (i * 180))) ));
            				}
            			}
            		}
HXLINE( 101)		::MainMenuState_obj::firstStart = false;
HXLINE( 103)		::flixel::FlxG_obj::camera->follow(this->camFollow,null(),(((Float)0.60) * (( (Float)(60) ) / ( (Float)(::flixel::FlxG_obj::save->data->__Field(HX_("fpsCap",a9,7b,7e,91),::hx::paccDynamic)) ))));
HXLINE( 105)		 ::flixel::text::FlxText versionShit =  ::flixel::text::FlxText_obj::__alloc( HX_CTX ,5,(::flixel::FlxG_obj::height - 23),0,(HX_("Kade Engine - v",4e,7d,53,76) + ::MainMenuState_obj::kadeEngineVer),12,null());
HXLINE( 106)		{
HXLINE( 106)			 ::flixel::math::FlxBasePoint this1 = versionShit->scrollFactor;
HXDLIN( 106)			this1->set_x(( (Float)(0) ));
HXDLIN( 106)			this1->set_y(( (Float)(0) ));
            		}
HXLINE( 107)		versionShit->setFormat(HX_("VCR OSD Mono",be,44,e4,b8),16,-1,HX_("left",07,08,b0,47),::flixel::text::FlxTextBorderStyle_obj::OUTLINE_dyn(),-16777216,null());
HXLINE( 108)		this->add(versionShit);
HXLINE( 110)		this->changeItem(null());
HXLINE( 112)		this->super::create();
            	}


void MainMenuState_obj::update(Float elapsed){
            		HX_BEGIN_LOCAL_FUNC_S0(::hx::LocalFunc,_hx_Closure_3) HXARGC(1)
            		void _hx_run( ::flixel::FlxSprite spr){
            			HX_STACKFRAME(&_hx_pos_b0351dbbcbe2d566_156_update)
HXLINE( 156)			int axes = 1;
HXDLIN( 156)			bool _hx_tmp;
HXDLIN( 156)			if ((axes != 1)) {
HXLINE( 156)				_hx_tmp = (axes == 17);
            			}
            			else {
HXLINE( 156)				_hx_tmp = true;
            			}
HXDLIN( 156)			if (_hx_tmp) {
HXLINE( 156)				int _hx_tmp = ::flixel::FlxG_obj::width;
HXDLIN( 156)				spr->set_x(((( (Float)(_hx_tmp) ) - spr->get_width()) / ( (Float)(2) )));
            			}
HXDLIN( 156)			bool _hx_tmp1;
HXDLIN( 156)			if ((axes != 16)) {
HXLINE( 156)				_hx_tmp1 = (axes == 17);
            			}
            			else {
HXLINE( 156)				_hx_tmp1 = true;
            			}
HXDLIN( 156)			if (_hx_tmp1) {
HXLINE( 156)				int _hx_tmp = ::flixel::FlxG_obj::height;
HXDLIN( 156)				spr->set_y(((( (Float)(_hx_tmp) ) - spr->get_height()) / ( (Float)(2) )));
            			}
            		}
            		HX_END_LOCAL_FUNC1((void))

            	HX_STACKFRAME(&_hx_pos_b0351dbbcbe2d566_117_update)
HXDLIN( 117)		 ::MainMenuState _gthis = ::hx::ObjectPtr<OBJ_>(this);
HXLINE( 118)		if ((::flixel::FlxG_obj::sound->music->_volume < ((Float)0.8))) {
HXLINE( 119)			 ::flixel::_hx_system::FlxSound fh = ::flixel::FlxG_obj::sound->music;
HXDLIN( 119)			fh->set_volume((fh->_volume + (((Float)0.5) * ::flixel::FlxG_obj::elapsed)));
            		}
HXLINE( 122)		if (!(this->selectedSomethin)) {
HXLINE( 123)			if (::PlayerSettings_obj::player1->controls->_upP->check()) {
HXLINE( 124)				 ::flixel::_hx_system::frontEnds::SoundFrontEnd _hx_tmp = ::flixel::FlxG_obj::sound;
HXDLIN( 124)				_hx_tmp->play(::Paths_obj::sound(HX_("scrollMenu",4c,d4,18,06),null()),null(),null(),null(),null(),null());
HXLINE( 125)				this->changeItem(-1);
            			}
HXLINE( 127)			if (::PlayerSettings_obj::player1->controls->_downP->check()) {
HXLINE( 128)				 ::flixel::_hx_system::frontEnds::SoundFrontEnd _hx_tmp = ::flixel::FlxG_obj::sound;
HXDLIN( 128)				_hx_tmp->play(::Paths_obj::sound(HX_("scrollMenu",4c,d4,18,06),null()),null(),null(),null(),null(),null());
HXLINE( 129)				this->changeItem(1);
            			}
HXLINE( 131)			if (::PlayerSettings_obj::player1->controls->_accept->check()) {
            				HX_BEGIN_LOCAL_FUNC_S1(::hx::LocalFunc,_hx_Closure_2, ::MainMenuState,_gthis) HXARGC(1)
            				void _hx_run( ::flixel::FlxSprite spr){
            					HX_STACKFRAME(&_hx_pos_b0351dbbcbe2d566_137_update)
HXLINE( 137)					if ((::MainMenuState_obj::curSelected != spr->ID)) {
            						HX_BEGIN_LOCAL_FUNC_S1(::hx::LocalFunc,_hx_Closure_0, ::flixel::FlxSprite,spr) HXARGC(1)
            						void _hx_run( ::flixel::tweens::FlxTween twn){
            							HX_STACKFRAME(&_hx_pos_b0351dbbcbe2d566_141_update)
HXLINE( 141)							spr->kill();
            						}
            						HX_END_LOCAL_FUNC1((void))

HXLINE( 138)						::flixel::tweens::FlxTween_obj::tween(spr, ::Dynamic(::hx::Anon_obj::Create(1)
            							->setFixed(0,HX_("alpha",5e,a7,96,21),0)),((Float)1.3), ::Dynamic(::hx::Anon_obj::Create(2)
            							->setFixed(0,HX_("ease",ee,8b,0c,43),::flixel::tweens::FlxEase_obj::quadOut_dyn())
            							->setFixed(1,HX_("onComplete",f8,d4,7e,5d), ::Dynamic(new _hx_Closure_0(spr)))));
            					}
            					else {
            						HX_BEGIN_LOCAL_FUNC_S1(::hx::LocalFunc,_hx_Closure_1, ::MainMenuState,_gthis) HXARGC(1)
            						void _hx_run( ::flixel::effects::FlxFlicker flick){
            							HX_STACKFRAME(&_hx_pos_b0351dbbcbe2d566_146_update)
HXLINE( 146)							_gthis->goToState();
            						}
            						HX_END_LOCAL_FUNC1((void))

HXLINE( 145)						::flixel::effects::FlxFlicker_obj::flicker(spr,1,((Float)0.06),false,false, ::Dynamic(new _hx_Closure_1(_gthis)),null());
            					}
            				}
            				HX_END_LOCAL_FUNC1((void))

HXLINE( 132)				this->selectedSomethin = true;
HXLINE( 133)				 ::flixel::_hx_system::frontEnds::SoundFrontEnd _hx_tmp = ::flixel::FlxG_obj::sound;
HXDLIN( 133)				_hx_tmp->play(::Paths_obj::sound(HX_("confirmMenu",bf,8e,fe,3c),null()),null(),null(),null(),null(),null());
HXLINE( 134)				::flixel::effects::FlxFlicker_obj::flicker(this->magenta,((Float)1.1),((Float)0.15),false,null(),null(),null());
HXLINE( 136)				this->menuItems->forEach( ::Dynamic(new _hx_Closure_2(_gthis)),null());
            			}
            		}
HXLINE( 153)		this->super::update(elapsed);
HXLINE( 155)		this->menuItems->forEach( ::Dynamic(new _hx_Closure_3()),null());
            	}


void MainMenuState_obj::goToState(){
            	HX_GC_STACKFRAME(&_hx_pos_b0351dbbcbe2d566_160_goToState)
HXLINE( 161)		::String daChoice = this->optionShit->__get(::MainMenuState_obj::curSelected);
HXLINE( 163)		::String _hx_switch_0 = daChoice;
            		if (  (_hx_switch_0==HX_("freeplay",a0,90,86,22)) ){
HXLINE( 174)			 ::flixel::FlxState nextState =  ::FreeplayState_obj::__alloc( HX_CTX ,null(),null());
HXDLIN( 174)			if (::flixel::FlxG_obj::game->_state->switchTo(nextState)) {
HXLINE( 174)				::flixel::FlxG_obj::game->_requestedState = nextState;
            			}
HXDLIN( 174)			goto _hx_goto_10;
            		}
            		if (  (_hx_switch_0==HX_("options",5e,33,fe,df)) ){
HXLINE( 176)			 ::flixel::FlxState nextState =  ::OptionsMenu_obj::__alloc( HX_CTX ,null(),null());
HXDLIN( 176)			if (::flixel::FlxG_obj::game->_state->switchTo(nextState)) {
HXLINE( 176)				::flixel::FlxG_obj::game->_requestedState = nextState;
            			}
HXDLIN( 176)			goto _hx_goto_10;
            		}
            		if (  (_hx_switch_0==HX_("play",f4,2d,5a,4a)) ){
HXLINE( 166)			::PlayState_obj::storyPlaylist = ::Array_obj< ::String >::fromData( _hx_array_data_205e8859_12,2);
HXLINE( 167)			::PlayState_obj::isStoryMode = true;
HXLINE( 168)			::PlayState_obj::storyDifficulty = 0;
HXLINE( 169)			::PlayState_obj::SONG = ::Song_obj::loadFromJson(::PlayState_obj::storyPlaylist->__get(0),::PlayState_obj::storyPlaylist->__get(0));
HXLINE( 170)			::PlayState_obj::storyWeek = 1;
HXLINE( 171)			::PlayState_obj::campaignScore = 0;
HXLINE( 172)			{
HXLINE( 172)				 ::flixel::FlxState nextState = ::LoadingState_obj::getNextState(( ( ::flixel::FlxState)( ::PlayState_obj::__alloc( HX_CTX ,null(),null())) ),false);
HXDLIN( 172)				if (::flixel::FlxG_obj::game->_state->switchTo(nextState)) {
HXLINE( 172)					::flixel::FlxG_obj::game->_requestedState = nextState;
            				}
            			}
HXLINE( 164)			goto _hx_goto_10;
            		}
            		_hx_goto_10:;
            	}


HX_DEFINE_DYNAMIC_FUNC0(MainMenuState_obj,goToState,(void))

void MainMenuState_obj::changeItem(::hx::Null< int >  __o_huh){
            		HX_BEGIN_LOCAL_FUNC_S1(::hx::LocalFunc,_hx_Closure_0, ::MainMenuState,_gthis) HXARGC(1)
            		void _hx_run( ::flixel::FlxSprite spr){
            			HX_STACKFRAME(&_hx_pos_b0351dbbcbe2d566_190_changeItem)
HXLINE( 191)			spr->animation->play(HX_("idle",14,a7,b3,45),null(),null(),null());
HXLINE( 192)			spr->updateHitbox();
HXLINE( 194)			bool _hx_tmp;
HXDLIN( 194)			if ((spr->ID == ::MainMenuState_obj::curSelected)) {
HXLINE( 194)				_hx_tmp = ::MainMenuState_obj::finishedFunnyMove;
            			}
            			else {
HXLINE( 194)				_hx_tmp = false;
            			}
HXDLIN( 194)			if (_hx_tmp) {
HXLINE( 195)				spr->animation->play(HX_("selected",5b,2a,6d,b1),null(),null(),null());
HXLINE( 196)				 ::flixel::FlxObject _gthis1 = _gthis->camFollow;
HXDLIN( 196)				Float _hx_tmp = spr->getGraphicMidpoint(null())->x;
HXDLIN( 196)				_gthis1->setPosition(_hx_tmp,spr->getGraphicMidpoint(null())->y);
HXLINE( 197)				spr->centerOffsets(null());
            			}
            		}
            		HX_END_LOCAL_FUNC1((void))

            		int huh = __o_huh.Default(0);
            	HX_STACKFRAME(&_hx_pos_b0351dbbcbe2d566_180_changeItem)
HXDLIN( 180)		 ::MainMenuState _gthis = ::hx::ObjectPtr<OBJ_>(this);
HXLINE( 181)		if (::MainMenuState_obj::finishedFunnyMove) {
HXLINE( 182)			 ::Dynamic _hx_tmp = ::hx::ClassOf< ::MainMenuState >();
HXDLIN( 182)			::MainMenuState_obj::curSelected = (::MainMenuState_obj::curSelected + huh);
HXLINE( 184)			if ((::MainMenuState_obj::curSelected >= this->menuItems->length)) {
HXLINE( 185)				::MainMenuState_obj::curSelected = 0;
            			}
HXLINE( 186)			if ((::MainMenuState_obj::curSelected < 0)) {
HXLINE( 187)				::MainMenuState_obj::curSelected = (this->menuItems->length - 1);
            			}
            		}
HXLINE( 190)		this->menuItems->forEach( ::Dynamic(new _hx_Closure_0(_gthis)),null());
            	}


HX_DEFINE_DYNAMIC_FUNC1(MainMenuState_obj,changeItem,(void))

int MainMenuState_obj::curSelected;

bool MainMenuState_obj::firstStart;

::String MainMenuState_obj::kadeEngineVer;

bool MainMenuState_obj::finishedFunnyMove;


::hx::ObjectPtr< MainMenuState_obj > MainMenuState_obj::__new( ::flixel::addons::transition::TransitionData TransIn, ::flixel::addons::transition::TransitionData TransOut) {
	::hx::ObjectPtr< MainMenuState_obj > __this = new MainMenuState_obj();
	__this->__construct(TransIn,TransOut);
	return __this;
}

::hx::ObjectPtr< MainMenuState_obj > MainMenuState_obj::__alloc(::hx::Ctx *_hx_ctx, ::flixel::addons::transition::TransitionData TransIn, ::flixel::addons::transition::TransitionData TransOut) {
	MainMenuState_obj *__this = (MainMenuState_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(MainMenuState_obj), true, "MainMenuState"));
	*(void **)__this = MainMenuState_obj::_hx_vtable;
	__this->__construct(TransIn,TransOut);
	return __this;
}

MainMenuState_obj::MainMenuState_obj()
{
}

void MainMenuState_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(MainMenuState);
	HX_MARK_MEMBER_NAME(menuItems,"menuItems");
	HX_MARK_MEMBER_NAME(optionShit,"optionShit");
	HX_MARK_MEMBER_NAME(newGaming,"newGaming");
	HX_MARK_MEMBER_NAME(newGaming2,"newGaming2");
	HX_MARK_MEMBER_NAME(bg,"bg");
	HX_MARK_MEMBER_NAME(magenta,"magenta");
	HX_MARK_MEMBER_NAME(camFollow,"camFollow");
	HX_MARK_MEMBER_NAME(selectedSomethin,"selectedSomethin");
	 ::MusicBeatState_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void MainMenuState_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(menuItems,"menuItems");
	HX_VISIT_MEMBER_NAME(optionShit,"optionShit");
	HX_VISIT_MEMBER_NAME(newGaming,"newGaming");
	HX_VISIT_MEMBER_NAME(newGaming2,"newGaming2");
	HX_VISIT_MEMBER_NAME(bg,"bg");
	HX_VISIT_MEMBER_NAME(magenta,"magenta");
	HX_VISIT_MEMBER_NAME(camFollow,"camFollow");
	HX_VISIT_MEMBER_NAME(selectedSomethin,"selectedSomethin");
	 ::MusicBeatState_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val MainMenuState_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"bg") ) { return ::hx::Val( bg ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"create") ) { return ::hx::Val( create_dyn() ); }
		if (HX_FIELD_EQ(inName,"update") ) { return ::hx::Val( update_dyn() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"magenta") ) { return ::hx::Val( magenta ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"menuItems") ) { return ::hx::Val( menuItems ); }
		if (HX_FIELD_EQ(inName,"newGaming") ) { return ::hx::Val( newGaming ); }
		if (HX_FIELD_EQ(inName,"camFollow") ) { return ::hx::Val( camFollow ); }
		if (HX_FIELD_EQ(inName,"goToState") ) { return ::hx::Val( goToState_dyn() ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"optionShit") ) { return ::hx::Val( optionShit ); }
		if (HX_FIELD_EQ(inName,"newGaming2") ) { return ::hx::Val( newGaming2 ); }
		if (HX_FIELD_EQ(inName,"changeItem") ) { return ::hx::Val( changeItem_dyn() ); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"selectedSomethin") ) { return ::hx::Val( selectedSomethin ); }
	}
	return super::__Field(inName,inCallProp);
}

bool MainMenuState_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 10:
		if (HX_FIELD_EQ(inName,"firstStart") ) { outValue = ( firstStart ); return true; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"curSelected") ) { outValue = ( curSelected ); return true; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"kadeEngineVer") ) { outValue = ( kadeEngineVer ); return true; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"finishedFunnyMove") ) { outValue = ( finishedFunnyMove ); return true; }
	}
	return false;
}

::hx::Val MainMenuState_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"bg") ) { bg=inValue.Cast<  ::flixel::FlxSprite >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"magenta") ) { magenta=inValue.Cast<  ::flixel::FlxSprite >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"menuItems") ) { menuItems=inValue.Cast<  ::flixel::group::FlxTypedGroup >(); return inValue; }
		if (HX_FIELD_EQ(inName,"newGaming") ) { newGaming=inValue.Cast<  ::flixel::text::FlxText >(); return inValue; }
		if (HX_FIELD_EQ(inName,"camFollow") ) { camFollow=inValue.Cast<  ::flixel::FlxObject >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"optionShit") ) { optionShit=inValue.Cast< ::Array< ::String > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"newGaming2") ) { newGaming2=inValue.Cast<  ::flixel::text::FlxText >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"selectedSomethin") ) { selectedSomethin=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool MainMenuState_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 10:
		if (HX_FIELD_EQ(inName,"firstStart") ) { firstStart=ioValue.Cast< bool >(); return true; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"curSelected") ) { curSelected=ioValue.Cast< int >(); return true; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"kadeEngineVer") ) { kadeEngineVer=ioValue.Cast< ::String >(); return true; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"finishedFunnyMove") ) { finishedFunnyMove=ioValue.Cast< bool >(); return true; }
	}
	return false;
}

void MainMenuState_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("menuItems",e1,15,e5,5c));
	outFields->push(HX_("optionShit",d5,2d,ee,91));
	outFields->push(HX_("newGaming",2f,8a,ad,0e));
	outFields->push(HX_("newGaming2",23,5f,2b,c9));
	outFields->push(HX_("bg",c5,55,00,00));
	outFields->push(HX_("magenta",29,ba,9d,0e));
	outFields->push(HX_("camFollow",e0,6e,47,22));
	outFields->push(HX_("selectedSomethin",c8,ec,fb,99));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo MainMenuState_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::flixel::group::FlxTypedGroup */ ,(int)offsetof(MainMenuState_obj,menuItems),HX_("menuItems",e1,15,e5,5c)},
	{::hx::fsObject /* ::Array< ::String > */ ,(int)offsetof(MainMenuState_obj,optionShit),HX_("optionShit",d5,2d,ee,91)},
	{::hx::fsObject /*  ::flixel::text::FlxText */ ,(int)offsetof(MainMenuState_obj,newGaming),HX_("newGaming",2f,8a,ad,0e)},
	{::hx::fsObject /*  ::flixel::text::FlxText */ ,(int)offsetof(MainMenuState_obj,newGaming2),HX_("newGaming2",23,5f,2b,c9)},
	{::hx::fsObject /*  ::flixel::FlxSprite */ ,(int)offsetof(MainMenuState_obj,bg),HX_("bg",c5,55,00,00)},
	{::hx::fsObject /*  ::flixel::FlxSprite */ ,(int)offsetof(MainMenuState_obj,magenta),HX_("magenta",29,ba,9d,0e)},
	{::hx::fsObject /*  ::flixel::FlxObject */ ,(int)offsetof(MainMenuState_obj,camFollow),HX_("camFollow",e0,6e,47,22)},
	{::hx::fsBool,(int)offsetof(MainMenuState_obj,selectedSomethin),HX_("selectedSomethin",c8,ec,fb,99)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo MainMenuState_obj_sStaticStorageInfo[] = {
	{::hx::fsInt,(void *) &MainMenuState_obj::curSelected,HX_("curSelected",fb,eb,ab,32)},
	{::hx::fsBool,(void *) &MainMenuState_obj::firstStart,HX_("firstStart",12,be,e9,c1)},
	{::hx::fsString,(void *) &MainMenuState_obj::kadeEngineVer,HX_("kadeEngineVer",2a,26,b2,03)},
	{::hx::fsBool,(void *) &MainMenuState_obj::finishedFunnyMove,HX_("finishedFunnyMove",a9,44,72,47)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static ::String MainMenuState_obj_sMemberFields[] = {
	HX_("menuItems",e1,15,e5,5c),
	HX_("optionShit",d5,2d,ee,91),
	HX_("newGaming",2f,8a,ad,0e),
	HX_("newGaming2",23,5f,2b,c9),
	HX_("bg",c5,55,00,00),
	HX_("magenta",29,ba,9d,0e),
	HX_("camFollow",e0,6e,47,22),
	HX_("create",fc,66,0f,7c),
	HX_("selectedSomethin",c8,ec,fb,99),
	HX_("update",09,86,05,87),
	HX_("goToState",4e,a5,e1,c9),
	HX_("changeItem",a3,fa,08,20),
	::String(null()) };

static void MainMenuState_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(MainMenuState_obj::curSelected,"curSelected");
	HX_MARK_MEMBER_NAME(MainMenuState_obj::firstStart,"firstStart");
	HX_MARK_MEMBER_NAME(MainMenuState_obj::kadeEngineVer,"kadeEngineVer");
	HX_MARK_MEMBER_NAME(MainMenuState_obj::finishedFunnyMove,"finishedFunnyMove");
};

#ifdef HXCPP_VISIT_ALLOCS
static void MainMenuState_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(MainMenuState_obj::curSelected,"curSelected");
	HX_VISIT_MEMBER_NAME(MainMenuState_obj::firstStart,"firstStart");
	HX_VISIT_MEMBER_NAME(MainMenuState_obj::kadeEngineVer,"kadeEngineVer");
	HX_VISIT_MEMBER_NAME(MainMenuState_obj::finishedFunnyMove,"finishedFunnyMove");
};

#endif

::hx::Class MainMenuState_obj::__mClass;

static ::String MainMenuState_obj_sStaticFields[] = {
	HX_("curSelected",fb,eb,ab,32),
	HX_("firstStart",12,be,e9,c1),
	HX_("kadeEngineVer",2a,26,b2,03),
	HX_("finishedFunnyMove",a9,44,72,47),
	::String(null())
};

void MainMenuState_obj::__register()
{
	MainMenuState_obj _hx_dummy;
	MainMenuState_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("MainMenuState",59,88,5e,20);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &MainMenuState_obj::__GetStatic;
	__mClass->mSetStaticField = &MainMenuState_obj::__SetStatic;
	__mClass->mMarkFunc = MainMenuState_obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(MainMenuState_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(MainMenuState_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< MainMenuState_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = MainMenuState_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = MainMenuState_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = MainMenuState_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void MainMenuState_obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_b0351dbbcbe2d566_19_boot)
HXDLIN(  19)		curSelected = 0;
            	}
{
            	HX_STACKFRAME(&_hx_pos_b0351dbbcbe2d566_32_boot)
HXDLIN(  32)		firstStart = true;
            	}
{
            	HX_STACKFRAME(&_hx_pos_b0351dbbcbe2d566_34_boot)
HXDLIN(  34)		kadeEngineVer = HX_("1.5.2",fc,9c,32,55);
            	}
{
            	HX_STACKFRAME(&_hx_pos_b0351dbbcbe2d566_40_boot)
HXDLIN(  40)		finishedFunnyMove = false;
            	}
}

