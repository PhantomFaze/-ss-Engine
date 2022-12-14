#include <hxcpp.h>

#ifndef INCLUDED_ClientPrefs
#include <ClientPrefs.h>
#endif
#ifndef INCLUDED_Paths
#include <Paths.h>
#endif
#ifndef INCLUDED_PhillyGlowParticle
#include <PhillyGlowParticle.h>
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
#ifndef INCLUDED_flixel_graphics_FlxGraphic
#include <flixel/graphics/FlxGraphic.h>
#endif
#ifndef INCLUDED_flixel_math_FlxPoint
#include <flixel/math/FlxPoint.h>
#endif
#ifndef INCLUDED_flixel_math_FlxRandom
#include <flixel/math/FlxRandom.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxPooled
#include <flixel/util/IFlxPooled.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_3744063e02200643_5_new,"PhillyGlowParticle","new",0xd2530bcd,"PhillyGlowParticle.new","PhillyGlow.hx",5,0x72857fe9)
HX_LOCAL_STACK_FRAME(_hx_pos_3744063e02200643_34_update,"PhillyGlowParticle","update",0x06096cbc,"PhillyGlowParticle.update","PhillyGlow.hx",34,0x72857fe9)

void PhillyGlowParticle_obj::__construct(Float x,Float y,int color){
            	HX_STACKFRAME(&_hx_pos_3744063e02200643_5_new)
HXLINE(   9)		this->originalScale = ((Float)1);
HXLINE(   8)		this->decay = ((Float)0);
HXLINE(   7)		this->lifeTime = ((Float)0);
HXLINE(  12)		super::__construct(x,y,null());
HXLINE(  13)		this->set_color(color);
HXLINE(  15)		::String library = null();
HXDLIN(  15)		 ::flixel::graphics::FlxGraphic returnAsset = ::Paths_obj::returnGraphic(HX_("philly/particle",4d,e9,20,05),library);
HXDLIN(  15)		this->loadGraphic(returnAsset,null(),null(),null(),null(),null());
HXLINE(  16)		this->set_antialiasing(::ClientPrefs_obj::globalAntialiasing);
HXLINE(  17)		this->lifeTime = ::flixel::FlxG_obj::random->_hx_float(((Float)0.6),((Float)0.9),null());
HXLINE(  18)		this->decay = ::flixel::FlxG_obj::random->_hx_float(((Float)0.8),1,null());
HXLINE(  19)		if (!(::ClientPrefs_obj::flashing)) {
HXLINE(  21)			 ::PhillyGlowParticle _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN(  21)			_hx_tmp->decay = (_hx_tmp->decay * ((Float)0.5));
HXLINE(  22)			this->set_alpha(((Float)0.5));
            		}
HXLINE(  25)		this->originalScale = ::flixel::FlxG_obj::random->_hx_float(((Float)0.75),1,null());
HXLINE(  26)		this->scale->set(this->originalScale,this->originalScale);
HXLINE(  28)		 ::flixel::math::FlxPoint _hx_tmp = this->scrollFactor;
HXDLIN(  28)		Float _hx_tmp1 = ::flixel::FlxG_obj::random->_hx_float(((Float)0.3),((Float)0.75),null());
HXDLIN(  28)		_hx_tmp->set(_hx_tmp1,::flixel::FlxG_obj::random->_hx_float(((Float)0.65),((Float)0.75),null()));
HXLINE(  29)		 ::flixel::math::FlxPoint _hx_tmp2 = this->velocity;
HXDLIN(  29)		Float _hx_tmp3 = ::flixel::FlxG_obj::random->_hx_float(-40,40,null());
HXDLIN(  29)		_hx_tmp2->set(_hx_tmp3,::flixel::FlxG_obj::random->_hx_float(-175,-250,null()));
HXLINE(  30)		 ::flixel::math::FlxPoint _hx_tmp4 = this->acceleration;
HXDLIN(  30)		_hx_tmp4->set(::flixel::FlxG_obj::random->_hx_float(-10,10,null()),25);
            	}

Dynamic PhillyGlowParticle_obj::__CreateEmpty() { return new PhillyGlowParticle_obj; }

void *PhillyGlowParticle_obj::_hx_vtable = 0;

Dynamic PhillyGlowParticle_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< PhillyGlowParticle_obj > _hx_result = new PhillyGlowParticle_obj();
	_hx_result->__construct(inArgs[0],inArgs[1],inArgs[2]);
	return _hx_result;
}

bool PhillyGlowParticle_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x3ec0041b) {
		if (inClassId<=(int)0x2c01639b) {
			return inClassId==(int)0x00000001 || inClassId==(int)0x2c01639b;
		} else {
			return inClassId==(int)0x3ec0041b;
		}
	} else {
		return inClassId==(int)0x7ccf8994 || inClassId==(int)0x7dab0655;
	}
}

void PhillyGlowParticle_obj::update(Float elapsed){
            	HX_STACKFRAME(&_hx_pos_3744063e02200643_34_update)
HXLINE(  35)		 ::PhillyGlowParticle _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN(  35)		_hx_tmp->lifeTime = (_hx_tmp->lifeTime - elapsed);
HXLINE(  36)		if ((this->lifeTime < 0)) {
HXLINE(  38)			this->lifeTime = ( (Float)(0) );
HXLINE(  39)			this->set_alpha((this->alpha - (this->decay * elapsed)));
HXLINE(  40)			if ((this->alpha > 0)) {
HXLINE(  42)				this->scale->set((this->originalScale * this->alpha),(this->originalScale * this->alpha));
            			}
            		}
HXLINE(  45)		this->super::update(elapsed);
            	}



::hx::ObjectPtr< PhillyGlowParticle_obj > PhillyGlowParticle_obj::__new(Float x,Float y,int color) {
	::hx::ObjectPtr< PhillyGlowParticle_obj > __this = new PhillyGlowParticle_obj();
	__this->__construct(x,y,color);
	return __this;
}

::hx::ObjectPtr< PhillyGlowParticle_obj > PhillyGlowParticle_obj::__alloc(::hx::Ctx *_hx_ctx,Float x,Float y,int color) {
	PhillyGlowParticle_obj *__this = (PhillyGlowParticle_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(PhillyGlowParticle_obj), true, "PhillyGlowParticle"));
	*(void **)__this = PhillyGlowParticle_obj::_hx_vtable;
	__this->__construct(x,y,color);
	return __this;
}

PhillyGlowParticle_obj::PhillyGlowParticle_obj()
{
}

::hx::Val PhillyGlowParticle_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"decay") ) { return ::hx::Val( decay ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"update") ) { return ::hx::Val( update_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"lifeTime") ) { return ::hx::Val( lifeTime ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"originalScale") ) { return ::hx::Val( originalScale ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val PhillyGlowParticle_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"decay") ) { decay=inValue.Cast< Float >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"lifeTime") ) { lifeTime=inValue.Cast< Float >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"originalScale") ) { originalScale=inValue.Cast< Float >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void PhillyGlowParticle_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("lifeTime",29,37,4b,57));
	outFields->push(HX_("decay",3a,03,20,d7));
	outFields->push(HX_("originalScale",79,c4,bf,d3));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo PhillyGlowParticle_obj_sMemberStorageInfo[] = {
	{::hx::fsFloat,(int)offsetof(PhillyGlowParticle_obj,lifeTime),HX_("lifeTime",29,37,4b,57)},
	{::hx::fsFloat,(int)offsetof(PhillyGlowParticle_obj,decay),HX_("decay",3a,03,20,d7)},
	{::hx::fsFloat,(int)offsetof(PhillyGlowParticle_obj,originalScale),HX_("originalScale",79,c4,bf,d3)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *PhillyGlowParticle_obj_sStaticStorageInfo = 0;
#endif

static ::String PhillyGlowParticle_obj_sMemberFields[] = {
	HX_("lifeTime",29,37,4b,57),
	HX_("decay",3a,03,20,d7),
	HX_("originalScale",79,c4,bf,d3),
	HX_("update",09,86,05,87),
	::String(null()) };

::hx::Class PhillyGlowParticle_obj::__mClass;

void PhillyGlowParticle_obj::__register()
{
	PhillyGlowParticle_obj _hx_dummy;
	PhillyGlowParticle_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("PhillyGlowParticle",5b,21,fc,e6);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(PhillyGlowParticle_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< PhillyGlowParticle_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = PhillyGlowParticle_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = PhillyGlowParticle_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

