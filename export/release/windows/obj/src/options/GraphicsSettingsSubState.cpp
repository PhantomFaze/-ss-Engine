#include <hxcpp.h>

#ifndef INCLUDED_ClientPrefs
#include <ClientPrefs.h>
#endif
#ifndef INCLUDED_MusicBeatSubstate
#include <MusicBeatSubstate.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_flixel_FlxBasic
#include <flixel/FlxBasic.h>
#endif
#ifndef INCLUDED_flixel_FlxG
#include <flixel/FlxG.h>
#endif
#ifndef INCLUDED_flixel_FlxObject
#include <flixel/FlxObject.h>
#endif
#ifndef INCLUDED_flixel_FlxSprite
#include <flixel/FlxSprite.h>
#endif
#ifndef INCLUDED_flixel_FlxState
#include <flixel/FlxState.h>
#endif
#ifndef INCLUDED_flixel_FlxSubState
#include <flixel/FlxSubState.h>
#endif
#ifndef INCLUDED_flixel_group_FlxTypedGroup
#include <flixel/group/FlxTypedGroup.h>
#endif
#ifndef INCLUDED_flixel_text_FlxText
#include <flixel/text/FlxText.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_options_BaseOptionsMenu
#include <options/BaseOptionsMenu.h>
#endif
#ifndef INCLUDED_options_GraphicsSettingsSubState
#include <options/GraphicsSettingsSubState.h>
#endif
#ifndef INCLUDED_options_Option
#include <options/Option.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_0d30d54fdd7b0ca4_35_new,"options.GraphicsSettingsSubState","new",0x716f7b01,"options.GraphicsSettingsSubState.new","options/GraphicsSettingsSubState.hx",35,0x60b97b2e)
HX_LOCAL_STACK_FRAME(_hx_pos_0d30d54fdd7b0ca4_82_onChangeAntiAliasing,"options.GraphicsSettingsSubState","onChangeAntiAliasing",0x62f8a1e2,"options.GraphicsSettingsSubState.onChangeAntiAliasing","options/GraphicsSettingsSubState.hx",82,0x60b97b2e)
HX_LOCAL_STACK_FRAME(_hx_pos_0d30d54fdd7b0ca4_94_onChangeFramerate,"options.GraphicsSettingsSubState","onChangeFramerate",0x9c8ce9ff,"options.GraphicsSettingsSubState.onChangeFramerate","options/GraphicsSettingsSubState.hx",94,0x60b97b2e)
namespace options{

void GraphicsSettingsSubState_obj::__construct(){
            	HX_GC_STACKFRAME(&_hx_pos_0d30d54fdd7b0ca4_35_new)
HXLINE(  36)		this->title = HX_("Graphics",eb,b4,19,ec);
HXLINE(  37)		this->rpcTitle = HX_("Graphics Settings Menu",07,04,2c,0e);
HXLINE(  40)		 ::options::Option option =  ::options::Option_obj::__alloc( HX_CTX ,HX_("Low Quality",f3,10,75,e8),HX_("If checked, disables some background details,\ndecreases loading times and improves performance.",14,52,02,0c),HX_("lowQuality",8b,52,27,3e),HX_("bool",2a,84,1b,41),false,null());
HXLINE(  45)		this->addOption(option);
HXLINE(  47)		 ::options::Option option1 =  ::options::Option_obj::__alloc( HX_CTX ,HX_("Anti-Aliasing",9d,02,6c,80),HX_("If unchecked, disables anti-aliasing, increases performance\nat the cost of sharper visuals.",52,74,f6,10),HX_("globalAntialiasing",f7,9c,ed,4c),HX_("bool",2a,84,1b,41),true,null());
HXLINE(  52)		option1->showBoyfriend = true;
HXLINE(  53)		option1->onChange = this->onChangeAntiAliasing_dyn();
HXLINE(  54)		this->addOption(option1);
HXLINE(  56)		 ::options::Option option2 =  ::options::Option_obj::__alloc( HX_CTX ,HX_("Shaders",8e,a9,d7,2c),HX_("If unchecked, disables shaders.\nIt's used for some visual effects, and also CPU intensive for weaker PCs.",64,92,e2,47),HX_("shaders",ae,81,86,5f),HX_("bool",2a,84,1b,41),true,null());
HXLINE(  61)		this->addOption(option2);
HXLINE(  64)		 ::options::Option option3 =  ::options::Option_obj::__alloc( HX_CTX ,HX_("Framerate",6d,c5,1e,f0),HX_("Pretty self explanatory, isn't it?",b4,ed,8b,6f),HX_("framerate",8d,e5,4b,4e),HX_("int",ef,0c,50,00),60,null());
HXLINE(  69)		this->addOption(option3);
HXLINE(  71)		option3->minValue = 60;
HXLINE(  72)		option3->maxValue = 240;
HXLINE(  73)		option3->displayFormat = HX_("%v FPS",da,04,d9,d1);
HXLINE(  74)		option3->onChange = this->onChangeFramerate_dyn();
HXLINE(  77)		super::__construct();
            	}

Dynamic GraphicsSettingsSubState_obj::__CreateEmpty() { return new GraphicsSettingsSubState_obj; }

void *GraphicsSettingsSubState_obj::_hx_vtable = 0;

Dynamic GraphicsSettingsSubState_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< GraphicsSettingsSubState_obj > _hx_result = new GraphicsSettingsSubState_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool GraphicsSettingsSubState_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x776f905d) {
		if (inClassId<=(int)0x5661ffbf) {
			if (inClassId<=(int)0x0cc50116) {
				return inClassId==(int)0x00000001 || inClassId==(int)0x0cc50116;
			} else {
				return inClassId==(int)0x5661ffbf;
			}
		} else {
			return inClassId==(int)0x62817b24 || inClassId==(int)0x776f905d;
		}
	} else {
		if (inClassId<=(int)0x7ccf8994) {
			return inClassId==(int)0x7c795c9f || inClassId==(int)0x7ccf8994;
		} else {
			return inClassId==(int)0x7fce3ab0;
		}
	}
}

void GraphicsSettingsSubState_obj::onChangeAntiAliasing(){
            	HX_STACKFRAME(&_hx_pos_0d30d54fdd7b0ca4_82_onChangeAntiAliasing)
HXDLIN(  82)		int _g = 0;
HXDLIN(  82)		::Array< ::Dynamic> _g1 = this->members;
HXDLIN(  82)		while((_g < _g1->length)){
HXDLIN(  82)			 ::flixel::FlxBasic sprite = _g1->__get(_g).StaticCast<  ::flixel::FlxBasic >();
HXDLIN(  82)			_g = (_g + 1);
HXLINE(  84)			 ::Dynamic sprite1 = sprite;
HXLINE(  85)			 ::flixel::FlxSprite sprite2 = ( ( ::flixel::FlxSprite)(sprite1) );
HXLINE(  86)			bool _hx_tmp;
HXDLIN(  86)			bool _hx_tmp1;
HXDLIN(  86)			if (::hx::IsNotNull( sprite2 )) {
HXLINE(  86)				_hx_tmp1 = ::Std_obj::isOfType(sprite2,::hx::ClassOf< ::flixel::FlxSprite >());
            			}
            			else {
HXLINE(  86)				_hx_tmp1 = false;
            			}
HXDLIN(  86)			if (_hx_tmp1) {
HXLINE(  86)				_hx_tmp = !(::Std_obj::isOfType(sprite2,::hx::ClassOf< ::flixel::text::FlxText >()));
            			}
            			else {
HXLINE(  86)				_hx_tmp = false;
            			}
HXDLIN(  86)			if (_hx_tmp) {
HXLINE(  87)				sprite2->set_antialiasing(::ClientPrefs_obj::globalAntialiasing);
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(GraphicsSettingsSubState_obj,onChangeAntiAliasing,(void))

void GraphicsSettingsSubState_obj::onChangeFramerate(){
            	HX_STACKFRAME(&_hx_pos_0d30d54fdd7b0ca4_94_onChangeFramerate)
HXDLIN(  94)		if ((::ClientPrefs_obj::framerate > ::flixel::FlxG_obj::drawFramerate)) {
HXLINE(  96)			::flixel::FlxG_obj::set_updateFramerate(::ClientPrefs_obj::framerate);
HXLINE(  97)			::flixel::FlxG_obj::set_drawFramerate(::ClientPrefs_obj::framerate);
            		}
            		else {
HXLINE( 101)			::flixel::FlxG_obj::set_drawFramerate(::ClientPrefs_obj::framerate);
HXLINE( 102)			::flixel::FlxG_obj::set_updateFramerate(::ClientPrefs_obj::framerate);
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(GraphicsSettingsSubState_obj,onChangeFramerate,(void))


::hx::ObjectPtr< GraphicsSettingsSubState_obj > GraphicsSettingsSubState_obj::__new() {
	::hx::ObjectPtr< GraphicsSettingsSubState_obj > __this = new GraphicsSettingsSubState_obj();
	__this->__construct();
	return __this;
}

::hx::ObjectPtr< GraphicsSettingsSubState_obj > GraphicsSettingsSubState_obj::__alloc(::hx::Ctx *_hx_ctx) {
	GraphicsSettingsSubState_obj *__this = (GraphicsSettingsSubState_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(GraphicsSettingsSubState_obj), true, "options.GraphicsSettingsSubState"));
	*(void **)__this = GraphicsSettingsSubState_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

GraphicsSettingsSubState_obj::GraphicsSettingsSubState_obj()
{
}

::hx::Val GraphicsSettingsSubState_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 17:
		if (HX_FIELD_EQ(inName,"onChangeFramerate") ) { return ::hx::Val( onChangeFramerate_dyn() ); }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"onChangeAntiAliasing") ) { return ::hx::Val( onChangeAntiAliasing_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *GraphicsSettingsSubState_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *GraphicsSettingsSubState_obj_sStaticStorageInfo = 0;
#endif

static ::String GraphicsSettingsSubState_obj_sMemberFields[] = {
	HX_("onChangeAntiAliasing",a3,51,fa,d4),
	HX_("onChangeFramerate",9e,47,dc,c7),
	::String(null()) };

::hx::Class GraphicsSettingsSubState_obj::__mClass;

void GraphicsSettingsSubState_obj::__register()
{
	GraphicsSettingsSubState_obj _hx_dummy;
	GraphicsSettingsSubState_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("options.GraphicsSettingsSubState",8f,e6,7b,f9);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(GraphicsSettingsSubState_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< GraphicsSettingsSubState_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = GraphicsSettingsSubState_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = GraphicsSettingsSubState_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace options
