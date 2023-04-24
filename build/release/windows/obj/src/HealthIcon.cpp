#include <hxcpp.h>

#ifndef INCLUDED_HealthIcon
#include <HealthIcon.h>
#endif
#ifndef INCLUDED_Paths
#include <Paths.h>
#endif
#ifndef INCLUDED_flixel_FlxBasic
#include <flixel/FlxBasic.h>
#endif
#ifndef INCLUDED_flixel_FlxObject
#include <flixel/FlxObject.h>
#endif
#ifndef INCLUDED_flixel_FlxSprite
#include <flixel/FlxSprite.h>
#endif
#ifndef INCLUDED_flixel_animation_FlxAnimationController
#include <flixel/animation/FlxAnimationController.h>
#endif
#ifndef INCLUDED_flixel_math_FlxBasePoint
#include <flixel/math/FlxBasePoint.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxPooled
#include <flixel/util/IFlxPooled.h>
#endif
#ifndef INCLUDED_openfl_utils_Assets
#include <openfl/utils/Assets.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_eb8a54c9c53eb75f_13_new,"HealthIcon","new",0x9b7badc7,"HealthIcon.new","HealthIcon.hx",13,0xf7836789)
HX_LOCAL_STACK_FRAME(_hx_pos_eb8a54c9c53eb75f_24_swapOldIcon,"HealthIcon","swapOldIcon",0xe3496dd4,"HealthIcon.swapOldIcon","HealthIcon.hx",24,0xf7836789)
HX_LOCAL_STACK_FRAME(_hx_pos_eb8a54c9c53eb75f_29_changeIcon,"HealthIcon","changeIcon",0xd785ca82,"HealthIcon.changeIcon","HealthIcon.hx",29,0xf7836789)
static const int _hx_array_data_f8f9be55_3[] = {
	(int)0,(int)1,
};
HX_LOCAL_STACK_FRAME(_hx_pos_eb8a54c9c53eb75f_44_update,"HealthIcon","update",0x767ac302,"HealthIcon.update","HealthIcon.hx",44,0xf7836789)
HX_LOCAL_STACK_FRAME(_hx_pos_eb8a54c9c53eb75f_7_boot,"HealthIcon","boot",0x68d560eb,"HealthIcon.boot","HealthIcon.hx",7,0xf7836789)

void HealthIcon_obj::__construct(::String __o__hx_char,::hx::Null< bool >  __o_isPlayer){
            		::String _hx_char = __o__hx_char;
            		if (::hx::IsNull(__o__hx_char)) _hx_char = HX_("bf",c4,55,00,00);
            		bool isPlayer = __o_isPlayer.Default(false);
            	HX_STACKFRAME(&_hx_pos_eb8a54c9c53eb75f_13_new)
HXLINE(  14)		::HealthIcon_obj::instance = ::hx::ObjectPtr<OBJ_>(this);
HXLINE(  15)		super::__construct(null(),null(),null());
HXLINE(  16)		this->isPlayer = (this->isOldIcon = false);
HXLINE(  17)		this->character = HX_("",00,00,00,00);
HXLINE(  18)		this->isPlayer = isPlayer;
HXLINE(  19)		this->changeIcon(_hx_char);
HXLINE(  20)		this->set_antialiasing(true);
HXLINE(  21)		{
HXLINE(  21)			 ::flixel::math::FlxBasePoint this1 = this->scrollFactor;
HXDLIN(  21)			this1->set_x(( (Float)(0) ));
HXDLIN(  21)			this1->set_y(( (Float)(0) ));
            		}
            	}

Dynamic HealthIcon_obj::__CreateEmpty() { return new HealthIcon_obj; }

void *HealthIcon_obj::_hx_vtable = 0;

Dynamic HealthIcon_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< HealthIcon_obj > _hx_result = new HealthIcon_obj();
	_hx_result->__construct(inArgs[0],inArgs[1]);
	return _hx_result;
}

bool HealthIcon_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x2c01639b) {
		if (inClassId<=(int)0x10bce115) {
			return inClassId==(int)0x00000001 || inClassId==(int)0x10bce115;
		} else {
			return inClassId==(int)0x2c01639b;
		}
	} else {
		return inClassId==(int)0x7ccf8994 || inClassId==(int)0x7dab0655;
	}
}

void HealthIcon_obj::swapOldIcon(){
            	HX_STACKFRAME(&_hx_pos_eb8a54c9c53eb75f_24_swapOldIcon)
HXLINE(  25)		this->isOldIcon = !(this->isOldIcon);
HXLINE(  26)		if (this->isOldIcon) {
HXLINE(  26)			this->changeIcon(HX_("bf-old",5e,ba,eb,07));
            		}
            		else {
HXLINE(  26)			this->changeIcon(HX_("bf",c4,55,00,00));
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(HealthIcon_obj,swapOldIcon,(void))

void HealthIcon_obj::changeIcon(::String _hx_char){
            	HX_STACKFRAME(&_hx_pos_eb8a54c9c53eb75f_29_changeIcon)
HXLINE(  30)		if ((HX_("bf-old",5e,ba,eb,07) != _hx_char)) {
HXLINE(  31)			_hx_char = _hx_char.split(HX_("-",2d,00,00,00))->__get(0);
            		}
HXLINE(  33)		if ((_hx_char != this->character)) {
HXLINE(  34)			::String library = null();
HXDLIN(  34)			if (::openfl::utils::Assets_obj::exists(::Paths_obj::getPath(((HX_("images/",77,50,74,c1) + (HX_("icons/icon-",5f,da,21,72) + _hx_char)) + HX_(".png",3b,2d,bd,1e)),HX_("IMAGE",3b,57,57,3b),library),null())) {
HXLINE(  35)				::String library = null();
HXDLIN(  35)				this->loadGraphic(::Paths_obj::getPath(((HX_("images/",77,50,74,c1) + (HX_("icons/icon-",5f,da,21,72) + _hx_char)) + HX_(".png",3b,2d,bd,1e)),HX_("IMAGE",3b,57,57,3b),library),true,150,150,null(),null());
HXLINE(  36)				this->animation->add(_hx_char,::Array_obj< int >::fromData( _hx_array_data_f8f9be55_3,2),0,false,this->isPlayer,null());
HXLINE(  37)				this->animation->play(_hx_char,null(),null(),null());
HXLINE(  38)				this->character = _hx_char;
            			}
            			else {
HXLINE(  40)				this->changeIcon(HX_("face",9d,b4,b5,43));
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(HealthIcon_obj,changeIcon,(void))

void HealthIcon_obj::update(Float elapsed){
            	HX_STACKFRAME(&_hx_pos_eb8a54c9c53eb75f_44_update)
HXLINE(  45)		this->super::update(elapsed);
HXLINE(  47)		if (::hx::IsNotNull( this->sprTracker )) {
HXLINE(  48)			Float _hx_tmp = this->sprTracker->x;
HXDLIN(  48)			Float _hx_tmp1 = ((_hx_tmp + this->sprTracker->get_width()) + 10);
HXDLIN(  48)			this->setPosition(_hx_tmp1,(this->sprTracker->y - ( (Float)(30) )));
            		}
            	}


 ::HealthIcon HealthIcon_obj::instance;


::hx::ObjectPtr< HealthIcon_obj > HealthIcon_obj::__new(::String __o__hx_char,::hx::Null< bool >  __o_isPlayer) {
	::hx::ObjectPtr< HealthIcon_obj > __this = new HealthIcon_obj();
	__this->__construct(__o__hx_char,__o_isPlayer);
	return __this;
}

::hx::ObjectPtr< HealthIcon_obj > HealthIcon_obj::__alloc(::hx::Ctx *_hx_ctx,::String __o__hx_char,::hx::Null< bool >  __o_isPlayer) {
	HealthIcon_obj *__this = (HealthIcon_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(HealthIcon_obj), true, "HealthIcon"));
	*(void **)__this = HealthIcon_obj::_hx_vtable;
	__this->__construct(__o__hx_char,__o_isPlayer);
	return __this;
}

HealthIcon_obj::HealthIcon_obj()
{
}

void HealthIcon_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(HealthIcon);
	HX_MARK_MEMBER_NAME(sprTracker,"sprTracker");
	HX_MARK_MEMBER_NAME(isPlayer,"isPlayer");
	HX_MARK_MEMBER_NAME(isOldIcon,"isOldIcon");
	HX_MARK_MEMBER_NAME(character,"character");
	 ::flixel::FlxSprite_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void HealthIcon_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(sprTracker,"sprTracker");
	HX_VISIT_MEMBER_NAME(isPlayer,"isPlayer");
	HX_VISIT_MEMBER_NAME(isOldIcon,"isOldIcon");
	HX_VISIT_MEMBER_NAME(character,"character");
	 ::flixel::FlxSprite_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val HealthIcon_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"update") ) { return ::hx::Val( update_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"isPlayer") ) { return ::hx::Val( isPlayer ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"isOldIcon") ) { return ::hx::Val( isOldIcon ); }
		if (HX_FIELD_EQ(inName,"character") ) { return ::hx::Val( character ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"sprTracker") ) { return ::hx::Val( sprTracker ); }
		if (HX_FIELD_EQ(inName,"changeIcon") ) { return ::hx::Val( changeIcon_dyn() ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"swapOldIcon") ) { return ::hx::Val( swapOldIcon_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

bool HealthIcon_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"instance") ) { outValue = ( instance ); return true; }
	}
	return false;
}

::hx::Val HealthIcon_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"isPlayer") ) { isPlayer=inValue.Cast< bool >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"isOldIcon") ) { isOldIcon=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"character") ) { character=inValue.Cast< ::String >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"sprTracker") ) { sprTracker=inValue.Cast<  ::flixel::FlxSprite >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool HealthIcon_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"instance") ) { instance=ioValue.Cast<  ::HealthIcon >(); return true; }
	}
	return false;
}

void HealthIcon_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("sprTracker",03,a3,e2,78));
	outFields->push(HX_("isPlayer",eb,86,22,90));
	outFields->push(HX_("isOldIcon",f6,08,f6,fe));
	outFields->push(HX_("character",a9,db,d1,41));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo HealthIcon_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::flixel::FlxSprite */ ,(int)offsetof(HealthIcon_obj,sprTracker),HX_("sprTracker",03,a3,e2,78)},
	{::hx::fsBool,(int)offsetof(HealthIcon_obj,isPlayer),HX_("isPlayer",eb,86,22,90)},
	{::hx::fsBool,(int)offsetof(HealthIcon_obj,isOldIcon),HX_("isOldIcon",f6,08,f6,fe)},
	{::hx::fsString,(int)offsetof(HealthIcon_obj,character),HX_("character",a9,db,d1,41)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo HealthIcon_obj_sStaticStorageInfo[] = {
	{::hx::fsObject /*  ::HealthIcon */ ,(void *) &HealthIcon_obj::instance,HX_("instance",95,1f,e1,59)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static ::String HealthIcon_obj_sMemberFields[] = {
	HX_("sprTracker",03,a3,e2,78),
	HX_("isPlayer",eb,86,22,90),
	HX_("isOldIcon",f6,08,f6,fe),
	HX_("character",a9,db,d1,41),
	HX_("swapOldIcon",6d,51,5b,02),
	HX_("changeIcon",09,1d,fc,1f),
	HX_("update",09,86,05,87),
	::String(null()) };

static void HealthIcon_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(HealthIcon_obj::instance,"instance");
};

#ifdef HXCPP_VISIT_ALLOCS
static void HealthIcon_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(HealthIcon_obj::instance,"instance");
};

#endif

::hx::Class HealthIcon_obj::__mClass;

static ::String HealthIcon_obj_sStaticFields[] = {
	HX_("instance",95,1f,e1,59),
	::String(null())
};

void HealthIcon_obj::__register()
{
	HealthIcon_obj _hx_dummy;
	HealthIcon_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("HealthIcon",55,be,f9,f8);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &HealthIcon_obj::__GetStatic;
	__mClass->mSetStaticField = &HealthIcon_obj::__SetStatic;
	__mClass->mMarkFunc = HealthIcon_obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(HealthIcon_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(HealthIcon_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< HealthIcon_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = HealthIcon_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = HealthIcon_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = HealthIcon_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void HealthIcon_obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_eb8a54c9c53eb75f_7_boot)
HXDLIN(   7)		instance = null();
            	}
}

