#ifndef INCLUDED_hxcodec_vlc_VLCBitmap
#define INCLUDED_hxcodec_vlc_VLCBitmap

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_openfl_display_Bitmap
#include <openfl/display/Bitmap.h>
#endif
#ifndef INCLUDED_f6e4a6bd16e728f7
#define INCLUDED_f6e4a6bd16e728f7
#include "vlc/vlc.h"
#endif
HX_DECLARE_CLASS2(hxcodec,vlc,VLCBitmap)
HX_DECLARE_CLASS2(openfl,display,Bitmap)
HX_DECLARE_CLASS2(openfl,display,DisplayObject)
HX_DECLARE_CLASS2(openfl,display,IBitmapDrawable)
HX_DECLARE_CLASS3(openfl,display3D,textures,RectangleTexture)
HX_DECLARE_CLASS3(openfl,display3D,textures,TextureBase)
HX_DECLARE_CLASS2(openfl,events,Event)
HX_DECLARE_CLASS2(openfl,events,EventDispatcher)
HX_DECLARE_CLASS2(openfl,events,IEventDispatcher)

namespace hxcodec{
namespace vlc{


class HXCPP_CLASS_ATTRIBUTES VLCBitmap_obj : public  ::openfl::display::Bitmap_obj
{
	public:
		typedef  ::openfl::display::Bitmap_obj super;
		typedef VLCBitmap_obj OBJ_;
		VLCBitmap_obj();

	public:
		enum { _hx_ClassId = 0x317b3ab1 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="hxcodec.vlc.VLCBitmap")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"hxcodec.vlc.VLCBitmap"); }
		static ::hx::ObjectPtr< VLCBitmap_obj > __new();
		static ::hx::ObjectPtr< VLCBitmap_obj > __alloc(::hx::Ctx *_hx_ctx);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~VLCBitmap_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("VLCBitmap",1c,c0,d1,df); }

		Float skipStepLimit;
		int videoWidth;
		int videoHeight;
		bool isDisplaying;
		 ::Dynamic onOpening;
		Dynamic onOpening_dyn() { return onOpening;}
		 ::Dynamic onPlaying;
		Dynamic onPlaying_dyn() { return onPlaying;}
		 ::Dynamic onPaused;
		Dynamic onPaused_dyn() { return onPaused;}
		 ::Dynamic onStopped;
		Dynamic onStopped_dyn() { return onStopped;}
		 ::Dynamic onEndReached;
		Dynamic onEndReached_dyn() { return onEndReached;}
		 ::Dynamic onEncounteredError;
		Dynamic onEncounteredError_dyn() { return onEncounteredError;}
		 ::Dynamic onForward;
		Dynamic onForward_dyn() { return onForward;}
		 ::Dynamic onBackward;
		Dynamic onBackward_dyn() { return onBackward;}
		::Array< bool > flags;
		::cpp::Pointer< unsigned char > pixels;
		::Array< unsigned char > buffer;
		 ::openfl::display3D::textures::RectangleTexture texture;
		 libvlc_instance_t* instance;
		 libvlc_audio_output_t* audioOutput;
		 libvlc_media_player_t* mediaPlayer;
		 libvlc_media_t* mediaItem;
		 libvlc_event_manager_t* eventManager;
		void play(::String location,::hx::Null< bool >  loop);
		::Dynamic play_dyn();

		void stop();
		::Dynamic stop_dyn();

		void pause();
		::Dynamic pause_dyn();

		void resume();
		::Dynamic resume_dyn();

		void dispose();
		::Dynamic dispose_dyn();

		void onAddedToStage( ::openfl::events::Event e);
		::Dynamic onAddedToStage_dyn();

		Float currentTime;
		void onEnterFrame( ::openfl::events::Event e);
		::Dynamic onEnterFrame_dyn();

		void checkFlags();
		::Dynamic checkFlags_dyn();

		void render(Float deltaTime,int elementsCount);
		::Dynamic render_dyn();

		int get_time();
		::Dynamic get_time_dyn();

		int set_time(int value);
		::Dynamic set_time_dyn();

		Float get_position();
		::Dynamic get_position_dyn();

		Float set_position(Float value);
		::Dynamic set_position_dyn();

		int get_length();
		::Dynamic get_length_dyn();

		int get_duration();
		::Dynamic get_duration_dyn();

		::String get_mrl();
		::Dynamic get_mrl_dyn();

		int get_volume();
		::Dynamic get_volume_dyn();

		int set_volume(int value);
		::Dynamic set_volume_dyn();

		int get_delay();
		::Dynamic get_delay_dyn();

		int set_delay(int value);
		::Dynamic set_delay_dyn();

		Float get_rate();
		::Dynamic get_rate_dyn();

		Float set_rate(Float value);
		::Dynamic set_rate_dyn();

		Float get_fps();
		::Dynamic get_fps_dyn();

		bool get_isPlaying();
		::Dynamic get_isPlaying_dyn();

		bool get_isSeekable();
		::Dynamic get_isSeekable_dyn();

		bool get_canPause();
		::Dynamic get_canPause_dyn();

		Float set_height(Float value);

		Float set_width(Float value);

};

} // end namespace hxcodec
} // end namespace vlc

#endif /* INCLUDED_hxcodec_vlc_VLCBitmap */ 
