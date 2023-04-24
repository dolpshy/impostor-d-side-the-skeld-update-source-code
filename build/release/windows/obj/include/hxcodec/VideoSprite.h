#ifndef INCLUDED_hxcodec_VideoSprite
#define INCLUDED_hxcodec_VideoSprite

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_flixel_FlxSprite
#include <flixel/FlxSprite.h>
#endif
HX_DECLARE_CLASS1(flixel,FlxBasic)
HX_DECLARE_CLASS1(flixel,FlxObject)
HX_DECLARE_CLASS1(flixel,FlxSprite)
HX_DECLARE_CLASS2(flixel,util,IFlxDestroyable)
HX_DECLARE_CLASS1(hxcodec,VideoHandler)
HX_DECLARE_CLASS1(hxcodec,VideoSprite)
HX_DECLARE_CLASS2(hxcodec,vlc,VLCBitmap)
HX_DECLARE_CLASS2(openfl,display,Bitmap)
HX_DECLARE_CLASS2(openfl,display,DisplayObject)
HX_DECLARE_CLASS2(openfl,display,IBitmapDrawable)
HX_DECLARE_CLASS2(openfl,events,EventDispatcher)
HX_DECLARE_CLASS2(openfl,events,IEventDispatcher)

namespace hxcodec{


class HXCPP_CLASS_ATTRIBUTES VideoSprite_obj : public  ::flixel::FlxSprite_obj
{
	public:
		typedef  ::flixel::FlxSprite_obj super;
		typedef VideoSprite_obj OBJ_;
		VideoSprite_obj();

	public:
		enum { _hx_ClassId = 0x487c857a };

		void __construct(::hx::Null< Float >  __o_X,::hx::Null< Float >  __o_Y);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="hxcodec.VideoSprite")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"hxcodec.VideoSprite"); }
		static ::hx::ObjectPtr< VideoSprite_obj > __new(::hx::Null< Float >  __o_X,::hx::Null< Float >  __o_Y);
		static ::hx::ObjectPtr< VideoSprite_obj > __alloc(::hx::Ctx *_hx_ctx,::hx::Null< Float >  __o_X,::hx::Null< Float >  __o_Y);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~VideoSprite_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("VideoSprite",c0,0a,70,20); }

		 ::hxcodec::VideoHandler bitmap;
		 ::Dynamic canvasWidth;
		 ::Dynamic canvasHeight;
		 ::Dynamic openingCallback;
		Dynamic openingCallback_dyn() { return openingCallback;}
		 ::Dynamic graphicLoadedCallback;
		Dynamic graphicLoadedCallback_dyn() { return graphicLoadedCallback;}
		 ::Dynamic finishCallback;
		Dynamic finishCallback_dyn() { return finishCallback;}
		bool oneTime;
		void update(Float elapsed);

		void playVideo(::String Path,::hx::Null< bool >  Loop,::hx::Null< bool >  PauseMusic);
		::Dynamic playVideo_dyn();

};

} // end namespace hxcodec

#endif /* INCLUDED_hxcodec_VideoSprite */ 
