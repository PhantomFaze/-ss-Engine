#include <hxcpp.h>

#ifndef INCLUDED___ASSET__flixel_flixel_ui_xml_default_popup_xml
#include <__ASSET__flixel_flixel_ui_xml_default_popup_xml.h>
#endif
#ifndef INCLUDED_haxe_Resource
#include <haxe/Resource.h>
#endif
#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_12cc29ec0040cf38_34_new,"__ASSET__flixel_flixel_ui_xml_default_popup_xml","new",0x52c31055,"__ASSET__flixel_flixel_ui_xml_default_popup_xml.new","lime/_internal/macros/AssetsMacro.hx",34,0xc651f030)
HX_LOCAL_STACK_FRAME(_hx_pos_b2ac29e94b65edc3_1194_boot,"__ASSET__flixel_flixel_ui_xml_default_popup_xml","boot",0x10043a9d,"__ASSET__flixel_flixel_ui_xml_default_popup_xml.boot","ManifestResources.hx",1194,0xf77aa668)

void __ASSET__flixel_flixel_ui_xml_default_popup_xml_obj::__construct( ::Dynamic length,::Array< unsigned char > bytesData){
            	HX_STACKFRAME(&_hx_pos_12cc29ec0040cf38_34_new)
HXLINE(  35)		 ::haxe::io::Bytes bytes = ::haxe::Resource_obj::getBytes(::__ASSET__flixel_flixel_ui_xml_default_popup_xml_obj::resourceName);
HXLINE(  41)		super::__construct(bytes->length,bytes->b);
            	}

Dynamic __ASSET__flixel_flixel_ui_xml_default_popup_xml_obj::__CreateEmpty() { return new __ASSET__flixel_flixel_ui_xml_default_popup_xml_obj; }

void *__ASSET__flixel_flixel_ui_xml_default_popup_xml_obj::_hx_vtable = 0;

Dynamic __ASSET__flixel_flixel_ui_xml_default_popup_xml_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< __ASSET__flixel_flixel_ui_xml_default_popup_xml_obj > _hx_result = new __ASSET__flixel_flixel_ui_xml_default_popup_xml_obj();
	_hx_result->__construct(inArgs[0],inArgs[1]);
	return _hx_result;
}

bool __ASSET__flixel_flixel_ui_xml_default_popup_xml_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x195c64b7) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x195c64b7;
	} else {
		return inClassId==(int)0x7aa12723;
	}
}

::String __ASSET__flixel_flixel_ui_xml_default_popup_xml_obj::resourceName;


::hx::ObjectPtr< __ASSET__flixel_flixel_ui_xml_default_popup_xml_obj > __ASSET__flixel_flixel_ui_xml_default_popup_xml_obj::__new( ::Dynamic length,::Array< unsigned char > bytesData) {
	::hx::ObjectPtr< __ASSET__flixel_flixel_ui_xml_default_popup_xml_obj > __this = new __ASSET__flixel_flixel_ui_xml_default_popup_xml_obj();
	__this->__construct(length,bytesData);
	return __this;
}

::hx::ObjectPtr< __ASSET__flixel_flixel_ui_xml_default_popup_xml_obj > __ASSET__flixel_flixel_ui_xml_default_popup_xml_obj::__alloc(::hx::Ctx *_hx_ctx, ::Dynamic length,::Array< unsigned char > bytesData) {
	__ASSET__flixel_flixel_ui_xml_default_popup_xml_obj *__this = (__ASSET__flixel_flixel_ui_xml_default_popup_xml_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(__ASSET__flixel_flixel_ui_xml_default_popup_xml_obj), true, "__ASSET__flixel_flixel_ui_xml_default_popup_xml"));
	*(void **)__this = __ASSET__flixel_flixel_ui_xml_default_popup_xml_obj::_hx_vtable;
	__this->__construct(length,bytesData);
	return __this;
}

__ASSET__flixel_flixel_ui_xml_default_popup_xml_obj::__ASSET__flixel_flixel_ui_xml_default_popup_xml_obj()
{
}

bool __ASSET__flixel_flixel_ui_xml_default_popup_xml_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 12:
		if (HX_FIELD_EQ(inName,"resourceName") ) { outValue = ( resourceName ); return true; }
	}
	return false;
}

bool __ASSET__flixel_flixel_ui_xml_default_popup_xml_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 12:
		if (HX_FIELD_EQ(inName,"resourceName") ) { resourceName=ioValue.Cast< ::String >(); return true; }
	}
	return false;
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *__ASSET__flixel_flixel_ui_xml_default_popup_xml_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo __ASSET__flixel_flixel_ui_xml_default_popup_xml_obj_sStaticStorageInfo[] = {
	{::hx::fsString,(void *) &__ASSET__flixel_flixel_ui_xml_default_popup_xml_obj::resourceName,HX_("resourceName",39,7a,62,90)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static void __ASSET__flixel_flixel_ui_xml_default_popup_xml_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(__ASSET__flixel_flixel_ui_xml_default_popup_xml_obj::resourceName,"resourceName");
};

#ifdef HXCPP_VISIT_ALLOCS
static void __ASSET__flixel_flixel_ui_xml_default_popup_xml_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(__ASSET__flixel_flixel_ui_xml_default_popup_xml_obj::resourceName,"resourceName");
};

#endif

::hx::Class __ASSET__flixel_flixel_ui_xml_default_popup_xml_obj::__mClass;

static ::String __ASSET__flixel_flixel_ui_xml_default_popup_xml_obj_sStaticFields[] = {
	HX_("resourceName",39,7a,62,90),
	::String(null())
};

void __ASSET__flixel_flixel_ui_xml_default_popup_xml_obj::__register()
{
	__ASSET__flixel_flixel_ui_xml_default_popup_xml_obj _hx_dummy;
	__ASSET__flixel_flixel_ui_xml_default_popup_xml_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("__ASSET__flixel_flixel_ui_xml_default_popup_xml",e3,41,dd,c1);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &__ASSET__flixel_flixel_ui_xml_default_popup_xml_obj::__GetStatic;
	__mClass->mSetStaticField = &__ASSET__flixel_flixel_ui_xml_default_popup_xml_obj::__SetStatic;
	__mClass->mMarkFunc = __ASSET__flixel_flixel_ui_xml_default_popup_xml_obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(__ASSET__flixel_flixel_ui_xml_default_popup_xml_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = ::hx::TCanCast< __ASSET__flixel_flixel_ui_xml_default_popup_xml_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = __ASSET__flixel_flixel_ui_xml_default_popup_xml_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = __ASSET__flixel_flixel_ui_xml_default_popup_xml_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = __ASSET__flixel_flixel_ui_xml_default_popup_xml_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void __ASSET__flixel_flixel_ui_xml_default_popup_xml_obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_b2ac29e94b65edc3_1194_boot)
HXDLIN(1194)		resourceName = HX_("__ASSET__:file___ASSET__flixel_flixel_ui_xml_default_popup_xml",4a,b4,43,80);
            	}
}

