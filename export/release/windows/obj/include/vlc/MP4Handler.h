#ifndef INCLUDED_vlc_MP4Handler
#define INCLUDED_vlc_MP4Handler

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_vlc_bitmap_VlcBitmap
#include <vlc/bitmap/VlcBitmap.h>
#endif
HX_DECLARE_CLASS2(openfl,display,Bitmap)
HX_DECLARE_CLASS2(openfl,display,DisplayObject)
HX_DECLARE_CLASS2(openfl,display,IBitmapDrawable)
HX_DECLARE_CLASS2(openfl,events,Event)
HX_DECLARE_CLASS2(openfl,events,EventDispatcher)
HX_DECLARE_CLASS2(openfl,events,IEventDispatcher)
HX_DECLARE_CLASS1(vlc,MP4Handler)
HX_DECLARE_CLASS2(vlc,bitmap,VlcBitmap)

namespace vlc{


class HXCPP_CLASS_ATTRIBUTES MP4Handler_obj : public  ::vlc::bitmap::VlcBitmap_obj
{
	public:
		typedef  ::vlc::bitmap::VlcBitmap_obj super;
		typedef MP4Handler_obj OBJ_;
		MP4Handler_obj();

	public:
		enum { _hx_ClassId = 0x1db24446 };

		void __construct(::hx::Null< Float >  __o_width,::hx::Null< Float >  __o_height,::hx::Null< bool >  __o_autoScale);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="vlc.MP4Handler")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"vlc.MP4Handler"); }
		static ::hx::ObjectPtr< MP4Handler_obj > __new(::hx::Null< Float >  __o_width,::hx::Null< Float >  __o_height,::hx::Null< bool >  __o_autoScale);
		static ::hx::ObjectPtr< MP4Handler_obj > __alloc(::hx::Ctx *_hx_ctx,::hx::Null< Float >  __o_width,::hx::Null< Float >  __o_height,::hx::Null< bool >  __o_autoScale);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~MP4Handler_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("MP4Handler",59,e4,3c,73); }

		 ::Dynamic readyCallback;
		Dynamic readyCallback_dyn() { return readyCallback;}
		 ::Dynamic finishCallback;
		Dynamic finishCallback_dyn() { return finishCallback;}
		bool pauseMusic;
		void update( ::openfl::events::Event e);
		::Dynamic update_dyn();

		::String checkFile(::String fileName);
		::Dynamic checkFile_dyn();

		void onVLCVideoReady();
		::Dynamic onVLCVideoReady_dyn();

		void onVLCError();
		::Dynamic onVLCError_dyn();

		void finishVideo();
		::Dynamic finishVideo_dyn();

		void playVideo(::String path, ::Dynamic repeat,::hx::Null< bool >  pauseMusic);
		::Dynamic playVideo_dyn();

};

} // end namespace vlc

#endif /* INCLUDED_vlc_MP4Handler */ 
