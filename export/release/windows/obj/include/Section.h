#ifndef INCLUDED_Section
#define INCLUDED_Section

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS0(Section)



class HXCPP_CLASS_ATTRIBUTES Section_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef Section_obj OBJ_;
		Section_obj();

	public:
		enum { _hx_ClassId = 0x085fa621 };

		void __construct(::hx::Null< Float >  __o_sectionBeats);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="Section")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"Section"); }
		static ::hx::ObjectPtr< Section_obj > __new(::hx::Null< Float >  __o_sectionBeats);
		static ::hx::ObjectPtr< Section_obj > __alloc(::hx::Ctx *_hx_ctx,::hx::Null< Float >  __o_sectionBeats);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~Section_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("Section",c5,2d,29,2b); }

		static void __boot();
		static int COPYCAT;
		::cpp::VirtualArray sectionNotes;
		Float sectionBeats;
		bool gfSection;
		int typeOfSection;
		bool mustHitSection;
};


#endif /* INCLUDED_Section */ 
