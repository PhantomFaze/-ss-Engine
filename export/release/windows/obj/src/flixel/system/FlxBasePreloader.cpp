#include <hxcpp.h>

#ifndef INCLUDED_Date
#include <Date.h>
#endif
#ifndef INCLUDED_Type
#include <Type.h>
#endif
#ifndef INCLUDED_flixel_system_FlxBasePreloader
#include <flixel/system/FlxBasePreloader.h>
#endif
#ifndef INCLUDED_flixel_system__FlxBasePreloader_DefaultPreloader
#include <flixel/system/_FlxBasePreloader/DefaultPreloader.h>
#endif
#ifndef INCLUDED_lime_app_IModule
#include <lime/app/IModule.h>
#endif
#ifndef INCLUDED_openfl_Lib
#include <openfl/Lib.h>
#endif
#ifndef INCLUDED_openfl_display_Bitmap
#include <openfl/display/Bitmap.h>
#endif
#ifndef INCLUDED_openfl_display_BitmapData
#include <openfl/display/BitmapData.h>
#endif
#ifndef INCLUDED_openfl_display_DisplayObject
#include <openfl/display/DisplayObject.h>
#endif
#ifndef INCLUDED_openfl_display_DisplayObjectContainer
#include <openfl/display/DisplayObjectContainer.h>
#endif
#ifndef INCLUDED_openfl_display_IBitmapDrawable
#include <openfl/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_openfl_display_InteractiveObject
#include <openfl/display/InteractiveObject.h>
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
#ifndef INCLUDED_openfl_events_Event
#include <openfl/events/Event.h>
#endif
#ifndef INCLUDED_openfl_events_EventDispatcher
#include <openfl/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_events_IEventDispatcher
#include <openfl/events/IEventDispatcher.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_dc9b83cdd7f291e2_25_new,"flixel.system.FlxBasePreloader","new",0xa676ffb2,"flixel.system.FlxBasePreloader.new","flixel/system/FlxBasePreloader.hx",25,0x863b5dde)
HX_LOCAL_STACK_FRAME(_hx_pos_dc9b83cdd7f291e2_126_create,"flixel.system.FlxBasePreloader","create",0x550716ea,"flixel.system.FlxBasePreloader.create","flixel/system/FlxBasePreloader.hx",126,0x863b5dde)
HX_LOCAL_STACK_FRAME(_hx_pos_dc9b83cdd7f291e2_132_onInit,"flixel.system.FlxBasePreloader","onInit",0xc13cf3bd,"flixel.system.FlxBasePreloader.onInit","flixel/system/FlxBasePreloader.hx",132,0x863b5dde)
HX_LOCAL_STACK_FRAME(_hx_pos_dc9b83cdd7f291e2_156_onUpdate,"flixel.system.FlxBasePreloader","onUpdate",0x30e883f6,"flixel.system.FlxBasePreloader.onUpdate","flixel/system/FlxBasePreloader.hx",156,0x863b5dde)
HX_LOCAL_STACK_FRAME(_hx_pos_dc9b83cdd7f291e2_165_onEnterFrame,"flixel.system.FlxBasePreloader","onEnterFrame",0x1becfc62,"flixel.system.FlxBasePreloader.onEnterFrame","flixel/system/FlxBasePreloader.hx",165,0x863b5dde)
HX_LOCAL_STACK_FRAME(_hx_pos_dc9b83cdd7f291e2_187_destroy,"flixel.system.FlxBasePreloader","destroy",0x24486d4c,"flixel.system.FlxBasePreloader.destroy","flixel/system/FlxBasePreloader.hx",187,0x863b5dde)
HX_LOCAL_STACK_FRAME(_hx_pos_dc9b83cdd7f291e2_194_update,"flixel.system.FlxBasePreloader","update",0x5ffd35f7,"flixel.system.FlxBasePreloader.update","flixel/system/FlxBasePreloader.hx",194,0x863b5dde)
HX_LOCAL_STACK_FRAME(_hx_pos_dc9b83cdd7f291e2_201_onLoaded,"flixel.system.FlxBasePreloader","onLoaded",0x025245f2,"flixel.system.FlxBasePreloader.onLoaded","flixel/system/FlxBasePreloader.hx",201,0x863b5dde)
HX_LOCAL_STACK_FRAME(_hx_pos_dc9b83cdd7f291e2_217_createBitmap,"flixel.system.FlxBasePreloader","createBitmap",0x54baa679,"flixel.system.FlxBasePreloader.createBitmap","flixel/system/FlxBasePreloader.hx",217,0x863b5dde)
HX_LOCAL_STACK_FRAME(_hx_pos_dc9b83cdd7f291e2_241_loadBitmapData,"flixel.system.FlxBasePreloader","loadBitmapData",0x15a00d6d,"flixel.system.FlxBasePreloader.loadBitmapData","flixel/system/FlxBasePreloader.hx",241,0x863b5dde)
HX_LOCAL_STACK_FRAME(_hx_pos_dc9b83cdd7f291e2_255_checkSiteLock,"flixel.system.FlxBasePreloader","checkSiteLock",0x5092d9cc,"flixel.system.FlxBasePreloader.checkSiteLock","flixel/system/FlxBasePreloader.hx",255,0x863b5dde)
HX_LOCAL_STACK_FRAME(_hx_pos_dc9b83cdd7f291e2_30_boot,"flixel.system.FlxBasePreloader","boot",0xf9c1bca0,"flixel.system.FlxBasePreloader.boot","flixel/system/FlxBasePreloader.hx",30,0x863b5dde)
namespace flixel{
namespace _hx_system{

void FlxBasePreloader_obj::__construct(::hx::Null< Float >  __o_MinDisplayTime,::Array< ::String > AllowedURLs){
            		Float MinDisplayTime = __o_MinDisplayTime.Default(0);
            	HX_STACKFRAME(&_hx_pos_dc9b83cdd7f291e2_25_new)
HXLINE(  92)		this->_destroyed = false;
HXLINE(  91)		this->_urlChecked = false;
HXLINE(  90)		this->_loaded = false;
HXLINE(  87)		this->_percent = ((Float)0);
HXLINE(  81)		this->siteLockBodyText = ((((HX_("It appears the website you are using is hosting an unauthorized copy of this game. ",87,c8,8a,0b) + HX_("Storage or redistribution of this content, without the express permission of the ",81,40,12,73)) + HX_("developer or other copyright holder, is prohibited under copyright law.\n\n",69,45,11,95)) + HX_("Thank you for your interest in this game! Please support the developer by ",0c,a9,6a,4f)) + HX_("visiting the following website to play the game:",86,04,f5,9a));
HXLINE(  71)		this->siteLockTitleText = HX_("Sorry.",11,94,ca,64);
HXLINE(  49)		this->siteLockURLIndex = 0;
HXLINE(  35)		this->minDisplayTime = ((Float)0);
HXLINE( 102)		super::__construct();
HXLINE( 109)		this->minDisplayTime = MinDisplayTime;
HXLINE( 110)		if (::hx::IsNotNull( AllowedURLs )) {
HXLINE( 111)			this->allowedURLs = AllowedURLs;
            		}
            		else {
HXLINE( 113)			this->allowedURLs = ::Array_obj< ::String >::__new(0);
            		}
HXLINE( 115)		this->_startTime = ::Date_obj::now()->getTime();
HXLINE( 119)		this->onLoaded();
            	}

Dynamic FlxBasePreloader_obj::__CreateEmpty() { return new FlxBasePreloader_obj; }

void *FlxBasePreloader_obj::_hx_vtable = 0;

Dynamic FlxBasePreloader_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< FlxBasePreloader_obj > _hx_result = new FlxBasePreloader_obj();
	_hx_result->__construct(inArgs[0],inArgs[1]);
	return _hx_result;
}

bool FlxBasePreloader_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x2f28d986) {
		if (inClassId<=(int)0x0c89e854) {
			if (inClassId<=(int)0x0330636f) {
				return inClassId==(int)0x00000001 || inClassId==(int)0x0330636f;
			} else {
				return inClassId==(int)0x0c89e854;
			}
		} else {
			return inClassId==(int)0x1f4df417 || inClassId==(int)0x2f28d986;
		}
	} else {
		if (inClassId<=(int)0x4af7dd8e) {
			return inClassId==(int)0x318ede3c || inClassId==(int)0x4af7dd8e;
		} else {
			return inClassId==(int)0x6b353933;
		}
	}
}

void FlxBasePreloader_obj::create(){
            	HX_STACKFRAME(&_hx_pos_dc9b83cdd7f291e2_126_create)
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxBasePreloader_obj,create,(void))

void FlxBasePreloader_obj::onInit(){
            	HX_STACKFRAME(&_hx_pos_dc9b83cdd7f291e2_132_onInit)
HXLINE( 133)		this->super::onInit();
HXLINE( 135)		::openfl::Lib_obj::get_current()->stage->set_scaleMode(2);
HXLINE( 136)		::openfl::Lib_obj::get_current()->stage->align = 6;
HXLINE( 137)		this->create();
HXLINE( 138)		this->addEventListener(HX_("enterFrame",f5,03,50,02),this->onEnterFrame_dyn(),null(),null(),null());
HXLINE( 139)		this->checkSiteLock();
            	}


void FlxBasePreloader_obj::onUpdate(int bytesLoaded,int bytesTotal){
            	HX_STACKFRAME(&_hx_pos_dc9b83cdd7f291e2_156_onUpdate)
HXDLIN( 156)		this->super::onUpdate(bytesLoaded,bytesTotal);
            	}


void FlxBasePreloader_obj::onEnterFrame( ::openfl::events::Event E){
            	HX_STACKFRAME(&_hx_pos_dc9b83cdd7f291e2_165_onEnterFrame)
HXLINE( 166)		Float time = ::Date_obj::now()->getTime();
HXDLIN( 166)		Float time1 = (time - this->_startTime);
HXLINE( 167)		Float min = (this->minDisplayTime * ( (Float)(1000) ));
HXLINE( 168)		Float percent = this->_percent;
HXLINE( 169)		bool _hx_tmp;
HXDLIN( 169)		if ((min > 0)) {
HXLINE( 169)			_hx_tmp = (this->_percent > (time1 / min));
            		}
            		else {
HXLINE( 169)			_hx_tmp = false;
            		}
HXDLIN( 169)		if (_hx_tmp) {
HXLINE( 170)			percent = (time1 / min);
            		}
HXLINE( 171)		if (!(this->_destroyed)) {
HXLINE( 172)			this->update(percent);
            		}
HXLINE( 174)		bool _hx_tmp1;
HXDLIN( 174)		if (this->_loaded) {
HXLINE( 174)			if (!((min <= 0))) {
HXLINE( 174)				_hx_tmp1 = ((time1 / min) >= 1);
            			}
            			else {
HXLINE( 174)				_hx_tmp1 = true;
            			}
            		}
            		else {
HXLINE( 174)			_hx_tmp1 = false;
            		}
HXDLIN( 174)		if (_hx_tmp1) {
HXLINE( 176)			this->removeEventListener(HX_("enterFrame",f5,03,50,02),this->onEnterFrame_dyn(),null());
HXLINE( 177)			this->super::onLoaded();
HXLINE( 178)			this->destroy();
HXLINE( 179)			this->_destroyed = true;
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxBasePreloader_obj,onEnterFrame,(void))

void FlxBasePreloader_obj::destroy(){
            	HX_STACKFRAME(&_hx_pos_dc9b83cdd7f291e2_187_destroy)
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxBasePreloader_obj,destroy,(void))

void FlxBasePreloader_obj::update(Float Percent){
            	HX_STACKFRAME(&_hx_pos_dc9b83cdd7f291e2_194_update)
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxBasePreloader_obj,update,(void))

void FlxBasePreloader_obj::onLoaded(){
            	HX_STACKFRAME(&_hx_pos_dc9b83cdd7f291e2_201_onLoaded)
HXLINE( 202)		this->_loaded = true;
HXLINE( 203)		this->_percent = ( (Float)(1) );
            	}


 ::openfl::display::Bitmap FlxBasePreloader_obj::createBitmap(::hx::Class bitmapDataClass, ::Dynamic onLoad){
            	HX_GC_STACKFRAME(&_hx_pos_dc9b83cdd7f291e2_217_createBitmap)
HXLINE( 223)		 ::openfl::display::Bitmap bmp =  ::openfl::display::Bitmap_obj::__alloc( HX_CTX ,( ( ::openfl::display::BitmapData)(::Type_obj::createInstance(bitmapDataClass,::cpp::VirtualArray_obj::__new(2)->init(0,0)->init(1,0))) ),null(),null());
HXLINE( 224)		onLoad(bmp);
HXLINE( 225)		return bmp;
            	}


HX_DEFINE_DYNAMIC_FUNC2(FlxBasePreloader_obj,createBitmap,return )

 ::openfl::display::BitmapData FlxBasePreloader_obj::loadBitmapData(::hx::Class bitmapDataClass, ::Dynamic onLoad){
            	HX_STACKFRAME(&_hx_pos_dc9b83cdd7f291e2_241_loadBitmapData)
HXLINE( 245)		 ::openfl::display::BitmapData bmpData = ( ( ::openfl::display::BitmapData)(::Type_obj::createInstance(bitmapDataClass,::cpp::VirtualArray_obj::__new(2)->init(0,0)->init(1,0))) );
HXLINE( 246)		onLoad(bmpData);
HXLINE( 247)		return bmpData;
            	}


HX_DEFINE_DYNAMIC_FUNC2(FlxBasePreloader_obj,loadBitmapData,return )

void FlxBasePreloader_obj::checkSiteLock(){
            	HX_STACKFRAME(&_hx_pos_dc9b83cdd7f291e2_255_checkSiteLock)
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxBasePreloader_obj,checkSiteLock,(void))

::String FlxBasePreloader_obj::LOCAL;


::hx::ObjectPtr< FlxBasePreloader_obj > FlxBasePreloader_obj::__new(::hx::Null< Float >  __o_MinDisplayTime,::Array< ::String > AllowedURLs) {
	::hx::ObjectPtr< FlxBasePreloader_obj > __this = new FlxBasePreloader_obj();
	__this->__construct(__o_MinDisplayTime,AllowedURLs);
	return __this;
}

::hx::ObjectPtr< FlxBasePreloader_obj > FlxBasePreloader_obj::__alloc(::hx::Ctx *_hx_ctx,::hx::Null< Float >  __o_MinDisplayTime,::Array< ::String > AllowedURLs) {
	FlxBasePreloader_obj *__this = (FlxBasePreloader_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(FlxBasePreloader_obj), true, "flixel.system.FlxBasePreloader"));
	*(void **)__this = FlxBasePreloader_obj::_hx_vtable;
	__this->__construct(__o_MinDisplayTime,AllowedURLs);
	return __this;
}

FlxBasePreloader_obj::FlxBasePreloader_obj()
{
}

void FlxBasePreloader_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(FlxBasePreloader);
	HX_MARK_MEMBER_NAME(minDisplayTime,"minDisplayTime");
	HX_MARK_MEMBER_NAME(allowedURLs,"allowedURLs");
	HX_MARK_MEMBER_NAME(siteLockURLIndex,"siteLockURLIndex");
	HX_MARK_MEMBER_NAME(siteLockTitleText,"siteLockTitleText");
	HX_MARK_MEMBER_NAME(siteLockBodyText,"siteLockBodyText");
	HX_MARK_MEMBER_NAME(_percent,"_percent");
	HX_MARK_MEMBER_NAME(_width,"_width");
	HX_MARK_MEMBER_NAME(_height,"_height");
	HX_MARK_MEMBER_NAME(_loaded,"_loaded");
	HX_MARK_MEMBER_NAME(_urlChecked,"_urlChecked");
	HX_MARK_MEMBER_NAME(_destroyed,"_destroyed");
	HX_MARK_MEMBER_NAME(_startTime,"_startTime");
	 ::openfl::display::Sprite_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void FlxBasePreloader_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(minDisplayTime,"minDisplayTime");
	HX_VISIT_MEMBER_NAME(allowedURLs,"allowedURLs");
	HX_VISIT_MEMBER_NAME(siteLockURLIndex,"siteLockURLIndex");
	HX_VISIT_MEMBER_NAME(siteLockTitleText,"siteLockTitleText");
	HX_VISIT_MEMBER_NAME(siteLockBodyText,"siteLockBodyText");
	HX_VISIT_MEMBER_NAME(_percent,"_percent");
	HX_VISIT_MEMBER_NAME(_width,"_width");
	HX_VISIT_MEMBER_NAME(_height,"_height");
	HX_VISIT_MEMBER_NAME(_loaded,"_loaded");
	HX_VISIT_MEMBER_NAME(_urlChecked,"_urlChecked");
	HX_VISIT_MEMBER_NAME(_destroyed,"_destroyed");
	HX_VISIT_MEMBER_NAME(_startTime,"_startTime");
	 ::openfl::display::Sprite_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val FlxBasePreloader_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"_width") ) { return ::hx::Val( _width ); }
		if (HX_FIELD_EQ(inName,"create") ) { return ::hx::Val( create_dyn() ); }
		if (HX_FIELD_EQ(inName,"onInit") ) { return ::hx::Val( onInit_dyn() ); }
		if (HX_FIELD_EQ(inName,"update") ) { return ::hx::Val( update_dyn() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"_height") ) { return ::hx::Val( _height ); }
		if (HX_FIELD_EQ(inName,"_loaded") ) { return ::hx::Val( _loaded ); }
		if (HX_FIELD_EQ(inName,"destroy") ) { return ::hx::Val( destroy_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"_percent") ) { return ::hx::Val( _percent ); }
		if (HX_FIELD_EQ(inName,"onUpdate") ) { return ::hx::Val( onUpdate_dyn() ); }
		if (HX_FIELD_EQ(inName,"onLoaded") ) { return ::hx::Val( onLoaded_dyn() ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"_destroyed") ) { return ::hx::Val( _destroyed ); }
		if (HX_FIELD_EQ(inName,"_startTime") ) { return ::hx::Val( _startTime ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"allowedURLs") ) { return ::hx::Val( allowedURLs ); }
		if (HX_FIELD_EQ(inName,"_urlChecked") ) { return ::hx::Val( _urlChecked ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"onEnterFrame") ) { return ::hx::Val( onEnterFrame_dyn() ); }
		if (HX_FIELD_EQ(inName,"createBitmap") ) { return ::hx::Val( createBitmap_dyn() ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"checkSiteLock") ) { return ::hx::Val( checkSiteLock_dyn() ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"minDisplayTime") ) { return ::hx::Val( minDisplayTime ); }
		if (HX_FIELD_EQ(inName,"loadBitmapData") ) { return ::hx::Val( loadBitmapData_dyn() ); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"siteLockURLIndex") ) { return ::hx::Val( siteLockURLIndex ); }
		if (HX_FIELD_EQ(inName,"siteLockBodyText") ) { return ::hx::Val( siteLockBodyText ); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"siteLockTitleText") ) { return ::hx::Val( siteLockTitleText ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val FlxBasePreloader_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"_width") ) { _width=inValue.Cast< int >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"_height") ) { _height=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_loaded") ) { _loaded=inValue.Cast< bool >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"_percent") ) { _percent=inValue.Cast< Float >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"_destroyed") ) { _destroyed=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_startTime") ) { _startTime=inValue.Cast< Float >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"allowedURLs") ) { allowedURLs=inValue.Cast< ::Array< ::String > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_urlChecked") ) { _urlChecked=inValue.Cast< bool >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"minDisplayTime") ) { minDisplayTime=inValue.Cast< Float >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"siteLockURLIndex") ) { siteLockURLIndex=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"siteLockBodyText") ) { siteLockBodyText=inValue.Cast< ::String >(); return inValue; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"siteLockTitleText") ) { siteLockTitleText=inValue.Cast< ::String >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void FlxBasePreloader_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("minDisplayTime",fd,16,23,d9));
	outFields->push(HX_("allowedURLs",6c,43,6e,41));
	outFields->push(HX_("siteLockURLIndex",55,fa,4b,42));
	outFields->push(HX_("siteLockTitleText",f3,74,6f,55));
	outFields->push(HX_("siteLockBodyText",a1,bd,19,e4));
	outFields->push(HX_("_percent",46,04,93,b2));
	outFields->push(HX_("_width",47,fd,49,c6));
	outFields->push(HX_("_height",86,19,c3,70));
	outFields->push(HX_("_loaded",a4,59,e6,c6));
	outFields->push(HX_("_urlChecked",97,58,d1,a5));
	outFields->push(HX_("_destroyed",9a,b3,c9,4f));
	outFields->push(HX_("_startTime",50,c1,92,61));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo FlxBasePreloader_obj_sMemberStorageInfo[] = {
	{::hx::fsFloat,(int)offsetof(FlxBasePreloader_obj,minDisplayTime),HX_("minDisplayTime",fd,16,23,d9)},
	{::hx::fsObject /* ::Array< ::String > */ ,(int)offsetof(FlxBasePreloader_obj,allowedURLs),HX_("allowedURLs",6c,43,6e,41)},
	{::hx::fsInt,(int)offsetof(FlxBasePreloader_obj,siteLockURLIndex),HX_("siteLockURLIndex",55,fa,4b,42)},
	{::hx::fsString,(int)offsetof(FlxBasePreloader_obj,siteLockTitleText),HX_("siteLockTitleText",f3,74,6f,55)},
	{::hx::fsString,(int)offsetof(FlxBasePreloader_obj,siteLockBodyText),HX_("siteLockBodyText",a1,bd,19,e4)},
	{::hx::fsFloat,(int)offsetof(FlxBasePreloader_obj,_percent),HX_("_percent",46,04,93,b2)},
	{::hx::fsInt,(int)offsetof(FlxBasePreloader_obj,_width),HX_("_width",47,fd,49,c6)},
	{::hx::fsInt,(int)offsetof(FlxBasePreloader_obj,_height),HX_("_height",86,19,c3,70)},
	{::hx::fsBool,(int)offsetof(FlxBasePreloader_obj,_loaded),HX_("_loaded",a4,59,e6,c6)},
	{::hx::fsBool,(int)offsetof(FlxBasePreloader_obj,_urlChecked),HX_("_urlChecked",97,58,d1,a5)},
	{::hx::fsBool,(int)offsetof(FlxBasePreloader_obj,_destroyed),HX_("_destroyed",9a,b3,c9,4f)},
	{::hx::fsFloat,(int)offsetof(FlxBasePreloader_obj,_startTime),HX_("_startTime",50,c1,92,61)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo FlxBasePreloader_obj_sStaticStorageInfo[] = {
	{::hx::fsString,(void *) &FlxBasePreloader_obj::LOCAL,HX_("LOCAL",4b,01,df,f6)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static ::String FlxBasePreloader_obj_sMemberFields[] = {
	HX_("minDisplayTime",fd,16,23,d9),
	HX_("allowedURLs",6c,43,6e,41),
	HX_("siteLockURLIndex",55,fa,4b,42),
	HX_("siteLockTitleText",f3,74,6f,55),
	HX_("siteLockBodyText",a1,bd,19,e4),
	HX_("_percent",46,04,93,b2),
	HX_("_width",47,fd,49,c6),
	HX_("_height",86,19,c3,70),
	HX_("_loaded",a4,59,e6,c6),
	HX_("_urlChecked",97,58,d1,a5),
	HX_("_destroyed",9a,b3,c9,4f),
	HX_("_startTime",50,c1,92,61),
	HX_("create",fc,66,0f,7c),
	HX_("onInit",cf,43,45,e8),
	HX_("onUpdate",88,7c,b2,66),
	HX_("onEnterFrame",f4,a5,93,da),
	HX_("destroy",fa,2c,86,24),
	HX_("update",09,86,05,87),
	HX_("onLoaded",84,3e,1c,38),
	HX_("createBitmap",0b,50,61,13),
	HX_("loadBitmapData",7f,bf,71,ca),
	HX_("checkSiteLock",fa,8f,c0,63),
	::String(null()) };

static void FlxBasePreloader_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FlxBasePreloader_obj::LOCAL,"LOCAL");
};

#ifdef HXCPP_VISIT_ALLOCS
static void FlxBasePreloader_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FlxBasePreloader_obj::LOCAL,"LOCAL");
};

#endif

::hx::Class FlxBasePreloader_obj::__mClass;

static ::String FlxBasePreloader_obj_sStaticFields[] = {
	HX_("LOCAL",4b,01,df,f6),
	::String(null())
};

void FlxBasePreloader_obj::__register()
{
	FlxBasePreloader_obj _hx_dummy;
	FlxBasePreloader_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("flixel.system.FlxBasePreloader",c0,fe,74,69);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = FlxBasePreloader_obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(FlxBasePreloader_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(FlxBasePreloader_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< FlxBasePreloader_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = FlxBasePreloader_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = FlxBasePreloader_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = FlxBasePreloader_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void FlxBasePreloader_obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_dc9b83cdd7f291e2_30_boot)
HXDLIN(  30)		LOCAL = HX_("localhost",53,2a,7c,1c);
            	}
}

} // end namespace flixel
} // end namespace system