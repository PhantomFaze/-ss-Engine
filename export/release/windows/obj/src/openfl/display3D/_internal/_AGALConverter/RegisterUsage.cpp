#include <hxcpp.h>

#ifndef INCLUDED_openfl_display3D__internal__AGALConverter_RegisterUsage
#include <openfl/display3D/_internal/_AGALConverter/RegisterUsage.h>
#endif
namespace openfl{
namespace display3D{
namespace _internal{
namespace _AGALConverter{

::openfl::display3D::_internal::_AGALConverter::RegisterUsage RegisterUsage_obj::MATRIX_4_4;

::openfl::display3D::_internal::_AGALConverter::RegisterUsage RegisterUsage_obj::SAMPLER_2D;

::openfl::display3D::_internal::_AGALConverter::RegisterUsage RegisterUsage_obj::SAMPLER_2D_ALPHA;

::openfl::display3D::_internal::_AGALConverter::RegisterUsage RegisterUsage_obj::SAMPLER_CUBE;

::openfl::display3D::_internal::_AGALConverter::RegisterUsage RegisterUsage_obj::SAMPLER_CUBE_ALPHA;

::openfl::display3D::_internal::_AGALConverter::RegisterUsage RegisterUsage_obj::UNUSED;

::openfl::display3D::_internal::_AGALConverter::RegisterUsage RegisterUsage_obj::VECTOR_4;

::openfl::display3D::_internal::_AGALConverter::RegisterUsage RegisterUsage_obj::VECTOR_4_ARRAY;

bool RegisterUsage_obj::__GetStatic(const ::String &inName, ::Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	if (inName==HX_("MATRIX_4_4",eb,a3,62,96)) { outValue = RegisterUsage_obj::MATRIX_4_4; return true; }
	if (inName==HX_("SAMPLER_2D",09,2a,93,6e)) { outValue = RegisterUsage_obj::SAMPLER_2D; return true; }
	if (inName==HX_("SAMPLER_2D_ALPHA",48,fd,fb,b5)) { outValue = RegisterUsage_obj::SAMPLER_2D_ALPHA; return true; }
	if (inName==HX_("SAMPLER_CUBE",ec,3e,82,a4)) { outValue = RegisterUsage_obj::SAMPLER_CUBE; return true; }
	if (inName==HX_("SAMPLER_CUBE_ALPHA",6b,5e,fa,15)) { outValue = RegisterUsage_obj::SAMPLER_CUBE_ALPHA; return true; }
	if (inName==HX_("UNUSED",16,45,05,1e)) { outValue = RegisterUsage_obj::UNUSED; return true; }
	if (inName==HX_("VECTOR_4",78,a6,43,c8)) { outValue = RegisterUsage_obj::VECTOR_4; return true; }
	if (inName==HX_("VECTOR_4_ARRAY",32,bd,f8,e4)) { outValue = RegisterUsage_obj::VECTOR_4_ARRAY; return true; }
	return super::__GetStatic(inName, outValue, inCallProp);
}

HX_DEFINE_CREATE_ENUM(RegisterUsage_obj)

int RegisterUsage_obj::__FindIndex(::String inName)
{
	if (inName==HX_("MATRIX_4_4",eb,a3,62,96)) return 2;
	if (inName==HX_("SAMPLER_2D",09,2a,93,6e)) return 3;
	if (inName==HX_("SAMPLER_2D_ALPHA",48,fd,fb,b5)) return 4;
	if (inName==HX_("SAMPLER_CUBE",ec,3e,82,a4)) return 5;
	if (inName==HX_("SAMPLER_CUBE_ALPHA",6b,5e,fa,15)) return 6;
	if (inName==HX_("UNUSED",16,45,05,1e)) return 0;
	if (inName==HX_("VECTOR_4",78,a6,43,c8)) return 1;
	if (inName==HX_("VECTOR_4_ARRAY",32,bd,f8,e4)) return 7;
	return super::__FindIndex(inName);
}

int RegisterUsage_obj::__FindArgCount(::String inName)
{
	if (inName==HX_("MATRIX_4_4",eb,a3,62,96)) return 0;
	if (inName==HX_("SAMPLER_2D",09,2a,93,6e)) return 0;
	if (inName==HX_("SAMPLER_2D_ALPHA",48,fd,fb,b5)) return 0;
	if (inName==HX_("SAMPLER_CUBE",ec,3e,82,a4)) return 0;
	if (inName==HX_("SAMPLER_CUBE_ALPHA",6b,5e,fa,15)) return 0;
	if (inName==HX_("UNUSED",16,45,05,1e)) return 0;
	if (inName==HX_("VECTOR_4",78,a6,43,c8)) return 0;
	if (inName==HX_("VECTOR_4_ARRAY",32,bd,f8,e4)) return 0;
	return super::__FindArgCount(inName);
}

::hx::Val RegisterUsage_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	if (inName==HX_("MATRIX_4_4",eb,a3,62,96)) return MATRIX_4_4;
	if (inName==HX_("SAMPLER_2D",09,2a,93,6e)) return SAMPLER_2D;
	if (inName==HX_("SAMPLER_2D_ALPHA",48,fd,fb,b5)) return SAMPLER_2D_ALPHA;
	if (inName==HX_("SAMPLER_CUBE",ec,3e,82,a4)) return SAMPLER_CUBE;
	if (inName==HX_("SAMPLER_CUBE_ALPHA",6b,5e,fa,15)) return SAMPLER_CUBE_ALPHA;
	if (inName==HX_("UNUSED",16,45,05,1e)) return UNUSED;
	if (inName==HX_("VECTOR_4",78,a6,43,c8)) return VECTOR_4;
	if (inName==HX_("VECTOR_4_ARRAY",32,bd,f8,e4)) return VECTOR_4_ARRAY;
	return super::__Field(inName,inCallProp);
}

static ::String RegisterUsage_obj_sStaticFields[] = {
	HX_("UNUSED",16,45,05,1e),
	HX_("VECTOR_4",78,a6,43,c8),
	HX_("MATRIX_4_4",eb,a3,62,96),
	HX_("SAMPLER_2D",09,2a,93,6e),
	HX_("SAMPLER_2D_ALPHA",48,fd,fb,b5),
	HX_("SAMPLER_CUBE",ec,3e,82,a4),
	HX_("SAMPLER_CUBE_ALPHA",6b,5e,fa,15),
	HX_("VECTOR_4_ARRAY",32,bd,f8,e4),
	::String(null())
};

::hx::Class RegisterUsage_obj::__mClass;

Dynamic __Create_RegisterUsage_obj() { return new RegisterUsage_obj; }

void RegisterUsage_obj::__register()
{

::hx::Static(__mClass) = ::hx::_hx_RegisterClass(HX_("openfl.display3D._internal._AGALConverter.RegisterUsage",cb,41,38,21), ::hx::TCanCast< RegisterUsage_obj >,RegisterUsage_obj_sStaticFields,0,
	&__Create_RegisterUsage_obj, &__Create,
	&super::__SGetClass(), &CreateRegisterUsage_obj, 0
#ifdef HXCPP_VISIT_ALLOCS
    , 0
#endif
#ifdef HXCPP_SCRIPTABLE
    , 0
#endif
);
	__mClass->mGetStaticField = &RegisterUsage_obj::__GetStatic;
}

void RegisterUsage_obj::__boot()
{
MATRIX_4_4 = ::hx::CreateConstEnum< RegisterUsage_obj >(HX_("MATRIX_4_4",eb,a3,62,96),2);
SAMPLER_2D = ::hx::CreateConstEnum< RegisterUsage_obj >(HX_("SAMPLER_2D",09,2a,93,6e),3);
SAMPLER_2D_ALPHA = ::hx::CreateConstEnum< RegisterUsage_obj >(HX_("SAMPLER_2D_ALPHA",48,fd,fb,b5),4);
SAMPLER_CUBE = ::hx::CreateConstEnum< RegisterUsage_obj >(HX_("SAMPLER_CUBE",ec,3e,82,a4),5);
SAMPLER_CUBE_ALPHA = ::hx::CreateConstEnum< RegisterUsage_obj >(HX_("SAMPLER_CUBE_ALPHA",6b,5e,fa,15),6);
UNUSED = ::hx::CreateConstEnum< RegisterUsage_obj >(HX_("UNUSED",16,45,05,1e),0);
VECTOR_4 = ::hx::CreateConstEnum< RegisterUsage_obj >(HX_("VECTOR_4",78,a6,43,c8),1);
VECTOR_4_ARRAY = ::hx::CreateConstEnum< RegisterUsage_obj >(HX_("VECTOR_4_ARRAY",32,bd,f8,e4),7);
}


} // end namespace openfl
} // end namespace display3D
} // end namespace _internal
} // end namespace _AGALConverter
