#ifndef INCLUDED_lime_text_harfbuzz__HBFace_HBFace_Impl_
#define INCLUDED_lime_text_harfbuzz__HBFace_HBFace_Impl_

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS4(lime,text,harfbuzz,_HBFace,HBFace_Impl_)

namespace lime{
namespace text{
namespace harfbuzz{
namespace _HBFace{


class HXCPP_CLASS_ATTRIBUTES HBFace_Impl__obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef HBFace_Impl__obj OBJ_;
		HBFace_Impl__obj();

	public:
		enum { _hx_ClassId = 0x559249c7 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="lime.text.harfbuzz._HBFace.HBFace_Impl_")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,false,"lime.text.harfbuzz._HBFace.HBFace_Impl_"); }

		inline static ::hx::ObjectPtr< HBFace_Impl__obj > __new() {
			::hx::ObjectPtr< HBFace_Impl__obj > __this = new HBFace_Impl__obj();
			__this->__construct();
			return __this;
		}

		inline static ::hx::ObjectPtr< HBFace_Impl__obj > __alloc(::hx::Ctx *_hx_ctx) {
			HBFace_Impl__obj *__this = (HBFace_Impl__obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(HBFace_Impl__obj), false, "lime.text.harfbuzz._HBFace.HBFace_Impl_"));
			*(void **)__this = HBFace_Impl__obj::_hx_vtable;
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~HBFace_Impl__obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("HBFace_Impl_",97,44,07,0c); }

		static  ::Dynamic _new( ::Dynamic blob,int index);
		static ::Dynamic _new_dyn();

		static  ::Dynamic get_empty();
		static ::Dynamic get_empty_dyn();

		static int get_glyphCount( ::Dynamic this1);
		static ::Dynamic get_glyphCount_dyn();

		static int set_glyphCount( ::Dynamic this1,int value);
		static ::Dynamic set_glyphCount_dyn();

		static bool get_immutable( ::Dynamic this1);
		static ::Dynamic get_immutable_dyn();

		static int get_index( ::Dynamic this1);
		static ::Dynamic get_index_dyn();

		static int set_index( ::Dynamic this1,int value);
		static ::Dynamic set_index_dyn();

		static int get_upem( ::Dynamic this1);
		static ::Dynamic get_upem_dyn();

		static int set_upem( ::Dynamic this1,int value);
		static ::Dynamic set_upem_dyn();

};

} // end namespace lime
} // end namespace text
} // end namespace harfbuzz
} // end namespace _HBFace

#endif /* INCLUDED_lime_text_harfbuzz__HBFace_HBFace_Impl_ */ 
