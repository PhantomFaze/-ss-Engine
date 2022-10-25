#ifndef INCLUDED_openfl_display__internal_Context3DTextField
#define INCLUDED_openfl_display__internal_Context3DTextField

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(openfl,display,DisplayObject)
HX_DECLARE_CLASS2(openfl,display,DisplayObjectRenderer)
HX_DECLARE_CLASS2(openfl,display,IBitmapDrawable)
HX_DECLARE_CLASS2(openfl,display,InteractiveObject)
HX_DECLARE_CLASS2(openfl,display,OpenGLRenderer)
HX_DECLARE_CLASS3(openfl,display,_internal,Context3DTextField)
HX_DECLARE_CLASS2(openfl,events,EventDispatcher)
HX_DECLARE_CLASS2(openfl,events,IEventDispatcher)
HX_DECLARE_CLASS2(openfl,text,TextField)

namespace openfl{
namespace display{
namespace _internal{


class HXCPP_CLASS_ATTRIBUTES Context3DTextField_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef Context3DTextField_obj OBJ_;
		Context3DTextField_obj();

	public:
		enum { _hx_ClassId = 0x03f4fff3 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="openfl.display._internal.Context3DTextField")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,false,"openfl.display._internal.Context3DTextField"); }

		inline static ::hx::ObjectPtr< Context3DTextField_obj > __new() {
			::hx::ObjectPtr< Context3DTextField_obj > __this = new Context3DTextField_obj();
			__this->__construct();
			return __this;
		}

		inline static ::hx::ObjectPtr< Context3DTextField_obj > __alloc(::hx::Ctx *_hx_ctx) {
			Context3DTextField_obj *__this = (Context3DTextField_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(Context3DTextField_obj), false, "openfl.display._internal.Context3DTextField"));
			*(void **)__this = Context3DTextField_obj::_hx_vtable;
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~Context3DTextField_obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("Context3DTextField",6d,40,5b,f7); }

		static void __boot();
		static  ::Dynamic __meta__;
		static void render( ::openfl::text::TextField textField, ::openfl::display::OpenGLRenderer renderer);
		static ::Dynamic render_dyn();

		static void renderDrawable( ::openfl::text::TextField textField, ::openfl::display::OpenGLRenderer renderer);
		static ::Dynamic renderDrawable_dyn();

		static void renderDrawableMask( ::openfl::text::TextField textField, ::openfl::display::OpenGLRenderer renderer);
		static ::Dynamic renderDrawableMask_dyn();

		static void renderMask( ::openfl::text::TextField textField, ::openfl::display::OpenGLRenderer renderer);
		static ::Dynamic renderMask_dyn();

};

} // end namespace openfl
} // end namespace display
} // end namespace _internal

#endif /* INCLUDED_openfl_display__internal_Context3DTextField */ 
