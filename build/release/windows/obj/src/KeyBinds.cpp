#include <hxcpp.h>

#ifndef INCLUDED_Controls
#include <Controls.h>
#endif
#ifndef INCLUDED_KeyBinds
#include <KeyBinds.h>
#endif
#ifndef INCLUDED_PlayerSettings
#include <PlayerSettings.h>
#endif
#ifndef INCLUDED_flixel_FlxG
#include <flixel/FlxG.h>
#endif
#ifndef INCLUDED_flixel_input_actions_FlxActionSet
#include <flixel/input/actions/FlxActionSet.h>
#endif
#ifndef INCLUDED_flixel_util_FlxSave
#include <flixel/util/FlxSave.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_haxe_Log
#include <haxe/Log.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_256205a70c995989_15_resetBinds,"KeyBinds","resetBinds",0x495c34be,"KeyBinds.resetBinds","KeyBinds.hx",15,0xfb6ef907)
HX_LOCAL_STACK_FRAME(_hx_pos_256205a70c995989_27_keyCheck,"KeyBinds","keyCheck",0x95182fe0,"KeyBinds.keyCheck","KeyBinds.hx",27,0xfb6ef907)

void KeyBinds_obj::__construct() { }

Dynamic KeyBinds_obj::__CreateEmpty() { return new KeyBinds_obj; }

void *KeyBinds_obj::_hx_vtable = 0;

Dynamic KeyBinds_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< KeyBinds_obj > _hx_result = new KeyBinds_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool KeyBinds_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x2cac64d7;
}

void KeyBinds_obj::resetBinds(){
            	HX_STACKFRAME(&_hx_pos_256205a70c995989_15_resetBinds)
HXLINE(  17)		::flixel::FlxG_obj::save->data->__SetField(HX_("upBind",b8,51,92,70),HX_("W",57,00,00,00),::hx::paccDynamic);
HXLINE(  18)		::flixel::FlxG_obj::save->data->__SetField(HX_("downBind",3f,f3,fe,75),HX_("S",53,00,00,00),::hx::paccDynamic);
HXLINE(  19)		::flixel::FlxG_obj::save->data->__SetField(HX_("leftBind",64,39,12,48),HX_("A",41,00,00,00),::hx::paccDynamic);
HXLINE(  20)		::flixel::FlxG_obj::save->data->__SetField(HX_("rightBind",b9,4b,dd,ab),HX_("D",44,00,00,00),::hx::paccDynamic);
HXLINE(  21)		::flixel::FlxG_obj::save->data->__SetField(HX_("killBind",7b,28,25,80),HX_("R",52,00,00,00),::hx::paccDynamic);
HXLINE(  22)		::PlayerSettings_obj::player1->controls->loadKeyBinds();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(KeyBinds_obj,resetBinds,(void))

void KeyBinds_obj::keyCheck(){
            	HX_STACKFRAME(&_hx_pos_256205a70c995989_27_keyCheck)
HXLINE(  28)		if (::hx::IsNull( ::flixel::FlxG_obj::save->data->__Field(HX_("upBind",b8,51,92,70),::hx::paccDynamic) )) {
HXLINE(  29)			::flixel::FlxG_obj::save->data->__SetField(HX_("upBind",b8,51,92,70),HX_("W",57,00,00,00),::hx::paccDynamic);
HXLINE(  30)			::haxe::Log_obj::trace(HX_("No UP",ba,80,b8,32),::hx::SourceInfo(HX_("code/KeyBinds.hx",e5,59,f4,3e),30,HX_("KeyBinds",17,72,1b,d1),HX_("keyCheck",a9,3e,20,8a)));
            		}
HXLINE(  32)		if (::hx::IsNull( ::flixel::FlxG_obj::save->data->__Field(HX_("downBind",3f,f3,fe,75),::hx::paccDynamic) )) {
HXLINE(  33)			::flixel::FlxG_obj::save->data->__SetField(HX_("downBind",3f,f3,fe,75),HX_("S",53,00,00,00),::hx::paccDynamic);
HXLINE(  34)			::haxe::Log_obj::trace(HX_("No DOWN",81,8c,28,a7),::hx::SourceInfo(HX_("code/KeyBinds.hx",e5,59,f4,3e),34,HX_("KeyBinds",17,72,1b,d1),HX_("keyCheck",a9,3e,20,8a)));
            		}
HXLINE(  36)		if (::hx::IsNull( ::flixel::FlxG_obj::save->data->__Field(HX_("leftBind",64,39,12,48),::hx::paccDynamic) )) {
HXLINE(  37)			::flixel::FlxG_obj::save->data->__SetField(HX_("leftBind",64,39,12,48),HX_("A",41,00,00,00),::hx::paccDynamic);
HXLINE(  38)			::haxe::Log_obj::trace(HX_("No LEFT",26,9c,6a,ac),::hx::SourceInfo(HX_("code/KeyBinds.hx",e5,59,f4,3e),38,HX_("KeyBinds",17,72,1b,d1),HX_("keyCheck",a9,3e,20,8a)));
            		}
HXLINE(  40)		if (::hx::IsNull( ::flixel::FlxG_obj::save->data->__Field(HX_("rightBind",b9,4b,dd,ab),::hx::paccDynamic) )) {
HXLINE(  41)			::flixel::FlxG_obj::save->data->__SetField(HX_("rightBind",b9,4b,dd,ab),HX_("D",44,00,00,00),::hx::paccDynamic);
HXLINE(  42)			::haxe::Log_obj::trace(HX_("No RIGHT",bd,12,eb,a7),::hx::SourceInfo(HX_("code/KeyBinds.hx",e5,59,f4,3e),42,HX_("KeyBinds",17,72,1b,d1),HX_("keyCheck",a9,3e,20,8a)));
            		}
HXLINE(  44)		if (::hx::IsNull( ::flixel::FlxG_obj::save->data->__Field(HX_("killBind",7b,28,25,80),::hx::paccDynamic) )) {
HXLINE(  45)			::flixel::FlxG_obj::save->data->__SetField(HX_("killBind",7b,28,25,80),HX_("R",52,00,00,00),::hx::paccDynamic);
HXLINE(  46)			::haxe::Log_obj::trace(HX_("No KILL",bd,73,c4,ab),::hx::SourceInfo(HX_("code/KeyBinds.hx",e5,59,f4,3e),46,HX_("KeyBinds",17,72,1b,d1),HX_("keyCheck",a9,3e,20,8a)));
            		}
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(KeyBinds_obj,keyCheck,(void))


KeyBinds_obj::KeyBinds_obj()
{
}

bool KeyBinds_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"keyCheck") ) { outValue = keyCheck_dyn(); return true; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"resetBinds") ) { outValue = resetBinds_dyn(); return true; }
	}
	return false;
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *KeyBinds_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *KeyBinds_obj_sStaticStorageInfo = 0;
#endif

::hx::Class KeyBinds_obj::__mClass;

static ::String KeyBinds_obj_sStaticFields[] = {
	HX_("resetBinds",c7,47,9c,9b),
	HX_("keyCheck",a9,3e,20,8a),
	::String(null())
};

void KeyBinds_obj::__register()
{
	KeyBinds_obj _hx_dummy;
	KeyBinds_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("KeyBinds",17,72,1b,d1);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &KeyBinds_obj::__GetStatic;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(KeyBinds_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = ::hx::TCanCast< KeyBinds_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = KeyBinds_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = KeyBinds_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

