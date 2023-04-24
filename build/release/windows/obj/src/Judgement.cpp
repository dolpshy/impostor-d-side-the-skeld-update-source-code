#include <hxcpp.h>

#ifndef INCLUDED_Conductor
#include <Conductor.h>
#endif
#ifndef INCLUDED_HelperFunctions
#include <HelperFunctions.h>
#endif
#ifndef INCLUDED_Judgement
#include <Judgement.h>
#endif
#ifndef INCLUDED_Option
#include <Option.h>
#endif
#ifndef INCLUDED_flixel_FlxG
#include <flixel/FlxG.h>
#endif
#ifndef INCLUDED_flixel_util_FlxSave
#include <flixel/util/FlxSave.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_4303cb2e29fdc109_269_new,"Judgement","new",0xcb22fc07,"Judgement.new","Options.hx",269,0x9d9a0240)
HX_LOCAL_STACK_FRAME(_hx_pos_4303cb2e29fdc109_277_press,"Judgement","press",0x4636f6ea,"Judgement.press","Options.hx",277,0x9d9a0240)
HX_LOCAL_STACK_FRAME(_hx_pos_4303cb2e29fdc109_282_updateDisplay,"Judgement","updateDisplay",0xf76371a0,"Judgement.updateDisplay","Options.hx",282,0x9d9a0240)
HX_LOCAL_STACK_FRAME(_hx_pos_4303cb2e29fdc109_285_left,"Judgement","left",0xf2270e80,"Judgement.left","Options.hx",285,0x9d9a0240)
HX_LOCAL_STACK_FRAME(_hx_pos_4303cb2e29fdc109_298_getValue,"Judgement","getValue",0x567dc5f4,"Judgement.getValue","Options.hx",298,0x9d9a0240)
HX_LOCAL_STACK_FRAME(_hx_pos_4303cb2e29fdc109_306_right,"Judgement","right",0x6712af43,"Judgement.right","Options.hx",306,0x9d9a0240)

void Judgement_obj::__construct(::String desc){
            	HX_STACKFRAME(&_hx_pos_4303cb2e29fdc109_269_new)
HXLINE( 270)		super::__construct();
HXLINE( 271)		this->description = desc;
HXLINE( 272)		this->acceptValues = true;
            	}

Dynamic Judgement_obj::__CreateEmpty() { return new Judgement_obj; }

void *Judgement_obj::_hx_vtable = 0;

Dynamic Judgement_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< Judgement_obj > _hx_result = new Judgement_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool Judgement_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x27a70eb9) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x27a70eb9;
	} else {
		return inClassId==(int)0x6cd733f1;
	}
}

bool Judgement_obj::press(){
            	HX_STACKFRAME(&_hx_pos_4303cb2e29fdc109_277_press)
HXDLIN( 277)		return true;
            	}


::String Judgement_obj::updateDisplay(){
            	HX_STACKFRAME(&_hx_pos_4303cb2e29fdc109_282_updateDisplay)
HXDLIN( 282)		return HX_("Safe Frames",19,0a,34,55);
            	}


bool Judgement_obj::left(){
            	HX_STACKFRAME(&_hx_pos_4303cb2e29fdc109_285_left)
HXLINE( 287)		if ((::Conductor_obj::safeFrames == 1)) {
HXLINE( 288)			return false;
            		}
HXLINE( 290)		 ::Dynamic _hx_tmp = ::hx::ClassOf< ::Conductor >();
HXDLIN( 290)		::Conductor_obj::safeFrames = (::Conductor_obj::safeFrames - 1);
HXLINE( 291)		::flixel::FlxG_obj::save->data->__SetField(HX_("frames",a6,af,85,ac),::Conductor_obj::safeFrames,::hx::paccDynamic);
HXLINE( 293)		::Conductor_obj::recalculateTimings();
HXLINE( 294)		return true;
            	}


::String Judgement_obj::getValue(){
            	HX_STACKFRAME(&_hx_pos_4303cb2e29fdc109_298_getValue)
HXDLIN( 298)		::String _hx_tmp = ((HX_("Safe Frames: ",ff,b4,dd,11) + ::Conductor_obj::safeFrames) + HX_(" - SIK: ",88,84,bb,3b));
HXDLIN( 298)		::String _hx_tmp1 = ((_hx_tmp + ::HelperFunctions_obj::truncateFloat((( (Float)(45) ) * ::Conductor_obj::timeScale),0)) + HX_("ms GD: ",fd,90,a2,4b));
HXDLIN( 298)		::String _hx_tmp2 = ((_hx_tmp1 + ::HelperFunctions_obj::truncateFloat((( (Float)(90) ) * ::Conductor_obj::timeScale),0)) + HX_("ms BD: ",e2,7f,54,48));
HXDLIN( 298)		::String _hx_tmp3 = ((_hx_tmp2 + ::HelperFunctions_obj::truncateFloat((( (Float)(135) ) * ::Conductor_obj::timeScale),0)) + HX_("ms SHT: ",4b,ee,23,ce));
HXDLIN( 298)		::String _hx_tmp4 = ((_hx_tmp3 + ::HelperFunctions_obj::truncateFloat((( (Float)(155) ) * ::Conductor_obj::timeScale),0)) + HX_("ms TOTAL: ",90,68,8b,8c));
HXDLIN( 298)		return ((_hx_tmp4 + ::HelperFunctions_obj::truncateFloat(::Conductor_obj::safeZoneOffset,0)) + HX_("ms",66,5f,00,00));
            	}


bool Judgement_obj::right(){
            	HX_STACKFRAME(&_hx_pos_4303cb2e29fdc109_306_right)
HXLINE( 308)		if ((::Conductor_obj::safeFrames == 20)) {
HXLINE( 309)			return false;
            		}
HXLINE( 311)		 ::Dynamic _hx_tmp = ::hx::ClassOf< ::Conductor >();
HXDLIN( 311)		::Conductor_obj::safeFrames = (::Conductor_obj::safeFrames + 1);
HXLINE( 312)		::flixel::FlxG_obj::save->data->__SetField(HX_("frames",a6,af,85,ac),::Conductor_obj::safeFrames,::hx::paccDynamic);
HXLINE( 314)		::Conductor_obj::recalculateTimings();
HXLINE( 315)		return true;
            	}



::hx::ObjectPtr< Judgement_obj > Judgement_obj::__new(::String desc) {
	::hx::ObjectPtr< Judgement_obj > __this = new Judgement_obj();
	__this->__construct(desc);
	return __this;
}

::hx::ObjectPtr< Judgement_obj > Judgement_obj::__alloc(::hx::Ctx *_hx_ctx,::String desc) {
	Judgement_obj *__this = (Judgement_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(Judgement_obj), true, "Judgement"));
	*(void **)__this = Judgement_obj::_hx_vtable;
	__this->__construct(desc);
	return __this;
}

Judgement_obj::Judgement_obj()
{
}

::hx::Val Judgement_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"left") ) { return ::hx::Val( left_dyn() ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"press") ) { return ::hx::Val( press_dyn() ); }
		if (HX_FIELD_EQ(inName,"right") ) { return ::hx::Val( right_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"getValue") ) { return ::hx::Val( getValue_dyn() ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"updateDisplay") ) { return ::hx::Val( updateDisplay_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *Judgement_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *Judgement_obj_sStaticStorageInfo = 0;
#endif

static ::String Judgement_obj_sMemberFields[] = {
	HX_("press",83,53,88,c8),
	HX_("updateDisplay",39,8f,b8,86),
	HX_("left",07,08,b0,47),
	HX_("getValue",fb,8e,8f,91),
	HX_("right",dc,0b,64,e9),
	::String(null()) };

::hx::Class Judgement_obj::__mClass;

void Judgement_obj::__register()
{
	Judgement_obj _hx_dummy;
	Judgement_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("Judgement",95,ec,cc,fa);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(Judgement_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< Judgement_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Judgement_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Judgement_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

