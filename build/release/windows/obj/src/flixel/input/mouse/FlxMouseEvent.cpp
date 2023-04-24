#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
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
#ifndef INCLUDED_flixel_input_mouse_FlxMouseEvent
#include <flixel/input/mouse/FlxMouseEvent.h>
#endif
#ifndef INCLUDED_flixel_input_mouse_FlxMouseEventManager
#include <flixel/input/mouse/FlxMouseEventManager.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_2c0ea66f87a6cfc0_218_new,"flixel.input.mouse.FlxMouseEvent","new",0x01f3409a,"flixel.input.mouse.FlxMouseEvent.new","flixel/input/mouse/FlxMouseEvent.hx",218,0x79c53a59)
static const int _hx_array_data_38b4aba8_1[] = {
	(int)-1,
};
HX_LOCAL_STACK_FRAME(_hx_pos_2c0ea66f87a6cfc0_236_destroy,"flixel.input.mouse.FlxMouseEvent","destroy",0x27db4234,"flixel.input.mouse.FlxMouseEvent.destroy","flixel/input/mouse/FlxMouseEvent.hx",236,0x79c53a59)
HX_LOCAL_STACK_FRAME(_hx_pos_2c0ea66f87a6cfc0_31_add,"flixel.input.mouse.FlxMouseEvent","add",0x01e9625b,"flixel.input.mouse.FlxMouseEvent.add","flixel/input/mouse/FlxMouseEvent.hx",31,0x79c53a59)
HX_LOCAL_STACK_FRAME(_hx_pos_2c0ea66f87a6cfc0_40_remove,"flixel.input.mouse.FlxMouseEvent","remove",0xbe858c4a,"flixel.input.mouse.FlxMouseEvent.remove","flixel/input/mouse/FlxMouseEvent.hx",40,0x79c53a59)
HX_LOCAL_STACK_FRAME(_hx_pos_2c0ea66f87a6cfc0_48_removeAll,"flixel.input.mouse.FlxMouseEvent","removeAll",0x1d956ef7,"flixel.input.mouse.FlxMouseEvent.removeAll","flixel/input/mouse/FlxMouseEvent.hx",48,0x79c53a59)
HX_LOCAL_STACK_FRAME(_hx_pos_2c0ea66f87a6cfc0_60_reorder,"flixel.input.mouse.FlxMouseEvent","reorder",0x1f105935,"flixel.input.mouse.FlxMouseEvent.reorder","flixel/input/mouse/FlxMouseEvent.hx",60,0x79c53a59)
HX_LOCAL_STACK_FRAME(_hx_pos_2c0ea66f87a6cfc0_71_setMouseDownCallback,"flixel.input.mouse.FlxMouseEvent","setMouseDownCallback",0xf8aea290,"flixel.input.mouse.FlxMouseEvent.setMouseDownCallback","flixel/input/mouse/FlxMouseEvent.hx",71,0x79c53a59)
HX_LOCAL_STACK_FRAME(_hx_pos_2c0ea66f87a6cfc0_82_setMouseUpCallback,"flixel.input.mouse.FlxMouseEvent","setMouseUpCallback",0x00aedd49,"flixel.input.mouse.FlxMouseEvent.setMouseUpCallback","flixel/input/mouse/FlxMouseEvent.hx",82,0x79c53a59)
HX_LOCAL_STACK_FRAME(_hx_pos_2c0ea66f87a6cfc0_94_setMouseClickCallback,"flixel.input.mouse.FlxMouseEvent","setMouseClickCallback",0x80d037c4,"flixel.input.mouse.FlxMouseEvent.setMouseClickCallback","flixel/input/mouse/FlxMouseEvent.hx",94,0x79c53a59)
HX_LOCAL_STACK_FRAME(_hx_pos_2c0ea66f87a6cfc0_106_setMouseDoubleClickCallback,"flixel.input.mouse.FlxMouseEvent","setMouseDoubleClickCallback",0x1f85d133,"flixel.input.mouse.FlxMouseEvent.setMouseDoubleClickCallback","flixel/input/mouse/FlxMouseEvent.hx",106,0x79c53a59)
HX_LOCAL_STACK_FRAME(_hx_pos_2c0ea66f87a6cfc0_117_setMouseOverCallback,"flixel.input.mouse.FlxMouseEvent","setMouseOverCallback",0x18867d82,"flixel.input.mouse.FlxMouseEvent.setMouseOverCallback","flixel/input/mouse/FlxMouseEvent.hx",117,0x79c53a59)
HX_LOCAL_STACK_FRAME(_hx_pos_2c0ea66f87a6cfc0_128_setMouseOutCallback,"flixel.input.mouse.FlxMouseEvent","setMouseOutCallback",0xfa19ae4a,"flixel.input.mouse.FlxMouseEvent.setMouseOutCallback","flixel/input/mouse/FlxMouseEvent.hx",128,0x79c53a59)
HX_LOCAL_STACK_FRAME(_hx_pos_2c0ea66f87a6cfc0_140_setMouseMoveCallback,"flixel.input.mouse.FlxMouseEvent","setMouseMoveCallback",0x1da2543f,"flixel.input.mouse.FlxMouseEvent.setMouseMoveCallback","flixel/input/mouse/FlxMouseEvent.hx",140,0x79c53a59)
HX_LOCAL_STACK_FRAME(_hx_pos_2c0ea66f87a6cfc0_152_setMouseWheelCallback,"flixel.input.mouse.FlxMouseEvent","setMouseWheelCallback",0x3ce8fb17,"flixel.input.mouse.FlxMouseEvent.setMouseWheelCallback","flixel/input/mouse/FlxMouseEvent.hx",152,0x79c53a59)
HX_LOCAL_STACK_FRAME(_hx_pos_2c0ea66f87a6cfc0_162_setObjectMouseEnabled,"flixel.input.mouse.FlxMouseEvent","setObjectMouseEnabled",0xce601937,"flixel.input.mouse.FlxMouseEvent.setObjectMouseEnabled","flixel/input/mouse/FlxMouseEvent.hx",162,0x79c53a59)
HX_LOCAL_STACK_FRAME(_hx_pos_2c0ea66f87a6cfc0_170_isObjectMouseEnabled,"flixel.input.mouse.FlxMouseEvent","isObjectMouseEnabled",0x7e5b334b,"flixel.input.mouse.FlxMouseEvent.isObjectMouseEnabled","flixel/input/mouse/FlxMouseEvent.hx",170,0x79c53a59)
HX_LOCAL_STACK_FRAME(_hx_pos_2c0ea66f87a6cfc0_180_setObjectMouseChildren,"flixel.input.mouse.FlxMouseEvent","setObjectMouseChildren",0x496d23c9,"flixel.input.mouse.FlxMouseEvent.setObjectMouseChildren","flixel/input/mouse/FlxMouseEvent.hx",180,0x79c53a59)
HX_LOCAL_STACK_FRAME(_hx_pos_2c0ea66f87a6cfc0_188_isObjectMouseChildren,"flixel.input.mouse.FlxMouseEvent","isObjectMouseChildren",0x9528db35,"flixel.input.mouse.FlxMouseEvent.isObjectMouseChildren","flixel/input/mouse/FlxMouseEvent.hx",188,0x79c53a59)
HX_LOCAL_STACK_FRAME(_hx_pos_2c0ea66f87a6cfc0_196_setObjectMouseButtons,"flixel.input.mouse.FlxMouseEvent","setObjectMouseButtons",0x1aa466f7,"flixel.input.mouse.FlxMouseEvent.setObjectMouseButtons","flixel/input/mouse/FlxMouseEvent.hx",196,0x79c53a59)
namespace flixel{
namespace input{
namespace mouse{

void FlxMouseEvent_obj::__construct( ::Dynamic object, ::Dynamic onMouseDown, ::Dynamic onMouseUp, ::Dynamic onMouseOver, ::Dynamic onMouseOut,bool mouseChildren,bool mouseEnabled,bool pixelPerfect,::Array< int > mouseButtons){
            	HX_STACKFRAME(&_hx_pos_2c0ea66f87a6cfc0_218_new)
HXLINE( 219)		this->object = ( ( ::flixel::FlxObject)(object) );
HXLINE( 220)		this->onMouseDown = onMouseDown;
HXLINE( 221)		this->onMouseUp = onMouseUp;
HXLINE( 222)		this->onMouseOver = onMouseOver;
HXLINE( 223)		this->onMouseOut = onMouseOut;
HXLINE( 224)		this->mouseChildren = mouseChildren;
HXLINE( 225)		this->mouseEnabled = mouseEnabled;
HXLINE( 226)		this->pixelPerfect = pixelPerfect;
HXLINE( 227)		::Array< int > _hx_tmp;
HXDLIN( 227)		if (::hx::IsNull( mouseButtons )) {
HXLINE( 227)			_hx_tmp = ::Array_obj< int >::fromData( _hx_array_data_38b4aba8_1,1);
            		}
            		else {
HXLINE( 227)			_hx_tmp = mouseButtons;
            		}
HXDLIN( 227)		this->mouseButtons = _hx_tmp;
HXLINE( 229)		if (::Std_obj::isOfType(object,::hx::ClassOf< ::flixel::FlxSprite >())) {
HXLINE( 231)			this->sprite = ( ( ::flixel::FlxSprite)(object) );
            		}
            	}

Dynamic FlxMouseEvent_obj::__CreateEmpty() { return new FlxMouseEvent_obj; }

void *FlxMouseEvent_obj::_hx_vtable = 0;

Dynamic FlxMouseEvent_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< FlxMouseEvent_obj > _hx_result = new FlxMouseEvent_obj();
	_hx_result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3],inArgs[4],inArgs[5],inArgs[6],inArgs[7],inArgs[8]);
	return _hx_result;
}

bool FlxMouseEvent_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x790dbc50;
}

static ::flixel::util::IFlxDestroyable_obj _hx_flixel_input_mouse_FlxMouseEvent__hx_flixel_util_IFlxDestroyable= {
	( void (::hx::Object::*)())&::flixel::input::mouse::FlxMouseEvent_obj::destroy,
};

void *FlxMouseEvent_obj::_hx_getInterface(int inHash) {
	switch(inHash) {
		case (int)0xd4fe2fcd: return &_hx_flixel_input_mouse_FlxMouseEvent__hx_flixel_util_IFlxDestroyable;
	}
	#ifdef HXCPP_SCRIPTABLE
	return super::_hx_getInterface(inHash);
	#else
	return 0;
	#endif
}

void FlxMouseEvent_obj::destroy(){
            	HX_STACKFRAME(&_hx_pos_2c0ea66f87a6cfc0_236_destroy)
HXLINE( 237)		this->object = null();
HXLINE( 238)		this->sprite = null();
HXLINE( 239)		this->onMouseDown = null();
HXLINE( 240)		this->onMouseUp = null();
HXLINE( 241)		this->onMouseClick = null();
HXLINE( 242)		this->onMouseDoubleClick = null();
HXLINE( 243)		this->onMouseOver = null();
HXLINE( 244)		this->onMouseOut = null();
HXLINE( 245)		this->onMouseMove = null();
HXLINE( 246)		this->onMouseWheel = null();
HXLINE( 247)		this->mouseButtons = null();
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxMouseEvent_obj,destroy,(void))

 ::flixel::input::mouse::FlxMouseEventManager FlxMouseEvent_obj::globalManager;

 ::Dynamic FlxMouseEvent_obj::add( ::Dynamic object, ::Dynamic onMouseDown, ::Dynamic onMouseUp, ::Dynamic onMouseOver, ::Dynamic onMouseOut,::hx::Null< bool >  __o_mouseChildren,::hx::Null< bool >  __o_mouseEnabled,::hx::Null< bool >  __o_pixelPerfect,::Array< int > mouseButtons){
            		bool mouseChildren = __o_mouseChildren.Default(false);
            		bool mouseEnabled = __o_mouseEnabled.Default(true);
            		bool pixelPerfect = __o_pixelPerfect.Default(true);
            	HX_STACKFRAME(&_hx_pos_2c0ea66f87a6cfc0_31_add)
HXDLIN(  31)		return ::flixel::input::mouse::FlxMouseEvent_obj::globalManager->add(object,onMouseDown,onMouseUp,onMouseOver,onMouseOut,mouseChildren,mouseEnabled,pixelPerfect,mouseButtons);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC9(FlxMouseEvent_obj,add,return )

 ::Dynamic FlxMouseEvent_obj::remove( ::Dynamic object){
            	HX_STACKFRAME(&_hx_pos_2c0ea66f87a6cfc0_40_remove)
HXDLIN(  40)		return ::flixel::input::mouse::FlxMouseEvent_obj::globalManager->remove(object);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FlxMouseEvent_obj,remove,return )

void FlxMouseEvent_obj::removeAll(){
            	HX_STACKFRAME(&_hx_pos_2c0ea66f87a6cfc0_48_removeAll)
HXDLIN(  48)		::flixel::input::mouse::FlxMouseEvent_obj::globalManager->removeAll();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(FlxMouseEvent_obj,removeAll,(void))

void FlxMouseEvent_obj::reorder(){
            	HX_STACKFRAME(&_hx_pos_2c0ea66f87a6cfc0_60_reorder)
HXDLIN(  60)		::flixel::input::mouse::FlxMouseEvent_obj::globalManager->reorder();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(FlxMouseEvent_obj,reorder,(void))

void FlxMouseEvent_obj::setMouseDownCallback( ::Dynamic object, ::Dynamic onMouseDown){
            	HX_STACKFRAME(&_hx_pos_2c0ea66f87a6cfc0_71_setMouseDownCallback)
HXDLIN(  71)		::flixel::input::mouse::FlxMouseEvent_obj::globalManager->setMouseDownCallback(object,onMouseDown);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(FlxMouseEvent_obj,setMouseDownCallback,(void))

void FlxMouseEvent_obj::setMouseUpCallback( ::Dynamic object, ::Dynamic onMouseUp){
            	HX_STACKFRAME(&_hx_pos_2c0ea66f87a6cfc0_82_setMouseUpCallback)
HXDLIN(  82)		::flixel::input::mouse::FlxMouseEvent_obj::globalManager->setMouseUpCallback(object,onMouseUp);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(FlxMouseEvent_obj,setMouseUpCallback,(void))

void FlxMouseEvent_obj::setMouseClickCallback( ::Dynamic object, ::Dynamic onMouseClick){
            	HX_STACKFRAME(&_hx_pos_2c0ea66f87a6cfc0_94_setMouseClickCallback)
HXDLIN(  94)		::flixel::input::mouse::FlxMouseEvent_obj::globalManager->setMouseClickCallback(object,onMouseClick);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(FlxMouseEvent_obj,setMouseClickCallback,(void))

void FlxMouseEvent_obj::setMouseDoubleClickCallback( ::Dynamic object, ::Dynamic onMouseDoubleClick){
            	HX_STACKFRAME(&_hx_pos_2c0ea66f87a6cfc0_106_setMouseDoubleClickCallback)
HXDLIN( 106)		::flixel::input::mouse::FlxMouseEvent_obj::globalManager->setMouseDoubleClickCallback(object,onMouseDoubleClick);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(FlxMouseEvent_obj,setMouseDoubleClickCallback,(void))

void FlxMouseEvent_obj::setMouseOverCallback( ::Dynamic object, ::Dynamic onMouseOver){
            	HX_STACKFRAME(&_hx_pos_2c0ea66f87a6cfc0_117_setMouseOverCallback)
HXDLIN( 117)		::flixel::input::mouse::FlxMouseEvent_obj::globalManager->setMouseOverCallback(object,onMouseOver);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(FlxMouseEvent_obj,setMouseOverCallback,(void))

void FlxMouseEvent_obj::setMouseOutCallback( ::Dynamic object, ::Dynamic onMouseOut){
            	HX_STACKFRAME(&_hx_pos_2c0ea66f87a6cfc0_128_setMouseOutCallback)
HXDLIN( 128)		::flixel::input::mouse::FlxMouseEvent_obj::globalManager->setMouseOutCallback(object,onMouseOut);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(FlxMouseEvent_obj,setMouseOutCallback,(void))

void FlxMouseEvent_obj::setMouseMoveCallback( ::Dynamic object, ::Dynamic onMouseMove){
            	HX_STACKFRAME(&_hx_pos_2c0ea66f87a6cfc0_140_setMouseMoveCallback)
HXDLIN( 140)		::flixel::input::mouse::FlxMouseEvent_obj::globalManager->setMouseMoveCallback(object,onMouseMove);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(FlxMouseEvent_obj,setMouseMoveCallback,(void))

void FlxMouseEvent_obj::setMouseWheelCallback( ::Dynamic object, ::Dynamic onMouseWheel){
            	HX_STACKFRAME(&_hx_pos_2c0ea66f87a6cfc0_152_setMouseWheelCallback)
HXDLIN( 152)		::flixel::input::mouse::FlxMouseEvent_obj::globalManager->setMouseWheelCallback(object,onMouseWheel);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(FlxMouseEvent_obj,setMouseWheelCallback,(void))

void FlxMouseEvent_obj::setObjectMouseEnabled( ::Dynamic object,bool mouseEnabled){
            	HX_STACKFRAME(&_hx_pos_2c0ea66f87a6cfc0_162_setObjectMouseEnabled)
HXDLIN( 162)		::flixel::input::mouse::FlxMouseEvent_obj::globalManager->setObjectMouseEnabled(object,mouseEnabled);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(FlxMouseEvent_obj,setObjectMouseEnabled,(void))

bool FlxMouseEvent_obj::isObjectMouseEnabled( ::Dynamic object){
            	HX_STACKFRAME(&_hx_pos_2c0ea66f87a6cfc0_170_isObjectMouseEnabled)
HXDLIN( 170)		return ::flixel::input::mouse::FlxMouseEvent_obj::globalManager->isObjectMouseEnabled(object);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FlxMouseEvent_obj,isObjectMouseEnabled,return )

void FlxMouseEvent_obj::setObjectMouseChildren( ::Dynamic object,bool mouseChildren){
            	HX_STACKFRAME(&_hx_pos_2c0ea66f87a6cfc0_180_setObjectMouseChildren)
HXDLIN( 180)		::flixel::input::mouse::FlxMouseEvent_obj::globalManager->setObjectMouseChildren(object,mouseChildren);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(FlxMouseEvent_obj,setObjectMouseChildren,(void))

bool FlxMouseEvent_obj::isObjectMouseChildren( ::Dynamic object){
            	HX_STACKFRAME(&_hx_pos_2c0ea66f87a6cfc0_188_isObjectMouseChildren)
HXDLIN( 188)		return ::flixel::input::mouse::FlxMouseEvent_obj::globalManager->isObjectMouseChildren(object);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FlxMouseEvent_obj,isObjectMouseChildren,return )

void FlxMouseEvent_obj::setObjectMouseButtons( ::Dynamic object,::Array< int > mouseButtons){
            	HX_STACKFRAME(&_hx_pos_2c0ea66f87a6cfc0_196_setObjectMouseButtons)
HXDLIN( 196)		::flixel::input::mouse::FlxMouseEvent_obj::globalManager->setObjectMouseButtons(object,mouseButtons);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(FlxMouseEvent_obj,setObjectMouseButtons,(void))


::hx::ObjectPtr< FlxMouseEvent_obj > FlxMouseEvent_obj::__new( ::Dynamic object, ::Dynamic onMouseDown, ::Dynamic onMouseUp, ::Dynamic onMouseOver, ::Dynamic onMouseOut,bool mouseChildren,bool mouseEnabled,bool pixelPerfect,::Array< int > mouseButtons) {
	::hx::ObjectPtr< FlxMouseEvent_obj > __this = new FlxMouseEvent_obj();
	__this->__construct(object,onMouseDown,onMouseUp,onMouseOver,onMouseOut,mouseChildren,mouseEnabled,pixelPerfect,mouseButtons);
	return __this;
}

::hx::ObjectPtr< FlxMouseEvent_obj > FlxMouseEvent_obj::__alloc(::hx::Ctx *_hx_ctx, ::Dynamic object, ::Dynamic onMouseDown, ::Dynamic onMouseUp, ::Dynamic onMouseOver, ::Dynamic onMouseOut,bool mouseChildren,bool mouseEnabled,bool pixelPerfect,::Array< int > mouseButtons) {
	FlxMouseEvent_obj *__this = (FlxMouseEvent_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(FlxMouseEvent_obj), true, "flixel.input.mouse.FlxMouseEvent"));
	*(void **)__this = FlxMouseEvent_obj::_hx_vtable;
	__this->__construct(object,onMouseDown,onMouseUp,onMouseOver,onMouseOut,mouseChildren,mouseEnabled,pixelPerfect,mouseButtons);
	return __this;
}

FlxMouseEvent_obj::FlxMouseEvent_obj()
{
}

void FlxMouseEvent_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(FlxMouseEvent);
	HX_MARK_MEMBER_NAME(object,"object");
	HX_MARK_MEMBER_NAME(onMouseDown,"onMouseDown");
	HX_MARK_MEMBER_NAME(onMouseUp,"onMouseUp");
	HX_MARK_MEMBER_NAME(onMouseClick,"onMouseClick");
	HX_MARK_MEMBER_NAME(onMouseDoubleClick,"onMouseDoubleClick");
	HX_MARK_MEMBER_NAME(onMouseOver,"onMouseOver");
	HX_MARK_MEMBER_NAME(onMouseOut,"onMouseOut");
	HX_MARK_MEMBER_NAME(onMouseMove,"onMouseMove");
	HX_MARK_MEMBER_NAME(onMouseWheel,"onMouseWheel");
	HX_MARK_MEMBER_NAME(mouseChildren,"mouseChildren");
	HX_MARK_MEMBER_NAME(mouseEnabled,"mouseEnabled");
	HX_MARK_MEMBER_NAME(pixelPerfect,"pixelPerfect");
	HX_MARK_MEMBER_NAME(sprite,"sprite");
	HX_MARK_MEMBER_NAME(mouseButtons,"mouseButtons");
	HX_MARK_MEMBER_NAME(currentMouseButton,"currentMouseButton");
	HX_MARK_END_CLASS();
}

void FlxMouseEvent_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(object,"object");
	HX_VISIT_MEMBER_NAME(onMouseDown,"onMouseDown");
	HX_VISIT_MEMBER_NAME(onMouseUp,"onMouseUp");
	HX_VISIT_MEMBER_NAME(onMouseClick,"onMouseClick");
	HX_VISIT_MEMBER_NAME(onMouseDoubleClick,"onMouseDoubleClick");
	HX_VISIT_MEMBER_NAME(onMouseOver,"onMouseOver");
	HX_VISIT_MEMBER_NAME(onMouseOut,"onMouseOut");
	HX_VISIT_MEMBER_NAME(onMouseMove,"onMouseMove");
	HX_VISIT_MEMBER_NAME(onMouseWheel,"onMouseWheel");
	HX_VISIT_MEMBER_NAME(mouseChildren,"mouseChildren");
	HX_VISIT_MEMBER_NAME(mouseEnabled,"mouseEnabled");
	HX_VISIT_MEMBER_NAME(pixelPerfect,"pixelPerfect");
	HX_VISIT_MEMBER_NAME(sprite,"sprite");
	HX_VISIT_MEMBER_NAME(mouseButtons,"mouseButtons");
	HX_VISIT_MEMBER_NAME(currentMouseButton,"currentMouseButton");
}

::hx::Val FlxMouseEvent_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"object") ) { return ::hx::Val( object ); }
		if (HX_FIELD_EQ(inName,"sprite") ) { return ::hx::Val( sprite ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"destroy") ) { return ::hx::Val( destroy_dyn() ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"onMouseUp") ) { return ::hx::Val( onMouseUp ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"onMouseOut") ) { return ::hx::Val( onMouseOut ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"onMouseDown") ) { return ::hx::Val( onMouseDown ); }
		if (HX_FIELD_EQ(inName,"onMouseOver") ) { return ::hx::Val( onMouseOver ); }
		if (HX_FIELD_EQ(inName,"onMouseMove") ) { return ::hx::Val( onMouseMove ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"onMouseClick") ) { return ::hx::Val( onMouseClick ); }
		if (HX_FIELD_EQ(inName,"onMouseWheel") ) { return ::hx::Val( onMouseWheel ); }
		if (HX_FIELD_EQ(inName,"mouseEnabled") ) { return ::hx::Val( mouseEnabled ); }
		if (HX_FIELD_EQ(inName,"pixelPerfect") ) { return ::hx::Val( pixelPerfect ); }
		if (HX_FIELD_EQ(inName,"mouseButtons") ) { return ::hx::Val( mouseButtons ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"mouseChildren") ) { return ::hx::Val( mouseChildren ); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"onMouseDoubleClick") ) { return ::hx::Val( onMouseDoubleClick ); }
		if (HX_FIELD_EQ(inName,"currentMouseButton") ) { return ::hx::Val( currentMouseButton ); }
	}
	return super::__Field(inName,inCallProp);
}

bool FlxMouseEvent_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"add") ) { outValue = add_dyn(); return true; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"remove") ) { outValue = remove_dyn(); return true; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"reorder") ) { outValue = reorder_dyn(); return true; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"removeAll") ) { outValue = removeAll_dyn(); return true; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"globalManager") ) { outValue = ( globalManager ); return true; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"setMouseUpCallback") ) { outValue = setMouseUpCallback_dyn(); return true; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"setMouseOutCallback") ) { outValue = setMouseOutCallback_dyn(); return true; }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"setMouseDownCallback") ) { outValue = setMouseDownCallback_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"setMouseOverCallback") ) { outValue = setMouseOverCallback_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"setMouseMoveCallback") ) { outValue = setMouseMoveCallback_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"isObjectMouseEnabled") ) { outValue = isObjectMouseEnabled_dyn(); return true; }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"setMouseClickCallback") ) { outValue = setMouseClickCallback_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"setMouseWheelCallback") ) { outValue = setMouseWheelCallback_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"setObjectMouseEnabled") ) { outValue = setObjectMouseEnabled_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"isObjectMouseChildren") ) { outValue = isObjectMouseChildren_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"setObjectMouseButtons") ) { outValue = setObjectMouseButtons_dyn(); return true; }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"setObjectMouseChildren") ) { outValue = setObjectMouseChildren_dyn(); return true; }
		break;
	case 27:
		if (HX_FIELD_EQ(inName,"setMouseDoubleClickCallback") ) { outValue = setMouseDoubleClickCallback_dyn(); return true; }
	}
	return false;
}

::hx::Val FlxMouseEvent_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"object") ) { object=inValue.Cast<  ::flixel::FlxObject >(); return inValue; }
		if (HX_FIELD_EQ(inName,"sprite") ) { sprite=inValue.Cast<  ::flixel::FlxSprite >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"onMouseUp") ) { onMouseUp=inValue.Cast<  ::Dynamic >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"onMouseOut") ) { onMouseOut=inValue.Cast<  ::Dynamic >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"onMouseDown") ) { onMouseDown=inValue.Cast<  ::Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"onMouseOver") ) { onMouseOver=inValue.Cast<  ::Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"onMouseMove") ) { onMouseMove=inValue.Cast<  ::Dynamic >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"onMouseClick") ) { onMouseClick=inValue.Cast<  ::Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"onMouseWheel") ) { onMouseWheel=inValue.Cast<  ::Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"mouseEnabled") ) { mouseEnabled=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"pixelPerfect") ) { pixelPerfect=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"mouseButtons") ) { mouseButtons=inValue.Cast< ::Array< int > >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"mouseChildren") ) { mouseChildren=inValue.Cast< bool >(); return inValue; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"onMouseDoubleClick") ) { onMouseDoubleClick=inValue.Cast<  ::Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"currentMouseButton") ) { currentMouseButton=inValue.Cast<  ::Dynamic >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool FlxMouseEvent_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 13:
		if (HX_FIELD_EQ(inName,"globalManager") ) { globalManager=ioValue.Cast<  ::flixel::input::mouse::FlxMouseEventManager >(); return true; }
	}
	return false;
}

void FlxMouseEvent_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("object",bf,7e,3f,15));
	outFields->push(HX_("mouseChildren",84,18,6b,ff));
	outFields->push(HX_("mouseEnabled",dc,54,d6,5f));
	outFields->push(HX_("pixelPerfect",27,23,90,64));
	outFields->push(HX_("sprite",05,dc,95,c3));
	outFields->push(HX_("mouseButtons",9c,a2,1a,ac));
	outFields->push(HX_("currentMouseButton",3e,7a,04,47));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo FlxMouseEvent_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::flixel::FlxObject */ ,(int)offsetof(FlxMouseEvent_obj,object),HX_("object",bf,7e,3f,15)},
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(FlxMouseEvent_obj,onMouseDown),HX_("onMouseDown",08,94,05,11)},
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(FlxMouseEvent_obj,onMouseUp),HX_("onMouseUp",81,ac,1d,98)},
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(FlxMouseEvent_obj,onMouseClick),HX_("onMouseClick",e2,11,6f,3e)},
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(FlxMouseEvent_obj,onMouseDoubleClick),HX_("onMouseDoubleClick",91,c8,8d,b1)},
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(FlxMouseEvent_obj,onMouseOver),HX_("onMouseOver",fa,2c,50,18)},
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(FlxMouseEvent_obj,onMouseOut),HX_("onMouseOut",a8,bb,d4,81)},
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(FlxMouseEvent_obj,onMouseMove),HX_("onMouseMove",b7,7e,f8,16)},
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(FlxMouseEvent_obj,onMouseWheel),HX_("onMouseWheel",35,ca,ca,bf)},
	{::hx::fsBool,(int)offsetof(FlxMouseEvent_obj,mouseChildren),HX_("mouseChildren",84,18,6b,ff)},
	{::hx::fsBool,(int)offsetof(FlxMouseEvent_obj,mouseEnabled),HX_("mouseEnabled",dc,54,d6,5f)},
	{::hx::fsBool,(int)offsetof(FlxMouseEvent_obj,pixelPerfect),HX_("pixelPerfect",27,23,90,64)},
	{::hx::fsObject /*  ::flixel::FlxSprite */ ,(int)offsetof(FlxMouseEvent_obj,sprite),HX_("sprite",05,dc,95,c3)},
	{::hx::fsObject /* ::Array< int > */ ,(int)offsetof(FlxMouseEvent_obj,mouseButtons),HX_("mouseButtons",9c,a2,1a,ac)},
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(FlxMouseEvent_obj,currentMouseButton),HX_("currentMouseButton",3e,7a,04,47)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo FlxMouseEvent_obj_sStaticStorageInfo[] = {
	{::hx::fsObject /*  ::flixel::input::mouse::FlxMouseEventManager */ ,(void *) &FlxMouseEvent_obj::globalManager,HX_("globalManager",4a,cb,fa,39)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static ::String FlxMouseEvent_obj_sMemberFields[] = {
	HX_("object",bf,7e,3f,15),
	HX_("onMouseDown",08,94,05,11),
	HX_("onMouseUp",81,ac,1d,98),
	HX_("onMouseClick",e2,11,6f,3e),
	HX_("onMouseDoubleClick",91,c8,8d,b1),
	HX_("onMouseOver",fa,2c,50,18),
	HX_("onMouseOut",a8,bb,d4,81),
	HX_("onMouseMove",b7,7e,f8,16),
	HX_("onMouseWheel",35,ca,ca,bf),
	HX_("mouseChildren",84,18,6b,ff),
	HX_("mouseEnabled",dc,54,d6,5f),
	HX_("pixelPerfect",27,23,90,64),
	HX_("sprite",05,dc,95,c3),
	HX_("mouseButtons",9c,a2,1a,ac),
	HX_("currentMouseButton",3e,7a,04,47),
	HX_("destroy",fa,2c,86,24),
	::String(null()) };

static void FlxMouseEvent_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FlxMouseEvent_obj::globalManager,"globalManager");
};

#ifdef HXCPP_VISIT_ALLOCS
static void FlxMouseEvent_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FlxMouseEvent_obj::globalManager,"globalManager");
};

#endif

::hx::Class FlxMouseEvent_obj::__mClass;

static ::String FlxMouseEvent_obj_sStaticFields[] = {
	HX_("globalManager",4a,cb,fa,39),
	HX_("add",21,f2,49,00),
	HX_("remove",44,9c,88,04),
	HX_("removeAll",3d,17,e5,ca),
	HX_("reorder",fb,43,bb,1b),
	HX_("setMouseDownCallback",0a,f4,07,da),
	HX_("setMouseUpCallback",43,fc,86,24),
	HX_("setMouseClickCallback",0a,31,9e,cd),
	HX_("setMouseDoubleClickCallback",f9,02,73,43),
	HX_("setMouseOverCallback",fc,ce,df,f9),
	HX_("setMouseOutCallback",10,aa,5c,33),
	HX_("setMouseMoveCallback",b9,a5,fb,fe),
	HX_("setMouseWheelCallback",5d,f4,b6,89),
	HX_("setObjectMouseEnabled",7d,12,2e,1b),
	HX_("isObjectMouseEnabled",c5,84,b4,5f),
	HX_("setObjectMouseChildren",c3,47,d9,30),
	HX_("isObjectMouseChildren",7b,d4,f6,e1),
	HX_("setObjectMouseButtons",3d,60,72,67),
	::String(null())
};

void FlxMouseEvent_obj::__register()
{
	FlxMouseEvent_obj _hx_dummy;
	FlxMouseEvent_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("flixel.input.mouse.FlxMouseEvent",a8,ab,b4,38);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &FlxMouseEvent_obj::__GetStatic;
	__mClass->mSetStaticField = &FlxMouseEvent_obj::__SetStatic;
	__mClass->mMarkFunc = FlxMouseEvent_obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(FlxMouseEvent_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(FlxMouseEvent_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< FlxMouseEvent_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = FlxMouseEvent_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = FlxMouseEvent_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = FlxMouseEvent_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace flixel
} // end namespace input
} // end namespace mouse
