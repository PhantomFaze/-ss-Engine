#include <hxcpp.h>

#ifndef INCLUDED_lime_ui_FileDialogType
#include <lime/ui/FileDialogType.h>
#endif
namespace lime{
namespace ui{

::lime::ui::FileDialogType FileDialogType_obj::OPEN;

::lime::ui::FileDialogType FileDialogType_obj::OPEN_DIRECTORY;

::lime::ui::FileDialogType FileDialogType_obj::OPEN_MULTIPLE;

::lime::ui::FileDialogType FileDialogType_obj::SAVE;

bool FileDialogType_obj::__GetStatic(const ::String &inName, ::Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	if (inName==HX_("OPEN",ca,cb,74,34)) { outValue = FileDialogType_obj::OPEN; return true; }
	if (inName==HX_("OPEN_DIRECTORY",58,0a,41,43)) { outValue = FileDialogType_obj::OPEN_DIRECTORY; return true; }
	if (inName==HX_("OPEN_MULTIPLE",65,d4,84,a0)) { outValue = FileDialogType_obj::OPEN_MULTIPLE; return true; }
	if (inName==HX_("SAVE",3d,53,0e,37)) { outValue = FileDialogType_obj::SAVE; return true; }
	return super::__GetStatic(inName, outValue, inCallProp);
}

HX_DEFINE_CREATE_ENUM(FileDialogType_obj)

int FileDialogType_obj::__FindIndex(::String inName)
{
	if (inName==HX_("OPEN",ca,cb,74,34)) return 0;
	if (inName==HX_("OPEN_DIRECTORY",58,0a,41,43)) return 3;
	if (inName==HX_("OPEN_MULTIPLE",65,d4,84,a0)) return 1;
	if (inName==HX_("SAVE",3d,53,0e,37)) return 2;
	return super::__FindIndex(inName);
}

int FileDialogType_obj::__FindArgCount(::String inName)
{
	if (inName==HX_("OPEN",ca,cb,74,34)) return 0;
	if (inName==HX_("OPEN_DIRECTORY",58,0a,41,43)) return 0;
	if (inName==HX_("OPEN_MULTIPLE",65,d4,84,a0)) return 0;
	if (inName==HX_("SAVE",3d,53,0e,37)) return 0;
	return super::__FindArgCount(inName);
}

::hx::Val FileDialogType_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	if (inName==HX_("OPEN",ca,cb,74,34)) return OPEN;
	if (inName==HX_("OPEN_DIRECTORY",58,0a,41,43)) return OPEN_DIRECTORY;
	if (inName==HX_("OPEN_MULTIPLE",65,d4,84,a0)) return OPEN_MULTIPLE;
	if (inName==HX_("SAVE",3d,53,0e,37)) return SAVE;
	return super::__Field(inName,inCallProp);
}

static ::String FileDialogType_obj_sStaticFields[] = {
	HX_("OPEN",ca,cb,74,34),
	HX_("OPEN_MULTIPLE",65,d4,84,a0),
	HX_("SAVE",3d,53,0e,37),
	HX_("OPEN_DIRECTORY",58,0a,41,43),
	::String(null())
};

::hx::Class FileDialogType_obj::__mClass;

Dynamic __Create_FileDialogType_obj() { return new FileDialogType_obj; }

void FileDialogType_obj::__register()
{

::hx::Static(__mClass) = ::hx::_hx_RegisterClass(HX_("lime.ui.FileDialogType",9f,fa,49,8a), ::hx::TCanCast< FileDialogType_obj >,FileDialogType_obj_sStaticFields,0,
	&__Create_FileDialogType_obj, &__Create,
	&super::__SGetClass(), &CreateFileDialogType_obj, 0
#ifdef HXCPP_VISIT_ALLOCS
    , 0
#endif
#ifdef HXCPP_SCRIPTABLE
    , 0
#endif
);
	__mClass->mGetStaticField = &FileDialogType_obj::__GetStatic;
}

void FileDialogType_obj::__boot()
{
OPEN = ::hx::CreateConstEnum< FileDialogType_obj >(HX_("OPEN",ca,cb,74,34),0);
OPEN_DIRECTORY = ::hx::CreateConstEnum< FileDialogType_obj >(HX_("OPEN_DIRECTORY",58,0a,41,43),3);
OPEN_MULTIPLE = ::hx::CreateConstEnum< FileDialogType_obj >(HX_("OPEN_MULTIPLE",65,d4,84,a0),1);
SAVE = ::hx::CreateConstEnum< FileDialogType_obj >(HX_("SAVE",3d,53,0e,37),2);
}


} // end namespace lime
} // end namespace ui
