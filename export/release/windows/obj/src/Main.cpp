#include <hxcpp.h>

#ifndef INCLUDED_95f339a1d026d52c
#define INCLUDED_95f339a1d026d52c
#include "hxMath.h"
#endif
#ifndef INCLUDED_ClientPrefs
#include <ClientPrefs.h>
#endif
#ifndef INCLUDED_Date
#include <Date.h>
#endif
#ifndef INCLUDED_DiscordClient
#include <DiscordClient.h>
#endif
#ifndef INCLUDED_Main
#include <Main.h>
#endif
#ifndef INCLUDED_MusicBeatState
#include <MusicBeatState.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_StringTools
#include <StringTools.h>
#endif
#ifndef INCLUDED_Sys
#include <Sys.h>
#endif
#ifndef INCLUDED_TitleState
#include <TitleState.h>
#endif
#ifndef INCLUDED_flixel_FlxBasic
#include <flixel/FlxBasic.h>
#endif
#ifndef INCLUDED_flixel_FlxGame
#include <flixel/FlxGame.h>
#endif
#ifndef INCLUDED_flixel_FlxState
#include <flixel/FlxState.h>
#endif
#ifndef INCLUDED_flixel_addons_transition_FlxTransitionableState
#include <flixel/addons/transition/FlxTransitionableState.h>
#endif
#ifndef INCLUDED_flixel_addons_ui_FlxUIState
#include <flixel/addons/ui/FlxUIState.h>
#endif
#ifndef INCLUDED_flixel_addons_ui_interfaces_IEventGetter
#include <flixel/addons/ui/interfaces/IEventGetter.h>
#endif
#ifndef INCLUDED_flixel_addons_ui_interfaces_IFlxUIState
#include <flixel/addons/ui/interfaces/IFlxUIState.h>
#endif
#ifndef INCLUDED_flixel_group_FlxTypedGroup
#include <flixel/group/FlxTypedGroup.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_haxe_StackItem
#include <haxe/StackItem.h>
#endif
#ifndef INCLUDED_haxe__CallStack_CallStack_Impl_
#include <haxe/_CallStack/CallStack_Impl_.h>
#endif
#ifndef INCLUDED_haxe_io_Path
#include <haxe/io/Path.h>
#endif
#ifndef INCLUDED_lime_app_Application
#include <lime/app/Application.h>
#endif
#ifndef INCLUDED_lime_app_IModule
#include <lime/app/IModule.h>
#endif
#ifndef INCLUDED_lime_app_Module
#include <lime/app/Module.h>
#endif
#ifndef INCLUDED_lime_ui_Window
#include <lime/ui/Window.h>
#endif
#ifndef INCLUDED_openfl_Lib
#include <openfl/Lib.h>
#endif
#ifndef INCLUDED_openfl_display_DisplayObject
#include <openfl/display/DisplayObject.h>
#endif
#ifndef INCLUDED_openfl_display_DisplayObjectContainer
#include <openfl/display/DisplayObjectContainer.h>
#endif
#ifndef INCLUDED_openfl_display_FPS
#include <openfl/display/FPS.h>
#endif
#ifndef INCLUDED_openfl_display_IBitmapDrawable
#include <openfl/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_openfl_display_InteractiveObject
#include <openfl/display/InteractiveObject.h>
#endif
#ifndef INCLUDED_openfl_display_LoaderInfo
#include <openfl/display/LoaderInfo.h>
#endif
#ifndef INCLUDED_openfl_display_MovieClip
#include <openfl/display/MovieClip.h>
#endif
#ifndef INCLUDED_openfl_display_Sprite
#include <openfl/display/Sprite.h>
#endif
#ifndef INCLUDED_openfl_display_Stage
#include <openfl/display/Stage.h>
#endif
#ifndef INCLUDED_openfl_display__StageAlign_StageAlign_Impl_
#include <openfl/display/_StageAlign/StageAlign_Impl_.h>
#endif
#ifndef INCLUDED_openfl_events_ErrorEvent
#include <openfl/events/ErrorEvent.h>
#endif
#ifndef INCLUDED_openfl_events_Event
#include <openfl/events/Event.h>
#endif
#ifndef INCLUDED_openfl_events_EventDispatcher
#include <openfl/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_events_IEventDispatcher
#include <openfl/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_events_TextEvent
#include <openfl/events/TextEvent.h>
#endif
#ifndef INCLUDED_openfl_events_UncaughtErrorEvent
#include <openfl/events/UncaughtErrorEvent.h>
#endif
#ifndef INCLUDED_openfl_events_UncaughtErrorEvents
#include <openfl/events/UncaughtErrorEvents.h>
#endif
#ifndef INCLUDED_openfl_text_TextField
#include <openfl/text/TextField.h>
#endif
#ifndef INCLUDED_sys_FileSystem
#include <sys/FileSystem.h>
#endif
#ifndef INCLUDED_sys_io_File
#include <sys/io/File.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_e47a9afac0942eb9_28_new,"Main","new",0x6616a5cb,"Main.new","Main.hx",28,0x087e5c05)
HX_LOCAL_STACK_FRAME(_hx_pos_e47a9afac0942eb9_61_init,"Main","init",0xea732345,"Main.init","Main.hx",61,0x087e5c05)
HX_LOCAL_STACK_FRAME(_hx_pos_e47a9afac0942eb9_71_setupGame,"Main","setupGame",0x7f7688ba,"Main.setupGame","Main.hx",71,0x087e5c05)
HX_LOCAL_STACK_FRAME(_hx_pos_e47a9afac0942eb9_111_onCrash,"Main","onCrash",0x46bec533,"Main.onCrash","Main.hx",111,0x087e5c05)
HX_LOCAL_STACK_FRAME(_hx_pos_e47a9afac0942eb9_43_main,"Main","main",0xed0e206e,"Main.main","Main.hx",43,0x087e5c05)

void Main_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_e47a9afac0942eb9_28_new)
HXLINE(  36)		this->startFullscreen = false;
HXLINE(  35)		this->skipSplash = true;
HXLINE(  34)		this->framerate = 60;
HXLINE(  33)		this->zoom = ((Float)-1);
HXLINE(  32)		this->initialState = ::hx::ClassOf< ::TitleState >();
HXLINE(  31)		this->gameHeight = 720;
HXLINE(  30)		this->gameWidth = 1280;
HXLINE(  48)		super::__construct();
HXLINE(  50)		if (::hx::IsNotNull( this->stage )) {
HXLINE(  52)			this->init(null());
            		}
            		else {
HXLINE(  56)			this->addEventListener(HX_("addedToStage",63,22,55,0c),this->init_dyn(),null(),null(),null());
            		}
            	}

Dynamic Main_obj::__CreateEmpty() { return new Main_obj; }

void *Main_obj::_hx_vtable = 0;

Dynamic Main_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< Main_obj > _hx_result = new Main_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool Main_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x0c89e854) {
		if (inClassId<=(int)0x07825a7d) {
			if (inClassId<=(int)0x0330636f) {
				return inClassId==(int)0x00000001 || inClassId==(int)0x0330636f;
			} else {
				return inClassId==(int)0x07825a7d;
			}
		} else {
			return inClassId==(int)0x0c89e854;
		}
	} else {
		if (inClassId<=(int)0x4af7dd8e) {
			return inClassId==(int)0x1f4df417 || inClassId==(int)0x4af7dd8e;
		} else {
			return inClassId==(int)0x6b353933;
		}
	}
}

void Main_obj::init( ::openfl::events::Event E){
            	HX_STACKFRAME(&_hx_pos_e47a9afac0942eb9_61_init)
HXLINE(  62)		if (this->hasEventListener(HX_("addedToStage",63,22,55,0c))) {
HXLINE(  64)			this->removeEventListener(HX_("addedToStage",63,22,55,0c),this->init_dyn(),null());
            		}
HXLINE(  67)		this->setupGame();
            	}


HX_DEFINE_DYNAMIC_FUNC1(Main_obj,init,(void))

void Main_obj::setupGame(){
            	HX_GC_STACKFRAME(&_hx_pos_e47a9afac0942eb9_71_setupGame)
HXLINE(  72)		int stageWidth = ::openfl::Lib_obj::get_current()->stage->stageWidth;
HXLINE(  73)		int stageHeight = ::openfl::Lib_obj::get_current()->stage->stageHeight;
HXLINE(  75)		if ((this->zoom == -1)) {
HXLINE(  77)			Float ratioX = (( (Float)(stageWidth) ) / ( (Float)(this->gameWidth) ));
HXLINE(  78)			Float ratioY = (( (Float)(stageHeight) ) / ( (Float)(this->gameHeight) ));
HXLINE(  79)			this->zoom = ::Math_obj::min(ratioX,ratioY);
HXLINE(  80)			this->gameWidth = ::Math_obj::ceil((( (Float)(stageWidth) ) / this->zoom));
HXLINE(  81)			this->gameHeight = ::Math_obj::ceil((( (Float)(stageHeight) ) / this->zoom));
            		}
HXLINE(  84)		::ClientPrefs_obj::loadDefaultKeys();
HXLINE(  85)		this->addChild( ::flixel::FlxGame_obj::__alloc( HX_CTX ,this->gameWidth,this->gameHeight,this->initialState,this->zoom,this->framerate,this->framerate,this->skipSplash,this->startFullscreen));
HXLINE(  88)		::Main_obj::fpsVar =  ::openfl::display::FPS_obj::__alloc( HX_CTX ,10,3,16777215);
HXLINE(  89)		this->addChild(::Main_obj::fpsVar);
HXLINE(  90)		::openfl::Lib_obj::get_current()->stage->align = ::openfl::display::_StageAlign::StageAlign_Impl__obj::fromString(HX_("tl",78,65,00,00));
HXLINE(  91)		::openfl::Lib_obj::get_current()->stage->set_scaleMode(2);
HXLINE(  92)		if (::hx::IsNotNull( ::Main_obj::fpsVar )) {
HXLINE(  93)			::Main_obj::fpsVar->set_visible(::ClientPrefs_obj::showFPS);
            		}
HXLINE( 103)		::openfl::Lib_obj::get_current()->get_loaderInfo()->uncaughtErrorEvents->addEventListener(HX_("uncaughtError",f3,98,8b,8b),this->onCrash_dyn(),null(),null(),null());
            	}


HX_DEFINE_DYNAMIC_FUNC0(Main_obj,setupGame,(void))

void Main_obj::onCrash( ::openfl::events::UncaughtErrorEvent e){
            	HX_STACKFRAME(&_hx_pos_e47a9afac0942eb9_111_onCrash)
HXLINE( 112)		::String errMsg = HX_("",00,00,00,00);
HXLINE( 114)		::Array< ::Dynamic> callStack = ::haxe::_CallStack::CallStack_Impl__obj::exceptionStack(true);
HXLINE( 115)		::String dateNow = ::Date_obj::now()->toString();
HXLINE( 117)		dateNow = ::StringTools_obj::replace(dateNow,HX_(" ",20,00,00,00),HX_("_",5f,00,00,00));
HXLINE( 118)		dateNow = ::StringTools_obj::replace(dateNow,HX_(":",3a,00,00,00),HX_("'",27,00,00,00));
HXLINE( 113)		::String path = (((HX_("./crash/",69,79,f9,62) + HX_("PsychEngine_",82,ba,54,e7)) + dateNow) + HX_(".txt",02,3f,c0,1e));
HXLINE( 122)		{
HXLINE( 122)			int _g = 0;
HXDLIN( 122)			while((_g < callStack->length)){
HXLINE( 122)				 ::haxe::StackItem stackItem = callStack->__get(_g).StaticCast<  ::haxe::StackItem >();
HXDLIN( 122)				_g = (_g + 1);
HXLINE( 124)				if ((stackItem->_hx_getIndex() == 2)) {
HXLINE( 126)					 ::haxe::StackItem s = stackItem->_hx_getObject(0).StaticCast<  ::haxe::StackItem >();
HXDLIN( 126)					::String file = stackItem->_hx_getString(1);
HXDLIN( 126)					int line = stackItem->_hx_getInt(2);
HXDLIN( 126)					 ::Dynamic column = stackItem->_hx_getObject(3);
HXLINE( 127)					errMsg = (errMsg + (((file + HX_(" (line ",a4,24,f7,a5)) + line) + HX_(")\n",c1,23,00,00)));
            				}
            				else {
HXLINE( 129)					::Sys_obj::println(stackItem);
            				}
            			}
            		}
HXLINE( 133)		errMsg = (errMsg + ((HX_("\nUncaught Error: ",ed,bf,e1,72) + ::Std_obj::string(e->error)) + HX_("\nPlease report this error to the GitHub page: https://github.com/ShadowMario/FNF-PsychEngine\n\n> Crash Handler written by: sqirra-rng",3c,20,3f,85)));
HXLINE( 135)		if (!(::sys::FileSystem_obj::exists(HX_("./crash/",69,79,f9,62)))) {
HXLINE( 136)			::sys::FileSystem_obj::createDirectory(HX_("./crash/",69,79,f9,62));
            		}
HXLINE( 138)		::sys::io::File_obj::saveContent(path,(errMsg + HX_("\n",0a,00,00,00)));
HXLINE( 140)		::Sys_obj::println(errMsg);
HXLINE( 141)		::Sys_obj::println((HX_("Crash dump saved in ",cf,9c,69,5d) + ::haxe::io::Path_obj::normalize(path)));
HXLINE( 143)		::lime::app::Application_obj::current->_hx___window->alert(errMsg,HX_("Error!",79,f7,fc,85));
HXLINE( 144)		::DiscordClient_obj::shutdown();
HXLINE( 145)		::Sys_obj::exit(1);
            	}


HX_DEFINE_DYNAMIC_FUNC1(Main_obj,onCrash,(void))

 ::openfl::display::FPS Main_obj::fpsVar;

void Main_obj::main(){
            	HX_GC_STACKFRAME(&_hx_pos_e47a9afac0942eb9_43_main)
HXDLIN(  43)		 ::openfl::display::MovieClip _hx_tmp = ::openfl::Lib_obj::get_current();
HXDLIN(  43)		_hx_tmp->addChild( ::Main_obj::__alloc( HX_CTX ));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Main_obj,main,(void))


::hx::ObjectPtr< Main_obj > Main_obj::__new() {
	::hx::ObjectPtr< Main_obj > __this = new Main_obj();
	__this->__construct();
	return __this;
}

::hx::ObjectPtr< Main_obj > Main_obj::__alloc(::hx::Ctx *_hx_ctx) {
	Main_obj *__this = (Main_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(Main_obj), true, "Main"));
	*(void **)__this = Main_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

Main_obj::Main_obj()
{
}

void Main_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Main);
	HX_MARK_MEMBER_NAME(gameWidth,"gameWidth");
	HX_MARK_MEMBER_NAME(gameHeight,"gameHeight");
	HX_MARK_MEMBER_NAME(initialState,"initialState");
	HX_MARK_MEMBER_NAME(zoom,"zoom");
	HX_MARK_MEMBER_NAME(framerate,"framerate");
	HX_MARK_MEMBER_NAME(skipSplash,"skipSplash");
	HX_MARK_MEMBER_NAME(startFullscreen,"startFullscreen");
	 ::openfl::display::Sprite_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void Main_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(gameWidth,"gameWidth");
	HX_VISIT_MEMBER_NAME(gameHeight,"gameHeight");
	HX_VISIT_MEMBER_NAME(initialState,"initialState");
	HX_VISIT_MEMBER_NAME(zoom,"zoom");
	HX_VISIT_MEMBER_NAME(framerate,"framerate");
	HX_VISIT_MEMBER_NAME(skipSplash,"skipSplash");
	HX_VISIT_MEMBER_NAME(startFullscreen,"startFullscreen");
	 ::openfl::display::Sprite_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val Main_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"zoom") ) { return ::hx::Val( zoom ); }
		if (HX_FIELD_EQ(inName,"init") ) { return ::hx::Val( init_dyn() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"onCrash") ) { return ::hx::Val( onCrash_dyn() ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"gameWidth") ) { return ::hx::Val( gameWidth ); }
		if (HX_FIELD_EQ(inName,"framerate") ) { return ::hx::Val( framerate ); }
		if (HX_FIELD_EQ(inName,"setupGame") ) { return ::hx::Val( setupGame_dyn() ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"gameHeight") ) { return ::hx::Val( gameHeight ); }
		if (HX_FIELD_EQ(inName,"skipSplash") ) { return ::hx::Val( skipSplash ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"initialState") ) { return ::hx::Val( initialState ); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"startFullscreen") ) { return ::hx::Val( startFullscreen ); }
	}
	return super::__Field(inName,inCallProp);
}

bool Main_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"main") ) { outValue = main_dyn(); return true; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"fpsVar") ) { outValue = ( fpsVar ); return true; }
	}
	return false;
}

::hx::Val Main_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"zoom") ) { zoom=inValue.Cast< Float >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"gameWidth") ) { gameWidth=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"framerate") ) { framerate=inValue.Cast< int >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"gameHeight") ) { gameHeight=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"skipSplash") ) { skipSplash=inValue.Cast< bool >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"initialState") ) { initialState=inValue.Cast< ::hx::Class >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"startFullscreen") ) { startFullscreen=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool Main_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"fpsVar") ) { fpsVar=ioValue.Cast<  ::openfl::display::FPS >(); return true; }
	}
	return false;
}

void Main_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("gameWidth",b4,a4,7d,ff));
	outFields->push(HX_("gameHeight",79,f1,c1,44));
	outFields->push(HX_("initialState",ed,76,1b,48));
	outFields->push(HX_("zoom",13,a3,f8,50));
	outFields->push(HX_("framerate",8d,e5,4b,4e));
	outFields->push(HX_("skipSplash",46,75,9c,27));
	outFields->push(HX_("startFullscreen",3d,c1,ee,2d));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo Main_obj_sMemberStorageInfo[] = {
	{::hx::fsInt,(int)offsetof(Main_obj,gameWidth),HX_("gameWidth",b4,a4,7d,ff)},
	{::hx::fsInt,(int)offsetof(Main_obj,gameHeight),HX_("gameHeight",79,f1,c1,44)},
	{::hx::fsObject /* ::hx::Class */ ,(int)offsetof(Main_obj,initialState),HX_("initialState",ed,76,1b,48)},
	{::hx::fsFloat,(int)offsetof(Main_obj,zoom),HX_("zoom",13,a3,f8,50)},
	{::hx::fsInt,(int)offsetof(Main_obj,framerate),HX_("framerate",8d,e5,4b,4e)},
	{::hx::fsBool,(int)offsetof(Main_obj,skipSplash),HX_("skipSplash",46,75,9c,27)},
	{::hx::fsBool,(int)offsetof(Main_obj,startFullscreen),HX_("startFullscreen",3d,c1,ee,2d)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo Main_obj_sStaticStorageInfo[] = {
	{::hx::fsObject /*  ::openfl::display::FPS */ ,(void *) &Main_obj::fpsVar,HX_("fpsVar",7e,e6,8c,91)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static ::String Main_obj_sMemberFields[] = {
	HX_("gameWidth",b4,a4,7d,ff),
	HX_("gameHeight",79,f1,c1,44),
	HX_("initialState",ed,76,1b,48),
	HX_("zoom",13,a3,f8,50),
	HX_("framerate",8d,e5,4b,4e),
	HX_("skipSplash",46,75,9c,27),
	HX_("startFullscreen",3d,c1,ee,2d),
	HX_("init",10,3b,bb,45),
	HX_("setupGame",0f,51,ed,9e),
	HX_("onCrash",48,5e,8d,e2),
	::String(null()) };

static void Main_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Main_obj::fpsVar,"fpsVar");
};

#ifdef HXCPP_VISIT_ALLOCS
static void Main_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Main_obj::fpsVar,"fpsVar");
};

#endif

::hx::Class Main_obj::__mClass;

static ::String Main_obj_sStaticFields[] = {
	HX_("fpsVar",7e,e6,8c,91),
	HX_("main",39,38,56,48),
	::String(null())
};

void Main_obj::__register()
{
	Main_obj _hx_dummy;
	Main_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("Main",59,64,2f,33);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Main_obj::__GetStatic;
	__mClass->mSetStaticField = &Main_obj::__SetStatic;
	__mClass->mMarkFunc = Main_obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(Main_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(Main_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< Main_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = Main_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Main_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Main_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

