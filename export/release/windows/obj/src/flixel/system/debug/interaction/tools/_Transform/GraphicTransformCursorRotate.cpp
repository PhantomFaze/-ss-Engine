#include <hxcpp.h>

#ifndef INCLUDED_flixel_system_debug_interaction_tools__Transform_GraphicTransformCursorRotate
#include <flixel/system/debug/interaction/tools/_Transform/GraphicTransformCursorRotate.h>
#endif
#ifndef INCLUDED_haxe_Resource
#include <haxe/Resource.h>
#endif
#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
#endif
#ifndef INCLUDED_lime_graphics_Image
#include <lime/graphics/Image.h>
#endif
#ifndef INCLUDED_openfl_display_BitmapData
#include <openfl/display/BitmapData.h>
#endif
#ifndef INCLUDED_openfl_display_IBitmapDrawable
#include <openfl/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_openfl_utils_ByteArrayData
#include <openfl/utils/ByteArrayData.h>
#endif
#ifndef INCLUDED_openfl_utils_IDataInput
#include <openfl/utils/IDataInput.h>
#endif
#ifndef INCLUDED_openfl_utils_IDataOutput
#include <openfl/utils/IDataOutput.h>
#endif
#ifndef INCLUDED_openfl_utils__ByteArray_ByteArray_Impl_
#include <openfl/utils/_ByteArray/ByteArray_Impl_.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_6ff906db8ca9ad6d_47_new,"flixel.system.debug.interaction.tools._Transform.GraphicTransformCursorRotate","new",0xea64a7b1,"flixel.system.debug.interaction.tools._Transform.GraphicTransformCursorRotate.new","openfl/utils/_internal/AssetsMacro.hx",47,0xfdd54705)
HX_LOCAL_STACK_FRAME(_hx_pos_db69ad0c1f711ca0_34_boot,"flixel.system.debug.interaction.tools._Transform.GraphicTransformCursorRotate","boot",0x25c713c1,"flixel.system.debug.interaction.tools._Transform.GraphicTransformCursorRotate.boot","flixel/system/debug/interaction/tools/Transform.hx",34,0xb006466c)
namespace flixel{
namespace _hx_system{
namespace debug{
namespace interaction{
namespace tools{
namespace _Transform{

void GraphicTransformCursorRotate_obj::__construct(int width,int height, ::Dynamic __o_transparent, ::Dynamic __o_fillRGBA){
            		 ::Dynamic transparent = __o_transparent;
            		if (::hx::IsNull(__o_transparent)) transparent = true;
            		 ::Dynamic fillRGBA = __o_fillRGBA;
            		if (::hx::IsNull(__o_fillRGBA)) fillRGBA = -1;
            	HX_STACKFRAME(&_hx_pos_6ff906db8ca9ad6d_47_new)
HXLINE(  71)		super::__construct(0,0,transparent,fillRGBA);
HXLINE(  73)		 ::openfl::utils::ByteArrayData byteArray = ::openfl::utils::_ByteArray::ByteArray_Impl__obj::fromBytes(::haxe::Resource_obj::getBytes(::flixel::_hx_system::debug::interaction::tools::_Transform::GraphicTransformCursorRotate_obj::resourceName));
HXLINE(  74)		{
HXLINE(  74)			 ::openfl::utils::ByteArrayData rawAlpha = null();
HXDLIN(  74)			 ::lime::graphics::Image image = ::lime::graphics::Image_obj::fromBytes(::openfl::utils::_ByteArray::ByteArray_Impl__obj::toBytes(byteArray));
HXDLIN(  74)			this->_hx___fromImage(image);
HXDLIN(  74)			if (::hx::IsNotNull( rawAlpha )) {
HXLINE(  74)				this->_hx___applyAlpha(rawAlpha);
            			}
            		}
            	}

Dynamic GraphicTransformCursorRotate_obj::__CreateEmpty() { return new GraphicTransformCursorRotate_obj; }

void *GraphicTransformCursorRotate_obj::_hx_vtable = 0;

Dynamic GraphicTransformCursorRotate_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< GraphicTransformCursorRotate_obj > _hx_result = new GraphicTransformCursorRotate_obj();
	_hx_result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3]);
	return _hx_result;
}

bool GraphicTransformCursorRotate_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x073e5103) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x073e5103;
	} else {
		return inClassId==(int)0x4d9d580f;
	}
}

::String GraphicTransformCursorRotate_obj::resourceName;


::hx::ObjectPtr< GraphicTransformCursorRotate_obj > GraphicTransformCursorRotate_obj::__new(int width,int height, ::Dynamic __o_transparent, ::Dynamic __o_fillRGBA) {
	::hx::ObjectPtr< GraphicTransformCursorRotate_obj > __this = new GraphicTransformCursorRotate_obj();
	__this->__construct(width,height,__o_transparent,__o_fillRGBA);
	return __this;
}

::hx::ObjectPtr< GraphicTransformCursorRotate_obj > GraphicTransformCursorRotate_obj::__alloc(::hx::Ctx *_hx_ctx,int width,int height, ::Dynamic __o_transparent, ::Dynamic __o_fillRGBA) {
	GraphicTransformCursorRotate_obj *__this = (GraphicTransformCursorRotate_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(GraphicTransformCursorRotate_obj), true, "flixel.system.debug.interaction.tools._Transform.GraphicTransformCursorRotate"));
	*(void **)__this = GraphicTransformCursorRotate_obj::_hx_vtable;
	__this->__construct(width,height,__o_transparent,__o_fillRGBA);
	return __this;
}

GraphicTransformCursorRotate_obj::GraphicTransformCursorRotate_obj()
{
}

bool GraphicTransformCursorRotate_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 12:
		if (HX_FIELD_EQ(inName,"resourceName") ) { outValue = ( resourceName ); return true; }
	}
	return false;
}

bool GraphicTransformCursorRotate_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 12:
		if (HX_FIELD_EQ(inName,"resourceName") ) { resourceName=ioValue.Cast< ::String >(); return true; }
	}
	return false;
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *GraphicTransformCursorRotate_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo GraphicTransformCursorRotate_obj_sStaticStorageInfo[] = {
	{::hx::fsString,(void *) &GraphicTransformCursorRotate_obj::resourceName,HX_("resourceName",39,7a,62,90)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static void GraphicTransformCursorRotate_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(GraphicTransformCursorRotate_obj::resourceName,"resourceName");
};

#ifdef HXCPP_VISIT_ALLOCS
static void GraphicTransformCursorRotate_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(GraphicTransformCursorRotate_obj::resourceName,"resourceName");
};

#endif

::hx::Class GraphicTransformCursorRotate_obj::__mClass;

static ::String GraphicTransformCursorRotate_obj_sStaticFields[] = {
	HX_("resourceName",39,7a,62,90),
	::String(null())
};

void GraphicTransformCursorRotate_obj::__register()
{
	GraphicTransformCursorRotate_obj _hx_dummy;
	GraphicTransformCursorRotate_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("flixel.system.debug.interaction.tools._Transform.GraphicTransformCursorRotate",3f,fb,d0,c9);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &GraphicTransformCursorRotate_obj::__GetStatic;
	__mClass->mSetStaticField = &GraphicTransformCursorRotate_obj::__SetStatic;
	__mClass->mMarkFunc = GraphicTransformCursorRotate_obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(GraphicTransformCursorRotate_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = ::hx::TCanCast< GraphicTransformCursorRotate_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = GraphicTransformCursorRotate_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = GraphicTransformCursorRotate_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = GraphicTransformCursorRotate_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void GraphicTransformCursorRotate_obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_db69ad0c1f711ca0_34_boot)
HXDLIN(  34)		resourceName = HX_("__ASSET__:bitmap_flixel_system_debug_interaction_tools__Transform_GraphicTransformCursorRotate",77,c1,65,97);
            	}
}

} // end namespace flixel
} // end namespace system
} // end namespace debug
} // end namespace interaction
} // end namespace tools
} // end namespace _Transform
