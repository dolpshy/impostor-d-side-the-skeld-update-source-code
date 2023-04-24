#include <hxcpp.h>

#ifndef INCLUDED_CpuStrums
#include <CpuStrums.h>
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

HX_DEFINE_STACK_FRAME(_hx_pos_d72f4eec24a4e69d_102_new,"CpuStrums","new",0x3ccd0824,"CpuStrums.new","Options.hx",102,0x9d9a0240)
HX_LOCAL_STACK_FRAME(_hx_pos_d72f4eec24a4e69d_108_press,"CpuStrums","press",0xff920447,"CpuStrums.press","Options.hx",108,0x9d9a0240)
HX_LOCAL_STACK_FRAME(_hx_pos_d72f4eec24a4e69d_117_updateDisplay,"CpuStrums","updateDisplay",0xe7c6a3fd,"CpuStrums.updateDisplay","Options.hx",117,0x9d9a0240)

void CpuStrums_obj::__construct(::String desc){
            	HX_STACKFRAME(&_hx_pos_d72f4eec24a4e69d_102_new)
HXLINE( 103)		super::__construct();
HXLINE( 104)		this->description = desc;
            	}

Dynamic CpuStrums_obj::__CreateEmpty() { return new CpuStrums_obj; }

void *CpuStrums_obj::_hx_vtable = 0;

Dynamic CpuStrums_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< CpuStrums_obj > _hx_result = new CpuStrums_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool CpuStrums_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x27a70eb9) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x27a70eb9;
	} else {
		return inClassId==(int)0x45a0db72;
	}
}

bool CpuStrums_obj::press(){
            	HX_STACKFRAME(&_hx_pos_d72f4eec24a4e69d_108_press)
HXLINE( 109)		::flixel::FlxG_obj::save->data->__SetField(HX_("cpuStrums",52,86,8a,e0),!(( (bool)(::flixel::FlxG_obj::save->data->__Field(HX_("cpuStrums",52,86,8a,e0),::hx::paccDynamic)) )),::hx::paccDynamic);
HXLINE( 111)		this->display = this->updateDisplay();
HXLINE( 112)		return true;
            	}


::String CpuStrums_obj::updateDisplay(){
            	HX_STACKFRAME(&_hx_pos_d72f4eec24a4e69d_117_updateDisplay)
HXDLIN( 117)		if (( (bool)(::flixel::FlxG_obj::save->data->__Field(HX_("cpuStrums",52,86,8a,e0),::hx::paccDynamic)) )) {
HXDLIN( 117)			return HX_("Light CPU Strums",6c,fa,25,83);
            		}
            		else {
HXDLIN( 117)			return HX_("CPU Strums stay static",37,20,45,c4);
            		}
HXDLIN( 117)		return null();
            	}



::hx::ObjectPtr< CpuStrums_obj > CpuStrums_obj::__new(::String desc) {
	::hx::ObjectPtr< CpuStrums_obj > __this = new CpuStrums_obj();
	__this->__construct(desc);
	return __this;
}

::hx::ObjectPtr< CpuStrums_obj > CpuStrums_obj::__alloc(::hx::Ctx *_hx_ctx,::String desc) {
	CpuStrums_obj *__this = (CpuStrums_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(CpuStrums_obj), true, "CpuStrums"));
	*(void **)__this = CpuStrums_obj::_hx_vtable;
	__this->__construct(desc);
	return __this;
}

CpuStrums_obj::CpuStrums_obj()
{
}

::hx::Val CpuStrums_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"press") ) { return ::hx::Val( press_dyn() ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"updateDisplay") ) { return ::hx::Val( updateDisplay_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *CpuStrums_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *CpuStrums_obj_sStaticStorageInfo = 0;
#endif

static ::String CpuStrums_obj_sMemberFields[] = {
	HX_("press",83,53,88,c8),
	HX_("updateDisplay",39,8f,b8,86),
	::String(null()) };

::hx::Class CpuStrums_obj::__mClass;

void CpuStrums_obj::__register()
{
	CpuStrums_obj _hx_dummy;
	CpuStrums_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("CpuStrums",32,66,5d,82);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(CpuStrums_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< CpuStrums_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = CpuStrums_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = CpuStrums_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

