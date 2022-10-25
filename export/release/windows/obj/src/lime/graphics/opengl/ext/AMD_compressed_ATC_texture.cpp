#include <hxcpp.h>

#ifndef INCLUDED_lime_graphics_opengl_ext_AMD_compressed_ATC_texture
#include <lime/graphics/opengl/ext/AMD_compressed_ATC_texture.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_7a228448205ba8a3_4_new,"lime.graphics.opengl.ext.AMD_compressed_ATC_texture","new",0xe60aeca9,"lime.graphics.opengl.ext.AMD_compressed_ATC_texture.new","lime/graphics/opengl/ext/AMD_compressed_ATC_texture.hx",4,0x5b741105)
namespace lime{
namespace graphics{
namespace opengl{
namespace ext{

void AMD_compressed_ATC_texture_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_7a228448205ba8a3_4_new)
HXLINE(   8)		this->ATC_RGBA_INTERPOLATED_ALPHA_AMD = 34798;
HXLINE(   7)		this->ATC_RGBA_EXPLICIT_ALPHA_AMD = 35987;
HXLINE(   6)		this->ATC_RGB_AMD = 35986;
            	}

Dynamic AMD_compressed_ATC_texture_obj::__CreateEmpty() { return new AMD_compressed_ATC_texture_obj; }

void *AMD_compressed_ATC_texture_obj::_hx_vtable = 0;

Dynamic AMD_compressed_ATC_texture_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< AMD_compressed_ATC_texture_obj > _hx_result = new AMD_compressed_ATC_texture_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool AMD_compressed_ATC_texture_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x0b199aa3;
}


AMD_compressed_ATC_texture_obj::AMD_compressed_ATC_texture_obj()
{
}

::hx::Val AMD_compressed_ATC_texture_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 11:
		if (HX_FIELD_EQ(inName,"ATC_RGB_AMD") ) { return ::hx::Val( ATC_RGB_AMD ); }
		break;
	case 27:
		if (HX_FIELD_EQ(inName,"ATC_RGBA_EXPLICIT_ALPHA_AMD") ) { return ::hx::Val( ATC_RGBA_EXPLICIT_ALPHA_AMD ); }
		break;
	case 31:
		if (HX_FIELD_EQ(inName,"ATC_RGBA_INTERPOLATED_ALPHA_AMD") ) { return ::hx::Val( ATC_RGBA_INTERPOLATED_ALPHA_AMD ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val AMD_compressed_ATC_texture_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 11:
		if (HX_FIELD_EQ(inName,"ATC_RGB_AMD") ) { ATC_RGB_AMD=inValue.Cast< int >(); return inValue; }
		break;
	case 27:
		if (HX_FIELD_EQ(inName,"ATC_RGBA_EXPLICIT_ALPHA_AMD") ) { ATC_RGBA_EXPLICIT_ALPHA_AMD=inValue.Cast< int >(); return inValue; }
		break;
	case 31:
		if (HX_FIELD_EQ(inName,"ATC_RGBA_INTERPOLATED_ALPHA_AMD") ) { ATC_RGBA_INTERPOLATED_ALPHA_AMD=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void AMD_compressed_ATC_texture_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("ATC_RGB_AMD",b7,31,75,34));
	outFields->push(HX_("ATC_RGBA_EXPLICIT_ALPHA_AMD",28,5c,13,57));
	outFields->push(HX_("ATC_RGBA_INTERPOLATED_ALPHA_AMD",77,dc,e4,2a));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo AMD_compressed_ATC_texture_obj_sMemberStorageInfo[] = {
	{::hx::fsInt,(int)offsetof(AMD_compressed_ATC_texture_obj,ATC_RGB_AMD),HX_("ATC_RGB_AMD",b7,31,75,34)},
	{::hx::fsInt,(int)offsetof(AMD_compressed_ATC_texture_obj,ATC_RGBA_EXPLICIT_ALPHA_AMD),HX_("ATC_RGBA_EXPLICIT_ALPHA_AMD",28,5c,13,57)},
	{::hx::fsInt,(int)offsetof(AMD_compressed_ATC_texture_obj,ATC_RGBA_INTERPOLATED_ALPHA_AMD),HX_("ATC_RGBA_INTERPOLATED_ALPHA_AMD",77,dc,e4,2a)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *AMD_compressed_ATC_texture_obj_sStaticStorageInfo = 0;
#endif

static ::String AMD_compressed_ATC_texture_obj_sMemberFields[] = {
	HX_("ATC_RGB_AMD",b7,31,75,34),
	HX_("ATC_RGBA_EXPLICIT_ALPHA_AMD",28,5c,13,57),
	HX_("ATC_RGBA_INTERPOLATED_ALPHA_AMD",77,dc,e4,2a),
	::String(null()) };

::hx::Class AMD_compressed_ATC_texture_obj::__mClass;

void AMD_compressed_ATC_texture_obj::__register()
{
	AMD_compressed_ATC_texture_obj _hx_dummy;
	AMD_compressed_ATC_texture_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("lime.graphics.opengl.ext.AMD_compressed_ATC_texture",37,64,c3,ec);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(AMD_compressed_ATC_texture_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< AMD_compressed_ATC_texture_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = AMD_compressed_ATC_texture_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = AMD_compressed_ATC_texture_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace lime
} // end namespace graphics
} // end namespace opengl
} // end namespace ext
