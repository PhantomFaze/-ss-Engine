#include <hxcpp.h>

#ifndef INCLUDED_flixel_addons_effects_chainable_FlxWaveDirection
#include <flixel/addons/effects/chainable/FlxWaveDirection.h>
#endif
namespace flixel{
namespace addons{
namespace effects{
namespace chainable{

::flixel::addons::effects::chainable::FlxWaveDirection FlxWaveDirection_obj::HORIZONTAL;

::flixel::addons::effects::chainable::FlxWaveDirection FlxWaveDirection_obj::VERTICAL;

bool FlxWaveDirection_obj::__GetStatic(const ::String &inName, ::Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	if (inName==HX_("HORIZONTAL",e4,70,cd,07)) { outValue = FlxWaveDirection_obj::HORIZONTAL; return true; }
	if (inName==HX_("VERTICAL",76,4c,9b,c3)) { outValue = FlxWaveDirection_obj::VERTICAL; return true; }
	return super::__GetStatic(inName, outValue, inCallProp);
}

HX_DEFINE_CREATE_ENUM(FlxWaveDirection_obj)

int FlxWaveDirection_obj::__FindIndex(::String inName)
{
	if (inName==HX_("HORIZONTAL",e4,70,cd,07)) return 0;
	if (inName==HX_("VERTICAL",76,4c,9b,c3)) return 1;
	return super::__FindIndex(inName);
}

int FlxWaveDirection_obj::__FindArgCount(::String inName)
{
	if (inName==HX_("HORIZONTAL",e4,70,cd,07)) return 0;
	if (inName==HX_("VERTICAL",76,4c,9b,c3)) return 0;
	return super::__FindArgCount(inName);
}

::hx::Val FlxWaveDirection_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	if (inName==HX_("HORIZONTAL",e4,70,cd,07)) return HORIZONTAL;
	if (inName==HX_("VERTICAL",76,4c,9b,c3)) return VERTICAL;
	return super::__Field(inName,inCallProp);
}

static ::String FlxWaveDirection_obj_sStaticFields[] = {
	HX_("HORIZONTAL",e4,70,cd,07),
	HX_("VERTICAL",76,4c,9b,c3),
	::String(null())
};

::hx::Class FlxWaveDirection_obj::__mClass;

Dynamic __Create_FlxWaveDirection_obj() { return new FlxWaveDirection_obj; }

void FlxWaveDirection_obj::__register()
{

::hx::Static(__mClass) = ::hx::_hx_RegisterClass(HX_("flixel.addons.effects.chainable.FlxWaveDirection",7c,92,bb,6f), ::hx::TCanCast< FlxWaveDirection_obj >,FlxWaveDirection_obj_sStaticFields,0,
	&__Create_FlxWaveDirection_obj, &__Create,
	&super::__SGetClass(), &CreateFlxWaveDirection_obj, 0
#ifdef HXCPP_VISIT_ALLOCS
    , 0
#endif
#ifdef HXCPP_SCRIPTABLE
    , 0
#endif
);
	__mClass->mGetStaticField = &FlxWaveDirection_obj::__GetStatic;
}

void FlxWaveDirection_obj::__boot()
{
HORIZONTAL = ::hx::CreateConstEnum< FlxWaveDirection_obj >(HX_("HORIZONTAL",e4,70,cd,07),0);
VERTICAL = ::hx::CreateConstEnum< FlxWaveDirection_obj >(HX_("VERTICAL",76,4c,9b,c3),1);
}


} // end namespace flixel
} // end namespace addons
} // end namespace effects
} // end namespace chainable
