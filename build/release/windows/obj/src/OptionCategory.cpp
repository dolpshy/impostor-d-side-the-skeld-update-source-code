#include <hxcpp.h>

#ifndef INCLUDED_Option
#include <Option.h>
#endif
#ifndef INCLUDED_OptionCategory
#include <OptionCategory.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_fbbdc6bb86a8b7a6_11_new,"OptionCategory","new",0x84c54225,"OptionCategory.new","Options.hx",11,0x9d9a0240)
HX_LOCAL_STACK_FRAME(_hx_pos_fbbdc6bb86a8b7a6_16_getOptions,"OptionCategory","getOptions",0xd3403a43,"OptionCategory.getOptions","Options.hx",16,0x9d9a0240)
HX_LOCAL_STACK_FRAME(_hx_pos_fbbdc6bb86a8b7a6_21_addOption,"OptionCategory","addOption",0xcc3f9bfb,"OptionCategory.addOption","Options.hx",21,0x9d9a0240)
HX_LOCAL_STACK_FRAME(_hx_pos_fbbdc6bb86a8b7a6_27_removeOption,"OptionCategory","removeOption",0x584f1c74,"OptionCategory.removeOption","Options.hx",27,0x9d9a0240)
HX_LOCAL_STACK_FRAME(_hx_pos_fbbdc6bb86a8b7a6_32_getName,"OptionCategory","getName",0xe1f05a46,"OptionCategory.getName","Options.hx",32,0x9d9a0240)

void OptionCategory_obj::__construct(::String catName,::Array< ::Dynamic> options){
            	HX_STACKFRAME(&_hx_pos_fbbdc6bb86a8b7a6_11_new)
HXLINE(  30)		this->_name = HX_("New Category",fe,76,fc,27);
HXLINE(  13)		this->_options = ::Array_obj< ::Dynamic>::__new();
HXLINE(  37)		this->_name = catName;
HXLINE(  38)		this->_options = options;
            	}

Dynamic OptionCategory_obj::__CreateEmpty() { return new OptionCategory_obj; }

void *OptionCategory_obj::_hx_vtable = 0;

Dynamic OptionCategory_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< OptionCategory_obj > _hx_result = new OptionCategory_obj();
	_hx_result->__construct(inArgs[0],inArgs[1]);
	return _hx_result;
}

bool OptionCategory_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x2073e79f;
}

::Array< ::Dynamic> OptionCategory_obj::getOptions(){
            	HX_STACKFRAME(&_hx_pos_fbbdc6bb86a8b7a6_16_getOptions)
HXDLIN(  16)		return this->_options;
            	}


HX_DEFINE_DYNAMIC_FUNC0(OptionCategory_obj,getOptions,return )

void OptionCategory_obj::addOption( ::Option opt){
            	HX_STACKFRAME(&_hx_pos_fbbdc6bb86a8b7a6_21_addOption)
HXDLIN(  21)		this->_options->push(opt);
            	}


HX_DEFINE_DYNAMIC_FUNC1(OptionCategory_obj,addOption,(void))

void OptionCategory_obj::removeOption( ::Option opt){
            	HX_STACKFRAME(&_hx_pos_fbbdc6bb86a8b7a6_27_removeOption)
HXDLIN(  27)		this->_options->remove(opt);
            	}


HX_DEFINE_DYNAMIC_FUNC1(OptionCategory_obj,removeOption,(void))

::String OptionCategory_obj::getName(){
            	HX_STACKFRAME(&_hx_pos_fbbdc6bb86a8b7a6_32_getName)
HXDLIN(  32)		return this->_name;
            	}


HX_DEFINE_DYNAMIC_FUNC0(OptionCategory_obj,getName,return )


::hx::ObjectPtr< OptionCategory_obj > OptionCategory_obj::__new(::String catName,::Array< ::Dynamic> options) {
	::hx::ObjectPtr< OptionCategory_obj > __this = new OptionCategory_obj();
	__this->__construct(catName,options);
	return __this;
}

::hx::ObjectPtr< OptionCategory_obj > OptionCategory_obj::__alloc(::hx::Ctx *_hx_ctx,::String catName,::Array< ::Dynamic> options) {
	OptionCategory_obj *__this = (OptionCategory_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(OptionCategory_obj), true, "OptionCategory"));
	*(void **)__this = OptionCategory_obj::_hx_vtable;
	__this->__construct(catName,options);
	return __this;
}

OptionCategory_obj::OptionCategory_obj()
{
}

void OptionCategory_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(OptionCategory);
	HX_MARK_MEMBER_NAME(_options,"_options");
	HX_MARK_MEMBER_NAME(_name,"_name");
	HX_MARK_END_CLASS();
}

void OptionCategory_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_options,"_options");
	HX_VISIT_MEMBER_NAME(_name,"_name");
}

::hx::Val OptionCategory_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"_name") ) { return ::hx::Val( _name ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"getName") ) { return ::hx::Val( getName_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"_options") ) { return ::hx::Val( _options ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"addOption") ) { return ::hx::Val( addOption_dyn() ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"getOptions") ) { return ::hx::Val( getOptions_dyn() ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"removeOption") ) { return ::hx::Val( removeOption_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val OptionCategory_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"_name") ) { _name=inValue.Cast< ::String >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"_options") ) { _options=inValue.Cast< ::Array< ::Dynamic> >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void OptionCategory_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("_options",df,8c,b6,19));
	outFields->push(HX_("_name",2a,8e,10,fc));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo OptionCategory_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /* ::Array< ::Dynamic> */ ,(int)offsetof(OptionCategory_obj,_options),HX_("_options",df,8c,b6,19)},
	{::hx::fsString,(int)offsetof(OptionCategory_obj,_name),HX_("_name",2a,8e,10,fc)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *OptionCategory_obj_sStaticStorageInfo = 0;
#endif

static ::String OptionCategory_obj_sMemberFields[] = {
	HX_("_options",df,8c,b6,19),
	HX_("getOptions",68,b9,5f,2f),
	HX_("addOption",76,08,9f,e3),
	HX_("removeOption",d9,6e,a8,9a),
	HX_("_name",2a,8e,10,fc),
	HX_("getName",01,22,82,1b),
	::String(null()) };

::hx::Class OptionCategory_obj::__mClass;

void OptionCategory_obj::__register()
{
	OptionCategory_obj _hx_dummy;
	OptionCategory_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("OptionCategory",b3,4b,ce,c8);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(OptionCategory_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< OptionCategory_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = OptionCategory_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = OptionCategory_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

