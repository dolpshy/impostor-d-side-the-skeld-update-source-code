#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
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
#ifndef INCLUDED_flixel_input_FlxInput
#include <flixel/input/FlxInput.h>
#endif
#ifndef INCLUDED_flixel_input_FlxPointer
#include <flixel/input/FlxPointer.h>
#endif
#ifndef INCLUDED_flixel_input_FlxSwipe
#include <flixel/input/FlxSwipe.h>
#endif
#ifndef INCLUDED_flixel_input_IFlxInput
#include <flixel/input/IFlxInput.h>
#endif
#ifndef INCLUDED_flixel_input_touch_FlxTouch
#include <flixel/input/touch/FlxTouch.h>
#endif
#ifndef INCLUDED_flixel_math_FlxBasePoint
#include <flixel/math/FlxBasePoint.h>
#endif
#ifndef INCLUDED_flixel_system_scaleModes_BaseScaleMode
#include <flixel/system/scaleModes/BaseScaleMode.h>
#endif
#ifndef INCLUDED_flixel_util_FlxDestroyUtil
#include <flixel/util/FlxDestroyUtil.h>
#endif
#ifndef INCLUDED_flixel_util_FlxPool_flixel_math_FlxBasePoint
#include <flixel/util/FlxPool_flixel_math_FlxBasePoint.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxPool
#include <flixel/util/IFlxPool.h>
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
#ifndef INCLUDED_openfl_geom_Point
#include <openfl/geom/Point.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_23711c7fa15af2bf_17_new,"flixel.input.touch.FlxTouch","new",0xa47319c4,"flixel.input.touch.FlxTouch.new","flixel/input/touch/FlxTouch.hx",17,0x7bf286c9)
HX_LOCAL_STACK_FRAME(_hx_pos_23711c7fa15af2bf_43_destroy,"flixel.input.touch.FlxTouch","destroy",0x988ff85e,"flixel.input.touch.FlxTouch.destroy","flixel/input/touch/FlxTouch.hx",43,0x7bf286c9)
HX_LOCAL_STACK_FRAME(_hx_pos_23711c7fa15af2bf_53_recycle,"flixel.input.touch.FlxTouch","recycle",0xab95db77,"flixel.input.touch.FlxTouch.recycle","flixel/input/touch/FlxTouch.hx",53,0x7bf286c9)
HX_LOCAL_STACK_FRAME(_hx_pos_23711c7fa15af2bf_79_update,"flixel.input.touch.FlxTouch","update",0x82f33325,"flixel.input.touch.FlxTouch.update","flixel/input/touch/FlxTouch.hx",79,0x7bf286c9)
HX_LOCAL_STACK_FRAME(_hx_pos_23711c7fa15af2bf_102_setXY,"flixel.input.touch.FlxTouch","setXY",0xdbbeff87,"flixel.input.touch.FlxTouch.setXY","flixel/input/touch/FlxTouch.hx",102,0x7bf286c9)
HX_LOCAL_STACK_FRAME(_hx_pos_23711c7fa15af2bf_111_get_touchPointID,"flixel.input.touch.FlxTouch","get_touchPointID",0xed1e52d1,"flixel.input.touch.FlxTouch.get_touchPointID","flixel/input/touch/FlxTouch.hx",111,0x7bf286c9)
HX_LOCAL_STACK_FRAME(_hx_pos_23711c7fa15af2bf_116_get_justReleased,"flixel.input.touch.FlxTouch","get_justReleased",0xd7f5afae,"flixel.input.touch.FlxTouch.get_justReleased","flixel/input/touch/FlxTouch.hx",116,0x7bf286c9)
HX_LOCAL_STACK_FRAME(_hx_pos_23711c7fa15af2bf_121_get_released,"flixel.input.touch.FlxTouch","get_released",0xe547a6e2,"flixel.input.touch.FlxTouch.get_released","flixel/input/touch/FlxTouch.hx",121,0x7bf286c9)
HX_LOCAL_STACK_FRAME(_hx_pos_23711c7fa15af2bf_126_get_pressed,"flixel.input.touch.FlxTouch","get_pressed",0x583e801d,"flixel.input.touch.FlxTouch.get_pressed","flixel/input/touch/FlxTouch.hx",126,0x7bf286c9)
HX_LOCAL_STACK_FRAME(_hx_pos_23711c7fa15af2bf_131_get_justPressed,"flixel.input.touch.FlxTouch","get_justPressed",0xad2294d1,"flixel.input.touch.FlxTouch.get_justPressed","flixel/input/touch/FlxTouch.hx",131,0x7bf286c9)
namespace flixel{
namespace input{
namespace touch{

void FlxTouch_obj::__construct(::hx::Null< int >  __o_x,::hx::Null< int >  __o_y,::hx::Null< int >  __o_pointID,::hx::Null< Float >  __o_pressure){
            		int x = __o_x.Default(0);
            		int y = __o_y.Default(0);
            		int pointID = __o_pointID.Default(0);
            		Float pressure = __o_pressure.Default(0);
            	HX_GC_STACKFRAME(&_hx_pos_23711c7fa15af2bf_17_new)
HXLINE(  40)		this->justPressedTimeInTicks = -1;
HXLINE(  39)		 ::flixel::math::FlxBasePoint point = ::flixel::math::FlxBasePoint_obj::pool->get()->set(( (Float)(0) ),( (Float)(0) ));
HXDLIN(  39)		point->_inPool = false;
HXDLIN(  39)		this->justPressedPosition = point;
HXLINE(  37)		this->flashPoint =  ::openfl::geom::Point_obj::__alloc( HX_CTX ,null(),null());
HXLINE(  68)		super::__construct();
HXLINE(  70)		this->input =  ::flixel::input::FlxInput_obj::__alloc( HX_CTX ,pointID);
HXLINE(  71)		this->setXY(x,y);
HXLINE(  72)		this->pressure = pressure;
            	}

Dynamic FlxTouch_obj::__CreateEmpty() { return new FlxTouch_obj; }

void *FlxTouch_obj::_hx_vtable = 0;

Dynamic FlxTouch_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< FlxTouch_obj > _hx_result = new FlxTouch_obj();
	_hx_result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3]);
	return _hx_result;
}

bool FlxTouch_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x4252a31e) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x4252a31e;
	} else {
		return inClassId==(int)0x62adae31;
	}
}

static ::flixel::input::IFlxInput_obj _hx_flixel_input_touch_FlxTouch__hx_flixel_input_IFlxInput= {
	( bool (::hx::Object::*)())&::flixel::input::touch::FlxTouch_obj::get_justReleased,
	( bool (::hx::Object::*)())&::flixel::input::touch::FlxTouch_obj::get_released,
	( bool (::hx::Object::*)())&::flixel::input::touch::FlxTouch_obj::get_pressed,
	( bool (::hx::Object::*)())&::flixel::input::touch::FlxTouch_obj::get_justPressed,
};

static ::flixel::util::IFlxDestroyable_obj _hx_flixel_input_touch_FlxTouch__hx_flixel_util_IFlxDestroyable= {
	( void (::hx::Object::*)())&::flixel::input::touch::FlxTouch_obj::destroy,
};

void *FlxTouch_obj::_hx_getInterface(int inHash) {
	switch(inHash) {
		case (int)0x52baf533: return &_hx_flixel_input_touch_FlxTouch__hx_flixel_input_IFlxInput;
		case (int)0xd4fe2fcd: return &_hx_flixel_input_touch_FlxTouch__hx_flixel_util_IFlxDestroyable;
	}
	return super::_hx_getInterface(inHash);
}

void FlxTouch_obj::destroy(){
            	HX_STACKFRAME(&_hx_pos_23711c7fa15af2bf_43_destroy)
HXLINE(  44)		this->input = null();
HXLINE(  45)		this->justPressedPosition = ( ( ::flixel::math::FlxBasePoint)(::flixel::util::FlxDestroyUtil_obj::put(this->justPressedPosition)) );
HXLINE(  46)		this->flashPoint = null();
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxTouch_obj,destroy,(void))

void FlxTouch_obj::recycle(int x,int y,int pointID,Float pressure){
            	HX_STACKFRAME(&_hx_pos_23711c7fa15af2bf_53_recycle)
HXLINE(  54)		this->setXY(x,y);
HXLINE(  55)		this->input->ID = pointID;
HXLINE(  56)		this->input->reset();
HXLINE(  57)		this->pressure = pressure;
            	}


HX_DEFINE_DYNAMIC_FUNC4(FlxTouch_obj,recycle,(void))

void FlxTouch_obj::update(){
            	HX_GC_STACKFRAME(&_hx_pos_23711c7fa15af2bf_79_update)
HXLINE(  80)		this->input->update();
HXLINE(  82)		if ((this->input->current == 2)) {
HXLINE(  84)			{
HXLINE(  84)				 ::flixel::math::FlxBasePoint this1 = this->justPressedPosition;
HXDLIN(  84)				Float y = ( (Float)(this->screenY) );
HXDLIN(  84)				this1->set_x(( (Float)(this->screenX) ));
HXDLIN(  84)				this1->set_y(y);
            			}
HXLINE(  85)			this->justPressedTimeInTicks = ::flixel::FlxG_obj::game->ticks;
            		}
            		else {
HXLINE(  88)			if ((this->input->current == -1)) {
HXLINE(  90)				::Array< ::Dynamic> _hx_tmp = ::flixel::FlxG_obj::swipes;
HXDLIN(  90)				int _hx_tmp1 = ( (int)(this->input->ID) );
HXDLIN(  90)				 ::flixel::math::FlxBasePoint _hx_tmp2 = this->justPressedPosition;
HXDLIN(  90)				 ::flixel::math::FlxBasePoint _hx_tmp3 = this->getScreenPosition(null(),null());
HXDLIN(  90)				_hx_tmp->push( ::flixel::input::FlxSwipe_obj::__alloc( HX_CTX ,_hx_tmp1,_hx_tmp2,_hx_tmp3,this->justPressedTimeInTicks));
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxTouch_obj,update,(void))

void FlxTouch_obj::setXY(int X,int Y){
            	HX_STACKFRAME(&_hx_pos_23711c7fa15af2bf_102_setXY)
HXLINE( 103)		this->flashPoint->setTo(( (Float)(X) ),( (Float)(Y) ));
HXLINE( 104)		this->flashPoint = ::flixel::FlxG_obj::game->globalToLocal(this->flashPoint);
HXLINE( 106)		{
HXLINE( 106)			Float newY = this->flashPoint->y;
HXDLIN( 106)			this->_globalScreenX = ::Std_obj::_hx_int((this->flashPoint->x / ::flixel::FlxG_obj::scaleMode->scale->x));
HXDLIN( 106)			this->_globalScreenY = ::Std_obj::_hx_int((newY / ::flixel::FlxG_obj::scaleMode->scale->y));
HXDLIN( 106)			this->updatePositions();
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC2(FlxTouch_obj,setXY,(void))

int FlxTouch_obj::get_touchPointID(){
            	HX_STACKFRAME(&_hx_pos_23711c7fa15af2bf_111_get_touchPointID)
HXDLIN( 111)		return ( (int)(this->input->ID) );
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxTouch_obj,get_touchPointID,return )

bool FlxTouch_obj::get_justReleased(){
            	HX_STACKFRAME(&_hx_pos_23711c7fa15af2bf_116_get_justReleased)
HXDLIN( 116)		return (this->input->current == -1);
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxTouch_obj,get_justReleased,return )

bool FlxTouch_obj::get_released(){
            	HX_STACKFRAME(&_hx_pos_23711c7fa15af2bf_121_get_released)
HXDLIN( 121)		 ::flixel::input::FlxInput _this = this->input;
HXDLIN( 121)		if ((_this->current != 0)) {
HXDLIN( 121)			return (_this->current == -1);
            		}
            		else {
HXDLIN( 121)			return true;
            		}
HXDLIN( 121)		return false;
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxTouch_obj,get_released,return )

bool FlxTouch_obj::get_pressed(){
            	HX_STACKFRAME(&_hx_pos_23711c7fa15af2bf_126_get_pressed)
HXDLIN( 126)		 ::flixel::input::FlxInput _this = this->input;
HXDLIN( 126)		if ((_this->current != 1)) {
HXDLIN( 126)			return (_this->current == 2);
            		}
            		else {
HXDLIN( 126)			return true;
            		}
HXDLIN( 126)		return false;
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxTouch_obj,get_pressed,return )

bool FlxTouch_obj::get_justPressed(){
            	HX_STACKFRAME(&_hx_pos_23711c7fa15af2bf_131_get_justPressed)
HXDLIN( 131)		return (this->input->current == 2);
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxTouch_obj,get_justPressed,return )


::hx::ObjectPtr< FlxTouch_obj > FlxTouch_obj::__new(::hx::Null< int >  __o_x,::hx::Null< int >  __o_y,::hx::Null< int >  __o_pointID,::hx::Null< Float >  __o_pressure) {
	::hx::ObjectPtr< FlxTouch_obj > __this = new FlxTouch_obj();
	__this->__construct(__o_x,__o_y,__o_pointID,__o_pressure);
	return __this;
}

::hx::ObjectPtr< FlxTouch_obj > FlxTouch_obj::__alloc(::hx::Ctx *_hx_ctx,::hx::Null< int >  __o_x,::hx::Null< int >  __o_y,::hx::Null< int >  __o_pointID,::hx::Null< Float >  __o_pressure) {
	FlxTouch_obj *__this = (FlxTouch_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(FlxTouch_obj), true, "flixel.input.touch.FlxTouch"));
	*(void **)__this = FlxTouch_obj::_hx_vtable;
	__this->__construct(__o_x,__o_y,__o_pointID,__o_pressure);
	return __this;
}

FlxTouch_obj::FlxTouch_obj()
{
}

void FlxTouch_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(FlxTouch);
	HX_MARK_MEMBER_NAME(pressure,"pressure");
	HX_MARK_MEMBER_NAME(input,"input");
	HX_MARK_MEMBER_NAME(flashPoint,"flashPoint");
	HX_MARK_MEMBER_NAME(justPressedPosition,"justPressedPosition");
	HX_MARK_MEMBER_NAME(justPressedTimeInTicks,"justPressedTimeInTicks");
	HX_MARK_END_CLASS();
}

void FlxTouch_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(pressure,"pressure");
	HX_VISIT_MEMBER_NAME(input,"input");
	HX_VISIT_MEMBER_NAME(flashPoint,"flashPoint");
	HX_VISIT_MEMBER_NAME(justPressedPosition,"justPressedPosition");
	HX_VISIT_MEMBER_NAME(justPressedTimeInTicks,"justPressedTimeInTicks");
}

::hx::Val FlxTouch_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"input") ) { return ::hx::Val( input ); }
		if (HX_FIELD_EQ(inName,"setXY") ) { return ::hx::Val( setXY_dyn() ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"update") ) { return ::hx::Val( update_dyn() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"pressed") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_pressed() ); }
		if (HX_FIELD_EQ(inName,"destroy") ) { return ::hx::Val( destroy_dyn() ); }
		if (HX_FIELD_EQ(inName,"recycle") ) { return ::hx::Val( recycle_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"pressure") ) { return ::hx::Val( pressure ); }
		if (HX_FIELD_EQ(inName,"released") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_released() ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"flashPoint") ) { return ::hx::Val( flashPoint ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"justPressed") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_justPressed() ); }
		if (HX_FIELD_EQ(inName,"get_pressed") ) { return ::hx::Val( get_pressed_dyn() ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"touchPointID") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_touchPointID() ); }
		if (HX_FIELD_EQ(inName,"justReleased") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_justReleased() ); }
		if (HX_FIELD_EQ(inName,"get_released") ) { return ::hx::Val( get_released_dyn() ); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"get_justPressed") ) { return ::hx::Val( get_justPressed_dyn() ); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"get_touchPointID") ) { return ::hx::Val( get_touchPointID_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_justReleased") ) { return ::hx::Val( get_justReleased_dyn() ); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"justPressedPosition") ) { return ::hx::Val( justPressedPosition ); }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"justPressedTimeInTicks") ) { return ::hx::Val( justPressedTimeInTicks ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val FlxTouch_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"input") ) { input=inValue.Cast<  ::flixel::input::FlxInput >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"pressure") ) { pressure=inValue.Cast< Float >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"flashPoint") ) { flashPoint=inValue.Cast<  ::openfl::geom::Point >(); return inValue; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"justPressedPosition") ) { justPressedPosition=inValue.Cast<  ::flixel::math::FlxBasePoint >(); return inValue; }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"justPressedTimeInTicks") ) { justPressedTimeInTicks=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void FlxTouch_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("touchPointID",2c,be,83,7b));
	outFields->push(HX_("pressure",c5,ab,1d,70));
	outFields->push(HX_("justReleased",09,1b,5b,66));
	outFields->push(HX_("released",bd,88,e7,76));
	outFields->push(HX_("pressed",a2,d2,e6,39));
	outFields->push(HX_("justPressed",d6,0d,a7,f2));
	outFields->push(HX_("input",0a,c4,1d,be));
	outFields->push(HX_("flashPoint",80,50,a0,e4));
	outFields->push(HX_("justPressedPosition",9f,30,76,ae));
	outFields->push(HX_("justPressedTimeInTicks",8e,f9,c2,82));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo FlxTouch_obj_sMemberStorageInfo[] = {
	{::hx::fsFloat,(int)offsetof(FlxTouch_obj,pressure),HX_("pressure",c5,ab,1d,70)},
	{::hx::fsObject /*  ::flixel::input::FlxInput */ ,(int)offsetof(FlxTouch_obj,input),HX_("input",0a,c4,1d,be)},
	{::hx::fsObject /*  ::openfl::geom::Point */ ,(int)offsetof(FlxTouch_obj,flashPoint),HX_("flashPoint",80,50,a0,e4)},
	{::hx::fsObject /*  ::flixel::math::FlxBasePoint */ ,(int)offsetof(FlxTouch_obj,justPressedPosition),HX_("justPressedPosition",9f,30,76,ae)},
	{::hx::fsInt,(int)offsetof(FlxTouch_obj,justPressedTimeInTicks),HX_("justPressedTimeInTicks",8e,f9,c2,82)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *FlxTouch_obj_sStaticStorageInfo = 0;
#endif

static ::String FlxTouch_obj_sMemberFields[] = {
	HX_("pressure",c5,ab,1d,70),
	HX_("input",0a,c4,1d,be),
	HX_("flashPoint",80,50,a0,e4),
	HX_("justPressedPosition",9f,30,76,ae),
	HX_("justPressedTimeInTicks",8e,f9,c2,82),
	HX_("destroy",fa,2c,86,24),
	HX_("recycle",13,10,8c,37),
	HX_("update",09,86,05,87),
	HX_("setXY",23,95,2f,7a),
	HX_("get_touchPointID",b5,aa,22,80),
	HX_("get_justReleased",92,07,fa,6a),
	HX_("get_released",c6,3c,01,2c),
	HX_("get_pressed",b9,32,e1,bf),
	HX_("get_justPressed",6d,c5,88,b3),
	::String(null()) };

::hx::Class FlxTouch_obj::__mClass;

void FlxTouch_obj::__register()
{
	FlxTouch_obj _hx_dummy;
	FlxTouch_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("flixel.input.touch.FlxTouch",d2,27,f2,19);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(FlxTouch_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< FlxTouch_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = FlxTouch_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = FlxTouch_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace flixel
} // end namespace input
} // end namespace touch
