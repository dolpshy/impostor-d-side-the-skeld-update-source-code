#include <hxcpp.h>

#ifndef INCLUDED_Controls
#include <Controls.h>
#endif
#ifndef INCLUDED_DFJKOption
#include <DFJKOption.h>
#endif
#ifndef INCLUDED_KeyBindMenu
#include <KeyBindMenu.h>
#endif
#ifndef INCLUDED_MusicBeatState
#include <MusicBeatState.h>
#endif
#ifndef INCLUDED_Option
#include <Option.h>
#endif
#ifndef INCLUDED_OptionsMenu
#include <OptionsMenu.h>
#endif
#ifndef INCLUDED_flixel_FlxBasic
#include <flixel/FlxBasic.h>
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
#ifndef INCLUDED_flixel_input_actions_FlxActionSet
#include <flixel/input/actions/FlxActionSet.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_c83b011b1ca270a7_82_new,"DFJKOption","new",0xfb5a698a,"DFJKOption.new","Options.hx",82,0x9d9a0240)
HX_LOCAL_STACK_FRAME(_hx_pos_c83b011b1ca270a7_88_press,"DFJKOption","press",0x85470b2d,"DFJKOption.press","Options.hx",88,0x9d9a0240)
HX_LOCAL_STACK_FRAME(_hx_pos_c83b011b1ca270a7_95_updateDisplay,"DFJKOption","updateDisplay",0xd7d600e3,"DFJKOption.updateDisplay","Options.hx",95,0x9d9a0240)

void DFJKOption_obj::__construct( ::Controls controls){
            	HX_STACKFRAME(&_hx_pos_c83b011b1ca270a7_82_new)
HXLINE(  83)		super::__construct();
HXLINE(  84)		this->controls = controls;
            	}

Dynamic DFJKOption_obj::__CreateEmpty() { return new DFJKOption_obj; }

void *DFJKOption_obj::_hx_vtable = 0;

Dynamic DFJKOption_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< DFJKOption_obj > _hx_result = new DFJKOption_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool DFJKOption_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x27a70eb9) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x27a70eb9;
	} else {
		return inClassId==(int)0x302cc5bc;
	}
}

bool DFJKOption_obj::press(){
            	HX_GC_STACKFRAME(&_hx_pos_c83b011b1ca270a7_88_press)
HXLINE(  89)		 ::OptionsMenu _hx_tmp = ::OptionsMenu_obj::instance;
HXDLIN(  89)		_hx_tmp->openSubState( ::KeyBindMenu_obj::__alloc( HX_CTX ,null()));
HXLINE(  90)		return false;
            	}


::String DFJKOption_obj::updateDisplay(){
            	HX_STACKFRAME(&_hx_pos_c83b011b1ca270a7_95_updateDisplay)
HXDLIN(  95)		return HX_("Key Bindings",6f,44,93,fe);
            	}



::hx::ObjectPtr< DFJKOption_obj > DFJKOption_obj::__new( ::Controls controls) {
	::hx::ObjectPtr< DFJKOption_obj > __this = new DFJKOption_obj();
	__this->__construct(controls);
	return __this;
}

::hx::ObjectPtr< DFJKOption_obj > DFJKOption_obj::__alloc(::hx::Ctx *_hx_ctx, ::Controls controls) {
	DFJKOption_obj *__this = (DFJKOption_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(DFJKOption_obj), true, "DFJKOption"));
	*(void **)__this = DFJKOption_obj::_hx_vtable;
	__this->__construct(controls);
	return __this;
}

DFJKOption_obj::DFJKOption_obj()
{
}

void DFJKOption_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(DFJKOption);
	HX_MARK_MEMBER_NAME(controls,"controls");
	 ::Option_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void DFJKOption_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(controls,"controls");
	 ::Option_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val DFJKOption_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"press") ) { return ::hx::Val( press_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"controls") ) { return ::hx::Val( controls ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"updateDisplay") ) { return ::hx::Val( updateDisplay_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val DFJKOption_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"controls") ) { controls=inValue.Cast<  ::Controls >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void DFJKOption_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("controls",76,86,bc,37));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo DFJKOption_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::Controls */ ,(int)offsetof(DFJKOption_obj,controls),HX_("controls",76,86,bc,37)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *DFJKOption_obj_sStaticStorageInfo = 0;
#endif

static ::String DFJKOption_obj_sMemberFields[] = {
	HX_("controls",76,86,bc,37),
	HX_("press",83,53,88,c8),
	HX_("updateDisplay",39,8f,b8,86),
	::String(null()) };

::hx::Class DFJKOption_obj::__mClass;

void DFJKOption_obj::__register()
{
	DFJKOption_obj _hx_dummy;
	DFJKOption_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("DFJKOption",98,9c,38,d9);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(DFJKOption_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< DFJKOption_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = DFJKOption_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = DFJKOption_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

