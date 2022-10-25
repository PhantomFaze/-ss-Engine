#include <hxcpp.h>

#ifndef INCLUDED_95f339a1d026d52c
#define INCLUDED_95f339a1d026d52c
#include "hxMath.h"
#endif
#ifndef INCLUDED_ClientPrefs
#include <ClientPrefs.h>
#endif
#ifndef INCLUDED_Conductor
#include <Conductor.h>
#endif
#ifndef INCLUDED_Controls
#include <Controls.h>
#endif
#ifndef INCLUDED_CustomFadeTransition
#include <CustomFadeTransition.h>
#endif
#ifndef INCLUDED_MusicBeatState
#include <MusicBeatState.h>
#endif
#ifndef INCLUDED_MusicBeatSubstate
#include <MusicBeatSubstate.h>
#endif
#ifndef INCLUDED_PlayState
#include <PlayState.h>
#endif
#ifndef INCLUDED_PlayerSettings
#include <PlayerSettings.h>
#endif
#ifndef INCLUDED_Type
#include <Type.h>
#endif
#ifndef INCLUDED_flixel_FlxBasic
#include <flixel/FlxBasic.h>
#endif
#ifndef INCLUDED_flixel_FlxCamera
#include <flixel/FlxCamera.h>
#endif
#ifndef INCLUDED_flixel_FlxG
#include <flixel/FlxG.h>
#endif
#ifndef INCLUDED_flixel_FlxGame
#include <flixel/FlxGame.h>
#endif
#ifndef INCLUDED_flixel_FlxState
#include <flixel/FlxState.h>
#endif
#ifndef INCLUDED_flixel_FlxSubState
#include <flixel/FlxSubState.h>
#endif
#ifndef INCLUDED_flixel_addons_transition_FlxTransitionableState
#include <flixel/addons/transition/FlxTransitionableState.h>
#endif
#ifndef INCLUDED_flixel_addons_transition_TransitionData
#include <flixel/addons/transition/TransitionData.h>
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
#ifndef INCLUDED_flixel_input_actions_FlxActionSet
#include <flixel/input/actions/FlxActionSet.h>
#endif
#ifndef INCLUDED_flixel_util_FlxSave
#include <flixel/util/FlxSave.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
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
#ifndef INCLUDED_openfl_display_Sprite
#include <openfl/display/Sprite.h>
#endif
#ifndef INCLUDED_openfl_events_EventDispatcher
#include <openfl/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_events_IEventDispatcher
#include <openfl/events/IEventDispatcher.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_495f89d9d0902be3_18_new,"MusicBeatState","new",0xdae47368,"MusicBeatState.new","MusicBeatState.hx",18,0xa1b2f108)
HX_LOCAL_STACK_FRAME(_hx_pos_495f89d9d0902be3_33_get_controls,"MusicBeatState","get_controls",0xacecf677,"MusicBeatState.get_controls","MusicBeatState.hx",33,0xa1b2f108)
HX_LOCAL_STACK_FRAME(_hx_pos_495f89d9d0902be3_35_create,"MusicBeatState","create",0x5e9058f4,"MusicBeatState.create","MusicBeatState.hx",35,0xa1b2f108)
HX_LOCAL_STACK_FRAME(_hx_pos_495f89d9d0902be3_47_update,"MusicBeatState","update",0x69867801,"MusicBeatState.update","MusicBeatState.hx",47,0xa1b2f108)
HX_LOCAL_STACK_FRAME(_hx_pos_495f89d9d0902be3_74_updateSection,"MusicBeatState","updateSection",0x7d1427e4,"MusicBeatState.updateSection","MusicBeatState.hx",74,0xa1b2f108)
HX_LOCAL_STACK_FRAME(_hx_pos_495f89d9d0902be3_86_rollbackSection,"MusicBeatState","rollbackSection",0xf39f8129,"MusicBeatState.rollbackSection","MusicBeatState.hx",86,0xa1b2f108)
HX_LOCAL_STACK_FRAME(_hx_pos_495f89d9d0902be3_107_updateBeat,"MusicBeatState","updateBeat",0x79761a17,"MusicBeatState.updateBeat","MusicBeatState.hx",107,0xa1b2f108)
HX_LOCAL_STACK_FRAME(_hx_pos_495f89d9d0902be3_113_updateCurStep,"MusicBeatState","updateCurStep",0xd6ad7aeb,"MusicBeatState.updateCurStep","MusicBeatState.hx",113,0xa1b2f108)
HX_LOCAL_STACK_FRAME(_hx_pos_495f89d9d0902be3_156_stepHit,"MusicBeatState","stepHit",0xcf94756f,"MusicBeatState.stepHit","MusicBeatState.hx",156,0xa1b2f108)
HX_LOCAL_STACK_FRAME(_hx_pos_495f89d9d0902be3_161_beatHit,"MusicBeatState","beatHit",0xc257b185,"MusicBeatState.beatHit","MusicBeatState.hx",161,0xa1b2f108)
HX_LOCAL_STACK_FRAME(_hx_pos_495f89d9d0902be3_166_sectionHit,"MusicBeatState","sectionHit",0x3e7b4366,"MusicBeatState.sectionHit","MusicBeatState.hx",166,0xa1b2f108)
HX_LOCAL_STACK_FRAME(_hx_pos_495f89d9d0902be3_171_getBeatsOnSection,"MusicBeatState","getBeatsOnSection",0x19fe98c7,"MusicBeatState.getBeatsOnSection","MusicBeatState.hx",171,0xa1b2f108)
HX_LOCAL_STACK_FRAME(_hx_pos_495f89d9d0902be3_121_switchState,"MusicBeatState","switchState",0xaf81f285,"MusicBeatState.switchState","MusicBeatState.hx",121,0xa1b2f108)
HX_LOCAL_STACK_FRAME(_hx_pos_495f89d9d0902be3_129_switchState,"MusicBeatState","switchState",0xaf81f285,"MusicBeatState.switchState","MusicBeatState.hx",129,0xa1b2f108)
HX_LOCAL_STACK_FRAME(_hx_pos_495f89d9d0902be3_134_switchState,"MusicBeatState","switchState",0xaf81f285,"MusicBeatState.switchState","MusicBeatState.hx",134,0xa1b2f108)
HX_LOCAL_STACK_FRAME(_hx_pos_495f89d9d0902be3_145_resetState,"MusicBeatState","resetState",0xec54fbba,"MusicBeatState.resetState","MusicBeatState.hx",145,0xa1b2f108)
HX_LOCAL_STACK_FRAME(_hx_pos_495f89d9d0902be3_148_getState,"MusicBeatState","getState",0x1dfde593,"MusicBeatState.getState","MusicBeatState.hx",148,0xa1b2f108)

void MusicBeatState_obj::__construct( ::flixel::addons::transition::TransitionData TransIn, ::flixel::addons::transition::TransitionData TransOut){
            	HX_STACKFRAME(&_hx_pos_495f89d9d0902be3_18_new)
HXLINE(  27)		this->curDecBeat = ((Float)0);
HXLINE(  26)		this->curDecStep = ((Float)0);
HXLINE(  24)		this->curBeat = 0;
HXLINE(  23)		this->curStep = 0;
HXLINE(  21)		this->stepsToDo = 0;
HXLINE(  20)		this->curSection = 0;
HXLINE(  18)		super::__construct(TransIn,TransOut);
            	}

Dynamic MusicBeatState_obj::__CreateEmpty() { return new MusicBeatState_obj; }

void *MusicBeatState_obj::_hx_vtable = 0;

Dynamic MusicBeatState_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< MusicBeatState_obj > _hx_result = new MusicBeatState_obj();
	_hx_result->__construct(inArgs[0],inArgs[1]);
	return _hx_result;
}

bool MusicBeatState_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x3f706236) {
		if (inClassId<=(int)0x2f064378) {
			if (inClassId<=(int)0x23a57bae) {
				return inClassId==(int)0x00000001 || inClassId==(int)0x23a57bae;
			} else {
				return inClassId==(int)0x2f064378;
			}
		} else {
			return inClassId==(int)0x3f706236;
		}
	} else {
		if (inClassId<=(int)0x7c795c9f) {
			return inClassId==(int)0x62817b24 || inClassId==(int)0x7c795c9f;
		} else {
			return inClassId==(int)0x7ccf8994;
		}
	}
}

 ::Controls MusicBeatState_obj::get_controls(){
            	HX_STACKFRAME(&_hx_pos_495f89d9d0902be3_33_get_controls)
HXDLIN(  33)		return ::PlayerSettings_obj::player1->controls;
            	}


HX_DEFINE_DYNAMIC_FUNC0(MusicBeatState_obj,get_controls,return )

void MusicBeatState_obj::create(){
            	HX_GC_STACKFRAME(&_hx_pos_495f89d9d0902be3_35_create)
HXLINE(  36)		::MusicBeatState_obj::camBeat = ::flixel::FlxG_obj::camera;
HXLINE(  37)		bool skip = ::flixel::addons::transition::FlxTransitionableState_obj::skipNextTransOut;
HXLINE(  38)		this->super::create();
HXLINE(  40)		if (!(skip)) {
HXLINE(  41)			this->openSubState( ::CustomFadeTransition_obj::__alloc( HX_CTX ,((Float)0.7),true));
            		}
HXLINE(  43)		::flixel::addons::transition::FlxTransitionableState_obj::skipNextTransOut = false;
            	}


void MusicBeatState_obj::update(Float elapsed){
            	HX_STACKFRAME(&_hx_pos_495f89d9d0902be3_47_update)
HXLINE(  49)		int oldStep = this->curStep;
HXLINE(  51)		this->updateCurStep();
HXLINE(  52)		this->updateBeat();
HXLINE(  54)		if ((oldStep != this->curStep)) {
HXLINE(  56)			if ((this->curStep > 0)) {
HXLINE(  57)				this->stepHit();
            			}
HXLINE(  59)			if (::hx::IsNotNull( ::PlayState_obj::SONG )) {
HXLINE(  61)				if ((oldStep < this->curStep)) {
HXLINE(  62)					this->updateSection();
            				}
            				else {
HXLINE(  64)					this->rollbackSection();
            				}
            			}
            		}
HXLINE(  68)		if (::hx::IsNotNull( ::flixel::FlxG_obj::save->data )) {
HXLINE(  68)			::flixel::FlxG_obj::save->data->__SetField(HX_("fullscreen",3b,3a,b4,f9),::flixel::FlxG_obj::get_fullscreen(),::hx::paccDynamic);
            		}
HXLINE(  70)		this->super::update(elapsed);
            	}


void MusicBeatState_obj::updateSection(){
            	HX_STACKFRAME(&_hx_pos_495f89d9d0902be3_74_updateSection)
HXLINE(  75)		if ((this->stepsToDo < 1)) {
HXLINE(  75)			this->stepsToDo = ::Math_obj::round((( (Float)(this->getBeatsOnSection()) ) * ( (Float)(4) )));
            		}
HXLINE(  76)		while((this->curStep >= this->stepsToDo)){
HXLINE(  78)			this->curSection++;
HXLINE(  79)			Float beats = ( (Float)(this->getBeatsOnSection()) );
HXLINE(  80)			 ::MusicBeatState _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN(  80)			_hx_tmp->stepsToDo = (_hx_tmp->stepsToDo + ::Math_obj::round((beats * ( (Float)(4) ))));
HXLINE(  81)			this->sectionHit();
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(MusicBeatState_obj,updateSection,(void))

void MusicBeatState_obj::rollbackSection(){
            	HX_STACKFRAME(&_hx_pos_495f89d9d0902be3_86_rollbackSection)
HXLINE(  87)		if ((this->curStep < 0)) {
HXLINE(  87)			return;
            		}
HXLINE(  89)		int lastSection = this->curSection;
HXLINE(  90)		this->curSection = 0;
HXLINE(  91)		this->stepsToDo = 0;
HXLINE(  92)		{
HXLINE(  92)			int _g = 0;
HXDLIN(  92)			int _g1 = ( (::Array< ::Dynamic>)(::PlayState_obj::SONG->__Field(HX_("notes",41,dc,ca,9f),::hx::paccDynamic)) )->length;
HXDLIN(  92)			while((_g < _g1)){
HXLINE(  92)				_g = (_g + 1);
HXDLIN(  92)				int i = (_g - 1);
HXLINE(  94)				if (::hx::IsNotNull(  ::Dynamic(::PlayState_obj::SONG->__Field(HX_("notes",41,dc,ca,9f),::hx::paccDynamic))->__GetItem(i) )) {
HXLINE(  96)					 ::MusicBeatState _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN(  96)					int _hx_tmp1 = _hx_tmp->stepsToDo;
HXDLIN(  96)					_hx_tmp->stepsToDo = (_hx_tmp1 + ::Math_obj::round((( (Float)(this->getBeatsOnSection()) ) * ( (Float)(4) ))));
HXLINE(  97)					if ((this->stepsToDo > this->curStep)) {
HXLINE(  97)						goto _hx_goto_6;
            					}
HXLINE(  99)					this->curSection++;
            				}
            			}
            			_hx_goto_6:;
            		}
HXLINE( 103)		if ((this->curSection > lastSection)) {
HXLINE( 103)			this->sectionHit();
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(MusicBeatState_obj,rollbackSection,(void))

void MusicBeatState_obj::updateBeat(){
            	HX_STACKFRAME(&_hx_pos_495f89d9d0902be3_107_updateBeat)
HXLINE( 108)		this->curBeat = ::Math_obj::floor((( (Float)(this->curStep) ) / ( (Float)(4) )));
HXLINE( 109)		this->curDecBeat = (this->curDecStep / ( (Float)(4) ));
            	}


HX_DEFINE_DYNAMIC_FUNC0(MusicBeatState_obj,updateBeat,(void))

void MusicBeatState_obj::updateCurStep(){
            	HX_STACKFRAME(&_hx_pos_495f89d9d0902be3_113_updateCurStep)
HXLINE( 114)		 ::Dynamic lastChange = ::Conductor_obj::getBPMFromSeconds(::Conductor_obj::songPosition);
HXLINE( 116)		Float shit = (((::Conductor_obj::songPosition - ( (Float)(::ClientPrefs_obj::noteOffset) )) - ( (Float)(lastChange->__Field(HX_("songTime",82,2a,d5,3a),::hx::paccDynamic)) )) / ( (Float)(lastChange->__Field(HX_("stepCrochet",48,d7,ff,e6),::hx::paccDynamic)) ));
HXLINE( 117)		this->curDecStep = ( (Float)((lastChange->__Field(HX_("stepTime",79,75,25,a0),::hx::paccDynamic) + shit)) );
HXLINE( 118)		this->curStep = ( (int)((lastChange->__Field(HX_("stepTime",79,75,25,a0),::hx::paccDynamic) + ::Math_obj::floor(shit))) );
            	}


HX_DEFINE_DYNAMIC_FUNC0(MusicBeatState_obj,updateCurStep,(void))

void MusicBeatState_obj::stepHit(){
            	HX_STACKFRAME(&_hx_pos_495f89d9d0902be3_156_stepHit)
HXDLIN( 156)		if ((::hx::Mod(this->curStep,4) == 0)) {
HXLINE( 157)			this->beatHit();
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(MusicBeatState_obj,stepHit,(void))

void MusicBeatState_obj::beatHit(){
            	HX_STACKFRAME(&_hx_pos_495f89d9d0902be3_161_beatHit)
            	}


HX_DEFINE_DYNAMIC_FUNC0(MusicBeatState_obj,beatHit,(void))

void MusicBeatState_obj::sectionHit(){
            	HX_STACKFRAME(&_hx_pos_495f89d9d0902be3_166_sectionHit)
            	}


HX_DEFINE_DYNAMIC_FUNC0(MusicBeatState_obj,sectionHit,(void))

 ::Dynamic MusicBeatState_obj::getBeatsOnSection(){
            	HX_STACKFRAME(&_hx_pos_495f89d9d0902be3_171_getBeatsOnSection)
HXLINE( 172)		 ::Dynamic val = 4;
HXLINE( 173)		bool _hx_tmp;
HXDLIN( 173)		if (::hx::IsNotNull( ::PlayState_obj::SONG )) {
HXLINE( 173)			_hx_tmp = ::hx::IsNotNull(  ::Dynamic(::PlayState_obj::SONG->__Field(HX_("notes",41,dc,ca,9f),::hx::paccDynamic))->__GetItem(this->curSection) );
            		}
            		else {
HXLINE( 173)			_hx_tmp = false;
            		}
HXDLIN( 173)		if (_hx_tmp) {
HXLINE( 173)			val =  ::Dynamic(::PlayState_obj::SONG->__Field(HX_("notes",41,dc,ca,9f),::hx::paccDynamic))->__GetItem(this->curSection)->__Field(HX_("sectionBeats",18,52,2e,0f),::hx::paccDynamic);
            		}
HXLINE( 174)		if (::hx::IsNull( val )) {
HXLINE( 174)			return 4;
            		}
            		else {
HXLINE( 174)			return val;
            		}
HXDLIN( 174)		return ((Float)0.);
            	}


HX_DEFINE_DYNAMIC_FUNC0(MusicBeatState_obj,getBeatsOnSection,return )

 ::flixel::FlxCamera MusicBeatState_obj::camBeat;

void MusicBeatState_obj::switchState( ::flixel::FlxState nextState){
            	HX_GC_STACKFRAME(&_hx_pos_495f89d9d0902be3_121_switchState)
HXLINE( 123)		 ::Dynamic curState = ::flixel::FlxG_obj::game->_state;
HXLINE( 124)		 ::MusicBeatState leState = ( ( ::MusicBeatState)(curState) );
HXLINE( 125)		if (!(::flixel::addons::transition::FlxTransitionableState_obj::skipNextTransIn)) {
HXLINE( 126)			leState->openSubState( ::CustomFadeTransition_obj::__alloc( HX_CTX ,((Float)0.6),false));
HXLINE( 127)			if (::hx::IsInstanceEq( nextState,::flixel::FlxG_obj::game->_state )) {
            				HX_BEGIN_LOCAL_FUNC_S0(::hx::LocalFunc,_hx_Closure_0) HXARGC(0)
            				void _hx_run(){
            					HX_GC_STACKFRAME(&_hx_pos_495f89d9d0902be3_129_switchState)
HXLINE( 129)					 ::flixel::FlxState nextState = ( ( ::flixel::FlxState)(::Type_obj::createInstance(::Type_obj::getClass(::flixel::FlxG_obj::game->_state),::cpp::VirtualArray_obj::__new(0))) );
HXDLIN( 129)					if (::flixel::FlxG_obj::game->_state->switchTo(nextState)) {
HXLINE( 129)						::flixel::FlxG_obj::game->_requestedState = nextState;
            					}
            				}
            				HX_END_LOCAL_FUNC0((void))

HXLINE( 128)				::CustomFadeTransition_obj::finishCallback =  ::Dynamic(new _hx_Closure_0());
            			}
            			else {
            				HX_BEGIN_LOCAL_FUNC_S1(::hx::LocalFunc,_hx_Closure_1, ::flixel::FlxState,nextState) HXARGC(0)
            				void _hx_run(){
            					HX_GC_STACKFRAME(&_hx_pos_495f89d9d0902be3_134_switchState)
HXLINE( 134)					if (::flixel::FlxG_obj::game->_state->switchTo(nextState)) {
HXLINE( 134)						::flixel::FlxG_obj::game->_requestedState = nextState;
            					}
            				}
            				HX_END_LOCAL_FUNC0((void))

HXLINE( 133)				::CustomFadeTransition_obj::finishCallback =  ::Dynamic(new _hx_Closure_1(nextState));
            			}
HXLINE( 138)			return;
            		}
HXLINE( 140)		::flixel::addons::transition::FlxTransitionableState_obj::skipNextTransIn = false;
HXLINE( 141)		if (::flixel::FlxG_obj::game->_state->switchTo(nextState)) {
HXLINE( 141)			::flixel::FlxG_obj::game->_requestedState = nextState;
            		}
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(MusicBeatState_obj,switchState,(void))

void MusicBeatState_obj::resetState(){
            	HX_STACKFRAME(&_hx_pos_495f89d9d0902be3_145_resetState)
HXDLIN( 145)		::MusicBeatState_obj::switchState(::flixel::FlxG_obj::game->_state);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(MusicBeatState_obj,resetState,(void))

 ::MusicBeatState MusicBeatState_obj::getState(){
            	HX_STACKFRAME(&_hx_pos_495f89d9d0902be3_148_getState)
HXLINE( 149)		 ::Dynamic curState = ::flixel::FlxG_obj::game->_state;
HXLINE( 150)		 ::MusicBeatState leState = ( ( ::MusicBeatState)(curState) );
HXLINE( 151)		return leState;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(MusicBeatState_obj,getState,return )


::hx::ObjectPtr< MusicBeatState_obj > MusicBeatState_obj::__new( ::flixel::addons::transition::TransitionData TransIn, ::flixel::addons::transition::TransitionData TransOut) {
	::hx::ObjectPtr< MusicBeatState_obj > __this = new MusicBeatState_obj();
	__this->__construct(TransIn,TransOut);
	return __this;
}

::hx::ObjectPtr< MusicBeatState_obj > MusicBeatState_obj::__alloc(::hx::Ctx *_hx_ctx, ::flixel::addons::transition::TransitionData TransIn, ::flixel::addons::transition::TransitionData TransOut) {
	MusicBeatState_obj *__this = (MusicBeatState_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(MusicBeatState_obj), true, "MusicBeatState"));
	*(void **)__this = MusicBeatState_obj::_hx_vtable;
	__this->__construct(TransIn,TransOut);
	return __this;
}

MusicBeatState_obj::MusicBeatState_obj()
{
}

::hx::Val MusicBeatState_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"create") ) { return ::hx::Val( create_dyn() ); }
		if (HX_FIELD_EQ(inName,"update") ) { return ::hx::Val( update_dyn() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"curStep") ) { return ::hx::Val( curStep ); }
		if (HX_FIELD_EQ(inName,"curBeat") ) { return ::hx::Val( curBeat ); }
		if (HX_FIELD_EQ(inName,"stepHit") ) { return ::hx::Val( stepHit_dyn() ); }
		if (HX_FIELD_EQ(inName,"beatHit") ) { return ::hx::Val( beatHit_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"controls") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_controls() ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"stepsToDo") ) { return ::hx::Val( stepsToDo ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"curSection") ) { return ::hx::Val( curSection ); }
		if (HX_FIELD_EQ(inName,"curDecStep") ) { return ::hx::Val( curDecStep ); }
		if (HX_FIELD_EQ(inName,"curDecBeat") ) { return ::hx::Val( curDecBeat ); }
		if (HX_FIELD_EQ(inName,"updateBeat") ) { return ::hx::Val( updateBeat_dyn() ); }
		if (HX_FIELD_EQ(inName,"sectionHit") ) { return ::hx::Val( sectionHit_dyn() ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"get_controls") ) { return ::hx::Val( get_controls_dyn() ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"updateSection") ) { return ::hx::Val( updateSection_dyn() ); }
		if (HX_FIELD_EQ(inName,"updateCurStep") ) { return ::hx::Val( updateCurStep_dyn() ); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"rollbackSection") ) { return ::hx::Val( rollbackSection_dyn() ); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"getBeatsOnSection") ) { return ::hx::Val( getBeatsOnSection_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

bool MusicBeatState_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"camBeat") ) { outValue = ( camBeat ); return true; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"getState") ) { outValue = getState_dyn(); return true; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"resetState") ) { outValue = resetState_dyn(); return true; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"switchState") ) { outValue = switchState_dyn(); return true; }
	}
	return false;
}

::hx::Val MusicBeatState_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"curStep") ) { curStep=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"curBeat") ) { curBeat=inValue.Cast< int >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"stepsToDo") ) { stepsToDo=inValue.Cast< int >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"curSection") ) { curSection=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"curDecStep") ) { curDecStep=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"curDecBeat") ) { curDecBeat=inValue.Cast< Float >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool MusicBeatState_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"camBeat") ) { camBeat=ioValue.Cast<  ::flixel::FlxCamera >(); return true; }
	}
	return false;
}

void MusicBeatState_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("curSection",45,58,c1,68));
	outFields->push(HX_("stepsToDo",2d,3d,2d,4c));
	outFields->push(HX_("curStep",ec,58,71,b7));
	outFields->push(HX_("curBeat",16,53,29,ac));
	outFields->push(HX_("curDecStep",8e,a8,37,e3));
	outFields->push(HX_("curDecBeat",b8,a2,ef,d7));
	outFields->push(HX_("controls",76,86,bc,37));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo MusicBeatState_obj_sMemberStorageInfo[] = {
	{::hx::fsInt,(int)offsetof(MusicBeatState_obj,curSection),HX_("curSection",45,58,c1,68)},
	{::hx::fsInt,(int)offsetof(MusicBeatState_obj,stepsToDo),HX_("stepsToDo",2d,3d,2d,4c)},
	{::hx::fsInt,(int)offsetof(MusicBeatState_obj,curStep),HX_("curStep",ec,58,71,b7)},
	{::hx::fsInt,(int)offsetof(MusicBeatState_obj,curBeat),HX_("curBeat",16,53,29,ac)},
	{::hx::fsFloat,(int)offsetof(MusicBeatState_obj,curDecStep),HX_("curDecStep",8e,a8,37,e3)},
	{::hx::fsFloat,(int)offsetof(MusicBeatState_obj,curDecBeat),HX_("curDecBeat",b8,a2,ef,d7)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo MusicBeatState_obj_sStaticStorageInfo[] = {
	{::hx::fsObject /*  ::flixel::FlxCamera */ ,(void *) &MusicBeatState_obj::camBeat,HX_("camBeat",25,35,05,cc)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static ::String MusicBeatState_obj_sMemberFields[] = {
	HX_("curSection",45,58,c1,68),
	HX_("stepsToDo",2d,3d,2d,4c),
	HX_("curStep",ec,58,71,b7),
	HX_("curBeat",16,53,29,ac),
	HX_("curDecStep",8e,a8,37,e3),
	HX_("curDecBeat",b8,a2,ef,d7),
	HX_("get_controls",7f,3a,d6,ec),
	HX_("create",fc,66,0f,7c),
	HX_("update",09,86,05,87),
	HX_("updateSection",dc,6a,46,29),
	HX_("rollbackSection",21,72,22,c3),
	HX_("updateBeat",1f,cc,c8,f9),
	HX_("updateCurStep",e3,bd,df,82),
	HX_("stepHit",67,ae,41,81),
	HX_("beatHit",7d,ea,04,74),
	HX_("sectionHit",6e,f5,cd,be),
	HX_("getBeatsOnSection",bf,b7,d9,04),
	::String(null()) };

static void MusicBeatState_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(MusicBeatState_obj::camBeat,"camBeat");
};

#ifdef HXCPP_VISIT_ALLOCS
static void MusicBeatState_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(MusicBeatState_obj::camBeat,"camBeat");
};

#endif

::hx::Class MusicBeatState_obj::__mClass;

static ::String MusicBeatState_obj_sStaticFields[] = {
	HX_("camBeat",25,35,05,cc),
	HX_("switchState",7d,07,8b,77),
	HX_("resetState",c2,ad,a7,6c),
	HX_("getState",9b,85,e2,e3),
	::String(null())
};

void MusicBeatState_obj::__register()
{
	MusicBeatState_obj _hx_dummy;
	MusicBeatState_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("MusicBeatState",76,df,84,5d);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &MusicBeatState_obj::__GetStatic;
	__mClass->mSetStaticField = &MusicBeatState_obj::__SetStatic;
	__mClass->mMarkFunc = MusicBeatState_obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(MusicBeatState_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(MusicBeatState_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< MusicBeatState_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = MusicBeatState_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = MusicBeatState_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = MusicBeatState_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

