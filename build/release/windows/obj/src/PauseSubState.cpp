#include <hxcpp.h>

#ifndef INCLUDED_Alphabet
#include <Alphabet.h>
#endif
#ifndef INCLUDED_Controls
#include <Controls.h>
#endif
#ifndef INCLUDED_DiscordClient
#include <DiscordClient.h>
#endif
#ifndef INCLUDED_Main
#include <Main.h>
#endif
#ifndef INCLUDED_MainMenuState
#include <MainMenuState.h>
#endif
#ifndef INCLUDED_ModchartState
#include <ModchartState.h>
#endif
#ifndef INCLUDED_MusicBeatState
#include <MusicBeatState.h>
#endif
#ifndef INCLUDED_MusicBeatSubstate
#include <MusicBeatSubstate.h>
#endif
#ifndef INCLUDED_Paths
#include <Paths.h>
#endif
#ifndef INCLUDED_PauseSubState
#include <PauseSubState.h>
#endif
#ifndef INCLUDED_PlayState
#include <PlayState.h>
#endif
#ifndef INCLUDED_PlayerSettings
#include <PlayerSettings.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_Type
#include <Type.h>
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
#ifndef INCLUDED_flixel_FlxSubState
#include <flixel/FlxSubState.h>
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
#ifndef INCLUDED_flixel_group_FlxTypedGroup
#include <flixel/group/FlxTypedGroup.h>
#endif
#ifndef INCLUDED_flixel_group_FlxTypedSpriteGroup
#include <flixel/group/FlxTypedSpriteGroup.h>
#endif
#ifndef INCLUDED_flixel_input_FlxBaseKeyList
#include <flixel/input/FlxBaseKeyList.h>
#endif
#ifndef INCLUDED_flixel_input_FlxKeyManager
#include <flixel/input/FlxKeyManager.h>
#endif
#ifndef INCLUDED_flixel_input_IFlxInputManager
#include <flixel/input/IFlxInputManager.h>
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
#ifndef INCLUDED_flixel_input_keyboard_FlxKeyList
#include <flixel/input/keyboard/FlxKeyList.h>
#endif
#ifndef INCLUDED_flixel_input_keyboard_FlxKeyboard
#include <flixel/input/keyboard/FlxKeyboard.h>
#endif
#ifndef INCLUDED_flixel_math_FlxBasePoint
#include <flixel/math/FlxBasePoint.h>
#endif
#ifndef INCLUDED_flixel_math_FlxRandom
#include <flixel/math/FlxRandom.h>
#endif
#ifndef INCLUDED_flixel_system_FlxSound
#include <flixel/system/FlxSound.h>
#endif
#ifndef INCLUDED_flixel_system_frontEnds_CameraFrontEnd
#include <flixel/system/frontEnds/CameraFrontEnd.h>
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
#ifndef INCLUDED_openfl_Lib
#include <openfl/Lib.h>
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
#ifndef INCLUDED_openfl_display_MovieClip
#include <openfl/display/MovieClip.h>
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
#ifndef INCLUDED_sys_FileSystem
#include <sys/FileSystem.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_17d383cbce329512_23_new,"PauseSubState","new",0x00d575d9,"PauseSubState.new","PauseSubState.hx",23,0x953dc7b7)
static const ::String _hx_array_data_08e59567_2[] = {
	HX_("Resume",cd,dd,18,3d),HX_("Restart Song",06,b6,fe,13),HX_("Exit to menu",82,87,9a,a9),
};
HX_LOCAL_STACK_FRAME(_hx_pos_17d383cbce329512_97_update,"PauseSubState","update",0x6d53d230,"PauseSubState.update","PauseSubState.hx",97,0x953dc7b7)
static const ::String _hx_array_data_08e59567_7[] = {
	HX_("Restart Song",06,b6,fe,13),HX_("Exit to menu",82,87,9a,a9),
};
static const ::String _hx_array_data_08e59567_8[] = {
	HX_("Restart Song",06,b6,fe,13),HX_("Exit to menu",82,87,9a,a9),
};
HX_LOCAL_STACK_FRAME(_hx_pos_17d383cbce329512_220_destroy,"PauseSubState","destroy",0xc2ba82f3,"PauseSubState.destroy","PauseSubState.hx",220,0x953dc7b7)
HX_LOCAL_STACK_FRAME(_hx_pos_17d383cbce329512_227_changeSelection,"PauseSubState","changeSelection",0x8f960fb5,"PauseSubState.changeSelection","PauseSubState.hx",227,0x953dc7b7)

void PauseSubState_obj::__construct(Float x,Float y){
            	HX_GC_STACKFRAME(&_hx_pos_17d383cbce329512_23_new)
HXLINE(  33)		this->offsetChanged = false;
HXLINE(  28)		this->curSelected = 0;
HXLINE(  27)		this->menuItems = ::Array_obj< ::String >::fromData( _hx_array_data_08e59567_2,3);
HXLINE(  37)		super::__construct();
HXLINE(  39)		 ::flixel::_hx_system::FlxSound _hx_tmp =  ::flixel::_hx_system::FlxSound_obj::__alloc( HX_CTX );
HXDLIN(  39)		::String library = null();
HXDLIN(  39)		this->pauseMusic = _hx_tmp->loadEmbedded(::Paths_obj::getPath((((HX_("music/",ea,bf,1b,3f) + HX_("breakfast",db,b2,0c,49)) + HX_(".",2e,00,00,00)) + HX_("ogg",4f,94,54,00)),HX_("MUSIC",85,08,49,8e),library),true,true,null());
HXLINE(  40)		this->pauseMusic->set_volume(( (Float)(0) ));
HXLINE(  41)		 ::flixel::_hx_system::FlxSound _hx_tmp1 = this->pauseMusic;
HXDLIN(  41)		 ::flixel::math::FlxRandom _hx_tmp2 = ::flixel::FlxG_obj::random;
HXDLIN(  41)		_hx_tmp1->play(false,_hx_tmp2->_hx_int(0,::Std_obj::_hx_int((this->pauseMusic->_length / ( (Float)(2) ))),null()),null());
HXLINE(  43)		::flixel::FlxG_obj::sound->list->add(this->pauseMusic).StaticCast<  ::flixel::_hx_system::FlxSound >();
HXLINE(  45)		 ::flixel::FlxSprite bg =  ::flixel::FlxSprite_obj::__alloc( HX_CTX ,null(),null(),null())->makeGraphic(::flixel::FlxG_obj::width,::flixel::FlxG_obj::height,-16777216,null(),null());
HXLINE(  46)		bg->set_alpha(( (Float)(0) ));
HXLINE(  47)		{
HXLINE(  47)			 ::flixel::math::FlxBasePoint this1 = bg->scrollFactor;
HXDLIN(  47)			this1->set_x(( (Float)(0) ));
HXDLIN(  47)			this1->set_y(( (Float)(0) ));
            		}
HXLINE(  48)		this->add(bg);
HXLINE(  50)		 ::flixel::text::FlxText levelInfo =  ::flixel::text::FlxText_obj::__alloc( HX_CTX ,20,15,0,HX_("",00,00,00,00),32,null());
HXLINE(  51)		levelInfo->set_text(( (::String)((levelInfo->text + ::PlayState_obj::SONG->__Field(HX_("song",d5,23,58,4c),::hx::paccDynamic))) ));
HXLINE(  52)		{
HXLINE(  52)			 ::flixel::math::FlxBasePoint this2 = levelInfo->scrollFactor;
HXDLIN(  52)			this2->set_x(( (Float)(0) ));
HXDLIN(  52)			this2->set_y(( (Float)(0) ));
            		}
HXLINE(  53)		levelInfo->setFormat((HX_("assets/fonts/",37,ff,a5,9c) + HX_("vcr.ttf",9d,d2,a7,82)),32,null(),null(),null(),null(),null());
HXLINE(  54)		levelInfo->updateHitbox();
HXLINE(  55)		this->add(levelInfo);
HXLINE(  57)		 ::flixel::text::FlxText levelDifficulty =  ::flixel::text::FlxText_obj::__alloc( HX_CTX ,20,47,0,HX_("Hard",0b,5b,e1,2f),32,null());
HXLINE(  58)		{
HXLINE(  58)			 ::flixel::math::FlxBasePoint this3 = levelDifficulty->scrollFactor;
HXDLIN(  58)			this3->set_x(( (Float)(0) ));
HXDLIN(  58)			this3->set_y(( (Float)(0) ));
            		}
HXLINE(  59)		levelDifficulty->setFormat((HX_("assets/fonts/",37,ff,a5,9c) + HX_("vcr.ttf",9d,d2,a7,82)),32,null(),null(),null(),null(),null());
HXLINE(  60)		levelDifficulty->updateHitbox();
HXLINE(  61)		this->add(levelDifficulty);
HXLINE(  63)		levelDifficulty->set_alpha(( (Float)(0) ));
HXLINE(  64)		levelInfo->set_alpha(( (Float)(0) ));
HXLINE(  66)		int _hx_tmp3 = ::flixel::FlxG_obj::width;
HXDLIN(  66)		levelInfo->set_x((( (Float)(_hx_tmp3) ) - (levelInfo->get_width() + 20)));
HXLINE(  67)		int _hx_tmp4 = ::flixel::FlxG_obj::width;
HXDLIN(  67)		levelDifficulty->set_x((( (Float)(_hx_tmp4) ) - (levelDifficulty->get_width() + 20)));
HXLINE(  69)		::flixel::tweens::FlxTween_obj::tween(bg, ::Dynamic(::hx::Anon_obj::Create(1)
            			->setFixed(0,HX_("alpha",5e,a7,96,21),((Float)0.6))),((Float)0.4), ::Dynamic(::hx::Anon_obj::Create(1)
            			->setFixed(0,HX_("ease",ee,8b,0c,43),::flixel::tweens::FlxEase_obj::quartInOut_dyn())));
HXLINE(  70)		::flixel::tweens::FlxTween_obj::tween(levelInfo, ::Dynamic(::hx::Anon_obj::Create(2)
            			->setFixed(0,HX_("y",79,00,00,00),20)
            			->setFixed(1,HX_("alpha",5e,a7,96,21),1)),((Float)0.4), ::Dynamic(::hx::Anon_obj::Create(2)
            			->setFixed(0,HX_("startDelay",c1,af,3d,f3),((Float)0.3))
            			->setFixed(1,HX_("ease",ee,8b,0c,43),::flixel::tweens::FlxEase_obj::quartInOut_dyn())));
HXLINE(  71)		::flixel::tweens::FlxTween_obj::tween(levelDifficulty, ::Dynamic(::hx::Anon_obj::Create(2)
            			->setFixed(0,HX_("y",79,00,00,00),(levelDifficulty->y + 5))
            			->setFixed(1,HX_("alpha",5e,a7,96,21),1)),((Float)0.4), ::Dynamic(::hx::Anon_obj::Create(2)
            			->setFixed(0,HX_("startDelay",c1,af,3d,f3),((Float)0.5))
            			->setFixed(1,HX_("ease",ee,8b,0c,43),::flixel::tweens::FlxEase_obj::quartInOut_dyn())));
HXLINE(  73)		this->grpMenuShit =  ::flixel::group::FlxTypedGroup_obj::__alloc( HX_CTX ,null());
HXLINE(  74)		this->add(this->grpMenuShit);
HXLINE(  75)		this->perSongOffset =  ::flixel::text::FlxText_obj::__alloc( HX_CTX ,5,(::flixel::FlxG_obj::height - 18),0,(((HX_("Additive Offset (Left, Right): ",5d,60,ef,2e) + ::PlayState_obj::songOffset) + HX_(" - Description - ",ca,32,1d,cd)) + HX_("Adds value to global offset, per song.",5a,ef,29,77)),12,null());
HXLINE(  76)		{
HXLINE(  76)			 ::flixel::math::FlxBasePoint this4 = this->perSongOffset->scrollFactor;
HXDLIN(  76)			this4->set_x(( (Float)(0) ));
HXDLIN(  76)			this4->set_y(( (Float)(0) ));
            		}
HXLINE(  77)		this->perSongOffset->setFormat(HX_("VCR OSD Mono",be,44,e4,b8),16,-1,HX_("left",07,08,b0,47),::flixel::text::FlxTextBorderStyle_obj::OUTLINE_dyn(),-16777216,null());
HXLINE(  80)		this->add(this->perSongOffset);
HXLINE(  83)		{
HXLINE(  83)			int _g = 0;
HXDLIN(  83)			int _g1 = this->menuItems->length;
HXDLIN(  83)			while((_g < _g1)){
HXLINE(  83)				_g = (_g + 1);
HXDLIN(  83)				int i = (_g - 1);
HXLINE(  85)				 ::Alphabet songText =  ::Alphabet_obj::__alloc( HX_CTX ,( (Float)(0) ),( (Float)(((70 * i) + 30)) ),this->menuItems->__get(i),true,false,null());
HXLINE(  86)				songText->isMenuItem = true;
HXLINE(  87)				songText->targetY = ( (Float)(i) );
HXLINE(  88)				this->grpMenuShit->add(songText).StaticCast<  ::Alphabet >();
            			}
            		}
HXLINE(  91)		this->changeSelection(null());
HXLINE(  93)		this->set_cameras(::Array_obj< ::Dynamic>::__new(1)->init(0,::flixel::FlxG_obj::cameras->list->__get((::flixel::FlxG_obj::cameras->list->length - 1)).StaticCast<  ::flixel::FlxCamera >()));
            	}

Dynamic PauseSubState_obj::__CreateEmpty() { return new PauseSubState_obj; }

void *PauseSubState_obj::_hx_vtable = 0;

Dynamic PauseSubState_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< PauseSubState_obj > _hx_result = new PauseSubState_obj();
	_hx_result->__construct(inArgs[0],inArgs[1]);
	return _hx_result;
}

bool PauseSubState_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x62817b24) {
		if (inClassId<=(int)0x5661ffbf) {
			if (inClassId<=(int)0x519cdafb) {
				return inClassId==(int)0x00000001 || inClassId==(int)0x519cdafb;
			} else {
				return inClassId==(int)0x5661ffbf;
			}
		} else {
			return inClassId==(int)0x62817b24;
		}
	} else {
		if (inClassId<=(int)0x7ccf8994) {
			return inClassId==(int)0x7c795c9f || inClassId==(int)0x7ccf8994;
		} else {
			return inClassId==(int)0x7fce3ab0;
		}
	}
}

void PauseSubState_obj::update(Float elapsed){
            	HX_GC_STACKFRAME(&_hx_pos_17d383cbce329512_97_update)
HXLINE(  98)		if ((this->pauseMusic->_volume < ((Float)0.5))) {
HXLINE(  99)			 ::flixel::_hx_system::FlxSound fh = this->pauseMusic;
HXDLIN(  99)			fh->set_volume((fh->_volume + (((Float)0.01) * elapsed)));
            		}
HXLINE( 101)		this->super::update(elapsed);
HXLINE( 103)		bool upP = ::PlayerSettings_obj::player1->controls->_upP->check();
HXLINE( 104)		bool downP = ::PlayerSettings_obj::player1->controls->_downP->check();
HXLINE( 105)		bool leftP = ::PlayerSettings_obj::player1->controls->_leftP->check();
HXLINE( 106)		bool rightP = ::PlayerSettings_obj::player1->controls->_rightP->check();
HXLINE( 107)		bool accepted = ::PlayerSettings_obj::player1->controls->_accept->check();
HXLINE( 108)		Float oldOffset = ( (Float)(0) );
HXLINE( 109)		::String songPath = ((HX_("assets/data/",f9,10,73,a0) + ( (::String)(::PlayState_obj::SONG->__Field(HX_("song",d5,23,58,4c),::hx::paccDynamic)) ).toLowerCase()) + HX_("/",2f,00,00,00));
HXLINE( 111)		if (upP) {
HXLINE( 113)			this->changeSelection(-1);
            		}
            		else {
HXLINE( 115)			if (downP) {
HXLINE( 117)				this->changeSelection(1);
            			}
            			else {
HXLINE( 121)				if (leftP) {
HXLINE( 123)					oldOffset = ::PlayState_obj::songOffset;
HXLINE( 124)					 ::Dynamic _hx_tmp = ::hx::ClassOf< ::PlayState >();
HXDLIN( 124)					::PlayState_obj::songOffset = (::PlayState_obj::songOffset - ( (Float)(1) ));
HXLINE( 125)					::sys::FileSystem_obj::rename(((songPath + oldOffset) + HX_(".offset",41,ee,1a,d9)),((songPath + ::PlayState_obj::songOffset) + HX_(".offset",41,ee,1a,d9)));
HXLINE( 126)					this->perSongOffset->set_text((((HX_("Additive Offset (Left, Right): ",5d,60,ef,2e) + ::PlayState_obj::songOffset) + HX_(" - Description - ",ca,32,1d,cd)) + HX_("Adds value to global offset, per song.",5a,ef,29,77)));
HXLINE( 129)					if (!(this->offsetChanged)) {
HXLINE( 131)						this->grpMenuShit->clear();
HXLINE( 133)						this->menuItems = ::Array_obj< ::String >::fromData( _hx_array_data_08e59567_7,2);
HXLINE( 135)						{
HXLINE( 135)							int _g = 0;
HXDLIN( 135)							int _g1 = this->menuItems->length;
HXDLIN( 135)							while((_g < _g1)){
HXLINE( 135)								_g = (_g + 1);
HXDLIN( 135)								int i = (_g - 1);
HXLINE( 137)								 ::Alphabet songText =  ::Alphabet_obj::__alloc( HX_CTX ,( (Float)(0) ),( (Float)(((70 * i) + 30)) ),this->menuItems->__get(i),true,false,null());
HXLINE( 138)								songText->isMenuItem = true;
HXLINE( 139)								songText->targetY = ( (Float)(i) );
HXLINE( 140)								this->grpMenuShit->add(songText).StaticCast<  ::Alphabet >();
            							}
            						}
HXLINE( 143)						this->changeSelection(null());
HXLINE( 145)						this->set_cameras(::Array_obj< ::Dynamic>::__new(1)->init(0,::flixel::FlxG_obj::cameras->list->__get((::flixel::FlxG_obj::cameras->list->length - 1)).StaticCast<  ::flixel::FlxCamera >()));
HXLINE( 146)						this->offsetChanged = true;
            					}
            				}
            				else {
HXLINE( 148)					if (rightP) {
HXLINE( 150)						oldOffset = ::PlayState_obj::songOffset;
HXLINE( 151)						 ::Dynamic _hx_tmp = ::hx::ClassOf< ::PlayState >();
HXDLIN( 151)						::PlayState_obj::songOffset = (::PlayState_obj::songOffset + 1);
HXLINE( 152)						::sys::FileSystem_obj::rename(((songPath + oldOffset) + HX_(".offset",41,ee,1a,d9)),((songPath + ::PlayState_obj::songOffset) + HX_(".offset",41,ee,1a,d9)));
HXLINE( 153)						this->perSongOffset->set_text((((HX_("Additive Offset (Left, Right): ",5d,60,ef,2e) + ::PlayState_obj::songOffset) + HX_(" - Description - ",ca,32,1d,cd)) + HX_("Adds value to global offset, per song.",5a,ef,29,77)));
HXLINE( 154)						if (!(this->offsetChanged)) {
HXLINE( 156)							this->grpMenuShit->clear();
HXLINE( 158)							this->menuItems = ::Array_obj< ::String >::fromData( _hx_array_data_08e59567_8,2);
HXLINE( 160)							{
HXLINE( 160)								int _g = 0;
HXDLIN( 160)								int _g1 = this->menuItems->length;
HXDLIN( 160)								while((_g < _g1)){
HXLINE( 160)									_g = (_g + 1);
HXDLIN( 160)									int i = (_g - 1);
HXLINE( 162)									 ::Alphabet songText =  ::Alphabet_obj::__alloc( HX_CTX ,( (Float)(0) ),( (Float)(((70 * i) + 30)) ),this->menuItems->__get(i),true,false,null());
HXLINE( 163)									songText->isMenuItem = true;
HXLINE( 164)									songText->targetY = ( (Float)(i) );
HXLINE( 165)									this->grpMenuShit->add(songText).StaticCast<  ::Alphabet >();
            								}
            							}
HXLINE( 168)							this->changeSelection(null());
HXLINE( 170)							this->set_cameras(::Array_obj< ::Dynamic>::__new(1)->init(0,::flixel::FlxG_obj::cameras->list->__get((::flixel::FlxG_obj::cameras->list->length - 1)).StaticCast<  ::flixel::FlxCamera >()));
HXLINE( 171)							this->offsetChanged = true;
            						}
            					}
            				}
            			}
            		}
HXLINE( 176)		if (accepted) {
HXLINE( 178)			::String daSelected = this->menuItems->__get(this->curSelected);
HXLINE( 180)			::String _hx_switch_0 = daSelected;
            			if (  (_hx_switch_0==HX_("Exit to menu",82,87,9a,a9)) ){
HXLINE( 187)				if (::PlayState_obj::loadRep) {
HXLINE( 189)					::flixel::FlxG_obj::save->data->__SetField(HX_("botplay",7b,fb,a9,61),false,::hx::paccDynamic);
HXLINE( 190)					::flixel::FlxG_obj::save->data->__SetField(HX_("scrollSpeed",3a,e0,46,cb),1,::hx::paccDynamic);
HXLINE( 191)					::flixel::FlxG_obj::save->data->__SetField(HX_("downscroll",ef,45,d4,4f),false,::hx::paccDynamic);
            				}
HXLINE( 193)				::PlayState_obj::loadRep = false;
HXLINE( 195)				if (::hx::IsNotNull( ::PlayState_obj::luaModchart )) {
HXLINE( 197)					::PlayState_obj::luaModchart->die();
HXLINE( 198)					::PlayState_obj::luaModchart = null();
            				}
HXLINE( 201)				if (::hx::IsGreater( ::flixel::FlxG_obj::save->data->__Field(HX_("fpsCap",a9,7b,7e,91),::hx::paccDynamic),290 )) {
HXLINE( 202)					::hx::TCast<  ::Main >::cast(::openfl::Lib_obj::get_current()->getChildAt(0))->setFPSCap(( (Float)(290) ));
            				}
HXLINE( 205)				::DiscordClient_obj::shutdown();
HXLINE( 208)				{
HXLINE( 208)					 ::flixel::FlxState nextState =  ::MainMenuState_obj::__alloc( HX_CTX ,null(),null());
HXDLIN( 208)					if (::flixel::FlxG_obj::game->_state->switchTo(nextState)) {
HXLINE( 208)						::flixel::FlxG_obj::game->_requestedState = nextState;
            					}
            				}
HXLINE( 186)				goto _hx_goto_5;
            			}
            			if (  (_hx_switch_0==HX_("Restart Song",06,b6,fe,13)) ){
HXLINE( 185)				 ::flixel::FlxState nextState = ( ( ::flixel::FlxState)(::Type_obj::createInstance(::Type_obj::getClass(::flixel::FlxG_obj::game->_state),::cpp::VirtualArray_obj::__new(0))) );
HXDLIN( 185)				if (::flixel::FlxG_obj::game->_state->switchTo(nextState)) {
HXLINE( 185)					::flixel::FlxG_obj::game->_requestedState = nextState;
            				}
HXDLIN( 185)				goto _hx_goto_5;
            			}
            			if (  (_hx_switch_0==HX_("Resume",cd,dd,18,3d)) ){
HXLINE( 183)				this->close();
HXDLIN( 183)				goto _hx_goto_5;
            			}
            			_hx_goto_5:;
            		}
HXLINE( 212)		 ::flixel::input::keyboard::FlxKeyList _this = ( ( ::flixel::input::keyboard::FlxKeyList)(::flixel::FlxG_obj::keys->justPressed) );
HXDLIN( 212)		bool _hx_tmp = _this->keyManager->checkStatusUnsafe(74,_this->status);
            	}


void PauseSubState_obj::destroy(){
            	HX_STACKFRAME(&_hx_pos_17d383cbce329512_220_destroy)
HXLINE( 221)		this->pauseMusic->destroy();
HXLINE( 223)		this->super::destroy();
            	}


void PauseSubState_obj::changeSelection(::hx::Null< int >  __o_change){
            		int change = __o_change.Default(0);
            	HX_STACKFRAME(&_hx_pos_17d383cbce329512_227_changeSelection)
HXLINE( 228)		 ::PauseSubState _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 228)		_hx_tmp->curSelected = (_hx_tmp->curSelected + change);
HXLINE( 230)		if ((this->curSelected < 0)) {
HXLINE( 231)			this->curSelected = (this->menuItems->length - 1);
            		}
HXLINE( 232)		if ((this->curSelected >= this->menuItems->length)) {
HXLINE( 233)			this->curSelected = 0;
            		}
HXLINE( 235)		int bullShit = 0;
HXLINE( 237)		{
HXLINE( 237)			int _g = 0;
HXDLIN( 237)			::Array< ::Dynamic> _g1 = this->grpMenuShit->members;
HXDLIN( 237)			while((_g < _g1->length)){
HXLINE( 237)				 ::Alphabet item = _g1->__get(_g).StaticCast<  ::Alphabet >();
HXDLIN( 237)				_g = (_g + 1);
HXLINE( 239)				item->targetY = ( (Float)((bullShit - this->curSelected)) );
HXLINE( 240)				bullShit = (bullShit + 1);
HXLINE( 242)				item->set_alpha(((Float)0.6));
HXLINE( 245)				if ((item->targetY == 0)) {
HXLINE( 247)					item->set_alpha(( (Float)(1) ));
            				}
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(PauseSubState_obj,changeSelection,(void))


::hx::ObjectPtr< PauseSubState_obj > PauseSubState_obj::__new(Float x,Float y) {
	::hx::ObjectPtr< PauseSubState_obj > __this = new PauseSubState_obj();
	__this->__construct(x,y);
	return __this;
}

::hx::ObjectPtr< PauseSubState_obj > PauseSubState_obj::__alloc(::hx::Ctx *_hx_ctx,Float x,Float y) {
	PauseSubState_obj *__this = (PauseSubState_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(PauseSubState_obj), true, "PauseSubState"));
	*(void **)__this = PauseSubState_obj::_hx_vtable;
	__this->__construct(x,y);
	return __this;
}

PauseSubState_obj::PauseSubState_obj()
{
}

void PauseSubState_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(PauseSubState);
	HX_MARK_MEMBER_NAME(grpMenuShit,"grpMenuShit");
	HX_MARK_MEMBER_NAME(menuItems,"menuItems");
	HX_MARK_MEMBER_NAME(curSelected,"curSelected");
	HX_MARK_MEMBER_NAME(pauseMusic,"pauseMusic");
	HX_MARK_MEMBER_NAME(perSongOffset,"perSongOffset");
	HX_MARK_MEMBER_NAME(offsetChanged,"offsetChanged");
	 ::flixel::FlxSubState_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void PauseSubState_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(grpMenuShit,"grpMenuShit");
	HX_VISIT_MEMBER_NAME(menuItems,"menuItems");
	HX_VISIT_MEMBER_NAME(curSelected,"curSelected");
	HX_VISIT_MEMBER_NAME(pauseMusic,"pauseMusic");
	HX_VISIT_MEMBER_NAME(perSongOffset,"perSongOffset");
	HX_VISIT_MEMBER_NAME(offsetChanged,"offsetChanged");
	 ::flixel::FlxSubState_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val PauseSubState_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"update") ) { return ::hx::Val( update_dyn() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"destroy") ) { return ::hx::Val( destroy_dyn() ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"menuItems") ) { return ::hx::Val( menuItems ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"pauseMusic") ) { return ::hx::Val( pauseMusic ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"grpMenuShit") ) { return ::hx::Val( grpMenuShit ); }
		if (HX_FIELD_EQ(inName,"curSelected") ) { return ::hx::Val( curSelected ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"perSongOffset") ) { return ::hx::Val( perSongOffset ); }
		if (HX_FIELD_EQ(inName,"offsetChanged") ) { return ::hx::Val( offsetChanged ); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"changeSelection") ) { return ::hx::Val( changeSelection_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val PauseSubState_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 9:
		if (HX_FIELD_EQ(inName,"menuItems") ) { menuItems=inValue.Cast< ::Array< ::String > >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"pauseMusic") ) { pauseMusic=inValue.Cast<  ::flixel::_hx_system::FlxSound >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"grpMenuShit") ) { grpMenuShit=inValue.Cast<  ::flixel::group::FlxTypedGroup >(); return inValue; }
		if (HX_FIELD_EQ(inName,"curSelected") ) { curSelected=inValue.Cast< int >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"perSongOffset") ) { perSongOffset=inValue.Cast<  ::flixel::text::FlxText >(); return inValue; }
		if (HX_FIELD_EQ(inName,"offsetChanged") ) { offsetChanged=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void PauseSubState_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("grpMenuShit",04,32,b8,f0));
	outFields->push(HX_("menuItems",e1,15,e5,5c));
	outFields->push(HX_("curSelected",fb,eb,ab,32));
	outFields->push(HX_("pauseMusic",cf,6d,d3,e5));
	outFields->push(HX_("perSongOffset",85,2c,3e,8a));
	outFields->push(HX_("offsetChanged",a1,a9,06,e9));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo PauseSubState_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::flixel::group::FlxTypedGroup */ ,(int)offsetof(PauseSubState_obj,grpMenuShit),HX_("grpMenuShit",04,32,b8,f0)},
	{::hx::fsObject /* ::Array< ::String > */ ,(int)offsetof(PauseSubState_obj,menuItems),HX_("menuItems",e1,15,e5,5c)},
	{::hx::fsInt,(int)offsetof(PauseSubState_obj,curSelected),HX_("curSelected",fb,eb,ab,32)},
	{::hx::fsObject /*  ::flixel::_hx_system::FlxSound */ ,(int)offsetof(PauseSubState_obj,pauseMusic),HX_("pauseMusic",cf,6d,d3,e5)},
	{::hx::fsObject /*  ::flixel::text::FlxText */ ,(int)offsetof(PauseSubState_obj,perSongOffset),HX_("perSongOffset",85,2c,3e,8a)},
	{::hx::fsBool,(int)offsetof(PauseSubState_obj,offsetChanged),HX_("offsetChanged",a1,a9,06,e9)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *PauseSubState_obj_sStaticStorageInfo = 0;
#endif

static ::String PauseSubState_obj_sMemberFields[] = {
	HX_("grpMenuShit",04,32,b8,f0),
	HX_("menuItems",e1,15,e5,5c),
	HX_("curSelected",fb,eb,ab,32),
	HX_("pauseMusic",cf,6d,d3,e5),
	HX_("perSongOffset",85,2c,3e,8a),
	HX_("offsetChanged",a1,a9,06,e9),
	HX_("update",09,86,05,87),
	HX_("destroy",fa,2c,86,24),
	HX_("changeSelection",bc,98,b5,48),
	::String(null()) };

::hx::Class PauseSubState_obj::__mClass;

void PauseSubState_obj::__register()
{
	PauseSubState_obj _hx_dummy;
	PauseSubState_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("PauseSubState",67,95,e5,08);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(PauseSubState_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< PauseSubState_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = PauseSubState_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = PauseSubState_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

