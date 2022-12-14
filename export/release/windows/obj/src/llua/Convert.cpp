#include <hxcpp.h>

#ifndef INCLUDED_cc9afe4755847ade
#define INCLUDED_cc9afe4755847ade
#include "linc_lua.h"
#endif
#ifndef INCLUDED_Reflect
#include <Reflect.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_Type
#include <Type.h>
#endif
#ifndef INCLUDED_ValueType
#include <ValueType.h>
#endif
#ifndef INCLUDED_haxe_Log
#include <haxe/Log.h>
#endif
#ifndef INCLUDED_llua_Convert
#include <llua/Convert.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_4b5f1938ae03ba97_14_toLua,"llua.Convert","toLua",0x3fb91700,"llua.Convert.toLua","llua/Convert.hx",14,0x49e36a6e)
HX_LOCAL_STACK_FRAME(_hx_pos_4b5f1938ae03ba97_40_arrayToLua,"llua.Convert","arrayToLua",0x07e2abc1,"llua.Convert.arrayToLua","llua/Convert.hx",40,0x49e36a6e)
HX_LOCAL_STACK_FRAME(_hx_pos_4b5f1938ae03ba97_53_objectToLua,"llua.Convert","objectToLua",0xf6f99801,"llua.Convert.objectToLua","llua/Convert.hx",53,0x49e36a6e)
HX_LOCAL_STACK_FRAME(_hx_pos_4b5f1938ae03ba97_74_fromLua,"llua.Convert","fromLua",0x7fff7d31,"llua.Convert.fromLua","llua/Convert.hx",74,0x49e36a6e)
HX_LOCAL_STACK_FRAME(_hx_pos_4b5f1938ae03ba97_164_toHaxeObj,"llua.Convert","toHaxeObj",0x234db0b9,"llua.Convert.toHaxeObj","llua/Convert.hx",164,0x49e36a6e)
namespace llua{

void Convert_obj::__construct() { }

Dynamic Convert_obj::__CreateEmpty() { return new Convert_obj; }

void *Convert_obj::_hx_vtable = 0;

Dynamic Convert_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< Convert_obj > _hx_result = new Convert_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool Convert_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x70578207;
}

bool Convert_obj::toLua( cpp::Reference<lua_State> l, ::Dynamic val){
            	HX_STACKFRAME(&_hx_pos_4b5f1938ae03ba97_14_toLua)
HXLINE(  16)		{
HXLINE(  16)			 ::ValueType _g = ::Type_obj::_hx_typeof(val);
HXDLIN(  16)			switch((int)(_g->_hx_getIndex())){
            				case (int)0: {
HXLINE(  18)					lua_pushnil(l);
            				}
            				break;
            				case (int)1: {
HXLINE(  22)					lua_pushinteger(l,::hx::TCast< int >::cast(val));
            				}
            				break;
            				case (int)2: {
HXLINE(  24)					lua_pushnumber(l,( (Float)(val) ));
            				}
            				break;
            				case (int)3: {
HXLINE(  20)					int _hx_tmp;
HXDLIN(  20)					if ((( (bool)(val) ) == true)) {
HXLINE(  20)						_hx_tmp = 1;
            					}
            					else {
HXLINE(  20)						_hx_tmp = 0;
            					}
HXDLIN(  20)					lua_pushboolean(l,_hx_tmp);
            				}
            				break;
            				case (int)4: {
HXLINE(  30)					int tLen = 0;
HXDLIN(  30)					{
HXLINE(  30)						int _g = 0;
HXDLIN(  30)						::Array< ::String > _g1 = ::Reflect_obj::fields(val);
HXDLIN(  30)						while((_g < _g1->length)){
HXLINE(  30)							::String n = _g1->__get(_g);
HXDLIN(  30)							_g = (_g + 1);
HXDLIN(  30)							tLen = (tLen + 1);
            						}
            					}
HXDLIN(  30)					lua_createtable(l,tLen,0);
HXDLIN(  30)					{
HXLINE(  30)						int _g2 = 0;
HXDLIN(  30)						::Array< ::String > _g3 = ::Reflect_obj::fields(val);
HXDLIN(  30)						while((_g2 < _g3->length)){
HXLINE(  30)							::String n = _g3->__get(_g2);
HXDLIN(  30)							_g2 = (_g2 + 1);
HXDLIN(  30)							lua_pushstring(l,n);
HXDLIN(  30)							::llua::Convert_obj::toLua(l,::Reflect_obj::field(val,n));
HXDLIN(  30)							lua_settable(l,-3);
            						}
            					}
            				}
            				break;
            				case (int)6: {
HXLINE(  27)					::hx::Class _hx_switch_0 = _g->_hx_getObject(0).StaticCast< ::hx::Class >();
            					if (  (_hx_switch_0==::hx::ArrayBase::__mClass) ){
HXLINE(  28)						::cpp::VirtualArray arr = ( (::cpp::VirtualArray)(val) );
HXDLIN(  28)						int size = arr->get_length();
HXDLIN(  28)						lua_createtable(l,size,0);
HXDLIN(  28)						{
HXLINE(  28)							int _g = 0;
HXDLIN(  28)							int _g1 = size;
HXDLIN(  28)							while((_g < _g1)){
HXLINE(  28)								_g = (_g + 1);
HXDLIN(  28)								int i = (_g - 1);
HXDLIN(  28)								lua_pushnumber(l,( (Float)((i + 1)) ));
HXDLIN(  28)								::llua::Convert_obj::toLua(l,arr->__get(i));
HXDLIN(  28)								lua_settable(l,-3);
            							}
            						}
HXDLIN(  28)						goto _hx_goto_2;
            					}
            					if (  (_hx_switch_0==::hx::ClassOf< ::String >()) ){
HXLINE(  26)						lua_pushstring(l,::hx::TCast< ::String >::cast(val));
HXDLIN(  26)						goto _hx_goto_2;
            					}
            					/* default */{
HXLINE(  32)						 ::Dynamic _hx_tmp = ::haxe::Log_obj::trace;
HXDLIN(  32)						::String _hx_tmp1;
HXDLIN(  32)						if (::hx::IsNull( val )) {
HXLINE(  32)							_hx_tmp1 = HX_("null",87,9e,0e,49);
            						}
            						else {
HXLINE(  32)							_hx_tmp1 = ::Std_obj::string(val);
            						}
HXDLIN(  32)						::String _hx_tmp2 = (((HX_("haxe value not supported\n",12,9a,82,3a) + _hx_tmp1) + HX_(" - ",73,6f,18,00)) + ::Std_obj::string(::Type_obj::_hx_typeof(val)));
HXDLIN(  32)						_hx_tmp(_hx_tmp2,::hx::SourceInfo(HX_("llua/Convert.hx",6e,6a,e3,49),32,HX_("llua.Convert",31,b8,44,19),HX_("toLua",fd,0a,14,14)));
HXLINE(  33)						return false;
            					}
            					_hx_goto_2:;
            				}
            				break;
            				default:{
HXLINE(  32)					 ::Dynamic _hx_tmp = ::haxe::Log_obj::trace;
HXDLIN(  32)					::String _hx_tmp1;
HXDLIN(  32)					if (::hx::IsNull( val )) {
HXLINE(  32)						_hx_tmp1 = HX_("null",87,9e,0e,49);
            					}
            					else {
HXLINE(  32)						_hx_tmp1 = ::Std_obj::string(val);
            					}
HXDLIN(  32)					::String _hx_tmp2 = (((HX_("haxe value not supported\n",12,9a,82,3a) + _hx_tmp1) + HX_(" - ",73,6f,18,00)) + ::Std_obj::string(::Type_obj::_hx_typeof(val)));
HXDLIN(  32)					_hx_tmp(_hx_tmp2,::hx::SourceInfo(HX_("llua/Convert.hx",6e,6a,e3,49),32,HX_("llua.Convert",31,b8,44,19),HX_("toLua",fd,0a,14,14)));
HXLINE(  33)					return false;
            				}
            			}
            		}
HXLINE(  36)		return true;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Convert_obj,toLua,return )

void Convert_obj::arrayToLua( cpp::Reference<lua_State> l,::cpp::VirtualArray arr){
            	HX_STACKFRAME(&_hx_pos_4b5f1938ae03ba97_40_arrayToLua)
HXLINE(  42)		int size = arr->get_length();
HXLINE(  43)		lua_createtable(l,size,0);
HXLINE(  45)		{
HXLINE(  45)			int _g = 0;
HXDLIN(  45)			int _g1 = size;
HXDLIN(  45)			while((_g < _g1)){
HXLINE(  45)				_g = (_g + 1);
HXDLIN(  45)				int i = (_g - 1);
HXLINE(  46)				lua_pushnumber(l,( (Float)((i + 1)) ));
HXLINE(  47)				::llua::Convert_obj::toLua(l,arr->__get(i));
HXLINE(  48)				lua_settable(l,-3);
            			}
            		}
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Convert_obj,arrayToLua,(void))

void Convert_obj::objectToLua( cpp::Reference<lua_State> l, ::Dynamic res){
            	HX_STACKFRAME(&_hx_pos_4b5f1938ae03ba97_53_objectToLua)
HXLINE(  55)		int tLen = 0;
HXLINE(  57)		{
HXLINE(  57)			int _g = 0;
HXDLIN(  57)			::Array< ::String > _g1 = ::Reflect_obj::fields(res);
HXDLIN(  57)			while((_g < _g1->length)){
HXLINE(  57)				::String n = _g1->__get(_g);
HXDLIN(  57)				_g = (_g + 1);
HXLINE(  59)				tLen = (tLen + 1);
            			}
            		}
HXLINE(  62)		lua_createtable(l,tLen,0);
HXLINE(  63)		{
HXLINE(  63)			int _g2 = 0;
HXDLIN(  63)			::Array< ::String > _g3 = ::Reflect_obj::fields(res);
HXDLIN(  63)			while((_g2 < _g3->length)){
HXLINE(  63)				::String n = _g3->__get(_g2);
HXDLIN(  63)				_g2 = (_g2 + 1);
HXLINE(  64)				lua_pushstring(l,n);
HXLINE(  65)				::llua::Convert_obj::toLua(l,::Reflect_obj::field(res,n));
HXLINE(  66)				lua_settable(l,-3);
            			}
            		}
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Convert_obj,objectToLua,(void))

 ::Dynamic Convert_obj::fromLua( cpp::Reference<lua_State> l,int v){
            	HX_STACKFRAME(&_hx_pos_4b5f1938ae03ba97_74_fromLua)
HXLINE(  76)		 ::Dynamic ret = null();
HXLINE(  78)		switch((int)(lua_type(l,v))){
            			case (int)0: {
HXLINE(  80)				ret = null();
            			}
            			break;
            			case (int)1: {
HXLINE(  82)				ret = (lua_toboolean(l,v) != 0);
            			}
            			break;
            			case (int)3: {
HXLINE(  84)				ret = lua_tonumber(l,v);
            			}
            			break;
            			case (int)4: {
HXLINE(  86)				ret = linc::lua::tostring(l,v);
            			}
            			break;
            			case (int)5: {
HXLINE(  88)				ret = ::llua::Convert_obj::toHaxeObj(l,v);
            			}
            			break;
            			default:{
HXLINE( 102)				ret = null();
HXLINE( 103)				::haxe::Log_obj::trace((HX_("return value not supported\n",48,41,fb,c8) + v),::hx::SourceInfo(HX_("llua/Convert.hx",6e,6a,e3,49),103,HX_("llua.Convert",31,b8,44,19),HX_("fromLua",6e,2a,fd,57)));
            			}
            		}
HXLINE( 106)		return ret;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Convert_obj,fromLua,return )

 ::Dynamic Convert_obj::toHaxeObj( cpp::Reference<lua_State> l,int i){
            	HX_STACKFRAME(&_hx_pos_4b5f1938ae03ba97_164_toHaxeObj)
HXLINE( 165)		int count = 0;
HXLINE( 166)		bool array = true;
HXLINE(   8)		{
HXLINE(   9)			lua_pushnil(l);
HXLINE(  10)			while(true){
HXLINE(  10)				int _hx_tmp;
HXDLIN(  10)				if ((i < 0)) {
HXLINE(  10)					_hx_tmp = (i - 1);
            				}
            				else {
HXLINE(  10)					_hx_tmp = i;
            				}
HXDLIN(  10)				if (!((lua_next(l,_hx_tmp) != 0))) {
HXLINE(  10)					goto _hx_goto_11;
            				}
HXLINE( 168)				{
HXLINE( 169)					if (array) {
HXLINE( 170)						if ((lua_type(l,-2) != 3)) {
HXLINE( 170)							array = false;
            						}
            						else {
HXLINE( 172)							Float index = lua_tonumber(l,-2);
HXLINE( 173)							bool _hx_tmp;
HXDLIN( 173)							if (!((index < 0))) {
HXLINE( 173)								_hx_tmp = (::Std_obj::_hx_int(index) != index);
            							}
            							else {
HXLINE( 173)								_hx_tmp = true;
            							}
HXDLIN( 173)							if (_hx_tmp) {
HXLINE( 173)								array = false;
            							}
            						}
            					}
HXLINE( 176)					count = (count + 1);
            				}
HXLINE(  12)				lua_pop(l,1);
            			}
            			_hx_goto_11:;
            		}
HXLINE( 180)		if ((count == 0)) {
HXLINE( 180)			return  ::Dynamic(::hx::Anon_obj::Create(0));
            		}
            		else {
HXLINE( 182)			if (array) {
HXLINE( 183)				::cpp::VirtualArray v = ::cpp::VirtualArray_obj::__new(0);
HXLINE(   8)				{
HXLINE(   9)					lua_pushnil(l);
HXLINE(  10)					while(true){
HXLINE(  10)						int _hx_tmp;
HXDLIN(  10)						if ((i < 0)) {
HXLINE(  10)							_hx_tmp = (i - 1);
            						}
            						else {
HXLINE(  10)							_hx_tmp = i;
            						}
HXDLIN(  10)						if (!((lua_next(l,_hx_tmp) != 0))) {
HXLINE(  10)							goto _hx_goto_12;
            						}
HXLINE( 184)						{
HXLINE( 185)							int index = (::Std_obj::_hx_int(lua_tonumber(l,-2)) - 1);
HXLINE( 186)							 ::Dynamic ret = null();
HXDLIN( 186)							switch((int)(lua_type(l,-1))){
            								case (int)0: {
HXLINE( 186)									ret = null();
            								}
            								break;
            								case (int)1: {
HXLINE( 186)									ret = (lua_toboolean(l,-1) != 0);
            								}
            								break;
            								case (int)3: {
HXLINE( 186)									ret = lua_tonumber(l,-1);
            								}
            								break;
            								case (int)4: {
HXLINE( 186)									ret = linc::lua::tostring(l,-1);
            								}
            								break;
            								case (int)5: {
HXLINE( 186)									ret = ::llua::Convert_obj::toHaxeObj(l,-1);
            								}
            								break;
            								default:{
HXLINE( 186)									ret = null();
HXDLIN( 186)									::haxe::Log_obj::trace((HX_("return value not supported\n",48,41,fb,c8) + -1),::hx::SourceInfo(HX_("llua/Convert.hx",6e,6a,e3,49),103,HX_("llua.Convert",31,b8,44,19),HX_("fromLua",6e,2a,fd,57)));
            								}
            							}
HXDLIN( 186)							v->set(index,ret);
            						}
HXLINE(  12)						lua_pop(l,1);
            					}
            					_hx_goto_12:;
            				}
HXLINE( 188)				return v;
            			}
            			else {
HXLINE( 190)				 ::Dynamic v =  ::Dynamic(::hx::Anon_obj::Create(0));
HXLINE(   8)				{
HXLINE(   9)					lua_pushnil(l);
HXLINE(  10)					while(true){
HXLINE(  10)						int _hx_tmp;
HXDLIN(  10)						if ((i < 0)) {
HXLINE(  10)							_hx_tmp = (i - 1);
            						}
            						else {
HXLINE(  10)							_hx_tmp = i;
            						}
HXDLIN(  10)						if (!((lua_next(l,_hx_tmp) != 0))) {
HXLINE(  10)							goto _hx_goto_13;
            						}
HXLINE( 192)						{
HXLINE( 192)							int _g = lua_type(l,-2);
HXDLIN( 192)							{
HXLINE( 193)								int t = _g;
HXLINE( 192)								if ((t == 4)) {
HXLINE( 193)									::String key = linc::lua::tostring(l,-2);
HXDLIN( 193)									 ::Dynamic ret = null();
HXDLIN( 193)									switch((int)(lua_type(l,-1))){
            										case (int)0: {
HXLINE( 193)											ret = null();
            										}
            										break;
            										case (int)1: {
HXLINE( 193)											ret = (lua_toboolean(l,-1) != 0);
            										}
            										break;
            										case (int)3: {
HXLINE( 193)											ret = lua_tonumber(l,-1);
            										}
            										break;
            										case (int)4: {
HXLINE( 193)											ret = linc::lua::tostring(l,-1);
            										}
            										break;
            										case (int)5: {
HXLINE( 193)											ret = ::llua::Convert_obj::toHaxeObj(l,-1);
            										}
            										break;
            										default:{
HXLINE( 193)											ret = null();
HXDLIN( 193)											::haxe::Log_obj::trace((HX_("return value not supported\n",48,41,fb,c8) + -1),::hx::SourceInfo(HX_("llua/Convert.hx",6e,6a,e3,49),103,HX_("llua.Convert",31,b8,44,19),HX_("fromLua",6e,2a,fd,57)));
            										}
            									}
HXDLIN( 193)									 ::Dynamic value = ret;
HXDLIN( 193)									::Reflect_obj::setField(v,key,value);
            								}
            								else {
HXLINE( 194)									int t = _g;
HXDLIN( 194)									if ((t == 3)) {
HXLINE( 194)										::String key = ::Std_obj::string(lua_tonumber(l,-2));
HXDLIN( 194)										 ::Dynamic ret = null();
HXDLIN( 194)										switch((int)(lua_type(l,-1))){
            											case (int)0: {
HXLINE( 194)												ret = null();
            											}
            											break;
            											case (int)1: {
HXLINE( 194)												ret = (lua_toboolean(l,-1) != 0);
            											}
            											break;
            											case (int)3: {
HXLINE( 194)												ret = lua_tonumber(l,-1);
            											}
            											break;
            											case (int)4: {
HXLINE( 194)												ret = linc::lua::tostring(l,-1);
            											}
            											break;
            											case (int)5: {
HXLINE( 194)												ret = ::llua::Convert_obj::toHaxeObj(l,-1);
            											}
            											break;
            											default:{
HXLINE( 194)												ret = null();
HXDLIN( 194)												::haxe::Log_obj::trace((HX_("return value not supported\n",48,41,fb,c8) + -1),::hx::SourceInfo(HX_("llua/Convert.hx",6e,6a,e3,49),103,HX_("llua.Convert",31,b8,44,19),HX_("fromLua",6e,2a,fd,57)));
            											}
            										}
HXDLIN( 194)										 ::Dynamic value = ret;
HXDLIN( 194)										::Reflect_obj::setField(v,key,value);
            									}
            								}
            							}
            						}
HXLINE(  12)						lua_pop(l,1);
            					}
            					_hx_goto_13:;
            				}
HXLINE( 197)				return v;
            			}
            		}
HXLINE( 180)		return null();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Convert_obj,toHaxeObj,return )


Convert_obj::Convert_obj()
{
}

bool Convert_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"toLua") ) { outValue = toLua_dyn(); return true; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"fromLua") ) { outValue = fromLua_dyn(); return true; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"toHaxeObj") ) { outValue = toHaxeObj_dyn(); return true; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"arrayToLua") ) { outValue = arrayToLua_dyn(); return true; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"objectToLua") ) { outValue = objectToLua_dyn(); return true; }
	}
	return false;
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *Convert_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *Convert_obj_sStaticStorageInfo = 0;
#endif

::hx::Class Convert_obj::__mClass;

static ::String Convert_obj_sStaticFields[] = {
	HX_("toLua",fd,0a,14,14),
	HX_("arrayToLua",a4,22,41,0e),
	HX_("objectToLua",be,27,43,83),
	HX_("fromLua",6e,2a,fd,57),
	HX_("toHaxeObj",36,e7,fe,37),
	::String(null())
};

void Convert_obj::__register()
{
	Convert_obj _hx_dummy;
	Convert_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("llua.Convert",31,b8,44,19);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Convert_obj::__GetStatic;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(Convert_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = ::hx::TCanCast< Convert_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Convert_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Convert_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace llua
