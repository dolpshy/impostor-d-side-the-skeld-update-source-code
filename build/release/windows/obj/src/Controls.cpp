#include <hxcpp.h>

#ifndef INCLUDED_Control
#include <Control.h>
#endif
#ifndef INCLUDED_Controls
#include <Controls.h>
#endif
#ifndef INCLUDED_Device
#include <Device.h>
#endif
#ifndef INCLUDED_KeyBinds
#include <KeyBinds.h>
#endif
#ifndef INCLUDED_KeyboardScheme
#include <KeyboardScheme.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_Type
#include <Type.h>
#endif
#ifndef INCLUDED_flixel_FlxG
#include <flixel/FlxG.h>
#endif
#ifndef INCLUDED_flixel_input_IFlxInputManager
#include <flixel/input/IFlxInputManager.h>
#endif
#ifndef INCLUDED_flixel_input_actions_FlxAction
#include <flixel/input/actions/FlxAction.h>
#endif
#ifndef INCLUDED_flixel_input_actions_FlxActionAnalog
#include <flixel/input/actions/FlxActionAnalog.h>
#endif
#ifndef INCLUDED_flixel_input_actions_FlxActionDigital
#include <flixel/input/actions/FlxActionDigital.h>
#endif
#ifndef INCLUDED_flixel_input_actions_FlxActionInput
#include <flixel/input/actions/FlxActionInput.h>
#endif
#ifndef INCLUDED_flixel_input_actions_FlxActionInputDigital
#include <flixel/input/actions/FlxActionInputDigital.h>
#endif
#ifndef INCLUDED_flixel_input_actions_FlxActionManager
#include <flixel/input/actions/FlxActionManager.h>
#endif
#ifndef INCLUDED_flixel_input_actions_FlxActionSet
#include <flixel/input/actions/FlxActionSet.h>
#endif
#ifndef INCLUDED_flixel_input_actions_FlxInputDevice
#include <flixel/input/actions/FlxInputDevice.h>
#endif
#ifndef INCLUDED_flixel_input_gamepad__FlxGamepadInputID_FlxGamepadInputID_Impl_
#include <flixel/input/gamepad/_FlxGamepadInputID/FlxGamepadInputID_Impl_.h>
#endif
#ifndef INCLUDED_flixel_input_keyboard__FlxKey_FlxKey_Impl_
#include <flixel/input/keyboard/_FlxKey/FlxKey_Impl_.h>
#endif
#ifndef INCLUDED_flixel_system_frontEnds_InputFrontEnd
#include <flixel/system/frontEnds/InputFrontEnd.h>
#endif
#ifndef INCLUDED_flixel_util_FlxSave
#include <flixel/util/FlxSave.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_haxe_Exception
#include <haxe/Exception.h>
#endif
#ifndef INCLUDED_haxe_IMap
#include <haxe/IMap.h>
#endif
#ifndef INCLUDED_haxe_ds_BalancedTree
#include <haxe/ds/BalancedTree.h>
#endif
#ifndef INCLUDED_haxe_ds_EnumValueMap
#include <haxe/ds/EnumValueMap.h>
#endif
#ifndef INCLUDED_haxe_ds_IntMap
#include <haxe/ds/IntMap.h>
#endif
#ifndef INCLUDED_haxe_ds_StringMap
#include <haxe/ds/StringMap.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_948b5caa279cd923_95_new,"Controls","new",0x4f8de688,"Controls.new","Controls.hx",95,0x0ab041e8)
HX_LOCAL_STACK_FRAME(_hx_pos_948b5caa279cd923_127_get_UP,"Controls","get_UP",0xb958147c,"Controls.get_UP","Controls.hx",127,0x0ab041e8)
HX_LOCAL_STACK_FRAME(_hx_pos_948b5caa279cd923_132_get_LEFT,"Controls","get_LEFT",0xc8e82468,"Controls.get_LEFT","Controls.hx",132,0x0ab041e8)
HX_LOCAL_STACK_FRAME(_hx_pos_948b5caa279cd923_137_get_RIGHT,"Controls","get_RIGHT",0x7944c43b,"Controls.get_RIGHT","Controls.hx",137,0x0ab041e8)
HX_LOCAL_STACK_FRAME(_hx_pos_948b5caa279cd923_142_get_DOWN,"Controls","get_DOWN",0xc3a614c3,"Controls.get_DOWN","Controls.hx",142,0x0ab041e8)
HX_LOCAL_STACK_FRAME(_hx_pos_948b5caa279cd923_147_get_UP_P,"Controls","get_UP_P",0xcee37e8d,"Controls.get_UP_P","Controls.hx",147,0x0ab041e8)
HX_LOCAL_STACK_FRAME(_hx_pos_948b5caa279cd923_152_get_LEFT_P,"Controls","get_LEFT_P",0xee886179,"Controls.get_LEFT_P","Controls.hx",152,0x0ab041e8)
HX_LOCAL_STACK_FRAME(_hx_pos_948b5caa279cd923_157_get_RIGHT_P,"Controls","get_RIGHT_P",0xe72adc0c,"Controls.get_RIGHT_P","Controls.hx",157,0x0ab041e8)
HX_LOCAL_STACK_FRAME(_hx_pos_948b5caa279cd923_162_get_DOWN_P,"Controls","get_DOWN_P",0x88e75e94,"Controls.get_DOWN_P","Controls.hx",162,0x0ab041e8)
HX_LOCAL_STACK_FRAME(_hx_pos_948b5caa279cd923_167_get_UP_R,"Controls","get_UP_R",0xcee37e8f,"Controls.get_UP_R","Controls.hx",167,0x0ab041e8)
HX_LOCAL_STACK_FRAME(_hx_pos_948b5caa279cd923_172_get_LEFT_R,"Controls","get_LEFT_R",0xee88617b,"Controls.get_LEFT_R","Controls.hx",172,0x0ab041e8)
HX_LOCAL_STACK_FRAME(_hx_pos_948b5caa279cd923_177_get_RIGHT_R,"Controls","get_RIGHT_R",0xe72adc0e,"Controls.get_RIGHT_R","Controls.hx",177,0x0ab041e8)
HX_LOCAL_STACK_FRAME(_hx_pos_948b5caa279cd923_182_get_DOWN_R,"Controls","get_DOWN_R",0x88e75e96,"Controls.get_DOWN_R","Controls.hx",182,0x0ab041e8)
HX_LOCAL_STACK_FRAME(_hx_pos_948b5caa279cd923_187_get_ACCEPT,"Controls","get_ACCEPT",0x5fc72da9,"Controls.get_ACCEPT","Controls.hx",187,0x0ab041e8)
HX_LOCAL_STACK_FRAME(_hx_pos_948b5caa279cd923_192_get_BACK,"Controls","get_BACK",0xc248f688,"Controls.get_BACK","Controls.hx",192,0x0ab041e8)
HX_LOCAL_STACK_FRAME(_hx_pos_948b5caa279cd923_197_get_PAUSE,"Controls","get_PAUSE",0x4d388f55,"Controls.get_PAUSE","Controls.hx",197,0x0ab041e8)
HX_LOCAL_STACK_FRAME(_hx_pos_948b5caa279cd923_202_get_RESET,"Controls","get_RESET",0x76a9022e,"Controls.get_RESET","Controls.hx",202,0x0ab041e8)
HX_LOCAL_STACK_FRAME(_hx_pos_948b5caa279cd923_207_get_CHEAT,"Controls","get_CHEAT",0xd5974f72,"Controls.get_CHEAT","Controls.hx",207,0x0ab041e8)
HX_LOCAL_STACK_FRAME(_hx_pos_948b5caa279cd923_271_update,"Controls","update",0x9d2db8e1,"Controls.update","Controls.hx",271,0x0ab041e8)
HX_LOCAL_STACK_FRAME(_hx_pos_948b5caa279cd923_281_checkByName,"Controls","checkByName",0xbe587cd2,"Controls.checkByName","Controls.hx",281,0x0ab041e8)
HX_LOCAL_STACK_FRAME(_hx_pos_948b5caa279cd923_285_getDialogueName,"Controls","getDialogueName",0xe1263f61,"Controls.getDialogueName","Controls.hx",285,0x0ab041e8)
HX_LOCAL_STACK_FRAME(_hx_pos_948b5caa279cd923_297_getDialogueNameFromToken,"Controls","getDialogueNameFromToken",0x6458998e,"Controls.getDialogueNameFromToken","Controls.hx",297,0x0ab041e8)
HX_LOCAL_STACK_FRAME(_hx_pos_948b5caa279cd923_302_getActionFromControl,"Controls","getActionFromControl",0xa2e9ae5f,"Controls.getActionFromControl","Controls.hx",302,0x0ab041e8)
HX_LOCAL_STACK_FRAME(_hx_pos_948b5caa279cd923_330_forEachBound,"Controls","forEachBound",0x9a98930c,"Controls.forEachBound","Controls.hx",330,0x0ab041e8)
HX_LOCAL_STACK_FRAME(_hx_pos_948b5caa279cd923_362_replaceBinding,"Controls","replaceBinding",0x45096449,"Controls.replaceBinding","Controls.hx",362,0x0ab041e8)
HX_LOCAL_STACK_FRAME(_hx_pos_948b5caa279cd923_383_copyFrom,"Controls","copyFrom",0xdf1da497,"Controls.copyFrom","Controls.hx",383,0x0ab041e8)
HX_LOCAL_STACK_FRAME(_hx_pos_948b5caa279cd923_430_copyTo,"Controls","copyTo",0xdf5b4f68,"Controls.copyTo","Controls.hx",430,0x0ab041e8)
HX_LOCAL_STACK_FRAME(_hx_pos_948b5caa279cd923_435_mergeKeyboardScheme,"Controls","mergeKeyboardScheme",0x61e2372c,"Controls.mergeKeyboardScheme","Controls.hx",435,0x0ab041e8)
HX_LOCAL_STACK_FRAME(_hx_pos_948b5caa279cd923_454_bindKeys,"Controls","bindKeys",0xcb8dbf29,"Controls.bindKeys","Controls.hx",454,0x0ab041e8)
HX_LOCAL_STACK_FRAME(_hx_pos_948b5caa279cd923_467_unbindKeys,"Controls","unbindKeys",0xec4b8c82,"Controls.unbindKeys","Controls.hx",467,0x0ab041e8)
HX_LOCAL_STACK_FRAME(_hx_pos_948b5caa279cd923_493_setKeyboardScheme,"Controls","setKeyboardScheme",0x039bdb96,"Controls.setKeyboardScheme","Controls.hx",493,0x0ab041e8)
HX_LOCAL_STACK_FRAME(_hx_pos_948b5caa279cd923_569_loadKeyBinds,"Controls","loadKeyBinds",0x1c488715,"Controls.loadKeyBinds","Controls.hx",569,0x0ab041e8)
static const int _hx_array_data_116e4296_189[] = {
	(int)90,(int)32,(int)13,
};
static const int _hx_array_data_116e4296_190[] = {
	(int)8,(int)27,
};
static const int _hx_array_data_116e4296_191[] = {
	(int)80,(int)13,(int)27,
};
HX_LOCAL_STACK_FRAME(_hx_pos_948b5caa279cd923_588_removeKeyboard,"Controls","removeKeyboard",0xd2dac3e3,"Controls.removeKeyboard","Controls.hx",588,0x0ab041e8)
HX_LOCAL_STACK_FRAME(_hx_pos_948b5caa279cd923_601_addGamepad,"Controls","addGamepad",0xa2c68b58,"Controls.addGamepad","Controls.hx",601,0x0ab041e8)
HX_LOCAL_STACK_FRAME(_hx_pos_948b5caa279cd923_614_addGamepadLiteral,"Controls","addGamepadLiteral",0x50b4e0f7,"Controls.addGamepadLiteral","Controls.hx",614,0x0ab041e8)
HX_LOCAL_STACK_FRAME(_hx_pos_948b5caa279cd923_627_removeGamepad,"Controls","removeGamepad",0xfdf294e5,"Controls.removeGamepad","Controls.hx",627,0x0ab041e8)
HX_LOCAL_STACK_FRAME(_hx_pos_948b5caa279cd923_645_addDefaultGamepad,"Controls","addDefaultGamepad",0xaa5e6409,"Controls.addDefaultGamepad","Controls.hx",645,0x0ab041e8)
static const int _hx_array_data_116e4296_255[] = {
	(int)0,
};
static const int _hx_array_data_116e4296_256[] = {
	(int)1,
};
static const int _hx_array_data_116e4296_257[] = {
	(int)11,(int)34,
};
static const int _hx_array_data_116e4296_258[] = {
	(int)12,(int)36,
};
static const int _hx_array_data_116e4296_259[] = {
	(int)13,(int)37,
};
static const int _hx_array_data_116e4296_260[] = {
	(int)14,(int)35,
};
static const int _hx_array_data_116e4296_261[] = {
	(int)7,
};
static const int _hx_array_data_116e4296_262[] = {
	(int)3,
};
HX_LOCAL_STACK_FRAME(_hx_pos_948b5caa279cd923_679_bindButtons,"Controls","bindButtons",0x94dee42c,"Controls.bindButtons","Controls.hx",679,0x0ab041e8)
HX_LOCAL_STACK_FRAME(_hx_pos_948b5caa279cd923_692_unbindButtons,"Controls","unbindButtons",0x83d33473,"Controls.unbindButtons","Controls.hx",692,0x0ab041e8)
HX_LOCAL_STACK_FRAME(_hx_pos_948b5caa279cd923_716_getInputsFor,"Controls","getInputsFor",0xa3571ac2,"Controls.getInputsFor","Controls.hx",716,0x0ab041e8)
HX_LOCAL_STACK_FRAME(_hx_pos_948b5caa279cd923_740_removeDevice,"Controls","removeDevice",0x4c1b5cd2,"Controls.removeDevice","Controls.hx",740,0x0ab041e8)
HX_LOCAL_STACK_FRAME(_hx_pos_948b5caa279cd923_317_init,"Controls","init",0x495487e8,"Controls.init","Controls.hx",317,0x0ab041e8)
HX_LOCAL_STACK_FRAME(_hx_pos_948b5caa279cd923_475_addKeys,"Controls","addKeys",0xd0486edd,"Controls.addKeys","Controls.hx",475,0x0ab041e8)
HX_LOCAL_STACK_FRAME(_hx_pos_948b5caa279cd923_480_removeKeys,"Controls","removeKeys",0x75dc9b30,"Controls.removeKeys","Controls.hx",480,0x0ab041e8)
HX_LOCAL_STACK_FRAME(_hx_pos_948b5caa279cd923_700_addButtons,"Controls","addButtons",0xe3b5fcf8,"Controls.addButtons","Controls.hx",700,0x0ab041e8)
HX_LOCAL_STACK_FRAME(_hx_pos_948b5caa279cd923_705_removeButtons,"Controls","removeButtons",0x3ee20685,"Controls.removeButtons","Controls.hx",705,0x0ab041e8)
HX_LOCAL_STACK_FRAME(_hx_pos_948b5caa279cd923_751_isDevice,"Controls","isDevice",0xe09e10f8,"Controls.isDevice","Controls.hx",751,0x0ab041e8)
HX_LOCAL_STACK_FRAME(_hx_pos_948b5caa279cd923_760_isGamepad,"Controls","isGamepad",0x5bcd81ff,"Controls.isGamepad","Controls.hx",760,0x0ab041e8)

void Controls_obj::__construct(::String name, ::KeyboardScheme __o_scheme){
            		 ::KeyboardScheme scheme = __o_scheme;
            		if (::hx::IsNull(__o_scheme)) scheme = ::KeyboardScheme_obj::None_dyn();
            	HX_GC_STACKFRAME(&_hx_pos_948b5caa279cd923_95_new)
HXLINE( 122)		this->keyboardScheme = ::KeyboardScheme_obj::None_dyn();
HXLINE( 121)		this->gamepadsAdded = ::Array_obj< int >::__new(0);
HXLINE( 116)		this->byName =  ::haxe::ds::StringMap_obj::__alloc( HX_CTX );
HXLINE( 113)		this->_cheat =  ::flixel::input::actions::FlxActionDigital_obj::__alloc( HX_CTX ,HX_("cheat",13,97,b6,45),null());
HXLINE( 112)		this->_reset =  ::flixel::input::actions::FlxActionDigital_obj::__alloc( HX_CTX ,HX_("reset",cf,49,c8,e6),null());
HXLINE( 111)		this->_pause =  ::flixel::input::actions::FlxActionDigital_obj::__alloc( HX_CTX ,HX_("pause",f6,d6,57,bd),null());
HXLINE( 110)		this->_back =  ::flixel::input::actions::FlxActionDigital_obj::__alloc( HX_CTX ,HX_("back",27,da,10,41),null());
HXLINE( 109)		this->_accept =  ::flixel::input::actions::FlxActionDigital_obj::__alloc( HX_CTX ,HX_("accept",08,93,06,0b),null());
HXLINE( 108)		this->_downR =  ::flixel::input::actions::FlxActionDigital_obj::__alloc( HX_CTX ,HX_("down-release",9c,bf,5b,fc),null());
HXLINE( 107)		this->_rightR =  ::flixel::input::actions::FlxActionDigital_obj::__alloc( HX_CTX ,HX_("right-release",16,dd,28,fb),null());
HXLINE( 106)		this->_leftR =  ::flixel::input::actions::FlxActionDigital_obj::__alloc( HX_CTX ,HX_("left-release",41,7c,5d,2e),null());
HXLINE( 105)		this->_upR =  ::flixel::input::actions::FlxActionDigital_obj::__alloc( HX_CTX ,HX_("up-release",95,4e,72,92),null());
HXLINE( 104)		this->_downP =  ::flixel::input::actions::FlxActionDigital_obj::__alloc( HX_CTX ,HX_("down-press",18,fe,06,cf),null());
HXLINE( 103)		this->_rightP =  ::flixel::input::actions::FlxActionDigital_obj::__alloc( HX_CTX ,HX_("right-press",12,e9,87,fb),null());
HXLINE( 102)		this->_leftP =  ::flixel::input::actions::FlxActionDigital_obj::__alloc( HX_CTX ,HX_("left-press",7d,d7,13,c1),null());
HXLINE( 101)		this->_upP =  ::flixel::input::actions::FlxActionDigital_obj::__alloc( HX_CTX ,HX_("up-press",d1,ac,09,1c),null());
HXLINE( 100)		this->_down =  ::flixel::input::actions::FlxActionDigital_obj::__alloc( HX_CTX ,HX_("down",62,f8,6d,42),null());
HXLINE(  99)		this->_right =  ::flixel::input::actions::FlxActionDigital_obj::__alloc( HX_CTX ,HX_("right",dc,0b,64,e9),null());
HXLINE(  98)		this->_left =  ::flixel::input::actions::FlxActionDigital_obj::__alloc( HX_CTX ,HX_("left",07,08,b0,47),null());
HXLINE(  97)		this->_up =  ::flixel::input::actions::FlxActionDigital_obj::__alloc( HX_CTX ,HX_("up",5b,66,00,00),null());
HXLINE( 212)		super::__construct(name,null(),null());
HXLINE( 214)		this->add(this->_up);
HXLINE( 215)		this->add(this->_left);
HXLINE( 216)		this->add(this->_right);
HXLINE( 217)		this->add(this->_down);
HXLINE( 218)		this->add(this->_upP);
HXLINE( 219)		this->add(this->_leftP);
HXLINE( 220)		this->add(this->_rightP);
HXLINE( 221)		this->add(this->_downP);
HXLINE( 222)		this->add(this->_upR);
HXLINE( 223)		this->add(this->_leftR);
HXLINE( 224)		this->add(this->_rightR);
HXLINE( 225)		this->add(this->_downR);
HXLINE( 226)		this->add(this->_accept);
HXLINE( 227)		this->add(this->_back);
HXLINE( 228)		this->add(this->_pause);
HXLINE( 229)		this->add(this->_reset);
HXLINE( 230)		this->add(this->_cheat);
HXLINE( 232)		{
HXLINE( 232)			int _g = 0;
HXDLIN( 232)			::Array< ::Dynamic> _g1 = this->digitalActions;
HXDLIN( 232)			while((_g < _g1->length)){
HXLINE( 232)				 ::flixel::input::actions::FlxActionDigital action = _g1->__get(_g).StaticCast<  ::flixel::input::actions::FlxActionDigital >();
HXDLIN( 232)				_g = (_g + 1);
HXLINE( 233)				this->byName->set(action->name,action);
            			}
            		}
HXLINE( 235)		this->setKeyboardScheme(scheme,false);
            	}

Dynamic Controls_obj::__CreateEmpty() { return new Controls_obj; }

void *Controls_obj::_hx_vtable = 0;

Dynamic Controls_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< Controls_obj > _hx_result = new Controls_obj();
	_hx_result->__construct(inArgs[0],inArgs[1]);
	return _hx_result;
}

bool Controls_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x315ddd0d) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x315ddd0d;
	} else {
		return inClassId==(int)0x6cff3556;
	}
}

bool Controls_obj::get_UP(){
            	HX_STACKFRAME(&_hx_pos_948b5caa279cd923_127_get_UP)
HXDLIN( 127)		return this->_up->check();
            	}


HX_DEFINE_DYNAMIC_FUNC0(Controls_obj,get_UP,return )

bool Controls_obj::get_LEFT(){
            	HX_STACKFRAME(&_hx_pos_948b5caa279cd923_132_get_LEFT)
HXDLIN( 132)		return this->_left->check();
            	}


HX_DEFINE_DYNAMIC_FUNC0(Controls_obj,get_LEFT,return )

bool Controls_obj::get_RIGHT(){
            	HX_STACKFRAME(&_hx_pos_948b5caa279cd923_137_get_RIGHT)
HXDLIN( 137)		return this->_right->check();
            	}


HX_DEFINE_DYNAMIC_FUNC0(Controls_obj,get_RIGHT,return )

bool Controls_obj::get_DOWN(){
            	HX_STACKFRAME(&_hx_pos_948b5caa279cd923_142_get_DOWN)
HXDLIN( 142)		return this->_down->check();
            	}


HX_DEFINE_DYNAMIC_FUNC0(Controls_obj,get_DOWN,return )

bool Controls_obj::get_UP_P(){
            	HX_STACKFRAME(&_hx_pos_948b5caa279cd923_147_get_UP_P)
HXDLIN( 147)		return this->_upP->check();
            	}


HX_DEFINE_DYNAMIC_FUNC0(Controls_obj,get_UP_P,return )

bool Controls_obj::get_LEFT_P(){
            	HX_STACKFRAME(&_hx_pos_948b5caa279cd923_152_get_LEFT_P)
HXDLIN( 152)		return this->_leftP->check();
            	}


HX_DEFINE_DYNAMIC_FUNC0(Controls_obj,get_LEFT_P,return )

bool Controls_obj::get_RIGHT_P(){
            	HX_STACKFRAME(&_hx_pos_948b5caa279cd923_157_get_RIGHT_P)
HXDLIN( 157)		return this->_rightP->check();
            	}


HX_DEFINE_DYNAMIC_FUNC0(Controls_obj,get_RIGHT_P,return )

bool Controls_obj::get_DOWN_P(){
            	HX_STACKFRAME(&_hx_pos_948b5caa279cd923_162_get_DOWN_P)
HXDLIN( 162)		return this->_downP->check();
            	}


HX_DEFINE_DYNAMIC_FUNC0(Controls_obj,get_DOWN_P,return )

bool Controls_obj::get_UP_R(){
            	HX_STACKFRAME(&_hx_pos_948b5caa279cd923_167_get_UP_R)
HXDLIN( 167)		return this->_upR->check();
            	}


HX_DEFINE_DYNAMIC_FUNC0(Controls_obj,get_UP_R,return )

bool Controls_obj::get_LEFT_R(){
            	HX_STACKFRAME(&_hx_pos_948b5caa279cd923_172_get_LEFT_R)
HXDLIN( 172)		return this->_leftR->check();
            	}


HX_DEFINE_DYNAMIC_FUNC0(Controls_obj,get_LEFT_R,return )

bool Controls_obj::get_RIGHT_R(){
            	HX_STACKFRAME(&_hx_pos_948b5caa279cd923_177_get_RIGHT_R)
HXDLIN( 177)		return this->_rightR->check();
            	}


HX_DEFINE_DYNAMIC_FUNC0(Controls_obj,get_RIGHT_R,return )

bool Controls_obj::get_DOWN_R(){
            	HX_STACKFRAME(&_hx_pos_948b5caa279cd923_182_get_DOWN_R)
HXDLIN( 182)		return this->_downR->check();
            	}


HX_DEFINE_DYNAMIC_FUNC0(Controls_obj,get_DOWN_R,return )

bool Controls_obj::get_ACCEPT(){
            	HX_STACKFRAME(&_hx_pos_948b5caa279cd923_187_get_ACCEPT)
HXDLIN( 187)		return this->_accept->check();
            	}


HX_DEFINE_DYNAMIC_FUNC0(Controls_obj,get_ACCEPT,return )

bool Controls_obj::get_BACK(){
            	HX_STACKFRAME(&_hx_pos_948b5caa279cd923_192_get_BACK)
HXDLIN( 192)		return this->_back->check();
            	}


HX_DEFINE_DYNAMIC_FUNC0(Controls_obj,get_BACK,return )

bool Controls_obj::get_PAUSE(){
            	HX_STACKFRAME(&_hx_pos_948b5caa279cd923_197_get_PAUSE)
HXDLIN( 197)		return this->_pause->check();
            	}


HX_DEFINE_DYNAMIC_FUNC0(Controls_obj,get_PAUSE,return )

bool Controls_obj::get_RESET(){
            	HX_STACKFRAME(&_hx_pos_948b5caa279cd923_202_get_RESET)
HXDLIN( 202)		return this->_reset->check();
            	}


HX_DEFINE_DYNAMIC_FUNC0(Controls_obj,get_RESET,return )

bool Controls_obj::get_CHEAT(){
            	HX_STACKFRAME(&_hx_pos_948b5caa279cd923_207_get_CHEAT)
HXDLIN( 207)		return this->_cheat->check();
            	}


HX_DEFINE_DYNAMIC_FUNC0(Controls_obj,get_CHEAT,return )

void Controls_obj::update(){
            	HX_STACKFRAME(&_hx_pos_948b5caa279cd923_271_update)
HXDLIN( 271)		this->super::update();
            	}


bool Controls_obj::checkByName(::String name){
            	HX_STACKFRAME(&_hx_pos_948b5caa279cd923_281_checkByName)
HXDLIN( 281)		return ( ( ::flixel::input::actions::FlxActionDigital)(this->byName->get(name)) )->check();
            	}


HX_DEFINE_DYNAMIC_FUNC1(Controls_obj,checkByName,return )

::String Controls_obj::getDialogueName( ::flixel::input::actions::FlxActionDigital action){
            	HX_STACKFRAME(&_hx_pos_948b5caa279cd923_285_getDialogueName)
HXLINE( 286)		 ::flixel::input::actions::FlxActionInput input = action->inputs->__get(0).StaticCast<  ::flixel::input::actions::FlxActionInput >();
HXLINE( 287)		 ::flixel::input::actions::FlxInputDevice _g = input->device;
HXDLIN( 287)		switch((int)(_g->_hx_getIndex())){
            			case (int)3: {
HXLINE( 289)				return ((HX_("[",5b,00,00,00) + ::flixel::input::keyboard::_FlxKey::FlxKey_Impl__obj::toStringMap->get(input->inputID)) + HX_("]",5d,00,00,00));
            			}
            			break;
            			case (int)4: {
HXLINE( 290)				return ((HX_("(",28,00,00,00) + ::flixel::input::gamepad::_FlxGamepadInputID::FlxGamepadInputID_Impl__obj::toStringMap->get(input->inputID)) + HX_(")",29,00,00,00));
            			}
            			break;
            			default:{
HXLINE( 291)				 ::flixel::input::actions::FlxInputDevice device = _g;
HXDLIN( 291)				HX_STACK_DO_THROW(::haxe::Exception_obj::thrown((HX_("unhandled device: ",f9,e1,62,a5) + ::Std_obj::string(device))));
            			}
            		}
HXLINE( 287)		return null();
            	}


HX_DEFINE_DYNAMIC_FUNC1(Controls_obj,getDialogueName,return )

::String Controls_obj::getDialogueNameFromToken(::String token){
            	HX_STACKFRAME(&_hx_pos_948b5caa279cd923_297_getDialogueNameFromToken)
HXDLIN( 297)		::cpp::VirtualArray params = null();
HXDLIN( 297)		return this->getDialogueName(this->getActionFromControl(::Type_obj::createEnum(::hx::ClassOf< ::Control >(),token.toUpperCase(),params)));
            	}


HX_DEFINE_DYNAMIC_FUNC1(Controls_obj,getDialogueNameFromToken,return )

 ::flixel::input::actions::FlxActionDigital Controls_obj::getActionFromControl( ::Control control){
            	HX_STACKFRAME(&_hx_pos_948b5caa279cd923_302_getActionFromControl)
HXDLIN( 302)		switch((int)(control->_hx_getIndex())){
            			case (int)0: {
HXLINE( 304)				return this->_up;
            			}
            			break;
            			case (int)1: {
HXLINE( 306)				return this->_left;
            			}
            			break;
            			case (int)2: {
HXLINE( 307)				return this->_right;
            			}
            			break;
            			case (int)3: {
HXLINE( 305)				return this->_down;
            			}
            			break;
            			case (int)4: {
HXLINE( 311)				return this->_reset;
            			}
            			break;
            			case (int)5: {
HXLINE( 308)				return this->_accept;
            			}
            			break;
            			case (int)6: {
HXLINE( 309)				return this->_back;
            			}
            			break;
            			case (int)7: {
HXLINE( 310)				return this->_pause;
            			}
            			break;
            			case (int)8: {
HXLINE( 312)				return this->_cheat;
            			}
            			break;
            		}
HXLINE( 302)		return null();
            	}


HX_DEFINE_DYNAMIC_FUNC1(Controls_obj,getActionFromControl,return )

void Controls_obj::forEachBound( ::Control control, ::Dynamic func){
            	HX_STACKFRAME(&_hx_pos_948b5caa279cd923_330_forEachBound)
HXDLIN( 330)		switch((int)(control->_hx_getIndex())){
            			case (int)0: {
HXLINE( 333)				func(this->_up,1);
HXLINE( 334)				func(this->_upP,2);
HXLINE( 335)				func(this->_upR,-1);
            			}
            			break;
            			case (int)1: {
HXLINE( 337)				func(this->_left,1);
HXLINE( 338)				func(this->_leftP,2);
HXLINE( 339)				func(this->_leftR,-1);
            			}
            			break;
            			case (int)2: {
HXLINE( 341)				func(this->_right,1);
HXLINE( 342)				func(this->_rightP,2);
HXLINE( 343)				func(this->_rightR,-1);
            			}
            			break;
            			case (int)3: {
HXLINE( 345)				func(this->_down,1);
HXLINE( 346)				func(this->_downP,2);
HXLINE( 347)				func(this->_downR,-1);
            			}
            			break;
            			case (int)4: {
HXLINE( 355)				func(this->_reset,2);
            			}
            			break;
            			case (int)5: {
HXLINE( 349)				func(this->_accept,2);
            			}
            			break;
            			case (int)6: {
HXLINE( 351)				func(this->_back,2);
            			}
            			break;
            			case (int)7: {
HXLINE( 353)				func(this->_pause,2);
            			}
            			break;
            			case (int)8: {
HXLINE( 357)				func(this->_cheat,2);
            			}
            			break;
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC2(Controls_obj,forEachBound,(void))

void Controls_obj::replaceBinding( ::Control control, ::Device device, ::Dynamic toAdd, ::Dynamic toRemove){
            	HX_STACKFRAME(&_hx_pos_948b5caa279cd923_362_replaceBinding)
HXLINE( 363)		if (::hx::IsEq( toAdd,toRemove )) {
HXLINE( 364)			return;
            		}
HXLINE( 366)		switch((int)(device->_hx_getIndex())){
            			case (int)0: {
HXLINE( 369)				if (::hx::IsNotNull( toRemove )) {
HXLINE( 370)					this->unbindKeys(control,::Array_obj< int >::__new(1)->init(0,toRemove));
            				}
HXLINE( 371)				if (::hx::IsNotNull( toAdd )) {
HXLINE( 372)					this->bindKeys(control,::Array_obj< int >::__new(1)->init(0,toAdd));
            				}
            			}
            			break;
            			case (int)1: {
HXLINE( 374)				int id = device->_hx_getInt(0);
HXDLIN( 374)				{
HXLINE( 375)					if (::hx::IsNotNull( toRemove )) {
HXLINE( 376)						this->unbindButtons(control,id,::Array_obj< int >::__new(1)->init(0,toRemove));
            					}
HXLINE( 377)					if (::hx::IsNotNull( toAdd )) {
HXLINE( 378)						this->bindButtons(control,id,::Array_obj< int >::__new(1)->init(0,toAdd));
            					}
            				}
            			}
            			break;
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC4(Controls_obj,replaceBinding,(void))

void Controls_obj::copyFrom( ::Controls controls, ::Device device){
            	HX_STACKFRAME(&_hx_pos_948b5caa279cd923_383_copyFrom)
HXLINE( 385)		{
HXLINE( 385)			::Dynamic map = controls->byName;
HXDLIN( 385)			::Dynamic _g_map = map;
HXDLIN( 385)			 ::Dynamic _g_keys = ::haxe::IMap_obj::keys(map);
HXDLIN( 385)			while(( (bool)(_g_keys->__Field(HX_("hasNext",6d,a5,46,18),::hx::paccDynamic)()) )){
HXLINE( 385)				::String key = ( (::String)(_g_keys->__Field(HX_("next",f3,84,02,49),::hx::paccDynamic)()) );
HXDLIN( 385)				 ::flixel::input::actions::FlxActionDigital _g1_value = ( ( ::flixel::input::actions::FlxActionDigital)(::haxe::IMap_obj::get(_g_map,key)) );
HXDLIN( 385)				::String _g1_key = key;
HXDLIN( 385)				::String name = _g1_key;
HXDLIN( 385)				 ::flixel::input::actions::FlxActionDigital action = _g1_value;
HXLINE( 387)				{
HXLINE( 387)					int _g = 0;
HXDLIN( 387)					::Array< ::Dynamic> _g1 = action->inputs;
HXDLIN( 387)					while((_g < _g1->length)){
HXLINE( 387)						 ::flixel::input::actions::FlxActionInput input = _g1->__get(_g).StaticCast<  ::flixel::input::actions::FlxActionInput >();
HXDLIN( 387)						_g = (_g + 1);
HXLINE( 389)						bool _hx_tmp;
HXDLIN( 389)						if (::hx::IsNotNull( device )) {
HXLINE( 389)							_hx_tmp = ::Controls_obj::isDevice(input,device);
            						}
            						else {
HXLINE( 389)							_hx_tmp = true;
            						}
HXDLIN( 389)						if (_hx_tmp) {
HXLINE( 390)							( ( ::flixel::input::actions::FlxActionDigital)(this->byName->get(name)) )->add(( ( ::flixel::input::actions::FlxActionInputDigital)(input) ));
            						}
            					}
            				}
            			}
            		}
HXLINE( 405)		if (::hx::IsNull( device )) {
HXLINE( 410)			{
HXLINE( 410)				int _g = 0;
HXDLIN( 410)				::Array< int > _g1 = controls->gamepadsAdded;
HXDLIN( 410)				while((_g < _g1->length)){
HXLINE( 410)					int gamepad = _g1->__get(_g);
HXDLIN( 410)					_g = (_g + 1);
HXLINE( 411)					if (!(this->gamepadsAdded->contains(gamepad))) {
HXLINE( 412)						this->gamepadsAdded->push(gamepad);
            					}
            				}
            			}
HXLINE( 419)			this->mergeKeyboardScheme(controls->keyboardScheme);
            		}
            		else {
HXLINE( 405)			switch((int)(device->_hx_getIndex())){
            				case (int)0: {
HXLINE( 424)					this->mergeKeyboardScheme(controls->keyboardScheme);
            				}
            				break;
            				case (int)1: {
HXLINE( 421)					int id = device->_hx_getInt(0);
HXLINE( 422)					this->gamepadsAdded->push(id);
            				}
            				break;
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC2(Controls_obj,copyFrom,(void))

void Controls_obj::copyTo( ::Controls controls, ::Device device){
            	HX_STACKFRAME(&_hx_pos_948b5caa279cd923_430_copyTo)
HXDLIN( 430)		controls->copyFrom(::hx::ObjectPtr<OBJ_>(this),device);
            	}


HX_DEFINE_DYNAMIC_FUNC2(Controls_obj,copyTo,(void))

void Controls_obj::mergeKeyboardScheme( ::KeyboardScheme scheme){
            	HX_STACKFRAME(&_hx_pos_948b5caa279cd923_435_mergeKeyboardScheme)
HXDLIN( 435)		if (::hx::IsPointerNotEq( scheme,::KeyboardScheme_obj::None_dyn() )) {
HXLINE( 437)			if ((this->keyboardScheme->_hx_getIndex() == 2)) {
HXLINE( 440)				this->keyboardScheme = scheme;
            			}
            			else {
HXLINE( 442)				this->keyboardScheme = ::KeyboardScheme_obj::Custom_dyn();
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(Controls_obj,mergeKeyboardScheme,(void))

void Controls_obj::bindKeys( ::Control control,::Array< int > keys){
            	HX_STACKFRAME(&_hx_pos_948b5caa279cd923_454_bindKeys)
HXDLIN( 454)		switch((int)(control->_hx_getIndex())){
            			case (int)0: {
HXDLIN( 454)				{
HXDLIN( 454)					 ::flixel::input::actions::FlxActionDigital action = this->_up;
HXDLIN( 454)					int state = 1;
HXDLIN( 454)					int _g = 0;
HXDLIN( 454)					while((_g < keys->length)){
HXDLIN( 454)						int key = keys->__get(_g);
HXDLIN( 454)						_g = (_g + 1);
HXDLIN( 454)						action->addKey(key,state);
            					}
            				}
HXDLIN( 454)				{
HXDLIN( 454)					 ::flixel::input::actions::FlxActionDigital action1 = this->_upP;
HXDLIN( 454)					int state1 = 2;
HXDLIN( 454)					int _g1 = 0;
HXDLIN( 454)					while((_g1 < keys->length)){
HXDLIN( 454)						int key = keys->__get(_g1);
HXDLIN( 454)						_g1 = (_g1 + 1);
HXDLIN( 454)						action1->addKey(key,state1);
            					}
            				}
HXDLIN( 454)				{
HXDLIN( 454)					 ::flixel::input::actions::FlxActionDigital action2 = this->_upR;
HXDLIN( 454)					int state2 = -1;
HXDLIN( 454)					int _g2 = 0;
HXDLIN( 454)					while((_g2 < keys->length)){
HXDLIN( 454)						int key = keys->__get(_g2);
HXDLIN( 454)						_g2 = (_g2 + 1);
HXDLIN( 454)						action2->addKey(key,state2);
            					}
            				}
            			}
            			break;
            			case (int)1: {
HXDLIN( 454)				{
HXDLIN( 454)					 ::flixel::input::actions::FlxActionDigital action = this->_left;
HXDLIN( 454)					int state = 1;
HXDLIN( 454)					int _g = 0;
HXDLIN( 454)					while((_g < keys->length)){
HXDLIN( 454)						int key = keys->__get(_g);
HXDLIN( 454)						_g = (_g + 1);
HXDLIN( 454)						action->addKey(key,state);
            					}
            				}
HXDLIN( 454)				{
HXDLIN( 454)					 ::flixel::input::actions::FlxActionDigital action1 = this->_leftP;
HXDLIN( 454)					int state1 = 2;
HXDLIN( 454)					int _g1 = 0;
HXDLIN( 454)					while((_g1 < keys->length)){
HXDLIN( 454)						int key = keys->__get(_g1);
HXDLIN( 454)						_g1 = (_g1 + 1);
HXDLIN( 454)						action1->addKey(key,state1);
            					}
            				}
HXDLIN( 454)				{
HXDLIN( 454)					 ::flixel::input::actions::FlxActionDigital action2 = this->_leftR;
HXDLIN( 454)					int state2 = -1;
HXDLIN( 454)					int _g2 = 0;
HXDLIN( 454)					while((_g2 < keys->length)){
HXDLIN( 454)						int key = keys->__get(_g2);
HXDLIN( 454)						_g2 = (_g2 + 1);
HXDLIN( 454)						action2->addKey(key,state2);
            					}
            				}
            			}
            			break;
            			case (int)2: {
HXDLIN( 454)				{
HXDLIN( 454)					 ::flixel::input::actions::FlxActionDigital action = this->_right;
HXDLIN( 454)					int state = 1;
HXDLIN( 454)					int _g = 0;
HXDLIN( 454)					while((_g < keys->length)){
HXDLIN( 454)						int key = keys->__get(_g);
HXDLIN( 454)						_g = (_g + 1);
HXDLIN( 454)						action->addKey(key,state);
            					}
            				}
HXDLIN( 454)				{
HXDLIN( 454)					 ::flixel::input::actions::FlxActionDigital action1 = this->_rightP;
HXDLIN( 454)					int state1 = 2;
HXDLIN( 454)					int _g1 = 0;
HXDLIN( 454)					while((_g1 < keys->length)){
HXDLIN( 454)						int key = keys->__get(_g1);
HXDLIN( 454)						_g1 = (_g1 + 1);
HXDLIN( 454)						action1->addKey(key,state1);
            					}
            				}
HXDLIN( 454)				{
HXDLIN( 454)					 ::flixel::input::actions::FlxActionDigital action2 = this->_rightR;
HXDLIN( 454)					int state2 = -1;
HXDLIN( 454)					int _g2 = 0;
HXDLIN( 454)					while((_g2 < keys->length)){
HXDLIN( 454)						int key = keys->__get(_g2);
HXDLIN( 454)						_g2 = (_g2 + 1);
HXDLIN( 454)						action2->addKey(key,state2);
            					}
            				}
            			}
            			break;
            			case (int)3: {
HXDLIN( 454)				{
HXDLIN( 454)					 ::flixel::input::actions::FlxActionDigital action = this->_down;
HXDLIN( 454)					int state = 1;
HXDLIN( 454)					int _g = 0;
HXDLIN( 454)					while((_g < keys->length)){
HXDLIN( 454)						int key = keys->__get(_g);
HXDLIN( 454)						_g = (_g + 1);
HXDLIN( 454)						action->addKey(key,state);
            					}
            				}
HXDLIN( 454)				{
HXDLIN( 454)					 ::flixel::input::actions::FlxActionDigital action1 = this->_downP;
HXDLIN( 454)					int state1 = 2;
HXDLIN( 454)					int _g1 = 0;
HXDLIN( 454)					while((_g1 < keys->length)){
HXDLIN( 454)						int key = keys->__get(_g1);
HXDLIN( 454)						_g1 = (_g1 + 1);
HXDLIN( 454)						action1->addKey(key,state1);
            					}
            				}
HXDLIN( 454)				{
HXDLIN( 454)					 ::flixel::input::actions::FlxActionDigital action2 = this->_downR;
HXDLIN( 454)					int state2 = -1;
HXDLIN( 454)					int _g2 = 0;
HXDLIN( 454)					while((_g2 < keys->length)){
HXDLIN( 454)						int key = keys->__get(_g2);
HXDLIN( 454)						_g2 = (_g2 + 1);
HXDLIN( 454)						action2->addKey(key,state2);
            					}
            				}
            			}
            			break;
            			case (int)4: {
HXDLIN( 454)				 ::flixel::input::actions::FlxActionDigital action = this->_reset;
HXDLIN( 454)				int state = 2;
HXDLIN( 454)				int _g = 0;
HXDLIN( 454)				while((_g < keys->length)){
HXDLIN( 454)					int key = keys->__get(_g);
HXDLIN( 454)					_g = (_g + 1);
HXDLIN( 454)					action->addKey(key,state);
            				}
            			}
            			break;
            			case (int)5: {
HXDLIN( 454)				 ::flixel::input::actions::FlxActionDigital action = this->_accept;
HXDLIN( 454)				int state = 2;
HXDLIN( 454)				int _g = 0;
HXDLIN( 454)				while((_g < keys->length)){
HXDLIN( 454)					int key = keys->__get(_g);
HXDLIN( 454)					_g = (_g + 1);
HXDLIN( 454)					action->addKey(key,state);
            				}
            			}
            			break;
            			case (int)6: {
HXDLIN( 454)				 ::flixel::input::actions::FlxActionDigital action = this->_back;
HXDLIN( 454)				int state = 2;
HXDLIN( 454)				int _g = 0;
HXDLIN( 454)				while((_g < keys->length)){
HXDLIN( 454)					int key = keys->__get(_g);
HXDLIN( 454)					_g = (_g + 1);
HXDLIN( 454)					action->addKey(key,state);
            				}
            			}
            			break;
            			case (int)7: {
HXDLIN( 454)				 ::flixel::input::actions::FlxActionDigital action = this->_pause;
HXDLIN( 454)				int state = 2;
HXDLIN( 454)				int _g = 0;
HXDLIN( 454)				while((_g < keys->length)){
HXDLIN( 454)					int key = keys->__get(_g);
HXDLIN( 454)					_g = (_g + 1);
HXDLIN( 454)					action->addKey(key,state);
            				}
            			}
            			break;
            			case (int)8: {
HXDLIN( 454)				 ::flixel::input::actions::FlxActionDigital action = this->_cheat;
HXDLIN( 454)				int state = 2;
HXDLIN( 454)				int _g = 0;
HXDLIN( 454)				while((_g < keys->length)){
HXDLIN( 454)					int key = keys->__get(_g);
HXDLIN( 454)					_g = (_g + 1);
HXDLIN( 454)					action->addKey(key,state);
            				}
            			}
            			break;
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC2(Controls_obj,bindKeys,(void))

void Controls_obj::unbindKeys( ::Control control,::Array< int > keys){
            	HX_STACKFRAME(&_hx_pos_948b5caa279cd923_467_unbindKeys)
HXDLIN( 467)		switch((int)(control->_hx_getIndex())){
            			case (int)0: {
HXDLIN( 467)				::Controls_obj::removeKeys(this->_up,keys);
HXDLIN( 467)				::Controls_obj::removeKeys(this->_upP,keys);
HXDLIN( 467)				::Controls_obj::removeKeys(this->_upR,keys);
            			}
            			break;
            			case (int)1: {
HXDLIN( 467)				::Controls_obj::removeKeys(this->_left,keys);
HXDLIN( 467)				::Controls_obj::removeKeys(this->_leftP,keys);
HXDLIN( 467)				::Controls_obj::removeKeys(this->_leftR,keys);
            			}
            			break;
            			case (int)2: {
HXDLIN( 467)				::Controls_obj::removeKeys(this->_right,keys);
HXDLIN( 467)				::Controls_obj::removeKeys(this->_rightP,keys);
HXDLIN( 467)				::Controls_obj::removeKeys(this->_rightR,keys);
            			}
            			break;
            			case (int)3: {
HXDLIN( 467)				::Controls_obj::removeKeys(this->_down,keys);
HXDLIN( 467)				::Controls_obj::removeKeys(this->_downP,keys);
HXDLIN( 467)				::Controls_obj::removeKeys(this->_downR,keys);
            			}
            			break;
            			case (int)4: {
HXDLIN( 467)				::Controls_obj::removeKeys(this->_reset,keys);
            			}
            			break;
            			case (int)5: {
HXDLIN( 467)				::Controls_obj::removeKeys(this->_accept,keys);
            			}
            			break;
            			case (int)6: {
HXDLIN( 467)				::Controls_obj::removeKeys(this->_back,keys);
            			}
            			break;
            			case (int)7: {
HXDLIN( 467)				::Controls_obj::removeKeys(this->_pause,keys);
            			}
            			break;
            			case (int)8: {
HXDLIN( 467)				::Controls_obj::removeKeys(this->_cheat,keys);
            			}
            			break;
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC2(Controls_obj,unbindKeys,(void))

void Controls_obj::setKeyboardScheme( ::KeyboardScheme scheme,::hx::Null< bool >  __o_reset){
            		bool reset = __o_reset.Default(true);
            	HX_STACKFRAME(&_hx_pos_948b5caa279cd923_493_setKeyboardScheme)
HXDLIN( 493)		this->loadKeyBinds();
            	}


HX_DEFINE_DYNAMIC_FUNC2(Controls_obj,setKeyboardScheme,(void))

void Controls_obj::loadKeyBinds(){
            	HX_STACKFRAME(&_hx_pos_948b5caa279cd923_569_loadKeyBinds)
HXLINE( 573)		this->removeKeyboard();
HXLINE( 574)		::KeyBinds_obj::keyCheck();
HXLINE( 576)		{
HXLINE( 576)			::String s = ( (::String)(::flixel::FlxG_obj::save->data->__Field(HX_("upBind",b8,51,92,70),::hx::paccDynamic)) );
HXDLIN( 576)			s = s.toUpperCase();
HXDLIN( 576)			int keys;
HXDLIN( 576)			if (::flixel::input::keyboard::_FlxKey::FlxKey_Impl__obj::fromStringMap->exists(s)) {
HXLINE( 576)				keys = ::flixel::input::keyboard::_FlxKey::FlxKey_Impl__obj::fromStringMap->get_int(s);
            			}
            			else {
HXLINE( 576)				keys = -1;
            			}
HXDLIN( 576)			::Array< int > keys1 = ::Array_obj< int >::__new(2)->init(0,keys)->init(1,38);
HXDLIN( 576)			switch((int)(::Control_obj::UP_dyn()->_hx_getIndex())){
            				case (int)0: {
HXLINE( 576)					{
HXLINE( 576)						 ::flixel::input::actions::FlxActionDigital action = this->_up;
HXDLIN( 576)						int state = 1;
HXDLIN( 576)						int _g = 0;
HXDLIN( 576)						while((_g < keys1->length)){
HXLINE( 576)							int key = keys1->__get(_g);
HXDLIN( 576)							_g = (_g + 1);
HXDLIN( 576)							action->addKey(key,state);
            						}
            					}
HXDLIN( 576)					{
HXLINE( 576)						 ::flixel::input::actions::FlxActionDigital action1 = this->_upP;
HXDLIN( 576)						int state1 = 2;
HXDLIN( 576)						int _g1 = 0;
HXDLIN( 576)						while((_g1 < keys1->length)){
HXLINE( 576)							int key = keys1->__get(_g1);
HXDLIN( 576)							_g1 = (_g1 + 1);
HXDLIN( 576)							action1->addKey(key,state1);
            						}
            					}
HXDLIN( 576)					{
HXLINE( 576)						 ::flixel::input::actions::FlxActionDigital action2 = this->_upR;
HXDLIN( 576)						int state2 = -1;
HXDLIN( 576)						int _g2 = 0;
HXDLIN( 576)						while((_g2 < keys1->length)){
HXLINE( 576)							int key = keys1->__get(_g2);
HXDLIN( 576)							_g2 = (_g2 + 1);
HXDLIN( 576)							action2->addKey(key,state2);
            						}
            					}
            				}
            				break;
            				case (int)1: {
HXLINE( 576)					{
HXLINE( 576)						 ::flixel::input::actions::FlxActionDigital action = this->_left;
HXDLIN( 576)						int state = 1;
HXDLIN( 576)						int _g = 0;
HXDLIN( 576)						while((_g < keys1->length)){
HXLINE( 576)							int key = keys1->__get(_g);
HXDLIN( 576)							_g = (_g + 1);
HXDLIN( 576)							action->addKey(key,state);
            						}
            					}
HXDLIN( 576)					{
HXLINE( 576)						 ::flixel::input::actions::FlxActionDigital action1 = this->_leftP;
HXDLIN( 576)						int state1 = 2;
HXDLIN( 576)						int _g1 = 0;
HXDLIN( 576)						while((_g1 < keys1->length)){
HXLINE( 576)							int key = keys1->__get(_g1);
HXDLIN( 576)							_g1 = (_g1 + 1);
HXDLIN( 576)							action1->addKey(key,state1);
            						}
            					}
HXDLIN( 576)					{
HXLINE( 576)						 ::flixel::input::actions::FlxActionDigital action2 = this->_leftR;
HXDLIN( 576)						int state2 = -1;
HXDLIN( 576)						int _g2 = 0;
HXDLIN( 576)						while((_g2 < keys1->length)){
HXLINE( 576)							int key = keys1->__get(_g2);
HXDLIN( 576)							_g2 = (_g2 + 1);
HXDLIN( 576)							action2->addKey(key,state2);
            						}
            					}
            				}
            				break;
            				case (int)2: {
HXLINE( 576)					{
HXLINE( 576)						 ::flixel::input::actions::FlxActionDigital action = this->_right;
HXDLIN( 576)						int state = 1;
HXDLIN( 576)						int _g = 0;
HXDLIN( 576)						while((_g < keys1->length)){
HXLINE( 576)							int key = keys1->__get(_g);
HXDLIN( 576)							_g = (_g + 1);
HXDLIN( 576)							action->addKey(key,state);
            						}
            					}
HXDLIN( 576)					{
HXLINE( 576)						 ::flixel::input::actions::FlxActionDigital action1 = this->_rightP;
HXDLIN( 576)						int state1 = 2;
HXDLIN( 576)						int _g1 = 0;
HXDLIN( 576)						while((_g1 < keys1->length)){
HXLINE( 576)							int key = keys1->__get(_g1);
HXDLIN( 576)							_g1 = (_g1 + 1);
HXDLIN( 576)							action1->addKey(key,state1);
            						}
            					}
HXDLIN( 576)					{
HXLINE( 576)						 ::flixel::input::actions::FlxActionDigital action2 = this->_rightR;
HXDLIN( 576)						int state2 = -1;
HXDLIN( 576)						int _g2 = 0;
HXDLIN( 576)						while((_g2 < keys1->length)){
HXLINE( 576)							int key = keys1->__get(_g2);
HXDLIN( 576)							_g2 = (_g2 + 1);
HXDLIN( 576)							action2->addKey(key,state2);
            						}
            					}
            				}
            				break;
            				case (int)3: {
HXLINE( 576)					{
HXLINE( 576)						 ::flixel::input::actions::FlxActionDigital action = this->_down;
HXDLIN( 576)						int state = 1;
HXDLIN( 576)						int _g = 0;
HXDLIN( 576)						while((_g < keys1->length)){
HXLINE( 576)							int key = keys1->__get(_g);
HXDLIN( 576)							_g = (_g + 1);
HXDLIN( 576)							action->addKey(key,state);
            						}
            					}
HXDLIN( 576)					{
HXLINE( 576)						 ::flixel::input::actions::FlxActionDigital action1 = this->_downP;
HXDLIN( 576)						int state1 = 2;
HXDLIN( 576)						int _g1 = 0;
HXDLIN( 576)						while((_g1 < keys1->length)){
HXLINE( 576)							int key = keys1->__get(_g1);
HXDLIN( 576)							_g1 = (_g1 + 1);
HXDLIN( 576)							action1->addKey(key,state1);
            						}
            					}
HXDLIN( 576)					{
HXLINE( 576)						 ::flixel::input::actions::FlxActionDigital action2 = this->_downR;
HXDLIN( 576)						int state2 = -1;
HXDLIN( 576)						int _g2 = 0;
HXDLIN( 576)						while((_g2 < keys1->length)){
HXLINE( 576)							int key = keys1->__get(_g2);
HXDLIN( 576)							_g2 = (_g2 + 1);
HXDLIN( 576)							action2->addKey(key,state2);
            						}
            					}
            				}
            				break;
            				case (int)4: {
HXLINE( 576)					 ::flixel::input::actions::FlxActionDigital action = this->_reset;
HXDLIN( 576)					int state = 2;
HXDLIN( 576)					int _g = 0;
HXDLIN( 576)					while((_g < keys1->length)){
HXLINE( 576)						int key = keys1->__get(_g);
HXDLIN( 576)						_g = (_g + 1);
HXDLIN( 576)						action->addKey(key,state);
            					}
            				}
            				break;
            				case (int)5: {
HXLINE( 576)					 ::flixel::input::actions::FlxActionDigital action = this->_accept;
HXDLIN( 576)					int state = 2;
HXDLIN( 576)					int _g = 0;
HXDLIN( 576)					while((_g < keys1->length)){
HXLINE( 576)						int key = keys1->__get(_g);
HXDLIN( 576)						_g = (_g + 1);
HXDLIN( 576)						action->addKey(key,state);
            					}
            				}
            				break;
            				case (int)6: {
HXLINE( 576)					 ::flixel::input::actions::FlxActionDigital action = this->_back;
HXDLIN( 576)					int state = 2;
HXDLIN( 576)					int _g = 0;
HXDLIN( 576)					while((_g < keys1->length)){
HXLINE( 576)						int key = keys1->__get(_g);
HXDLIN( 576)						_g = (_g + 1);
HXDLIN( 576)						action->addKey(key,state);
            					}
            				}
            				break;
            				case (int)7: {
HXLINE( 576)					 ::flixel::input::actions::FlxActionDigital action = this->_pause;
HXDLIN( 576)					int state = 2;
HXDLIN( 576)					int _g = 0;
HXDLIN( 576)					while((_g < keys1->length)){
HXLINE( 576)						int key = keys1->__get(_g);
HXDLIN( 576)						_g = (_g + 1);
HXDLIN( 576)						action->addKey(key,state);
            					}
            				}
            				break;
            				case (int)8: {
HXLINE( 576)					 ::flixel::input::actions::FlxActionDigital action = this->_cheat;
HXDLIN( 576)					int state = 2;
HXDLIN( 576)					int _g = 0;
HXDLIN( 576)					while((_g < keys1->length)){
HXLINE( 576)						int key = keys1->__get(_g);
HXDLIN( 576)						_g = (_g + 1);
HXDLIN( 576)						action->addKey(key,state);
            					}
            				}
            				break;
            			}
            		}
HXLINE( 577)		{
HXLINE( 577)			::String s1 = ( (::String)(::flixel::FlxG_obj::save->data->__Field(HX_("downBind",3f,f3,fe,75),::hx::paccDynamic)) );
HXDLIN( 577)			s1 = s1.toUpperCase();
HXDLIN( 577)			int keys2;
HXDLIN( 577)			if (::flixel::input::keyboard::_FlxKey::FlxKey_Impl__obj::fromStringMap->exists(s1)) {
HXLINE( 577)				keys2 = ::flixel::input::keyboard::_FlxKey::FlxKey_Impl__obj::fromStringMap->get_int(s1);
            			}
            			else {
HXLINE( 577)				keys2 = -1;
            			}
HXDLIN( 577)			::Array< int > keys3 = ::Array_obj< int >::__new(2)->init(0,keys2)->init(1,40);
HXDLIN( 577)			switch((int)(::Control_obj::DOWN_dyn()->_hx_getIndex())){
            				case (int)0: {
HXLINE( 577)					{
HXLINE( 577)						 ::flixel::input::actions::FlxActionDigital action = this->_up;
HXDLIN( 577)						int state = 1;
HXDLIN( 577)						int _g = 0;
HXDLIN( 577)						while((_g < keys3->length)){
HXLINE( 577)							int key = keys3->__get(_g);
HXDLIN( 577)							_g = (_g + 1);
HXDLIN( 577)							action->addKey(key,state);
            						}
            					}
HXDLIN( 577)					{
HXLINE( 577)						 ::flixel::input::actions::FlxActionDigital action1 = this->_upP;
HXDLIN( 577)						int state1 = 2;
HXDLIN( 577)						int _g1 = 0;
HXDLIN( 577)						while((_g1 < keys3->length)){
HXLINE( 577)							int key = keys3->__get(_g1);
HXDLIN( 577)							_g1 = (_g1 + 1);
HXDLIN( 577)							action1->addKey(key,state1);
            						}
            					}
HXDLIN( 577)					{
HXLINE( 577)						 ::flixel::input::actions::FlxActionDigital action2 = this->_upR;
HXDLIN( 577)						int state2 = -1;
HXDLIN( 577)						int _g2 = 0;
HXDLIN( 577)						while((_g2 < keys3->length)){
HXLINE( 577)							int key = keys3->__get(_g2);
HXDLIN( 577)							_g2 = (_g2 + 1);
HXDLIN( 577)							action2->addKey(key,state2);
            						}
            					}
            				}
            				break;
            				case (int)1: {
HXLINE( 577)					{
HXLINE( 577)						 ::flixel::input::actions::FlxActionDigital action = this->_left;
HXDLIN( 577)						int state = 1;
HXDLIN( 577)						int _g = 0;
HXDLIN( 577)						while((_g < keys3->length)){
HXLINE( 577)							int key = keys3->__get(_g);
HXDLIN( 577)							_g = (_g + 1);
HXDLIN( 577)							action->addKey(key,state);
            						}
            					}
HXDLIN( 577)					{
HXLINE( 577)						 ::flixel::input::actions::FlxActionDigital action1 = this->_leftP;
HXDLIN( 577)						int state1 = 2;
HXDLIN( 577)						int _g1 = 0;
HXDLIN( 577)						while((_g1 < keys3->length)){
HXLINE( 577)							int key = keys3->__get(_g1);
HXDLIN( 577)							_g1 = (_g1 + 1);
HXDLIN( 577)							action1->addKey(key,state1);
            						}
            					}
HXDLIN( 577)					{
HXLINE( 577)						 ::flixel::input::actions::FlxActionDigital action2 = this->_leftR;
HXDLIN( 577)						int state2 = -1;
HXDLIN( 577)						int _g2 = 0;
HXDLIN( 577)						while((_g2 < keys3->length)){
HXLINE( 577)							int key = keys3->__get(_g2);
HXDLIN( 577)							_g2 = (_g2 + 1);
HXDLIN( 577)							action2->addKey(key,state2);
            						}
            					}
            				}
            				break;
            				case (int)2: {
HXLINE( 577)					{
HXLINE( 577)						 ::flixel::input::actions::FlxActionDigital action = this->_right;
HXDLIN( 577)						int state = 1;
HXDLIN( 577)						int _g = 0;
HXDLIN( 577)						while((_g < keys3->length)){
HXLINE( 577)							int key = keys3->__get(_g);
HXDLIN( 577)							_g = (_g + 1);
HXDLIN( 577)							action->addKey(key,state);
            						}
            					}
HXDLIN( 577)					{
HXLINE( 577)						 ::flixel::input::actions::FlxActionDigital action1 = this->_rightP;
HXDLIN( 577)						int state1 = 2;
HXDLIN( 577)						int _g1 = 0;
HXDLIN( 577)						while((_g1 < keys3->length)){
HXLINE( 577)							int key = keys3->__get(_g1);
HXDLIN( 577)							_g1 = (_g1 + 1);
HXDLIN( 577)							action1->addKey(key,state1);
            						}
            					}
HXDLIN( 577)					{
HXLINE( 577)						 ::flixel::input::actions::FlxActionDigital action2 = this->_rightR;
HXDLIN( 577)						int state2 = -1;
HXDLIN( 577)						int _g2 = 0;
HXDLIN( 577)						while((_g2 < keys3->length)){
HXLINE( 577)							int key = keys3->__get(_g2);
HXDLIN( 577)							_g2 = (_g2 + 1);
HXDLIN( 577)							action2->addKey(key,state2);
            						}
            					}
            				}
            				break;
            				case (int)3: {
HXLINE( 577)					{
HXLINE( 577)						 ::flixel::input::actions::FlxActionDigital action = this->_down;
HXDLIN( 577)						int state = 1;
HXDLIN( 577)						int _g = 0;
HXDLIN( 577)						while((_g < keys3->length)){
HXLINE( 577)							int key = keys3->__get(_g);
HXDLIN( 577)							_g = (_g + 1);
HXDLIN( 577)							action->addKey(key,state);
            						}
            					}
HXDLIN( 577)					{
HXLINE( 577)						 ::flixel::input::actions::FlxActionDigital action1 = this->_downP;
HXDLIN( 577)						int state1 = 2;
HXDLIN( 577)						int _g1 = 0;
HXDLIN( 577)						while((_g1 < keys3->length)){
HXLINE( 577)							int key = keys3->__get(_g1);
HXDLIN( 577)							_g1 = (_g1 + 1);
HXDLIN( 577)							action1->addKey(key,state1);
            						}
            					}
HXDLIN( 577)					{
HXLINE( 577)						 ::flixel::input::actions::FlxActionDigital action2 = this->_downR;
HXDLIN( 577)						int state2 = -1;
HXDLIN( 577)						int _g2 = 0;
HXDLIN( 577)						while((_g2 < keys3->length)){
HXLINE( 577)							int key = keys3->__get(_g2);
HXDLIN( 577)							_g2 = (_g2 + 1);
HXDLIN( 577)							action2->addKey(key,state2);
            						}
            					}
            				}
            				break;
            				case (int)4: {
HXLINE( 577)					 ::flixel::input::actions::FlxActionDigital action = this->_reset;
HXDLIN( 577)					int state = 2;
HXDLIN( 577)					int _g = 0;
HXDLIN( 577)					while((_g < keys3->length)){
HXLINE( 577)						int key = keys3->__get(_g);
HXDLIN( 577)						_g = (_g + 1);
HXDLIN( 577)						action->addKey(key,state);
            					}
            				}
            				break;
            				case (int)5: {
HXLINE( 577)					 ::flixel::input::actions::FlxActionDigital action = this->_accept;
HXDLIN( 577)					int state = 2;
HXDLIN( 577)					int _g = 0;
HXDLIN( 577)					while((_g < keys3->length)){
HXLINE( 577)						int key = keys3->__get(_g);
HXDLIN( 577)						_g = (_g + 1);
HXDLIN( 577)						action->addKey(key,state);
            					}
            				}
            				break;
            				case (int)6: {
HXLINE( 577)					 ::flixel::input::actions::FlxActionDigital action = this->_back;
HXDLIN( 577)					int state = 2;
HXDLIN( 577)					int _g = 0;
HXDLIN( 577)					while((_g < keys3->length)){
HXLINE( 577)						int key = keys3->__get(_g);
HXDLIN( 577)						_g = (_g + 1);
HXDLIN( 577)						action->addKey(key,state);
            					}
            				}
            				break;
            				case (int)7: {
HXLINE( 577)					 ::flixel::input::actions::FlxActionDigital action = this->_pause;
HXDLIN( 577)					int state = 2;
HXDLIN( 577)					int _g = 0;
HXDLIN( 577)					while((_g < keys3->length)){
HXLINE( 577)						int key = keys3->__get(_g);
HXDLIN( 577)						_g = (_g + 1);
HXDLIN( 577)						action->addKey(key,state);
            					}
            				}
            				break;
            				case (int)8: {
HXLINE( 577)					 ::flixel::input::actions::FlxActionDigital action = this->_cheat;
HXDLIN( 577)					int state = 2;
HXDLIN( 577)					int _g = 0;
HXDLIN( 577)					while((_g < keys3->length)){
HXLINE( 577)						int key = keys3->__get(_g);
HXDLIN( 577)						_g = (_g + 1);
HXDLIN( 577)						action->addKey(key,state);
            					}
            				}
            				break;
            			}
            		}
HXLINE( 578)		{
HXLINE( 578)			::String s2 = ( (::String)(::flixel::FlxG_obj::save->data->__Field(HX_("leftBind",64,39,12,48),::hx::paccDynamic)) );
HXDLIN( 578)			s2 = s2.toUpperCase();
HXDLIN( 578)			int keys4;
HXDLIN( 578)			if (::flixel::input::keyboard::_FlxKey::FlxKey_Impl__obj::fromStringMap->exists(s2)) {
HXLINE( 578)				keys4 = ::flixel::input::keyboard::_FlxKey::FlxKey_Impl__obj::fromStringMap->get_int(s2);
            			}
            			else {
HXLINE( 578)				keys4 = -1;
            			}
HXDLIN( 578)			::Array< int > keys5 = ::Array_obj< int >::__new(2)->init(0,keys4)->init(1,37);
HXDLIN( 578)			switch((int)(::Control_obj::LEFT_dyn()->_hx_getIndex())){
            				case (int)0: {
HXLINE( 578)					{
HXLINE( 578)						 ::flixel::input::actions::FlxActionDigital action = this->_up;
HXDLIN( 578)						int state = 1;
HXDLIN( 578)						int _g = 0;
HXDLIN( 578)						while((_g < keys5->length)){
HXLINE( 578)							int key = keys5->__get(_g);
HXDLIN( 578)							_g = (_g + 1);
HXDLIN( 578)							action->addKey(key,state);
            						}
            					}
HXDLIN( 578)					{
HXLINE( 578)						 ::flixel::input::actions::FlxActionDigital action1 = this->_upP;
HXDLIN( 578)						int state1 = 2;
HXDLIN( 578)						int _g1 = 0;
HXDLIN( 578)						while((_g1 < keys5->length)){
HXLINE( 578)							int key = keys5->__get(_g1);
HXDLIN( 578)							_g1 = (_g1 + 1);
HXDLIN( 578)							action1->addKey(key,state1);
            						}
            					}
HXDLIN( 578)					{
HXLINE( 578)						 ::flixel::input::actions::FlxActionDigital action2 = this->_upR;
HXDLIN( 578)						int state2 = -1;
HXDLIN( 578)						int _g2 = 0;
HXDLIN( 578)						while((_g2 < keys5->length)){
HXLINE( 578)							int key = keys5->__get(_g2);
HXDLIN( 578)							_g2 = (_g2 + 1);
HXDLIN( 578)							action2->addKey(key,state2);
            						}
            					}
            				}
            				break;
            				case (int)1: {
HXLINE( 578)					{
HXLINE( 578)						 ::flixel::input::actions::FlxActionDigital action = this->_left;
HXDLIN( 578)						int state = 1;
HXDLIN( 578)						int _g = 0;
HXDLIN( 578)						while((_g < keys5->length)){
HXLINE( 578)							int key = keys5->__get(_g);
HXDLIN( 578)							_g = (_g + 1);
HXDLIN( 578)							action->addKey(key,state);
            						}
            					}
HXDLIN( 578)					{
HXLINE( 578)						 ::flixel::input::actions::FlxActionDigital action1 = this->_leftP;
HXDLIN( 578)						int state1 = 2;
HXDLIN( 578)						int _g1 = 0;
HXDLIN( 578)						while((_g1 < keys5->length)){
HXLINE( 578)							int key = keys5->__get(_g1);
HXDLIN( 578)							_g1 = (_g1 + 1);
HXDLIN( 578)							action1->addKey(key,state1);
            						}
            					}
HXDLIN( 578)					{
HXLINE( 578)						 ::flixel::input::actions::FlxActionDigital action2 = this->_leftR;
HXDLIN( 578)						int state2 = -1;
HXDLIN( 578)						int _g2 = 0;
HXDLIN( 578)						while((_g2 < keys5->length)){
HXLINE( 578)							int key = keys5->__get(_g2);
HXDLIN( 578)							_g2 = (_g2 + 1);
HXDLIN( 578)							action2->addKey(key,state2);
            						}
            					}
            				}
            				break;
            				case (int)2: {
HXLINE( 578)					{
HXLINE( 578)						 ::flixel::input::actions::FlxActionDigital action = this->_right;
HXDLIN( 578)						int state = 1;
HXDLIN( 578)						int _g = 0;
HXDLIN( 578)						while((_g < keys5->length)){
HXLINE( 578)							int key = keys5->__get(_g);
HXDLIN( 578)							_g = (_g + 1);
HXDLIN( 578)							action->addKey(key,state);
            						}
            					}
HXDLIN( 578)					{
HXLINE( 578)						 ::flixel::input::actions::FlxActionDigital action1 = this->_rightP;
HXDLIN( 578)						int state1 = 2;
HXDLIN( 578)						int _g1 = 0;
HXDLIN( 578)						while((_g1 < keys5->length)){
HXLINE( 578)							int key = keys5->__get(_g1);
HXDLIN( 578)							_g1 = (_g1 + 1);
HXDLIN( 578)							action1->addKey(key,state1);
            						}
            					}
HXDLIN( 578)					{
HXLINE( 578)						 ::flixel::input::actions::FlxActionDigital action2 = this->_rightR;
HXDLIN( 578)						int state2 = -1;
HXDLIN( 578)						int _g2 = 0;
HXDLIN( 578)						while((_g2 < keys5->length)){
HXLINE( 578)							int key = keys5->__get(_g2);
HXDLIN( 578)							_g2 = (_g2 + 1);
HXDLIN( 578)							action2->addKey(key,state2);
            						}
            					}
            				}
            				break;
            				case (int)3: {
HXLINE( 578)					{
HXLINE( 578)						 ::flixel::input::actions::FlxActionDigital action = this->_down;
HXDLIN( 578)						int state = 1;
HXDLIN( 578)						int _g = 0;
HXDLIN( 578)						while((_g < keys5->length)){
HXLINE( 578)							int key = keys5->__get(_g);
HXDLIN( 578)							_g = (_g + 1);
HXDLIN( 578)							action->addKey(key,state);
            						}
            					}
HXDLIN( 578)					{
HXLINE( 578)						 ::flixel::input::actions::FlxActionDigital action1 = this->_downP;
HXDLIN( 578)						int state1 = 2;
HXDLIN( 578)						int _g1 = 0;
HXDLIN( 578)						while((_g1 < keys5->length)){
HXLINE( 578)							int key = keys5->__get(_g1);
HXDLIN( 578)							_g1 = (_g1 + 1);
HXDLIN( 578)							action1->addKey(key,state1);
            						}
            					}
HXDLIN( 578)					{
HXLINE( 578)						 ::flixel::input::actions::FlxActionDigital action2 = this->_downR;
HXDLIN( 578)						int state2 = -1;
HXDLIN( 578)						int _g2 = 0;
HXDLIN( 578)						while((_g2 < keys5->length)){
HXLINE( 578)							int key = keys5->__get(_g2);
HXDLIN( 578)							_g2 = (_g2 + 1);
HXDLIN( 578)							action2->addKey(key,state2);
            						}
            					}
            				}
            				break;
            				case (int)4: {
HXLINE( 578)					 ::flixel::input::actions::FlxActionDigital action = this->_reset;
HXDLIN( 578)					int state = 2;
HXDLIN( 578)					int _g = 0;
HXDLIN( 578)					while((_g < keys5->length)){
HXLINE( 578)						int key = keys5->__get(_g);
HXDLIN( 578)						_g = (_g + 1);
HXDLIN( 578)						action->addKey(key,state);
            					}
            				}
            				break;
            				case (int)5: {
HXLINE( 578)					 ::flixel::input::actions::FlxActionDigital action = this->_accept;
HXDLIN( 578)					int state = 2;
HXDLIN( 578)					int _g = 0;
HXDLIN( 578)					while((_g < keys5->length)){
HXLINE( 578)						int key = keys5->__get(_g);
HXDLIN( 578)						_g = (_g + 1);
HXDLIN( 578)						action->addKey(key,state);
            					}
            				}
            				break;
            				case (int)6: {
HXLINE( 578)					 ::flixel::input::actions::FlxActionDigital action = this->_back;
HXDLIN( 578)					int state = 2;
HXDLIN( 578)					int _g = 0;
HXDLIN( 578)					while((_g < keys5->length)){
HXLINE( 578)						int key = keys5->__get(_g);
HXDLIN( 578)						_g = (_g + 1);
HXDLIN( 578)						action->addKey(key,state);
            					}
            				}
            				break;
            				case (int)7: {
HXLINE( 578)					 ::flixel::input::actions::FlxActionDigital action = this->_pause;
HXDLIN( 578)					int state = 2;
HXDLIN( 578)					int _g = 0;
HXDLIN( 578)					while((_g < keys5->length)){
HXLINE( 578)						int key = keys5->__get(_g);
HXDLIN( 578)						_g = (_g + 1);
HXDLIN( 578)						action->addKey(key,state);
            					}
            				}
            				break;
            				case (int)8: {
HXLINE( 578)					 ::flixel::input::actions::FlxActionDigital action = this->_cheat;
HXDLIN( 578)					int state = 2;
HXDLIN( 578)					int _g = 0;
HXDLIN( 578)					while((_g < keys5->length)){
HXLINE( 578)						int key = keys5->__get(_g);
HXDLIN( 578)						_g = (_g + 1);
HXDLIN( 578)						action->addKey(key,state);
            					}
            				}
            				break;
            			}
            		}
HXLINE( 579)		{
HXLINE( 579)			::String s3 = ( (::String)(::flixel::FlxG_obj::save->data->__Field(HX_("rightBind",b9,4b,dd,ab),::hx::paccDynamic)) );
HXDLIN( 579)			s3 = s3.toUpperCase();
HXDLIN( 579)			int keys6;
HXDLIN( 579)			if (::flixel::input::keyboard::_FlxKey::FlxKey_Impl__obj::fromStringMap->exists(s3)) {
HXLINE( 579)				keys6 = ::flixel::input::keyboard::_FlxKey::FlxKey_Impl__obj::fromStringMap->get_int(s3);
            			}
            			else {
HXLINE( 579)				keys6 = -1;
            			}
HXDLIN( 579)			::Array< int > keys7 = ::Array_obj< int >::__new(2)->init(0,keys6)->init(1,39);
HXDLIN( 579)			switch((int)(::Control_obj::RIGHT_dyn()->_hx_getIndex())){
            				case (int)0: {
HXLINE( 579)					{
HXLINE( 579)						 ::flixel::input::actions::FlxActionDigital action = this->_up;
HXDLIN( 579)						int state = 1;
HXDLIN( 579)						int _g = 0;
HXDLIN( 579)						while((_g < keys7->length)){
HXLINE( 579)							int key = keys7->__get(_g);
HXDLIN( 579)							_g = (_g + 1);
HXDLIN( 579)							action->addKey(key,state);
            						}
            					}
HXDLIN( 579)					{
HXLINE( 579)						 ::flixel::input::actions::FlxActionDigital action1 = this->_upP;
HXDLIN( 579)						int state1 = 2;
HXDLIN( 579)						int _g1 = 0;
HXDLIN( 579)						while((_g1 < keys7->length)){
HXLINE( 579)							int key = keys7->__get(_g1);
HXDLIN( 579)							_g1 = (_g1 + 1);
HXDLIN( 579)							action1->addKey(key,state1);
            						}
            					}
HXDLIN( 579)					{
HXLINE( 579)						 ::flixel::input::actions::FlxActionDigital action2 = this->_upR;
HXDLIN( 579)						int state2 = -1;
HXDLIN( 579)						int _g2 = 0;
HXDLIN( 579)						while((_g2 < keys7->length)){
HXLINE( 579)							int key = keys7->__get(_g2);
HXDLIN( 579)							_g2 = (_g2 + 1);
HXDLIN( 579)							action2->addKey(key,state2);
            						}
            					}
            				}
            				break;
            				case (int)1: {
HXLINE( 579)					{
HXLINE( 579)						 ::flixel::input::actions::FlxActionDigital action = this->_left;
HXDLIN( 579)						int state = 1;
HXDLIN( 579)						int _g = 0;
HXDLIN( 579)						while((_g < keys7->length)){
HXLINE( 579)							int key = keys7->__get(_g);
HXDLIN( 579)							_g = (_g + 1);
HXDLIN( 579)							action->addKey(key,state);
            						}
            					}
HXDLIN( 579)					{
HXLINE( 579)						 ::flixel::input::actions::FlxActionDigital action1 = this->_leftP;
HXDLIN( 579)						int state1 = 2;
HXDLIN( 579)						int _g1 = 0;
HXDLIN( 579)						while((_g1 < keys7->length)){
HXLINE( 579)							int key = keys7->__get(_g1);
HXDLIN( 579)							_g1 = (_g1 + 1);
HXDLIN( 579)							action1->addKey(key,state1);
            						}
            					}
HXDLIN( 579)					{
HXLINE( 579)						 ::flixel::input::actions::FlxActionDigital action2 = this->_leftR;
HXDLIN( 579)						int state2 = -1;
HXDLIN( 579)						int _g2 = 0;
HXDLIN( 579)						while((_g2 < keys7->length)){
HXLINE( 579)							int key = keys7->__get(_g2);
HXDLIN( 579)							_g2 = (_g2 + 1);
HXDLIN( 579)							action2->addKey(key,state2);
            						}
            					}
            				}
            				break;
            				case (int)2: {
HXLINE( 579)					{
HXLINE( 579)						 ::flixel::input::actions::FlxActionDigital action = this->_right;
HXDLIN( 579)						int state = 1;
HXDLIN( 579)						int _g = 0;
HXDLIN( 579)						while((_g < keys7->length)){
HXLINE( 579)							int key = keys7->__get(_g);
HXDLIN( 579)							_g = (_g + 1);
HXDLIN( 579)							action->addKey(key,state);
            						}
            					}
HXDLIN( 579)					{
HXLINE( 579)						 ::flixel::input::actions::FlxActionDigital action1 = this->_rightP;
HXDLIN( 579)						int state1 = 2;
HXDLIN( 579)						int _g1 = 0;
HXDLIN( 579)						while((_g1 < keys7->length)){
HXLINE( 579)							int key = keys7->__get(_g1);
HXDLIN( 579)							_g1 = (_g1 + 1);
HXDLIN( 579)							action1->addKey(key,state1);
            						}
            					}
HXDLIN( 579)					{
HXLINE( 579)						 ::flixel::input::actions::FlxActionDigital action2 = this->_rightR;
HXDLIN( 579)						int state2 = -1;
HXDLIN( 579)						int _g2 = 0;
HXDLIN( 579)						while((_g2 < keys7->length)){
HXLINE( 579)							int key = keys7->__get(_g2);
HXDLIN( 579)							_g2 = (_g2 + 1);
HXDLIN( 579)							action2->addKey(key,state2);
            						}
            					}
            				}
            				break;
            				case (int)3: {
HXLINE( 579)					{
HXLINE( 579)						 ::flixel::input::actions::FlxActionDigital action = this->_down;
HXDLIN( 579)						int state = 1;
HXDLIN( 579)						int _g = 0;
HXDLIN( 579)						while((_g < keys7->length)){
HXLINE( 579)							int key = keys7->__get(_g);
HXDLIN( 579)							_g = (_g + 1);
HXDLIN( 579)							action->addKey(key,state);
            						}
            					}
HXDLIN( 579)					{
HXLINE( 579)						 ::flixel::input::actions::FlxActionDigital action1 = this->_downP;
HXDLIN( 579)						int state1 = 2;
HXDLIN( 579)						int _g1 = 0;
HXDLIN( 579)						while((_g1 < keys7->length)){
HXLINE( 579)							int key = keys7->__get(_g1);
HXDLIN( 579)							_g1 = (_g1 + 1);
HXDLIN( 579)							action1->addKey(key,state1);
            						}
            					}
HXDLIN( 579)					{
HXLINE( 579)						 ::flixel::input::actions::FlxActionDigital action2 = this->_downR;
HXDLIN( 579)						int state2 = -1;
HXDLIN( 579)						int _g2 = 0;
HXDLIN( 579)						while((_g2 < keys7->length)){
HXLINE( 579)							int key = keys7->__get(_g2);
HXDLIN( 579)							_g2 = (_g2 + 1);
HXDLIN( 579)							action2->addKey(key,state2);
            						}
            					}
            				}
            				break;
            				case (int)4: {
HXLINE( 579)					 ::flixel::input::actions::FlxActionDigital action = this->_reset;
HXDLIN( 579)					int state = 2;
HXDLIN( 579)					int _g = 0;
HXDLIN( 579)					while((_g < keys7->length)){
HXLINE( 579)						int key = keys7->__get(_g);
HXDLIN( 579)						_g = (_g + 1);
HXDLIN( 579)						action->addKey(key,state);
            					}
            				}
            				break;
            				case (int)5: {
HXLINE( 579)					 ::flixel::input::actions::FlxActionDigital action = this->_accept;
HXDLIN( 579)					int state = 2;
HXDLIN( 579)					int _g = 0;
HXDLIN( 579)					while((_g < keys7->length)){
HXLINE( 579)						int key = keys7->__get(_g);
HXDLIN( 579)						_g = (_g + 1);
HXDLIN( 579)						action->addKey(key,state);
            					}
            				}
            				break;
            				case (int)6: {
HXLINE( 579)					 ::flixel::input::actions::FlxActionDigital action = this->_back;
HXDLIN( 579)					int state = 2;
HXDLIN( 579)					int _g = 0;
HXDLIN( 579)					while((_g < keys7->length)){
HXLINE( 579)						int key = keys7->__get(_g);
HXDLIN( 579)						_g = (_g + 1);
HXDLIN( 579)						action->addKey(key,state);
            					}
            				}
            				break;
            				case (int)7: {
HXLINE( 579)					 ::flixel::input::actions::FlxActionDigital action = this->_pause;
HXDLIN( 579)					int state = 2;
HXDLIN( 579)					int _g = 0;
HXDLIN( 579)					while((_g < keys7->length)){
HXLINE( 579)						int key = keys7->__get(_g);
HXDLIN( 579)						_g = (_g + 1);
HXDLIN( 579)						action->addKey(key,state);
            					}
            				}
            				break;
            				case (int)8: {
HXLINE( 579)					 ::flixel::input::actions::FlxActionDigital action = this->_cheat;
HXDLIN( 579)					int state = 2;
HXDLIN( 579)					int _g = 0;
HXDLIN( 579)					while((_g < keys7->length)){
HXLINE( 579)						int key = keys7->__get(_g);
HXDLIN( 579)						_g = (_g + 1);
HXDLIN( 579)						action->addKey(key,state);
            					}
            				}
            				break;
            			}
            		}
HXLINE( 580)		{
HXLINE( 580)			::Array< int > keys8 = ::Array_obj< int >::fromData( _hx_array_data_116e4296_189,3);
HXDLIN( 580)			switch((int)(::Control_obj::ACCEPT_dyn()->_hx_getIndex())){
            				case (int)0: {
HXLINE( 580)					{
HXLINE( 580)						 ::flixel::input::actions::FlxActionDigital action = this->_up;
HXDLIN( 580)						int state = 1;
HXDLIN( 580)						int _g = 0;
HXDLIN( 580)						while((_g < keys8->length)){
HXLINE( 580)							int key = keys8->__get(_g);
HXDLIN( 580)							_g = (_g + 1);
HXDLIN( 580)							action->addKey(key,state);
            						}
            					}
HXDLIN( 580)					{
HXLINE( 580)						 ::flixel::input::actions::FlxActionDigital action1 = this->_upP;
HXDLIN( 580)						int state1 = 2;
HXDLIN( 580)						int _g1 = 0;
HXDLIN( 580)						while((_g1 < keys8->length)){
HXLINE( 580)							int key = keys8->__get(_g1);
HXDLIN( 580)							_g1 = (_g1 + 1);
HXDLIN( 580)							action1->addKey(key,state1);
            						}
            					}
HXDLIN( 580)					{
HXLINE( 580)						 ::flixel::input::actions::FlxActionDigital action2 = this->_upR;
HXDLIN( 580)						int state2 = -1;
HXDLIN( 580)						int _g2 = 0;
HXDLIN( 580)						while((_g2 < keys8->length)){
HXLINE( 580)							int key = keys8->__get(_g2);
HXDLIN( 580)							_g2 = (_g2 + 1);
HXDLIN( 580)							action2->addKey(key,state2);
            						}
            					}
            				}
            				break;
            				case (int)1: {
HXLINE( 580)					{
HXLINE( 580)						 ::flixel::input::actions::FlxActionDigital action = this->_left;
HXDLIN( 580)						int state = 1;
HXDLIN( 580)						int _g = 0;
HXDLIN( 580)						while((_g < keys8->length)){
HXLINE( 580)							int key = keys8->__get(_g);
HXDLIN( 580)							_g = (_g + 1);
HXDLIN( 580)							action->addKey(key,state);
            						}
            					}
HXDLIN( 580)					{
HXLINE( 580)						 ::flixel::input::actions::FlxActionDigital action1 = this->_leftP;
HXDLIN( 580)						int state1 = 2;
HXDLIN( 580)						int _g1 = 0;
HXDLIN( 580)						while((_g1 < keys8->length)){
HXLINE( 580)							int key = keys8->__get(_g1);
HXDLIN( 580)							_g1 = (_g1 + 1);
HXDLIN( 580)							action1->addKey(key,state1);
            						}
            					}
HXDLIN( 580)					{
HXLINE( 580)						 ::flixel::input::actions::FlxActionDigital action2 = this->_leftR;
HXDLIN( 580)						int state2 = -1;
HXDLIN( 580)						int _g2 = 0;
HXDLIN( 580)						while((_g2 < keys8->length)){
HXLINE( 580)							int key = keys8->__get(_g2);
HXDLIN( 580)							_g2 = (_g2 + 1);
HXDLIN( 580)							action2->addKey(key,state2);
            						}
            					}
            				}
            				break;
            				case (int)2: {
HXLINE( 580)					{
HXLINE( 580)						 ::flixel::input::actions::FlxActionDigital action = this->_right;
HXDLIN( 580)						int state = 1;
HXDLIN( 580)						int _g = 0;
HXDLIN( 580)						while((_g < keys8->length)){
HXLINE( 580)							int key = keys8->__get(_g);
HXDLIN( 580)							_g = (_g + 1);
HXDLIN( 580)							action->addKey(key,state);
            						}
            					}
HXDLIN( 580)					{
HXLINE( 580)						 ::flixel::input::actions::FlxActionDigital action1 = this->_rightP;
HXDLIN( 580)						int state1 = 2;
HXDLIN( 580)						int _g1 = 0;
HXDLIN( 580)						while((_g1 < keys8->length)){
HXLINE( 580)							int key = keys8->__get(_g1);
HXDLIN( 580)							_g1 = (_g1 + 1);
HXDLIN( 580)							action1->addKey(key,state1);
            						}
            					}
HXDLIN( 580)					{
HXLINE( 580)						 ::flixel::input::actions::FlxActionDigital action2 = this->_rightR;
HXDLIN( 580)						int state2 = -1;
HXDLIN( 580)						int _g2 = 0;
HXDLIN( 580)						while((_g2 < keys8->length)){
HXLINE( 580)							int key = keys8->__get(_g2);
HXDLIN( 580)							_g2 = (_g2 + 1);
HXDLIN( 580)							action2->addKey(key,state2);
            						}
            					}
            				}
            				break;
            				case (int)3: {
HXLINE( 580)					{
HXLINE( 580)						 ::flixel::input::actions::FlxActionDigital action = this->_down;
HXDLIN( 580)						int state = 1;
HXDLIN( 580)						int _g = 0;
HXDLIN( 580)						while((_g < keys8->length)){
HXLINE( 580)							int key = keys8->__get(_g);
HXDLIN( 580)							_g = (_g + 1);
HXDLIN( 580)							action->addKey(key,state);
            						}
            					}
HXDLIN( 580)					{
HXLINE( 580)						 ::flixel::input::actions::FlxActionDigital action1 = this->_downP;
HXDLIN( 580)						int state1 = 2;
HXDLIN( 580)						int _g1 = 0;
HXDLIN( 580)						while((_g1 < keys8->length)){
HXLINE( 580)							int key = keys8->__get(_g1);
HXDLIN( 580)							_g1 = (_g1 + 1);
HXDLIN( 580)							action1->addKey(key,state1);
            						}
            					}
HXDLIN( 580)					{
HXLINE( 580)						 ::flixel::input::actions::FlxActionDigital action2 = this->_downR;
HXDLIN( 580)						int state2 = -1;
HXDLIN( 580)						int _g2 = 0;
HXDLIN( 580)						while((_g2 < keys8->length)){
HXLINE( 580)							int key = keys8->__get(_g2);
HXDLIN( 580)							_g2 = (_g2 + 1);
HXDLIN( 580)							action2->addKey(key,state2);
            						}
            					}
            				}
            				break;
            				case (int)4: {
HXLINE( 580)					 ::flixel::input::actions::FlxActionDigital action = this->_reset;
HXDLIN( 580)					int state = 2;
HXDLIN( 580)					int _g = 0;
HXDLIN( 580)					while((_g < keys8->length)){
HXLINE( 580)						int key = keys8->__get(_g);
HXDLIN( 580)						_g = (_g + 1);
HXDLIN( 580)						action->addKey(key,state);
            					}
            				}
            				break;
            				case (int)5: {
HXLINE( 580)					 ::flixel::input::actions::FlxActionDigital action = this->_accept;
HXDLIN( 580)					int state = 2;
HXDLIN( 580)					int _g = 0;
HXDLIN( 580)					while((_g < keys8->length)){
HXLINE( 580)						int key = keys8->__get(_g);
HXDLIN( 580)						_g = (_g + 1);
HXDLIN( 580)						action->addKey(key,state);
            					}
            				}
            				break;
            				case (int)6: {
HXLINE( 580)					 ::flixel::input::actions::FlxActionDigital action = this->_back;
HXDLIN( 580)					int state = 2;
HXDLIN( 580)					int _g = 0;
HXDLIN( 580)					while((_g < keys8->length)){
HXLINE( 580)						int key = keys8->__get(_g);
HXDLIN( 580)						_g = (_g + 1);
HXDLIN( 580)						action->addKey(key,state);
            					}
            				}
            				break;
            				case (int)7: {
HXLINE( 580)					 ::flixel::input::actions::FlxActionDigital action = this->_pause;
HXDLIN( 580)					int state = 2;
HXDLIN( 580)					int _g = 0;
HXDLIN( 580)					while((_g < keys8->length)){
HXLINE( 580)						int key = keys8->__get(_g);
HXDLIN( 580)						_g = (_g + 1);
HXDLIN( 580)						action->addKey(key,state);
            					}
            				}
            				break;
            				case (int)8: {
HXLINE( 580)					 ::flixel::input::actions::FlxActionDigital action = this->_cheat;
HXDLIN( 580)					int state = 2;
HXDLIN( 580)					int _g = 0;
HXDLIN( 580)					while((_g < keys8->length)){
HXLINE( 580)						int key = keys8->__get(_g);
HXDLIN( 580)						_g = (_g + 1);
HXDLIN( 580)						action->addKey(key,state);
            					}
            				}
            				break;
            			}
            		}
HXLINE( 581)		{
HXLINE( 581)			::Array< int > keys9 = ::Array_obj< int >::fromData( _hx_array_data_116e4296_190,2);
HXDLIN( 581)			switch((int)(::Control_obj::BACK_dyn()->_hx_getIndex())){
            				case (int)0: {
HXLINE( 581)					{
HXLINE( 581)						 ::flixel::input::actions::FlxActionDigital action = this->_up;
HXDLIN( 581)						int state = 1;
HXDLIN( 581)						int _g = 0;
HXDLIN( 581)						while((_g < keys9->length)){
HXLINE( 581)							int key = keys9->__get(_g);
HXDLIN( 581)							_g = (_g + 1);
HXDLIN( 581)							action->addKey(key,state);
            						}
            					}
HXDLIN( 581)					{
HXLINE( 581)						 ::flixel::input::actions::FlxActionDigital action1 = this->_upP;
HXDLIN( 581)						int state1 = 2;
HXDLIN( 581)						int _g1 = 0;
HXDLIN( 581)						while((_g1 < keys9->length)){
HXLINE( 581)							int key = keys9->__get(_g1);
HXDLIN( 581)							_g1 = (_g1 + 1);
HXDLIN( 581)							action1->addKey(key,state1);
            						}
            					}
HXDLIN( 581)					{
HXLINE( 581)						 ::flixel::input::actions::FlxActionDigital action2 = this->_upR;
HXDLIN( 581)						int state2 = -1;
HXDLIN( 581)						int _g2 = 0;
HXDLIN( 581)						while((_g2 < keys9->length)){
HXLINE( 581)							int key = keys9->__get(_g2);
HXDLIN( 581)							_g2 = (_g2 + 1);
HXDLIN( 581)							action2->addKey(key,state2);
            						}
            					}
            				}
            				break;
            				case (int)1: {
HXLINE( 581)					{
HXLINE( 581)						 ::flixel::input::actions::FlxActionDigital action = this->_left;
HXDLIN( 581)						int state = 1;
HXDLIN( 581)						int _g = 0;
HXDLIN( 581)						while((_g < keys9->length)){
HXLINE( 581)							int key = keys9->__get(_g);
HXDLIN( 581)							_g = (_g + 1);
HXDLIN( 581)							action->addKey(key,state);
            						}
            					}
HXDLIN( 581)					{
HXLINE( 581)						 ::flixel::input::actions::FlxActionDigital action1 = this->_leftP;
HXDLIN( 581)						int state1 = 2;
HXDLIN( 581)						int _g1 = 0;
HXDLIN( 581)						while((_g1 < keys9->length)){
HXLINE( 581)							int key = keys9->__get(_g1);
HXDLIN( 581)							_g1 = (_g1 + 1);
HXDLIN( 581)							action1->addKey(key,state1);
            						}
            					}
HXDLIN( 581)					{
HXLINE( 581)						 ::flixel::input::actions::FlxActionDigital action2 = this->_leftR;
HXDLIN( 581)						int state2 = -1;
HXDLIN( 581)						int _g2 = 0;
HXDLIN( 581)						while((_g2 < keys9->length)){
HXLINE( 581)							int key = keys9->__get(_g2);
HXDLIN( 581)							_g2 = (_g2 + 1);
HXDLIN( 581)							action2->addKey(key,state2);
            						}
            					}
            				}
            				break;
            				case (int)2: {
HXLINE( 581)					{
HXLINE( 581)						 ::flixel::input::actions::FlxActionDigital action = this->_right;
HXDLIN( 581)						int state = 1;
HXDLIN( 581)						int _g = 0;
HXDLIN( 581)						while((_g < keys9->length)){
HXLINE( 581)							int key = keys9->__get(_g);
HXDLIN( 581)							_g = (_g + 1);
HXDLIN( 581)							action->addKey(key,state);
            						}
            					}
HXDLIN( 581)					{
HXLINE( 581)						 ::flixel::input::actions::FlxActionDigital action1 = this->_rightP;
HXDLIN( 581)						int state1 = 2;
HXDLIN( 581)						int _g1 = 0;
HXDLIN( 581)						while((_g1 < keys9->length)){
HXLINE( 581)							int key = keys9->__get(_g1);
HXDLIN( 581)							_g1 = (_g1 + 1);
HXDLIN( 581)							action1->addKey(key,state1);
            						}
            					}
HXDLIN( 581)					{
HXLINE( 581)						 ::flixel::input::actions::FlxActionDigital action2 = this->_rightR;
HXDLIN( 581)						int state2 = -1;
HXDLIN( 581)						int _g2 = 0;
HXDLIN( 581)						while((_g2 < keys9->length)){
HXLINE( 581)							int key = keys9->__get(_g2);
HXDLIN( 581)							_g2 = (_g2 + 1);
HXDLIN( 581)							action2->addKey(key,state2);
            						}
            					}
            				}
            				break;
            				case (int)3: {
HXLINE( 581)					{
HXLINE( 581)						 ::flixel::input::actions::FlxActionDigital action = this->_down;
HXDLIN( 581)						int state = 1;
HXDLIN( 581)						int _g = 0;
HXDLIN( 581)						while((_g < keys9->length)){
HXLINE( 581)							int key = keys9->__get(_g);
HXDLIN( 581)							_g = (_g + 1);
HXDLIN( 581)							action->addKey(key,state);
            						}
            					}
HXDLIN( 581)					{
HXLINE( 581)						 ::flixel::input::actions::FlxActionDigital action1 = this->_downP;
HXDLIN( 581)						int state1 = 2;
HXDLIN( 581)						int _g1 = 0;
HXDLIN( 581)						while((_g1 < keys9->length)){
HXLINE( 581)							int key = keys9->__get(_g1);
HXDLIN( 581)							_g1 = (_g1 + 1);
HXDLIN( 581)							action1->addKey(key,state1);
            						}
            					}
HXDLIN( 581)					{
HXLINE( 581)						 ::flixel::input::actions::FlxActionDigital action2 = this->_downR;
HXDLIN( 581)						int state2 = -1;
HXDLIN( 581)						int _g2 = 0;
HXDLIN( 581)						while((_g2 < keys9->length)){
HXLINE( 581)							int key = keys9->__get(_g2);
HXDLIN( 581)							_g2 = (_g2 + 1);
HXDLIN( 581)							action2->addKey(key,state2);
            						}
            					}
            				}
            				break;
            				case (int)4: {
HXLINE( 581)					 ::flixel::input::actions::FlxActionDigital action = this->_reset;
HXDLIN( 581)					int state = 2;
HXDLIN( 581)					int _g = 0;
HXDLIN( 581)					while((_g < keys9->length)){
HXLINE( 581)						int key = keys9->__get(_g);
HXDLIN( 581)						_g = (_g + 1);
HXDLIN( 581)						action->addKey(key,state);
            					}
            				}
            				break;
            				case (int)5: {
HXLINE( 581)					 ::flixel::input::actions::FlxActionDigital action = this->_accept;
HXDLIN( 581)					int state = 2;
HXDLIN( 581)					int _g = 0;
HXDLIN( 581)					while((_g < keys9->length)){
HXLINE( 581)						int key = keys9->__get(_g);
HXDLIN( 581)						_g = (_g + 1);
HXDLIN( 581)						action->addKey(key,state);
            					}
            				}
            				break;
            				case (int)6: {
HXLINE( 581)					 ::flixel::input::actions::FlxActionDigital action = this->_back;
HXDLIN( 581)					int state = 2;
HXDLIN( 581)					int _g = 0;
HXDLIN( 581)					while((_g < keys9->length)){
HXLINE( 581)						int key = keys9->__get(_g);
HXDLIN( 581)						_g = (_g + 1);
HXDLIN( 581)						action->addKey(key,state);
            					}
            				}
            				break;
            				case (int)7: {
HXLINE( 581)					 ::flixel::input::actions::FlxActionDigital action = this->_pause;
HXDLIN( 581)					int state = 2;
HXDLIN( 581)					int _g = 0;
HXDLIN( 581)					while((_g < keys9->length)){
HXLINE( 581)						int key = keys9->__get(_g);
HXDLIN( 581)						_g = (_g + 1);
HXDLIN( 581)						action->addKey(key,state);
            					}
            				}
            				break;
            				case (int)8: {
HXLINE( 581)					 ::flixel::input::actions::FlxActionDigital action = this->_cheat;
HXDLIN( 581)					int state = 2;
HXDLIN( 581)					int _g = 0;
HXDLIN( 581)					while((_g < keys9->length)){
HXLINE( 581)						int key = keys9->__get(_g);
HXDLIN( 581)						_g = (_g + 1);
HXDLIN( 581)						action->addKey(key,state);
            					}
            				}
            				break;
            			}
            		}
HXLINE( 582)		{
HXLINE( 582)			::Array< int > keys10 = ::Array_obj< int >::fromData( _hx_array_data_116e4296_191,3);
HXDLIN( 582)			switch((int)(::Control_obj::PAUSE_dyn()->_hx_getIndex())){
            				case (int)0: {
HXLINE( 582)					{
HXLINE( 582)						 ::flixel::input::actions::FlxActionDigital action = this->_up;
HXDLIN( 582)						int state = 1;
HXDLIN( 582)						int _g = 0;
HXDLIN( 582)						while((_g < keys10->length)){
HXLINE( 582)							int key = keys10->__get(_g);
HXDLIN( 582)							_g = (_g + 1);
HXDLIN( 582)							action->addKey(key,state);
            						}
            					}
HXDLIN( 582)					{
HXLINE( 582)						 ::flixel::input::actions::FlxActionDigital action1 = this->_upP;
HXDLIN( 582)						int state1 = 2;
HXDLIN( 582)						int _g1 = 0;
HXDLIN( 582)						while((_g1 < keys10->length)){
HXLINE( 582)							int key = keys10->__get(_g1);
HXDLIN( 582)							_g1 = (_g1 + 1);
HXDLIN( 582)							action1->addKey(key,state1);
            						}
            					}
HXDLIN( 582)					{
HXLINE( 582)						 ::flixel::input::actions::FlxActionDigital action2 = this->_upR;
HXDLIN( 582)						int state2 = -1;
HXDLIN( 582)						int _g2 = 0;
HXDLIN( 582)						while((_g2 < keys10->length)){
HXLINE( 582)							int key = keys10->__get(_g2);
HXDLIN( 582)							_g2 = (_g2 + 1);
HXDLIN( 582)							action2->addKey(key,state2);
            						}
            					}
            				}
            				break;
            				case (int)1: {
HXLINE( 582)					{
HXLINE( 582)						 ::flixel::input::actions::FlxActionDigital action = this->_left;
HXDLIN( 582)						int state = 1;
HXDLIN( 582)						int _g = 0;
HXDLIN( 582)						while((_g < keys10->length)){
HXLINE( 582)							int key = keys10->__get(_g);
HXDLIN( 582)							_g = (_g + 1);
HXDLIN( 582)							action->addKey(key,state);
            						}
            					}
HXDLIN( 582)					{
HXLINE( 582)						 ::flixel::input::actions::FlxActionDigital action1 = this->_leftP;
HXDLIN( 582)						int state1 = 2;
HXDLIN( 582)						int _g1 = 0;
HXDLIN( 582)						while((_g1 < keys10->length)){
HXLINE( 582)							int key = keys10->__get(_g1);
HXDLIN( 582)							_g1 = (_g1 + 1);
HXDLIN( 582)							action1->addKey(key,state1);
            						}
            					}
HXDLIN( 582)					{
HXLINE( 582)						 ::flixel::input::actions::FlxActionDigital action2 = this->_leftR;
HXDLIN( 582)						int state2 = -1;
HXDLIN( 582)						int _g2 = 0;
HXDLIN( 582)						while((_g2 < keys10->length)){
HXLINE( 582)							int key = keys10->__get(_g2);
HXDLIN( 582)							_g2 = (_g2 + 1);
HXDLIN( 582)							action2->addKey(key,state2);
            						}
            					}
            				}
            				break;
            				case (int)2: {
HXLINE( 582)					{
HXLINE( 582)						 ::flixel::input::actions::FlxActionDigital action = this->_right;
HXDLIN( 582)						int state = 1;
HXDLIN( 582)						int _g = 0;
HXDLIN( 582)						while((_g < keys10->length)){
HXLINE( 582)							int key = keys10->__get(_g);
HXDLIN( 582)							_g = (_g + 1);
HXDLIN( 582)							action->addKey(key,state);
            						}
            					}
HXDLIN( 582)					{
HXLINE( 582)						 ::flixel::input::actions::FlxActionDigital action1 = this->_rightP;
HXDLIN( 582)						int state1 = 2;
HXDLIN( 582)						int _g1 = 0;
HXDLIN( 582)						while((_g1 < keys10->length)){
HXLINE( 582)							int key = keys10->__get(_g1);
HXDLIN( 582)							_g1 = (_g1 + 1);
HXDLIN( 582)							action1->addKey(key,state1);
            						}
            					}
HXDLIN( 582)					{
HXLINE( 582)						 ::flixel::input::actions::FlxActionDigital action2 = this->_rightR;
HXDLIN( 582)						int state2 = -1;
HXDLIN( 582)						int _g2 = 0;
HXDLIN( 582)						while((_g2 < keys10->length)){
HXLINE( 582)							int key = keys10->__get(_g2);
HXDLIN( 582)							_g2 = (_g2 + 1);
HXDLIN( 582)							action2->addKey(key,state2);
            						}
            					}
            				}
            				break;
            				case (int)3: {
HXLINE( 582)					{
HXLINE( 582)						 ::flixel::input::actions::FlxActionDigital action = this->_down;
HXDLIN( 582)						int state = 1;
HXDLIN( 582)						int _g = 0;
HXDLIN( 582)						while((_g < keys10->length)){
HXLINE( 582)							int key = keys10->__get(_g);
HXDLIN( 582)							_g = (_g + 1);
HXDLIN( 582)							action->addKey(key,state);
            						}
            					}
HXDLIN( 582)					{
HXLINE( 582)						 ::flixel::input::actions::FlxActionDigital action1 = this->_downP;
HXDLIN( 582)						int state1 = 2;
HXDLIN( 582)						int _g1 = 0;
HXDLIN( 582)						while((_g1 < keys10->length)){
HXLINE( 582)							int key = keys10->__get(_g1);
HXDLIN( 582)							_g1 = (_g1 + 1);
HXDLIN( 582)							action1->addKey(key,state1);
            						}
            					}
HXDLIN( 582)					{
HXLINE( 582)						 ::flixel::input::actions::FlxActionDigital action2 = this->_downR;
HXDLIN( 582)						int state2 = -1;
HXDLIN( 582)						int _g2 = 0;
HXDLIN( 582)						while((_g2 < keys10->length)){
HXLINE( 582)							int key = keys10->__get(_g2);
HXDLIN( 582)							_g2 = (_g2 + 1);
HXDLIN( 582)							action2->addKey(key,state2);
            						}
            					}
            				}
            				break;
            				case (int)4: {
HXLINE( 582)					 ::flixel::input::actions::FlxActionDigital action = this->_reset;
HXDLIN( 582)					int state = 2;
HXDLIN( 582)					int _g = 0;
HXDLIN( 582)					while((_g < keys10->length)){
HXLINE( 582)						int key = keys10->__get(_g);
HXDLIN( 582)						_g = (_g + 1);
HXDLIN( 582)						action->addKey(key,state);
            					}
            				}
            				break;
            				case (int)5: {
HXLINE( 582)					 ::flixel::input::actions::FlxActionDigital action = this->_accept;
HXDLIN( 582)					int state = 2;
HXDLIN( 582)					int _g = 0;
HXDLIN( 582)					while((_g < keys10->length)){
HXLINE( 582)						int key = keys10->__get(_g);
HXDLIN( 582)						_g = (_g + 1);
HXDLIN( 582)						action->addKey(key,state);
            					}
            				}
            				break;
            				case (int)6: {
HXLINE( 582)					 ::flixel::input::actions::FlxActionDigital action = this->_back;
HXDLIN( 582)					int state = 2;
HXDLIN( 582)					int _g = 0;
HXDLIN( 582)					while((_g < keys10->length)){
HXLINE( 582)						int key = keys10->__get(_g);
HXDLIN( 582)						_g = (_g + 1);
HXDLIN( 582)						action->addKey(key,state);
            					}
            				}
            				break;
            				case (int)7: {
HXLINE( 582)					 ::flixel::input::actions::FlxActionDigital action = this->_pause;
HXDLIN( 582)					int state = 2;
HXDLIN( 582)					int _g = 0;
HXDLIN( 582)					while((_g < keys10->length)){
HXLINE( 582)						int key = keys10->__get(_g);
HXDLIN( 582)						_g = (_g + 1);
HXDLIN( 582)						action->addKey(key,state);
            					}
            				}
            				break;
            				case (int)8: {
HXLINE( 582)					 ::flixel::input::actions::FlxActionDigital action = this->_cheat;
HXDLIN( 582)					int state = 2;
HXDLIN( 582)					int _g = 0;
HXDLIN( 582)					while((_g < keys10->length)){
HXLINE( 582)						int key = keys10->__get(_g);
HXDLIN( 582)						_g = (_g + 1);
HXDLIN( 582)						action->addKey(key,state);
            					}
            				}
            				break;
            			}
            		}
HXLINE( 583)		{
HXLINE( 583)			::String s4 = ( (::String)(::flixel::FlxG_obj::save->data->__Field(HX_("killBind",7b,28,25,80),::hx::paccDynamic)) );
HXDLIN( 583)			s4 = s4.toUpperCase();
HXDLIN( 583)			int keys11;
HXDLIN( 583)			if (::flixel::input::keyboard::_FlxKey::FlxKey_Impl__obj::fromStringMap->exists(s4)) {
HXLINE( 583)				keys11 = ::flixel::input::keyboard::_FlxKey::FlxKey_Impl__obj::fromStringMap->get_int(s4);
            			}
            			else {
HXLINE( 583)				keys11 = -1;
            			}
HXDLIN( 583)			::Array< int > keys12 = ::Array_obj< int >::__new(1)->init(0,keys11);
HXDLIN( 583)			switch((int)(::Control_obj::RESET_dyn()->_hx_getIndex())){
            				case (int)0: {
HXLINE( 583)					{
HXLINE( 583)						 ::flixel::input::actions::FlxActionDigital action = this->_up;
HXDLIN( 583)						int state = 1;
HXDLIN( 583)						int _g = 0;
HXDLIN( 583)						while((_g < keys12->length)){
HXLINE( 583)							int key = keys12->__get(_g);
HXDLIN( 583)							_g = (_g + 1);
HXDLIN( 583)							action->addKey(key,state);
            						}
            					}
HXDLIN( 583)					{
HXLINE( 583)						 ::flixel::input::actions::FlxActionDigital action1 = this->_upP;
HXDLIN( 583)						int state1 = 2;
HXDLIN( 583)						int _g1 = 0;
HXDLIN( 583)						while((_g1 < keys12->length)){
HXLINE( 583)							int key = keys12->__get(_g1);
HXDLIN( 583)							_g1 = (_g1 + 1);
HXDLIN( 583)							action1->addKey(key,state1);
            						}
            					}
HXDLIN( 583)					{
HXLINE( 583)						 ::flixel::input::actions::FlxActionDigital action2 = this->_upR;
HXDLIN( 583)						int state2 = -1;
HXDLIN( 583)						int _g2 = 0;
HXDLIN( 583)						while((_g2 < keys12->length)){
HXLINE( 583)							int key = keys12->__get(_g2);
HXDLIN( 583)							_g2 = (_g2 + 1);
HXDLIN( 583)							action2->addKey(key,state2);
            						}
            					}
            				}
            				break;
            				case (int)1: {
HXLINE( 583)					{
HXLINE( 583)						 ::flixel::input::actions::FlxActionDigital action = this->_left;
HXDLIN( 583)						int state = 1;
HXDLIN( 583)						int _g = 0;
HXDLIN( 583)						while((_g < keys12->length)){
HXLINE( 583)							int key = keys12->__get(_g);
HXDLIN( 583)							_g = (_g + 1);
HXDLIN( 583)							action->addKey(key,state);
            						}
            					}
HXDLIN( 583)					{
HXLINE( 583)						 ::flixel::input::actions::FlxActionDigital action1 = this->_leftP;
HXDLIN( 583)						int state1 = 2;
HXDLIN( 583)						int _g1 = 0;
HXDLIN( 583)						while((_g1 < keys12->length)){
HXLINE( 583)							int key = keys12->__get(_g1);
HXDLIN( 583)							_g1 = (_g1 + 1);
HXDLIN( 583)							action1->addKey(key,state1);
            						}
            					}
HXDLIN( 583)					{
HXLINE( 583)						 ::flixel::input::actions::FlxActionDigital action2 = this->_leftR;
HXDLIN( 583)						int state2 = -1;
HXDLIN( 583)						int _g2 = 0;
HXDLIN( 583)						while((_g2 < keys12->length)){
HXLINE( 583)							int key = keys12->__get(_g2);
HXDLIN( 583)							_g2 = (_g2 + 1);
HXDLIN( 583)							action2->addKey(key,state2);
            						}
            					}
            				}
            				break;
            				case (int)2: {
HXLINE( 583)					{
HXLINE( 583)						 ::flixel::input::actions::FlxActionDigital action = this->_right;
HXDLIN( 583)						int state = 1;
HXDLIN( 583)						int _g = 0;
HXDLIN( 583)						while((_g < keys12->length)){
HXLINE( 583)							int key = keys12->__get(_g);
HXDLIN( 583)							_g = (_g + 1);
HXDLIN( 583)							action->addKey(key,state);
            						}
            					}
HXDLIN( 583)					{
HXLINE( 583)						 ::flixel::input::actions::FlxActionDigital action1 = this->_rightP;
HXDLIN( 583)						int state1 = 2;
HXDLIN( 583)						int _g1 = 0;
HXDLIN( 583)						while((_g1 < keys12->length)){
HXLINE( 583)							int key = keys12->__get(_g1);
HXDLIN( 583)							_g1 = (_g1 + 1);
HXDLIN( 583)							action1->addKey(key,state1);
            						}
            					}
HXDLIN( 583)					{
HXLINE( 583)						 ::flixel::input::actions::FlxActionDigital action2 = this->_rightR;
HXDLIN( 583)						int state2 = -1;
HXDLIN( 583)						int _g2 = 0;
HXDLIN( 583)						while((_g2 < keys12->length)){
HXLINE( 583)							int key = keys12->__get(_g2);
HXDLIN( 583)							_g2 = (_g2 + 1);
HXDLIN( 583)							action2->addKey(key,state2);
            						}
            					}
            				}
            				break;
            				case (int)3: {
HXLINE( 583)					{
HXLINE( 583)						 ::flixel::input::actions::FlxActionDigital action = this->_down;
HXDLIN( 583)						int state = 1;
HXDLIN( 583)						int _g = 0;
HXDLIN( 583)						while((_g < keys12->length)){
HXLINE( 583)							int key = keys12->__get(_g);
HXDLIN( 583)							_g = (_g + 1);
HXDLIN( 583)							action->addKey(key,state);
            						}
            					}
HXDLIN( 583)					{
HXLINE( 583)						 ::flixel::input::actions::FlxActionDigital action1 = this->_downP;
HXDLIN( 583)						int state1 = 2;
HXDLIN( 583)						int _g1 = 0;
HXDLIN( 583)						while((_g1 < keys12->length)){
HXLINE( 583)							int key = keys12->__get(_g1);
HXDLIN( 583)							_g1 = (_g1 + 1);
HXDLIN( 583)							action1->addKey(key,state1);
            						}
            					}
HXDLIN( 583)					{
HXLINE( 583)						 ::flixel::input::actions::FlxActionDigital action2 = this->_downR;
HXDLIN( 583)						int state2 = -1;
HXDLIN( 583)						int _g2 = 0;
HXDLIN( 583)						while((_g2 < keys12->length)){
HXLINE( 583)							int key = keys12->__get(_g2);
HXDLIN( 583)							_g2 = (_g2 + 1);
HXDLIN( 583)							action2->addKey(key,state2);
            						}
            					}
            				}
            				break;
            				case (int)4: {
HXLINE( 583)					 ::flixel::input::actions::FlxActionDigital action = this->_reset;
HXDLIN( 583)					int state = 2;
HXDLIN( 583)					int _g = 0;
HXDLIN( 583)					while((_g < keys12->length)){
HXLINE( 583)						int key = keys12->__get(_g);
HXDLIN( 583)						_g = (_g + 1);
HXDLIN( 583)						action->addKey(key,state);
            					}
            				}
            				break;
            				case (int)5: {
HXLINE( 583)					 ::flixel::input::actions::FlxActionDigital action = this->_accept;
HXDLIN( 583)					int state = 2;
HXDLIN( 583)					int _g = 0;
HXDLIN( 583)					while((_g < keys12->length)){
HXLINE( 583)						int key = keys12->__get(_g);
HXDLIN( 583)						_g = (_g + 1);
HXDLIN( 583)						action->addKey(key,state);
            					}
            				}
            				break;
            				case (int)6: {
HXLINE( 583)					 ::flixel::input::actions::FlxActionDigital action = this->_back;
HXDLIN( 583)					int state = 2;
HXDLIN( 583)					int _g = 0;
HXDLIN( 583)					while((_g < keys12->length)){
HXLINE( 583)						int key = keys12->__get(_g);
HXDLIN( 583)						_g = (_g + 1);
HXDLIN( 583)						action->addKey(key,state);
            					}
            				}
            				break;
            				case (int)7: {
HXLINE( 583)					 ::flixel::input::actions::FlxActionDigital action = this->_pause;
HXDLIN( 583)					int state = 2;
HXDLIN( 583)					int _g = 0;
HXDLIN( 583)					while((_g < keys12->length)){
HXLINE( 583)						int key = keys12->__get(_g);
HXDLIN( 583)						_g = (_g + 1);
HXDLIN( 583)						action->addKey(key,state);
            					}
            				}
            				break;
            				case (int)8: {
HXLINE( 583)					 ::flixel::input::actions::FlxActionDigital action = this->_cheat;
HXDLIN( 583)					int state = 2;
HXDLIN( 583)					int _g = 0;
HXDLIN( 583)					while((_g < keys12->length)){
HXLINE( 583)						int key = keys12->__get(_g);
HXDLIN( 583)						_g = (_g + 1);
HXDLIN( 583)						action->addKey(key,state);
            					}
            				}
            				break;
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(Controls_obj,loadKeyBinds,(void))

void Controls_obj::removeKeyboard(){
            	HX_STACKFRAME(&_hx_pos_948b5caa279cd923_588_removeKeyboard)
HXDLIN( 588)		int _g = 0;
HXDLIN( 588)		::Array< ::Dynamic> _g1 = this->digitalActions;
HXDLIN( 588)		while((_g < _g1->length)){
HXDLIN( 588)			 ::flixel::input::actions::FlxActionDigital action = _g1->__get(_g).StaticCast<  ::flixel::input::actions::FlxActionDigital >();
HXDLIN( 588)			_g = (_g + 1);
HXLINE( 590)			int i = action->inputs->length;
HXLINE( 591)			while(true){
HXLINE( 591)				i = (i - 1);
HXDLIN( 591)				if (!(((i + 1) > 0))) {
HXLINE( 591)					goto _hx_goto_193;
            				}
HXLINE( 593)				 ::flixel::input::actions::FlxActionInput input = action->inputs->__get(i).StaticCast<  ::flixel::input::actions::FlxActionInput >();
HXLINE( 594)				if (::hx::IsPointerEq( input->device,::flixel::input::actions::FlxInputDevice_obj::KEYBOARD_dyn() )) {
HXLINE( 595)					action->remove(input,null());
            				}
            			}
            			_hx_goto_193:;
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(Controls_obj,removeKeyboard,(void))

void Controls_obj::addGamepad(int id, ::haxe::ds::EnumValueMap buttonMap){
            	HX_STACKFRAME(&_hx_pos_948b5caa279cd923_601_addGamepad)
HXLINE( 602)		this->gamepadsAdded->push(id);
HXLINE( 605)		{
HXLINE( 605)			::Dynamic map = buttonMap;
HXDLIN( 605)			::Dynamic _g_map = map;
HXDLIN( 605)			 ::Dynamic _g_keys = ::haxe::IMap_obj::keys(map);
HXDLIN( 605)			while(( (bool)(_g_keys->__Field(HX_("hasNext",6d,a5,46,18),::hx::paccDynamic)()) )){
HXLINE( 605)				 ::Control key = _g_keys->__Field(HX_("next",f3,84,02,49),::hx::paccDynamic)();
HXDLIN( 605)				::Array< int > _g1_value = ( (::Array< int >)(::haxe::IMap_obj::get(_g_map,key)) );
HXDLIN( 605)				 ::Control _g1_key = key;
HXDLIN( 605)				 ::Control control = _g1_key;
HXDLIN( 605)				::Array< int > buttons = _g1_value;
HXLINE( 606)				{
HXLINE( 606)					int id1 = id;
HXDLIN( 606)					::Array< int > buttons1 = buttons;
HXDLIN( 606)					switch((int)(control->_hx_getIndex())){
            						case (int)0: {
HXLINE( 606)							{
HXLINE( 606)								 ::flixel::input::actions::FlxActionDigital action = this->_up;
HXDLIN( 606)								int state = 1;
HXDLIN( 606)								int _g = 0;
HXDLIN( 606)								while((_g < buttons1->length)){
HXLINE( 606)									int button = buttons1->__get(_g);
HXDLIN( 606)									_g = (_g + 1);
HXDLIN( 606)									action->addGamepad(button,state,id1);
            								}
            							}
HXDLIN( 606)							{
HXLINE( 606)								 ::flixel::input::actions::FlxActionDigital action1 = this->_upP;
HXDLIN( 606)								int state1 = 2;
HXDLIN( 606)								int _g1 = 0;
HXDLIN( 606)								while((_g1 < buttons1->length)){
HXLINE( 606)									int button = buttons1->__get(_g1);
HXDLIN( 606)									_g1 = (_g1 + 1);
HXDLIN( 606)									action1->addGamepad(button,state1,id1);
            								}
            							}
HXDLIN( 606)							{
HXLINE( 606)								 ::flixel::input::actions::FlxActionDigital action2 = this->_upR;
HXDLIN( 606)								int state2 = -1;
HXDLIN( 606)								int _g2 = 0;
HXDLIN( 606)								while((_g2 < buttons1->length)){
HXLINE( 606)									int button = buttons1->__get(_g2);
HXDLIN( 606)									_g2 = (_g2 + 1);
HXDLIN( 606)									action2->addGamepad(button,state2,id1);
            								}
            							}
            						}
            						break;
            						case (int)1: {
HXLINE( 606)							{
HXLINE( 606)								 ::flixel::input::actions::FlxActionDigital action = this->_left;
HXDLIN( 606)								int state = 1;
HXDLIN( 606)								int _g = 0;
HXDLIN( 606)								while((_g < buttons1->length)){
HXLINE( 606)									int button = buttons1->__get(_g);
HXDLIN( 606)									_g = (_g + 1);
HXDLIN( 606)									action->addGamepad(button,state,id1);
            								}
            							}
HXDLIN( 606)							{
HXLINE( 606)								 ::flixel::input::actions::FlxActionDigital action1 = this->_leftP;
HXDLIN( 606)								int state1 = 2;
HXDLIN( 606)								int _g1 = 0;
HXDLIN( 606)								while((_g1 < buttons1->length)){
HXLINE( 606)									int button = buttons1->__get(_g1);
HXDLIN( 606)									_g1 = (_g1 + 1);
HXDLIN( 606)									action1->addGamepad(button,state1,id1);
            								}
            							}
HXDLIN( 606)							{
HXLINE( 606)								 ::flixel::input::actions::FlxActionDigital action2 = this->_leftR;
HXDLIN( 606)								int state2 = -1;
HXDLIN( 606)								int _g2 = 0;
HXDLIN( 606)								while((_g2 < buttons1->length)){
HXLINE( 606)									int button = buttons1->__get(_g2);
HXDLIN( 606)									_g2 = (_g2 + 1);
HXDLIN( 606)									action2->addGamepad(button,state2,id1);
            								}
            							}
            						}
            						break;
            						case (int)2: {
HXLINE( 606)							{
HXLINE( 606)								 ::flixel::input::actions::FlxActionDigital action = this->_right;
HXDLIN( 606)								int state = 1;
HXDLIN( 606)								int _g = 0;
HXDLIN( 606)								while((_g < buttons1->length)){
HXLINE( 606)									int button = buttons1->__get(_g);
HXDLIN( 606)									_g = (_g + 1);
HXDLIN( 606)									action->addGamepad(button,state,id1);
            								}
            							}
HXDLIN( 606)							{
HXLINE( 606)								 ::flixel::input::actions::FlxActionDigital action1 = this->_rightP;
HXDLIN( 606)								int state1 = 2;
HXDLIN( 606)								int _g1 = 0;
HXDLIN( 606)								while((_g1 < buttons1->length)){
HXLINE( 606)									int button = buttons1->__get(_g1);
HXDLIN( 606)									_g1 = (_g1 + 1);
HXDLIN( 606)									action1->addGamepad(button,state1,id1);
            								}
            							}
HXDLIN( 606)							{
HXLINE( 606)								 ::flixel::input::actions::FlxActionDigital action2 = this->_rightR;
HXDLIN( 606)								int state2 = -1;
HXDLIN( 606)								int _g2 = 0;
HXDLIN( 606)								while((_g2 < buttons1->length)){
HXLINE( 606)									int button = buttons1->__get(_g2);
HXDLIN( 606)									_g2 = (_g2 + 1);
HXDLIN( 606)									action2->addGamepad(button,state2,id1);
            								}
            							}
            						}
            						break;
            						case (int)3: {
HXLINE( 606)							{
HXLINE( 606)								 ::flixel::input::actions::FlxActionDigital action = this->_down;
HXDLIN( 606)								int state = 1;
HXDLIN( 606)								int _g = 0;
HXDLIN( 606)								while((_g < buttons1->length)){
HXLINE( 606)									int button = buttons1->__get(_g);
HXDLIN( 606)									_g = (_g + 1);
HXDLIN( 606)									action->addGamepad(button,state,id1);
            								}
            							}
HXDLIN( 606)							{
HXLINE( 606)								 ::flixel::input::actions::FlxActionDigital action1 = this->_downP;
HXDLIN( 606)								int state1 = 2;
HXDLIN( 606)								int _g1 = 0;
HXDLIN( 606)								while((_g1 < buttons1->length)){
HXLINE( 606)									int button = buttons1->__get(_g1);
HXDLIN( 606)									_g1 = (_g1 + 1);
HXDLIN( 606)									action1->addGamepad(button,state1,id1);
            								}
            							}
HXDLIN( 606)							{
HXLINE( 606)								 ::flixel::input::actions::FlxActionDigital action2 = this->_downR;
HXDLIN( 606)								int state2 = -1;
HXDLIN( 606)								int _g2 = 0;
HXDLIN( 606)								while((_g2 < buttons1->length)){
HXLINE( 606)									int button = buttons1->__get(_g2);
HXDLIN( 606)									_g2 = (_g2 + 1);
HXDLIN( 606)									action2->addGamepad(button,state2,id1);
            								}
            							}
            						}
            						break;
            						case (int)4: {
HXLINE( 606)							 ::flixel::input::actions::FlxActionDigital action = this->_reset;
HXDLIN( 606)							int state = 2;
HXDLIN( 606)							int _g = 0;
HXDLIN( 606)							while((_g < buttons1->length)){
HXLINE( 606)								int button = buttons1->__get(_g);
HXDLIN( 606)								_g = (_g + 1);
HXDLIN( 606)								action->addGamepad(button,state,id1);
            							}
            						}
            						break;
            						case (int)5: {
HXLINE( 606)							 ::flixel::input::actions::FlxActionDigital action = this->_accept;
HXDLIN( 606)							int state = 2;
HXDLIN( 606)							int _g = 0;
HXDLIN( 606)							while((_g < buttons1->length)){
HXLINE( 606)								int button = buttons1->__get(_g);
HXDLIN( 606)								_g = (_g + 1);
HXDLIN( 606)								action->addGamepad(button,state,id1);
            							}
            						}
            						break;
            						case (int)6: {
HXLINE( 606)							 ::flixel::input::actions::FlxActionDigital action = this->_back;
HXDLIN( 606)							int state = 2;
HXDLIN( 606)							int _g = 0;
HXDLIN( 606)							while((_g < buttons1->length)){
HXLINE( 606)								int button = buttons1->__get(_g);
HXDLIN( 606)								_g = (_g + 1);
HXDLIN( 606)								action->addGamepad(button,state,id1);
            							}
            						}
            						break;
            						case (int)7: {
HXLINE( 606)							 ::flixel::input::actions::FlxActionDigital action = this->_pause;
HXDLIN( 606)							int state = 2;
HXDLIN( 606)							int _g = 0;
HXDLIN( 606)							while((_g < buttons1->length)){
HXLINE( 606)								int button = buttons1->__get(_g);
HXDLIN( 606)								_g = (_g + 1);
HXDLIN( 606)								action->addGamepad(button,state,id1);
            							}
            						}
            						break;
            						case (int)8: {
HXLINE( 606)							 ::flixel::input::actions::FlxActionDigital action = this->_cheat;
HXDLIN( 606)							int state = 2;
HXDLIN( 606)							int _g = 0;
HXDLIN( 606)							while((_g < buttons1->length)){
HXLINE( 606)								int button = buttons1->__get(_g);
HXDLIN( 606)								_g = (_g + 1);
HXDLIN( 606)								action->addGamepad(button,state,id1);
            							}
            						}
            						break;
            					}
            				}
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC2(Controls_obj,addGamepad,(void))

void Controls_obj::addGamepadLiteral(int id, ::haxe::ds::EnumValueMap buttonMap){
            	HX_STACKFRAME(&_hx_pos_948b5caa279cd923_614_addGamepadLiteral)
HXLINE( 615)		this->gamepadsAdded->push(id);
HXLINE( 618)		{
HXLINE( 618)			::Dynamic map = buttonMap;
HXDLIN( 618)			::Dynamic _g_map = map;
HXDLIN( 618)			 ::Dynamic _g_keys = ::haxe::IMap_obj::keys(map);
HXDLIN( 618)			while(( (bool)(_g_keys->__Field(HX_("hasNext",6d,a5,46,18),::hx::paccDynamic)()) )){
HXLINE( 618)				 ::Control key = _g_keys->__Field(HX_("next",f3,84,02,49),::hx::paccDynamic)();
HXDLIN( 618)				::Array< int > _g1_value = ( (::Array< int >)(::haxe::IMap_obj::get(_g_map,key)) );
HXDLIN( 618)				 ::Control _g1_key = key;
HXDLIN( 618)				 ::Control control = _g1_key;
HXDLIN( 618)				::Array< int > buttons = _g1_value;
HXLINE( 619)				{
HXLINE( 619)					int id1 = id;
HXDLIN( 619)					::Array< int > buttons1 = buttons;
HXDLIN( 619)					switch((int)(control->_hx_getIndex())){
            						case (int)0: {
HXLINE( 619)							{
HXLINE( 619)								 ::flixel::input::actions::FlxActionDigital action = this->_up;
HXDLIN( 619)								int state = 1;
HXDLIN( 619)								int _g = 0;
HXDLIN( 619)								while((_g < buttons1->length)){
HXLINE( 619)									int button = buttons1->__get(_g);
HXDLIN( 619)									_g = (_g + 1);
HXDLIN( 619)									action->addGamepad(button,state,id1);
            								}
            							}
HXDLIN( 619)							{
HXLINE( 619)								 ::flixel::input::actions::FlxActionDigital action1 = this->_upP;
HXDLIN( 619)								int state1 = 2;
HXDLIN( 619)								int _g1 = 0;
HXDLIN( 619)								while((_g1 < buttons1->length)){
HXLINE( 619)									int button = buttons1->__get(_g1);
HXDLIN( 619)									_g1 = (_g1 + 1);
HXDLIN( 619)									action1->addGamepad(button,state1,id1);
            								}
            							}
HXDLIN( 619)							{
HXLINE( 619)								 ::flixel::input::actions::FlxActionDigital action2 = this->_upR;
HXDLIN( 619)								int state2 = -1;
HXDLIN( 619)								int _g2 = 0;
HXDLIN( 619)								while((_g2 < buttons1->length)){
HXLINE( 619)									int button = buttons1->__get(_g2);
HXDLIN( 619)									_g2 = (_g2 + 1);
HXDLIN( 619)									action2->addGamepad(button,state2,id1);
            								}
            							}
            						}
            						break;
            						case (int)1: {
HXLINE( 619)							{
HXLINE( 619)								 ::flixel::input::actions::FlxActionDigital action = this->_left;
HXDLIN( 619)								int state = 1;
HXDLIN( 619)								int _g = 0;
HXDLIN( 619)								while((_g < buttons1->length)){
HXLINE( 619)									int button = buttons1->__get(_g);
HXDLIN( 619)									_g = (_g + 1);
HXDLIN( 619)									action->addGamepad(button,state,id1);
            								}
            							}
HXDLIN( 619)							{
HXLINE( 619)								 ::flixel::input::actions::FlxActionDigital action1 = this->_leftP;
HXDLIN( 619)								int state1 = 2;
HXDLIN( 619)								int _g1 = 0;
HXDLIN( 619)								while((_g1 < buttons1->length)){
HXLINE( 619)									int button = buttons1->__get(_g1);
HXDLIN( 619)									_g1 = (_g1 + 1);
HXDLIN( 619)									action1->addGamepad(button,state1,id1);
            								}
            							}
HXDLIN( 619)							{
HXLINE( 619)								 ::flixel::input::actions::FlxActionDigital action2 = this->_leftR;
HXDLIN( 619)								int state2 = -1;
HXDLIN( 619)								int _g2 = 0;
HXDLIN( 619)								while((_g2 < buttons1->length)){
HXLINE( 619)									int button = buttons1->__get(_g2);
HXDLIN( 619)									_g2 = (_g2 + 1);
HXDLIN( 619)									action2->addGamepad(button,state2,id1);
            								}
            							}
            						}
            						break;
            						case (int)2: {
HXLINE( 619)							{
HXLINE( 619)								 ::flixel::input::actions::FlxActionDigital action = this->_right;
HXDLIN( 619)								int state = 1;
HXDLIN( 619)								int _g = 0;
HXDLIN( 619)								while((_g < buttons1->length)){
HXLINE( 619)									int button = buttons1->__get(_g);
HXDLIN( 619)									_g = (_g + 1);
HXDLIN( 619)									action->addGamepad(button,state,id1);
            								}
            							}
HXDLIN( 619)							{
HXLINE( 619)								 ::flixel::input::actions::FlxActionDigital action1 = this->_rightP;
HXDLIN( 619)								int state1 = 2;
HXDLIN( 619)								int _g1 = 0;
HXDLIN( 619)								while((_g1 < buttons1->length)){
HXLINE( 619)									int button = buttons1->__get(_g1);
HXDLIN( 619)									_g1 = (_g1 + 1);
HXDLIN( 619)									action1->addGamepad(button,state1,id1);
            								}
            							}
HXDLIN( 619)							{
HXLINE( 619)								 ::flixel::input::actions::FlxActionDigital action2 = this->_rightR;
HXDLIN( 619)								int state2 = -1;
HXDLIN( 619)								int _g2 = 0;
HXDLIN( 619)								while((_g2 < buttons1->length)){
HXLINE( 619)									int button = buttons1->__get(_g2);
HXDLIN( 619)									_g2 = (_g2 + 1);
HXDLIN( 619)									action2->addGamepad(button,state2,id1);
            								}
            							}
            						}
            						break;
            						case (int)3: {
HXLINE( 619)							{
HXLINE( 619)								 ::flixel::input::actions::FlxActionDigital action = this->_down;
HXDLIN( 619)								int state = 1;
HXDLIN( 619)								int _g = 0;
HXDLIN( 619)								while((_g < buttons1->length)){
HXLINE( 619)									int button = buttons1->__get(_g);
HXDLIN( 619)									_g = (_g + 1);
HXDLIN( 619)									action->addGamepad(button,state,id1);
            								}
            							}
HXDLIN( 619)							{
HXLINE( 619)								 ::flixel::input::actions::FlxActionDigital action1 = this->_downP;
HXDLIN( 619)								int state1 = 2;
HXDLIN( 619)								int _g1 = 0;
HXDLIN( 619)								while((_g1 < buttons1->length)){
HXLINE( 619)									int button = buttons1->__get(_g1);
HXDLIN( 619)									_g1 = (_g1 + 1);
HXDLIN( 619)									action1->addGamepad(button,state1,id1);
            								}
            							}
HXDLIN( 619)							{
HXLINE( 619)								 ::flixel::input::actions::FlxActionDigital action2 = this->_downR;
HXDLIN( 619)								int state2 = -1;
HXDLIN( 619)								int _g2 = 0;
HXDLIN( 619)								while((_g2 < buttons1->length)){
HXLINE( 619)									int button = buttons1->__get(_g2);
HXDLIN( 619)									_g2 = (_g2 + 1);
HXDLIN( 619)									action2->addGamepad(button,state2,id1);
            								}
            							}
            						}
            						break;
            						case (int)4: {
HXLINE( 619)							 ::flixel::input::actions::FlxActionDigital action = this->_reset;
HXDLIN( 619)							int state = 2;
HXDLIN( 619)							int _g = 0;
HXDLIN( 619)							while((_g < buttons1->length)){
HXLINE( 619)								int button = buttons1->__get(_g);
HXDLIN( 619)								_g = (_g + 1);
HXDLIN( 619)								action->addGamepad(button,state,id1);
            							}
            						}
            						break;
            						case (int)5: {
HXLINE( 619)							 ::flixel::input::actions::FlxActionDigital action = this->_accept;
HXDLIN( 619)							int state = 2;
HXDLIN( 619)							int _g = 0;
HXDLIN( 619)							while((_g < buttons1->length)){
HXLINE( 619)								int button = buttons1->__get(_g);
HXDLIN( 619)								_g = (_g + 1);
HXDLIN( 619)								action->addGamepad(button,state,id1);
            							}
            						}
            						break;
            						case (int)6: {
HXLINE( 619)							 ::flixel::input::actions::FlxActionDigital action = this->_back;
HXDLIN( 619)							int state = 2;
HXDLIN( 619)							int _g = 0;
HXDLIN( 619)							while((_g < buttons1->length)){
HXLINE( 619)								int button = buttons1->__get(_g);
HXDLIN( 619)								_g = (_g + 1);
HXDLIN( 619)								action->addGamepad(button,state,id1);
            							}
            						}
            						break;
            						case (int)7: {
HXLINE( 619)							 ::flixel::input::actions::FlxActionDigital action = this->_pause;
HXDLIN( 619)							int state = 2;
HXDLIN( 619)							int _g = 0;
HXDLIN( 619)							while((_g < buttons1->length)){
HXLINE( 619)								int button = buttons1->__get(_g);
HXDLIN( 619)								_g = (_g + 1);
HXDLIN( 619)								action->addGamepad(button,state,id1);
            							}
            						}
            						break;
            						case (int)8: {
HXLINE( 619)							 ::flixel::input::actions::FlxActionDigital action = this->_cheat;
HXDLIN( 619)							int state = 2;
HXDLIN( 619)							int _g = 0;
HXDLIN( 619)							while((_g < buttons1->length)){
HXLINE( 619)								int button = buttons1->__get(_g);
HXDLIN( 619)								_g = (_g + 1);
HXDLIN( 619)								action->addGamepad(button,state,id1);
            							}
            						}
            						break;
            					}
            				}
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC2(Controls_obj,addGamepadLiteral,(void))

void Controls_obj::removeGamepad(::hx::Null< int >  __o_deviceID){
            		int deviceID = __o_deviceID.Default(-1);
            	HX_STACKFRAME(&_hx_pos_948b5caa279cd923_627_removeGamepad)
HXLINE( 628)		{
HXLINE( 628)			int _g = 0;
HXDLIN( 628)			::Array< ::Dynamic> _g1 = this->digitalActions;
HXDLIN( 628)			while((_g < _g1->length)){
HXLINE( 628)				 ::flixel::input::actions::FlxActionDigital action = _g1->__get(_g).StaticCast<  ::flixel::input::actions::FlxActionDigital >();
HXDLIN( 628)				_g = (_g + 1);
HXLINE( 630)				int i = action->inputs->length;
HXLINE( 631)				while(true){
HXLINE( 631)					i = (i - 1);
HXDLIN( 631)					if (!(((i + 1) > 0))) {
HXLINE( 631)						goto _hx_goto_234;
            					}
HXLINE( 633)					 ::flixel::input::actions::FlxActionInput input = action->inputs->__get(i).StaticCast<  ::flixel::input::actions::FlxActionInput >();
HXLINE( 634)					bool _hx_tmp;
HXDLIN( 634)					if (::hx::IsPointerEq( input->device,::flixel::input::actions::FlxInputDevice_obj::GAMEPAD_dyn() )) {
HXLINE( 634)						if ((deviceID != -1)) {
HXLINE( 634)							_hx_tmp = (input->deviceID == deviceID);
            						}
            						else {
HXLINE( 634)							_hx_tmp = true;
            						}
            					}
            					else {
HXLINE( 634)						_hx_tmp = false;
            					}
HXDLIN( 634)					if (_hx_tmp) {
HXLINE( 635)						action->remove(input,null());
            					}
            				}
            				_hx_goto_234:;
            			}
            		}
HXLINE( 639)		this->gamepadsAdded->remove(deviceID);
            	}


HX_DEFINE_DYNAMIC_FUNC1(Controls_obj,removeGamepad,(void))

void Controls_obj::addDefaultGamepad(int id){
            	HX_GC_STACKFRAME(&_hx_pos_948b5caa279cd923_645_addDefaultGamepad)
HXDLIN( 645)		 ::haxe::ds::EnumValueMap _g =  ::haxe::ds::EnumValueMap_obj::__alloc( HX_CTX );
HXDLIN( 645)		_g->set(::Control_obj::ACCEPT_dyn(),::Array_obj< int >::fromData( _hx_array_data_116e4296_255,1));
HXDLIN( 645)		_g->set(::Control_obj::BACK_dyn(),::Array_obj< int >::fromData( _hx_array_data_116e4296_256,1));
HXDLIN( 645)		_g->set(::Control_obj::UP_dyn(),::Array_obj< int >::fromData( _hx_array_data_116e4296_257,2));
HXDLIN( 645)		_g->set(::Control_obj::DOWN_dyn(),::Array_obj< int >::fromData( _hx_array_data_116e4296_258,2));
HXDLIN( 645)		_g->set(::Control_obj::LEFT_dyn(),::Array_obj< int >::fromData( _hx_array_data_116e4296_259,2));
HXDLIN( 645)		_g->set(::Control_obj::RIGHT_dyn(),::Array_obj< int >::fromData( _hx_array_data_116e4296_260,2));
HXDLIN( 645)		_g->set(::Control_obj::PAUSE_dyn(),::Array_obj< int >::fromData( _hx_array_data_116e4296_261,1));
HXDLIN( 645)		_g->set(::Control_obj::RESET_dyn(),::Array_obj< int >::fromData( _hx_array_data_116e4296_262,1));
HXDLIN( 645)		this->gamepadsAdded->push(id);
HXDLIN( 645)		{
HXDLIN( 645)			::Dynamic map = _g;
HXDLIN( 645)			::Dynamic _g_map = map;
HXDLIN( 645)			 ::Dynamic _g_keys = ::haxe::IMap_obj::keys(map);
HXDLIN( 645)			while(( (bool)(_g_keys->__Field(HX_("hasNext",6d,a5,46,18),::hx::paccDynamic)()) )){
HXDLIN( 645)				 ::Control key = _g_keys->__Field(HX_("next",f3,84,02,49),::hx::paccDynamic)();
HXDLIN( 645)				::Array< int > _g1_value = ( (::Array< int >)(::haxe::IMap_obj::get(_g_map,key)) );
HXDLIN( 645)				 ::Control _g1_key = key;
HXDLIN( 645)				 ::Control control = _g1_key;
HXDLIN( 645)				::Array< int > buttons = _g1_value;
HXDLIN( 645)				{
HXDLIN( 645)					int id1 = id;
HXDLIN( 645)					::Array< int > buttons1 = buttons;
HXDLIN( 645)					switch((int)(control->_hx_getIndex())){
            						case (int)0: {
HXDLIN( 645)							{
HXDLIN( 645)								 ::flixel::input::actions::FlxActionDigital action = this->_up;
HXDLIN( 645)								int state = 1;
HXDLIN( 645)								int _g = 0;
HXDLIN( 645)								while((_g < buttons1->length)){
HXDLIN( 645)									int button = buttons1->__get(_g);
HXDLIN( 645)									_g = (_g + 1);
HXDLIN( 645)									action->addGamepad(button,state,id1);
            								}
            							}
HXDLIN( 645)							{
HXDLIN( 645)								 ::flixel::input::actions::FlxActionDigital action1 = this->_upP;
HXDLIN( 645)								int state1 = 2;
HXDLIN( 645)								int _g1 = 0;
HXDLIN( 645)								while((_g1 < buttons1->length)){
HXDLIN( 645)									int button = buttons1->__get(_g1);
HXDLIN( 645)									_g1 = (_g1 + 1);
HXDLIN( 645)									action1->addGamepad(button,state1,id1);
            								}
            							}
HXDLIN( 645)							{
HXDLIN( 645)								 ::flixel::input::actions::FlxActionDigital action2 = this->_upR;
HXDLIN( 645)								int state2 = -1;
HXDLIN( 645)								int _g2 = 0;
HXDLIN( 645)								while((_g2 < buttons1->length)){
HXDLIN( 645)									int button = buttons1->__get(_g2);
HXDLIN( 645)									_g2 = (_g2 + 1);
HXDLIN( 645)									action2->addGamepad(button,state2,id1);
            								}
            							}
            						}
            						break;
            						case (int)1: {
HXDLIN( 645)							{
HXDLIN( 645)								 ::flixel::input::actions::FlxActionDigital action = this->_left;
HXDLIN( 645)								int state = 1;
HXDLIN( 645)								int _g = 0;
HXDLIN( 645)								while((_g < buttons1->length)){
HXDLIN( 645)									int button = buttons1->__get(_g);
HXDLIN( 645)									_g = (_g + 1);
HXDLIN( 645)									action->addGamepad(button,state,id1);
            								}
            							}
HXDLIN( 645)							{
HXDLIN( 645)								 ::flixel::input::actions::FlxActionDigital action1 = this->_leftP;
HXDLIN( 645)								int state1 = 2;
HXDLIN( 645)								int _g1 = 0;
HXDLIN( 645)								while((_g1 < buttons1->length)){
HXDLIN( 645)									int button = buttons1->__get(_g1);
HXDLIN( 645)									_g1 = (_g1 + 1);
HXDLIN( 645)									action1->addGamepad(button,state1,id1);
            								}
            							}
HXDLIN( 645)							{
HXDLIN( 645)								 ::flixel::input::actions::FlxActionDigital action2 = this->_leftR;
HXDLIN( 645)								int state2 = -1;
HXDLIN( 645)								int _g2 = 0;
HXDLIN( 645)								while((_g2 < buttons1->length)){
HXDLIN( 645)									int button = buttons1->__get(_g2);
HXDLIN( 645)									_g2 = (_g2 + 1);
HXDLIN( 645)									action2->addGamepad(button,state2,id1);
            								}
            							}
            						}
            						break;
            						case (int)2: {
HXDLIN( 645)							{
HXDLIN( 645)								 ::flixel::input::actions::FlxActionDigital action = this->_right;
HXDLIN( 645)								int state = 1;
HXDLIN( 645)								int _g = 0;
HXDLIN( 645)								while((_g < buttons1->length)){
HXDLIN( 645)									int button = buttons1->__get(_g);
HXDLIN( 645)									_g = (_g + 1);
HXDLIN( 645)									action->addGamepad(button,state,id1);
            								}
            							}
HXDLIN( 645)							{
HXDLIN( 645)								 ::flixel::input::actions::FlxActionDigital action1 = this->_rightP;
HXDLIN( 645)								int state1 = 2;
HXDLIN( 645)								int _g1 = 0;
HXDLIN( 645)								while((_g1 < buttons1->length)){
HXDLIN( 645)									int button = buttons1->__get(_g1);
HXDLIN( 645)									_g1 = (_g1 + 1);
HXDLIN( 645)									action1->addGamepad(button,state1,id1);
            								}
            							}
HXDLIN( 645)							{
HXDLIN( 645)								 ::flixel::input::actions::FlxActionDigital action2 = this->_rightR;
HXDLIN( 645)								int state2 = -1;
HXDLIN( 645)								int _g2 = 0;
HXDLIN( 645)								while((_g2 < buttons1->length)){
HXDLIN( 645)									int button = buttons1->__get(_g2);
HXDLIN( 645)									_g2 = (_g2 + 1);
HXDLIN( 645)									action2->addGamepad(button,state2,id1);
            								}
            							}
            						}
            						break;
            						case (int)3: {
HXDLIN( 645)							{
HXDLIN( 645)								 ::flixel::input::actions::FlxActionDigital action = this->_down;
HXDLIN( 645)								int state = 1;
HXDLIN( 645)								int _g = 0;
HXDLIN( 645)								while((_g < buttons1->length)){
HXDLIN( 645)									int button = buttons1->__get(_g);
HXDLIN( 645)									_g = (_g + 1);
HXDLIN( 645)									action->addGamepad(button,state,id1);
            								}
            							}
HXDLIN( 645)							{
HXDLIN( 645)								 ::flixel::input::actions::FlxActionDigital action1 = this->_downP;
HXDLIN( 645)								int state1 = 2;
HXDLIN( 645)								int _g1 = 0;
HXDLIN( 645)								while((_g1 < buttons1->length)){
HXDLIN( 645)									int button = buttons1->__get(_g1);
HXDLIN( 645)									_g1 = (_g1 + 1);
HXDLIN( 645)									action1->addGamepad(button,state1,id1);
            								}
            							}
HXDLIN( 645)							{
HXDLIN( 645)								 ::flixel::input::actions::FlxActionDigital action2 = this->_downR;
HXDLIN( 645)								int state2 = -1;
HXDLIN( 645)								int _g2 = 0;
HXDLIN( 645)								while((_g2 < buttons1->length)){
HXDLIN( 645)									int button = buttons1->__get(_g2);
HXDLIN( 645)									_g2 = (_g2 + 1);
HXDLIN( 645)									action2->addGamepad(button,state2,id1);
            								}
            							}
            						}
            						break;
            						case (int)4: {
HXDLIN( 645)							 ::flixel::input::actions::FlxActionDigital action = this->_reset;
HXDLIN( 645)							int state = 2;
HXDLIN( 645)							int _g = 0;
HXDLIN( 645)							while((_g < buttons1->length)){
HXDLIN( 645)								int button = buttons1->__get(_g);
HXDLIN( 645)								_g = (_g + 1);
HXDLIN( 645)								action->addGamepad(button,state,id1);
            							}
            						}
            						break;
            						case (int)5: {
HXDLIN( 645)							 ::flixel::input::actions::FlxActionDigital action = this->_accept;
HXDLIN( 645)							int state = 2;
HXDLIN( 645)							int _g = 0;
HXDLIN( 645)							while((_g < buttons1->length)){
HXDLIN( 645)								int button = buttons1->__get(_g);
HXDLIN( 645)								_g = (_g + 1);
HXDLIN( 645)								action->addGamepad(button,state,id1);
            							}
            						}
            						break;
            						case (int)6: {
HXDLIN( 645)							 ::flixel::input::actions::FlxActionDigital action = this->_back;
HXDLIN( 645)							int state = 2;
HXDLIN( 645)							int _g = 0;
HXDLIN( 645)							while((_g < buttons1->length)){
HXDLIN( 645)								int button = buttons1->__get(_g);
HXDLIN( 645)								_g = (_g + 1);
HXDLIN( 645)								action->addGamepad(button,state,id1);
            							}
            						}
            						break;
            						case (int)7: {
HXDLIN( 645)							 ::flixel::input::actions::FlxActionDigital action = this->_pause;
HXDLIN( 645)							int state = 2;
HXDLIN( 645)							int _g = 0;
HXDLIN( 645)							while((_g < buttons1->length)){
HXDLIN( 645)								int button = buttons1->__get(_g);
HXDLIN( 645)								_g = (_g + 1);
HXDLIN( 645)								action->addGamepad(button,state,id1);
            							}
            						}
            						break;
            						case (int)8: {
HXDLIN( 645)							 ::flixel::input::actions::FlxActionDigital action = this->_cheat;
HXDLIN( 645)							int state = 2;
HXDLIN( 645)							int _g = 0;
HXDLIN( 645)							while((_g < buttons1->length)){
HXDLIN( 645)								int button = buttons1->__get(_g);
HXDLIN( 645)								_g = (_g + 1);
HXDLIN( 645)								action->addGamepad(button,state,id1);
            							}
            						}
            						break;
            					}
            				}
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(Controls_obj,addDefaultGamepad,(void))

void Controls_obj::bindButtons( ::Control control,int id,::Array< int > buttons){
            	HX_STACKFRAME(&_hx_pos_948b5caa279cd923_679_bindButtons)
HXDLIN( 679)		switch((int)(control->_hx_getIndex())){
            			case (int)0: {
HXDLIN( 679)				{
HXDLIN( 679)					 ::flixel::input::actions::FlxActionDigital action = this->_up;
HXDLIN( 679)					int state = 1;
HXDLIN( 679)					int _g = 0;
HXDLIN( 679)					while((_g < buttons->length)){
HXDLIN( 679)						int button = buttons->__get(_g);
HXDLIN( 679)						_g = (_g + 1);
HXDLIN( 679)						action->addGamepad(button,state,id);
            					}
            				}
HXDLIN( 679)				{
HXDLIN( 679)					 ::flixel::input::actions::FlxActionDigital action1 = this->_upP;
HXDLIN( 679)					int state1 = 2;
HXDLIN( 679)					int _g1 = 0;
HXDLIN( 679)					while((_g1 < buttons->length)){
HXDLIN( 679)						int button = buttons->__get(_g1);
HXDLIN( 679)						_g1 = (_g1 + 1);
HXDLIN( 679)						action1->addGamepad(button,state1,id);
            					}
            				}
HXDLIN( 679)				{
HXDLIN( 679)					 ::flixel::input::actions::FlxActionDigital action2 = this->_upR;
HXDLIN( 679)					int state2 = -1;
HXDLIN( 679)					int _g2 = 0;
HXDLIN( 679)					while((_g2 < buttons->length)){
HXDLIN( 679)						int button = buttons->__get(_g2);
HXDLIN( 679)						_g2 = (_g2 + 1);
HXDLIN( 679)						action2->addGamepad(button,state2,id);
            					}
            				}
            			}
            			break;
            			case (int)1: {
HXDLIN( 679)				{
HXDLIN( 679)					 ::flixel::input::actions::FlxActionDigital action = this->_left;
HXDLIN( 679)					int state = 1;
HXDLIN( 679)					int _g = 0;
HXDLIN( 679)					while((_g < buttons->length)){
HXDLIN( 679)						int button = buttons->__get(_g);
HXDLIN( 679)						_g = (_g + 1);
HXDLIN( 679)						action->addGamepad(button,state,id);
            					}
            				}
HXDLIN( 679)				{
HXDLIN( 679)					 ::flixel::input::actions::FlxActionDigital action1 = this->_leftP;
HXDLIN( 679)					int state1 = 2;
HXDLIN( 679)					int _g1 = 0;
HXDLIN( 679)					while((_g1 < buttons->length)){
HXDLIN( 679)						int button = buttons->__get(_g1);
HXDLIN( 679)						_g1 = (_g1 + 1);
HXDLIN( 679)						action1->addGamepad(button,state1,id);
            					}
            				}
HXDLIN( 679)				{
HXDLIN( 679)					 ::flixel::input::actions::FlxActionDigital action2 = this->_leftR;
HXDLIN( 679)					int state2 = -1;
HXDLIN( 679)					int _g2 = 0;
HXDLIN( 679)					while((_g2 < buttons->length)){
HXDLIN( 679)						int button = buttons->__get(_g2);
HXDLIN( 679)						_g2 = (_g2 + 1);
HXDLIN( 679)						action2->addGamepad(button,state2,id);
            					}
            				}
            			}
            			break;
            			case (int)2: {
HXDLIN( 679)				{
HXDLIN( 679)					 ::flixel::input::actions::FlxActionDigital action = this->_right;
HXDLIN( 679)					int state = 1;
HXDLIN( 679)					int _g = 0;
HXDLIN( 679)					while((_g < buttons->length)){
HXDLIN( 679)						int button = buttons->__get(_g);
HXDLIN( 679)						_g = (_g + 1);
HXDLIN( 679)						action->addGamepad(button,state,id);
            					}
            				}
HXDLIN( 679)				{
HXDLIN( 679)					 ::flixel::input::actions::FlxActionDigital action1 = this->_rightP;
HXDLIN( 679)					int state1 = 2;
HXDLIN( 679)					int _g1 = 0;
HXDLIN( 679)					while((_g1 < buttons->length)){
HXDLIN( 679)						int button = buttons->__get(_g1);
HXDLIN( 679)						_g1 = (_g1 + 1);
HXDLIN( 679)						action1->addGamepad(button,state1,id);
            					}
            				}
HXDLIN( 679)				{
HXDLIN( 679)					 ::flixel::input::actions::FlxActionDigital action2 = this->_rightR;
HXDLIN( 679)					int state2 = -1;
HXDLIN( 679)					int _g2 = 0;
HXDLIN( 679)					while((_g2 < buttons->length)){
HXDLIN( 679)						int button = buttons->__get(_g2);
HXDLIN( 679)						_g2 = (_g2 + 1);
HXDLIN( 679)						action2->addGamepad(button,state2,id);
            					}
            				}
            			}
            			break;
            			case (int)3: {
HXDLIN( 679)				{
HXDLIN( 679)					 ::flixel::input::actions::FlxActionDigital action = this->_down;
HXDLIN( 679)					int state = 1;
HXDLIN( 679)					int _g = 0;
HXDLIN( 679)					while((_g < buttons->length)){
HXDLIN( 679)						int button = buttons->__get(_g);
HXDLIN( 679)						_g = (_g + 1);
HXDLIN( 679)						action->addGamepad(button,state,id);
            					}
            				}
HXDLIN( 679)				{
HXDLIN( 679)					 ::flixel::input::actions::FlxActionDigital action1 = this->_downP;
HXDLIN( 679)					int state1 = 2;
HXDLIN( 679)					int _g1 = 0;
HXDLIN( 679)					while((_g1 < buttons->length)){
HXDLIN( 679)						int button = buttons->__get(_g1);
HXDLIN( 679)						_g1 = (_g1 + 1);
HXDLIN( 679)						action1->addGamepad(button,state1,id);
            					}
            				}
HXDLIN( 679)				{
HXDLIN( 679)					 ::flixel::input::actions::FlxActionDigital action2 = this->_downR;
HXDLIN( 679)					int state2 = -1;
HXDLIN( 679)					int _g2 = 0;
HXDLIN( 679)					while((_g2 < buttons->length)){
HXDLIN( 679)						int button = buttons->__get(_g2);
HXDLIN( 679)						_g2 = (_g2 + 1);
HXDLIN( 679)						action2->addGamepad(button,state2,id);
            					}
            				}
            			}
            			break;
            			case (int)4: {
HXDLIN( 679)				 ::flixel::input::actions::FlxActionDigital action = this->_reset;
HXDLIN( 679)				int state = 2;
HXDLIN( 679)				int _g = 0;
HXDLIN( 679)				while((_g < buttons->length)){
HXDLIN( 679)					int button = buttons->__get(_g);
HXDLIN( 679)					_g = (_g + 1);
HXDLIN( 679)					action->addGamepad(button,state,id);
            				}
            			}
            			break;
            			case (int)5: {
HXDLIN( 679)				 ::flixel::input::actions::FlxActionDigital action = this->_accept;
HXDLIN( 679)				int state = 2;
HXDLIN( 679)				int _g = 0;
HXDLIN( 679)				while((_g < buttons->length)){
HXDLIN( 679)					int button = buttons->__get(_g);
HXDLIN( 679)					_g = (_g + 1);
HXDLIN( 679)					action->addGamepad(button,state,id);
            				}
            			}
            			break;
            			case (int)6: {
HXDLIN( 679)				 ::flixel::input::actions::FlxActionDigital action = this->_back;
HXDLIN( 679)				int state = 2;
HXDLIN( 679)				int _g = 0;
HXDLIN( 679)				while((_g < buttons->length)){
HXDLIN( 679)					int button = buttons->__get(_g);
HXDLIN( 679)					_g = (_g + 1);
HXDLIN( 679)					action->addGamepad(button,state,id);
            				}
            			}
            			break;
            			case (int)7: {
HXDLIN( 679)				 ::flixel::input::actions::FlxActionDigital action = this->_pause;
HXDLIN( 679)				int state = 2;
HXDLIN( 679)				int _g = 0;
HXDLIN( 679)				while((_g < buttons->length)){
HXDLIN( 679)					int button = buttons->__get(_g);
HXDLIN( 679)					_g = (_g + 1);
HXDLIN( 679)					action->addGamepad(button,state,id);
            				}
            			}
            			break;
            			case (int)8: {
HXDLIN( 679)				 ::flixel::input::actions::FlxActionDigital action = this->_cheat;
HXDLIN( 679)				int state = 2;
HXDLIN( 679)				int _g = 0;
HXDLIN( 679)				while((_g < buttons->length)){
HXDLIN( 679)					int button = buttons->__get(_g);
HXDLIN( 679)					_g = (_g + 1);
HXDLIN( 679)					action->addGamepad(button,state,id);
            				}
            			}
            			break;
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC3(Controls_obj,bindButtons,(void))

void Controls_obj::unbindButtons( ::Control control,int gamepadID,::Array< int > buttons){
            	HX_STACKFRAME(&_hx_pos_948b5caa279cd923_692_unbindButtons)
HXDLIN( 692)		switch((int)(control->_hx_getIndex())){
            			case (int)0: {
HXDLIN( 692)				::Controls_obj::removeButtons(this->_up,gamepadID,buttons);
HXDLIN( 692)				::Controls_obj::removeButtons(this->_upP,gamepadID,buttons);
HXDLIN( 692)				::Controls_obj::removeButtons(this->_upR,gamepadID,buttons);
            			}
            			break;
            			case (int)1: {
HXDLIN( 692)				::Controls_obj::removeButtons(this->_left,gamepadID,buttons);
HXDLIN( 692)				::Controls_obj::removeButtons(this->_leftP,gamepadID,buttons);
HXDLIN( 692)				::Controls_obj::removeButtons(this->_leftR,gamepadID,buttons);
            			}
            			break;
            			case (int)2: {
HXDLIN( 692)				::Controls_obj::removeButtons(this->_right,gamepadID,buttons);
HXDLIN( 692)				::Controls_obj::removeButtons(this->_rightP,gamepadID,buttons);
HXDLIN( 692)				::Controls_obj::removeButtons(this->_rightR,gamepadID,buttons);
            			}
            			break;
            			case (int)3: {
HXDLIN( 692)				::Controls_obj::removeButtons(this->_down,gamepadID,buttons);
HXDLIN( 692)				::Controls_obj::removeButtons(this->_downP,gamepadID,buttons);
HXDLIN( 692)				::Controls_obj::removeButtons(this->_downR,gamepadID,buttons);
            			}
            			break;
            			case (int)4: {
HXDLIN( 692)				::Controls_obj::removeButtons(this->_reset,gamepadID,buttons);
            			}
            			break;
            			case (int)5: {
HXDLIN( 692)				::Controls_obj::removeButtons(this->_accept,gamepadID,buttons);
            			}
            			break;
            			case (int)6: {
HXDLIN( 692)				::Controls_obj::removeButtons(this->_back,gamepadID,buttons);
            			}
            			break;
            			case (int)7: {
HXDLIN( 692)				::Controls_obj::removeButtons(this->_pause,gamepadID,buttons);
            			}
            			break;
            			case (int)8: {
HXDLIN( 692)				::Controls_obj::removeButtons(this->_cheat,gamepadID,buttons);
            			}
            			break;
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC3(Controls_obj,unbindButtons,(void))

::Array< int > Controls_obj::getInputsFor( ::Control control, ::Device device,::Array< int > list){
            	HX_STACKFRAME(&_hx_pos_948b5caa279cd923_716_getInputsFor)
HXLINE( 717)		if (::hx::IsNull( list )) {
HXLINE( 718)			list = ::Array_obj< int >::__new(0);
            		}
HXLINE( 720)		switch((int)(device->_hx_getIndex())){
            			case (int)0: {
HXLINE( 723)				int _g = 0;
HXDLIN( 723)				::Array< ::Dynamic> _g1 = this->getActionFromControl(control)->inputs;
HXDLIN( 723)				while((_g < _g1->length)){
HXLINE( 723)					 ::flixel::input::actions::FlxActionInput input = _g1->__get(_g).StaticCast<  ::flixel::input::actions::FlxActionInput >();
HXDLIN( 723)					_g = (_g + 1);
HXLINE( 725)					if (::hx::IsPointerEq( input->device,::flixel::input::actions::FlxInputDevice_obj::KEYBOARD_dyn() )) {
HXLINE( 726)						list->push(input->inputID);
            					}
            				}
            			}
            			break;
            			case (int)1: {
HXLINE( 728)				int id = device->_hx_getInt(0);
HXLINE( 729)				{
HXLINE( 729)					int _g = 0;
HXDLIN( 729)					::Array< ::Dynamic> _g1 = this->getActionFromControl(control)->inputs;
HXDLIN( 729)					while((_g < _g1->length)){
HXLINE( 729)						 ::flixel::input::actions::FlxActionInput input = _g1->__get(_g).StaticCast<  ::flixel::input::actions::FlxActionInput >();
HXDLIN( 729)						_g = (_g + 1);
HXLINE( 731)						if ((input->deviceID == id)) {
HXLINE( 732)							list->push(input->inputID);
            						}
            					}
            				}
            			}
            			break;
            		}
HXLINE( 735)		return list;
            	}


HX_DEFINE_DYNAMIC_FUNC3(Controls_obj,getInputsFor,return )

void Controls_obj::removeDevice( ::Device device){
            	HX_STACKFRAME(&_hx_pos_948b5caa279cd923_740_removeDevice)
HXDLIN( 740)		switch((int)(device->_hx_getIndex())){
            			case (int)0: {
HXLINE( 743)				this->setKeyboardScheme(::KeyboardScheme_obj::None_dyn(),null());
            			}
            			break;
            			case (int)1: {
HXLINE( 744)				int id = device->_hx_getInt(0);
HXLINE( 745)				this->removeGamepad(id);
            			}
            			break;
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(Controls_obj,removeDevice,(void))

void Controls_obj::init(){
            	HX_GC_STACKFRAME(&_hx_pos_948b5caa279cd923_317_init)
HXLINE( 318)		 ::flixel::input::actions::FlxActionManager actions =  ::flixel::input::actions::FlxActionManager_obj::__alloc( HX_CTX );
HXLINE( 319)		::flixel::FlxG_obj::inputs->add_flixel_input_actions_FlxActionManager(actions);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Controls_obj,init,(void))

void Controls_obj::addKeys( ::flixel::input::actions::FlxActionDigital action,::Array< int > keys,int state){
            	HX_STACKFRAME(&_hx_pos_948b5caa279cd923_475_addKeys)
HXDLIN( 475)		int _g = 0;
HXDLIN( 475)		while((_g < keys->length)){
HXDLIN( 475)			int key = keys->__get(_g);
HXDLIN( 475)			_g = (_g + 1);
HXLINE( 476)			action->addKey(key,state);
            		}
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(Controls_obj,addKeys,(void))

void Controls_obj::removeKeys( ::flixel::input::actions::FlxActionDigital action,::Array< int > keys){
            	HX_STACKFRAME(&_hx_pos_948b5caa279cd923_480_removeKeys)
HXLINE( 481)		int i = action->inputs->length;
HXLINE( 482)		while(true){
HXLINE( 482)			i = (i - 1);
HXDLIN( 482)			if (!(((i + 1) > 0))) {
HXLINE( 482)				goto _hx_goto_289;
            			}
HXLINE( 484)			 ::flixel::input::actions::FlxActionInput input = action->inputs->__get(i).StaticCast<  ::flixel::input::actions::FlxActionInput >();
HXLINE( 485)			bool _hx_tmp;
HXDLIN( 485)			if (::hx::IsPointerEq( input->device,::flixel::input::actions::FlxInputDevice_obj::KEYBOARD_dyn() )) {
HXLINE( 485)				_hx_tmp = (keys->indexOf(input->inputID,null()) != -1);
            			}
            			else {
HXLINE( 485)				_hx_tmp = false;
            			}
HXDLIN( 485)			if (_hx_tmp) {
HXLINE( 486)				action->remove(input,null());
            			}
            		}
            		_hx_goto_289:;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Controls_obj,removeKeys,(void))

void Controls_obj::addButtons( ::flixel::input::actions::FlxActionDigital action,::Array< int > buttons,int state,int id){
            	HX_STACKFRAME(&_hx_pos_948b5caa279cd923_700_addButtons)
HXDLIN( 700)		int _g = 0;
HXDLIN( 700)		while((_g < buttons->length)){
HXDLIN( 700)			int button = buttons->__get(_g);
HXDLIN( 700)			_g = (_g + 1);
HXLINE( 701)			action->addGamepad(button,state,id);
            		}
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(Controls_obj,addButtons,(void))

void Controls_obj::removeButtons( ::flixel::input::actions::FlxActionDigital action,int gamepadID,::Array< int > buttons){
            	HX_STACKFRAME(&_hx_pos_948b5caa279cd923_705_removeButtons)
HXLINE( 706)		int i = action->inputs->length;
HXLINE( 707)		while(true){
HXLINE( 707)			i = (i - 1);
HXDLIN( 707)			if (!(((i + 1) > 0))) {
HXLINE( 707)				goto _hx_goto_293;
            			}
HXLINE( 709)			 ::flixel::input::actions::FlxActionInput input = action->inputs->__get(i).StaticCast<  ::flixel::input::actions::FlxActionInput >();
HXLINE( 710)			bool _hx_tmp;
HXDLIN( 710)			bool _hx_tmp1;
HXDLIN( 710)			if (::hx::IsPointerEq( input->device,::flixel::input::actions::FlxInputDevice_obj::GAMEPAD_dyn() )) {
HXLINE( 710)				if ((gamepadID != -1)) {
HXLINE( 710)					_hx_tmp1 = (input->deviceID == gamepadID);
            				}
            				else {
HXLINE( 710)					_hx_tmp1 = true;
            				}
            			}
            			else {
HXLINE( 710)				_hx_tmp1 = false;
            			}
HXDLIN( 710)			if (_hx_tmp1) {
HXLINE( 710)				_hx_tmp = (buttons->indexOf(input->inputID,null()) != -1);
            			}
            			else {
HXLINE( 710)				_hx_tmp = false;
            			}
HXDLIN( 710)			if (_hx_tmp) {
HXLINE( 711)				action->remove(input,null());
            			}
            		}
            		_hx_goto_293:;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(Controls_obj,removeButtons,(void))

bool Controls_obj::isDevice( ::flixel::input::actions::FlxActionInput input, ::Device device){
            	HX_STACKFRAME(&_hx_pos_948b5caa279cd923_751_isDevice)
HXDLIN( 751)		switch((int)(device->_hx_getIndex())){
            			case (int)0: {
HXLINE( 753)				return ::hx::IsPointerEq( input->device,::flixel::input::actions::FlxInputDevice_obj::KEYBOARD_dyn() );
            			}
            			break;
            			case (int)1: {
HXLINE( 754)				int id = device->_hx_getInt(0);
HXDLIN( 754)				if (::hx::IsPointerEq( input->device,::flixel::input::actions::FlxInputDevice_obj::GAMEPAD_dyn() )) {
HXLINE( 754)					if ((id != -1)) {
HXLINE( 754)						return (input->deviceID == id);
            					}
            					else {
HXLINE( 754)						return true;
            					}
            				}
            				else {
HXLINE( 754)					return false;
            				}
            			}
            			break;
            		}
HXLINE( 751)		return false;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Controls_obj,isDevice,return )

bool Controls_obj::isGamepad( ::flixel::input::actions::FlxActionInput input,int deviceID){
            	HX_STACKFRAME(&_hx_pos_948b5caa279cd923_760_isGamepad)
HXDLIN( 760)		if (::hx::IsPointerEq( input->device,::flixel::input::actions::FlxInputDevice_obj::GAMEPAD_dyn() )) {
HXDLIN( 760)			if ((deviceID != -1)) {
HXDLIN( 760)				return (input->deviceID == deviceID);
            			}
            			else {
HXDLIN( 760)				return true;
            			}
            		}
            		else {
HXDLIN( 760)			return false;
            		}
HXDLIN( 760)		return false;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Controls_obj,isGamepad,return )


::hx::ObjectPtr< Controls_obj > Controls_obj::__new(::String name, ::KeyboardScheme __o_scheme) {
	::hx::ObjectPtr< Controls_obj > __this = new Controls_obj();
	__this->__construct(name,__o_scheme);
	return __this;
}

::hx::ObjectPtr< Controls_obj > Controls_obj::__alloc(::hx::Ctx *_hx_ctx,::String name, ::KeyboardScheme __o_scheme) {
	Controls_obj *__this = (Controls_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(Controls_obj), true, "Controls"));
	*(void **)__this = Controls_obj::_hx_vtable;
	__this->__construct(name,__o_scheme);
	return __this;
}

Controls_obj::Controls_obj()
{
}

void Controls_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Controls);
	HX_MARK_MEMBER_NAME(_up,"_up");
	HX_MARK_MEMBER_NAME(_left,"_left");
	HX_MARK_MEMBER_NAME(_right,"_right");
	HX_MARK_MEMBER_NAME(_down,"_down");
	HX_MARK_MEMBER_NAME(_upP,"_upP");
	HX_MARK_MEMBER_NAME(_leftP,"_leftP");
	HX_MARK_MEMBER_NAME(_rightP,"_rightP");
	HX_MARK_MEMBER_NAME(_downP,"_downP");
	HX_MARK_MEMBER_NAME(_upR,"_upR");
	HX_MARK_MEMBER_NAME(_leftR,"_leftR");
	HX_MARK_MEMBER_NAME(_rightR,"_rightR");
	HX_MARK_MEMBER_NAME(_downR,"_downR");
	HX_MARK_MEMBER_NAME(_accept,"_accept");
	HX_MARK_MEMBER_NAME(_back,"_back");
	HX_MARK_MEMBER_NAME(_pause,"_pause");
	HX_MARK_MEMBER_NAME(_reset,"_reset");
	HX_MARK_MEMBER_NAME(_cheat,"_cheat");
	HX_MARK_MEMBER_NAME(byName,"byName");
	HX_MARK_MEMBER_NAME(gamepadsAdded,"gamepadsAdded");
	HX_MARK_MEMBER_NAME(keyboardScheme,"keyboardScheme");
	 ::flixel::input::actions::FlxActionSet_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void Controls_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_up,"_up");
	HX_VISIT_MEMBER_NAME(_left,"_left");
	HX_VISIT_MEMBER_NAME(_right,"_right");
	HX_VISIT_MEMBER_NAME(_down,"_down");
	HX_VISIT_MEMBER_NAME(_upP,"_upP");
	HX_VISIT_MEMBER_NAME(_leftP,"_leftP");
	HX_VISIT_MEMBER_NAME(_rightP,"_rightP");
	HX_VISIT_MEMBER_NAME(_downP,"_downP");
	HX_VISIT_MEMBER_NAME(_upR,"_upR");
	HX_VISIT_MEMBER_NAME(_leftR,"_leftR");
	HX_VISIT_MEMBER_NAME(_rightR,"_rightR");
	HX_VISIT_MEMBER_NAME(_downR,"_downR");
	HX_VISIT_MEMBER_NAME(_accept,"_accept");
	HX_VISIT_MEMBER_NAME(_back,"_back");
	HX_VISIT_MEMBER_NAME(_pause,"_pause");
	HX_VISIT_MEMBER_NAME(_reset,"_reset");
	HX_VISIT_MEMBER_NAME(_cheat,"_cheat");
	HX_VISIT_MEMBER_NAME(byName,"byName");
	HX_VISIT_MEMBER_NAME(gamepadsAdded,"gamepadsAdded");
	HX_VISIT_MEMBER_NAME(keyboardScheme,"keyboardScheme");
	 ::flixel::input::actions::FlxActionSet_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val Controls_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"UP") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_UP() ); }
		break;
	case 3:
		if (HX_FIELD_EQ(inName,"_up") ) { return ::hx::Val( _up ); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"_upP") ) { return ::hx::Val( _upP ); }
		if (HX_FIELD_EQ(inName,"_upR") ) { return ::hx::Val( _upR ); }
		if (HX_FIELD_EQ(inName,"LEFT") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_LEFT() ); }
		if (HX_FIELD_EQ(inName,"DOWN") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_DOWN() ); }
		if (HX_FIELD_EQ(inName,"UP_P") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_UP_P() ); }
		if (HX_FIELD_EQ(inName,"UP_R") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_UP_R() ); }
		if (HX_FIELD_EQ(inName,"BACK") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_BACK() ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"_left") ) { return ::hx::Val( _left ); }
		if (HX_FIELD_EQ(inName,"_down") ) { return ::hx::Val( _down ); }
		if (HX_FIELD_EQ(inName,"_back") ) { return ::hx::Val( _back ); }
		if (HX_FIELD_EQ(inName,"RIGHT") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_RIGHT() ); }
		if (HX_FIELD_EQ(inName,"PAUSE") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_PAUSE() ); }
		if (HX_FIELD_EQ(inName,"RESET") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_RESET() ); }
		if (HX_FIELD_EQ(inName,"CHEAT") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_CHEAT() ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"_right") ) { return ::hx::Val( _right ); }
		if (HX_FIELD_EQ(inName,"_leftP") ) { return ::hx::Val( _leftP ); }
		if (HX_FIELD_EQ(inName,"_downP") ) { return ::hx::Val( _downP ); }
		if (HX_FIELD_EQ(inName,"_leftR") ) { return ::hx::Val( _leftR ); }
		if (HX_FIELD_EQ(inName,"_downR") ) { return ::hx::Val( _downR ); }
		if (HX_FIELD_EQ(inName,"_pause") ) { return ::hx::Val( _pause ); }
		if (HX_FIELD_EQ(inName,"_reset") ) { return ::hx::Val( _reset ); }
		if (HX_FIELD_EQ(inName,"_cheat") ) { return ::hx::Val( _cheat ); }
		if (HX_FIELD_EQ(inName,"byName") ) { return ::hx::Val( byName ); }
		if (HX_FIELD_EQ(inName,"get_UP") ) { return ::hx::Val( get_UP_dyn() ); }
		if (HX_FIELD_EQ(inName,"LEFT_P") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_LEFT_P() ); }
		if (HX_FIELD_EQ(inName,"DOWN_P") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_DOWN_P() ); }
		if (HX_FIELD_EQ(inName,"LEFT_R") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_LEFT_R() ); }
		if (HX_FIELD_EQ(inName,"DOWN_R") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_DOWN_R() ); }
		if (HX_FIELD_EQ(inName,"ACCEPT") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_ACCEPT() ); }
		if (HX_FIELD_EQ(inName,"update") ) { return ::hx::Val( update_dyn() ); }
		if (HX_FIELD_EQ(inName,"copyTo") ) { return ::hx::Val( copyTo_dyn() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"_rightP") ) { return ::hx::Val( _rightP ); }
		if (HX_FIELD_EQ(inName,"_rightR") ) { return ::hx::Val( _rightR ); }
		if (HX_FIELD_EQ(inName,"_accept") ) { return ::hx::Val( _accept ); }
		if (HX_FIELD_EQ(inName,"RIGHT_P") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_RIGHT_P() ); }
		if (HX_FIELD_EQ(inName,"RIGHT_R") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_RIGHT_R() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"get_LEFT") ) { return ::hx::Val( get_LEFT_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_DOWN") ) { return ::hx::Val( get_DOWN_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_UP_P") ) { return ::hx::Val( get_UP_P_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_UP_R") ) { return ::hx::Val( get_UP_R_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_BACK") ) { return ::hx::Val( get_BACK_dyn() ); }
		if (HX_FIELD_EQ(inName,"copyFrom") ) { return ::hx::Val( copyFrom_dyn() ); }
		if (HX_FIELD_EQ(inName,"bindKeys") ) { return ::hx::Val( bindKeys_dyn() ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"get_RIGHT") ) { return ::hx::Val( get_RIGHT_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_PAUSE") ) { return ::hx::Val( get_PAUSE_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_RESET") ) { return ::hx::Val( get_RESET_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_CHEAT") ) { return ::hx::Val( get_CHEAT_dyn() ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"get_LEFT_P") ) { return ::hx::Val( get_LEFT_P_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_DOWN_P") ) { return ::hx::Val( get_DOWN_P_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_LEFT_R") ) { return ::hx::Val( get_LEFT_R_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_DOWN_R") ) { return ::hx::Val( get_DOWN_R_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_ACCEPT") ) { return ::hx::Val( get_ACCEPT_dyn() ); }
		if (HX_FIELD_EQ(inName,"unbindKeys") ) { return ::hx::Val( unbindKeys_dyn() ); }
		if (HX_FIELD_EQ(inName,"addGamepad") ) { return ::hx::Val( addGamepad_dyn() ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"get_RIGHT_P") ) { return ::hx::Val( get_RIGHT_P_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_RIGHT_R") ) { return ::hx::Val( get_RIGHT_R_dyn() ); }
		if (HX_FIELD_EQ(inName,"checkByName") ) { return ::hx::Val( checkByName_dyn() ); }
		if (HX_FIELD_EQ(inName,"bindButtons") ) { return ::hx::Val( bindButtons_dyn() ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"forEachBound") ) { return ::hx::Val( forEachBound_dyn() ); }
		if (HX_FIELD_EQ(inName,"loadKeyBinds") ) { return ::hx::Val( loadKeyBinds_dyn() ); }
		if (HX_FIELD_EQ(inName,"getInputsFor") ) { return ::hx::Val( getInputsFor_dyn() ); }
		if (HX_FIELD_EQ(inName,"removeDevice") ) { return ::hx::Val( removeDevice_dyn() ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"gamepadsAdded") ) { return ::hx::Val( gamepadsAdded ); }
		if (HX_FIELD_EQ(inName,"removeGamepad") ) { return ::hx::Val( removeGamepad_dyn() ); }
		if (HX_FIELD_EQ(inName,"unbindButtons") ) { return ::hx::Val( unbindButtons_dyn() ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"keyboardScheme") ) { return ::hx::Val( keyboardScheme ); }
		if (HX_FIELD_EQ(inName,"replaceBinding") ) { return ::hx::Val( replaceBinding_dyn() ); }
		if (HX_FIELD_EQ(inName,"removeKeyboard") ) { return ::hx::Val( removeKeyboard_dyn() ); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"getDialogueName") ) { return ::hx::Val( getDialogueName_dyn() ); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"setKeyboardScheme") ) { return ::hx::Val( setKeyboardScheme_dyn() ); }
		if (HX_FIELD_EQ(inName,"addGamepadLiteral") ) { return ::hx::Val( addGamepadLiteral_dyn() ); }
		if (HX_FIELD_EQ(inName,"addDefaultGamepad") ) { return ::hx::Val( addDefaultGamepad_dyn() ); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"mergeKeyboardScheme") ) { return ::hx::Val( mergeKeyboardScheme_dyn() ); }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"getActionFromControl") ) { return ::hx::Val( getActionFromControl_dyn() ); }
		break;
	case 24:
		if (HX_FIELD_EQ(inName,"getDialogueNameFromToken") ) { return ::hx::Val( getDialogueNameFromToken_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

bool Controls_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"init") ) { outValue = init_dyn(); return true; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"addKeys") ) { outValue = addKeys_dyn(); return true; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"isDevice") ) { outValue = isDevice_dyn(); return true; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"isGamepad") ) { outValue = isGamepad_dyn(); return true; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"removeKeys") ) { outValue = removeKeys_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"addButtons") ) { outValue = addButtons_dyn(); return true; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"removeButtons") ) { outValue = removeButtons_dyn(); return true; }
	}
	return false;
}

::hx::Val Controls_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"_up") ) { _up=inValue.Cast<  ::flixel::input::actions::FlxActionDigital >(); return inValue; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"_upP") ) { _upP=inValue.Cast<  ::flixel::input::actions::FlxActionDigital >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_upR") ) { _upR=inValue.Cast<  ::flixel::input::actions::FlxActionDigital >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"_left") ) { _left=inValue.Cast<  ::flixel::input::actions::FlxActionDigital >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_down") ) { _down=inValue.Cast<  ::flixel::input::actions::FlxActionDigital >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_back") ) { _back=inValue.Cast<  ::flixel::input::actions::FlxActionDigital >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"_right") ) { _right=inValue.Cast<  ::flixel::input::actions::FlxActionDigital >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_leftP") ) { _leftP=inValue.Cast<  ::flixel::input::actions::FlxActionDigital >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_downP") ) { _downP=inValue.Cast<  ::flixel::input::actions::FlxActionDigital >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_leftR") ) { _leftR=inValue.Cast<  ::flixel::input::actions::FlxActionDigital >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_downR") ) { _downR=inValue.Cast<  ::flixel::input::actions::FlxActionDigital >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_pause") ) { _pause=inValue.Cast<  ::flixel::input::actions::FlxActionDigital >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_reset") ) { _reset=inValue.Cast<  ::flixel::input::actions::FlxActionDigital >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_cheat") ) { _cheat=inValue.Cast<  ::flixel::input::actions::FlxActionDigital >(); return inValue; }
		if (HX_FIELD_EQ(inName,"byName") ) { byName=inValue.Cast<  ::haxe::ds::StringMap >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"_rightP") ) { _rightP=inValue.Cast<  ::flixel::input::actions::FlxActionDigital >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_rightR") ) { _rightR=inValue.Cast<  ::flixel::input::actions::FlxActionDigital >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_accept") ) { _accept=inValue.Cast<  ::flixel::input::actions::FlxActionDigital >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"gamepadsAdded") ) { gamepadsAdded=inValue.Cast< ::Array< int > >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"keyboardScheme") ) { keyboardScheme=inValue.Cast<  ::KeyboardScheme >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Controls_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("_up",7a,7c,48,00));
	outFields->push(HX_("_left",e6,23,c1,fa));
	outFields->push(HX_("_right",1d,53,4b,e5));
	outFields->push(HX_("_down",41,14,7f,f5));
	outFields->push(HX_("_upP",96,6e,24,3f));
	outFields->push(HX_("_leftP",aa,45,3e,6e));
	outFields->push(HX_("_rightP",93,66,9d,bc));
	outFields->push(HX_("_downP",ef,a4,b2,d9));
	outFields->push(HX_("_upR",98,6e,24,3f));
	outFields->push(HX_("_leftR",ac,45,3e,6e));
	outFields->push(HX_("_rightR",95,66,9d,bc));
	outFields->push(HX_("_downR",f1,a4,b2,d9));
	outFields->push(HX_("_accept",a7,a4,7d,79));
	outFields->push(HX_("_back",06,f6,21,f4));
	outFields->push(HX_("_pause",37,1e,3f,b9));
	outFields->push(HX_("_reset",10,91,af,e2));
	outFields->push(HX_("_cheat",54,de,9d,41));
	outFields->push(HX_("byName",c2,2b,4e,0e));
	outFields->push(HX_("gamepadsAdded",ae,52,a9,94));
	outFields->push(HX_("keyboardScheme",2c,c8,f4,c5));
	outFields->push(HX_("UP",5b,4a,00,00));
	outFields->push(HX_("LEFT",07,d0,70,32));
	outFields->push(HX_("RIGHT",bc,43,52,67));
	outFields->push(HX_("DOWN",62,c0,2e,2d));
	outFields->push(HX_("UP_P",2c,2a,6c,38));
	outFields->push(HX_("LEFT_P",d8,72,4a,4c));
	outFields->push(HX_("RIGHT_P",cd,fd,37,93));
	outFields->push(HX_("DOWN_P",f3,6f,a9,e6));
	outFields->push(HX_("UP_R",2e,2a,6c,38));
	outFields->push(HX_("LEFT_R",da,72,4a,4c));
	outFields->push(HX_("RIGHT_R",cf,fd,37,93));
	outFields->push(HX_("DOWN_R",f5,6f,a9,e6));
	outFields->push(HX_("ACCEPT",08,3f,89,bd));
	outFields->push(HX_("BACK",27,a2,d1,2b));
	outFields->push(HX_("PAUSE",d6,0e,46,3b));
	outFields->push(HX_("RESET",af,81,b6,64));
	outFields->push(HX_("CHEAT",f3,ce,a4,c3));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo Controls_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::flixel::input::actions::FlxActionDigital */ ,(int)offsetof(Controls_obj,_up),HX_("_up",7a,7c,48,00)},
	{::hx::fsObject /*  ::flixel::input::actions::FlxActionDigital */ ,(int)offsetof(Controls_obj,_left),HX_("_left",e6,23,c1,fa)},
	{::hx::fsObject /*  ::flixel::input::actions::FlxActionDigital */ ,(int)offsetof(Controls_obj,_right),HX_("_right",1d,53,4b,e5)},
	{::hx::fsObject /*  ::flixel::input::actions::FlxActionDigital */ ,(int)offsetof(Controls_obj,_down),HX_("_down",41,14,7f,f5)},
	{::hx::fsObject /*  ::flixel::input::actions::FlxActionDigital */ ,(int)offsetof(Controls_obj,_upP),HX_("_upP",96,6e,24,3f)},
	{::hx::fsObject /*  ::flixel::input::actions::FlxActionDigital */ ,(int)offsetof(Controls_obj,_leftP),HX_("_leftP",aa,45,3e,6e)},
	{::hx::fsObject /*  ::flixel::input::actions::FlxActionDigital */ ,(int)offsetof(Controls_obj,_rightP),HX_("_rightP",93,66,9d,bc)},
	{::hx::fsObject /*  ::flixel::input::actions::FlxActionDigital */ ,(int)offsetof(Controls_obj,_downP),HX_("_downP",ef,a4,b2,d9)},
	{::hx::fsObject /*  ::flixel::input::actions::FlxActionDigital */ ,(int)offsetof(Controls_obj,_upR),HX_("_upR",98,6e,24,3f)},
	{::hx::fsObject /*  ::flixel::input::actions::FlxActionDigital */ ,(int)offsetof(Controls_obj,_leftR),HX_("_leftR",ac,45,3e,6e)},
	{::hx::fsObject /*  ::flixel::input::actions::FlxActionDigital */ ,(int)offsetof(Controls_obj,_rightR),HX_("_rightR",95,66,9d,bc)},
	{::hx::fsObject /*  ::flixel::input::actions::FlxActionDigital */ ,(int)offsetof(Controls_obj,_downR),HX_("_downR",f1,a4,b2,d9)},
	{::hx::fsObject /*  ::flixel::input::actions::FlxActionDigital */ ,(int)offsetof(Controls_obj,_accept),HX_("_accept",a7,a4,7d,79)},
	{::hx::fsObject /*  ::flixel::input::actions::FlxActionDigital */ ,(int)offsetof(Controls_obj,_back),HX_("_back",06,f6,21,f4)},
	{::hx::fsObject /*  ::flixel::input::actions::FlxActionDigital */ ,(int)offsetof(Controls_obj,_pause),HX_("_pause",37,1e,3f,b9)},
	{::hx::fsObject /*  ::flixel::input::actions::FlxActionDigital */ ,(int)offsetof(Controls_obj,_reset),HX_("_reset",10,91,af,e2)},
	{::hx::fsObject /*  ::flixel::input::actions::FlxActionDigital */ ,(int)offsetof(Controls_obj,_cheat),HX_("_cheat",54,de,9d,41)},
	{::hx::fsObject /*  ::haxe::ds::StringMap */ ,(int)offsetof(Controls_obj,byName),HX_("byName",c2,2b,4e,0e)},
	{::hx::fsObject /* ::Array< int > */ ,(int)offsetof(Controls_obj,gamepadsAdded),HX_("gamepadsAdded",ae,52,a9,94)},
	{::hx::fsObject /*  ::KeyboardScheme */ ,(int)offsetof(Controls_obj,keyboardScheme),HX_("keyboardScheme",2c,c8,f4,c5)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *Controls_obj_sStaticStorageInfo = 0;
#endif

static ::String Controls_obj_sMemberFields[] = {
	HX_("_up",7a,7c,48,00),
	HX_("_left",e6,23,c1,fa),
	HX_("_right",1d,53,4b,e5),
	HX_("_down",41,14,7f,f5),
	HX_("_upP",96,6e,24,3f),
	HX_("_leftP",aa,45,3e,6e),
	HX_("_rightP",93,66,9d,bc),
	HX_("_downP",ef,a4,b2,d9),
	HX_("_upR",98,6e,24,3f),
	HX_("_leftR",ac,45,3e,6e),
	HX_("_rightR",95,66,9d,bc),
	HX_("_downR",f1,a4,b2,d9),
	HX_("_accept",a7,a4,7d,79),
	HX_("_back",06,f6,21,f4),
	HX_("_pause",37,1e,3f,b9),
	HX_("_reset",10,91,af,e2),
	HX_("_cheat",54,de,9d,41),
	HX_("byName",c2,2b,4e,0e),
	HX_("gamepadsAdded",ae,52,a9,94),
	HX_("keyboardScheme",2c,c8,f4,c5),
	HX_("get_UP",a4,e1,2f,a3),
	HX_("get_LEFT",90,8b,2b,b2),
	HX_("get_RIGHT",13,a0,fb,aa),
	HX_("get_DOWN",eb,7b,e9,ac),
	HX_("get_UP_P",b5,e5,26,b8),
	HX_("get_LEFT_P",a1,e2,d1,3c),
	HX_("get_RIGHT_P",e4,5d,32,19),
	HX_("get_DOWN_P",bc,df,30,d7),
	HX_("get_UP_R",b7,e5,26,b8),
	HX_("get_LEFT_R",a3,e2,d1,3c),
	HX_("get_RIGHT_R",e6,5d,32,19),
	HX_("get_DOWN_R",be,df,30,d7),
	HX_("get_ACCEPT",d1,ae,10,ae),
	HX_("get_BACK",b0,5d,8c,ab),
	HX_("get_PAUSE",2d,6b,ef,7e),
	HX_("get_RESET",06,de,5f,a8),
	HX_("get_CHEAT",4a,2b,4e,07),
	HX_("update",09,86,05,87),
	HX_("checkByName",aa,fe,5f,f0),
	HX_("getDialogueName",39,8d,0f,32),
	HX_("getDialogueNameFromToken",b6,d0,32,d3),
	HX_("getActionFromControl",87,31,3f,3d),
	HX_("forEachBound",34,ae,22,2f),
	HX_("replaceBinding",71,99,ae,a4),
	HX_("copyFrom",bf,0b,61,c8),
	HX_("copyTo",90,1c,33,c9),
	HX_("mergeKeyboardScheme",04,51,83,14),
	HX_("bindKeys",51,26,d1,b4),
	HX_("unbindKeys",aa,0d,95,3a),
	HX_("setKeyboardScheme",6e,4f,d6,5b),
	HX_("loadKeyBinds",3d,a2,d2,b0),
	HX_("removeKeyboard",0b,f9,7f,32),
	HX_("addGamepad",80,0c,10,f1),
	HX_("addGamepadLiteral",cf,54,ef,a8),
	HX_("removeGamepad",bd,3c,40,62),
	HX_("addDefaultGamepad",e1,d7,98,02),
	HX_("bindButtons",04,66,e6,c6),
	HX_("unbindButtons",4b,dc,20,e8),
	HX_("getInputsFor",ea,35,e1,37),
	HX_("removeDevice",fa,77,a5,e0),
	::String(null()) };

::hx::Class Controls_obj::__mClass;

static ::String Controls_obj_sStaticFields[] = {
	HX_("init",10,3b,bb,45),
	HX_("addKeys",b5,24,44,83),
	HX_("removeKeys",58,1c,26,c4),
	HX_("addButtons",20,7e,ff,31),
	HX_("removeButtons",5d,ae,2f,a3),
	HX_("isDevice",20,78,e1,c9),
	HX_("isGamepad",d7,5d,84,8d),
	::String(null())
};

void Controls_obj::__register()
{
	Controls_obj _hx_dummy;
	Controls_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("Controls",96,42,6e,11);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Controls_obj::__GetStatic;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(Controls_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(Controls_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< Controls_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Controls_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Controls_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

