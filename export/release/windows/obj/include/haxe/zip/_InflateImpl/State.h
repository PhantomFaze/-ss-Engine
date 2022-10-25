#ifndef INCLUDED_haxe_zip__InflateImpl_State
#define INCLUDED_haxe_zip__InflateImpl_State

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS3(haxe,zip,_InflateImpl,State)
namespace haxe{
namespace zip{
namespace _InflateImpl{


class State_obj : public ::hx::EnumBase_obj
{
	typedef ::hx::EnumBase_obj super;
		typedef State_obj OBJ_;

	public:
		State_obj() {};
		HX_DO_ENUM_RTTI;
		static void __boot();
		static void __register();
		static bool __GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		::String GetEnumName( ) const { return HX_("haxe.zip._InflateImpl.State",a0,c2,8b,f6); }
		::String __ToString() const { return HX_("State.",1d,4d,90,3a) + _hx_tag; }

		static ::haxe::zip::_InflateImpl::State Block;
		static inline ::haxe::zip::_InflateImpl::State Block_dyn() { return Block; }
		static ::haxe::zip::_InflateImpl::State CData;
		static inline ::haxe::zip::_InflateImpl::State CData_dyn() { return CData; }
		static ::haxe::zip::_InflateImpl::State Crc;
		static inline ::haxe::zip::_InflateImpl::State Crc_dyn() { return Crc; }
		static ::haxe::zip::_InflateImpl::State Dist;
		static inline ::haxe::zip::_InflateImpl::State Dist_dyn() { return Dist; }
		static ::haxe::zip::_InflateImpl::State DistOne;
		static inline ::haxe::zip::_InflateImpl::State DistOne_dyn() { return DistOne; }
		static ::haxe::zip::_InflateImpl::State Done;
		static inline ::haxe::zip::_InflateImpl::State Done_dyn() { return Done; }
		static ::haxe::zip::_InflateImpl::State Flat;
		static inline ::haxe::zip::_InflateImpl::State Flat_dyn() { return Flat; }
		static ::haxe::zip::_InflateImpl::State Head;
		static inline ::haxe::zip::_InflateImpl::State Head_dyn() { return Head; }
};

} // end namespace haxe
} // end namespace zip
} // end namespace _InflateImpl

#endif /* INCLUDED_haxe_zip__InflateImpl_State */ 
