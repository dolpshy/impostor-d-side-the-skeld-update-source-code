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
#ifndef INCLUDED_flixel_FlxObject
#include <flixel/FlxObject.h>
#endif
#ifndef INCLUDED_flixel_FlxSprite
#include <flixel/FlxSprite.h>
#endif
#ifndef INCLUDED_flixel_FlxState
#include <flixel/FlxState.h>
#endif
#ifndef INCLUDED_flixel_group_FlxTypedGroup
#include <flixel/group/FlxTypedGroup.h>
#endif
#ifndef INCLUDED_flixel_input_FlxInput
#include <flixel/input/FlxInput.h>
#endif
#ifndef INCLUDED_flixel_input_FlxPointer
#include <flixel/input/FlxPointer.h>
#endif
#ifndef INCLUDED_flixel_input_IFlxInput
#include <flixel/input/IFlxInput.h>
#endif
#ifndef INCLUDED_flixel_input_IFlxInputManager
#include <flixel/input/IFlxInputManager.h>
#endif
#ifndef INCLUDED_flixel_input_mouse_FlxMouse
#include <flixel/input/mouse/FlxMouse.h>
#endif
#ifndef INCLUDED_flixel_input_mouse_FlxMouseButton
#include <flixel/input/mouse/FlxMouseButton.h>
#endif
#ifndef INCLUDED_flixel_input_mouse_FlxMouseEvent
#include <flixel/input/mouse/FlxMouseEvent.h>
#endif
#ifndef INCLUDED_flixel_input_mouse_FlxMouseEventManager
#include <flixel/input/mouse/FlxMouseEventManager.h>
#endif
#ifndef INCLUDED_flixel_input_touch_FlxTouch
#include <flixel/input/touch/FlxTouch.h>
#endif
#ifndef INCLUDED_flixel_input_touch_FlxTouchManager
#include <flixel/input/touch/FlxTouchManager.h>
#endif
#ifndef INCLUDED_flixel_math_FlxBasePoint
#include <flixel/math/FlxBasePoint.h>
#endif
#ifndef INCLUDED_flixel_system_frontEnds_SignalFrontEnd
#include <flixel/system/frontEnds/SignalFrontEnd.h>
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
#ifndef INCLUDED_flixel_util_IFlxSignal
#include <flixel/util/IFlxSignal.h>
#endif
#ifndef INCLUDED_flixel_util__FlxSignal_FlxBaseSignal
#include <flixel/util/_FlxSignal/FlxBaseSignal.h>
#endif
#ifndef INCLUDED_flixel_util__FlxSignal_FlxSignal0
#include <flixel/util/_FlxSignal/FlxSignal0.h>
#endif
#ifndef INCLUDED_haxe_Exception
#include <haxe/Exception.h>
#endif
#ifndef INCLUDED_haxe_ds_ArraySort
#include <haxe/ds/ArraySort.h>
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
#ifndef INCLUDED_openfl_errors_Error
#include <openfl/errors/Error.h>
#endif
#ifndef INCLUDED_openfl_events_EventDispatcher
#include <openfl/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_events_IEventDispatcher
#include <openfl/events/IEventDispatcher.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_7737cad62ef16250_44_new,"flixel.input.mouse.FlxMouseEventManager","new",0xae332b17,"flixel.input.mouse.FlxMouseEventManager.new","flixel/input/mouse/FlxMouseEventManager.hx",44,0x750c3856)
HX_LOCAL_STACK_FRAME(_hx_pos_7737cad62ef16250_79_destroy,"flixel.input.mouse.FlxMouseEventManager","destroy",0x1c6eaf31,"flixel.input.mouse.FlxMouseEventManager.destroy","flixel/input/mouse/FlxMouseEventManager.hx",79,0x750c3856)
HX_LOCAL_STACK_FRAME(_hx_pos_7737cad62ef16250_87_update,"flixel.input.mouse.FlxMouseEventManager","update",0x84b077b2,"flixel.input.mouse.FlxMouseEventManager.update","flixel/input/mouse/FlxMouseEventManager.hx",87,0x750c3856)
HX_LOCAL_STACK_FRAME(_hx_pos_7737cad62ef16250_266_addEvent,"flixel.input.mouse.FlxMouseEventManager","addEvent",0xe2ab5c22,"flixel.input.mouse.FlxMouseEventManager.addEvent","flixel/input/mouse/FlxMouseEventManager.hx",266,0x750c3856)
HX_LOCAL_STACK_FRAME(_hx_pos_7737cad62ef16250_303_add,"flixel.input.mouse.FlxMouseEventManager","add",0xae294cd8,"flixel.input.mouse.FlxMouseEventManager.add","flixel/input/mouse/FlxMouseEventManager.hx",303,0x750c3856)
HX_LOCAL_STACK_FRAME(_hx_pos_7737cad62ef16250_314_remove,"flixel.input.mouse.FlxMouseEventManager","remove",0x02338ded,"flixel.input.mouse.FlxMouseEventManager.remove","flixel/input/mouse/FlxMouseEventManager.hx",314,0x750c3856)
HX_LOCAL_STACK_FRAME(_hx_pos_7737cad62ef16250_330_removeAll,"flixel.input.mouse.FlxMouseEventManager","removeAll",0xef9bd534,"flixel.input.mouse.FlxMouseEventManager.removeAll","flixel/input/mouse/FlxMouseEventManager.hx",330,0x750c3856)
HX_LOCAL_STACK_FRAME(_hx_pos_7737cad62ef16250_353_reorder,"flixel.input.mouse.FlxMouseEventManager","reorder",0x13a3c632,"flixel.input.mouse.FlxMouseEventManager.reorder","flixel/input/mouse/FlxMouseEventManager.hx",353,0x750c3856)
HX_LOCAL_STACK_FRAME(_hx_pos_7737cad62ef16250_371_setMouseDownCallback,"flixel.input.mouse.FlxMouseEventManager","setMouseDownCallback",0xe8b31b73,"flixel.input.mouse.FlxMouseEventManager.setMouseDownCallback","flixel/input/mouse/FlxMouseEventManager.hx",371,0x750c3856)
HX_LOCAL_STACK_FRAME(_hx_pos_7737cad62ef16250_387_setMouseUpCallback,"flixel.input.mouse.FlxMouseEventManager","setMouseUpCallback",0x3b6a476c,"flixel.input.mouse.FlxMouseEventManager.setMouseUpCallback","flixel/input/mouse/FlxMouseEventManager.hx",387,0x750c3856)
HX_LOCAL_STACK_FRAME(_hx_pos_7737cad62ef16250_404_setMouseClickCallback,"flixel.input.mouse.FlxMouseEventManager","setMouseClickCallback",0x94b58581,"flixel.input.mouse.FlxMouseEventManager.setMouseClickCallback","flixel/input/mouse/FlxMouseEventManager.hx",404,0x750c3856)
HX_LOCAL_STACK_FRAME(_hx_pos_7737cad62ef16250_421_setMouseDoubleClickCallback,"flixel.input.mouse.FlxMouseEventManager","setMouseDoubleClickCallback",0x553b8ab0,"flixel.input.mouse.FlxMouseEventManager.setMouseDoubleClickCallback","flixel/input/mouse/FlxMouseEventManager.hx",421,0x750c3856)
HX_LOCAL_STACK_FRAME(_hx_pos_7737cad62ef16250_437_setMouseOverCallback,"flixel.input.mouse.FlxMouseEventManager","setMouseOverCallback",0x088af665,"flixel.input.mouse.FlxMouseEventManager.setMouseOverCallback","flixel/input/mouse/FlxMouseEventManager.hx",437,0x750c3856)
HX_LOCAL_STACK_FRAME(_hx_pos_7737cad62ef16250_453_setMouseOutCallback,"flixel.input.mouse.FlxMouseEventManager","setMouseOutCallback",0x235b22c7,"flixel.input.mouse.FlxMouseEventManager.setMouseOutCallback","flixel/input/mouse/FlxMouseEventManager.hx",453,0x750c3856)
HX_LOCAL_STACK_FRAME(_hx_pos_7737cad62ef16250_470_setMouseMoveCallback,"flixel.input.mouse.FlxMouseEventManager","setMouseMoveCallback",0x0da6cd22,"flixel.input.mouse.FlxMouseEventManager.setMouseMoveCallback","flixel/input/mouse/FlxMouseEventManager.hx",470,0x750c3856)
HX_LOCAL_STACK_FRAME(_hx_pos_7737cad62ef16250_487_setMouseWheelCallback,"flixel.input.mouse.FlxMouseEventManager","setMouseWheelCallback",0x50ce48d4,"flixel.input.mouse.FlxMouseEventManager.setMouseWheelCallback","flixel/input/mouse/FlxMouseEventManager.hx",487,0x750c3856)
HX_LOCAL_STACK_FRAME(_hx_pos_7737cad62ef16250_502_setObjectMouseEnabled,"flixel.input.mouse.FlxMouseEventManager","setObjectMouseEnabled",0xe24566f4,"flixel.input.mouse.FlxMouseEventManager.setObjectMouseEnabled","flixel/input/mouse/FlxMouseEventManager.hx",502,0x750c3856)
HX_LOCAL_STACK_FRAME(_hx_pos_7737cad62ef16250_515_isObjectMouseEnabled,"flixel.input.mouse.FlxMouseEventManager","isObjectMouseEnabled",0x6e5fac2e,"flixel.input.mouse.FlxMouseEventManager.isObjectMouseEnabled","flixel/input/mouse/FlxMouseEventManager.hx",515,0x750c3856)
HX_LOCAL_STACK_FRAME(_hx_pos_7737cad62ef16250_534_setObjectMouseChildren,"flixel.input.mouse.FlxMouseEventManager","setObjectMouseChildren",0x9e2bdb6c,"flixel.input.mouse.FlxMouseEventManager.setObjectMouseChildren","flixel/input/mouse/FlxMouseEventManager.hx",534,0x750c3856)
HX_LOCAL_STACK_FRAME(_hx_pos_7737cad62ef16250_562_isObjectMouseChildren,"flixel.input.mouse.FlxMouseEventManager","isObjectMouseChildren",0xa90e28f2,"flixel.input.mouse.FlxMouseEventManager.isObjectMouseChildren","flixel/input/mouse/FlxMouseEventManager.hx",562,0x750c3856)
HX_LOCAL_STACK_FRAME(_hx_pos_7737cad62ef16250_579_setObjectMouseButtons,"flixel.input.mouse.FlxMouseEventManager","setObjectMouseButtons",0x2e89b4b4,"flixel.input.mouse.FlxMouseEventManager.setObjectMouseButtons","flixel/input/mouse/FlxMouseEventManager.hx",579,0x750c3856)
HX_LOCAL_STACK_FRAME(_hx_pos_7737cad62ef16250_591_traverseFlxGroup,"flixel.input.mouse.FlxMouseEventManager","traverseFlxGroup",0xb5503c28,"flixel.input.mouse.FlxMouseEventManager.traverseFlxGroup","flixel/input/mouse/FlxMouseEventManager.hx",591,0x750c3856)
HX_LOCAL_STACK_FRAME(_hx_pos_7737cad62ef16250_611_get,"flixel.input.mouse.FlxMouseEventManager","get",0xae2ddb4d,"flixel.input.mouse.FlxMouseEventManager.get","flixel/input/mouse/FlxMouseEventManager.hx",611,0x750c3856)
HX_LOCAL_STACK_FRAME(_hx_pos_7737cad62ef16250_629_sortByMouseChildren,"flixel.input.mouse.FlxMouseEventManager","sortByMouseChildren",0x74c04b26,"flixel.input.mouse.FlxMouseEventManager.sortByMouseChildren","flixel/input/mouse/FlxMouseEventManager.hx",629,0x750c3856)
HX_LOCAL_STACK_FRAME(_hx_pos_7737cad62ef16250_644_clearRegistry,"flixel.input.mouse.FlxMouseEventManager","clearRegistry",0xaf4f39e1,"flixel.input.mouse.FlxMouseEventManager.clearRegistry","flixel/input/mouse/FlxMouseEventManager.hx",644,0x750c3856)
HX_LOCAL_STACK_FRAME(_hx_pos_7737cad62ef16250_652_checkOverlap,"flixel.input.mouse.FlxMouseEventManager","checkOverlap",0x58381208,"flixel.input.mouse.FlxMouseEventManager.checkOverlap","flixel/input/mouse/FlxMouseEventManager.hx",652,0x750c3856)
HX_LOCAL_STACK_FRAME(_hx_pos_7737cad62ef16250_690_checkOverlapWithPoint,"flixel.input.mouse.FlxMouseEventManager","checkOverlapWithPoint",0x0bd96542,"flixel.input.mouse.FlxMouseEventManager.checkOverlapWithPoint","flixel/input/mouse/FlxMouseEventManager.hx",690,0x750c3856)
namespace flixel{
namespace input{
namespace mouse{

void FlxMouseEventManager_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_7737cad62ef16250_44_new)
HXLINE(  60)		this->maxDoubleClickDelay = 500;
HXLINE(  54)		 ::flixel::math::FlxBasePoint point = ::flixel::math::FlxBasePoint_obj::pool->get()->set(( (Float)(0) ),( (Float)(0) ));
HXDLIN(  54)		point->_inPool = false;
HXDLIN(  54)		this->_point = point;
HXLINE(  51)		this->mouseClickedTime = -1;
HXLINE(  49)		this->_clickList = ::Array_obj< ::Dynamic>::__new(0);
HXLINE(  48)		this->_downList = ::Array_obj< ::Dynamic>::__new(0);
HXLINE(  47)		this->_overList = ::Array_obj< ::Dynamic>::__new(0);
HXLINE(  46)		this->_list = ::Array_obj< ::Dynamic>::__new(0);
HXLINE(  64)		super::__construct();
HXLINE(  66)		if (::hx::IsNotNull( this->_list )) {
HXLINE(  68)			this->clearRegistry();
            		}
HXLINE(  70)		this->_list = ::Array_obj< ::Dynamic>::__new();
HXLINE(  71)		this->_overList = ::Array_obj< ::Dynamic>::__new();
HXLINE(  72)		this->_downList = ::Array_obj< ::Dynamic>::__new();
HXLINE(  73)		this->_clickList = ::Array_obj< ::Dynamic>::__new();
HXLINE(  75)		::flixel::FlxG_obj::signals->preStateSwitch->add(this->removeAll_dyn());
            	}

Dynamic FlxMouseEventManager_obj::__CreateEmpty() { return new FlxMouseEventManager_obj; }

void *FlxMouseEventManager_obj::_hx_vtable = 0;

Dynamic FlxMouseEventManager_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< FlxMouseEventManager_obj > _hx_result = new FlxMouseEventManager_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool FlxMouseEventManager_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x3f3827fd) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x3f3827fd;
	} else {
		return inClassId==(int)0x7ccf8994;
	}
}

void FlxMouseEventManager_obj::destroy(){
            	HX_STACKFRAME(&_hx_pos_7737cad62ef16250_79_destroy)
HXLINE(  80)		this->clearRegistry();
HXLINE(  81)		this->_point = ( ( ::flixel::math::FlxBasePoint)(::flixel::util::FlxDestroyUtil_obj::put(this->_point)) );
HXLINE(  82)		::flixel::FlxG_obj::signals->preStateSwitch->remove(this->removeAll_dyn());
HXLINE(  83)		this->super::destroy();
            	}


void FlxMouseEventManager_obj::update(Float elapsed){
            	HX_STACKFRAME(&_hx_pos_7737cad62ef16250_87_update)
HXLINE(  88)		this->super::update(elapsed);
HXLINE(  90)		::Array< ::Dynamic> currentOverObjects = ::Array_obj< ::Dynamic>::__new();
HXLINE(  92)		{
HXLINE(  92)			int _g = 0;
HXDLIN(  92)			::Array< ::Dynamic> _g1 = this->_list;
HXDLIN(  92)			while((_g < _g1->length)){
HXLINE(  92)				 ::flixel::input::mouse::FlxMouseEvent event = _g1->__get(_g).StaticCast<  ::flixel::input::mouse::FlxMouseEvent >();
HXDLIN(  92)				_g = (_g + 1);
HXLINE(  94)				bool _hx_tmp;
HXDLIN(  94)				bool _hx_tmp1;
HXDLIN(  94)				bool _hx_tmp2;
HXDLIN(  94)				if (event->object->alive) {
HXLINE(  94)					_hx_tmp2 = !(event->object->exists);
            				}
            				else {
HXLINE(  94)					_hx_tmp2 = true;
            				}
HXDLIN(  94)				if (!(_hx_tmp2)) {
HXLINE(  94)					_hx_tmp1 = !(event->object->visible);
            				}
            				else {
HXLINE(  94)					_hx_tmp1 = true;
            				}
HXDLIN(  94)				if (!(_hx_tmp1)) {
HXLINE(  94)					_hx_tmp = !(event->mouseEnabled);
            				}
            				else {
HXLINE(  94)					_hx_tmp = true;
            				}
HXDLIN(  94)				if (_hx_tmp) {
HXLINE(  96)					continue;
            				}
HXLINE(  99)				if (this->checkOverlap(event)) {
HXLINE( 101)					currentOverObjects->push(event);
HXLINE( 103)					if (!(event->mouseChildren)) {
HXLINE( 105)						goto _hx_goto_2;
            					}
            				}
            			}
            			_hx_goto_2:;
            		}
HXLINE( 111)		{
HXLINE( 111)			int _g2 = 0;
HXDLIN( 111)			::Array< ::Dynamic> _g3 = this->_overList;
HXDLIN( 111)			while((_g2 < _g3->length)){
HXLINE( 111)				 ::flixel::input::mouse::FlxMouseEvent over = _g3->__get(_g2).StaticCast<  ::flixel::input::mouse::FlxMouseEvent >();
HXDLIN( 111)				_g2 = (_g2 + 1);
HXLINE( 113)				if (::hx::IsNotNull( over->onMouseOut )) {
HXLINE( 117)					bool _hx_tmp;
HXDLIN( 117)					bool _hx_tmp1;
HXDLIN( 117)					if (over->object->exists) {
HXLINE( 117)						_hx_tmp1 = !(over->object->visible);
            					}
            					else {
HXLINE( 117)						_hx_tmp1 = true;
            					}
HXDLIN( 117)					if (!(_hx_tmp1)) {
HXLINE( 117)						_hx_tmp = ::hx::IsNull( this->get(over->object,currentOverObjects) );
            					}
            					else {
HXLINE( 117)						_hx_tmp = true;
            					}
HXDLIN( 117)					if (_hx_tmp) {
HXLINE( 119)						over->onMouseOut(over->object);
            					}
            				}
            			}
            		}
HXLINE( 125)		{
HXLINE( 125)			int _g4 = 0;
HXDLIN( 125)			while((_g4 < currentOverObjects->length)){
HXLINE( 125)				 ::flixel::input::mouse::FlxMouseEvent current = currentOverObjects->__get(_g4).StaticCast<  ::flixel::input::mouse::FlxMouseEvent >();
HXDLIN( 125)				_g4 = (_g4 + 1);
HXLINE( 127)				if (::hx::IsNotNull( current->onMouseOver )) {
HXLINE( 129)					bool _hx_tmp;
HXDLIN( 129)					bool _hx_tmp1;
HXDLIN( 129)					if (current->object->exists) {
HXLINE( 129)						_hx_tmp1 = current->object->visible;
            					}
            					else {
HXLINE( 129)						_hx_tmp1 = false;
            					}
HXDLIN( 129)					if (_hx_tmp1) {
HXLINE( 129)						_hx_tmp = ::hx::IsNull( this->get(current->object,this->_overList) );
            					}
            					else {
HXLINE( 129)						_hx_tmp = false;
            					}
HXDLIN( 129)					if (_hx_tmp) {
HXLINE( 131)						current->onMouseOver(current->object);
            					}
            				}
            			}
            		}
HXLINE( 139)		if (!(::flixel::FlxG_obj::mouse->enabled)) {
HXLINE( 140)			return;
            		}
HXLINE( 143)		 ::flixel::input::mouse::FlxMouse _this = ::flixel::FlxG_obj::mouse;
HXDLIN( 143)		bool _hx_tmp;
HXDLIN( 143)		if ((_this->_prevX == _this->x)) {
HXLINE( 143)			_hx_tmp = (_this->_prevY != _this->y);
            		}
            		else {
HXLINE( 143)			_hx_tmp = true;
            		}
HXDLIN( 143)		if (_hx_tmp) {
HXLINE( 145)			int _g = 0;
HXDLIN( 145)			while((_g < currentOverObjects->length)){
HXLINE( 145)				 ::flixel::input::mouse::FlxMouseEvent current = currentOverObjects->__get(_g).StaticCast<  ::flixel::input::mouse::FlxMouseEvent >();
HXDLIN( 145)				_g = (_g + 1);
HXLINE( 147)				bool _hx_tmp;
HXDLIN( 147)				bool _hx_tmp1;
HXDLIN( 147)				if (::hx::IsNotNull( current->onMouseMove )) {
HXLINE( 147)					_hx_tmp1 = current->object->exists;
            				}
            				else {
HXLINE( 147)					_hx_tmp1 = false;
            				}
HXDLIN( 147)				if (_hx_tmp1) {
HXLINE( 147)					_hx_tmp = current->object->visible;
            				}
            				else {
HXLINE( 147)					_hx_tmp = false;
            				}
HXDLIN( 147)				if (_hx_tmp) {
HXLINE( 149)					current->onMouseMove(current->object);
            				}
            			}
            		}
HXLINE( 155)		{
HXLINE( 155)			int _g5 = 0;
HXDLIN( 155)			while((_g5 < currentOverObjects->length)){
HXLINE( 155)				 ::flixel::input::mouse::FlxMouseEvent current = currentOverObjects->__get(_g5).StaticCast<  ::flixel::input::mouse::FlxMouseEvent >();
HXDLIN( 155)				_g5 = (_g5 + 1);
HXLINE( 157)				bool _hx_tmp;
HXDLIN( 157)				bool _hx_tmp1;
HXDLIN( 157)				if (::hx::IsNotNull( current->onMouseDown )) {
HXLINE( 157)					_hx_tmp1 = current->object->exists;
            				}
            				else {
HXLINE( 157)					_hx_tmp1 = false;
            				}
HXDLIN( 157)				if (_hx_tmp1) {
HXLINE( 157)					_hx_tmp = current->object->visible;
            				}
            				else {
HXLINE( 157)					_hx_tmp = false;
            				}
HXDLIN( 157)				if (_hx_tmp) {
HXLINE( 159)					int _g = 0;
HXDLIN( 159)					::Array< int > _g1 = current->mouseButtons;
HXDLIN( 159)					while((_g < _g1->length)){
HXLINE( 159)						int buttonID = _g1->__get(_g);
HXDLIN( 159)						_g = (_g + 1);
HXLINE( 161)						if ((::flixel::input::mouse::FlxMouseButton_obj::getByID(buttonID)->current == 2)) {
HXLINE( 163)							current->onMouseDown(current->object);
            						}
            					}
            				}
            			}
            		}
HXLINE( 170)		if ((::flixel::FlxG_obj::mouse->_leftButton->current == 2)) {
HXLINE( 172)			int _g = 0;
HXDLIN( 172)			while((_g < currentOverObjects->length)){
HXLINE( 172)				 ::flixel::input::mouse::FlxMouseEvent current = currentOverObjects->__get(_g).StaticCast<  ::flixel::input::mouse::FlxMouseEvent >();
HXDLIN( 172)				_g = (_g + 1);
HXLINE( 174)				bool _hx_tmp;
HXDLIN( 174)				bool _hx_tmp1;
HXDLIN( 174)				bool _hx_tmp2;
HXDLIN( 174)				if (::hx::IsNull( current->onMouseClick )) {
HXLINE( 174)					_hx_tmp2 = ::hx::IsNotNull( current->onMouseDoubleClick );
            				}
            				else {
HXLINE( 174)					_hx_tmp2 = true;
            				}
HXDLIN( 174)				if (_hx_tmp2) {
HXLINE( 174)					_hx_tmp1 = current->object->exists;
            				}
            				else {
HXLINE( 174)					_hx_tmp1 = false;
            				}
HXDLIN( 174)				if (_hx_tmp1) {
HXLINE( 174)					_hx_tmp = current->object->visible;
            				}
            				else {
HXLINE( 174)					_hx_tmp = false;
            				}
HXDLIN( 174)				if (_hx_tmp) {
HXLINE( 178)					this->_downList->push(current);
            				}
            			}
            		}
HXLINE( 184)		{
HXLINE( 184)			int _g6 = 0;
HXDLIN( 184)			while((_g6 < currentOverObjects->length)){
HXLINE( 184)				 ::flixel::input::mouse::FlxMouseEvent current = currentOverObjects->__get(_g6).StaticCast<  ::flixel::input::mouse::FlxMouseEvent >();
HXDLIN( 184)				_g6 = (_g6 + 1);
HXLINE( 186)				bool _hx_tmp;
HXDLIN( 186)				bool _hx_tmp1;
HXDLIN( 186)				if (::hx::IsNotNull( current->onMouseUp )) {
HXLINE( 186)					_hx_tmp1 = current->object->exists;
            				}
            				else {
HXLINE( 186)					_hx_tmp1 = false;
            				}
HXDLIN( 186)				if (_hx_tmp1) {
HXLINE( 186)					_hx_tmp = current->object->visible;
            				}
            				else {
HXLINE( 186)					_hx_tmp = false;
            				}
HXDLIN( 186)				if (_hx_tmp) {
HXLINE( 188)					int _g = 0;
HXDLIN( 188)					::Array< int > _g1 = current->mouseButtons;
HXDLIN( 188)					while((_g < _g1->length)){
HXLINE( 188)						int buttonID = _g1->__get(_g);
HXDLIN( 188)						_g = (_g + 1);
HXLINE( 190)						if ((::flixel::input::mouse::FlxMouseButton_obj::getByID(buttonID)->current == -1)) {
HXLINE( 192)							current->onMouseUp(current->object);
            						}
            					}
            				}
            			}
            		}
HXLINE( 200)		bool _hx_tmp1;
HXDLIN( 200)		if ((this->_clickList->length > 0)) {
HXLINE( 200)			_hx_tmp1 = ((::flixel::FlxG_obj::game->ticks - this->mouseClickedTime) > this->maxDoubleClickDelay);
            		}
            		else {
HXLINE( 200)			_hx_tmp1 = false;
            		}
HXDLIN( 200)		if (_hx_tmp1) {
HXLINE( 202)			this->_clickList = ::Array_obj< ::Dynamic>::__new(0);
            		}
HXLINE( 205)		if ((::flixel::FlxG_obj::mouse->_leftButton->current == -1)) {
HXLINE( 207)			this->mouseClickedTime = ::flixel::FlxG_obj::game->ticks;
HXLINE( 209)			::Array< ::Dynamic> previousClickedObjects = this->_clickList;
HXLINE( 211)			if ((this->_clickList->length > 0)) {
HXLINE( 213)				this->_clickList = ::Array_obj< ::Dynamic>::__new(0);
            			}
HXLINE( 216)			{
HXLINE( 216)				int _g = 0;
HXDLIN( 216)				::Array< ::Dynamic> _g1 = this->_downList;
HXDLIN( 216)				while((_g < _g1->length)){
HXLINE( 216)					 ::flixel::input::mouse::FlxMouseEvent down = _g1->__get(_g).StaticCast<  ::flixel::input::mouse::FlxMouseEvent >();
HXDLIN( 216)					_g = (_g + 1);
HXLINE( 218)					bool _hx_tmp;
HXDLIN( 218)					bool _hx_tmp1;
HXDLIN( 218)					bool _hx_tmp2;
HXDLIN( 218)					if (::hx::IsNotNull( down->object )) {
HXLINE( 218)						_hx_tmp2 = down->object->exists;
            					}
            					else {
HXLINE( 218)						_hx_tmp2 = false;
            					}
HXDLIN( 218)					if (_hx_tmp2) {
HXLINE( 218)						_hx_tmp1 = down->object->visible;
            					}
            					else {
HXLINE( 218)						_hx_tmp1 = false;
            					}
HXDLIN( 218)					if (_hx_tmp1) {
HXLINE( 218)						_hx_tmp = ::hx::IsNotNull( this->get(down->object,currentOverObjects) );
            					}
            					else {
HXLINE( 218)						_hx_tmp = false;
            					}
HXDLIN( 218)					if (_hx_tmp) {
HXLINE( 223)						if (::hx::IsNotNull( down->onMouseClick )) {
HXLINE( 225)							down->onMouseClick(down->object);
            						}
HXLINE( 228)						if (::hx::IsNotNull( down->onMouseDoubleClick )) {
HXLINE( 230)							if (::hx::IsNotNull( this->get(down->object,previousClickedObjects) )) {
HXLINE( 232)								down->onMouseDoubleClick(down->object);
            							}
            							else {
HXLINE( 236)								this->_clickList->push(down);
            							}
            						}
            					}
            				}
            			}
            		}
HXLINE( 243)		bool _hx_tmp2;
HXDLIN( 243)		if ((this->_downList->length > 0)) {
HXLINE( 243)			 ::flixel::input::mouse::FlxMouseButton _this = ::flixel::FlxG_obj::mouse->_leftButton;
HXDLIN( 243)			bool _hx_tmp;
HXDLIN( 243)			if ((_this->current != 1)) {
HXLINE( 243)				_hx_tmp = (_this->current == 2);
            			}
            			else {
HXLINE( 243)				_hx_tmp = true;
            			}
HXDLIN( 243)			_hx_tmp2 = !(_hx_tmp);
            		}
            		else {
HXLINE( 243)			_hx_tmp2 = false;
            		}
HXDLIN( 243)		if (_hx_tmp2) {
HXLINE( 246)			this->_downList = ::Array_obj< ::Dynamic>::__new(0);
            		}
HXLINE( 250)		if ((::flixel::FlxG_obj::mouse->wheel != 0)) {
HXLINE( 252)			int _g = 0;
HXDLIN( 252)			while((_g < currentOverObjects->length)){
HXLINE( 252)				 ::flixel::input::mouse::FlxMouseEvent current = currentOverObjects->__get(_g).StaticCast<  ::flixel::input::mouse::FlxMouseEvent >();
HXDLIN( 252)				_g = (_g + 1);
HXLINE( 254)				bool _hx_tmp;
HXDLIN( 254)				bool _hx_tmp1;
HXDLIN( 254)				if (::hx::IsNotNull( current->onMouseWheel )) {
HXLINE( 254)					_hx_tmp1 = current->object->exists;
            				}
            				else {
HXLINE( 254)					_hx_tmp1 = false;
            				}
HXDLIN( 254)				if (_hx_tmp1) {
HXLINE( 254)					_hx_tmp = current->object->visible;
            				}
            				else {
HXLINE( 254)					_hx_tmp = false;
            				}
HXDLIN( 254)				if (_hx_tmp) {
HXLINE( 256)					current->onMouseWheel(current->object);
            				}
            			}
            		}
HXLINE( 262)		this->_overList = currentOverObjects;
            	}


 ::flixel::input::mouse::FlxMouseEvent FlxMouseEventManager_obj::addEvent( ::flixel::input::mouse::FlxMouseEvent event){
            	HX_STACKFRAME(&_hx_pos_7737cad62ef16250_266_addEvent)
HXLINE( 267)		if (!(event->mouseChildren)) {
HXLINE( 269)			this->_list->unshift(event);
            		}
            		else {
HXLINE( 274)			int index = 0;
HXLINE( 276)			while(true){
HXLINE( 276)				bool _hx_tmp;
HXDLIN( 276)				if ((index < this->_list->length)) {
HXLINE( 276)					_hx_tmp = !(this->_list->__get(index).StaticCast<  ::flixel::input::mouse::FlxMouseEvent >()->mouseChildren);
            				}
            				else {
HXLINE( 276)					_hx_tmp = false;
            				}
HXDLIN( 276)				if (!(_hx_tmp)) {
HXLINE( 276)					goto _hx_goto_14;
            				}
HXLINE( 277)				index = (index + 1);
            			}
            			_hx_goto_14:;
HXLINE( 279)			this->_list->insert(index,event);
            		}
HXLINE( 282)		return event;
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxMouseEventManager_obj,addEvent,return )

 ::Dynamic FlxMouseEventManager_obj::add( ::Dynamic object, ::Dynamic onMouseDown, ::Dynamic onMouseUp, ::Dynamic onMouseOver, ::Dynamic onMouseOut,::hx::Null< bool >  __o_mouseChildren,::hx::Null< bool >  __o_mouseEnabled,::hx::Null< bool >  __o_pixelPerfect,::Array< int > mouseButtons){
            		bool mouseChildren = __o_mouseChildren.Default(false);
            		bool mouseEnabled = __o_mouseEnabled.Default(true);
            		bool pixelPerfect = __o_pixelPerfect.Default(true);
            	HX_GC_STACKFRAME(&_hx_pos_7737cad62ef16250_303_add)
HXLINE( 304)		 ::flixel::input::mouse::FlxMouseEvent event =  ::flixel::input::mouse::FlxMouseEvent_obj::__alloc( HX_CTX ,object,onMouseDown,onMouseUp,onMouseOver,onMouseOut,mouseChildren,mouseEnabled,pixelPerfect,mouseButtons);
HXLINE( 305)		this->addEvent(event);
HXLINE( 307)		return object;
            	}


HX_DEFINE_DYNAMIC_FUNC9(FlxMouseEventManager_obj,add,return )

 ::Dynamic FlxMouseEventManager_obj::remove( ::Dynamic object){
            	HX_STACKFRAME(&_hx_pos_7737cad62ef16250_314_remove)
HXLINE( 315)		{
HXLINE( 315)			int _g = 0;
HXDLIN( 315)			::Array< ::Dynamic> _g1 = this->_list;
HXDLIN( 315)			while((_g < _g1->length)){
HXLINE( 315)				 ::flixel::input::mouse::FlxMouseEvent event = _g1->__get(_g).StaticCast<  ::flixel::input::mouse::FlxMouseEvent >();
HXDLIN( 315)				_g = (_g + 1);
HXLINE( 317)				if (::hx::IsInstanceEq( event->object,object )) {
HXLINE( 319)					event->destroy();
HXLINE( 320)					this->_list->remove(event);
            				}
            			}
            		}
HXLINE( 323)		return object;
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxMouseEventManager_obj,remove,return )

void FlxMouseEventManager_obj::removeAll(){
            	HX_STACKFRAME(&_hx_pos_7737cad62ef16250_330_removeAll)
HXLINE( 331)		if (::hx::IsNotNull( this->_list )) {
HXLINE( 333)			int _g = 0;
HXDLIN( 333)			::Array< ::Dynamic> _g1 = this->_list;
HXDLIN( 333)			while((_g < _g1->length)){
HXLINE( 333)				 ::flixel::input::mouse::FlxMouseEvent event = _g1->__get(_g).StaticCast<  ::flixel::input::mouse::FlxMouseEvent >();
HXDLIN( 333)				_g = (_g + 1);
HXLINE( 335)				event->destroy();
            			}
            		}
HXLINE( 339)		this->_list->removeRange(0,this->_list->length);
HXLINE( 340)		this->_overList = ::Array_obj< ::Dynamic>::__new(0);
HXLINE( 341)		this->_downList = ::Array_obj< ::Dynamic>::__new(0);
HXLINE( 342)		this->_clickList = ::Array_obj< ::Dynamic>::__new(0);
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxMouseEventManager_obj,removeAll,(void))

void FlxMouseEventManager_obj::reorder(){
            	HX_STACKFRAME(&_hx_pos_7737cad62ef16250_353_reorder)
HXLINE( 354)		::Array< ::Dynamic> orderedObjects = ::Array_obj< ::Dynamic>::__new();
HXLINE( 356)		this->traverseFlxGroup(::flixel::FlxG_obj::game->_state,orderedObjects);
HXLINE( 358)		orderedObjects->reverse();
HXLINE( 359)		this->_list = orderedObjects;
HXLINE( 361)		::haxe::ds::ArraySort_obj::sort(this->_list,this->sortByMouseChildren_dyn());
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxMouseEventManager_obj,reorder,(void))

void FlxMouseEventManager_obj::setMouseDownCallback( ::Dynamic object, ::Dynamic onMouseDown){
            	HX_STACKFRAME(&_hx_pos_7737cad62ef16250_371_setMouseDownCallback)
HXLINE( 372)		 ::flixel::input::mouse::FlxMouseEvent event = this->get(object,null());
HXLINE( 374)		if (::hx::IsNotNull( event )) {
HXLINE( 376)			event->onMouseDown = onMouseDown;
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC2(FlxMouseEventManager_obj,setMouseDownCallback,(void))

void FlxMouseEventManager_obj::setMouseUpCallback( ::Dynamic object, ::Dynamic onMouseUp){
            	HX_STACKFRAME(&_hx_pos_7737cad62ef16250_387_setMouseUpCallback)
HXLINE( 388)		 ::flixel::input::mouse::FlxMouseEvent event = this->get(object,null());
HXLINE( 390)		if (::hx::IsNotNull( event )) {
HXLINE( 392)			event->onMouseUp = onMouseUp;
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC2(FlxMouseEventManager_obj,setMouseUpCallback,(void))

void FlxMouseEventManager_obj::setMouseClickCallback( ::Dynamic object, ::Dynamic onMouseClick){
            	HX_STACKFRAME(&_hx_pos_7737cad62ef16250_404_setMouseClickCallback)
HXLINE( 405)		 ::flixel::input::mouse::FlxMouseEvent event = this->get(object,null());
HXLINE( 407)		if (::hx::IsNotNull( event )) {
HXLINE( 409)			event->onMouseClick = onMouseClick;
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC2(FlxMouseEventManager_obj,setMouseClickCallback,(void))

void FlxMouseEventManager_obj::setMouseDoubleClickCallback( ::Dynamic object, ::Dynamic onMouseDoubleClick){
            	HX_STACKFRAME(&_hx_pos_7737cad62ef16250_421_setMouseDoubleClickCallback)
HXLINE( 422)		 ::flixel::input::mouse::FlxMouseEvent event = this->get(object,null());
HXLINE( 424)		if (::hx::IsNotNull( event )) {
HXLINE( 426)			event->onMouseDoubleClick = onMouseDoubleClick;
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC2(FlxMouseEventManager_obj,setMouseDoubleClickCallback,(void))

void FlxMouseEventManager_obj::setMouseOverCallback( ::Dynamic object, ::Dynamic onMouseOver){
            	HX_STACKFRAME(&_hx_pos_7737cad62ef16250_437_setMouseOverCallback)
HXLINE( 438)		 ::flixel::input::mouse::FlxMouseEvent event = this->get(object,null());
HXLINE( 440)		if (::hx::IsNotNull( event )) {
HXLINE( 442)			event->onMouseOver = onMouseOver;
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC2(FlxMouseEventManager_obj,setMouseOverCallback,(void))

void FlxMouseEventManager_obj::setMouseOutCallback( ::Dynamic object, ::Dynamic onMouseOut){
            	HX_STACKFRAME(&_hx_pos_7737cad62ef16250_453_setMouseOutCallback)
HXLINE( 454)		 ::flixel::input::mouse::FlxMouseEvent event = this->get(object,null());
HXLINE( 456)		if (::hx::IsNotNull( event )) {
HXLINE( 458)			event->onMouseOut = onMouseOut;
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC2(FlxMouseEventManager_obj,setMouseOutCallback,(void))

void FlxMouseEventManager_obj::setMouseMoveCallback( ::Dynamic object, ::Dynamic onMouseMove){
            	HX_STACKFRAME(&_hx_pos_7737cad62ef16250_470_setMouseMoveCallback)
HXLINE( 471)		 ::flixel::input::mouse::FlxMouseEvent event = this->get(object,null());
HXLINE( 473)		if (::hx::IsNotNull( event )) {
HXLINE( 475)			event->onMouseMove = onMouseMove;
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC2(FlxMouseEventManager_obj,setMouseMoveCallback,(void))

void FlxMouseEventManager_obj::setMouseWheelCallback( ::Dynamic object, ::Dynamic onMouseWheel){
            	HX_STACKFRAME(&_hx_pos_7737cad62ef16250_487_setMouseWheelCallback)
HXLINE( 488)		 ::flixel::input::mouse::FlxMouseEvent event = this->get(object,null());
HXLINE( 490)		if (::hx::IsNotNull( event )) {
HXLINE( 492)			event->onMouseWheel = onMouseWheel;
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC2(FlxMouseEventManager_obj,setMouseWheelCallback,(void))

void FlxMouseEventManager_obj::setObjectMouseEnabled( ::Dynamic object,bool MouseEnabled){
            	HX_STACKFRAME(&_hx_pos_7737cad62ef16250_502_setObjectMouseEnabled)
HXLINE( 503)		 ::flixel::input::mouse::FlxMouseEvent event = this->get(object,null());
HXLINE( 505)		if (::hx::IsNotNull( event )) {
HXLINE( 507)			event->mouseEnabled = MouseEnabled;
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC2(FlxMouseEventManager_obj,setObjectMouseEnabled,(void))

bool FlxMouseEventManager_obj::isObjectMouseEnabled( ::Dynamic object){
            	HX_STACKFRAME(&_hx_pos_7737cad62ef16250_515_isObjectMouseEnabled)
HXLINE( 516)		 ::flixel::input::mouse::FlxMouseEvent event = this->get(object,null());
HXLINE( 518)		if (::hx::IsNotNull( event )) {
HXLINE( 520)			return event->mouseEnabled;
            		}
            		else {
HXLINE( 524)			return false;
            		}
HXLINE( 518)		return false;
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxMouseEventManager_obj,isObjectMouseEnabled,return )

void FlxMouseEventManager_obj::setObjectMouseChildren( ::Dynamic object,bool mouseChildren){
            	HX_STACKFRAME(&_hx_pos_7737cad62ef16250_534_setObjectMouseChildren)
HXLINE( 535)		 ::flixel::input::mouse::FlxMouseEvent event = this->get(object,null());
HXLINE( 537)		if (::hx::IsNotNull( event )) {
HXLINE( 539)			event->mouseChildren = mouseChildren;
HXLINE( 540)			this->_list->remove(event);
HXLINE( 542)			if (!(mouseChildren)) {
HXLINE( 544)				this->_list->unshift(event);
            			}
            			else {
HXLINE( 548)				int index = 0;
HXLINE( 550)				while(true){
HXLINE( 550)					bool _hx_tmp;
HXDLIN( 550)					if ((index < this->_list->length)) {
HXLINE( 550)						_hx_tmp = !(this->_list->__get(index).StaticCast<  ::flixel::input::mouse::FlxMouseEvent >()->mouseChildren);
            					}
            					else {
HXLINE( 550)						_hx_tmp = false;
            					}
HXDLIN( 550)					if (!(_hx_tmp)) {
HXLINE( 550)						goto _hx_goto_32;
            					}
HXLINE( 551)					index = (index + 1);
            				}
            				_hx_goto_32:;
HXLINE( 553)				this->_list->insert(index,event);
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC2(FlxMouseEventManager_obj,setObjectMouseChildren,(void))

bool FlxMouseEventManager_obj::isObjectMouseChildren( ::Dynamic object){
            	HX_GC_STACKFRAME(&_hx_pos_7737cad62ef16250_562_isObjectMouseChildren)
HXLINE( 563)		 ::flixel::input::mouse::FlxMouseEvent event = this->get(object,null());
HXLINE( 565)		if (::hx::IsNotNull( event )) {
HXLINE( 567)			return event->mouseChildren;
            		}
            		else {
HXLINE( 571)			HX_STACK_DO_THROW( ::openfl::errors::Error_obj::__alloc( HX_CTX ,HX_("FlxMouseEventManager , isObjectMouseChildren() : object not found",2c,1c,56,e2),null()));
            		}
HXLINE( 565)		return false;
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxMouseEventManager_obj,isObjectMouseChildren,return )

void FlxMouseEventManager_obj::setObjectMouseButtons( ::Dynamic object,::Array< int > mouseButtons){
            	HX_STACKFRAME(&_hx_pos_7737cad62ef16250_579_setObjectMouseButtons)
HXLINE( 580)		 ::flixel::input::mouse::FlxMouseEvent event = this->get(object,null());
HXLINE( 582)		if (::hx::IsNotNull( event )) {
HXLINE( 584)			event->mouseButtons = mouseButtons;
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC2(FlxMouseEventManager_obj,setObjectMouseButtons,(void))

void FlxMouseEventManager_obj::traverseFlxGroup( ::flixel::group::FlxTypedGroup group,::Array< ::Dynamic> orderedObjects){
            	HX_STACKFRAME(&_hx_pos_7737cad62ef16250_591_traverseFlxGroup)
HXDLIN( 591)		int _g = 0;
HXDLIN( 591)		::cpp::VirtualArray _g1 = group->members;
HXDLIN( 591)		while((_g < _g1->get_length())){
HXDLIN( 591)			 ::Dynamic basic = _g1->__get(_g);
HXDLIN( 591)			_g = (_g + 1);
HXLINE( 593)			 ::flixel::group::FlxTypedGroup group = ::flixel::group::FlxTypedGroup_obj::resolveGroup(( ( ::flixel::FlxBasic)(basic) ));
HXLINE( 594)			if (::hx::IsNotNull( group )) {
HXLINE( 596)				this->traverseFlxGroup(group,orderedObjects);
            			}
HXLINE( 598)			if (::Std_obj::isOfType(basic,::hx::ClassOf< ::flixel::FlxObject >())) {
HXLINE( 600)				 ::flixel::input::mouse::FlxMouseEvent event = this->get(( ( ::flixel::FlxObject)(basic) ),null());
HXLINE( 602)				if (::hx::IsNotNull( event )) {
HXLINE( 604)					orderedObjects->push(event);
            				}
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC2(FlxMouseEventManager_obj,traverseFlxGroup,(void))

 ::flixel::input::mouse::FlxMouseEvent FlxMouseEventManager_obj::get( ::Dynamic object,::Array< ::Dynamic> list){
            	HX_STACKFRAME(&_hx_pos_7737cad62ef16250_611_get)
HXLINE( 612)		if (::hx::IsNull( list )) {
HXLINE( 614)			list = this->_list;
            		}
HXLINE( 617)		{
HXLINE( 617)			int _g = 0;
HXDLIN( 617)			while((_g < list->length)){
HXLINE( 617)				 ::flixel::input::mouse::FlxMouseEvent event = list->__get(_g).StaticCast<  ::flixel::input::mouse::FlxMouseEvent >();
HXDLIN( 617)				_g = (_g + 1);
HXLINE( 619)				if (::hx::IsInstanceEq( event->object,object )) {
HXLINE( 621)					return event;
            				}
            			}
            		}
HXLINE( 625)		return null();
            	}


HX_DEFINE_DYNAMIC_FUNC2(FlxMouseEventManager_obj,get,return )

int FlxMouseEventManager_obj::sortByMouseChildren( ::flixel::input::mouse::FlxMouseEvent event1, ::flixel::input::mouse::FlxMouseEvent event2){
            	HX_STACKFRAME(&_hx_pos_7737cad62ef16250_629_sortByMouseChildren)
HXLINE( 630)		if ((event1->mouseChildren == event2->mouseChildren)) {
HXLINE( 632)			return 0;
            		}
HXLINE( 635)		if (!(event1->mouseChildren)) {
HXLINE( 637)			return -1;
            		}
HXLINE( 640)		return 1;
            	}


HX_DEFINE_DYNAMIC_FUNC2(FlxMouseEventManager_obj,sortByMouseChildren,return )

void FlxMouseEventManager_obj::clearRegistry(){
            	HX_STACKFRAME(&_hx_pos_7737cad62ef16250_644_clearRegistry)
HXLINE( 645)		this->_overList = null();
HXLINE( 646)		this->_downList = null();
HXLINE( 647)		this->_clickList = null();
HXLINE( 648)		this->_list = ::flixel::util::FlxDestroyUtil_obj::destroyArray(this->_list);
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxMouseEventManager_obj,clearRegistry,(void))

bool FlxMouseEventManager_obj::checkOverlap( ::flixel::input::mouse::FlxMouseEvent event){
            	HX_STACKFRAME(&_hx_pos_7737cad62ef16250_652_checkOverlap)
HXLINE( 653)		{
HXLINE( 653)			int _g = 0;
HXDLIN( 653)			::Array< ::Dynamic> _g1 = event->object->get_cameras();
HXDLIN( 653)			while((_g < _g1->length)){
HXLINE( 653)				 ::flixel::FlxCamera camera = _g1->__get(_g).StaticCast<  ::flixel::FlxCamera >();
HXDLIN( 653)				_g = (_g + 1);
HXLINE( 656)				this->_point = ::flixel::FlxG_obj::mouse->getPositionInCameraView(camera,this->_point);
HXLINE( 657)				 ::flixel::math::FlxBasePoint point = this->_point;
HXDLIN( 657)				bool contained;
HXDLIN( 657)				bool contained1;
HXDLIN( 657)				bool contained2;
HXDLIN( 657)				if (((point->x + ( (Float)(0) )) > camera->viewMarginX)) {
HXLINE( 657)					contained2 = (point->x < (( (Float)(camera->width) ) - camera->viewMarginX));
            				}
            				else {
HXLINE( 657)					contained2 = false;
            				}
HXDLIN( 657)				if (contained2) {
HXLINE( 657)					contained1 = ((point->y + ( (Float)(0) )) > camera->viewMarginY);
            				}
            				else {
HXLINE( 657)					contained1 = false;
            				}
HXDLIN( 657)				if (contained1) {
HXLINE( 657)					contained = (point->y < (( (Float)(camera->height) ) - camera->viewMarginY));
            				}
            				else {
HXLINE( 657)					contained = false;
            				}
HXDLIN( 657)				if (point->_weak) {
HXLINE( 657)					point->put();
            				}
HXDLIN( 657)				if (contained) {
HXLINE( 659)					this->_point = ::flixel::FlxG_obj::mouse->getWorldPosition(camera,this->_point);
HXLINE( 661)					 ::flixel::math::FlxBasePoint point = this->_point;
HXDLIN( 661)					bool _hx_tmp;
HXDLIN( 661)					bool _hx_tmp1;
HXDLIN( 661)					if (event->pixelPerfect) {
HXLINE( 661)						_hx_tmp1 = ::hx::IsNotNull( event->sprite );
            					}
            					else {
HXLINE( 661)						_hx_tmp1 = false;
            					}
HXDLIN( 661)					if (_hx_tmp1) {
HXLINE( 661)						_hx_tmp = event->sprite->pixelsOverlapPoint(point,1,camera);
            					}
            					else {
HXLINE( 661)						_hx_tmp = event->object->overlapsPoint(point,true,camera);
            					}
HXDLIN( 661)					if (_hx_tmp) {
HXLINE( 663)						return true;
            					}
            				}
HXLINE( 669)				{
HXLINE( 669)					int _g2 = 0;
HXDLIN( 669)					::Array< ::Dynamic> _g3 = ::flixel::FlxG_obj::touches->list;
HXDLIN( 669)					while((_g2 < _g3->length)){
HXLINE( 669)						 ::flixel::input::touch::FlxTouch touch = _g3->__get(_g2).StaticCast<  ::flixel::input::touch::FlxTouch >();
HXDLIN( 669)						_g2 = (_g2 + 1);
HXLINE( 671)						this->_point = touch->getPositionInCameraView(camera,this->_point);
HXLINE( 672)						 ::flixel::math::FlxBasePoint point = this->_point;
HXDLIN( 672)						bool contained;
HXDLIN( 672)						bool contained1;
HXDLIN( 672)						bool contained2;
HXDLIN( 672)						if (((point->x + ( (Float)(0) )) > camera->viewMarginX)) {
HXLINE( 672)							contained2 = (point->x < (( (Float)(camera->width) ) - camera->viewMarginX));
            						}
            						else {
HXLINE( 672)							contained2 = false;
            						}
HXDLIN( 672)						if (contained2) {
HXLINE( 672)							contained1 = ((point->y + ( (Float)(0) )) > camera->viewMarginY);
            						}
            						else {
HXLINE( 672)							contained1 = false;
            						}
HXDLIN( 672)						if (contained1) {
HXLINE( 672)							contained = (point->y < (( (Float)(camera->height) ) - camera->viewMarginY));
            						}
            						else {
HXLINE( 672)							contained = false;
            						}
HXDLIN( 672)						if (point->_weak) {
HXLINE( 672)							point->put();
            						}
HXDLIN( 672)						if (contained) {
HXLINE( 674)							this->_point = touch->getWorldPosition(camera,this->_point);
HXLINE( 676)							 ::flixel::math::FlxBasePoint point = this->_point;
HXDLIN( 676)							bool _hx_tmp;
HXDLIN( 676)							bool _hx_tmp1;
HXDLIN( 676)							if (event->pixelPerfect) {
HXLINE( 676)								_hx_tmp1 = ::hx::IsNotNull( event->sprite );
            							}
            							else {
HXLINE( 676)								_hx_tmp1 = false;
            							}
HXDLIN( 676)							if (_hx_tmp1) {
HXLINE( 676)								_hx_tmp = event->sprite->pixelsOverlapPoint(point,1,camera);
            							}
            							else {
HXLINE( 676)								_hx_tmp = event->object->overlapsPoint(point,true,camera);
            							}
HXDLIN( 676)							if (_hx_tmp) {
HXLINE( 678)								return true;
            							}
            						}
            					}
            				}
            			}
            		}
HXLINE( 685)		return false;
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxMouseEventManager_obj,checkOverlap,return )

bool FlxMouseEventManager_obj::checkOverlapWithPoint( ::flixel::input::mouse::FlxMouseEvent event, ::flixel::math::FlxBasePoint point, ::flixel::FlxCamera camera){
            	HX_STACKFRAME(&_hx_pos_7737cad62ef16250_690_checkOverlapWithPoint)
HXDLIN( 690)		bool _hx_tmp;
HXDLIN( 690)		if (event->pixelPerfect) {
HXDLIN( 690)			_hx_tmp = ::hx::IsNotNull( event->sprite );
            		}
            		else {
HXDLIN( 690)			_hx_tmp = false;
            		}
HXDLIN( 690)		if (_hx_tmp) {
HXLINE( 692)			return event->sprite->pixelsOverlapPoint(point,1,camera);
            		}
            		else {
HXLINE( 696)			return event->object->overlapsPoint(point,true,camera);
            		}
HXLINE( 690)		return false;
            	}


HX_DEFINE_DYNAMIC_FUNC3(FlxMouseEventManager_obj,checkOverlapWithPoint,return )


::hx::ObjectPtr< FlxMouseEventManager_obj > FlxMouseEventManager_obj::__new() {
	::hx::ObjectPtr< FlxMouseEventManager_obj > __this = new FlxMouseEventManager_obj();
	__this->__construct();
	return __this;
}

::hx::ObjectPtr< FlxMouseEventManager_obj > FlxMouseEventManager_obj::__alloc(::hx::Ctx *_hx_ctx) {
	FlxMouseEventManager_obj *__this = (FlxMouseEventManager_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(FlxMouseEventManager_obj), true, "flixel.input.mouse.FlxMouseEventManager"));
	*(void **)__this = FlxMouseEventManager_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

FlxMouseEventManager_obj::FlxMouseEventManager_obj()
{
}

void FlxMouseEventManager_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(FlxMouseEventManager);
	HX_MARK_MEMBER_NAME(_list,"_list");
	HX_MARK_MEMBER_NAME(_overList,"_overList");
	HX_MARK_MEMBER_NAME(_downList,"_downList");
	HX_MARK_MEMBER_NAME(_clickList,"_clickList");
	HX_MARK_MEMBER_NAME(mouseClickedTime,"mouseClickedTime");
	HX_MARK_MEMBER_NAME(_point,"_point");
	HX_MARK_MEMBER_NAME(maxDoubleClickDelay,"maxDoubleClickDelay");
	 ::flixel::FlxBasic_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void FlxMouseEventManager_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_list,"_list");
	HX_VISIT_MEMBER_NAME(_overList,"_overList");
	HX_VISIT_MEMBER_NAME(_downList,"_downList");
	HX_VISIT_MEMBER_NAME(_clickList,"_clickList");
	HX_VISIT_MEMBER_NAME(mouseClickedTime,"mouseClickedTime");
	HX_VISIT_MEMBER_NAME(_point,"_point");
	HX_VISIT_MEMBER_NAME(maxDoubleClickDelay,"maxDoubleClickDelay");
	 ::flixel::FlxBasic_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val FlxMouseEventManager_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"add") ) { return ::hx::Val( add_dyn() ); }
		if (HX_FIELD_EQ(inName,"get") ) { return ::hx::Val( get_dyn() ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"_list") ) { return ::hx::Val( _list ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"_point") ) { return ::hx::Val( _point ); }
		if (HX_FIELD_EQ(inName,"update") ) { return ::hx::Val( update_dyn() ); }
		if (HX_FIELD_EQ(inName,"remove") ) { return ::hx::Val( remove_dyn() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"destroy") ) { return ::hx::Val( destroy_dyn() ); }
		if (HX_FIELD_EQ(inName,"reorder") ) { return ::hx::Val( reorder_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"addEvent") ) { return ::hx::Val( addEvent_dyn() ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"_overList") ) { return ::hx::Val( _overList ); }
		if (HX_FIELD_EQ(inName,"_downList") ) { return ::hx::Val( _downList ); }
		if (HX_FIELD_EQ(inName,"removeAll") ) { return ::hx::Val( removeAll_dyn() ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"_clickList") ) { return ::hx::Val( _clickList ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"checkOverlap") ) { return ::hx::Val( checkOverlap_dyn() ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"clearRegistry") ) { return ::hx::Val( clearRegistry_dyn() ); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"mouseClickedTime") ) { return ::hx::Val( mouseClickedTime ); }
		if (HX_FIELD_EQ(inName,"traverseFlxGroup") ) { return ::hx::Val( traverseFlxGroup_dyn() ); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"setMouseUpCallback") ) { return ::hx::Val( setMouseUpCallback_dyn() ); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"maxDoubleClickDelay") ) { return ::hx::Val( maxDoubleClickDelay ); }
		if (HX_FIELD_EQ(inName,"setMouseOutCallback") ) { return ::hx::Val( setMouseOutCallback_dyn() ); }
		if (HX_FIELD_EQ(inName,"sortByMouseChildren") ) { return ::hx::Val( sortByMouseChildren_dyn() ); }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"setMouseDownCallback") ) { return ::hx::Val( setMouseDownCallback_dyn() ); }
		if (HX_FIELD_EQ(inName,"setMouseOverCallback") ) { return ::hx::Val( setMouseOverCallback_dyn() ); }
		if (HX_FIELD_EQ(inName,"setMouseMoveCallback") ) { return ::hx::Val( setMouseMoveCallback_dyn() ); }
		if (HX_FIELD_EQ(inName,"isObjectMouseEnabled") ) { return ::hx::Val( isObjectMouseEnabled_dyn() ); }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"setMouseClickCallback") ) { return ::hx::Val( setMouseClickCallback_dyn() ); }
		if (HX_FIELD_EQ(inName,"setMouseWheelCallback") ) { return ::hx::Val( setMouseWheelCallback_dyn() ); }
		if (HX_FIELD_EQ(inName,"setObjectMouseEnabled") ) { return ::hx::Val( setObjectMouseEnabled_dyn() ); }
		if (HX_FIELD_EQ(inName,"isObjectMouseChildren") ) { return ::hx::Val( isObjectMouseChildren_dyn() ); }
		if (HX_FIELD_EQ(inName,"setObjectMouseButtons") ) { return ::hx::Val( setObjectMouseButtons_dyn() ); }
		if (HX_FIELD_EQ(inName,"checkOverlapWithPoint") ) { return ::hx::Val( checkOverlapWithPoint_dyn() ); }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"setObjectMouseChildren") ) { return ::hx::Val( setObjectMouseChildren_dyn() ); }
		break;
	case 27:
		if (HX_FIELD_EQ(inName,"setMouseDoubleClickCallback") ) { return ::hx::Val( setMouseDoubleClickCallback_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val FlxMouseEventManager_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"_list") ) { _list=inValue.Cast< ::Array< ::Dynamic> >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"_point") ) { _point=inValue.Cast<  ::flixel::math::FlxBasePoint >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"_overList") ) { _overList=inValue.Cast< ::Array< ::Dynamic> >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_downList") ) { _downList=inValue.Cast< ::Array< ::Dynamic> >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"_clickList") ) { _clickList=inValue.Cast< ::Array< ::Dynamic> >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"mouseClickedTime") ) { mouseClickedTime=inValue.Cast< int >(); return inValue; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"maxDoubleClickDelay") ) { maxDoubleClickDelay=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void FlxMouseEventManager_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("_list",3d,38,c4,fa));
	outFields->push(HX_("_overList",31,0b,a0,77));
	outFields->push(HX_("_downList",3f,11,31,c4));
	outFields->push(HX_("_clickList",87,04,55,82));
	outFields->push(HX_("mouseClickedTime",2f,68,64,b4));
	outFields->push(HX_("_point",91,fb,76,c2));
	outFields->push(HX_("maxDoubleClickDelay",50,c3,5f,52));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo FlxMouseEventManager_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /* ::Array< ::Dynamic> */ ,(int)offsetof(FlxMouseEventManager_obj,_list),HX_("_list",3d,38,c4,fa)},
	{::hx::fsObject /* ::Array< ::Dynamic> */ ,(int)offsetof(FlxMouseEventManager_obj,_overList),HX_("_overList",31,0b,a0,77)},
	{::hx::fsObject /* ::Array< ::Dynamic> */ ,(int)offsetof(FlxMouseEventManager_obj,_downList),HX_("_downList",3f,11,31,c4)},
	{::hx::fsObject /* ::Array< ::Dynamic> */ ,(int)offsetof(FlxMouseEventManager_obj,_clickList),HX_("_clickList",87,04,55,82)},
	{::hx::fsInt,(int)offsetof(FlxMouseEventManager_obj,mouseClickedTime),HX_("mouseClickedTime",2f,68,64,b4)},
	{::hx::fsObject /*  ::flixel::math::FlxBasePoint */ ,(int)offsetof(FlxMouseEventManager_obj,_point),HX_("_point",91,fb,76,c2)},
	{::hx::fsInt,(int)offsetof(FlxMouseEventManager_obj,maxDoubleClickDelay),HX_("maxDoubleClickDelay",50,c3,5f,52)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *FlxMouseEventManager_obj_sStaticStorageInfo = 0;
#endif

static ::String FlxMouseEventManager_obj_sMemberFields[] = {
	HX_("_list",3d,38,c4,fa),
	HX_("_overList",31,0b,a0,77),
	HX_("_downList",3f,11,31,c4),
	HX_("_clickList",87,04,55,82),
	HX_("mouseClickedTime",2f,68,64,b4),
	HX_("_point",91,fb,76,c2),
	HX_("maxDoubleClickDelay",50,c3,5f,52),
	HX_("destroy",fa,2c,86,24),
	HX_("update",09,86,05,87),
	HX_("addEvent",39,ee,21,ef),
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
	HX_("traverseFlxGroup",3f,3d,59,c9),
	HX_("get",96,80,4e,00),
	HX_("sortByMouseChildren",6f,d2,c1,84),
	HX_("clearRegistry",6a,b4,fc,03),
	HX_("checkOverlap",9f,fb,96,96),
	HX_("checkOverlapWithPoint",cb,10,c2,44),
	::String(null()) };

::hx::Class FlxMouseEventManager_obj::__mClass;

void FlxMouseEventManager_obj::__register()
{
	FlxMouseEventManager_obj _hx_dummy;
	FlxMouseEventManager_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("flixel.input.mouse.FlxMouseEventManager",a5,53,34,22);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(FlxMouseEventManager_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< FlxMouseEventManager_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = FlxMouseEventManager_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = FlxMouseEventManager_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace flixel
} // end namespace input
} // end namespace mouse
