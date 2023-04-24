#include <hxcpp.h>

#ifndef INCLUDED_Controls
#include <Controls.h>
#endif
#ifndef INCLUDED_KeyBindMenu
#include <KeyBindMenu.h>
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
#ifndef INCLUDED_PlayerSettings
#include <PlayerSettings.h>
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
#ifndef INCLUDED_flixel_input_FlxBaseKeyList
#include <flixel/input/FlxBaseKeyList.h>
#endif
#ifndef INCLUDED_flixel_input_FlxInput
#include <flixel/input/FlxInput.h>
#endif
#ifndef INCLUDED_flixel_input_FlxKeyManager
#include <flixel/input/FlxKeyManager.h>
#endif
#ifndef INCLUDED_flixel_input_IFlxInput
#include <flixel/input/IFlxInput.h>
#endif
#ifndef INCLUDED_flixel_input_IFlxInputManager
#include <flixel/input/IFlxInputManager.h>
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
#ifndef INCLUDED_flixel_input_keyboard__FlxKey_FlxKey_Impl_
#include <flixel/input/keyboard/_FlxKey/FlxKey_Impl_.h>
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
#ifndef INCLUDED_haxe_IMap
#include <haxe/IMap.h>
#endif
#ifndef INCLUDED_haxe_Log
#include <haxe/Log.h>
#endif
#ifndef INCLUDED_haxe_ds_IntMap
#include <haxe/ds/IntMap.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_b43d8094f4720380_26_new,"KeyBindMenu","new",0x54f9290d,"KeyBindMenu.new","KeyBindMenu.hx",26,0x3c137703)
static const ::String _hx_array_data_e27a9e9b_1[] = {
	HX_("ESCAPE",81,ef,5c,8d),HX_("ENTER",f8,a4,74,ee),HX_("BACKSPACE",1f,f5,42,c6),HX_("SPACE",a6,c4,54,ff),
};
static const ::String _hx_array_data_e27a9e9b_2[] = {
	HX_("A",41,00,00,00),HX_("S",53,00,00,00),HX_("W",57,00,00,00),HX_("D",44,00,00,00),HX_("R",52,00,00,00),
};
static const ::String _hx_array_data_e27a9e9b_3[] = {
	HX_("LEFT",07,d0,70,32),HX_("DOWN",62,c0,2e,2d),HX_("UP",5b,4a,00,00),HX_("RIGHT",bc,43,52,67),
};
HX_LOCAL_STACK_FRAME(_hx_pos_b43d8094f4720380_50_create,"KeyBindMenu","create",0x79aaf86f,"KeyBindMenu.create","KeyBindMenu.hx",50,0x3c137703)
HX_LOCAL_STACK_FRAME(_hx_pos_b43d8094f4720380_97_update,"KeyBindMenu","update",0x84a1177c,"KeyBindMenu.update","KeyBindMenu.hx",97,0x3c137703)
HX_LOCAL_STACK_FRAME(_hx_pos_b43d8094f4720380_164_textUpdate,"KeyBindMenu","textUpdate",0x7642cd89,"KeyBindMenu.textUpdate","KeyBindMenu.hx",164,0x3c137703)
HX_LOCAL_STACK_FRAME(_hx_pos_b43d8094f4720380_179_save,"KeyBindMenu","save",0x0855c9f0,"KeyBindMenu.save","KeyBindMenu.hx",179,0x3c137703)
HX_LOCAL_STACK_FRAME(_hx_pos_b43d8094f4720380_192_reset,"KeyBindMenu","reset",0xb1f6e7bc,"KeyBindMenu.reset","KeyBindMenu.hx",192,0x3c137703)
HX_LOCAL_STACK_FRAME(_hx_pos_b43d8094f4720380_210_quit,"KeyBindMenu","quit",0x07127e82,"KeyBindMenu.quit","KeyBindMenu.hx",210,0x3c137703)
HX_LOCAL_STACK_FRAME(_hx_pos_b43d8094f4720380_201_quit,"KeyBindMenu","quit",0x07127e82,"KeyBindMenu.quit","KeyBindMenu.hx",201,0x3c137703)
HX_LOCAL_STACK_FRAME(_hx_pos_b43d8094f4720380_215_addKey,"KeyBindMenu","addKey",0x9c9e2b71,"KeyBindMenu.addKey","KeyBindMenu.hx",215,0x3c137703)
HX_LOCAL_STACK_FRAME(_hx_pos_b43d8094f4720380_249_changeItem,"KeyBindMenu","changeItem",0xd855c196,"KeyBindMenu.changeItem","KeyBindMenu.hx",249,0x3c137703)

void KeyBindMenu_obj::__construct( ::Dynamic BGColor){
            	HX_STACKFRAME(&_hx_pos_b43d8094f4720380_26_new)
HXLINE(  47)		this->state = HX_("select",fc,1a,33,6a);
HXLINE(  42)		this->blacklist = ::Array_obj< ::String >::fromData( _hx_array_data_e27a9e9b_1,4);
HXLINE(  41)		this->tempKey = HX_("",00,00,00,00);
HXLINE(  36)		this->keys = ::Array_obj< ::String >::__new(4)->init(0, ::Dynamic(::flixel::FlxG_obj::save->data->__Field(HX_("leftBind",64,39,12,48),::hx::paccDynamic)))->init(1, ::Dynamic(::flixel::FlxG_obj::save->data->__Field(HX_("downBind",3f,f3,fe,75),::hx::paccDynamic)))->init(2, ::Dynamic(::flixel::FlxG_obj::save->data->__Field(HX_("upBind",b8,51,92,70),::hx::paccDynamic)))->init(3, ::Dynamic(::flixel::FlxG_obj::save->data->__Field(HX_("rightBind",b9,4b,dd,ab),::hx::paccDynamic)));
HXLINE(  34)		this->curSelected = 0;
HXLINE(  33)		this->defaultKeys = ::Array_obj< ::String >::fromData( _hx_array_data_e27a9e9b_2,5);
HXLINE(  32)		this->keyText = ::Array_obj< ::String >::fromData( _hx_array_data_e27a9e9b_3,4);
HXLINE(  26)		super::__construct(BGColor);
            	}

Dynamic KeyBindMenu_obj::__CreateEmpty() { return new KeyBindMenu_obj; }

void *KeyBindMenu_obj::_hx_vtable = 0;

Dynamic KeyBindMenu_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< KeyBindMenu_obj > _hx_result = new KeyBindMenu_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool KeyBindMenu_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x62817b24) {
		if (inClassId<=(int)0x5661ffbf) {
			if (inClassId<=(int)0x0a838ef3) {
				return inClassId==(int)0x00000001 || inClassId==(int)0x0a838ef3;
			} else {
				return inClassId==(int)0x5661ffbf;
			}
		} else {
			return inClassId==(int)0x62817b24;
		}
	} else {
		return inClassId==(int)0x7c795c9f || inClassId==(int)0x7ccf8994;
	}
}

void KeyBindMenu_obj::create(){
            	HX_GC_STACKFRAME(&_hx_pos_b43d8094f4720380_50_create)
HXLINE(  52)		{
HXLINE(  52)			int _g = 0;
HXDLIN(  52)			int _g1 = this->keys->length;
HXDLIN(  52)			while((_g < _g1)){
HXLINE(  52)				_g = (_g + 1);
HXDLIN(  52)				int i = (_g - 1);
HXLINE(  54)				::String k = this->keys->__get(i);
HXLINE(  55)				if (::hx::IsNull( k )) {
HXLINE(  56)					this->keys[i] = this->defaultKeys->__get(i);
            				}
            			}
            		}
HXLINE(  61)		this->persistentUpdate = (this->persistentDraw = true);
HXLINE(  63)		this->keyTextDisplay =  ::flixel::text::FlxText_obj::__alloc( HX_CTX ,-10,0,1280,HX_("",00,00,00,00),72,null());
HXLINE(  64)		{
HXLINE(  64)			 ::flixel::math::FlxBasePoint this1 = this->keyTextDisplay->scrollFactor;
HXDLIN(  64)			this1->set_x(( (Float)(0) ));
HXDLIN(  64)			this1->set_y(( (Float)(0) ));
            		}
HXLINE(  65)		this->keyTextDisplay->setFormat(HX_("VCR OSD Mono",be,44,e4,b8),42,-1,HX_("center",d5,25,db,05),::flixel::text::FlxTextBorderStyle_obj::OUTLINE_dyn(),-16777216,null());
HXLINE(  66)		this->keyTextDisplay->set_borderSize(( (Float)(2) ));
HXLINE(  67)		this->keyTextDisplay->set_borderQuality(( (Float)(3) ));
HXLINE(  69)		this->blackBox =  ::flixel::FlxSprite_obj::__alloc( HX_CTX ,0,0,null())->makeGraphic(::flixel::FlxG_obj::width,::flixel::FlxG_obj::height,-16777216,null(),null());
HXLINE(  70)		this->add(this->blackBox);
HXLINE(  72)		this->infoText =  ::flixel::text::FlxText_obj::__alloc( HX_CTX ,-10,580,1280,HX_("(Escape to save, backspace to leave without saving)",69,d8,49,5a),72,null());
HXLINE(  73)		{
HXLINE(  73)			 ::flixel::math::FlxBasePoint this2 = this->infoText->scrollFactor;
HXDLIN(  73)			this2->set_x(( (Float)(0) ));
HXDLIN(  73)			this2->set_y(( (Float)(0) ));
            		}
HXLINE(  74)		this->infoText->setFormat(HX_("VCR OSD Mono",be,44,e4,b8),24,-1,HX_("center",d5,25,db,05),::flixel::text::FlxTextBorderStyle_obj::OUTLINE_dyn(),-16777216,null());
HXLINE(  75)		this->infoText->set_borderSize(( (Float)(2) ));
HXLINE(  76)		this->infoText->set_borderQuality(( (Float)(3) ));
HXLINE(  77)		this->infoText->set_alpha(( (Float)(0) ));
HXLINE(  78)		{
HXLINE(  78)			 ::flixel::text::FlxText _this = this->infoText;
HXDLIN(  78)			int axes = 1;
HXDLIN(  78)			bool _hx_tmp;
HXDLIN(  78)			if ((axes != 1)) {
HXLINE(  78)				_hx_tmp = (axes == 17);
            			}
            			else {
HXLINE(  78)				_hx_tmp = true;
            			}
HXDLIN(  78)			if (_hx_tmp) {
HXLINE(  78)				int _hx_tmp = ::flixel::FlxG_obj::width;
HXDLIN(  78)				_this->set_x(((( (Float)(_hx_tmp) ) - _this->get_width()) / ( (Float)(2) )));
            			}
HXDLIN(  78)			bool _hx_tmp1;
HXDLIN(  78)			if ((axes != 16)) {
HXLINE(  78)				_hx_tmp1 = (axes == 17);
            			}
            			else {
HXLINE(  78)				_hx_tmp1 = true;
            			}
HXDLIN(  78)			if (_hx_tmp1) {
HXLINE(  78)				int _hx_tmp = ::flixel::FlxG_obj::height;
HXDLIN(  78)				_this->set_y(((( (Float)(_hx_tmp) ) - _this->get_height()) / ( (Float)(2) )));
            			}
            		}
HXLINE(  79)		this->add(this->infoText);
HXLINE(  80)		this->add(this->keyTextDisplay);
HXLINE(  82)		this->blackBox->set_alpha(( (Float)(0) ));
HXLINE(  83)		this->keyTextDisplay->set_alpha(( (Float)(0) ));
HXLINE(  85)		::flixel::tweens::FlxTween_obj::tween(this->keyTextDisplay, ::Dynamic(::hx::Anon_obj::Create(1)
            			->setFixed(0,HX_("alpha",5e,a7,96,21),1)),1, ::Dynamic(::hx::Anon_obj::Create(1)
            			->setFixed(0,HX_("ease",ee,8b,0c,43),::flixel::tweens::FlxEase_obj::expoInOut_dyn())));
HXLINE(  86)		::flixel::tweens::FlxTween_obj::tween(this->infoText, ::Dynamic(::hx::Anon_obj::Create(1)
            			->setFixed(0,HX_("alpha",5e,a7,96,21),1)),((Float)1.4), ::Dynamic(::hx::Anon_obj::Create(1)
            			->setFixed(0,HX_("ease",ee,8b,0c,43),::flixel::tweens::FlxEase_obj::expoInOut_dyn())));
HXLINE(  87)		::flixel::tweens::FlxTween_obj::tween(this->blackBox, ::Dynamic(::hx::Anon_obj::Create(1)
            			->setFixed(0,HX_("alpha",5e,a7,96,21),((Float)0.7))),1, ::Dynamic(::hx::Anon_obj::Create(1)
            			->setFixed(0,HX_("ease",ee,8b,0c,43),::flixel::tweens::FlxEase_obj::expoInOut_dyn())));
HXLINE(  89)		::OptionsMenu_obj::instance->acceptInput = false;
HXLINE(  91)		this->textUpdate();
HXLINE(  93)		this->super::create();
            	}


void KeyBindMenu_obj::update(Float elapsed){
            	HX_STACKFRAME(&_hx_pos_b43d8094f4720380_97_update)
HXLINE(  99)		::String _hx_switch_0 = this->state;
            		if (  (_hx_switch_0==HX_("exiting",84,dc,da,24)) ){
HXLINE( 149)			goto _hx_goto_6;
            		}
            		if (  (_hx_switch_0==HX_("input",0a,c4,1d,be)) ){
HXLINE( 126)			this->tempKey = this->keys->__get(this->curSelected);
HXLINE( 127)			this->keys[this->curSelected] = HX_("?",3f,00,00,00);
HXLINE( 128)			this->textUpdate();
HXLINE( 129)			this->state = HX_("waiting",8d,e9,27,df);
HXLINE( 125)			goto _hx_goto_6;
            		}
            		if (  (_hx_switch_0==HX_("select",fc,1a,33,6a)) ){
HXLINE( 102)			 ::flixel::input::keyboard::FlxKeyList _this = ( ( ::flixel::input::keyboard::FlxKeyList)(::flixel::FlxG_obj::keys->justPressed) );
HXDLIN( 102)			if (_this->keyManager->checkStatusUnsafe(38,_this->status)) {
HXLINE( 104)				 ::flixel::_hx_system::frontEnds::SoundFrontEnd _hx_tmp = ::flixel::FlxG_obj::sound;
HXDLIN( 104)				_hx_tmp->play(::Paths_obj::sound(HX_("scrollMenu",4c,d4,18,06),null()),null(),null(),null(),null(),null());
HXLINE( 105)				this->changeItem(-1);
            			}
HXLINE( 108)			 ::flixel::input::keyboard::FlxKeyList _this1 = ( ( ::flixel::input::keyboard::FlxKeyList)(::flixel::FlxG_obj::keys->justPressed) );
HXDLIN( 108)			if (_this1->keyManager->checkStatusUnsafe(40,_this1->status)) {
HXLINE( 110)				 ::flixel::_hx_system::frontEnds::SoundFrontEnd _hx_tmp = ::flixel::FlxG_obj::sound;
HXDLIN( 110)				_hx_tmp->play(::Paths_obj::sound(HX_("scrollMenu",4c,d4,18,06),null()),null(),null(),null(),null(),null());
HXLINE( 111)				this->changeItem(1);
            			}
HXLINE( 114)			 ::flixel::input::keyboard::FlxKeyList _this2 = ( ( ::flixel::input::keyboard::FlxKeyList)(::flixel::FlxG_obj::keys->justPressed) );
HXDLIN( 114)			if (_this2->keyManager->checkStatusUnsafe(13,_this2->status)) {
HXLINE( 115)				 ::flixel::_hx_system::frontEnds::SoundFrontEnd _hx_tmp = ::flixel::FlxG_obj::sound;
HXDLIN( 115)				_hx_tmp->play(::Paths_obj::sound(HX_("scrollMenu",4c,d4,18,06),null()),null(),null(),null(),null(),null());
HXLINE( 116)				this->state = HX_("input",0a,c4,1d,be);
            			}
            			else {
HXLINE( 118)				 ::flixel::input::keyboard::FlxKeyList _this = ( ( ::flixel::input::keyboard::FlxKeyList)(::flixel::FlxG_obj::keys->justPressed) );
HXDLIN( 118)				if (_this->keyManager->checkStatusUnsafe(27,_this->status)) {
HXLINE( 119)					this->quit();
            				}
            				else {
HXLINE( 121)					 ::flixel::input::keyboard::FlxKeyList _this = ( ( ::flixel::input::keyboard::FlxKeyList)(::flixel::FlxG_obj::keys->justPressed) );
HXDLIN( 121)					if (_this->keyManager->checkStatusUnsafe(8,_this->status)) {
HXLINE( 122)						this->reset();
            					}
            				}
            			}
HXLINE( 101)			goto _hx_goto_6;
            		}
            		if (  (_hx_switch_0==HX_("waiting",8d,e9,27,df)) ){
HXLINE( 132)			 ::flixel::input::keyboard::FlxKeyList _this = ( ( ::flixel::input::keyboard::FlxKeyList)(::flixel::FlxG_obj::keys->justPressed) );
HXDLIN( 132)			if (_this->keyManager->checkStatusUnsafe(27,_this->status)) {
HXLINE( 133)				this->keys[this->curSelected] = this->tempKey;
HXLINE( 134)				this->state = HX_("select",fc,1a,33,6a);
HXLINE( 135)				 ::flixel::_hx_system::frontEnds::SoundFrontEnd _hx_tmp = ::flixel::FlxG_obj::sound;
HXDLIN( 135)				_hx_tmp->play(::Paths_obj::sound(HX_("confirmMenu",bf,8e,fe,3c),null()),null(),null(),null(),null(),null());
            			}
            			else {
HXLINE( 137)				 ::flixel::input::keyboard::FlxKeyList _this = ( ( ::flixel::input::keyboard::FlxKeyList)(::flixel::FlxG_obj::keys->justPressed) );
HXDLIN( 137)				if (_this->keyManager->checkStatusUnsafe(13,_this->status)) {
HXLINE( 138)					this->addKey(this->defaultKeys->__get(this->curSelected));
HXLINE( 139)					this->save();
HXLINE( 140)					this->state = HX_("select",fc,1a,33,6a);
            				}
            				else {
HXLINE( 142)					if (( ( ::flixel::input::FlxBaseKeyList)(::flixel::FlxG_obj::keys->justPressed) )->get_ANY()) {
HXLINE( 143)						int this1 = ( (int)(::flixel::FlxG_obj::keys->getIsDown()->__get(0).StaticCast<  ::flixel::input::FlxInput >()->ID) );
HXDLIN( 143)						this->addKey(::flixel::input::keyboard::_FlxKey::FlxKey_Impl__obj::toStringMap->get_string(this1));
HXLINE( 144)						this->save();
HXLINE( 145)						this->state = HX_("select",fc,1a,33,6a);
            					}
            				}
            			}
HXLINE( 132)			goto _hx_goto_6;
            		}
            		/* default */{
HXLINE( 153)			this->state = HX_("select",fc,1a,33,6a);
            		}
            		_hx_goto_6:;
HXLINE( 157)		if (( ( ::flixel::input::FlxBaseKeyList)(::flixel::FlxG_obj::keys->justPressed) )->get_ANY()) {
HXLINE( 158)			this->textUpdate();
            		}
HXLINE( 160)		this->super::update(elapsed);
            	}


void KeyBindMenu_obj::textUpdate(){
            	HX_STACKFRAME(&_hx_pos_b43d8094f4720380_164_textUpdate)
HXLINE( 166)		this->keyTextDisplay->set_text(HX_("\n\n",c0,08,00,00));
HXLINE( 168)		{
HXLINE( 168)			{
HXLINE( 170)				::String textStart;
HXDLIN( 170)				if ((0 == this->curSelected)) {
HXLINE( 170)					textStart = HX_("> ",22,36,00,00);
            				}
            				else {
HXLINE( 170)					textStart = HX_("  ",00,1c,00,00);
            				}
HXLINE( 171)				 ::flixel::text::FlxText fh = this->keyTextDisplay;
HXDLIN( 171)				::String _hx_tmp;
HXDLIN( 171)				if ((this->keys->__get(0) != this->keyText->__get(0))) {
HXLINE( 171)					_hx_tmp = (this->keys->__get(0) + HX_(" / ",31,71,18,00));
            				}
            				else {
HXLINE( 171)					_hx_tmp = HX_("",00,00,00,00);
            				}
HXDLIN( 171)				fh->set_text((fh->text + (((((textStart + this->keyText->__get(0)) + HX_(": ",a6,32,00,00)) + _hx_tmp) + this->keyText->__get(0)) + HX_(" ARROW\n",61,9a,2c,9d))));
            			}
HXLINE( 168)			{
HXLINE( 170)				::String textStart1;
HXDLIN( 170)				if ((1 == this->curSelected)) {
HXLINE( 170)					textStart1 = HX_("> ",22,36,00,00);
            				}
            				else {
HXLINE( 170)					textStart1 = HX_("  ",00,1c,00,00);
            				}
HXLINE( 171)				 ::flixel::text::FlxText fh1 = this->keyTextDisplay;
HXDLIN( 171)				::String _hx_tmp1;
HXDLIN( 171)				if ((this->keys->__get(1) != this->keyText->__get(1))) {
HXLINE( 171)					_hx_tmp1 = (this->keys->__get(1) + HX_(" / ",31,71,18,00));
            				}
            				else {
HXLINE( 171)					_hx_tmp1 = HX_("",00,00,00,00);
            				}
HXDLIN( 171)				fh1->set_text((fh1->text + (((((textStart1 + this->keyText->__get(1)) + HX_(": ",a6,32,00,00)) + _hx_tmp1) + this->keyText->__get(1)) + HX_(" ARROW\n",61,9a,2c,9d))));
            			}
HXLINE( 168)			{
HXLINE( 170)				::String textStart2;
HXDLIN( 170)				if ((2 == this->curSelected)) {
HXLINE( 170)					textStart2 = HX_("> ",22,36,00,00);
            				}
            				else {
HXLINE( 170)					textStart2 = HX_("  ",00,1c,00,00);
            				}
HXLINE( 171)				 ::flixel::text::FlxText fh2 = this->keyTextDisplay;
HXDLIN( 171)				::String _hx_tmp2;
HXDLIN( 171)				if ((this->keys->__get(2) != this->keyText->__get(2))) {
HXLINE( 171)					_hx_tmp2 = (this->keys->__get(2) + HX_(" / ",31,71,18,00));
            				}
            				else {
HXLINE( 171)					_hx_tmp2 = HX_("",00,00,00,00);
            				}
HXDLIN( 171)				fh2->set_text((fh2->text + (((((textStart2 + this->keyText->__get(2)) + HX_(": ",a6,32,00,00)) + _hx_tmp2) + this->keyText->__get(2)) + HX_(" ARROW\n",61,9a,2c,9d))));
            			}
HXLINE( 168)			{
HXLINE( 170)				::String textStart3;
HXDLIN( 170)				if ((3 == this->curSelected)) {
HXLINE( 170)					textStart3 = HX_("> ",22,36,00,00);
            				}
            				else {
HXLINE( 170)					textStart3 = HX_("  ",00,1c,00,00);
            				}
HXLINE( 171)				 ::flixel::text::FlxText fh3 = this->keyTextDisplay;
HXDLIN( 171)				::String _hx_tmp3;
HXDLIN( 171)				if ((this->keys->__get(3) != this->keyText->__get(3))) {
HXLINE( 171)					_hx_tmp3 = (this->keys->__get(3) + HX_(" / ",31,71,18,00));
            				}
            				else {
HXLINE( 171)					_hx_tmp3 = HX_("",00,00,00,00);
            				}
HXDLIN( 171)				fh3->set_text((fh3->text + (((((textStart3 + this->keyText->__get(3)) + HX_(": ",a6,32,00,00)) + _hx_tmp3) + this->keyText->__get(3)) + HX_(" ARROW\n",61,9a,2c,9d))));
            			}
            		}
HXLINE( 175)		{
HXLINE( 175)			 ::flixel::text::FlxText _this = this->keyTextDisplay;
HXDLIN( 175)			int axes = 17;
HXDLIN( 175)			bool _hx_tmp4;
HXDLIN( 175)			if ((axes != 1)) {
HXLINE( 175)				_hx_tmp4 = (axes == 17);
            			}
            			else {
HXLINE( 175)				_hx_tmp4 = true;
            			}
HXDLIN( 175)			if (_hx_tmp4) {
HXLINE( 175)				int _hx_tmp = ::flixel::FlxG_obj::width;
HXDLIN( 175)				_this->set_x(((( (Float)(_hx_tmp) ) - _this->get_width()) / ( (Float)(2) )));
            			}
HXDLIN( 175)			bool _hx_tmp5;
HXDLIN( 175)			if ((axes != 16)) {
HXLINE( 175)				_hx_tmp5 = (axes == 17);
            			}
            			else {
HXLINE( 175)				_hx_tmp5 = true;
            			}
HXDLIN( 175)			if (_hx_tmp5) {
HXLINE( 175)				int _hx_tmp = ::flixel::FlxG_obj::height;
HXDLIN( 175)				_this->set_y(((( (Float)(_hx_tmp) ) - _this->get_height()) / ( (Float)(2) )));
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(KeyBindMenu_obj,textUpdate,(void))

void KeyBindMenu_obj::save(){
            	HX_STACKFRAME(&_hx_pos_b43d8094f4720380_179_save)
HXLINE( 181)		::flixel::FlxG_obj::save->data->__SetField(HX_("upBind",b8,51,92,70),this->keys->__get(2),::hx::paccDynamic);
HXLINE( 182)		::flixel::FlxG_obj::save->data->__SetField(HX_("downBind",3f,f3,fe,75),this->keys->__get(1),::hx::paccDynamic);
HXLINE( 183)		::flixel::FlxG_obj::save->data->__SetField(HX_("leftBind",64,39,12,48),this->keys->__get(0),::hx::paccDynamic);
HXLINE( 184)		::flixel::FlxG_obj::save->data->__SetField(HX_("rightBind",b9,4b,dd,ab),this->keys->__get(3),::hx::paccDynamic);
HXLINE( 186)		::flixel::FlxG_obj::save->flush(null());
HXLINE( 188)		::PlayerSettings_obj::player1->controls->loadKeyBinds();
            	}


HX_DEFINE_DYNAMIC_FUNC0(KeyBindMenu_obj,save,(void))

void KeyBindMenu_obj::reset(){
            	HX_STACKFRAME(&_hx_pos_b43d8094f4720380_192_reset)
HXLINE( 194)		{
HXLINE( 195)			this->keys[0] = this->defaultKeys->__get(0);
HXDLIN( 195)			this->keys[1] = this->defaultKeys->__get(1);
HXDLIN( 195)			this->keys[2] = this->defaultKeys->__get(2);
HXDLIN( 195)			this->keys[3] = this->defaultKeys->__get(3);
HXDLIN( 195)			this->keys[4] = this->defaultKeys->__get(4);
            		}
HXLINE( 197)		this->quit();
            	}


HX_DEFINE_DYNAMIC_FUNC0(KeyBindMenu_obj,reset,(void))

void KeyBindMenu_obj::quit(){
            		HX_BEGIN_LOCAL_FUNC_S1(::hx::LocalFunc,_hx_Closure_0, ::KeyBindMenu,_gthis) HXARGC(1)
            		void _hx_run( ::flixel::tweens::FlxTween flx){
            			HX_STACKFRAME(&_hx_pos_b43d8094f4720380_210_quit)
HXLINE( 210)			_gthis->close();
            		}
            		HX_END_LOCAL_FUNC1((void))

            	HX_STACKFRAME(&_hx_pos_b43d8094f4720380_201_quit)
HXDLIN( 201)		 ::KeyBindMenu _gthis = ::hx::ObjectPtr<OBJ_>(this);
HXLINE( 203)		this->state = HX_("exiting",84,dc,da,24);
HXLINE( 205)		this->save();
HXLINE( 207)		::OptionsMenu_obj::instance->acceptInput = true;
HXLINE( 209)		::flixel::tweens::FlxTween_obj::tween(this->keyTextDisplay, ::Dynamic(::hx::Anon_obj::Create(1)
            			->setFixed(0,HX_("alpha",5e,a7,96,21),0)),1, ::Dynamic(::hx::Anon_obj::Create(1)
            			->setFixed(0,HX_("ease",ee,8b,0c,43),::flixel::tweens::FlxEase_obj::expoInOut_dyn())));
HXLINE( 210)		::flixel::tweens::FlxTween_obj::tween(this->blackBox, ::Dynamic(::hx::Anon_obj::Create(1)
            			->setFixed(0,HX_("alpha",5e,a7,96,21),0)),((Float)1.1), ::Dynamic(::hx::Anon_obj::Create(2)
            			->setFixed(0,HX_("ease",ee,8b,0c,43),::flixel::tweens::FlxEase_obj::expoInOut_dyn())
            			->setFixed(1,HX_("onComplete",f8,d4,7e,5d), ::Dynamic(new _hx_Closure_0(_gthis)))));
HXLINE( 211)		::flixel::tweens::FlxTween_obj::tween(this->infoText, ::Dynamic(::hx::Anon_obj::Create(1)
            			->setFixed(0,HX_("alpha",5e,a7,96,21),0)),1, ::Dynamic(::hx::Anon_obj::Create(1)
            			->setFixed(0,HX_("ease",ee,8b,0c,43),::flixel::tweens::FlxEase_obj::expoInOut_dyn())));
            	}


HX_DEFINE_DYNAMIC_FUNC0(KeyBindMenu_obj,quit,(void))

void KeyBindMenu_obj::addKey(::String r){
            	HX_STACKFRAME(&_hx_pos_b43d8094f4720380_215_addKey)
HXLINE( 217)		bool shouldReturn = true;
HXLINE( 219)		::Array< ::String > notAllowed = ::Array_obj< ::String >::__new(0);
HXLINE( 221)		{
HXLINE( 221)			int _g = 0;
HXDLIN( 221)			::Array< ::String > _g1 = this->blacklist;
HXDLIN( 221)			while((_g < _g1->length)){
HXLINE( 221)				::String x = _g1->__get(_g);
HXDLIN( 221)				_g = (_g + 1);
HXDLIN( 221)				notAllowed->push(x);
            			}
            		}
HXLINE( 223)		::haxe::Log_obj::trace(notAllowed,::hx::SourceInfo(HX_("code/KeyBindMenu.hx",e5,74,e7,40),223,HX_("KeyBindMenu",9b,9e,7a,e2),HX_("addKey",fe,99,02,9f)));
HXLINE( 225)		{
HXLINE( 225)			int _g2 = 0;
HXDLIN( 225)			int _g3 = this->keys->length;
HXDLIN( 225)			while((_g2 < _g3)){
HXLINE( 225)				_g2 = (_g2 + 1);
HXDLIN( 225)				int x = (_g2 - 1);
HXLINE( 227)				::String oK = this->keys->__get(x);
HXLINE( 228)				if ((oK == r)) {
HXLINE( 229)					this->keys[x] = null();
            				}
HXLINE( 230)				if (notAllowed->contains(oK)) {
HXLINE( 231)					return;
            				}
            			}
            		}
HXLINE( 234)		if (shouldReturn) {
HXLINE( 235)			this->keys[this->curSelected] = r;
HXLINE( 236)			 ::flixel::_hx_system::frontEnds::SoundFrontEnd _hx_tmp = ::flixel::FlxG_obj::sound;
HXDLIN( 236)			_hx_tmp->play(::Paths_obj::sound(HX_("scrollMenu",4c,d4,18,06),null()),null(),null(),null(),null(),null());
            		}
            		else {
HXLINE( 239)			this->keys[this->curSelected] = this->tempKey;
HXLINE( 240)			 ::flixel::_hx_system::frontEnds::SoundFrontEnd _hx_tmp = ::flixel::FlxG_obj::sound;
HXDLIN( 240)			_hx_tmp->play(::Paths_obj::sound(HX_("scrollMenu",4c,d4,18,06),null()),null(),null(),null(),null(),null());
HXLINE( 241)			this->keyWarning->set_alpha(( (Float)(1) ));
HXLINE( 242)			this->warningTween->cancel();
HXLINE( 243)			this->warningTween = ::flixel::tweens::FlxTween_obj::tween(this->keyWarning, ::Dynamic(::hx::Anon_obj::Create(1)
            				->setFixed(0,HX_("alpha",5e,a7,96,21),0)),((Float)0.5), ::Dynamic(::hx::Anon_obj::Create(2)
            				->setFixed(0,HX_("startDelay",c1,af,3d,f3),2)
            				->setFixed(1,HX_("ease",ee,8b,0c,43),::flixel::tweens::FlxEase_obj::circOut_dyn())));
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(KeyBindMenu_obj,addKey,(void))

void KeyBindMenu_obj::changeItem(::hx::Null< int >  __o__amount){
            		int _amount = __o__amount.Default(0);
            	HX_STACKFRAME(&_hx_pos_b43d8094f4720380_249_changeItem)
HXLINE( 250)		 ::KeyBindMenu _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 250)		_hx_tmp->curSelected = (_hx_tmp->curSelected + _amount);
HXLINE( 252)		if ((this->curSelected > 3)) {
HXLINE( 253)			this->curSelected = 0;
            		}
HXLINE( 254)		if ((this->curSelected < 0)) {
HXLINE( 255)			this->curSelected = 3;
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(KeyBindMenu_obj,changeItem,(void))


::hx::ObjectPtr< KeyBindMenu_obj > KeyBindMenu_obj::__new( ::Dynamic BGColor) {
	::hx::ObjectPtr< KeyBindMenu_obj > __this = new KeyBindMenu_obj();
	__this->__construct(BGColor);
	return __this;
}

::hx::ObjectPtr< KeyBindMenu_obj > KeyBindMenu_obj::__alloc(::hx::Ctx *_hx_ctx, ::Dynamic BGColor) {
	KeyBindMenu_obj *__this = (KeyBindMenu_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(KeyBindMenu_obj), true, "KeyBindMenu"));
	*(void **)__this = KeyBindMenu_obj::_hx_vtable;
	__this->__construct(BGColor);
	return __this;
}

KeyBindMenu_obj::KeyBindMenu_obj()
{
}

void KeyBindMenu_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(KeyBindMenu);
	HX_MARK_MEMBER_NAME(keyTextDisplay,"keyTextDisplay");
	HX_MARK_MEMBER_NAME(keyWarning,"keyWarning");
	HX_MARK_MEMBER_NAME(warningTween,"warningTween");
	HX_MARK_MEMBER_NAME(keyText,"keyText");
	HX_MARK_MEMBER_NAME(defaultKeys,"defaultKeys");
	HX_MARK_MEMBER_NAME(curSelected,"curSelected");
	HX_MARK_MEMBER_NAME(keys,"keys");
	HX_MARK_MEMBER_NAME(tempKey,"tempKey");
	HX_MARK_MEMBER_NAME(blacklist,"blacklist");
	HX_MARK_MEMBER_NAME(blackBox,"blackBox");
	HX_MARK_MEMBER_NAME(infoText,"infoText");
	HX_MARK_MEMBER_NAME(state,"state");
	 ::flixel::FlxSubState_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void KeyBindMenu_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(keyTextDisplay,"keyTextDisplay");
	HX_VISIT_MEMBER_NAME(keyWarning,"keyWarning");
	HX_VISIT_MEMBER_NAME(warningTween,"warningTween");
	HX_VISIT_MEMBER_NAME(keyText,"keyText");
	HX_VISIT_MEMBER_NAME(defaultKeys,"defaultKeys");
	HX_VISIT_MEMBER_NAME(curSelected,"curSelected");
	HX_VISIT_MEMBER_NAME(keys,"keys");
	HX_VISIT_MEMBER_NAME(tempKey,"tempKey");
	HX_VISIT_MEMBER_NAME(blacklist,"blacklist");
	HX_VISIT_MEMBER_NAME(blackBox,"blackBox");
	HX_VISIT_MEMBER_NAME(infoText,"infoText");
	HX_VISIT_MEMBER_NAME(state,"state");
	 ::flixel::FlxSubState_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val KeyBindMenu_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"keys") ) { return ::hx::Val( keys ); }
		if (HX_FIELD_EQ(inName,"save") ) { return ::hx::Val( save_dyn() ); }
		if (HX_FIELD_EQ(inName,"quit") ) { return ::hx::Val( quit_dyn() ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"state") ) { return ::hx::Val( state ); }
		if (HX_FIELD_EQ(inName,"reset") ) { return ::hx::Val( reset_dyn() ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"create") ) { return ::hx::Val( create_dyn() ); }
		if (HX_FIELD_EQ(inName,"update") ) { return ::hx::Val( update_dyn() ); }
		if (HX_FIELD_EQ(inName,"addKey") ) { return ::hx::Val( addKey_dyn() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"keyText") ) { return ::hx::Val( keyText ); }
		if (HX_FIELD_EQ(inName,"tempKey") ) { return ::hx::Val( tempKey ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"blackBox") ) { return ::hx::Val( blackBox ); }
		if (HX_FIELD_EQ(inName,"infoText") ) { return ::hx::Val( infoText ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"blacklist") ) { return ::hx::Val( blacklist ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"keyWarning") ) { return ::hx::Val( keyWarning ); }
		if (HX_FIELD_EQ(inName,"textUpdate") ) { return ::hx::Val( textUpdate_dyn() ); }
		if (HX_FIELD_EQ(inName,"changeItem") ) { return ::hx::Val( changeItem_dyn() ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"defaultKeys") ) { return ::hx::Val( defaultKeys ); }
		if (HX_FIELD_EQ(inName,"curSelected") ) { return ::hx::Val( curSelected ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"warningTween") ) { return ::hx::Val( warningTween ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"keyTextDisplay") ) { return ::hx::Val( keyTextDisplay ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val KeyBindMenu_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"keys") ) { keys=inValue.Cast< ::Array< ::String > >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"state") ) { state=inValue.Cast< ::String >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"keyText") ) { keyText=inValue.Cast< ::Array< ::String > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"tempKey") ) { tempKey=inValue.Cast< ::String >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"blackBox") ) { blackBox=inValue.Cast<  ::flixel::FlxSprite >(); return inValue; }
		if (HX_FIELD_EQ(inName,"infoText") ) { infoText=inValue.Cast<  ::flixel::text::FlxText >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"blacklist") ) { blacklist=inValue.Cast< ::Array< ::String > >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"keyWarning") ) { keyWarning=inValue.Cast<  ::flixel::text::FlxText >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"defaultKeys") ) { defaultKeys=inValue.Cast< ::Array< ::String > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"curSelected") ) { curSelected=inValue.Cast< int >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"warningTween") ) { warningTween=inValue.Cast<  ::flixel::tweens::FlxTween >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"keyTextDisplay") ) { keyTextDisplay=inValue.Cast<  ::flixel::text::FlxText >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void KeyBindMenu_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("keyTextDisplay",b6,e9,da,71));
	outFields->push(HX_("keyWarning",7d,7a,53,78));
	outFields->push(HX_("warningTween",6f,32,71,d8));
	outFields->push(HX_("keyText",ec,3d,d3,a6));
	outFields->push(HX_("defaultKeys",55,db,c5,18));
	outFields->push(HX_("curSelected",fb,eb,ab,32));
	outFields->push(HX_("keys",f4,e1,06,47));
	outFields->push(HX_("tempKey",eb,a2,b3,46));
	outFields->push(HX_("blacklist",9d,3d,3c,1c));
	outFields->push(HX_("blackBox",8c,81,93,80));
	outFields->push(HX_("infoText",3b,00,9e,3d));
	outFields->push(HX_("state",11,76,0b,84));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo KeyBindMenu_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::flixel::text::FlxText */ ,(int)offsetof(KeyBindMenu_obj,keyTextDisplay),HX_("keyTextDisplay",b6,e9,da,71)},
	{::hx::fsObject /*  ::flixel::text::FlxText */ ,(int)offsetof(KeyBindMenu_obj,keyWarning),HX_("keyWarning",7d,7a,53,78)},
	{::hx::fsObject /*  ::flixel::tweens::FlxTween */ ,(int)offsetof(KeyBindMenu_obj,warningTween),HX_("warningTween",6f,32,71,d8)},
	{::hx::fsObject /* ::Array< ::String > */ ,(int)offsetof(KeyBindMenu_obj,keyText),HX_("keyText",ec,3d,d3,a6)},
	{::hx::fsObject /* ::Array< ::String > */ ,(int)offsetof(KeyBindMenu_obj,defaultKeys),HX_("defaultKeys",55,db,c5,18)},
	{::hx::fsInt,(int)offsetof(KeyBindMenu_obj,curSelected),HX_("curSelected",fb,eb,ab,32)},
	{::hx::fsObject /* ::Array< ::String > */ ,(int)offsetof(KeyBindMenu_obj,keys),HX_("keys",f4,e1,06,47)},
	{::hx::fsString,(int)offsetof(KeyBindMenu_obj,tempKey),HX_("tempKey",eb,a2,b3,46)},
	{::hx::fsObject /* ::Array< ::String > */ ,(int)offsetof(KeyBindMenu_obj,blacklist),HX_("blacklist",9d,3d,3c,1c)},
	{::hx::fsObject /*  ::flixel::FlxSprite */ ,(int)offsetof(KeyBindMenu_obj,blackBox),HX_("blackBox",8c,81,93,80)},
	{::hx::fsObject /*  ::flixel::text::FlxText */ ,(int)offsetof(KeyBindMenu_obj,infoText),HX_("infoText",3b,00,9e,3d)},
	{::hx::fsString,(int)offsetof(KeyBindMenu_obj,state),HX_("state",11,76,0b,84)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *KeyBindMenu_obj_sStaticStorageInfo = 0;
#endif

static ::String KeyBindMenu_obj_sMemberFields[] = {
	HX_("keyTextDisplay",b6,e9,da,71),
	HX_("keyWarning",7d,7a,53,78),
	HX_("warningTween",6f,32,71,d8),
	HX_("keyText",ec,3d,d3,a6),
	HX_("defaultKeys",55,db,c5,18),
	HX_("curSelected",fb,eb,ab,32),
	HX_("keys",f4,e1,06,47),
	HX_("tempKey",eb,a2,b3,46),
	HX_("blacklist",9d,3d,3c,1c),
	HX_("blackBox",8c,81,93,80),
	HX_("infoText",3b,00,9e,3d),
	HX_("state",11,76,0b,84),
	HX_("create",fc,66,0f,7c),
	HX_("update",09,86,05,87),
	HX_("textUpdate",96,06,f6,bd),
	HX_("save",3d,8b,4d,4c),
	HX_("reset",cf,49,c8,e6),
	HX_("quit",cf,3f,0a,4b),
	HX_("addKey",fe,99,02,9f),
	HX_("changeItem",a3,fa,08,20),
	::String(null()) };

::hx::Class KeyBindMenu_obj::__mClass;

void KeyBindMenu_obj::__register()
{
	KeyBindMenu_obj _hx_dummy;
	KeyBindMenu_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("KeyBindMenu",9b,9e,7a,e2);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(KeyBindMenu_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< KeyBindMenu_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = KeyBindMenu_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = KeyBindMenu_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

